/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1062f2df4; end: 1062f2e1f;  */

void FUN_1062f2df4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdda3c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062f2e20; end: 1062f2eb7; -[SCPlaylistAdaptiveContentFetcher prefetchStateForPlaylistItemId:] */

long FUN_1062f2e20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0xc0);
  lVar1 = *(long *)(param_1 + 0x90);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = -1;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c067fc0(lVar1);
  }
  _objc_release(lVar1);
  _os_unfair_lock_unlock(param_1 + 0xc0);
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 1062f2eb8; end: 1062f3513; -[SCPlaylistAdaptiveContentFetcher _processNewRequests:] */

void FUN_1062f2eb8(double param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined *puStack_418;
  undefined8 uStack_410;
  code *pcStack_408;
  undefined *puStack_400;
  long lStack_3f8;
  long lStack_3f0;
  undefined1 auStack_3e8 [8];
  undefined *puStack_3e0;
  undefined8 uStack_3d8;
  code *pcStack_3d0;
  undefined *puStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  undefined1 auStack_3b0 [8];
  undefined *puStack_3a8;
  undefined8 uStack_3a0;
  code *pcStack_398;
  undefined *puStack_390;
  long lStack_388;
  long lStack_380;
  undefined1 auStack_378 [8];
  undefined1 auStack_370 [16];
  long lStack_2d0;
  long lStack_2c8;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010bf0ae40(*(undefined8 *)(param_2 + 0x38));
  _CACurrentMediaTime();
  uVar11 = *(undefined8 *)(param_2 + 0x40);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  dVar20 = param_1;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_4;
  func_0x00010bf529e0(param_4);
  FUN_1062f8d84(uVar11,puVar3,lVar14);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_retain(param_4);
  uVar11 = *(undefined8 *)(param_2 + 0x68);
  *(long *)(param_2 + 0x68) = param_4;
  _objc_release(uVar11);
  iVar1 = (int)*(undefined8 *)(param_2 + 0x48);
  func_0x00010bf91600();
  if (iVar1 == 0) {
    lVar14 = 0;
    lStack_2d0 = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    lVar12 = *(long *)(param_2 + 0x68);
    _objc_retain(lVar12);
    lStack_2c8 = lVar12;
    func_0x00010bf52a60();
    lVar14 = lRam0000000000000000;
    if (lStack_2c8 == 0) {
      lStack_2d0 = 0;
    }
    else {
      lStack_2d0 = 0;
      do {
        lVar13 = 0;
        do {
          if (lRam0000000000000000 != lVar14) {
            _objc_enumerationMutation(lVar12);
          }
          lVar17 = *(long *)(lVar13 * 8);
          lVar5 = lVar17;
          func_0x00010c0840e0(lVar17);
          _objc_retainAutoreleasedReturnValue();
          lVar18 = lVar5;
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          _objc_release(lVar18);
          lVar16 = *(long *)(param_2 + 0x78);
          lVar18 = lVar5;
          func_0x00010be36bc0(lVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar18);
          lVar19 = *(long *)(param_2 + 0x80);
          lVar18 = lVar5;
          func_0x00010be36bc0(lVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar18);
          if (lVar16 != 0 && lVar19 != 0) {
            lVar18 = lVar19;
            func_0x00010c067ec0();
            lVar4 = lVar17;
            func_0x00010bfea580();
            if (lVar4 != (int)lVar18) {
              lVar18 = param_2;
              func_0x00010be633a0(param_2);
              func_0x00010c1ebb40(lVar16);
              _objc_release(lVar18);
              puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010bfea580(lVar17);
              func_0x00010c0df7c0(puVar3);
              _objc_retainAutoreleasedReturnValue();
              uVar11 = *(undefined8 *)(param_2 + 0x80);
              lVar18 = lVar5;
              func_0x00010be36bc0(lVar5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(uVar11);
              _objc_release(lVar18);
              _objc_release(puVar3);
              lStack_2d0 = lStack_2d0 + 1;
            }
          }
          _objc_release(lVar19);
          _objc_release(lVar16);
          _objc_release(lVar5);
          lVar13 = lVar13 + 1;
        } while (lStack_2c8 != lVar13);
        lStack_2c8 = lVar12;
        func_0x00010bf52a60();
      } while (lStack_2c8 != 0);
    }
    _objc_release(lVar12);
    lVar5 = *(long *)(param_2 + 0x78);
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar5;
    func_0x00010bf52a60();
    lVar12 = lRam0000000000000000;
    if (lVar13 == 0) {
      lVar14 = 0;
    }
    else {
      lVar14 = 0;
      do {
        lVar18 = 0;
        do {
          if (lRam0000000000000000 != lVar12) {
            _objc_enumerationMutation(lVar5);
          }
          puVar3 = puVar2;
          func_0x00010bf4b900();
          if (((ulong)puVar3 & 1) == 0) {
            uVar11 = *(undefined8 *)(param_2 + 0x78);
            func_0x00010c0e00e0(uVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf2dba0();
            _objc_release(uVar11);
            func_0x00010bddf9e0(param_2);
            lVar14 = lVar14 + 1;
          }
          lVar18 = lVar18 + 1;
        } while (lVar13 != lVar18);
        lVar13 = lVar5;
        func_0x00010bf52a60();
      } while (lVar13 != 0);
    }
    _objc_release(lVar5);
    dVar20 = 0.0;
    lVar5 = *(long *)(param_2 + 0x70);
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar5;
    func_0x00010bf52a60();
    lVar13 = lRam0000000000000000;
    while (lVar12 != 0) {
      lVar18 = 0;
      do {
        if (lRam0000000000000000 != lVar13) {
          _objc_enumerationMutation(lVar5);
        }
        puVar3 = puVar2;
        func_0x00010bf4b900();
        if (((ulong)puVar3 & 1) == 0) {
          uVar11 = *(undefined8 *)(param_2 + 0x70);
          func_0x00010c0e00e0(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf2dba0();
          _objc_release(uVar11);
          func_0x00010bddf9e0(param_2);
          lVar14 = lVar14 + 1;
        }
        lVar18 = lVar18 + 1;
      } while (lVar12 != lVar18);
      lVar12 = lVar5;
      func_0x00010bf52a60();
    }
    _objc_release(lVar5);
    _objc_release(puVar2);
  }
  uVar11 = *(undefined8 *)(param_2 + 0x40);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  FUN_1062f8ef8(uVar11,puVar3,lStack_2d0);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar11 = *(undefined8 *)(param_2 + 0x40);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  FUN_1062f906c(uVar11,puVar3,lVar14);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _CACurrentMediaTime();
  uVar11 = *(undefined8 *)(param_2 + 0x40);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  dVar20 = (dVar20 - param_1) * 1000.0;
  FUN_1062f9844(uVar11,&PTR____CFConstantStringClassReference_110e49d38,puVar3,(long)dVar20);
  _objc_release(puVar3);
  _objc_release(puVar2);
  ppuVar8 = &PTR____CFConstantStringClassReference_110e49d58;
  func_0x00010bec63c0(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar8);
  func_0x00010bf0ae40(*(undefined8 *)(param_4 + 0x38));
  _CACurrentMediaTime();
  lVar9 = *(long *)(param_4 + 0x68);
  dVar22 = dVar20;
  func_0x00010bf529e0();
  puVar2 = PTR_s_startPrefetchForPlaylistItem_com_112671a20;
  lVar14 = 0;
  while (lVar9 != 0) {
    lVar9 = *(long *)(param_4 + 0x78);
    func_0x00010bf529e0();
    lVar12 = *(long *)(param_4 + 0x70);
    func_0x00010bf529e0();
    if (*(ulong *)(param_4 + 0x50) <= (ulong)(lVar12 + lVar9)) break;
    lVar13 = *(long *)(param_4 + 0x68);
    func_0x00010c103880();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar13;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(param_4 + 0x88);
    lVar12 = lVar9;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar12);
    dVar21 = dVar22;
    if (lVar5 == 0) {
LAB_1062f3660:
      _objc_initWeak(auStack_370,param_4);
      lVar12 = lVar13;
      func_0x00010c134680();
      _objc_retainAutoreleasedReturnValue();
      if (lVar12 == 0) {
LAB_1062f36cc:
        iVar1 = (int)*(undefined8 *)(param_4 + 0x48);
        func_0x00010bf91640();
        lVar12 = lVar9;
        if (iVar1 == 0) {
LAB_1062f3738:
          uVar6 = *(ulong *)(param_4 + 0x20);
          _objc_opt_respondsToSelector(uVar6,puVar2);
          if ((uVar6 & 1) == 0) goto LAB_1062f3c68;
          lVar5 = lVar9;
          func_0x00010c27dd80();
          _objc_retainAutoreleasedReturnValue();
          lVar18 = lVar5;
          FUN_1062f8ad4();
          if ((int)lVar18 == 0) {
            _objc_release(lVar5);
          }
          else {
            uVar6 = *(ulong *)(param_4 + 0x48);
            func_0x00010bf91620();
            _objc_release(lVar5);
            if ((uVar6 & 1) == 0) goto LAB_1062f3c68;
          }
          lVar5 = lVar9;
          func_0x00010bfce400();
          _objc_retainAutoreleasedReturnValue();
          lVar18 = lVar5;
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar5);
          if (lVar18 != 0) {
            lVar12 = *(long *)(param_4 + 0x20);
            puStack_418 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_410 = 0xc2000000;
            pcStack_408 = FUN_1062f41d8;
            puStack_400 = &UNK_110848218;
            _objc_copyWeak(auStack_3e8,auStack_370);
            _objc_retain(lVar9);
            lStack_3f8 = lVar9;
            _objc_retain(lVar13);
            lStack_3f0 = lVar13;
            func_0x00010c24ffe0();
            _objc_retainAutoreleasedReturnValue();
            if (lVar12 != 0) {
              uVar11 = *(undefined8 *)(param_4 + 0x70);
              lVar5 = lVar9;
              func_0x00010be36bc0(lVar9);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(uVar11);
              _objc_release(lVar5);
              _os_unfair_lock_lock(param_4 + 0xc0);
              uVar11 = *(undefined8 *)(param_4 + 0x90);
              lVar5 = lVar9;
              func_0x00010be36bc0(lVar9);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(uVar11);
              _objc_release(lVar5);
              _os_unfair_lock_unlock(param_4 + 0xc0);
              lVar14 = lVar14 + 1;
            }
            _objc_release(lVar12);
            _objc_release(lStack_3f0);
            _objc_release(lStack_3f8);
            ppuVar10 = &puStack_418;
            goto LAB_1062f3c28;
          }
          uVar11 = *(undefined8 *)(param_4 + 0x40);
          func_0x00010c27dd80(lVar9);
          _objc_retainAutoreleasedReturnValue();
          FUN_1062f8b54(uVar11,lVar12,0,1);
        }
        else {
          lVar5 = lVar13;
          func_0x00010c0b83a0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar5 == 0) goto LAB_1062f3738;
          lVar16 = *(long *)(param_4 + 0x78);
          lVar18 = lVar9;
          func_0x00010be36bc0(lVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar18);
          _objc_release(lVar5);
          if (lVar16 != 0) goto LAB_1062f3738;
          lVar5 = lVar9;
          func_0x00010bfce400();
          _objc_retainAutoreleasedReturnValue();
          lVar18 = lVar5;
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar5);
          if (lVar18 != 0) {
            lVar5 = *(long *)(param_4 + 0x10);
            lVar12 = lVar13;
            func_0x00010c0b83a0(lVar13);
            _objc_retainAutoreleasedReturnValue();
            puStack_3e0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_3d8 = 0xc2000000;
            pcStack_3d0 = FUN_1062f4034;
            puStack_3c8 = &UNK_11085f5c8;
            _objc_copyWeak(auStack_3b0,auStack_370);
            _objc_retain(lVar9);
            lStack_3c0 = lVar9;
            _objc_retain(lVar13);
            lStack_3b8 = lVar13;
            func_0x00010c107fa0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar12);
            if (lVar5 != 0) {
              uVar11 = *(undefined8 *)(param_4 + 0x78);
              lVar12 = lVar9;
              func_0x00010be36bc0(lVar9);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(uVar11);
              _objc_release(lVar12);
              puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010bfea580(lVar13);
              func_0x00010c0df7c0(puVar3);
              _objc_retainAutoreleasedReturnValue();
              uVar11 = *(undefined8 *)(param_4 + 0x80);
              lVar12 = lVar9;
              func_0x00010be36bc0(lVar9);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(uVar11);
              _objc_release(lVar12);
              _objc_release(puVar3);
              _os_unfair_lock_lock(param_4 + 0xc0);
              uVar11 = *(undefined8 *)(param_4 + 0x90);
              lVar12 = lVar9;
              func_0x00010be36bc0(lVar9);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(uVar11);
              _objc_release(lVar12);
              _os_unfair_lock_unlock(param_4 + 0xc0);
              lVar14 = lVar14 + 1;
            }
            _objc_release(lVar5);
            _objc_release(lStack_3b8);
            _objc_release(lStack_3c0);
            ppuVar10 = &puStack_3e0;
            goto LAB_1062f3c28;
          }
          uVar11 = *(undefined8 *)(param_4 + 0x40);
          func_0x00010c27dd80(lVar9);
          _objc_retainAutoreleasedReturnValue();
          FUN_1062f8b54(uVar11,lVar12,0,1);
        }
        _objc_release(lVar12);
      }
      else {
        lVar18 = *(long *)(param_4 + 0x78);
        lVar5 = lVar9;
        func_0x00010be36bc0(lVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar5);
        _objc_release(lVar12);
        if (lVar18 != 0) goto LAB_1062f36cc;
        uVar11 = *(undefined8 *)(param_4 + 0x10);
        lVar12 = lVar13;
        func_0x00010c134680(lVar13);
        _objc_retainAutoreleasedReturnValue();
        puStack_3a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_3a0 = 0xc2000000;
        pcStack_398 = FUN_1062f3e74;
        puStack_390 = &UNK_11091bd68;
        _objc_copyWeak(auStack_378,auStack_370);
        _objc_retain(lVar9);
        lStack_388 = lVar9;
        _objc_retain(lVar13);
        lStack_380 = lVar13;
        func_0x00010c13ace0(uVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar12);
        uVar15 = *(undefined8 *)(param_4 + 0x78);
        lVar12 = lVar9;
        func_0x00010be36bc0(lVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar15);
        _objc_release(lVar12);
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bfea580(lVar13);
        func_0x00010c0df7c0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar15 = *(undefined8 *)(param_4 + 0x80);
        lVar12 = lVar9;
        func_0x00010be36bc0(lVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar15);
        _objc_release(lVar12);
        _objc_release(puVar3);
        _os_unfair_lock_lock(param_4 + 0xc0);
        uVar15 = *(undefined8 *)(param_4 + 0x90);
        lVar12 = lVar9;
        func_0x00010be36bc0(lVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar15);
        _objc_release(lVar12);
        _os_unfair_lock_unlock(param_4 + 0xc0);
        lVar14 = lVar14 + 1;
        _objc_release(uVar11);
        _objc_release(lStack_380);
        _objc_release(lStack_388);
        ppuVar10 = &puStack_3a8;
LAB_1062f3c28:
        _objc_destroyWeak(ppuVar10 + 6);
      }
LAB_1062f3c68:
      _objc_destroyWeak(auStack_370);
    }
    else {
      _CACurrentMediaTime();
      uVar11 = *(undefined8 *)(param_4 + 0x88);
      lVar12 = lVar9;
      dVar21 = dVar22;
      func_0x00010be36bc0(lVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar22 = dVar22 - dVar21;
      _objc_release(uVar11);
      _objc_release(lVar12);
      if (600.0 <= dVar22) goto LAB_1062f3660;
    }
    _objc_release(lVar9);
    _objc_release(lVar13);
    lVar9 = *(long *)(param_4 + 0x68);
    func_0x00010bf529e0();
    dVar22 = dVar21;
  }
  uVar11 = *(undefined8 *)(param_4 + 0x40);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  FUN_1062f91e0(uVar11,puVar3,lVar14);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar11 = *(undefined8 *)(param_4 + 0x40);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  FUN_1062f9614(uVar11,puVar2,puVar7,1);
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _CACurrentMediaTime();
  uVar11 = *(undefined8 *)(param_4 + 0x40);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  FUN_1062f9844(uVar11,&PTR____CFConstantStringClassReference_110e49df8,puVar3,
                (long)((dVar22 - dVar20) * 1000.0));
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(ppuVar8);
  return;
}



/* Entry: 1062f3514; end: 1062f3e73; -[SCPlaylistAdaptiveContentFetcher _submitPendingRequestsWithTrigger:] */

