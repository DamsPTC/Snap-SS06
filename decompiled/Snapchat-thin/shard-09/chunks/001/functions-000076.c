/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106960060; end: 106960083;  */

void FUN_106960060(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010696006c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,0);
  return;
}



/* Entry: 106960084; end: 1069604b7; -[SCStoriesSnapPostCoordinator _swapTileMediaReferencesInStoryMetadata:localMessageContent:] */

void FUN_106960084(long param_1,long param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_4;
  func_0x00010c09dc00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_4;
  func_0x00010c12a260();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf529e0(puVar1);
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  func_0x00010bf97e80(puVar1);
  uVar4 = param_3;
  func_0x00010c26ef60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf52a60();
  lVar12 = lRam0000000000000000;
  if (uVar5 == 0) {
    _objc_release(uVar4);
  }
  else {
    do {
      uVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar12) {
          _objc_enumerationMutation(uVar4);
        }
        uVar15 = *(ulong *)(uVar14 * 8);
        uVar6 = uVar15;
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c08fa60();
        if (uVar7 == 0) {
          puVar16 = (undefined *)0x0;
        }
        else {
          uVar7 = uVar15;
          func_0x00010bf3cf60(uVar15);
          _objc_retainAutoreleasedReturnValue();
          puVar16 = puVar3;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar7);
        }
        _objc_release(uVar6);
        puVar8 = puVar16;
        func_0x00010c2827c0();
        if ((puVar16 == (undefined *)0x0) ||
           (puVar9 = puVar2, func_0x00010bf529e0(), puVar9 <= puVar8)) {
LAB_10696040c:
          _objc_release(puVar16);
          _objc_release(uVar4);
          func_0x00010c0ac9a0(*(undefined8 *)(param_1 + 0xb0));
          func_0x00010c214ae0(param_3);
          func_0x00010c2149e0(param_3);
          goto LAB_106960448;
        }
        uVar6 = uVar15;
        func_0x00010c2401c0();
        uVar7 = param_3;
        func_0x00010c26ed80();
        if (uVar7 <= (uVar6 & 0xffffffff)) goto LAB_10696040c;
        puVar8 = puVar2;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c0c6260();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010bf4cce0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar8);
        uVar6 = param_3;
        func_0x00010c26ed60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2401c0(uVar15);
        uVar7 = uVar6;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        puVar8 = puVar11;
        func_0x00010c08fa60();
        if ((puVar8 == (undefined *)0x0) || (uVar6 = uVar7, func_0x00010c0c62a0(), uVar6 == 0)) {
          _objc_release(uVar7);
          _objc_release(puVar11);
          goto LAB_10696040c;
        }
        uVar6 = uVar7;
        func_0x00010c0c6280(uVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar11);
        func_0x00010bf97e80(uVar6);
        _objc_release(uVar6);
        _objc_release(puVar11);
        _objc_release(puVar11);
        _objc_release(uVar7);
        _objc_release(puVar16);
        uVar14 = uVar14 + 1;
      } while (uVar5 != uVar14);
      uVar5 = uVar4;
      func_0x00010bf52a60();
    } while (uVar5 != 0);
    _objc_release(uVar4);
  }
LAB_106960448:
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    func_0x000107d6b108();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_2;
    func_0x00010c08fa60();
    if (lVar12 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_3 + 0x20));
      _objc_release(puVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1069604b8; end: 106960533;  */

void FUN_1069604b8(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x000107d6b108();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106960534; end: 106960577;  */

void FUN_106960534(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c1822a0(param_2);
  func_0x00010c1bf020(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106960578; end: 106960623; -[SCStoriesSnapPostCoordinator _logThumbnailData:clientId:isTimeout:] */

void FUN_106960578(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,int param_5)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0xb0);
    ppuVar2 = &PTR____CFConstantStringClassReference_110df2578;
  }
  else {
    uVar1 = param_3;
    func_0x00010c08fa60();
    if (uVar1 < 0x4001) goto LAB_1069605f8;
    uVar3 = *(undefined8 *)(param_1 + 0xb0);
    uVar1 = param_3;
    func_0x00010c08fa60(param_3);
    func_0x00010c0b0d00(uVar3,param_2,uVar1);
    uVar3 = *(undefined8 *)(param_1 + 0xb0);
    ppuVar2 = &PTR____CFConstantStringClassReference_110e5f278;
  }
  func_0x00010c0ac880(uVar3,param_2,ppuVar2);
LAB_1069605f8:
  if (param_5 != 0) {
    func_0x00010c0aca20(*(undefined8 *)(param_1 + 0xb0));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106960624; end: 106960af3; -[SCStoriesSnapPostCoordinator updateWithAsyncPostingConfirmedPosts:failedPosts:] */

void FUN_106960624(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = param_4;
  _objc_retain(param_4);
  func_0x00010bdc4100(param_1);
  puVar5 = param_4;
  func_0x00010bf529e0();
  if (puVar5 != (undefined *)0x0) {
    uVar6 = *(ulong *)(param_1 + 0xd0);
    func_0x000108f49424();
    if ((uVar6 & 1) == 0) {
      puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      _objc_retain(param_4);
      puVar5 = param_4;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (puVar5 != (undefined *)0x0) {
        puVar15 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(param_4);
          }
          puVar8 = param_4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x00010bf52a60();
          lVar12 = lRam0000000000000000;
          while (puVar9 != (undefined *)0x0) {
            puVar16 = (undefined *)0x0;
            do {
              if (lRam0000000000000000 != lVar12) {
                _objc_enumerationMutation(puVar8);
              }
              puVar10 = puVar7;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (puVar10 == (undefined *)0x0) {
                puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
                func_0x00010c1d0640(puVar7);
                _objc_release(puVar10);
              }
              puVar10 = puVar7;
              func_0x00010c0e00e0(puVar7);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120();
              _objc_release(puVar10);
              puVar16 = puVar16 + 1;
            } while (puVar9 != puVar16);
            puVar9 = puVar8;
            func_0x00010bf52a60();
          }
          _objc_release(puVar8);
          puVar15 = puVar15 + 1;
        } while (puVar15 != puVar5);
        puVar5 = param_4;
        func_0x00010bf52a60();
      }
      _objc_release(param_4);
      iVar3 = (int)*(undefined8 *)(param_1 + 0xd0);
      func_0x00010bf1f440();
      puStack_2d0 = (undefined *)0x0;
      puStack_2c8 = (undefined *)0x0;
      if (iVar3 != 0) {
        puStack_2c8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        puStack_2d0 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
      }
      puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      _objc_retain(puVar7);
      puVar5 = puVar7;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (puVar5 != (undefined *)0x0) {
        puVar15 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(puVar7);
          }
          uVar11 = *(undefined8 *)(param_1 + 0xc0);
          func_0x000108ea5f8c(uVar11,*(undefined8 *)((long)puVar15 * 8),1);
          _objc_retainAutoreleasedReturnValue();
          lVar12 = *(long *)(param_1 + 8);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar12 == 0) {
            bVar1 = false;
          }
          else {
            lVar13 = lVar12;
            func_0x00010c067fc0();
            bVar1 = lVar13 < 1;
          }
          if (iVar3 != 0) {
            puVar8 = puVar7;
            func_0x00010c0e00e0(puVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bdcd460(param_1);
            _objc_release(puVar8);
          }
          if (bVar1) {
            func_0x00010c0ac7e0(*(undefined8 *)(param_1 + 0xb0));
          }
          else {
            func_0x00010befa120(puVar9);
            puVar8 = puVar7;
            func_0x00010c0e00e0(puVar7);
            _objc_retainAutoreleasedReturnValue();
            iVar4 = (int)*(undefined8 *)(param_1 + 0xd0);
            func_0x000108f49410();
            if (iVar4 == 0) {
              func_0x00010be87940(param_1);
              func_0x00010be2bda0(param_1);
            }
            else {
              func_0x00010bdfa9e0(param_1);
            }
            _objc_release(puVar8);
          }
          _objc_release(lVar12);
          _objc_release(uVar11);
          puVar15 = puVar15 + 1;
        } while (puVar5 != puVar15);
        puVar5 = puVar7;
        func_0x00010bf52a60();
      }
      _objc_release(puVar7);
      if (iVar3 != 0) {
        func_0x00010be03fa0(param_1);
      }
      param_3 = 0xffffffffffffffff;
      puVar15 = puVar9;
      func_0x00010bedd9a0(param_1);
      _objc_release(puVar9);
      _objc_release(puStack_2d0);
      _objc_release(puStack_2c8);
      _objc_release(puVar7);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  _objc_retain(puVar15);
  uVar11 = *(undefined8 *)(param_4 + 0x68);
  _objc_retain(puVar15);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar11);
  _objc_release(puVar15);
  _objc_release(param_3);
  _objc_release(puVar15);
  _objc_release(param_3);
  return;
}



/* Entry: 106960af4; end: 106960c77; -[SCStoriesSnapPostCoordinator didDeletePostingSnapWithStoryId:clientId:] */

void FUN_106960af4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x106960bac;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_3;
  uStack_40 = param_4;
  lStack_38 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106960c78; end: 106960c7b; -[SCStoriesSnapPostCoordinator didDeleteSnapWithServerId:] */

void FUN_106960c78(void)

{
  return;
}



/* Entry: 106960c7c; end: 106961047; -[SCStoriesSnapPostCoordinator _ackStatusForConfirmedPosts:] */

void FUN_106960c7c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined **unaff_x23;
  undefined **unaff_x24;
  long lStack_280;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined1 auStack_248 [8];
  undefined *puStack_240;
  undefined8 uStack_238;
  code *pcStack_230;
  undefined *puStack_228;
  undefined1 auStack_220 [8];
  undefined1 auStack_218 [8];
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar8 = param_3;
  func_0x00010bf529e0();
  if (lVar8 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    plStack_1c0 = (long *)0x0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    _objc_retain(param_3);
    lStack_280 = param_3;
    func_0x00010bf52a60();
    if (lStack_280 != 0) {
      lVar8 = *plStack_1c0;
      unaff_x23 = &PTR____CFConstantStringClassReference_110e65bb8;
      do {
        lVar9 = 0;
        do {
          if (*plStack_1c0 != lVar8) {
            _objc_enumerationMutation();
          }
          unaff_x24 = *(undefined ***)(lStack_1c8 + lVar9 * 8);
          lStack_208 = 0;
          uStack_210 = 0;
          uStack_1f8 = 0;
          plStack_200 = (long *)0x0;
          uStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          uStack_1e0 = 0;
          lVar2 = param_3;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010bf52a60();
          if (lVar3 != 0) {
            lVar11 = *plStack_200;
            do {
              lVar10 = 0;
              do {
                if (*plStack_200 != lVar11) {
                  _objc_enumerationMutation(lVar2);
                }
                lVar4 = *(long *)(param_1 + 0xc0);
                func_0x000108ea5f8c(lVar4,*(undefined8 *)(lStack_208 + lVar10 * 8),1);
                _objc_retainAutoreleasedReturnValue();
                lVar5 = lVar4;
                func_0x00010c08fa60();
                if (lVar5 != 0) {
                  lVar5 = lVar4;
                  FUN_10695914c(lVar4,unaff_x24);
                  _objc_retainAutoreleasedReturnValue();
                  if (lVar5 == 0) {
                    func_0x00010c0ac9c0(*(undefined8 *)(param_1 + 0xb0));
                  }
                  else {
                    func_0x00010befa120(puVar1);
                  }
                  _objc_release(lVar5);
                }
                _objc_release(lVar4);
                lVar10 = lVar10 + 1;
              } while (lVar3 != lVar10);
              lVar3 = lVar2;
              func_0x00010bf52a60();
            } while (lVar3 != 0);
          }
          _objc_release(lVar2);
          lVar9 = lVar9 + 1;
        } while (lVar9 != lStack_280);
        lStack_280 = param_3;
        func_0x00010bf52a60();
      } while (lStack_280 != 0);
    }
    _objc_release(param_3);
    puVar6 = puVar1;
    func_0x00010bf529e0();
    if (puVar6 != (undefined *)0x0) {
      lVar8 = *(long *)(param_1 + 0x80);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      if (lVar8 == 0) {
        func_0x00010c0ac9c0(*(undefined8 *)(param_1 + 0xb0));
      }
      else {
        _objc_initWeak(auStack_218,param_1);
        puVar7 = PTR_PTR_1126b2730;
        _objc_alloc(PTR_PTR_1126b2730);
        puVar6 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_240 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_238 = 0xc2000000;
        pcStack_230 = FUN_106961048;
        puStack_228 = &UNK_1108434b0;
        unaff_x23 = &puStack_240;
        _objc_copyWeak(auStack_220,auStack_218);
        puStack_268 = puVar6;
        uStack_260 = 0xc2000000;
        uStack_258 = 0x10696107c;
        puStack_250 = &UNK_110850658;
        unaff_x24 = &puStack_268;
        _objc_copyWeak(auStack_248,auStack_218);
        func_0x00010c04f4c0(puVar7);
        func_0x00010bf3c260(lVar8);
        _objc_release(puVar7);
        _objc_destroyWeak(auStack_248);
        _objc_destroyWeak(auStack_220);
        _objc_destroyWeak(auStack_218);
      }
      _objc_release(lVar8);
    }
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x24 + 4);
  _objc_destroyWeak(unaff_x23 + 4);
  _objc_destroyWeak(auStack_218);
  __Unwind_Resume(param_3);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010be571e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106961048; end: 1069610cb;  */

void FUN_106961048(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be571e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069610cc; end: 10696115b; -[SCStoriesSnapPostCoordinator _logPostingStatusAckResult:] */

void FUN_1069610cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10696115c;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10696115c; end: 106961167;  */

void FUN_10696115c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ac9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb0),
             PTR_s_logPostingStatusAckWithResult__112608c80,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106961168; end: 1069612bf; -[SCStoriesSnapPostCoordinator _handleDeletedSnapsWithSnapComponentId:storyIds:] */

void FUN_106961168(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_1d0 [8];
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  undefined1 *puStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar6 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d500();
  _objc_release(uVar1);
  func_0x00010bed7c80(param_1);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  _objc_retain(param_4);
  puVar7 = auStack_d8;
  lVar2 = param_4;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar8 = *plStack_110;
    do {
      lVar9 = 0;
      do {
        if (*plStack_110 != lVar8) {
          _objc_enumerationMutation(param_4);
        }
        func_0x00010bdfa880(param_1);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      puVar7 = auStack_d8;
      lVar2 = param_4;
      puVar6 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  lVar2 = *(long *)(param_3 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    _objc_initWeak(auStack_198,param_3);
    puVar3 = PTR_PTR_1126b2730;
    _objc_alloc(PTR_PTR_1126b2730);
    puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1c0 = 0xc2000000;
    pcStack_1b8 = FUN_1069614d8;
    puStack_1b0 = &UNK_110841fb0;
    _objc_retain(puVar6);
    puStack_1a8 = (undefined1 *)puVar6;
    _objc_copyWeak(auStack_1a0,auStack_198);
    _objc_retain(puVar6);
    _objc_copyWeak(auStack_1d0,auStack_198);
    func_0x00010c04f4c0(puVar3);
    puVar5 = PTR_PTR_1126b0cd8;
    puVar4 = puVar7;
    func_0x00010846a418(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc35c0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    uVar1 = *(undefined8 *)(param_3 + 0x80);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6cac0();
    _objc_release(uVar1);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_1d0);
    _objc_release(puVar6);
    _objc_destroyWeak(auStack_1a0);
    _objc_release(puStack_1a8);
    _objc_destroyWeak(auStack_198);
  }
  _objc_release(lVar2);
  _objc_release(puVar7);
  _objc_release(puVar6);
  return;
}



/* Entry: 1069612c0; end: 1069614d7; -[SCStoriesSnapPostCoordinator _deleteStoryPostWithSnapComponentId:storyId:] */

void FUN_1069612c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_78,param_1);
    puVar2 = PTR_PTR_1126b2730;
    _objc_alloc(PTR_PTR_1126b2730);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_1069614d8;
    puStack_90 = &UNK_110841fb0;
    _objc_retain(param_3);
    uStack_88 = param_3;
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(param_3);
    _objc_copyWeak(auStack_b0,auStack_78);
    func_0x00010c04f4c0(puVar2);
    puVar3 = PTR_PTR_1126b0cd8;
    uVar4 = param_4;
    func_0x00010846a418(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc35c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6cac0();
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_b0);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_80);
    _objc_release(uStack_88);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1069614d8; end: 10696155b;  */

void FUN_1069614d8(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be523a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10696155c; end: 106961563; -[SCStoriesSnapPostCoordinator _logDeletionWithResult:] */

void FUN_10696155c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ac8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xb0),PTR_s_logPostingDeletionWithResult__112608c38);
  return;
}



/* Entry: 106961564; end: 1069615d3; -[SCStoriesSnapPostCoordinator _destinationMetadataForBlizzardLoggerWithDestinationMetadata:storyPrivacy:] */

long FUN_106961564(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  if ((param_4 != 1) && (param_4 != 2)) {
    lVar1 = param_3;
    func_0x00010c0d4ba0(param_3);
    _objc_retainAutoreleasedReturnValue();
    param_4 = lVar1;
    func_0x00010c113ec0();
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return param_4;
}



/* Entry: 1069615d4; end: 10696178b; -[SCStoriesSnapPostCoordinator _fetchFriendlinkStatusForRepostedUserId:mentionedUserIds:completion:] */

void FUN_1069615d4(long param_1,long param_2,long param_3,undefined *param_4,long param_5)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  code *pcVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined1 *puVar16;
  undefined1 auStack_168 [128];
  long lStack_e8;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(long *)(param_1 + 0x110) == 0) {
    param_2 = -1;
    (**(code **)(param_5 + 0x10))(param_5,0xffffffffffffffff,PTR____NSArray0__struct_11034ab48);
  }
  puVar3 = param_4;
  func_0x00010bf529e0();
  puVar4 = param_4;
  if ((puVar3 == (undefined *)0x0) &&
     (lVar6 = param_3, func_0x00010c08fa60(), puVar4 = PTR____NSArray0__struct_11034ab48, lVar6 != 0
     )) {
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar4);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x110);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  puVar10 = (undefined1 *)0x6;
  puVar3 = puVar4;
  func_0x00010c09d7c0(uVar5);
  _objc_release(uVar5);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = param_2;
  _objc_retain(param_2);
  lVar6 = *(long *)(param_4 + 0x20);
  func_0x00010bf529e0();
  if (lVar6 == 0) {
    lVar6 = param_2;
    func_0x00010bf529e0();
    if (lVar6 == 0) {
      lVar6 = *(long *)(param_4 + 0x30);
      pcVar12 = *(code **)(lVar6 + 0x10);
      lVar11 = -1;
    }
    else {
      lVar6 = *(long *)(param_4 + 0x28);
      func_0x00010c08fa60();
      if (lVar6 == 0) goto LAB_106961930;
      lVar6 = param_2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar6;
      func_0x000100bf119c();
      lVar11 = 0;
      if ((int)lVar15 == 0) {
        lVar11 = 2;
      }
      _objc_release(lVar6);
      lVar6 = *(long *)(param_4 + 0x30);
      pcVar12 = *(code **)(lVar6 + 0x10);
    }
    puVar3 = PTR____NSArray0__struct_11034ab48;
    (*pcVar12)(lVar6,lVar11);
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain(param_2);
    puVar10 = auStack_168;
    lVar11 = param_2;
    func_0x00010bf52a60();
    lVar6 = lRam0000000000000000;
    while (lVar11 != 0) {
      lVar15 = 0;
      do {
        if (lRam0000000000000000 != lVar6) {
          _objc_enumerationMutation(param_2);
        }
        uVar2 = (uint)*(undefined8 *)(lVar15 * 8);
        func_0x000100bf119c();
        uVar7 = (ulong)(uVar2 ^ 1);
        func_0x00010bb09c1c();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        _objc_release(uVar7);
        lVar15 = lVar15 + 1;
      } while (lVar11 != lVar15);
      puVar10 = auStack_168;
      lVar11 = param_2;
      func_0x00010bf52a60();
    }
    _objc_release(param_2);
    lVar11 = -1;
    puVar3 = puVar4;
    (**(code **)(*(long *)(param_4 + 0x30) + 0x10))(*(long *)(param_4 + 0x30),0xffffffffffffffff);
    _objc_release(puVar4);
  }
LAB_106961930:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar3);
  _objc_retain(puVar10);
  puVar4 = puVar3;
  func_0x00010c08fa60();
  if ((puVar4 != (undefined *)0x0) &&
     (puVar8 = puVar10, func_0x00010bf529e0(), puVar8 != (undefined1 *)0x0)) {
    lVar15 = *(long *)(param_2 + 0x120);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar15 != 0) {
      puVar9 = puVar10;
      func_0x00010bf00d20();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar9;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar8 != (undefined1 *)0x0) {
        puVar16 = (undefined1 *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar9);
          }
          lVar14 = *(long *)((long)puVar16 * 8);
          func_0x00010c08fa60();
          if (lVar14 != 0) {
            lVar14 = lVar15;
            func_0x00010befba60(lVar15);
            _objc_retainAutoreleasedReturnValue();
            _objc_retain(puVar3);
            func_0x00010c25ff60(lVar14);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(lVar14);
            _objc_release(puVar3);
          }
          puVar16 = puVar16 + 1;
        } while (puVar8 != puVar16);
        puVar8 = puVar9;
        func_0x00010bf52a60();
      }
      _objc_release(puVar9);
    }
    _objc_release(lVar15);
  }
  _objc_release(puVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  uVar13 = *(undefined8 *)(puVar3 + 0x20);
  _objc_retain(uVar13);
  uVar5 = *(undefined8 *)(puVar3 + 0x20);
  _objc_retain(uVar5);
  func_0x00010c0c0800(lVar11);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar13);
  return;
}



/* Entry: 10696178c; end: 10696196f;  */

void FUN_10696178c(long param_1,long param_2,undefined *param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  code *pcVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = param_2;
  _objc_retain(param_2);
  lVar4 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar4 == 0) {
    lVar4 = param_2;
    func_0x00010bf529e0();
    if (lVar4 == 0) {
      lVar4 = *(long *)(param_1 + 0x30);
      pcVar10 = *(code **)(lVar4 + 0x10);
      lVar9 = -1;
    }
    else {
      lVar4 = *(long *)(param_1 + 0x28);
      func_0x00010c08fa60();
      if (lVar4 == 0) goto LAB_106961930;
      lVar4 = param_2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar4;
      func_0x000100bf119c();
      lVar9 = 0;
      if ((int)lVar13 == 0) {
        lVar9 = 2;
      }
      _objc_release(lVar4);
      lVar4 = *(long *)(param_1 + 0x30);
      pcVar10 = *(code **)(lVar4 + 0x10);
    }
    param_3 = PTR____NSArray0__struct_11034ab48;
    (*pcVar10)(lVar4,lVar9);
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain(param_2);
    param_4 = auStack_d8;
    lVar9 = param_2;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    while (lVar9 != 0) {
      lVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(param_2);
        }
        uVar3 = (uint)*(undefined8 *)(lVar13 * 8);
        func_0x000100bf119c();
        uVar6 = (ulong)(uVar3 ^ 1);
        func_0x00010bb09c1c();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar5);
        _objc_release(uVar6);
        lVar13 = lVar13 + 1;
      } while (lVar9 != lVar13);
      param_4 = auStack_d8;
      lVar9 = param_2;
      func_0x00010bf52a60();
    }
    _objc_release(param_2);
    lVar9 = -1;
    param_3 = puVar5;
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0xffffffffffffffff);
    _objc_release(puVar5);
  }
