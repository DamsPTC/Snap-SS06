/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105a27ab0; end: 105a27b5b; -[SCStoriesSnapchatterFetcher fetchUsernamesWithUserIds:fetchSource:completionQueue:completion:] */

void FUN_105a27ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_6);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105a27b5c;
  puStack_50 = &UNK_1108ce788;
  uStack_48 = param_6;
  _objc_retain(param_6);
  func_0x00010bfaa4c0(param_1,param_2,param_3,param_4,param_5,&puStack_68);
  _objc_release(uStack_48);
  _objc_release(param_6);
  return;
}



/* Entry: 105a27b5c; end: 105a27bcb;  */

void FUN_105a27b5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010bd869d0(param_2,&PTR___NSConcreteGlobalBlock_1108ce748,
                      &PTR___NSConcreteGlobalBlock_1108ce768);
  (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105a27bcc; end: 105a27bf3;  */

void FUN_105a27bcc(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105a27bf4; end: 105a27bfb;  */

void FUN_105a27bf4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c294430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_username_112682b30);
  return;
}



/* Entry: 105a27bfc; end: 105a27cab; -[SCStoriesSnapchatterFetcher fetchSnapchattersWithUserIds:fetchSource:completionQueue:completion:] */

void FUN_105a27bfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c26f320();
  func_0x00010be144a0(param_1,param_2,param_3,param_4,param_5,param_6);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a27cac; end: 105a27e87; -[SCStoriesSnapchatterFetcher _fetchSnapchattersWithUserIds:fetchSource:fetchStartTime:completionQueue:completion:] */

void FUN_105a27cac(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_68,param_2);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105a27e88;
  puStack_a0 = &UNK_1108ce7e8;
  _objc_copyWeak(auStack_78,auStack_68);
  uStack_70 = param_1;
  _objc_retain(param_5);
  uStack_98 = param_5;
  _objc_retain(param_6);
  uStack_90 = param_6;
  _objc_retain(param_7);
  uStack_80 = param_7;
  _objc_retain(param_4);
  ppuVar1 = &puStack_b8;
  uStack_88 = param_4;
  _objc_retainBlock(ppuVar1);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010bf529e0(param_4);
  func_0x00010c0b0040(uVar3);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c244e80(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(ppuVar1);
  _objc_release(uStack_88);
  _objc_release(uStack_80);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105a27e88; end: 105a2801b;  */

void FUN_105a27e88(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be551c0(*(undefined8 *)(param_1 + 0x48));
  _objc_release(lVar1);
  if (param_3 == 0) {
    uVar4 = param_2;
    func_0x00010050471c(param_2,&PTR___NSConcreteGlobalBlock_110ad45a0,
                        &PTR___NSConcreteGlobalBlock_110ad45c0);
    lVar1 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar3);
    func_0x00010be29a40(uVar5,lVar1);
    _objc_release(lVar1);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105a2801c;
    puStack_70 = &UNK_110849530;
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar2);
    uStack_68 = uVar2;
    func_0x00010007380c(uVar4,&puStack_88);
    uVar4 = uStack_68;
  }
  _objc_release(uVar4);
  _objc_release(param_2);
  return;
}



/* Entry: 105a2801c; end: 105a2802f;  */

void FUN_105a2801c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105a2802c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 105a28030; end: 105a280f7;  */

void FUN_105a28030(long param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_58 = FUN_105a280f8;
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



/* Entry: 105a280f8; end: 105a2810b;  */

void FUN_105a280f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105a28108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105a2810c; end: 105a282ff; -[SCStoriesSnapchatterFetcher _handleFetchedLocalSnapchattersWithUserIds:snapchatterByUserId:fetchSource:fetchStartTime:completion:] */

void FUN_105a2810c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  ppuVar3 = &puStack_b0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_4;
  func_0x00010bf529e0();
  lVar2 = param_5;
  func_0x00010bf529e0();
  if (lVar1 == lVar2) {
    func_0x00010c0affc0(*(undefined8 *)(param_2 + 0x30));
    (**(code **)(param_7 + 0x10))(param_7,param_5,0);
  }
  else {
    lVar1 = param_4;
    func_0x00010c0d3c80(param_4);
    lVar2 = param_5;
    func_0x00010bf002e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d500(lVar1);
    _objc_release(lVar2);
    _objc_initWeak(auStack_68,param_2);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_105a28300;
    puStack_98 = &UNK_1108ce818;
    _objc_retain(param_7);
    lStack_80 = param_7;
    _objc_retain(param_5);
    lStack_90 = param_5;
    _objc_copyWeak(auStack_78,auStack_68);
    _objc_retain(param_6);
    uStack_88 = param_6;
    uStack_70 = param_1;
    _objc_retainBlock(&puStack_b0);
    func_0x00010be12360(param_2);
    _objc_release(ppuVar3);
    _objc_release(uStack_88);
    _objc_destroyWeak(auStack_78);
    _objc_release(lStack_90);
    _objc_release(lStack_80);
    _objc_destroyWeak(auStack_68);
    _objc_release(lVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105a28300; end: 105a284d3;  */

void FUN_105a28300(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_70;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
              (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),param_2);
  }
  else {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    uStack_60 = 0x105a28414;
    puStack_58 = &UNK_1108ce7b8;
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar3);
    uStack_48 = uVar3;
    _objc_retain(param_2);
    uStack_50 = param_2;
    _objc_retainBlock(&puStack_70);
    lVar1 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar1);
    func_0x00010be29a00(*(undefined8 *)(param_1 + 0x40));
    _objc_release(lVar1);
    _objc_release(ppuVar2);
    _objc_release(uStack_50);
    _objc_release(uStack_48);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105a284d4; end: 105a287eb; -[SCStoriesSnapchatterFetcher _fetchLocalNonExistingUsersWithUserIds:completion:] */

void FUN_105a284d4(undefined8 param_1,long param_2,undefined8 param_3,undefined *param_4,
                  undefined1 *param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puStack_270;
  undefined8 uStack_268;
  code *pcStack_260;
  undefined *puStack_258;
  undefined1 *puStack_250;
  long lStack_248;
  undefined1 auStack_168 [256];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = *(undefined **)(param_2 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x0001084e7fd4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010bf529e0();
  if (puVar2 == (undefined *)0x0) {
    pcVar8 = *(code **)(param_5 + 0x10);
    puVar2 = (undefined *)0x0;
    puVar4 = param_4;
  }
  else {
    puVar4 = puVar3;
    func_0x00010bf529e0();
    puVar10 = param_4;
    func_0x00010bf529e0();
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    if (puVar4 != puVar10) {
      func_0x00010bf529e0(puVar3);
      func_0x00010c225ec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar3);
      puVar4 = puVar3;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar4 != (undefined *)0x0) {
        puVar10 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar3);
          }
          uVar9 = *(undefined8 *)((long)puVar10 * 8);
          func_0x00010c2923e0(uVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          _objc_release(uVar9);
          puVar10 = puVar10 + 1;
        } while (puVar4 != puVar10);
        puVar4 = puVar3;
        func_0x00010bf52a60();
      }
      _objc_release(puVar3);
      puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf529e0(param_4);
      func_0x00010bf529e0(puVar3);
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      param_1 = 0;
      _objc_retain(param_4);
      puVar7 = auStack_168;
      param_6 = 0x10;
      puVar4 = param_4;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar4 != (undefined *)0x0) {
        puVar11 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(param_4);
          }
          puVar5 = puVar2;
          func_0x00010bf4b900();
          if (((ulong)puVar5 & 1) == 0) {
            func_0x00010befa120(puVar10);
          }
          puVar11 = puVar11 + 1;
        } while (puVar4 != puVar11);
        puVar7 = auStack_168;
        param_6 = 0x10;
        puVar4 = param_4;
        func_0x00010bf52a60();
      }
      _objc_release(param_4);
      puVar11 = puVar2;
      func_0x00010bf00560();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar10;
      (**(code **)(param_5 + 0x10))(param_5,puVar11);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar2);
      goto LAB_105a28798;
    }
    pcVar8 = *(code **)(param_5 + 0x10);
    puVar2 = param_4;
    puVar4 = (undefined *)0x0;
  }
  (*pcVar8)(param_5,puVar2);
LAB_105a28798:
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  ppuVar6 = &puStack_270;
  _objc_retain(puVar4);
  _objc_retain(puVar7);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar9 = *(undefined8 *)(param_4 + 0x30);
  func_0x00010bf529e0(puVar4);
  func_0x00010c0ae000(uVar9);
  puVar3 = puVar4;
  func_0x00010bf529e0();
  if (puVar3 == (undefined *)0x0) {
    (**(code **)(param_7 + 0x10))(param_7,puVar7,0);
  }
  else {
    puStack_270 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_268 = 0xc2000000;
    pcStack_260 = FUN_105a2893c;
    puStack_258 = &UNK_1108ce848;
    _objc_retain(puVar7);
    puStack_250 = puVar7;
    _objc_retain(param_7);
    lStack_248 = param_7;
    _objc_retainBlock(&puStack_270);
    func_0x00010be13900(param_1,param_4);
    _objc_release(ppuVar6);
    _objc_release(lStack_248);
    _objc_release(puStack_250);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(puVar7);
  _objc_release(puVar4);
  return;
}



/* Entry: 105a287ec; end: 105a2893b; -[SCStoriesSnapchatterFetcher _handleFetchedLocalNonExistingUsersWithUserIds:snapchatterByUserId:fetchSource:fetchStartTime:completion:] */

void FUN_105a287ec(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  ppuVar2 = &puStack_80;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010bf529e0(param_4);
  func_0x00010c0ae000(uVar3);
  lVar1 = param_4;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    (**(code **)(param_7 + 0x10))(param_7,param_5,0);
  }
  else {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_105a2893c;
    puStack_68 = &UNK_1108ce848;
    _objc_retain(param_5);
    uStack_60 = param_5;
    _objc_retain(param_7);
    lStack_58 = param_7;
    _objc_retainBlock(&puStack_80);
    func_0x00010be13900(param_1,param_2);
    _objc_release(ppuVar2);
    _objc_release(lStack_58);
    _objc_release(uStack_60);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105a2893c; end: 105a28aeb;  */

void FUN_105a2893c(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined1 *param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  code *pcStack_1d0;
  undefined *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [8];
  undefined8 uStack_1a0;
  undefined1 auStack_198 [8];
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar5 = param_3;
  func_0x00010bf529e0();
  uVar4 = param_4;
  if (lVar5 == 0) {
    (**(code **)(*(long *)(param_2 + 0x28) + 0x10))
              (*(long *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x20));
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c0d3c80();
    param_1 = 0;
    _objc_retain(param_3);
    param_5 = auStack_e8;
    param_6 = 0x10;
    lVar5 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar5 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        uVar6 = *(undefined8 *)(lVar7 * 8);
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar2);
        _objc_release(uVar6);
        lVar7 = lVar7 + 1;
      } while (lVar5 != lVar7);
      param_5 = auStack_e8;
      param_6 = 0x10;
      lVar5 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    lVar5 = *(long *)(param_2 + 0x28);
    uVar6 = uVar2;
    func_0x00010bf51e00();
    (**(code **)(lVar5 + 0x10))(lVar5,uVar6);
    _objc_release(uVar6);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_1e0;
  _objc_retain(uVar4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_198,param_3);
  puStack_1e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d8 = 0xc2000000;
  pcStack_1d0 = FUN_105a28c88;
  puStack_1c8 = &UNK_1108ce878;
  _objc_copyWeak(auStack_1a8,auStack_198);
  uStack_1a0 = param_1;
  _objc_retain(param_5);
  puStack_1c0 = param_5;
  _objc_retain(param_6);
  uStack_1b0 = param_6;
  _objc_retain(uVar4);
  uStack_1b8 = uVar4;
  _objc_retainBlock(&puStack_1e0);
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_3 + 8);
  func_0x00010c11de00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c244ea0(uVar2);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(ppuVar3);
  _objc_release(uStack_1b8);
  _objc_release(uStack_1b0);
  _objc_release(puStack_1c0);
  _objc_destroyWeak(auStack_1a8);
  _objc_destroyWeak(auStack_198);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar4);
  return;
}



/* Entry: 105a28aec; end: 105a28c87; -[SCStoriesSnapchatterFetcher _fetchRemoteSnapchattersWithUserIds:fetchSource:fetchStartTime:completion:] */

void FUN_105a28aec(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  ppuVar1 = &puStack_b0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_68,param_2);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_105a28c88;
  puStack_98 = &UNK_1108ce878;
  _objc_copyWeak(auStack_78,auStack_68);
  uStack_70 = param_1;
  _objc_retain(param_5);
  uStack_90 = param_5;
  _objc_retain(param_6);
  uStack_80 = param_6;
  _objc_retain(param_4);
  uStack_88 = param_4;
  _objc_retainBlock(&puStack_b0);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 8);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c244ea0(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_88);
  _objc_release(uStack_80);
  _objc_release(uStack_90);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105a28c88; end: 105a28eaf;  */

void FUN_105a28c88(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  func_0x00010be551c0(*(undefined8 *)(param_1 + 0x40));
  _objc_release(lVar2);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  if (param_3 == 0) {
    func_0x00010be57a00(lVar2);
    _objc_release(lVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c225c20(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    lVar2 = param_2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_2);
        }
        uVar5 = *(undefined8 *)(lVar7 * 8);
        func_0x00010c2923e0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d360(puVar3);
        _objc_release(uVar5);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = param_2;
      func_0x00010bf52a60();
    }
    _objc_release(param_2);
    puVar4 = puVar3;
    func_0x00010bf00560(puVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bfd1980();
    _objc_release(lVar2);
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  else {
    func_0x00010be57a00(lVar2);
    _objc_release(lVar2);
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),param_2,0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8500();
  _objc_release(uVar5);
  return;
}



/* Entry: 105a28eb0; end: 105a28f33; -[SCStoriesSnapchatterFetcher removeExpiredNonexistingUsers] */

void FUN_105a28eb0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8500();
  _objc_release(uVar1);
  return;
}



/* Entry: 105a28f34; end: 105a28f3f;  */