void FUN_1062f3514(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  long lStack_118;
  long lStack_110;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [16];
  
  _objc_retain(param_4);
  func_0x00010bf0ae40(*(undefined8 *)(param_2 + 0x38));
  _CACurrentMediaTime();
  lVar2 = *(long *)(param_2 + 0x68);
  dVar17 = param_1;
  func_0x00010bf529e0();
  puVar7 = PTR_s_startPrefetchForPlaylistItem_com_112671a20;
  lVar10 = 0;
  while (lVar2 != 0) {
    lVar2 = *(long *)(param_2 + 0x78);
    func_0x00010bf529e0();
    lVar3 = *(long *)(param_2 + 0x70);
    func_0x00010bf529e0();
    if (*(ulong *)(param_2 + 0x50) <= (ulong)(lVar3 + lVar2)) break;
    lVar4 = *(long *)(param_2 + 0x68);
    func_0x00010c103880();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = *(long *)(param_2 + 0x88);
    lVar3 = lVar2;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    dVar16 = dVar17;
    if (lVar11 == 0) {
LAB_1062f3660:
      _objc_initWeak(auStack_90,param_2);
      lVar3 = lVar4;
      func_0x00010c134680();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
LAB_1062f36cc:
        iVar1 = (int)*(undefined8 *)(param_2 + 0x48);
        func_0x00010bf91640();
        lVar3 = lVar2;
        if (iVar1 == 0) {
LAB_1062f3738:
          uVar5 = *(ulong *)(param_2 + 0x20);
          _objc_opt_respondsToSelector(uVar5,puVar7);
          if ((uVar5 & 1) == 0) goto LAB_1062f3c68;
          lVar11 = lVar2;
          func_0x00010c27dd80();
          _objc_retainAutoreleasedReturnValue();
          lVar13 = lVar11;
          FUN_1062f8ad4();
          if ((int)lVar13 == 0) {
            _objc_release(lVar11);
          }
          else {
            uVar5 = *(ulong *)(param_2 + 0x48);
            func_0x00010bf91620();
            _objc_release(lVar11);
            if ((uVar5 & 1) == 0) goto LAB_1062f3c68;
          }
          lVar11 = lVar2;
          func_0x00010bfce400();
          _objc_retainAutoreleasedReturnValue();
          lVar13 = lVar11;
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar11);
          if (lVar13 != 0) {
            lVar3 = *(long *)(param_2 + 0x20);
            puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_130 = 0xc2000000;
            pcStack_128 = FUN_1062f41d8;
            puStack_120 = &UNK_110848218;
            _objc_copyWeak(auStack_108,auStack_90);
            _objc_retain(lVar2);
            lStack_118 = lVar2;
            _objc_retain(lVar4);
            lStack_110 = lVar4;
            func_0x00010c24ffe0();
            _objc_retainAutoreleasedReturnValue();
            if (lVar3 != 0) {
              uVar12 = *(undefined8 *)(param_2 + 0x70);
              lVar11 = lVar2;
              func_0x00010be36bc0(lVar2);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(uVar12);
              _objc_release(lVar11);
              _os_unfair_lock_lock(param_2 + 0xc0);
              uVar12 = *(undefined8 *)(param_2 + 0x90);
              lVar11 = lVar2;
              func_0x00010be36bc0(lVar2);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(uVar12);
              _objc_release(lVar11);
              _os_unfair_lock_unlock(param_2 + 0xc0);
              lVar10 = lVar10 + 1;
            }
            _objc_release(lVar3);
            _objc_release(lStack_110);
            _objc_release(lStack_118);
            ppuVar9 = &puStack_138;
            goto LAB_1062f3c28;
          }
          uVar12 = *(undefined8 *)(param_2 + 0x40);
          func_0x00010c27dd80(lVar2);
          _objc_retainAutoreleasedReturnValue();
          FUN_1062f8b54(uVar12,lVar3,0,1);
        }
        else {
          lVar11 = lVar4;
          func_0x00010c0b83a0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar11 == 0) goto LAB_1062f3738;
          lVar14 = *(long *)(param_2 + 0x78);
          lVar13 = lVar2;
          func_0x00010be36bc0(lVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar13);
          _objc_release(lVar11);
          if (lVar14 != 0) goto LAB_1062f3738;
          lVar11 = lVar2;
          func_0x00010bfce400();
          _objc_retainAutoreleasedReturnValue();
          lVar13 = lVar11;
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar11);
          if (lVar13 != 0) {
            lVar11 = *(long *)(param_2 + 0x10);
            lVar3 = lVar4;
            func_0x00010c0b83a0(lVar4);
            _objc_retainAutoreleasedReturnValue();
            puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_f8 = 0xc2000000;
            pcStack_f0 = FUN_1062f4034;
            puStack_e8 = &UNK_11085f5c8;
            _objc_copyWeak(auStack_d0,auStack_90);
            _objc_retain(lVar2);
            lStack_e0 = lVar2;
            _objc_retain(lVar4);
            lStack_d8 = lVar4;
            func_0x00010c107fa0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar3);
            if (lVar11 != 0) {
              uVar12 = *(undefined8 *)(param_2 + 0x78);
              lVar3 = lVar2;
              func_0x00010be36bc0(lVar2);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(uVar12);
              _objc_release(lVar3);
              puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010bfea580(lVar4);
              func_0x00010c0df7c0(puVar6);
              _objc_retainAutoreleasedReturnValue();
              uVar12 = *(undefined8 *)(param_2 + 0x80);
              lVar3 = lVar2;
              func_0x00010be36bc0(lVar2);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(uVar12);
              _objc_release(lVar3);
              _objc_release(puVar6);
              _os_unfair_lock_lock(param_2 + 0xc0);
              uVar12 = *(undefined8 *)(param_2 + 0x90);
              lVar3 = lVar2;
              func_0x00010be36bc0(lVar2);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(uVar12);
              _objc_release(lVar3);
              _os_unfair_lock_unlock(param_2 + 0xc0);
              lVar10 = lVar10 + 1;
            }
            _objc_release(lVar11);
            _objc_release(lStack_d8);
            _objc_release(lStack_e0);
            ppuVar9 = &puStack_100;
            goto LAB_1062f3c28;
          }
          uVar12 = *(undefined8 *)(param_2 + 0x40);
          func_0x00010c27dd80(lVar2);
          _objc_retainAutoreleasedReturnValue();
          FUN_1062f8b54(uVar12,lVar3,0,1);
        }
        _objc_release(lVar3);
      }
      else {
        lVar13 = *(long *)(param_2 + 0x78);
        lVar11 = lVar2;
        func_0x00010be36bc0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar11);
        _objc_release(lVar3);
        if (lVar13 != 0) goto LAB_1062f36cc;
        uVar12 = *(undefined8 *)(param_2 + 0x10);
        lVar3 = lVar4;
        func_0x00010c134680(lVar4);
        _objc_retainAutoreleasedReturnValue();
        puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c0 = 0xc2000000;
        pcStack_b8 = FUN_1062f3e74;
        puStack_b0 = &UNK_11091bd68;
        _objc_copyWeak(auStack_98,auStack_90);
        _objc_retain(lVar2);
        lStack_a8 = lVar2;
        _objc_retain(lVar4);
        lStack_a0 = lVar4;
        func_0x00010c13ace0(uVar12);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        uVar15 = *(undefined8 *)(param_2 + 0x78);
        lVar3 = lVar2;
        func_0x00010be36bc0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar15);
        _objc_release(lVar3);
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bfea580(lVar4);
        func_0x00010c0df7c0(puVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar15 = *(undefined8 *)(param_2 + 0x80);
        lVar3 = lVar2;
        func_0x00010be36bc0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar15);
        _objc_release(lVar3);
        _objc_release(puVar6);
        _os_unfair_lock_lock(param_2 + 0xc0);
        uVar15 = *(undefined8 *)(param_2 + 0x90);
        lVar3 = lVar2;
        func_0x00010be36bc0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar15);
        _objc_release(lVar3);
        _os_unfair_lock_unlock(param_2 + 0xc0);
        lVar10 = lVar10 + 1;
        _objc_release(uVar12);
        _objc_release(lStack_a0);
        _objc_release(lStack_a8);
        ppuVar9 = &puStack_c8;
LAB_1062f3c28:
        _objc_destroyWeak(ppuVar9 + 6);
      }
LAB_1062f3c68:
      _objc_destroyWeak(auStack_90);
    }
    else {
      _CACurrentMediaTime();
      uVar12 = *(undefined8 *)(param_2 + 0x88);
      lVar3 = lVar2;
      dVar16 = dVar17;
      func_0x00010be36bc0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar17 = dVar17 - dVar16;
      _objc_release(uVar12);
      _objc_release(lVar3);
      if (600.0 <= dVar17) goto LAB_1062f3660;
    }
    _objc_release(lVar2);
    _objc_release(lVar4);
    lVar2 = *(long *)(param_2 + 0x68);
    func_0x00010bf529e0();
    dVar17 = dVar16;
  }
  uVar12 = *(undefined8 *)(param_2 + 0x40);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar7;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  FUN_1062f91e0(uVar12,puVar6,lVar10);
  _objc_release(puVar6);
  _objc_release(puVar7);
  uVar12 = *(undefined8 *)(param_2 + 0x40);
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  FUN_1062f9614(uVar12,puVar7,puVar8,1);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _CACurrentMediaTime();
  uVar12 = *(undefined8 *)(param_2 + 0x40);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar7;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  FUN_1062f9844(uVar12,&PTR____CFConstantStringClassReference_110e49df8,puVar6,
                (long)((dVar17 - param_1) * 1000.0));
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(param_4);
  return;
}



/* Entry: 1062f3e74; end: 1062f3f7f;  */

void FUN_1062f3e74(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x38);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1062f3f80;
    puStack_68 = &UNK_110850cf8;
    _objc_retain(param_2);
    uStack_60 = param_2;
    _objc_copyWeak(auStack_48,param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uStack_58 = uVar4;
    _objc_retain(uVar2);
    uStack_50 = uVar2;
    func_0x000100a0df38(uVar3,&puStack_80);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    _objc_destroyWeak(auStack_48);
    _objc_release(uStack_60);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1062f3f80; end: 1062f4033;  */

void FUN_1062f3f80(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf007e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = 3;
  }
  _objc_release(lVar2);
  lVar3 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010be36bc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0b3aa0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be2c2a0(lVar3,param_2,uVar4,uVar1,uVar5,
                      &PTR____CFConstantStringClassReference_110e49d78);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1062f4034; end: 1062f413f;  */

void FUN_1062f4034(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x38);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1062f4140;
    puStack_68 = &UNK_110850cf8;
    _objc_retain(param_2);
    uStack_60 = param_2;
    _objc_copyWeak(auStack_48,param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uStack_58 = uVar4;
    _objc_retain(uVar2);
    uStack_50 = uVar2;
    func_0x000100a0df38(uVar3,&puStack_80);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    _objc_destroyWeak(auStack_48);
    _objc_release(uStack_60);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1062f4140; end: 1062f41d7;  */

void FUN_1062f4140(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = 3;
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = 0;
  }
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010be36bc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0b3aa0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be2c2a0(lVar2,param_2,uVar3,uVar1,uVar4,
                      &PTR____CFConstantStringClassReference_110e49d98);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1062f41d8; end: 1062f42bb;  */

void FUN_1062f41d8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x38);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1062f42bc;
    puStack_60 = &UNK_110848218;
    _objc_copyWeak(auStack_48,param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uStack_58 = uVar4;
    _objc_retain(uVar2);
    uStack_50 = uVar2;
    func_0x000100a0df38(uVar3,&puStack_78);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1062f42bc; end: 1062f4343;  */

void FUN_1062f42bc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be36bc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0b3aa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be2c2a0(lVar1,param_2,uVar2,0xffffffffffffffff,uVar3,
                      &PTR____CFConstantStringClassReference_110e49db8);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1062f4344; end: 1062f43d7; -[SCPlaylistAdaptiveContentFetcher _maxGestureDistanceWithItemType:] */

ulong FUN_1062f4344(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 uStack_34;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010c1015c0();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x48);
    func_0x00010c1015a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfcb860();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      uVar3 = (ulong)uStack_34;
      goto LAB_1062f43b4;
    }
  }
  uVar3 = *(ulong *)(param_1 + 0x48);
  func_0x00010c0c2320(uVar3);
LAB_1062f43b4:
  _objc_release(param_3);
  return uVar3 & 0xffffffff;
}



/* Entry: 1062f43d8; end: 1062f448b; -[SCPlaylistAdaptiveContentFetcher _newRequestContextFromPendingPrefetch:] */