LAB_106961930:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar5 = param_3;
  func_0x00010c08fa60();
  if ((puVar5 != (undefined *)0x0) &&
     (puVar7 = param_4, func_0x00010bf529e0(), puVar7 != (undefined1 *)0x0)) {
    lVar13 = *(long *)(param_2 + 0x120);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar13 != 0) {
      puVar8 = param_4;
      func_0x00010bf00d20();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar8;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (puVar7 != (undefined1 *)0x0) {
        puVar14 = (undefined1 *)0x0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(puVar8);
          }
          lVar12 = *(long *)((long)puVar14 * 8);
          func_0x00010c08fa60();
          if (lVar12 != 0) {
            lVar12 = lVar13;
            func_0x00010befba60(lVar13);
            _objc_retainAutoreleasedReturnValue();
            _objc_retain(param_3);
            func_0x00010c25ff60(lVar12);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(lVar12);
            _objc_release(param_3);
          }
          puVar14 = puVar14 + 1;
        } while (puVar7 != puVar14);
        puVar7 = puVar8;
        func_0x00010bf52a60();
      }
      _objc_release(puVar8);
    }
    _objc_release(lVar13);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  uVar11 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(uVar11);
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(lVar9);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar11);
  return;
}



/* Entry: 106961970; end: 106961b67; -[SCStoriesSnapPostCoordinator _addShareYoursStoryForShareYoursId:storyIdToStorySnapId:] */

void FUN_106961970(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = param_3;
  func_0x00010c08fa60();
  if ((lVar3 != 0) && (lVar3 = param_4, func_0x00010bf529e0(), lVar3 != 0)) {
    lVar3 = *(long *)(param_1 + 0x120);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = param_4;
      func_0x00010bf00d20();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar5 != 0) {
        lVar9 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar4);
          }
          lVar8 = *(long *)(lVar9 * 8);
          func_0x00010c08fa60();
          if (lVar8 != 0) {
            lVar8 = lVar3;
            func_0x00010befba60(lVar3);
            _objc_retainAutoreleasedReturnValue();
            _objc_retain(param_3);
            func_0x00010c25ff60(lVar8);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(lVar8);
            _objc_release(param_3);
          }
          lVar9 = lVar9 + 1;
        } while (lVar5 != lVar9);
        lVar5 = lVar4;
        func_0x00010bf52a60();
      }
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(uVar7);
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 106961b68; end: 106961c2f;  */

void FUN_106961b68(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106961c30; end: 106961c37;  */

void FUN_106961c30(void)

{
  return;
}



/* Entry: 106961c38; end: 106961c4f; -[SCStoriesSnapPostCoordinator postingStateForwarder] */

void FUN_106961c38(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x130);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106961c50; end: 106961c5b; -[SCStoriesSnapPostCoordinator setPostingStateForwarder:] */

void FUN_106961c50(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x130,param_3);
  return;
}



/* Entry: 106961c5c; end: 106961e1f; -[SCStoriesSnapPostCoordinator .cxx_destruct] */

void FUN_106961c5c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x130);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
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



/* Entry: 106961e20; end: 106961e97;  */

undefined8 FUN_106961e20(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c27d100();
  uVar1 = 8;
  if (param_1 != 0xc9) {
    uVar1 = 0;
  }
  uVar3 = 7;
  if (param_1 != 0x67) {
    uVar3 = uVar1;
  }
  uVar1 = 6;
  if (param_1 != 0x66) {
    uVar1 = 0;
  }
  uVar2 = 5;
  if (param_1 != 0x65) {
    uVar2 = uVar1;
  }
  if (param_1 < 0x67) {
    uVar3 = uVar2;
  }
  uVar1 = 4;
  if (param_1 != 0xc) {
    uVar1 = 0;
  }
  uVar2 = 3;
  if (param_1 != 6) {
    uVar2 = uVar1;
  }
  uVar1 = 2;
  if (param_1 != 1) {
    uVar1 = uVar2;
  }
  if (param_1 < 0x65) {
    uVar3 = uVar1;
  }
  return uVar3;
}



/* Entry: 106961e98; end: 106961f2b;  */

bool FUN_106961e98(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain();
  uVar4 = param_1;
  func_0x00010bf6ef00();
  if (uVar4 == 0) {
    bVar1 = false;
  }
  else {
    uVar4 = 0;
    do {
      uVar2 = param_1;
      func_0x00010bf6eee0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c296de0();
      _objc_release(uVar2);
      bVar1 = (int)uVar3 == 1;
      if (bVar1) break;
      uVar4 = uVar4 + 1;
      uVar2 = param_1;
      func_0x00010bf6ef00();
    } while (uVar4 < uVar2);
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 106961f2c; end: 1069620c7;  */

ulong FUN_106961f2c(ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x00010bf6ecc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
      uVar7 = 0x7fffffffffffffff;
LAB_106962078:
      _objc_release(param_2);
      _objc_release(param_1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
        return uVar7;
      }
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c13f910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)();
      return param_1;
    }
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar7 = *(ulong *)(lVar8 * 8);
      uVar3 = uVar7;
      func_0x00010bfd63e0();
      if ((int)uVar3 != 0) {
        uVar3 = uVar7;
        func_0x00010bf6ec60();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c272380();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010846a3a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        _objc_release(uVar3);
        uVar3 = uVar5;
        func_0x00010c0720c0();
        if ((uVar3 & 1) != 0) {
          func_0x00010c0c6200(uVar7);
          uVar7 = uVar7 & 0xffffffff;
          _objc_release(uVar5);
          goto LAB_106962078;
        }
        _objc_release(uVar5);
      }
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
    lVar2 = param_2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1069620c8; end: 1069620d3; -[SCStoriesSnapPoster retryPostingSnapsWithSnapComponentId:storyIds:completion:] */

void FUN_1069620c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13f910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_retryPostingSnapsWithSnapCompone_11262d860,param_3,param_4,0,param_5);
  return;
}



/* Entry: 1069620d4; end: 106962793; -[SCStoriesSnapPoster retryPostingSnapsWithSnapComponentId:storyIds:skipRetryCount:completion:] */

void FUN_1069620d4(long param_1,undefined8 param_2,long param_3,undefined1 *param_4,
                  undefined1 param_5,long param_6)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined **ppuVar16;
  undefined8 uVar17;
  long lVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuStack_308;
  undefined **ppuStack_300;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  code *pcStack_2e0;
  undefined *puStack_2d8;
  long lStack_2d0;
  undefined1 *puStack_2c8;
  undefined **ppuStack_2c0;
  undefined *puStack_2b8;
  undefined1 *puStack_2b0;
  undefined *puStack_2a8;
  long lStack_2a0;
  undefined1 auStack_298 [8];
  undefined1 uStack_290;
  undefined1 auStack_288 [8];
  undefined *puStack_280;
  undefined8 uStack_278;
  code *pcStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  code *pcStack_220;
  undefined *puStack_218;
  long lStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar1 = param_4;
  func_0x00010c0d3c80();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  ppuVar3 = *(undefined ***)(param_1 + 0x18);
  func_0x00010bfa94e0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 0;
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  _objc_retain();
  ppuStack_308 = ppuVar3;
  func_0x00010bf52a60();
  ppuVar8 = ppuVar3;
  if (ppuStack_308 == (undefined **)0x0) {
    ppuStack_300 = (undefined **)0x0;
  }
  else {
    ppuStack_300 = (undefined **)0x0;
    lVar15 = *plStack_1b0;
    do {
      ppuVar20 = (undefined **)0x0;
      do {
        if (*plStack_1b0 != lVar15) {
          _objc_enumerationMutation(ppuVar3);
        }
        ppuVar4 = *(undefined ***)(lStack_1b8 + (long)ppuVar20 * 8);
        uVar13 = 0;
        lStack_1f8 = 0;
        uStack_200 = 0;
        uStack_1e8 = 0;
        plStack_1f0 = (long *)0x0;
        uStack_1d8 = 0;
        uStack_1e0 = 0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        ppuVar5 = ppuVar4;
        func_0x00010c25b340();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar5;
        func_0x00010bf52a60();
        if (ppuVar6 != (undefined **)0x0) {
          lVar18 = *plStack_1f0;
          do {
            ppuVar16 = (undefined **)0x0;
            do {
              if (*plStack_1f0 != lVar18) {
                _objc_enumerationMutation(ppuVar5);
              }
              ppuVar19 = *(undefined ***)(lStack_1f8 + (long)ppuVar16 * 8);
              ppuVar7 = ppuVar19;
              func_0x00010bf3cf60();
              _objc_retainAutoreleasedReturnValue();
              ppuVar8 = ppuVar7;
              func_0x000108ea5f00();
              _objc_retainAutoreleasedReturnValue();
              ppuVar9 = ppuVar8;
              func_0x00010c0720c0();
              _objc_release(ppuVar8);
              _objc_release(ppuVar7);
              if ((int)ppuVar9 != 0) {
                ppuVar8 = ppuVar19;
                func_0x00010bf0e700();
                _objc_retainAutoreleasedReturnValue();
                puVar10 = PTR___NSConcreteStackBlock_11034bd00;
                puStack_230 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_228 = 0xc2000000;
                pcStack_220 = FUN_106962794;
                puStack_218 = &UNK_11094d7a0;
                lStack_210 = param_1;
                _objc_retain(puVar2);
                puStack_258 = puVar10;
                uStack_250 = 0xc2000000;
                uStack_248 = 0x106962864;
                puStack_240 = &UNK_110946508;
                puStack_208 = puVar2;
                _objc_retain(puVar2);
                puStack_280 = puVar10;
                uStack_278 = 0xc2000000;
                pcStack_270 = FUN_106962954;
                puStack_268 = &UNK_110946568;
                puStack_238 = puVar2;
                _objc_retain(puVar2);
                puStack_260 = puVar2;
                func_0x00010c0c1340(ppuVar8);
                _objc_release(ppuVar8);
                _objc_retain(ppuVar19);
                _objc_release(ppuStack_300);
                func_0x00010c259cc0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c12d360(puVar1);
                _objc_release(ppuVar4);
                _objc_release(puStack_260);
                _objc_release(puStack_238);
                _objc_release(puStack_208);
                ppuVar8 = ppuVar4;
                ppuStack_300 = ppuVar19;
                goto LAB_1069623dc;
              }
              ppuVar16 = (undefined **)((long)ppuVar16 + 1);
            } while (ppuVar6 != ppuVar16);
            ppuVar6 = ppuVar5;
            func_0x00010bf52a60();
          } while (ppuVar6 != (undefined **)0x0);
        }
LAB_1069623dc:
        _objc_release(ppuVar5);
        ppuVar20 = (undefined **)((long)ppuVar20 + 1);
      } while (ppuVar20 != ppuStack_308);
      ppuStack_308 = ppuVar3;
      func_0x00010bf52a60();
    } while (ppuStack_308 != (undefined **)0x0);
  }
  _objc_release(ppuVar3);
  puVar10 = puVar2;
  func_0x00010bf529e0();
  if (puVar10 == (undefined *)0x0) {
    func_0x00010c0ac860(*(undefined8 *)(param_1 + 0x40));
    puVar14 = param_4;
    (**(code **)(param_6 + 0x10))(param_6,param_4);
  }
  else {
    _objc_retain(ppuStack_300);
    _objc_retain(param_3);
    ppuVar8 = ppuStack_300;
    func_0x00010c0c3fe0(ppuStack_300);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126bfca8;
    _objc_alloc(PTR_PTR_1126bfca8);
    ppuVar20 = ppuVar8;
    func_0x00010c086560(ppuVar8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar8;
    func_0x00010c085300(ppuVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c020b60(puVar10);
    _objc_release(ppuVar5);
    _objc_release(ppuVar20);
    ppuVar20 = ppuStack_300;
    func_0x00010c26f2a0(ppuStack_300);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuStack_300);
    func_0x00010bf9c720(ppuVar20);
    _objc_release(ppuVar20);
    puVar11 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf655e0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27dd80(ppuVar8);
    func_0x0001084f2c4c();
    puVar12 = PTR_PTR_1126c3390;
    _objc_alloc();
    func_0x00010c083e00(ppuVar8);
    func_0x00010bffa840();
    _objc_release(param_3);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(ppuVar8);
    _objc_initWeak(auStack_288,param_1);
    puStack_2f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2e8 = 0xc2000000;
    pcStack_2e0 = FUN_1069629fc;
    puStack_2d8 = &UNK_11094d7d0;
    ppuVar8 = &puStack_2f0;
    puVar14 = auStack_288;
    _objc_copyWeak(auStack_298,puVar14);
    _objc_retain(param_3);
    lStack_2d0 = param_3;
    _objc_retain(param_6);
    lStack_2a0 = param_6;
    _objc_retain(param_4);
    puStack_2c8 = param_4;
    _objc_retain(ppuStack_300);
    ppuStack_2c0 = ppuStack_300;
    _objc_retain(puVar2);
    puStack_2b8 = puVar2;
    _objc_retain(puVar1);
    puStack_2b0 = puVar1;
    _objc_retain(puVar12);
    ppuVar20 = &puStack_2f0;
    puStack_2a8 = puVar12;
    uStack_290 = param_5;
    _objc_retainBlock();
    uVar13 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11d600();
    _objc_release(uVar13);
    _objc_release(ppuVar20);
    _objc_release(puStack_2a8);
    _objc_release(puStack_2b0);
    _objc_release(puStack_2b8);
    _objc_release(ppuStack_2c0);
    _objc_release(puStack_2c8);
    _objc_release(lStack_2a0);
    _objc_release(lStack_2d0);
    _objc_destroyWeak(auStack_298);
    _objc_destroyWeak(auStack_288);
    _objc_release(puVar12);
  }
  _objc_release(ppuVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(ppuStack_300);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_destroyWeak(ppuVar8 + 0xb);
    _objc_destroyWeak(auStack_288);
    __Unwind_Resume();
    uVar17 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x38);
    _objc_retain(puVar14);
    func_0x00010c269d40(uVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar17;
    func_0x00010c25aac0();
    _objc_release(uVar17);
    puVar2 = PTR_PTR_1126c3310;
    _objc_alloc(PTR_PTR_1126c3310);
    puVar1 = puVar14;
    func_0x00010bf62820(puVar14);
    _objc_release(puVar14);
    func_0x00010846a47c(uVar13,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02bae0(puVar2);
    func_0x00010c1d0640(*(undefined8 *)(param_3 + 0x28));
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar13);
    return;
  }
  return;
}



/* Entry: 106962794; end: 106962953;  */

void FUN_106962794(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c25aac0();
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126c3310;
  _objc_alloc(PTR_PTR_1126c3310);
  uVar3 = param_2;
  func_0x00010bf62820(param_2);
  _objc_release(param_2);
  func_0x00010846a47c(uVar1,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02bae0(puVar2);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106962954; end: 1069629fb;  */

void FUN_106962954(long param_1,int param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x00010c07f5e0();
  uVar2 = 1;
  if (param_2 != 0) {
    uVar2 = 2;
  }
  puVar1 = PTR_PTR_1126c3310;
  _objc_alloc(PTR_PTR_1126c3310);
  func_0x00010846a65c(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02bae0(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puVar3 = puVar1;
  func_0x00010846a2f4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1069629fc; end: 106962b1f;  */

void FUN_1069629fc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c23fc80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar2 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar2);
  if (lVar1 == 0) {
    func_0x00010be565a0(lVar2);
    _objc_release(lVar2);
    (**(code **)(*(long *)(param_1 + 0x50) + 0x10))
              (*(long *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x28));
  }
  else {
    lVar1 = param_3;
    func_0x00010c23fc80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c0ef700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be97000(lVar2);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106962b20; end: 106962b2f; -[SCStoriesSnapPoster _logNoMediaData] */

void FUN_106962b20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ac870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_logPostingAsyncRetryWithAbortRea_112608c28,
             &PTR____CFConstantStringClassReference_110e62218);
  return;
}



/* Entry: 106962b30; end: 106962d17; -[SCStoriesSnapPoster _retryPostingSnapsWithSnapComponentId:snap:postingInfo:storyIds:unrecoverableStoryIds:mediaInfo:mediaData:overlayData:skipRetryCount:completion:] */

void FUN_106962b30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
                  undefined8 param_13)

{
  undefined8 uVar1;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_106962d18;
  puStack_c8 = &UNK_11094d800;
  uStack_88 = param_9;
  uStack_70 = param_11;
  uStack_80 = param_10;
  uStack_78 = param_13;
  lStack_c0 = param_1;
  uStack_b8 = param_3;
  uStack_b0 = param_4;
  uStack_a8 = param_5;
  uStack_a0 = param_6;
  uStack_98 = param_7;
  uStack_90 = param_8;
  _objc_retain(param_13);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_e0);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106962d18; end: 106962d5b;  */

void FUN_106962d18(long param_1,undefined8 param_2)

{
  func_0x00010be96fe0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x60),*(undefined1 *)(param_1 + 0x70));
  return;
}



/* Entry: 106962d5c; end: 106963223; -[SCStoriesSnapPoster _retryPostingSnapsOnPerformerWithSnapComponentId:snap:postingInfo:storyIds:unrecoverableStoryIds:mediaInfo:mediaData:overlayData:skipRetryCount:completion:] */

void FUN_106962d5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,byte param_11,undefined4 param_12,
                  long param_13)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_c0 [8];
  undefined1 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  if ((param_11 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x68);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c067fc0();
    _objc_release(lVar3);
    iVar2 = (int)*(undefined8 *)(param_1 + 0x60);
    func_0x00010c067f00();
    if (iVar2 <= lVar4) {
      func_0x00010c0ac860(*(undefined8 *)(param_1 + 0x40));
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x68));
      (**(code **)(param_13 + 0x10))(param_13,param_6);
      goto LAB_106963174;
    }
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x68));
    _objc_release(puVar5);
  }
  func_0x00010c0ac820(*(undefined8 *)(param_1 + 0x40));
  _objc_initWeak(auStack_80,param_1);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_106963224;
  puStack_98 = &UNK_1109490c0;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(param_3);
  ppuVar6 = &puStack_b0;
  uStack_90 = param_3;
  _objc_retainBlock();
  uVar7 = param_8;
  func_0x00010bf93e00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010c086560(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010c085300(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  func_0x00010c21d0e0(uVar8);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  puVar5 = PTR_PTR_1126c3398;
  _objc_alloc(PTR_PTR_1126c3398);
  uVar9 = param_8;
  func_0x00010bf267e0(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffa8e0(puVar5);
  _objc_release(uVar9);
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  func_0x000108ea5f8c(uVar9,param_3,1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x60);
  func_0x000108f4944c();
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(uVar9);
  _objc_copyWeak(auStack_c0,auStack_80);
  _objc_retain(param_5);
  uStack_b8 = uVar1;
  func_0x00010c11da60(uVar8);
  _objc_release(uVar10);
  (**(code **)(param_13 + 0x10))(param_13,param_7);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_c0);
  _objc_release(uVar9);
  _objc_release(param_4);
  _objc_release(uVar9);
  _objc_release(puVar5);
  _objc_release(uVar7);
  _objc_release(ppuVar6);
  _objc_release(uStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
LAB_106963174:
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106963224; end: 1069633f7;  */

void FUN_106963224(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1069633f8;
  puStack_88 = &UNK_110841fb0;
  _objc_copyWeak(auStack_78,param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x10696342c;
  puStack_b8 = &UNK_110859c28;
  uStack_80 = uVar2;
  _objc_copyWeak(auStack_a8,param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  puStack_100 = puVar1;
  uStack_f8 = 0xc2000000;
  uStack_f0 = 0x106963474;
  puStack_e8 = &UNK_110841fb0;
  uStack_b0 = uVar2;
  _objc_copyWeak(auStack_d8,param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uStack_e0 = uVar2;
  _objc_copyWeak(auStack_108,param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  func_0x00010c0c0880(param_2);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_108);
  _objc_release(uStack_e0);
  _objc_destroyWeak(auStack_d8);
  _objc_release(uStack_b0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_2);
  return;
}



/* Entry: 1069633f8; end: 1069634ef;  */

void FUN_1069633f8(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be55bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069634f0; end: 1069635f3;  */

void FUN_1069634f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_1069545b0(uVar1,*(undefined8 *)(param_1 + 0x28),param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar3 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_106953b00(uVar1,*(undefined1 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be76960(lVar3);
  _objc_release(uVar1);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0ac850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar2 + 0x40),PTR_s_logPostingAsyncRetryMediaUploadR_112608c20);
  return;
}



/* Entry: 1069635f4; end: 1069635fb; -[SCStoriesSnapPoster _logMediaUploadResult:] */

void FUN_1069635f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ac850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_logPostingAsyncRetryMediaUploadR_112608c20);
  return;
}



/* Entry: 1069635fc; end: 106963817; -[SCStoriesSnapPoster _postStoryWithPostingInfo:snapDoc:incidentalAttachments:postClientId:] */

void FUN_1069635fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf529e0(param_3);
  puVar1 = PTR_PTR_1126b5be8;
  _objc_retain(param_6);
  _objc_alloc(puVar1);
  func_0x00010bff40a0();
  puVar2 = puVar1;
  func_0x0001008e4748();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba560();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cf428;
  _objc_alloc(PTR_PTR_1126cf428);
  func_0x00010c01ec80();
  puVar4 = PTR_PTR_1126c3300;
  _objc_alloc();
  puVar5 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00bb80(puVar4,param_2,puVar1,puVar5,param_6,puVar3,puVar6,0xffffffffffffffff,0,0);
  _objc_release(param_6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar7 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15ca40();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar7);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 106963818; end: 106963913; -[SCStoriesSnapPoster .cxx_destruct] */

void FUN_106963818(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 106963914; end: 10696396b; -[SCStoriesSnapProPendingSnapManager dealloc] */

void FUN_106963914(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x50));
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x58));
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x70));
  puStack_28 = PTR_PTR_1126f3e40;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10696396c; end: 106963aef; -[SCStoriesSnapProPendingSnapManager insertPostingSnapProSnap:businessIds:] */

undefined1 * FUN_10696396c(long param_1,undefined8 param_2,undefined1 *param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [128];
  long lStack_198;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar10 = param_4;
  func_0x00010bf52a60();
  if (lVar10 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_4);
        }
        uVar8 = *(undefined8 *)(lStack_128 + lVar11 * 8);
        lVar1 = *(long *)(param_1 + 0x10);
        func_0x00010c0e00e0(lVar1,param_2,uVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar1 == 0) {
          puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_opt_new();
          func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10),param_2,puVar2,uVar8);
          _objc_release(puVar2);
        }
        uVar3 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c0e00e0(uVar3,param_2,uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120();
        _objc_release(uVar3);
        lVar11 = lVar11 + 1;
      } while (lVar10 != lVar11);
      lVar10 = param_4;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar10 != 0);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar5);
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  puVar6 = (undefined1 *)puVar5;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf52a60();
  if (puVar7 != (undefined1 *)0x0) {
    lVar10 = *plStack_250;
    do {
      puVar12 = (undefined1 *)0x0;
      do {
        if (*plStack_250 != lVar10) {
          _objc_enumerationMutation(puVar6);
        }
        uVar8 = *(undefined8 *)(lStack_258 + (long)puVar12 * 8);
        lVar9 = *(long *)(param_3 + 0x10);
        func_0x00010c0e00e0(lVar9,param_2,uVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar9 == 0) {
          puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
          func_0x00010c1d0640(*(undefined8 *)(param_3 + 0x10),param_2,puVar2,uVar8);
          _objc_release(puVar2);
        }
        puVar4 = (undefined1 *)puVar5;
        func_0x00010c0e00e0(puVar5,param_2,uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_3 + 0x10);
        func_0x00010c0e00e0(uVar3,param_2,uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120();
        _objc_release(uVar3);
        _objc_release(puVar4);
        puVar12 = puVar12 + 1;
      } while (puVar7 != puVar12);
      puVar7 = puVar6;
      func_0x00010bf52a60(puVar6,param_2,&uStack_260,auStack_218,0x10);
    } while (puVar7 != (undefined1 *)0x0);
  }
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return (undefined1 *)puVar5;
  }
  ___stack_chk_fail();
  puVar6 = *(undefined1 **)((long)puVar5 + 0x48);
  func_0x00010bf1f460(puVar6,param_2,&PTR____CFConstantStringClassReference_110e65e78,0);
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 == (undefined1 *)0x0) {
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = puVar6;
    func_0x00010bf1f3c0(puVar6);
  }
  _objc_release(puVar6);
  return puVar7;
}