undefined *** FUN_105a28f34(long param_1,undefined ***param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined1 *puVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  undefined1 **ppuVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined1 **ppuVar16;
  undefined1 **unaff_x23;
  undefined8 *puVar17;
  long lVar18;
  undefined ***pppuVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  byte bStack_4a2;
  byte bStack_4a1;
  double dStack_4a0;
  double dStack_498;
  undefined ***pppuStack_490;
  undefined ***pppuStack_488;
  undefined ***pppuStack_480;
  undefined ***pppuStack_478;
  undefined1 ***pppuStack_470;
  undefined *puStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined1 uStack_441;
  undefined **appuStack_440 [9];
  undefined1 auStack_3f8 [24];
  long *plStack_3e0;
  long *plStack_3d8;
  undefined1 *puStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  ulong uStack_390;
  long lStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_348;
  undefined ***pppuStack_340;
  undefined1 *puStack_338;
  undefined1 *puStack_330;
  undefined8 uStack_328;
  long lStack_2b8;
  double dStack_2b0;
  double dStack_2a8;
  undefined1 **ppuStack_250;
  undefined *puStack_248;
  undefined4 uStack_238;
  undefined1 uStack_231;
  long lStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 uStack_1c0;
  undefined1 uStack_1bf;
  undefined4 uStack_1bc;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined ***pppuStack_198;
  undefined1 *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_13c;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  dVar20 = *(double *)(param_1 + 0x20);
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar21 = dVar20;
  _objc_retain();
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  _objc_release(puVar4);
  dVar22 = 0.0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  lStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  puStack_170 = (undefined8 *)0x0;
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126d9e78);
  if (param_2 == (undefined ***)0x0) {
    uStack_f0 = 0;
    dVar22 = 0.0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_120,param_2);
  }
  lStack_138 = 0;
  lStack_130 = 0;
  uStack_128 = 0;
  uStack_13c = 0;
  puVar5 = &uStack_120;
  func_0x00010054c81c(puVar5,&lStack_138,&uStack_13c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_138 != 0) {
    lStack_130 = lStack_138;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_f8);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  _objc_release(param_2);
  puVar6 = puVar5;
  func_0x00010bf52a60();
  if (puVar6 != (undefined8 *)0x0) {
    unaff_x23 = (undefined1 **)*puStack_170;
    do {
      puVar17 = (undefined8 *)0x0;
      do {
        if ((undefined1 **)*puStack_170 != unaff_x23) {
          _objc_enumerationMutation(puVar5);
        }
        uVar15 = *(undefined8 *)(lStack_178 + (long)puVar17 * 8);
        func_0x00010bf5aac0(uVar15);
        dVar22 = dVar20 + dVar22;
        if (dVar22 <= dVar21) {
          puVar4 = PTR_PTR_1126d9e80;
          func_0x00010851a828(PTR_PTR_1126d9e80,uVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25ed40(param_2);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar4);
        }
        puVar17 = (undefined8 *)((long)puVar17 + 1);
      } while (puVar6 != puVar17);
      puVar6 = puVar5;
      func_0x00010bf52a60();
    } while (puVar6 != (undefined8 *)0x0);
  }
  _objc_release(puVar5);
  pppuVar7 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pppuVar7;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(param_2);
  pppuVar8 = pppuVar7;
  __Unwind_Resume();
  puStack_188 = &SUB_1084e87f0;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1a0 = puVar5;
  pppuStack_198 = param_2;
  puStack_190 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126d9e88);
  if (pppuVar8 == (undefined ***)0x0) {
    uStack_1d0 = 0;
    dVar22 = 0.0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1f8 = 0;
    ppuStack_200 = (undefined **)0x0;
  }
  else {
    func_0x00010bfa6be0(&ppuStack_200,pppuVar8);
  }
  puVar9 = &uStack_231;
  func_0x0001085261d4();
  uStack_1c8 = *(undefined8 *)(puVar9 + 0x10);
  uStack_1c0 = puVar9[0x19];
  uStack_1bf = puVar9[0x18];
  uStack_1b0 = *(undefined8 *)(puVar9 + 0x28);
  uStack_1bc = 1;
  puStack_1b8 = &UNK_1084e8da8;
  lStack_228 = 0;
  uStack_220 = 0;
  lStack_230 = 0;
  func_0x000100c435d0(&lStack_230,&uStack_1c8,&lStack_1a8,1);
  func_0x000100c436b8(&ppuStack_218,&lStack_230);
  uStack_238 = 1;
  pppuVar19 = &ppuStack_200;
  pppuVar12 = &ppuStack_218;
  ppuVar13 = (undefined1 **)&uStack_238;
  func_0x00010054c81c(pppuVar19);
  _objc_retainAutoreleasedReturnValue();
  if (ppuStack_218 != (undefined **)0x0) {
    ppuStack_210 = ppuStack_218;
    __ZdlPv();
  }
  if (lStack_230 != 0) {
    lStack_228 = lStack_230;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_1d8);
  _objc_release(uStack_1e8);
  _objc_release(uStack_1f0);
  pppuVar10 = pppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar19);
    return pppuVar19;
  }
  ___stack_chk_fail();
  func_0x000104d96620(&ppuStack_200);
  _objc_release(pppuVar8);
  __Unwind_Resume();
  puStack_248 = &UNK_1084e8970;
  lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar8 = pppuVar12;
  dVar23 = dVar22;
  dStack_2b0 = dVar21;
  dStack_2a8 = dVar20;
  ppuStack_250 = &puStack_190;
  _objc_retain();
  _objc_retain(pppuVar12);
  pppuVar19 = pppuVar12;
  func_0x00010c08fa60();
  if (pppuVar19 != (undefined ***)0x0) {
    _objc_retain(pppuVar10);
    _objc_retain(pppuVar12);
    pppuVar19 = pppuVar12;
    func_0x00010c08fa60();
    if (pppuVar19 == (undefined ***)0x0) {
      ppuVar16 = (undefined1 **)0x0;
    }
    else {
      _objc_opt_class(PTR_PTR_1126d9e88);
      if (pppuVar10 == (undefined ***)0x0) {
        uStack_3a0 = 0;
        uStack_3b8 = 0;
        uStack_3c0 = 0;
        uStack_3a8 = 0;
        uStack_3b0 = 0;
        uStack_3c8 = 0;
        puStack_3d0 = (undefined1 *)0x0;
      }
      else {
        func_0x00010bfa6be0(&puStack_3d0,pppuVar10);
      }
      puVar9 = &uStack_441;
      func_0x00010852605c(puVar9);
      pppuVar7 = (undefined ***)PTR__OBJC_CLASS___NSArray_1126ae530;
      pppuStack_340 = pppuVar12;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      uStack_458 = 0;
      uStack_450 = 0;
      uStack_460 = 0;
      pppuVar8 = pppuVar7;
      func_0x00010bf529e0(pppuVar7);
      func_0x000107c281a4(&uStack_460,pppuVar8);
      dVar23 = 0.0;
      lStack_388 = 0;
      uStack_390 = 0;
      uStack_378 = 0;
      plStack_380 = (long *)0x0;
      uStack_368 = 0;
      uStack_370 = 0;
      uStack_358 = 0;
      uStack_360 = 0;
      _objc_retain(pppuVar7);
      pppuVar8 = pppuVar7;
      func_0x00010bf52a60();
      if (pppuVar8 != (undefined ***)0x0) {
        lVar18 = *plStack_380;
        do {
          pppuVar19 = (undefined ***)0x0;
          do {
            if (*plStack_380 != lVar18) {
              _objc_enumerationMutation(pppuVar7);
            }
            uVar15 = *(undefined8 *)(lStack_388 + (long)pppuVar19 * 8);
            _objc_retain(uVar15);
            uStack_348 = uVar15;
            func_0x000107c281a8(&uStack_460,&uStack_348);
            _objc_release(uStack_348);
            pppuVar19 = (undefined ***)((long)pppuVar19 + 1);
          } while (pppuVar8 != pppuVar19);
          pppuVar8 = pppuVar7;
          func_0x00010bf52a60();
        } while (pppuVar8 != (undefined ***)0x0);
      }
      _objc_release(pppuVar7);
      _objc_release(pppuVar7);
      func_0x000107c281a0(appuStack_440,0xc,puVar9,&uStack_460);
      puStack_338 = (undefined1 *)0x0;
      puStack_330 = (undefined1 *)0x0;
      uStack_328 = 0;
      uStack_390 = uStack_390 & 0xffffffff00000000;
      unaff_x23 = &puStack_3d0;
      pppuVar8 = appuStack_440;
      ppuVar13 = &puStack_338;
      func_0x000107c310cc(unaff_x23,pppuVar8,ppuVar13,&uStack_390);
      _objc_retainAutoreleasedReturnValue();
      ppuVar16 = unaff_x23;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x23);
      if (puStack_338 != (undefined1 *)0x0) {
        puStack_330 = puStack_338;
        __ZdlPv();
      }
      plVar3 = plStack_3d8;
      appuStack_440[0] = &PTR_FUN_110862700;
      plStack_3d8 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      plVar3 = plStack_3e0;
      plStack_3e0 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      puStack_338 = auStack_3f8;
      func_0x000107c27dd4(&puStack_338);
      puStack_338 = (undefined1 *)&uStack_460;
      func_0x000107c27dd4(&puStack_338);
      _objc_release(pppuVar7);
      func_0x000107c27da8(&uStack_3a8);
      _objc_release(uStack_3b8);
      _objc_release(uStack_3c0);
    }
    _objc_release(pppuVar12);
    _objc_release(pppuVar10);
    if (ppuVar16 == (undefined1 **)0x0) {
      pppuVar7 = (undefined ***)PTR_PTR_1126d9e88;
      _objc_alloc();
      dVar23 = dVar22;
      func_0x00010c047cc0();
      unaff_x23 = (undefined1 **)PTR_PTR_1126d9e90;
      pppuVar8 = pppuVar7;
      func_0x000108526440(PTR_PTR_1126d9e90,pppuVar7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = unaff_x23;
      func_0x00010c25ed40(pppuVar10);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(unaff_x23);
      _objc_release(pppuVar7);
    }
    _objc_release(ppuVar16);
  }
  pppuVar19 = pppuVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pppuVar10);
    return pppuVar10;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x23);
  _objc_release(pppuVar7);
  _objc_release(pppuVar12);
  _objc_release(pppuVar10);
  __Unwind_Resume(pppuVar19);
  pppuVar11 = pppuVar19;
  func_0x000104bd46a0(pppuVar19);
  puStack_468 = &UNK_1084e8da8;
  dStack_4a0 = dVar21;
  dStack_498 = dVar22;
  pppuStack_490 = pppuVar19;
  pppuStack_488 = pppuVar7;
  pppuStack_480 = pppuVar12;
  pppuStack_478 = pppuVar10;
  pppuStack_470 = &ppuStack_250;
  _objc_retain();
  _objc_retain(pppuVar8);
  (*(code *)ppuVar13)(pppuVar11,&bStack_4a1);
  dVar21 = dVar23;
  (*(code *)ppuVar13)(pppuVar8,&bStack_4a2);
  uVar14 = 2;
  uVar1 = uVar14;
  if (bStack_4a2 == 0) {
    uVar1 = 0;
  }
  if (bStack_4a1 == 0) {
    uVar1 = 1;
  }
  if (dVar21 < dVar23) {
    uVar14 = 1;
  }
  uVar2 = 0;
  if (dVar21 <= dVar23) {
    uVar2 = uVar14;
  }
  uVar14 = uVar1;
  if ((bStack_4a2 & 1) == 0) {
    uVar14 = uVar2;
  }
  if ((bStack_4a1 & 1) == 0) {
    uVar1 = uVar14;
  }
  _objc_release(pppuVar8);
  _objc_release(pppuVar11);
  return (undefined ***)(ulong)uVar1;
}



/* Entry: 105a28f40; end: 105a28f47; -[SCStoriesSnapchatterFetcher _logRemoteSnapchatterFetchResult:fetchSource:] */

void FUN_105a28f40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0affd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_logSnapchatterFetchResult_fetchS_112609a00);
  return;
}



/* Entry: 105a28f48; end: 105a29033; -[SCStoriesSnapchatterFetcher handleNonexistingSnapchatters:fetchSource:] */

void FUN_105a28f48(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105a29034;
    puStack_40 = &UNK_11085adb8;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c0f8500(uVar2,param_2,&puStack_58,0,0);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    lVar1 = param_3;
    func_0x00010bf529e0(param_3);
    func_0x00010c0aaf40(uVar2,param_2,lVar1,param_4);
    _objc_release(lStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105a29034; end: 105a29043;  */

undefined *** FUN_105a29034(undefined *param_1,long param_2,undefined ***param_3)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  undefined ***pppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined ***pppuVar7;
  undefined1 *puVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  long lVar11;
  undefined ***pppuVar12;
  undefined ***pppuVar13;
  uint uVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined ***unaff_x23;
  undefined **unaff_x24;
  undefined8 uVar18;
  undefined **unaff_x25;
  long unaff_x26;
  undefined ***pppuVar19;
  undefined **unaff_x27;
  undefined **unaff_x28;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  byte bStack_602;
  byte bStack_601;
  double dStack_600;
  double dStack_5f8;
  undefined ***pppuStack_5f0;
  undefined ***pppuStack_5e8;
  undefined ***pppuStack_5e0;
  undefined ***pppuStack_5d8;
  undefined1 ****ppppuStack_5d0;
  undefined *puStack_5c8;
  undefined *puStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined1 uStack_5a1;
  undefined **appuStack_5a0 [9];
  undefined *apuStack_558 [3];
  long *plStack_540;
  long *plStack_538;
  undefined **ppuStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  ulong uStack_4f0;
  long lStack_4e8;
  long *plStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4a8;
  undefined ***pppuStack_4a0;
  undefined **ppuStack_498;
  undefined **ppuStack_490;
  undefined8 uStack_488;
  long lStack_418;
  double dStack_410;
  double dStack_408;
  undefined **ppuStack_400;
  undefined **ppuStack_3f8;
  long lStack_3f0;
  undefined **ppuStack_3e8;
  undefined **ppuStack_3e0;
  undefined ***pppuStack_3d8;
  undefined *puStack_3d0;
  undefined ***pppuStack_3c8;
  undefined ***pppuStack_3c0;
  undefined ***pppuStack_3b8;
  undefined1 ***pppuStack_3b0;
  undefined *puStack_3a8;
  undefined4 uStack_398;
  undefined1 uStack_391;
  long lStack_390;
  long lStack_388;
  undefined8 uStack_380;
  undefined **ppuStack_378;
  undefined **ppuStack_370;
  undefined **ppuStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined1 uStack_320;
  undefined1 uStack_31f;
  undefined4 uStack_31c;
  undefined *puStack_318;
  undefined8 uStack_310;
  long lStack_308;
  undefined **ppuStack_300;
  undefined ***pppuStack_2f8;
  undefined1 **ppuStack_2f0;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined4 uStack_29c;
  long lStack_298;
  long lStack_290;
  undefined8 uStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_1c8;
  undefined1 *puStack_170;
  undefined *puStack_168;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_88;
  long lStack_80;
  
  lVar11 = *(long *)(param_2 + 0x20);
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lStack_158 = lVar11;
  _objc_retain(lVar11);
  puVar16 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new();
  func_0x00010c26f320();
  _objc_release(puVar16);
  lVar11 = lStack_158;
  dVar20 = 0.0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  _objc_retain(lStack_158);
  func_0x00010bf52a60();
  if (lVar11 != 0) {
    unaff_x26 = *plStack_140;
    unaff_x27 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    unaff_x28 = &PTR_PTR_1126d9000;
    do {
      lVar15 = 0;
      do {
        if (*plStack_140 != unaff_x26) {
          _objc_enumerationMutation(lStack_158);
        }
        puVar16 = *(undefined **)(lStack_148 + lVar15 * 8);
        _objc_retain(param_3);
        _objc_retain(puVar16);
        puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_88 = puVar16;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        pppuVar4 = param_3;
        func_0x0001084e7fd4(param_3,puVar17);
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = pppuVar4;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(pppuVar4);
        _objc_release(puVar17);
        unaff_x25 = (undefined **)PTR_PTR_1126d9e80;
        if (unaff_x23 == (undefined ***)0x0) {
          func_0x00010851a318(PTR_PTR_1126d9e80,0);
          _objc_retainAutoreleasedReturnValue();
          if (unaff_x25 != (undefined **)0x0) {
            _objc_setProperty_nonatomic_copy(unaff_x25);
            unaff_x24 = unaff_x25;
            goto code_r0x0001084e841c;
          }
code_r0x0001084e8468:
          unaff_x24 = (undefined **)0x0;
        }
        else {
          func_0x00010851a498(PTR_PTR_1126d9e80,unaff_x23);
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = unaff_x25;
          if (unaff_x25 == (undefined **)0x0) goto code_r0x0001084e8468;
code_r0x0001084e841c:
          unaff_x24[4] = param_1;
          unaff_x25 = unaff_x24;
        }
        func_0x00010c25ed40(param_3);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(unaff_x24);
        _objc_release(unaff_x23);
        _objc_release(puVar16);
        _objc_release(param_3);
        lVar15 = lVar15 + 1;
      } while (lVar11 != lVar15);
      lVar11 = lStack_158;
      func_0x00010bf52a60();
    } while (lVar11 != 0);
  }
  _objc_release(lStack_158);
  _objc_release(lStack_158);
  pppuVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return pppuVar4;
  }
  ___stack_chk_fail();
  _objc_release(lStack_158);
  _objc_release(lStack_158);
  _objc_release(param_3);
  __Unwind_Resume();
  puStack_168 = &LAB_1084e8580;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar21 = dVar20;
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_retain();
  puVar17 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  _objc_release(puVar17);
  dVar22 = 0.0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  lStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2c8 = 0;
  puStack_2d0 = (undefined8 *)0x0;
  _objc_retain(pppuVar4);
  _objc_opt_class(PTR_PTR_1126d9e78);
  if (pppuVar4 == (undefined ***)0x0) {
    uStack_250 = 0;
    dVar22 = 0.0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_278 = 0;
    puStack_280 = (undefined *)0x0;
  }
  else {
    func_0x00010bfa6be0(&puStack_280,pppuVar4);
  }
  lStack_298 = 0;
  lStack_290 = 0;
  uStack_288 = 0;
  uStack_29c = 0;
  ppuVar5 = &puStack_280;
  func_0x00010054c81c(ppuVar5,&lStack_298,&uStack_29c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_298 != 0) {
    lStack_290 = lStack_298;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_258);
  _objc_release(uStack_268);
  _objc_release(uStack_270);
  _objc_release(pppuVar4);
  ppuVar6 = ppuVar5;
  func_0x00010bf52a60();
  if (ppuVar6 != (undefined **)0x0) {
    unaff_x23 = (undefined ***)*puStack_2d0;
    unaff_x24 = &PTR_PTR_1126d9000;
    do {
      unaff_x25 = (undefined **)0x0;
      do {
        if ((undefined ***)*puStack_2d0 != unaff_x23) {
          _objc_enumerationMutation(ppuVar5);
        }
        puVar17 = *(undefined **)(lStack_2d8 + (long)unaff_x25 * 8);
        func_0x00010bf5aac0(puVar17);
        dVar22 = dVar20 + dVar22;
        puVar16 = puVar17;
        if (dVar22 <= dVar21) {
          puVar16 = PTR_PTR_1126d9e80;
          func_0x00010851a828(PTR_PTR_1126d9e80,puVar17);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25ed40(pppuVar4);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar16);
        }
        unaff_x25 = (undefined **)((long)unaff_x25 + 1);
      } while (ppuVar6 != unaff_x25);
      ppuVar6 = ppuVar5;
      func_0x00010bf52a60();
    } while (ppuVar6 != (undefined **)0x0);
  }
  _objc_release(ppuVar5);
  pppuVar7 = pppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return pppuVar7;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar5);
  _objc_release(pppuVar4);
  pppuVar19 = pppuVar7;
  __Unwind_Resume();
  puStack_2e8 = &SUB_1084e87f0;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_300 = ppuVar5;
  pppuStack_2f8 = pppuVar4;
  ppuStack_2f0 = &puStack_170;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126d9e88);
  if (pppuVar19 == (undefined ***)0x0) {
    uStack_330 = 0;
    dVar22 = 0.0;
    uStack_348 = 0;
    uStack_350 = 0;
    uStack_338 = 0;
    uStack_340 = 0;
    uStack_358 = 0;
    ppuStack_360 = (undefined **)0x0;
  }
  else {
    func_0x00010bfa6be0(&ppuStack_360,pppuVar19);
  }
  puVar8 = &uStack_391;
  func_0x0001085261d4();
  uStack_328 = *(undefined8 *)(puVar8 + 0x10);
  uStack_320 = puVar8[0x19];
  uStack_31f = puVar8[0x18];
  uStack_310 = *(undefined8 *)(puVar8 + 0x28);
  uStack_31c = 1;
  puStack_318 = &UNK_1084e8da8;
  lStack_388 = 0;
  uStack_380 = 0;
  lStack_390 = 0;
  func_0x000100c435d0(&lStack_390,&uStack_328,&lStack_308,1);
  func_0x000100c436b8(&ppuStack_378,&lStack_390);
  uStack_398 = 1;
  pppuVar4 = &ppuStack_360;
  pppuVar12 = &ppuStack_378;
  pppuVar13 = (undefined ***)&uStack_398;
  func_0x00010054c81c(pppuVar4);
  _objc_retainAutoreleasedReturnValue();
  if (ppuStack_378 != (undefined **)0x0) {
    ppuStack_370 = ppuStack_378;
    __ZdlPv();
  }
  if (lStack_390 != 0) {
    lStack_388 = lStack_390;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_338);
  _objc_release(uStack_348);
  _objc_release(uStack_350);
  pppuVar9 = pppuVar19;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar4);
    return pppuVar4;
  }
  ___stack_chk_fail();
  func_0x000104d96620(&ppuStack_360);
  _objc_release(pppuVar19);
  pppuVar10 = pppuVar9;
  __Unwind_Resume();
  puStack_3a8 = &UNK_1084e8970;
  lStack_418 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar4 = pppuVar12;
  dVar23 = dVar22;
  dStack_410 = dVar21;
  dStack_408 = dVar20;
  ppuStack_400 = unaff_x28;
  ppuStack_3f8 = unaff_x27;
  lStack_3f0 = unaff_x26;
  ppuStack_3e8 = unaff_x25;
  ppuStack_3e0 = unaff_x24;
  pppuStack_3d8 = unaff_x23;
  puStack_3d0 = puVar16;
  pppuStack_3c8 = pppuVar7;
  pppuStack_3c0 = pppuVar9;
  pppuStack_3b8 = pppuVar19;
  pppuStack_3b0 = &ppuStack_2f0;
  _objc_retain();
  _objc_retain(pppuVar12);
  pppuVar19 = pppuVar12;
  func_0x00010c08fa60();
  if (pppuVar19 != (undefined ***)0x0) {
    _objc_retain(pppuVar10);
    _objc_retain(pppuVar12);
    pppuVar19 = pppuVar12;
    func_0x00010c08fa60();
    if (pppuVar19 == (undefined ***)0x0) {
      pppuVar19 = (undefined ***)0x0;
    }
    else {
      _objc_opt_class(PTR_PTR_1126d9e88);
      if (pppuVar10 == (undefined ***)0x0) {
        uStack_500 = 0;
        uStack_518 = 0;
        uStack_520 = 0;
        uStack_508 = 0;
        uStack_510 = 0;
        uStack_528 = 0;
        ppuStack_530 = (undefined **)0x0;
      }
      else {
        func_0x00010bfa6be0(&ppuStack_530,pppuVar10);
      }
      puVar8 = &uStack_5a1;
      func_0x00010852605c(puVar8);
      pppuVar7 = (undefined ***)PTR__OBJC_CLASS___NSArray_1126ae530;
      pppuStack_4a0 = pppuVar12;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      uStack_5b8 = 0;
      uStack_5b0 = 0;
      puStack_5c0 = (undefined *)0x0;
      pppuVar4 = pppuVar7;
      func_0x00010bf529e0(pppuVar7);
      func_0x000107c281a4(&puStack_5c0,pppuVar4);
      dVar23 = 0.0;
      lStack_4e8 = 0;
      uStack_4f0 = 0;
      uStack_4d8 = 0;
      plStack_4e0 = (long *)0x0;
      uStack_4c8 = 0;
      uStack_4d0 = 0;
      uStack_4b8 = 0;
      uStack_4c0 = 0;
      _objc_retain(pppuVar7);
      pppuVar4 = pppuVar7;
      func_0x00010bf52a60();
      if (pppuVar4 != (undefined ***)0x0) {
        lVar11 = *plStack_4e0;
        do {
          pppuVar19 = (undefined ***)0x0;
          do {
            if (*plStack_4e0 != lVar11) {
              _objc_enumerationMutation(pppuVar7);
            }
            uVar18 = *(undefined8 *)(lStack_4e8 + (long)pppuVar19 * 8);
            _objc_retain(uVar18);
            uStack_4a8 = uVar18;
            func_0x000107c281a8(&puStack_5c0,&uStack_4a8);
            _objc_release(uStack_4a8);
            pppuVar19 = (undefined ***)((long)pppuVar19 + 1);
          } while (pppuVar4 != pppuVar19);
          pppuVar4 = pppuVar7;
          func_0x00010bf52a60();
        } while (pppuVar4 != (undefined ***)0x0);
      }
      _objc_release(pppuVar7);
      _objc_release(pppuVar7);
      func_0x000107c281a0(appuStack_5a0,0xc,puVar8,&puStack_5c0);
      ppuStack_498 = (undefined **)0x0;
      ppuStack_490 = (undefined **)0x0;
      uStack_488 = 0;
      uStack_4f0 = uStack_4f0 & 0xffffffff00000000;
      unaff_x23 = &ppuStack_530;
      pppuVar4 = appuStack_5a0;
      pppuVar13 = &ppuStack_498;
      func_0x000107c310cc(unaff_x23,pppuVar4,pppuVar13,&uStack_4f0);
      _objc_retainAutoreleasedReturnValue();
      pppuVar19 = unaff_x23;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x23);
      if (ppuStack_498 != (undefined **)0x0) {
        ppuStack_490 = ppuStack_498;
        __ZdlPv();
      }
      plVar3 = plStack_538;
      appuStack_5a0[0] = &PTR_FUN_110862700;
      plStack_538 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      plVar3 = plStack_540;
      plStack_540 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      ppuStack_498 = apuStack_558;
      func_0x000107c27dd4(&ppuStack_498);
      ppuStack_498 = &puStack_5c0;
      func_0x000107c27dd4(&ppuStack_498);
      _objc_release(pppuVar7);
      func_0x000107c27da8(&uStack_508);
      _objc_release(uStack_518);
      _objc_release(uStack_520);
    }
    _objc_release(pppuVar12);
    _objc_release(pppuVar10);
    if (pppuVar19 == (undefined ***)0x0) {
      pppuVar7 = (undefined ***)PTR_PTR_1126d9e88;
      _objc_alloc();
      dVar23 = dVar22;
      func_0x00010c047cc0();
      unaff_x23 = (undefined ***)PTR_PTR_1126d9e90;
      pppuVar4 = pppuVar7;
      func_0x000108526440(PTR_PTR_1126d9e90,pppuVar7);
      _objc_retainAutoreleasedReturnValue();
      pppuVar13 = unaff_x23;
      func_0x00010c25ed40(pppuVar10);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(unaff_x23);
      _objc_release(pppuVar7);
    }
    _objc_release(pppuVar19);
  }
  pppuVar19 = pppuVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_418) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pppuVar10);
    return pppuVar10;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x23);
  _objc_release(pppuVar7);
  _objc_release(pppuVar12);
  _objc_release(pppuVar10);
  __Unwind_Resume(pppuVar19);
  pppuVar9 = pppuVar19;
  func_0x000104bd46a0(pppuVar19);
  puStack_5c8 = &UNK_1084e8da8;
  dStack_600 = dVar21;
  dStack_5f8 = dVar22;
  pppuStack_5f0 = pppuVar19;
  pppuStack_5e8 = pppuVar7;
  pppuStack_5e0 = pppuVar12;
  pppuStack_5d8 = pppuVar10;
  ppppuStack_5d0 = &pppuStack_3b0;
  _objc_retain();
  _objc_retain(pppuVar4);
  (*(code *)pppuVar13)(pppuVar9,&bStack_601);
  dVar20 = dVar23;
  (*(code *)pppuVar13)(pppuVar4,&bStack_602);
  uVar14 = 2;
  uVar1 = uVar14;
  if (bStack_602 == 0) {
    uVar1 = 0;
  }
  if (bStack_601 == 0) {
    uVar1 = 1;
  }
  if (dVar20 < dVar23) {
    uVar14 = 1;
  }
  uVar2 = 0;
  if (dVar20 <= dVar23) {
    uVar2 = uVar14;
  }
  uVar14 = uVar1;
  if ((bStack_602 & 1) == 0) {
    uVar14 = uVar2;
  }
  if ((bStack_601 & 1) == 0) {
    uVar1 = uVar14;
  }
  _objc_release(pppuVar4);
  _objc_release(pppuVar9);
  return (undefined ***)(ulong)uVar1;
}



