/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1050ac138; end: 1050ac143; -[SCUnifiedProfileShowCameraActionHandler setUnifiedProfileViewController:] */

void FUN_1050ac138(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x80,param_3);
  return;
}



/* Entry: 1050ac144; end: 1050ac15b; -[SCUnifiedProfileShowCameraActionHandler delegate] */

void FUN_1050ac144(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050ac15c; end: 1050ac167; -[SCUnifiedProfileShowCameraActionHandler setDelegate:] */

void FUN_1050ac15c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x88,param_3);
  return;
}



/* Entry: 1050ac168; end: 1050ac23b; -[SCUnifiedProfileShowCameraActionHandler .cxx_destruct] */

void FUN_1050ac168(long param_1)

{
  _objc_destroyWeak(param_1 + 0x88);
  _objc_destroyWeak(param_1 + 0x80);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
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



/* Entry: 1050ac23c; end: 1050ac34f;  */

bool FUN_1050ac23c(int param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  func_0x00010bf1f440();
  if (param_1 != 0) {
    lVar2 = param_2;
    func_0x00010bf1bae0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1ad40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar5 = PTR_PTR_1126b47d8;
    if (lVar4 != 0) {
      lVar2 = param_2;
      func_0x00010bf1bae0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf1ad40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f40e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c27eba0();
      bVar1 = puVar6 != (undefined *)0x0;
      _objc_release(puVar5);
      _objc_release(lVar3);
      _objc_release(lVar2);
      goto LAB_1050ac330;
    }
  }
  bVar1 = false;
LAB_1050ac330:
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 1050ac350; end: 1050ac37f;  */

void FUN_1050ac350(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc4ab8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dc4ab8,
                      &PTR____CFConstantStringClassReference_110dc4ad8,0);
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



/* Entry: 1050ac380; end: 1050ac627; -[SCProfileCharmsActionHandler initWithUserSession:profileSessionId:charmsDataCoordinator:charmsViewingDataCoordinator:charmsBlizzardLogger:webBrowsingScopeExposer:] */

undefined8 *
FUN_1050ac380(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_78 = PTR_PTR_1126e5fa0;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
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
    uVar2 = puVar1[10];
    puVar1[10] = param_8;
    _objc_release(uVar2);
    _objc_initWeak(auStack_88,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x1050ac65c;
    puStack_98 = &UNK_1108660c8;
    _objc_copyWeak(auStack_90,auStack_88);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_b8,auStack_88);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1050ac628; end: 1050ac6db;  */

void FUN_1050ac628(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b47e8;
  _objc_alloc_init(PTR_PTR_1126b47e8);
  func_0x00010c1681a0(0x3fd0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1050ac6dc; end: 1050ac8ab; -[SCProfileCharmsActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_1050ac6dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar3 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  if ((int)uVar1 == 0) {
    uVar3 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c0720c0();
    if ((int)uVar1 == 0) {
      uVar1 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar1);
      _objc_release(uVar3);
      if ((int)uVar2 == 0) {
        uVar3 = param_4;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar3;
        func_0x00010c0720c0();
        _objc_release(uVar3);
        if ((int)uVar1 == 0) {
          uVar3 = param_4;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = uVar3;
          func_0x00010c0720c0();
          _objc_release(uVar3);
          if ((int)uVar1 == 0) {
            uVar3 = param_4;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            uVar1 = uVar3;
            func_0x00010c0720c0();
            _objc_release(uVar3);
            if ((int)uVar1 == 0) {
              uVar3 = 0;
              goto LAB_1050ac7c4;
            }
            func_0x00010be7bc40(param_1,param_2,param_4);
          }
          else {
            func_0x00010be7c720(param_1,param_2,param_4);
          }
        }
        else {
          func_0x00010bea2a40(param_1,param_2,param_4);
        }
        goto LAB_1050ac7c0;
      }
    }
    else {
      _objc_release(uVar3);
    }
    func_0x00010be02740(param_1,param_2,param_5);
  }
  else {
    func_0x00010be7a7c0(param_1,param_2,param_5);
  }
LAB_1050ac7c0:
  uVar3 = 1;
LAB_1050ac7c4:
  _objc_release(param_5);
  _objc_release(param_4);
  return uVar3;
}



/* Entry: 1050ac8ac; end: 1050aca5f; -[SCProfileCharmsActionHandler _presentCharmPageView:] */

void FUN_1050ac8ac(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar4 = PTR_PTR_1126b47f0;
  if (lVar3 == 0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar4);
    uVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    uVar1 = param_3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    if (uVar1 != 0) {
      uVar5 = param_3;
      func_0x00010bf40680();
      _objc_retainAutoreleasedReturnValue();
      if (uVar5 != 0) {
        uVar6 = param_3;
        func_0x00010bf40680();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c252440();
        _objc_release(uVar6);
        _objc_release(uVar5);
        if (uVar7 == 0) {
          uVar5 = param_3;
          func_0x00010bf40680(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c17e6e0(lVar2);
          _objc_release(uVar5);
          uVar5 = param_3;
          func_0x00010bf40680(param_3);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010bf4c080();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010bfecfa0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1ac020(lVar2);
          _objc_release(uVar7);
          _objc_release(uVar6);
          _objc_release(uVar5);
          param_1 = param_1 + 0x58;
          _objc_loadWeakRetained(param_1);
          func_0x00010c10eda0();
          _objc_release(param_1);
        }
      }
    }
    _objc_release(uVar1);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050aca60; end: 1050aca9b;  */

void FUN_1050aca60(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1050aca9c; end: 1050acc7b; -[SCProfileCharmsActionHandler _dismissCharmPageView:] */

void FUN_1050aca9c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR_PTR_1126b47f0;
  if (uVar2 != 0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar3);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    uVar2 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_3);
    if (uVar2 != 0) {
      uVar4 = param_3;
      func_0x00010bf40680();
      _objc_retainAutoreleasedReturnValue();
      if (uVar4 != 0) {
        uVar5 = param_3;
        func_0x00010bf40680();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c252440();
        _objc_release(uVar5);
        _objc_release(uVar4);
        if (uVar6 == 1) {
          uVar4 = uVar1;
          func_0x00010bf40680();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010bf4c080();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = param_3;
          func_0x00010bf40680();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010bf4c080();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(uVar4);
          if (uVar5 == uVar7) {
            uVar4 = param_3;
            func_0x00010bf40680(param_3);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar4;
            func_0x00010bf4c080();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar5;
            func_0x00010bfecfa0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1ac020(uVar1);
            _objc_release(uVar6);
            _objc_release(uVar5);
            _objc_release(uVar4);
            func_0x00010bf84ce0(uVar1);
          }
        }
      }
    }
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050acc7c; end: 1050acd53; -[SCProfileCharmsActionHandler _setCharmViewed:] */

void FUN_1050acc7c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b47f8;
  _objc_opt_class(PTR_PTR_1126b47f8);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  if (uVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR_PTR_1126b4800;
    _objc_alloc(PTR_PTR_1126b4800);
    uVar3 = param_3;
    func_0x00010bf35c00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf35b80(param_3);
    func_0x00010bffd840(puVar2);
    func_0x00010bfd0a00(uVar4);
    _objc_release(puVar2);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050acd54; end: 1050aceaf; -[SCProfileCharmsActionHandler _presentMenu:] */

void FUN_1050acd54(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b47f8;
  _objc_opt_class(PTR_PTR_1126b47f8);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  if (uVar1 != 0) {
    puVar2 = PTR_PTR_1126b1208;
    _objc_alloc();
    puVar4 = PTR_PTR_1126b4808;
    _objc_alloc(PTR_PTR_1126b4808);
    func_0x00010bffd7a0();
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 9;
    func_0x00010bc9107c(9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02b180();
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar2;
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(puVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161ba0();
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10d0c0(uVar6);
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050aceb0; end: 1050ad00b; -[SCProfileCharmsActionHandler _presentHiddenCharmsMenu:] */

void FUN_1050aceb0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b4810;
  _objc_opt_class(PTR_PTR_1126b4810);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  if (uVar1 != 0) {
    puVar2 = PTR_PTR_1126b1208;
    _objc_alloc();
    puVar4 = PTR_PTR_1126b4818;
    _objc_alloc(PTR_PTR_1126b4818);
    func_0x00010c01a660();
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 9;
    func_0x00010bc9107c(9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02b180();
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar2;
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(puVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161ba0();
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    param_1 = param_1 + 0x58;
    _objc_loadWeakRetained(param_1);
    func_0x00010c10d0c0(uVar5);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050ad00c; end: 1050ad04f; -[SCProfileCharmsActionHandler flushCharmsViewingsDataForOwner:] */

void FUN_1050ad00c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126b4820;
  func_0x00010bfb3340(PTR_PTR_1126b4820);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0a00(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1050ad050; end: 1050ad107; -[SCProfileCharmsActionHandler _initializeCharmsActionMenuActionHandler] */

void FUN_1050ad050(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar3 = PTR_PTR_1126b4828;
  _objc_alloc(PTR_PTR_1126b4828);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  lVar5 = param_1 + 0x60;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c05e300(puVar3,param_2,uVar1,uVar2,uVar4,uVar6,uVar7,lVar5,
                      *(undefined8 *)(param_1 + 0x50));
  _objc_release(lVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1050ad108; end: 1050ad193; -[SCProfileCharmsActionHandler _initializeHiddenCharmsActionMenuActionHandler] */

void FUN_1050ad108(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b4830;
  _objc_alloc(PTR_PTR_1126b4830);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  lVar2 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  param_1 = param_1 + 0x60;
  _objc_loadWeakRetained(param_1);
  func_0x00010c03b260(puVar1,param_2,uVar3,lVar2,uVar4,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1050ad194; end: 1050ad1ab; -[SCProfileCharmsActionHandler unifiedProfileViewController] */

void FUN_1050ad194(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050ad1ac; end: 1050ad1b7; -[SCProfileCharmsActionHandler setUnifiedProfileViewController:] */

void FUN_1050ad1ac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 1050ad1b8; end: 1050ad1cf; -[SCProfileCharmsActionHandler loggingService] */

void FUN_1050ad1b8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050ad1d0; end: 1050ad1db; -[SCProfileCharmsActionHandler setLoggingService:] */

void FUN_1050ad1d0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 1050ad1dc; end: 1050ad27b; -[SCProfileCharmsActionHandler .cxx_destruct] */

void FUN_1050ad1dc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x60);
  _objc_destroyWeak(param_1 + 0x58);
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



/* Entry: 1050ad27c; end: 1050ad403; -[SCProfileCharmsActionMenuPageActionHandler initWithUserSession:profileSessionId:presentingViewController:charmsDataCoordinator:charmsBlizzardLogger:loggingService:webBrowsingScopeExposer:] */

undefined1 *
FUN_1050ad27c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
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
  puStack_58 = PTR_PTR_1126e5fa8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    func_0x00010bef9980(*(undefined8 *)((long)puVar1 + 8));
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_5);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar3);
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



/* Entry: 1050ad404; end: 1050ad4ff; -[SCProfileCharmsActionMenuPageActionHandler handleActionWithSender:actionModel:fromSourceView:] */

long FUN_1050ad404(long param_1,undefined8 param_2,undefined **param_3,long param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar6 = param_1;
  lVar3 = param_4;
  func_0x00010be25340();
  if ((int)lVar6 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    param_3 = &PTR____CFConstantStringClassReference_110eb73f8;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = 0;
    param_5 = puVar1;
    func_0x00010bf7dbc0(uVar5);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return lVar6;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  _objc_retain(lVar3);
  _objc_retain(param_5);
  lVar6 = lVar3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar6;
  func_0x00010c0720c0();
  _objc_release(lVar6);
  if ((int)lVar4 == 0) {
    lVar6 = lVar3;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar6;
    func_0x00010c0720c0();
    _objc_release(lVar6);
    if ((int)lVar4 == 0) {
      lVar6 = lVar3;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar6;
      func_0x00010c0720c0();
      _objc_release(lVar6);
      if ((int)lVar4 == 0) {
        lVar6 = 0;
      }
      else {
        param_4 = param_4 + 0x40;
        _objc_loadWeakRetained(param_4);
        lVar6 = 1;
        func_0x00010bf83dc0();
        _objc_release(param_4);
      }
      goto LAB_1050ad6ac;
    }
    _objc_initWeak(auStack_b8,param_4);
    param_4 = param_4 + 0x40;
    _objc_loadWeakRetained(param_4);
    _objc_copyWeak(auStack_f0,auStack_b8);
    func_0x00010bf83dc0(param_4);
    _objc_release(param_4);
    puVar2 = auStack_f0;
  }
  else {
    _objc_initWeak(auStack_b8,param_4);
    param_4 = param_4 + 0x40;
    _objc_loadWeakRetained(param_4);
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_1050ad768;
    puStack_d0 = &UNK_110841fb0;
    _objc_copyWeak(auStack_c0,auStack_b8);
    _objc_retain(lVar3);
    lStack_c8 = lVar3;
    func_0x00010bf83dc0(param_4);
    _objc_release(param_4);
    _objc_release(lStack_c8);
    puVar2 = auStack_c0;
  }
  _objc_destroyWeak(puVar2);
  _objc_destroyWeak(auStack_b8);
  lVar6 = 1;
LAB_1050ad6ac:
  _objc_release(param_5);
  _objc_release(lVar3);
  _objc_release(param_3);
  return lVar6;
}



/* Entry: 1050ad500; end: 1050ad767; -[SCProfileCharmsActionMenuPageActionHandler _handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_1050ad500(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
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
  _objc_retain(param_5);
  uVar3 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  if ((int)uVar1 == 0) {
    uVar3 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    if ((int)uVar1 == 0) {
      uVar3 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      func_0x00010c0720c0();
      _objc_release(uVar3);
      if ((int)uVar1 == 0) {
        uVar3 = 0;
      }
      else {
        param_1 = param_1 + 0x40;
        _objc_loadWeakRetained(param_1);
        uVar3 = 1;
        func_0x00010bf83dc0();
        _objc_release(param_1);
      }
      goto LAB_1050ad6ac;
    }
    _objc_initWeak(auStack_58,param_1);
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained(param_1);
    _objc_copyWeak(auStack_90,auStack_58);
    func_0x00010bf83dc0(param_1);
    _objc_release(param_1);
    puVar2 = auStack_90;
  }
  else {
    _objc_initWeak(auStack_58,param_1);
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained(param_1);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1050ad768;
    puStack_70 = &UNK_110841fb0;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_4);
    uStack_68 = param_4;
    func_0x00010bf83dc0(param_1);
    _objc_release(param_1);
    _objc_release(uStack_68);
    puVar2 = auStack_60;
  }
  _objc_destroyWeak(puVar2);
  _objc_destroyWeak(auStack_58);
  uVar3 = 1;
LAB_1050ad6ac:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 1050ad768; end: 1050ad7c7;  */

void FUN_1050ad768(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be35620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050ad7c8; end: 1050adb97; -[SCProfileCharmsActionMenuPageActionHandler _hideCharm:] */

void FUN_1050ad7c8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *unaff_x21;
  undefined8 uVar11;
  undefined1 auStack_148 [8];
  long lStack_140;
  undefined *puStack_138;
  ulong uStack_130;
  ulong uStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  ulong uStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126b47f8;
  _objc_opt_class(PTR_PTR_1126b47f8);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar9);
  uVar1 = uVar2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b4838;
  if (uVar1 != 0) {
    uVar3 = uVar2;
    func_0x00010bf35cc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf35d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    func_0x00010c2b62e0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_initWeak(auStack_98,param_1);
    puVar6 = PTR_PTR_1126aed70;
    ppuVar5 = &PTR____CFConstantStringClassReference_110dc4b38;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc4b38,0);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_1050adb98;
    puStack_b8 = &UNK_110866148;
    _objc_copyWeak(auStack_a0,auStack_98);
    _objc_retain(uVar2);
    uStack_b0 = uVar1;
    _objc_retain(puVar4);
    puStack_a8 = puVar4;
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = puVar6;
    _objc_release(ppuVar5);
    puVar6 = PTR_PTR_1126aed70;
    ppuVar5 = &PTR____CFConstantStringClassReference_110dc4b58;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc4b58,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_100 = puVar9;
    uStack_f8 = 0xc2000000;
    pcStack_f0 = FUN_1050add54;
    puStack_e8 = &UNK_110849410;
    _objc_copyWeak(auStack_d8,auStack_98);
    _objc_retain(puVar4);
    puStack_e0 = puVar4;
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    puVar7 = PTR_PTR_1126aed78;
    _objc_alloc(PTR_PTR_1126aed78);
    ppuVar5 = &PTR____CFConstantStringClassReference_110dc4b78;
    puVar9 = (undefined *)0x0;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc4b78,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe1ba0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = puStack_108;
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052ec0(puVar7);
    _objc_release(puVar8);
    _objc_release(uVar2);
    _objc_release(ppuVar5);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    func_0x00010c10eda0();
    _objc_release(param_1);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puStack_e0);
    _objc_destroyWeak(auStack_d8);
    _objc_release(puStack_108);
    _objc_release(puStack_a8);
    _objc_release(uStack_b0);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_98);
    _objc_release(puVar4);
    unaff_x21 = puVar4;
  }
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  uVar2 = param_3;
  __Unwind_Resume();
  pcStack_118 = FUN_1050adb98;
  lStack_140 = param_1;
  puStack_138 = unaff_x21;
  uStack_130 = uVar1;
  uStack_128 = param_3;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  _objc_copyWeak(auStack_148,uVar2 + 0x30);
  uVar11 = *(undefined8 *)(uVar2 + 0x20);
  _objc_retain(uVar11);
  uVar10 = *(undefined8 *)(uVar2 + 0x28);
  _objc_retain(uVar10);
  func_0x00010bf84b00(puVar9);
  _objc_release(uVar10);
  _objc_release(uVar11);
  _objc_destroyWeak(auStack_148);
  _objc_release(puVar9);
  return;
}



/* Entry: 1050adb98; end: 1050adc6f;  */

void FUN_1050adb98(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010bf84b00(param_2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1050adc70; end: 1050add53;  */

void FUN_1050adc70(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(lVar1 + 0x28);
    puVar2 = PTR_PTR_1126b4840;
    _objc_alloc(PTR_PTR_1126b4840);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf35c00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf35b80(uVar4);
    func_0x00010bffd860(puVar2,param_2,uVar3,uVar4,*(undefined8 *)(lVar1 + 0x18));
    func_0x00010bfd0a00(uVar5,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar3);
    func_0x00010c2a7600(*(undefined8 *)(param_1 + 0x28),param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf21f60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a2d60(uVar4,param_2,uVar3);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1050add54; end: 1050ade13;  */

void FUN_1050add54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf84b00(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1050ade14; end: 1050ade8b;  */

void FUN_1050ade14(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c2a7500(*(undefined8 *)(param_1 + 0x20),param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf21f60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a2d60(uVar3,param_2,uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1050ade8c; end: 1050adf07; -[SCProfileCharmsActionMenuPageActionHandler _presentBrowserView] */

void FUN_1050ade8c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110dc4b18);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar2);
  func_0x000108065c5c(puVar1,lVar2,1,*(undefined8 *)(param_1 + 0x38),param_1,0xf,0);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1050adf08; end: 1050adf4f; -[SCProfileCharmsActionMenuPageActionHandler webBrowserDidDismiss:] */

void FUN_1050adf08(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x38));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1050adf50; end: 1050adf67; -[SCProfileCharmsActionMenuPageActionHandler actionMenuPresenter] */

void FUN_1050adf50(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050adf68; end: 1050adf73; -[SCProfileCharmsActionMenuPageActionHandler setActionMenuPresenter:] */

void FUN_1050adf68(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 1050adf74; end: 1050adfe3; -[SCProfileCharmsActionMenuPageActionHandler .cxx_destruct] */

void FUN_1050adf74(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050adfe4; end: 1050ae0eb; -[SCProfileHiddenCharmsActionMenuPageActionHandler initWithProfileSessionId:presentingViewController:charmsDataCoordinator:loggingService:] */

undefined1 *
FUN_1050adfe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e5fb0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    func_0x00010bef9980(*(undefined8 *)((long)puVar1 + 8));
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_4);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050ae0ec; end: 1050ae1e7; -[SCProfileHiddenCharmsActionMenuPageActionHandler handleActionWithSender:actionModel:fromSourceView:] */

long FUN_1050ae0ec(long param_1,undefined8 param_2,undefined **param_3,long param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar5 = param_1;
  lVar2 = param_4;
  func_0x00010be25340();
  if ((int)lVar5 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    param_3 = &PTR____CFConstantStringClassReference_110eb73f8;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = 0;
    param_5 = puVar1;
    func_0x00010bf7dbc0(uVar4);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return lVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  _objc_retain(lVar2);
  _objc_retain(param_5);
  lVar5 = lVar2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010c0720c0();
  _objc_release(lVar5);
  if ((int)lVar3 == 0) {
    lVar5 = lVar2;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar5;
    func_0x00010c0720c0();
    _objc_release(lVar5);
    if ((int)lVar3 == 0) {
      lVar5 = 0;
    }
    else {
      param_4 = param_4 + 0x28;
      _objc_loadWeakRetained(param_4);
      lVar5 = 1;
      func_0x00010bf83dc0();
      _objc_release(param_4);
    }
  }
  else {
    _objc_initWeak(auStack_b8,param_4);
    param_4 = param_4 + 0x28;
    _objc_loadWeakRetained(param_4);
    _objc_copyWeak(auStack_c0,auStack_b8);
    _objc_retain(lVar2);
    func_0x00010bf83dc0(param_4);
    _objc_release(param_4);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_b8);
    lVar5 = 1;
  }
  _objc_release(param_5);
  _objc_release(lVar2);
  _objc_release(param_3);
  return lVar5;
}



/* Entry: 1050ae1e8; end: 1050ae3a3; -[SCProfileHiddenCharmsActionMenuPageActionHandler _handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_1050ae1e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((int)uVar1 == 0) {
    uVar2 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((int)uVar1 == 0) {
      uVar2 = 0;
    }
    else {
      param_1 = param_1 + 0x28;
      _objc_loadWeakRetained(param_1);
      uVar2 = 1;
      func_0x00010bf83dc0();
      _objc_release(param_1);
    }
  }
  else {
    _objc_initWeak(auStack_58,param_1);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_4);
    func_0x00010bf83dc0(param_1);
    _objc_release(param_1);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    uVar2 = 1;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1050ae3a4; end: 1050ae3d7;  */

void FUN_1050ae3a4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be95520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050ae3d8; end: 1050ae6d3; -[SCProfileHiddenCharmsActionMenuPageActionHandler _restoreCharm:] */

void FUN_1050ae3d8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *unaff_x22;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  ulong uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b4848;
  _objc_opt_class(PTR_PTR_1126b4848);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar8);
  uVar1 = uVar2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    _objc_initWeak(auStack_80,param_1);
    unaff_x22 = PTR_PTR_1126aed70;
    ppuVar4 = &PTR____CFConstantStringClassReference_110dc4b98;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc4b98,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1050ae6d4;
    puStack_98 = &UNK_110849410;
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_retain(uVar2);
    uStack_90 = uVar1;
    func_0x00010beff480();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    puVar5 = PTR_PTR_1126aed70;
    ppuVar4 = &PTR____CFConstantStringClassReference_110dc4bd8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc4bd8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beff480();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    puVar6 = PTR_PTR_1126aed78;
    _objc_alloc(PTR_PTR_1126aed78);
    ppuVar4 = &PTR____CFConstantStringClassReference_110dc4c18;
    puVar8 = (undefined *)0x0;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc4c18,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13c260(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = unaff_x22;
    puStack_70 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052ec0(puVar6);
    _objc_release(puVar7);
    _objc_release(uVar2);
    _objc_release(ppuVar4);
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained();
    func_0x00010c10eda0();
    _objc_release(param_1);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(unaff_x22);
    _objc_release(uStack_90);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  uVar2 = param_3;
  __Unwind_Resume();
  pcStack_b8 = FUN_1050ae6d4;
  puStack_e0 = unaff_x22;
  lStack_d8 = param_1;
  uStack_d0 = uVar1;
  uStack_c8 = param_3;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  _objc_copyWeak(auStack_e8,uVar2 + 0x28);
  uVar9 = *(undefined8 *)(uVar2 + 0x20);
  _objc_retain(uVar9);
  func_0x00010bf84b00(puVar8);
  _objc_release(uVar9);
  _objc_destroyWeak(auStack_e8);
  _objc_release(puVar8);
  return;
}



/* Entry: 1050ae6d4; end: 1050ae793;  */

void FUN_1050ae6d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf84b00(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1050ae794; end: 1050ae837;  */

void FUN_1050ae794(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(lVar1 + 0x20);
    puVar2 = PTR_PTR_1126b4850;
    _objc_alloc(PTR_PTR_1126b4850);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf35ce0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf35b80(uVar4);
    func_0x00010bffd860(puVar2,param_2,uVar3,uVar4,*(undefined8 *)(lVar1 + 0x10));
    func_0x00010bfd0a00(uVar5,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1050ae838; end: 1050ae847;  */

void FUN_1050ae838(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 1050ae848; end: 1050ae85f; -[SCProfileHiddenCharmsActionMenuPageActionHandler actionMenuPresenter] */

void FUN_1050ae848(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050ae860; end: 1050ae86b; -[SCProfileHiddenCharmsActionMenuPageActionHandler setActionMenuPresenter:] */

void FUN_1050ae860(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 1050ae86c; end: 1050ae8b7; -[SCProfileHiddenCharmsActionMenuPageActionHandler .cxx_destruct] */

void FUN_1050ae86c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050ae8b8; end: 1050ae92b; -[SCProfileCharmsMenuDataProvider initWithCharmInfo:] */

undefined1 * FUN_1050ae8b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e5fb8;
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



/* Entry: 1050ae92c; end: 1050aea3f; -[SCProfileCharmsMenuDataProvider updateViewModelWithCompletionBlock:] */

void FUN_1050ae92c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  _objc_opt_new(puVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c12a8e0();
  if (iVar1 != 0) {
    lVar3 = param_1;
    func_0x00010be35600(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(lVar3);
  }
  func_0x00010be49d80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar2);
  _objc_release(param_1);
  puVar4 = PTR_PTR_1126b1210;
  _objc_alloc(PTR_PTR_1126b1210);
  ppuVar5 = &PTR____CFConstantStringClassReference_110eba338;
  func_0x000107d4bf04(&PTR____CFConstantStringClassReference_110eba338);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019f60(puVar4);
  _objc_release(ppuVar5);
  (**(code **)(param_3 + 0x10))(param_3,puVar4);
  _objc_release(param_3);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1050aea40; end: 1050aeacb; -[SCProfileCharmsMenuDataProvider _hideCharm] */

void FUN_1050aea40(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  ppuVar2 = &PTR____CFConstantStringClassReference_110dc4c38;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc4c38,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x000107d4bde8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1050aeacc; end: 1050aeb5f; -[SCProfileCharmsMenuDataProvider _learnMoreCharm] */

void FUN_1050aeacc(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  ppuVar2 = &PTR____CFConstantStringClassReference_110dc4c58;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc4c58,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x000107d4ba6c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1050aeb60; end: 1050aeb77; -[SCProfileCharmsMenuDataProvider delegate] */

void FUN_1050aeb60(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050aeb78; end: 1050aeb83; -[SCProfileCharmsMenuDataProvider setDelegate:] */

void FUN_1050aeb78(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 1050aeb84; end: 1050aebaf; -[SCProfileCharmsMenuDataProvider .cxx_destruct] */

void FUN_1050aeb84(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050aebb0; end: 1050aecc7; -[SCProfileHiddenCharmsMenuDataProvider initWithHiddenCharmsMenuInfo:charmsDataCoordinator:] */

undefined1 *
FUN_1050aebb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e5fc0;
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
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    func_0x00010bef7c60(param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050aecc8; end: 1050aed9f; -[SCProfileHiddenCharmsMenuDataProvider updateViewModelWithCompletionBlock:] */

void FUN_1050aecc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1050aeda0; end: 1050aedd3;  */

void FUN_1050aeda0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be11920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050aedd4; end: 1050aeeef; -[SCProfileHiddenCharmsMenuDataProvider _fetchHiddenCharmsAndUpdateViewModelWithCompletionBlock:] */

void FUN_1050aedd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf35ce0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_1050c70f8();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010bfa76c0(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1050aeef0; end: 1050aef4b;  */

void FUN_1050aeef0(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return;
  }
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd5ce0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050aef4c; end: 1050af34f; -[SCProfileHiddenCharmsMenuDataProvider _buildAndUpdateViewModelWithHiddenCharms:completionBlock:] */

void FUN_1050aef4c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  long lVar13;
  undefined **unaff_x24;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar14 = *(undefined8 *)(lVar13 * 8);
      uVar15 = *(undefined8 *)(param_1 + 8);
      _objc_retain(uVar14);
      _objc_retain(uVar15);
      uVar4 = uVar15;
      func_0x00010c13c280(uVar15);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar14;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(uVar4);
      puVar7 = PTR_PTR_1126b02a8;
      _objc_alloc(PTR_PTR_1126b02a8);
      puVar8 = PTR_PTR_1126b4848;
      _objc_alloc(PTR_PTR_1126b4848);
      uVar4 = uVar15;
      func_0x00010bf35ce0(uVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf35b80(uVar14);
      func_0x00010bffd880(puVar8);
      _objc_release(uVar15);
      func_0x00010c01b460(puVar7);
      _objc_release(puVar8);
      _objc_release(uVar4);
      uVar4 = uVar14;
      func_0x00010bf85d80(uVar14);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar14);
      uVar5 = uVar4;
      func_0x000107d4ba6c(uVar4,0,&PTR____CFConstantStringClassReference_110dc4c78,puVar7,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(puVar7);
      _objc_release(puVar6);
      func_0x00010befa120(puVar2);
      _objc_release(uVar5);
      lVar13 = lVar13 + 1;
    } while (lVar3 != lVar13);
    lVar3 = param_3;
    func_0x00010bf52a60();
    unaff_x24 = (undefined **)0x0;
  }
  _objc_release(param_3);
  puVar6 = PTR_PTR_1126b1210;
  _objc_alloc();
  lVar3 = param_3;
  func_0x00010bf529e0();
  ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar3 == 1) {
    ppuVar11 = &PTR____CFConstantStringClassReference_110dc4c98;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc4c98,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    unaff_x24 = &PTR____CFConstantStringClassReference_110dc4cb8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc4cb8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(ppuVar11);
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar9 = ppuVar11;
  func_0x000106625708();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar11;
  func_0x000107d4ccc0(ppuVar11,0,ppuVar9,1,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar9);
  if (lVar3 != 1) {
    _objc_release(ppuVar11);
    ppuVar11 = unaff_x24;
  }
  _objc_release(ppuVar11);
  ppuVar11 = &PTR____CFConstantStringClassReference_110eba338;
  func_0x000107d4bf04();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019f60();
  _objc_release(ppuVar11);
  _objc_release(ppuVar10);
  (**(code **)(param_4 + 0x10))(param_4,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010bf64160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050af350; end: 1050af383; -[SCProfileHiddenCharmsMenuDataProvider dataCoordinatorDidUpdateWithIdentifier:dataRequest:] */

void FUN_1050af350(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf64160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050af384; end: 1050af39b; -[SCProfileHiddenCharmsMenuDataProvider delegate] */

void FUN_1050af384(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050af39c; end: 1050af3a7; -[SCProfileHiddenCharmsMenuDataProvider setDelegate:] */

void FUN_1050af39c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 1050af3a8; end: 1050af3eb; -[SCProfileHiddenCharmsMenuDataProvider .cxx_destruct] */

void FUN_1050af3a8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050af3ec; end: 1050af453; -[SCProfileCharmsFullScreenViewController init] */

undefined1 * FUN_1050af3ec(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e5fc8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    func_0x00010c1c8b80(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1050af454; end: 1050af5bb; -[SCProfileCharmsFullScreenViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050af454(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  func_0x00010c013de0(puVar1);
  func_0x00010c222380(param_1,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0();
  lVar5 = (long)_DAT_11271b92c;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  _objc_release(lVar3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5),param_2,puVar1);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0);
  _objc_release(uVar4);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(*(undefined8 *)(param_1 + lVar5),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1050af5bc; end: 1050af61b; -[SCProfileCharmsFullScreenViewController setCollectionViewCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050af5bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11271b930;
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + lVar1,param_3);
  _objc_retain();
  func_0x00010c1d88a0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050af61c; end: 1050af6d7; -[SCProfileCharmsFullScreenViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050af61c(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e5fc8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidAppear__112684bd0);
  lVar2 = param_1 + _DAT_11271b930;
  _objc_loadWeakRetained(lVar2);
  lVar1 = (long)_DAT_11271b938;
  func_0x00010bf9bf80(*(undefined8 *)(param_1 + lVar1));
  _objc_release(lVar2);
  func_0x00010bf03400(*(undefined8 *)(param_1 + lVar1),PTR__OBJC_CLASS___UIView_1126aec20);
  return;
}



/* Entry: 1050af6d8; end: 1050af71f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050af6d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271b92c);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0x3e4ccccd);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050af720; end: 1050af84f; -[SCProfileCharmsFullScreenViewController dismissWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050af720(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11271b930;
  lVar2 = param_1 + lVar5;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c252440();
  _objc_release(lVar2);
  if (lVar3 == 1) {
    lVar5 = param_1 + lVar5;
    _objc_loadWeakRetained(lVar5);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    lVar2 = (long)_DAT_11271b938;
    uVar4 = *(undefined8 *)(param_1 + _DAT_11271b934);
    uVar6 = *(undefined8 *)(param_1 + lVar2);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1050af850;
    puStack_68 = &UNK_11084aaa8;
    lStack_60 = param_1;
    _objc_retain(param_3);
    uStack_58 = param_3;
    func_0x00010c23b3c0(uVar6,lVar5,param_2,uVar4,&puStack_80);
    _objc_release(lVar5);
    puStack_a8 = puVar1;
    uStack_a0 = 0xc2000000;
    uStack_98 = 0x1050af890;
    puStack_90 = &UNK_110842e18;
    lStack_88 = param_1;
    func_0x00010bf03400(*(undefined8 *)(param_1 + lVar2),PTR__OBJC_CLASS___UIView_1126aec20,param_2,
                        &puStack_a8);
    _objc_release(uStack_58);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1050af850; end: 1050af8d3;  */

void FUN_1050af850(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c10fd00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050af8d4; end: 1050af9cf; -[SCProfileCharmsFullScreenViewController fadeoutWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050af8d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  lVar2 = param_1 + _DAT_11271b930;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c252440();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_11271b938);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1050af9d0;
    puStack_50 = &UNK_110842e18;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_1050afa20;
    puStack_80 = &UNK_110858070;
    lStack_78 = param_1;
    lStack_48 = param_1;
    _objc_retain(param_3);
    uStack_70 = param_3;
    func_0x00010bf03420(uVar4,puVar1,param_2,&puStack_68,&puStack_98);
    _objc_release(uStack_70);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1050af9d0; end: 1050afa1f;  */

void FUN_1050af9d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050afa20; end: 1050afad3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050afa20(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar2 = *(long *)(param_1 + 0x20) + (long)_DAT_11271b930;
  _objc_loadWeakRetained(lVar2);
  lStack_40 = *(long *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(lStack_40 + _DAT_11271b934);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1050afad4;
  puStack_48 = &UNK_11084aaa8;
  _objc_retain(uVar1);
  uStack_38 = uVar1;
  func_0x00010c23b3c0(0,lVar2,param_2,uVar3,&puStack_60);
  _objc_release(lVar2);
  _objc_release(uStack_38);
  return;
}



/* Entry: 1050afad4; end: 1050afb7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050afad4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c10fd00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84b00();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271b92c);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0x3f800000);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1050afb80; end: 1050afb87; -[SCProfileCharmsFullScreenViewController pageViewName] */

undefined8 FUN_1050afb80(void)

{
  return 0xdc;
}



/* Entry: 1050afb88; end: 1050afbf3; -[SCProfileCharmsFullScreenViewController _handleTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050afb88(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271b930;
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    param_1 = param_1 + lVar2;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfd2ce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf9fa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_fadeoutWithCompletion__1125c5828,0);
  return;
}



/* Entry: 1050afbf4; end: 1050afbff; -[SCProfileCharmsFullScreenViewController defaultProjectNameV2] */

undefined ** FUN_1050afbf4(void)

{
  return &PTR____CFConstantStringClassReference_110db65d8;
}



/* Entry: 1050afc00; end: 1050afc0b; -[SCProfileCharmsFullScreenViewController defaultSubProjectName] */

undefined ** FUN_1050afc00(void)

{
  return &PTR____CFConstantStringClassReference_110dc4cd8;
}



/* Entry: 1050afc0c; end: 1050afc17; -[SCProfileCharmsFullScreenViewController backgroundExitBehavior] */

void FUN_1050afc0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9b830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aecb0,PTR_s_exitImmediately_1125c47b0);
  return;
}



/* Entry: 1050afc18; end: 1050afc9f; -[SCProfileCharmsFullScreenViewController exit:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050afc18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1 + _DAT_11271b930;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c252440();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x00010bf098c0(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010bf84b00(param_1,param_2,puVar3,param_3);
  }
  else {
    func_0x00010bf9fa00(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050afca0; end: 1050afcbf; -[SCProfileCharmsFullScreenViewController collectionViewCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050afca0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271b930);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050afcc0; end: 1050afccf; -[SCProfileCharmsFullScreenViewController indexPath] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050afcc0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b934);
}



/* Entry: 1050afcd0; end: 1050afd0f; -[SCProfileCharmsFullScreenViewController setIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050afcd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271b934;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050afd10; end: 1050afd1f; -[SCProfileCharmsFullScreenViewController animationDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050afd10(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b938);
}



/* Entry: 1050afd20; end: 1050afd2f; -[SCProfileCharmsFullScreenViewController setAnimationDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050afd20(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11271b938) = param_1;
  return;
}



/* Entry: 1050afd30; end: 1050afd7b; -[SCProfileCharmsFullScreenViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050afd30(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271b934,0);
  _objc_destroyWeak(param_1 + _DAT_11271b930);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271b92c,0);
  return;
}



/* Entry: 1050afd7c; end: 1050afe4b;  */

void FUN_1050afd7c(undefined *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  func_0x00010c0deec0();
  puVar2 = (undefined *)0x0;
  if ((param_1 != (undefined *)0x0) && (0 < param_2)) {
    puVar1 = param_1;
    func_0x00010c0840e0();
    puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    if ((long)puVar1 < param_2) {
      puVar1 = param_1;
      func_0x00010c0840e0();
      puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      if (-1 < (long)puVar1) {
        _objc_retain(param_1);
        puVar2 = param_1;
        goto LAB_1050afe30;
      }
      func_0x00010c1554e0(param_1);
    }
    else {
      func_0x00010c1554e0(param_1);
    }
    func_0x00010bfed020(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_1050afe30:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1050afe4c; end: 1050b07ef;  */

void FUN_1050afe4c(undefined8 param_1,undefined8 param_2,double param_3,undefined *param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = param_5;
  _objc_retain();
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = param_4;
  func_0x00010c111d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00();
  _objc_release(puVar1);
  puVar15 = PTR_PTR_1126b4860;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (((ulong)puVar14 & 1) == 0) {
    puVar14 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_4;
    func_0x00010c111d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar14;
    func_0x00010bdc2c60(puVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fde60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar1);
LAB_1050b0278:
    _objc_release(puVar14);
  }
  else {
    puVar14 = param_4;
    func_0x00010c110b60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00();
    _objc_release(puVar14);
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = param_4;
      func_0x00010c110b60();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = param_4;
      func_0x00010c110b60(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11f3a0();
      puVar14 = puVar1;
      func_0x00010c260c20(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar15);
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c071760();
      puVar15 = (undefined *)0x0;
      if ((int)puVar1 != 0) {
        puVar1 = puVar14;
        func_0x000106625a64(puVar14);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = PTR_PTR_1126b4860;
        func_0x00010bfe94a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
      }
      goto LAB_1050b0278;
    }
    puVar14 = param_4;
    func_0x00010c110560();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar14;
    func_0x00010c08fa60();
    _objc_release(puVar14);
    if (puVar1 == (undefined *)0x0) {
      puVar15 = (undefined *)0x0;
    }
    else {
      uVar2 = param_5;
      func_0x00010bf1bae0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c08fa60();
      if (uVar4 == 0) {
        _objc_release(uVar3);
        _objc_release(uVar2);
      }
      else {
        uVar4 = param_5;
        func_0x00010bf1bae0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bf1c0a0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c08fa60();
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
        puVar14 = PTR_PTR_1126b4858;
        if (uVar6 != 0) {
          puVar1 = PTR_PTR_1126b19f8;
          func_0x00010bf35c20();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf1c100(puVar14);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar15);
          _objc_release(puVar1);
          puVar15 = PTR_PTR_1126b4860;
          uVar2 = param_5;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = param_5;
          func_0x00010bf1bae0(param_5);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010bf1acc0();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = param_5;
          func_0x00010bf1bae0(param_5);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010bf1c0a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf1c1e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(uVar4);
          _objc_release(uVar3);
          _objc_release(uVar2);
          _objc_release(puVar14);
          goto LAB_1050b0280;
        }
      }
      if (param_5 == 0) {
        puVar15 = (undefined *)0x0;
      }
      else {
        uVar12 = param_5;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_5;
        if (uVar12 == 0) {
          func_0x00010c294420();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
        }
        uVar3 = uVar2;
        func_0x000108ffe710();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        _objc_release(uVar12);
        uVar19 = 1;
        uVar12 = uVar3;
        func_0x000108ffef38(1,uVar3,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c23d0a0();
        func_0x00010c23d0a0(uVar19);
        uVar18 = uVar19;
        func_0x0001066258d0(uVar19);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = PTR_PTR_1126b4860;
        func_0x00010bfe94a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar18);
        _objc_release(uVar19);
        _objc_release(uVar3);
      }
    }
  }
LAB_1050b0280:
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar14 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_release(puVar14);
  puVar7 = PTR_PTR_1126b4858;
  puVar14 = PTR_PTR_1126b19f8;
  func_0x00010bf35c20();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1bb00(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar14);
  puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar8 = param_4;
  func_0x00010bf6f660(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar9 = param_4;
  if ((int)puVar14 == 0) {
    uVar18 = param_6;
    func_0x00010bf1bae0(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar18;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00();
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(puVar8);
    puVar14 = PTR_PTR_1126b4860;
    if (((ulong)puVar1 & 1) != 0) goto LAB_1050b03d4;
    func_0x00010bf6f660(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = param_6;
    func_0x00010bf1bae0(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar18;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1aee0();
    _objc_retainAutoreleasedReturnValue();
LAB_1050b05bc:
    _objc_release(uVar19);
    _objc_release(uVar18);
  }
  else {
    _objc_release(puVar8);
LAB_1050b03d4:
    puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bf6f580(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (((ulong)puVar14 & 1) == 0) {
      uVar18 = param_7;
      func_0x00010bf1bae0(param_7);
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar18;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c078c00();
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (((ulong)puVar1 & 1) == 0) {
        uVar10 = param_8;
        func_0x00010bf1bae0(param_8);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        func_0x00010bf1acc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c078c00();
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_release(uVar19);
        _objc_release(uVar18);
        _objc_release(puVar9);
        puVar14 = PTR_PTR_1126b4860;
        if (((ulong)puVar8 & 1) != 0) {
          puVar14 = (undefined *)0x0;
          goto LAB_1050b05d4;
        }
        puVar9 = param_4;
        func_0x00010bf6f580(param_4);
        _objc_retainAutoreleasedReturnValue();
        uVar18 = param_7;
        func_0x00010bf1bae0(param_7);
        _objc_retainAutoreleasedReturnValue();
        uVar19 = uVar18;
        func_0x00010bf1acc0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = param_8;
        func_0x00010bf1bae0(param_8);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        func_0x00010bf1acc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1aee0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar11);
        _objc_release(uVar10);
      }
      else {
        puVar14 = (undefined *)0x0;
      }
      goto LAB_1050b05bc;
    }
    puVar14 = (undefined *)0x0;
  }
  _objc_release(puVar9);
LAB_1050b05d4:
  _objc_release(puVar7);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  puVar1 = PTR_PTR_1126b4868;
  _objc_alloc();
  puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c026740();
  _objc_release(puVar7);
  _objc_release(puVar14);
  _objc_release(puVar15);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    _objc_retain();
    uVar18 = *(undefined8 *)PTR__CGSizeZero_110347620;
    uVar19 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
    dVar17 = 20.0;
    do {
      puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010bf6d680(dVar17,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf720a0(puVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20ba0(uVar18,uVar19,param_4);
      dVar16 = param_3;
      _objc_release(puVar14);
      _objc_release(puVar1);
      if (param_3 <= 248.0) {
        uVar18 = 0x4039000000000000;
        uVar19 = 0x3ff0000000000000;
        goto LAB_1050b08ec;
      }
      dVar17 = dVar17 + -0.5;
      param_3 = dVar16;
    } while (17.0 <= dVar17);
    uVar18 = 0x4035000000000000;
    uVar19 = 0x4000000000000000;
LAB_1050b08ec:
    puVar1 = PTR_PTR_1126b4870;
    _objc_alloc(PTR_PTR_1126b4870);
    puVar14 = puVar1;
    if ((uVar12 & 1) == 0) {
      func_0x0001066255b0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x0001066255c0();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c053960(dVar17,uVar18,uVar19,puVar1);
    _objc_release(puVar14);
    _objc_release(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1050b07f0; end: 1050b097f;  */

void FUN_1050b07f0(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain();
  uVar5 = *(undefined8 *)PTR__CGSizeZero_110347620;
  uVar6 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  dVar4 = 20.0;
  do {
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(dVar4,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf720a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20ba0(uVar5,uVar6,param_4);
    dVar3 = param_3;
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (param_3 <= 248.0) {
      uVar5 = 0x4039000000000000;
      uVar6 = 0x3ff0000000000000;
      goto LAB_1050b08ec;
    }
    dVar4 = dVar4 + -0.5;
    param_3 = dVar3;
  } while (17.0 <= dVar4);
  uVar5 = 0x4035000000000000;
  uVar6 = 0x4000000000000000;
LAB_1050b08ec:
  puVar2 = PTR_PTR_1126b4870;
  _objc_alloc(PTR_PTR_1126b4870);
  puVar1 = puVar2;
  if ((param_5 & 1) == 0) {
    func_0x0001066255b0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x0001066255c0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c053960(dVar4,uVar5,uVar6,puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1050b0980; end: 1050b0acf; -[SCFriendProfileCharmsSectionDataProvider initWithUser:dataSource:charmsDataCoordinator:charmsViewingDataCoordinator:imageDownloader:shouldDisplayProfileStreakCounter:] */

undefined1 *
FUN_1050b0980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

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
  puStack_58 = PTR_PTR_1126e5fd0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x50) = param_8;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050b0ad0; end: 1050b0adb; +[SCFriendProfileCharmsSectionDataProvider announcerIdentifier] */

undefined ** FUN_1050b0ad0(void)

{
  return &PTR____CFConstantStringClassReference_110dc4d38;
}



/* Entry: 1050b0adc; end: 1050b0ae3; -[SCFriendProfileCharmsSectionDataProvider addListener:] */

void FUN_1050b0adc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1050b0ae4; end: 1050b0aeb; -[SCFriendProfileCharmsSectionDataProvider removeListener:] */

void FUN_1050b0ae4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1050b0aec; end: 1050b0b37; -[SCFriendProfileCharmsSectionDataProvider setUp] */

void FUN_1050b0aec(long param_1,undefined8 param_2)

{
  if ((*(byte *)(param_1 + 0x51) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x51) = 1;
  func_0x00010befc780(*(undefined8 *)(param_1 + 8),param_2,param_1);
  func_0x00010bef7c60(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bec9770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__syncCharms_11258ff80);
  return;
}



/* Entry: 1050b0b38; end: 1050b0c63; -[SCFriendProfileCharmsSectionDataProvider _syncCharms] */

void FUN_1050b0b38(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126b3ce8;
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c2923e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb9260(puVar4,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126b4878;
    func_0x00010bf35d00(PTR_PTR_1126b4878,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0a00(*(undefined8 *)(param_1 + 0x10),param_2,puVar5);
    puVar6 = PTR_PTR_1126b3cf0;
    _objc_alloc(PTR_PTR_1126b3cf0);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c15ffa0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffd8a0(puVar6,param_2,puVar4,uVar3);
    _objc_release(uVar3);
    func_0x00010bfd0a00(*(undefined8 *)(param_1 + 0x10),param_2,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 1050b0c64; end: 1050b0c93; -[SCFriendProfileCharmsSectionDataProvider tearDown] */

void FUN_1050b0c64(long param_1,undefined8 param_2)

{
  func_0x00010c12eea0(*(undefined8 *)(param_1 + 8),param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c12bd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeDataUpdateListener__112628978,param_1);
  return;
}



/* Entry: 1050b0c94; end: 1050b0f87; -[SCFriendProfileCharmsSectionDataProvider setSectionDataModel:] */

void FUN_1050b0c94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release();
  if (lVar4 != 0) {
    _dispatch_group_create();
    uStack_a0 = 0;
    uStack_90 = 0x3032000000;
    pcStack_88 = FUN_1050b0f88;
    uStack_80 = 0x1050b0f98;
    uStack_78 = 0;
    puStack_98 = &uStack_a0;
    _objc_initWeak(auStack_a8,param_1);
    _dispatch_group_enter(lVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    lVar4 = lVar2;
    func_0x00010c2923e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_1050b0fa0;
    puStack_c8 = &UNK_110866198;
    puStack_b8 = &uStack_a0;
    _objc_copyWeak(auStack_b0,auStack_a8);
    _objc_retain(lVar3);
    lStack_c0 = lVar3;
    func_0x00010bfa5960(uVar5);
    _objc_release(lVar4);
    uStack_100 = 0;
    uStack_f0 = 0x2020000000;
    uStack_e8 = 0;
    puStack_f8 = &uStack_100;
    _dispatch_group_enter(lVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    lVar4 = lVar2;
    func_0x00010c2923e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_130 = puVar1;
    uStack_128 = 0xc2000000;
    pcStack_120 = FUN_1050b1020;
    puStack_118 = &UNK_110860220;
    puStack_108 = &uStack_100;
    _objc_retain(lVar3);
    lStack_110 = lVar3;
    func_0x00010bfa76c0(uVar5);
    _objc_release(lVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c11de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puStack_170 = puVar1;
    uStack_168 = 0xc2000000;
    uStack_160 = 0x1050b105c;
    puStack_158 = &UNK_1108661c8;
    _objc_copyWeak(auStack_138,auStack_a8);
    puStack_148 = &uStack_a0;
    puStack_140 = &uStack_100;
    _objc_retain(lVar2);
    lStack_150 = lVar2;
    func_0x000100bc0718(lVar3,uVar5,&puStack_170);
    _objc_release(uVar5);
    _objc_release(lStack_150);
    _objc_destroyWeak(auStack_138);
    _objc_release(lStack_110);
    __Block_object_dispose(&uStack_100,8);
    _objc_release(lStack_c0);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_a8);
    __Block_object_dispose(&uStack_a0,8);
    _objc_release(uStack_78);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 1050b0f88; end: 1050b0f9f;  */

void FUN_1050b0f88(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}