/* Entry: 106963af0; end: 106963c97; -[SCStoriesSnapProPendingSnapManager insertPostingSnapProSnapWithBusinessIdsToSnap:] */

long FUN_106963af0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar4 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar4);
        }
        uVar6 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        lVar1 = *(long *)(param_1 + 0x10);
        func_0x00010c0e00e0(lVar1,param_2,uVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar1 == 0) {
          puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
          func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10),param_2,puVar2,uVar6);
          _objc_release(puVar2);
        }
        lVar1 = param_3;
        func_0x00010c0e00e0(param_3,param_2,uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c0e00e0(uVar3,param_2,uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120();
        _objc_release(uVar3);
        _objc_release(lVar1);
        lVar8 = lVar8 + 1;
      } while (lVar5 != lVar8);
      lVar5 = lVar4;
      func_0x00010bf52a60(lVar4,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar5 != 0);
  }
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar4 = *(long *)(param_3 + 0x48);
  func_0x00010bf1f460(lVar4,param_2,&PTR____CFConstantStringClassReference_110e65e78,0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    lVar5 = 1;
  }
  else {
    lVar5 = lVar4;
    func_0x00010bf1f3c0(lVar4);
  }
  _objc_release(lVar4);
  return lVar5;
}



/* Entry: 106963c98; end: 106963cf3; -[SCStoriesSnapProPendingSnapManager _pendingSnapPlaybackInfoEnabled] */

long FUN_106963c98(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010bf1f460(lVar1,param_2,&PTR____CFConstantStringClassReference_110e65e78,0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = lVar1;
    func_0x00010bf1f3c0(lVar1);
  }
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 106963cf4; end: 1069642bf; -[SCStoriesSnapProPendingSnapManager insertPostingContent:storyMetadata:snapProDestinations:spotlightShareInfo:] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x000106963ed4 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_106963cf4(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined **ppuVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  undefined *puVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined8 *puVar24;
  ulong uVar25;
  undefined8 *puVar26;
  uint uVar27;
  undefined *puVar28;
  undefined8 *puVar29;
  undefined *puVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  undefined *puVar33;
  long lVar34;
  undefined8 *puStack_7a0;
  undefined *puStack_560;
  undefined8 *puStack_558;
  undefined8 *puStack_520;
  undefined8 uStack_4d0;
  long lStack_4c8;
  long *plStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  long lStack_488;
  long *plStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  long lStack_448;
  undefined8 auStack_3c0 [32];
  long lStack_2c0;
  undefined *puStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 auStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar24 = param_3;
  puVar26 = param_4;
  puVar29 = param_5;
  puVar15 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_6 == (undefined8 *)0x0) {
    puVar31 = param_4;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar31;
    func_0x00010c08fa60();
    if (puVar22 != (undefined8 *)0x0) {
      puVar22 = param_3;
      func_0x00010bf4bc60();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar22;
      func_0x00010c08fa60();
      if (puVar3 != (undefined8 *)0x0) {
        puVar3 = param_5;
        func_0x00010bf529e0();
        _objc_release(puVar22);
        if (puVar3 == (undefined8 *)0x0) goto LAB_106964264;
        puVar22 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        lStack_1a8 = 0;
        uStack_1b0 = 0;
        uStack_198 = 0;
        plStack_1a0 = (long *)0x0;
        uStack_188 = 0;
        uStack_190 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        _objc_retain(param_5);
        puVar24 = &uStack_1b0;
        puVar26 = auStack_f0;
        puVar29 = (undefined8 *)0x10;
        puVar3 = param_5;
        func_0x00010bf52a60();
        if (puVar3 != (undefined8 *)0x0) {
          lVar20 = *plStack_1a0;
          do {
            puVar24 = (undefined8 *)0x0;
            do {
              if (*plStack_1a0 != lVar20) {
                _objc_enumerationMutation(param_5);
              }
              lVar21 = *(long *)(lStack_1a8 + (long)puVar24 * 8);
              lVar23 = lVar21;
              func_0x00010bfd4d80();
              if ((int)lVar23 == 0) {
                lVar23 = 0;
              }
              else {
                func_0x00010bf24ec0();
                _objc_retainAutoreleasedReturnValue();
                lVar23 = lVar21;
                func_0x000108f579f0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar21);
              }
              lVar21 = lVar23;
              func_0x00010c08fa60();
              if (lVar21 != 0) {
                lVar4 = *(long *)(param_1 + 0x10);
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                lVar17 = lVar4;
                func_0x00010bf52a60();
                lVar21 = lRam0000000000000000;
                if (lVar17 == 0) {
                  _objc_release(lVar4);
                }
                else {
                  uVar27 = 0;
                  do {
                    lVar34 = 0;
                    do {
                      if (lRam0000000000000000 != lVar21) {
                        _objc_enumerationMutation(lVar4);
                      }
                      uVar5 = *(undefined8 *)(lVar34 * 8);
                      func_0x00010bf3cf60();
                      _objc_retainAutoreleasedReturnValue();
                      uVar19 = uVar5;
                      func_0x00010c0720c0();
                      _objc_release(uVar5);
                      uVar27 = (uint)uVar19 | uVar27;
                      lVar34 = lVar34 + 1;
                    } while (lVar17 != lVar34);
                    lVar17 = lVar4;
                    func_0x00010bf52a60();
                  } while (lVar17 != 0);
                  _objc_release(lVar4);
                  if ((uVar27 & 1) != 0) goto LAB_106963f7c;
                }
                func_0x00010befa120(puVar22);
              }
LAB_106963f7c:
              _objc_release(lVar23);
              puVar24 = (undefined8 *)((long)puVar24 + 1);
            } while (puVar24 != puVar3);
            puVar24 = &uStack_1b0;
            puVar26 = auStack_f0;
            puVar29 = (undefined8 *)0x10;
            puVar3 = param_5;
            func_0x00010bf52a60();
          } while (puVar3 != (undefined8 *)0x0);
        }
        _objc_release(param_5);
        puVar3 = puVar22;
        func_0x00010bf529e0();
        if (puVar3 == (undefined8 *)0x0) goto LAB_106964260;
        puVar3 = param_3;
        FUN_1069547f4();
        _objc_retainAutoreleasedReturnValue();
        if (puVar3 != (undefined8 *)0x0) {
          puVar24 = puVar3;
          func_0x00010bfdd660();
          if ((int)puVar24 == 0) {
LAB_106964044:
            puVar28 = PTR__OBJC_CLASS___NSDate_1126ae770;
            _objc_opt_new();
          }
          else {
            puVar24 = puVar3;
            func_0x00010c270d80();
            _objc_retainAutoreleasedReturnValue();
            puVar26 = puVar24;
            func_0x00010c23fb40();
            _objc_release(puVar24);
            if ((long)puVar26 < 1) goto LAB_106964044;
            puVar28 = PTR__OBJC_CLASS___NSDate_1126ae770;
            func_0x00010bf655e0((double)puVar26 / 1000.0);
            _objc_retainAutoreleasedReturnValue();
          }
          puVar6 = puVar31;
          param_2 = puVar3;
          FUN_106955d08(puVar31,puVar3,3);
          _objc_retainAutoreleasedReturnValue();
          puVar24 = param_4;
          func_0x00010bf30620();
          _objc_retainAutoreleasedReturnValue();
          puVar26 = puVar24;
          func_0x00010c08fa60();
          if (puVar26 == (undefined8 *)0x0) {
            puStack_200 = (undefined8 *)0x0;
          }
          else {
            puStack_200 = param_4;
            func_0x00010bf30620();
            _objc_retainAutoreleasedReturnValue();
          }
          _objc_release(puVar24);
          puVar24 = param_4;
          func_0x00010bfcd380();
          puStack_208 = PTR__OBJC_CLASS___NSDate_1126ae770;
          if ((long)puVar24 < 1) {
            puStack_208 = (undefined *)0x0;
          }
          else {
            func_0x00010bfcd380(param_4);
            func_0x00010bf651a0();
            _objc_retainAutoreleasedReturnValue();
          }
          lVar20 = param_1;
          func_0x00010be712c0();
          if ((int)lVar20 == 0) {
            puVar13 = (undefined *)0x0;
          }
          else {
            puVar33 = PTR_PTR_1126c2fc8;
            _objc_alloc(PTR_PTR_1126c2fc8);
            func_0x00010c0559e0();
            puVar30 = PTR_PTR_1126c2fd0;
            func_0x00010c293b20();
            _objc_retainAutoreleasedReturnValue();
            ppuVar14 = *(undefined ***)(param_1 + 0xa0);
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
            if (ppuVar14 != (undefined **)0x0) {
              ppuVar1 = ppuVar14;
            }
            _objc_retain(ppuVar1);
            _objc_release(ppuVar14);
            puVar13 = puVar30;
            param_2 = puVar31;
            FUN_106954904(0x40f5180000000000,puVar30,puVar31,puVar3,param_4,ppuVar1,
                          &PTR____CFConstantStringClassReference_110daafd8,0);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar1);
            _objc_release(puVar30);
            _objc_release(puVar33);
          }
          puVar7 = (undefined8 *)PTR_PTR_1126c3338;
          _objc_alloc();
          puVar29 = puStack_200;
          puVar15 = puVar6;
          func_0x00010bffefc0();
          puVar24 = puVar7;
          puVar26 = puVar22;
          func_0x00010c066c60(param_1);
          _objc_release(puVar7);
          _objc_release(puVar13);
          _objc_release(puStack_208);
          _objc_release(puStack_200);
          _objc_release(puVar6);
          _objc_release(puVar28);
        }
        _objc_release(puVar3);
      }
LAB_106964260:
      _objc_release(puVar22);
    }
LAB_106964264:
    _objc_release(puVar31);
  }
  else {
    puVar24 = param_3;
    puVar26 = param_4;
    puVar29 = param_5;
    func_0x00010be3c780(param_1);
    puVar15 = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lStack_2c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar31 = puVar24;
  puVar22 = puVar26;
  _objc_retain(puVar24);
  _objc_retain(puVar26);
  _objc_retain(puVar29);
  _objc_retain(puVar15);
  puVar3 = puVar26;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c08fa60();
  if (puVar6 != (undefined8 *)0x0) {
    puVar6 = puVar24;
    func_0x00010bf4bc60();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c08fa60();
    if (puVar7 != (undefined8 *)0x0) {
      puVar7 = puVar29;
      func_0x00010bf529e0();
      _objc_release(puVar6);
      if (puVar7 == (undefined8 *)0x0) goto LAB_106964a8c;
      puVar6 = puVar24;
      FUN_1069547f4();
      _objc_retainAutoreleasedReturnValue();
      if (puVar6 != (undefined8 *)0x0) {
        puVar31 = puVar26;
        func_0x00010bf30620();
        _objc_retainAutoreleasedReturnValue();
        puVar22 = puVar31;
        func_0x00010c08fa60();
        if (puVar22 == (undefined8 *)0x0) {
          puStack_558 = (undefined8 *)0x0;
        }
        else {
          puStack_558 = puVar26;
          func_0x00010bf30620();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(puVar31);
        puVar31 = puVar26;
        func_0x00010bfcd380();
        puStack_560 = PTR__OBJC_CLASS___NSDate_1126ae770;
        if ((long)puVar31 < 1) {
          puStack_560 = (undefined *)0x0;
        }
        else {
          func_0x00010bfcd380(puVar26);
          func_0x00010bf651a0();
          _objc_retainAutoreleasedReturnValue();
        }
        uStack_4a8 = 0;
        uStack_4b0 = 0;
        uStack_498 = 0;
        uStack_4a0 = 0;
        lStack_4c8 = 0;
        uStack_4d0 = 0;
        uStack_4b8 = 0;
        plStack_4c0 = (long *)0x0;
        _objc_retain(puVar29);
        puVar31 = &uStack_4d0;
        puVar22 = auStack_3c0;
        puStack_520 = puVar29;
        func_0x00010bf52a60();
        if (puStack_520 != (undefined8 *)0x0) {
          lVar20 = *plStack_4c0;
          do {
            puVar31 = (undefined8 *)0x0;
            do {
              if (*plStack_4c0 != lVar20) {
                _objc_enumerationMutation(puVar29);
              }
              lVar21 = *(long *)(lStack_4c8 + (long)puVar31 * 8);
              lVar23 = lVar21;
              func_0x00010bfd4d80();
              if ((int)lVar23 == 0) {
                lVar23 = 0;
              }
              else {
                func_0x00010bf24ec0();
                _objc_retainAutoreleasedReturnValue();
                lVar23 = lVar21;
                func_0x000108f579f0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar21);
              }
              lVar21 = lVar23;
              func_0x00010c08fa60();
              if (lVar21 != 0) {
                _objc_retain(lVar23);
                if (puVar15 == (undefined8 *)0x0) {
                  puVar22 = (undefined8 *)0x7fffffffffffffff;
                }
                else {
                  uStack_468 = 0;
                  uStack_470 = 0;
                  uStack_458 = 0;
                  uStack_460 = 0;
                  lStack_488 = 0;
                  uStack_490 = 0;
                  uStack_478 = 0;
                  plStack_480 = (long *)0x0;
                  puVar7 = puVar15;
                  func_0x00010bf6ecc0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar22 = puVar7;
                  func_0x00010bf52a60();
                  if (puVar22 == (undefined8 *)0x0) {
                    puVar22 = (undefined8 *)0x7fffffffffffffff;
                  }
                  else {
                    lVar21 = *plStack_480;
                    do {
                      puVar32 = (undefined8 *)0x0;
                      do {
                        if (*plStack_480 != lVar21) {
                          _objc_enumerationMutation(puVar7);
                        }
                        uVar25 = *(ulong *)(lStack_488 + (long)puVar32 * 8);
                        uVar16 = uVar25;
                        func_0x00010bfd63e0();
                        if ((int)uVar16 != 0) {
                          uVar16 = uVar25;
                          func_0x00010bf6ec60();
                          _objc_retainAutoreleasedReturnValue();
                          uVar8 = uVar16;
                          func_0x00010c272380();
                          _objc_retainAutoreleasedReturnValue();
                          uVar9 = uVar8;
                          func_0x00010846a3a0();
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release(uVar8);
                          _objc_release(uVar16);
                          uVar16 = uVar9;
                          func_0x00010c0720c0();
                          if ((uVar16 & 1) != 0) {
                            func_0x00010c0c6200();
                            puVar22 = (undefined8 *)(uVar25 & 0xffffffff);
                            _objc_release(uVar9);
                            goto LAB_106964628;
                          }
                          _objc_release(uVar9);
                        }
                        puVar32 = (undefined8 *)((long)puVar32 + 1);
                      } while (puVar22 != puVar32);
                      puVar22 = puVar7;
                      func_0x00010bf52a60();
                    } while (puVar22 != (undefined8 *)0x0);
                    puVar22 = (undefined8 *)0x7fffffffffffffff;
                  }
LAB_106964628:
                  _objc_release(puVar7);
                }
                _objc_release(lVar23);
                _objc_retain(puVar3);
                _objc_retain(puVar6);
                puVar32 = puVar3;
                puVar7 = puVar6;
                if (puVar22 != (undefined8 *)0x7fffffffffffffff) {
                  puVar10 = puVar24;
                  func_0x00010c09dc00();
                  _objc_retainAutoreleasedReturnValue();
                  puVar11 = puVar10;
                  func_0x00010bf529e0();
                  _objc_release(puVar10);
                  if (puVar22 < puVar11) {
                    puVar10 = puVar24;
                    func_0x00010c09dc00();
                    _objc_retainAutoreleasedReturnValue();
                    puVar11 = puVar10;
                    func_0x00010c0dfd40();
                    _objc_retainAutoreleasedReturnValue();
                    puVar12 = puVar11;
                    func_0x000107d6b108();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(puVar11);
                    _objc_release(puVar10);
                    puVar10 = puVar12;
                    func_0x00010c08fa60();
                    if (puVar10 != (undefined8 *)0x0) {
                      _objc_retain(puVar12);
                      _objc_release(puVar3);
                      puVar32 = puVar12;
                    }
                    _objc_release(puVar12);
                  }
                  puVar10 = puVar15;
                  func_0x00010c245480();
                  _objc_retainAutoreleasedReturnValue();
                  puVar11 = puVar10;
                  func_0x00010bf529e0();
                  _objc_release(puVar10);
                  if (puVar22 < puVar11) {
                    puVar22 = puVar15;
                    func_0x00010c245480();
                    _objc_retainAutoreleasedReturnValue();
                    puVar7 = puVar22;
                    func_0x00010c0dfd40();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(puVar6);
                    _objc_release(puVar22);
                  }
                }
                puVar13 = (undefined *)param_3[2];
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                puVar28 = puVar13;
                func_0x00010bf52a60();
                lVar21 = lRam0000000000000000;
                while (puVar28 != (undefined *)0x0) {
                  puVar33 = (undefined *)0x0;
                  do {
                    if (lRam0000000000000000 != lVar21) {
                      _objc_enumerationMutation(puVar13);
                    }
                    uVar25 = *(ulong *)((long)puVar33 * 8);
                    func_0x00010bf3cf60();
                    _objc_retainAutoreleasedReturnValue();
                    uVar16 = uVar25;
                    func_0x00010c0720c0();
                    _objc_release(uVar25);
                    if ((uVar16 & 1) != 0) goto LAB_106964a10;
                    puVar33 = puVar33 + 1;
                  } while (puVar28 != puVar33);
                  puVar28 = puVar13;
                  func_0x00010bf52a60();
                }
                _objc_release(puVar13);
                puVar22 = puVar7;
                func_0x00010bfdd660();
                if ((int)puVar22 == 0) {
LAB_10696488c:
                  puVar13 = PTR__OBJC_CLASS___NSDate_1126ae770;
                  _objc_opt_new();
                }
                else {
                  puVar22 = puVar7;
                  func_0x00010c270d80();
                  _objc_retainAutoreleasedReturnValue();
                  puVar10 = puVar22;
                  func_0x00010c23fb40();
                  _objc_release(puVar22);
                  if ((long)puVar10 < 1) goto LAB_10696488c;
                  puVar13 = PTR__OBJC_CLASS___NSDate_1126ae770;
                  func_0x00010bf655e0((double)puVar10 / 1000.0);
                  _objc_retainAutoreleasedReturnValue();
                }
                puVar22 = puVar32;
                param_2 = puVar7;
                FUN_106955d08(puVar32,puVar7,3);
                _objc_retainAutoreleasedReturnValue();
                puVar10 = param_3;
                func_0x00010be712c0();
                if ((int)puVar10 == 0) {
                  puVar28 = (undefined *)0x0;
                }
                else {
                  puVar33 = PTR_PTR_1126c2fc8;
                  _objc_alloc(PTR_PTR_1126c2fc8);
                  func_0x00010c0559e0();
                  puVar30 = PTR_PTR_1126c2fd0;
                  func_0x00010c293b20();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar14 = (undefined **)param_3[0x14];
                  func_0x00010c2923e0();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
                  if (ppuVar14 != (undefined **)0x0) {
                    ppuVar1 = ppuVar14;
                  }
                  _objc_retain(ppuVar1);
                  _objc_release(ppuVar14);
                  puVar28 = puVar30;
                  param_2 = puVar32;
                  FUN_106954904(0x40f5180000000000,puVar30,puVar32,puVar7,puVar26,ppuVar1,
                                &PTR____CFConstantStringClassReference_110daafd8,0);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(ppuVar1);
                  _objc_release(puVar30);
                  _objc_release(puVar33);
                }
                puVar33 = PTR_PTR_1126c3338;
                _objc_alloc(PTR_PTR_1126c3338);
                func_0x00010bffefc0();
                puVar30 = PTR__OBJC_CLASS___NSArray_1126ae530;
                lStack_448 = lVar23;
                func_0x00010bf0a140();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c066c60(param_3);
                _objc_release(puVar30);
                _objc_release(puVar33);
                _objc_release(puVar28);
                _objc_release(puVar22);
LAB_106964a10:
                _objc_release(puVar13);
                _objc_release(puVar7);
                _objc_release(puVar32);
              }
              _objc_release(lVar23);
              puVar31 = (undefined8 *)((long)puVar31 + 1);
            } while (puVar31 != puStack_520);
            puVar31 = &uStack_4d0;
            puVar22 = auStack_3c0;
            puStack_520 = puVar29;
            func_0x00010bf52a60();
          } while (puStack_520 != (undefined8 *)0x0);
        }
        _objc_release(puVar29);
        _objc_release(puStack_560);
        _objc_release(puStack_558);
      }
    }
    _objc_release(puVar6);
  }
LAB_106964a8c:
  _objc_release(puVar3);
  _objc_release(puVar15);
  _objc_release(puVar29);
  _objc_release(puVar26);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c0) {
    return;
  }
  ___stack_chk_fail();
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar31);
  _objc_retain(puVar22);
  puVar26 = puVar31;
  func_0x00010c08fa60();
  if ((puVar26 != (undefined8 *)0x0) &&
     (puVar26 = puVar22, func_0x00010bf529e0(), puVar26 != (undefined8 *)0x0)) {
    _objc_retain(puVar22);
    puStack_7a0 = puVar22;
    func_0x00010bf52a60();
    lVar23 = lRam0000000000000000;
    puVar26 = puVar22;
    if (puStack_7a0 != (undefined8 *)0x0) {
      bVar2 = false;
      do {
        puVar26 = (undefined8 *)0x0;
        do {
          if (lRam0000000000000000 != lVar23) {
            _objc_enumerationMutation(puVar22);
          }
          puVar29 = *(undefined8 **)((long)puVar26 * 8);
          puVar33 = (undefined *)puVar24[2];
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar33;
          func_0x00010bf529e0();
          puVar28 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          if (puVar13 != (undefined *)0x0) {
            func_0x00010bf529e0(puVar33);
            func_0x00010bf0a0e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_retain(puVar33);
            puVar13 = puVar33;
            func_0x00010bf52a60();
            lVar21 = lRam0000000000000000;
            while (puVar13 != (undefined *)0x0) {
              puVar30 = (undefined *)0x0;
              do {
                if (lRam0000000000000000 != lVar21) {
                  _objc_enumerationMutation(puVar33);
                }
                lVar34 = *(long *)((long)puVar30 * 8);
                lVar17 = lVar34;
                func_0x00010bf3cf60(lVar34);
                _objc_retainAutoreleasedReturnValue();
                lVar4 = lVar17;
                func_0x000108ea5f00();
                _objc_retainAutoreleasedReturnValue();
                puVar15 = puVar31;
                func_0x00010c0720c0();
                _objc_release(lVar4);
                _objc_release(lVar17);
                if ((int)puVar15 == 0) {
                  func_0x00010befa120(puVar28);
                }
                else {
                  uVar16 = puVar24[9];
                  func_0x000108f4853c();
                  if ((uVar16 & 1) == 0) {
                    puVar15 = puVar24;
                    func_0x00010be218c0();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release();
                    if (puVar15 == (undefined8 *)0x0) goto LAB_106964d64;
                    lVar17 = puVar24[0x11];
                    func_0x00010c269d40(lVar17);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bf3cf60();
                    _objc_retainAutoreleasedReturnValue();
                    puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
                    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c06a1a0(lVar17);
                    _objc_release(puVar18);
                    _objc_release(lVar34);
                  }
                  else {
LAB_106964d64:
                    func_0x00010bf3cf60();
                    _objc_retainAutoreleasedReturnValue();
                    lVar17 = lVar34;
                    param_2 = puVar29;
                    FUN_106964f18();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(lVar34);
                    lVar4 = lVar17;
                    func_0x00010c08fa60();
                    if (lVar4 != 0) {
                      uVar19 = puVar24[3];
                      func_0x00010c0e00e0(uVar19);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010bf2dba0();
                      _objc_release(uVar19);
                      func_0x00010c1d0640(puVar24[3]);
                    }
                  }
                  _objc_release(lVar17);
                  func_0x00010bf76420(puVar24[0x10]);
                }
                puVar30 = puVar30 + 1;
              } while (puVar13 != puVar30);
              puVar13 = puVar33;
              func_0x00010bf52a60();
            }
            _objc_release(puVar33);
            puVar13 = puVar28;
            func_0x00010bf529e0();
            puVar30 = puVar33;
            func_0x00010bf529e0();
            if (puVar13 != puVar30) {
              func_0x00010c1d0640(puVar24[2]);
              bVar2 = true;
            }
            _objc_release(puVar28);
          }
          _objc_release(puVar33);
          puVar26 = (undefined8 *)((long)puVar26 + 1);
        } while (puVar26 != puStack_7a0);
        puStack_7a0 = puVar22;
        func_0x00010bf52a60();
      } while (puStack_7a0 != (undefined8 *)0x0);
      _objc_release(puVar22);
      if (!bVar2) goto LAB_106964ecc;
      puVar26 = (undefined8 *)puVar24[4];
      func_0x00010c269d40(puVar26);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c116580();
    }
    _objc_release(puVar26);
  }