/* Entry: 105a29044; end: 105a290cf; -[SCStoriesSnapchatterFetcher _logLatencyWithFetchStartTime:step:fetchSource:] */

void FUN_105a29044(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  double dVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  dVar2 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c26f320();
  _objc_release(puVar1);
  func_0x00010c0affa0(dVar2 - param_1,*(undefined8 *)(param_2 + 0x30),param_3,param_4,param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105a290d0; end: 105a2912b; -[SCStoriesSnapchatterFetcher _didReceiveResponseWithWaitStatus:] */

void FUN_105a290d0(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined4 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_105a2912c;
  puStack_28 = &UNK_110868698;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_40);
  return;
}



/* Entry: 105a2912c; end: 105a291e7;  */

void FUN_105a2912c(double param_1,long param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  int iVar4;
  double dVar5;
  
  iVar4 = *(int *)(*(long *)(param_2 + 0x20) + 0x48);
  if (iVar4 != 1) {
    if (iVar4 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e0fbf8;
      if (*(int *)(param_2 + 0x28) != 1) {
        ppuVar1 = &PTR____CFConstantStringClassReference_110e17978;
      }
      ppuVar2 = &PTR____CFConstantStringClassReference_110e17998;
      if (*(int *)(param_2 + 0x28) != 2) {
        ppuVar2 = ppuVar1;
      }
      func_0x00010c0b0020(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x30),param_3,ppuVar2);
    }
    iVar4 = *(int *)(param_2 + 0x28);
    if (iVar4 == 1) {
      puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
      _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
      func_0x00010c26f320();
      dVar5 = *(double *)(*(long *)(param_2 + 0x20) + 0x50);
      _objc_release(puVar3);
      func_0x00010c0b0000(param_1 - dVar5,*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x30));
      iVar4 = *(int *)(param_2 + 0x28);
    }
    *(int *)(*(long *)(param_2 + 0x20) + 0x48) = iVar4;
  }
  return;
}



/* Entry: 105a291e8; end: 105a29253; -[SCStoriesSnapchatterFetcher .cxx_destruct] */

void FUN_105a291e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 105a29254; end: 105a293b3; -[PlatformFrameworkBlizzardEvent initWithIsUserTracked:eventName:payloadId:eventFields:qualityOfService:perUserSamplingRate:perEventSamplingRate:perUserSamplingRateV2:protoPayload:] */

undefined1 *
FUN_105a29254(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_11);
  puStack_78 = PTR_PTR_1126eb5e0;
  uStack_80 = param_4;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_10;
    *(undefined8 *)((long)puVar1 + 0x30) = param_1;
    *(undefined8 *)((long)puVar1 + 0x38) = param_2;
    *(undefined8 *)((long)puVar1 + 0x40) = param_3;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 105a293b4; end: 105a293bb; -[PlatformFrameworkBlizzardEvent isUserTracked] */

undefined1 FUN_105a293b4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105a293bc; end: 105a293c3; -[PlatformFrameworkBlizzardEvent eventName] */

undefined8 FUN_105a293bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105a293c4; end: 105a293cb; -[PlatformFrameworkBlizzardEvent payloadId] */

undefined8 FUN_105a293c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105a293cc; end: 105a293d3; -[PlatformFrameworkBlizzardEvent eventFields] */

undefined8 FUN_105a293cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105a293d4; end: 105a293db; -[PlatformFrameworkBlizzardEvent qualityOfService] */

undefined8 FUN_105a293d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105a293dc; end: 105a293e3; -[PlatformFrameworkBlizzardEvent perUserSamplingRate] */

undefined8 FUN_105a293dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105a293e4; end: 105a293eb; -[PlatformFrameworkBlizzardEvent perEventSamplingRate] */

undefined8 FUN_105a293e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105a293ec; end: 105a293f3; -[PlatformFrameworkBlizzardEvent perUserSamplingRateV2] */

undefined8 FUN_105a293ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105a293f4; end: 105a293fb; -[PlatformFrameworkBlizzardEvent protoPayload] */

undefined8 FUN_105a293f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105a293fc; end: 105a29437; -[PlatformFrameworkBlizzardEvent .cxx_destruct] */

void FUN_105a293fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105a29438; end: 105a2953b; -[PlatformFrameworkDeliveredBlizzardEvent initWithIsUserTracked:eventName:payloadId:eventFields:payloadByteCount:] */

