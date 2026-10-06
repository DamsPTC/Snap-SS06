/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107ac27a4; end: 107ac2b6b; -[SCDiscoverPublisherOperaSession operaViewDidSendEvent:page:params:] */

void FUN_107ac27a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c9310;
  func_0x00010c06dca0();
  if (((ulong)puVar1 & 1) != 0) goto LAB_107ac294c;
  uVar2 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar2 == 0) {
    func_0x00010beaf6e0(param_1);
    func_0x00010bed67a0(param_1);
    puVar1 = PTR_PTR_1126c9310;
    func_0x00010c0700c0();
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = PTR_PTR_1126b2330;
      func_0x00010bf96940(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010c0720c0();
      if ((int)uVar2 == 0) {
        puVar3 = PTR_PTR_1126b2330;
        func_0x00010bf17ae0(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_3;
        func_0x00010c0720c0();
        _objc_release(puVar3);
        _objc_release(puVar1);
        if ((int)uVar2 == 0) goto LAB_107ac294c;
      }
      else {
        _objc_release(puVar1);
      }
    }
    puVar1 = PTR_PTR_1126b2330;
    func_0x00010bf17ae0(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar2 == 0) {
      puVar3 = PTR_PTR_1126b2330;
      func_0x00010bf96940(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010c0720c0();
      _objc_release(puVar3);
      _objc_release(puVar1);
      if ((int)uVar2 == 0) {
        puVar1 = PTR_PTR_1126c9c10;
        func_0x00010bf3dbe0(PTR_PTR_1126c9c10);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_3;
        func_0x00010c0720c0();
        _objc_release(puVar1);
        if ((int)uVar2 == 0) {
          uVar2 = param_3;
          func_0x00010c0720c0();
          if ((int)uVar2 == 0) {
            uVar2 = param_3;
            func_0x00010c0720c0();
            if ((int)uVar2 == 0) {
              puVar1 = PTR_PTR_1126b2330;
              func_0x00010bf3df00(PTR_PTR_1126b2330);
              _objc_retainAutoreleasedReturnValue();
              uVar2 = param_3;
              func_0x00010c0720c0();
              _objc_release(puVar1);
              puVar1 = PTR_PTR_1126b2340;
              if ((int)uVar2 == 0) {
                puVar1 = PTR_PTR_1126b2330;
                func_0x00010c0e9cc0(PTR_PTR_1126b2330);
                _objc_retainAutoreleasedReturnValue();
                uVar2 = param_3;
                func_0x00010c0720c0();
                _objc_release(puVar1);
                if ((int)uVar2 != 0) {
                  *(undefined1 *)(param_1 + 0xa1) = 1;
                }
              }
              else {
                uVar2 = param_4;
                func_0x00010c118b40(param_4);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c076c60();
                _objc_release(uVar2);
                if ((int)puVar1 != 0) {
                  lVar4 = param_1 + 0x10;
                  _objc_loadWeakRetained(lVar4);
                  lVar5 = lVar4;
                  func_0x00010c29d360();
                  func_0x000108534a80();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x000107d04cb0();
                  _objc_release(lVar5);
                  _objc_release(lVar4);
                }
                *(undefined1 *)(param_1 + 0xa1) = 0;
              }
            }
            else {
              func_0x00010be18e00(param_1);
            }
          }
          else {
            func_0x00010be18e00(param_1);
            func_0x00010be09d20(param_1);
            func_0x00010c26ac40(*(undefined8 *)(param_1 + 0x88));
            *(undefined1 *)(param_1 + 0xa0) = 0;
          }
          goto LAB_107ac294c;
        }
        lVar4 = param_1 + 0x50;
        _objc_loadWeakRetained(lVar4);
        lVar5 = lVar4;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a6a40();
        _objc_release(lVar5);
        _objc_release(lVar4);
        puVar1 = (undefined *)(param_1 + 0x1a8);
        _objc_loadWeakRetained(puVar1);
        puVar3 = PTR_PTR_1126c9310;
        func_0x00010bf631e0(PTR_PTR_1126c9310);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c101400(puVar1);
        goto LAB_107ac2834;
      }
    }
    else {
      _objc_release(puVar1);
    }
    func_0x00010be09d20(param_1);
  }
  else {
    puVar1 = (undefined *)(param_1 + 0x1a0);
    _objc_loadWeakRetained(puVar1);
    puVar3 = puVar1;
    func_0x00010c29cc40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf82f40();
LAB_107ac2834:
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
LAB_107ac294c:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ac2b6c; end: 107ac2b73; -[SCDiscoverPublisherOperaSession _forwardEventToCurrentSingleDiscoverPublisherOperaSession:page:params:] */

void FUN_107ac2b6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eb7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x88),PTR_s_operaViewDidSendEvent_page_param_112618808);
  return;
}



/* Entry: 107ac2b74; end: 107ac2c5f; -[SCDiscoverPublisherOperaSession didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_107ac2b74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf7dbc0(*(undefined8 *)(param_1 + 0x80),param_2,param_3,param_4,param_5);
  puVar1 = PTR_PTR_1126d6408;
  _objc_opt_class(PTR_PTR_1126d6408);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0720c0(param_4,param_2,puVar1);
  _objc_release(puVar1);
  if ((int)uVar2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0();
    _objc_release(lVar3);
    _objc_release(param_1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ac2c60; end: 107ac2e87; -[SCDiscoverPublisherOperaSession extraPropertiesForDataModel:item:baseOperaPage:completion:] */

void FUN_107ac2c60(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126c9870;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  if (uVar1 == 0) {
    (**(code **)(param_6 + 0x10))(param_6,0,0);
  }
  else {
    puStack_98 = &uStack_a0;
    uStack_a0 = 0;
    uStack_90 = 0x3032000000;
    pcStack_88 = FUN_107ac2e88;
    uStack_80 = 0x107ac2e98;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = &uStack_d0;
    uStack_d0 = 0;
    uStack_c0 = 0x3032000000;
    pcStack_b8 = FUN_107ac2e88;
    uStack_b0 = 0x107ac2e98;
    uStack_a8 = 0;
    puStack_78 = puVar2;
    func_0x00010bf9ea80(*(undefined8 *)(param_1 + 0x88));
    uVar4 = puStack_98[5];
    func_0x00010bf51e00(uVar4);
    uVar5 = puStack_c8[5];
    func_0x00010bf51e00(uVar5);
    (**(code **)(param_6 + 0x10))(param_6,uVar4,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar4);
    __Block_object_dispose(&uStack_d0,8);
    _objc_release(uStack_a8);
    __Block_object_dispose(&uStack_a0,8);
    _objc_release(puStack_78);
  }
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107ac2e88; end: 107ac2e9f;  */

void FUN_107ac2e88(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107ac2ea0; end: 107ac2f0f;  */

void FUN_107ac2ea0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  _objc_retain(param_3);
  func_0x00010bef7f60(uVar3);
  uVar3 = param_3;
  func_0x00010bf51e00();
  _objc_release(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ac2f10; end: 107ac2f67; -[SCDiscoverPublisherOperaSession _addNotifications] */

void FUN_107ac2f10(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ac2f68; end: 107ac2f8f; -[SCDiscoverPublisherOperaSession _viewWillEnterForeground] */

void FUN_107ac2f68(long param_1)

{
  func_0x00010c29e8e0(*(undefined8 *)(param_1 + 0x88));
  *(undefined1 *)(param_1 + 0xa0) = 0;
  return;
}



/* Entry: 107ac2f90; end: 107ac3123; -[SCDiscoverPublisherOperaSession _setupReportSessionIfNecessary] */

void FUN_107ac2f90(long param_1,undefined8 param_2)

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
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (*(long *)(param_1 + 0x90) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126d6408;
  _objc_alloc();
  lVar2 = param_1 + 0x1a0;
  _objc_loadWeakRetained(lVar2);
  lVar3 = param_1 + 8;
  _objc_loadWeakRetained(lVar3);
  lVar4 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c29d360();
  lVar6 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 0x158);
  lVar8 = param_1 + 0x58;
  _objc_loadWeakRetained();
  lVar9 = param_1 + 0x1a8;
  _objc_loadWeakRetained();
  lVar10 = param_1 + 0x188;
  _objc_loadWeakRetained();
  func_0x00010c031ca0(puVar1,param_2,lVar2,lVar3,lVar5,lVar7,uVar12,0,0,lVar8,lVar9,lVar10);
  uVar12 = *(undefined8 *)(param_1 + 0x90);
  *(undefined **)(param_1 + 0x90) = puVar1;
  _objc_release(uVar12);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010bef9980(*(undefined8 *)(param_1 + 0x90),param_2,param_1);
  lVar2 = param_1 + 0x98;
  _objc_loadWeakRetained(lVar2);
  uVar11 = *(undefined8 *)(param_1 + 0x90);
  uVar12 = uVar11;
  func_0x00010c127820(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef99a0(lVar2,param_2,uVar11,uVar12);
  _objc_release(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107ac3124; end: 107ac34af; -[SCDiscoverPublisherOperaSession _updateCurrentSingleDiscoverPublisherOperaSessionIfNecessaryWithPage:event:] */

void FUN_107ac3124(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar10 = param_4;
  func_0x00010c0720c0();
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9cc0(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c0720c0();
  if ((int)uVar4 == 0) {
    puVar3 = PTR_PTR_1126b2330;
    func_0x00010c0e9c40(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    _objc_release(puVar2);
    if ((((uint)uVar4 | (uint)uVar10) & 1) == 0) goto LAB_107ac3488;
  }
  else {
    _objc_release(puVar2);
  }
  uVar4 = *(ulong *)(param_1 + 0x88);
  func_0x00010c25a740();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010c06b7e0();
  if ((int)uVar12 == 0) {
    bVar1 = false;
  }
  else {
    puVar2 = PTR_PTR_1126c9310;
    func_0x00010bf8c9a0();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = puVar2 != (undefined *)0x0;
    _objc_release();
  }
  puVar2 = PTR_PTR_1126c9310;
  func_0x00010c0700c0();
  if ((((ulong)puVar2 & 1) != 0) || (bVar1)) {
    puVar2 = PTR_PTR_1126c9310;
    func_0x00010c2805a0(PTR_PTR_1126c9310);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + 0x1a8;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010c1014c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    uVar13 = param_1 + 0x1a8;
    _objc_loadWeakRetained();
    uVar7 = uVar13;
    func_0x00010bf63e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar13);
    puVar3 = PTR_PTR_1126bdd28;
    _objc_opt_class(PTR_PTR_1126bdd28);
    uVar8 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar3);
    uVar13 = uVar7;
    if ((uVar8 & 1) == 0) {
      uVar13 = 0;
    }
    _objc_retain(uVar13);
    _objc_release(uVar7);
    _objc_release(lVar6);
    _objc_release(puVar2);
  }
  else {
    uVar13 = 0;
  }
  if ((uVar13 != uVar4 || (uVar10 & 1) != 0) &&
     ((!bVar1 || (uVar10 = uVar13, func_0x00010bfd5020(), (uVar10 & 1) == 0)))) {
    if (uVar4 != 0) {
      func_0x00010be09900(param_1);
      uVar9 = *(undefined8 *)(param_1 + 0x88);
      func_0x00010c2424e0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar9;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      func_0x00010c26ac40(*(undefined8 *)(param_1 + 0x88));
      uVar10 = *(ulong *)(param_1 + 0x88);
      *(undefined8 *)(param_1 + 0x88) = 0;
      _objc_release();
      func_0x0001008522a8();
      if ((uVar10 & 1) == 0) {
        lVar5 = param_1 + 0x1a8;
        _objc_loadWeakRetained(lVar5);
        lVar6 = lVar5;
        func_0x00010c101420();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        lVar5 = param_1 + 0x1a8;
        _objc_loadWeakRetained();
        lVar11 = lVar5;
        func_0x00010bf63e60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        if (lVar11 != 0) {
          lVar5 = param_1 + 0x1a8;
          _objc_loadWeakRetained(lVar5);
          func_0x00010c101400();
          _objc_release(lVar5);
        }
        _objc_release(lVar11);
        _objc_release(lVar6);
      }
      _objc_release(uVar12);
    }
    if (uVar13 != 0) {
      func_0x00010c29d360(uVar13);
      func_0x00010bea1180(param_1);
      lVar5 = param_1;
      func_0x00010bebc260();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_1 + 0x88);
      *(long *)(param_1 + 0x88) = lVar5;
      _objc_release(uVar12);
      func_0x00010c1872c0(*(undefined8 *)(param_1 + 0x138));
      puVar2 = PTR_PTR_1126c9310;
      func_0x00010bf631e0(PTR_PTR_1126c9310);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf18f60(*(undefined8 *)(param_1 + 0x88));
      func_0x00010c1dd380(*(undefined8 *)(param_1 + 0x90));
      _objc_release(puVar2);
    }
  }
  _objc_release(uVar13);
  _objc_release(uVar4);
LAB_107ac3488:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ac34b0; end: 107ac34b7; -[SCDiscoverPublisherOperaSession _endCurrentsingleDiscoverPublisherOperaSessionAndAggregateMetrics] */

void FUN_107ac34b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf953d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x88),PTR_s_endSession_1125c2e98)
  ;
  return;
}



/* Entry: 107ac34b8; end: 107ac37a3; -[SCDiscoverPublisherOperaSession _singleDiscoverPublisherOperaSessionForStoryPlayableDataModel:openPage:] */

void FUN_107ac34b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  
  puVar11 = PTR_PTR_1126d6410;
  _objc_retain(param_3);
  _objc_alloc();
  lVar12 = param_1 + 0x98;
  _objc_loadWeakRetained();
  uVar27 = *(undefined8 *)(param_1 + 0x78);
  lVar13 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar14 = param_1 + 0x1a0;
  _objc_loadWeakRetained();
  lVar15 = param_1 + 0x1a8;
  _objc_loadWeakRetained();
  lVar16 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar17 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar18 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar19 = param_1 + 0x48;
  _objc_loadWeakRetained();
  lVar20 = param_1 + 0x40;
  _objc_loadWeakRetained();
  lVar21 = param_1 + 0x50;
  _objc_loadWeakRetained();
  lVar22 = param_1 + 0x38;
  _objc_loadWeakRetained();
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  uVar6 = *(undefined8 *)(param_1 + 0xb0);
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  uVar7 = *(undefined8 *)(param_1 + 0xc0);
  uVar3 = *(undefined8 *)(param_1 + 200);
  uVar8 = *(undefined8 *)(param_1 + 0xd0);
  lVar23 = param_1 + 0x60;
  _objc_loadWeakRetained();
  uVar28 = *(undefined8 *)(param_1 + 0x68);
  lVar24 = param_1 + 0x58;
  _objc_loadWeakRetained();
  uVar29 = *(undefined8 *)(param_1 + 0xd8);
  uVar4 = *(undefined8 *)(param_1 + 0xe8);
  uVar9 = *(undefined8 *)(param_1 + 0xf0);
  uVar30 = *(undefined8 *)(param_1 + 0xf8);
  lVar25 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar5 = *(undefined8 *)(param_1 + 0x100);
  uVar10 = *(undefined8 *)(param_1 + 0x108);
  lVar26 = param_1 + 0x28;
  _objc_loadWeakRetained();
  func_0x00010c031d60(puVar11,*(undefined8 *)(param_1 + 0x170),lVar12,uVar27,param_3,lVar13,lVar14,
                      lVar15,lVar16,lVar17,lVar18,lVar19,lVar20,lVar21,lVar22,uVar3,uVar1,uVar6,
                      uVar2,uVar7,uVar8,lVar23,uVar28,lVar24,uVar29,uVar4,uVar9,uVar30,lVar25,uVar5,
                      uVar10,lVar26,*(undefined8 *)(param_1 + 0x110),
                      *(undefined8 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x120),
                      *(undefined8 *)(param_1 + 0x138),*(undefined8 *)(param_1 + 0x128),
                      *(undefined8 *)(param_1 + 0x140),*(undefined8 *)(param_1 + 0x148),
                      *(undefined8 *)(param_1 + 0x150),*(undefined8 *)(param_1 + 0x160),
                      *(undefined8 *)(param_1 + 0x168),*(undefined8 *)(param_1 + 0xe0),
                      *(undefined8 *)(param_1 + 0x170),*(undefined8 *)(param_1 + 0x70),
                      *(undefined8 *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x178),
                      *(undefined8 *)(param_1 + 0x180),*(undefined8 *)(param_1 + 400),
                      *(undefined8 *)(param_1 + 0x198));
  _objc_release(param_3);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  func_0x00010bef9980(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 107ac37a4; end: 107ac37bb; -[SCDiscoverPublisherOperaSession _endSession] */

void FUN_107ac37a4(long param_1)

{
  if ((*(byte *)(param_1 + 0xa0) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0xa0) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be09910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__endCurrentsingleDiscoverPublish_11255ffe0);
  return;
}



/* Entry: 107ac37bc; end: 107ac38f7; -[SCDiscoverPublisherOperaSession _sendViewLocationUpdateIfNeeded:withPage:] */

void FUN_107ac37bc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  if (param_3 != -1) {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c29d360();
    _objc_release(lVar1);
    if (param_3 != lVar2) {
      param_1 = param_1 + 0x98;
      _objc_loadWeakRetained(param_1);
      ppuStack_58 = &PTR____CFConstantStringClassReference_110ebebd8;
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_50 = puVar3;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&ppuStack_58,
                          1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eb7c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ebeb98,param_4,
                          puVar4);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(param_1);
    }
  }
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained(param_4 + 0x1a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ac38f8; end: 107ac390f; -[SCDiscoverPublisherOperaSession operaControlling] */

void FUN_107ac38f8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x1a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ac3910; end: 107ac391b; -[SCDiscoverPublisherOperaSession setOperaControlling:] */

void FUN_107ac3910(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x1a0,param_3);
  return;
}



/* Entry: 107ac391c; end: 107ac3933; -[SCDiscoverPublisherOperaSession playlistItemController] */

void FUN_107ac391c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x1a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ac3934; end: 107ac393f; -[SCDiscoverPublisherOperaSession setPlaylistItemController:] */

void FUN_107ac3934(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x1a8,param_3);
  return;
}



/* Entry: 107ac3940; end: 107ac3b6f; -[SCDiscoverPublisherOperaSession .cxx_destruct] */

void FUN_107ac3940(long param_1)

{
  _objc_destroyWeak(param_1 + 0x1a8);
  _objc_destroyWeak(param_1 + 0x1a0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_destroyWeak(param_1 + 0x188);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_destroyWeak(param_1 + 0x98);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_destroyWeak(param_1 + 0x60);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107ac3b70; end: 107ac3b7b; +[SCDiscoverPublisherSubscriptionSession announcerIdentifier] */

undefined ** FUN_107ac3b70(void)

{
  return &PTR____CFConstantStringClassReference_110eac2f8;
}



/* Entry: 107ac3b7c; end: 107ac3cf3; -[SCDiscoverPublisherSubscriptionSession initWithPublisherName:subscriptionStore:discoverFeedEventsController:discoverFeedDataFetcher:loggingContext:editionId:discoverBlizzardLogger:creatorSettingsFetcher:] */

undefined1 *
FUN_107ac3b7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  puStack_68 = PTR_PTR_1126f9ac8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_7);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_4);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_8;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_9);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_10);
  }
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