LAB_106964ecc:
  _objc_release(puVar22);
  _objc_release(puVar31);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  func_0x00010c25ce40(puVar31);
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar31;
  func_0x00010c25ce40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar31);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar24);
  return;
}



/* Entry: 1069642c0; end: 106964af3; -[SCStoriesSnapProPendingSnapManager _insertPostingContentForSpotlightAutoShareFlowWithContent:storyMetadata:snapProDestinations:spotlightShareInfo:] */

void FUN_1069642c0(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  long param_5,undefined8 *param_6)

{
  undefined **ppuVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long lVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined *puVar21;
  undefined8 *puVar22;
  undefined *puVar23;
  long lVar24;
  undefined8 *puVar25;
  undefined *puVar26;
  long lVar27;
  undefined8 *puStack_560;
  undefined *puStack_320;
  undefined8 *puStack_318;
  long lStack_2e0;
  undefined8 uStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_208;
  undefined8 auStack_180 [32];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar17 = param_3;
  puVar3 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar20 = param_4;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar20;
  func_0x00010c08fa60();
  if (puVar22 != (undefined8 *)0x0) {
    puVar22 = param_3;
    func_0x00010bf4bc60();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar22;
    func_0x00010c08fa60();
    if (puVar25 != (undefined8 *)0x0) {
      lVar15 = param_5;
      func_0x00010bf529e0();
      _objc_release(puVar22);
      if (lVar15 == 0) goto LAB_106964a8c;
      puVar22 = param_3;
      FUN_1069547f4();
      _objc_retainAutoreleasedReturnValue();
      if (puVar22 != (undefined8 *)0x0) {
        puVar17 = param_4;
        func_0x00010bf30620();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar17;
        func_0x00010c08fa60();
        if (puVar3 == (undefined8 *)0x0) {
          puStack_318 = (undefined8 *)0x0;
        }
        else {
          puStack_318 = param_4;
          func_0x00010bf30620();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(puVar17);
        puVar17 = param_4;
        func_0x00010bfcd380();
        puStack_320 = PTR__OBJC_CLASS___NSDate_1126ae770;
        if ((long)puVar17 < 1) {
          puStack_320 = (undefined *)0x0;
        }
        else {
          func_0x00010bfcd380(param_4);
          func_0x00010bf651a0();
          _objc_retainAutoreleasedReturnValue();
        }
        uStack_268 = 0;
        uStack_270 = 0;
        uStack_258 = 0;
        uStack_260 = 0;
        lStack_288 = 0;
        uStack_290 = 0;
        uStack_278 = 0;
        plStack_280 = (long *)0x0;
        _objc_retain(param_5);
        puVar17 = &uStack_290;
        puVar3 = auStack_180;
        lStack_2e0 = param_5;
        func_0x00010bf52a60();
        if (lStack_2e0 != 0) {
          lVar15 = *plStack_280;
          do {
            lVar24 = 0;
            do {
              if (*plStack_280 != lVar15) {
                _objc_enumerationMutation(param_5);
              }
              lVar16 = *(long *)(lStack_288 + lVar24 * 8);
              lVar18 = lVar16;
              func_0x00010bfd4d80();
              if ((int)lVar18 == 0) {
                lVar18 = 0;
              }
              else {
                func_0x00010bf24ec0();
                _objc_retainAutoreleasedReturnValue();
                lVar18 = lVar16;
                func_0x000108f579f0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar16);
              }
              lVar16 = lVar18;
              func_0x00010c08fa60();
              if (lVar16 != 0) {
                _objc_retain(lVar18);
                if (param_6 == (undefined8 *)0x0) {
                  puVar17 = (undefined8 *)0x7fffffffffffffff;
                }
                else {
                  uStack_228 = 0;
                  uStack_230 = 0;
                  uStack_218 = 0;
                  uStack_220 = 0;
                  lStack_248 = 0;
                  uStack_250 = 0;
                  uStack_238 = 0;
                  plStack_240 = (long *)0x0;
                  puVar3 = param_6;
                  func_0x00010bf6ecc0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar17 = puVar3;
                  func_0x00010bf52a60();
                  if (puVar17 == (undefined8 *)0x0) {
                    puVar17 = (undefined8 *)0x7fffffffffffffff;
                  }
                  else {
                    lVar16 = *plStack_240;
                    do {
                      puVar25 = (undefined8 *)0x0;
                      do {
                        if (*plStack_240 != lVar16) {
                          _objc_enumerationMutation(puVar3);
                        }
                        uVar19 = *(ulong *)(lStack_248 + (long)puVar25 * 8);
                        uVar12 = uVar19;
                        func_0x00010bfd63e0();
                        if ((int)uVar12 != 0) {
                          uVar12 = uVar19;
                          func_0x00010bf6ec60();
                          _objc_retainAutoreleasedReturnValue();
                          uVar4 = uVar12;
                          func_0x00010c272380();
                          _objc_retainAutoreleasedReturnValue();
                          uVar5 = uVar4;
                          func_0x00010846a3a0();
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release(uVar4);
                          _objc_release(uVar12);
                          uVar12 = uVar5;
                          func_0x00010c0720c0();
                          if ((uVar12 & 1) != 0) {
                            func_0x00010c0c6200();
                            puVar17 = (undefined8 *)(uVar19 & 0xffffffff);
                            _objc_release(uVar5);
                            goto LAB_106964628;
                          }
                          _objc_release(uVar5);
                        }
                        puVar25 = (undefined8 *)((long)puVar25 + 1);
                      } while (puVar17 != puVar25);
                      puVar17 = puVar3;
                      func_0x00010bf52a60();
                    } while (puVar17 != (undefined8 *)0x0);
                    puVar17 = (undefined8 *)0x7fffffffffffffff;
                  }
LAB_106964628:
                  _objc_release(puVar3);
                }
                _objc_release(lVar18);
                _objc_retain(puVar20);
                _objc_retain(puVar22);
                puVar25 = puVar20;
                puVar3 = puVar22;
                if (puVar17 != (undefined8 *)0x7fffffffffffffff) {
                  puVar6 = param_3;
                  func_0x00010c09dc00();
                  _objc_retainAutoreleasedReturnValue();
                  puVar7 = puVar6;
                  func_0x00010bf529e0();
                  _objc_release(puVar6);
                  if (puVar17 < puVar7) {
                    puVar6 = param_3;
                    func_0x00010c09dc00();
                    _objc_retainAutoreleasedReturnValue();
                    puVar7 = puVar6;
                    func_0x00010c0dfd40();
                    _objc_retainAutoreleasedReturnValue();
                    puVar8 = puVar7;
                    func_0x000107d6b108();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(puVar7);
                    _objc_release(puVar6);
                    puVar6 = puVar8;
                    func_0x00010c08fa60();
                    if (puVar6 != (undefined8 *)0x0) {
                      _objc_retain(puVar8);
                      _objc_release(puVar20);
                      puVar25 = puVar8;
                    }
                    _objc_release(puVar8);
                  }
                  puVar6 = param_6;
                  func_0x00010c245480();
                  _objc_retainAutoreleasedReturnValue();
                  puVar7 = puVar6;
                  func_0x00010bf529e0();
                  _objc_release(puVar6);
                  if (puVar17 < puVar7) {
                    puVar17 = param_6;
                    func_0x00010c245480();
                    _objc_retainAutoreleasedReturnValue();
                    puVar3 = puVar17;
                    func_0x00010c0dfd40();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(puVar22);
                    _objc_release(puVar17);
                  }
                }
                puVar9 = *(undefined **)(param_1 + 0x10);
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                puVar21 = puVar9;
                func_0x00010bf52a60();
                lVar16 = lRam0000000000000000;
                while (puVar21 != (undefined *)0x0) {
                  puVar26 = (undefined *)0x0;
                  do {
                    if (lRam0000000000000000 != lVar16) {
                      _objc_enumerationMutation(puVar9);
                    }
                    uVar19 = *(ulong *)((long)puVar26 * 8);
                    func_0x00010bf3cf60();
                    _objc_retainAutoreleasedReturnValue();
                    uVar12 = uVar19;
                    func_0x00010c0720c0();
                    _objc_release(uVar19);
                    if ((uVar12 & 1) != 0) goto LAB_106964a10;
                    puVar26 = puVar26 + 1;
                  } while (puVar21 != puVar26);
                  puVar21 = puVar9;
                  func_0x00010bf52a60();
                }
                _objc_release(puVar9);
                puVar17 = puVar3;
                func_0x00010bfdd660();
                if ((int)puVar17 == 0) {
LAB_10696488c:
                  puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
                  _objc_opt_new();
                }
                else {
                  puVar17 = puVar3;
                  func_0x00010c270d80();
                  _objc_retainAutoreleasedReturnValue();
                  puVar6 = puVar17;
                  func_0x00010c23fb40();
                  _objc_release(puVar17);
                  if ((long)puVar6 < 1) goto LAB_10696488c;
                  puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
                  func_0x00010bf655e0((double)puVar6 / 1000.0);
                  _objc_retainAutoreleasedReturnValue();
                }
                puVar17 = puVar25;
                param_2 = puVar3;
                FUN_106955d08(puVar25,puVar3,3);
                _objc_retainAutoreleasedReturnValue();
                lVar16 = param_1;
                func_0x00010be712c0();
                if ((int)lVar16 == 0) {
                  puVar21 = (undefined *)0x0;
                }
                else {
                  puVar26 = PTR_PTR_1126c2fc8;
                  _objc_alloc(PTR_PTR_1126c2fc8);
                  func_0x00010c0559e0();
                  puVar23 = PTR_PTR_1126c2fd0;
                  func_0x00010c293b20();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar10 = *(undefined ***)(param_1 + 0xa0);
                  func_0x00010c2923e0();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
                  if (ppuVar10 != (undefined **)0x0) {
                    ppuVar1 = ppuVar10;
                  }
                  _objc_retain(ppuVar1);
                  _objc_release(ppuVar10);
                  puVar21 = puVar23;
                  param_2 = puVar25;
                  FUN_106954904(0x40f5180000000000,puVar23,puVar25,puVar3,param_4,ppuVar1,
                                &PTR____CFConstantStringClassReference_110daafd8,0);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(ppuVar1);
                  _objc_release(puVar23);
                  _objc_release(puVar26);
                }
                puVar26 = PTR_PTR_1126c3338;
                _objc_alloc(PTR_PTR_1126c3338);
                func_0x00010bffefc0();
                puVar23 = PTR__OBJC_CLASS___NSArray_1126ae530;
                lStack_208 = lVar18;
                func_0x00010bf0a140();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c066c60(param_1);
                _objc_release(puVar23);
                _objc_release(puVar26);
                _objc_release(puVar21);
                _objc_release(puVar17);
LAB_106964a10:
                _objc_release(puVar9);
                _objc_release(puVar3);
                _objc_release(puVar25);
              }
              _objc_release(lVar18);
              lVar24 = lVar24 + 1;
            } while (lVar24 != lStack_2e0);
            puVar17 = &uStack_290;
            puVar3 = auStack_180;
            lStack_2e0 = param_5;
            func_0x00010bf52a60();
          } while (lStack_2e0 != 0);
        }
        _objc_release(param_5);
        _objc_release(puStack_320);
        _objc_release(puStack_318);
      }
    }
    _objc_release(puVar22);
  }
LAB_106964a8c:
  _objc_release(puVar20);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar17);
  _objc_retain(puVar3);
  puVar20 = puVar17;
  func_0x00010c08fa60();
  if ((puVar20 != (undefined8 *)0x0) &&
     (puVar20 = puVar3, func_0x00010bf529e0(), puVar20 != (undefined8 *)0x0)) {
    _objc_retain(puVar3);
    puStack_560 = puVar3;
    func_0x00010bf52a60();
    lVar24 = lRam0000000000000000;
    puVar20 = puVar3;
    if (puStack_560 != (undefined8 *)0x0) {
      bVar2 = false;
      do {
        puVar20 = (undefined8 *)0x0;
        do {
          if (lRam0000000000000000 != lVar24) {
            _objc_enumerationMutation(puVar3);
          }
          puVar22 = *(undefined8 **)((long)puVar20 * 8);
          puVar26 = (undefined *)param_3[2];
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar26;
          func_0x00010bf529e0();
          puVar21 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          if (puVar9 != (undefined *)0x0) {
            func_0x00010bf529e0(puVar26);
            func_0x00010bf0a0e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_retain(puVar26);
            puVar9 = puVar26;
            func_0x00010bf52a60();
            lVar18 = lRam0000000000000000;
            while (puVar9 != (undefined *)0x0) {
              puVar23 = (undefined *)0x0;
              do {
                if (lRam0000000000000000 != lVar18) {
                  _objc_enumerationMutation(puVar26);
                }
                lVar27 = *(long *)((long)puVar23 * 8);
                lVar16 = lVar27;
                func_0x00010bf3cf60(lVar27);
                _objc_retainAutoreleasedReturnValue();
                lVar11 = lVar16;
                func_0x000108ea5f00();
                _objc_retainAutoreleasedReturnValue();
                puVar25 = puVar17;
                func_0x00010c0720c0();
                _objc_release(lVar11);
                _objc_release(lVar16);
                if ((int)puVar25 == 0) {
                  func_0x00010befa120(puVar21);
                }
                else {
                  uVar12 = param_3[9];
                  func_0x000108f4853c();
                  if ((uVar12 & 1) == 0) {
                    puVar25 = param_3;
                    func_0x00010be218c0();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release();
                    if (puVar25 == (undefined8 *)0x0) goto LAB_106964d64;
                    lVar16 = param_3[0x11];
                    func_0x00010c269d40(lVar16);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bf3cf60();
                    _objc_retainAutoreleasedReturnValue();
                    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
                    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c06a1a0(lVar16);
                    _objc_release(puVar13);
                    _objc_release(lVar27);
                  }
                  else {
LAB_106964d64:
                    func_0x00010bf3cf60();
                    _objc_retainAutoreleasedReturnValue();
                    lVar16 = lVar27;
                    param_2 = puVar22;
                    FUN_106964f18();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(lVar27);
                    lVar11 = lVar16;
                    func_0x00010c08fa60();
                    if (lVar11 != 0) {
                      uVar14 = param_3[3];
                      func_0x00010c0e00e0(uVar14);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010bf2dba0();
                      _objc_release(uVar14);
                      func_0x00010c1d0640(param_3[3]);
                    }
                  }
                  _objc_release(lVar16);
                  func_0x00010bf76420(param_3[0x10]);
                }
                puVar23 = puVar23 + 1;
              } while (puVar9 != puVar23);
              puVar9 = puVar26;
              func_0x00010bf52a60();
            }
            _objc_release(puVar26);
            puVar9 = puVar21;
            func_0x00010bf529e0();
            puVar23 = puVar26;
            func_0x00010bf529e0();
            if (puVar9 != puVar23) {
              func_0x00010c1d0640(param_3[2]);
              bVar2 = true;
            }
            _objc_release(puVar21);
          }
          _objc_release(puVar26);
          puVar20 = (undefined8 *)((long)puVar20 + 1);
        } while (puVar20 != puStack_560);
        puStack_560 = puVar3;
        func_0x00010bf52a60();
      } while (puStack_560 != (undefined8 *)0x0);
      _objc_release(puVar3);
      if (!bVar2) goto LAB_106964ecc;
      puVar20 = (undefined8 *)param_3[4];
      func_0x00010c269d40(puVar20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c116580();
    }
    _objc_release(puVar20);
  }
LAB_106964ecc:
  _objc_release(puVar3);
  _objc_release(puVar17);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  func_0x00010c25ce40(puVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar17;
  func_0x00010c25ce40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar17);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106964af4; end: 106964f17; -[SCStoriesSnapProPendingSnapManager deleteUnrecoverableSnapWithSnapComponentId:businessIds:] */

void FUN_106964af4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long lVar17;
  long lStack_220;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = param_3;
  func_0x00010c08fa60();
  if ((lVar3 != 0) && (lVar3 = param_4, func_0x00010bf529e0(), lVar3 != 0)) {
    _objc_retain(param_4);
    lStack_220 = param_4;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    lVar14 = param_4;
    if (lStack_220 != 0) {
      bVar1 = false;
      do {
        lVar14 = 0;
        do {
          if (lRam0000000000000000 != lVar3) {
            _objc_enumerationMutation(param_4);
          }
          uVar15 = *(undefined8 *)(lVar14 * 8);
          puVar4 = *(undefined **)(param_1 + 0x10);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010bf529e0();
          puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          if (puVar5 != (undefined *)0x0) {
            func_0x00010bf529e0(puVar4);
            func_0x00010bf0a0e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_retain(puVar4);
            puVar5 = puVar4;
            func_0x00010bf52a60();
            lVar2 = lRam0000000000000000;
            while (puVar5 != (undefined *)0x0) {
              puVar16 = (undefined *)0x0;
              do {
                if (lRam0000000000000000 != lVar2) {
                  _objc_enumerationMutation(puVar4);
                }
                lVar17 = *(long *)((long)puVar16 * 8);
                lVar10 = lVar17;
                func_0x00010bf3cf60(lVar17);
                _objc_retainAutoreleasedReturnValue();
                lVar7 = lVar10;
                func_0x000108ea5f00();
                _objc_retainAutoreleasedReturnValue();
                lVar8 = param_3;
                func_0x00010c0720c0();
                _objc_release(lVar7);
                _objc_release(lVar10);
                if ((int)lVar8 == 0) {
                  func_0x00010befa120(puVar6);
                }
                else {
                  uVar9 = *(ulong *)(param_1 + 0x48);
                  func_0x000108f4853c();
                  if ((uVar9 & 1) == 0) {
                    lVar10 = param_1;
                    func_0x00010be218c0();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release();
                    if (lVar10 == 0) goto LAB_106964d64;
                    lVar10 = *(long *)(param_1 + 0x88);
                    func_0x00010c269d40(lVar10);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bf3cf60();
                    _objc_retainAutoreleasedReturnValue();
                    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
                    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c06a1a0(lVar10);
                    _objc_release(puVar11);
                    _objc_release(lVar17);
                  }
                  else {
LAB_106964d64:
                    func_0x00010bf3cf60();
                    _objc_retainAutoreleasedReturnValue();
                    lVar10 = lVar17;
                    param_2 = uVar15;
                    FUN_106964f18();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(lVar17);
                    lVar7 = lVar10;
                    func_0x00010c08fa60();
                    if (lVar7 != 0) {
                      uVar12 = *(undefined8 *)(param_1 + 0x18);
                      func_0x00010c0e00e0(uVar12);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010bf2dba0();
                      _objc_release(uVar12);
                      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18));
                    }
                  }
                  _objc_release(lVar10);
                  func_0x00010bf76420(*(undefined8 *)(param_1 + 0x80));
                }
                puVar16 = puVar16 + 1;
              } while (puVar5 != puVar16);
              puVar5 = puVar4;
              func_0x00010bf52a60();
            }
            _objc_release(puVar4);
            puVar5 = puVar6;
            func_0x00010bf529e0();
            puVar16 = puVar4;
            func_0x00010bf529e0();
            if (puVar5 != puVar16) {
              func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10));
              bVar1 = true;
            }
            _objc_release(puVar6);
          }
          _objc_release(puVar4);
          lVar14 = lVar14 + 1;
        } while (lVar14 != lStack_220);
        lStack_220 = param_4;
        func_0x00010bf52a60();
      } while (lStack_220 != 0);
      _objc_release(param_4);
      if (!bVar1) goto LAB_106964ecc;
      lVar14 = *(long *)(param_1 + 0x20);
      func_0x00010c269d40(lVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c116580();
    }
    _objc_release(lVar14);
  }