undefined1 *
FUN_105a29438(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126eb5e8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 105a2953c; end: 105a29543; -[PlatformFrameworkDeliveredBlizzardEvent isUserTracked] */

undefined1 FUN_105a2953c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105a29544; end: 105a2954b; -[PlatformFrameworkDeliveredBlizzardEvent eventName] */

undefined8 FUN_105a29544(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105a2954c; end: 105a29553; -[PlatformFrameworkDeliveredBlizzardEvent payloadId] */

undefined8 FUN_105a2954c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105a29554; end: 105a2955b; -[PlatformFrameworkDeliveredBlizzardEvent eventFields] */

undefined8 FUN_105a29554(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105a2955c; end: 105a29563; -[PlatformFrameworkDeliveredBlizzardEvent payloadByteCount] */

undefined8 FUN_105a2955c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105a29564; end: 105a29593; -[PlatformFrameworkDeliveredBlizzardEvent .cxx_destruct] */

void FUN_105a29564(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105a29594; end: 105a297bb; +[PlatformFrameworkBlizzardBridge startNativeLogger] */

/* WARNING: Removing unreachable block (ram,0x000105a29690) */
/* WARNING: Removing unreachable block (ram,0x000105a29694) */
/* WARNING: Removing unreachable block (ram,0x000105a2969c) */
/* WARNING: Removing unreachable block (ram,0x000105a296a4) */
/* WARNING: Removing unreachable block (ram,0x000105a296e0) */

void FUN_105a29594(void)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  
  if ((bRam000000011383d770 & 1) == 0) {
    iVar7 = 0x1383d770;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x00010044fb44(0x11383d710);
      ___cxa_guard_release(0x11383d770);
    }
  }
  if ((bRam00000001136c1a90 & 1) == 0) {
    iVar7 = 0x136c1a90;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      FUN_105a2a71c();
      ___cxa_atexit(0x105a29820,0x1136c1a98,0x100000000);
      ___cxa_guard_release(0x1136c1a90);
    }
  }
  plVar6 = plRam00000001136c1aa0;
  uVar5 = uRam00000001136c1a98;
  if (plRam00000001136c1aa0 != (long *)0x0) {
    plVar1 = plRam00000001136c1aa0 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  __ZNSt3__15mutex4lockEv(0x11383d730);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar1 = plRam000000011383d718;
  uRam000000011383d710 = uVar5;
  plRam000000011383d718 = plVar6;
  if (plVar1 != (long *)0x0) {
    plVar2 = plVar1 + 1;
    do {
      lVar8 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  __ZNSt3__15mutex6unlockEv(0x11383d730);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return;
}



/* Entry: 105a297bc; end: 105a29883;  */

long FUN_105a297bc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 105a29884; end: 105a2a04b; +[PlatformFrameworkBlizzardBridge logEvent:] */

ulong FUN_105a29884(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 ****ppppuVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 ****ppppuVar13;
  undefined4 uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  long *plStack_170;
  long *plStack_168;
  undefined8 ***pppuStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 ***pppuStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  plVar7 = (long *)0xb0;
  __Znwm();
  plVar18 = plVar7 + 1;
  *plVar18 = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&PTR_FUN_1108ce978;
  _objc_retain(param_3);
  _objc_retain(param_3);
  plVar19 = plVar7 + 3;
  *plVar19 = (long)&PTR_FUN_1108ce9c8;
  plVar7[4] = (long)&PTR_DAT_1108cea30;
  uVar8 = param_3;
  func_0x00010c082900();
  *(char *)(plVar7 + 5) = (char)uVar8;
  uVar8 = param_3;
  func_0x00010bf9a060(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_105a2c1f0(plVar7 + 6,uVar8);
  _objc_release(uVar8);
  uVar8 = param_3;
  func_0x00010c0f6620();
  plVar7[9] = uVar8;
  uVar8 = param_3;
  func_0x00010c11cf40();
  if (uVar8 < 5) {
    uVar14 = *(undefined4 *)(&UNK_10ddc9878 + uVar8 * 4);
  }
  else {
    uVar14 = 2;
  }
  *(undefined4 *)(plVar7 + 10) = uVar14;
  func_0x00010c0f7c20(param_3);
  plVar7[0xb] = CONCAT17(in_register_00005007,
                         CONCAT16(in_register_00005006,
                                  CONCAT15(in_register_00005005,
                                           CONCAT14(in_register_00005004,
                                                    CONCAT13(in_register_00005003,
                                                             CONCAT12(in_register_00005002,
                                                                      CONCAT11(in_register_00005001,
                                                                               in_b0)))))));
  func_0x00010c0f7b80(param_3);
  plVar7[0xc] = CONCAT17(in_register_00005007,
                         CONCAT16(in_register_00005006,
                                  CONCAT15(in_register_00005005,
                                           CONCAT14(in_register_00005004,
                                                    CONCAT13(in_register_00005003,
                                                             CONCAT12(in_register_00005002,
                                                                      CONCAT11(in_register_00005001,
                                                                               in_b0)))))));
  func_0x00010c0f7c40(param_3);
  plVar7[0xd] = CONCAT17(in_register_00005007,
                         CONCAT16(in_register_00005006,
                                  CONCAT15(in_register_00005005,
                                           CONCAT14(in_register_00005004,
                                                    CONCAT13(in_register_00005003,
                                                             CONCAT12(in_register_00005002,
                                                                      CONCAT11(in_register_00005001,
                                                                               in_b0)))))));
  uVar8 = param_3;
  func_0x00010bf99e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  plVar7[0xf] = 0;
  plVar7[0xe] = 0;
  plVar7[0x11] = 0;
  plVar7[0x10] = 0;
  *(undefined4 *)(plVar7 + 0x12) = 0x3f800000;
  plStack_128 = (long *)0x0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(uVar8);
  uVar9 = uVar8;
  func_0x00010bf52a60();
  if (uVar9 != 0) {
    lVar16 = *plStack_120;
    do {
      uVar15 = 0;
      do {
        if (*plStack_120 != lVar16) {
          _objc_enumerationMutation(uVar8);
        }
        uVar17 = *(ulong *)((long)plStack_128 + uVar15 * 8);
        uVar10 = uVar8;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(uVar17);
        _objc_retainAutorelease(uVar17);
        uVar11 = uVar17;
        func_0x00010bdc3520();
        if (uVar11 == 0) {
          pppuStack_148 = (undefined8 ****)0x0;
          uStack_140 = 0;
          uStack_138 = 0;
        }
        else {
          uVar12 = uVar11;
          _strlen();
          if (0x7ffffffffffffff6 < uVar12) {
            func_0x000104bd47d4();
            goto LAB_105a29e4c;
          }
          if (uVar12 < 0x17) {
            uStack_138 = CONCAT17((char)uVar12,(undefined7)uStack_138);
            ppppuVar13 = &pppuStack_148;
            if (uVar12 != 0) goto LAB_105a29acc;
          }
          else {
            ppppuVar1 = (undefined8 ****)0x19;
            if ((uVar12 | 7) != 0x17) {
              ppppuVar1 = (undefined8 ****)((uVar12 | 7) + 1);
            }
            ppppuVar13 = ppppuVar1;
            __Znwm();
            uStack_138 = (ulong)ppppuVar1 | 0x8000000000000000;
            pppuStack_148 = ppppuVar13;
            uStack_140 = uVar12;
LAB_105a29acc:
            _memmove(ppppuVar13,uVar11,uVar12);
          }
          *(undefined1 *)((long)ppppuVar13 + uVar12) = 0;
        }
        _objc_release(uVar17);
        _objc_retain(uVar10);
        _objc_retainAutorelease(uVar10);
        uVar11 = uVar10;
        func_0x00010bdc3520();
        if (uVar11 == 0) {
          pppuStack_160 = (undefined8 ****)0x0;
          uStack_158 = 0;
          uStack_150 = 0;
        }
        else {
          uVar17 = uVar11;
          _strlen();
          if (0x7ffffffffffffff6 < uVar17) {
            func_0x000104bd47d4();
LAB_105a29e4c:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x105a29e50);
            (*pcVar5)();
          }
          if (uVar17 < 0x17) {
            uStack_150 = CONCAT17((char)uVar17,(undefined7)uStack_150);
            ppppuVar13 = &pppuStack_160;
            if (uVar17 != 0) goto LAB_105a29b74;
          }
          else {
            ppppuVar1 = (undefined8 ****)0x19;
            if ((uVar17 | 7) != 0x17) {
              ppppuVar1 = (undefined8 ****)((uVar17 | 7) + 1);
            }
            ppppuVar13 = ppppuVar1;
            __Znwm();
            uStack_150 = (ulong)ppppuVar1 | 0x8000000000000000;
            pppuStack_160 = ppppuVar13;
            uStack_158 = uVar17;
LAB_105a29b74:
            _memmove(ppppuVar13,uVar11,uVar17);
          }
          *(undefined1 *)((long)ppppuVar13 + uVar17) = 0;
        }
        _objc_release(uVar10);
        func_0x000100ab70cc(plVar7 + 0xe,&pppuStack_148,&pppuStack_148,&pppuStack_160);
        if ((long)uStack_150 < 0) {
          __ZdlPv(pppuStack_160);
        }
        if ((long)uStack_138 < 0) {
          __ZdlPv(pppuStack_148);
        }
        _objc_release(uVar10);
        uVar15 = uVar15 + 1;
      } while (uVar9 != uVar15);
      uVar9 = uVar8;
      func_0x00010bf52a60();
    } while (uVar9 != 0);
  }
  _objc_release(uVar8);
  _objc_release(uVar8);
  _objc_release(uVar8);
  plVar7[0x13] = 0;
  plVar7[0x14] = 0;
  plVar7[0x15] = 0;
  uVar8 = param_3;
  func_0x00010c1193e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c08fa60();
  _objc_release(uVar8);
  if (uVar9 != 0) {
    uVar8 = param_3;
    func_0x00010c1193e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    uVar9 = uVar8;
    func_0x00010bf25f00(uVar8);
    _objc_release(uVar8);
    uVar8 = param_3;
    func_0x00010c1193e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar8;
    func_0x00010c08fa60();
    FUN_105336148(plVar7 + 0x13,uVar9,uVar9 + uVar15,uVar15);
    _objc_release(uVar8);
  }
  _objc_release(param_3);
  _objc_release(param_3);
  plStack_168 = plVar7;
  plStack_170 = plVar19;
  if ((bRam000000011383d770 & 1) == 0) {
    iVar6 = 0x1383d770;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x00010044fb44(0x11383d710);
      ___cxa_guard_release(0x11383d770);
    }
  }
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar3) {
      *plVar18 = *plVar18 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    plVar4 = plRam000000011383d720;
  } while (cVar2 != '\0');
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar3) {
      *plVar18 = *plVar18 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  puStack_f0 = &UNK_10b4a73f8;
  ppuStack_e8 = &PTR_DAT_110cee278;
  uStack_e0 = 0x11383d710;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar3) {
      *plVar18 = *plVar18 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plStack_130 = plVar19;
  plStack_128 = plVar7;
  plStack_d8 = plVar19;
  plStack_d0 = plVar7;
  (**(code **)(*plVar4 + 0x10))(plVar4,&puStack_f0);
  (*(code *)*ppuStack_e8)(&ppuStack_e8);
  do {
    lVar16 = *plVar18;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar3) {
      *plVar18 = lVar16 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar16 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
  }
  plVar7 = plStack_128;
  if (plStack_128 != (long *)0x0) {
    plVar18 = plStack_128 + 1;
    do {
      lVar16 = *plVar18;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar3) {
        *plVar18 = lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_128 + 0x10))(plStack_128);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = plStack_168;
  if (plStack_168 != (long *)0x0) {
    plVar18 = plStack_168 + 1;
    do {
      lVar16 = *plVar18;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar3) {
        *plVar18 = lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_168 + 0x10))(plStack_168);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  uVar8 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    ___cxa_guard_abort(0x11383d770);
    func_0x000105a2a0b0(&plStack_170);
    _objc_release(param_3);
    __Unwind_Resume();
    plVar7 = *(long **)(uVar8 + 8);
    if (plVar7 != (long *)0x0) {
      plVar18 = plVar7 + 1;
      do {
        lVar16 = *plVar18;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar3) {
          *plVar18 = lVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        return uVar8;
      }
    }
    return uVar8;
  }
  return uVar8;
}



/* Entry: 105a2a04c; end: 105a2a113;  */

long FUN_105a2a04c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 105a2a114; end: 105a2a2c7; +[PlatformFrameworkBlizzardBridge deliveredEvents] */

void FUN_105a2a114(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if ((bRam00000001136c1a90 & 1) == 0) {
    iVar6 = 0x136c1a90;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      FUN_105a2a71c();
      ___cxa_atexit(0x105a29820,0x1136c1a98,0x100000000);
      ___cxa_guard_release(0x1136c1a90);
    }
  }
  plVar4 = plRam00000001136c1aa0;
  lVar8 = lRam00000001136c1a98;
  if (plRam00000001136c1aa0 != (long *)0x0) {
    plVar7 = plRam00000001136c1aa0 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_48 = 0;
  lStack_40 = 0;
  uStack_38 = 0;
  __ZNSt3__15mutex4lockEv(lVar8 + 8);
  FUN_105a2b0b4(&lStack_48,lVar8 + 0x78);
  __ZNSt3__15mutex6unlockEv(lVar8 + 8);
  plVar7 = &lStack_48;
  FUN_105a2b408(plVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lStack_48;
  lVar8 = lStack_40;
  if (lStack_48 != 0) {
    while (lVar5 != lVar8) {
      func_0x000105a2aed8(lVar8 + -0x58);
      lVar8 = lVar8 + -0x58;
    }
    __ZdlPv(lStack_48);
  }
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar7);
  return;
}



/* Entry: 105a2a2c8; end: 105a2a71b; +[PlatformFrameworkBlizzardBridge waitForDeliveredEventCount:timeout:] */

void FUN_105a2a2c8(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  double dVar11;
  ulong uStack_98;
  char cStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  if ((bRam00000001136c1a90 & 1) == 0) {
    iVar5 = 0x136c1a90;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      FUN_105a2a71c();
      ___cxa_atexit(0x105a29820,0x1136c1a98,0x100000000);
      ___cxa_guard_release(0x1136c1a90);
    }
  }
  plVar4 = plRam00000001136c1aa0;
  lVar9 = lRam00000001136c1a98;
  if (plRam00000001136c1aa0 != (long *)0x0) {
    plVar7 = plRam00000001136c1aa0 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uVar6 = lVar9 + 8;
  cStack_90 = '\x01';
  uStack_98 = uVar6;
  __ZNSt3__15mutex4lockEv();
  __ZNSt3__16chrono12steady_clock3nowEv();
  dVar11 = param_1 * 1000000000.0 + (double)(long)uVar6;
  if (9.223372036854776e+18 <= dVar11) {
    do {
      if ((param_4 <=
           (ulong)((*(long *)(lVar9 + 0x80) - *(long *)(lVar9 + 0x78) >> 3) * 0x2e8ba2e8ba2e8ba3))
         || (__ZNSt3__16chrono12steady_clock3nowEv(), dVar11 <= (double)(long)uVar6)) break;
      __ZNSt3__16chrono12steady_clock3nowEv();
      if (uVar6 != 0x7fffffffffffffff) {
        uVar10 = uVar6;
        __ZNSt3__16chrono12steady_clock3nowEv();
        __ZNSt3__16chrono12system_clock3nowEv();
        if (uVar10 == 0) {
          lVar8 = 0;
LAB_105a2a4b8:
          lVar8 = (lVar8 - uVar6) + 0x7fffffffffffffff;
        }
        else {
          if ((long)uVar10 < 1) {
            if (0xffdf3b645a1cac08 < uVar10) goto LAB_105a2a554;
            lVar8 = -0x8000000000000000;
            goto LAB_105a2a4b8;
          }
          if (uVar10 < 0x20c49ba5e353f8) {
LAB_105a2a554:
            lVar8 = uVar10 * 1000;
            if (lVar8 - uVar6 == 0 || lVar8 < (long)uVar6) goto LAB_105a2a4b8;
          }
          else {
            lVar8 = 0x7fffffffffffffff;
            if (0x7ffffffffffffffe < (long)uVar6) goto LAB_105a2a4b8;
          }
          lVar8 = 0x7fffffffffffffff;
        }
        uVar6 = lVar9 + 0x48;
        __ZNSt3__118condition_variable15__do_timed_waitERNS_11unique_lockINS_5mutexEEENS_6chrono10time_pointINS5_12system_clockENS5_8durationIxNS_5ratioILl1ELl1000000000EEEEEEE
                  (uVar6,&uStack_98,lVar8);
        __ZNSt3__16chrono12steady_clock3nowEv();
      }
      __ZNSt3__16chrono12steady_clock3nowEv();
    } while ((double)(long)uVar6 < dVar11);
  }
  else if (dVar11 <= -9.223372036854776e+18) {
    do {
      if ((param_4 <=
           (ulong)((*(long *)(lVar9 + 0x80) - *(long *)(lVar9 + 0x78) >> 3) * 0x2e8ba2e8ba2e8ba3))
         || (__ZNSt3__16chrono12steady_clock3nowEv(), dVar11 <= (double)(long)uVar6)) break;
      __ZNSt3__16chrono12steady_clock3nowEv();
      __ZNSt3__16chrono12steady_clock3nowEv();
    } while ((double)(long)uVar6 < dVar11);
  }
  else {
    do {
      if ((param_4 <=
           (ulong)((*(long *)(lVar9 + 0x80) - *(long *)(lVar9 + 0x78) >> 3) * 0x2e8ba2e8ba2e8ba3))
         || (__ZNSt3__16chrono12steady_clock3nowEv(), dVar11 <= (double)(long)uVar6)) break;
      __ZNSt3__16chrono12steady_clock3nowEv();
      uVar10 = (long)dVar11 - uVar6;
      if (0 < (long)uVar10) {
        __ZNSt3__16chrono12steady_clock3nowEv();
        __ZNSt3__16chrono12system_clock3nowEv();
        if (uVar6 == 0) {
          lVar8 = 0;
LAB_105a2a3c4:
          lVar8 = lVar8 + uVar10;
        }
        else {
          if ((long)uVar6 < 1) {
            if (0xffdf3b645a1cac08 < uVar6) goto LAB_105a2a460;
            lVar8 = -0x8000000000000000;
            goto LAB_105a2a3c4;
          }
          if (uVar6 < 0x20c49ba5e353f8) {
LAB_105a2a460:
            lVar8 = uVar6 * 1000;
            if (lVar8 - (uVar10 ^ 0x7fffffffffffffff) == 0 ||
                lVar8 < (long)(uVar10 ^ 0x7fffffffffffffff)) goto LAB_105a2a3c4;
          }
          else {
            lVar8 = 0x7fffffffffffffff;
            if (0x7ffffffffffffffe < (long)(uVar10 ^ 0x7fffffffffffffff)) goto LAB_105a2a3c4;
          }
          lVar8 = 0x7fffffffffffffff;
        }
        uVar6 = lVar9 + 0x48;
        __ZNSt3__118condition_variable15__do_timed_waitERNS_11unique_lockINS_5mutexEEENS_6chrono10time_pointINS5_12system_clockENS5_8durationIxNS_5ratioILl1ELl1000000000EEEEEEE
                  (uVar6,&uStack_98,lVar8);
        __ZNSt3__16chrono12steady_clock3nowEv();
      }
      __ZNSt3__16chrono12steady_clock3nowEv();
    } while ((double)(long)uVar6 < dVar11);
  }
  FUN_105a2b0b4(&lStack_88,lVar9 + 0x78);
  if (cStack_90 == '\x01') {
    __ZNSt3__15mutex6unlockEv(uStack_98);
  }
  plVar7 = &lStack_88;
  FUN_105a2b408(plVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lStack_88;
  lVar9 = lStack_80;
  if (lStack_88 != 0) {
    while (lVar8 != lVar9) {
      func_0x000105a2aed8(lVar9 + -0x58);
      lVar9 = lVar9 + -0x58;
    }
    __ZdlPv(lStack_88);
  }
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar7);
  return;
}



/* Entry: 105a2a71c; end: 105a2a797;  */

void FUN_105a2a71c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xa8;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_1108ce8d8;
  puVar1[4] = 0x32aaaba7;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0x3cb0b1bb;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  puVar1[0x12] = 0;
  puVar1[0x11] = 0;
  puVar1[0x14] = 0;
  puVar1[0x13] = 0;
  puRam00000001136c1aa0 = puVar1;
  puVar1[3] = &PTR_FUN_1108ce928;
  puRam00000001136c1a98 = puVar1 + 3;
  return;
}



/* Entry: 105a2a798; end: 105a2a7a7;  */

void FUN_105a2a798(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108ce8d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105a2a7a8; end: 105a2a7c7;  */

void FUN_105a2a7a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108ce8d8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105a2a7c8; end: 105a2a82f;  */

void FUN_105a2a7c8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x90);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x98);
    lVar1 = lVar3;
    if (lVar3 != lVar2) {
      do {
        lVar2 = lVar2 + -0x58;
        func_0x000105a2aed8(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *(long *)(param_1 + 0x90);
    }
    *(long *)(param_1 + 0x98) = lVar3;
    __ZdlPv(lVar1);
  }
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 0x20);
  return;
}



/* Entry: 105a2a830; end: 105a2a833;  */

void FUN_105a2a830(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105a2a834; end: 105a2a913;  */

long FUN_105a2a834(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x78);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x80);
    lVar1 = lVar3;
    if (lVar3 != lVar2) {
      do {
        lVar2 = lVar2 + -0x58;
        func_0x000105a2aed8(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *(long *)(param_1 + 0x78);
    }
    *(long *)(param_1 + 0x80) = lVar3;
    __ZdlPv(lVar1);
  }
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x48);
  __ZNSt3__15mutexD1Ev(param_1 + 8);
  return param_1;
}



/* Entry: 105a2a914; end: 105a2ae77;  */