undefined * FUN_1062f43d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar5 = PTR_PTR_1126b1378;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c134680(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4c720();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0c46a0();
  uVar4 = param_3;
  func_0x00010bfea580(param_3);
  _objc_release(param_3);
  func_0x00010c108160(puVar5,param_2,uVar3,2000,uVar4,5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return puVar5;
}



/* Entry: 1062f448c; end: 1062f46c7; -[SCPlaylistAdaptiveContentFetcher _populatePrefetchRequestFromItem:gestureDistance:importanceResult:pendingPrefetch:] */

void FUN_1062f448c(long param_1,undefined8 param_2,long param_3,long param_4,ulong *param_5,
                  long param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  uVar6 = param_4 * -100 + 1000;
  *param_5 = uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU);
  uVar6 = *(ulong *)(param_1 + 0x20);
  _objc_opt_respondsToSelector(uVar6,PTR_s_prefetchRequestFromPlaylistItem__11261f968);
  if ((uVar6 & 1) != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x48);
    func_0x00010bf69f40();
    if (iVar1 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = PTR_PTR_1126b8010;
      _objc_alloc(PTR_PTR_1126b8010);
      func_0x00010bf8fae0(*(undefined8 *)(param_1 + 0x48));
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bf69f40(*(undefined8 *)(param_1 + 0x48));
      func_0x00010c0df820(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0003a0(puVar7);
      _objc_release(puVar2);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c107d20(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ebac0(param_6);
    _objc_release(uVar3);
    _objc_release(puVar7);
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x48);
  func_0x00010bf91640();
  if (iVar1 != 0) {
    lVar5 = param_6;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 == 0) {
      lVar5 = param_3;
      func_0x00010bfce400();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar5;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar5);
      if (lVar4 == 0) {
        uVar3 = *(undefined8 *)(param_1 + 0x40);
        lVar5 = param_3;
        func_0x00010c27dd80(param_3);
        _objc_retainAutoreleasedReturnValue();
        FUN_1062f8b54(uVar3,lVar5,0,1);
      }
      else {
        uVar6 = *(ulong *)(param_1 + 0x20);
        _objc_opt_respondsToSelector(uVar6,PTR_s_prefetchRequestForPlaylistItem_r_11261f958);
        if ((uVar6 & 1) == 0) goto LAB_1062f46a4;
        lVar5 = *(long *)(param_1 + 0x20);
        func_0x00010c107ce0(lVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be5c900(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c1c40(param_6);
        _objc_release(param_1);
      }
      _objc_release(lVar5);
    }
  }
LAB_1062f46a4:
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062f46c8; end: 1062f4ca7; -[SCPlaylistAdaptiveContentFetcher _handle2DPlaylistTraversalWithPlaylist:] */

void FUN_1062f46c8(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined *puVar16;
  ulong uStack_180;
  undefined1 auStack_118 [8];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  uVar3 = param_4;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_4;
  func_0x00010bf5ee40(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfecde0();
  _objc_release(uVar15);
  _objc_release(uVar3);
  if (uVar4 != 0x7fffffffffffffff) {
    puStack_90 = &uStack_98;
    uStack_98 = 0;
    uStack_88 = 0x2020000000;
    uStack_80 = 0;
    iVar1 = (int)*(undefined8 *)(param_2 + 0x48);
    func_0x00010c101760();
    iVar2 = (int)*(undefined8 *)(param_2 + 0x48);
    if (iVar1 == 2) {
      func_0x00010c0c2c80();
      iVar1 = (int)*(undefined8 *)(param_2 + 0x48);
      func_0x00010c0c1ea0();
      puStack_90[3] = (ulong)(uint)(iVar1 * iVar2);
    }
    else {
      func_0x00010c101760();
      if (iVar2 == 3) {
        uVar5 = *(undefined8 *)(param_2 + 0x48);
        func_0x00010c2458a0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
        param_1 = 0xc2000000;
        uStack_b8 = 0xc2000000;
        pcStack_b0 = FUN_1062f4ca8;
        puStack_a8 = &UNK_11087e858;
        puStack_a0 = &uStack_98;
        func_0x00010bf980c0();
        _objc_release(uVar5);
      }
    }
    uStack_180 = *(ulong *)(param_2 + 0x48);
    func_0x00010c0c1ea0();
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_initWeak(auStack_c8,param_2);
    puStack_e0 = &uStack_e8;
    uStack_e8 = 0;
    uStack_d8 = 0x2020000000;
    uStack_d0 = 0;
    puStack_100 = &uStack_108;
    uStack_108 = 0;
    uStack_f8 = 0x2020000000;
    uStack_f0 = 0;
    _CACurrentMediaTime();
    uStack_180 = uStack_180 & 0xffffffff;
    uVar3 = uVar4;
    while( true ) {
      uVar7 = param_4;
      func_0x00010bfcf800();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar7;
      func_0x00010bf529e0();
      _objc_release(uVar7);
      if (puStack_90[3] + uVar4 <= uVar15) {
        uVar15 = puStack_90[3] + uVar4;
      }
      if ((uVar15 <= uVar3) || ((*(byte *)(puStack_e0 + 3) & 1) != 0)) break;
      uVar15 = param_4;
      func_0x00010bfcf800();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar15;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar15);
      puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (uVar3 == uVar4) {
        uVar15 = uVar7;
        func_0x00010c084fc0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar7;
        func_0x00010bf5f0a0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfecde0(uVar15);
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar11);
        _objc_release(uVar15);
      }
      else {
        puVar16 = (undefined *)0x0;
      }
      iVar1 = (int)*(undefined8 *)(param_2 + 0x48);
      func_0x00010c101760();
      puVar13 = PTR_PTR_1126b8010;
      uVar15 = uStack_180;
      if (iVar1 == 3) {
        uVar11 = *(ulong *)(param_2 + 0x48);
        func_0x00010c2458c0();
        puVar13 = PTR_PTR_1126b8010;
        if (uVar3 - uVar4 < uVar11) {
          uVar12 = *(undefined8 *)(param_2 + 0x48);
          func_0x00010c2458a0();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar12;
          func_0x00010c296de0();
          uVar15 = (ulong)(int)uVar5;
          _objc_release(uVar12);
          puVar13 = PTR_PTR_1126b8010;
          uStack_180 = uVar15;
        }
      }
      for (; PTR_PTR_1126b8010 = puVar13, uVar15 != 0; uVar15 = uVar15 - 1) {
        _objc_alloc(puVar13);
        func_0x00010bf8fae0(*(undefined8 *)(param_2 + 0x48));
        puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bf69f40(*(undefined8 *)(param_2 + 0x48));
        func_0x00010c0df820(puVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0003a0(puVar13);
        func_0x00010befa120(puVar9);
        _objc_release(puVar13);
        _objc_release(puVar14);
        puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar10);
        _objc_release(puVar13);
        puVar13 = PTR_PTR_1126c99c8;
        _objc_opt_new(PTR_PTR_1126c99c8);
        func_0x00010c1ab100();
        func_0x00010befa120(puVar8);
        _objc_release(puVar13);
        puVar13 = PTR_PTR_1126b8010;
      }
      _objc_copyWeak(auStack_118,auStack_c8);
      _objc_retain(puVar6);
      uStack_110 = param_1;
      func_0x00010be75f40(param_2);
      _objc_release(puVar6);
      _objc_destroyWeak(auStack_118);
      _objc_release(puVar16);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(uVar7);
      uVar3 = uVar3 + 1;
    }
    __Block_object_dispose(&uStack_108,8);
    __Block_object_dispose(&uStack_e8,8);
    _objc_destroyWeak(auStack_c8);
    _objc_release(puVar6);
    __Block_object_dispose(&uStack_98,8);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 1062f4ca8; end: 1062f4cbf;  */

void FUN_1062f4ca8(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + (long)param_2;
  return;
}



/* Entry: 1062f4cc0; end: 1062f4e3f;  */

void FUN_1062f4cc0(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf0ae40(*(undefined8 *)(lVar1 + 0x38));
    if (param_2 != 0) {
      func_0x00010befa160(*(undefined8 *)(param_1 + 0x20));
    }
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010bf529e0();
    if (*(ulong *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) <= uVar2) {
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      dVar7 = 1.60807493534087e-314;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_1062f4e40;
      puStack_60 = &UNK_110847658;
      uStack_58 = *(undefined8 *)(param_1 + 0x30);
      func_0x000100162d98("APPSTORE",&puStack_78);
      lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 8);
      if ((*(byte *)(lVar5 + 0x18) & 1) == 0) {
        *(undefined1 *)(lVar5 + 0x18) = 1;
        _CACurrentMediaTime();
        dVar8 = *(double *)(param_1 + 0x48);
        uVar6 = *(undefined8 *)(lVar1 + 0x40);
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        FUN_1062f9844(uVar6,&PTR____CFConstantStringClassReference_110e49d18,puVar4,
                      (long)((dVar7 - dVar8) * 1000.0));
        _objc_release(puVar4);
        _objc_release(puVar3);
        func_0x00010be818c0(*(undefined8 *)(param_1 + 0x48),lVar1);
      }
    }
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1062f4e40; end: 1062f4e53;  */

void FUN_1062f4e40(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1062f4e54; end: 1062f5213; -[SCPlaylistAdaptiveContentFetcher _populatePendingPrefetchForGroup:startPosition:pendingPrefetches:prefetchSignalsList:importanceList:completion:] */

void FUN_1062f4e54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_70,param_1);
  uVar3 = param_3;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  if ((int)uVar1 == 0) {
    uVar3 = param_3;
    func_0x00010c27dd80();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    if ((int)uVar1 == 0) {
      uVar3 = param_3;
      func_0x00010c27dd80();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      func_0x00010c0720c0();
      _objc_release(uVar3);
      if ((int)uVar1 == 0) goto LAB_1062f5190;
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf529e0(param_5);
      puVar2 = auStack_f8;
      _objc_copyWeak(puVar2,auStack_70);
      _objc_retain(param_3);
      _objc_retain(param_8);
      _objc_retain(param_5);
      func_0x00010bfc0180(uVar3);
      _objc_release(param_5);
      _objc_release(param_8);
      uVar3 = param_3;
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      uVar3 = param_7;
      func_0x00010bfb1920(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0();
      puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e8 = 0xc2000000;
      pcStack_e0 = FUN_1062f53f8;
      puStack_d8 = &UNK_11091bdc8;
      puVar2 = auStack_b8;
      _objc_copyWeak(puVar2,auStack_70);
      _objc_retain(param_3);
      uStack_d0 = param_3;
      _objc_retain(param_8);
      uStack_c0 = param_8;
      _objc_retain(param_5);
      uStack_c8 = param_5;
      func_0x00010bfbf5e0(uVar1);
      _objc_release(uVar3);
      _objc_release(uStack_c8);
      _objc_release(uStack_c0);
      uVar3 = uStack_d0;
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf529e0(param_5);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1062f5214;
    puStack_98 = &UNK_110894390;
    puVar2 = auStack_78;
    _objc_copyWeak(puVar2,auStack_70);
    _objc_retain(param_3);
    uStack_90 = param_3;
    _objc_retain(param_8);
    uStack_80 = param_8;
    _objc_retain(param_5);
    uStack_88 = param_5;
    func_0x00010bfbfe40(uVar3);
    _objc_release(uStack_88);
    _objc_release(uStack_80);
    uVar3 = uStack_90;
  }
  _objc_release(uVar3);
  _objc_destroyWeak(puVar2);
LAB_1062f5190:
  _objc_destroyWeak(auStack_70);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1062f5214; end: 1062f53f7;  */

void FUN_1062f5214(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf0ae40(*(undefined8 *)(lVar1 + 0x38));
    uVar3 = param_2;
    func_0x00010bf529e0();
    if (uVar3 == 0) {
      lVar9 = *(long *)(param_1 + 0x30);
      lVar10 = 0;
      if (lVar9 != 0) {
        (**(code **)(lVar9 + 0x10))(lVar9,0);
        lVar10 = *(long *)(param_1 + 0x30);
      }
      (**(code **)(lVar10 + 0x10))(lVar10,PTR____NSArray0__struct_11034ab48);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      uVar3 = *(ulong *)(param_1 + 0x28);
      func_0x00010bf529e0();
      uVar7 = param_2;
      func_0x00010bf529e0();
      if (uVar7 <= uVar3) {
        uVar3 = uVar7;
      }
      if (uVar3 != 0) {
        uVar3 = 0;
        do {
          uVar7 = param_2;
          func_0x00010c0dfd40(param_2);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c0dfd40(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1ebac0();
          _objc_release(uVar4);
          _objc_release(uVar7);
          uVar5 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c0dfd40(uVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar5;
          func_0x00010c134680();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar4;
          func_0x00010bf4c720();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf4c700();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(uVar6);
          _objc_release(uVar4);
          _objc_release(uVar5);
          uVar4 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c0dfd40(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          _objc_release(uVar4);
          uVar3 = uVar3 + 1;
          uVar7 = *(ulong *)(param_1 + 0x28);
          func_0x00010bf529e0();
          uVar8 = param_2;
          func_0x00010bf529e0();
          if (uVar8 <= uVar7) {
            uVar7 = uVar8;
          }
        } while (uVar3 < uVar7);
      }
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),puVar2);
      _objc_release(puVar2);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062f53f8; end: 1062f5557;  */

void FUN_1062f53f8(long param_1,undefined *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_2;
  _objc_retain(param_2);
  lVar9 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar9 != 0) {
    func_0x00010bf0ae40(*(undefined8 *)(lVar9 + 0x38));
    if (param_2 == (undefined *)0x0) {
      puVar10 = PTR____NSArray0__struct_11034ab48;
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar9;
      func_0x00010be5c900(lVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c1c40(uVar1);
      _objc_release(lVar12);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010be36bc0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c181f40(uVar1);
      _objc_release(uVar2);
      lVar12 = *(long *)(param_1 + 0x30);
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar3;
      (**(code **)(lVar12 + 0x10))(lVar12);
      _objc_release(puVar3);
      _objc_release(uVar1);
    }
  }
  _objc_release(lVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar10);
  puVar3 = param_2 + 0x38;
  _objc_loadWeakRetained();
  if (puVar3 != (undefined *)0x0) {
    func_0x00010bf0ae40(*(undefined8 *)(puVar3 + 0x38));
    puVar5 = puVar10;
    func_0x00010bf529e0();
    if (puVar5 == (undefined *)0x0) {
      lVar11 = *(long *)(param_2 + 0x30);
      lVar9 = 0;
      if (lVar11 != 0) {
        (**(code **)(lVar11 + 0x10))(lVar11,0);
        lVar9 = *(long *)(param_2 + 0x30);
      }
      (**(code **)(lVar9 + 0x10))(lVar9,PTR____NSArray0__struct_11034ab48);
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      puVar5 = *(undefined **)(param_2 + 0x28);
      func_0x00010bf529e0();
      puVar8 = puVar10;
      func_0x00010bf529e0();
      if (puVar8 <= puVar5) {
        puVar5 = puVar8;
      }
      if (puVar5 != (undefined *)0x0) {
        puVar5 = (undefined *)0x0;
        do {
          puVar8 = puVar10;
          func_0x00010c0dfd40(puVar10);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = *(undefined8 *)(param_2 + 0x28);
          func_0x00010c0dfd40(uVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c206140();
          _objc_release(uVar1);
          _objc_release(puVar8);
          puVar8 = puVar10;
          func_0x00010c0dfd40(puVar10);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar8;
          func_0x00010c240200();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010bf9e140();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = *(undefined8 *)(param_2 + 0x28);
          func_0x00010c0dfd40(uVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c181f40();
          _objc_release(uVar1);
          _objc_release(puVar7);
          _objc_release(puVar6);
          _objc_release(puVar8);
          puVar8 = puVar10;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar8;
          func_0x00010c240200();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010bf9e140();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar6);
          _objc_release(puVar8);
          if (puVar7 != (undefined *)0x0) {
            uVar1 = *(undefined8 *)(param_2 + 0x28);
            func_0x00010c0dfd40(uVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar4);
            _objc_release(uVar1);
          }
          puVar5 = puVar5 + 1;
          puVar8 = *(undefined **)(param_2 + 0x28);
          func_0x00010bf529e0();
          puVar6 = puVar10;
          func_0x00010bf529e0();
          if (puVar6 <= puVar8) {
            puVar8 = puVar6;
          }
        } while (puVar5 < puVar8);
      }
      (**(code **)(*(long *)(param_2 + 0x30) + 0x10))(*(long *)(param_2 + 0x30),puVar4);
      _objc_release(puVar4);
    }
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar10);
  return;
}



/* Entry: 1062f5558; end: 1062f57ab;  */

void FUN_1062f5558(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf0ae40(*(undefined8 *)(lVar1 + 0x38));
    uVar3 = param_2;
    func_0x00010bf529e0();
    if (uVar3 == 0) {
      lVar8 = *(long *)(param_1 + 0x30);
      lVar9 = 0;
      if (lVar8 != 0) {
        (**(code **)(lVar8 + 0x10))(lVar8,0);
        lVar9 = *(long *)(param_1 + 0x30);
      }
      (**(code **)(lVar9 + 0x10))(lVar9,PTR____NSArray0__struct_11034ab48);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      uVar3 = *(ulong *)(param_1 + 0x28);
      func_0x00010bf529e0();
      uVar7 = param_2;
      func_0x00010bf529e0();
      if (uVar7 <= uVar3) {
        uVar3 = uVar7;
      }
      if (uVar3 != 0) {
        uVar3 = 0;
        do {
          uVar7 = param_2;
          func_0x00010c0dfd40(param_2);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c0dfd40(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c206140();
          _objc_release(uVar4);
          _objc_release(uVar7);
          uVar7 = param_2;
          func_0x00010c0dfd40(param_2);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar7;
          func_0x00010c240200();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010bf9e140();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c0dfd40(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c181f40();
          _objc_release(uVar4);
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(uVar7);
          uVar7 = param_2;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar7;
          func_0x00010c240200();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010bf9e140();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(uVar5);
          _objc_release(uVar7);
          if (uVar6 != 0) {
            uVar4 = *(undefined8 *)(param_1 + 0x28);
            func_0x00010c0dfd40(uVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar2);
            _objc_release(uVar4);
          }
          uVar3 = uVar3 + 1;
          uVar7 = *(ulong *)(param_1 + 0x28);
          func_0x00010bf529e0();
          uVar5 = param_2;
          func_0x00010bf529e0();
          if (uVar5 <= uVar7) {
            uVar7 = uVar5;
          }
        } while (uVar3 < uVar7);
      }
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),puVar2);
      _objc_release(puVar2);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062f57ac; end: 1062f5e4f; -[SCPlaylistAdaptiveContentFetcher _processNewRequestsFor2DPrefetch:maxPrefetchCount:reqGenStartTs:] */

void FUN_1062f57ac(double param_1,long param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined1 *puVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  double dVar21;
  double dVar22;
  long lStack_3f8;
  undefined1 auStack_3c8 [8];
  undefined *puStack_3c0;
  undefined8 uStack_3b8;
  code *pcStack_3b0;
  undefined *puStack_3a8;
  long lStack_3a0;
  undefined1 auStack_398 [8];
  undefined *puStack_390;
  undefined8 uStack_388;
  code *pcStack_380;
  undefined *puStack_378;
  long lStack_370;
  undefined1 auStack_368 [8];
  undefined1 auStack_360 [16];
  long lStack_2d0;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010bf0ae40(*(undefined8 *)(param_2 + 0x38));
  _CACurrentMediaTime();
  dVar21 = param_1;
  func_0x00010c12adc0(*(undefined8 *)(param_2 + 0x68));
  uVar1 = param_4;
  func_0x00010bf529e0();
  uVar17 = param_5;
  if (uVar1 <= param_5) {
    uVar17 = uVar1;
  }
  if (uVar17 != 0) {
    uVar17 = 0;
    do {
      uVar13 = *(undefined8 *)(param_2 + 0x68);
      uVar1 = param_4;
      func_0x00010c0dfd40(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar13);
      _objc_release(uVar1);
      uVar17 = uVar17 + 1;
      uVar2 = param_4;
      func_0x00010bf529e0();
      uVar1 = param_5;
      if (uVar2 <= param_5) {
        uVar1 = uVar2;
      }
    } while (uVar17 < uVar1);
  }
  uVar14 = *(undefined8 *)(param_2 + 0x40);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_2 + 0x68);
  func_0x00010bf529e0(uVar13);
  FUN_1062f8d84(uVar14,puVar4,uVar13);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar17 = *(ulong *)(param_2 + 0x48);
  func_0x00010bf91600();
  if ((uVar17 & 1) == 0) {
    lVar19 = 0;
    lStack_2d0 = 0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    lVar15 = *(long *)(param_2 + 0x68);
    _objc_retain(lVar15);
    lVar5 = lVar15;
    func_0x00010bf52a60();
    lVar19 = lRam0000000000000000;
    if (lVar5 == 0) {
      lStack_2d0 = 0;
    }
    else {
      lStack_2d0 = 0;
      do {
        lVar18 = 0;
        do {
          if (lRam0000000000000000 != lVar19) {
            _objc_enumerationMutation(lVar15);
          }
          lVar20 = *(long *)(lVar18 * 8);
          lVar8 = lVar20;
          func_0x00010c134680();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar8;
          func_0x00010bf4c720();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar9;
          func_0x00010bf4c700();
          _objc_retainAutoreleasedReturnValue();
          if (lVar6 == 0) {
            lVar7 = lVar20;
            func_0x00010bf4c700(lVar20);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            _objc_retain(lVar6);
            lVar7 = lVar6;
          }
          _objc_release(lVar6);
          _objc_release(lVar9);
          _objc_release(lVar8);
          func_0x00010befa120(puVar3);
          lVar8 = *(long *)(param_2 + 0x98);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar8 != 0) {
            lVar9 = *(long *)(param_2 + 0xa0);
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar9 != 0) {
              uVar14 = *(undefined8 *)(param_2 + 0xa0);
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              uVar13 = uVar14;
              func_0x00010c067ec0();
              lVar9 = lVar20;
              func_0x00010bfea580();
              _objc_release(uVar14);
              if (lVar9 != (int)uVar13) {
                lVar9 = param_2;
                func_0x00010be633a0(param_2);
                func_0x00010c1ebb40(lVar8);
                _objc_release(lVar9);
                puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x00010bfea580(lVar20);
                func_0x00010c0df7c0(puVar4);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(*(undefined8 *)(param_2 + 0xa0));
                _objc_release(puVar4);
                lStack_2d0 = lStack_2d0 + 1;
              }
            }
          }
          _objc_release(lVar8);
          _objc_release(lVar7);
          lVar18 = lVar18 + 1;
        } while (lVar5 != lVar18);
        lVar5 = lVar15;
        func_0x00010bf52a60();
      } while (lVar5 != 0);
    }
    _objc_release(lVar15);
    lVar18 = *(long *)(param_2 + 0x98);
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar18;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    if (lVar15 == 0) {
      lVar19 = 0;
    }
    else {
      lVar19 = 0;
      do {
        lVar8 = 0;
        do {
          if (lRam0000000000000000 != lVar5) {
            _objc_enumerationMutation(lVar18);
          }
          puVar4 = puVar3;
          func_0x00010bf4b900();
          if (((ulong)puVar4 & 1) == 0) {
            uVar13 = *(undefined8 *)(param_2 + 0x98);
            func_0x00010c0e00e0(uVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf2dba0();
            _objc_release(uVar13);
            func_0x00010bddf9c0(param_2);
            lVar19 = lVar19 + 1;
          }
          lVar8 = lVar8 + 1;
        } while (lVar15 != lVar8);
        lVar15 = lVar18;
        func_0x00010bf52a60();
      } while (lVar15 != 0);
    }
    _objc_release(lVar18);
    dVar21 = 0.0;
    lVar18 = *(long *)(param_2 + 0xb8);
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar18;
    func_0x00010bf52a60();
    lVar15 = lRam0000000000000000;
    while (lVar5 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar15) {
          _objc_enumerationMutation(lVar18);
        }
        puVar4 = puVar3;
        func_0x00010bf4b900();
        if (((ulong)puVar4 & 1) == 0) {
          uVar13 = *(undefined8 *)(param_2 + 0xb8);
          func_0x00010c0e00e0(uVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf2dba0();
          _objc_release(uVar13);
          func_0x00010bddf9c0(param_2);
          lVar19 = lVar19 + 1;
        }
        lVar8 = lVar8 + 1;
      } while (lVar5 != lVar8);
      lVar5 = lVar18;
      func_0x00010bf52a60();
    }
    _objc_release(lVar18);
    _objc_release(puVar3);
  }
  uVar13 = *(undefined8 *)(param_2 + 0x40);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  FUN_1062f8ef8(uVar13,puVar4,lStack_2d0);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar13 = *(undefined8 *)(param_2 + 0x40);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  FUN_1062f906c(uVar13,puVar4,lVar19);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _CACurrentMediaTime();
  uVar13 = *(undefined8 *)(param_2 + 0x40);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  dVar21 = (dVar21 - param_1) * 1000.0;
  FUN_1062f9844(uVar13,&PTR____CFConstantStringClassReference_110e49d38,puVar4,(long)dVar21);
  _objc_release(puVar4);
  _objc_release(puVar3);
  ppuVar11 = &PTR____CFConstantStringClassReference_110e49d58;
  func_0x00010bec63a0(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar11);
  func_0x00010bf0ae40(*(undefined8 *)(param_4 + 0x38));
  _CACurrentMediaTime();
  dVar22 = dVar21;
  _objc_initWeak(auStack_360,param_4);
  lStack_3f8 = 0;
  while( true ) {
    lVar12 = *(long *)(param_4 + 0x68);
    func_0x00010bf529e0();
    if (lVar12 == 0) break;
    lVar12 = *(long *)(param_4 + 0x98);
    func_0x00010bf529e0();
    lVar19 = *(long *)(param_4 + 0xb8);
    func_0x00010bf529e0();
    if (*(ulong *)(param_4 + 0x50) <= (ulong)(lVar19 + lVar12)) break;
    lVar15 = *(long *)(param_4 + 0x68);
    func_0x00010c103880();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar15;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar12;
    func_0x00010bf4c720();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar19;
    func_0x00010bf4c700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar19);
    _objc_release(lVar12);
    if (lVar5 == 0) {
LAB_1062f6080:
      lVar12 = lVar15;
      func_0x00010bf4c700();
      _objc_retainAutoreleasedReturnValue();
      if (lVar12 != 0) {
        lVar19 = lVar15;
        func_0x00010c0b83a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar12);
        if (lVar19 != 0) {
          lVar19 = lVar15;
          func_0x00010bf4c700();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar5);
          uVar17 = param_4;
          func_0x00010beb69c0();
          lVar12 = lVar19;
          if ((uVar17 & 1) == 0) {
            uVar13 = *(undefined8 *)(param_4 + 0x10);
            lVar12 = lVar15;
            func_0x00010c0b83a0(lVar15);
            _objc_retainAutoreleasedReturnValue();
            puStack_3c0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_3b8 = 0xc2000000;
            pcStack_3b0 = FUN_1062f67bc;
            puStack_3a8 = &UNK_11085aad8;
            _objc_copyWeak(auStack_398,auStack_360);
            _objc_retain(lVar19);
            lStack_3a0 = lVar19;
            func_0x00010c107fa0(uVar13);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar12);
            func_0x00010c1d0640(*(undefined8 *)(param_4 + 0x98));
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010bfea580(lVar15);
            func_0x00010c0df7c0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(*(undefined8 *)(param_4 + 0xa0));
            _objc_release(puVar3);
            _os_unfair_lock_lock(param_4 + 0xc0);
            func_0x00010c1d0640(*(undefined8 *)(param_4 + 0xb0));
            _os_unfair_lock_unlock(param_4 + 0xc0);
            _objc_release(uVar13);
            lVar12 = lStack_3a0;
            puVar16 = auStack_398;
            goto LAB_1062f641c;
          }
          goto LAB_1062f6434;
        }
      }
      lVar12 = lVar15;
      func_0x00010bf4c700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      uVar17 = param_4;
      func_0x00010beb69c0();
      if ((uVar17 & 1) == 0) {
        uVar14 = *(undefined8 *)(param_4 + 0x18);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar19 = lVar15;
        func_0x00010c245460();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar19;
        func_0x00010c240200();
        _objc_retainAutoreleasedReturnValue();
        lVar18 = lVar15;
        func_0x00010c245460();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar18;
        func_0x00010c23fe00();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar15;
        func_0x00010c245460();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar9;
        func_0x00010c135080();
        _objc_retainAutoreleasedReturnValue();
        lVar20 = lVar15;
        func_0x00010c245460(lVar15);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar20;
        func_0x00010c107de0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf438e0();
        _objc_copyWeak(auStack_3c8,auStack_360);
        _objc_retain(lVar12);
        uVar13 = uVar14;
        func_0x00010bf0bd80(uVar14);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar7);
        _objc_release(lVar20);
        _objc_release(lVar6);
        _objc_release(lVar9);
        _objc_release(lVar8);
        _objc_release(lVar18);
        _objc_release(lVar5);
        _objc_release(lVar19);
        _objc_release(uVar14);
        func_0x00010c1d0640(*(undefined8 *)(param_4 + 0x98));
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bfea580(lVar15);
        func_0x00010c0df7c0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(param_4 + 0xa0));
        _objc_release(puVar3);
        _os_unfair_lock_lock(param_4 + 0xc0);
        func_0x00010c1d0640(*(undefined8 *)(param_4 + 0xb0));
        _os_unfair_lock_unlock(param_4 + 0xc0);
        _objc_release(uVar13);
        puVar16 = auStack_3c8;
        lVar19 = lVar12;
LAB_1062f641c:
        _objc_release(lVar12);
        _objc_destroyWeak(puVar16);
        lStack_3f8 = lStack_3f8 + 1;
        lVar12 = lVar19;
      }
    }
    else {
      lVar12 = lVar15;
      func_0x00010c134680();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar12 == 0) goto LAB_1062f6080;
      uVar17 = param_4;
      func_0x00010beb69c0();
      lVar12 = lVar5;
      if ((uVar17 & 1) == 0) {
        uVar13 = *(undefined8 *)(param_4 + 0x10);
        lVar12 = lVar15;
        func_0x00010c134680(lVar15);
        _objc_retainAutoreleasedReturnValue();
        puStack_390 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_388 = 0xc2000000;
        pcStack_380 = FUN_1062f6654;
        puStack_378 = &UNK_11091bdf8;
        _objc_copyWeak(auStack_368,auStack_360);
        _objc_retain(lVar5);
        lStack_370 = lVar5;
        func_0x00010c13ace0(uVar13);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar12);
        func_0x00010c1d0640(*(undefined8 *)(param_4 + 0x98));
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bfea580(lVar15);
        func_0x00010c0df7c0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(param_4 + 0xa0));
        _objc_release(puVar3);
        _os_unfair_lock_lock(param_4 + 0xc0);
        func_0x00010c1d0640(*(undefined8 *)(param_4 + 0xb0));
        _os_unfair_lock_unlock(param_4 + 0xc0);
        _objc_release(uVar13);
        lVar12 = lStack_370;
        puVar16 = auStack_368;
        lVar19 = lVar5;
        goto LAB_1062f641c;
      }
    }
LAB_1062f6434:
    _objc_release(lVar12);
    _objc_release(lVar15);
  }
  uVar13 = *(undefined8 *)(param_4 + 0x40);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  FUN_1062f91e0(uVar13,puVar4,lStack_3f8);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar13 = *(undefined8 *)(param_4 + 0x40);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar4;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  FUN_1062f9614(uVar13,puVar3,puVar10,1);
  _objc_release(puVar10);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _CACurrentMediaTime();
  uVar13 = *(undefined8 *)(param_4 + 0x40);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  FUN_1062f9844(uVar13,&PTR____CFConstantStringClassReference_110e49df8,puVar4,
                (long)((dVar22 - dVar21) * 1000.0));
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_360);
  _objc_release(ppuVar11);
  return;
}