LAB_106964ecc:
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  func_0x00010c25ce40(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c25ce40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106964f18; end: 106964f8b;  */

void FUN_106964f18(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  func_0x00010c25ce40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c25ce40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106964f8c; end: 1069651cb; -[SCStoriesSnapProPendingSnapManager businessIdsWithSnapComponentId:] */

undefined ** FUN_106964f8c(long param_1,undefined **param_2,long param_3)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 unaff_x22;
  long lVar10;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar11;
  undefined *puStack_498;
  undefined8 uStack_490;
  code *pcStack_488;
  undefined *puStack_480;
  undefined **ppuStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  long *plStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  long lStack_3b0;
  undefined *puStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2e8 [128];
  long lStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  long lStack_238;
  undefined1 *puStack_230;
  code *pcStack_228;
  long lStack_218;
  undefined **ppuStack_210;
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
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar7 = *(long *)(param_1 + 0x10);
  ppuStack_210 = ppuVar8;
  lStack_200 = param_1;
  _objc_retain(lVar7);
  lStack_218 = lVar7;
  func_0x00010bf52a60();
  lStack_1f8 = lVar7;
  if (lVar7 != 0) {
    lStack_208 = *plStack_1a0;
    do {
      lVar7 = 0;
      do {
        if (*plStack_1a0 != lStack_208) {
          _objc_enumerationMutation(lStack_218);
        }
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        lVar1 = *(long *)(lStack_200 + 0x10);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar1;
        func_0x00010bf52a60();
        if (lVar3 != 0) {
          lVar9 = *plStack_1e0;
          do {
            lVar10 = 0;
            do {
              if (*plStack_1e0 != lVar9) {
                _objc_enumerationMutation(lVar1);
              }
              unaff_x27 = *(undefined8 *)(lStack_1e8 + lVar10 * 8);
              func_0x00010bf3cf60();
              _objc_retainAutoreleasedReturnValue();
              unaff_x28 = unaff_x27;
              func_0x000108ea5f00();
              _objc_retainAutoreleasedReturnValue();
              unaff_x22 = unaff_x28;
              func_0x00010c0720c0();
              _objc_release(unaff_x28);
              _objc_release(unaff_x27);
              if ((int)unaff_x22 != 0) {
                func_0x00010befa120(ppuStack_210);
                goto LAB_106965130;
              }
              lVar10 = lVar10 + 1;
            } while (lVar3 != lVar10);
            lVar3 = lVar1;
            func_0x00010bf52a60();
          } while (lVar3 != 0);
        }
LAB_106965130:
        _objc_release(lVar1);
        lVar7 = lVar7 + 1;
      } while (lVar7 != lStack_1f8);
      lVar7 = lStack_218;
      func_0x00010bf52a60();
      lStack_1f8 = lVar7;
    } while (lVar7 != 0);
  }
  _objc_release(lStack_218);
  ppuVar8 = ppuStack_210;
  ppuVar2 = ppuStack_210;
  func_0x00010bf51e00();
  _objc_release(ppuVar8);
  lVar7 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
    return ppuVar2;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_330;
  ppuStack_248 = ppuVar8;
  pcStack_228 = FUN_1069651cc;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_328 = 0;
  puStack_330 = (undefined *)0x0;
  uStack_318 = 0;
  plStack_320 = (long *)0x0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  lVar3 = *(long *)(lVar7 + 0x10);
  uStack_260 = unaff_x28;
  uStack_258 = unaff_x27;
  uStack_250 = unaff_x22;
  ppuStack_240 = ppuVar2;
  lStack_238 = param_3;
  puStack_230 = &stack0xfffffffffffffff0;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = auStack_2e8;
  lVar7 = lVar3;
  func_0x00010bf52a60();
  ppuVar8 = (undefined **)0x0;
  if (lVar7 != 0) {
    lVar1 = *plStack_320;
    do {
      lVar9 = 0;
      do {
        if (*plStack_320 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        lVar10 = *(long *)(lStack_328 + lVar9 * 8);
        func_0x00010bf529e0();
        if (lVar10 != 0) {
          ppuVar8 = (undefined **)0x1;
          goto LAB_106965290;
        }
        lVar9 = lVar9 + 1;
      } while (lVar7 != lVar9);
      puVar6 = auStack_2e8;
      lVar7 = lVar3;
      ppuVar5 = &puStack_330;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
    ppuVar8 = (undefined **)0x0;
  }
LAB_106965290:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return ppuVar8;
  }
  ___stack_chk_fail();
  lStack_3b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar5);
  _objc_retain(puVar6);
  uStack_468 = 0;
  uStack_470 = 0;
  uStack_458 = 0;
  plStack_460 = (long *)0x0;
  uStack_448 = 0;
  uStack_450 = 0;
  uStack_438 = 0;
  uStack_440 = 0;
  _objc_retain(puVar6);
  puVar4 = puVar6;
  func_0x00010bf52a60();
  if (puVar4 != (undefined1 *)0x0) {
    lVar7 = *plStack_460;
    do {
      puVar11 = (undefined1 *)0x0;
      do {
        if (*plStack_460 != lVar7) {
          _objc_enumerationMutation(puVar6);
        }
        lVar10 = *(long *)(lVar3 + 0x10);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puStack_498 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_490 = 0xc2000000;
        pcStack_488 = FUN_1069654ac;
        puStack_480 = &UNK_11094d860;
        _objc_retain(ppuVar5);
        param_2 = &puStack_498;
        lVar1 = lVar10;
        ppuStack_478 = ppuVar5;
        func_0x0001006372a4(lVar10,param_2);
        lVar9 = lVar1;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar1);
        _objc_release(lVar10);
        if (lVar9 == 0) {
          _objc_release(ppuStack_478);
          goto LAB_106965454;
        }
        func_0x00010c07d8c0(*(undefined8 *)(lVar3 + 0x80));
        _objc_release(lVar9);
        _objc_release(ppuStack_478);
        puVar11 = puVar11 + 1;
      } while (puVar4 != puVar11);
      puVar4 = puVar6;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined1 *)0x0);
  }
LAB_106965454:
  _objc_release(puVar6);
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3b0) {
    ___stack_chk_fail();
    func_0x00010bf3cf60(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = param_2;
    func_0x000108ea5f00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar8;
    func_0x00010c0720c0();
    _objc_release(ppuVar8);
    _objc_release(param_2);
    return ppuVar2;
  }
  return ppuVar5;
}



/* Entry: 1069651cc; end: 1069652cf; -[SCStoriesSnapProPendingSnapManager hasSnaps] */

undefined ** FUN_1069651cc(long param_1,undefined **param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined *puStack_278;
  undefined8 uStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  undefined **ppuStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_190;
  undefined *puStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  ppuVar4 = &puStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  puStack_110 = (undefined *)0x0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = auStack_c8;
  lVar9 = lVar1;
  func_0x00010bf52a60();
  ppuVar6 = (undefined **)0x0;
  if (lVar9 != 0) {
    lVar7 = *plStack_100;
    do {
      lVar8 = 0;
      do {
        if (*plStack_100 != lVar7) {
          _objc_enumerationMutation(lVar1);
        }
        lVar2 = *(long *)(lStack_108 + lVar8 * 8);
        func_0x00010bf529e0();
        if (lVar2 != 0) {
          ppuVar6 = (undefined **)0x1;
          goto LAB_106965290;
        }
        lVar8 = lVar8 + 1;
      } while (lVar9 != lVar8);
      puVar5 = auStack_c8;
      lVar9 = lVar1;
      ppuVar4 = &puStack_110;
      func_0x00010bf52a60();
    } while (lVar9 != 0);
    ppuVar6 = (undefined **)0x0;
  }
LAB_106965290:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar6;
  }
  ___stack_chk_fail();
  lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar4);
  _objc_retain(puVar5);
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  _objc_retain(puVar5);
  puVar3 = puVar5;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    lVar9 = *plStack_240;
    do {
      puVar10 = (undefined1 *)0x0;
      do {
        if (*plStack_240 != lVar9) {
          _objc_enumerationMutation(puVar5);
        }
        lVar2 = *(long *)(lVar1 + 0x10);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puStack_278 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_270 = 0xc2000000;
        pcStack_268 = FUN_1069654ac;
        puStack_260 = &UNK_11094d860;
        _objc_retain(ppuVar4);
        param_2 = &puStack_278;
        lVar7 = lVar2;
        ppuStack_258 = ppuVar4;
        func_0x0001006372a4(lVar2,param_2);
        lVar8 = lVar7;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar7);
        _objc_release(lVar2);
        if (lVar8 == 0) {
          _objc_release(ppuStack_258);
          goto LAB_106965454;
        }
        func_0x00010c07d8c0(*(undefined8 *)(lVar1 + 0x80));
        _objc_release(lVar8);
        _objc_release(ppuStack_258);
        puVar10 = puVar10 + 1;
      } while (puVar3 != puVar10);
      puVar3 = puVar5;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined1 *)0x0);
  }
LAB_106965454:
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_190) {
    ___stack_chk_fail();
    func_0x00010bf3cf60(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = param_2;
    func_0x000108ea5f00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar6;
    func_0x00010c0720c0();
    _objc_release(ppuVar6);
    _objc_release(param_2);
    return ppuVar4;
  }
  return ppuVar4;
}



/* Entry: 1069652d0; end: 1069654ab; -[SCStoriesSnapProPendingSnapManager isPostingSnapWithSnapComponentId:businessIds:] */

undefined ** FUN_1069652d0(long param_1,undefined **param_2,undefined **param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar7 = *plStack_130;
    do {
      lVar8 = 0;
      do {
        if (*plStack_130 != lVar7) {
          _objc_enumerationMutation(param_4);
        }
        lVar2 = *(long *)(param_1 + 0x10);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_160 = 0xc2000000;
        pcStack_158 = FUN_1069654ac;
        puStack_150 = &UNK_11094d860;
        _objc_retain(param_3);
        param_2 = &puStack_168;
        lVar3 = lVar2;
        ppuStack_148 = param_3;
        func_0x0001006372a4(lVar2,param_2);
        lVar4 = lVar3;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        _objc_release(lVar2);
        if (lVar4 == 0) {
          _objc_release(ppuStack_148);
          goto LAB_106965454;
        }
        func_0x00010c07d8c0(*(undefined8 *)(param_1 + 0x80));
        _objc_release(lVar4);
        _objc_release(ppuStack_148);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = param_4;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
LAB_106965454:
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    func_0x00010bf3cf60(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = param_2;
    func_0x000108ea5f00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010c0720c0();
    _objc_release(ppuVar5);
    _objc_release(param_2);
    return ppuVar6;
  }
  return param_3;
}



/* Entry: 1069654ac; end: 106965513;  */

undefined8 FUN_1069654ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf3cf60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000108ea5f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 106965514; end: 10696596b; -[SCStoriesSnapProPendingSnapManager didPostStorySnapWithClientId:quotedUserId:storyIdToStorySnapId:snapProDestinations:] */

undefined1 *
FUN_106965514(long param_1,undefined1 *param_2,undefined1 *param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 *puVar12;
  long lStack_1e0;
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [8];
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined1 *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 *puStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar12 = param_3;
  func_0x00010c08fa60();
  if ((puVar12 != (undefined1 *)0x0) && (lVar9 = param_6, func_0x00010bf529e0(), lVar9 != 0)) {
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    _objc_retain(param_6);
    lStack_1e0 = param_6;
    func_0x00010bf52a60();
    if (lStack_1e0 != 0) {
      lVar9 = *plStack_140;
      do {
        lVar11 = 0;
        do {
          if (*plStack_140 != lVar9) {
            _objc_enumerationMutation(param_6);
          }
          puVar10 = *(undefined1 **)(lStack_148 + lVar11 * 8);
          puVar12 = puVar10;
          func_0x00010bfd4d80();
          if ((int)puVar12 == 0) {
            puVar12 = (undefined1 *)0x0;
          }
          else {
            func_0x00010bf24ec0();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar10;
            func_0x000108f579f0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar10);
          }
          puVar10 = puVar12;
          func_0x00010c08fa60();
          if (puVar10 != (undefined1 *)0x0) {
            puVar10 = param_3;
            param_2 = puVar12;
            FUN_106964f18(param_3,puVar12);
            _objc_retainAutoreleasedReturnValue();
            puVar1 = puVar10;
            func_0x00010c08fa60();
            if (puVar1 != (undefined1 *)0x0) {
              lVar2 = *(long *)(param_1 + 0x10);
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_170 = 0xc2000000;
              pcStack_168 = FUN_10696596c;
              puStack_160 = &UNK_11094d860;
              _objc_retain(param_3);
              lVar3 = lVar2;
              puStack_158 = param_3;
              func_0x0001006372a4(lVar2,&puStack_178);
              lVar4 = lVar3;
              func_0x00010bfb1920();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar3);
              _objc_release(lVar2);
              if (lVar4 != 0) {
                func_0x00010bf7b600(*(undefined8 *)(param_1 + 0x80));
              }
              _objc_initWeak(auStack_180,param_1);
              uVar5 = *(undefined8 *)(param_1 + 0x20);
              func_0x00010c269d40(uVar5);
              _objc_retainAutoreleasedReturnValue();
              puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
              puStack_110 = puVar12;
              func_0x00010bf0a140();
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uVar5;
              func_0x00010c1176c0(uVar5);
              _objc_retainAutoreleasedReturnValue();
              param_2 = auStack_180;
              _objc_copyWeak(auStack_188,param_2);
              _objc_retain(param_3);
              _objc_retain(param_4);
              _objc_retain(param_5);
              _objc_retain(param_6);
              _objc_retain(puVar12);
              _objc_retain(puVar10);
              uVar8 = uVar7;
              func_0x00010c25ff60(uVar7);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x40));
              _objc_release(uVar8);
              _objc_release(uVar7);
              _objc_release(puVar6);
              _objc_release(uVar5);
              _objc_release(puVar10);
              _objc_release(puVar12);
              _objc_release(param_6);
              _objc_release(param_5);
              _objc_release(param_4);
              _objc_release(param_3);
              _objc_destroyWeak(auStack_188);
              _objc_destroyWeak(auStack_180);
              _objc_release(lVar4);
              _objc_release(puStack_158);
            }
            _objc_release(puVar10);
          }
          _objc_release(puVar12);
          lVar11 = lVar11 + 1;
        } while (lStack_1e0 != lVar11);
        lStack_1e0 = param_6;
        func_0x00010bf52a60();
      } while (lStack_1e0 != 0);
    }
    _objc_release(param_6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_188);
  _objc_destroyWeak(auStack_180);
  __Unwind_Resume();
  func_0x00010bf3cf60(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return puVar12;
}



/* Entry: 10696596c; end: 1069659b3;  */

undefined8 FUN_10696596c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf3cf60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1069659b4; end: 106965a1b;  */

void FUN_1069659b4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfed00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106965a1c; end: 106965dcf; -[SCStoriesSnapProPendingSnapManager didFailToPostSnapWithSnapComponentId:businessIds:clientId:] */

void FUN_106965a1c(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *puStack_330;
  undefined8 uStack_328;
  code *pcStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  code *pcStack_2f8;
  undefined *puStack_2f0;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 uStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 uStack_2c8;
  code *pcStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined *puStack_2a8;
  long lStack_2a0;
  undefined *puStack_220;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = param_3;
  puVar5 = param_4;
  puVar10 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = param_3;
  func_0x00010c08fa60();
  if ((puVar2 != (undefined *)0x0) &&
     (puVar2 = param_4, func_0x00010bf529e0(), puVar2 != (undefined *)0x0)) {
    _objc_retain(param_4);
    puVar2 = param_4;
    func_0x00010bf52a60();
    lVar15 = lRam0000000000000000;
    while (puVar2 != (undefined *)0x0) {
      puVar12 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar15) {
          _objc_enumerationMutation(param_4);
        }
        lVar3 = *(long *)(param_1 + 0x10);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bf529e0();
        if (lVar4 != 0) {
          _objc_retain(lVar3);
          lVar4 = lVar3;
          func_0x00010bf52a60();
          lVar1 = lRam0000000000000000;
          while (lVar4 != 0) {
            lVar14 = 0;
            do {
              if (lRam0000000000000000 != lVar1) {
                _objc_enumerationMutation(lVar3);
              }
              uVar16 = *(undefined8 *)(lVar14 * 8);
              func_0x00010bf3cf60();
              _objc_retainAutoreleasedReturnValue();
              uVar13 = uVar16;
              func_0x000108ea5f00();
              _objc_retainAutoreleasedReturnValue();
              puVar5 = param_3;
              func_0x00010c0720c0();
              _objc_release(uVar13);
              _objc_release(uVar16);
              if ((int)puVar5 != 0) {
                func_0x00010bf76500(*(undefined8 *)(param_1 + 0x80));
              }
              lVar14 = lVar14 + 1;
            } while (lVar4 != lVar14);
            lVar4 = lVar3;
            func_0x00010bf52a60();
          }
          _objc_release(lVar3);
        }
        _objc_release(lVar3);
        puVar12 = puVar12 + 1;
      } while (puVar12 != puVar2);
      puVar2 = param_4;
      func_0x00010bf52a60();
    }
    _objc_release(param_4);
    puVar2 = PTR_PTR_1126b3e90;
    _objc_opt_new();
    func_0x00010c185e80();
    puVar6 = PTR_PTR_1126b8460;
    _objc_opt_new();
    puVar12 = PTR_PTR_1126cf438;
    _objc_opt_new(PTR_PTR_1126cf438);
    func_0x00010c185c80(puVar6);
    _objc_release(puVar12);
    puVar12 = puVar6;
    func_0x00010bf5b480(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c204680();
    _objc_release(puVar12);
    puVar12 = param_4;
    func_0x00010bf446e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    func_0x00010bf5b480(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c174420();
    _objc_release(puVar5);
    _objc_release(puVar12);
    uVar13 = *(undefined8 *)(param_1 + 0x78);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126b3e98;
    func_0x00010bf60460();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar2;
    puVar5 = puVar6;
    puVar10 = puVar7;
    param_6 = puVar8;
    func_0x00010c133420(uVar13);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar2);
    puStack_220 = param_5;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  lStack_2a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar12);
  _objc_retain(puVar5);
  _objc_retain(puVar10);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(puStack_220);
  puVar2 = puVar5;
  func_0x00010c08fa60();
  if (puVar2 != (undefined *)0x0) {
    puVar2 = param_6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c08fa60();
    if (puVar6 != (undefined *)0x0) {
      func_0x00010bea0800(param_3);
    }
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126b4708;
  func_0x00010bf6a060(PTR_PTR_1126b4708);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_8;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  lVar15 = param_8;
  if ((int)lVar11 != 0) {
    lVar15 = *(long *)(param_3 + 0x60);
    if (lVar15 == 0) {
      func_0x00010bec69c0(param_3);
      goto LAB_1069660f8;
    }
    _objc_retain(lVar15);
    _objc_release(param_8);
  }
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_2e0 = &uStack_2d8;
  uStack_2d8 = 0;
  uStack_2c8 = 0x3032000000;
  pcStack_2c0 = FUN_1069661a4;
  uStack_2b8 = 0x1069661b4;
  uStack_2b0 = 0;
  puStack_308 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_300 = 0xc2000000;
  pcStack_2f8 = FUN_1069661bc;
  puStack_2f0 = &UNK_110853230;
  puStack_2d0 = puStack_2e0;
  _objc_retain(lVar15);
  lStack_2e8 = lVar15;
  func_0x00010c0c0800(puVar10);
  if (puStack_2d0[5] != 0) {
    lVar3 = *(long *)(param_3 + 0x10);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_330 = puVar2;
    uStack_328 = 0xc2000000;
    pcStack_320 = FUN_106966360;
    puStack_318 = &UNK_11094d860;
    _objc_retain(puVar12);
    lVar11 = lVar3;
    puStack_310 = puVar12;
    func_0x0001006372a4(lVar3,&puStack_330);
    lVar4 = lVar11;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar11);
    _objc_release(lVar3);
    lVar11 = lVar4;
    func_0x00010bfcd340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar11 == 0) {
      uVar9 = *(ulong *)(param_3 + 0x48);
      func_0x000108f4853c();
      if ((uVar9 & 1) == 0) {
        puVar2 = param_3;
        func_0x00010be218c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar2 != (undefined *)0x0) {
          uVar13 = *(undefined8 *)(param_3 + 0x88);
          func_0x00010c269d40(uVar13);
          _objc_retainAutoreleasedReturnValue();
          uVar16 = puStack_2d0[5];
          func_0x00010bfe44e0(uVar16);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_2a8 = puVar12;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c150180(uVar13);
          _objc_release(puVar2);
          _objc_release(uVar16);
          _objc_release(uVar13);
        }
      }
    }
    else {
      func_0x00010be757a0(param_3);
    }
    _objc_release(lVar4);
    _objc_release(puStack_310);
  }
  _objc_release(lStack_2e8);
  __Block_object_dispose(&uStack_2d8,8);
  _objc_release(uStack_2b0);
  param_8 = lVar15;
LAB_1069660f8:
  _objc_release(puStack_220);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(puVar10);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a0) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = 8;
  __Block_object_dispose(&uStack_2d8);
  __Unwind_Resume();
  *(undefined8 *)(puVar12 + 0x28) = *(undefined8 *)(lVar11 + 0x28);
  *(undefined8 *)(lVar11 + 0x28) = 0;
  return;
}