void FUN_105a2a914(long param_1,undefined1 *param_2,long *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  ulong uVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  long lVar18;
  undefined1 *puVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  ulong uStack_78;
  long lStack_70;
  long lStack_68;
  undefined4 uStack_60;
  long lStack_58;
  
  if ((long *)*param_3 == (long *)0x0) {
    lVar20 = 0;
    lVar15 = 0;
    uStack_a8 = *param_2;
    if (-1 < (char)param_2[0x1f]) goto LAB_105a2a968;
LAB_105a2a998:
    func_0x000100033dac(&lStack_a0,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  }
  else {
    (**(code **)(*(long *)*param_3 + 0x10))(&uStack_a8);
    lVar15 = CONCAT71(uStack_a7,uStack_a8);
    uStack_a8 = *param_2;
    lVar20 = lStack_a0;
    if ((char)param_2[0x1f] < '\0') goto LAB_105a2a998;
LAB_105a2a968:
    uStack_98 = *(undefined8 *)(param_2 + 0x10);
    lStack_a0 = *(long *)(param_2 + 8);
    lStack_90 = *(long *)(param_2 + 0x18);
  }
  uStack_88 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010028b0c8(&lStack_80,param_2 + 0x28);
  lStack_58 = lVar20 - lVar15;
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  puVar16 = *(undefined1 **)(param_1 + 0x78);
  puVar17 = *(undefined1 **)(param_1 + 0x80);
  if ((ulong)(((long)puVar17 - (long)puVar16 >> 3) * 0x2e8ba2e8ba2e8ba3) < 1000) {
    puVar8 = *(undefined1 **)(param_1 + 0x88);
    if (puVar8 <= puVar17) goto LAB_105a2aa7c;
  }
  else {
    puVar8 = puVar16;
    if (puVar16 + 0x58 == puVar17) {
      if (puVar16 != puVar17) {
LAB_105a2ab00:
        do {
          puVar17 = puVar17 + -0x58;
          func_0x000105a2aed8(puVar17);
        } while (puVar17 != puVar16);
      }
    }
    else {
      do {
        *puVar8 = puVar8[0x58];
        if ((char)puVar8[0x1f] < '\0') {
          __ZdlPv(*(undefined8 *)(puVar8 + 8));
        }
        *(undefined8 *)(puVar8 + 0x10) = *(undefined8 *)(puVar8 + 0x68);
        *(undefined8 *)(puVar8 + 8) = *(undefined8 *)(puVar8 + 0x60);
        puVar8[0x77] = 0;
        puVar8[0x60] = 0;
        *(undefined8 *)(puVar8 + 0x18) = *(undefined8 *)(puVar8 + 0x70);
        *(undefined8 *)(puVar8 + 0x20) = *(undefined8 *)(puVar8 + 0x78);
        func_0x000100603e48(puVar8 + 0x28,puVar8 + 0x80);
        *(undefined8 *)(puVar8 + 0x50) = *(undefined8 *)(puVar8 + 0xa8);
        puVar16 = puVar8 + 0x58;
        puVar19 = puVar8 + 0xb0;
        puVar8 = puVar16;
      } while (puVar19 != puVar17);
      puVar17 = *(undefined1 **)(param_1 + 0x80);
      if (puVar16 != puVar17) goto LAB_105a2ab00;
    }
    *(undefined1 **)(param_1 + 0x80) = puVar16;
    puVar8 = *(undefined1 **)(param_1 + 0x88);
    puVar17 = puVar16;
    if (puVar8 <= puVar16) {
LAB_105a2aa7c:
      puVar16 = *(undefined1 **)(param_1 + 0x78);
      lVar20 = (long)puVar17 - (long)puVar16;
      uVar9 = (lVar20 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
      if (0x2e8ba2e8ba2e8ba < uVar9) {
        FUN_105a2b0a0();
LAB_105a2ae10:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x105a2ae14);
        (*pcVar6)();
      }
      lVar18 = (long)puVar8 - (long)puVar16 >> 3;
      uVar10 = lVar18 * 0x5d1745d1745d1746;
      if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
        uVar10 = uVar9;
      }
      if (0x1745d1745d1745c < (ulong)(lVar18 * 0x2e8ba2e8ba2e8ba3)) {
        uVar10 = 0x2e8ba2e8ba2e8ba;
      }
      if (uVar10 == 0) {
        lVar18 = 0;
      }
      else {
        if (0x2e8ba2e8ba2e8ba < uVar10) {
          func_0x000104bd35f4();
          goto LAB_105a2ae10;
        }
        lVar18 = uVar10 * 0x58;
        __Znwm();
      }
      uVar9 = uStack_78;
      lVar11 = lStack_80;
      lVar7 = lStack_90;
      puVar8 = (undefined1 *)(lVar18 + lVar20);
      *puVar8 = uStack_a8;
      *(undefined8 *)(puVar8 + 0x10) = uStack_98;
      *(long *)(puVar8 + 8) = lStack_a0;
      lStack_a0 = 0;
      uStack_98 = 0;
      lStack_90 = 0;
      *(long *)(puVar8 + 0x18) = lVar7;
      *(undefined8 *)(puVar8 + 0x20) = uStack_88;
      lStack_80 = 0;
      uStack_78 = 0;
      *(long *)(puVar8 + 0x28) = lVar11;
      *(ulong *)(puVar8 + 0x30) = uVar9;
      *(long *)(puVar8 + 0x38) = lStack_70;
      *(long *)(puVar8 + 0x40) = lStack_68;
      *(undefined4 *)(puVar8 + 0x48) = uStack_60;
      if (lStack_68 != 0) {
        uVar13 = *(ulong *)(lStack_70 + 8);
        if ((uVar9 & uVar9 - 1) == 0) {
          uVar13 = uVar13 & uVar9 - 1;
        }
        else {
          uVar4 = 0;
          if (uVar9 != 0) {
            uVar4 = uVar13 / uVar9;
          }
          if (uVar9 <= uVar13) {
            uVar13 = uVar13 - uVar4 * uVar9;
          }
        }
        *(undefined1 **)(lVar11 + uVar13 * 8) = puVar8 + 0x38;
        lStack_70 = 0;
        lStack_68 = 0;
      }
      *(long *)(puVar8 + 0x50) = lStack_58;
      puVar19 = puVar8 + 0x58;
      if (puVar16 != puVar17) {
        lVar7 = 0;
        do {
          puVar1 = (undefined1 *)(((long)puVar8 - lVar20) + lVar7);
          puVar2 = puVar16 + lVar7;
          *puVar1 = *puVar2;
          uVar22 = *(undefined8 *)(puVar2 + 0x10);
          uVar21 = *(undefined8 *)(puVar2 + 8);
          *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(puVar2 + 0x18);
          *(undefined8 *)(puVar1 + 0x10) = uVar22;
          *(undefined8 *)(puVar1 + 8) = uVar21;
          *(undefined8 *)(puVar2 + 0x18) = 0;
          *(undefined8 *)(puVar2 + 8) = 0;
          lVar12 = *(long *)(puVar2 + 0x38);
          *(undefined8 *)(puVar2 + 0x10) = 0;
          *(undefined8 *)(puVar1 + 0x20) = *(undefined8 *)(puVar2 + 0x20);
          lVar11 = *(long *)(puVar2 + 0x28);
          *(undefined8 *)(puVar2 + 0x28) = 0;
          *(long *)(puVar1 + 0x28) = lVar11;
          uVar21 = *(undefined8 *)(puVar2 + 0x30);
          *(undefined8 *)(puVar1 + 0x38) = *(undefined8 *)(puVar2 + 0x38);
          *(undefined8 *)(puVar1 + 0x30) = uVar21;
          *(undefined8 *)(puVar2 + 0x30) = 0;
          lVar14 = *(long *)(puVar2 + 0x40);
          *(long *)(puVar1 + 0x40) = lVar14;
          *(undefined4 *)(puVar1 + 0x48) = *(undefined4 *)(puVar2 + 0x48);
          if (lVar14 != 0) {
            uVar9 = *(ulong *)(lVar12 + 8);
            uVar13 = *(ulong *)(puVar1 + 0x30);
            if ((uVar13 & uVar13 - 1) == 0) {
              uVar9 = uVar13 - 1 & uVar9;
            }
            else if (uVar13 <= uVar9) {
              uVar4 = 0;
              if (uVar13 != 0) {
                uVar4 = uVar9 / uVar13;
              }
              uVar9 = uVar9 - uVar4 * uVar13;
            }
            *(undefined1 **)(lVar11 + uVar9 * 8) = puVar1 + 0x38;
            *(long *)(puVar2 + 0x38) = 0;
            *(undefined8 *)(puVar2 + 0x40) = 0;
          }
          *(undefined8 *)(puVar1 + 0x50) = *(undefined8 *)(puVar2 + 0x50);
          lVar7 = lVar7 + 0x58;
        } while (puVar16 + lVar7 != puVar17);
        do {
          func_0x000105a2aed8(puVar16);
          puVar16 = puVar16 + 0x58;
        } while (puVar16 != puVar17);
        puVar16 = *(undefined1 **)(param_1 + 0x78);
      }
      *(long *)(param_1 + 0x78) = (long)puVar8 - lVar20;
      *(undefined1 **)(param_1 + 0x80) = puVar19;
      *(ulong *)(param_1 + 0x88) = lVar18 + uVar10 * 0x58;
      if (puVar16 != (undefined1 *)0x0) {
        __ZdlPv(puVar16);
      }
      goto LAB_105a2ad5c;
    }
  }
  lVar20 = lStack_80;
  *puVar17 = uStack_a8;
  *(long *)(puVar17 + 0x18) = lStack_90;
  *(undefined8 *)(puVar17 + 0x10) = uStack_98;
  *(long *)(puVar17 + 8) = lStack_a0;
  uStack_98 = 0;
  lStack_90 = 0;
  lStack_a0 = 0;
  *(undefined8 *)(puVar17 + 0x20) = uStack_88;
  lStack_80 = 0;
  *(long *)(puVar17 + 0x28) = lVar20;
  *(long *)(puVar17 + 0x38) = lStack_70;
  *(ulong *)(puVar17 + 0x30) = uStack_78;
  uStack_78 = 0;
  *(long *)(puVar17 + 0x40) = lStack_68;
  *(undefined4 *)(puVar17 + 0x48) = uStack_60;
  if (lStack_68 != 0) {
    uVar9 = *(ulong *)(lStack_70 + 8);
    uVar10 = *(ulong *)(puVar17 + 0x30);
    if ((uVar10 & uVar10 - 1) == 0) {
      uVar9 = uVar10 - 1 & uVar9;
    }
    else if (uVar10 <= uVar9) {
      uVar13 = 0;
      if (uVar10 != 0) {
        uVar13 = uVar9 / uVar10;
      }
      uVar9 = uVar9 - uVar13 * uVar10;
    }
    *(undefined1 **)(lVar20 + uVar9 * 8) = puVar17 + 0x38;
    lStack_70 = 0;
    lStack_68 = 0;
  }
  *(long *)(puVar17 + 0x50) = lStack_58;
  puVar19 = puVar17 + 0x58;
LAB_105a2ad5c:
  *(undefined1 **)(param_1 + 0x80) = puVar19;
  __ZNSt3__118condition_variable10notify_allEv(param_1 + 0x48);
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  lVar20 = lStack_80;
  plVar5 = (long *)lStack_70;
  while (plVar5 != (long *)0x0) {
    lVar18 = *plVar5;
    lStack_80 = lVar20;
    if (*(char *)((long)plVar5 + 0x3f) < '\0') {
      __ZdlPv(plVar5[5]);
      cVar3 = *(char *)((long)plVar5 + 0x27);
    }
    else {
      cVar3 = *(char *)((long)plVar5 + 0x27);
    }
    if (cVar3 < '\0') {
      __ZdlPv(plVar5[2]);
    }
    __ZdlPv(plVar5);
    lVar20 = lStack_80;
    plVar5 = (long *)lVar18;
  }
  lStack_80 = 0;
  if (lVar20 != 0) {
    __ZdlPv();
  }
  if (lStack_90 < 0) {
    __ZdlPv(lStack_a0);
  }
  if (lVar15 != 0) {
    __ZdlPv(lVar15);
  }
  return;
}



/* Entry: 105a2ae78; end: 105a2b09f;  */