/* Entry: 1062f5e50; end: 1062f6653; -[SCPlaylistAdaptiveContentFetcher _submitPendingRequestsForGroupPrefetchWithTrigger:] */

void FUN_1062f5e50(double param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  double dVar19;
  long lStack_118;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  func_0x00010bf0ae40(*(undefined8 *)(param_2 + 0x38));
  _CACurrentMediaTime();
  dVar19 = param_1;
  _objc_initWeak(auStack_80,param_2);
  lStack_118 = 0;
  while( true ) {
    lVar1 = *(long *)(param_2 + 0x68);
    func_0x00010bf529e0();
    if (lVar1 == 0) break;
    lVar1 = *(long *)(param_2 + 0x98);
    func_0x00010bf529e0();
    lVar2 = *(long *)(param_2 + 0xb8);
    func_0x00010bf529e0();
    if (*(ulong *)(param_2 + 0x50) <= (ulong)(lVar2 + lVar1)) break;
    lVar3 = *(long *)(param_2 + 0x68);
    func_0x00010c103880();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf4c720();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf4c700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar4 == 0) {
LAB_1062f6080:
      lVar1 = lVar3;
      func_0x00010bf4c700();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 != 0) {
        lVar2 = lVar3;
        func_0x00010c0b83a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar1);
        if (lVar2 != 0) {
          lVar1 = lVar3;
          func_0x00010bf4c700();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar4);
          uVar5 = param_2;
          func_0x00010beb69c0();
          if ((uVar5 & 1) == 0) {
            uVar17 = *(undefined8 *)(param_2 + 0x10);
            lVar2 = lVar3;
            func_0x00010c0b83a0(lVar3);
            _objc_retainAutoreleasedReturnValue();
            puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_d8 = 0xc2000000;
            pcStack_d0 = FUN_1062f67bc;
            puStack_c8 = &UNK_11085aad8;
            _objc_copyWeak(auStack_b8,auStack_80);
            _objc_retain(lVar1);
            lStack_c0 = lVar1;
            func_0x00010c107fa0(uVar17);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar2);
            func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x98));
            puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010bfea580(lVar3);
            func_0x00010c0df7c0(puVar14);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(*(undefined8 *)(param_2 + 0xa0));
            _objc_release(puVar14);
            _os_unfair_lock_lock(param_2 + 0xc0);
            func_0x00010c1d0640(*(undefined8 *)(param_2 + 0xb0));
            _os_unfair_lock_unlock(param_2 + 0xc0);
            _objc_release(uVar17);
            lVar2 = lStack_c0;
            puVar18 = auStack_b8;
            goto LAB_1062f641c;
          }
          goto LAB_1062f6434;
        }
      }
      lVar2 = lVar3;
      func_0x00010bf4c700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      uVar5 = param_2;
      func_0x00010beb69c0();
      lVar1 = lVar2;
      if ((uVar5 & 1) == 0) {
        uVar6 = *(undefined8 *)(param_2 + 0x18);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c245460();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar4;
        func_0x00010c240200();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar3;
        func_0x00010c245460();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar8;
        func_0x00010c23fe00();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar3;
        func_0x00010c245460();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar10;
        func_0x00010c135080();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar3;
        func_0x00010c245460(lVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar12;
        func_0x00010c107de0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf438e0();
        _objc_copyWeak(auStack_e8,auStack_80);
        _objc_retain(lVar2);
        uVar17 = uVar6;
        func_0x00010bf0bd80(uVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar13);
        _objc_release(lVar12);
        _objc_release(lVar11);
        _objc_release(lVar10);
        _objc_release(lVar9);
        _objc_release(lVar8);
        _objc_release(lVar7);
        _objc_release(lVar4);
        _objc_release(uVar6);
        func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x98));
        puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bfea580(lVar3);
        func_0x00010c0df7c0(puVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(param_2 + 0xa0));
        _objc_release(puVar14);
        _os_unfair_lock_lock(param_2 + 0xc0);
        func_0x00010c1d0640(*(undefined8 *)(param_2 + 0xb0));
        _os_unfair_lock_unlock(param_2 + 0xc0);
        _objc_release(uVar17);
        puVar18 = auStack_e8;
LAB_1062f641c:
        _objc_release(lVar2);
        _objc_destroyWeak(puVar18);
        lStack_118 = lStack_118 + 1;
      }
    }
    else {
      lVar1 = lVar3;
      func_0x00010c134680();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 == 0) goto LAB_1062f6080;
      uVar5 = param_2;
      func_0x00010beb69c0();
      lVar1 = lVar4;
      if ((uVar5 & 1) == 0) {
        uVar17 = *(undefined8 *)(param_2 + 0x10);
        lVar2 = lVar3;
        func_0x00010c134680(lVar3);
        _objc_retainAutoreleasedReturnValue();
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a8 = 0xc2000000;
        pcStack_a0 = FUN_1062f6654;
        puStack_98 = &UNK_11091bdf8;
        _objc_copyWeak(auStack_88,auStack_80);
        _objc_retain(lVar4);
        lStack_90 = lVar4;
        func_0x00010c13ace0(uVar17);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x98));
        puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bfea580(lVar3);
        func_0x00010c0df7c0(puVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(param_2 + 0xa0));
        _objc_release(puVar14);
        _os_unfair_lock_lock(param_2 + 0xc0);
        func_0x00010c1d0640(*(undefined8 *)(param_2 + 0xb0));
        _os_unfair_lock_unlock(param_2 + 0xc0);
        _objc_release(uVar17);
        lVar2 = lStack_90;
        puVar18 = auStack_88;
        goto LAB_1062f641c;
      }
    }
LAB_1062f6434:
    _objc_release(lVar1);
    _objc_release(lVar3);
  }
  uVar17 = *(undefined8 *)(param_2 + 0x40);
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  FUN_1062f91e0(uVar17,puVar15,lStack_118);
  _objc_release(puVar15);
  _objc_release(puVar14);
  uVar17 = *(undefined8 *)(param_2 + 0x40);
  puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  FUN_1062f9614(uVar17,puVar14,puVar16,1);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _CACurrentMediaTime();
  uVar17 = *(undefined8 *)(param_2 + 0x40);
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  FUN_1062f9844(uVar17,&PTR____CFConstantStringClassReference_110e49df8,puVar15,
                (long)((dVar19 - param_1) * 1000.0));
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_4);
  return;
}



/* Entry: 1062f6654; end: 1062f6747;  */

void FUN_1062f6654(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x38);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1062f6748;
    puStack_60 = &UNK_110848218;
    _objc_retain(param_2);
    uStack_58 = param_2;
    _objc_copyWeak(auStack_48,param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    uStack_50 = uVar2;
    func_0x000100a0df38(uVar3,&puStack_78);
    _objc_release(uStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uStack_58);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1062f6748; end: 1062f67bb;  */

void FUN_1062f6748(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf007e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(uVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2c280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062f67bc; end: 1062f68af;  */

void FUN_1062f67bc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x38);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1062f68b0;
    puStack_60 = &UNK_110848218;
    _objc_retain(param_2);
    uStack_58 = param_2;
    _objc_copyWeak(auStack_48,param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    uStack_50 = uVar2;
    func_0x000100a0df38(uVar3,&puStack_78);
    _objc_release(uStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uStack_58);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1062f68b0; end: 1062f6907;  */

void FUN_1062f68b0(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2c280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062f6908; end: 1062f69fb;  */

void FUN_1062f6908(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x38);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1062f69fc;
    puStack_60 = &UNK_110848218;
    _objc_retain(param_2);
    uStack_58 = param_2;
    _objc_copyWeak(auStack_48,param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    uStack_50 = uVar2;
    func_0x000100a0df38(uVar3,&puStack_78);
    _objc_release(uStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uStack_58);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1062f69fc; end: 1062f6a57;  */

void FUN_1062f69fc(long param_1)

{
  func_0x00010c252d60();
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2c280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062f6a58; end: 1062f6be3; -[SCPlaylistAdaptiveContentFetcher _handleMediaResolverCompletionForPlaylistItem:state:loggingId:itemType:] */

void FUN_1062f6a58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x38));
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  FUN_1062f9354(uVar5,param_6,puVar2,puVar4,1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010bddf9e0(param_1);
  _os_unfair_lock_lock(param_1 + 0xc0);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x90));
  _objc_release(puVar1);
  _os_unfair_lock_unlock(param_1 + 0xc0);
  func_0x00010bec63c0(param_1);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062f6be4; end: 1062f6ccf; -[SCPlaylistAdaptiveContentFetcher _cleanupRequestForPlaylistItem:isCancelation:loggingId:] */

void FUN_1062f6be4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x38));
  lVar1 = *(long *)(param_1 + 0x78);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x78),param_2,0,param_3);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x80),param_2,0,param_3);
  }
  lVar1 = *(long *)(param_1 + 0x70);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x70),param_2,0,param_3);
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((param_4 & 1) == 0) {
    _CACurrentMediaTime();
    func_0x00010c0df720(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x88),param_2,puVar2,param_3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062f6cd0; end: 1062f6e3f; -[SCPlaylistAdaptiveContentFetcher _handleMediaResolverCompletionForContentId:state:itemType:] */

void FUN_1062f6cd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x38));
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  FUN_1062f9354(uVar5,param_5,puVar2,puVar4,1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010bddf9c0(param_1);
  _os_unfair_lock_lock(param_1 + 0xc0);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0xb0));
  _objc_release(puVar1);
  _os_unfair_lock_unlock(param_1 + 0xc0);
  func_0x00010bec63a0(param_1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062f6e40; end: 1062f6eeb; -[SCPlaylistAdaptiveContentFetcher _cleanupRequestForContentId:isCancelation:] */

void FUN_1062f6e40(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x38));
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x98),param_2,0,param_3);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0xa0),param_2,0,param_3);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0xb8),param_2,0,param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((param_4 & 1) == 0) {
    _CACurrentMediaTime();
    func_0x00010c0df720(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0xa8),param_2,puVar1,param_3);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062f6eec; end: 1062f6fcb; -[SCPlaylistAdaptiveContentFetcher _cancelAllRequestsIfNecessary] */

void FUN_1062f6eec(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x38));
  iVar1 = (int)*(undefined8 *)(param_1 + 0x48);
  func_0x00010bf2e820();
  if (iVar1 != 0) {
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x68));
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010bf00d20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf97e80();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    func_0x00010bf00d20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf97e80();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010bf00d20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf97e80();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0xb8);
    func_0x00010bf00d20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf97e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1062f6fcc; end: 1062f6feb;  */

void FUN_1062f6fcc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 1062f6fec; end: 1062f70bb; -[SCPlaylistAdaptiveContentFetcher _shouldSkipPrefetchForContent:] */

undefined8 FUN_1062f6fec(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_2 + 0x98);
  func_0x00010c0e00e0(lVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_2 + 0xa8);
    func_0x00010c0e00e0(lVar1,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      _CACurrentMediaTime();
      uVar2 = *(undefined8 *)(param_2 + 0xa8);
      dVar3 = param_1;
      func_0x00010c0e00e0(uVar2,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      _objc_release(uVar2);
      if (param_1 - dVar3 < 600.0) goto LAB_1062f7030;
    }
    uVar2 = 0;
  }
  else {
LAB_1062f7030:
    uVar2 = 1;
  }
  _objc_release(param_4);
  return uVar2;
}



/* Entry: 1062f70bc; end: 1062f7437; -[SCPlaylistAdaptiveContentFetcher _manifestRequestFromPrefetchRequest:] */

void FUN_1062f70bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_1062f7438;
  uStack_70 = 0x1062f7448;
  uStack_68 = 0;
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x2020000000;
  uStack_98 = 0;
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x2020000000;
  uStack_b8 = 0;
  func_0x00010c0be860(param_3);
  lVar2 = puStack_88[5];
  if (lVar2 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    func_0x00010c0c6e00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar4 = PTR_PTR_1126bff90;
    func_0x00010c100200(PTR_PTR_1126bff90);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126b08b8;
    _objc_alloc(PTR_PTR_1126b08b8);
    func_0x00010c0295e0();
    func_0x00010c2aae20(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar8);
    func_0x00010c2bc3a0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar5 = puStack_88[5];
    func_0x00010c135080(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b70a0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar5);
    if (0.0 < (double)puStack_c8[3]) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x48);
      func_0x00010c0b52c0();
      if (iVar1 != 0) {
        func_0x00010c0b52c0(*(undefined8 *)(param_1 + 0x48));
      }
      puVar8 = PTR_PTR_1126b8010;
      _objc_alloc(PTR_PTR_1126b8010);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0003a0(puVar8);
      _objc_release(puVar6);
      func_0x00010c2b5b20(puVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar8);
    }
    puVar8 = PTR_PTR_1126bfef0;
    _objc_alloc(PTR_PTR_1126bfef0);
    puVar6 = PTR_PTR_1126b2c80;
    func_0x00010c28fba0(PTR_PTR_1126b2c80);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010bf21f60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c029760(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
  __Block_object_dispose(&uStack_d0,8);
  __Block_object_dispose(&uStack_b0,8);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1062f7438; end: 1062f744f;  */

void FUN_1062f7438(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1062f7450; end: 1062f74d3;  */

void FUN_1062f7450(long param_1,undefined8 param_2)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1062f74d4;
  puStack_20 = &UNK_11091bf18;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1062f750c;
  puStack_58 = &UNK_11091bf48;
  uStack_48 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = *(undefined8 *)(param_1 + 0x30);
  uStack_18 = uStack_50;
  func_0x00010c0bec20(param_2,param_2,&puStack_38,&puStack_70);
  return;
}



/* Entry: 1062f74d4; end: 1062f750b;  */

void FUN_1062f74d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062f750c; end: 1062f7587;  */

void FUN_1062f750c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(*(long *)(param_3 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x28) + 8) + 0x18) = param_1;
  *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x30) + 8) + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1062f7588; end: 1062f76a3; -[SCPlaylistAdaptiveContentFetcher _reloadPrefetchConfig:] */

