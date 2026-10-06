/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107ab1654; end: 107ab16cf; -[SCDiscoverPublisherOperaDataSource setEventAnnouncing:] */

void FUN_107ab1654(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  lVar1 = param_1;
  func_0x00010c127820(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef99a0(uVar2,param_2,param_1,lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107ab16d0; end: 107ab189b; -[SCDiscoverPublisherOperaDataSource registeredEventsForOperaSession] */

void FUN_107ab16d0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined ***pppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined ***pppuVar14;
  undefined *puVar15;
  undefined *in_x4;
  ulong uVar16;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110ebeb98;
  puVar1 = PTR_PTR_1126b2338;
  func_0x00010c0c6900();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2338;
  puStack_b0 = puVar1;
  func_0x00010bfe8ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c9460;
  puStack_a8 = puVar2;
  func_0x00010c269c60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c9460;
  puStack_a0 = puVar3;
  func_0x00010c269c80();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126c9460;
  puStack_98 = puVar4;
  func_0x00010c0f2620();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126c9460;
  puStack_90 = puVar10;
  func_0x00010c0f25e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2330;
  puStack_88 = puVar11;
  func_0x00010bf3df20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b2338;
  puStack_80 = puVar5;
  func_0x00010c2612e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b2338;
  puStack_78 = puVar6;
  func_0x00010c0c4dc0();
  _objc_retainAutoreleasedReturnValue();
  pppuVar14 = &ppuStack_b8;
  puVar15 = (undefined *)0xa;
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar7;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(pppuVar14);
  _objc_retain(puVar15);
  _objc_retain(in_x4);
  puVar2 = puVar15;
  func_0x00010c118b40(puVar15);
  _objc_retainAutoreleasedReturnValue();
  pppuVar9 = pppuVar14;
  func_0x00010c0720c0();
  if ((int)pppuVar9 == 0) {
    puVar3 = PTR_PTR_1126b2338;
    func_0x00010c2612e0(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    pppuVar9 = pppuVar14;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    if ((int)pppuVar9 != 0) {
      puVar3 = puVar1;
      func_0x00010be4ea00();
      if ((int)puVar3 == 0) goto LAB_107ab1f44;
      puVar3 = PTR_PTR_1126b2348;
      func_0x00010c2612c0(PTR_PTR_1126b2348);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = in_x4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126c9448;
      _objc_opt_class(PTR_PTR_1126c9448);
      puVar10 = puVar4;
      _objc_opt_isKindOfClass(puVar4,puVar3);
      puVar3 = puVar4;
      if (((ulong)puVar10 & 1) == 0) {
        puVar3 = (undefined *)0x0;
      }
      _objc_retain(puVar3);
      _objc_release(puVar4);
      puVar4 = PTR_PTR_1126c9310;
      func_0x00010bf631e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 != (undefined *)0x0) {
        puVar10 = *(undefined **)(puVar1 + 0x80);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar3);
        _objc_retain(puVar10);
        if (puVar3 == puVar10) {
          _objc_release(puVar10);
          puVar11 = puVar3;
          goto LAB_107ab1bf0;
        }
        if (puVar10 == (undefined *)0x0) {
          _objc_release();
        }
        else {
          puVar11 = puVar3;
          func_0x00010c071ae0();
          _objc_release(puVar10);
          _objc_release(puVar3);
          _objc_release(puVar10);
          if (((ulong)puVar11 & 1) != 0) goto LAB_107ab1c00;
        }
        func_0x00010c1d0640(*(undefined8 *)(puVar1 + 0x80));
        puVar10 = PTR_PTR_1126c9310;
        func_0x00010c2805a0(PTR_PTR_1126c9310);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar2;
        func_0x00010c0e00e0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be31560(puVar1);
LAB_107ab1bf0:
        _objc_release(puVar11);
        goto LAB_107ab1bf8;
      }
LAB_107ab1c00:
      _objc_release(puVar4);
      goto LAB_107ab1c08;
    }
    puVar3 = PTR_PTR_1126b2338;
    func_0x00010c0c4dc0(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    pppuVar9 = pppuVar14;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    if ((int)pppuVar9 != 0) {
      puVar3 = PTR_PTR_1126b2348;
      func_0x00010c120300(PTR_PTR_1126b2348);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = in_x4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      _objc_opt_class(PTR__OBJC_CLASS___NSError_1126ae858);
      puVar10 = puVar4;
      _objc_opt_isKindOfClass(puVar4,puVar3);
      puVar3 = puVar4;
      if (((ulong)puVar10 & 1) == 0) {
        puVar3 = (undefined *)0x0;
      }
      _objc_retain(puVar3);
      _objc_release(puVar4);
      puVar4 = puVar3;
      func_0x00010c14d140();
      if ((int)puVar4 == 0) goto LAB_107ab1c08;
      puVar4 = PTR_PTR_1126c9310;
      func_0x00010c2805a0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR_PTR_1126c9310;
      func_0x00010bf631e0(PTR_PTR_1126c9310);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar4;
      func_0x00010c08fa60();
      if (puVar11 != (undefined *)0x0) {
        puVar11 = *(undefined **)(puVar1 + 0x70);
        func_0x00010c0e00e0(puVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c5680();
        goto LAB_107ab1bf0;
      }
LAB_107ab1bf8:
      _objc_release(puVar10);
      goto LAB_107ab1c00;
    }
  }
  else {
    puVar3 = in_x4;
    func_0x00010c0e00e0(in_x4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    func_0x00010bee37a0(puVar1);
LAB_107ab1c08:
    _objc_release(puVar3);
  }
  _objc_loadWeakRetained(puVar1 + 0x58);
  uVar16 = *(ulong *)(puVar1 + 0x88);
  _objc_release();
  if ((uVar16 & 0xfffffffffffffffb) == 0x62) {
    puVar3 = PTR_PTR_1126c9310;
    func_0x00010c2805a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c9310;
    func_0x00010bf631e0(PTR_PTR_1126c9310);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126c9460;
    func_0x00010c269c60(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    pppuVar9 = pppuVar14;
    func_0x00010c0720c0();
    _objc_release(puVar10);
    if (((int)pppuVar9 != 0) && (puVar3 != (undefined *)0x0)) {
      uVar12 = *(undefined8 *)(puVar1 + 0x70);
      func_0x00010c0e00e0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7fae0();
      _objc_retain(puVar3);
      uVar13 = *(undefined8 *)(puVar1 + 0x90);
      *(undefined **)(puVar1 + 0x90) = puVar3;
      _objc_release(uVar13);
      _objc_release(uVar12);
    }
    puVar10 = PTR_PTR_1126c9460;
    func_0x00010c269c80(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    pppuVar9 = pppuVar14;
    func_0x00010c0720c0();
    _objc_release(puVar10);
    if (((int)pppuVar9 != 0) && (puVar3 != (undefined *)0x0)) {
      uVar12 = *(undefined8 *)(puVar1 + 0x70);
      func_0x00010c0e00e0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7fae0();
      _objc_retain(puVar3);
      uVar13 = *(undefined8 *)(puVar1 + 0x90);
      *(undefined **)(puVar1 + 0x90) = puVar3;
      _objc_release(uVar13);
      _objc_release(uVar12);
    }
    puVar10 = PTR_PTR_1126c9460;
    func_0x00010c0f25e0(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    pppuVar9 = pppuVar14;
    func_0x00010c0720c0();
    if ((int)pppuVar9 == 0) {
      puVar11 = PTR_PTR_1126c9460;
      func_0x00010c0f2620(PTR_PTR_1126c9460);
      _objc_retainAutoreleasedReturnValue();
      pppuVar9 = pppuVar14;
      func_0x00010c0720c0();
      _objc_release(puVar11);
      _objc_release(puVar10);
      if ((int)pppuVar9 != 0) goto LAB_107ab1dcc;
    }
    else {
      _objc_release(puVar10);
LAB_107ab1dcc:
      if (*(long *)(puVar1 + 0x90) != 0) {
        uVar12 = *(undefined8 *)(puVar1 + 0x70);
        func_0x00010c0e00e0(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c138260();
        _objc_release(uVar12);
      }
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  puVar3 = puVar1 + 0x68;
  _objc_loadWeakRetained();
  puVar4 = puVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar4;
  func_0x000107ab89c0();
  _objc_release(puVar4);
  _objc_release(puVar3);
  if ((int)puVar10 == 0) goto LAB_107ab1f44;
  puVar3 = PTR_PTR_1126c9310;
  func_0x00010c2805a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c9310;
  func_0x00010bf631e0(PTR_PTR_1126c9310);
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined8 *)(puVar1 + 0x70);
    func_0x00010c0e00e0(uVar12);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar1 = PTR_PTR_1126c9460;
  func_0x00010c269c80(PTR_PTR_1126c9460);
  _objc_retainAutoreleasedReturnValue();
  pppuVar9 = pppuVar14;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if ((int)pppuVar9 == 0) {
    puVar1 = PTR_PTR_1126c9460;
    func_0x00010c0f2620(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    pppuVar9 = pppuVar14;
    func_0x00010c0720c0();
    _objc_release(puVar1);
    if ((int)pppuVar9 != 0) goto LAB_107ab1f28;
    puVar1 = PTR_PTR_1126c9460;
    func_0x00010c269c60(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    pppuVar9 = pppuVar14;
    func_0x00010c0720c0();
    if ((int)pppuVar9 == 0) {
      puVar10 = PTR_PTR_1126c9460;
      func_0x00010c0f25e0(PTR_PTR_1126c9460);
      _objc_retainAutoreleasedReturnValue();
      pppuVar9 = pppuVar14;
      func_0x00010c0720c0();
      _objc_release(puVar10);
      _objc_release(puVar1);
      if ((int)pppuVar9 != 0) goto LAB_107ab1fe4;
    }
    else {
      _objc_release(puVar1);
LAB_107ab1fe4:
      func_0x00010c138260(uVar12);
    }
  }
  else {
LAB_107ab1f28:
    func_0x00010bf7fae0(uVar12);
  }
  _objc_release(uVar12);
  _objc_release(puVar4);
  _objc_release(puVar3);
LAB_107ab1f44:
  _objc_release(puVar2);
  _objc_release(in_x4);
  _objc_release(puVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pppuVar14);
  return;
}



/* Entry: 107ab189c; end: 107ab1fef; -[SCDiscoverPublisherOperaDataSource operaViewDidSendEvent:page:params:] */

void FUN_107ab189c(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_4;
  func_0x00010c118b40(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar7 == 0) {
    puVar2 = PTR_PTR_1126b2338;
    func_0x00010c2612e0(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    if ((int)uVar7 != 0) {
      lVar3 = param_1;
      func_0x00010be4ea00();
      if ((int)lVar3 == 0) goto LAB_107ab1f44;
      puVar2 = PTR_PTR_1126b2348;
      func_0x00010c2612c0(PTR_PTR_1126b2348);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126c9448;
      _objc_opt_class(PTR_PTR_1126c9448);
      puVar4 = puVar5;
      _objc_opt_isKindOfClass(puVar5,puVar2);
      puVar2 = puVar5;
      if (((ulong)puVar4 & 1) == 0) {
        puVar2 = (undefined *)0x0;
      }
      _objc_retain(puVar2);
      _objc_release(puVar5);
      puVar5 = PTR_PTR_1126c9310;
      func_0x00010bf631e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar5 != (undefined *)0x0) {
        puVar4 = *(undefined **)(param_1 + 0x80);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar2);
        _objc_retain(puVar4);
        if (puVar2 == puVar4) {
          _objc_release(puVar4);
          puVar6 = puVar2;
          goto LAB_107ab1bf0;
        }
        if (puVar4 == (undefined *)0x0) {
          _objc_release();
        }
        else {
          puVar6 = puVar2;
          func_0x00010c071ae0();
          _objc_release(puVar4);
          _objc_release(puVar2);
          _objc_release(puVar4);
          if (((ulong)puVar6 & 1) != 0) goto LAB_107ab1c00;
        }
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x80));
        puVar4 = PTR_PTR_1126c9310;
        func_0x00010c2805a0(PTR_PTR_1126c9310);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar1;
        func_0x00010c0e00e0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be31560(param_1);
LAB_107ab1bf0:
        _objc_release(puVar6);
        goto LAB_107ab1bf8;
      }
LAB_107ab1c00:
      _objc_release(puVar5);
      goto LAB_107ab1c08;
    }
    puVar2 = PTR_PTR_1126b2338;
    func_0x00010c0c4dc0(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    if ((int)uVar7 != 0) {
      puVar2 = PTR_PTR_1126b2348;
      func_0x00010c120300(PTR_PTR_1126b2348);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
      _objc_opt_class(PTR__OBJC_CLASS___NSError_1126ae858);
      puVar4 = puVar5;
      _objc_opt_isKindOfClass(puVar5,puVar2);
      puVar2 = puVar5;
      if (((ulong)puVar4 & 1) == 0) {
        puVar2 = (undefined *)0x0;
      }
      _objc_retain(puVar2);
      _objc_release(puVar5);
      puVar5 = puVar2;
      func_0x00010c14d140();
      if ((int)puVar5 == 0) goto LAB_107ab1c08;
      puVar5 = PTR_PTR_1126c9310;
      func_0x00010c2805a0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126c9310;
      func_0x00010bf631e0(PTR_PTR_1126c9310);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c08fa60();
      if (puVar6 != (undefined *)0x0) {
        puVar6 = *(undefined **)(param_1 + 0x70);
        func_0x00010c0e00e0(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c5680();
        goto LAB_107ab1bf0;
      }
LAB_107ab1bf8:
      _objc_release(puVar4);
      goto LAB_107ab1c00;
    }
  }
  else {
    puVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    func_0x00010bee37a0(param_1);
LAB_107ab1c08:
    _objc_release(puVar2);
  }
  _objc_loadWeakRetained(param_1 + 0x58);
  uVar11 = *(ulong *)(param_1 + 0x88);
  _objc_release();
  if ((uVar11 & 0xfffffffffffffffb) == 0x62) {
    puVar2 = PTR_PTR_1126c9310;
    func_0x00010c2805a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c9310;
    func_0x00010bf631e0(PTR_PTR_1126c9310);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c9460;
    func_0x00010c269c60(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar4);
    if (((int)uVar7 != 0) && (puVar2 != (undefined *)0x0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x70);
      func_0x00010c0e00e0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7fae0();
      _objc_retain(puVar2);
      uVar8 = *(undefined8 *)(param_1 + 0x90);
      *(undefined **)(param_1 + 0x90) = puVar2;
      _objc_release(uVar8);
      _objc_release(uVar7);
    }
    puVar4 = PTR_PTR_1126c9460;
    func_0x00010c269c80(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar4);
    if (((int)uVar7 != 0) && (puVar2 != (undefined *)0x0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x70);
      func_0x00010c0e00e0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7fae0();
      _objc_retain(puVar2);
      uVar8 = *(undefined8 *)(param_1 + 0x90);
      *(undefined **)(param_1 + 0x90) = puVar2;
      _objc_release(uVar8);
      _objc_release(uVar7);
    }
    puVar4 = PTR_PTR_1126c9460;
    func_0x00010c0f25e0(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar7 == 0) {
      puVar6 = PTR_PTR_1126c9460;
      func_0x00010c0f2620(PTR_PTR_1126c9460);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_3;
      func_0x00010c0720c0();
      _objc_release(puVar6);
      _objc_release(puVar4);
      if ((int)uVar7 != 0) goto LAB_107ab1dcc;
    }
    else {
      _objc_release(puVar4);
LAB_107ab1dcc:
      if (*(long *)(param_1 + 0x90) != 0) {
        uVar7 = *(undefined8 *)(param_1 + 0x70);
        func_0x00010c0e00e0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c138260();
        _objc_release(uVar7);
      }
    }
    _objc_release(puVar5);
    _objc_release(puVar2);
  }
  lVar3 = param_1 + 0x68;
  _objc_loadWeakRetained();
  lVar9 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x000107ab89c0();
  _objc_release(lVar9);
  _objc_release(lVar3);
  if ((int)lVar10 == 0) goto LAB_107ab1f44;
  puVar2 = PTR_PTR_1126c9310;
  func_0x00010c2805a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c9310;
  func_0x00010bf631e0(PTR_PTR_1126c9310);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c0e00e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR_PTR_1126c9460;
  func_0x00010c269c80(PTR_PTR_1126c9460);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar4);
  if ((int)uVar8 == 0) {
    puVar4 = PTR_PTR_1126c9460;
    func_0x00010c0f2620(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar4);
    if ((int)uVar8 != 0) goto LAB_107ab1f28;
    puVar4 = PTR_PTR_1126c9460;
    func_0x00010c269c60(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar8 == 0) {
      puVar6 = PTR_PTR_1126c9460;
      func_0x00010c0f25e0(PTR_PTR_1126c9460);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_3;
      func_0x00010c0720c0();
      _objc_release(puVar6);
      _objc_release(puVar4);
      if ((int)uVar8 != 0) goto LAB_107ab1fe4;
    }
    else {
      _objc_release(puVar4);
LAB_107ab1fe4:
      func_0x00010c138260(uVar7);
    }
  }
  else {
LAB_107ab1f28:
    func_0x00010bf7fae0(uVar7);
  }
  _objc_release(uVar7);
  _objc_release(puVar5);
  _objc_release(puVar2);
LAB_107ab1f44:
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ab1ff0; end: 107ab2037; -[SCDiscoverPublisherOperaDataSource _loadSubtitlesOnDemand] */

long FUN_107ab1ff0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf1f440();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 107ab2038; end: 107ab2133; -[SCDiscoverPublisherOperaDataSource _handleSubtitleStateUpdateIfNecessary:dSnapID:storyPlayableId:subtitleAsset:] */

void FUN_107ab2038(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_5;
  func_0x00010c08fa60();
  if ((param_6 != 0) && (lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c0e00e0(uVar2,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010bf125a0();
    if ((int)uVar3 != 0) {
      uVar3 = param_3;
      func_0x00010bf926c0(param_3);
      uVar4 = param_3;
      func_0x00010bef0a00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28a920(uVar2,param_2,param_4,uVar3,uVar4,param_6);
      _objc_release(uVar4);
    }
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ab2134; end: 107ab2203; -[SCDiscoverPublisherOperaDataSource _updateViewLocationIfNeeded:withPage:] */

void FUN_107ab2134(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  if (param_3 != -1) {
    if (param_3 == *(long *)(param_1 + 0x88)) {
      lVar1 = param_1 + 0x38;
      _objc_loadWeakRetained();
      lVar2 = lVar1;
      func_0x00010c29d360();
      _objc_release(lVar1);
      if (param_3 == lVar2) goto LAB_107ab21ec;
    }
    *(long *)(param_1 + 0x88) = param_3;
    lVar1 = param_1;
    func_0x00010be84760(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      lVar2 = *(long *)(param_1 + 0x70);
      func_0x00010c0e00e0(lVar2,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 != 0) {
        func_0x00010c28bee0();
        _objc_release(lVar2);
      }
    }
    _objc_release(lVar1);
  }
LAB_107ab21ec:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107ab2204; end: 107ab230f; -[SCDiscoverPublisherOperaDataSource pageDataForDataModel:completion:] */

void FUN_107ab2204(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126c9870;
  _objc_opt_class(PTR_PTR_1126c9870);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c08fa60();
  _objc_release(uVar3);
  if (uVar4 != 0) {
    uVar3 = uVar1;
    func_0x00010c25a760();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf51e00();
    _objc_release(uVar3);
    uVar3 = uVar4;
    func_0x00010c08fa60();
    if (uVar3 != 0) {
      func_0x00010bebc240(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f0e80();
      _objc_release(param_1);
    }
    _objc_release(uVar4);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ab2310; end: 107ab2317; -[SCDiscoverPublisherOperaDataSource needToPrepareMediaBeforeDisplay] */

undefined8 FUN_107ab2310(void)

{
  return 1;
}



/* Entry: 107ab2318; end: 107ab23f7; -[SCDiscoverPublisherOperaDataSource prepareMediaForItem:startWaitingForDownloadCallback:completion:] */

void FUN_107ab2318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfce400(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bebc240(param_1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c109b20();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107ab23f8; end: 107ab24a3; -[SCDiscoverPublisherOperaDataSource removeMediaForItem:] */

void FUN_107ab23f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf51e00();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    func_0x00010bebc240(param_1,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d120();
    _objc_release(param_1);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ab24a4; end: 107ab2783; -[SCDiscoverPublisherOperaDataSource extraPropertiesForDataModel:item:baseOperaPage:completion:] */

void FUN_107ab24a4(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
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
  uVar3 = uVar1;
  func_0x00010bef60a0();
  if (uVar3 == 0) {
    uVar3 = uVar1;
    func_0x00010c25a760(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf51e00();
    _objc_release(uVar3);
    lVar5 = param_1;
    func_0x00010bebc240();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      (**(code **)(param_6 + 0x10))(param_6,0,0);
    }
    else {
      puStack_a0 = &uStack_a8;
      uStack_a8 = 0;
      uStack_98 = 0x3032000000;
      pcStack_90 = FUN_107ab2784;
      uStack_88 = 0x107ab2794;
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      puStack_d0 = &uStack_d8;
      uStack_d8 = 0;
      uStack_c8 = 0x3032000000;
      pcStack_c0 = FUN_107ab2784;
      uStack_b8 = 0x107ab2794;
      uStack_b0 = 0;
      puStack_80 = puVar2;
      func_0x00010bdf0d00();
      _objc_retainAutoreleasedReturnValue();
      if (param_1 != 0) {
        func_0x00010c1d0640(puStack_a0[5]);
      }
      func_0x00010bf9ea80(lVar5);
      uVar6 = puStack_a0[5];
      func_0x00010bf51e00(uVar6);
      uVar7 = puStack_d0[5];
      func_0x00010bf51e00(uVar7);
      (**(code **)(param_6 + 0x10))(param_6,uVar6,uVar7);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(param_1);
      __Block_object_dispose(&uStack_d8,8);
      _objc_release(uStack_b0);
      __Block_object_dispose(&uStack_a8,8);
      _objc_release(puStack_80);
    }
    _objc_release(lVar5);
    _objc_release(uVar4);
  }
  else {
    (**(code **)(param_6 + 0x10))(param_6,0,0);
  }
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107ab2784; end: 107ab279b;  */

void FUN_107ab2784(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107ab279c; end: 107ab280b;  */

void FUN_107ab279c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 107ab280c; end: 107ab28e3; -[SCDiscoverPublisherOperaDataSource _getDiscoverFeedStoryForPlaylistItem:] */

void FUN_107ab280c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  uVar2 = param_3;
  func_0x00010bfce400(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = lVar1;
  func_0x00010bf63e80(lVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
  func_0x000107d005a8(lVar3);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c25bac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 107ab28e4; end: 107ab2b83; -[SCDiscoverPublisherOperaDataSource _createOperaItemAttributionInfoForPlaylistItem:] */

void FUN_107ab28e4(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010be1ea40(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    puVar8 = (undefined *)0x0;
    goto LAB_107ab2b48;
  }
  lVar3 = lVar2;
  func_0x00010c25a160();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c084ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = lVar2;
  func_0x00010c080120();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if ((int)lVar3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
  if (lVar4 == 0) {
    _objc_retain(ppuVar1);
    ppuVar5 = ppuVar1;
  }
  else {
    ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110db9f38);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
  }
  lVar3 = lVar2;
  func_0x00010c25a160();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c241660();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  if (lVar7 == 0) {
    lVar7 = param_3;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 != 0) goto LAB_107ab2a44;
    puVar8 = (undefined *)0x0;
  }
  else {
LAB_107ab2a44:
    func_0x00010bdf7dc0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c23ffa0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (lVar4 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar9 = PTR_PTR_1126bc860;
      func_0x00010bf160c0(PTR_PTR_1126bc860,param_2,lVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar8 = PTR_PTR_1126b2dc0;
    _objc_alloc(PTR_PTR_1126b2dc0);
    lVar3 = lVar2;
    func_0x00010c25a160(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c084c40();
    func_0x00010bb14c74();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01ff20(puVar8,param_2,lVar7,lVar6,ppuVar5,puVar9);
    _objc_release(lVar6);
    _objc_release(lVar3);
    _objc_release(puVar9);
    _objc_release(lVar4);
    _objc_release(param_1);
    _objc_release(lVar7);
  }
  _objc_release(ppuVar1);
  _objc_release(ppuVar5);
LAB_107ab2b48:
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 107ab2b84; end: 107ab2b8b; -[SCDiscoverPublisherOperaDataSource prefetchRequestFromPlaylistItem:prefetchSignals:importance:] */

undefined8 FUN_107ab2b84(void)

{
  return 0;
}



/* Entry: 107ab2b8c; end: 107ab2bf3; -[SCDiscoverPublisherOperaDataSource startPrefetchForPlaylistItem:completion:] */

void FUN_107ab2b8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x88);
  func_0x0001084837a4();
  if (iVar1 != 0) {
    _objc_loadWeakRetained(param_1 + 0x58);
    _objc_release();
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 107ab2bf4; end: 107ab2d4f; -[SCDiscoverPublisherOperaDataSource generateSnapDocPrefetchRequestsForGroup:startPosition:prefetchSignalsList:importanceList:maxNumberOfItems:completion:completionQueue:] */

void FUN_107ab2bf4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebc240(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_107ab2d50;
    puStack_60 = &UNK_110849530;
    _objc_retain(param_8);
    uStack_58 = param_8;
    func_0x00010c0f7fc0(param_9,param_2,&puStack_78);
    _objc_release(param_9);
    param_9 = uStack_58;
  }
  else {
    func_0x00010bfc01a0(param_1,param_2,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  _objc_release(param_9);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 107ab2d50; end: 107ab2d6b;  */

void FUN_107ab2d50(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107ab2d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,PTR____NSArray0__struct_11034ab48);
    return;
  }
  return;
}



/* Entry: 107ab2d6c; end: 107ab2e0f; -[SCDiscoverPublisherOperaDataSource _dataModelFor:] */

void FUN_107ab2d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfce400(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bebc240(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf63e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ab2e10; end: 107ab2e9f; -[SCDiscoverPublisherOperaDataSource _cancelQueuedRequestForItem:] */

void FUN_107ab2e10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfce400(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bebc240(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2ec40();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107ab2ea0; end: 107ab2ea7; -[SCDiscoverPublisherOperaDataSource eventAnnouncing] */

undefined8 FUN_107ab2ea0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 107ab2ea8; end: 107ab2f63; -[SCDiscoverPublisherOperaDataSource .cxx_destruct] */

void FUN_107ab2ea8(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_destroyWeak(param_1 + 0x68);
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



/* Entry: 107ab2f64; end: 107ab2f6f; +[SCSingleDiscoverPublisherOperaDataSource announcerIdentifier] */

undefined ** FUN_107ab2f64(void)

{
  return &PTR____CFConstantStringClassReference_110eac1f8;
}



/* Entry: 107ab2f70; end: 107ab3217; -[SCSingleDiscoverPublisherOperaDataSource initWithStoryPlayableDataModel:playlistItemController:snapDocConfigurer:discoverFeedDataFetcher:discoverFeedEventsController:pagePropertiesManager:cachedViewStateProvider:readReceiptCoordinator:viewLocation:creatorSettingsFetcher:circumstanceEngine:] */

undefined8 *
FUN_107ab2f70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
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
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126f9a80;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = puVar1[0xc];
    puVar1[0xc] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0xd];
    puVar1[0xd] = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_3);
    uVar4 = puVar1[0x14];
    puVar1[0x14] = param_3;
    _objc_release(uVar4);
    _objc_storeWeak(puVar1 + 1,param_4);
    _objc_storeWeak(puVar1 + 3,param_6);
    _objc_storeWeak(puVar1 + 9,param_7);
    _objc_storeWeak(puVar1 + 2,param_5);
    _objc_storeWeak(puVar1 + 6,param_9);
    _objc_storeWeak(puVar1 + 8,param_8);
    _objc_storeWeak(puVar1 + 7,param_10);
    puVar1[0xe] = param_11;
    _objc_storeWeak(puVar1 + 10,param_12);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = puVar1[0xf];
    puVar1[0xf] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = puVar1[0x10];
    puVar1[0x10] = puVar2;
    _objc_release(uVar4);
    _objc_storeWeak(puVar1 + 0xb,param_13);
    puVar3 = puVar1 + 8;
    _objc_loadWeakRetained(puVar3);
    func_0x00010c28bee0();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar4 = puVar1[0x13];
    puVar1[0x13] = puVar2;
    _objc_release(uVar4);
    *(undefined1 *)(puVar1 + 0x12) = 0;
    puVar3 = puVar1;
    func_0x00010bde49a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0x11];
    puVar1[0x11] = puVar3;
    _objc_release(uVar4);
  }
  _objc_release(param_13);
  _objc_release(param_12);
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



/* Entry: 107ab3218; end: 107ab324f; -[SCSingleDiscoverPublisherOperaDataSource updateViewLocation:] */

void FUN_107ab3218(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x70) = param_3;
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010c28bee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ab3250; end: 107ab342f; -[SCSingleDiscoverPublisherOperaDataSource updateSubtitleAssetWithDSnapID:enabled:languageId:subtitleAsset:] */

void FUN_107ab3250(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_107ab3430;
  uStack_70 = 0x107ab3440;
  _objc_retain(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  lStack_68 = param_1;
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c240380();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c23ffa0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  FUN_107b8dc40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010bf447c0(lVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(lStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 107ab3430; end: 107ab345b;  */

void FUN_107ab3430(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107ab345c; end: 107ab34fb; -[SCSingleDiscoverPublisherOperaDataSource _updateAssetKeyForDSnapIDIfNecessary:assetKey:] */

void FUN_107ab345c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 0x78);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((uVar2 & 1) == 0) {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x78),param_2,param_4,param_3);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c101400();
    _objc_release(param_1);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ab34fc; end: 107ab35cb; -[SCSingleDiscoverPublisherOperaDataSource disableAutoProgressingForIdentifier:isNext:isCurrent:] */

void FUN_107ab34fc(long param_1,undefined8 param_2,long param_3,int param_4,int param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    *(undefined1 *)(param_1 + 0x90) = 1;
    puVar1 = PTR_PTR_1126d63c0;
    _objc_alloc();
    func_0x00010c00f820(0);
    uVar3 = *(undefined8 *)(param_1 + 0x88);
    *(undefined **)(param_1 + 0x88) = puVar1;
    _objc_release(uVar3);
    if (param_5 == 0) {
      lVar2 = param_1;
      if (param_4 == 0) {
        func_0x00010be7fb80(param_1,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010be63c40();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      lVar2 = *(long *)(param_1 + 0x60);
      func_0x00010c0e00e0(lVar2,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010be5d840(param_1,param_2,lVar2);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ab35cc; end: 107ab3623; -[SCSingleDiscoverPublisherOperaDataSource _markSnapWithDisabledAutoProgression:] */

void FUN_107ab35cc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    _objc_retain(param_3);
    func_0x00010befa120(uVar1,param_2,param_3);
    func_0x00010bedd6c0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 107ab3624; end: 107ab376b; -[SCSingleDiscoverPublisherOperaDataSource resetAutoProgression] */

void FUN_107ab3624(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
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
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1;
  func_0x00010bde49a0(param_1,param_2,uVar3,lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  *(long *)(param_1 + 0x88) = lVar2;
  _objc_release(uVar3);
  _objc_release(lVar1);
  *(undefined1 *)(param_1 + 0x90) = 0;
  lVar2 = *(long *)(param_1 + 0x98);
  func_0x00010bf51e00();
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  _objc_retain();
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar1 != 0) {
    lVar4 = *plStack_100;
    do {
      lVar5 = 0;
      do {
        if (*plStack_100 != lVar4) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010bedd6c0(param_1,param_2,*(undefined8 *)(lStack_108 + lVar5 * 8));
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar2);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_alloc(PTR_PTR_1126d63c0);
  func_0x00010c00f820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ab376c; end: 107ab3797; -[SCSingleDiscoverPublisherOperaDataSource _configurationWithViewLocation:circumstanceEngine:] */

void FUN_107ab376c(void)

{
  _objc_alloc(PTR_PTR_1126d63c0);
  func_0x00010c00f820(0x40400000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ab3798; end: 107ab390b; -[SCSingleDiscoverPublisherOperaDataSource _nextStorySnapAfterStorySnapIdentifier:] */

void FUN_107ab3798(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c101420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfecde0();
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf529e0();
  _objc_release(uVar3);
  _objc_release(uVar1);
  if (uVar4 + 1 < uVar5) {
    uVar1 = uVar2;
    func_0x00010bfce400(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar1);
    func_0x00010bf63e00(param_1,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
  }
  else {
    param_1 = 0;
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107ab390c; end: 107ab3a37; -[SCSingleDiscoverPublisherOperaDataSource _prevStorySnapBeforeStorySnapIdentifier:] */

void FUN_107ab390c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c101420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfecde0();
  _objc_release(lVar3);
  _objc_release(lVar1);
  if (lVar4 < 1) {
    param_1 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x00010bfce400(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar1);
    func_0x00010bf63e00(param_1,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107ab3a38; end: 107ab3aaf; -[SCSingleDiscoverPublisherOperaDataSource _updatePlaylistItemWithStorySnap:] */

void FUN_107ab3a38(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_3;
    func_0x00010bfe5ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c101400(param_1,param_2,lVar1);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107ab3ab0; end: 107ab42bb; -[SCSingleDiscoverPublisherOperaDataSource resolvePlaylistItemGroupWithMutator:] */

void FUN_107ab3ab0(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined *puVar24;
  undefined *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined1 auStack_1f0 [8];
  undefined1 auStack_1e8 [8];
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  ulong uStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined **ppuStack_180;
  undefined *puStack_178;
  ulong uStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  long lStack_158;
  uint uStack_14c;
  undefined *puStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar22 = *(undefined8 *)(param_1 + 0xa0);
  puVar2 = param_1 + 0x18;
  _objc_loadWeakRetained(puVar2);
  puVar3 = param_1 + 0x30;
  _objc_loadWeakRetained(puVar3);
  puVar4 = puVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = param_1 + 0x50;
  _objc_loadWeakRetained(puVar24);
  puVar5 = puVar24;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  FUN_107ab7d48(uVar22,puVar2,puVar4,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar24);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(param_1 + 0xa0);
  func_0x00010c242500();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar6;
  func_0x00010bf529e0();
  _objc_release(lVar6);
  if (lVar10 != 0) {
    uVar23 = 0;
    do {
      uVar7 = *(ulong *)(param_1 + 0xa0);
      func_0x00010c242500();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar7;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar14;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar9;
      func_0x00010c0720c0();
      _objc_release(uVar9);
      _objc_release(uVar14);
      _objc_release(uVar7);
      uStack_170 = uVar23;
      if ((uVar8 & 1) != 0) goto LAB_107ab3c64;
      uVar23 = uVar23 + 1;
      uVar9 = *(ulong *)(param_1 + 0xa0);
      func_0x00010c242500();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar9;
      func_0x00010bf529e0();
      _objc_release(uVar9);
    } while (uVar23 < uVar14);
  }
  uStack_170 = 0;
LAB_107ab3c64:
  uVar23 = *(ulong *)(param_1 + 0xa0);
  puVar3 = param_1 + 0x18;
  _objc_loadWeakRetained(puVar3);
  puVar24 = param_1 + 0x50;
  _objc_loadWeakRetained(puVar24);
  puVar4 = puVar24;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  FUN_107ab813c(uVar23,puVar3,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar24);
  _objc_release(puVar3);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar10 = *(long *)(param_1 + 0xa0);
  func_0x00010c242500();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar10;
  func_0x00010bf52a60();
  lStack_138 = lVar6;
  if (lVar6 == 0) {
    _objc_release(lVar10);
  }
  else {
    puStack_160 = (undefined *)0x0;
    lStack_140 = *plStack_120;
    ppuStack_180 = &PTR____CFConstantStringClassReference_110f41598;
    uStack_14c = (uint)uVar23;
    puStack_188 = param_3;
    puStack_178 = puVar2;
    lStack_158 = lVar10;
    puStack_148 = param_1;
    do {
      lVar6 = 0;
      do {
        if (*plStack_120 != lStack_140) {
          _objc_enumerationMutation(lVar10);
        }
        puVar24 = *(undefined **)(lStack_128 + lVar6 * 8);
        puVar3 = puVar24;
        func_0x00010bef60a0();
        if (puVar3 == (undefined *)0x0) {
LAB_107ab3df0:
          puVar3 = param_1 + 0x58;
          _objc_loadWeakRetained();
          puVar4 = puVar3;
          func_0x000108f484fc();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          uVar15 = *(undefined8 *)(param_1 + 0xa0);
          func_0x00010c11b1e0();
          uStack_190 = uVar15;
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(puVar4);
          _objc_retain(puVar3);
          puVar5 = puVar4;
          func_0x00010c08fa60();
          if (puVar5 != (undefined *)0x0) {
            puVar5 = puVar4;
            func_0x00010bf44740();
            _objc_retainAutoreleasedReturnValue();
            puVar16 = puVar5;
            func_0x00010bf4b900();
            _objc_release(puVar5);
            uVar23 = (ulong)(((uint)puVar16 ^ 1) & (uint)uVar23);
          }
          _objc_release(puVar3);
          _objc_release(puVar4);
          iVar1 = (int)*(undefined8 *)(param_1 + 0x70);
          func_0x0001084837a4();
          if (iVar1 != 0) {
            _objc_loadWeakRetained(param_1 + 0x58);
            _objc_release();
          }
          if ((int)uVar23 == 0) {
LAB_107ab4058:
            puVar5 = puVar24;
            func_0x000107ab7c64();
            _objc_retainAutoreleasedReturnValue();
            puVar16 = puVar24;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            puVar20 = puVar16;
            func_0x00010c0720c0();
            _objc_release(puVar16);
            if ((int)puVar20 != 0) {
              _objc_retain(puVar5);
              _objc_release(puStack_160);
              puStack_160 = puVar5;
            }
            param_1 = puStack_148;
            if (puVar5 != (undefined *)0x0) {
              func_0x00010befa120(puVar2);
            }
            puVar16 = puVar24;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            puVar20 = puVar16;
            func_0x00010c08fa60();
            _objc_release(puVar16);
            if (puVar20 != (undefined *)0x0) {
              uVar15 = *(undefined8 *)(param_1 + 0x60);
              func_0x00010bfe5ec0(puVar24);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(uVar15);
              goto LAB_107ab4110;
            }
          }
          else {
            puVar5 = puVar24;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            puVar16 = puVar5;
            func_0x00010c08fa60();
            if (puVar16 == (undefined *)0x0) {
LAB_107ab4050:
              _objc_release(puVar5);
              goto LAB_107ab4058;
            }
            uVar17 = *(undefined8 *)(puStack_148 + 0xa0);
            func_0x00010c242500();
            _objc_retainAutoreleasedReturnValue();
            uVar15 = uVar17;
            func_0x00010c089820();
            _objc_retainAutoreleasedReturnValue();
            uVar18 = uVar15;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            puVar16 = puVar24;
            puStack_168 = puVar3;
            func_0x00010bfe5ec0(puVar24);
            _objc_retainAutoreleasedReturnValue();
            uVar19 = uVar18;
            func_0x00010c0720c0();
            puVar2 = puStack_178;
            _objc_release(puVar16);
            puVar3 = puStack_168;
            _objc_release(uVar18);
            _objc_release(uVar15);
            _objc_release(uVar17);
            _objc_release(puVar5);
            if ((int)uVar19 == 0) goto LAB_107ab4058;
            puVar5 = puVar24;
            func_0x00010c23ffa0();
            _objc_retainAutoreleasedReturnValue();
            puVar20 = puVar5;
            func_0x00010c23fe00();
            _objc_retainAutoreleasedReturnValue();
            puVar21 = puVar20;
            func_0x000108f56d38();
            puVar16 = puStack_148;
            if ((int)puVar21 == 0) {
              lVar10 = *(long *)(puStack_148 + 0xa0);
              func_0x00010c259740();
              if (lVar10 != 0) {
                _objc_release(puVar20);
                puVar3 = puStack_168;
                goto LAB_107ab4050;
              }
              uVar14 = *(ulong *)(puVar16 + 0xa0);
              func_0x00010c242500();
              _objc_retainAutoreleasedReturnValue();
              uVar23 = uVar14;
              func_0x00010bf529e0();
              _objc_release(uVar14);
              _objc_release(puVar20);
              _objc_release(puVar5);
              puVar3 = puStack_168;
              puVar2 = puStack_178;
              if (uVar23 < 2) goto LAB_107ab4058;
            }
            else {
              _objc_release(puVar20);
              _objc_release(puVar5);
            }
            param_1 = puStack_148;
            puVar5 = puStack_148 + 0x48;
            _objc_loadWeakRetained(puVar5);
            puVar16 = param_1;
            _objc_opt_class(param_1);
            func_0x00010bf04780();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfe5ec0(puVar24);
            _objc_retainAutoreleasedReturnValue();
            puVar20 = puVar24;
            FUN_107cb5994();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf7dbc0(puVar5);
            puVar2 = puStack_178;
            _objc_release(puVar20);
            _objc_release(puVar24);
            puVar24 = puVar16;
LAB_107ab4110:
            _objc_release(puVar24);
          }
          lVar10 = lStack_158;
          _objc_release(puVar5);
          _objc_release(puVar3);
          _objc_release(puVar4);
          uVar23 = (ulong)uStack_14c;
        }
        else {
          lVar11 = *(long *)(param_1 + 0xa0);
          func_0x00010bef3720();
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar11;
          func_0x00010c0ec640();
          _objc_retainAutoreleasedReturnValue();
          lVar13 = lVar12;
          func_0x00010bf529e0();
          _objc_release(lVar12);
          _objc_release(lVar11);
          func_0x00010c11b1e0(*(undefined8 *)(param_1 + 0xa0));
          uVar14 = *(ulong *)(param_1 + 0xa0);
          func_0x00010c07dec0();
          iVar1 = (int)*(undefined8 *)(param_1 + 0xa0);
          func_0x00010bfd5020();
          if (((lVar13 == 0) || ((uVar14 & 1) != 0)) || (iVar1 != 0)) {
            uVar9 = *(ulong *)(param_1 + 0xa0);
            func_0x00010c242500();
            _objc_retainAutoreleasedReturnValue();
            uVar14 = uVar9;
            func_0x00010bfecde0();
            _objc_release(uVar9);
            if (uStack_170 <= uVar14) goto LAB_107ab3df0;
          }
        }
        lVar6 = lVar6 + 1;
      } while (lStack_138 != lVar6);
      lVar6 = lVar10;
      func_0x00010bf52a60();
      lStack_138 = lVar6;
    } while (lVar6 != 0);
    _objc_release(lVar10);
    param_3 = puStack_188;
    puVar3 = puStack_160;
    if (puStack_160 != (undefined *)0x0) goto LAB_107ab41e4;
  }
  puVar3 = puVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
LAB_107ab41e4:
  puVar24 = param_3;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar24;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf529e0();
  _objc_release(puVar4);
  _objc_release(puVar24);
  puVar16 = puVar2;
  if (puVar5 == (undefined *)0x0) {
    puVar24 = puVar3;
    func_0x00010bdc1720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13a9e0(param_3);
    _objc_release(puVar24);
  }
  else {
    func_0x00010c13a9c0(param_3);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar22);
  puVar20 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_198 = FUN_107ab42bc;
    uStack_1e0 = uVar22;
    puStack_1d8 = puVar2;
    uStack_1d0 = uVar23;
    puStack_1c8 = puVar3;
    puStack_1c0 = param_3;
    puStack_1b8 = puVar5;
    puStack_1b0 = puVar4;
    puStack_1a8 = puVar24;
    puStack_1a0 = &stack0xfffffffffffffff0;
    _objc_retain(puVar16);
    puVar2 = puVar16;
    func_0x00010be36bc0(puVar16);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf51e00();
    _objc_release(puVar2);
    puVar2 = puVar20 + 8;
    _objc_loadWeakRetained(puVar2);
    uVar22 = *(undefined8 *)(puVar20 + 0xa0);
    func_0x00010c280580(uVar22);
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar2;
    func_0x00010c1014c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar24;
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar24);
    _objc_release(uVar22);
    _objc_release(puVar2);
    puVar24 = puVar20;
    func_0x00010bf63e00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c9870;
    _objc_opt_class(PTR_PTR_1126c9870);
    puVar5 = puVar24;
    _objc_opt_isKindOfClass(puVar24,puVar2);
    puVar2 = puVar24;
    if (((ulong)puVar5 & 1) == 0) {
      puVar2 = (undefined *)0x0;
    }
    _objc_retain(puVar2);
    _objc_release(puVar24);
    _objc_initWeak(auStack_1e8,puVar20);
    uVar22 = 0x19;
    func_0x0001000819a8(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_218 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_210 = 0xc2000000;
    pcStack_208 = FUN_107ab449c;
    puStack_200 = &UNK_110841fb0;
    _objc_copyWeak(auStack_1f0,auStack_1e8);
    puStack_1f8 = puVar2;
    _objc_retain(puVar2);
    func_0x00010007380c(uVar22,&puStack_218);
    _objc_release(uVar22);
    _objc_release(puStack_1f8);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_1f0);
    _objc_destroyWeak(auStack_1e8);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar16);
    return;
  }
  return;
}



/* Entry: 107ab42bc; end: 107ab449b; -[SCSingleDiscoverPublisherOperaDataSource loadMediaForPlaylistItemGroup:] */

void FUN_107ab42bc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  ulong uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf51e00();
  _objc_release(uVar4);
  lVar3 = param_1 + 8;
  _objc_loadWeakRetained(lVar3);
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c280580(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c1014c0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  uVar7 = param_1;
  func_0x00010bf63e00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c9870;
  _objc_opt_class(PTR_PTR_1126c9870);
  uVar9 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar8);
  uVar1 = uVar7;
  if ((uVar9 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar7);
  _objc_initWeak(auStack_58,param_1);
  uVar4 = 0x19;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107ab449c;
  puStack_70 = &UNK_110841fb0;
  _objc_copyWeak(auStack_60,auStack_58);
  uStack_68 = uVar1;
  _objc_retain(uVar1);
  func_0x00010007380c(uVar4,&puStack_88);
  _objc_release(uVar4);
  _objc_release(uStack_68);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar6);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 107ab449c; end: 107ab44cf;  */

void FUN_107ab449c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be12760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ab44d0; end: 107ab4523; -[SCSingleDiscoverPublisherOperaDataSource dataModelFor:] */

void FUN_107ab44d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ab4524; end: 107ab46b7; -[SCSingleDiscoverPublisherOperaDataSource prepareMediaForItem:startWaitingForDownloadCallback:completion:] */

void FUN_107ab4524(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010bf63e00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    (**(code **)(param_5 + 0x10))(param_5,0,0,0);
  }
  else {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
    _objc_initWeak(auStack_48,param_1);
    uVar3 = 0x19;
    func_0x0001000819a8(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_107ab46b8;
    puStack_68 = &UNK_110848378;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(lVar1);
    lStack_60 = lVar1;
    _objc_retain(param_5);
    lStack_58 = param_5;
    func_0x00010007380c(uVar3,&puStack_80);
    _objc_release(uVar3);
    _objc_release(lStack_58);
    _objc_release(lStack_60);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107ab46b8; end: 107ab46eb;  */

void FUN_107ab46b8(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be77200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ab46ec; end: 107ab481b; -[SCSingleDiscoverPublisherOperaDataSource removeMediaForItem:] */

void FUN_107ab46ec(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = param_1;
  func_0x00010bf63e00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      param_1 = param_1 + 0x40;
      _objc_loadWeakRetained(param_1);
      lVar2 = param_1;
      func_0x00010c240380();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c23ffa0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c23fe00();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      FUN_107b8dc40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar1;
      func_0x00010c23ffa0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c23fe00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12dc80(lVar2,param_2,lVar5,lVar7);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107ab481c; end: 107ab4963; -[SCSingleDiscoverPublisherOperaDataSource pageDataForDataModel:completion:] */

void FUN_107ab481c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c283960();
  _objc_release(lVar1);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bfc87c0(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107ab4964; end: 107ab49f7;  */

void FUN_107ab4964(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde2f00();
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ab49f8; end: 107ab4ce7; -[SCSingleDiscoverPublisherOperaDataSource _completeOnMainThreadForSnapPlayableDataModel:pageProperties:attachmentPageProperties:mediaIsLoaded:error:completion:] */

void FUN_107ab49f8(long param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined8 param_5,int param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_8 == 0) goto LAB_107ab4c68;
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  puVar3 = param_4;
  if (lVar2 == 0) {
LAB_107ab4bf0:
    _objc_release(lVar1);
  }
  else {
    lVar8 = *(long *)(param_1 + 0x80);
    lVar2 = param_3;
    func_0x00010bfe5ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar8 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640();
      func_0x00010c1d0640(puVar3);
      ppuVar4 = &PTR____CFConstantStringClassReference_110e49a78;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e49a78,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3);
      _objc_release(ppuVar4);
      ppuVar4 = &PTR____CFConstantStringClassReference_110e49a98;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e49a98,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3);
      _objc_release(ppuVar4);
      ppuVar4 = &PTR____CFConstantStringClassReference_110dad758;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3);
      _objc_release(ppuVar4);
      _objc_release(param_4);
      lVar1 = lVar8;
      goto LAB_107ab4bf0;
    }
  }
  puVar5 = PTR_PTR_1126b23e0;
  _objc_alloc(PTR_PTR_1126b23e0);
  puVar6 = puVar3;
  func_0x00010bf51e00(puVar3);
  uVar7 = param_5;
  func_0x00010bf51e00(param_5);
  func_0x00010c033240(puVar5);
  _objc_release(uVar7);
  _objc_release(puVar6);
  (**(code **)(param_8 + 0x10))(param_8,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar3);
LAB_107ab4c68:
  if ((param_6 != 0) && (puVar3 = param_4, FUN_107ab8864(), ((ulong)puVar3 & 1) == 0)) {
    func_0x00010be75320(param_1);
  }
  if (*(char *)(param_1 + 0x90) == '\x01') {
    func_0x00010befa120();
  }
  else {
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x98));
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ab4ce8; end: 107ab4ceb; -[SCSingleDiscoverPublisherOperaDataSource _editionChannelSubscribeStateDidChange] */

void FUN_107ab4ce8(void)

{
  return;
}



/* Entry: 107ab4cec; end: 107ab4d6f; -[SCSingleDiscoverPublisherOperaDataSource mediaLoadDidFailFor:error:] */

void FUN_107ab4cec(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if ((param_4 != 0) && (lVar1 != 0)) {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x80),param_2,param_4,param_3);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c101400();
    _objc_release(param_1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ab4d70; end: 107ab4e07; -[SCSingleDiscoverPublisherOperaDataSource _playlistItemDidUpdateForSnapPlayableDataModel:] */

void FUN_107ab4d70(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_3;
    func_0x00010bfe5ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c101400(param_1,param_2,lVar1);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ab4e08; end: 107ab4f27; -[SCSingleDiscoverPublisherOperaDataSource _fetchMediaIfNeeded:] */

void FUN_107ab4e08(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if ((lVar2 != 0) && (lVar1 = param_3, func_0x00010bef60a0(), lVar1 == 0)) {
    _objc_initWeak(auStack_38,param_1);
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_107ab4f28;
    puStack_50 = &UNK_1109f9300;
    _objc_retain(param_3);
    lStack_48 = param_3;
    _objc_copyWeak(auStack_40,auStack_38);
    FUN_107ab6994(param_3,param_1,&puStack_68);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_release(lStack_48);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107ab4f28; end: 107ab500f;  */

void FUN_107ab4f28(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  if (param_2 == 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be113a0();
    _objc_release(param_1);
  }
  else {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_107ab5010;
    puStack_48 = &UNK_110841fb0;
    _objc_copyWeak(auStack_38,param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar1);
    uStack_40 = uVar1;
    func_0x0001000d76cc("APPSTORE",&puStack_60);
    _objc_release(uStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 107ab5010; end: 107ab5043;  */

void FUN_107ab5010(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedd640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ab5044; end: 107ab5157; -[SCSingleDiscoverPublisherOperaDataSource _fetchForSnapPlayableDataModel:] */

void FUN_107ab5044(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107ab5158;
  puStack_60 = &UNK_1109f9330;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uStack_58 = param_3;
  FUN_107ab6f0c(param_3,uVar2,lVar1,param_1,&puStack_78);
  _objc_release(param_1);
  _objc_release(lVar1);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 107ab5158; end: 107ab523f;  */

void FUN_107ab5158(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107ab5240;
  puStack_50 = &UNK_110848218;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_48 = uVar1;
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107ab5240; end: 107ab5273;  */

void FUN_107ab5240(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be5e880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ab5274; end: 107ab5313; -[SCSingleDiscoverPublisherOperaDataSource _updatePlaylistIfMediaIsNotPrepared:] */

void FUN_107ab5274(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar3 = *(ulong *)(param_1 + 0x68);
    lVar1 = param_3;
    func_0x00010bfe5ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900(uVar3,param_2,lVar1);
    _objc_release(lVar1);
    if ((uVar3 & 1) == 0) {
      func_0x00010be5e880(param_1,param_2,param_3,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ab5314; end: 107ab5537; -[SCSingleDiscoverPublisherOperaDataSource _mediaIsLoadedForSnapPlayableDataModel:error:] */

void FUN_107ab5314(ulong param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained(lVar2);
    uVar3 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010c280580(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c1014c0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(uVar3);
    _objc_release(lVar2);
    uVar6 = param_1;
    func_0x00010bf63e00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126c9870;
    _objc_opt_class(PTR_PTR_1126c9870);
    uVar8 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar7);
    uVar1 = uVar6;
    if ((uVar8 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar6);
    uVar6 = uVar1;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bfe5ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010c0720c0();
    if ((int)uVar8 == 0) {
      _objc_release(lVar2);
      _objc_release(uVar6);
    }
    else {
      lVar4 = param_3;
      func_0x00010bef60a0();
      _objc_release(lVar2);
      _objc_release(uVar6);
      if (lVar4 == 0) {
        _objc_initWeak(auStack_58,param_1);
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0xc2000000;
        pcStack_78 = FUN_107ab5538;
        puStack_70 = &UNK_110841fb0;
        _objc_copyWeak(auStack_60,auStack_58);
        _objc_retain(param_3);
        lStack_68 = param_3;
        func_0x0001000d76cc("APPSTORE",&puStack_88);
        _objc_release(lStack_68);
        _objc_destroyWeak(auStack_60);
        _objc_destroyWeak(auStack_58);
      }
    }
    _objc_release(uVar1);
    _objc_release(lVar5);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107ab5538; end: 107ab556b;  */

void FUN_107ab5538(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be75320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ab556c; end: 107ab569f; -[SCSingleDiscoverPublisherOperaDataSource _prefetchForSnapPlayableDataModel:completion:] */

void FUN_107ab556c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bef60a0();
  if (lVar1 == 0) {
    _objc_initWeak(auStack_48,param_1);
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0xa0);
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained(param_1);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_107ab56a0;
    puStack_60 = &UNK_1109f9360;
    _objc_retain(param_4);
    uStack_58 = param_4;
    _objc_copyWeak(auStack_50,auStack_48);
    FUN_107ab72fc(param_3,lVar1,uVar2,param_1,&puStack_78);
    _objc_release(param_1);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_50);
    _objc_release(uStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107ab56a0; end: 107ab572f;  */

void FUN_107ab56a0(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if ((param_2 == 0) && (param_3 != 0)) {
      param_1 = param_1 + 0x28;
      _objc_loadWeakRetained(param_1);
      func_0x00010be79280();
      _objc_release(param_1);
    }
    else {
      (**(code **)(lVar1 + 0x10))(lVar1,1,param_2,0);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107ab5730; end: 107ab58a7; -[SCSingleDiscoverPublisherOperaDataSource prefetchItem:completion:] */

void FUN_107ab5730(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uVar3 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107ab58a8;
  puStack_70 = &UNK_1109f9360;
  _objc_retain(param_4);
  uStack_68 = param_4;
  _objc_copyWeak(auStack_60,auStack_58);
  FUN_107ab6f0c(uVar2,uVar3,lVar1,param_1,&puStack_88);
  _objc_release(param_1);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_60);
  _objc_release(uStack_68);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107ab58a8; end: 107ab5957;  */

void FUN_107ab58a8(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (param_2 == 0) {
      lVar1 = param_3;
      func_0x00010c23fe00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 != 0) {
        param_1 = param_1 + 0x28;
        _objc_loadWeakRetained(param_1);
        func_0x00010be79280();
        _objc_release(param_1);
        goto LAB_107ab5934;
      }
      lVar1 = *(long *)(param_1 + 0x20);
    }
    (**(code **)(lVar1 + 0x10))(lVar1,1,param_2,0);
  }
LAB_107ab5934:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107ab5958; end: 107ab5a0b; -[SCSingleDiscoverPublisherOperaDataSource cancelQueuedRequestForItem:] */

void FUN_107ab5958(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c23ffa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2ec60(lVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107ab5a0c; end: 107ab5b53; -[SCSingleDiscoverPublisherOperaDataSource _prepareSnapDocMediaAssetsForSnapDoc:completion:] */

void FUN_107ab5a0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c240380();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c23fe00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  FUN_107b8dc40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c23fe00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107ab5b54;
  puStack_70 = &UNK_110864758;
  lStack_68 = param_1;
  uStack_60 = param_3;
  uStack_58 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c1097e0(lVar2,param_2,uVar4,uVar5,&puStack_88);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(uStack_60);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 107ab5b54; end: 107ab5c1f;  */

void FUN_107ab5b54(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    if (param_2 == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
      func_0x00010c23fe00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfe5ea0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfe5ea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      func_0x00010befa120(uVar7);
      _objc_release(uVar4);
      _objc_release(uVar2);
      lVar1 = *(long *)(param_1 + 0x30);
      pcVar6 = *(code **)(lVar1 + 0x10);
      lVar5 = 0;
    }
    else {
      pcVar6 = *(code **)(lVar1 + 0x10);
      lVar5 = param_2;
    }
    (*pcVar6)(lVar1,param_2 != 0,lVar5,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107ab5c20; end: 107ab6073; -[SCSingleDiscoverPublisherOperaDataSource generateSnapDocPrefetchRequestsWithStartPosition:prefetchSignalsList:importanceList:maxNumberOfItems:completion:completionQueue:] */

void FUN_107ab5c20(long param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5,
                  long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_3 == 0) {
    uVar18 = 0;
  }
  else {
    uVar18 = param_3;
    func_0x00010c282760();
    uVar18 = uVar18 & 0xffffffff;
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar6 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010bf602c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar2);
  uVar4 = *(ulong *)(param_1 + 0xa0);
  func_0x00010c242500();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar4;
  func_0x00010bf529e0();
  _objc_release(uVar4);
  uVar4 = uVar18 + param_6;
  if (uVar4 <= uVar19) {
    uVar19 = uVar4;
  }
  if (uVar18 < uVar19) {
    uVar19 = 0;
    do {
      uVar5 = param_5;
      func_0x00010bf529e0();
      if ((uVar5 <= uVar19) || (uVar5 = param_4, func_0x00010bf529e0(), uVar5 <= uVar19)) break;
      lVar6 = *(long *)(param_1 + 0xa0);
      func_0x00010c242500();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar6;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      lVar6 = lVar2;
      func_0x00010bfe5ec0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar3;
      func_0x00010c0e00e0(lVar3,param_2,lVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      if (lVar7 == 0) {
        uVar17 = 1;
      }
      else {
        lVar6 = lVar7;
        func_0x00010c29ea60();
        uVar17 = (uint)lVar6 ^ 1;
      }
      lVar6 = lVar2;
      func_0x00010c23ffa0();
      _objc_retainAutoreleasedReturnValue();
      if ((uVar17 != 0) && (lVar6 != 0)) {
        lVar16 = lVar6;
        func_0x00010c23fe00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar16 != 0) {
          uVar5 = param_5;
          func_0x00010c0dfd40(param_5,param_2,uVar19);
          _objc_retainAutoreleasedReturnValue();
          if (uVar5 == 0) {
            lVar16 = 500;
          }
          else {
            uVar15 = param_5;
            func_0x00010c0dfd40(param_5,param_2,uVar19);
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar15;
            func_0x00010c067ec0();
            _objc_release(uVar15);
            lVar16 = (long)(int)uVar8;
          }
          _objc_release(uVar5);
          lVar9 = param_1 + 0x40;
          _objc_loadWeakRetained();
          lVar10 = lVar9;
          func_0x00010c240380();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar6;
          func_0x00010c23fe00();
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar11;
          FUN_107b8dc40();
          _objc_retainAutoreleasedReturnValue();
          lVar13 = lVar6;
          func_0x00010c23fe00(lVar6);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = param_4;
          func_0x00010c0dfd40(param_4,param_2,uVar19);
          _objc_retainAutoreleasedReturnValue();
          uVar15 = uVar5;
          func_0x00010bf438e0();
          lVar14 = lVar10;
          func_0x00010c0c5f80(lVar10,param_2,lVar12,lVar13,5,lVar16,uVar15);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          _objc_release(lVar13);
          _objc_release(lVar12);
          _objc_release(lVar11);
          _objc_release(lVar10);
          _objc_release(lVar9);
          func_0x00010befa120(puVar1,param_2,lVar14);
          _objc_release(lVar14);
        }
      }
      _objc_release(lVar6);
      _objc_release(lVar7);
      _objc_release(lVar2);
      uVar18 = uVar18 + 1;
      uVar19 = uVar19 + 1;
      uVar15 = *(ulong *)(param_1 + 0xa0);
      func_0x00010c242500();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar15;
      func_0x00010bf529e0();
      _objc_release(uVar15);
      if (uVar4 <= uVar5) {
        uVar5 = uVar4;
      }
    } while (uVar18 < uVar5);
  }
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_107ab6074;
  puStack_80 = &UNK_11084aaa8;
  puStack_78 = puVar1;
  uStack_70 = param_7;
  _objc_retain(puVar1);
  _objc_retain(param_7);
  func_0x00010c0f7fc0(param_8,param_2,&puStack_98);
  _objc_release(puStack_78);
  _objc_release(uStack_70);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(lVar3);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107ab6074; end: 107ab608f;  */

void FUN_107ab6074(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107ab6088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 107ab6090; end: 107ab6207; -[SCSingleDiscoverPublisherOperaDataSource extraPropertiesForDataModel:item:baseOperaPage:completion:] */

void FUN_107ab6090(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126c9870;
  _objc_opt_class(PTR_PTR_1126c9870);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (param_6 != 0) {
    uVar3 = uVar1;
    func_0x00010bef60a0();
    if (uVar3 == 0) {
      uVar3 = uVar1;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c08fa60();
      _objc_release(uVar3);
      if (uVar4 != 0) {
        lVar5 = param_1 + 0x10;
        _objc_loadWeakRetained(lVar5);
        uVar3 = uVar1;
        FUN_107ab7860(uVar1,lVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        uVar4 = uVar3;
        func_0x00010c0c5400();
        if ((int)uVar4 == 0) {
          (**(code **)(param_6 + 0x10))(param_6,0,0);
        }
        else {
          uVar4 = uVar3;
          func_0x00010bfbbc80(uVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar4;
          func_0x00010c23ffa0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be0d960(param_1);
          _objc_release(uVar6);
          _objc_release(uVar4);
        }
        _objc_release(uVar3);
        goto LAB_107ab61dc;
      }
    }
    (**(code **)(param_6 + 0x10))(param_6,0,0);
  }
LAB_107ab61dc:
  _objc_release(uVar1);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ab6208; end: 107ab63cb; -[SCSingleDiscoverPublisherOperaDataSource _extraPropertiesForSnapPlayableDataModel:fullSnapDocDataModel:completion:] */

void FUN_107ab6208(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_107ab3430;
  uStack_60 = 0x107ab3440;
  _objc_retain(param_1);
  lVar1 = param_1 + 0x40;
  lStack_58 = param_1;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c240380();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c23fe00(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  FUN_107b8dc40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010c23fe00(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010bfc87a0(lVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(lStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107ab63cc; end: 107ab643f;  */

void FUN_107ab63cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bfe5ec0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfe480(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107ab6440; end: 107ab655f; -[SCSingleDiscoverPublisherOperaDataSource _didGetPagePropertiesForPlayableDataModelIdentifier:pageProperties:completion:] */

void FUN_107ab6440(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_4);
  func_0x00010bf71e20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
  _objc_release(param_4);
  lVar2 = *(long *)(param_1 + 0x78);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c0e00e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(uVar4);
  }
  if (param_5 != 0) {
    puVar5 = puVar1;
    func_0x00010bf51e00(puVar1);
    (**(code **)(param_5 + 0x10))(param_5,puVar5,PTR____NSDictionary0__struct_11034ab58);
    _objc_release(puVar5);
  }
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ab6560; end: 107ab6567; -[SCSingleDiscoverPublisherOperaDataSource storyPlayableDataModel] */

undefined8 FUN_107ab6560(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 107ab6568; end: 107ab6597; -[SCSingleDiscoverPublisherOperaDataSource setStoryPlayableDataModel:] */

void FUN_107ab6568(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ab6598; end: 107ab665b; -[SCSingleDiscoverPublisherOperaDataSource .cxx_destruct] */

void FUN_107ab6598(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
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



/* Entry: 107ab665c; end: 107ab67bb;  */

void FUN_107ab665c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,int param_6,long param_7,long param_8)

{
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (((param_6 == 0) || (param_5 == 0)) || (param_7 != 0)) {
    if (param_8 != 0) {
      (**(code **)(param_8 + 0x10))(param_8,param_7,param_4);
    }
  }
  else {
    _objc_retain(param_8);
    _objc_retain(param_4);
    func_0x00010c109c80(param_5);
    _objc_release(param_4);
    _objc_release(0);
    _objc_release(param_8);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 107ab67bc; end: 107ab67d7;  */

void FUN_107ab67bc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107ab67d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))
              (lVar1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}



/* Entry: 107ab67d8; end: 107ab6993;  */

void FUN_107ab67d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  lVar1 = param_1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    _objc_release(lVar1);
LAB_107ab6918:
    if (param_7 == 0) goto LAB_107ab694c;
    lVar1 = param_1;
    func_0x00010c23ffa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_7 + 0x10))(param_7,0,lVar1);
  }
  else {
    lVar2 = param_1;
    func_0x00010bef60a0();
    _objc_release(lVar1);
    if (lVar2 != 0) goto LAB_107ab6918;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_107ab6ba8;
    puStack_a0 = &UNK_1109f9420;
    _objc_retain(param_1);
    lStack_98 = param_1;
    _objc_retain(param_2);
    uStack_90 = param_2;
    _objc_retain(param_3);
    uStack_88 = param_3;
    _objc_retain(param_4);
    uStack_80 = param_4;
    uStack_68 = param_5;
    _objc_retain(param_7);
    lStack_78 = param_7;
    uStack_70 = param_6;
    FUN_107ab6994(param_1,param_3,&puStack_b8);
    _objc_release(lStack_78);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    lVar1 = lStack_98;
  }
  _objc_release(lVar1);
LAB_107ab694c:
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 107ab6994; end: 107ab6ba7;  */

void FUN_107ab6994(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bef60a0();
  if (lVar1 == 0) {
    uVar3 = param_2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c23ffa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c074060();
    _objc_release(lVar1);
    _objc_release(uVar3);
    uVar3 = param_2;
    func_0x00010c269d40(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c23ffa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    if ((uVar4 & 1) == 0) {
      _objc_retain(param_3);
      _objc_retain(param_1);
      _objc_retain(param_2);
      func_0x00010bfbbcc0(uVar3);
      _objc_release(lVar1);
      _objc_release(uVar3);
      _objc_release(param_2);
      _objc_release(param_1);
    }
    else {
      _objc_retain(param_3);
      _objc_retain(param_1);
      func_0x00010c11d760(uVar3);
      _objc_release(lVar1);
      _objc_release(uVar3);
      _objc_release(param_1);
    }
  }
  else {
    if (param_3 == 0) goto LAB_107ab6b78;
    lVar2 = param_1;
    func_0x00010c23ffa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,1,0,lVar2);
  }
  _objc_release(lVar2);
LAB_107ab6b78:
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 107ab6ba8; end: 107ab6d93;  */

void FUN_107ab6ba8(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (param_2 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(param_4);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf8c980(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c11b1e0(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c0df7c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar8);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar6);
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar9);
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar10);
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar7);
    func_0x00010c107a40(uVar5);
    _objc_release(param_4);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar7);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar6);
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    uVar1 = *(undefined1 *)(param_1 + 0x50);
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(param_4);
    FUN_107ab665c(uVar8,uVar2,uVar5,param_4,uVar7,uVar1,0,uVar6);
    uVar8 = param_4;
  }
  _objc_release(uVar8);
  return;
}



/* Entry: 107ab6d94; end: 107ab6db3;  */

void FUN_107ab6d94(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  lVar4 = *(long *)(param_1 + 0x38);
  cVar5 = *(char *)(param_1 + 0x48);
  lVar6 = *(long *)(param_1 + 0x40);
  _objc_retain();
  _objc_retain(uVar3);
  _objc_retain(uVar2);
  _objc_retain(param_3);
  _objc_retain(lVar4);
  _objc_retain(param_2);
  _objc_retain(lVar6);
  if (((cVar5 == '\0') || (lVar4 == 0)) || (param_2 != 0)) {
    if (lVar6 != 0) {
      (**(code **)(lVar6 + 0x10))(lVar6,param_2,param_3);
    }
  }
  else {
    _objc_retain(lVar6);
    _objc_retain(param_3);
    func_0x00010c109c80(lVar4);
    _objc_release(param_3);
    _objc_release(0);
    _objc_release(lVar6);
  }
  _objc_release(lVar6);
  _objc_release(param_2);
  _objc_release(lVar4);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  return;
}



/* Entry: 107ab6db4; end: 107ab6eeb;  */

void FUN_107ab6db4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_9);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_1);
  uVar1 = param_1;
  FUN_107ab8260(param_1,param_2,param_5,param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_107ab6eec;
  puStack_78 = &UNK_1109f9450;
  uStack_68 = param_9;
  uStack_70 = uVar1;
  _objc_retain();
  _objc_retain(param_9);
  FUN_107ab67d8(uVar1,param_1,param_4,param_6,param_7,param_8,&puStack_90);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_1);
  _objc_release(uStack_70);
  _objc_release(uStack_68);
  _objc_release(uVar1);
  _objc_release(param_9);
  return;
}



/* Entry: 107ab6eec; end: 107ab6f0b;  */

void FUN_107ab6eec(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107ab6f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x20),param_2);
    return;
  }
  return;
}



/* Entry: 107ab6f0c; end: 107ab727b;  */

void FUN_107ab6f0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
LAB_107ab6f90:
    if (param_5 == 0) goto LAB_107ab7064;
    lVar1 = param_1;
    func_0x00010c23ffa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_5 + 0x10))(param_5,0,lVar1);
  }
  else {
    lVar2 = param_1;
    func_0x00010bef60a0();
    _objc_release(lVar1);
    if (lVar2 != 0) goto LAB_107ab6f90;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    uStack_88 = 0x107ab70a8;
    puStack_80 = &UNK_1109f94b0;
    _objc_retain(param_5);
    lStack_58 = param_5;
    _objc_retain(param_3);
    uStack_78 = param_3;
    _objc_retain(param_4);
    uStack_70 = param_4;
    _objc_retain(param_1);
    lStack_68 = param_1;
    _objc_retain(param_2);
    uStack_60 = param_2;
    FUN_107ab6994(param_1,param_3,&puStack_98);
    _objc_release(uStack_60);
    _objc_release(lStack_68);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    lVar1 = lStack_58;
  }
  _objc_release(lVar1);
LAB_107ab7064:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 107ab727c; end: 107ab72fb;  */

void FUN_107ab727c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c196f00(uVar1);
  FUN_107ab665c(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x38),param_3,*(undefined8 *)(param_1 + 0x20),1,param_2,
                *(undefined8 *)(param_1 + 0x40));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107ab72fc; end: 107ab75b3;  */

void FUN_107ab72fc(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c242500();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bfecde0();
  _objc_release(uVar1);
  if (uVar5 == 0x7fffffffffffffff) {
    uVar5 = param_3;
    func_0x00010c242500();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010bf529e0();
    _objc_release(uVar5);
    if (uVar1 != 0) {
      uVar5 = 0;
      do {
        uVar1 = param_3;
        func_0x00010c242500();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar1);
        uVar1 = uVar2;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_1;
        func_0x00010bfe5ec0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar1;
        func_0x00010c0720c0();
        _objc_release(uVar3);
        _objc_release(uVar1);
        _objc_release(uVar2);
        if ((int)uVar6 != 0) {
          if (uVar5 != 0x7fffffffffffffff) goto LAB_107ab7480;
          break;
        }
        uVar5 = uVar5 + 1;
        uVar1 = param_3;
        func_0x00010c242500();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf529e0();
        _objc_release(uVar1);
      } while (uVar5 < uVar2);
    }
    uVar5 = 0;
  }
LAB_107ab7480:
  uVar6 = uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU);
  uVar1 = param_3;
  func_0x00010c242500();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  uVar1 = uVar2 - 1;
  if (uVar5 + 3 <= uVar2 - 1) {
    uVar1 = uVar5 + 3;
  }
  if ((long)uVar6 <= (long)uVar1) {
    uVar5 = uVar6;
    do {
      uVar2 = param_3;
      func_0x00010c242500(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_107ab75b4;
      puStack_90 = &UNK_1109f94e0;
      uStack_80 = uVar5;
      uStack_78 = uVar6;
      _objc_retain(param_5);
      uStack_88 = param_5;
      FUN_107ab6f0c(uVar4,param_3,param_2,param_4,&puStack_a8);
      _objc_release(uStack_88);
      _objc_release(uVar4);
      uVar5 = uVar5 + 1;
    } while (uVar1 + 1 != uVar5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 107ab75b4; end: 107ab761f;  */

void FUN_107ab75b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x28) == *(long *)(param_1 + 0x30)) &&
     (lVar1 = *(long *)(param_1 + 0x20), lVar1 != 0)) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107ab7620; end: 107ab785f;  */

void FUN_107ab7620(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  _objc_retain();
  _objc_retain(param_4);
  uVar1 = param_1;
  FUN_107ab7d48(param_1,param_3,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c08fa60();
  if (uVar6 != 0) {
    uVar6 = param_1;
    func_0x00010c242500();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010bf529e0();
    _objc_release(uVar6);
    if (uVar2 != 0) {
      uVar6 = 0;
      do {
        uVar2 = param_1;
        func_0x00010c242500();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        uVar2 = uVar3;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        func_0x00010c0720c0();
        _objc_release(uVar2);
        _objc_release(uVar3);
        if ((uVar4 & 1) != 0) goto LAB_107ab7744;
        uVar6 = uVar6 + 1;
        uVar2 = param_1;
        func_0x00010c242500();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf529e0();
        _objc_release(uVar2);
      } while (uVar6 < uVar3);
      uVar6 = 0;
LAB_107ab7744:
      uVar6 = uVar6 + 1;
      goto LAB_107ab7750;
    }
  }
  uVar6 = 1;
LAB_107ab7750:
  uVar2 = param_1;
  func_0x00010c242500();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  if (uVar6 < uVar3) {
    lVar7 = 2;
    do {
      uVar2 = param_1;
      func_0x00010c242500(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      uVar5 = param_4;
      func_0x00010c269d40(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010c23ffa0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2ec60(uVar5);
      _objc_release(uVar2);
      _objc_release(uVar5);
      _objc_release(uVar3);
      if (lVar7 == 0) break;
      uVar6 = uVar6 + 1;
      uVar2 = param_1;
      func_0x00010c242500();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf529e0();
      _objc_release(uVar2);
      lVar7 = lVar7 + -1;
    } while (uVar6 < uVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ab7860; end: 107ab7aab;  */

void FUN_107ab7860(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = param_1;
  func_0x00010bef60a0();
  puVar4 = param_1;
  if (puVar1 == (undefined *)0x0) {
    puVar1 = param_2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010c23ffa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c074060();
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (((ulong)puVar3 & 1) == 0) {
      puVar4 = param_2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = param_1;
      func_0x00010c23ffa0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar4;
      func_0x00010bfbbca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(puVar4);
      puVar4 = puVar2;
      func_0x00010c074040();
      if ((int)puVar4 == 0) {
        puVar4 = (undefined *)0x0;
      }
      else {
        puVar4 = puVar2;
        func_0x00010c23ffa0();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar2);
      puVar1 = PTR_PTR_1126d63c8;
    }
    else {
      func_0x00010c23ffa0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126d63c8;
    }
    PTR_PTR_1126d63c8 = puVar1;
    if (puVar4 == (undefined *)0x0) {
      _objc_alloc(puVar1);
      puVar4 = PTR_PTR_1126d63d0;
      _objc_alloc(PTR_PTR_1126d63d0);
      puVar2 = param_1;
      func_0x00010c23ffa0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c047640(puVar4);
      func_0x00010c0169e0(puVar1);
      _objc_release(puVar4);
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar2 = param_2;
      func_0x00010c269d40(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar2;
      func_0x00010c11d740();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    puVar1 = PTR_PTR_1126d63c8;
    _objc_alloc(PTR_PTR_1126d63c8);
    puVar2 = PTR_PTR_1126d63d0;
    _objc_alloc(PTR_PTR_1126d63d0);
    func_0x00010c23ffa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c047640(puVar2);
    func_0x00010c0169e0(puVar1);
  }
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ab7aac; end: 107ab7bcb;  */

void FUN_107ab7aac(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  if ((param_3 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x30);
    if (lVar3 == 0) goto LAB_107ab7bb0;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c23ffa0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,0,0,uVar4);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar4);
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    func_0x00010c11d760(uVar1);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(param_2);
  }
  _objc_release(uVar4);
LAB_107ab7bb0:
  _objc_release(param_2);
  return;
}



/* Entry: 107ab7bcc; end: 107ab7bf3;  */

void FUN_107ab7bcc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107ab7bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_4,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 107ab7bf4; end: 107ab7d47;  */

void FUN_107ab7bf4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c23ffa0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,param_3,param_4,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 107ab7d48; end: 107ab7eab;  */

void FUN_107ab7d48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c242500();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000100504554();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0f01a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  lVar1 = param_1;
  if (lVar3 != 0) {
    lVar3 = param_1;
    func_0x00010c0f01a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf4b900();
    _objc_release(lVar3);
    if ((int)lVar4 != 0) {
      func_0x00010c0f01a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107ab7e68;
    }
  }
  uVar5 = param_3;
  func_0x00010c121820(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_107ab7eb4(param_1,param_2,uVar5,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
LAB_107ab7e68:
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107ab7eac; end: 107ab7eb3;  */

void FUN_107ab7eac(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe5ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_identifier_1125d7178);
  return;
}



/* Entry: 107ab7eb4; end: 107ab813b;  */

undefined8 * FUN_107ab7eb4(long param_1,undefined8 *param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puStack_140;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  puVar9 = param_2;
  FUN_107ab813c(param_1,param_2,param_4);
  lVar2 = param_1;
  func_0x00010c29d360();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar3 = param_1;
  func_0x00010c242500();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = &uStack_130;
  lVar4 = lVar3;
  func_0x00010bf52a60();
  if (lVar4 == 0) {
    puStack_140 = (undefined8 *)0x0;
  }
  else {
    puStack_140 = (undefined8 *)0x0;
    lVar12 = *plStack_120;
    do {
      lVar13 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(lVar3);
        }
        puVar14 = *(undefined8 **)(lStack_128 + lVar13 * 8);
        puVar5 = puVar14;
        func_0x00010c23ffa0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c23fe00();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x000108f56d38();
        _objc_release(puVar6);
        _objc_release(puVar5);
        if (((uint)puVar7 & (uint)lVar1 & 1) == 0) {
          puVar6 = puVar14;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = param_3;
          puVar5 = puVar6;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar6);
          if (lVar8 == 0) {
            if (lVar2 == 0x50) {
              puVar6 = puVar14;
              func_0x00010bef60a0();
              if (puVar6 == (undefined8 *)0x0) {
LAB_107ab8094:
                func_0x00010bfe5ec0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar3);
                goto LAB_107ab80d4;
              }
            }
            else {
              puVar6 = puVar14;
              func_0x00010bfdd500();
              if (((ulong)puVar6 & 1) != 0) goto LAB_107ab8094;
              puVar5 = puVar14;
              func_0x00010bef60a0();
              if ((puVar5 == (undefined8 *)0x0) && (puStack_140 == (undefined8 *)0x0)) {
                func_0x00010bfe5ec0();
                _objc_retainAutoreleasedReturnValue();
                puStack_140 = puVar14;
              }
            }
          }
        }
        lVar13 = lVar13 + 1;
      } while (lVar4 != lVar13);
      puVar5 = &uStack_130;
      lVar4 = lVar3;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar3);
  _objc_retain(puStack_140);
  puVar14 = puStack_140;
LAB_107ab80d4:
  _objc_release(puStack_140);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(puVar5);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c259740(param_1);
    puVar6 = puVar9;
    func_0x00010c25bac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (puVar6 == (undefined8 *)0x0) {
      func_0x00010c11b1e0(param_1);
      func_0x00010c0df7c0(puVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar5;
      func_0x00010bf5b7e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar9;
      func_0x00010c080120();
      _objc_release(puVar9);
      _objc_release(puVar11);
      _objc_release(puVar10);
    }
    else {
      puVar7 = puVar6;
      func_0x00010c080120(puVar6);
    }
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(param_1);
    return puVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return puVar14;
}



/* Entry: 107ab813c; end: 107ab825f;  */

long FUN_107ab813c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain();
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c259740(param_1);
  lVar1 = param_2;
  func_0x00010c25bac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar1 == 0) {
    func_0x00010c11b1e0(param_1);
    func_0x00010c0df7c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010bf5b7e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c080120();
    _objc_release(lVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else {
    lVar5 = lVar1;
    func_0x00010c080120(lVar1);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_1);
  return lVar5;
}



/* Entry: 107ab8260; end: 107ab834f;  */

void FUN_107ab8260(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain();
  lVar1 = param_1;
  FUN_107ab7d48(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  FUN_107ab8350(param_1,lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  if (lVar4 == 0) {
    lVar3 = param_1;
    func_0x00010c242500(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  else {
    _objc_retain(lVar2);
    lVar4 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 107ab8350; end: 107ab84cb;  */

void FUN_107ab8350(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c08fa60();
  if (uVar2 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    lVar3 = param_1;
    func_0x00010c242500();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        puVar8 = *(undefined **)(lVar9 * 8);
        puVar5 = puVar8;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_2;
        func_0x00010c0720c0();
        _objc_release(puVar5);
        if ((uVar2 & 1) != 0) {
          _objc_retain(puVar8);
          goto LAB_107ab846c;
        }
        lVar9 = lVar9 + 1;
      } while (lVar4 != lVar9);
      lVar4 = lVar3;
      func_0x00010bf52a60();
    }
    puVar8 = (undefined *)0x0;
LAB_107ab846c:
    _objc_release(lVar3);
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    _objc_retain(uVar6);
    _objc_retain(param_1);
    func_0x00010c11b1e0();
    lVar7 = param_1;
    func_0x00010bf25140(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010bf5b7e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    puVar8 = PTR_PTR_1126b64b8;
    _objc_opt_new(PTR_PTR_1126b64b8);
    lVar4 = param_1;
    func_0x00010c237cc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c201be0(puVar8);
    _objc_release(lVar4);
    func_0x00010c174420(puVar8);
    func_0x00010c080120(uVar2);
    func_0x00010c20f460(puVar8);
    func_0x00010c079480(uVar2);
    func_0x00010c1d5c40(puVar8);
    func_0x00010c11b1e0(param_1);
    func_0x00010c1e5b60(puVar8);
    lVar4 = param_1;
    func_0x00010c239520(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010c1d74a0(puVar8);
    _objc_release(lVar4);
    _objc_release(uVar2);
    _objc_release(puVar5);
    _objc_release(lVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 107ab84cc; end: 107ab8863;  */

void FUN_107ab84cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010c11b1e0();
  uVar1 = param_1;
  func_0x00010bf25140(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf5b7e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar4 = PTR_PTR_1126b64b8;
  _objc_opt_new(PTR_PTR_1126b64b8);
  uVar5 = param_1;
  func_0x00010c237cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c201be0(puVar4);
  _objc_release(uVar5);
  func_0x00010c174420(puVar4);
  func_0x00010c080120(uVar3);
  func_0x00010c20f460(puVar4);
  func_0x00010c079480(uVar3);
  func_0x00010c1d5c40(puVar4);
  func_0x00010c11b1e0(param_1);
  func_0x00010c1e5b60(puVar4);
  uVar5 = param_1;
  func_0x00010c239520(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c1d74a0(puVar4);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107ab8864; end: 107ab88e7;  */

ulong FUN_107ab8864(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110f0bc38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  uVar3 = uVar1;
  func_0x00010c071f40(uVar1);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 107ab88e8; end: 107ab8a37;  */

void FUN_107ab88e8(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c11f8;
  if (param_2 == 0x2d) {
    _objc_retain();
    func_0x00010c25faa0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c067e20();
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126c11f8;
    func_0x00010c25fac0(PTR_PTR_1126c11f8);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf1f320();
    _objc_release(param_1);
    _objc_release(puVar1);
    if (0 < lVar2 || (int)lVar3 != 0) {
      _objc_alloc(PTR_PTR_1126d63c0);
      func_0x00010c00f820((float)lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