long * FUN_105a2ae78(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar3 != lVar2) {
      do {
        lVar2 = lVar2 + -0x58;
        func_0x000105a2aed8(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 105a2b0a0; end: 105a2b0b3;  */

long * FUN_105a2b0a0(undefined8 param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long *plVar5;
  long *plVar6;
  byte bVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  ulong uVar23;
  long *plVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  plVar9 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (plVar9 != param_2) {
    plVar5 = (long *)*param_2;
    plVar6 = (long *)param_2[1];
    uVar19 = (long)plVar6 - (long)plVar5;
    lVar17 = plVar9[2];
    plVar24 = (long *)*plVar9;
    if ((ulong)(lVar17 - (long)plVar24) < uVar19) {
      uVar23 = ((long)uVar19 >> 3) * 0x2e8ba2e8ba2e8ba3;
      plVar10 = plVar9;
      if (plVar24 != (long *)0x0) {
        plVar21 = (long *)plVar9[1];
        plVar10 = plVar24;
        if (plVar24 != plVar21) {
          do {
            plVar21 = plVar21 + -0xb;
            func_0x000105a2aed8(plVar21);
          } while (plVar21 != plVar24);
          plVar10 = (long *)*plVar9;
        }
        plVar9[1] = (long)plVar24;
        __ZdlPv();
        lVar17 = 0;
        *plVar9 = 0;
        plVar9[1] = 0;
        plVar9[2] = 0;
      }
      if (0x2e8ba2e8ba2e8ba < uVar23) {
LAB_105a2b404:
        FUN_105a2b0a0();
        plVar9 = (long *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_alloc();
        func_0x00010bffc4a0();
        lVar17 = *plVar10;
        lVar22 = plVar10[1];
        if (lVar17 != lVar22) {
          do {
            puVar12 = PTR_PTR_1126c14d0;
            _objc_alloc();
            ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
            _objc_alloc();
            func_0x00010bffa180();
            ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
            if (ppuVar13 != (undefined **)0x0) {
              ppuVar3 = ppuVar13;
            }
            _objc_retain(ppuVar3);
            _objc_release(ppuVar13);
            puVar14 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
            _objc_alloc(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
            func_0x00010bffc4a0();
            ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
            for (plVar24 = *(long **)(lVar17 + 0x38);
                PTR__OBJC_CLASS___NSString_1126ae4d0 = (undefined *)ppuVar13, plVar24 != (long *)0x0
                ; plVar24 = (long *)*plVar24) {
              _objc_alloc();
              func_0x00010bffa180();
              ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
              if (ppuVar13 != (undefined **)0x0) {
                ppuVar4 = ppuVar13;
              }
              _objc_retain(ppuVar4);
              _objc_release(ppuVar13);
              ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
              _objc_alloc();
              func_0x00010bffa180();
              ppuVar13 = &PTR____CFConstantStringClassReference_110daafd8;
              if (ppuVar15 != (undefined **)0x0) {
                ppuVar13 = ppuVar15;
              }
              _objc_retain(ppuVar13);
              _objc_release(ppuVar15);
              func_0x00010c1d0640(puVar14);
              _objc_release(ppuVar13);
              _objc_release(ppuVar4);
              ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
            }
            puVar16 = puVar14;
            func_0x00010bf51e00(puVar14);
            _objc_release(puVar14);
            func_0x00010c01fa80(puVar12);
            func_0x00010befa120(plVar9);
            _objc_release(puVar12);
            _objc_release(puVar16);
            _objc_release(ppuVar3);
            lVar17 = lVar17 + 0x58;
          } while (lVar17 != lVar22);
        }
        plVar24 = plVar9;
        func_0x00010bf51e00(plVar9);
        _objc_release(plVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar24);
        return plVar24;
      }
      uVar20 = (lVar17 >> 3) * 0x5d1745d1745d1746;
      if (uVar20 < uVar23 || uVar20 + ((long)uVar19 >> 3) * -0x2e8ba2e8ba2e8ba3 == 0) {
        uVar20 = uVar23;
      }
      if (0x1745d1745d1745c < (ulong)((lVar17 >> 3) * 0x2e8ba2e8ba2e8ba3)) {
        uVar20 = 0x2e8ba2e8ba2e8ba;
      }
      if (0x2e8ba2e8ba2e8ba < uVar20) goto LAB_105a2b404;
      lVar17 = uVar20 * 0x58;
      __Znwm();
      *plVar9 = lVar17;
      plVar9[1] = lVar17;
      plVar9[2] = lVar17 + uVar20 * 0x58;
      plVar21 = plVar5;
    }
    else {
      plVar10 = (long *)plVar9[1];
      if (uVar19 <= (ulong)((long)plVar10 - (long)plVar24)) {
        if (plVar5 != plVar6) {
          lVar17 = 0;
          do {
            while( true ) {
              lVar22 = lVar17;
              puVar1 = (undefined1 *)((long)plVar5 + lVar22);
              puVar2 = (undefined1 *)((long)plVar24 + lVar22);
              puVar18 = (undefined8 *)(puVar1 + 8);
              puVar11 = (undefined8 *)(puVar2 + 8);
              *puVar2 = *puVar1;
              if (plVar24 == plVar5) break;
              bVar7 = puVar1[0x1f];
              if ((char)puVar2[0x1f] < '\0') {
                uVar19 = *(ulong *)((long)plVar5 + lVar22 + 0x10);
                puVar8 = (undefined8 *)*puVar18;
                if (-1 < (char)bVar7) {
                  uVar19 = (ulong)bVar7;
                  puVar8 = puVar18;
                }
                func_0x0001006aabfc(puVar11,puVar8,uVar19);
              }
              else if ((char)bVar7 < '\0') {
                func_0x00010014884c(puVar11,*puVar18,*(undefined8 *)((long)plVar5 + lVar22 + 0x10));
              }
              else {
                uVar26 = *(undefined8 *)(puVar1 + 0x10);
                uVar25 = *puVar18;
                *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(puVar1 + 0x18);
                *(undefined8 *)(puVar2 + 0x10) = uVar26;
                *puVar11 = uVar25;
              }
              *(undefined8 *)((long)plVar24 + lVar22 + 0x20) =
                   *(undefined8 *)((long)plVar5 + lVar22 + 0x20);
              *(undefined4 *)((long)plVar24 + lVar22 + 0x48) =
                   *(undefined4 *)((long)plVar5 + lVar22 + 0x48);
              FUN_105a2b82c((long)plVar24 + lVar22 + 0x28,
                            *(undefined8 *)((long)plVar5 + lVar22 + 0x38),0);
              *(undefined8 *)(puVar2 + 0x50) = *(undefined8 *)(puVar1 + 0x50);
              lVar17 = lVar22 + 0x58;
              if ((long *)(puVar1 + 0x58) == plVar6) goto LAB_105a2b3c0;
            }
            *(undefined8 *)(puVar2 + 0x20) = *(undefined8 *)(puVar1 + 0x20);
            *(undefined8 *)(puVar2 + 0x50) = *(undefined8 *)(puVar1 + 0x50);
            lVar17 = lVar22 + 0x58;
          } while ((long *)(puVar1 + 0x58) != plVar6);
LAB_105a2b3c0:
          plVar10 = (long *)plVar9[1];
          plVar24 = (long *)((long)plVar24 + lVar22 + 0x58);
        }
        while (plVar24 != plVar10) {
          plVar10 = plVar10 + -0xb;
          func_0x000105a2aed8(plVar10);
        }
        plVar9[1] = (long)plVar24;
        return plVar9;
      }
      plVar21 = (long *)((long)plVar5 + ((long)plVar10 - (long)plVar24));
      if (plVar10 != plVar24) {
        lVar17 = 0;
        do {
          while( true ) {
            puVar1 = (undefined1 *)((long)plVar5 + lVar17);
            puVar2 = (undefined1 *)((long)plVar24 + lVar17);
            puVar18 = (undefined8 *)(puVar1 + 8);
            puVar11 = (undefined8 *)(puVar2 + 8);
            *puVar2 = *puVar1;
            if (plVar24 == plVar5) break;
            bVar7 = puVar1[0x1f];
            if ((char)puVar2[0x1f] < '\0') {
              uVar19 = *(ulong *)((long)plVar5 + lVar17 + 0x10);
              puVar8 = (undefined8 *)*puVar18;
              if (-1 < (char)bVar7) {
                uVar19 = (ulong)bVar7;
                puVar8 = puVar18;
              }
              func_0x0001006aabfc(puVar11,puVar8,uVar19);
            }
            else if ((char)bVar7 < '\0') {
              func_0x00010014884c(puVar11,*puVar18,*(undefined8 *)((long)plVar5 + lVar17 + 0x10));
            }
            else {
              uVar26 = *(undefined8 *)(puVar1 + 0x10);
              uVar25 = *puVar18;
              *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(puVar1 + 0x18);
              *(undefined8 *)(puVar2 + 0x10) = uVar26;
              *puVar11 = uVar25;
            }
            *(undefined8 *)((long)plVar24 + lVar17 + 0x20) =
                 *(undefined8 *)((long)plVar5 + lVar17 + 0x20);
            *(undefined4 *)((long)plVar24 + lVar17 + 0x48) =
                 *(undefined4 *)((long)plVar5 + lVar17 + 0x48);
            FUN_105a2b82c((long)plVar24 + lVar17 + 0x28,
                          *(undefined8 *)((long)plVar5 + lVar17 + 0x38),0);
            *(undefined8 *)(puVar2 + 0x50) = *(undefined8 *)(puVar1 + 0x50);
            lVar17 = lVar17 + 0x58;
            if ((long *)(puVar1 + 0x58) == plVar21) goto LAB_105a2b3b4;
          }
          *(undefined8 *)(puVar2 + 0x20) = *(undefined8 *)(puVar1 + 0x20);
          *(undefined8 *)(puVar2 + 0x50) = *(undefined8 *)(puVar1 + 0x50);
          lVar17 = lVar17 + 0x58;
        } while ((long *)(puVar1 + 0x58) != plVar21);
      }
    }
LAB_105a2b3b4:
    FUN_105a2b724(plVar9,plVar21,plVar6);
  }
  return plVar9;
}



/* Entry: 105a2b0b4; end: 105a2b407;  */

long * FUN_105a2b0b4(long *param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long *plVar5;
  byte bVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  ulong uVar22;
  long *plVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  if (param_1 != param_2) {
    plVar21 = (long *)*param_2;
    plVar5 = (long *)param_2[1];
    uVar17 = (long)plVar5 - (long)plVar21;
    lVar15 = param_1[2];
    plVar23 = (long *)*param_1;
    if ((ulong)(lVar15 - (long)plVar23) < uVar17) {
      uVar22 = ((long)uVar17 >> 3) * 0x2e8ba2e8ba2e8ba3;
      plVar8 = param_1;
      if (plVar23 != (long *)0x0) {
        plVar19 = (long *)param_1[1];
        plVar8 = plVar23;
        if (plVar23 != plVar19) {
          do {
            plVar19 = plVar19 + -0xb;
            func_0x000105a2aed8(plVar19);
          } while (plVar19 != plVar23);
          plVar8 = (long *)*param_1;
        }
        param_1[1] = (long)plVar23;
        __ZdlPv();
        lVar15 = 0;
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
      }
      if (0x2e8ba2e8ba2e8ba < uVar22) {
LAB_105a2b404:
        FUN_105a2b0a0();
        plVar23 = (long *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_alloc();
        func_0x00010bffc4a0();
        lVar15 = *plVar8;
        lVar20 = plVar8[1];
        if (lVar15 != lVar20) {
          do {
            puVar10 = PTR_PTR_1126c14d0;
            _objc_alloc();
            ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
            _objc_alloc();
            func_0x00010bffa180();
            ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
            if (ppuVar11 != (undefined **)0x0) {
              ppuVar3 = ppuVar11;
            }
            _objc_retain(ppuVar3);
            _objc_release(ppuVar11);
            puVar12 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
            _objc_alloc(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
            func_0x00010bffc4a0();
            ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
            for (plVar21 = *(long **)(lVar15 + 0x38);
                PTR__OBJC_CLASS___NSString_1126ae4d0 = (undefined *)ppuVar11, plVar21 != (long *)0x0
                ; plVar21 = (long *)*plVar21) {
              _objc_alloc();
              func_0x00010bffa180();
              ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
              if (ppuVar11 != (undefined **)0x0) {
                ppuVar4 = ppuVar11;
              }
              _objc_retain(ppuVar4);
              _objc_release(ppuVar11);
              ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
              _objc_alloc();
              func_0x00010bffa180();
              ppuVar11 = &PTR____CFConstantStringClassReference_110daafd8;
              if (ppuVar13 != (undefined **)0x0) {
                ppuVar11 = ppuVar13;
              }
              _objc_retain(ppuVar11);
              _objc_release(ppuVar13);
              func_0x00010c1d0640(puVar12);
              _objc_release(ppuVar11);
              _objc_release(ppuVar4);
              ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
            }
            puVar14 = puVar12;
            func_0x00010bf51e00(puVar12);
            _objc_release(puVar12);
            func_0x00010c01fa80(puVar10);
            func_0x00010befa120(plVar23);
            _objc_release(puVar10);
            _objc_release(puVar14);
            _objc_release(ppuVar3);
            lVar15 = lVar15 + 0x58;
          } while (lVar15 != lVar20);
        }
        plVar21 = plVar23;
        func_0x00010bf51e00(plVar23);
        _objc_release(plVar23);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar21);
        return plVar21;
      }
      uVar18 = (lVar15 >> 3) * 0x5d1745d1745d1746;
      if (uVar18 < uVar22 || uVar18 + ((long)uVar17 >> 3) * -0x2e8ba2e8ba2e8ba3 == 0) {
        uVar18 = uVar22;
      }
      if (0x1745d1745d1745c < (ulong)((lVar15 >> 3) * 0x2e8ba2e8ba2e8ba3)) {
        uVar18 = 0x2e8ba2e8ba2e8ba;
      }
      if (0x2e8ba2e8ba2e8ba < uVar18) goto LAB_105a2b404;
      lVar15 = uVar18 * 0x58;
      __Znwm();
      *param_1 = lVar15;
      param_1[1] = lVar15;
      param_1[2] = lVar15 + uVar18 * 0x58;
      plVar19 = plVar21;
    }
    else {
      plVar8 = (long *)param_1[1];
      if (uVar17 <= (ulong)((long)plVar8 - (long)plVar23)) {
        if (plVar21 != plVar5) {
          lVar15 = 0;
          do {
            while( true ) {
              lVar20 = lVar15;
              puVar1 = (undefined1 *)((long)plVar21 + lVar20);
              puVar2 = (undefined1 *)((long)plVar23 + lVar20);
              puVar16 = (undefined8 *)(puVar1 + 8);
              puVar9 = (undefined8 *)(puVar2 + 8);
              *puVar2 = *puVar1;
              if (plVar23 == plVar21) break;
              bVar6 = puVar1[0x1f];
              if ((char)puVar2[0x1f] < '\0') {
                uVar17 = *(ulong *)((long)plVar21 + lVar20 + 0x10);
                puVar7 = (undefined8 *)*puVar16;
                if (-1 < (char)bVar6) {
                  uVar17 = (ulong)bVar6;
                  puVar7 = puVar16;
                }
                func_0x0001006aabfc(puVar9,puVar7,uVar17);
              }
              else if ((char)bVar6 < '\0') {
                func_0x00010014884c(puVar9,*puVar16,*(undefined8 *)((long)plVar21 + lVar20 + 0x10));
              }
              else {
                uVar25 = *(undefined8 *)(puVar1 + 0x10);
                uVar24 = *puVar16;
                *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(puVar1 + 0x18);
                *(undefined8 *)(puVar2 + 0x10) = uVar25;
                *puVar9 = uVar24;
              }
              *(undefined8 *)((long)plVar23 + lVar20 + 0x20) =
                   *(undefined8 *)((long)plVar21 + lVar20 + 0x20);
              *(undefined4 *)((long)plVar23 + lVar20 + 0x48) =
                   *(undefined4 *)((long)plVar21 + lVar20 + 0x48);
              FUN_105a2b82c((long)plVar23 + lVar20 + 0x28,
                            *(undefined8 *)((long)plVar21 + lVar20 + 0x38),0);
              *(undefined8 *)(puVar2 + 0x50) = *(undefined8 *)(puVar1 + 0x50);
              lVar15 = lVar20 + 0x58;
              if ((long *)(puVar1 + 0x58) == plVar5) goto LAB_105a2b3c0;
            }
            *(undefined8 *)(puVar2 + 0x20) = *(undefined8 *)(puVar1 + 0x20);
            *(undefined8 *)(puVar2 + 0x50) = *(undefined8 *)(puVar1 + 0x50);
            lVar15 = lVar20 + 0x58;
          } while ((long *)(puVar1 + 0x58) != plVar5);
LAB_105a2b3c0:
          plVar8 = (long *)param_1[1];
          plVar23 = (long *)((long)plVar23 + lVar20 + 0x58);
        }
        while (plVar23 != plVar8) {
          plVar8 = plVar8 + -0xb;
          func_0x000105a2aed8(plVar8);
        }
        param_1[1] = (long)plVar23;
        return param_1;
      }
      plVar19 = (long *)((long)plVar21 + ((long)plVar8 - (long)plVar23));
      if (plVar8 != plVar23) {
        lVar15 = 0;
        do {
          while( true ) {
            puVar1 = (undefined1 *)((long)plVar21 + lVar15);
            puVar2 = (undefined1 *)((long)plVar23 + lVar15);
            puVar16 = (undefined8 *)(puVar1 + 8);
            puVar9 = (undefined8 *)(puVar2 + 8);
            *puVar2 = *puVar1;
            if (plVar23 == plVar21) break;
            bVar6 = puVar1[0x1f];
            if ((char)puVar2[0x1f] < '\0') {
              uVar17 = *(ulong *)((long)plVar21 + lVar15 + 0x10);
              puVar7 = (undefined8 *)*puVar16;
              if (-1 < (char)bVar6) {
                uVar17 = (ulong)bVar6;
                puVar7 = puVar16;
              }
              func_0x0001006aabfc(puVar9,puVar7,uVar17);
            }
            else if ((char)bVar6 < '\0') {
              func_0x00010014884c(puVar9,*puVar16,*(undefined8 *)((long)plVar21 + lVar15 + 0x10));
            }
            else {
              uVar25 = *(undefined8 *)(puVar1 + 0x10);
              uVar24 = *puVar16;
              *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(puVar1 + 0x18);
              *(undefined8 *)(puVar2 + 0x10) = uVar25;
              *puVar9 = uVar24;
            }
            *(undefined8 *)((long)plVar23 + lVar15 + 0x20) =
                 *(undefined8 *)((long)plVar21 + lVar15 + 0x20);
            *(undefined4 *)((long)plVar23 + lVar15 + 0x48) =
                 *(undefined4 *)((long)plVar21 + lVar15 + 0x48);
            FUN_105a2b82c((long)plVar23 + lVar15 + 0x28,
                          *(undefined8 *)((long)plVar21 + lVar15 + 0x38),0);
            *(undefined8 *)(puVar2 + 0x50) = *(undefined8 *)(puVar1 + 0x50);
            lVar15 = lVar15 + 0x58;
            if ((long *)(puVar1 + 0x58) == plVar19) goto LAB_105a2b3b4;
          }
          *(undefined8 *)(puVar2 + 0x20) = *(undefined8 *)(puVar1 + 0x20);
          *(undefined8 *)(puVar2 + 0x50) = *(undefined8 *)(puVar1 + 0x50);
          lVar15 = lVar15 + 0x58;
        } while ((long *)(puVar1 + 0x58) != plVar19);
      }
    }
LAB_105a2b3b4:
    FUN_105a2b724(param_1,plVar19,plVar5);
  }
  return param_1;
}



/* Entry: 105a2b408; end: 105a2b723;  */

void FUN_105a2b408(long *param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  func_0x00010bffc4a0();
  puVar13 = (undefined1 *)*param_1;
  puVar3 = (undefined1 *)param_1[1];
  if (puVar13 != puVar3) {
    do {
      puVar6 = PTR_PTR_1126c14d0;
      _objc_alloc();
      uVar4 = *puVar13;
      ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc();
      func_0x00010bffa180();
      ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
      if (ppuVar7 != (undefined **)0x0) {
        ppuVar1 = ppuVar7;
      }
      _objc_retain(ppuVar1);
      _objc_release(ppuVar7);
      uVar12 = *(undefined8 *)(puVar13 + 0x20);
      puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_alloc(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      func_0x00010bffc4a0();
      ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      for (plVar11 = *(long **)(puVar13 + 0x38);
          PTR__OBJC_CLASS___NSString_1126ae4d0 = (undefined *)ppuVar7, plVar11 != (long *)0x0;
          plVar11 = (long *)*plVar11) {
        _objc_alloc();
        func_0x00010bffa180();
        ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
        if (ppuVar7 != (undefined **)0x0) {
          ppuVar2 = ppuVar7;
        }
        _objc_retain(ppuVar2);
        _objc_release(ppuVar7);
        ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_alloc();
        func_0x00010bffa180();
        ppuVar7 = &PTR____CFConstantStringClassReference_110daafd8;
        if (ppuVar9 != (undefined **)0x0) {
          ppuVar7 = ppuVar9;
        }
        _objc_retain(ppuVar7);
        _objc_release(ppuVar9);
        func_0x00010c1d0640(puVar8,param_2,ppuVar2,ppuVar7);
        _objc_release(ppuVar7);
        _objc_release(ppuVar2);
        ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      }
      puVar10 = puVar8;
      func_0x00010bf51e00(puVar8);
      _objc_release(puVar8);
      func_0x00010c01fa80(puVar6,param_2,uVar4,ppuVar1,uVar12,puVar10,
                          *(undefined8 *)(puVar13 + 0x50));
      func_0x00010befa120(puVar5,param_2,puVar6);
      _objc_release(puVar6);
      _objc_release(puVar10);
      _objc_release(ppuVar1);
      puVar13 = puVar13 + 0x58;
    } while (puVar13 != puVar3);
  }
  puVar6 = puVar5;
  func_0x00010bf51e00(puVar5);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105a2b724; end: 105a2b82b;  */

void FUN_105a2b724(long param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar4 = *(long *)(param_1 + 8);
  if (param_2 != param_3) {
    lVar5 = 0;
    do {
      puVar1 = param_2 + lVar5;
      puVar2 = (undefined1 *)(lVar4 + lVar5);
      *puVar2 = *puVar1;
      if ((char)puVar1[0x1f] < '\0') {
        func_0x000100033dac(puVar2 + 8,*(undefined8 *)(puVar1 + 8),*(undefined8 *)(puVar1 + 0x10));
      }
      else {
        uVar7 = *(undefined8 *)(puVar1 + 0x10);
        uVar6 = *(undefined8 *)(puVar1 + 8);
        *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(puVar1 + 0x18);
        *(undefined8 *)(puVar2 + 0x10) = uVar7;
        *(undefined8 *)(puVar2 + 8) = uVar6;
      }
      lVar3 = lVar4 + lVar5;
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(puVar1 + 0x20);
      func_0x00010028b0c8(lVar3 + 0x28,param_2 + lVar5 + 0x28);
      *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)(puVar1 + 0x50);
      lVar5 = lVar5 + 0x58;
    } while (puVar1 + 0x58 != param_3);
    lVar4 = lVar4 + lVar5;
  }
  *(long *)(param_1 + 8) = lVar4;
  return;
}



/* Entry: 105a2b82c; end: 105a2b96f;  */

void FUN_105a2b82c(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 auStack_58 [3];
  
  if (param_1[1] != 0) {
    _bzero(*param_1,param_1[1] << 3);
    plVar2 = (long *)param_1[2];
    param_1[2] = 0;
    param_1[3] = 0;
    while (plVar2 != (long *)0x0) {
      if (param_2 == param_3) goto LAB_105a2b8b8;
      FUN_10597124c(param_1,plVar2 + 2,param_2 + 2);
      lVar3 = *plVar2;
      FUN_105a2b970(param_1,plVar2);
      param_2 = (long *)*param_2;
      plVar2 = (long *)lVar3;
    }
  }
LAB_105a2b90c:
  for (; param_2 != param_3; param_2 = (long *)*param_2) {
    FUN_105a2c008(auStack_58,param_1,param_2 + 2);
    FUN_105a2b970(param_1,auStack_58[0]);
  }
  return;
LAB_105a2b8b8:
  do {
    plVar4 = (long *)*plVar2;
    if (*(char *)((long)plVar2 + 0x3f) < '\0') {
      __ZdlPv(plVar2[5]);
      cVar1 = *(char *)((long)plVar2 + 0x27);
    }
    else {
      cVar1 = *(char *)((long)plVar2 + 0x27);
    }
    if (cVar1 < '\0') {
      __ZdlPv(plVar2[2]);
    }
    __ZdlPv(plVar2);
    plVar2 = plVar4;
  } while (plVar4 != (long *)0x0);
  goto LAB_105a2b90c;
}



/* Entry: 105a2b970; end: 105a2babb;  */

long FUN_105a2b970(long *param_1,long *param_2)

{
  undefined1 *puVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined1 uStack_31;
  
  plVar8 = param_2 + 2;
  uVar4 = param_2[3];
  plVar2 = (long *)*plVar8;
  if (-1 < (char)*(byte *)((long)param_2 + 0x27)) {
    uVar4 = (ulong)*(byte *)((long)param_2 + 0x27);
    plVar2 = plVar8;
  }
  puVar1 = &uStack_31;
  func_0x0001000df1ac(puVar1,plVar2,uVar4);
  param_2[1] = (long)puVar1;
  plVar2 = param_1;
  FUN_105a2babc(param_1,puVar1,plVar8);
  uVar3 = param_1[1];
  uVar4 = param_2[1];
  uVar5 = uVar3 - 1;
  if ((uVar3 & uVar5) == 0) {
    uVar4 = uVar5 & uVar4;
  }
  else if (uVar3 <= uVar4) {
    uVar6 = 0;
    if (uVar3 != 0) {
      uVar6 = uVar4 / uVar3;
    }
    uVar4 = uVar4 - uVar6 * uVar3;
  }
  if (plVar2 == (long *)0x0) {
    plVar2 = param_1 + 2;
    *param_2 = *plVar2;
    *plVar2 = (long)param_2;
    lVar7 = *param_1;
    *(long **)(lVar7 + uVar4 * 8) = plVar2;
    if (*param_2 != 0) {
      uVar4 = *(ulong *)(*param_2 + 8);
      if ((uVar3 & uVar5) == 0) {
        uVar4 = uVar4 & uVar5;
      }
      else if (uVar3 <= uVar4) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = uVar4 / uVar3;
        }
        uVar4 = uVar4 - uVar5 * uVar3;
      }
      *(long **)(lVar7 + uVar4 * 8) = param_2;
    }
  }
  else {
    *param_2 = *plVar2;
    *plVar2 = (long)param_2;
    if (*param_2 != 0) {
      uVar6 = *(ulong *)(*param_2 + 8);
      if ((uVar3 & uVar5) == 0) {
        uVar6 = uVar6 & uVar5;
      }
      else if (uVar3 <= uVar6) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = uVar6 / uVar3;
        }
        uVar6 = uVar6 - uVar5 * uVar3;
      }
      if (uVar6 != uVar4) {
        *(long **)(*param_1 + uVar6 * 8) = param_2;
      }
    }
  }
  param_1[3] = param_1[3] + 1;
  return (long)param_2;
}



/* Entry: 105a2babc; end: 105a2bdb7;  */

long * FUN_105a2babc(long *param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  bool bVar14;
  ulong uVar15;
  
  uVar11 = param_1[1];
  if ((uVar11 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar11)) {
    uVar15 = uVar11 - 1;
    uVar12 = uVar11 & uVar15;
    goto joined_r0x000105a2bd84;
  }
  uVar12 = 1;
  if (2 < uVar11) {
    uVar12 = (ulong)((uVar11 & uVar11 - 1) != 0);
  }
  uVar12 = uVar12 | uVar11 << 1;
  uVar15 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar12 <= uVar15) {
    uVar12 = uVar15;
  }
  if (uVar12 - 1 == 0) {
    uVar12 = 2;
  }
  else if ((uVar12 & uVar12 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar11 = param_1[1];
  }
  if (uVar12 < uVar11 || uVar12 == uVar11) {
    if (uVar12 < uVar11) {
      uVar15 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar11 < 3) || ((uVar11 & uVar11 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
        if (uVar12 <= uVar15) {
          uVar12 = uVar15;
        }
      }
      else {
        if (1 < uVar15) {
          uVar15 = 1L << (-LZCOUNT(uVar15 - 1) & 0x3fU);
        }
        if (uVar12 <= uVar15) {
          uVar12 = uVar15;
        }
      }
      if (uVar12 < uVar11) goto LAB_105a2bc54;
    }
  }
  else {
LAB_105a2bc54:
    FUN_105a2bdb8(param_1,uVar12);
  }
  uVar11 = param_1[1];
  uVar15 = uVar11 - 1;
  uVar12 = uVar11 & uVar15;
joined_r0x000105a2bd84:
  if (uVar12 == 0) {
    uVar12 = uVar15 & param_2;
    plVar13 = *(long **)(*param_1 + uVar12 * 8);
  }
  else {
    uVar12 = param_2;
    if (uVar11 <= param_2) {
      uVar12 = 0;
      if (uVar11 != 0) {
        uVar12 = param_2 / uVar11;
      }
      uVar12 = param_2 - uVar12 * uVar11;
    }
    plVar13 = *(long **)(*param_1 + uVar12 * 8);
  }
  if (plVar13 == (long *)0x0) {
    plVar10 = (long *)0x0;
  }
  else {
    puVar1 = (undefined8 *)*param_3;
    uVar4 = param_3[1];
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      puVar1 = param_3;
      uVar4 = (ulong)*(byte *)((long)param_3 + 0x17);
    }
    if ((uVar11 & uVar15) == 0) {
      bVar14 = false;
      bVar6 = false;
      do {
        while( true ) {
          plVar10 = plVar13;
          plVar13 = (long *)*plVar10;
          if (plVar13 == (long *)0x0) {
            return plVar10;
          }
          if ((plVar13[1] & uVar15) != uVar12) {
            return plVar10;
          }
          if (plVar13[1] == param_2) break;
LAB_105a2bcc8:
          bVar14 = (bool)(bVar14 | bVar6);
          if (bVar6) {
            return plVar10;
          }
        }
        bVar3 = *(byte *)((long)plVar13 + 0x27);
        uVar11 = plVar13[3];
        if (-1 < (char)bVar3) {
          uVar11 = (ulong)bVar3;
        }
        if (uVar11 != uVar4) goto LAB_105a2bcc8;
        plVar8 = (long *)plVar13[2];
        if (-1 < (char)bVar3) {
          plVar8 = plVar13 + 2;
        }
        _memcmp(plVar8,puVar1,uVar4);
        bVar7 = ((int)plVar8 == 0) != bVar14;
        bVar5 = (bool)(bVar6 & bVar7);
        bVar14 = (bool)(bVar14 | bVar7);
        bVar6 = (bool)(bVar6 | bVar7);
      } while (!bVar5);
    }
    else {
      bVar14 = false;
      bVar3 = 0;
      do {
        plVar10 = plVar13;
        plVar13 = (long *)*plVar10;
        if (plVar13 == (long *)0x0) {
          return plVar10;
        }
        uVar9 = plVar13[1];
        uVar15 = uVar9;
        if (uVar11 <= uVar9) {
          uVar15 = 0;
          if (uVar11 != 0) {
            uVar15 = uVar9 / uVar11;
          }
          uVar15 = uVar9 - uVar15 * uVar11;
        }
        if (uVar15 != uVar12) {
          return plVar10;
        }
        if (uVar9 == param_2) {
          bVar2 = *(byte *)((long)plVar13 + 0x27);
          uVar15 = plVar13[3];
          if (-1 < (char)bVar2) {
            uVar15 = (ulong)bVar2;
          }
          if (uVar15 != uVar4) goto LAB_105a2bb5c;
          plVar8 = (long *)plVar13[2];
          if (-1 < (char)bVar2) {
            plVar8 = plVar13 + 2;
          }
          _memcmp(plVar8,puVar1,uVar4);
          bVar6 = (int)plVar8 == 0;
        }
        else {
LAB_105a2bb5c:
          bVar6 = false;
        }
        bVar5 = bVar6 != bVar14;
        bVar6 = (bool)(bVar3 & bVar5);
        bVar14 = (bool)(bVar14 | bVar5);
        bVar3 = bVar3 | bVar5;
      } while (!bVar6);
    }
  }
  return plVar10;
}



/* Entry: 105a2bdb8; end: 105a2c007;  */

void FUN_105a2bdb8(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  long *plVar7;
  undefined1 *puVar8;
  undefined8 *extraout_x8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined1 uStack_91;
  
  if (param_2 == (undefined8 *)0x0) {
    lVar9 = *param_1;
    *param_1 = 0;
    if (lVar9 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if ((ulong)param_2 >> 0x3d != 0) {
      func_0x000104bd35f4();
      puVar12 = (undefined8 *)0x40;
      __Znwm();
      *extraout_x8 = puVar12;
      extraout_x8[1] = param_1 + 2;
      extraout_x8[2] = 0;
      puVar11 = puVar12 + 2;
      *puVar12 = 0;
      puVar12[1] = 0;
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        func_0x000100033dac(puVar11,*param_2,param_2[1]);
      }
      else {
        uVar19 = *param_2;
        puVar12[3] = param_2[1];
        *puVar11 = uVar19;
        puVar12[4] = param_2[2];
      }
      if (*(char *)((long)param_2 + 0x2f) < '\0') {
        func_0x000100033dac(puVar12 + 5,param_2[3],param_2[4]);
      }
      else {
        uVar19 = param_2[3];
        puVar12[6] = param_2[4];
        puVar12[5] = uVar19;
        puVar12[7] = param_2[5];
      }
      *(undefined1 *)(extraout_x8 + 2) = 1;
      uVar14 = puVar12[3];
      puVar18 = (undefined8 *)puVar12[2];
      if (-1 < (char)*(byte *)((long)puVar12 + 0x27)) {
        uVar14 = (ulong)*(byte *)((long)puVar12 + 0x27);
        puVar18 = puVar11;
      }
      puVar8 = &uStack_91;
      func_0x0001000df1ac(puVar8,puVar18,uVar14);
      puVar12[1] = puVar8;
      return;
    }
    lVar9 = (long)param_2 << 3;
    __Znwm();
    lVar6 = *param_1;
    *param_1 = lVar9;
    if (lVar6 != 0) {
      __ZdlPv();
      lVar9 = *param_1;
    }
    param_1[1] = (long)param_2;
    _bzero(lVar9,(long)param_2 << 3);
    param_1 = param_1 + 2;
    puVar11 = (undefined8 *)*param_1;
    if (puVar11 != (undefined8 *)0x0) {
      puVar12 = (undefined8 *)puVar11[1];
      uVar14 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar14) == 0) {
        *(long **)(lVar9 + ((ulong)puVar12 & uVar14) * 8) = param_1;
        uVar10 = (ulong)puVar12 & uVar14;
        while (puVar12 = puVar11, puVar11 = (undefined8 *)*puVar12, puVar11 != (undefined8 *)0x0) {
          uVar13 = puVar11[1] & uVar14;
          if (uVar13 != uVar10) {
            if (*(long *)(lVar9 + uVar13 * 8) == 0) {
              *(undefined8 **)(lVar9 + uVar13 * 8) = puVar12;
              uVar10 = uVar13;
            }
            else {
              puVar18 = puVar11;
              do {
                puVar15 = puVar18;
                puVar18 = (undefined8 *)*puVar15;
                if (puVar18 == (undefined8 *)0x0) break;
                bVar4 = *(byte *)((long)puVar11 + 0x27);
                uVar2 = puVar11[3];
                if (-1 < (char)bVar4) {
                  uVar2 = (ulong)bVar4;
                }
                bVar5 = *(byte *)((long)puVar18 + 0x27);
                uVar3 = puVar18[3];
                if (-1 < (char)bVar5) {
                  uVar3 = (ulong)bVar5;
                }
                if (uVar2 != uVar3) break;
                plVar7 = (long *)puVar11[2];
                if (-1 < (char)bVar4) {
                  plVar7 = puVar11 + 2;
                }
                puVar17 = (undefined8 *)puVar18[2];
                if (-1 < (char)bVar5) {
                  puVar17 = puVar18 + 2;
                }
                _memcmp(plVar7,puVar17);
              } while ((int)plVar7 == 0);
              *puVar12 = puVar18;
              *puVar15 = **(undefined8 **)(lVar9 + uVar13 * 8);
              **(undefined8 **)(lVar9 + uVar13 * 8) = puVar11;
              puVar11 = puVar12;
            }
          }
        }
      }
      else {
        if (param_2 <= puVar12) {
          uVar14 = 0;
          if (param_2 != (undefined8 *)0x0) {
            uVar14 = (ulong)puVar12 / (ulong)param_2;
          }
          puVar12 = (undefined8 *)((long)puVar12 - uVar14 * (long)param_2);
        }
        *(long **)(lVar9 + (long)puVar12 * 8) = param_1;
        while (puVar18 = puVar11, puVar11 = (undefined8 *)*puVar18, puVar11 != (undefined8 *)0x0) {
          puVar15 = (undefined8 *)puVar11[1];
          if (param_2 <= puVar15) {
            uVar14 = 0;
            if (param_2 != (undefined8 *)0x0) {
              uVar14 = (ulong)puVar15 / (ulong)param_2;
            }
            puVar15 = (undefined8 *)((long)puVar15 - uVar14 * (long)param_2);
          }
          if (puVar15 != puVar12) {
            if (*(long *)(lVar9 + (long)puVar15 * 8) == 0) {
              *(undefined8 **)(lVar9 + (long)puVar15 * 8) = puVar18;
              puVar12 = puVar15;
            }
            else {
              puVar17 = puVar11;
              do {
                puVar16 = puVar17;
                puVar17 = (undefined8 *)*puVar16;
                if (puVar17 == (undefined8 *)0x0) break;
                bVar4 = *(byte *)((long)puVar11 + 0x27);
                uVar14 = puVar11[3];
                if (-1 < (char)bVar4) {
                  uVar14 = (ulong)bVar4;
                }
                bVar5 = *(byte *)((long)puVar17 + 0x27);
                uVar10 = puVar17[3];
                if (-1 < (char)bVar5) {
                  uVar10 = (ulong)bVar5;
                }
                if (uVar14 != uVar10) break;
                plVar7 = (long *)puVar11[2];
                if (-1 < (char)bVar4) {
                  plVar7 = puVar11 + 2;
                }
                plVar1 = (long *)puVar17[2];
                if (-1 < (char)bVar5) {
                  plVar1 = puVar17 + 2;
                }
                _memcmp(plVar7,plVar1);
              } while ((int)plVar7 == 0);
              *puVar18 = puVar17;
              *puVar16 = **(undefined8 **)(lVar9 + (long)puVar15 * 8);
              **(undefined8 **)(lVar9 + (long)puVar15 * 8) = puVar11;
              puVar11 = puVar18;
            }
          }
        }
      }
    }
  }
  return;
}