void FUN_1062f7588(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x1062f7628;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1062f76a4; end: 1062f779f; -[SCPlaylistAdaptiveContentFetcher .cxx_destruct] */

void FUN_1062f76a4(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1062f77a0; end: 1062f77a7; -[SCPlaylistPrefetcherPluginPendingPrefetch request] */

undefined8 FUN_1062f77a0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1062f77a8; end: 1062f77d7; -[SCPlaylistPrefetcherPluginPendingPrefetch setRequest:] */

void FUN_1062f77a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062f77d8; end: 1062f77df; -[SCPlaylistPrefetcherPluginPendingPrefetch item] */

undefined8 FUN_1062f77d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1062f77e0; end: 1062f780f; -[SCPlaylistPrefetcherPluginPendingPrefetch setItem:] */

void FUN_1062f77e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062f7810; end: 1062f783f; -[SCPlaylistPrefetcherPluginPendingPrefetch .cxx_destruct] */

void FUN_1062f7810(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1062f7840; end: 1062f7b43; -[SCPlaylistPrefetcherPlugin initWithConfigProvider:mediaResolver:prefetchProvider:viewSource:prefetchPluginConfig:playlistAdaptiveContentFetcher:] */

undefined8 *
FUN_1062f7840(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126f0e10;
  puVar2 = &uStack_70;
  uStack_70 = param_2;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar3 = puVar2[2];
    puVar2[2] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar2[1];
    puVar2[1] = param_6;
    _objc_release(uVar3);
    puVar2[0xf] = param_7;
    puVar4 = PTR_PTR_1126c99c0;
    _objc_alloc_init();
    uVar3 = puVar2[0x10];
    puVar2[0x10] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar3 = puVar2[3];
    puVar2[3] = puVar4;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = puVar2[0xb];
    puVar2[0xb] = param_9;
    _objc_release(uVar3);
    uVar3 = param_4;
    func_0x00010bf1f440();
    bVar1 = false;
    *(char *)(puVar2 + 10) = (char)uVar3;
    if ((int)uVar3 != 0) {
      bVar1 = puVar2[0xb] != 0;
    }
    *(bool *)(puVar2 + 10) = bVar1;
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = puVar2[0xe];
    puVar2[0xe] = puVar4;
    _objc_release(uVar3);
    uVar3 = param_4;
    func_0x00010c067f00();
    puVar2[4] = (long)(int)uVar3;
    uVar3 = param_4;
    func_0x00010c067f00();
    puVar2[5] = (long)(int)uVar3;
    *(undefined1 *)(puVar2 + 6) = 0;
    uVar3 = param_4;
    func_0x00010bf1f440();
    *(char *)((long)puVar2 + 0x31) = (char)uVar3;
    puVar2[7] = 0;
    _objc_retain(param_8);
    uVar3 = puVar2[9];
    puVar2[9] = param_8;
    _objc_release(uVar3);
    lVar5 = puVar2[9];
    func_0x00010bf019e0();
    if (lVar5 != 0) {
      puStack_88 = &uStack_90;
      uStack_90 = 0;
      uStack_80 = 0x2020000000;
      uStack_78 = 0;
      uVar3 = puVar2[9];
      func_0x00010bf019c0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      param_1 = 1.60807493534087e-314;
      func_0x00010bf980c0();
      _objc_release(uVar3);
      *(undefined1 *)(puVar2 + 10) = *(undefined1 *)(puStack_88 + 3);
      __Block_object_dispose(&uStack_90,8);
    }
    if (*(char *)(puVar2 + 10) == '\x01') {
      uVar6 = puVar2[9];
      func_0x00010bf65ee0();
      puVar2[7] = uVar6 & 0xffffffff;
    }
    _CACurrentMediaTime();
    puVar2[8] = param_1 + -120.0;
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar2;
}



/* Entry: 1062f7b44; end: 1062f7b67;  */

void FUN_1062f7b44(long param_1,int param_2,undefined8 param_3,undefined1 *param_4)

{
  if (*(long *)(param_1 + 0x28) == (long)param_2) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
    *param_4 = 1;
  }
  return;
}



/* Entry: 1062f7b68; end: 1062f7b6f; -[SCPlaylistPrefetcherPlugin isACFEnabled] */

undefined1 FUN_1062f7b68(long param_1)

{
  return *(undefined1 *)(param_1 + 0x50);
}



/* Entry: 1062f7b70; end: 1062f7c97; -[SCPlaylistPrefetcherPlugin dealloc] */

void FUN_1062f7b70(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  plVar3 = &lStack_120;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bfa3180(*(undefined8 *)(param_1 + 0x58));
  if (*(char *)(param_1 + 0x31) == '\x01') {
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    lVar1 = *(long *)(param_1 + 0x70);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    param_3 = &uStack_110;
    lVar2 = lVar1;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar4 = *plStack_100;
      do {
        lVar5 = 0;
        do {
          if (*plStack_100 != lVar4) {
            _objc_enumerationMutation(lVar1);
          }
          func_0x00010bf2dba0(*(undefined8 *)(lStack_108 + lVar5 * 8));
          lVar5 = lVar5 + 1;
        } while (lVar2 != lVar5);
        param_3 = &uStack_110;
        lVar2 = lVar1;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(lVar1);
  }
  puStack_118 = PTR_PTR_1126f0e10;
  lStack_120 = param_1;
  _objc_msgSendSuper2(&lStack_120,PTR_s_dealloc_112525b20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)((undefined1 *)((long)plVar3 + 0x60),param_3);
  return;
}



/* Entry: 1062f7c98; end: 1062f7ca3; -[SCPlaylistPrefetcherPlugin setPlaylistItemController:] */

void FUN_1062f7c98(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 1062f7ca4; end: 1062f7d83; -[SCPlaylistPrefetcherPlugin registeredEventsForOperaSession] */

void FUN_1062f7ca4(double param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined8 in_x4;
  undefined8 uVar11;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  ppuVar9 = &puStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2338;
  func_0x00010bfe8ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2338;
  puStack_50 = puVar1;
  func_0x00010c0c6900();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2330;
  puStack_48 = puVar2;
  func_0x00010c29ef00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = 3;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar9);
  _objc_retain(lVar10);
  _objc_retain(in_x4);
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c29ef00(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = (undefined1 *)ppuVar9;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)puVar5 == 0) {
    puVar2 = PTR_PTR_1126b2338;
    func_0x00010bfe8ca0(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = (undefined1 *)ppuVar9;
    func_0x00010c0720c0();
    if (((ulong)puVar5 & 1) == 0) {
      _objc_release(puVar2);
    }
    else {
      lVar6 = lVar10;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c2827c0();
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(puVar2);
      if (lVar8 != 1) goto LAB_1062f7fac;
    }
    if ((puVar1[0x30] & 1) == 0) {
      if (*(long *)(puVar1 + 0x38) != 0) {
        _CACurrentMediaTime();
        param_1 = (param_1 - *(double *)(puVar1 + 0x40)) * 1000.0;
        if (param_1 <= (double)*(long *)(puVar1 + 0x38)) goto LAB_1062f7fac;
      }
      _CACurrentMediaTime();
      *(double *)(puVar1 + 0x40) = param_1;
      puVar1[0x30] = 1;
      if (puVar1[0x50] == '\x01') {
        uVar11 = *(undefined8 *)(puVar1 + 0x58);
        puVar2 = puVar1 + 0x60;
        _objc_loadWeakRetained(puVar2);
        func_0x00010c27c100(uVar11);
        _objc_release(puVar2);
        puVar1[0x30] = 0;
      }
      else {
        puVar2 = puVar1;
        func_0x00010bdf1160();
        _objc_retainAutoreleasedReturnValue();
        puVar1[0x30] = 0;
        _objc_initWeak(auStack_a8,puVar1);
        uVar11 = *(undefined8 *)(puVar1 + 0x18);
        _objc_copyWeak(auStack_b0,auStack_a8);
        _objc_retain(puVar2);
        func_0x00010c0f7fc0(uVar11);
        _objc_release(puVar2);
        _objc_destroyWeak(auStack_b0);
        _objc_destroyWeak(auStack_a8);
        _objc_release(puVar2);
      }
    }
  }
  else {
    func_0x00010bfa3180(*(undefined8 *)(puVar1 + 0x58));
  }
LAB_1062f7fac:
  _objc_release(in_x4);
  _objc_release(lVar10);
  _objc_release(ppuVar9);
  return;
}



/* Entry: 1062f7d84; end: 1062f7ffb; -[SCPlaylistPrefetcherPlugin operaViewDidSendEvent:page:params:] */

void FUN_1062f7d84(double param_1,long param_2,undefined8 param_3,ulong param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c29ef00(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if ((int)uVar2 == 0) {
    puVar1 = PTR_PTR_1126b2338;
    func_0x00010bfe8ca0(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c0720c0();
    if ((uVar2 & 1) == 0) {
      _objc_release(puVar1);
    }
    else {
      lVar3 = param_5;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c2827c0();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(puVar1);
      if (lVar5 != 1) goto LAB_1062f7fac;
    }
    if ((*(byte *)(param_2 + 0x30) & 1) == 0) {
      if (*(long *)(param_2 + 0x38) != 0) {
        _CACurrentMediaTime();
        param_1 = (param_1 - *(double *)(param_2 + 0x40)) * 1000.0;
        if (param_1 <= (double)*(long *)(param_2 + 0x38)) goto LAB_1062f7fac;
      }
      _CACurrentMediaTime();
      *(double *)(param_2 + 0x40) = param_1;
      *(undefined1 *)(param_2 + 0x30) = 1;
      if (*(char *)(param_2 + 0x50) == '\x01') {
        uVar6 = *(undefined8 *)(param_2 + 0x58);
        lVar3 = param_2 + 0x60;
        _objc_loadWeakRetained(lVar3);
        func_0x00010c27c100(uVar6);
        _objc_release(lVar3);
        *(undefined1 *)(param_2 + 0x30) = 0;
      }
      else {
        lVar3 = param_2;
        func_0x00010bdf1160();
        _objc_retainAutoreleasedReturnValue();
        *(undefined1 *)(param_2 + 0x30) = 0;
        _objc_initWeak(auStack_58,param_2);
        uVar6 = *(undefined8 *)(param_2 + 0x18);
        _objc_copyWeak(auStack_60,auStack_58);
        _objc_retain(lVar3);
        func_0x00010c0f7fc0(uVar6);
        _objc_release(lVar3);
        _objc_destroyWeak(auStack_60);
        _objc_destroyWeak(auStack_58);
        _objc_release(lVar3);
      }
    }
  }
  else {
    func_0x00010bfa3180(*(undefined8 *)(param_2 + 0x58));
  }
LAB_1062f7fac:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1062f7ffc; end: 1062f802f;  */

void FUN_1062f7ffc(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec11e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062f8030; end: 1062f837b; -[SCPlaylistPrefetcherPlugin _createPendingPrefetches] */

void FUN_1062f8030(undefined *param_1,undefined8 param_2)

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
  long lVar10;
  long lStack_68;
  
  puVar1 = param_1 + 0x60;
  _objc_loadWeakRetained();
  puVar2 = puVar1;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  }
  else {
    puVar3 = param_1;
    func_0x00010be76fc0();
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar4 = puVar2;
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf5ee40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bfecde0(puVar4,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = puVar2;
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf529e0();
    _objc_release(puVar4);
    if (puVar6 < puVar5) {
      lStack_68 = 0;
      do {
        puVar4 = puVar2;
        func_0x00010bfcf800();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        puVar4 = param_1 + 0x60;
        _objc_loadWeakRetained(puVar4);
        func_0x00010c109b00();
        _objc_release(puVar4);
        puVar4 = puVar2;
        func_0x00010bf5ee40();
        _objc_retainAutoreleasedReturnValue();
        if (puVar5 == puVar4) {
          puVar7 = puVar5;
          func_0x00010c084fc0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar5;
          func_0x00010bf5f0a0(puVar5);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar7;
          func_0x00010bfecde0(puVar7,param_2,puVar8);
          _objc_release(puVar8);
          _objc_release(puVar7);
        }
        else {
          puVar9 = (undefined *)0x0;
        }
        _objc_release(puVar4);
        puVar4 = puVar5;
        func_0x00010c084fc0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar4;
        func_0x00010bf529e0();
        _objc_release(puVar4);
        lVar10 = lStack_68;
        if (puVar9 < puVar7) {
          do {
            puVar4 = puVar5;
            func_0x00010c084fc0();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar4;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar4);
            if (puVar7 != (undefined *)0x0) {
              puVar4 = PTR_PTR_1126c99d0;
              _objc_alloc_init(PTR_PTR_1126c99d0);
              puVar8 = param_1;
              func_0x00010be775a0(param_1,param_2,puVar7,lVar10);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1ebac0(puVar4,param_2,puVar8);
              _objc_release(puVar8);
              func_0x00010c1b5d40(puVar4,param_2,puVar7);
              func_0x00010befa120(puVar1,param_2,puVar4);
              puVar8 = puVar1;
              func_0x00010bf529e0();
              _objc_release(puVar4);
              _objc_release(puVar7);
              if (puVar3 <= puVar8) {
                _objc_release(puVar5);
                goto LAB_1062f8350;
              }
            }
            puVar9 = puVar9 + 1;
            puVar4 = puVar5;
            func_0x00010c084fc0();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar4;
            func_0x00010bf529e0();
            _objc_release(puVar4);
            lVar10 = lVar10 + 1;
          } while (puVar9 < puVar7);
        }
        _objc_release(puVar5);
        puVar6 = puVar6 + 1;
        puVar4 = puVar2;
        func_0x00010bfcf800();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010bf529e0();
        _objc_release(puVar4);
        lStack_68 = lStack_68 + 1;
      } while (puVar6 < puVar5);
    }
  }
LAB_1062f8350:
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1062f837c; end: 1062f877f; -[SCPlaylistPrefetcherPlugin _startPrefetch:] */

void FUN_1062f837c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x18));
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
  _objc_release(uVar3);
  lVar4 = *(long *)(param_1 + 0x68);
  func_0x00010bf529e0();
  puVar2 = PTR_s_startPrefetchForPlaylistItem_com_112671a20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar4 != 0) {
    do {
      uVar5 = *(ulong *)(param_1 + 0x70);
      func_0x00010bf529e0();
      if (*(ulong *)(param_1 + 0x20) <= uVar5) break;
      lVar6 = *(long *)(param_1 + 0x68);
      func_0x00010c103880();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x70);
      lVar4 = lVar6;
      func_0x00010c0840e0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar4;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dff20(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar7);
      _objc_release(lVar4);
      _objc_initWeak(auStack_78,param_1);
      lVar4 = lVar6;
      func_0x00010c134680();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar4 == 0) {
        uVar5 = *(ulong *)(param_1 + 8);
        _objc_opt_respondsToSelector(uVar5,puVar2);
        if ((uVar5 & 1) != 0) {
          lVar4 = lVar6;
          func_0x00010c0840e0();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar4;
          func_0x00010c27dd80();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          FUN_1062f8ad4();
          if ((int)lVar8 == 0) {
            _objc_release(lVar7);
            _objc_release(lVar4);
          }
          else {
            uVar5 = *(ulong *)(param_1 + 0x48);
            func_0x00010bf91620();
            _objc_release(lVar7);
            _objc_release(lVar4);
            if ((uVar5 & 1) == 0) goto LAB_1062f85d8;
          }
          lVar4 = lVar6;
          func_0x00010c0840e0();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar4;
          func_0x00010bfce400();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar7);
          _objc_release(lVar4);
          if (lVar8 != 0) {
            lVar4 = *(long *)(param_1 + 8);
            lVar7 = lVar6;
            func_0x00010c0840e0(lVar6);
            _objc_retainAutoreleasedReturnValue();
            _objc_copyWeak(auStack_b0,auStack_78);
            _objc_retain(lVar6);
            func_0x00010c24ffe0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar7);
            lVar7 = lVar6;
            puVar9 = auStack_b0;
            goto LAB_1062f8518;
          }
          uVar3 = *(undefined8 *)(param_1 + 0x80);
          lVar4 = lVar6;
          func_0x00010c0840e0(lVar6);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar4;
          func_0x00010c27dd80();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = *(long *)(param_1 + 0x78);
          func_0x00010baf2e2c(lVar8);
          _objc_retainAutoreleasedReturnValue();
          FUN_1062f8b54(uVar3,lVar7,lVar8,1);
          goto LAB_1062f8560;
        }
      }
      else {
        lVar4 = *(long *)(param_1 + 0x10);
        lVar7 = lVar6;
        func_0x00010c134680(lVar6);
        _objc_retainAutoreleasedReturnValue();
        puStack_a8 = puVar1;
        uStack_a0 = 0xc2000000;
        pcStack_98 = FUN_1062f8780;
        puStack_90 = &UNK_11091bdf8;
        _objc_copyWeak(auStack_80,auStack_78);
        _objc_retain(lVar6);
        lStack_88 = lVar6;
        func_0x00010c13ace0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar7);
        lVar7 = lStack_88;
        puVar9 = auStack_80;
LAB_1062f8518:
        _objc_release(lVar7);
        _objc_destroyWeak(puVar9);
        if (lVar4 != 0) {
          uVar3 = *(undefined8 *)(param_1 + 0x70);
          lVar7 = lVar6;
          func_0x00010c0840e0(lVar6);
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar3);
LAB_1062f8560:
          _objc_release(lVar8);
          _objc_release(lVar7);
          _objc_release(lVar4);
        }
      }
LAB_1062f85d8:
      _objc_destroyWeak(auStack_78);
      _objc_release(lVar6);
      lVar4 = *(long *)(param_1 + 0x68);
      func_0x00010bf529e0();
    } while (lVar4 != 0);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1062f8780; end: 1062f87e7;  */

void FUN_1062f8780(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6ad40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062f87e8; end: 1062f88bf; -[SCPlaylistPrefetcherPlugin _onPrefetchCompletion:] */

void FUN_1062f87e8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1062f88c0; end: 1062f88f3;  */

void FUN_1062f88c0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde2880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062f88f4; end: 1062f8987; -[SCPlaylistPrefetcherPlugin _completeAndStartNextRequest:] */

void FUN_1062f88f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010bf0ae40(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  uVar2 = param_3;
  func_0x00010c0840e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar1 = uVar2;
  func_0x00010be36bc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bec11f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__startPrefetch__11258de20,*(undefined8 *)(param_1 + 0x68));
  return;
}



/* Entry: 1062f8988; end: 1062f89cb; -[SCPlaylistPrefetcherPlugin _prefetchAmount] */

undefined8 FUN_1062f8988(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  _objc_opt_respondsToSelector(uVar1,PTR_s_prefetchAmount_11261f6e0);
  if ((uVar1 & 1) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010c107310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_prefetchAmount_11261f6e0);
    return uVar2;
  }
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1062f89cc; end: 1062f8a53; -[SCPlaylistPrefetcherPlugin _prefetchRequestFromItem:gestureDistance:] */

void FUN_1062f89cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 8);
  _objc_opt_respondsToSelector(uVar1,PTR_s_prefetchRequestFromPlaylistItem__11261f968);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c107d20(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1062f8a54; end: 1062f8ad3; -[SCPlaylistPrefetcherPlugin .cxx_destruct] */

void FUN_1062f8a54(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_destroyWeak(param_1 + 0x60);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1062f8ad4; end: 1062f8adf;  */

void FUN_1062f8ad4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfda7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_hasPrefix__1125d43b0,&PTR____CFConstantStringClassReference_110e49ef8);
  return;
}



/* Entry: 1062f8ae0; end: 1062f8b53; -[SCGraphenePlaylistPrefetcherMetric2 init] */

undefined1 * FUN_1062f8ae0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f0e18;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1062f8b54; end: 1062f8d83;  */

/* WARNING: Removing unreachable block (ram,0x0001062f95dc) */