/* Entry: 106965dd0; end: 1069661a3; -[SCStoriesSnapProPendingSnapManager _didPostStorySnapWithClientId:notifiedUserId:snapProProfile:storyIdToStorySnapId:snapProDestinations:businessId:pollingId:] */

void FUN_106965dd0(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6,undefined8 param_7,long param_8,undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar7 = param_4;
  func_0x00010c08fa60();
  if (lVar7 != 0) {
    lVar7 = param_6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c08fa60();
    if (lVar8 != 0) {
      func_0x00010bea0800(param_1);
    }
    _objc_release(lVar7);
  }
  puVar1 = PTR_PTR_1126b4708;
  func_0x00010bf6a060(PTR_PTR_1126b4708);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_8;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  lVar8 = param_8;
  if ((int)lVar7 != 0) {
    lVar8 = *(long *)(param_1 + 0x60);
    if (lVar8 == 0) {
      func_0x00010bec69c0(param_1);
      goto LAB_1069660f8;
    }
    _objc_retain(lVar8);
    _objc_release(param_8);
  }
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x3032000000;
  pcStack_a0 = FUN_1069661a4;
  uStack_98 = 0x1069661b4;
  uStack_90 = 0;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_1069661bc;
  puStack_d0 = &UNK_110853230;
  puStack_b0 = puStack_c0;
  _objc_retain(lVar8);
  lStack_c8 = lVar8;
  func_0x00010c0c0800(param_5);
  if (puStack_b0[5] != 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_110 = puVar1;
    uStack_108 = 0xc2000000;
    pcStack_100 = FUN_106966360;
    puStack_f8 = &UNK_11094d860;
    _objc_retain(param_3);
    lVar7 = lVar2;
    lStack_f0 = param_3;
    func_0x0001006372a4(lVar2,&puStack_110);
    lVar3 = lVar7;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(lVar2);
    lVar7 = lVar3;
    func_0x00010bfcd340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar7 == 0) {
      uVar4 = *(ulong *)(param_1 + 0x48);
      func_0x000108f4853c();
      if ((uVar4 & 1) == 0) {
        lVar7 = param_1;
        func_0x00010be218c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar7 != 0) {
          uVar5 = *(undefined8 *)(param_1 + 0x88);
          func_0x00010c269d40(uVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = puStack_b0[5];
          func_0x00010bfe44e0(uVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
          lStack_88 = param_3;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c150180(uVar5);
          _objc_release(puVar1);
          _objc_release(uVar6);
          _objc_release(uVar5);
        }
      }
    }
    else {
      func_0x00010be757a0(param_1);
    }
    _objc_release(lVar3);
    _objc_release(lStack_f0);
  }
  _objc_release(lStack_c8);
  __Block_object_dispose(&uStack_b8,8);
  _objc_release(uStack_90);
  param_8 = lVar8;
LAB_1069660f8:
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = 8;
  __Block_object_dispose(&uStack_b8);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar7 + 0x28);
  *(undefined8 *)(lVar7 + 0x28) = 0;
  return;
}



/* Entry: 1069661a4; end: 1069661bb;  */

void FUN_1069661a4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1069661bc; end: 106966203;  */

void FUN_1069661bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  FUN_106966204(param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106966204; end: 10696635f;  */

ulong FUN_106966204(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_1);
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
      uVar7 = 0;
LAB_106966308:
      _objc_release(param_1);
      _objc_release(param_2);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
        return uVar7;
      }
      ___stack_chk_fail();
      func_0x00010bf3cf60(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x00010c0720c0();
      _objc_release(uVar5);
      return uVar3;
    }
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      uVar7 = *(ulong *)(lVar8 * 8);
      uVar3 = uVar7;
      func_0x00010c116a20();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0720c0();
      _objc_release(uVar3);
      if ((uVar4 & 1) != 0) {
        _objc_retain(uVar7);
        goto LAB_106966308;
      }
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
    lVar2 = param_1;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 106966360; end: 1069663a7;  */

undefined8 FUN_106966360(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf3cf60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1069663a8; end: 1069664df; -[SCStoriesSnapProPendingSnapManager _sendStorySnapWithProfilesResult:businessId:storySnapId:notifiedUserId:pollingId:] */

void FUN_1069663a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1069664e0;
  puStack_88 = &UNK_110868f80;
  uStack_80 = param_7;
  uStack_78 = param_6;
  lStack_70 = param_1;
  uStack_68 = param_3;
  uStack_60 = param_4;
  uStack_58 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_a0);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_7);
  return;
}



/* Entry: 1069664e0; end: 10696677b;  */