/* Entry: 105a2c008; end: 105a2c10f;  */

void FUN_105a2c008(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 uStack_31;
  
  puVar4 = (undefined8 *)0x40;
  __Znwm();
  *param_1 = puVar4;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 0;
  puVar1 = puVar4 + 2;
  *puVar4 = 0;
  puVar4[1] = 0;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000100033dac(puVar1,*param_3,param_3[1]);
  }
  else {
    uVar6 = *param_3;
    puVar4[3] = param_3[1];
    *puVar1 = uVar6;
    puVar4[4] = param_3[2];
  }
  if (*(char *)((long)param_3 + 0x2f) < '\0') {
    func_0x000100033dac(puVar4 + 5,param_3[3],param_3[4]);
  }
  else {
    uVar6 = param_3[3];
    puVar4[6] = param_3[4];
    puVar4[5] = uVar6;
    puVar4[7] = param_3[5];
  }
  *(undefined1 *)(param_1 + 2) = 1;
  uVar2 = puVar4[3];
  puVar3 = (undefined8 *)puVar4[2];
  if (-1 < (char)*(byte *)((long)puVar4 + 0x27)) {
    uVar2 = (ulong)*(byte *)((long)puVar4 + 0x27);
    puVar3 = puVar1;
  }
  puVar5 = &uStack_31;
  func_0x0001000df1ac(puVar5,puVar3,uVar2);
  puVar4[1] = puVar5;
  return;
}



/* Entry: 105a2c110; end: 105a2c11f;  */