undefined *
FUN_1062f8b54(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined *puStack_4d0;
  undefined *puStack_4c8;
  undefined8 *puStack_4c0;
  undefined *puStack_4b8;
  undefined8 ***pppuStack_4b0;
  code *pcStack_4a8;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 *puStack_480;
  undefined8 auStack_478 [2];
  char cStack_461;
  undefined8 auStack_460 [2];
  char cStack_449;
  long lStack_448;
  undefined8 *puStack_440;
  undefined8 *puStack_438;
  undefined8 *puStack_430;
  undefined *puStack_428;
  undefined8 *puStack_420;
  undefined *puStack_418;
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 auStack_3d8 [2];
  char cStack_3c1;
  undefined8 auStack_3c0 [2];
  char cStack_3a9;
  long lStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  undefined *puStack_390;
  undefined8 *puStack_388;
  undefined8 *puStack_380;
  undefined *puStack_378;
  undefined8 ***pppuStack_370;
  code *pcStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined1 *puStack_348;
  undefined8 auStack_340 [3];
  undefined1 auStack_328 [24];
  undefined8 auStack_310 [2];
  char cStack_2f9;
  long lStack_2f8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  puVar13 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar6 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar16 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f375f76;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f375f76;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_11091bfd8;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar15 = 0;
    puVar6 = auStack_78;
    puVar13 = param_4;
    do {
      if ((&cStack_49)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  puVar11 = &uStack_120;
  pcStack_a8 = FUN_1062f8d84;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar10 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar6;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  plVar16 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar16 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f375f76;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_100;
    func_0x00010002b838(auStack_100,puVar3);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
    puVar7 = &UNK_11091c028;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    puVar10 = puVar11;
    puVar13 = puVar2;
    puVar6 = &uStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar10 = puVar11;
      puVar13 = puVar2;
      puVar6 = &uStack_120;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar5 = puVar3;
  __Unwind_Resume();
  puVar11 = &uStack_1a0;
  pcStack_128 = FUN_1062f8ef8;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puVar2 = puVar10;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar6;
  plStack_148 = plVar16;
  puStack_140 = puVar3;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_b0;
  _objc_retain(puVar7);
  plVar16 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar16 = *(long **)(puVar5 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f375f76;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x23 = auStack_180;
    func_0x00010002b838(auStack_180,puVar1);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x00010007e1e8(&uStack_1a0,auStack_180,&lStack_168,1);
    puVar4 = &UNK_11091c078;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    puVar2 = puVar11;
    puVar13 = puVar10;
    puVar6 = &uStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      puVar2 = puVar11;
      puVar13 = puVar10;
      puVar6 = &uStack_1a0;
    }
  }
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar5 = puVar1;
  __Unwind_Resume();
  puVar11 = &uStack_220;
  pcStack_1a8 = FUN_1062f906c;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  puVar10 = puVar2;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar6;
  plStack_1c8 = plVar16;
  puStack_1c0 = puVar1;
  puStack_1b8 = puVar7;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(puVar4);
  plVar16 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar16 = *(long **)(puVar5 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f375f76;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x23 = auStack_200;
    func_0x00010002b838(auStack_200,puVar1);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x00010007e1e8(&uStack_220,auStack_200,&lStack_1e8,1);
    puVar3 = &UNK_11091c0c8;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x00010007e5dc(&puStack_208);
    puVar10 = puVar11;
    puVar13 = puVar2;
    puVar6 = &uStack_220;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      puVar10 = puVar11;
      puVar13 = puVar2;
      puVar6 = &uStack_220;
    }
  }
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar5 = puVar1;
  __Unwind_Resume();
  puVar11 = &uStack_2a0;
  pcStack_228 = FUN_1062f91e0;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar3;
  puVar2 = puVar10;
  puStack_260 = unaff_x24;
  puStack_258 = unaff_x23;
  puStack_250 = puVar6;
  plStack_248 = plVar16;
  puStack_240 = puVar1;
  puStack_238 = puVar4;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(puVar3);
  if (puVar5 != (undefined *)0x0) {
    plVar16 = *(long **)(puVar5 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f375f76;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_280,puVar1);
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    func_0x00010007e1e8(&uStack_2a0,auStack_280,&lStack_268,1);
    puVar7 = &UNK_11091c118;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    puStack_288 = (undefined1 *)&uStack_2a0;
    func_0x00010007e5dc(&puStack_288);
    puVar2 = puVar11;
    puVar13 = puVar10;
    if (cStack_269 < '\0') {
      __ZdlPv(auStack_280[0]);
      puVar2 = puVar11;
      puVar13 = puVar10;
    }
  }
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  puVar11 = &uStack_360;
  pcStack_2a8 = FUN_1062f9354;
  lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar7;
  puVar6 = puVar2;
  puVar10 = puVar13;
  pppuStack_2b0 = &pppuStack_230;
  _objc_retain(puVar7);
  _objc_retain(puVar2);
  _objc_retain(puVar13);
  if (puVar1 != (undefined *)0x0) {
    plVar16 = *(long **)(puVar1 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f375f76;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_340,puVar1);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f375f76;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar6 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_328,puVar6);
    _objc_retain(puVar13);
    if (puVar13 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f375f76;
    }
    else {
      _objc_retainAutorelease(puVar13);
      puVar6 = puVar13;
      func_0x00010bdc3520(puVar13);
    }
    _objc_release(puVar13);
    func_0x00010002b838(auStack_310,puVar6);
    uStack_360 = 0;
    uStack_358 = 0;
    uStack_350 = 0;
    func_0x00010007e1e8(&uStack_360,auStack_340,&lStack_2f8,3);
    puVar3 = &UNK_11091c168;
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_11091c168,&uStack_360,param_5);
    puStack_348 = (undefined1 *)&uStack_360;
    func_0x00010007e5dc(&puStack_348);
    lVar15 = 0;
    puVar6 = puVar11;
    puVar10 = param_5;
    do {
      if ((&cStack_2f9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_310 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      unaff_x24 = &uStack_360;
    } while (lVar15 != -0x48);
  }
  _objc_release(puVar13);
  _objc_release(puVar2);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2f8) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(puVar13);
  puVar11 = auStack_340;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar11);
  _objc_release(puVar13);
  _objc_release(puVar2);
  _objc_release(puVar7);
  puVar5 = puVar1;
  __Unwind_Resume();
  pcStack_368 = FUN_1062f9614;
  lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar3;
  puVar12 = puVar6;
  puVar14 = puVar10;
  puStack_3a0 = unaff_x24;
  puStack_398 = puVar11;
  puStack_390 = puVar1;
  puStack_388 = puVar13;
  puStack_380 = puVar2;
  puStack_378 = puVar7;
  pppuStack_370 = &pppuStack_2b0;
  _objc_retain(puVar3);
  _objc_retain(puVar6);
  puVar2 = (undefined8 *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar16 = *(long **)(puVar5 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f375f76;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x24 = auStack_3d8;
    func_0x00010002b838(auStack_3d8,puVar1);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f375f76;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar2 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_3c0,puVar2);
    uStack_3f8 = 0;
    uStack_3f0 = 0;
    uStack_3e8 = 0;
    func_0x00010007e1e8(&uStack_3f8,auStack_3d8,&lStack_3a8,2);
    puVar4 = &UNK_11091c1b8;
    puVar11 = &uStack_3f8;
    puVar12 = &uStack_3f8;
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_11091c1b8,puVar12,puVar10);
    puStack_3e0 = puVar11;
    func_0x00010007e5dc(&puStack_3e0);
    lVar15 = 0;
    puVar2 = auStack_3d8;
    puVar14 = puVar10;
    do {
      if ((&cStack_3a9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3c0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(puVar6);
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3a8) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  if (cStack_3c1 < '\0') {
    __ZdlPv(auStack_3d8[0]);
  }
  _objc_release(puVar6);
  _objc_release(puVar3);
  puVar7 = puVar1;
  __Unwind_Resume();
  pcStack_408 = FUN_1062f9844;
  lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = puVar12;
  puStack_440 = unaff_x24;
  puStack_438 = puVar11;
  puStack_430 = puVar2;
  puStack_428 = puVar1;
  puStack_420 = puVar6;
  puStack_418 = puVar3;
  pppuStack_410 = &pppuStack_370;
  _objc_retain(puVar4);
  _objc_retain(puVar12);
  if (puVar7 != (undefined *)0x0) {
    plVar16 = *(long **)(puVar7 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f375f76;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_478,puVar1);
    _objc_retain(puVar12);
    if (puVar12 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f375f76;
    }
    else {
      _objc_retainAutorelease(puVar12);
      puVar2 = puVar12;
      func_0x00010bdc3520(puVar12);
    }
    _objc_release(puVar12);
    func_0x00010002b838(auStack_460,puVar2);
    uStack_498 = 0;
    uStack_490 = 0;
    uStack_488 = 0;
    func_0x00010007e1e8(&uStack_498,auStack_478,&lStack_448,2);
    puVar13 = &uStack_498;
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_11091c208,puVar13,puVar14);
    puStack_480 = &uStack_498;
    func_0x00010007e5dc(&puStack_480);
    lVar15 = 0;
    do {
      if ((&cStack_449)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_460 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(puVar12);
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_448) {
    ___stack_chk_fail();
    _objc_release(puVar12);
    if (cStack_461 < '\0') {
      __ZdlPv(auStack_478[0]);
    }
    _objc_release(puVar12);
    _objc_release(puVar4);
    __Unwind_Resume();
    ppuVar8 = &puStack_4d0;
    pcStack_4a8 = FUN_1062f9a74;
    puStack_4c0 = puVar12;
    puStack_4b8 = puVar4;
    pppuStack_4b0 = &pppuStack_410;
    _objc_retain(puVar13);
    puStack_4c8 = PTR_PTR_1126f0e20;
    puStack_4d0 = puVar1;
    _objc_msgSendSuper2(&puStack_4d0,PTR_s_init_1125d9248);
    if (ppuVar8 != (undefined **)0x0) {
      _objc_retain(puVar13);
      uVar9 = *(undefined8 *)((long)ppuVar8 + 8);
      *(undefined8 **)((long)ppuVar8 + 8) = puVar13;
      _objc_release(uVar9);
    }
    _objc_release(puVar13);
    return (undefined *)ppuVar8;
  }
  return puVar1;
}



/* Entry: 1062f8d84; end: 1062f8ef7;  */

/* WARNING: Removing unreachable block (ram,0x0001062f95dc) */

undefined *
FUN_1062f8d84(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  undefined8 *unaff_x24;
  undefined *puStack_430;
  undefined *puStack_428;
  undefined8 *puStack_420;
  undefined *puStack_418;
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 auStack_3d8 [2];
  char cStack_3c1;
  undefined8 auStack_3c0 [2];
  char cStack_3a9;
  long lStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  undefined8 *puStack_390;
  undefined *puStack_388;
  undefined8 *puStack_380;
  undefined *puStack_378;
  undefined8 ***pppuStack_370;
  code *pcStack_368;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 *puStack_340;
  undefined8 auStack_338 [2];
  char cStack_321;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined *puStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [3];
  undefined1 auStack_288 [24];
  undefined8 auStack_270 [2];
  char cStack_259;
  long lStack_258;
  undefined8 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f375f76;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_11091c028;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar3 = puVar5;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = puVar5;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar10 = &uStack_100;
  pcStack_88 = FUN_1062f8ef8;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar5 = puVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f375f76;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar6 = &UNK_11091c078;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar5 = puVar10;
    param_4 = puVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar5 = puVar10;
      param_4 = puVar3;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar10 = &uStack_180;
  pcStack_108 = FUN_1062f906c;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar6;
  puVar3 = puVar5;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar6);
  if (puVar2 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar2 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f375f76;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    puVar1 = &UNK_11091c0c8;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar3 = puVar10;
    param_4 = puVar5;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar3 = puVar10;
      param_4 = puVar5;
    }
  }
  puVar2 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_148) {
    ___stack_chk_fail();
    _objc_release(puVar6);
    _objc_release(puVar6);
    __Unwind_Resume();
    puVar10 = &uStack_200;
    pcStack_188 = FUN_1062f91e0;
    lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar6 = puVar1;
    puVar5 = puVar3;
    pppuStack_190 = &ppuStack_110;
    _objc_retain(puVar1);
    if (puVar2 != (undefined *)0x0) {
      plVar14 = *(long **)(puVar2 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f375f76;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_1e0,puVar2);
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
      puVar6 = &UNK_11091c118;
      (**(code **)(*plVar14 + 0x18))(plVar14);
      puStack_1e8 = (undefined1 *)&uStack_200;
      func_0x00010007e5dc(&puStack_1e8);
      puVar5 = puVar10;
      param_4 = puVar3;
      if (cStack_1c9 < '\0') {
        __ZdlPv(auStack_1e0[0]);
        puVar5 = puVar10;
        param_4 = puVar3;
      }
    }
    puVar2 = puVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(puVar1);
    _objc_release(puVar1);
    __Unwind_Resume();
    puVar11 = &uStack_2c0;
    pcStack_208 = FUN_1062f9354;
    lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = puVar6;
    puVar3 = puVar5;
    puVar10 = param_4;
    pppuStack_210 = &pppuStack_190;
    _objc_retain(puVar6);
    _objc_retain(puVar5);
    _objc_retain(param_4);
    if (puVar2 != (undefined *)0x0) {
      plVar14 = *(long **)(puVar2 + 8);
      _objc_retain(puVar6);
      if (puVar6 == (undefined *)0x0) {
        puVar1 = &UNK_10f375f76;
      }
      else {
        puVar1 = puVar6;
        _objc_retainAutorelease(puVar6);
        func_0x00010bdc3520();
      }
      _objc_release(puVar6);
      func_0x00010002b838(auStack_2a0,puVar1);
      _objc_retain(puVar5);
      if (puVar5 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f375f76;
      }
      else {
        _objc_retainAutorelease(puVar5);
        puVar3 = puVar5;
        func_0x00010bdc3520(puVar5);
      }
      _objc_release(puVar5);
      func_0x00010002b838(auStack_288,puVar3);
      _objc_retain(param_4);
      if (param_4 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f375f76;
      }
      else {
        _objc_retainAutorelease(param_4);
        puVar3 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x00010002b838(auStack_270,puVar3);
      uStack_2c0 = 0;
      uStack_2b8 = 0;
      uStack_2b0 = 0;
      func_0x00010007e1e8(&uStack_2c0,auStack_2a0,&lStack_258,3);
      puVar1 = &UNK_11091c168;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11091c168,&uStack_2c0,param_5);
      puStack_2a8 = (undefined1 *)&uStack_2c0;
      func_0x00010007e5dc(&puStack_2a8);
      lVar15 = 0;
      puVar3 = puVar11;
      puVar10 = param_5;
      do {
        if ((&cStack_259)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_270 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
        unaff_x24 = &uStack_2c0;
      } while (lVar15 != -0x48);
    }
    _objc_release(param_4);
    _objc_release(puVar5);
    puVar2 = puVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_258) {
      ___stack_chk_fail();
      _objc_release(param_4);
      puVar11 = auStack_2a0;
      do {
        unaff_x24 = unaff_x24 + -3;
      } while (unaff_x24 != puVar11);
      _objc_release(param_4);
      _objc_release(puVar5);
      _objc_release(puVar6);
      puVar4 = puVar2;
      __Unwind_Resume();
      pcStack_2c8 = FUN_1062f9614;
      lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar9 = puVar1;
      puVar12 = puVar3;
      puVar13 = puVar10;
      puStack_300 = unaff_x24;
      puStack_2f8 = puVar11;
      puStack_2f0 = puVar2;
      puStack_2e8 = param_4;
      puStack_2e0 = puVar5;
      puStack_2d8 = puVar6;
      pppuStack_2d0 = &pppuStack_210;
      _objc_retain(puVar1);
      _objc_retain(puVar3);
      puVar5 = (undefined8 *)0x0;
      if (puVar4 != (undefined *)0x0) {
        plVar14 = *(long **)(puVar4 + 8);
        _objc_retain(puVar1);
        if (puVar1 == (undefined *)0x0) {
          puVar2 = &UNK_10f375f76;
        }
        else {
          puVar2 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
        }
        _objc_release(puVar1);
        unaff_x24 = auStack_338;
        func_0x00010002b838(auStack_338,puVar2);
        _objc_retain(puVar3);
        if (puVar3 == (undefined8 *)0x0) {
          puVar5 = (undefined8 *)&UNK_10f375f76;
        }
        else {
          _objc_retainAutorelease(puVar3);
          puVar5 = puVar3;
          func_0x00010bdc3520(puVar3);
        }
        _objc_release(puVar3);
        func_0x00010002b838(auStack_320,puVar5);
        uStack_358 = 0;
        uStack_350 = 0;
        uStack_348 = 0;
        func_0x00010007e1e8(&uStack_358,auStack_338,&lStack_308,2);
        puVar9 = &UNK_11091c1b8;
        puVar11 = &uStack_358;
        puVar12 = &uStack_358;
        (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11091c1b8,puVar12,puVar10);
        puStack_340 = puVar11;
        func_0x00010007e5dc(&puStack_340);
        lVar15 = 0;
        puVar5 = auStack_338;
        puVar13 = puVar10;
        do {
          if ((&cStack_309)[lVar15] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_320 + lVar15));
          }
          lVar15 = lVar15 + -0x18;
        } while (lVar15 != -0x30);
      }
      _objc_release(puVar3);
      puVar2 = puVar1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_308) {
        ___stack_chk_fail();
        _objc_release(puVar3);
        if (cStack_321 < '\0') {
          __ZdlPv(auStack_338[0]);
        }
        _objc_release(puVar3);
        _objc_release(puVar1);
        puVar6 = puVar2;
        __Unwind_Resume();
        pcStack_368 = FUN_1062f9844;
        lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar10 = puVar12;
        puStack_3a0 = unaff_x24;
        puStack_398 = puVar11;
        puStack_390 = puVar5;
        puStack_388 = puVar2;
        puStack_380 = puVar3;
        puStack_378 = puVar1;
        pppuStack_370 = &pppuStack_2d0;
        _objc_retain(puVar9);
        _objc_retain(puVar12);
        if (puVar6 != (undefined *)0x0) {
          plVar14 = *(long **)(puVar6 + 8);
          _objc_retain(puVar9);
          if (puVar9 == (undefined *)0x0) {
            puVar1 = &UNK_10f375f76;
          }
          else {
            puVar1 = puVar9;
            _objc_retainAutorelease(puVar9);
            func_0x00010bdc3520();
          }
          _objc_release(puVar9);
          func_0x00010002b838(auStack_3d8,puVar1);
          _objc_retain(puVar12);
          if (puVar12 == (undefined8 *)0x0) {
            puVar3 = (undefined8 *)&UNK_10f375f76;
          }
          else {
            _objc_retainAutorelease(puVar12);
            puVar3 = puVar12;
            func_0x00010bdc3520(puVar12);
          }
          _objc_release(puVar12);
          func_0x00010002b838(auStack_3c0,puVar3);
          uStack_3f8 = 0;
          uStack_3f0 = 0;
          uStack_3e8 = 0;
          func_0x00010007e1e8(&uStack_3f8,auStack_3d8,&lStack_3a8,2);
          puVar10 = &uStack_3f8;
          (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11091c208,puVar10,puVar13);
          puStack_3e0 = &uStack_3f8;
          func_0x00010007e5dc(&puStack_3e0);
          lVar15 = 0;
          do {
            if ((&cStack_3a9)[lVar15] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_3c0 + lVar15));
            }
            lVar15 = lVar15 + -0x18;
          } while (lVar15 != -0x30);
        }
        _objc_release(puVar12);
        puVar1 = puVar9;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3a8) {
          ___stack_chk_fail();
          _objc_release(puVar12);
          if (cStack_3c1 < '\0') {
            __ZdlPv(auStack_3d8[0]);
          }
          _objc_release(puVar12);
          _objc_release(puVar9);
          __Unwind_Resume();
          ppuVar7 = &puStack_430;
          pcStack_408 = FUN_1062f9a74;
          puStack_420 = puVar12;
          puStack_418 = puVar9;
          pppuStack_410 = &pppuStack_370;
          _objc_retain(puVar10);
          puStack_428 = PTR_PTR_1126f0e20;
          puStack_430 = puVar1;
          _objc_msgSendSuper2(&puStack_430,PTR_s_init_1125d9248);
          if (ppuVar7 != (undefined **)0x0) {
            _objc_retain(puVar10);
            uVar8 = *(undefined8 *)((long)ppuVar7 + 8);
            *(undefined8 **)((long)ppuVar7 + 8) = puVar10;
            _objc_release(uVar8);
          }
          _objc_release(puVar10);
          return (undefined *)ppuVar7;
        }
        return puVar1;
      }
      return puVar2;
    }
    return puVar2;
  }
  return puVar2;
}