void FUN_1069664e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **unaff_x24;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 0x40);
  func_0x00010c0e00e0(lVar2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40));
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = &uStack_a0;
    uStack_a0 = 0;
    uStack_90 = 0x3032000000;
    pcStack_88 = FUN_1069661a4;
    uStack_80 = 0x1069661b4;
    lStack_78 = 0;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_10696677c;
    puStack_b8 = &UNK_110853230;
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    puStack_98 = puStack_a8;
    _objc_retain(uVar5);
    uStack_b0 = uVar5;
    func_0x00010c0c0800(uVar3);
    if (puStack_98[5] != 0) {
      _objc_initWeak(auStack_d8,*(long *)(param_1 + 0x30));
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x30);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uStack_70 = *(undefined8 *)(param_1 + 0x28);
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 8);
      func_0x00010c11de00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      puStack_118 = puVar1;
      uStack_110 = 0xc2000000;
      pcStack_108 = FUN_1069667c4;
      puStack_100 = &UNK_11094d8c0;
      unaff_x24 = &puStack_118;
      _objc_copyWeak(auStack_e0,auStack_d8);
      puStack_e8 = &uStack_a0;
      uVar8 = *(undefined8 *)(param_1 + 0x48);
      _objc_retain(uVar8);
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      uStack_f8 = uVar8;
      _objc_retain(uVar7);
      uStack_f0 = uVar7;
      func_0x00010bfaa4c0(uVar3);
      _objc_release(uVar5);
      _objc_release(puVar4);
      _objc_release(uVar3);
      _objc_release(uStack_f0);
      _objc_release(uStack_f8);
      _objc_destroyWeak(auStack_e0);
      _objc_destroyWeak(auStack_d8);
    }
    _objc_release(uStack_b0);
    __Block_object_dispose(&uStack_a0,8);
    lVar6 = lStack_78;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x24 + 7);
  _objc_destroyWeak(auStack_d8);
  uVar3 = 8;
  __Block_object_dispose(&uStack_a0);
  __Unwind_Resume();
  FUN_106966204(uVar3,*(undefined8 *)(lVar6 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(*(long *)(lVar6 + 0x28) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x28) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 10696677c; end: 1069667c3;  */

void FUN_10696677c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  FUN_106966204(param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069667c4; end: 106966853;  */

void FUN_1069667c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c0e00e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bea0820(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106966854; end: 106966a27; -[SCStoriesSnapProPendingSnapManager _sendStorySnapWithSnapProProfile:storySnapId:snapchatter:] */

void FUN_106966854(undefined *param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126b1a58;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_4;
  if (param_5 != 0) {
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_retain(param_3);
    _objc_opt_new();
    puVar2 = param_3;
    func_0x00010c116a20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a99c0(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    puVar2 = param_3;
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c216240(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    puVar3 = PTR_PTR_1126b1a38;
    _objc_alloc();
    lVar4 = param_5;
    func_0x000108efbf90();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_50 = lVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_50,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03d5c0(puVar3,param_2,puVar2,PTR____NSArray0__struct_11034ab48,0,
                        PTR____NSArray0__struct_11034ab48,PTR____NSArray0__struct_11034ab48,0,0,0);
    _objc_release(puVar2);
    _objc_release(lVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    param_3 = param_4;
    puVar2 = puVar1;
    func_0x00010c22b020();
    _objc_release(param_4);
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release();
    param_1 = puVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  _objc_retain(puVar2);
  puVar1 = param_3;
  func_0x00010c08fa60();
  if ((puVar1 != (undefined *)0x0) &&
     (puVar1 = puVar2, func_0x00010c08fa60(), puVar1 != (undefined *)0x0)) {
    puVar1 = param_3;
    func_0x000108ea5f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e3c0(param_1,param_2,puVar3,puVar2);
    _objc_release(puVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c116580();
    _objc_release(uVar5);
    _objc_release(puVar1);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106966a28; end: 106966aff; -[SCStoriesSnapProPendingSnapManager removePendingSnapWithClientId:businessId:] */

void FUN_106966a28(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if ((lVar1 != 0) && (lVar1 = param_4, func_0x00010c08fa60(), lVar1 != 0)) {
    lVar1 = param_3;
    func_0x000108ea5f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e3c0(param_1,param_2,puVar2,param_4);
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c116580();
    _objc_release(uVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106966b00; end: 106966c2b; -[SCStoriesSnapProPendingSnapManager _observeDraftingSnaps] */

void FUN_106966b00(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (*(long *)(param_1 + 0x50) == 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c242980();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar4 = uVar3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 106966c2c; end: 106966c73;  */

void FUN_106966c2c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be063c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106966c74; end: 106966e43; -[SCStoriesSnapProPendingSnapManager _draftingSnapsDidUpdate:] */

void FUN_106966c74(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 unaff_x21;
  long unaff_x22;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
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
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        lVar7 = *(long *)(lStack_128 + lVar9 * 8);
        unaff_x22 = lVar7;
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = unaff_x22;
        func_0x00010c08fa60();
        if (lVar2 == 0) {
LAB_106966dd0:
          _objc_release(unaff_x22);
        }
        else {
          lVar2 = lVar7;
          func_0x00010bf24ec0();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010c08fa60();
          _objc_release(lVar2);
          _objc_release(unaff_x22);
          if (lVar3 != 0) {
            lVar2 = lVar7;
            func_0x00010bf3cf60();
            _objc_retainAutoreleasedReturnValue();
            unaff_x22 = lVar2;
            func_0x000108ea5f00();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar2);
            puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
            func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf24ec0(lVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12e3c0(param_1);
            _objc_release(lVar7);
            _objc_release(puVar4);
            goto LAB_106966dd0;
          }
        }
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      lVar1 = param_3;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar1 != 0);
  }
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_106966e44;
  lStack_160 = unaff_x22;
  uStack_158 = unaff_x21;
  uStack_150 = param_1;
  lStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010be66080();
  if (*(long *)(lVar1 + 0x70) == 0) {
    _objc_initWeak(auStack_168,lVar1);
    puVar4 = PTR_PTR_1126ae888;
    _objc_alloc();
    uVar5 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c11de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_170,auStack_168);
    func_0x00010c0522e0(0x4014000000000000);
    uVar6 = *(undefined8 *)(lVar1 + 0x70);
    *(undefined **)(lVar1 + 0x70) = puVar4;
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_170);
    _objc_destroyWeak(auStack_168);
  }
  return;
}



/* Entry: 106966e44; end: 106966f4b; -[SCStoriesSnapProPendingSnapManager _pollForDraftingSnapsIfRequired] */

void FUN_106966e44(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010be66080();
  if (*(long *)(param_1 + 0x70) == 0) {
    _objc_initWeak(auStack_38,param_1);
    puVar1 = PTR_PTR_1126ae888;
    _objc_alloc();
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0522e0(0x4014000000000000);
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    *(undefined **)(param_1 + 0x70) = puVar1;
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 106966f4c; end: 106966f77;  */

void FUN_106966f4c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee85a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106966f78; end: 106967103; -[SCStoriesSnapProPendingSnapManager _verifyDraftingSnaps] */

void FUN_106966f78(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_1069661a4;
  uStack_70 = 0x1069661b4;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puStack_68 = puVar1;
  func_0x00010bf97ce0(*(undefined8 *)(param_1 + 0x10));
  lVar2 = puStack_88[5];
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    func_0x00010bf97ce0(puStack_88[5]);
  }
  if (*(int *)(puStack_58 + 3) == 0) {
    func_0x00010c069d00(*(undefined8 *)(param_1 + 0x70));
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c266600();
  }
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(puStack_68);
  __Block_object_dispose(&uStack_60,8);
  return;
}



/* Entry: 106967104; end: 106967313;  */

void FUN_106967104(long param_1,long param_2,long param_3)

{
  double dVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_3);
      }
      lVar8 = *(long *)(lVar9 * 8);
      lVar7 = lVar8;
      func_0x00010bfcd340();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar7 != 0) {
        lVar7 = lVar8;
        func_0x00010c105720(lVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f3a0();
        dVar1 = (double)CONCAT17(uVar17,CONCAT16(uVar16,CONCAT15(uVar15,CONCAT14(uVar14,CONCAT13(
                                                  uVar13,CONCAT12(uVar12,CONCAT11(uVar11,uVar10)))))
                                                ));
        _objc_release(lVar7);
        if (300.0 <= ABS(dVar1)) {
          func_0x00010bf3cf60(lVar8);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar8;
          func_0x000108ea5f00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar8);
          func_0x00010befa120(puVar3);
          _objc_release(lVar7);
        }
        else {
          lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 8);
          *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar4 != lVar9);
    lVar4 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar5 = puVar3;
  func_0x00010bf529e0();
  if (puVar5 != (undefined *)0x0) {
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  }
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c12e3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 0x20),PTR_s_removeSnaps_businessId__112629310);
  return;
}



/* Entry: 106967314; end: 10696731f;  */

void FUN_106967314(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12e3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeSnaps_businessId__112629310,param_3,param_2
            );
  return;
}



/* Entry: 106967320; end: 10696737f; -[SCStoriesSnapProPendingSnapManager _getPollerManagerAndSetDelegateIfNeeded] */

/* WARNING: Possible PIC construction at 0x000106967334: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106967350: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106967338) */
/* WARNING: Removing unreachable block (ram,0x00010696734c) */
/* WARNING: Removing unreachable block (ram,0x000106967354) */
/* WARNING: Removing unreachable block (ram,0x000106967370) */

void FUN_106967320(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x88),PTR_s_target_112678178);
  return;
}



/* Entry: 106967380; end: 10696760b; -[SCStoriesSnapProPendingSnapManager snapsClientIdsRemovedWithBusinessId:snapClientIds:] */

void FUN_106967380(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lStack_200;
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
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010be75840(param_1,param_2,&PTR____CFConstantStringClassReference_110e65ed8);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(param_4);
  lStack_200 = param_4;
  func_0x00010bf52a60(param_4,param_2,&uStack_1b0,auStack_f0,0x10);
  if (lStack_200 != 0) {
    lVar9 = *plStack_1a0;
    do {
      lVar10 = 0;
      do {
        if (*plStack_1a0 != lVar9) {
          _objc_enumerationMutation(param_4);
        }
        uVar3 = *(undefined8 *)(lStack_1a8 + lVar10 * 8);
        func_0x000108ea5f00();
        _objc_retainAutoreleasedReturnValue();
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        _objc_retain(lVar1);
        lVar4 = lVar1;
        func_0x00010bf52a60(lVar1,param_2,&uStack_1f0,auStack_170,0x10);
        if (lVar4 != 0) {
          lVar12 = *plStack_1e0;
          do {
            lVar11 = 0;
            do {
              if (*plStack_1e0 != lVar12) {
                _objc_enumerationMutation(lVar1);
              }
              uVar13 = *(undefined8 *)(lStack_1e8 + lVar11 * 8);
              uVar5 = uVar13;
              func_0x00010bf3cf60(uVar13);
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar5;
              func_0x000108ea5f00();
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uVar3;
              func_0x00010c0720c0(uVar3,param_2,uVar6);
              _objc_release(uVar6);
              _objc_release(uVar5);
              if ((int)uVar7 != 0) {
                func_0x00010befa120(puVar2,param_2,uVar13);
              }
              lVar11 = lVar11 + 1;
            } while (lVar4 != lVar11);
            lVar4 = lVar1;
            func_0x00010bf52a60(lVar1,param_2,&uStack_1f0,auStack_170,0x10);
          } while (lVar4 != 0);
        }
        _objc_release(lVar1);
        _objc_release(uVar3);
        lVar10 = lVar10 + 1;
      } while (lVar10 != lStack_200);
      lStack_200 = param_4;
      func_0x00010bf52a60(param_4,param_2,&uStack_1b0,auStack_f0,0x10);
    } while (lStack_200 != 0);
  }
  _objc_release(param_4);
  puVar8 = puVar2;
  func_0x00010c12d500(lVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  func_0x00010be75840(param_3,param_2,&PTR____CFConstantStringClassReference_110e65ef8);
  param_3 = param_3 + 0x90;
  _objc_loadWeakRetained();
  lVar1 = param_3;
  func_0x00010bf25180();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_3);
  if (lVar9 != 0) {
    lVar1 = lVar9;
    func_0x00010c0b7dc0(lVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cbf00();
    _objc_release(lVar1);
    lVar1 = lVar9;
    func_0x00010c0b7ee0(lVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd3240();
    _objc_release(lVar1);
  }
  _objc_release(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 10696760c; end: 1069676e7; -[SCStoriesSnapProPendingSnapManager notifyBusinessProfileUpdateForBusinessId:] */

void FUN_10696760c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010be75840(param_1,param_2,&PTR____CFConstantStringClassReference_110e65ef8);
  param_1 = param_1 + 0x90;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010bf25180();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x00010c0b7dc0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cbf00();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010c0b7ee0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd3240();
    _objc_release(lVar1);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069676e8; end: 10696771b;  */

void FUN_1069676e8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c259c00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbf00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10696771c; end: 1069677af; -[SCStoriesSnapProPendingSnapManager _pollerGrapheneLog:] */

void FUN_10696771c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x48);
  _objc_retain(param_3);
  func_0x000108f4833c();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e65f18;
  }
  else {
    ppuVar1 = *(undefined ***)(param_1 + 0x48);
    func_0x000108f4833c(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
  func_0x000108f34fe8(*(undefined8 *)(param_1 + 0x98),param_3,ppuVar1,1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 1069677b0; end: 1069677ef; -[SCStoriesSnapProPendingSnapManager _subscribeForNewProfileIdChangeToPollForIncomingClientIds:] */

void FUN_1069677b0(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x68));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c116580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069677f0; end: 106967bdb; -[SCStoriesSnapProPendingSnapManager _startPollerForNewProfileId:] */

void FUN_1069677f0(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b4708;
  func_0x00010bf6a060(PTR_PTR_1126b4708);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((uVar5 & 1) == 0) {
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    *(ulong *)(param_1 + 0x60) = param_3;
    _objc_release(uVar3);
    func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x58));
    lVar4 = *(long *)(param_1 + 0x68);
    func_0x00010bf529e0();
    if (lVar4 != 0) {
      uVar5 = *(ulong *)(param_1 + 0x48);
      func_0x000108f4853c();
      if ((uVar5 & 1) == 0) {
        lVar4 = param_1;
        func_0x00010be218c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar4 != 0) {
          lVar4 = *(long *)(param_1 + 0x20);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar4;
          func_0x00010c0b7fc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar4);
          _objc_retain(lVar6);
          lVar4 = lVar6;
          func_0x00010bf52a60();
          lVar1 = lRam0000000000000000;
          while (lVar4 != 0) {
            lVar14 = 0;
            do {
              if (lRam0000000000000000 != lVar1) {
                _objc_enumerationMutation(lVar6);
              }
              uVar12 = *(ulong *)(lVar14 * 8);
              uVar5 = uVar12;
              func_0x00010c1164a0();
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uVar5;
              func_0x00010c116a20();
              _objc_retainAutoreleasedReturnValue();
              uVar10 = uVar7;
              func_0x00010c0720c0();
              _objc_release(uVar7);
              _objc_release(uVar5);
              if ((uVar10 & 1) != 0) {
                func_0x00010c1164a0();
                _objc_retainAutoreleasedReturnValue();
                uVar5 = uVar12;
                func_0x00010bfe44e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar12);
                _objc_release(lVar6);
                if (uVar5 != 0) goto LAB_106967b38;
                goto LAB_1069679f0;
              }
              lVar14 = lVar14 + 1;
            } while (lVar4 != lVar14);
            lVar4 = lVar6;
            func_0x00010bf52a60();
          }
          _objc_release(lVar6);
LAB_1069679f0:
          uVar5 = *(ulong *)(param_1 + 0x20);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar5;
          func_0x00010c1168c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          _objc_retain(uVar10);
          uVar7 = uVar10;
          func_0x00010bf52a60();
          lVar4 = lRam0000000000000000;
joined_r0x000106967a44:
          uVar5 = uVar10;
          if (uVar7 != 0) {
            uVar5 = 0;
            while( true ) {
              if (lRam0000000000000000 != lVar4) {
                _objc_enumerationMutation(uVar10);
              }
              uVar13 = *(ulong *)(uVar5 * 8);
              uVar12 = uVar13;
              func_0x00010bf25000();
              _objc_retainAutoreleasedReturnValue();
              uVar8 = uVar12;
              func_0x00010bfe5ea0();
              _objc_retainAutoreleasedReturnValue();
              uVar9 = uVar8;
              func_0x00010c0720c0();
              _objc_release(uVar8);
              _objc_release(uVar12);
              if ((uVar9 & 1) != 0) break;
              uVar5 = uVar5 + 1;
              if (uVar7 == uVar5) goto code_r0x000106967acc;
            }
            func_0x00010bf25000();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar13;
            func_0x00010bfe44e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar13);
            _objc_release(uVar10);
            _objc_release(uVar10);
            if (uVar5 == 0) goto LAB_106967b74;
LAB_106967b38:
            uVar10 = *(ulong *)(param_1 + 0x88);
            func_0x00010c269d40(uVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c150180();
          }
          _objc_release(uVar10);
          _objc_release(uVar5);
LAB_106967b74:
          _objc_release(lVar6);
        }
      }
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      uVar3 = *(undefined8 *)(param_1 + 0x68);
      *(undefined **)(param_1 + 0x68) = puVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    _objc_storeStrong(param_3 + 0xa0,0);
    _objc_storeStrong(param_3 + 0x98,0);
    _objc_destroyWeak(param_3 + 0x90);
    _objc_storeStrong(param_3 + 0x88,0);
    _objc_storeStrong(param_3 + 0x80,0);
    _objc_storeStrong(param_3 + 0x78,0);
    _objc_storeStrong(param_3 + 0x70,0);
    _objc_storeStrong(param_3 + 0x68,0);
    _objc_storeStrong(param_3 + 0x60,0);
    _objc_storeStrong(param_3 + 0x58,0);
    _objc_storeStrong(param_3 + 0x50,0);
    _objc_storeStrong(param_3 + 0x48,0);
    _objc_storeStrong(param_3 + 0x40,0);
    _objc_storeStrong(param_3 + 0x38,0);
    _objc_storeStrong(param_3 + 0x30,0);
    _objc_storeStrong(param_3 + 0x28,0);
    _objc_storeStrong(param_3 + 0x20,0);
    _objc_storeStrong(param_3 + 0x18,0);
    _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
    return;
  }
  return;
code_r0x000106967acc:
  uVar7 = uVar10;
  func_0x00010bf52a60();
  goto joined_r0x000106967a44;
}



/* Entry: 106967bdc; end: 106967cdf; -[SCStoriesSnapProPendingSnapManager .cxx_destruct] */

void FUN_106967bdc(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_destroyWeak(param_1 + 0x90);
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



/* Entry: 106967ce0; end: 106967d8f; -[SCStoriesSnapSaveCoordinator startSavingSnapWithStoryId:snapComponentId:] */

void FUN_106967ce0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c067fc0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 1) {
    func_0x00010bea6f20(param_1,param_2,param_3,param_4,1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106967d90; end: 106967edb; -[SCStoriesSnapSaveCoordinator finishSavingSnapWithStoryId:snapComponentId:success:] */

void FUN_106967d90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c067fc0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 1) {
    if (param_5 == 0) {
      func_0x00010bde0e00(param_1);
    }
    else {
      func_0x00010bea6f20(param_1);
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_106967edc;
      puStack_70 = &UNK_110848ba8;
      lStack_68 = param_1;
      _objc_retain(param_3);
      uStack_60 = param_3;
      _objc_retain(param_4);
      uStack_58 = param_4;
      func_0x000100c749e0(0x40400000,"APPSTORE",&puStack_88);
      _objc_release(uStack_58);
      _objc_release(uStack_60);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106967edc; end: 106967f63;  */

void FUN_106967edc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c0e00e0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c067fc0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bde0e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__clearSaveStateWithStoryId_snapC_112555d20,
               *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
    return;
  }
  return;
}



/* Entry: 106967f64; end: 106967feb; -[SCStoriesSnapSaveCoordinator fetchSnapSaveStateWithStoryId:snapComponentId:] */

undefined8 FUN_106967f64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  func_0x00010c0e00e0(uVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar2 = uVar1;
  func_0x00010c067fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar3);
  return uVar2;
}



/* Entry: 106967fec; end: 1069680ff; -[SCStoriesSnapSaveCoordinator _setSaveStateWithStoryId:snapComponentId:saveState:] */

void FUN_106967fec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = *(long *)(param_1 + 8);
  _objc_retain(param_4);
  func_0x00010c0e00e0(lVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
    _objc_release(puVar1);
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e00e0(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(uVar2);
  _objc_release(puVar1);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c14b100();
  _objc_release(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106968100; end: 10696819b; -[SCStoriesSnapSaveCoordinator _clearSaveStateWithStoryId:snapComponentId:] */

void FUN_106968100(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(uVar1);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c14b100();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10696819c; end: 1069681b3; -[SCStoriesSnapSaveCoordinator saveStateForwarder] */

void FUN_10696819c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069681b4; end: 106968223; -[SCStoriesSnapSaveCoordinator .cxx_destruct] */

void FUN_1069681b4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106968224; end: 10696822b;  */

void FUN_106968224(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23f810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapClientId_11266d828);
  return;
}



/* Entry: 10696822c; end: 106969687;  */

void FUN_10696822c(undefined *param_1,undefined **param_2,undefined8 param_3,undefined8 param_4,
                  undefined **param_5,undefined **param_6,undefined **param_7,undefined **param_8,
                  undefined **param_9,undefined **param_10,undefined8 param_11,undefined **param_12,
                  long param_13,ulong param_14,undefined **param_15)

{
  bool bVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined1 *puVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined8 uVar19;
  undefined1 *puVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  long lVar24;
  long lVar25;
  undefined *puVar26;
  undefined **ppuVar27;
  int iVar28;
  long lVar29;
  long lVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  long lVar33;
  undefined **ppuVar34;
  long lVar35;
  long lVar36;
  undefined **ppuVar37;
  undefined **ppuVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  undefined *puStack_868;
  undefined8 uStack_860;
  code *pcStack_858;
  undefined *puStack_850;
  undefined **ppuStack_848;
  undefined **ppuStack_840;
  undefined **ppuStack_838;
  undefined8 uStack_830;
  long lStack_828;
  long *plStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  long lStack_770;
  undefined **ppuStack_6d0;
  undefined **ppuStack_6c8;
  undefined8 uStack_6c0;
  undefined **ppuStack_6b8;
  undefined *puStack_608;
  undefined *puStack_5a0;
  long lStack_598;
  long *plStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  long lStack_558;
  long *plStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  long lStack_518;
  long *plStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  long lStack_4d8;
  long *plStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  long lStack_498;
  long *plStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined *puStack_460;
  long lStack_458;
  code *pcStack_450;
  undefined *puStack_448;
  undefined8 uStack_440;
  undefined *puStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined1 auStack_3a0 [256];
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar11 = param_2;
  ppuVar21 = param_6;
  ppuVar22 = param_7;
  ppuVar23 = param_8;
  _objc_retain();
  _objc_retain(param_2);
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
  _objc_retain(param_14);
  _objc_retain(param_15);
  func_0x00010bfa4c20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_4d8 = 0;
  uStack_4e0 = 0;
  uStack_4c8 = 0;
  plStack_4d0 = (long *)0x0;
  uStack_4b8 = 0;
  uStack_4c0 = 0;
  uStack_4a8 = 0;
  uStack_4b0 = 0;
  _objc_retain(param_13);
  lVar24 = param_13;
  func_0x00010bf52a60();
  if (lVar24 != 0) {
    lVar25 = *plStack_4d0;
    do {
      lVar33 = 0;
      do {
        if (*plStack_4d0 != lVar25) {
          _objc_enumerationMutation(param_13);
        }
        lVar29 = *(long *)(lStack_4d8 + lVar33 * 8);
        lVar30 = lVar29;
        func_0x00010c259cc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(ppuVar2);
        _objc_release(lVar30);
        lVar30 = lVar29;
        func_0x00010c25b720();
        if (lVar30 == 3) {
          func_0x00010c25b340(lVar29);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf529e0();
          func_0x00010c0aa9e0(param_11);
          _objc_release(lVar29);
        }
        lVar33 = lVar33 + 1;
      } while (lVar24 != lVar33);
      lVar24 = param_13;
      func_0x00010bf52a60();
    } while (lVar24 != 0);
  }
  _objc_release(param_13);
  _objc_retain(param_1);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar31 = 0;
  lStack_458 = 0;
  puStack_460 = (undefined *)0x0;
  puStack_448 = (undefined *)0x0;
  pcStack_450 = (code *)0x0;
  puStack_438 = (undefined *)0x0;
  uStack_440 = 0;
  uStack_428 = 0;
  uStack_430 = 0;
  puVar4 = param_1;
  func_0x0001084da354();
  _objc_retainAutoreleasedReturnValue();
  puStack_608 = puVar4;
  func_0x00010bf52a60();
  if (puStack_608 != (undefined *)0x0) {
    lVar24 = *(long *)pcStack_450;
    do {
      puVar26 = (undefined *)0x0;
      do {
        uVar32 = uVar31;
        if (*(long *)pcStack_450 != lVar24) {
          _objc_enumerationMutation(puVar4);
          uVar32 = uVar31;
        }
        lVar30 = *(long *)(lStack_458 + (long)puVar26 * 8);
        lVar25 = lVar30;
        func_0x00010c23f8e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c24ff60(lVar30);
        uVar31 = 0;
        lStack_498 = 0;
        uStack_4a0 = 0;
        uStack_488 = 0;
        plStack_490 = (long *)0x0;
        uStack_478 = 0;
        uStack_480 = 0;
        uStack_468 = 0;
        uStack_470 = 0;
        func_0x00010c25a960();
        _objc_retainAutoreleasedReturnValue();
        lVar33 = lVar30;
        func_0x00010bf52a60();
        if (lVar33 != 0) {
          lVar29 = *plStack_490;
          do {
            lVar35 = 0;
            do {
              uVar19 = uVar31;
              if (*plStack_490 != lVar29) {
                _objc_enumerationMutation(lVar30);
                uVar19 = uVar31;
              }
              uVar31 = *(undefined8 *)(lStack_498 + lVar35 * 8);
              uVar5 = uVar31;
              func_0x00010c259cc0();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar3;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (puVar6 == (undefined *)0x0) {
                puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
                _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
                func_0x00010c1d0640(puVar3);
                _objc_release(puVar6);
              }
              puVar6 = PTR_PTR_1126cf448;
              _objc_alloc(PTR_PTR_1126cf448);
              func_0x00010c105700(uVar31);
              uVar31 = uVar32;
              func_0x00010c04bae0(uVar32,uVar19,puVar6);
              puVar7 = puVar3;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640();
              _objc_release(puVar7);
              _objc_release(puVar6);
              _objc_release(uVar5);
              lVar35 = lVar35 + 1;
            } while (lVar33 != lVar35);
            lVar33 = lVar30;
            func_0x00010bf52a60();
          } while (lVar33 != 0);
        }
        _objc_release(lVar30);
        _objc_release(lVar25);
        puVar26 = puVar26 + 1;
      } while (puVar26 != puStack_608);
      puStack_608 = puVar4;
      func_0x00010bf52a60();
    } while (puStack_608 != (undefined *)0x0);
  }
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010bf51e00();
  _objc_release(puVar3);
  _objc_release(param_1);
  lStack_518 = 0;
  uStack_520 = 0;
  uStack_508 = 0;
  plStack_510 = (long *)0x0;
  uStack_4f8 = 0;
  uStack_500 = 0;
  uStack_4e8 = 0;
  uStack_4f0 = 0;
  ppuVar34 = param_2;
  func_0x00010c0ece40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar34;
  func_0x00010bf32220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar34);
  ppuVar34 = ppuVar8;
  func_0x00010bf52a60();
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  if (ppuVar34 != (undefined **)0x0) {
    lVar24 = *plStack_510;
    do {
      ppuVar37 = (undefined **)0x0;
      do {
        if (*plStack_510 != lVar24) {
          _objc_enumerationMutation(ppuVar8);
        }
        lVar33 = *(long *)(lStack_518 + (long)ppuVar37 * 8);
        lVar25 = lVar33;
        func_0x00010c293b00();
        _objc_retainAutoreleasedReturnValue();
        if (lVar25 != 0) {
          lVar30 = lVar33;
          func_0x00010bf454e0();
          _objc_retainAutoreleasedReturnValue();
          lVar29 = lVar30;
          func_0x00010bfe5ea0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar30);
          ppuVar9 = ppuVar2;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12d3e0(ppuVar2);
          func_0x00010bf454e0();
          _objc_retainAutoreleasedReturnValue();
          lVar30 = lVar33;
          func_0x00010bf52680();
          _objc_release(lVar33);
          iVar28 = (int)lVar30;
          if (iVar28 == 0x1f) {
            lVar30 = lVar25;
            func_0x00010c2456a0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar38 = ppuVar9;
            func_0x00010c25b340();
            _objc_retainAutoreleasedReturnValue();
            puVar26 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            uStack_2a0 = param_3;
            uStack_298 = param_4;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            ppuVar22 = (undefined **)0x1;
            lVar33 = lVar30;
            ppuVar11 = ppuVar38;
            ppuVar21 = param_12;
            ppuVar23 = param_15;
            func_0x000108f0e0cc(lVar30,ppuVar38,lVar29,puVar26,param_11);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar26);
            _objc_release(ppuVar38);
            _objc_release(lVar30);
            _objc_retain(param_1);
            _objc_retain(lVar33);
            lStack_188 = 0;
            uStack_190 = 0;
            uStack_178 = 0;
            plStack_180 = (long *)0x0;
            uStack_168 = 0;
            uStack_170 = 0;
            uStack_158 = 0;
            uStack_160 = 0;
            lVar30 = lVar33;
            func_0x00010bf52a60();
            if (lVar30 != 0) {
              lVar35 = *plStack_180;
              do {
                lVar36 = 0;
                do {
                  if (*plStack_180 != lVar35) {
                    _objc_enumerationMutation(lVar33);
                  }
                  uVar32 = *(undefined8 *)(lStack_188 + lVar36 * 8);
                  uVar31 = uVar32;
                  func_0x00010bf0e700();
                  _objc_retainAutoreleasedReturnValue();
                  puStack_460 = puVar3;
                  lStack_458 = 0xc2000000;
                  pcStack_450 = FUN_106969cb0;
                  puStack_448 = &UNK_11094d9d0;
                  uStack_440 = uVar32;
                  _objc_retain(param_1);
                  ppuVar21 = &puStack_460;
                  ppuVar22 = (undefined **)0x0;
                  ppuVar23 = (undefined **)0x0;
                  puStack_438 = param_1;
                  func_0x00010c0c1340(uVar31);
                  _objc_release(uVar31);
                  _objc_release(puStack_438);
                  lVar36 = lVar36 + 1;
                } while (lVar30 != lVar36);
                lVar30 = lVar33;
                func_0x00010bf52a60();
              } while (lVar30 != 0);
            }
            _objc_release(lVar33);
            _objc_release(param_1);
            bVar1 = true;
            if (lVar33 != 0) goto LAB_106968b38;
LAB_106968b14:
            func_0x00010c0aab20(param_11);
          }
          else {
            if (iVar28 == 0x1e) {
              ppuVar38 = param_6;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              if (ppuVar38 == (undefined **)0x0) {
                lVar33 = 0;
              }
              else {
                lVar30 = lVar25;
                func_0x00010c2456a0();
                _objc_retainAutoreleasedReturnValue();
                ppuVar10 = ppuVar9;
                func_0x00010c25b340();
                _objc_retainAutoreleasedReturnValue();
                ppuStack_6d0 = (undefined **)0x0;
                ppuStack_6c8 = (undefined **)0x0;
                uStack_6c0 = param_11;
                ppuStack_6b8 = param_12;
                ppuVar21 = (undefined **)0x0;
                ppuVar23 = (undefined **)0x0;
                lVar33 = lVar30;
                ppuVar11 = ppuVar10;
                ppuVar22 = param_5;
                func_0x000108f0d9f0(lVar30,ppuVar10,0,lVar29,ppuVar38);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar10);
                _objc_release(lVar30);
              }
              _objc_release(ppuVar38);
            }
            else {
              if (iVar28 != 0x1a) goto LAB_106968b14;
              lVar30 = lVar25;
              func_0x00010c2456a0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar38 = ppuVar9;
              func_0x00010c25b340();
              _objc_retainAutoreleasedReturnValue();
              ppuStack_6d0 = (undefined **)0x0;
              ppuStack_6c8 = (undefined **)0x0;
              ppuStack_6b8 = (undefined **)0x0;
              ppuVar21 = (undefined **)0x0;
              ppuVar22 = (undefined **)0x0;
              ppuVar23 = (undefined **)0x0;
              lVar33 = lVar30;
              ppuVar11 = ppuVar38;
              func_0x000108f0d2d4(lVar30,ppuVar38,0,param_3,param_4);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar38);
              _objc_release(lVar30);
              uStack_6c0 = param_11;
            }
            bVar1 = false;
            if (lVar33 == 0) goto LAB_106968b14;
LAB_106968b38:
            if (ppuVar9 == (undefined **)0x0) {
              ppuVar38 = (undefined **)PTR_PTR_1126b1338;
              _objc_alloc();
              ppuVar21 = (undefined **)0x0;
              func_0x00010c04dbe0();
              puVar26 = PTR_PTR_1126cf440;
              ppuVar11 = ppuVar38;
              func_0x000108519108();
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              puVar26 = puVar4;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar26;
              func_0x00010bf529e0();
              lVar30 = lVar33;
              if (puVar6 != (undefined *)0x0) {
                lVar35 = lVar25;
                func_0x0001069681e0();
                _objc_retainAutoreleasedReturnValue();
                ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                _objc_opt_new();
                puVar6 = PTR__OBJC_CLASS___NSSet_1126ae870;
                func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
                _objc_retainAutoreleasedReturnValue();
                ppuStack_6b8 = (undefined **)0x0;
                ppuStack_6c8 = param_10;
                uStack_6c0 = param_11;
                ppuStack_6d0 = param_9;
                ppuVar21 = param_7;
                ppuVar22 = param_8;
                ppuVar23 = ppuVar11;
                FUN_106969688(param_1,ppuVar9,puVar26,puVar6,param_3);
                _objc_release(puVar6);
                ppuVar38 = ppuVar11;
                func_0x00010bf529e0();
                if (ppuVar38 != (undefined **)0x0) {
                  lVar36 = lVar33;
                  func_0x00010c0d3c80();
                  func_0x00010befa160();
                  lVar30 = lVar36;
                  func_0x00010bf51e00();
                  _objc_release(lVar33);
                  _objc_release(lVar36);
                }
                _objc_release(ppuVar11);
                _objc_release(lVar35);
              }
              _objc_release(puVar26);
              ppuVar38 = param_6;
              func_0x00010c0e00e0(param_6);
              _objc_retainAutoreleasedReturnValue();
              lVar35 = lVar30;
              func_0x00010bf529e0();
              lVar33 = lVar30;
              ppuVar11 = ppuVar9;
              if (((lVar35 == 0) &&
                  (ppuVar10 = ppuVar9, func_0x00010c25b720(), ppuVar10 == (undefined **)0x2)) &&
                 (puVar26 = PTR_PTR_1126b0e28, func_0x00010c2315c0(), ((ulong)puVar26 & 1) == 0)) {
                puVar26 = PTR_PTR_1126cf440;
                func_0x000108519710();
                _objc_retainAutoreleasedReturnValue();
              }
              else {
                puVar26 = PTR_PTR_1126cf440;
                func_0x00010851930c();
                _objc_retainAutoreleasedReturnValue();
              }
            }
            _objc_release(ppuVar38);
            _objc_retain(&PTR___NSConcreteGlobalBlock_110a4fa40);
            lVar30 = lVar33;
            func_0x00010c246ca0(lVar33);
            _objc_retainAutoreleasedReturnValue();
            if (puVar26 != (undefined *)0x0) {
              _objc_setProperty_nonatomic_copy(puVar26);
            }
            _objc_release(lVar30);
            _objc_release(&PTR___NSConcreteGlobalBlock_110a4fa40);
            func_0x00010c25ed40(param_1);
            _objc_unsafeClaimAutoreleasedReturnValue();
            if (bVar1) {
              func_0x00010bf529e0(lVar33);
              func_0x00010c0aa9c0(param_11);
            }
            _objc_release(puVar26);
            _objc_release(lVar33);
          }
          _objc_release(ppuVar9);
          _objc_release(lVar29);
        }
        _objc_release(lVar25);
        ppuVar37 = (undefined **)((long)ppuVar37 + 1);
      } while (ppuVar37 != ppuVar34);
      ppuVar34 = ppuVar8;
      func_0x00010bf52a60();
    } while (ppuVar34 != (undefined **)0x0);
  }
  _objc_release(ppuVar8);
  dVar41 = 0.0;
  uStack_538 = 0;
  uStack_540 = 0;
  uStack_528 = 0;
  uStack_530 = 0;
  lStack_558 = 0;
  uStack_560 = 0;
  uStack_548 = 0;
  plStack_550 = (long *)0x0;
  ppuVar34 = ppuVar2;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar34;
  func_0x00010bf52a60();
  if (ppuVar8 != (undefined **)0x0) {
    lVar24 = *plStack_550;
    do {
      ppuVar37 = (undefined **)0x0;
      do {
        if (*plStack_550 != lVar24) {
          _objc_enumerationMutation(ppuVar34);
        }
        ppuVar38 = *(undefined ***)(lStack_558 + (long)ppuVar37 * 8);
        ppuVar9 = ppuVar38;
        func_0x00010c25b720();
        if (ppuVar9 == (undefined **)0x2) {
LAB_106968ea8:
          ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_opt_new();
          ppuVar9 = ppuVar38;
          func_0x00010c259cc0(ppuVar38);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar9);
          puVar26 = puVar3;
          func_0x00010bf529e0();
          if (puVar26 != (undefined *)0x0) {
            puVar26 = PTR__OBJC_CLASS___NSSet_1126ae870;
            _objc_opt_new(PTR__OBJC_CLASS___NSSet_1126ae870);
            ppuVar21 = ppuVar38;
            func_0x00010c25b720();
            ppuVar23 = ppuVar11;
            if (ppuVar21 == (undefined **)0x3) {
              ppuStack_6b8 = (undefined **)0x0;
              ppuVar21 = param_7;
              ppuVar22 = param_8;
              FUN_106969688(param_1,ppuVar38,puVar3,puVar26,param_3);
            }
            else {
              uVar12 = param_14;
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              uVar13 = uVar12;
              func_0x00010bf1f3c0();
              ppuStack_6b8 = (undefined **)(uVar13 & 0xff);
              ppuVar21 = param_7;
              ppuVar22 = param_8;
              FUN_106969688(param_1,ppuVar38,puVar3,puVar26,param_3);
              _objc_release(uVar12);
            }
            uStack_6c0 = param_11;
            ppuStack_6c8 = param_10;
            ppuStack_6d0 = param_9;
            _objc_release(puVar26);
          }
          ppuVar9 = ppuVar38;
          func_0x00010c25b720();
          if (ppuVar9 == (undefined **)0x2) {
            ppuVar9 = ppuVar38;
            func_0x00010c259cc0(ppuVar38);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = param_1;
            func_0x0001084dc184(param_1,ppuVar9);
            _objc_retainAutoreleasedReturnValue();
            puVar26 = puVar6;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar6);
            _objc_release(ppuVar9);
          }
          else {
            puVar26 = (undefined *)0x0;
          }
          puVar6 = puVar26;
          func_0x00010c27dd80();
          if (((puVar6 == (undefined *)0xa) &&
              (puVar6 = puVar26, func_0x00010bf60900(), ((ulong)puVar6 & 1) == 0)) &&
             (ppuVar9 = ppuVar11, func_0x00010bf529e0(), ppuVar9 == (undefined **)0x0)) {
            puVar6 = PTR_PTR_1126cf440;
            func_0x000108519710(PTR_PTR_1126cf440);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c25ed40(param_1);
            _objc_unsafeClaimAutoreleasedReturnValue();
          }
          else {
            puVar6 = puVar26;
            func_0x00010c27dd80();
            if (puVar6 == (undefined *)0xa) {
              func_0x00010bf60900(puVar26);
            }
            ppuVar9 = ppuVar38;
            func_0x00010c25b720();
            if (ppuVar9 == (undefined **)0x3) {
              func_0x00010bf529e0(ppuVar11);
              func_0x00010c0aa9c0(param_11);
            }
            _objc_retain(param_1);
            _objc_retain(ppuVar38);
            _objc_retain(puVar26);
            _objc_retain(ppuVar11);
            _objc_retain(param_3);
            ppuVar9 = ppuVar11;
            func_0x00010bf529e0();
            ppuVar10 = ppuVar38;
            if (((ppuVar9 == (undefined **)0x0) &&
                (ppuVar9 = ppuVar38, func_0x00010c25b720(), ppuVar9 == (undefined **)0x2)) &&
               (puVar6 = PTR_PTR_1126b0e28, func_0x00010c2315c0(), ((ulong)puVar6 & 1) == 0)) {
              puVar6 = PTR_PTR_1126cf440;
              func_0x000108519710(PTR_PTR_1126cf440);
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              puVar6 = PTR_PTR_1126cf440;
              func_0x00010851930c();
              _objc_retainAutoreleasedReturnValue();
              _objc_retain(&PTR___NSConcreteGlobalBlock_110a4fa40);
              ppuVar9 = ppuVar11;
              func_0x00010c246ca0(ppuVar11);
              _objc_retainAutoreleasedReturnValue();
              if (puVar6 != (undefined *)0x0) {
                _objc_setProperty_nonatomic_copy(puVar6);
              }
              _objc_release(ppuVar9);
              _objc_release(&PTR___NSConcreteGlobalBlock_110a4fa40);
            }
            func_0x00010c25ed40(param_1);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puVar6);
            _objc_release(param_3);
            _objc_release(ppuVar11);
            _objc_release(puVar26);
            _objc_release(ppuVar38);
            ppuVar38 = ppuVar10;
            puVar6 = param_1;
          }
          _objc_release(puVar6);
          _objc_release(puVar26);
          _objc_release(puVar3);
          _objc_release(ppuVar11);
          ppuVar11 = ppuVar38;
        }
        else {
          ppuVar9 = ppuVar38;
          func_0x00010c25b340();
          _objc_retainAutoreleasedReturnValue();
          ppuVar10 = ppuVar9;
          func_0x00010bf529e0();
          _objc_release(ppuVar9);
          if (ppuVar10 != (undefined **)0x0) goto LAB_106968ea8;
        }
        ppuVar37 = (undefined **)((long)ppuVar37 + 1);
      } while (ppuVar8 != ppuVar37);
      ppuVar8 = ppuVar34;
      func_0x00010bf52a60();
    } while (ppuVar8 != (undefined **)0x0);
  }
  _objc_release(ppuVar34);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new();
  func_0x00010c26f320();
  _objc_release(puVar3);
  dVar39 = 5.70940426362467e-315;
  func_0x00010bfb2cc0(param_7);
  ppuVar34 = &PTR____CFConstantStringClassReference_110e65f58;
  puVar20 = (undefined1 *)0x1;
  uVar31 = 0;
  ppuVar8 = param_7;
  dVar40 = dVar39;
  func_0x00010bf1f440();
  if ((int)ppuVar8 != 0) {
    dVar40 = 0.0;
    uStack_578 = 0;
    uStack_580 = 0;
    uStack_568 = 0;
    uStack_570 = 0;
    lStack_598 = 0;
    puStack_5a0 = (undefined *)0x0;
    uStack_588 = 0;
    plStack_590 = (long *)0x0;
    ppuVar34 = param_2;
    func_0x00010c0ece40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar34;
    func_0x00010bf32220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar34);
    ppuVar34 = &puStack_5a0;
    puVar20 = auStack_3a0;
    uVar31 = 0x10;
    ppuVar37 = ppuVar8;
    func_0x00010bf52a60();
    if (ppuVar37 != (undefined **)0x0) {
      lVar24 = *plStack_590;
      do {
        ppuVar34 = (undefined **)0x0;
        do {
          if (*plStack_590 != lVar24) {
            _objc_enumerationMutation(ppuVar8);
          }
          lVar29 = *(long *)(lStack_598 + (long)ppuVar34 * 8);
          lVar25 = lVar29;
          func_0x00010c293b00();
          _objc_retainAutoreleasedReturnValue();
          lVar33 = lVar25;
          func_0x00010bf61920();
          _objc_retainAutoreleasedReturnValue();
          lVar30 = lVar33;
          func_0x00010bf626e0();
          if ((int)lVar30 == 6) {
            bVar1 = true;
          }
          else {
            lVar30 = lVar25;
            func_0x00010bf61920();
            _objc_retainAutoreleasedReturnValue();
            lVar35 = lVar30;
            func_0x00010bf626e0();
            if ((int)lVar35 == 2) {
              bVar1 = true;
            }
            else {
              lVar35 = lVar25;
              func_0x00010bf61920();
              _objc_retainAutoreleasedReturnValue();
              lVar36 = lVar35;
              func_0x00010bf626e0();
              if ((int)lVar36 == 8) {
                bVar1 = true;
              }
              else {
                lVar36 = lVar25;
                func_0x00010bf61920();
                _objc_retainAutoreleasedReturnValue();
                lVar14 = lVar36;
                func_0x00010bf626e0();
                bVar1 = (int)lVar14 == 7;
                _objc_release(lVar36);
              }
              _objc_release(lVar35);
            }
            _objc_release(lVar30);
          }
          _objc_release(lVar33);
          lVar33 = lVar25;
          func_0x00010bfd6120();
          if ((int)lVar33 != 0 && bVar1) {
            lVar33 = lVar29;
            func_0x00010bf454e0();
            _objc_retainAutoreleasedReturnValue();
            lVar35 = lVar33;
            func_0x00010bfe5ea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar33);
            func_0x00010c259cc0();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar4;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar29);
            dVar40 = 0.0;
            lVar29 = lVar25;
            func_0x00010c2456a0();
            _objc_retainAutoreleasedReturnValue();
            lVar33 = lVar29;
            func_0x00010bf52a60();
            lVar30 = lRam0000000000000000;
            while (lVar33 != 0) {
              lVar36 = 0;
              do {
                dVar43 = dVar40;
                if (lRam0000000000000000 != lVar30) {
                  _objc_enumerationMutation(lVar29);
                  dVar43 = dVar40;
                }
                ppuVar38 = *(undefined ***)(lVar36 * 8);
                func_0x00010c23f800();
                _objc_retainAutoreleasedReturnValue();
                ppuVar9 = ppuVar38;
                func_0x000108ea5f00();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar38);
                puVar26 = puVar3;
                func_0x00010c0e00e0(puVar3);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c105700();
                dVar40 = dVar43;
                func_0x00010c24ff60(puVar26);
                if (dVar40 <= dVar43) {
                  func_0x00010c105700(puVar26);
                  dVar40 = dVar41 - dVar40;
                  if ((double)SUB84(dVar39,0) <= dVar40) {
                    ppuVar11 = ppuVar9;
                    func_0x0001084db034(param_1,ppuVar9,lVar35);
                  }
                }
                _objc_release(puVar26);
                _objc_release(ppuVar9);
                lVar36 = lVar36 + 1;
              } while (lVar33 != lVar36);
              lVar33 = lVar29;
              func_0x00010bf52a60();
            }
            _objc_release(lVar29);
            _objc_release(puVar3);
            _objc_release(lVar35);
          }
          _objc_release(lVar25);
          ppuVar34 = (undefined **)((long)ppuVar34 + 1);
        } while (ppuVar34 != ppuVar37);
        ppuVar34 = &puStack_5a0;
        puVar20 = auStack_3a0;
        uVar31 = 0x10;
        ppuVar37 = ppuVar8;
        func_0x00010bf52a60();
      } while (ppuVar37 != (undefined **)0x0);
    }
    _objc_release(ppuVar8);
  }
  _objc_release(puVar4);
  _objc_release(ppuVar2);
  _objc_release(param_13);
  _objc_release(param_15);
  _objc_release(param_14);
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
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  lStack_770 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = ppuVar11;
  _objc_retain();
  _objc_retain(ppuVar11);
  _objc_retain(ppuVar34);
  _objc_retain(puVar20);
  _objc_retain(uVar31);
  _objc_retain(ppuVar21);
  _objc_retain(ppuVar22);
  _objc_retain(ppuVar23);
  _objc_retain(ppuStack_6d0);
  _objc_retain(ppuStack_6c8);
  _objc_retain(uStack_6c0);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new();
  func_0x00010c26f320();
  _objc_release(puVar3);
  ppuVar2 = ppuVar11;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  dVar41 = 0.0;
  lStack_828 = 0;
  uStack_830 = 0;
  uStack_818 = 0;
  plStack_820 = (long *)0x0;
  uStack_808 = 0;
  uStack_810 = 0;
  uStack_7f8 = 0;
  uStack_800 = 0;
  ppuVar8 = ppuVar11;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  ppuVar37 = ppuVar8;
  func_0x00010bf52a60();
  iVar28 = (int)ppuVar9;
  if (ppuVar37 != (undefined **)0x0) {
    lVar24 = *plStack_820;
    do {
      ppuVar38 = (undefined **)0x0;
      do {
        if (*plStack_820 != lVar24) {
          _objc_enumerationMutation(ppuVar8);
        }
        ppuVar27 = *(undefined ***)(lStack_828 + (long)ppuVar38 * 8);
        ppuVar10 = ppuVar27;
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        ppuVar15 = ppuVar10;
        func_0x000108ea5f00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar10);
        ppuVar10 = ppuVar27;
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar20;
        func_0x00010bf4b900();
        _objc_release(ppuVar10);
        if ((int)puVar16 == 0) {
          ppuVar10 = ppuVar34;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar17 = ppuVar27;
          func_0x00010c15f2e0();
          _objc_retainAutoreleasedReturnValue();
          if (ppuVar17 != (undefined **)0x0) {
            func_0x00010c105700(ppuVar10);
            dVar39 = dVar41;
            _objc_release(ppuVar17);
            bVar1 = dVar41 != 0.0;
            dVar41 = dVar39;
            if (bVar1) {
              ppuVar17 = ppuVar27;
              func_0x00010c26f2a0(ppuVar27);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf9c720();
              dVar41 = dVar39;
              _objc_release(ppuVar17);
              if (dVar39 < dVar40) {
                func_0x00010c0aab00(uStack_6c0);
              }
            }
          }
          func_0x00010c105700(ppuVar10);
          if ((ppuVar10 == (undefined **)0x0) ||
             (((char)ppuStack_6b8 != '\0' && (dVar41 = dVar40 - dVar41, 20.0 <= dVar41)))) {
            func_0x00010bf5bbc0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar18 = ppuVar27;
            func_0x00010c0720c0();
            ppuVar17 = &PTR____CFConstantStringClassReference_110e65f98;
            if ((int)ppuVar18 == 0) {
              ppuVar17 = &PTR____CFConstantStringClassReference_110e65fb8;
            }
            _objc_retain(ppuVar17);
            _objc_release(ppuVar27);
            func_0x00010c0aab00(uStack_6c0);
          }
          else {
            dVar39 = 5.70940426362467e-315;
            func_0x00010bfb2cc0(ppuVar21);
            dVar43 = (double)SUB84(dVar39,0);
            ppuVar17 = ppuVar21;
            func_0x00010bf1f440();
            dVar41 = dVar39;
            if (((int)ppuVar17 != 0) &&
               (ppuVar17 = ppuVar27, func_0x0001084efcbc(), dVar41 = dVar39, (int)ppuVar17 != 0)) {
              func_0x00010c15f2e0();
              _objc_retainAutoreleasedReturnValue();
              dVar41 = dVar39;
              if (ppuVar27 != (undefined **)0x0) {
                func_0x00010c105700(ppuVar10);
                dVar42 = dVar39;
                _objc_release(ppuVar27);
                dVar41 = dVar42;
                if (dVar39 != 0.0) {
                  func_0x00010c105700(ppuVar10);
                  dVar41 = dVar42;
                  func_0x00010c24ff60(ppuVar10);
                  if (dVar41 <= dVar42) {
                    func_0x00010c105700(ppuVar10);
                    dVar41 = dVar40 - dVar41;
                    if (dVar43 <= dVar41) {
                      func_0x00010c0aab00(uStack_6c0);
                      goto LAB_1069699f0;
                    }
                  }
                }
              }
            }
            func_0x00010befa120(ppuVar23);
            ppuVar27 = ppuVar22;
            func_0x00010bf4b900();
            if (((ulong)ppuVar27 & 1) != 0) goto LAB_1069699f0;
            func_0x00010c0ac800(uStack_6c0);
            puStack_868 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_860 = 0xc2000000;
            pcStack_858 = FUN_106969d34;
            puStack_850 = &UNK_110848ba8;
            _objc_retain(ppuStack_6c8);
            ppuStack_848 = ppuStack_6c8;
            _objc_retain(ppuVar2);
            ppuStack_840 = ppuVar2;
            _objc_retain(ppuVar15);
            ppuVar27 = &puStack_868;
            ppuStack_838 = ppuVar15;
            _objc_retainBlock();
            func_0x00010c105700(ppuVar10);
            dVar39 = dVar41;
            func_0x00010c24ff60(ppuVar10);
            if (dVar39 <= dVar41) {
              func_0x00010c105700(ppuVar10);
              dVar41 = dVar40 - dVar39;
              if (dVar43 <= dVar41) goto LAB_106969b9c;
            }
            else {
              func_0x00010c24ff60();
              dVar41 = dVar40 - dVar39;
              if (dVar43 + 300.0 <= dVar41) {
LAB_106969b9c:
                func_0x00010c0ac800(uStack_6c0);
                (*(code *)ppuVar27[2])(ppuVar27);
              }
            }
            _objc_release(ppuVar27);
            _objc_release(ppuStack_838);
            _objc_release(ppuStack_840);
            ppuVar17 = ppuStack_848;
          }
          _objc_release(ppuVar17);
LAB_1069699f0:
          _objc_release(ppuVar10);
        }
        else {
          puVar3 = param_1;
          ppuVar9 = ppuVar15;
          func_0x0001084db034(param_1,ppuVar15,ppuVar2);
          if ((int)puVar3 != 0) {
            ppuVar10 = ppuStack_6d0;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (ppuVar10 == (undefined **)0x0) {
              puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
              _objc_opt_new();
              func_0x00010c1d0640(ppuStack_6d0);
              _objc_release(puVar3);
            }
            ppuVar10 = ppuStack_6d0;
            func_0x00010c0e00e0(ppuStack_6d0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120();
            goto LAB_1069699f0;
          }
        }
        _objc_release(ppuVar15);
        ppuVar38 = (undefined **)((long)ppuVar38 + 1);
      } while (ppuVar37 != ppuVar38);
      ppuVar37 = ppuVar8;
      func_0x00010bf52a60();
      iVar28 = (int)ppuVar9;
    } while (ppuVar37 != (undefined **)0x0);
  }
  _objc_release(ppuVar8);
  _objc_release(ppuVar2);
  _objc_release(uStack_6c0);
  _objc_release(ppuStack_6c8);
  _objc_release(ppuStack_6d0);
  _objc_release(ppuVar23);
  _objc_release(ppuVar22);
  _objc_release(ppuVar21);
  _objc_release(uVar31);
  _objc_release(puVar20);
  _objc_release(ppuVar34);
  _objc_release(ppuVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_770) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c077620();
  if (iVar28 != 0) {
    uVar31 = *(undefined8 *)(param_1 + 0x20);
    uVar32 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c15f2e0(uVar31);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c26f2a0(uVar19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2709c0();
    func_0x0001084e8970(uVar32,uVar31);
    _objc_release(uVar19);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar31);
    return;
  }
  return;
}