void FUN_105a2c110(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108ce978;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105a2c120; end: 105a2c13f;  */

void FUN_105a2c120(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108ce978;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105a2c140; end: 105a2c1eb;  */

void FUN_105a2c140(long param_1)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x98) != 0) {
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0x98);
    __ZdlPv();
  }
  plVar2 = (long *)*(long *)(param_1 + 0x80);
  while (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    if (*(char *)((long)plVar2 + 0x3f) < '\0') {
      __ZdlPv(plVar2[5]);
      cVar1 = *(char *)((long)plVar2 + 0x27);
    }
    else {
      cVar1 = *(char *)((long)plVar2 + 0x27);
    }
    if (cVar1 < '\0') {
      __ZdlPv(plVar2[2]);
    }
    __ZdlPv(plVar2);
    plVar2 = (long *)lVar3;
  }
  lVar3 = *(long *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x47) < '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 0x30));
    return;
  }
  return;
}



/* Entry: 105a2c1ec; end: 105a2c1ef;  */

void FUN_105a2c1ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105a2c1f0; end: 105a2c2e7;  */

void FUN_105a2c1f0(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  _objc_retain(param_2);
  uVar3 = param_2;
  _objc_retainAutorelease();
  func_0x00010bdc3520();
  if (uVar3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    goto _objc_release;
  }
  uVar4 = uVar3;
  _strlen();
  if (0x7ffffffffffffff6 < uVar4) {
    func_0x000104bd47d4();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x105a2c2d4);
    (*pcVar2)();
  }
  if (uVar4 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar4;
    puVar5 = param_1;
    if (uVar4 != 0) goto LAB_105a2c2a0;
  }
  else {
    puVar1 = (undefined8 *)0x19;
    if ((uVar4 | 7) != 0x17) {
      puVar1 = (undefined8 *)((uVar4 | 7) + 1);
    }
    puVar5 = puVar1;
    __Znwm();
    param_1[1] = uVar4;
    param_1[2] = (ulong)puVar1 | 0x8000000000000000;
    *param_1 = puVar5;
LAB_105a2c2a0:
    _memmove(puVar5,uVar3,uVar4);
    param_1 = puVar5;
  }
  *(undefined1 *)((long)param_1 + uVar4) = 0;
_objc_release:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105a2c2e8; end: 105a2c34b;  */

long FUN_105a2c2e8(long *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = *(long *)(param_2 + 0x88) - *(long *)(param_2 + 0x80);
  if (lVar1 != 0) {
    if (lVar1 < 0) {
      func_0x000104bd9bc0();
      return *(long *)(param_2 + 0x30);
    }
    param_2 = lVar1;
    __Znwm();
    *param_1 = param_2;
    lVar1 = param_2 + lVar1;
    param_1[2] = lVar1;
    _memcpy();
    param_1[1] = lVar1;
  }
  return param_2;
}



/* Entry: 105a2c34c; end: 105a2c353;  */

undefined8 FUN_105a2c34c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105a2c354; end: 105a2c4c3;  */

long FUN_105a2c354(long param_1)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x80) != 0) {
    *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x80);
    __ZdlPv();
  }
  plVar2 = (long *)*(long *)(param_1 + 0x68);
  while (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    if (*(char *)((long)plVar2 + 0x3f) < '\0') {
      __ZdlPv(plVar2[5]);
      cVar1 = *(char *)((long)plVar2 + 0x27);
    }
    else {
      cVar1 = *(char *)((long)plVar2 + 0x27);
    }
    if (cVar1 < '\0') {
      __ZdlPv(plVar2[2]);
    }
    __ZdlPv(plVar2);
    plVar2 = (long *)lVar3;
  }
  lVar3 = *(long *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x2f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x18));
    return param_1;
  }
  return param_1;
}



/* Entry: 105a2c4c4; end: 105a2c52b;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_105a2c4c4(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (-1 < *(char *)(param_2 + 0x2f)) {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    param_1[1] = *(undefined8 *)(param_2 + 0x20);
    *param_1 = uVar3;
    param_1[2] = *(undefined8 *)(param_2 + 0x28);
    return;
  }
  lVar2 = *(long *)(param_2 + 0x18);
  uVar1 = *(ulong *)(param_2 + 0x20);
  if (0x16 < uVar1) {
    if (uVar1 < 0x7ffffffffffffff7) {
      lVar2 = 0x19;
      if ((uVar1 | 7) != 0x17) {
        lVar2 = (uVar1 | 7) + 1;
      }
    }
    else {
      func_0x000104bd47d4();
    }
    func_0x000107c60e20(lVar2);
    return;
  }
  *(char *)((long)param_1 + 0x17) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(param_1,lVar2,uVar1 + 1);
  return;
}



/* Entry: 105a2c52c; end: 105a2c60b; -[SCLensCreatorProfileEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a2c52c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar1 = param_1 + _DAT_11272db50;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0921c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105a2c60c;
  puStack_40 = &UNK_110850398;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x105a2c72c;
  puStack_68 = &UNK_1108450c8;
  lStack_60 = param_1;
  lStack_38 = param_1;
  func_0x00010c0bd080(lVar2,param_2,&puStack_58,&puStack_80);
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11272db58);
  }
  func_0x00010bf9d620(uVar3,param_2,*(undefined8 *)(param_1 + _DAT_11272db54));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105a2c60c; end: 105a2c843;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a2c60c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126b4158;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc();
  lVar2 = *(long *)(param_1 + 0x20) + (long)_DAT_11272db50;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bebe680(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0;
  func_0x00010bb0584c(0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0002c0();
  _objc_release(param_3);
  _objc_release(param_2);
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11272db54);
  *(undefined **)(*(long *)(param_1 + 0x20) + (long)_DAT_11272db54) = puVar1;
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105a2c844; end: 105a2c917; -[SCLensCreatorProfileEntryPoint businessProfilesPresenterScopeWillDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a2c844(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + _DAT_11272db54) != 0) {
    lVar2 = (long)_DAT_11272db58;
    lVar1 = *(long *)(param_1 + lVar2);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
      _objc_unsafeClaimAutoreleasedReturnValue();
      lVar3 = (long)_DAT_11272db50;
      lVar1 = param_1 + lVar3;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      param_1 = param_1 + lVar3;
      _objc_loadWeakRetained(param_1);
      func_0x00010c092200(lVar2,param_2,param_1);
      _objc_release(param_1);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a2c918; end: 105a2c96f; -[SCLensCreatorProfileEntryPoint _sourcePageString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_105a2c918(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_1 + _DAT_11272db50;
  _objc_loadWeakRetained();
  uVar1 = uVar2;
  func_0x00010c247980();
  _objc_release(uVar2);
  if (uVar1 < 7) {
    uVar2 = *(ulong *)(&UNK_10ddc9890 + uVar1 * 8);
  }
  else {
    uVar2 = 0xffffffffffffffff;
  }
  if (uVar2 < 0x10b) {
    return (&PTR_PTR_110d96e38)[uVar2];
  }
  return (undefined *)0x0;
}



/* Entry: 105a2c970; end: 105a2c9c7; -[SCLensCreatorProfileEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a2c970(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272db58,0);
  _objc_destroyWeak(param_1 + _DAT_11272db5c);
  _objc_destroyWeak(param_1 + _DAT_11272db50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272db54,0);
  return;
}



/* Entry: 105a2c9c8; end: 105a2cae3; -[SCProgressOverlayEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a2c9c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126c14d8;
  _objc_alloc(PTR_PTR_1126c14d8);
  lVar8 = (long)_DAT_11272db60;
  lVar2 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c1178e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c25dfa0();
  lVar6 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00abe0(puVar1,param_2,param_1,lVar3,lVar5,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + lVar8;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a2cae4; end: 105a2cc0f; -[SCProgressOverlayEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a2cae4(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lStack_40;
  undefined *puStack_38;
  
  lVar5 = param_1 + _DAT_11272db60;
  _objc_loadWeakRetained();
  lVar1 = lVar5;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  if (lVar1 == 0) {
    puStack_38 = PTR_PTR_1126eb5f0;
    plVar4 = &lStack_40;
    lStack_40 = param_1;
    _objc_msgSendSuper2(plVar4,PTR_s_end_1125c29d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    plVar2 = (long *)PTR_PTR_1126afc98;
    func_0x00010bf0c040();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_11272db64;
    _objc_retain();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(long **)(param_1 + lVar5) = plVar2;
    _objc_release(uVar3);
    _objc_retain(plVar2);
    func_0x00010bf6f440(lVar1);
    plVar4 = plVar2;
    func_0x00010c117720(plVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(plVar2);
    _objc_release(plVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 105a2cc10; end: 105a2cc17;  */

void FUN_105a2cc10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 105a2cc18; end: 105a2cc8b; -[SCProgressOverlayEntryPoint progressOverlayViewControllerDidCancel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a2cc18(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11272db60;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010c117900(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a2cc8c; end: 105a2ccc7; -[SCProgressOverlayEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a2cc8c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272db60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272db64,0);
  return;
}



/* Entry: 105a2ccc8; end: 105a2cde7; -[SCProgressOverlayViewController initWithDelegate:progressObservable:style:title:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105a2ccc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126eb5f8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11272db68),param_3);
    lVar4 = (long)_DAT_11272db6c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272db70) = param_5;
    lVar4 = (long)_DAT_11272db74;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272db78);
    *(undefined **)((long)puVar1 + (long)_DAT_11272db78) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a2cde8; end: 105a2dbaf; -[SCProgressOverlayViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a2cde8(long param_1)

{
  float fVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
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
  float fVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  long lStack_130;
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
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_128 = PTR_PTR_1126eb5f8;
  puVar28 = PTR_s_viewDidLoad_112684cd8;
  lStack_130 = param_1;
  _objc_msgSendSuper2(&lStack_130,PTR_s_viewDidLoad_112684cd8);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar3);
  _objc_release(puVar2);
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar30 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar31 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar32 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar33 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar30,uVar31,uVar32,uVar33);
  puVar2 = PTR_PTR_1126c14d8;
  func_0x00010be18660(PTR_PTR_1126c14d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar4);
  _objc_release(puVar2);
  func_0x00010c219b60(puVar4);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar5 = puVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar4;
  puStack_a8 = puVar7;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar4;
  puStack_a0 = puVar11;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_98 = puVar15;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
  _objc_alloc_init();
  func_0x00010bef9680(puVar4);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar7 = puVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar4;
  func_0x00010c274200(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar5;
  puStack_c0 = puVar11;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar4;
  func_0x00010c08e400(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar5;
  puStack_b8 = puVar16;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar4;
  func_0x00010c1408a0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar17;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_b0 = puVar19;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar2 = puVar5;
  func_0x00010bf1ff80(puVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010bf493a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(puVar7);
  _objc_release(lVar9);
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(puVar2);
  puVar21 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar30,uVar31,uVar32,uVar33);
  func_0x00010c21ad00();
  puVar2 = PTR_PTR_1126c14d8;
  func_0x00010becb440(PTR_PTR_1126c14d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar21);
  _objc_release(puVar2);
  func_0x00010c213040(puVar21);
  func_0x00010c1cfce0(puVar21);
  func_0x00010c212f20(puVar21);
  func_0x00010c219b60(puVar21);
  func_0x00010befbb60(puVar4);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar26 = puVar21;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar26;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar21;
  puStack_e0 = puVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar4;
  func_0x00010c08de00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar11;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar21;
  puStack_d8 = puVar15;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar4;
  func_0x00010c2793a0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar16;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar21;
  puStack_d0 = puVar18;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar4;
  func_0x00010c2a5060(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar19;
  func_0x00010bf493c0(0xc040000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_c8 = puVar24;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar26);
  func_0x00010c1a7f60(puVar21);
  puVar22 = PTR__OBJC_CLASS___UIProgressView_1126c14e0;
  _objc_alloc();
  func_0x00010c03b440();
  func_0x00010c219b60();
  puVar2 = PTR_PTR_1126c14d8;
  func_0x00010bdc3d00(PTR_PTR_1126c14d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e48a0(puVar22);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219180(puVar22);
  _objc_release(puVar2);
  func_0x00010befbb60(puVar4);
  puVar2 = puVar22;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010c08de00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar2;
  func_0x00010bf493c0(0x403d000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar2);
  func_0x00010c1e3380(0x4479c000,puVar23);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar15 = puVar22;
  puStack_100 = puVar23;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar21;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar15;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar22;
  puStack_f8 = puVar17;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar18;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar22;
  puStack_f0 = puVar12;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf49420(0x4010000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_e8 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar11);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar12);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  lVar3 = param_1;
  func_0x00010be36b20();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bdc2640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c14d8;
  func_0x00010bdda5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(puVar17);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c14d8;
  func_0x00010bdc3d00(PTR_PTR_1126c14d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar17);
  _objc_release(puVar2);
  func_0x00010befbd60(puVar17);
  func_0x00010c160fc0(puVar17);
  puVar2 = puVar17;
  func_0x00010c08c0e0(puVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4030000000000000);
  _objc_release(puVar2);
  func_0x00010c219b60(puVar17);
  func_0x00010befbb60(puVar4);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar7 = puVar17;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar22;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar7;
  func_0x00010bf493c0(0x403d000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar17;
  puStack_120 = puVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar12;
  func_0x00010bf493c0(0xc03d000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar17;
  puStack_118 = puVar16;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar22;
  func_0x00010bf348e0(puVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar19;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar17;
  puStack_110 = puVar24;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar17;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar25;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_108 = puVar18;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar27);
  _objc_release(puVar18);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar8);
  _objc_release(puVar7);
  uVar31 = *(undefined8 *)(param_1 + _DAT_11272db6c);
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0e60();
  _objc_retainAutoreleasedReturnValue();
  fVar29 = -32.0;
  _objc_retain(puVar22);
  uVar30 = uVar31;
  func_0x00010c25ff60(uVar31);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar30);
  _objc_release(uVar31);
  _objc_release(puVar2);
  _objc_release(puVar22);
  _objc_release(puVar22);
  _objc_release(puVar17);
  _objc_release(lVar3);
  _objc_release(puVar23);
  _objc_release(puVar21);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  uVar30 = *(undefined8 *)(puVar4 + 0x20);
  func_0x00010bfb2c80(puVar28);
  if (fVar29 <= 0.0) {
    fVar29 = 0.0;
  }
  fVar1 = 1.0;
  if (fVar29 <= 1.0) {
    fVar1 = fVar29;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1e46b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(fVar1,uVar30,PTR_s_setProgress_animated__112656bd0,1);
  return;
}



/* Entry: 105a2dbb0; end: 105a2dbef;  */

void FUN_105a2dbb0(float param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bfb2c80(param_3);
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  fVar2 = 1.0;
  if (param_1 <= 1.0) {
    fVar2 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1e46b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(fVar2,uVar1,PTR_s_setProgress_animated__112656bd0,1);
  return;
}



/* Entry: 105a2dbf0; end: 105a2dc2b; -[SCProgressOverlayViewController _didPressCancelButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a2dbf0(long param_1)

{
  param_1 = param_1 + _DAT_11272db68;
  _objc_loadWeakRetained(param_1);
  func_0x00010c117980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a2dc2c; end: 105a2dc63; +[SCProgressOverlayViewController _footerBackgroundColorForStyle:] */

void FUN_105a2dc2c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 3) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,
                        *(undefined8 *)(&UNK_10ddc98c8 + param_3 * 8));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a2dc64; end: 105a2dc9b; +[SCProgressOverlayViewController _textColorForStyle:] */

void FUN_105a2dc64(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 3) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,
                        *(undefined8 *)(&UNK_10ddc98e0 + param_3 * 8));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a2dc9c; end: 105a2dcd3; +[SCProgressOverlayViewController _cancelButtonTintColorForStyle:] */

void FUN_105a2dc9c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 3) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,
                        *(undefined8 *)(&UNK_10ddc98f8 + param_3 * 8));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a2dcd4; end: 105a2dd0b; +[SCProgressOverlayViewController _accentColorForStyle:] */

void FUN_105a2dcd4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 3) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,
                        *(undefined8 *)(&UNK_10ddc9910 + param_3 * 8));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a2dd0c; end: 105a2dd87; -[SCProgressOverlayViewController _iconXSignFillImage] */

void FUN_105a2dd0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x403f000000000000,0x403f000000000000,0x4018000000000000,0x4018000000000000,
                      0x4018000000000000,0x4018000000000000,puVar2,param_2,0x2f3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a2dd88; end: 105a2dde3; -[SCProgressOverlayViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a2dd88(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272db74,0);
  _objc_storeStrong(param_1 + _DAT_11272db78,0);
  _objc_storeStrong(param_1 + _DAT_11272db6c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272db68);
  return;
}



/* Entry: 105a2dde4; end: 105a2e03b; -[SCSpectaclesAppInitializationCompleteEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a2dde4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_initWeak(auStack_78,param_1);
  lVar1 = param_1 + _DAT_11272db7c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c249020();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105a2e03c;
  puStack_88 = &UNK_1108434b0;
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010c09b3a0(lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11272db80;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c253460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c269d40();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar6 = *(undefined8 *)(param_1 + _DAT_11272db84);
  *(undefined **)(param_1 + _DAT_11272db84) = puVar4;
  _objc_release(uVar6);
  param_1 = param_1 + _DAT_11272db88;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0dbfc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0dbf40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_78);
  lVar5 = lVar3;
  func_0x00010c25ff60(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 105a2e03c; end: 105a2e0cb;  */

void FUN_105a2e03c(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105a2e0cc;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105a2e0cc; end: 105a2e0f7;  */

void FUN_105a2e0cc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be5c8e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a2e0f8; end: 105a2e19b;  */

void FUN_105a2e0f8(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd540(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}