/* Entry: 107ac3cf4; end: 107ac3cff; -[SCDiscoverPublisherSubscriptionSession setLoggingContext:] */

void FUN_107ac3cf4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 107ac3d00; end: 107ac3e4b; -[SCDiscoverPublisherSubscriptionSession registeredEventsForOperaSession] */

void FUN_107ac3d00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  ulong uVar15;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c9ce8;
  func_0x00010c260540();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9ce8;
  puStack_88 = puVar1;
  func_0x00010c250c60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c9ce8;
  puStack_80 = puVar2;
  func_0x00010c260500();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c9ce8;
  puStack_78 = puVar3;
  func_0x00010c260740();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c9ce8;
  puStack_70 = puVar4;
  func_0x00010c260520();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c9ce8;
  puStack_68 = puVar5;
  func_0x00010c2605e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = &puStack_88;
  uVar15 = 6;
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar6;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar14);
  _objc_retain(uVar15);
  uVar8 = uVar15;
  func_0x00010c118b40(uVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9310;
  func_0x00010c06dca0(PTR_PTR_1126c9310,param_2,uVar15);
  if (((ulong)puVar2 & 1) != 0) goto LAB_107ac40c8;
  uVar9 = uVar15;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c0720c0();
  if ((uVar10 & 1) == 0) {
    _objc_retain(uVar9);
    uVar11 = *(undefined8 *)(puVar1 + 0x38);
    *(ulong *)(puVar1 + 0x38) = uVar9;
    _objc_release(uVar11);
    puVar2 = PTR_PTR_1126c9310;
    func_0x00010bf631e0(PTR_PTR_1126c9310,param_2,uVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(puVar1 + 0x40);
    *(undefined **)(puVar1 + 0x40) = puVar2;
    _objc_release(uVar11);
    puVar2 = PTR_PTR_1126c9310;
    func_0x00010c259760(PTR_PTR_1126c9310,param_2,uVar15);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c282800();
    *(undefined **)(puVar1 + 0x50) = puVar3;
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126c9310;
  func_0x00010c11b200(PTR_PTR_1126c9310,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c9310;
  func_0x00010bf8c9a0(PTR_PTR_1126c9310,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c9310;
  func_0x00010bf631e0(PTR_PTR_1126c9310,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c0720c0(puVar2,param_2,*(undefined8 *)(puVar1 + 0x58));
  if ((int)puVar5 != 0) {
    puVar5 = PTR_PTR_1126b2340;
    func_0x00010c077200(PTR_PTR_1126b2340,param_2,uVar8);
    if ((int)puVar5 != 0) {
      puVar5 = PTR_PTR_1126c9ce8;
      func_0x00010c250c60(PTR_PTR_1126c9ce8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar14;
      func_0x00010c0720c0(ppuVar14,param_2,puVar5);
      _objc_release(puVar5);
      if ((int)ppuVar12 != 0) {
        func_0x00010be72ae0(puVar1,param_2,3,puVar3,puVar2,puVar4);
      }
    }
    puVar5 = PTR_PTR_1126c9ce8;
    func_0x00010c250c60(PTR_PTR_1126c9ce8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar14;
    func_0x00010c0720c0(ppuVar14,param_2,puVar5);
    _objc_release(puVar5);
    if ((int)ppuVar12 == 0) {
      puVar5 = PTR_PTR_1126c9ce8;
      func_0x00010c260500(PTR_PTR_1126c9ce8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar14;
      func_0x00010c0720c0(ppuVar14,param_2,puVar5);
      _objc_release(puVar5);
      if ((int)ppuVar12 == 0) {
        puVar5 = PTR_PTR_1126c9ce8;
        func_0x00010c2605e0(PTR_PTR_1126c9ce8);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = ppuVar14;
        func_0x00010c0720c0(ppuVar14,param_2,puVar5);
        _objc_release(puVar5);
        if ((int)ppuVar12 == 0) {
          puVar5 = PTR_PTR_1126c9ce8;
          func_0x00010c260540(PTR_PTR_1126c9ce8);
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = ppuVar14;
          func_0x00010c0720c0(ppuVar14,param_2,puVar5);
          _objc_release(puVar5);
          if ((int)ppuVar12 != 0) {
            uVar11 = 0;
            goto LAB_107ac4040;
          }
        }
        else {
          puVar5 = puVar1 + 0x60;
          _objc_loadWeakRetained();
          puVar6 = puVar5;
          func_0x00010c101260();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010bfcf800();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar7;
          func_0x00010bf529e0();
          _objc_release(puVar7);
          _objc_release(puVar6);
          _objc_release(puVar5);
          if ((undefined *)0x1 < puVar13) {
            puVar1 = puVar1 + 0x60;
            _objc_loadWeakRetained(puVar1);
            func_0x00010bf0c2a0();
            _objc_release(puVar1);
          }
        }
      }
      else {
        puVar1 = puVar1 + 0x60;
        _objc_loadWeakRetained(puVar1);
        func_0x00010bf0c2a0();
        _objc_release(puVar1);
      }
    }
    else {
      uVar11 = 3;
LAB_107ac4040:
      func_0x00010be72ae0(puVar1,param_2,uVar11,puVar3,puVar2,puVar4);
    }
  }
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(uVar9);
LAB_107ac40c8:
  _objc_release(uVar8);
  _objc_release(uVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar14);
  return;
}



/* Entry: 107ac3e4c; end: 107ac41e7; -[SCDiscoverPublisherSubscriptionSession operaViewDidSendEvent:page:params:] */

void FUN_107ac3e4c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c118b40(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9310;
  func_0x00010c06dca0(PTR_PTR_1126c9310,param_2,param_4);
  if (((ulong)puVar2 & 1) != 0) goto LAB_107ac40c8;
  uVar3 = param_4;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0720c0();
  if ((uVar4 & 1) == 0) {
    _objc_retain(uVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    *(ulong *)(param_1 + 0x38) = uVar3;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126c9310;
    func_0x00010bf631e0(PTR_PTR_1126c9310,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    *(undefined **)(param_1 + 0x40) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126c9310;
    func_0x00010c259760(PTR_PTR_1126c9310,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c282800();
    *(undefined **)(param_1 + 0x50) = puVar6;
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126c9310;
  func_0x00010c11b200(PTR_PTR_1126c9310,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c9310;
  func_0x00010bf8c9a0(PTR_PTR_1126c9310,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c9310;
  func_0x00010bf631e0(PTR_PTR_1126c9310,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  func_0x00010c0720c0(puVar2,param_2,*(undefined8 *)(param_1 + 0x58));
  if ((int)puVar8 != 0) {
    puVar8 = PTR_PTR_1126b2340;
    func_0x00010c077200(PTR_PTR_1126b2340,param_2,uVar1);
    if ((int)puVar8 != 0) {
      puVar8 = PTR_PTR_1126c9ce8;
      func_0x00010c250c60(PTR_PTR_1126c9ce8);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_3;
      func_0x00010c0720c0(param_3,param_2,puVar8);
      _objc_release(puVar8);
      if ((int)uVar5 != 0) {
        func_0x00010be72ae0(param_1,param_2,3,puVar6,puVar2,puVar7);
      }
    }
    puVar8 = PTR_PTR_1126c9ce8;
    func_0x00010c250c60(PTR_PTR_1126c9ce8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar8);
    _objc_release(puVar8);
    if ((int)uVar5 == 0) {
      puVar8 = PTR_PTR_1126c9ce8;
      func_0x00010c260500(PTR_PTR_1126c9ce8);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_3;
      func_0x00010c0720c0(param_3,param_2,puVar8);
      _objc_release(puVar8);
      if ((int)uVar5 == 0) {
        puVar8 = PTR_PTR_1126c9ce8;
        func_0x00010c2605e0(PTR_PTR_1126c9ce8);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_3;
        func_0x00010c0720c0(param_3,param_2,puVar8);
        _objc_release(puVar8);
        if ((int)uVar5 == 0) {
          puVar8 = PTR_PTR_1126c9ce8;
          func_0x00010c260540(PTR_PTR_1126c9ce8);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = param_3;
          func_0x00010c0720c0(param_3,param_2,puVar8);
          _objc_release(puVar8);
          if ((int)uVar5 != 0) {
            uVar5 = 0;
            goto LAB_107ac4040;
          }
        }
        else {
          uVar4 = param_1 + 0x60;
          _objc_loadWeakRetained();
          uVar9 = uVar4;
          func_0x00010c101260();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar9;
          func_0x00010bfcf800();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar10;
          func_0x00010bf529e0();
          _objc_release(uVar10);
          _objc_release(uVar9);
          _objc_release(uVar4);
          if (1 < uVar11) {
            param_1 = param_1 + 0x60;
            _objc_loadWeakRetained(param_1);
            func_0x00010bf0c2a0();
            _objc_release(param_1);
          }
        }
      }
      else {
        param_1 = param_1 + 0x60;
        _objc_loadWeakRetained(param_1);
        func_0x00010bf0c2a0();
        _objc_release(param_1);
      }
    }
    else {
      uVar5 = 3;
LAB_107ac4040:
      func_0x00010be72ae0(param_1,param_2,uVar5,puVar6,puVar2,puVar7);
    }
  }
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_release(puVar6);
  _objc_release(uVar3);
LAB_107ac40c8:
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ac41e8; end: 107ac43df; -[SCDiscoverPublisherSubscriptionSession _performSubscriptionFromSource:publisherId:editionId:snapId:] */

void FUN_107ac41e8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 auStack_80 [8];
  long lStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf5b7e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c080120();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (((int)lVar4 == 0) || ((param_3 != 3 && (param_3 != 5)))) {
    puVar5 = PTR_PTR_1126b64a8;
    _objc_alloc(PTR_PTR_1126b64a8);
    func_0x00010c010060();
    _objc_initWeak(auStack_68,param_1);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    _objc_copyWeak(auStack_80,auStack_68);
    uStack_70 = (undefined1)lVar4;
    lStack_78 = param_3;
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_4);
    func_0x00010c28a900(param_1);
    _objc_release(param_1);
    _objc_release(param_4);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar5);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 107ac43e0; end: 107ac456b;  */

void FUN_107ac43e0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_107ac456c;
    puStack_70 = &UNK_110842e18;
    lStack_68 = lVar1;
    func_0x000100162d98("APPSTORE",&puStack_88);
    func_0x00010be595a0(lVar1);
    lVar2 = *(long *)(param_1 + 0x20) + 0x28;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar1 + 0x10;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c278ec0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1 + 0x10;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010bf3fe40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1 + 0x10;
    _objc_loadWeakRetained(lVar7);
    func_0x00010bf3ffe0();
    lVar8 = lVar1 + 0x10;
    _objc_loadWeakRetained();
    func_0x00010bf400c0();
    func_0x00010c0b1420(lVar2);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 107ac456c; end: 107ac4573;  */

void FUN_107ac456c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec8970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__subscriptionStateDidChange_11258fc00);
  return;
}



/* Entry: 107ac4574; end: 107ac45ff; -[SCDiscoverPublisherSubscriptionSession _subscriptionStateDidChange] */

void FUN_107ac4574(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x60;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  param_1 = param_1 + 0x60;
  _objc_loadWeakRetained(param_1);
  lVar1 = lVar2;
  func_0x00010be36bc0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c101400(param_1,param_2,lVar1);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107ac4600; end: 107ac4743; -[SCDiscoverPublisherSubscriptionSession _logSubscribeToStoryWithIsSubscribed:] */

void FUN_107ac4600(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c25bac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    uVar5 = 6;
    if (param_3 == 0) {
      uVar5 = 7;
    }
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    FUN_107cb4cfc(uVar5,lVar3,0xffffffffffffffff,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00c560(puVar4);
    _objc_release(uVar5);
    func_0x00010c1d0640(puVar4);
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    _objc_opt_class(param_1);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(lVar1);
    _objc_release(param_1);
    _objc_release(lVar1);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 107ac4744; end: 107ac475b; -[SCDiscoverPublisherSubscriptionSession playlistItemController] */

void FUN_107ac4744(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ac475c; end: 107ac4767; -[SCDiscoverPublisherSubscriptionSession setPlaylistItemController:] */

void FUN_107ac475c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 107ac4768; end: 107ac47e7; -[SCDiscoverPublisherSubscriptionSession .cxx_destruct] */

void FUN_107ac4768(long param_1)

{
  _objc_destroyWeak(param_1 + 0x60);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107ac47e8; end: 107ac47f3; +[SCDiscoverSharingSession announcerIdentifier] */

undefined ** FUN_107ac47e8(void)

{
  return &PTR____CFConstantStringClassReference_110eac318;
}



/* Entry: 107ac47f4; end: 107ac47fb; -[SCDiscoverSharingSession addListener:] */

void FUN_107ac47f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 107ac47fc; end: 107ac4803; -[SCDiscoverSharingSession removeListener:] */

void FUN_107ac47fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107ac4804; end: 107ac500f; -[SCDiscoverSharingSession initWithStoryPlayableDataModel:userSession:operaControlling:playlistItemController:loggingContext:logger:videoFilterAdaptor:permissionRequester:notificationOSSettingsRetriever:impalaProfilePresentHandler:previewFilterDataProviderCreator:operaEventAnnouncing:notificationPool:viewLocation:imageDownloader:creatorSettingsMutator:creatorSettingsFetcher:creatorSettingsTracker:lazyDiscoverFeedEventsLogger:lazyDiscoverFeedInteractionHistoryManager:sendToScopeLauncher:lazyDiscoverFeedDataFetcher:lazyDiscoverFeedDataMutator:bitmojiImageFetcher:discoverFeedNotificationOptInRequestManager:offPlatformLinkGenerationService:snapVideoFilterFactory:previewURLVideoProvider:streamingMediaFetcher:circumstanceEngine:externalLinkSendingService:grapheneRegistry:boostCoordinator:subscriptionWorkflowStarter:offPlatformShareServices:storyViewingSessionId:snapDocEditorFactory:previewSnapSenderFactory:triggeringSection:storiesConfigProvider:imageFetchingService:] */

undefined8 *
FUN_107ac4804(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
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
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_42);
  _objc_retain(param_43);
  puStack_70 = PTR_PTR_1126f9ad0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
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
    _objc_storeWeak(puVar1 + 3,param_5);
    _objc_storeWeak(puVar1 + 4,param_6);
    _objc_retain(param_7);
    uVar2 = puVar1[8];
    puVar1[8] = param_7;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 5,param_8);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_13;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 6,param_14);
    _objc_retain(param_15);
    uVar2 = puVar1[7];
    puVar1[7] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_22;
    _objc_release(uVar2);
    puVar1[0x19] = param_16;
    _objc_retain(param_17);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_37;
    _objc_release(uVar2);
    uVar2 = param_37;
    func_0x00010bfa2a40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0x20];
    puVar1[0x20] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_29);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_36;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c2120;
    _objc_opt_new();
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = param_38;
    _objc_release(uVar2);
    _objc_retain(param_39);
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = param_39;
    _objc_release(uVar2);
    _objc_retain(param_40);
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = param_40;
    _objc_release(uVar2);
    puVar1[0x30] = param_41;
    _objc_retain(param_42);
    uVar2 = puVar1[0x31];
    puVar1[0x31] = param_42;
    _objc_release(uVar2);
    _objc_retain(param_43);
    uVar2 = puVar1[0x32];
    puVar1[0x32] = param_43;
    _objc_release(uVar2);
  }
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_15);
  _objc_release(param_14);
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



/* Entry: 107ac5010; end: 107ac5017; -[SCDiscoverSharingSession state] */

void FUN_107ac5010(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c252450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x48),PTR_s_state_112672338);
  return;
}



/* Entry: 107ac5018; end: 107ac530b; -[SCDiscoverSharingSession registeredEventsForOperaSession] */

void FUN_107ac5018(void)

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
  ulong uVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  ulong uVar16;
  undefined8 in_x4;
  undefined1 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined *puVar20;
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined *puStack_2c8;
  ulong uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 auStack_2b0 [8];
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  ulong uStack_288;
  undefined8 uStack_280;
  undefined1 auStack_278 [8];
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined *puStack_258;
  ulong uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [8];
  undefined *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  ulong uStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined1 uStack_1f8;
  undefined1 auStack_1f0 [8];
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
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
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar20 = PTR_PTR_1126b2ea8;
  func_0x00010c22d420();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2ea8;
  puStack_120 = puVar20;
  puStack_118 = puVar20;
  func_0x00010c22d440();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR_PTR_1126b2ea8;
  puStack_128 = puVar1;
  puStack_110 = puVar1;
  func_0x00010c0b4cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2ea8;
  puStack_130 = puVar20;
  puStack_108 = puVar20;
  func_0x00010c0b4e00();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR_PTR_1126b2ea8;
  puStack_138 = puVar1;
  puStack_100 = puVar1;
  func_0x00010c235940();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2d30;
  puStack_140 = puVar20;
  puStack_f8 = puVar20;
  func_0x00010bf8c140();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR_PTR_1126b2d30;
  puStack_148 = puVar1;
  puStack_f0 = puVar1;
  func_0x00010c15c9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2d30;
  puStack_150 = puVar20;
  puStack_e8 = puVar20;
  func_0x00010bf52060();
  puVar20 = PTR_PTR_1126b2d30;
  puStack_158 = puVar1;
  puStack_e0 = puVar1;
  func_0x00010bf940a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2d30;
  puStack_160 = puVar20;
  puStack_d8 = puVar20;
  func_0x00010bfdffe0();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR_PTR_1126b6160;
  puStack_d0 = puVar1;
  func_0x00010c277180();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b6160;
  puStack_c8 = puVar20;
  func_0x00010bf3d9e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110eb0218;
  puVar3 = PTR_PTR_1126b2d30;
  puStack_c0 = puVar2;
  func_0x00010c149e20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2ea8;
  puStack_b0 = puVar3;
  func_0x00010c268600();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2d30;
  puStack_a8 = puVar4;
  func_0x00010c25fd00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b2d30;
  puStack_a0 = puVar5;
  func_0x00010c0dc460();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_90 = &PTR____CFConstantStringClassReference_110e50dd8;
  puVar7 = PTR_PTR_1126b2ce8;
  puStack_98 = puVar6;
  func_0x00010c25fe20();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b2d30;
  puStack_88 = puVar7;
  func_0x00010bfa1100();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_78 = &PTR____CFConstantStringClassReference_110eb0258;
  ppuVar15 = &puStack_118;
  uVar16 = 0x15;
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar20);
  _objc_release(puVar1);
  _objc_release(puStack_160);
  _objc_release(puStack_158);
  _objc_release(puStack_150);
  _objc_release(puStack_148);
  _objc_release(puStack_140);
  _objc_release(puStack_138);
  _objc_release(puStack_130);
  _objc_release(puStack_128);
  puVar10 = puStack_120;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return;
  }
  ___stack_chk_fail();
  ppuVar14 = &puStack_2e0;
  pcStack_168 = FUN_107ac530c;
  puStack_1c0 = puVar1;
  puStack_1b8 = puVar9;
  puStack_1b0 = puVar7;
  puStack_1a8 = puVar6;
  puStack_1a0 = puVar5;
  puStack_198 = puVar4;
  puStack_190 = puVar8;
  puStack_188 = puVar3;
  puStack_180 = puVar2;
  puStack_178 = puVar20;
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar15);
  _objc_retain(uVar16);
  _objc_retain(in_x4);
  puVar20 = PTR_PTR_1126c9310;
  func_0x00010c0700c0();
  if ((((int)puVar20 == 0) || (uVar11 = uVar16, func_0x00010c06b7e0(), (uVar11 & 1) != 0)) ||
     (puVar20 = PTR_PTR_1126c9310, func_0x00010c06dca0(), ((ulong)puVar20 & 1) != 0))
  goto LAB_107ac5468;
  _objc_retain(uVar16);
  uVar12 = *(undefined8 *)(puVar10 + 0x58);
  *(ulong *)(puVar10 + 0x58) = uVar16;
  _objc_release(uVar12);
  ppuVar13 = ppuVar15;
  FUN_107b27f14(ppuVar15,uVar16,in_x4);
  if (((ulong)ppuVar13 & 1) != 0) goto LAB_107ac5468;
  puVar20 = PTR_PTR_1126b2ea8;
  func_0x00010c235940(PTR_PTR_1126b2ea8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar15;
  func_0x00010c0720c0();
  if ((int)ppuVar13 == 0) {
    puVar1 = PTR_PTR_1126b2ea8;
    func_0x00010c0b4cc0(PTR_PTR_1126b2ea8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar15;
    func_0x00010c0720c0();
    _objc_release(puVar1);
    _objc_release(puVar20);
    if ((int)ppuVar13 == 0) {
      puVar20 = PTR_PTR_1126b2d30;
      func_0x00010bf940a0(PTR_PTR_1126b2d30);
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = ppuVar15;
      func_0x00010c0720c0();
      _objc_release(puVar20);
      if ((int)ppuVar13 != 0) {
        func_0x00010bf94760(*(undefined8 *)(puVar10 + 0x48));
        puVar20 = puVar10 + 0x18;
        _objc_loadWeakRetained(puVar20);
        puVar1 = puVar20;
        func_0x00010c2bf380();
        _objc_retainAutoreleasedReturnValue();
        puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1e0 = 0xc2000000;
        pcStack_1d8 = FUN_107ac5df4;
        puStack_1d0 = &UNK_110842e18;
        puStack_1c8 = puVar10;
        func_0x00010c2bf1c0();
        _objc_release(puVar1);
        _objc_release(puVar20);
        *(undefined8 *)(puVar10 + 0x198) = 0;
        goto LAB_107ac5468;
      }
      puVar20 = PTR_PTR_1126b2d30;
      func_0x00010c15c9e0(PTR_PTR_1126b2d30);
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = ppuVar15;
      func_0x00010c0720c0();
      _objc_release(puVar20);
      if ((int)ppuVar13 == 0) {
        puVar20 = PTR_PTR_1126b2d30;
        func_0x00010bf52060(PTR_PTR_1126b2d30);
        ppuVar13 = ppuVar15;
        func_0x00010c0720c0();
        _objc_release(puVar20);
        if ((int)ppuVar13 != 0) {
          func_0x00010be27960(puVar10);
          goto LAB_107ac5468;
        }
        puVar20 = PTR_PTR_1126b2d30;
        func_0x00010bf8c140(PTR_PTR_1126b2d30);
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = ppuVar15;
        func_0x00010c0720c0();
        _objc_release(puVar20);
        if (((ulong)ppuVar13 & 1) != 0) goto LAB_107ac5468;
        puVar20 = PTR_PTR_1126b2d30;
        func_0x00010bfdffe0(PTR_PTR_1126b2d30);
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = ppuVar15;
        func_0x00010c0720c0();
        if ((int)ppuVar13 == 0) {
          puVar1 = PTR_PTR_1126b6160;
          func_0x00010c277180(PTR_PTR_1126b6160);
          _objc_retainAutoreleasedReturnValue();
          ppuVar13 = ppuVar15;
          func_0x00010c0720c0();
          _objc_release(puVar1);
          _objc_release(puVar20);
          if ((int)ppuVar13 == 0) {
            puVar20 = PTR_PTR_1126b6160;
            func_0x00010bf3d9e0(PTR_PTR_1126b6160);
            _objc_retainAutoreleasedReturnValue();
            ppuVar13 = ppuVar15;
            func_0x00010c0720c0();
            _objc_release(puVar20);
            if ((int)ppuVar13 != 0) {
              puVar20 = puVar10 + 0x18;
              _objc_loadWeakRetained(puVar20);
              puVar1 = puVar20;
              func_0x00010c29cc40();
              _objc_retainAutoreleasedReturnValue();
              puVar2 = PTR_PTR_1126c98a0;
              func_0x00010c0689a0(PTR_PTR_1126c98a0);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf84d40(puVar1);
              _objc_release(puVar2);
              goto LAB_107ac5720;
            }
            ppuVar13 = ppuVar15;
            func_0x00010c0720c0();
            if (((ulong)ppuVar13 & 1) == 0) {
              puVar20 = PTR_PTR_1126b2d30;
              func_0x00010c25fd00(PTR_PTR_1126b2d30);
              _objc_retainAutoreleasedReturnValue();
              ppuVar13 = ppuVar15;
              func_0x00010c0720c0();
              if ((int)ppuVar13 != 0) {
                _objc_release(puVar20);
                goto LAB_107ac59d0;
              }
              puVar1 = PTR_PTR_1126b2ce8;
              func_0x00010c25fe20(PTR_PTR_1126b2ce8);
              _objc_retainAutoreleasedReturnValue();
              ppuVar13 = ppuVar15;
              func_0x00010c0720c0();
              _objc_release(puVar1);
              _objc_release(puVar20);
              if ((int)ppuVar13 != 0) goto LAB_107ac59d0;
              ppuVar13 = ppuVar15;
              func_0x00010c0720c0();
              if ((int)ppuVar13 == 0) {
                puVar20 = PTR_PTR_1126b2d30;
                func_0x00010bfa1100(PTR_PTR_1126b2d30);
                _objc_retainAutoreleasedReturnValue();
                ppuVar13 = ppuVar15;
                func_0x00010c0720c0();
                _objc_release(puVar20);
                if ((int)ppuVar13 == 0) {
                  puVar20 = PTR_PTR_1126b2d30;
                  func_0x00010c0dc460(PTR_PTR_1126b2d30);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar13 = ppuVar15;
                  func_0x00010c0720c0();
                  if (((ulong)ppuVar13 & 1) == 0) {
                    ppuVar13 = ppuVar15;
                    func_0x00010c0720c0();
                    _objc_release(puVar20);
                    if (((ulong)ppuVar13 & 1) == 0) goto LAB_107ac5468;
                  }
                  else {
                    _objc_release(puVar20);
                  }
                  _objc_initWeak(auStack_1f0,puVar10);
                  uVar12 = 0;
                  func_0x0001000819a8(0,0);
                  _objc_retainAutoreleasedReturnValue();
                  puStack_2e0 = PTR___NSConcreteStackBlock_11034bd00;
                  uStack_2d8 = 0xc2000000;
                  uStack_2d0 = 0x107ac6000;
                  puStack_2c8 = &UNK_110848218;
                  _objc_copyWeak(auStack_2b0,auStack_1f0);
                  _objc_retain(uVar16);
                  uStack_2c0 = uVar16;
                  _objc_retain(in_x4);
                  uStack_2b8 = in_x4;
                  func_0x00010007380c(uVar12,&puStack_2e0);
                  _objc_release(uVar12);
                  _objc_release(uStack_2b8);
                  uVar11 = uStack_2c0;
                }
                else {
                  _objc_initWeak(auStack_1f0,puVar10);
                  uVar12 = 0;
                  func_0x0001000819a8(0,0);
                  _objc_retainAutoreleasedReturnValue();
                  puStack_2a8 = PTR___NSConcreteStackBlock_11034bd00;
                  uStack_2a0 = 0xc2000000;
                  uStack_298 = 0x107ac5fcc;
                  puStack_290 = &UNK_110848218;
                  ppuVar14 = &puStack_2a8;
                  _objc_copyWeak(auStack_278,auStack_1f0);
                  _objc_retain(uVar16);
                  uStack_288 = uVar16;
                  _objc_retain(in_x4);
                  uStack_280 = in_x4;
                  func_0x00010007380c(uVar12,&puStack_2a8);
                  _objc_release(uVar12);
                  _objc_release(uStack_280);
                  uVar11 = uStack_288;
                }
              }
              else {
                _objc_initWeak(auStack_1f0,puVar10);
                uVar12 = 0;
                func_0x0001000819a8(0,0);
                _objc_retainAutoreleasedReturnValue();
                puStack_270 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_268 = 0xc2000000;
                uStack_260 = 0x107ac5f98;
                puStack_258 = &UNK_110848218;
                ppuVar14 = &puStack_270;
                _objc_copyWeak(auStack_240,auStack_1f0);
                _objc_retain(uVar16);
                uStack_250 = uVar16;
                _objc_retain(in_x4);
                uStack_248 = in_x4;
                func_0x00010007380c(uVar12,&puStack_270);
                _objc_release(uVar12);
                _objc_release(uStack_248);
                uVar11 = uStack_250;
              }
              _objc_release(uVar11);
              ppuVar14 = ppuVar14 + 6;
            }
            else {
LAB_107ac59d0:
              ppuVar14 = ppuVar15;
              func_0x00010c0720c0();
              if (((ulong)ppuVar14 & 1) == 0) {
                puVar20 = PTR_PTR_1126b2d30;
                func_0x00010c25fd00(PTR_PTR_1126b2d30);
                _objc_retainAutoreleasedReturnValue();
                ppuVar14 = ppuVar15;
                func_0x00010c0720c0();
                _objc_release(puVar20);
                if ((int)ppuVar14 == 0) {
                  puVar20 = PTR_PTR_1126b2ce8;
                  func_0x00010c25fe20(PTR_PTR_1126b2ce8);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar14 = ppuVar15;
                  func_0x00010c0720c0();
                  _objc_release(puVar20);
                  uVar17 = 0;
                  uStack_200 = 8;
                  if ((int)ppuVar14 == 0) {
                    uStack_200 = 0xffffffffffffffff;
                  }
                }
                else {
                  uVar12 = in_x4;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  uVar18 = uVar12;
                  func_0x00010bf1f3c0();
                  if ((int)uVar18 == 0) {
                    uVar17 = 0;
                  }
                  else {
                    uVar17 = (undefined1)*(undefined8 *)(puVar10 + 0x140);
                    func_0x000108f48110();
                  }
                  _objc_release(uVar12);
                  uStack_200 = 4;
                }
              }
              else {
                uVar17 = 1;
                uStack_200 = 3;
              }
              _objc_initWeak(auStack_1f0,puVar10);
              uVar12 = 0;
              func_0x0001000819a8(0,0);
              _objc_retainAutoreleasedReturnValue();
              puStack_238 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_230 = 0xc2000000;
              pcStack_228 = FUN_107ac5f5c;
              puStack_220 = &UNK_110864558;
              _objc_copyWeak(&puStack_208,auStack_1f0);
              _objc_retain(uVar16);
              uStack_218 = uVar16;
              _objc_retain(in_x4);
              uStack_210 = in_x4;
              uStack_1f8 = uVar17;
              func_0x00010007380c(uVar12,&puStack_238);
              _objc_release(uVar12);
              _objc_release(uStack_210);
              _objc_release(uStack_218);
              ppuVar14 = &puStack_208;
            }
            _objc_destroyWeak(ppuVar14);
            _objc_destroyWeak(auStack_1f0);
            goto LAB_107ac5468;
          }
        }
        else {
          _objc_release(puVar20);
        }
        lVar19 = *(long *)(puVar10 + 8);
        uVar12 = *(undefined8 *)(puVar10 + 0xa8);
        func_0x00010c269d40(uVar12);
        _objc_retainAutoreleasedReturnValue();
        FUN_107ac5e3c(lVar19,uVar12);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar12);
        if (lVar19 != 0) {
          func_0x00010be04480(puVar10);
          goto LAB_107ac5468;
        }
        puVar20 = *(undefined **)(puVar10 + 8);
        uVar12 = *(undefined8 *)(puVar10 + 0xa8);
        func_0x00010c269d40(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x000107ac5ecc(puVar20,uVar12);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar12);
        if (puVar20 != (undefined *)0x0) {
          puVar1 = puVar20;
          func_0x00010bf25140();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar1;
          func_0x00010c08fa60();
          if (puVar2 == (undefined *)0x0) {
            _objc_release(puVar1);
          }
          else {
            puVar2 = puVar20;
            func_0x00010c11b3c0();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar2;
            func_0x00010c08fa60();
            _objc_release(puVar2);
            _objc_release(puVar1);
            if (puVar3 != (undefined *)0x0) {
              func_0x00010bdfad20(puVar10);
            }
          }
        }
      }
      else {
        puVar20 = PTR_PTR_1126b5bf0;
        func_0x00010c22ab20(PTR_PTR_1126b5bf0);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = in_x4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar18 = uVar12;
        func_0x00010bf1f3c0();
        _objc_release(uVar12);
        _objc_release(puVar20);
        uVar12 = in_x4;
        if ((int)uVar18 == 0) {
          uVar18 = *(undefined8 *)(puVar10 + 0x48);
          puVar20 = puVar10 + 0x18;
          _objc_loadWeakRetained(puVar20);
          puVar1 = puVar20;
          func_0x00010c27f040();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar1;
          func_0x00010c0f1880();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR_PTR_1126b2cf0;
          func_0x00010bf4f080(PTR_PTR_1126b2cf0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0(in_x4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c15c4a0(uVar18);
        }
        else {
          func_0x00010beafb20(puVar10);
          uVar18 = *(undefined8 *)(puVar10 + 0x48);
          puVar20 = puVar10 + 0x18;
          _objc_loadWeakRetained(puVar20);
          puVar1 = puVar20;
          func_0x00010c27f040();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar1;
          func_0x00010c0f1880();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR_PTR_1126b2cf0;
          func_0x00010bf4f080(PTR_PTR_1126b2cf0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0(in_x4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c15c4e0(uVar18);
        }
        _objc_release(uVar12);
        _objc_release(puVar3);
        _objc_release(puVar2);
LAB_107ac5720:
        _objc_release(puVar1);
      }
      _objc_release(puVar20);
      goto LAB_107ac5468;
    }
  }
  else {
    _objc_release(puVar20);
  }
  puVar20 = PTR_PTR_1126b2ea8;
  func_0x00010c235940(PTR_PTR_1126b2ea8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = ppuVar15;
  func_0x00010c0720c0();
  uVar12 = 1;
  if ((int)ppuVar14 != 0) {
    uVar12 = 2;
  }
  *(undefined8 *)(puVar10 + 0x198) = uVar12;
  _objc_release(puVar20);
  func_0x00010beafb20(puVar10);
LAB_107ac5468:
  _objc_release(in_x4);
  _objc_release(uVar16);
  _objc_release(ppuVar15);
  return;
}



/* Entry: 107ac530c; end: 107ac5df3; -[SCDiscoverSharingSession operaViewDidSendEvent:page:params:] */

void FUN_107ac530c(long param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  ppuVar8 = &puStack_180;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c9310;
  func_0x00010c0700c0();
  if ((((int)puVar1 == 0) || (uVar2 = param_4, func_0x00010c06b7e0(), (uVar2 & 1) != 0)) ||
     (puVar1 = PTR_PTR_1126c9310, func_0x00010c06dca0(), ((ulong)puVar1 & 1) != 0))
  goto LAB_107ac5468;
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  *(ulong *)(param_1 + 0x58) = param_4;
  _objc_release(uVar3);
  uVar2 = param_3;
  FUN_107b27f14(param_3,param_4,param_5);
  if ((uVar2 & 1) != 0) goto LAB_107ac5468;
  puVar1 = PTR_PTR_1126b2ea8;
  func_0x00010c235940(PTR_PTR_1126b2ea8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar2 == 0) {
    puVar4 = PTR_PTR_1126b2ea8;
    func_0x00010c0b4cc0(PTR_PTR_1126b2ea8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar4);
    _objc_release(puVar1);
    if ((int)uVar2 == 0) {
      puVar1 = PTR_PTR_1126b2d30;
      func_0x00010bf940a0(PTR_PTR_1126b2d30);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010c0720c0();
      _objc_release(puVar1);
      if ((int)uVar2 != 0) {
        func_0x00010bf94760(*(undefined8 *)(param_1 + 0x48));
        lVar11 = param_1 + 0x18;
        _objc_loadWeakRetained(lVar11);
        lVar7 = lVar11;
        func_0x00010c2bf380();
        _objc_retainAutoreleasedReturnValue();
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0xc2000000;
        pcStack_78 = FUN_107ac5df4;
        puStack_70 = &UNK_110842e18;
        lStack_68 = param_1;
        func_0x00010c2bf1c0();
        _objc_release(lVar7);
        _objc_release(lVar11);
        *(undefined8 *)(param_1 + 0x198) = 0;
        goto LAB_107ac5468;
      }
      puVar1 = PTR_PTR_1126b2d30;
      func_0x00010c15c9e0(PTR_PTR_1126b2d30);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010c0720c0();
      _objc_release(puVar1);
      if ((int)uVar2 == 0) {
        puVar1 = PTR_PTR_1126b2d30;
        func_0x00010bf52060(PTR_PTR_1126b2d30);
        uVar2 = param_3;
        func_0x00010c0720c0();
        _objc_release(puVar1);
        if ((int)uVar2 != 0) {
          func_0x00010be27960(param_1);
          goto LAB_107ac5468;
        }
        puVar1 = PTR_PTR_1126b2d30;
        func_0x00010bf8c140(PTR_PTR_1126b2d30);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_3;
        func_0x00010c0720c0();
        _objc_release(puVar1);
        if ((uVar2 & 1) != 0) goto LAB_107ac5468;
        puVar1 = PTR_PTR_1126b2d30;
        func_0x00010bfdffe0(PTR_PTR_1126b2d30);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_3;
        func_0x00010c0720c0();
        if ((int)uVar2 == 0) {
          puVar4 = PTR_PTR_1126b6160;
          func_0x00010c277180(PTR_PTR_1126b6160);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = param_3;
          func_0x00010c0720c0();
          _objc_release(puVar4);
          _objc_release(puVar1);
          if ((int)uVar2 == 0) {
            puVar1 = PTR_PTR_1126b6160;
            func_0x00010bf3d9e0(PTR_PTR_1126b6160);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = param_3;
            func_0x00010c0720c0();
            _objc_release(puVar1);
            if ((int)uVar2 != 0) {
              lVar11 = param_1 + 0x18;
              _objc_loadWeakRetained(lVar11);
              lVar7 = lVar11;
              func_0x00010c29cc40();
              _objc_retainAutoreleasedReturnValue();
              puVar1 = PTR_PTR_1126c98a0;
              func_0x00010c0689a0(PTR_PTR_1126c98a0);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf84d40(lVar7);
              _objc_release(puVar1);
              goto LAB_107ac5720;
            }
            uVar2 = param_3;
            func_0x00010c0720c0();
            if ((uVar2 & 1) == 0) {
              puVar1 = PTR_PTR_1126b2d30;
              func_0x00010c25fd00(PTR_PTR_1126b2d30);
              _objc_retainAutoreleasedReturnValue();
              uVar2 = param_3;
              func_0x00010c0720c0();
              if ((int)uVar2 != 0) {
                _objc_release(puVar1);
                goto LAB_107ac59d0;
              }
              puVar4 = PTR_PTR_1126b2ce8;
              func_0x00010c25fe20(PTR_PTR_1126b2ce8);
              _objc_retainAutoreleasedReturnValue();
              uVar2 = param_3;
              func_0x00010c0720c0();
              _objc_release(puVar4);
              _objc_release(puVar1);
              if ((int)uVar2 != 0) goto LAB_107ac59d0;
              uVar2 = param_3;
              func_0x00010c0720c0();
              if ((int)uVar2 == 0) {
                puVar1 = PTR_PTR_1126b2d30;
                func_0x00010bfa1100(PTR_PTR_1126b2d30);
                _objc_retainAutoreleasedReturnValue();
                uVar2 = param_3;
                func_0x00010c0720c0();
                _objc_release(puVar1);
                if ((int)uVar2 == 0) {
                  puVar1 = PTR_PTR_1126b2d30;
                  func_0x00010c0dc460(PTR_PTR_1126b2d30);
                  _objc_retainAutoreleasedReturnValue();
                  uVar2 = param_3;
                  func_0x00010c0720c0();
                  if ((uVar2 & 1) == 0) {
                    uVar2 = param_3;
                    func_0x00010c0720c0();
                    _objc_release(puVar1);
                    if ((uVar2 & 1) == 0) goto LAB_107ac5468;
                  }
                  else {
                    _objc_release(puVar1);
                  }
                  _objc_initWeak(auStack_90,param_1);
                  uVar3 = 0;
                  func_0x0001000819a8(0,0);
                  _objc_retainAutoreleasedReturnValue();
                  puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
                  uStack_178 = 0xc2000000;
                  uStack_170 = 0x107ac6000;
                  puStack_168 = &UNK_110848218;
                  _objc_copyWeak(auStack_150,auStack_90);
                  _objc_retain(param_4);
                  uStack_160 = param_4;
                  _objc_retain(param_5);
                  uStack_158 = param_5;
                  func_0x00010007380c(uVar3,&puStack_180);
                  _objc_release(uVar3);
                  _objc_release(uStack_158);
                  uVar2 = uStack_160;
                }
                else {
                  _objc_initWeak(auStack_90,param_1);
                  uVar3 = 0;
                  func_0x0001000819a8(0,0);
                  _objc_retainAutoreleasedReturnValue();
                  puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
                  uStack_140 = 0xc2000000;
                  uStack_138 = 0x107ac5fcc;
                  puStack_130 = &UNK_110848218;
                  ppuVar8 = &puStack_148;
                  _objc_copyWeak(auStack_118,auStack_90);
                  _objc_retain(param_4);
                  uStack_128 = param_4;
                  _objc_retain(param_5);
                  uStack_120 = param_5;
                  func_0x00010007380c(uVar3,&puStack_148);
                  _objc_release(uVar3);
                  _objc_release(uStack_120);
                  uVar2 = uStack_128;
                }
              }
              else {
                _objc_initWeak(auStack_90,param_1);
                uVar3 = 0;
                func_0x0001000819a8(0,0);
                _objc_retainAutoreleasedReturnValue();
                puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_108 = 0xc2000000;
                uStack_100 = 0x107ac5f98;
                puStack_f8 = &UNK_110848218;
                ppuVar8 = &puStack_110;
                _objc_copyWeak(auStack_e0,auStack_90);
                _objc_retain(param_4);
                uStack_f0 = param_4;
                _objc_retain(param_5);
                uStack_e8 = param_5;
                func_0x00010007380c(uVar3,&puStack_110);
                _objc_release(uVar3);
                _objc_release(uStack_e8);
                uVar2 = uStack_f0;
              }
              _objc_release(uVar2);
              ppuVar8 = ppuVar8 + 6;
            }
            else {
LAB_107ac59d0:
              uVar2 = param_3;
              func_0x00010c0720c0();
              if ((uVar2 & 1) == 0) {
                puVar1 = PTR_PTR_1126b2d30;
                func_0x00010c25fd00(PTR_PTR_1126b2d30);
                _objc_retainAutoreleasedReturnValue();
                uVar2 = param_3;
                func_0x00010c0720c0();
                _objc_release(puVar1);
                if ((int)uVar2 == 0) {
                  puVar1 = PTR_PTR_1126b2ce8;
                  func_0x00010c25fe20(PTR_PTR_1126b2ce8);
                  _objc_retainAutoreleasedReturnValue();
                  uVar2 = param_3;
                  func_0x00010c0720c0();
                  _objc_release(puVar1);
                  uVar9 = 0;
                  uStack_a0 = 8;
                  if ((int)uVar2 == 0) {
                    uStack_a0 = 0xffffffffffffffff;
                  }
                }
                else {
                  uVar3 = param_5;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  uVar10 = uVar3;
                  func_0x00010bf1f3c0();
                  if ((int)uVar10 == 0) {
                    uVar9 = 0;
                  }
                  else {
                    uVar9 = (undefined1)*(undefined8 *)(param_1 + 0x140);
                    func_0x000108f48110();
                  }
                  _objc_release(uVar3);
                  uStack_a0 = 4;
                }
              }
              else {
                uVar9 = 1;
                uStack_a0 = 3;
              }
              _objc_initWeak(auStack_90,param_1);
              uVar3 = 0;
              func_0x0001000819a8(0,0);
              _objc_retainAutoreleasedReturnValue();
              puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_d0 = 0xc2000000;
              pcStack_c8 = FUN_107ac5f5c;
              puStack_c0 = &UNK_110864558;
              _objc_copyWeak(&puStack_a8,auStack_90);
              _objc_retain(param_4);
              uStack_b8 = param_4;
              _objc_retain(param_5);
              uStack_b0 = param_5;
              uStack_98 = uVar9;
              func_0x00010007380c(uVar3,&puStack_d8);
              _objc_release(uVar3);
              _objc_release(uStack_b0);
              _objc_release(uStack_b8);
              ppuVar8 = &puStack_a8;
            }
            _objc_destroyWeak(ppuVar8);
            _objc_destroyWeak(auStack_90);
            goto LAB_107ac5468;
          }
        }
        else {
          _objc_release(puVar1);
        }
        lVar11 = *(long *)(param_1 + 8);
        uVar3 = *(undefined8 *)(param_1 + 0xa8);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        FUN_107ac5e3c(lVar11,uVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar3);
        if (lVar11 != 0) {
          func_0x00010be04480(param_1);
          goto LAB_107ac5468;
        }
        lVar11 = *(long *)(param_1 + 8);
        uVar3 = *(undefined8 *)(param_1 + 0xa8);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x000107ac5ecc(lVar11,uVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        if (lVar11 != 0) {
          lVar7 = lVar11;
          func_0x00010bf25140();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar7;
          func_0x00010c08fa60();
          if (lVar5 == 0) {
            _objc_release(lVar7);
          }
          else {
            lVar5 = lVar11;
            func_0x00010c11b3c0();
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar5;
            func_0x00010c08fa60();
            _objc_release(lVar5);
            _objc_release(lVar7);
            if (lVar6 != 0) {
              func_0x00010bdfad20(param_1);
            }
          }
        }
      }
      else {
        puVar1 = PTR_PTR_1126b5bf0;
        func_0x00010c22ab20(PTR_PTR_1126b5bf0);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar3;
        func_0x00010bf1f3c0();
        _objc_release(uVar3);
        _objc_release(puVar1);
        uVar3 = param_5;
        if ((int)uVar10 == 0) {
          uVar10 = *(undefined8 *)(param_1 + 0x48);
          lVar11 = param_1 + 0x18;
          _objc_loadWeakRetained(lVar11);
          lVar7 = lVar11;
          func_0x00010c27f040();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar7;
          func_0x00010c0f1880();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR_PTR_1126b2cf0;
          func_0x00010bf4f080(PTR_PTR_1126b2cf0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0(param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c15c4a0(uVar10);
        }
        else {
          func_0x00010beafb20(param_1);
          uVar10 = *(undefined8 *)(param_1 + 0x48);
          lVar11 = param_1 + 0x18;
          _objc_loadWeakRetained(lVar11);
          lVar7 = lVar11;
          func_0x00010c27f040();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar7;
          func_0x00010c0f1880();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR_PTR_1126b2cf0;
          func_0x00010bf4f080(PTR_PTR_1126b2cf0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0(param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c15c4e0(uVar10);
        }
        _objc_release(uVar3);
        _objc_release(puVar1);
        _objc_release(lVar5);
LAB_107ac5720:
        _objc_release(lVar7);
      }
      _objc_release(lVar11);
      goto LAB_107ac5468;
    }
  }
  else {
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126b2ea8;
  func_0x00010c235940(PTR_PTR_1126b2ea8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  uVar3 = 1;
  if ((int)uVar2 != 0) {
    uVar3 = 2;
  }
  *(undefined8 *)(param_1 + 0x198) = uVar3;
  _objc_release(puVar1);
  func_0x00010beafb20(param_1);
LAB_107ac5468:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107ac5df4; end: 107ac5e3b;  */

void FUN_107ac5df4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x18;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29e000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13d1c0();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107ac5e3c; end: 107ac5f5b;  */

void FUN_107ac5e3c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar2 = param_1;
  func_0x00010c280580();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_1;
    FUN_107ab84cc(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 107ac5f5c; end: 107ac6033;  */

void FUN_107ac5f5c(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be313e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ac6034; end: 107ac6333; -[SCDiscoverSharingSession _handleSubscribeButtonPressedWithPage:params:interactionContext:shouldLogSubscribeEvent:] */

void FUN_107ac6034(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (puVar1 == (undefined *)0x0) {
    puVar5 = PTR_PTR_1126b5bf0;
    func_0x00010c25fd00(PTR_PTR_1126b5bf0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (puVar1 != (undefined *)0x0) {
      puVar1 = PTR_PTR_1126b5bf0;
      func_0x00010c25fd00(PTR_PTR_1126b5bf0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_4;
      func_0x00010c0e00e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      func_0x00010c0df6e0();
      _objc_retainAutoreleasedReturnValue();
LAB_107ac616c:
      _objc_release(puVar3);
      goto LAB_107ac6178;
    }
    puVar5 = PTR_PTR_1126b2cf0;
    func_0x00010c260360(PTR_PTR_1126b2cf0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar5);
    if (puVar1 == (undefined *)0x0) goto LAB_107ac61fc;
    puVar5 = PTR_PTR_1126b2cf0;
    func_0x00010c260360(PTR_PTR_1126b2cf0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar4 = puVar3;
    _objc_opt_isKindOfClass(puVar3,puVar5);
    puVar1 = puVar3;
    if (((ulong)puVar4 & 1) == 0) {
      puVar1 = (undefined *)0x0;
    }
    _objc_retain(puVar1);
    _objc_release(puVar3);
    puVar5 = puVar1;
    func_0x00010c08fa60();
    if (puVar5 != (undefined *)0x0) {
      puVar5 = *(undefined **)(param_1 + 0xa8);
      func_0x00010c269d40(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar5;
      func_0x00010bf5b7e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c080120(puVar3);
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107ac616c;
    }
  }
  else {
    puVar1 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
LAB_107ac6178:
    _objc_release(puVar1);
    if (puVar5 == (undefined *)0x0) goto LAB_107ac61fc;
    func_0x00010bf1f3c0(puVar5);
    puVar1 = PTR_PTR_1126c9310;
    func_0x00010c259760(PTR_PTR_1126c9310);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c282800();
    _objc_release(puVar1);
    uVar2 = param_3;
    func_0x00010be36bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec81e0(param_1);
    _objc_release(uVar2);
    puVar1 = puVar5;
  }
  _objc_release(puVar1);
LAB_107ac61fc:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ac6334; end: 107ac6547; -[SCDiscoverSharingSession _handleSubscribeButtonPressedWithStory:shouldSubscribe:shouldLogSubscribeEvent:interactionContext:currentItemPageId:] */

void FUN_107ac6334(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 in_x6;
  undefined8 uVar3;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(in_x6);
  if (param_3 == 0) {
    puVar2 = PTR_PTR_1126d6050;
    _objc_alloc(PTR_PTR_1126d6050);
    FUN_107ac8aa8(*(undefined8 *)(param_1 + 8));
    func_0x00010c03c080(puVar2);
    func_0x00010c28a8a0();
    _objc_release(puVar2);
  }
  else {
    puVar2 = PTR_PTR_1126d52d0;
    _objc_alloc();
    uVar1 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c006a60();
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    *(undefined **)(param_1 + 0x68) = puVar2;
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_initWeak(auStack_78,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    _objc_retain(param_3);
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(in_x6);
    _objc_retain(param_3);
    func_0x00010c260180(uVar1);
    _objc_release(param_3);
    _objc_release(in_x6);
    _objc_destroyWeak(auStack_80);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(in_x6);
  _objc_release(param_3);
  return;
}



/* Entry: 107ac6548; end: 107ac660f;  */

void FUN_107ac6548(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  FUN_107b23b28(*(undefined8 *)(param_1 + 0x20),param_2,
                *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xd8),
                *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xc0));
  if ((int)param_2 != 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    FUN_107affcd4(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(lVar1 + 0x130),
                  *(undefined8 *)(lVar1 + 400),*(undefined8 *)(lVar1 + 0xe0),
                  *(undefined8 *)(lVar1 + 0x160));
  }
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_107ac6610;
    puStack_38 = &UNK_110841f80;
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    lStack_30 = lVar1;
    _objc_retain(uVar2);
    uStack_28 = uVar2;
    func_0x0001000d76cc("APPSTORE",&puStack_50);
    _objc_release(uStack_28);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 107ac6610; end: 107ac6637;  */

void FUN_107ac6610(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedd690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updatePlaylistItemForItemPageId_112594f48,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107ac6638; end: 107ac67af; -[SCDiscoverSharingSession _updateFavoriteStatusForPage:params:] */

void FUN_107ac6638(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_4);
  func_0x00010c118b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  FUN_107b2883c(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x000107b288cc(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar4 = PTR_PTR_1126b5bf0;
  func_0x00010bfa1100(PTR_PTR_1126b5bf0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bf1f3c0(uVar5);
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(puVar4);
  puVar4 = puVar6;
  func_0x00010bf1f3c0();
  if ((int)puVar4 == 0) {
    func_0x000107b28768(*(undefined8 *)(param_1 + 0x150),uVar2,uVar3,0,
                        &PTR___NSConcreteGlobalBlock_1109f96d8);
  }
  else {
    FUN_107b28694(*(undefined8 *)(param_1 + 0x150),uVar2,uVar3,0,
                  &PTR___NSConcreteGlobalBlock_1109f96b8);
  }
  _objc_release(puVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ac67b0; end: 107ac67b7;  */

void FUN_107ac67b0(void)

{
  return;
}



/* Entry: 107ac67b8; end: 107ac6a27; -[SCDiscoverSharingSession _handleNotificationOptInWithPage:params:] */

void FUN_107ac67b8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  uVar1 = 3;
  if ((int)uVar3 == 0) {
    uVar1 = 4;
  }
  puVar4 = PTR_PTR_1126b5bf0;
  func_0x00010c0ebe20(PTR_PTR_1126b5bf0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar2 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  if (uVar2 != 0) {
    func_0x00010bf1f3c0();
    if ((int)uVar3 != 0) {
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_107ac6a28;
      puStack_70 = &UNK_110842e18;
      lStack_68 = param_1;
      func_0x000100162d98("APPSTORE",&puStack_88);
    }
    puVar4 = PTR_PTR_1126c9310;
    func_0x00010c259760(PTR_PTR_1126c9310);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c282800();
    _objc_release(puVar4);
    _objc_initWeak(auStack_90,param_1);
    uVar6 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 0;
    _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_a8,auStack_90);
    uStack_98 = (undefined1)uVar3;
    _objc_retain(param_3);
    uStack_a0 = uVar1;
    func_0x00010c25bae0(uVar6);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107ac6a28; end: 107ac6a6b;  */

void FUN_107ac6a28(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_107b00ed0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ac6a6c; end: 107ac6ac7;  */

void FUN_107ac6a6c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2cf80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ac6ac8; end: 107ac6d07; -[SCDiscoverSharingSession _handleNotificationOptInWithStory:optingIn:page:interactionContext:] */

void FUN_107ac6ac8(long param_1,undefined8 param_2,long param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined1 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_107ac6d08;
  puStack_90 = &UNK_11084d5f8;
  _objc_retain(param_5);
  ppuVar1 = &puStack_a8;
  uStack_88 = param_5;
  lStack_80 = param_1;
  uStack_78 = param_4;
  _objc_retainBlock();
  if (param_3 == 0) {
    puVar2 = PTR_PTR_1126d6050;
    _objc_alloc(PTR_PTR_1126d6050);
    FUN_107ac8aa8(*(undefined8 *)(param_1 + 8));
    func_0x00010c03c080(puVar2);
    _objc_retain(ppuVar1);
    func_0x00010c288320(puVar2);
    _objc_release(ppuVar1);
    _objc_release(puVar2);
  }
  else {
    _objc_initWeak(auStack_b0,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0xe8);
    func_0x00010c259740(param_3);
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_retain(ppuVar1);
    _objc_copyWeak(auStack_c0,auStack_b0);
    uStack_b8 = param_6;
    func_0x00010c28a700(uVar3);
    puVar2 = PTR___dispatch_main_q_11034be20;
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_c0);
    _objc_release(ppuVar1);
    _objc_destroyWeak(auStack_b0);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_88);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 107ac6d08; end: 107ac6d5b;  */

void FUN_107ac6d08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c9310;
  func_0x00010c11b700(PTR_PTR_1126c9310,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    FUN_107b00c44(puVar1,*(undefined1 *)(param_1 + 0x30),
                  *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x160));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ac6d5c; end: 107ac6dd7;  */

void FUN_107ac6d5c(long param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  pcVar2 = *(code **)(lVar1 + 0x10);
  _objc_retain(param_2);
  (*pcVar2)(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0794a0();
  func_0x00010be51aa0(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ac6dd8; end: 107ac6def;  */

void FUN_107ac6dd8(void)

{
  return;
}



/* Entry: 107ac6df0; end: 107ac6ef7; -[SCDiscoverSharingSession _denySharingWithPage:] */

void FUN_107ac6df0(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar2 = &PTR____CFConstantStringClassReference_110eac338;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eac338,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  FUN_107ac6ef8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  puVar1 = PTR_PTR_1126afca8;
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x000107ac6f70(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x000107ac7038(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238760(puVar1);
  _objc_release(uVar5);
  _objc_release(uVar3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0a4dc0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 107ac6ef8; end: 107ac70f7;  */

void FUN_107ac6ef8(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010c280580();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x00010c11b0a0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 107ac70f8; end: 107ac752f; -[SCDiscoverSharingSession _setupShareControllerWithPage:params:zoomIn:asUpdateListener:] */

void FUN_107ac70f8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined1 param_7,undefined1 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined **ppuVar11;
  ulong uVar12;
  ulong uVar13;
  byte bVar14;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  byte bStack_8f;
  undefined1 uStack_8e;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126c9310;
  func_0x00010c0700e0();
  puVar3 = PTR_PTR_1126b2340;
  if (((ulong)puVar1 & 1) == 0) {
    func_0x00010bdfaca0(param_3);
    goto LAB_107ac74f8;
  }
  uVar2 = param_5;
  func_0x00010c118b40(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c077260();
  _objc_release(uVar2);
  if ((int)puVar3 != 0) {
    lVar4 = param_3 + 0x18;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c29e000();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3;
    _objc_opt_class(param_3);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6200(lVar5);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  puVar3 = PTR_PTR_1126ca2b0;
  uVar2 = param_5;
  func_0x00010c118b40(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c081440();
  _objc_release(uVar2);
  if (((ulong)puVar3 & 1) == 0) {
    uVar2 = param_5;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126bdd88;
    func_0x00010c22b140(PTR_PTR_1126bdd88);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf1f3c0();
    bVar14 = (byte)uVar8 ^ 1;
    _objc_release(uVar7);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  else {
    bVar14 = 0;
  }
  lVar4 = param_3 + 0x18;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c22b5a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c22b620();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar6;
  func_0x0001006372a4();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  puVar3 = PTR_PTR_1126b2348;
  func_0x00010c0b4f60(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_6;
  func_0x00010c0e00e0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1060();
  _objc_release(uVar10);
  _objc_release(puVar3);
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_107ac7604;
  puStack_b8 = &UNK_1109f97b8;
  lStack_b0 = param_3;
  uStack_a0 = param_1;
  uStack_98 = param_2;
  uStack_90 = param_7;
  bStack_8f = bVar14;
  _objc_retain(param_5);
  ppuVar11 = &puStack_d0;
  uStack_a8 = param_5;
  uStack_8e = param_8;
  _objc_retainBlock();
  puVar3 = PTR_PTR_1126b2348;
  func_0x00010c075940(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar10;
  func_0x00010bf1f3c0();
  if ((uVar12 & 1) == 0) {
    _objc_release(uVar10);
    _objc_release(puVar3);
LAB_107ac74c4:
    lVar4 = lVar9;
    func_0x00010bf529e0();
    if (lVar4 != 0) {
      (*(code *)ppuVar11[2])(ppuVar11,lVar9);
    }
  }
  else {
    puVar1 = PTR_PTR_1126b2348;
    func_0x00010c074120(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010bf1f3c0();
    _objc_release(uVar12);
    _objc_release(puVar1);
    _objc_release(uVar10);
    _objc_release(puVar3);
    if ((int)uVar13 == 0) goto LAB_107ac74c4;
    param_3 = param_3 + 0x18;
    _objc_loadWeakRetained(param_3);
    lVar4 = param_3;
    func_0x00010c27f040();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c27f020();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(ppuVar11);
    func_0x00010bf84b00(lVar5);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(param_3);
    _objc_release(ppuVar11);
  }
  _objc_release(ppuVar11);
  _objc_release(uStack_a8);
  _objc_release(lVar9);
LAB_107ac74f8:
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 107ac7530; end: 107ac7603;  */

bool FUN_107ac7530(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = param_2;
    func_0x00010c2991a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar4 = param_2;
      func_0x00010c29bb40();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        lVar5 = param_2;
        func_0x00010c12a520(param_2);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = lVar5 != 0;
        _objc_release();
      }
      else {
        bVar1 = true;
      }
      _objc_release(lVar4);
    }
    else {
      bVar1 = true;
    }
    _objc_release(lVar3);
  }
  else {
    bVar1 = true;
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 107ac7604; end: 107ac76cf;  */

void FUN_107ac7604(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  lVar2 = lVar2 + 0x18;
  _objc_loadWeakRetained(lVar2);
  lVar1 = lVar2;
  func_0x00010c2bf380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bf1c0();
  _objc_release(lVar1);
  _objc_release(lVar2);
  func_0x00010c22b3c0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x20));
  _objc_release(param_2);
  return;
}



/* Entry: 107ac76d0; end: 107ac76db;  */

void FUN_107ac76d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22a910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_shareControllerDidBeginSharing__112668468,0);
  return;
}



/* Entry: 107ac76dc; end: 107ac774f;  */

void FUN_107ac76dc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x20) + 0x18;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c22b5a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c22b620();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107ac7750; end: 107ac7a47; -[SCDiscoverSharingSession _handleCopyLinkForPage:] */

void FUN_107ac7750(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar2);
  lVar13 = lVar2;
  func_0x00010c27f040();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar13;
  func_0x00010c27f020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar1,param_2,lVar3,1);
  _objc_release(lVar3);
  _objc_release(lVar13);
  _objc_release(lVar2);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c9310;
  func_0x00010bf631e0(PTR_PTR_1126c9310,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = *(undefined8 *)(param_1 + 0xf0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf25140(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf8c980(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010bfbf8e0(uVar5,param_2,uVar6,uVar7,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  puVar9 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107ac7a48;
  puStack_70 = &UNK_110850038;
  _objc_retain(uVar8);
  uStack_68 = uVar8;
  func_0x00010bf11fe0(puVar9,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126b2498;
  _objc_alloc(PTR_PTR_1126b2498);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11b3a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c037ea0(puVar10,param_2,uVar5,0,lVar2,0,0);
  _objc_release(uVar5);
  puVar11 = PTR_PTR_1126b0808;
  _objc_alloc(PTR_PTR_1126b0808);
  func_0x00010c051820();
  puVar12 = PTR_PTR_1126b3ee8;
  _objc_alloc(PTR_PTR_1126b3ee8);
  func_0x00010c045aa0();
  lVar13 = *(long *)(param_1 + 0x108);
  if (lVar13 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x100);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010bf57580();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x108);
    *(undefined8 *)(param_1 + 0x108) = uVar5;
    _objc_release(uVar7);
    _objc_release(uVar6);
    lVar13 = *(long *)(param_1 + 0x108);
  }
  func_0x00010bfd26e0(lVar13,param_2,0xf);
  _objc_release(puVar12);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(uStack_68);
  _objc_release(puVar11);
  _objc_release(uVar8);
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 107ac7a48; end: 107ac7ae7;  */

void FUN_107ac7a48(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126ae558;
  puVar1 = PTR_PTR_1126b0800;
  _objc_alloc(PTR_PTR_1126b0800);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010beec820(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051840(puVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x20),0,9,0,0);
  func_0x00010bfe9ca0(puVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107ac7ae8; end: 107ac8553; -[SCDiscoverSharingSession shareWithShareableMedias:touchOrigin:shareFrameMedia:linkToLongform:page:asUpdateListener:] */

void FUN_107ac7ae8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7,ulong param_8,int param_9)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  ulong uVar25;
  long lStack_240;
  long lStack_220;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  uVar1 = param_5;
  FUN_107b26d90();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9310;
  func_0x00010bf631e0(PTR_PTR_1126c9310);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_3;
  func_0x00010c22a960();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_3 + 0x48);
  *(long *)(param_3 + 0x48) = lVar10;
  _objc_release(uVar19);
  _objc_release(puVar2);
  uVar19 = *(undefined8 *)(param_3 + 0x48);
  func_0x00010bf1d1a0(uVar19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdea0();
  _objc_release(uVar19);
  uVar11 = param_8;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_3 + 0x50);
  *(ulong *)(param_3 + 0x50) = uVar11;
  _objc_release(uVar19);
  if (param_9 != 0) {
    func_0x00010befc780(*(undefined8 *)(param_3 + 0x48));
  }
  puVar2 = PTR_PTR_1126c9310;
  func_0x00010c259760(PTR_PTR_1126c9310);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c282800();
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_3 + 0xd0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar3;
  func_0x00010c25bac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar19;
  func_0x00010c25a160();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar3;
  func_0x00010c11fd40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar12;
  func_0x00010c25c580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  _objc_release(uVar3);
  func_0x00010c20e540(*(undefined8 *)(param_3 + 0x48));
  uVar11 = param_8;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bdd88;
  func_0x00010c22a9a0(PTR_PTR_1126bdd88);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar11;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar5;
  func_0x00010bf1f3c0();
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(uVar11);
  if ((uVar25 & 1) == 0) {
    uVar11 = uVar1;
    func_0x00010c12a520(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar11;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_3 + 0x48);
    func_0x00010bf1d1a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ea340();
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar11);
  }
  uVar11 = param_8;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar11;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar11);
  if (uVar5 != 0) {
    uVar11 = param_8;
    func_0x00010c118b40(param_8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar11;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_3 + 0x48);
    func_0x00010bf1d1a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c170ae0();
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar11);
  }
  puVar2 = PTR_PTR_1126c9310;
  func_0x00010bf631e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c9310;
  func_0x00010c259500();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c08fa60();
  if (puVar7 != (undefined *)0x0) {
    func_0x00010c204680(*(undefined8 *)(param_3 + 0x48));
    func_0x00010c1805c0(*(undefined8 *)(param_3 + 0x48));
  }
  uVar11 = uVar1;
  func_0x00010c07dda0();
  if ((int)uVar11 == 0) {
    uVar3 = *(undefined8 *)(param_3 + 0x48);
    uVar11 = uVar1;
    func_0x00010bfb15a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c0efb20();
    _objc_retainAutoreleasedReturnValue();
    param_3 = param_3 + 0x18;
    _objc_loadWeakRetained();
    lVar10 = param_3;
    func_0x00010c27f040();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar10;
    func_0x00010c27f020();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar11;
    func_0x00010c22b360(param_1,param_2,uVar3);
    _objc_release(lVar21);
    _objc_release(lVar10);
    _objc_release(param_3);
    _objc_release(uVar5);
    _objc_release(uVar11);
  }
  else {
    uVar11 = param_8;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar11;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
    puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
    _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
    uVar25 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar7);
    uVar11 = uVar5;
    if ((uVar25 & 1) == 0) {
      uVar11 = 0;
    }
    _objc_retain(uVar11);
    _objc_release(uVar5);
    if (uVar11 == 0) {
      uVar5 = uVar1;
      func_0x00010c29bb40();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar7 = PTR_PTR_1126c9310;
    func_0x00010bf8fb60();
    if ((int)puVar7 == 0) {
      func_0x00010c195220(*(undefined8 *)(param_3 + 0x48));
      func_0x00010c221400(*(undefined8 *)(param_3 + 0x48));
      func_0x00010c204680(*(undefined8 *)(param_3 + 0x48));
    }
    else {
      _objc_retain(param_5);
      uVar11 = param_5;
      func_0x00010bf52a60();
      lVar10 = lRam0000000000000000;
      while (uVar11 != 0) {
        uVar25 = 0;
        uVar9 = uVar5;
        do {
          if (lRam0000000000000000 != lVar10) {
            _objc_enumerationMutation(param_5);
          }
          uVar20 = *(ulong *)(uVar25 * 8);
          uVar8 = uVar20;
          func_0x00010c2991a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          uVar5 = uVar9;
          if (uVar8 != 0) {
            func_0x00010c2991a0();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
            _objc_opt_class(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
            uVar5 = uVar20;
            _objc_opt_isKindOfClass(uVar20,puVar7);
            uVar8 = uVar20;
            if ((uVar5 & 1) == 0) {
              uVar8 = 0;
            }
            _objc_retain(uVar8);
            _objc_release(uVar20);
            uVar5 = uVar8;
            func_0x00010bdc2b80();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar9);
            _objc_release(uVar8);
          }
          uVar25 = uVar25 + 1;
          uVar9 = uVar5;
        } while (uVar11 != uVar25);
        uVar11 = param_5;
        func_0x00010bf52a60();
      }
      _objc_release(param_5);
      func_0x00010c195220(*(undefined8 *)(param_3 + 0x48));
      uVar11 = param_8;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126bdd88;
      func_0x00010bf4ca80(PTR_PTR_1126bdd88);
      _objc_retainAutoreleasedReturnValue();
      uVar25 = uVar11;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(uVar11);
      uVar9 = uVar25;
      func_0x00010010fab4(uVar25,PTR_DAT_1126a59c0);
      uVar11 = uVar25;
      if ((int)uVar9 == 0) {
        uVar11 = 0;
      }
      _objc_retain(uVar11);
      _objc_release(uVar25);
      func_0x00010c221400(*(undefined8 *)(param_3 + 0x48));
      _objc_release(uVar11);
      lVar10 = *(long *)(param_3 + 0x48);
      func_0x00010c299920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar10 == 0) {
        uVar11 = param_8;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        uVar25 = uVar11;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar11);
        puVar7 = PTR_PTR_1126cee28;
        _objc_opt_class(PTR_PTR_1126cee28);
        uVar9 = uVar25;
        _objc_opt_isKindOfClass(uVar25,puVar7);
        uVar11 = uVar25;
        if ((uVar9 & 1) == 0) {
          uVar11 = 0;
        }
        _objc_retain(uVar11);
        _objc_release(uVar25);
        uVar25 = param_8;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126bdd88;
        func_0x00010c240200(PTR_PTR_1126bdd88);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar25;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        _objc_release(uVar25);
        puVar7 = PTR_PTR_1126b25b8;
        _objc_opt_class(PTR_PTR_1126b25b8);
        uVar8 = uVar9;
        _objc_opt_isKindOfClass(uVar9,puVar7);
        uVar25 = uVar9;
        if ((uVar8 & 1) == 0) {
          uVar25 = 0;
        }
        _objc_retain(uVar25);
        _objc_release(uVar9);
        uVar9 = uVar11;
        func_0x00010bf4d3a0(uVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar25);
        _objc_release(uVar11);
        func_0x00010c221400(*(undefined8 *)(param_3 + 0x48));
        _objc_release(uVar9);
      }
    }
    if (uVar5 == 0) {
      uVar11 = *(ulong *)(param_3 + 0xf0);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_3 + 8);
      func_0x00010bf25140(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_3 + 8);
      func_0x00010bf8c980(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar11;
      func_0x00010bfbf8e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar12);
      _objc_release(uVar3);
      _objc_release(uVar11);
    }
    uVar3 = *(undefined8 *)(param_3 + 0x48);
    uVar9 = uVar1;
    func_0x00010c0efb20();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar1;
    func_0x00010bfb15a0();
    _objc_retainAutoreleasedReturnValue();
    param_3 = param_3 + 0x18;
    _objc_loadWeakRetained();
    lVar10 = param_3;
    func_0x00010c27f040();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar10;
    func_0x00010c27f020();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = param_8;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar20;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    uVar11 = param_8;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar11;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar14 = uVar25;
    _objc_opt_isKindOfClass(uVar25,puVar7);
    uVar11 = uVar25;
    if ((uVar14 & 1) == 0) {
      uVar11 = 0;
    }
    _objc_retain(uVar11);
    _objc_release(uVar25);
    uVar25 = uVar5;
    func_0x00010c22b3e0(param_1,param_2,uVar3);
    _objc_release(uVar11);
    _objc_release(uVar13);
    _objc_release(uVar20);
    _objc_release(lVar21);
    _objc_release(lVar10);
    _objc_release(param_3);
    _objc_release(uVar8);
    _objc_release(uVar9);
    _objc_release(uVar5);
  }
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar19);
  _objc_release(uVar1);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar25);
  puVar2 = PTR_PTR_1126ca010;
  _objc_alloc();
  func_0x00010c05ecc0();
  func_0x00010c18b5e0();
  uVar12 = *(undefined8 *)(param_5 + 8);
  uVar24 = *(undefined8 *)(param_5 + 0xf0);
  _objc_retain(uVar12);
  _objc_retain(uVar25);
  func_0x00010c269d40(uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar12;
  func_0x00010bf25140(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar12;
  func_0x00010bf8c980(uVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  uVar12 = uVar24;
  func_0x00010bfbf8e0(uVar24);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar25);
  uVar4 = uVar12;
  func_0x00010beec820(uVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  _objc_release(uVar3);
  _objc_release(uVar19);
  _objc_release(uVar24);
  func_0x00010c1e5ac0(puVar2);
  _objc_release(uVar4);
  func_0x00010c222620(puVar2);
  func_0x00010c20e0a0(puVar2);
  func_0x00010c1c4ee0(puVar2);
  puVar6 = PTR_PTR_1126ca020;
  _objc_alloc();
  lVar21 = *(long *)(param_5 + 8);
  _objc_retain(lVar21);
  lVar10 = lVar21;
  func_0x00010c280580();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar10;
  func_0x00010c08fa60();
  _objc_release(lVar10);
  if (lVar18 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = lVar21;
    func_0x00010c11b3a0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar21);
  uVar19 = *(undefined8 *)(param_5 + 8);
  FUN_107ac6ef8();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = *(long *)(param_5 + 8);
  _objc_retain(lVar22);
  lVar18 = lVar22;
  func_0x00010c280580();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar18;
  func_0x00010c08fa60();
  _objc_release(lVar18);
  if (lVar21 == 0) {
    lStack_220 = 0;
  }
  else {
    lStack_220 = lVar22;
    func_0x00010c11b6e0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar22);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  FUN_107ac8aa8(*(undefined8 *)(param_5 + 8));
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar7;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = *(long *)(param_5 + 8);
  _objc_retain(lVar22);
  lVar18 = lVar22;
  func_0x00010c280580();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar18;
  func_0x00010c08fa60();
  _objc_release(lVar18);
  if (lVar21 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = lVar22;
    func_0x00010bf25140(lVar22);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar22);
  lVar23 = *(long *)(param_5 + 8);
  _objc_retain(lVar23);
  lVar21 = lVar23;
  func_0x00010c280580();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar21;
  func_0x00010c08fa60();
  _objc_release(lVar21);
  if (lVar22 == 0) {
    lStack_240 = 0;
  }
  else {
    lVar21 = lVar23;
    func_0x00010c0b4680();
    _objc_retainAutoreleasedReturnValue();
    lStack_240 = lVar21;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar21);
  }
  _objc_release(lVar23);
  lVar23 = *(long *)(param_5 + 8);
  _objc_retain(lVar23);
  lVar21 = lVar23;
  func_0x00010c280580();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar21;
  func_0x00010c08fa60();
  _objc_release(lVar21);
  if (lVar22 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = lVar23;
    func_0x00010bf8c980();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar23);
  lVar22 = param_5 + 0x18;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010c27f040();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar23;
  func_0x00010c27f020();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010bc852e4();
  func_0x00010c03c100(puVar6);
  func_0x00010c171c20(puVar2);
  _objc_release(puVar6);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lStack_240);
  _objc_release(lVar18);
  _objc_release(puVar15);
  _objc_release(puVar7);
  _objc_release(lStack_220);
  _objc_release(uVar19);
  _objc_release(lVar10);
  uVar19 = *(undefined8 *)(param_5 + 8);
  func_0x000107ac6f70(uVar19);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010bf1d1a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e29e0();
  _objc_release(puVar6);
  _objc_release(uVar19);
  uVar19 = *(undefined8 *)(param_5 + 8);
  func_0x000107ac7038(uVar19);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010bf1d1a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f8f40();
  _objc_release(puVar6);
  _objc_release(uVar19);
  _objc_release(uVar25);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107ac8554; end: 107ac8aa7; -[SCDiscoverSharingSession shareControllerWithDSnapID:] */

void FUN_107ac8554(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uStack_a0;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ca010;
  _objc_alloc();
  func_0x00010c05ecc0();
  func_0x00010c18b5e0();
  uVar11 = *(undefined8 *)(param_1 + 8);
  uVar15 = *(undefined8 *)(param_1 + 0xf0);
  _objc_retain(uVar11);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar11;
  func_0x00010bf25140(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar11;
  func_0x00010bf8c980(uVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  uVar11 = uVar15;
  func_0x00010bfbf8e0(uVar15,param_2,uVar4,uVar5,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar11;
  func_0x00010beec820(uVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar15);
  func_0x00010c1e5ac0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c222620(puVar1,param_2,*(undefined8 *)(param_1 + 200));
  func_0x00010c20e0a0(puVar1,param_2,*(undefined8 *)(param_1 + 0x168));
  func_0x00010c1c4ee0(puVar1,param_2,*(undefined8 *)(param_1 + 0x1a0));
  puVar3 = PTR_PTR_1126ca020;
  _objc_alloc();
  lVar12 = *(long *)(param_1 + 8);
  _objc_retain(lVar12);
  lVar10 = lVar12;
  func_0x00010c280580();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar10;
  func_0x00010c08fa60();
  _objc_release(lVar10);
  if (lVar16 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = lVar12;
    func_0x00010c11b3a0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar12);
  uVar4 = *(undefined8 *)(param_1 + 8);
  FUN_107ac6ef8();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = *(long *)(param_1 + 8);
  _objc_retain(lVar13);
  lVar16 = lVar13;
  func_0x00010c280580();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar16;
  func_0x00010c08fa60();
  _objc_release(lVar16);
  if (lVar12 == 0) {
    uStack_80 = 0;
  }
  else {
    uStack_80 = lVar13;
    func_0x00010c11b6e0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar13);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar5 = *(undefined8 *)(param_1 + 8);
  FUN_107ac8aa8(uVar5);
  func_0x00010c0df7c0(puVar6,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = *(long *)(param_1 + 8);
  _objc_retain(lVar13);
  lVar16 = lVar13;
  func_0x00010c280580();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar16;
  func_0x00010c08fa60();
  _objc_release(lVar16);
  if (lVar12 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = lVar13;
    func_0x00010bf25140(lVar13);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar13);
  lVar14 = *(long *)(param_1 + 8);
  _objc_retain(lVar14);
  lVar12 = lVar14;
  func_0x00010c280580();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c08fa60();
  _objc_release(lVar12);
  if (lVar13 == 0) {
    uStack_a0 = 0;
  }
  else {
    lVar12 = lVar14;
    func_0x00010c0b4680();
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = lVar12;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar12);
  }
  _objc_release(lVar14);
  lVar14 = *(long *)(param_1 + 8);
  _objc_retain(lVar14);
  lVar12 = lVar14;
  func_0x00010c280580();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c08fa60();
  _objc_release(lVar12);
  if (lVar13 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = lVar14;
    func_0x00010bf8c980();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar14);
  lVar13 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010c27f040();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar14;
  func_0x00010c27f020();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010bc852e4();
  func_0x00010c03c100(puVar3,param_2,lVar10,uVar4,uStack_80,puVar7,lVar16,uStack_a0,lVar12,param_3,0
                     );
  func_0x00010c171c20(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(uStack_a0);
  _objc_release(lVar16);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uStack_80);
  _objc_release(uVar4);
  _objc_release(lVar10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x000107ac6f70(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf1d1a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e29e0();
  _objc_release(puVar3);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x000107ac7038(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf1d1a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f8f40();
  _objc_release(puVar3);
  _objc_release(uVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ac8aa8; end: 107ac8b17;  */

long FUN_107ac8aa8(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010c280580();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x00010c11b1e0(param_1);
  }
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 107ac8b18; end: 107ac8b43; -[SCDiscoverSharingSession shareControllerDidBeginSharing:] */

void FUN_107ac8b18(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0a19a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ac8b44; end: 107ac8c7b; -[SCDiscoverSharingSession shareController:didCompleteSharing:withParameters:] */

void FUN_107ac8b44(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  )

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar5 = PTR_PTR_1126afca8;
  if (param_4 != 0) {
    _objc_retain(param_5);
    ppuVar1 = &PTR____CFConstantStringClassReference_110e1f218;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1f218,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x000107ac6f70(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x000107ac7038(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c238760(puVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(ppuVar1);
    lVar4 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c0a38a0();
    _objc_release(lVar4);
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    lVar4 = param_1;
    func_0x00010bf99b80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b2638;
    func_0x00010bf7b7a0(PTR_PTR_1126b2638);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7c0(lVar4);
    _objc_release(param_5);
    _objc_release(puVar5);
    _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107ac8c7c; end: 107ac8c7f; -[SCDiscoverSharingSession shareControllerDidSaveSnap:parameters:] */

void FUN_107ac8c7c(void)

{
  return;
}



/* Entry: 107ac8c80; end: 107ac8ce7; -[SCDiscoverSharingSession shareControllerDidExitPreview] */

void FUN_107ac8c80(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x58);
  func_0x000107b27df4();
  if ((uVar1 & 1) != 0) {
    return;
  }
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c2bf380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bf1c0();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ac8ce8; end: 107ac8d73; -[SCDiscoverSharingSession shareController:didChangeState:] */

void FUN_107ac8ce8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = lVar2;
  func_0x00010be36bc0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c101400(param_1,param_2,lVar1);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107ac8d74; end: 107ac8f6f; -[SCDiscoverSharingSession _displayDiscoverProfileForPage:] */

void FUN_107ac8d74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  
  _objc_retain(param_3);
  lVar10 = *(long *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_107ac5e3c(lVar10,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar11 = *(ulong *)(param_1 + 8);
  _objc_retain(uVar11);
  uVar12 = uVar11;
  func_0x00010c280580();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar12;
  func_0x00010c08fa60();
  _objc_release(uVar12);
  if (uVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = uVar11;
    func_0x00010c239480();
  }
  _objc_release(uVar11);
  if ((lVar10 != 0) && ((uVar12 & 1) == 0)) {
    lVar3 = lVar10;
    func_0x00010bf51e00();
    func_0x00010c16d520();
    puVar4 = PTR_PTR_1126b0f10;
    _objc_alloc();
    func_0x00010c033440();
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    lVar5 = lVar10;
    func_0x00010bf24ec0(lVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010c27f040();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c27f020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be6db60(param_1);
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained();
    lVar9 = param_1;
    func_0x00010bf99b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfea020(uVar1);
    _objc_release(lVar9);
    _objc_release(param_1);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ac8f70; end: 107ac914f; -[SCDiscoverSharingSession _deprecatedDisplayPublisherProfileForPage:] */

void FUN_107ac8f70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  
  _objc_retain(param_3);
  lVar9 = *(long *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107ac5ecc(lVar9,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar10 = *(ulong *)(param_1 + 8);
  _objc_retain(uVar10);
  uVar11 = uVar10;
  func_0x00010c280580();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar11;
  func_0x00010c08fa60();
  _objc_release(uVar11);
  if (uVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = uVar10;
    func_0x00010c11b460();
  }
  _objc_release(uVar10);
  if ((lVar9 != 0) && ((uVar11 & 1) == 0)) {
    puVar3 = PTR_PTR_1126b0f10;
    _objc_alloc();
    func_0x00010c033440();
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    lVar4 = lVar9;
    func_0x00010bf25140(lVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010c27f040();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c27f020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be6db60(param_1);
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained();
    lVar8 = param_1;
    func_0x00010bf99b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfea020(uVar1);
    _objc_release(lVar8);
    _objc_release(param_1);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(puVar3);
  }
  _objc_release(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ac9150; end: 107ac9157; -[SCDiscoverSharingSession didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_107ac9150(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_didTriggerEventWithEventName_ann_1125bd098);
  return;
}



/* Entry: 107ac9158; end: 107ac922b; -[SCDiscoverSharingSession _logCheetahEventForActionType:story:interactionContext:] */

void FUN_107ac9158(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  FUN_107cb4cfc(param_3,param_4,param_5,*(undefined8 *)(param_1 + 0x180));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bf7dbc0(uVar2);
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107ac922c; end: 107ac931b; -[SCDiscoverSharingSession didUpdateWithAnnouncerIdentifier:] */

void FUN_107ac922c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126ca010;
  _objc_retain(param_3);
  func_0x00010bf04780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  _objc_release(puVar1);
  if ((int)uVar5 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    lVar2 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c27f040();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0f1880();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c4a0(uVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c12eeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x48),PTR_s_removeUpdateListener__1126295c8,param_1);
    return;
  }
  return;
}



/* Entry: 107ac931c; end: 107ac9557; -[SCDiscoverSharingSession _handleConfirmationUnsubscribeAction:params:] */

void FUN_107ac931c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9310;
  func_0x00010c11b700(PTR_PTR_1126c9310);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar7 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar7);
  lVar4 = lVar7;
  func_0x00010c27f040();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c27f020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar7);
  _objc_initWeak(auStack_68,param_1);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_107ac9558;
  puStack_90 = &UNK_110850cf8;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(uVar1);
  uStack_88 = uVar1;
  _objc_retain(param_3);
  uStack_80 = param_3;
  _objc_retain(param_4);
  ppuVar6 = &puStack_a8;
  uStack_78 = param_4;
  _objc_retainBlock();
  lVar7 = *(long *)(param_1 + 0x158);
  if (lVar7 == 0) {
    (*(code *)ppuVar6[2])(ppuVar6);
  }
  else {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c251ac0();
    _objc_release(lVar7);
  }
  _objc_release(ppuVar6);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107ac9558; end: 107ac9633;  */

void FUN_107ac9558(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107ac9634;
  puStack_58 = &UNK_110850cf8;
  _objc_copyWeak(auStack_38,param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107ac9634; end: 107ac968b;  */

void FUN_107ac9634(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0eb7c0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ac968c; end: 107ac97d7; -[SCDiscoverSharingSession _subscribeToPublisher:storyDedupeFp:shouldLogSubscribeEvent:interactionContext:currentItemPageId:] */

void FUN_107ac968c(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0;
  _dispatch_get_global_queue(0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_58);
  uStack_68 = param_6;
  uStack_60 = param_3;
  uStack_5f = param_5;
  _objc_retain(param_7);
  func_0x00010c25bae0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  return;
}



/* Entry: 107ac97d8; end: 107ac9837;  */

void FUN_107ac97d8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be31400();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ac9838; end: 107ac98d7; -[SCDiscoverSharingSession _updatePlaylistItemForItemPageId:] */

void FUN_107ac9838(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = lVar2;
  func_0x00010be36bc0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c101400(param_1,param_2,lVar1);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107ac98d8; end: 107ac9933; -[SCDiscoverSharingSession _operaNavigationType] */

bool FUN_107ac98d8(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d6c60();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2 != 0;
}



/* Entry: 107ac9934; end: 107ac993b; -[SCDiscoverSharingSession handleShareDestination:standardExternalContentShareScope:] */

undefined8 FUN_107ac9934(void)

{
  return 0;
}



/* Entry: 107ac993c; end: 107ac993f; -[SCDiscoverSharingSession shareSheetDismissedWithShareDestination:] */

void FUN_107ac993c(void)

{
  return;
}



/* Entry: 107ac9940; end: 107ac9947; -[SCDiscoverSharingSession actionMenuEntryEvent] */

undefined8 FUN_107ac9940(long param_1)

{
  return *(undefined8 *)(param_1 + 0x198);
}



/* Entry: 107ac9948; end: 107ac994f; -[SCDiscoverSharingSession mediaPlaybackSessionId] */

undefined8 FUN_107ac9948(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1a0);
}



/* Entry: 107ac9950; end: 107ac9957; -[SCDiscoverSharingSession setMediaPlaybackSessionId:] */

void FUN_107ac9950(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107ac9958; end: 107ac9bab; -[SCDiscoverSharingSession .cxx_destruct] */

void FUN_107ac9958(long param_1)

{
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ac9bac; end: 107ac9bb7; +[SCPublisherStoryReportSession announcerIdentifier] */

undefined ** FUN_107ac9bac(void)

{
  return &PTR____CFConstantStringClassReference_110eac358;
}



/* Entry: 107ac9bb8; end: 107ac9d73; -[SCPublisherStoryReportSession initWithOperaControlling:userSession:viewLocation:discoverFeedDataFetcher:safetyReportScopeExposer:bloopsReportScopeExposer:targetFeature:circumstanceEngine:playlistItemController:contentRemovalDelegate:] */

undefined8 *
FUN_107ac9bb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126f9ad8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_storeWeak(puVar1 + 2,param_4);
    puVar1[3] = param_5;
    _objc_retain(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[9];
    puVar1[9] = param_8;
    _objc_release(uVar2);
    puVar1[10] = param_9;
    _objc_storeWeak(puVar1 + 0xb,param_11);
    _objc_storeWeak(puVar1 + 0xc,param_12);
    _objc_retain(param_10);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107ac9d74; end: 107ac9e57; -[SCPublisherStoryReportSession registeredEventsForOperaSession] */

void FUN_107ac9d74(float param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  ulong in_x4;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  ppuVar16 = &puStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126b2d30;
  func_0x00010c133ba0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2ea8;
  puStack_50 = puVar2;
  func_0x00010c0b4cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b2338;
  puStack_48 = puVar3;
  func_0x00010c29aaa0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = (undefined *)0x3;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar16);
  _objc_retain(puVar17);
  _objc_retain(in_x4);
  puVar3 = puVar17;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c9310;
  func_0x00010c0700c0();
  if ((((ulong)puVar8 & 1) == 0) &&
     (puVar8 = PTR_PTR_1126b2340, func_0x00010c077200(), (int)puVar8 == 0)) goto LAB_107aca41c;
  puVar8 = PTR_PTR_1126b2d30;
  func_0x00010c133ba0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = (undefined1 *)ppuVar16;
  func_0x00010c0720c0();
  _objc_release(puVar8);
  if ((int)puVar5 == 0) {
    puVar8 = PTR_PTR_1126b2ea8;
    func_0x00010c0b4cc0(PTR_PTR_1126b2ea8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = (undefined1 *)ppuVar16;
    func_0x00010c0720c0();
    _objc_release(puVar8);
    if ((int)puVar5 == 0) {
      puVar8 = PTR_PTR_1126b2338;
      func_0x00010c29aaa0(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = (undefined1 *)ppuVar16;
      func_0x00010c0720c0();
      _objc_release(puVar8);
      if ((int)puVar5 == 0) goto LAB_107aca41c;
    }
    puVar8 = PTR_PTR_1126b2348;
    func_0x00010bf5fb40(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = in_x4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar7 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar8);
    uVar1 = uVar6;
    if ((uVar7 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar6);
    puVar8 = *(undefined **)(puVar2 + 0x40);
    *(ulong *)(puVar2 + 0x40) = uVar1;
  }
  else {
    puVar8 = PTR_PTR_1126c9310;
    func_0x00010c06dca0();
    if ((int)puVar8 == 0) {
      if (*(long *)(puVar2 + 0x50) != 0) goto LAB_107aca41c;
    }
    else {
      if (*(long *)(puVar2 + 0x50) != 1) goto LAB_107aca41c;
      if (*(long *)(puVar2 + 0x48) != 0) {
        func_0x00010bebf8c0(puVar2);
        goto LAB_107aca41c;
      }
    }
    puVar8 = PTR_PTR_1126c9310;
    func_0x00010c11b200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar8;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(puVar2 + 0x68);
    *(undefined **)(puVar2 + 0x68) = puVar4;
    _objc_release(uVar18);
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126c9310;
    func_0x00010c11b700();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126c9310;
    func_0x00010bf8c9a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c9310;
    func_0x00010c259760();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(puVar2 + 0x20);
    *(undefined **)(puVar2 + 0x20) = puVar4;
    _objc_release(uVar18);
    puVar4 = PTR_PTR_1126bdd28;
    puVar19 = *(undefined **)(puVar2 + 0x78);
    _objc_retain(puVar19);
    _objc_opt_class(puVar4);
    puVar10 = puVar19;
    _objc_opt_isKindOfClass(puVar19,puVar4);
    puVar4 = puVar19;
    if (((ulong)puVar10 & 1) == 0) {
      puVar4 = (undefined *)0x0;
    }
    _objc_retain(puVar4);
    _objc_release(puVar19);
    puVar10 = PTR_PTR_1126c9310;
    func_0x00010c0700c0();
    if ((int)puVar10 == 0) {
      if (*(long *)(puVar2 + 0x40) != 0) {
        func_0x00010bfb2c80();
        param_1 = ABS(param_1);
        if (param_1 < 0.1) {
          uVar18 = *(undefined8 *)(puVar2 + 0x40);
          *(undefined ***)(puVar2 + 0x40) = &PTR__OBJC_CLASS___NSConstantFloatNumber_111186460;
          _objc_release(uVar18);
        }
        puVar19 = puVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR_PTR_1126d53e8;
        _objc_opt_class(PTR_PTR_1126d53e8);
        puVar11 = puVar19;
        _objc_opt_isKindOfClass(puVar19,puVar10);
        puVar10 = puVar19;
        if (((ulong)puVar11 & 1) == 0) {
          puVar10 = (undefined *)0x0;
        }
        _objc_retain(puVar10);
        _objc_release(puVar19);
        puVar19 = puVar10;
        func_0x00010bf9a520();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar10);
        func_0x00010bfb2c80(*(undefined8 *)(puVar2 + 0x40));
        puVar10 = puVar19;
        FUN_107b3c390(0,(double)(param_1 / 1000.0));
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar19;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar11;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        puVar11 = puVar10;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar10);
        _objc_release(puVar19);
        goto LAB_107aca294;
      }
    }
    else {
      puVar10 = puVar4;
      func_0x00010c242500();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar10;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar19;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar19);
      _objc_release(puVar10);
      puVar11 = PTR_PTR_1126c9310;
      func_0x00010bf631e0();
      _objc_retainAutoreleasedReturnValue();
LAB_107aca294:
      puVar10 = PTR_PTR_1126d6418;
      _objc_alloc(PTR_PTR_1126d6418);
      func_0x00010c047b20();
      puVar19 = PTR_PTR_1126c9310;
      func_0x00010c0700c0();
      if (((ulong)puVar19 & 1) == 0) {
        func_0x00010c17ac40(puVar10);
      }
      puVar19 = PTR_PTR_1126c9310;
      func_0x00010c259500(PTR_PTR_1126c9310);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1805c0(puVar10);
      _objc_release(puVar19);
      puVar13 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      puVar19 = puVar2 + 8;
      _objc_loadWeakRetained(puVar19);
      puVar14 = puVar19;
      func_0x00010c27f040();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar14;
      func_0x00010c27f020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c038f40(puVar13);
      _objc_release(puVar15);
      _objc_release(puVar14);
      _objc_release(puVar19);
      puVar19 = PTR_PTR_1126b2ec8;
      _objc_alloc(PTR_PTR_1126b2ec8);
      puVar14 = PTR_PTR_1126b2e98;
      func_0x00010c11b600(PTR_PTR_1126b2e98);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c058840(puVar19);
      _objc_release(puVar14);
      func_0x00010bf9d620(*(undefined8 *)(puVar2 + 0x38));
      _objc_release(puVar19);
      _objc_release(puVar13);
      _objc_release(puVar10);
      _objc_release(puVar11);
      _objc_release(puVar12);
    }
    _objc_release(puVar4);
    _objc_release(puVar9);
  }
  _objc_release(puVar8);
LAB_107aca41c:
  _objc_release(puVar3);
  _objc_release(in_x4);
  _objc_release(puVar17);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar16);
  return;
}



/* Entry: 107ac9e58; end: 107aca457; -[SCPublisherStoryReportSession operaViewDidSendEvent:page:params:] */

void FUN_107ac9e58(float param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,ulong param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = param_5;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c9310;
  func_0x00010c0700c0();
  if ((((ulong)puVar5 & 1) == 0) &&
     (puVar5 = PTR_PTR_1126b2340, func_0x00010c077200(), (int)puVar5 == 0)) goto LAB_107aca41c;
  puVar5 = PTR_PTR_1126b2d30;
  func_0x00010c133ba0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar5);
  if ((int)uVar16 == 0) {
    puVar5 = PTR_PTR_1126b2ea8;
    func_0x00010c0b4cc0(PTR_PTR_1126b2ea8);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = param_4;
    func_0x00010c0720c0();
    _objc_release(puVar5);
    if ((int)uVar16 == 0) {
      puVar5 = PTR_PTR_1126b2338;
      func_0x00010c29aaa0(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = param_4;
      func_0x00010c0720c0();
      _objc_release(puVar5);
      if ((int)uVar16 == 0) goto LAB_107aca41c;
    }
    puVar5 = PTR_PTR_1126b2348;
    func_0x00010bf5fb40(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar5);
    uVar1 = uVar3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    puVar5 = *(undefined **)(param_2 + 0x40);
    *(ulong *)(param_2 + 0x40) = uVar1;
  }
  else {
    puVar5 = PTR_PTR_1126c9310;
    func_0x00010c06dca0();
    if ((int)puVar5 == 0) {
      if (*(long *)(param_2 + 0x50) != 0) goto LAB_107aca41c;
    }
    else {
      if (*(long *)(param_2 + 0x50) != 1) goto LAB_107aca41c;
      if (*(long *)(param_2 + 0x48) != 0) {
        func_0x00010bebf8c0(param_2);
        goto LAB_107aca41c;
      }
    }
    puVar5 = PTR_PTR_1126c9310;
    func_0x00010c11b200();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_2 + 0x68);
    *(undefined **)(param_2 + 0x68) = puVar6;
    _objc_release(uVar16);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126c9310;
    func_0x00010c11b700();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126c9310;
    func_0x00010bf8c9a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126c9310;
    func_0x00010c259760();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_2 + 0x20);
    *(undefined **)(param_2 + 0x20) = puVar6;
    _objc_release(uVar16);
    puVar6 = PTR_PTR_1126bdd28;
    puVar17 = *(undefined **)(param_2 + 0x78);
    _objc_retain(puVar17);
    _objc_opt_class(puVar6);
    puVar8 = puVar17;
    _objc_opt_isKindOfClass(puVar17,puVar6);
    puVar6 = puVar17;
    if (((ulong)puVar8 & 1) == 0) {
      puVar6 = (undefined *)0x0;
    }
    _objc_retain(puVar6);
    _objc_release(puVar17);
    puVar8 = PTR_PTR_1126c9310;
    func_0x00010c0700c0();
    if ((int)puVar8 == 0) {
      if (*(long *)(param_2 + 0x40) != 0) {
        func_0x00010bfb2c80();
        param_1 = ABS(param_1);
        if (param_1 < 0.1) {
          uVar16 = *(undefined8 *)(param_2 + 0x40);
          *(undefined ***)(param_2 + 0x40) = &PTR__OBJC_CLASS___NSConstantFloatNumber_111186460;
          _objc_release(uVar16);
        }
        puVar17 = puVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR_PTR_1126d53e8;
        _objc_opt_class(PTR_PTR_1126d53e8);
        puVar9 = puVar17;
        _objc_opt_isKindOfClass(puVar17,puVar8);
        puVar8 = puVar17;
        if (((ulong)puVar9 & 1) == 0) {
          puVar8 = (undefined *)0x0;
        }
        _objc_retain(puVar8);
        _objc_release(puVar17);
        puVar17 = puVar8;
        func_0x00010bf9a520();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        func_0x00010bfb2c80(*(undefined8 *)(param_2 + 0x40));
        puVar8 = puVar17;
        FUN_107b3c390(0,(double)(param_1 / 1000.0));
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar17;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        puVar9 = puVar8;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        _objc_release(puVar17);
        goto LAB_107aca294;
      }
    }
    else {
      puVar8 = puVar6;
      func_0x00010c242500();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar8;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar17;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar17);
      _objc_release(puVar8);
      puVar9 = PTR_PTR_1126c9310;
      func_0x00010bf631e0();
      _objc_retainAutoreleasedReturnValue();
LAB_107aca294:
      puVar8 = PTR_PTR_1126d6418;
      _objc_alloc(PTR_PTR_1126d6418);
      func_0x00010c047b20();
      puVar17 = PTR_PTR_1126c9310;
      func_0x00010c0700c0();
      if (((ulong)puVar17 & 1) == 0) {
        func_0x00010c17ac40(puVar8);
      }
      puVar17 = PTR_PTR_1126c9310;
      func_0x00010c259500(PTR_PTR_1126c9310);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1805c0(puVar8);
      _objc_release(puVar17);
      puVar17 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      lVar11 = param_2 + 8;
      _objc_loadWeakRetained(lVar11);
      lVar12 = lVar11;
      func_0x00010c27f040();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar12;
      func_0x00010c27f020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c038f40(puVar17);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar11);
      puVar14 = PTR_PTR_1126b2ec8;
      _objc_alloc(PTR_PTR_1126b2ec8);
      puVar15 = PTR_PTR_1126b2e98;
      func_0x00010c11b600(PTR_PTR_1126b2e98);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c058840(puVar14);
      _objc_release(puVar15);
      func_0x00010bf9d620(*(undefined8 *)(param_2 + 0x38));
      _objc_release(puVar14);
      _objc_release(puVar17);
      _objc_release(puVar8);
      _objc_release(puVar9);
      _objc_release(puVar10);
    }
    _objc_release(puVar6);
    _objc_release(puVar7);
  }
  _objc_release(puVar5);
LAB_107aca41c:
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107aca458; end: 107aca45f; -[SCPublisherStoryReportSession addListener:] */

void FUN_107aca458(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 107aca460; end: 107aca467; -[SCPublisherStoryReportSession removeListener:] */

void FUN_107aca460(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107aca468; end: 107aca553; -[SCPublisherStoryReportSession reportDidCompleteWithCancelled:] */

void FUN_107aca468(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x38);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x38));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if (((param_3 & 1) == 0) &&
     (((lVar2 = *(long *)(param_1 + 0x18),
       lVar2 - 0x49U < 0x1a && (1L << (lVar2 - 0x49U & 0x3f) & 0x2020001U) != 0 ||
       (uVar1 = lVar2 - 0x57U >> 1,
       (uVar1 | lVar2 - 0x57U << 0x3f) < 8 && (1L << (uVar1 & 0x3f) & 0xb1U) != 0)) ||
      ((lVar2 - 0x42U < 0x2a && ((1L << (lVar2 - 0x42U & 0x3f) & 0x3c000100701U) != 0)))))) {
    func_0x00010bdd1600(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be8d870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeStoryFromPlaylist_112580fb8);
    return;
  }
  return;
}



/* Entry: 107aca554; end: 107aca557; -[SCPublisherStoryReportSession reportDidSubmitWithReasonId:comment:] */

void FUN_107aca554(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6b1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__onReportSubmittedWithReasonId__112578610);
  return;
}



/* Entry: 107aca558; end: 107aca59f; -[SCPublisherStoryReportSession bloopsReportDidCompleteWithCancelled:] */

void FUN_107aca558(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x48));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 107aca5a0; end: 107aca60f; -[SCPublisherStoryReportSession bloopsReportDidSubmitWithReasonId:comment:] */

void FUN_107aca5a0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010be6b1c0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