/* Entry: 106969688; end: 106969caf;  */

void FUN_106969688(double param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,ulong param_8,undefined8 param_9,
                  long param_10,undefined **param_11,undefined8 param_12,char param_13)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined **ppuStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = param_3;
  _objc_retain();
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
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new();
  func_0x00010c26f320();
  _objc_release(puVar4);
  lVar5 = param_3;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  dVar19 = 0.0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lVar6 = param_3;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf52a60();
  iVar3 = (int)lVar15;
  if (lVar7 != 0) {
    lVar17 = *plStack_150;
    do {
      lVar18 = 0;
      do {
        if (*plStack_150 != lVar17) {
          _objc_enumerationMutation(lVar6);
        }
        lVar16 = *(long *)(lStack_158 + lVar18 * 8);
        lVar8 = lVar16;
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar8;
        func_0x000108ea5f00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar8);
        lVar8 = lVar16;
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = param_5;
        func_0x00010bf4b900();
        _objc_release(lVar8);
        if ((int)uVar10 == 0) {
          lVar8 = param_4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar16;
          func_0x00010c15f2e0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar11 != 0) {
            func_0x00010c105700(lVar8);
            dVar20 = dVar19;
            _objc_release(lVar11);
            bVar2 = dVar19 != 0.0;
            dVar19 = dVar20;
            if (bVar2) {
              lVar11 = lVar16;
              func_0x00010c26f2a0(lVar16);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf9c720();
              dVar19 = dVar20;
              _objc_release(lVar11);
              if (dVar20 < param_1) {
                func_0x00010c0aab00(param_12);
              }
            }
          }
          func_0x00010c105700(lVar8);
          if ((lVar8 == 0) || ((param_13 != '\0' && (dVar19 = param_1 - dVar19, 20.0 <= dVar19)))) {
            func_0x00010bf5bbc0();
            _objc_retainAutoreleasedReturnValue();
            lVar11 = lVar16;
            func_0x00010c0720c0();
            ppuVar13 = &PTR____CFConstantStringClassReference_110e65f98;
            if ((int)lVar11 == 0) {
              ppuVar13 = &PTR____CFConstantStringClassReference_110e65fb8;
            }
            _objc_retain(ppuVar13);
            _objc_release(lVar16);
            func_0x00010c0aab00(param_12);
          }
          else {
            dVar20 = 5.70940426362467e-315;
            func_0x00010bfb2cc0(param_7);
            dVar22 = (double)SUB84(dVar20,0);
            uVar10 = param_7;
            func_0x00010bf1f440();
            dVar19 = dVar20;
            if (((int)uVar10 != 0) &&
               (lVar11 = lVar16, func_0x0001084efcbc(), dVar19 = dVar20, (int)lVar11 != 0)) {
              func_0x00010c15f2e0();
              _objc_retainAutoreleasedReturnValue();
              dVar19 = dVar20;
              if (lVar16 != 0) {
                func_0x00010c105700(lVar8);
                dVar21 = dVar20;
                _objc_release(lVar16);
                dVar19 = dVar21;
                if (dVar20 != 0.0) {
                  func_0x00010c105700(lVar8);
                  dVar19 = dVar21;
                  func_0x00010c24ff60(lVar8);
                  if (dVar19 <= dVar21) {
                    func_0x00010c105700(lVar8);
                    dVar19 = param_1 - dVar19;
                    if (dVar22 <= dVar19) {
                      func_0x00010c0aab00(param_12);
                      goto LAB_1069699f0;
                    }
                  }
                }
              }
            }
            func_0x00010befa120(param_9);
            uVar12 = param_8;
            func_0x00010bf4b900();
            if ((uVar12 & 1) != 0) goto LAB_1069699f0;
            func_0x00010c0ac800(param_12);
            puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_190 = 0xc2000000;
            pcStack_188 = FUN_106969d34;
            puStack_180 = &UNK_110848ba8;
            _objc_retain(param_11);
            ppuStack_178 = param_11;
            _objc_retain(lVar5);
            lStack_170 = lVar5;
            _objc_retain(lVar9);
            ppuVar13 = &puStack_198;
            lStack_168 = lVar9;
            _objc_retainBlock();
            func_0x00010c105700(lVar8);
            dVar20 = dVar19;
            func_0x00010c24ff60(lVar8);
            if (dVar20 <= dVar19) {
              func_0x00010c105700(lVar8);
              dVar19 = param_1 - dVar20;
              if (dVar22 <= dVar19) goto LAB_106969b9c;
            }
            else {
              func_0x00010c24ff60();
              dVar19 = param_1 - dVar20;
              if (dVar22 + 300.0 <= dVar19) {
LAB_106969b9c:
                func_0x00010c0ac800(param_12);
                (*(code *)ppuVar13[2])(ppuVar13);
              }
            }
            _objc_release(ppuVar13);
            _objc_release(lStack_168);
            _objc_release(lStack_170);
            ppuVar13 = ppuStack_178;
          }
          _objc_release(ppuVar13);
LAB_1069699f0:
          _objc_release(lVar8);
        }
        else {
          lVar8 = param_2;
          lVar15 = lVar9;
          func_0x0001084db034(param_2,lVar9,lVar5);
          if ((int)lVar8 != 0) {
            lVar8 = param_10;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar8 == 0) {
              puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
              _objc_opt_new();
              func_0x00010c1d0640(param_10);
              _objc_release(puVar4);
            }
            lVar8 = param_10;
            func_0x00010c0e00e0(param_10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120();
            goto LAB_1069699f0;
          }
        }
        _objc_release(lVar9);
        lVar18 = lVar18 + 1;
      } while (lVar7 != lVar18);
      lVar7 = lVar6;
      func_0x00010bf52a60();
      iVar3 = (int)lVar15;
    } while (lVar7 != 0);
  }
  _objc_release(lVar6);
  _objc_release(lVar5);
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
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c077620();
  if (iVar3 != 0) {
    uVar10 = *(undefined8 *)(param_2 + 0x20);
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c15f2e0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c26f2a0(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2709c0();
    func_0x0001084e8970(uVar1,uVar10);
    _objc_release(uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar10);
    return;
  }
  return;
}



/* Entry: 106969cb0; end: 106969d33;  */

void FUN_106969cb0(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c077620();
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c15f2e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c26f2a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2709c0();
    func_0x0001084e8970(uVar1,uVar2);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 106969d34; end: 106969db3;  */

void FUN_106969d34(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0e00e0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20),param_2,puVar2,
                        *(undefined8 *)(param_1 + 0x28));
    _objc_release(puVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0(uVar3,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106969db4; end: 10696a1d7; -[SCMyStoriesSyncer initWithDocObjectContext:performer:myStoriesStore:snapchatterFetcher:circumstanceEngine:snapPostCoordinator:grapheneMetricsEmitter:ghostToMyStoriesMetricsEmitter:postingLogger:currentUserId:usernameProvider:debounceInterval:snapProProfileIdProvider:customStoriesDataFetcher:adConfigProvider:] */

undefined8 *
FUN_106969db4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_88;
  undefined *puStack_80;
  
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
  _objc_retain(param_16);
  _objc_retain(param_17);
  puStack_80 = PTR_PTR_1126f3e50;
  puVar1 = &uStack_88;
  uStack_88 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[9];
    puVar1[9] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[5];
    puVar1[5] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[6];
    puVar1[6] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[8];
    puVar1[8] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_15;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cf450;
    _objc_alloc();
    func_0x00010c034d20(param_1);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_8);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_8);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x11];
    puVar1[0x11] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_8);
    _objc_release(param_8);
  }
  _objc_release(param_17);
  _objc_release(param_16);
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
  return puVar1;
}