/* Entry: 1062f8ef8; end: 1062f906b;  */

/* WARNING: Removing unreachable block (ram,0x0001062f95dc) */

undefined *
FUN_1062f8ef8(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  undefined8 *unaff_x24;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined8 *puStack_3a0;
  undefined *puStack_398;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 *puStack_360;
  undefined8 auStack_358 [2];
  char cStack_341;
  undefined8 auStack_340 [2];
  char cStack_329;
  long lStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  undefined *puStack_308;
  undefined8 *puStack_300;
  undefined *puStack_2f8;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 auStack_2b8 [2];
  char cStack_2a1;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined *puStack_270;
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  undefined *puStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 auStack_220 [3];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f375f76;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_11091c078;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = puVar3;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = puVar3;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar10 = &uStack_100;
  pcStack_88 = FUN_1062f906c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar1;
  puVar3 = puVar5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f375f76;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar8 = &UNK_11091c0c8;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar3 = puVar10;
    param_4 = puVar5;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar3 = puVar10;
      param_4 = puVar5;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar10 = &uStack_180;
  pcStack_108 = FUN_1062f91e0;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar8;
  puVar5 = puVar3;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar8);
  if (puVar2 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar2 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar1 = &UNK_10f375f76;
    }
    else {
      puVar1 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    puVar1 = &UNK_11091c118;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar5 = puVar10;
    param_4 = puVar3;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar5 = puVar10;
      param_4 = puVar3;
    }
  }
  puVar2 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_148) {
    ___stack_chk_fail();
    _objc_release(puVar8);
    _objc_release(puVar8);
    __Unwind_Resume();
    puVar11 = &uStack_240;
    pcStack_188 = FUN_1062f9354;
    lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar8 = puVar1;
    puVar3 = puVar5;
    puVar10 = param_4;
    pppuStack_190 = &ppuStack_110;
    _objc_retain(puVar1);
    _objc_retain(puVar5);
    _objc_retain(param_4);
    if (puVar2 != (undefined *)0x0) {
      plVar14 = *(long **)(puVar2 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f375f76;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_220,puVar2);
      _objc_retain(puVar5);
      if (puVar5 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f375f76;
      }
      else {
        _objc_retainAutorelease(puVar5);
        puVar3 = puVar5;
        func_0x00010bdc3520(puVar5);
      }
      _objc_release(puVar5);
      func_0x00010002b838(auStack_208,puVar3);
      _objc_retain(param_4);
      if (param_4 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f375f76;
      }
      else {
        _objc_retainAutorelease(param_4);
        puVar3 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x00010002b838(auStack_1f0,puVar3);
      uStack_240 = 0;
      uStack_238 = 0;
      uStack_230 = 0;
      func_0x00010007e1e8(&uStack_240,auStack_220,&lStack_1d8,3);
      puVar8 = &UNK_11091c168;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11091c168,&uStack_240,param_5);
      puStack_228 = (undefined1 *)&uStack_240;
      func_0x00010007e5dc(&puStack_228);
      lVar15 = 0;
      puVar3 = puVar11;
      puVar10 = param_5;
      do {
        if ((&cStack_1d9)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
        unaff_x24 = &uStack_240;
      } while (lVar15 != -0x48);
    }
    _objc_release(param_4);
    _objc_release(puVar5);
    puVar2 = puVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
      return puVar2;
    }
    ___stack_chk_fail();
    _objc_release(param_4);
    puVar11 = auStack_220;
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != puVar11);
    _objc_release(param_4);
    _objc_release(puVar5);
    _objc_release(puVar1);
    puVar4 = puVar2;
    __Unwind_Resume();
    pcStack_248 = FUN_1062f9614;
    lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar9 = puVar8;
    puVar12 = puVar3;
    puVar13 = puVar10;
    puStack_280 = unaff_x24;
    puStack_278 = puVar11;
    puStack_270 = puVar2;
    puStack_268 = param_4;
    puStack_260 = puVar5;
    puStack_258 = puVar1;
    pppuStack_250 = &pppuStack_190;
    _objc_retain(puVar8);
    _objc_retain(puVar3);
    puVar5 = (undefined8 *)0x0;
    if (puVar4 != (undefined *)0x0) {
      plVar14 = *(long **)(puVar4 + 8);
      _objc_retain(puVar8);
      if (puVar8 == (undefined *)0x0) {
        puVar1 = &UNK_10f375f76;
      }
      else {
        puVar1 = puVar8;
        _objc_retainAutorelease(puVar8);
        func_0x00010bdc3520();
      }
      _objc_release(puVar8);
      unaff_x24 = auStack_2b8;
      func_0x00010002b838(auStack_2b8,puVar1);
      _objc_retain(puVar3);
      if (puVar3 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)&UNK_10f375f76;
      }
      else {
        _objc_retainAutorelease(puVar3);
        puVar5 = puVar3;
        func_0x00010bdc3520(puVar3);
      }
      _objc_release(puVar3);
      func_0x00010002b838(auStack_2a0,puVar5);
      uStack_2d8 = 0;
      uStack_2d0 = 0;
      uStack_2c8 = 0;
      func_0x00010007e1e8(&uStack_2d8,auStack_2b8,&lStack_288,2);
      puVar9 = &UNK_11091c1b8;
      puVar11 = &uStack_2d8;
      puVar12 = &uStack_2d8;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11091c1b8,puVar12,puVar10);
      puStack_2c0 = puVar11;
      func_0x00010007e5dc(&puStack_2c0);
      lVar15 = 0;
      puVar5 = auStack_2b8;
      puVar13 = puVar10;
      do {
        if ((&cStack_289)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_2a0 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != -0x30);
    }
    _objc_release(puVar3);
    puVar1 = puVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
      return puVar1;
    }
    ___stack_chk_fail();
    _objc_release(puVar3);
    if (cStack_2a1 < '\0') {
      __ZdlPv(auStack_2b8[0]);
    }
    _objc_release(puVar3);
    _objc_release(puVar8);
    puVar2 = puVar1;
    __Unwind_Resume();
    pcStack_2e8 = FUN_1062f9844;
    lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar10 = puVar12;
    puStack_320 = unaff_x24;
    puStack_318 = puVar11;
    puStack_310 = puVar5;
    puStack_308 = puVar1;
    puStack_300 = puVar3;
    puStack_2f8 = puVar8;
    pppuStack_2f0 = &pppuStack_250;
    _objc_retain(puVar9);
    _objc_retain(puVar12);
    if (puVar2 != (undefined *)0x0) {
      plVar14 = *(long **)(puVar2 + 8);
      _objc_retain(puVar9);
      if (puVar9 == (undefined *)0x0) {
        puVar1 = &UNK_10f375f76;
      }
      else {
        puVar1 = puVar9;
        _objc_retainAutorelease(puVar9);
        func_0x00010bdc3520();
      }
      _objc_release(puVar9);
      func_0x00010002b838(auStack_358,puVar1);
      _objc_retain(puVar12);
      if (puVar12 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)&UNK_10f375f76;
      }
      else {
        _objc_retainAutorelease(puVar12);
        puVar5 = puVar12;
        func_0x00010bdc3520(puVar12);
      }
      _objc_release(puVar12);
      func_0x00010002b838(auStack_340,puVar5);
      uStack_378 = 0;
      uStack_370 = 0;
      uStack_368 = 0;
      func_0x00010007e1e8(&uStack_378,auStack_358,&lStack_328,2);
      puVar10 = &uStack_378;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11091c208,puVar10,puVar13);
      puStack_360 = &uStack_378;
      func_0x00010007e5dc(&puStack_360);
      lVar15 = 0;
      do {
        if ((&cStack_329)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_340 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != -0x30);
    }
    _objc_release(puVar12);
    puVar1 = puVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_328) {
      ___stack_chk_fail();
      _objc_release(puVar12);
      if (cStack_341 < '\0') {
        __ZdlPv(auStack_358[0]);
      }
      _objc_release(puVar12);
      _objc_release(puVar9);
      __Unwind_Resume();
      ppuVar6 = &puStack_3b0;
      pcStack_388 = FUN_1062f9a74;
      puStack_3a0 = puVar12;
      puStack_398 = puVar9;
      pppuStack_390 = &pppuStack_2f0;
      _objc_retain(puVar10);
      puStack_3a8 = PTR_PTR_1126f0e20;
      puStack_3b0 = puVar1;
      _objc_msgSendSuper2(&puStack_3b0,PTR_s_init_1125d9248);
      if (ppuVar6 != (undefined **)0x0) {
        _objc_retain(puVar10);
        uVar7 = *(undefined8 *)((long)ppuVar6 + 8);
        *(undefined8 **)((long)ppuVar6 + 8) = puVar10;
        _objc_release(uVar7);
      }
      _objc_release(puVar10);
      return (undefined *)ppuVar6;
    }
    return puVar1;
  }
  return puVar2;
}



/* Entry: 1062f906c; end: 1062f91df;  */

/* WARNING: Removing unreachable block (ram,0x0001062f95dc) */

undefined *
FUN_1062f906c(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  undefined8 *unaff_x24;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined8 *puStack_320;
  undefined *puStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 auStack_2d8 [2];
  char cStack_2c1;
  undefined8 auStack_2c0 [2];
  char cStack_2a9;
  long lStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  undefined *puStack_288;
  undefined8 *puStack_280;
  undefined *puStack_278;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  undefined8 auStack_238 [2];
  char cStack_221;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [3];
  undefined1 auStack_188 [24];
  undefined8 auStack_170 [2];
  char cStack_159;
  long lStack_158;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f375f76;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_11091c0c8;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar3 = puVar5;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = puVar5;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar10 = &uStack_100;
  pcStack_88 = FUN_1062f91e0;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar5 = puVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f375f76;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar6 = &UNK_11091c118;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar5 = puVar10;
    param_4 = puVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar5 = puVar10;
      param_4 = puVar3;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar11 = &uStack_1c0;
  pcStack_108 = FUN_1062f9354;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar6;
  puVar3 = puVar5;
  puVar10 = param_4;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar6);
  _objc_retain(puVar5);
  _objc_retain(param_4);
  if (puVar2 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar2 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f375f76;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_1a0,puVar1);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f375f76;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_188,puVar3);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f375f76;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar3 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_170,puVar3);
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x00010007e1e8(&uStack_1c0,auStack_1a0,&lStack_158,3);
    puVar1 = &UNK_11091c168;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11091c168,&uStack_1c0,param_5);
    puStack_1a8 = (undefined1 *)&uStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    lVar15 = 0;
    puVar3 = puVar11;
    puVar10 = param_5;
    do {
      if ((&cStack_159)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_170 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      unaff_x24 = &uStack_1c0;
    } while (lVar15 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(puVar5);
  puVar2 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puVar11 = auStack_1a0;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar11);
  _objc_release(param_4);
  _objc_release(puVar5);
  _objc_release(puVar6);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_1c8 = FUN_1062f9614;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar1;
  puVar12 = puVar3;
  puVar13 = puVar10;
  puStack_200 = unaff_x24;
  puStack_1f8 = puVar11;
  puStack_1f0 = puVar2;
  puStack_1e8 = param_4;
  puStack_1e0 = puVar5;
  puStack_1d8 = puVar6;
  pppuStack_1d0 = &ppuStack_110;
  _objc_retain(puVar1);
  _objc_retain(puVar3);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f375f76;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_238;
    func_0x00010002b838(auStack_238,puVar2);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f375f76;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar5 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_220,puVar5);
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    func_0x00010007e1e8(&uStack_258,auStack_238,&lStack_208,2);
    puVar9 = &UNK_11091c1b8;
    puVar11 = &uStack_258;
    puVar12 = &uStack_258;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11091c1b8,puVar12,puVar10);
    puStack_240 = puVar11;
    func_0x00010007e5dc(&puStack_240);
    lVar15 = 0;
    puVar5 = auStack_238;
    puVar13 = puVar10;
    do {
      if ((&cStack_209)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_220 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(puVar3);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_208) {
    ___stack_chk_fail();
    _objc_release(puVar3);
    if (cStack_221 < '\0') {
      __ZdlPv(auStack_238[0]);
    }
    _objc_release(puVar3);
    _objc_release(puVar1);
    puVar6 = puVar2;
    __Unwind_Resume();
    pcStack_268 = FUN_1062f9844;
    lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar10 = puVar12;
    puStack_2a0 = unaff_x24;
    puStack_298 = puVar11;
    puStack_290 = puVar5;
    puStack_288 = puVar2;
    puStack_280 = puVar3;
    puStack_278 = puVar1;
    pppuStack_270 = &pppuStack_1d0;
    _objc_retain(puVar9);
    _objc_retain(puVar12);
    if (puVar6 != (undefined *)0x0) {
      plVar14 = *(long **)(puVar6 + 8);
      _objc_retain(puVar9);
      if (puVar9 == (undefined *)0x0) {
        puVar1 = &UNK_10f375f76;
      }
      else {
        puVar1 = puVar9;
        _objc_retainAutorelease(puVar9);
        func_0x00010bdc3520();
      }
      _objc_release(puVar9);
      func_0x00010002b838(auStack_2d8,puVar1);
      _objc_retain(puVar12);
      if (puVar12 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f375f76;
      }
      else {
        _objc_retainAutorelease(puVar12);
        puVar3 = puVar12;
        func_0x00010bdc3520(puVar12);
      }
      _objc_release(puVar12);
      func_0x00010002b838(auStack_2c0,puVar3);
      uStack_2f8 = 0;
      uStack_2f0 = 0;
      uStack_2e8 = 0;
      func_0x00010007e1e8(&uStack_2f8,auStack_2d8,&lStack_2a8,2);
      puVar10 = &uStack_2f8;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11091c208,puVar10,puVar13);
      puStack_2e0 = &uStack_2f8;
      func_0x00010007e5dc(&puStack_2e0);
      lVar15 = 0;
      do {
        if ((&cStack_2a9)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_2c0 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != -0x30);
    }
    _objc_release(puVar12);
    puVar1 = puVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2a8) {
      ___stack_chk_fail();
      _objc_release(puVar12);
      if (cStack_2c1 < '\0') {
        __ZdlPv(auStack_2d8[0]);
      }
      _objc_release(puVar12);
      _objc_release(puVar9);
      __Unwind_Resume();
      ppuVar7 = &puStack_330;
      pcStack_308 = FUN_1062f9a74;
      puStack_320 = puVar12;
      puStack_318 = puVar9;
      pppuStack_310 = &pppuStack_270;
      _objc_retain(puVar10);
      puStack_328 = PTR_PTR_1126f0e20;
      puStack_330 = puVar1;
      _objc_msgSendSuper2(&puStack_330,PTR_s_init_1125d9248);
      if (ppuVar7 != (undefined **)0x0) {
        _objc_retain(puVar10);
        uVar8 = *(undefined8 *)((long)ppuVar7 + 8);
        *(undefined8 **)((long)ppuVar7 + 8) = puVar10;
        _objc_release(uVar8);
      }
      _objc_release(puVar10);
      return (undefined *)ppuVar7;
    }
    return puVar1;
  }
  return puVar2;
}



/* Entry: 1062f91e0; end: 1062f9353;  */

/* WARNING: Removing unreachable block (ram,0x0001062f95dc) */

undefined *
FUN_1062f91e0(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  undefined8 *unaff_x24;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined *puStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined *puStack_208;
  undefined8 *puStack_200;
  undefined *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined8 auStack_120 [3];
  undefined1 auStack_108 [24];
  undefined8 auStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f375f76;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_11091c118;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = puVar3;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = puVar3;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar10 = &uStack_140;
  pcStack_88 = FUN_1062f9354;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar1;
  puVar3 = puVar5;
  puVar12 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar5);
  _objc_retain(param_4);
  if (puVar2 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f375f76;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_120,puVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f375f76;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_108,puVar3);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f375f76;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar3 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_f0,puVar3);
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    func_0x00010007e1e8(&uStack_140,auStack_120,&lStack_d8,3);
    puVar8 = &UNK_11091c168;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11091c168,&uStack_140,param_5);
    puStack_128 = (undefined1 *)&uStack_140;
    func_0x00010007e5dc(&puStack_128);
    lVar15 = 0;
    puVar3 = puVar10;
    puVar12 = param_5;
    do {
      if ((&cStack_d9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_f0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      unaff_x24 = &uStack_140;
    } while (lVar15 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(puVar5);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puVar10 = auStack_120;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar10);
  _objc_release(param_4);
  _objc_release(puVar5);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_148 = FUN_1062f9614;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar8;
  puVar11 = puVar3;
  puVar13 = puVar12;
  puStack_180 = unaff_x24;
  puStack_178 = puVar10;
  puStack_170 = puVar2;
  puStack_168 = param_4;
  puStack_160 = puVar5;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_90;
  _objc_retain(puVar8);
  _objc_retain(puVar3);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar4 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar1 = &UNK_10f375f76;
    }
    else {
      puVar1 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    unaff_x24 = auStack_1b8;
    func_0x00010002b838(auStack_1b8,puVar1);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f375f76;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar5 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_1a0,puVar5);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
    puVar9 = &UNK_11091c1b8;
    puVar10 = &uStack_1d8;
    puVar11 = &uStack_1d8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11091c1b8,puVar11,puVar12);
    puStack_1c0 = puVar10;
    func_0x00010007e5dc(&puStack_1c0);
    lVar15 = 0;
    puVar5 = auStack_1b8;
    puVar13 = puVar12;
    do {
      if ((&cStack_189)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(puVar3);
  puVar1 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
    ___stack_chk_fail();
    _objc_release(puVar3);
    if (cStack_1a1 < '\0') {
      __ZdlPv(auStack_1b8[0]);
    }
    _objc_release(puVar3);
    _objc_release(puVar8);
    puVar2 = puVar1;
    __Unwind_Resume();
    pcStack_1e8 = FUN_1062f9844;
    lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar12 = puVar11;
    puStack_220 = unaff_x24;
    puStack_218 = puVar10;
    puStack_210 = puVar5;
    puStack_208 = puVar1;
    puStack_200 = puVar3;
    puStack_1f8 = puVar8;
    pppuStack_1f0 = &ppuStack_150;
    _objc_retain(puVar9);
    _objc_retain(puVar11);
    if (puVar2 != (undefined *)0x0) {
      plVar14 = *(long **)(puVar2 + 8);
      _objc_retain(puVar9);
      if (puVar9 == (undefined *)0x0) {
        puVar1 = &UNK_10f375f76;
      }
      else {
        puVar1 = puVar9;
        _objc_retainAutorelease(puVar9);
        func_0x00010bdc3520();
      }
      _objc_release(puVar9);
      func_0x00010002b838(auStack_258,puVar1);
      _objc_retain(puVar11);
      if (puVar11 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)&UNK_10f375f76;
      }
      else {
        _objc_retainAutorelease(puVar11);
        puVar5 = puVar11;
        func_0x00010bdc3520(puVar11);
      }
      _objc_release(puVar11);
      func_0x00010002b838(auStack_240,puVar5);
      uStack_278 = 0;
      uStack_270 = 0;
      uStack_268 = 0;
      func_0x00010007e1e8(&uStack_278,auStack_258,&lStack_228,2);
      puVar12 = &uStack_278;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11091c208,puVar12,puVar13);
      puStack_260 = &uStack_278;
      func_0x00010007e5dc(&puStack_260);
      lVar15 = 0;
      do {
        if ((&cStack_229)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != -0x30);
    }
    _objc_release(puVar11);
    puVar1 = puVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_228) {
      ___stack_chk_fail();
      _objc_release(puVar11);
      if (cStack_241 < '\0') {
        __ZdlPv(auStack_258[0]);
      }
      _objc_release(puVar11);
      _objc_release(puVar9);
      __Unwind_Resume();
      ppuVar6 = &puStack_2b0;
      pcStack_288 = FUN_1062f9a74;
      puStack_2a0 = puVar11;
      puStack_298 = puVar9;
      pppuStack_290 = &pppuStack_1f0;
      _objc_retain(puVar12);
      puStack_2a8 = PTR_PTR_1126f0e20;
      puStack_2b0 = puVar1;
      _objc_msgSendSuper2(&puStack_2b0,PTR_s_init_1125d9248);
      if (ppuVar6 != (undefined **)0x0) {
        _objc_retain(puVar12);
        uVar7 = *(undefined8 *)((long)ppuVar6 + 8);
        *(undefined8 **)((long)ppuVar6 + 8) = puVar12;
        _objc_release(uVar7);
      }
      _objc_release(puVar12);
      return (undefined *)ppuVar6;
    }
    return puVar1;
  }
  return puVar1;
}



/* Entry: 1062f9354; end: 1062f9613;  */

/* WARNING: Removing unreachable block (ram,0x0001062f95dc) */

undefined *
FUN_1062f9354(long param_1,undefined *param_2,undefined8 *param_3,undefined *param_4,
             undefined *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 *unaff_x24;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined8 *puStack_220;
  undefined *puStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 auStack_1d8 [2];
  char cStack_1c1;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined *puStack_188;
  undefined8 *puStack_180;
  undefined *puStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar5 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  puVar6 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f375f76;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f375f76;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,puVar2);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar1 = &UNK_10f375f76;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = &UNK_11091c168;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11091c168,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar13 = 0;
    puVar2 = puVar5;
    puVar6 = param_5;
    do {
      if ((&cStack_59)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar13 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puVar5 = auStack_a0;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_c8 = FUN_1062f9614;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar1;
  puVar10 = puVar2;
  puVar12 = puVar6;
  puStack_100 = unaff_x24;
  puStack_f8 = puVar5;
  puStack_f0 = puVar3;
  puStack_e8 = param_4;
  puStack_e0 = param_3;
  puStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  puVar14 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar15 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f375f76;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_138;
    func_0x00010002b838(auStack_138,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f375f76;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_120,puVar5);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    func_0x00010007e1e8(&uStack_158,auStack_138,&lStack_108,2);
    puVar9 = &UNK_11091c1b8;
    puVar5 = &uStack_158;
    puVar10 = &uStack_158;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11091c1b8,puVar10,puVar6);
    puStack_140 = puVar5;
    func_0x00010007e5dc(&puStack_140);
    lVar13 = 0;
    puVar14 = auStack_138;
    puVar12 = puVar6;
    do {
      if ((&cStack_109)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar2);
  puVar6 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
    ___stack_chk_fail();
    _objc_release(puVar2);
    if (cStack_121 < '\0') {
      __ZdlPv(auStack_138[0]);
    }
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar3 = puVar6;
    __Unwind_Resume();
    pcStack_168 = FUN_1062f9844;
    lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar11 = puVar10;
    puStack_1a0 = unaff_x24;
    puStack_198 = puVar5;
    puStack_190 = puVar14;
    puStack_188 = puVar6;
    puStack_180 = puVar2;
    puStack_178 = puVar1;
    ppuStack_170 = &puStack_d0;
    _objc_retain(puVar9);
    _objc_retain(puVar10);
    if (puVar3 != (undefined *)0x0) {
      plVar15 = *(long **)(puVar3 + 8);
      _objc_retain(puVar9);
      if (puVar9 == (undefined *)0x0) {
        puVar1 = &UNK_10f375f76;
      }
      else {
        puVar1 = puVar9;
        _objc_retainAutorelease(puVar9);
        func_0x00010bdc3520();
      }
      _objc_release(puVar9);
      func_0x00010002b838(auStack_1d8,puVar1);
      _objc_retain(puVar10);
      if (puVar10 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f375f76;
      }
      else {
        _objc_retainAutorelease(puVar10);
        puVar2 = puVar10;
        func_0x00010bdc3520(puVar10);
      }
      _objc_release(puVar10);
      func_0x00010002b838(auStack_1c0,puVar2);
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      uStack_1e8 = 0;
      func_0x00010007e1e8(&uStack_1f8,auStack_1d8,&lStack_1a8,2);
      puVar11 = &uStack_1f8;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11091c208,puVar11,puVar12);
      puStack_1e0 = &uStack_1f8;
      func_0x00010007e5dc(&puStack_1e0);
      lVar13 = 0;
      do {
        if ((&cStack_1a9)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1c0 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x30);
    }
    _objc_release(puVar10);
    puVar1 = puVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
      ___stack_chk_fail();
      _objc_release(puVar10);
      if (cStack_1c1 < '\0') {
        __ZdlPv(auStack_1d8[0]);
      }
      _objc_release(puVar10);
      _objc_release(puVar9);
      __Unwind_Resume();
      ppuVar7 = &puStack_230;
      pcStack_208 = FUN_1062f9a74;
      puStack_220 = puVar10;
      puStack_218 = puVar9;
      pppuStack_210 = &ppuStack_170;
      _objc_retain(puVar11);
      puStack_228 = PTR_PTR_1126f0e20;
      puStack_230 = puVar1;
      _objc_msgSendSuper2(&puStack_230,PTR_s_init_1125d9248);
      if (ppuVar7 != (undefined **)0x0) {
        _objc_retain(puVar11);
        uVar8 = *(undefined8 *)((long)ppuVar7 + 8);
        *(undefined8 **)((long)ppuVar7 + 8) = puVar11;
        _objc_release(uVar8);
      }
      _objc_release(puVar11);
      return (undefined *)ppuVar7;
    }
    return puVar1;
  }
  return puVar6;
}



/* Entry: 1062f9614; end: 1062f9843;  */

undefined * FUN_1062f9614(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  uVar7 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar5 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f375f76;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f375f76;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_11091c1b8;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11091c1b8,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar9 = 0;
    puVar5 = auStack_78;
    uVar7 = param_4;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_1062f9844;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar5;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  if (puVar4 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f375f76;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_118,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f375f76;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_100,puVar5);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar8 = &uStack_138;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11091c208,puVar8,uVar7);
    puStack_120 = &uStack_138;
    func_0x00010007e5dc(&puStack_120);
    lVar9 = 0;
    do {
      if ((&cStack_e9)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  __Unwind_Resume();
  ppuVar6 = &puStack_170;
  pcStack_148 = FUN_1062f9a74;
  puStack_160 = puVar2;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar8);
  puStack_168 = PTR_PTR_1126f0e20;
  puStack_170 = puVar3;
  _objc_msgSendSuper2(&puStack_170,PTR_s_init_1125d9248);
  if (ppuVar6 != (undefined **)0x0) {
    _objc_retain(puVar8);
    uVar7 = *(undefined8 *)((long)ppuVar6 + 8);
    *(undefined8 **)((long)ppuVar6 + 8) = puVar8;
    _objc_release(uVar7);
  }
  _objc_release(puVar8);
  return (undefined *)ppuVar6;
}



/* Entry: 1062f9844; end: 1062f9a73;  */

undefined * FUN_1062f9844(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar6 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f375f76;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f375f76;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar2 = &uStack_98;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_11091c208,puVar2,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar5 = 0;
    do {
      if ((&cStack_49)[lVar5] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar5));
      }
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != -0x30);
  }
  _objc_release(param_3);
  puVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  ppuVar3 = &puStack_d0;
  pcStack_a8 = FUN_1062f9a74;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  puStack_c8 = PTR_PTR_1126f0e20;
  puStack_d0 = puVar1;
  _objc_msgSendSuper2(&puStack_d0,PTR_s_init_1125d9248);
  if (ppuVar3 != (undefined **)0x0) {
    _objc_retain(puVar2);
    uVar4 = *(undefined8 *)((long)ppuVar3 + 8);
    *(undefined8 **)((long)ppuVar3 + 8) = puVar2;
    _objc_release(uVar4);
  }
  _objc_release(puVar2);
  return (undefined *)ppuVar3;
}



/* Entry: 1062f9a74; end: 1062f9ae7; -[SCRequestManagerLoadingProgressProvider initWithRequestManager:] */

undefined1 * FUN_1062f9a74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f0e20;
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



/* Entry: 1062f9ae8; end: 1062f9bab; -[SCRequestManagerLoadingProgressProvider startToMonitorProgressWithRequestId:progressHandler:] */

void FUN_1062f9ae8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined **ppuVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1062f9bac;
    puStack_40 = &UNK_11091c328;
    _objc_retain(param_4);
    lStack_38 = param_4;
    _objc_retain(param_3);
    ppuVar1 = &puStack_58;
    _objc_retainBlock(ppuVar1);
    func_0x00010c2512a0(*(undefined8 *)(param_1 + 8),param_2,param_3,PTR___dispatch_main_q_11034be20
                        ,ppuVar1);
    _objc_release(param_3);
    _objc_release(ppuVar1);
    _objc_release(lStack_38);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 1062f9bac; end: 1062f9c2f;  */

void FUN_1062f9bac(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  float fVar4;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    lVar1 = param_2;
    func_0x00010bf43fa0(param_2);
    lVar2 = param_2;
    func_0x00010c276f80(param_2);
    fVar4 = (float)lVar1 / (float)lVar2;
    lVar1 = *(long *)(param_1 + 0x20);
    pcVar3 = *(code **)(lVar1 + 0x10);
    param_3 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20);
    pcVar3 = *(code **)(lVar1 + 0x10);
    fVar4 = 0.0;
  }
  (*pcVar3)(fVar4,lVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062f9c30; end: 1062f9c37; -[SCRequestManagerLoadingProgressProvider stopToMonitorProgressWithRequestId:] */

void FUN_1062f9c30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c256c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_stopToMonitorProgressWithRequest_112673540);
  return;
}



/* Entry: 1062f9c38; end: 1062f9c43; -[SCRequestManagerLoadingProgressProvider .cxx_destruct] */

void FUN_1062f9c38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1062f9c44; end: 1062f9c97; +[SCOperaMediaLoadStateFetcher sharedInstance] */

void FUN_1062f9c44(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c37a0 != -1) {
    func_0x00010002a2fc(0x1136c37a0,&PTR___NSConcreteGlobalBlock_11091c358);
  }
  uVar1 = uRam00000001136c3798;
  _objc_retain(uRam00000001136c3798);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062f9c98; end: 1062f9cc3;  */

void FUN_1062f9c98(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126c99d8;
  _objc_alloc_init();
  uVar1 = puRam00000001136c3798;
  puRam00000001136c3798 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062f9cc4; end: 1062f9d6f; -[SCOperaMediaLoadStateFetcher init] */

undefined1 * FUN_1062f9cc4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f0e28;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1062f9d70; end: 1062f9e5f; -[SCOperaMediaLoadStateFetcher captureLongformShowLoadState:playbackMediaPrefetcher:] */

void FUN_1062f9d70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010be124a0(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1062f9e60; end: 1062f9eef;  */

void FUN_1062f9e60(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c29a460(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1062f9ef0; end: 1062f9ff3; -[SCOperaMediaLoadStateFetcher captureStoryLoadStateOfRequestKey:isLoaded:itemId:date:page:params:] */

void FUN_1062f9ef0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if ((param_3 != 0) && (param_5 != 0)) {
    func_0x00010bec3ee0(param_1,param_2,param_6,param_5);
    puVar1 = PTR_PTR_1126c99d8;
    func_0x00010be44240(PTR_PTR_1126c99d8,param_2,param_7,param_8);
    if ((int)puVar1 == 0) {
      func_0x00010bdddd00(param_1);
      func_0x00010bddb5c0(param_1,param_2,param_3,param_4,param_5,param_6);
    }
    else {
      func_0x00010bddb820(param_1,param_2,param_7,param_8,param_5,param_6);
    }
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062f9ff4; end: 1062fa167; -[SCOperaMediaLoadStateFetcher captureLoadStateOfSnapPlayback:storiesMediaCoordinator:itemId:data:] */

void FUN_1062f9ff4(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  if ((param_5 == 0) || (lVar1 == 0)) {
    _objc_release();
  }
  else {
    _objc_release();
    if (param_4 != 0) {
      func_0x00010bdddd00(param_1);
      func_0x00010bec3ee0(param_1);
      _objc_initWeak(auStack_48,param_1);
      _objc_opt_class(param_1);
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_5);
      func_0x00010bfa80e0(param_1);
      _objc_release(param_5);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1062fa168; end: 1062fa1ab;  */

void FUN_1062fa168(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec3f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062fa1ac; end: 1062fa38f; -[SCOperaMediaLoadStateFetcher captureLoadStateFromPage:playlistItemController:itemId:date:] */

void FUN_1062fa1ac(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_5 != 0) {
    func_0x00010bdddd00(param_1);
    func_0x00010bec3ee0(param_1);
    uVar1 = param_3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010bec3f40(param_1);
    if (param_4 != 0) {
      puVar3 = PTR_PTR_1126ae560;
      _objc_opt_new();
      puVar4 = puVar3;
      func_0x00010bfbc3e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
      _objc_release(puVar4);
      _objc_initWeak(auStack_58,param_1);
      _objc_copyWeak(auStack_60,auStack_58);
      _objc_retain(puVar3);
      func_0x00010c13ee40(param_4);
      _objc_release(puVar3);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
      _objc_release(puVar3);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1062fa390; end: 1062fa44f;  */

void FUN_1062fa390(long param_1,undefined8 param_2)

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
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1062fa450;
  puStack_50 = &UNK_110848218;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_48 = uVar1;
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1062fa450; end: 1062fa487;  */

void FUN_1062fa450(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1062fa488; end: 1062fa553; -[SCOperaMediaLoadStateFetcher captureLoadStateForPage:params:itemId:date:] */

void FUN_1062fa488(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_5;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010bdddd00(param_1);
    func_0x00010bec3ee0(param_1,param_2,param_6,param_5);
    puVar2 = PTR_PTR_1126c99d8;
    func_0x00010be44240(PTR_PTR_1126c99d8,param_2,param_3,param_4);
    if ((int)puVar2 != 0) {
      func_0x00010bddb820(param_1,param_2,param_3,param_4,param_5,param_6);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062fa554; end: 1062fa5a3; -[SCOperaMediaLoadStateFetcher loadStateForItemId:] */

long FUN_1062fa554(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = -1;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c067fc0(lVar1);
  }
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 1062fa5a4; end: 1062fa5ab; -[SCOperaMediaLoadStateFetcher prefetchInfoFutureForItemId:] */

void FUN_1062fa5a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 1062fa5ac; end: 1062fa5b3; -[SCOperaMediaLoadStateFetcher dateForItemId:] */

void FUN_1062fa5ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 1062fa5b4; end: 1062fa69f; +[SCOperaMediaLoadStateFetcher fetchLoadStateWithRequestKey:completion:] */

void FUN_1062fa5b4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,0xffffffffffffffff);
    }
  }
  else {
    puVar2 = PTR_PTR_1126b7f68;
    func_0x00010c22b6a0(PTR_PTR_1126b7f68);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    func_0x00010bf89020(puVar2);
    _objc_release(param_4);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1062fa6a0; end: 1062fa6cf;  */

void FUN_1062fa6a0(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (param_2 < 4) {
      uVar2 = *(undefined8 *)(&UNK_10dddb400 + param_2 * 8);
    }
    else {
      uVar2 = 2;
    }
                    /* WARNING: Could not recover jumptable at 0x0001062fa6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
    return;
  }
  return;
}



/* Entry: 1062fa6d0; end: 1062fa7db; +[SCOperaMediaLoadStateFetcher fetchLoadStateForSnapPlayback:storiesMediaCoordinator:completion:] */

void FUN_1062fa6d0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if ((param_4 != 0) && (lVar1 != 0)) {
      lVar1 = param_3;
      func_0x00010c0c5340(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_5);
      func_0x00010c11d580(param_4);
      _objc_release(lVar1);
      _objc_release(param_5);
      goto LAB_1062fa7b0;
    }
  }
  if (param_5 != 0) {
    (**(code **)(param_5 + 0x10))(param_5,0xffffffffffffffff);
  }
LAB_1062fa7b0:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1062fa7dc; end: 1062fa867;  */

void FUN_1062fa7dc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = 2;
  if (param_2 != 1) {
    uVar2 = 0;
  }
  uVar1 = 3;
  if (param_2 != 2) {
    uVar1 = uVar2;
  }
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1062fa868;
  puStack_38 = &UNK_110860cf8;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uStack_30 = uVar2;
  uStack_28 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  return;
}



/* Entry: 1062fa868; end: 1062fa883;  */

void FUN_1062fa868(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001062fa87c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}


