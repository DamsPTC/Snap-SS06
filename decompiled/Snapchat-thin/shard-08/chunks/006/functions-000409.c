/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1063559ec; end: 106355bb7; -[SCOperaPlaylistViewCoordinator _preserveActivelyViewedGroup:ifOmittedFromGroups:] */

void FUN_1063559ec(ulong param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong uVar5;
  ulong unaff_x24;
  long lVar6;
  ulong uVar7;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_3;
  uVar7 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = unaff_x22;
  if (param_3 != 0) {
    uVar1 = param_4;
    lVar6 = param_3;
    func_0x00010bfece20();
    uVar5 = 0x7fffffffffffffff;
    unaff_x23 = uVar5;
    if (uVar1 == 0x7fffffffffffffff) {
      param_1 = *(ulong *)(param_1 + 0x18);
      func_0x00010bfcf800();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010bfece20();
      if (uVar2 == 0x7fffffffffffffff) {
        unaff_x24 = 0;
        uVar2 = unaff_x22;
      }
      else {
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        plStack_120 = (long *)0x0;
        _objc_retain(param_4);
        unaff_x23 = param_4;
        func_0x00010bf52a60();
        if (unaff_x23 == 0) {
          unaff_x23 = uVar5;
          unaff_x24 = 0;
        }
        else {
          lVar6 = *plStack_120;
          unaff_x24 = 0;
          do {
            uVar7 = 0;
            uVar1 = unaff_x23 + unaff_x24;
            do {
              if (*plStack_120 != lVar6) {
                _objc_enumerationMutation(param_4);
              }
              uVar5 = param_1;
              func_0x00010bfece20();
              if (uVar5 == 0x7fffffffffffffff || uVar2 <= uVar5) goto LAB_106355b40;
              unaff_x24 = unaff_x24 + 1;
              uVar7 = uVar7 + 1;
            } while (unaff_x23 != uVar7);
            unaff_x23 = param_4;
            func_0x00010bf52a60();
            unaff_x24 = uVar1;
          } while (unaff_x23 != 0);
        }
LAB_106355b40:
        _objc_release(param_4);
      }
      uVar1 = param_4;
      func_0x00010bf529e0();
      uVar7 = unaff_x24;
      if (uVar1 <= unaff_x24) {
        uVar7 = uVar1;
      }
      lVar6 = param_3;
      func_0x00010c066b00(param_4);
      _objc_release(param_1);
    }
  }
  _objc_release(param_4);
  lVar3 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_106355bb8;
  uStack_170 = unaff_x24;
  uStack_168 = unaff_x23;
  uStack_160 = uVar2;
  uStack_158 = param_1;
  uStack_150 = param_4;
  lStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(lVar6);
  _objc_retain(uVar7);
  func_0x00010bdde400(lVar3);
  _objc_initWeak(auStack_178,lVar3);
  lVar3 = lVar3 + 0x140;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c29d5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_180,auStack_178);
  _objc_retain(lVar6);
  _objc_retain(uVar7);
  func_0x00010c134d60(lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_destroyWeak(auStack_180);
  _objc_destroyWeak(auStack_178);
  _objc_release(uVar7);
  _objc_release(lVar6);
  return;
}



/* Entry: 106355bb8; end: 106355cfb; -[SCOperaPlaylistViewCoordinator _updatePlaylistWithGroups:initialPlaylistItemGroup:] */

void FUN_106355bb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bdde400(param_1);
  _objc_initWeak(auStack_48,param_1);
  param_1 = param_1 + 0x140;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c29d5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c134d60(lVar1);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106355cfc; end: 10635603b;  */

void FUN_106355cfc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_106355ff8;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar10 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar10);
  lVar3 = lVar10;
  func_0x00010bf52a60(lVar10,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar3 != 0) {
    lVar11 = 0;
    lVar14 = *plStack_120;
    do {
      lVar9 = 0;
      lVar13 = lVar11;
      do {
        if (*plStack_120 != lVar14) {
          _objc_enumerationMutation(lVar10);
        }
        uVar12 = *(undefined8 *)(lStack_128 + lVar9 * 8);
        func_0x00010be549c0(lVar1,param_2,uVar12,puVar2);
        func_0x00010befa120(puVar2,param_2,uVar12);
        lVar11 = *(long *)(lVar1 + 200);
        func_0x00010be36bc0(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0(lVar11,param_2,uVar12);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar13);
        _objc_release(uVar12);
        if (lVar11 != 0) {
          func_0x00010be549c0(lVar1,param_2,lVar11,puVar2);
          func_0x00010befa120(puVar2,param_2,lVar11);
        }
        lVar9 = lVar9 + 1;
        lVar13 = lVar11;
      } while (lVar3 != lVar9);
      lVar3 = lVar10;
      func_0x00010bf52a60(lVar10,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar3 != 0);
    _objc_release(lVar11);
  }
  _objc_release(lVar10);
  uVar4 = *(ulong *)(lVar1 + 0x18);
  func_0x00010bf5ee40();
  _objc_retainAutoreleasedReturnValue();
  if ((*(char *)(lVar1 + 0x13d) == '\x01') && (*(long *)(param_1 + 0x28) == 0)) {
    func_0x00010be7f9c0(lVar1,param_2,uVar4,puVar2);
  }
  func_0x00010c28cb60(*(undefined8 *)(lVar1 + 0x18),param_2,puVar2);
  if (*(long *)(param_1 + 0x28) == 0) {
    uVar5 = uVar4;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(lVar1 + 0x18);
    func_0x00010bf5ee40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar6;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c0720c0(uVar5,param_2,uVar12);
    _objc_release(uVar12);
    _objc_release(uVar6);
    _objc_release(uVar5);
    if ((uVar7 & 1) == 0) {
      uVar5 = uVar4;
      func_0x00010bf5f0a0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13aa00(uVar4,param_2,0);
      func_0x00010bedc7a0(lVar1,param_2,uVar5,uVar4);
      goto LAB_106355fa0;
    }
    func_0x00010bee3b00(lVar1);
  }
  else {
    func_0x00010c187400(*(undefined8 *)(lVar1 + 0x18));
    func_0x00010bee3b00(lVar1);
    func_0x00010c187400(*(undefined8 *)(lVar1 + 0x18),param_2,uVar4);
    uVar5 = lVar1 + 0x140;
    _objc_loadWeakRetained(uVar5);
    func_0x00010c188040();
LAB_106355fa0:
    _objc_release(uVar5);
  }
  lVar3 = lVar1 + 0x90;
  _objc_loadWeakRetained(lVar3);
  puVar8 = PTR_PTR_1126c9a10;
  func_0x00010bfcf920(PTR_PTR_1126c9a10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb780(lVar3,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(lVar3);
  _objc_release(uVar4);
  _objc_release(puVar2);
LAB_106355ff8:
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 10635603c; end: 10635603f; -[SCOperaPlaylistViewCoordinator _checkThatDynamicallyInsertedGroupsNotMatchingMainPlaylistGroups:] */

void FUN_10635603c(void)

{
  return;
}



/* Entry: 106356040; end: 106356043; -[SCOperaPlaylistViewCoordinator _checkThatDynamicallyInsertedItemsNotMatchingMainPlaylistItems:] */

void FUN_106356040(void)

{
  return;
}



/* Entry: 106356044; end: 106356047; -[SCOperaPlaylistViewCoordinator _logIfGroupAlreadyExists:inGroups:] */

void FUN_106356044(void)

{
  return;
}



/* Entry: 106356048; end: 106356107; -[SCOperaPlaylistViewCoordinator updatePlaylistWithBatchedUpdates:] */

void FUN_106356048(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c9e50;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bfcf800(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01dc40(puVar1);
    _objc_release(uVar2);
    (**(code **)(param_3 + 0x10))(param_3,puVar1);
    _objc_release(param_3);
    puVar3 = puVar1;
    func_0x00010bfcf800(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedd740(param_1);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 106356108; end: 106356343; -[SCOperaPlaylistViewCoordinator playlistItemDidUpdateForID:] */

void FUN_106356108(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x48);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    lVar7 = *(long *)(param_1 + 0x18);
    uVar6 = uVar1;
    func_0x00010bfce400(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcea60(lVar7,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar2);
    _objc_release(uVar6);
    if (lVar7 != 0) {
      uVar6 = uVar1;
      func_0x00010c0f3aa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar6 == 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x60);
        func_0x00010bf4b900(uVar4,param_2,param_3);
        if ((int)uVar4 == 0) goto LAB_106356318;
        uVar6 = uVar1;
        func_0x00010bfce400();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar6;
        func_0x00010c084fc0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar2;
        func_0x00010bf4b900();
        _objc_release(uVar2);
        _objc_release(uVar6);
        if ((uVar5 & 1) == 0) goto LAB_106356318;
      }
      else {
        uVar6 = uVar1;
        func_0x00010bfce400();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar6;
        func_0x00010c084fc0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar1;
        func_0x00010c0f3aa0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf4b900(uVar2,param_2,uVar5);
        _objc_release(uVar5);
        _objc_release(uVar2);
        _objc_release(uVar6);
        if ((int)uVar3 == 0) goto LAB_106356318;
      }
      func_0x00010be93400(param_1,param_2,param_3);
      uVar6 = *(ulong *)(param_1 + 0x68);
      func_0x00010bf4b900(uVar6,param_2,param_3);
      if ((uVar6 & 1) == 0) {
        func_0x00010be78aa0(param_1,param_2,uVar1,0,&PTR____CFConstantStringClassReference_110e4bc78
                            ,1,0,0);
      }
      else {
        func_0x00010be88fe0(param_1,param_2,param_3,&PTR____CFConstantStringClassReference_110e4bc78
                           );
        puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_70 = 0xc2000000;
        pcStack_68 = FUN_106356344;
        puStack_60 = &UNK_11091cf98;
        lStack_58 = param_1;
        func_0x00010bee9b40(param_1,param_2,uVar1,&puStack_78);
      }
    }
  }
LAB_106356318:
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106356344; end: 1063563d7;  */

void FUN_106356344(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  puVar2 = *(undefined **)(*(long *)(param_1 + 0x20) + 0xb0);
  if (puVar2 == (undefined *)0x0) {
    _objc_retain(param_2);
    func_0x00010c1607a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_2);
    func_0x00010c0d3c80(puVar2);
    puVar1 = puVar2;
  }
  func_0x00010bdc8fe0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_2);
  func_0x00010bee3c60(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1063563d8; end: 106356413; -[SCOperaPlaylistViewCoordinator invalidateGeneratedViewModels] */

void FUN_1063563d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf002e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(uVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106356414; end: 106356917; -[SCOperaPlaylistViewCoordinator _regenerateViewModelForPlaylistItemWithID:reason:] */

void FUN_106356414(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x50);
  func_0x00010c0e00e0(lVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x00010c0dfd40(lVar2,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf0cb60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    uStack_88 = 0x10635656c;
    puStack_80 = &UNK_11091cfc8;
    _objc_retain(param_3);
    uStack_78 = param_3;
    lStack_70 = lVar3;
    lStack_68 = param_1;
    lStack_60 = lVar4;
    _objc_retain(uVar1);
    uStack_58 = uVar1;
    _objc_retain(lVar4);
    _objc_retain(lVar3);
    func_0x00010c0f1a20(uVar5,param_2,uVar1,&puStack_98);
    _objc_release(uStack_58);
    _objc_release(lStack_60);
    _objc_release(lStack_70);
    _objc_release(uStack_78);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106356918; end: 106356a43;  */

void FUN_106356918(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  func_0x00010c16b040(*(undefined8 *)(param_1 + 0x28));
  if (lVar3 != 0) {
    func_0x00010c12d3e0(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40));
  }
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x50));
  _objc_release(puVar4);
  iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x30) + 0xb0);
  func_0x00010bf4b900();
  if (iVar1 != 0) {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0xb0);
    func_0x00010c0d3c80();
    func_0x00010c12d360();
    func_0x00010bee3c60(*(undefined8 *)(param_1 + 0x30));
    _objc_release(uVar5);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = PTR_PTR_1126c9ba0;
  func_0x00010c29db20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(lVar3 + 0x28) + 0x40);
  puVar6 = puVar4;
  func_0x00010c0f12a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar5);
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(*(long *)(lVar3 + 0x28) + 0x50));
  _objc_release(puVar6);
  func_0x00010c1d8fe0(puVar4);
  func_0x00010c16b040(*(undefined8 *)(lVar3 + 0x40));
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c12dbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 106356a44; end: 106356b53;  */

void FUN_106356a44(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c9ba0;
  func_0x00010c29db20(PTR_PTR_1126c9ba0,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x40);
  puVar2 = puVar1;
  func_0x00010c0f12a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar4);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x50));
  _objc_release(puVar2);
  func_0x00010c1d8fe0(puVar1);
  func_0x00010c16b040(*(undefined8 *)(param_1 + 0x40));
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c12dbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 106356b54; end: 106356b5b; -[SCOperaPlaylistViewCoordinator removePlaylistItemGroupForID:] */

void FUN_106356b54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12dbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_removePlaylistItemGroupForID_com_112629118,param_3,0);
  return;
}



/* Entry: 106356b5c; end: 106356b63; -[SCOperaPlaylistViewCoordinator removePlaylistItemForID:] */

void FUN_106356b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_removePlaylistItemForID_completi_112629108,param_3,0);
  return;
}



/* Entry: 106356b64; end: 1063570f3; -[SCOperaPlaylistViewCoordinator removePlaylistItemGroupForID:completion:] */

void FUN_106356b64(long param_1,undefined8 param_2,undefined **param_3,undefined **param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  undefined1 auStack_218 [8];
  undefined1 uStack_210;
  undefined1 uStack_20f;
  undefined1 auStack_208 [8];
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
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010bfcea60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = param_3;
    if (param_4 != (undefined **)0x0) {
      puVar11 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010c0eac20(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)param_4[2])(param_4,0,puVar11);
      _objc_release(puVar11);
      ppuVar12 = param_4;
    }
    _objc_release(puVar10);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf5ee40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c071ae0();
    _objc_release(uVar3);
    lVar5 = *(long *)(param_1 + 0x18);
    func_0x00010bfce580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x00010c12ca40(*(undefined8 *)(param_1 + 0x18));
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x38));
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_1a8 = 0;
    plStack_1b0 = (long *)0x0;
    lStack_1b8 = 0;
    uStack_1c0 = 0;
    lVar6 = lVar2;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    lStack_240 = lVar6;
    func_0x00010bf52a60();
    if (lStack_240 != 0) {
      lVar14 = *plStack_1b0;
      do {
        lVar18 = 0;
        do {
          if (*plStack_1b0 != lVar14) {
            _objc_enumerationMutation(lVar6);
          }
          lVar21 = *(long *)(lStack_1b8 + lVar18 * 8);
          iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
          func_0x00010bf24880();
          if (iVar1 != 0) {
            func_0x00010be8c7e0(param_1);
          }
          if (*(char *)(param_1 + 0x118) == '\x01') {
            lVar15 = *(long *)(param_1 + 0x50);
            lVar7 = lVar21;
            func_0x00010be36bc0(lVar21);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar7);
            uStack_1d8 = 0;
            uStack_1e0 = 0;
            uStack_1c8 = 0;
            uStack_1d0 = 0;
            lStack_1f8 = 0;
            uStack_200 = 0;
            uStack_1e8 = 0;
            plStack_1f0 = (long *)0x0;
            _objc_retain(lVar15);
            lVar7 = lVar15;
            func_0x00010bf52a60();
            if (lVar7 != 0) {
              lVar19 = *plStack_1f0;
              do {
                lVar20 = 0;
                do {
                  if (*plStack_1f0 != lVar19) {
                    _objc_enumerationMutation(lVar15);
                  }
                  lVar16 = *(long *)(lStack_1f8 + lVar20 * 8);
                  lVar8 = lVar16;
                  func_0x00010c0f0be0();
                  _objc_retainAutoreleasedReturnValue();
                  lVar9 = lVar8;
                  func_0x00010be36bc0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  _objc_release(lVar8);
                  if (lVar9 != 0) {
                    uVar3 = *(undefined8 *)(param_1 + 0x40);
                    func_0x00010c0f0be0(lVar16);
                    _objc_retainAutoreleasedReturnValue();
                    lVar8 = lVar16;
                    func_0x00010be36bc0();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c12d3e0(uVar3);
                    _objc_release(lVar8);
                    _objc_release(lVar16);
                  }
                  lVar20 = lVar20 + 1;
                } while (lVar7 != lVar20);
                lVar7 = lVar15;
                func_0x00010bf52a60();
              } while (lVar7 != 0);
            }
            _objc_release(lVar15);
          }
          else {
            uVar3 = *(undefined8 *)(param_1 + 0x40);
            lVar15 = lVar21;
            func_0x00010be36bc0(lVar21);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12d3e0(uVar3);
          }
          _objc_release(lVar15);
          uVar3 = *(undefined8 *)(param_1 + 0x48);
          lVar15 = lVar21;
          func_0x00010be36bc0(lVar21);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12d3e0(uVar3);
          _objc_release(lVar15);
          uVar3 = *(undefined8 *)(param_1 + 0x50);
          lVar15 = lVar21;
          func_0x00010be36bc0(lVar21);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12d3e0(uVar3);
          _objc_release(lVar15);
          func_0x00010be36bc0(lVar21);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be93400(param_1);
          _objc_release(lVar21);
          lVar18 = lVar18 + 1;
        } while (lVar18 != lStack_240);
        lStack_240 = lVar6;
        func_0x00010bf52a60();
      } while (lStack_240 != 0);
    }
    _objc_release(lVar6);
    uVar17 = *(undefined8 *)(param_1 + 200);
    uVar3 = uVar17;
    func_0x00010bf00320(uVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d4a0(uVar17);
    _objc_release(uVar3);
    _objc_initWeak(auStack_208,param_1);
    param_1 = param_1 + 0x140;
    _objc_loadWeakRetained();
    lVar6 = param_1;
    func_0x00010c29d5c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_238 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_230 = 0xc2000000;
    pcStack_228 = FUN_1063570f4;
    puStack_220 = &UNK_11086a898;
    ppuVar12 = &puStack_238;
    _objc_copyWeak(auStack_218,auStack_208);
    uStack_210 = (undefined1)uVar4;
    uStack_20f = lVar5 != 0;
    func_0x00010c134d60(lVar6);
    _objc_release(lVar6);
    _objc_release(param_1);
    if (param_4 != (undefined **)0x0) {
      (*(code *)param_4[2])(param_4,1,0);
    }
    _objc_destroyWeak(auStack_218);
    _objc_destroyWeak(auStack_208);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar12 + 4);
  _objc_destroyWeak(auStack_208);
  __Unwind_Resume();
  ppuVar12 = param_3 + 4;
  _objc_loadWeakRetained();
  if (ppuVar12 != (undefined **)0x0) {
    func_0x00010bee3b00(ppuVar12);
    ppuVar13 = ppuVar12 + 0x12;
    _objc_loadWeakRetained(ppuVar13);
    puVar10 = PTR_PTR_1126c9a10;
    func_0x00010bfcf920(PTR_PTR_1126c9a10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb780(ppuVar13);
    _objc_release(puVar10);
    _objc_release(ppuVar13);
    if (*(char *)(param_3 + 5) == '\x01') {
      if (*(char *)((long)param_3 + 0x29) == '\x01') {
        ppuVar13 = ppuVar12 + 0x12;
        _objc_loadWeakRetained(ppuVar13);
        puVar10 = PTR_PTR_1126b2638;
        func_0x00010c152620(PTR_PTR_1126b2638);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0eb780(ppuVar13);
        _objc_release(puVar10);
      }
      else {
        ppuVar13 = ppuVar12 + 0x28;
        _objc_loadWeakRetained(ppuVar13);
        func_0x00010bf84cc0();
      }
      _objc_release(ppuVar13);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar12);
  return;
}



/* Entry: 1063570f4; end: 1063571e3;  */

void FUN_1063570f4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bee3b00(lVar1);
    lVar2 = lVar1 + 0x90;
    _objc_loadWeakRetained(lVar2);
    puVar3 = PTR_PTR_1126c9a10;
    func_0x00010bfcf920(PTR_PTR_1126c9a10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb780(lVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(lVar2);
    if (*(char *)(param_1 + 0x28) == '\x01') {
      if (*(char *)(param_1 + 0x29) == '\x01') {
        lVar2 = lVar1 + 0x90;
        _objc_loadWeakRetained(lVar2);
        puVar3 = PTR_PTR_1126b2638;
        func_0x00010c152620(PTR_PTR_1126b2638);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0eb780(lVar2,param_2,puVar3);
        _objc_release(puVar3);
      }
      else {
        lVar2 = lVar1 + 0x140;
        _objc_loadWeakRetained(lVar2);
        func_0x00010bf84cc0();
      }
      _objc_release(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1063571e4; end: 1063573af; -[SCOperaPlaylistViewCoordinator removePlaylistItemForID:completion:] */

void FUN_1063571e4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    if (param_4 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010c0eac20(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_4 + 0x10))(param_4,0,puVar4);
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    param_1 = param_1 + 0x140;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010c29d5c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(lVar1);
    _objc_retain(param_4);
    func_0x00010c134d60(lVar2);
    _objc_release(lVar2);
    _objc_release(param_1);
    _objc_release(param_4);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1063573b0; end: 1063573eb;  */

void FUN_1063573b0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be8ce60(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1063573ec; end: 106357743; -[SCOperaPlaylistViewCoordinator _removePlaylistItem:completion:] */

void FUN_1063573ec(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf5ee40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c0e00e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  lVar7 = param_1;
  func_0x00010bee9aa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010be752e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010be75300();
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0xc0);
    lVar10 = lVar8;
    func_0x00010be36bc0(lVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar6);
    _objc_release(lVar10);
  }
  if (lVar9 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0xb8);
    lVar10 = lVar9;
    func_0x00010be36bc0(lVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar6);
    _objc_release(lVar10);
  }
  func_0x00010c12cc20(*(undefined8 *)(param_1 + 0x18));
  if ((int)uVar5 == 0) {
    func_0x00010bee3b00(param_1);
  }
  else {
    if (*(char *)(param_1 + 0x22) == '\x01') {
      param_1 = param_1 + 0x140;
      _objc_loadWeakRetained(param_1);
      func_0x00010bf84cc0();
      _objc_release(param_1);
      if (param_4 != 0) {
        puVar11 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010c0eac20(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(param_4 + 0x10))(param_4,0,puVar11);
        _objc_release(puVar11);
      }
      goto LAB_1063576f0;
    }
    uVar6 = uVar2;
    func_0x00010c0d9820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cd2c0(lVar7);
    _objc_release(uVar6);
    uVar6 = uVar2;
    func_0x00010c0d9820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e24e0();
    _objc_release(uVar6);
    uVar6 = uVar2;
    func_0x00010c1126e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cd3a0();
    _objc_release(uVar6);
    uVar6 = uVar2;
    func_0x00010c0d9ae0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e25c0();
    _objc_release(uVar6);
    func_0x00010be53c80(param_1);
  }
  func_0x00010be8cca0(param_1);
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,1,0);
  }
LAB_1063576f0:
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106357744; end: 106357863; -[SCOperaPlaylistViewCoordinator _removePageForViewModel:item:reason:] */

void FUN_106357744(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar3 = param_4;
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3bc00(param_3,param_2,param_5);
  _objc_release(param_3);
  if (lVar2 != 0) {
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x40),param_2,lVar2);
  }
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x48),param_2,uVar3);
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x50),param_2,uVar3);
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x60),param_2,uVar3);
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x68),param_2,uVar3);
  func_0x00010be93400(param_1,param_2,uVar3);
  func_0x00010be8c7e0(param_1,param_2,param_4,lVar2,param_5);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106357864; end: 106357a2b; -[SCOperaPlaylistViewCoordinator insertPlaylistItem:beforePlaylistItem:completion:] */

void FUN_106357864(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c9e08;
  func_0x00010c0d95e0(PTR_PTR_1126c9e08);
  lVar5 = *(long *)(param_1 + 0xc0);
  puVar2 = param_4;
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (lVar5 == 0) {
    puVar2 = param_4;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf4b900();
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (((ulong)puVar4 & 1) != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0xc0);
      puVar2 = param_4;
      func_0x00010be36bc0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar6);
      _objc_release(puVar2);
      puVar2 = param_4;
      func_0x00010bfce400(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0c2a0(param_1);
      _objc_release(puVar3);
      goto LAB_1063579f8;
    }
  }
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010c0eac20(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retainAutoreleasedReturnValue();
  if (param_5 != 0) {
    (**(code **)(param_5 + 0x10))(param_5,0,puVar2);
  }
LAB_1063579f8:
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106357a2c; end: 106357cab; -[SCOperaPlaylistViewCoordinator insertPlaylistItems:afterPlaylistItem:completion:] */

void FUN_106357a2c(undefined8 param_1,undefined8 param_2,undefined *param_3,ulong param_4,
                  long param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4b900();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010c0eac20(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5,0,puVar5);
    }
  }
  else {
    puVar5 = param_3;
    func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_11091d018);
    puStack_98 = &uStack_a0;
    uStack_a0 = 0;
    uStack_90 = 0x3032000000;
    pcStack_88 = FUN_106350174;
    uStack_80 = 0x106350184;
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puStack_c8 = &uStack_d0;
    uStack_d0 = 0;
    uStack_c0 = 0x3032000000;
    pcStack_b8 = FUN_106350174;
    uStack_b0 = 0x106350184;
    puStack_78 = puVar4;
    _objc_retain(param_4);
    uStack_a8 = param_4;
    func_0x00010bf97e80(puVar5);
    func_0x00010bf97e80(puStack_98[5]);
    uVar1 = param_4;
    func_0x00010bfce400(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c2a0(param_1);
    _objc_release(uVar2);
    _objc_release(uVar1);
    __Block_object_dispose(&uStack_d0,8);
    _objc_release(uStack_a8);
    __Block_object_dispose(&uStack_a0,8);
    _objc_release(puStack_78);
  }
  _objc_release(puVar5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106357cac; end: 106357ccb;  */

void FUN_106357cac(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c0d95e0(PTR_PTR_1126c9e08,param_2,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106357ccc; end: 106357e47;  */

void FUN_106357ccc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x48);
  uVar1 = param_2;
  func_0x00010be36bc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar1);
  if (lVar2 == 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0xb8);
    uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    func_0x00010be36bc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar1);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb8);
      uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
      func_0x00010be36bc0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar3);
      _objc_release(uVar4);
      _objc_release(uVar1);
    }
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb8);
    uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    func_0x00010be36bc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4);
    _objc_release(uVar1);
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = param_2;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106357e48; end: 106357ebf;  */

void FUN_106357e48(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb8);
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  func_0x00010be36bc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar3);
  _objc_release(uVar1);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106357ec0; end: 106357f83; -[SCOperaPlaylistViewCoordinator insertPlaylistItemGroupModel:afterPlaylistItemGroup:error:] */

long FUN_106357ec0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c9e10;
  _objc_retain(param_4);
  func_0x00010c0d95e0(puVar1,param_2,param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = param_4;
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bfcea60(uVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be3c700(param_1,param_2,puVar1,uVar3,param_5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 106357f84; end: 106358047; -[SCOperaPlaylistViewCoordinator insertPlaylistGroupDataModel:afterPlaylistItemGroup:error:] */

long FUN_106357f84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be24840(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = param_4;
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bfcea60(uVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be3c700(param_1,param_2,lVar1,uVar3,param_5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
  return param_1;
}



/* Entry: 106358048; end: 106358303; -[SCOperaPlaylistViewCoordinator _insertPlaylistItemGroup:afterPlaylistItemGroup:error:] */

undefined8
FUN_106358048(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar8 = *(long *)(param_1 + 200);
  uVar7 = param_4;
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar7);
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar8 == 0) {
    uVar9 = *(ulong *)(param_1 + 0x130);
    uVar7 = param_4;
    func_0x00010be36bc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    if ((uVar9 & 1) == 0) {
      _objc_release(uVar7);
    }
    else {
      uVar9 = param_1 + 0x140;
      _objc_loadWeakRetained();
      uVar3 = uVar9;
      func_0x00010c0f1b80();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf5f780();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c06b7e0();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar9);
      _objc_release(uVar7);
      puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
      if ((uVar5 & 1) == 0) goto joined_r0x00010635817c;
    }
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    func_0x00010c066be0();
    if (iVar1 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 200);
      uVar7 = param_4;
      func_0x00010be36bc0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar6);
      _objc_release(uVar7);
      _objc_initWeak(auStack_68,param_1);
      param_1 = param_1 + 0x140;
      _objc_loadWeakRetained(param_1);
      lVar8 = param_1;
      func_0x00010c29d5c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_70,auStack_68);
      _objc_retain(param_4);
      _objc_retain(param_3);
      func_0x00010c134d60(lVar8);
      _objc_release(lVar8);
      _objc_release(param_1);
      _objc_release(param_3);
      _objc_release(param_4);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
      uVar7 = 1;
      goto LAB_1063582ac;
    }
  }
  else {
joined_r0x00010635817c:
    PTR__OBJC_CLASS___NSError_1126ae858 = puVar2;
    if (param_5 != (undefined8 *)0x0) {
      func_0x00010c0eac20();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      uVar7 = 0;
      *param_5 = puVar2;
      goto LAB_1063582ac;
    }
  }
  uVar7 = 0;
LAB_1063582ac:
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 106358304; end: 1063583a7;  */

void FUN_106358304(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bee3b00(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfb6280(uVar2);
    func_0x00010c19eda0(*(undefined8 *)(param_1 + 0x20),param_2,1);
    func_0x00010c19eda0(*(undefined8 *)(param_1 + 0x28),param_2,uVar2);
    lVar3 = lVar1 + 0x90;
    _objc_loadWeakRetained(lVar3);
    puVar4 = PTR_PTR_1126c9a10;
    func_0x00010bfcf920(PTR_PTR_1126c9a10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb780(lVar3,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1063583a8; end: 106358813; -[SCOperaPlaylistViewCoordinator insertSubPlaylistItems:afterSubPlaylistItem:completion:] */

bool FUN_1063583a8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_4 == 0) || (lVar2 = param_3, func_0x00010bf529e0(), lVar2 == 0)) {
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010c0eac20(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5,0,puVar7);
    }
    bVar1 = false;
  }
  else {
    puVar9 = *(undefined **)(param_1 + 0xd0);
    lVar2 = param_4;
    func_0x00010be36bc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR____NSArray0__struct_11034ab48;
    if (puVar9 != (undefined *)0x0) {
      puVar7 = puVar9;
    }
    func_0x00010c0d3c80();
    _objc_release(puVar9);
    _objc_release(lVar2);
    func_0x00010bfecde0();
    lVar2 = param_3;
    func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_11091d098);
    _objc_retain(param_3);
    puVar9 = puVar7;
    func_0x00010bf09f60(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar9;
    func_0x000100504554();
    _objc_release(puVar9);
    lVar4 = param_3;
    func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_11091d218);
    _objc_release(param_3);
    puVar9 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069840(puVar9);
    puVar6 = puVar9;
    func_0x00010bf529e0();
    bVar1 = puVar6 == (undefined *)0x0;
    _objc_release(puVar5);
    _objc_release(puVar9);
    _objc_release(lVar4);
    _objc_release(puVar3);
    puVar9 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    if (puVar6 == (undefined *)0x0) {
      func_0x00010bf529e0(lVar2);
      func_0x00010bfed320(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066b20(puVar7);
      puVar3 = puVar7;
      func_0x00010bf51e00(puVar7);
      uVar11 = *(undefined8 *)(param_1 + 0xd0);
      lVar4 = param_4;
      func_0x00010be36bc0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar11);
      _objc_release(lVar4);
      _objc_release(puVar3);
      lVar10 = *(long *)(param_1 + 0x50);
      lVar4 = param_4;
      func_0x00010c0f3aa0(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar4;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      _objc_release(lVar4);
      lVar4 = lVar10;
      func_0x00010bf529e0();
      if (lVar4 != 0) {
        lVar4 = param_1;
        func_0x00010bee9b80();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = *(undefined8 *)(param_1 + 0x50);
        lVar8 = param_4;
        func_0x00010be36bc0(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0(uVar12);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar12;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar12);
        _objc_release(lVar8);
        lVar8 = lVar10;
        func_0x00010bfb1920(lVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0671c0();
        _objc_release(lVar8);
        _objc_release(uVar11);
        _objc_release(lVar4);
      }
      lVar4 = param_4;
      func_0x00010bfce400(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar4;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0c2a0(param_1);
      _objc_release(lVar8);
      _objc_release(lVar4);
      _objc_release(lVar10);
    }
    else {
      puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010c0eac20(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      if (param_5 != 0) {
        (**(code **)(param_5 + 0x10))(param_5,0,puVar9);
      }
    }
    _objc_release(puVar9);
    _objc_release(lVar2);
  }
  _objc_release(puVar7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106358814; end: 106358833;  */

void FUN_106358814(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c0d95e0(PTR_PTR_1126c9e08,param_2,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106358834; end: 1063589a3; -[SCOperaPlaylistViewCoordinator _viewModelWithNextViewModel:] */

/* WARNING: Possible PIC construction at 0x0001063588d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001063588dc) */
/* WARNING: Removing unreachable block (ram,0x000106358920) */
/* WARNING: Removing unreachable block (ram,0x000106358934) */
/* WARNING: Removing unreachable block (ram,0x0001063588c4) */

void FUN_106358834(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar4 = *(long *)(param_1 + 0x50);
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010bf52a60();
  if (lVar1 == 0) {
    _objc_release(lVar4);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
      return;
    }
    ___stack_chk_fail();
    uVar2 = *(undefined8 *)(param_3 + 0x48);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x50);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 1063589a4; end: 1063589ab; -[SCOperaPlaylistViewCoordinator playlistItemForItemID:] */

void FUN_1063589a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 1063589ac; end: 1063589b3; -[SCOperaPlaylistViewCoordinator playlistItemForPageID:] */

void FUN_1063589ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 1063589b4; end: 1063589bb; -[SCOperaPlaylistViewCoordinator dataModelForPlaylistItem:] */

void FUN_1063589b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf63e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_dataModelFor__1125b6928);
  return;
}



/* Entry: 1063589bc; end: 1063589c3; -[SCOperaPlaylistViewCoordinator dataModelForPlaylistItemGroup:] */

void FUN_1063589bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf63e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_dataModelForGroup__1125b6930);
  return;
}



/* Entry: 1063589c4; end: 1063589eb; -[SCOperaPlaylistViewCoordinator initialPlaylistItemToDisplay] */

void FUN_1063589c4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1063589ec; end: 106358a33; -[SCOperaPlaylistViewCoordinator initialPlaylistItemToDisplayInGroup:] */

void FUN_1063589ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c084fc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106358a34; end: 106358a3b; -[SCOperaPlaylistViewCoordinator playlistItemGroupForGroupId:] */

void FUN_106358a34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfcea70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_groupForId__1125d1440);
  return;
}



/* Entry: 106358a3c; end: 106358a63; -[SCOperaPlaylistViewCoordinator playlist] */

void FUN_106358a3c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106358a64; end: 106358e13; -[SCOperaPlaylistViewCoordinator setPlaylistCurrentItemId:withinGroupOnly:] */

/* WARNING: Possible PIC construction at 0x000106358ac0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106358ac4) */
/* WARNING: Removing unreachable block (ram,0x000106358c08) */

long FUN_106358a64(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
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
  lVar1 = *(long *)(param_1 + 0x18);
  if (param_4 != 0) {
    func_0x00010bf5ee40();
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x00010c084fc0;
  }
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bfb27a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar7;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(lVar2);
  lVar1 = lVar2;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(lVar2);
        }
        lVar5 = *(long *)(lStack_128 + lVar7 * 8);
        lVar3 = lVar5;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c0720c0();
        _objc_release(lVar3);
        if ((int)lVar4 != 0) {
          _objc_retain(lVar5);
          goto LAB_106358bfc;
        }
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar2;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  lVar5 = 0;
LAB_106358bfc:
  _objc_release(lVar2);
  lVar1 = lVar5;
  func_0x00010bfceb80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    lVar6 = param_1;
    func_0x00010c0ea180();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf91ec0();
    _objc_release(lVar6);
    if ((int)lVar7 != 0) {
      lVar5 = *(long *)(param_1 + 0x48);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar1;
      func_0x00010c25e560();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar6 != 0) {
        if (lVar5 != 0) goto LAB_106358c34;
        goto LAB_106358d90;
      }
      lVar6 = 0;
      goto LAB_106358d20;
    }
LAB_106358d90:
    lVar6 = 0;
  }
  else {
LAB_106358c34:
    puStack_158 = &uStack_160;
    uStack_160 = 0;
    uStack_150 = 0x3032000000;
    pcStack_148 = FUN_106350174;
    uStack_140 = 0x106350184;
    uStack_138 = 0;
    func_0x00010bee9b40(param_1);
    lVar6 = puStack_158[5];
    if (lVar6 == 0) {
LAB_106358d08:
      lVar6 = 0;
    }
    else {
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar6 == 0) goto LAB_106358d08;
      func_0x00010c1874c0(lVar1);
      lVar6 = param_1 + 0x140;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c188040();
      _objc_release(lVar6);
      func_0x00010be54820(param_1);
      lVar6 = 1;
    }
    __Block_object_dispose(&uStack_160,8);
    _objc_release(uStack_138);
LAB_106358d20:
    _objc_release(lVar5);
  }
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return lVar6;
  }
  ___stack_chk_fail();
  lVar1 = 8;
  __Block_object_dispose(&uStack_160,8);
  __Unwind_Resume(param_3);
code_r0x00010c084fc0:
                    /* WARNING: Could not recover jumptable at 0x00010c084fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return lVar1;
}



/* Entry: 106358e14; end: 106358e1b;  */

void FUN_106358e14(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c084fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_items_1125fee00);
  return;
}



/* Entry: 106358e1c; end: 106358e7f;  */

bool FUN_106358e1c(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
  _objc_retain(param_2);
  func_0x00010c0ddbe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar1);
  return param_2 != puVar1;
}



/* Entry: 106358e80; end: 106358eb7;  */

void FUN_106358e80(long param_1,undefined8 param_2)

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



/* Entry: 106358eb8; end: 106358ebf; -[SCOperaPlaylistViewCoordinator setPlaylistCurrentItemId:] */

void FUN_106358eb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ddd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setPlaylistCurrentItemId_withinG_112655180,param_3,1);
  return;
}



/* Entry: 106358ec0; end: 106358f4b; -[SCOperaPlaylistViewCoordinator _removeMediaForItem:pageId:reason:] */

void FUN_106358ec0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c12d120(uVar1,param_2,param_3);
  func_0x00010be083a0(param_1,param_2,param_3,param_4,1,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106358f4c; end: 1063590bf; -[SCOperaPlaylistViewCoordinator _recordMediaPrepFailureForItem:preparationState:shouldUpdateViewModelIfFailed:] */

bool FUN_106358f4c(long param_1,undefined8 param_2,long param_3,long param_4,int param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  
  _objc_retain(param_3);
  bVar6 = false;
  if ((param_4 - 1U < 2) && ((*(byte *)(param_1 + 0xe9) & 1) != 0)) {
    lVar4 = param_3;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 == 0) {
      bVar6 = false;
    }
    else {
      lVar4 = 0x70;
      if (param_4 != 1) {
        lVar4 = 0x78;
      }
      lVar5 = *(long *)(param_1 + lVar4);
      _objc_retain(lVar5);
      lVar4 = param_3;
      func_0x00010be36bc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar5;
      func_0x00010c0e00e0(lVar5,param_2,lVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c067fc0();
      _objc_release(lVar1);
      _objc_release(lVar4);
      if (param_4 == 2) {
        lVar4 = *(long *)(param_1 + 0xf0);
        if (lVar4 < 2) {
          lVar4 = 1;
        }
      }
      else {
        lVar4 = 1;
      }
      if (param_5 != 0) {
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar2 + 1);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = param_3;
        func_0x00010be36bc0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(lVar5,param_2,puVar3,lVar1);
        _objc_release(lVar1);
        _objc_release(puVar3);
      }
      bVar6 = lVar4 <= lVar2;
      _objc_release(lVar5);
    }
  }
  _objc_release(param_3);
  return bVar6;
}



/* Entry: 1063590c0; end: 106359117; -[SCOperaPlaylistViewCoordinator _resetMediaPrepFailureCountsForItemId:] */

void FUN_1063590c0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    _objc_retain(param_3);
    func_0x00010c12d3e0(uVar1,param_2,param_3);
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x78),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 106359118; end: 106359347; -[SCOperaPlaylistViewCoordinator _prepareMediaForItem:pageId:reason:shouldUpdateViewModelIfFailed:startWaitingForDownloadCallback:completion:] */

void FUN_106359118(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined1 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  func_0x00010be083a0(param_2);
  _objc_initWeak(auStack_78,param_2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = param_4;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126c98e0;
  func_0x00010bf18180();
  uVar4 = *(undefined8 *)(param_2 + 0x120);
  func_0x00010bd55f40();
  uVar3 = param_4;
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf79ea0(param_1,uVar4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  _objc_retain(param_4);
  puStack_88 = puVar2;
  _objc_copyWeak(auStack_90,auStack_78);
  uStack_80 = param_7;
  _objc_retain(param_9);
  func_0x00010c109b20(uVar3);
  _objc_release(param_9);
  _objc_destroyWeak(auStack_90);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106359348; end: 10635945f;  */

void FUN_106359348(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  func_0x00010bf94960(PTR_PTR_1126c98e0);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106359460;
  puStack_80 = &UNK_1108a9e10;
  _objc_copyWeak(auStack_60,param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_48 = *(undefined1 *)(param_1 + 0x40);
  uStack_78 = uVar1;
  uStack_58 = param_2;
  uStack_50 = param_4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_70 = param_3;
  _objc_retain(uVar1);
  uStack_68 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_98);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_3);
  return;
}



/* Entry: 106359460; end: 1063598fb;  */

void FUN_106359460(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_2 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_1063598b4;
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  param_4 = *(long *)(param_2 + 0x20);
  uVar11 = uVar5;
  func_0x00010bf4b900();
  if ((int)uVar11 == 0) {
    lVar3 = *(long *)(param_2 + 0x20);
    func_0x00010c0f3aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar5);
    _objc_release(uVar2);
    if (lVar3 == 0) goto LAB_1063598b4;
  }
  else {
    _objc_release(uVar5);
    _objc_release(uVar2);
  }
  lVar3 = *(long *)(param_2 + 0x20);
  func_0x00010c0f3aa0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(param_2 + 0x20);
    func_0x00010c0f3aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar5;
    param_4 = lVar4;
    func_0x00010bf4b900();
    _objc_release(lVar4);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(lVar3);
    if ((int)uVar11 == 0) goto LAB_1063598b4;
  }
  lVar3 = lVar1;
  func_0x00010be877e0();
  lVar4 = *(long *)(param_2 + 0x40);
  if (lVar4 == 0) {
    uVar11 = *(undefined8 *)(lVar1 + 0x68);
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar11);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010be36bc0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be93400(lVar1);
    _objc_release(uVar5);
    lVar4 = *(long *)(param_2 + 0x40);
    if (lVar4 != 0) goto LAB_106359618;
LAB_106359624:
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010be36bc0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be88fe0(lVar1);
    _objc_release(uVar5);
    lVar4 = *(long *)(param_2 + 0x40);
  }
  else {
LAB_106359618:
    if ((((uint)lVar3 | *(byte *)(param_2 + 0x50) ^ 0xffffffff) & 1) == 0) goto LAB_106359624;
  }
  puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  if ((lVar4 == 1) || ((lVar4 == 2 && (*(char *)(lVar1 + 0xe8) == '\x01')))) {
    puVar6 = PTR_PTR_1126c9898;
    func_0x00010bf15fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf72020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    if (*(long *)(param_2 + 0x28) != 0) {
      puVar6 = PTR_PTR_1126c9898;
      func_0x00010c0c6040(PTR_PTR_1126c9898);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar9);
      _objc_release(puVar6);
      uVar5 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010be36bc0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126c9898;
      func_0x00010c0844e0(PTR_PTR_1126c9898);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar9);
      _objc_release(puVar6);
      _objc_release(uVar5);
    }
    lVar3 = lVar1 + 0x90;
    _objc_loadWeakRetained(lVar3);
    puVar6 = PTR_PTR_1126b2338;
    func_0x00010c0c4e00();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(lVar1 + 0x50);
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar12;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar5;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar9;
    func_0x00010bf51e00();
    func_0x00010c0eb7c0(lVar3);
    _objc_release(puVar7);
    _objc_release(uVar11);
    _objc_release(uVar5);
    _objc_release(uVar12);
    _objc_release(uVar2);
    _objc_release(puVar6);
    _objc_release(lVar3);
    _objc_release(puVar9);
  }
  uVar5 = *(undefined8 *)(lVar1 + 0x120);
  func_0x00010bd55f40();
  lVar3 = *(long *)(param_2 + 0x20);
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  param_5 = *(long *)(param_2 + 0x28);
  param_4 = lVar3;
  func_0x00010bf76b40(param_1,uVar5);
  _objc_release(lVar3);
  lVar3 = *(long *)(param_2 + 0x30);
  if (lVar3 != 0) {
    param_4 = *(long *)(param_2 + 0x28);
    param_5 = *(long *)(param_2 + 0x48);
    (**(code **)(lVar3 + 0x10))(lVar3,*(undefined8 *)(param_2 + 0x40),param_4);
  }
LAB_1063598b4:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  if (*(long *)(lVar1 + 0x128) != 0) {
    lVar4 = *(long *)(lVar1 + 0x50);
    lVar10 = param_4;
    func_0x00010be36bc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    if (param_5 == 0) {
      func_0x00010bfb2040();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
    }
    else {
      _objc_retain(param_5);
      func_0x00010bfb2040();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar10);
      lVar10 = param_5;
    }
    _objc_release(lVar10);
    puVar9 = PTR_PTR_1126b2340;
    if (lVar3 != 0) {
      lVar10 = lVar3;
      func_0x00010c0f0be0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar10;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c084360();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar10);
      puVar6 = puVar9;
      func_0x00010c084180();
      _objc_retainAutoreleasedReturnValue();
      if (puVar6 != (undefined *)0x0) {
        puVar7 = puVar6;
        func_0x00010b0ee7e8(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befaa00(*(undefined8 *)(lVar1 + 0x128));
        _objc_release(puVar7);
      }
      _objc_release(puVar6);
      _objc_release(puVar9);
    }
    _objc_release(lVar3);
  }
  _objc_release(param_7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1063598fc; end: 106359aff; -[SCOperaPlaylistViewCoordinator _emitSignalsIfNeededForItem:pageId:signal:reason:] */

void FUN_1063598fc(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  if (*(long *)(param_1 + 0x128) != 0) {
    lVar6 = *(long *)(param_1 + 0x50);
    lVar1 = param_3;
    func_0x00010be36bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar6,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar6;
    if (param_4 == 0) {
      func_0x00010bfb2040(lVar6,param_2,&PTR___NSConcreteGlobalBlock_11091d198);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
    }
    else {
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_106359b00;
      puStack_70 = &UNK_11091d148;
      _objc_retain(param_4);
      lStack_68 = param_4;
      func_0x00010bfb2040(lVar6,param_2,&puStack_88);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      _objc_release(lVar1);
      lVar1 = lStack_68;
    }
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126b2340;
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x00010c0f0be0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar1;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c084360(puVar3,param_2,lVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      _objc_release(lVar1);
      puVar4 = puVar3;
      func_0x00010c084180();
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 != (undefined *)0x0) {
        puVar5 = puVar4;
        func_0x00010b0ee7e8(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befaa00(*(undefined8 *)(param_1 + 0x128),param_2,puVar5,param_5);
        _objc_release(puVar5);
      }
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106359b00; end: 106359b3f;  */

bool FUN_106359b00(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c0f12a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_release();
  return param_2 == lVar1;
}



/* Entry: 106359b40; end: 106359bbb;  */

bool FUN_106359b40(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c0f3aa0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = param_2;
    func_0x00010c0f0be0(param_2);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 != 0;
    _objc_release();
  }
  else {
    bVar1 = false;
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 106359bbc; end: 106359bcb;  */

void FUN_106359bbc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be36bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__id_11256b490);
  return;
}



/* Entry: 106359bcc; end: 10635a58b; -[SCOperaPlaylistViewCoordinator _resolvePlaylistItemGroup:forceResolve:] */

ulong FUN_106359bcc(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 == 0) goto LAB_10635a544;
  uVar8 = param_3;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (((param_4 & 1) == 0) && (uVar8 != 0)) goto LAB_10635a544;
  uVar1 = param_3;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13ac00(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c104f80(*(undefined8 *)(param_1 + 0x30));
  func_0x00010bdde420(param_1);
  func_0x00010bfcf800(*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar8 = param_3;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf51e00();
  _objc_release(uVar8);
  uVar9 = 0;
  _objc_retain(uVar10);
  uVar8 = uVar10;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  while (uVar8 != 0) {
    uVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar11) {
        _objc_enumerationMutation(uVar10);
      }
      uVar16 = *(ulong *)(uVar13 * 8);
      uVar21 = uVar16;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar21 != 0) {
        uVar14 = *(undefined8 *)(param_1 + 0x48);
        uVar21 = uVar16;
        func_0x00010be36bc0(uVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar14);
        _objc_release(uVar21);
        uVar14 = *(undefined8 *)(param_1 + 0x120);
        func_0x00010bd55f40();
        uVar21 = uVar16;
        func_0x00010be36bc0(uVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf743a0(uVar9,uVar14);
        _objc_release(uVar21);
      }
      lVar15 = *(long *)(param_1 + 0xd0);
      uVar14 = *(undefined8 *)(param_1 + 0x48);
      _objc_retain(uVar16);
      _objc_retain(lVar15);
      _objc_retain(uVar14);
      uVar9 = 0;
      uVar22 = uVar16;
      func_0x00010c25e580();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar22;
      func_0x00010bf52a60();
      lVar5 = lRam0000000000000000;
      while (uVar21 != 0) {
        uVar20 = 0;
        do {
          if (lRam0000000000000000 != lVar5) {
            _objc_enumerationMutation(uVar22);
          }
          lVar2 = *(long *)(uVar20 * 8);
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar3 != 0) {
            lVar3 = lVar2;
            func_0x00010be36bc0(lVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(uVar14);
            _objc_release(lVar3);
          }
          _objc_release(lVar2);
          uVar20 = uVar20 + 1;
        } while (uVar21 != uVar20);
        uVar21 = uVar22;
        func_0x00010bf52a60();
      }
      _objc_release(uVar22);
      uVar21 = uVar16;
      func_0x00010c25e580();
      _objc_retainAutoreleasedReturnValue();
      uVar22 = uVar21;
      func_0x00010bf529e0();
      _objc_release(uVar21);
      if (uVar22 != 0) {
        uVar21 = 0;
        do {
          uVar22 = uVar16;
          func_0x00010c25e580();
          _objc_retainAutoreleasedReturnValue();
          uVar20 = uVar22;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          uVar17 = uVar20;
          func_0x00010bf529e0();
          _objc_release(uVar20);
          _objc_release(uVar22);
          if (uVar17 != 0) {
            uVar22 = 0;
            do {
              uVar20 = uVar16;
              func_0x00010c25e580();
              _objc_retainAutoreleasedReturnValue();
              uVar17 = uVar20;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar17;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar17);
              _objc_release(uVar20);
              uVar20 = uVar4;
              func_0x00010be36bc0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (uVar20 != 0) {
                uVar20 = uVar4;
                func_0x00010be36bc0(uVar4);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(uVar14);
                _objc_release(uVar20);
                uVar20 = uVar4;
                func_0x00010be36bc0(uVar4);
                _objc_retainAutoreleasedReturnValue();
                lVar5 = lVar15;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar20);
                if (lVar5 != 0) {
                  uVar9 = 0;
                  _objc_retain(lVar5);
                  lVar3 = lVar5;
                  func_0x00010bf52a60();
                  lVar2 = lRam0000000000000000;
                  while (lVar3 != 0) {
                    lVar19 = 0;
                    do {
                      if (lRam0000000000000000 != lVar2) {
                        _objc_enumerationMutation(lVar5);
                      }
                      lVar18 = *(long *)(lVar19 * 8);
                      lVar6 = lVar18;
                      func_0x00010be36bc0();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release();
                      if (lVar6 != 0) {
                        func_0x00010be36bc0(lVar18);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c1d0640(uVar14);
                        _objc_release(lVar18);
                      }
                      lVar19 = lVar19 + 1;
                    } while (lVar3 != lVar19);
                    lVar3 = lVar5;
                    func_0x00010bf52a60();
                  }
                  _objc_release(lVar5);
                  func_0x00010c066ee0(uVar16);
                }
                _objc_release(lVar5);
              }
              _objc_release(uVar4);
              uVar22 = uVar22 + 1;
              uVar20 = uVar16;
              func_0x00010c25e580();
              _objc_retainAutoreleasedReturnValue();
              uVar17 = uVar20;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar17;
              func_0x00010bf529e0();
              _objc_release(uVar17);
              _objc_release(uVar20);
            } while (uVar22 < uVar4);
          }
          uVar21 = uVar21 + 1;
          uVar22 = uVar16;
          func_0x00010c25e580();
          _objc_retainAutoreleasedReturnValue();
          uVar20 = uVar22;
          func_0x00010bf529e0();
          _objc_release(uVar22);
        } while (uVar21 < uVar20);
      }
      _objc_release(uVar14);
      _objc_release(lVar15);
      _objc_release(uVar16);
      uVar17 = *(ulong *)(param_1 + 0xb8);
      uVar14 = *(undefined8 *)(param_1 + 0x48);
      _objc_retain(uVar16);
      _objc_retain(uVar17);
      _objc_retain(uVar14);
      uVar20 = uVar16;
      func_0x00010bfceb80(uVar16);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(uVar16);
      uVar21 = uVar16;
      func_0x00010be36bc0(uVar16);
      _objc_retainAutoreleasedReturnValue();
      uVar22 = uVar17;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar21);
      uVar21 = uVar16;
      while (uVar22 != 0) {
        func_0x00010c0669a0(uVar20);
        uVar4 = uVar22;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar4 != 0) {
          uVar4 = uVar22;
          func_0x00010be36bc0(uVar22);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar14);
          _objc_release(uVar4);
        }
        _objc_retain(uVar22);
        _objc_release(uVar21);
        uVar21 = uVar22;
        func_0x00010be36bc0(uVar22);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar17;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar22);
        _objc_release(uVar21);
        uVar21 = uVar22;
        uVar22 = uVar4;
      }
      _objc_release(uVar21);
      _objc_release(uVar20);
      _objc_release(uVar14);
      _objc_release(uVar17);
      _objc_release(uVar16);
      lVar15 = *(long *)(param_1 + 0xc0);
      uVar14 = *(undefined8 *)(param_1 + 0x48);
      _objc_retain(uVar16);
      _objc_retain(uVar14);
      _objc_retain(lVar15);
      uVar21 = uVar16;
      func_0x00010bfceb80();
      _objc_retainAutoreleasedReturnValue();
      uVar22 = uVar16;
      func_0x00010be36bc0(uVar16);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar15;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar15);
      _objc_release(uVar22);
      if (lVar5 != 0) {
        func_0x00010c0669e0(uVar21);
        uVar22 = uVar21;
        func_0x00010bf5f0a0();
        _objc_retainAutoreleasedReturnValue();
        uVar20 = uVar22;
        func_0x00010c071ae0();
        _objc_release(uVar22);
        if ((int)uVar20 != 0) {
          func_0x00010c1874c0(uVar21);
        }
        lVar15 = lVar5;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar15 != 0) {
          lVar15 = lVar5;
          func_0x00010be36bc0(lVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar14);
          _objc_release(lVar15);
        }
      }
      _objc_release(lVar5);
      _objc_release(uVar21);
      _objc_release(uVar14);
      _objc_release(uVar16);
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar8);
    uVar8 = uVar10;
    func_0x00010bf52a60();
  }
  _objc_release(uVar10);
  func_0x00010bfcf800(*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar8 = param_3;
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar8 == uVar1) {
      _objc_release(uVar8);
    }
    else {
      uVar13 = param_3;
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar13;
      func_0x00010bf4b900();
      if ((int)uVar21 == 0) {
        uVar21 = param_3;
        func_0x00010c25e560();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar13);
        _objc_release(uVar8);
        if (uVar21 == 0) goto LAB_10635a4f0;
      }
      else {
        _objc_release(uVar13);
        _objc_release(uVar8);
      }
      func_0x00010c1874c0(param_3);
    }
  }
LAB_10635a4f0:
  param_1 = param_1 + 0x90;
  _objc_loadWeakRetained();
  puVar7 = PTR_PTR_1126c9a10;
  func_0x00010bfcf920(PTR_PTR_1126c9a10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb780(param_1);
  _objc_release(puVar7);
  _objc_release(param_1);
  _objc_release(uVar10);
  _objc_release(uVar1);
LAB_10635a544:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)(param_3 + 0x18);
  func_0x00010bf5ee40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar12 == 0) {
    uVar8 = 0xffffffffffffffff;
  }
  else {
    uVar8 = *(ulong *)(param_3 + 0x18);
    func_0x00010bfcf800(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_3 + 0x18);
    func_0x00010bf5ee40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar8;
    func_0x00010bfecde0(uVar8);
    _objc_release(uVar9);
    _objc_release(uVar8);
    if (*(long *)(param_3 + 0x10) == 1) {
      uVar10 = *(ulong *)(param_3 + 0x18);
      func_0x00010bfcf800();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar10;
      func_0x00010bf529e0();
      _objc_release(uVar10);
      if (uVar8 < 3) {
                    /* WARNING: Could not recover jumptable at 0x00010be38c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_3,PTR_s__indexOfFirstViewedPlaylistItemG_11256bca8);
        return param_3;
      }
      uVar10 = param_3;
      func_0x00010be65420();
      lVar11 = *(long *)(param_3 + 0x18);
      func_0x00010bfcf800();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x00010bf529e0();
      _objc_release(lVar11);
      if (lVar12 - 1U >> 1 <= uVar10) {
        uVar10 = lVar12 - 1U >> 1;
      }
      uVar13 = param_3;
      func_0x00010be64000();
      while ((uVar8 = uVar1, uVar10 != 0 &&
             (uVar1 = param_3, func_0x00010be64000(), uVar8 = uVar13, uVar1 != uVar13))) {
        uVar10 = uVar10 - 1;
      }
    }
    else {
      uVar8 = uVar1;
      if (*(long *)(param_3 + 0x10) == 0) {
        func_0x00010be65420(param_3);
        uVar8 = uVar1 - param_3 & ((long)(uVar1 - param_3) >> 0x3f ^ 0xffffffffffffffffU);
      }
    }
  }
  return uVar8;
}



/* Entry: 10635a58c; end: 10635a707; -[SCOperaPlaylistViewCoordinator _firstPlaylistItemGroupIndexToBuild] */

ulong FUN_10635a58c(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf5ee40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x18);
    func_0x00010bfcf800(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf5ee40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfecde0(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if (*(long *)(param_1 + 0x10) == 1) {
      uVar5 = *(ulong *)(param_1 + 0x18);
      func_0x00010bfcf800();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar5;
      func_0x00010bf529e0();
      _objc_release(uVar5);
      if (uVar2 < 3) {
                    /* WARNING: Could not recover jumptable at 0x00010be38c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_1,PTR_s__indexOfFirstViewedPlaylistItemG_11256bca8);
        return param_1;
      }
      uVar5 = param_1;
      func_0x00010be65420();
      lVar6 = *(long *)(param_1 + 0x18);
      func_0x00010bfcf800();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar6;
      func_0x00010bf529e0();
      _objc_release(lVar6);
      if (lVar1 - 1U >> 1 <= uVar5) {
        uVar5 = lVar1 - 1U >> 1;
      }
      uVar7 = param_1;
      func_0x00010be64000();
      while ((uVar2 = uVar4, uVar5 != 0 &&
             (uVar4 = param_1, func_0x00010be64000(), uVar2 = uVar7, uVar4 != uVar7))) {
        uVar5 = uVar5 - 1;
      }
    }
    else {
      uVar2 = uVar4;
      if (*(long *)(param_1 + 0x10) == 0) {
        func_0x00010be65420(param_1);
        uVar2 = uVar4 - param_1 & ((long)(uVar4 - param_1) >> 0x3f ^ 0xffffffffffffffffU);
      }
    }
  }
  return uVar2;
}



/* Entry: 10635a708; end: 10635a86f; -[SCOperaPlaylistViewCoordinator _lastPlaylistItemGroupIndexToBuild] */

ulong FUN_10635a708(ulong param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf5ee40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar7 = 0xffffffffffffffff;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x18);
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf5ee40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010bfecde0(uVar2,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if (*(long *)(param_1 + 0x10) == 1) {
      uVar2 = param_1;
      func_0x00010be65440();
      uVar2 = uVar2 + 1;
      uVar5 = *(ulong *)(param_1 + 0x18);
      func_0x00010bfcf800();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf529e0();
      _objc_release(uVar5);
      if ((uVar6 >> 1) + 1 <= uVar2) {
        uVar2 = (uVar6 >> 1) + 1;
      }
      uVar6 = param_1;
      func_0x00010be38c40();
      if (1 < (long)uVar2 && uVar7 != uVar6) {
        lVar1 = 1;
        do {
          lVar4 = uVar7 + 1;
          uVar7 = param_1;
          func_0x00010be64000(param_1,param_2,lVar4);
          if ((long)(uVar2 - 1) <= lVar1) {
            return uVar7;
          }
          lVar1 = lVar1 + 1;
        } while (uVar7 != uVar6);
      }
    }
    else if (*(long *)(param_1 + 0x10) == 0) {
      lVar4 = *(long *)(param_1 + 0x18);
      func_0x00010bfcf800();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar4;
      func_0x00010bf529e0();
      _objc_release(lVar4);
      func_0x00010be65440();
      param_1 = param_1 + uVar7;
      uVar7 = lVar1 - 1U;
      if (param_1 <= lVar1 - 1U) {
        uVar7 = param_1;
      }
    }
  }
  return uVar7;
}



/* Entry: 10635a870; end: 10635a877; -[SCOperaPlaylistViewCoordinator _numOfViewModelsToPreloadInForwardDirection] */

undefined8 FUN_10635a870(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 10635a878; end: 10635a87f; -[SCOperaPlaylistViewCoordinator _numOfViewModelsToPreloadInBackwardDirection] */

undefined8 FUN_10635a878(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 10635a880; end: 10635a96f; -[SCOperaPlaylistViewCoordinator _indexOfFirstViewedPlaylistItemGroup] */

ulong FUN_10635a880(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar7 = 0;
    do {
      uVar3 = *(ulong *)(param_1 + 0x18);
      func_0x00010bfcf800();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar6;
      func_0x00010c0720c0();
      _objc_release(uVar6);
      _objc_release(uVar4);
      _objc_release(uVar3);
      if ((uVar5 & 1) != 0) {
        return uVar7;
      }
      uVar7 = uVar7 + 1;
      uVar6 = *(ulong *)(param_1 + 0x18);
      func_0x00010bfcf800();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar6;
      func_0x00010bf529e0();
      _objc_release(uVar6);
    } while (uVar7 < uVar4);
  }
  return 0;
}



/* Entry: 10635a970; end: 10635a997; -[SCOperaPlaylistViewCoordinator _indexOfLastPlaylistItemGroup] */

void FUN_10635a970(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be38c20();
                    /* WARNING: Could not recover jumptable at 0x00010be64010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__normalizeIndexInPlaylist__1125769a0,lVar1 + -1);
  return;
}



/* Entry: 10635a998; end: 10635aa57; -[SCOperaPlaylistViewCoordinator _nextGroupAfterGroup:] */

void FUN_10635a998(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010bfecde0();
  _objc_release(param_3);
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010be38c40();
  if (lVar1 == lVar4) {
    uVar3 = 0;
  }
  else {
    func_0x00010be64000(param_1,param_2,lVar1 + 1);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bfcf800(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10635aa58; end: 10635ab33; -[SCOperaPlaylistViewCoordinator _playlistItemAfterItem:] */

void FUN_10635aa58(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfecd60();
  _objc_release(param_3);
  if (uVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = uVar1;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf529e0();
    _objc_release(uVar4);
    uVar4 = 0;
    if ((uVar2 != 0x7fffffffffffffff) && (uVar2 < uVar3 - 1)) {
      uVar2 = uVar1;
      func_0x00010c084fc0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
    }
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10635ab34; end: 10635abd7; -[SCOperaPlaylistViewCoordinator _playlistItemBeforeItem:] */

void FUN_10635ab34(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfecd60();
  _objc_release(param_3);
  lVar3 = 0;
  if ((lVar2 != 0) && (lVar2 != 0x7fffffffffffffff)) {
    lVar2 = lVar1;
    func_0x00010c084fc0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10635abd8; end: 10635ac4f; -[SCOperaPlaylistViewCoordinator _normalizeIndexInPlaylist:] */

long FUN_10635abd8(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010bfcf800(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  uVar4 = *(ulong *)(param_1 + 0x18);
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf529e0();
  uVar1 = 0;
  if (uVar5 != 0) {
    uVar1 = (ulong)(lVar3 + param_3) / uVar5;
  }
  _objc_release(uVar4);
  _objc_release(lVar2);
  return (lVar3 + param_3) - uVar1 * uVar5;
}



/* Entry: 10635ac50; end: 10635ac53; -[SCOperaPlaylistViewCoordinator _logPagePropertiesUpdatesFrom:to:] */

void FUN_10635ac50(void)

{
  return;
}



/* Entry: 10635ac54; end: 10635b1c3; -[SCOperaPlaylistViewCoordinator _cleanupPagePropertiesForDistantItems:] */

void FUN_10635ac54(long param_1,undefined1 *param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined **unaff_x23;
  undefined8 unaff_x24;
  long lVar18;
  undefined *unaff_x25;
  undefined8 *puVar19;
  undefined8 unaff_x26;
  long unaff_x27;
  undefined *unaff_x28;
  undefined8 uStack_430;
  long lStack_428;
  long *plStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  long lStack_3e8;
  long *plStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined1 auStack_3a8 [128];
  undefined1 auStack_328 [128];
  long lStack_2a8;
  undefined *puStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined **ppuStack_278;
  undefined8 uStack_270;
  long lStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined1 *puStack_250;
  undefined8 uStack_248;
  long lStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  long lStack_188;
  long lStack_180;
  undefined *puStack_178;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar16 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + 0x50);
  puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a0 = 0xc2000000;
  uStack_198 = 0x10635aed4;
  puStack_190 = &UNK_11091d238;
  _objc_retain(param_3);
  lStack_240 = param_3;
  lStack_188 = param_3;
  lStack_180 = param_1;
  _objc_retain(puVar16);
  puStack_178 = puVar16;
  func_0x00010bf97ce0(uVar17);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  _objc_retain(puVar16);
  puVar11 = &uStack_1f0;
  puVar14 = auStack_f0;
  puVar1 = puVar16;
  puStack_238 = puVar16;
  func_0x00010bf52a60();
  if (puVar1 != (undefined *)0x0) {
    unaff_x27 = *plStack_1e0;
    unaff_x23 = &PTR____CFConstantStringClassReference_110e4be38;
    do {
      unaff_x28 = (undefined *)0x0;
      do {
        if (*plStack_1e0 != unaff_x27) {
          _objc_enumerationMutation(puStack_238);
        }
        unaff_x24 = *(undefined8 *)(lStack_1e8 + (long)unaff_x28 * 8);
        unaff_x25 = *(undefined **)(param_1 + 0x50);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = *(ulong *)(param_1 + 0x60);
        func_0x00010bf4b900();
        if ((uVar2 & 1) == 0) {
          uStack_208 = 0;
          uStack_210 = 0;
          uStack_1f8 = 0;
          uStack_200 = 0;
          lStack_228 = 0;
          uStack_230 = 0;
          uStack_218 = 0;
          plStack_220 = (long *)0x0;
          _objc_retain(unaff_x25);
          puVar3 = unaff_x25;
          func_0x00010bf52a60();
          if (puVar3 != (undefined *)0x0) {
            lVar15 = *plStack_220;
            do {
              puVar16 = (undefined *)0x0;
              do {
                if (*plStack_220 != lVar15) {
                  _objc_enumerationMutation(unaff_x25);
                }
                func_0x00010bf3bc00(*(undefined8 *)(lStack_228 + (long)puVar16 * 8));
                puVar16 = puVar16 + 1;
              } while (puVar3 != puVar16);
              puVar3 = unaff_x25;
              func_0x00010bf52a60();
              unaff_x26 = 0;
            } while (puVar3 != (undefined *)0x0);
          }
          _objc_release(unaff_x25);
          func_0x00010befa120(*(undefined8 *)(param_1 + 0x58));
        }
        _objc_release(unaff_x25);
        unaff_x28 = unaff_x28 + 1;
      } while (unaff_x28 != puVar1);
      puVar11 = &uStack_1f0;
      puVar14 = auStack_f0;
      puVar1 = puStack_238;
      func_0x00010bf52a60();
      uVar17 = 0;
    } while (puVar1 != (undefined *)0x0);
  }
  puVar1 = puStack_238;
  _objc_release(puStack_238);
  func_0x00010bf529e0(puVar1);
  _objc_release(puStack_178);
  _objc_release(lStack_188);
  _objc_release(puVar1);
  lVar15 = lStack_240;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar13 = &uStack_430;
  puStack_258 = puVar1;
  uStack_248 = 0x10635aed4;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_2a0 = unaff_x28;
  lStack_298 = unaff_x27;
  uStack_290 = unaff_x26;
  puStack_288 = unaff_x25;
  uStack_280 = unaff_x24;
  ppuStack_278 = unaff_x23;
  uStack_270 = uVar17;
  lStack_268 = param_1;
  puStack_260 = puVar16;
  puStack_250 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  _objc_retain(puVar11);
  uVar2 = *(ulong *)(lVar15 + 0x20);
  puVar12 = param_2;
  func_0x00010bf4b900();
  if ((uVar2 & 1) != 0) goto LAB_10635b178;
  puVar4 = *(undefined1 **)(*(long *)(lVar15 + 0x28) + 0x48);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0f3aa0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 == (undefined1 *)0x0) {
    _objc_release(puVar5);
  }
  else {
    uVar2 = *(ulong *)(lVar15 + 0x20);
    puVar7 = puVar4;
    func_0x00010c0f3aa0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar8;
    func_0x00010bf4b900();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    if ((uVar2 & 1) != 0) goto LAB_10635b170;
  }
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3b8 = 0;
  uStack_3c0 = 0;
  lStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_3d8 = 0;
  plStack_3e0 = (long *)0x0;
  _objc_retain(puVar11);
  puVar14 = auStack_328;
  puVar9 = puVar11;
  func_0x00010bf52a60();
  if (puVar9 != (undefined8 *)0x0) {
    lVar18 = *plStack_3e0;
    do {
      puVar19 = (undefined8 *)0x0;
      do {
        if (*plStack_3e0 != lVar18) {
          _objc_enumerationMutation(puVar11);
        }
        puVar12 = *(undefined1 **)(lStack_3e8 + (long)puVar19 * 8);
        uVar2 = *(ulong *)(*(long *)(lVar15 + 0x28) + 0xb0);
        func_0x00010bf4b900();
        if ((uVar2 & 1) != 0) goto LAB_10635b168;
        puVar19 = (undefined8 *)((long)puVar19 + 1);
      } while (puVar9 != puVar19);
      puVar14 = auStack_328;
      puVar9 = puVar11;
      func_0x00010bf52a60();
    } while (puVar9 != (undefined8 *)0x0);
  }
  _objc_release(puVar11);
  uStack_408 = 0;
  uStack_410 = 0;
  uStack_3f8 = 0;
  uStack_400 = 0;
  lStack_428 = 0;
  uStack_430 = 0;
  uStack_418 = 0;
  plStack_420 = (long *)0x0;
  _objc_retain(puVar11);
  puVar14 = auStack_3a8;
  puVar9 = puVar11;
  func_0x00010bf52a60();
  if (puVar9 != (undefined8 *)0x0) {
    lVar18 = *plStack_420;
    do {
      puVar19 = (undefined8 *)0x0;
      puVar12 = (undefined1 *)puVar13;
      do {
        if (*plStack_420 != lVar18) {
          _objc_enumerationMutation(puVar11);
        }
        uVar10 = *(ulong *)(lStack_428 + (long)puVar19 * 8);
        func_0x00010c0f0be0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar10;
        func_0x00010c06b7e0();
        _objc_release(uVar10);
        if ((uVar2 & 1) != 0) goto LAB_10635b168;
        puVar19 = (undefined8 *)((long)puVar19 + 1);
      } while (puVar9 != puVar19);
      puVar14 = auStack_3a8;
      puVar9 = puVar11;
      puVar13 = &uStack_430;
      func_0x00010bf52a60();
    } while (puVar9 != (undefined8 *)0x0);
  }
  _objc_release(puVar11);
  puVar9 = puVar11;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar9;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar9);
  puVar12 = (undefined1 *)puVar13;
  if (puVar19 != (undefined8 *)0x0) {
    puVar12 = param_2;
    func_0x00010befa120(*(undefined8 *)(lVar15 + 0x30));
  }
LAB_10635b170:
  _objc_release(puVar4);
LAB_10635b178:
  _objc_release(puVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2a8) {
    ___stack_chk_fail();
    _objc_retain(puVar12);
    _objc_retain(puVar14);
    if ((param_2[0x139] & 1) == 0) {
      puVar5 = puVar12;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c1086c0();
      _objc_release(puVar5);
      if (1 < (long)puVar6) {
        func_0x00010befa120(puVar14);
      }
      puVar5 = puVar12;
      func_0x00010bf0cb60();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar6;
      func_0x00010c1086c0();
      _objc_release(puVar6);
      _objc_release(puVar5);
      if (1 < (long)puVar4) {
        puVar5 = puVar12;
        func_0x00010bf0cb60(puVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar14);
        _objc_release(puVar5);
      }
    }
    _objc_release(puVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar12);
    return;
  }
  return;
LAB_10635b168:
  _objc_release(puVar11);
  goto LAB_10635b170;
}



/* Entry: 10635b1c4; end: 10635b2bf; -[SCOperaPlaylistViewCoordinator _addViewModel:toPreloadSetIfNecessary:] */

void FUN_10635b1c4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((*(byte *)(param_1 + 0x139) & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c1086c0();
    _objc_release(lVar1);
    if (1 < lVar2) {
      func_0x00010befa120(param_4,param_2,param_3);
    }
    lVar1 = param_3;
    func_0x00010bf0cb60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c1086c0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (1 < lVar3) {
      lVar1 = param_3;
      func_0x00010bf0cb60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(param_4,param_2,lVar1);
      _objc_release(lVar1);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10635b2c0; end: 10635b32b; -[SCOperaPlaylistViewCoordinator setOperaVC:] */

void FUN_10635b2c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x140,param_3);
  _objc_retain();
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010bf00560(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c287d00(param_3);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10635b32c; end: 10635b397; -[SCOperaPlaylistViewCoordinator _updateViewModelsToPreload:] */

void FUN_10635b32c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  _objc_release(uVar2);
  lVar1 = param_1 + 0x140;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010bf00560(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c287d00(lVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10635b398; end: 10635b48f; -[SCOperaPlaylistViewCoordinator _logPlaylistGroups] */

void FUN_10635b398(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 *in_x5;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined1 *puVar21;
  undefined8 uVar22;
  undefined **ppuVar23;
  long unaff_x27;
  undefined1 *unaff_x28;
  undefined8 *puStack_848;
  undefined8 uStack_840;
  long lStack_838;
  long *plStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  long lStack_7f8;
  long *plStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  long lStack_7b8;
  long *plStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined1 auStack_780 [128];
  undefined8 auStack_700 [16];
  undefined8 auStack_680 [16];
  long lStack_600;
  undefined1 *puStack_5f0;
  long lStack_5e8;
  undefined **ppuStack_5e0;
  undefined1 *puStack_5d8;
  undefined1 *puStack_5d0;
  undefined *puStack_5c8;
  undefined **ppuStack_5c0;
  undefined1 *puStack_5b8;
  undefined1 *puStack_5b0;
  undefined1 *puStack_5a8;
  undefined8 ***pppuStack_5a0;
  code *pcStack_598;
  undefined **ppuStack_590;
  undefined *puStack_588;
  undefined8 uStack_580;
  long lStack_578;
  long *plStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 auStack_540 [16];
  long lStack_4c0;
  undefined8 ***pppuStack_460;
  code *pcStack_458;
  undefined8 uStack_450;
  long lStack_448;
  long *plStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined1 auStack_408 [128];
  long lStack_388;
  undefined1 ***pppuStack_340;
  code *pcStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_268;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_158;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar2;
  func_0x00010bf52a60();
  if (lVar18 != 0) {
    lVar16 = *plStack_100;
    do {
      if (*plStack_100 != lVar16) {
        _objc_enumerationMutation(lVar2);
      }
      func_0x00010bf5ee40(*(undefined8 *)(param_1 + 0x18));
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      lVar18 = lVar18 + -1;
    } while ((lVar18 != 0) ||
            (lVar18 = lVar2, func_0x00010bf52a60(lVar2,param_2,&uStack_110,auStack_c8,0x10),
            lVar18 != 0));
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = &uStack_220;
  pcStack_118 = FUN_10635b490;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  lVar16 = *(long *)(lVar2 + 0x18);
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar16;
  func_0x00010bf52a60();
  if (lVar18 != 0) {
    lVar17 = *plStack_210;
    do {
      lVar20 = 0;
      do {
        if (*plStack_210 != lVar17) {
          _objc_enumerationMutation(lVar16);
        }
        func_0x00010be54820(lVar2,param_2,*(undefined8 *)(lStack_218 + lVar20 * 8));
        lVar20 = lVar20 + 1;
      } while (lVar18 != lVar20);
      lVar18 = lVar16;
      puVar4 = &uStack_220;
      func_0x00010bf52a60();
    } while (lVar18 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  puVar15 = &uStack_330;
  pcStack_228 = FUN_10635b58c;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_230 = &puStack_120;
  _objc_retain(puVar4);
  puVar3 = (undefined1 *)puVar4;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf51e00();
  _objc_release(puVar3);
  func_0x00010bf5ee40(*(undefined8 *)(lVar16 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  plStack_320 = (long *)0x0;
  _objc_retain(puVar5);
  puVar3 = puVar5;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    lVar18 = *plStack_320;
    do {
      if (*plStack_320 != lVar18) {
        _objc_enumerationMutation(puVar5);
      }
      func_0x00010bf5f0a0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar3 = puVar3 + -1;
    } while ((puVar3 != (undefined1 *)0x0) ||
            (puVar3 = puVar5, puVar15 = &uStack_330, func_0x00010bf52a60(),
            puVar3 != (undefined1 *)0x0));
  }
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_450;
  pcStack_338 = FUN_10635b6d0;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_340 = &ppuStack_230;
  func_0x00010bef9860(puVar15,param_2,&PTR____CFConstantStringClassReference_110e4be58);
  _objc_retainAutoreleasedReturnValue();
  lStack_448 = 0;
  uStack_450 = 0;
  uStack_438 = 0;
  plStack_440 = (long *)0x0;
  uStack_428 = 0;
  uStack_430 = 0;
  uStack_418 = 0;
  uStack_420 = 0;
  lVar2 = *(long *)((long)puVar4 + 0x18);
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = auStack_408;
  lVar18 = lVar2;
  func_0x00010bf52a60();
  if (lVar18 != 0) {
    lVar16 = *plStack_440;
    do {
      lVar17 = 0;
      do {
        if (*plStack_440 != lVar16) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010be587e0(puVar4,param_2,*(undefined8 *)(lStack_448 + lVar17 * 8),puVar15);
        lVar17 = lVar17 + 1;
      } while (lVar18 != lVar17);
      puVar3 = auStack_408;
      lVar18 = lVar2;
      puVar10 = &uStack_450;
      func_0x00010bf52a60();
    } while (lVar18 != 0);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return;
  }
  ___stack_chk_fail();
  pcStack_458 = FUN_10635b800;
  lStack_4c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_460 = &pppuStack_340;
  _objc_retain(puVar10);
  _objc_retain(puVar3);
  puVar5 = *(undefined1 **)((long)puVar15 + 0x18);
  func_0x00010bf5ee40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e4be78;
  if (puVar10 != (undefined8 *)puVar5) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  _objc_retain(ppuVar1);
  _objc_release(puVar5);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar23 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  puVar5 = (undefined1 *)puVar10;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_590 = (undefined **)puVar5;
  func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110e4be98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar6,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar5);
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar5 = (undefined1 *)puVar10;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_590 = (undefined **)puVar5;
  func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110e4beb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar6,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar5);
  puVar21 = *(undefined1 **)((long)puVar15 + 0x38);
  puVar5 = (undefined1 *)puVar10;
  func_0x00010be36bc0(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(puVar21,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar5);
  if ((undefined8 *)puVar21 == puVar10) {
    func_0x00010befa120(puVar6,param_2,&PTR____CFConstantStringClassReference_110e4bed8);
  }
  uVar22 = *(undefined8 *)((long)puVar15 + 0x88);
  puVar5 = (undefined1 *)puVar10;
  func_0x00010be36bc0(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar22,param_2,puVar5);
  _objc_release(puVar5);
  if ((int)uVar22 != 0) {
    func_0x00010befa120(puVar6,param_2,&PTR____CFConstantStringClassReference_110e4bef8);
  }
  puVar5 = (undefined1 *)puVar10;
  func_0x00010c264f20();
  if ((int)puVar5 != 0) {
    func_0x00010befa120(puVar6,param_2,&PTR____CFConstantStringClassReference_110e4bf18);
  }
  puVar5 = (undefined1 *)puVar10;
  func_0x00010bfb6280();
  if ((int)puVar5 != 0) {
    func_0x00010befa120(puVar6,param_2,&PTR____CFConstantStringClassReference_110e4bf38);
  }
  puVar5 = (undefined1 *)puVar10;
  func_0x00010bf14f80();
  if ((int)puVar5 != 0) {
    func_0x00010befa120(puVar6,param_2,&PTR____CFConstantStringClassReference_110e4bf58);
  }
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar8 = puVar6;
  func_0x00010bf446e0(puVar6,param_2,&PTR____CFConstantStringClassReference_110dbf078);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_590 = ppuVar1;
  puStack_588 = puVar8;
  func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110e4bf78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3580(puVar3,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar8);
  puVar5 = puVar3;
  func_0x00010bef9860(puVar3,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lStack_578 = 0;
  uStack_580 = 0;
  uStack_568 = 0;
  plStack_570 = (long *)0x0;
  uStack_558 = 0;
  uStack_560 = 0;
  uStack_548 = 0;
  uStack_550 = 0;
  puVar21 = (undefined1 *)puVar10;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = &uStack_580;
  puVar12 = auStack_540;
  puVar14 = (undefined8 *)0x10;
  puVar9 = puVar21;
  func_0x00010bf52a60();
  if (puVar9 != (undefined1 *)0x0) {
    unaff_x27 = *plStack_570;
    do {
      unaff_x28 = (undefined1 *)0x0;
      do {
        if (*plStack_570 != unaff_x27) {
          _objc_enumerationMutation(puVar21);
        }
        in_x5 = puVar5;
        func_0x00010be58800(puVar15,param_2,*(undefined8 *)(lStack_578 + (long)unaff_x28 * 8),
                            puVar10,0);
        unaff_x28 = unaff_x28 + 1;
      } while (puVar9 != unaff_x28);
      puVar4 = &uStack_580;
      puVar12 = auStack_540;
      puVar14 = (undefined8 *)0x10;
      puVar9 = puVar21;
      func_0x00010bf52a60();
      ppuVar23 = (undefined **)0x0;
    } while (puVar9 != (undefined1 *)0x0);
  }
  _objc_release(puVar21);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(ppuVar1);
  _objc_release(puVar3);
  puVar9 = (undefined1 *)puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4c0) {
    return;
  }
  ___stack_chk_fail();
  pcStack_598 = FUN_10635bbb0;
  lStack_600 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = puVar12;
  puStack_5f0 = unaff_x28;
  lStack_5e8 = unaff_x27;
  ppuStack_5e0 = ppuVar23;
  puStack_5d8 = puVar21;
  puStack_5d0 = puVar5;
  puStack_5c8 = puVar6;
  ppuStack_5c0 = ppuVar1;
  puStack_5b8 = (undefined1 *)puVar15;
  puStack_5b0 = puVar3;
  puStack_5a8 = (undefined1 *)puVar10;
  pppuStack_5a0 = &pppuStack_460;
  _objc_retain(puVar4);
  _objc_retain(puVar12);
  _objc_retain(puVar14);
  _objc_retain(in_x5);
  puVar15 = puVar12;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == puVar15) {
    puVar10 = *(undefined8 **)(puVar9 + 0x18);
    func_0x00010bf5ee40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar15);
    if (puVar12 == puVar10) goto LAB_10635bc94;
  }
  else {
    _objc_release(puVar15);
  }
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
LAB_10635bc94:
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar15 = puVar4;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110e4be98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar6,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar15);
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar15 = puVar4;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110e4beb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar6,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar15);
  uVar22 = *(undefined8 *)(puVar9 + 0x58);
  puVar15 = puVar4;
  func_0x00010be36bc0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar22,param_2,puVar15);
  _objc_release(puVar15);
  if ((int)uVar22 != 0) {
    func_0x00010befa120(puVar6,param_2,&PTR____CFConstantStringClassReference_110e4bfb8);
  }
  puVar15 = puVar4;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar15 != puVar12) {
    puVar15 = puVar4;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110e4bfd8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar6,param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar15);
  }
  puVar15 = puVar4;
  func_0x00010c0f3aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar15 != puVar14) {
    puVar15 = puVar4;
    func_0x00010c0f3aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110e4bff8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar6,param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar15);
  }
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar8 = puVar6;
  func_0x00010bf446e0(puVar6,param_2,&PTR____CFConstantStringClassReference_110dbf078);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110e4c018);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3580(in_x5,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar8);
  puVar3 = in_x5;
  func_0x00010bef9860(in_x5,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(puVar9 + 0x50);
  puVar10 = puVar4;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar10;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  lVar18 = lVar2;
  func_0x00010bf529e0();
  if (lVar18 != 0) {
    uStack_798 = 0;
    uStack_7a0 = 0;
    uStack_788 = 0;
    uStack_790 = 0;
    lStack_7b8 = 0;
    uStack_7c0 = 0;
    uStack_7a8 = 0;
    plStack_7b0 = (long *)0x0;
    _objc_retain(lVar2);
    puVar15 = &uStack_7c0;
    puVar13 = auStack_680;
    lVar18 = lVar2;
    func_0x00010bf52a60();
    if (lVar18 != 0) {
      lVar16 = *plStack_7b0;
      do {
        lVar17 = 0;
        do {
          if (*plStack_7b0 != lVar16) {
            _objc_enumerationMutation(lVar2);
          }
          func_0x00010be58820(puVar9,param_2,*(undefined8 *)(lStack_7b8 + lVar17 * 8),puVar3);
          lVar17 = lVar17 + 1;
        } while (lVar18 != lVar17);
        puVar15 = &uStack_7c0;
        puVar13 = auStack_680;
        lVar18 = lVar2;
        func_0x00010bf52a60();
      } while (lVar18 != 0);
    }
    _objc_release(lVar2);
  }
  puVar10 = puVar4;
  func_0x00010c25e580();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bf529e0();
  _objc_release(puVar10);
  if (puVar11 != (undefined8 *)0x0) {
    puVar5 = puVar3;
    func_0x00010bef9860(puVar3,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    lStack_7f8 = 0;
    uStack_800 = 0;
    uStack_7e8 = 0;
    plStack_7f0 = (long *)0x0;
    uStack_7d8 = 0;
    uStack_7e0 = 0;
    uStack_7c8 = 0;
    uStack_7d0 = 0;
    puVar10 = puVar4;
    func_0x00010c25e580();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = &uStack_800;
    puVar13 = auStack_700;
    puStack_848 = puVar10;
    func_0x00010bf52a60();
    if (puStack_848 != (undefined8 *)0x0) {
      lVar18 = *plStack_7f0;
      do {
        puVar15 = (undefined8 *)0x0;
        do {
          if (*plStack_7f0 != lVar18) {
            _objc_enumerationMutation(puVar10);
          }
          lVar17 = *(long *)(lStack_7f8 + (long)puVar15 * 8);
          puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              &PTR____CFConstantStringClassReference_110e4c038);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b3580(puVar3,param_2,puVar7);
          _objc_release(puVar7);
          uStack_818 = 0;
          uStack_820 = 0;
          uStack_808 = 0;
          uStack_810 = 0;
          lStack_838 = 0;
          uStack_840 = 0;
          uStack_828 = 0;
          plStack_830 = (long *)0x0;
          _objc_retain(lVar17);
          lVar16 = lVar17;
          func_0x00010bf52a60(lVar17,param_2,&uStack_840,auStack_780,0x10);
          if (lVar16 != 0) {
            lVar20 = *plStack_830;
            do {
              lVar19 = 0;
              do {
                if (*plStack_830 != lVar20) {
                  _objc_enumerationMutation(lVar17);
                }
                func_0x00010be58800(puVar9,param_2,*(undefined8 *)(lStack_838 + lVar19 * 8),puVar12,
                                    puVar4,puVar5);
                lVar19 = lVar19 + 1;
              } while (lVar16 != lVar19);
              lVar16 = lVar17;
              func_0x00010bf52a60(lVar17,param_2,&uStack_840,auStack_780,0x10);
            } while (lVar16 != 0);
          }
          _objc_release(lVar17);
          puVar15 = (undefined8 *)((long)puVar15 + 1);
        } while (puVar15 != puStack_848);
        puVar15 = &uStack_800;
        puVar13 = auStack_700;
        puStack_848 = puVar10;
        func_0x00010bf52a60();
      } while (puStack_848 != (undefined8 *)0x0);
    }
    _objc_release(puVar10);
    _objc_release(puVar5);
  }
  _objc_release(lVar2);
  _objc_release(puVar3);
  _objc_release(puVar6);
  _objc_release(in_x5);
  _objc_release(puVar14);
  _objc_release(puVar12);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_600) {
    ___stack_chk_fail();
    _objc_retain(puVar15);
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_retain(puVar13);
    _objc_opt_new(puVar6);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class();
    func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110e0cf18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar6,param_2,puVar7);
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar4 = puVar15;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar4;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110e4c058);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar6,param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar10);
    _objc_release(puVar4);
    puVar4 = puVar15;
    func_0x00010c0f3aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar4 != (undefined8 *)0x0) {
      puVar4 = puVar15;
      func_0x00010c0f3aa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110e4c078);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar6,param_2,puVar7);
      _objc_release(puVar7);
      _objc_release(puVar4);
    }
    puVar4 = puVar15;
    func_0x00010bf0cb60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar4 != (undefined8 *)0x0) {
      puVar4 = puVar15;
      func_0x00010bf0cb60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110e4c098);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar6,param_2,puVar7);
      _objc_release(puVar7);
      _objc_release(puVar4);
    }
    puVar4 = puVar15;
    func_0x00010c0d9820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar4 != (undefined8 *)0x0) {
      puVar4 = puVar15;
      func_0x00010c0d9820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110e4c0b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar6,param_2,puVar7);
      _objc_release(puVar7);
      _objc_release(puVar4);
    }
    puVar4 = puVar15;
    func_0x00010c1125e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar4 != (undefined8 *)0x0) {
      puVar4 = puVar15;
      func_0x00010c1125e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110e4c0d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar6,param_2,puVar7);
      _objc_release(puVar7);
      _objc_release(puVar4);
    }
    puVar4 = puVar15;
    func_0x00010c0d9ae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar4 != (undefined8 *)0x0) {
      puVar4 = puVar15;
      func_0x00010c0d9ae0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110e4c0f8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar6,param_2,puVar7);
      _objc_release(puVar7);
      _objc_release(puVar4);
    }
    puVar4 = puVar15;
    func_0x00010c1126e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar4 != (undefined8 *)0x0) {
      puVar4 = puVar15;
      func_0x00010c1126e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110e4c118);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar6,param_2,puVar7);
      _objc_release(puVar7);
      _objc_release(puVar4);
    }
    puVar4 = puVar15;
    func_0x00010c27bf80();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar4;
    func_0x00010bf529e0();
    _objc_release(puVar4);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar10 != (undefined8 *)0x0) {
      puVar4 = puVar15;
      func_0x00010c27bf80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110e4c138);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar6,param_2,puVar7);
      _objc_release(puVar7);
      _objc_release(puVar4);
    }
    puVar7 = puVar6;
    func_0x00010bf446e0(puVar6,param_2,&PTR____CFConstantStringClassReference_110dbf078);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3580(puVar13,param_2,puVar7);
    _objc_release(puVar13);
    _objc_release(puVar7);
    _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar15);
    return;
  }
  return;
}



/* Entry: 10635b490; end: 10635b58b; -[SCOperaPlaylistViewCoordinator _logFullPlaylist] */

void FUN_10635b490(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 *in_x5;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined1 *puVar20;
  undefined8 uVar21;
  long lVar22;
  undefined **ppuVar23;
  long unaff_x27;
  undefined1 *unaff_x28;
  undefined8 *puStack_738;
  undefined8 uStack_730;
  long lStack_728;
  long *plStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  long lStack_6e8;
  long *plStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  long lStack_6a8;
  long *plStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined1 auStack_670 [128];
  undefined8 auStack_5f0 [16];
  undefined8 auStack_570 [16];
  long lStack_4f0;
  undefined1 *puStack_4e0;
  long lStack_4d8;
  undefined **ppuStack_4d0;
  undefined1 *puStack_4c8;
  undefined1 *puStack_4c0;
  undefined *puStack_4b8;
  undefined **ppuStack_4b0;
  undefined1 *puStack_4a8;
  undefined1 *puStack_4a0;
  undefined1 *puStack_498;
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  undefined **ppuStack_480;
  undefined *puStack_478;
  undefined8 uStack_470;
  long lStack_468;
  long *plStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 auStack_430 [16];
  long lStack_3b0;
  undefined1 ***pppuStack_350;
  code *pcStack_348;
  undefined8 uStack_340;
  long lStack_338;
  long *plStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined1 auStack_2f8 [128];
  long lStack_278;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_158;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar4 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar2;
  func_0x00010bf52a60();
  if (lVar17 != 0) {
    lVar16 = *plStack_100;
    do {
      lVar19 = 0;
      do {
        if (*plStack_100 != lVar16) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010be54820(param_1,param_2,*(undefined8 *)(lStack_108 + lVar19 * 8));
        lVar19 = lVar19 + 1;
      } while (lVar17 != lVar19);
      lVar17 = lVar2;
      puVar4 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar17 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar15 = &uStack_220;
  pcStack_118 = FUN_10635b58c;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  puVar3 = (undefined1 *)puVar4;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf51e00();
  _objc_release(puVar3);
  func_0x00010bf5ee40(*(undefined8 *)(lVar2 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  _objc_retain(puVar5);
  puVar3 = puVar5;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    lVar17 = *plStack_210;
    do {
      if (*plStack_210 != lVar17) {
        _objc_enumerationMutation(puVar5);
      }
      func_0x00010bf5f0a0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar3 = puVar3 + -1;
    } while ((puVar3 != (undefined1 *)0x0) ||
            (puVar3 = puVar5, puVar15 = &uStack_220, func_0x00010bf52a60(),
            puVar3 != (undefined1 *)0x0));
  }
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_340;
  pcStack_228 = FUN_10635b6d0;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_230 = &puStack_120;
  func_0x00010bef9860(puVar15,param_2,&PTR____CFConstantStringClassReference_110e4be58);
  _objc_retainAutoreleasedReturnValue();
  lStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  plStack_330 = (long *)0x0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  lVar2 = *(long *)((long)puVar4 + 0x18);
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = auStack_2f8;
  lVar17 = lVar2;
  func_0x00010bf52a60();
  if (lVar17 != 0) {
    lVar16 = *plStack_330;
    do {
      lVar19 = 0;
      do {
        if (*plStack_330 != lVar16) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010be587e0(puVar4,param_2,*(undefined8 *)(lStack_338 + lVar19 * 8),puVar15);
        lVar19 = lVar19 + 1;
      } while (lVar17 != lVar19);
      puVar3 = auStack_2f8;
      lVar17 = lVar2;
      puVar10 = &uStack_340;
      func_0x00010bf52a60();
    } while (lVar17 != 0);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return;
  }
  ___stack_chk_fail();
  pcStack_348 = FUN_10635b800;
  lStack_3b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_350 = &ppuStack_230;
  _objc_retain(puVar10);
  _objc_retain(puVar3);
  puVar5 = *(undefined1 **)((long)puVar15 + 0x18);
  func_0x00010bf5ee40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e4be78;
  if (puVar10 != (undefined8 *)puVar5) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  _objc_retain(ppuVar1);
  _objc_release(puVar5);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar23 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  puVar5 = (undefined1 *)puVar10;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_480 = (undefined **)puVar5;
  func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110e4be98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar6,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar5);
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar5 = (undefined1 *)puVar10;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_480 = (undefined **)puVar5;
  func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110e4beb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar6,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar5);
  puVar20 = *(undefined1 **)((long)puVar15 + 0x38);
  puVar5 = (undefined1 *)puVar10;
  func_0x00010be36bc0(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(puVar20,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar5);
  if ((undefined8 *)puVar20 == puVar10) {
    func_0x00010befa120(puVar6,param_2,&PTR____CFConstantStringClassReference_110e4bed8);
  }
  uVar21 = *(undefined8 *)((long)puVar15 + 0x88);
  puVar5 = (undefined1 *)puVar10;
  func_0x00010be36bc0(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar21,param_2,puVar5);
  _objc_release(puVar5);
  if ((int)uVar21 != 0) {
    func_0x00010befa120(puVar6,param_2,&PTR____CFConstantStringClassReference_110e4bef8);
  }
  puVar5 = (undefined1 *)puVar10;
  func_0x00010c264f20();
  if ((int)puVar5 != 0) {
    func_0x00010befa120(puVar6,param_2,&PTR____CFConstantStringClassReference_110e4bf18);
  }
  puVar5 = (undefined1 *)puVar10;
  func_0x00010bfb6280();
  if ((int)puVar5 != 0) {
    func_0x00010befa120(puVar6,param_2,&PTR____CFConstantStringClassReference_110e4bf38);
  }
  puVar5 = (undefined1 *)puVar10;
  func_0x00010bf14f80();
  if ((int)puVar5 != 0) {
    func_0x00010befa120(puVar6,param_2,&PTR____CFConstantStringClassReference_110e4bf58);
  }
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar8 = puVar6;
  func_0x00010bf446e0(puVar6,param_2,&PTR____CFConstantStringClassReference_110dbf078);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_480 = ppuVar1;
  puStack_478 = puVar8;
  func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110e4bf78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3580(puVar3,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar8);
  puVar5 = puVar3;
  func_0x00010bef9860(puVar3,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lStack_468 = 0;
  uStack_470 = 0;
  uStack_458 = 0;
  plStack_460 = (long *)0x0;
  uStack_448 = 0;
  uStack_450 = 0;
  uStack_438 = 0;
  uStack_440 = 0;
  puVar20 = (undefined1 *)puVar10;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = &uStack_470;
  puVar12 = auStack_430;
  puVar14 = (undefined8 *)0x10;
  puVar9 = puVar20;
  func_0x00010bf52a60();
  if (puVar9 != (undefined1 *)0x0) {
    unaff_x27 = *plStack_460;
    do {
      unaff_x28 = (undefined1 *)0x0;
      do {
        if (*plStack_460 != unaff_x27) {
          _objc_enumerationMutation(puVar20);
        }
        in_x5 = puVar5;
        func_0x00010be58800(puVar15,param_2,*(undefined8 *)(lStack_468 + (long)unaff_x28 * 8),
                            puVar10,0);
        unaff_x28 = unaff_x28 + 1;
      } while (puVar9 != unaff_x28);
      puVar4 = &uStack_470;
      puVar12 = auStack_430;
      puVar14 = (undefined8 *)0x10;
      puVar9 = puVar20;
      func_0x00010bf52a60();
      ppuVar23 = (undefined **)0x0;
    } while (puVar9 != (undefined1 *)0x0);
  }
  _objc_release(puVar20);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(ppuVar1);
  _objc_release(puVar3);
  puVar9 = (undefined1 *)puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3b0) {
    return;
  }
  ___stack_chk_fail();
  pcStack_488 = FUN_10635bbb0;
  lStack_4f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = puVar12;
  puStack_4e0 = unaff_x28;
  lStack_4d8 = unaff_x27;
  ppuStack_4d0 = ppuVar23;
  puStack_4c8 = puVar20;
  puStack_4c0 = puVar5;
  puStack_4b8 = puVar6;
  ppuStack_4b0 = ppuVar1;
  puStack_4a8 = (undefined1 *)puVar15;
  puStack_4a0 = puVar3;
  puStack_498 = (undefined1 *)puVar10;
  pppuStack_490 = &pppuStack_350;
  _objc_retain(puVar4);
  _objc_retain(puVar12);
  _objc_retain(puVar14);
  _objc_retain(in_x5);
  puVar15 = puVar12;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == puVar15) {
    puVar10 = *(undefined8 **)(puVar9 + 0x18);
    func_0x00010bf5ee40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar15);
    if (puVar12 == puVar10) goto LAB_10635bc94;
  }
  else {
    _objc_release(puVar15);
  }
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
LAB_10635bc94:
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar15 = puVar4;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110e4be98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar6,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar15);
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar15 = puVar4;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110e4beb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar6,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar15);
  uVar21 = *(undefined8 *)(puVar9 + 0x58);
  puVar15 = puVar4;
  func_0x00010be36bc0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar21,param_2,puVar15);
  _objc_release(puVar15);
  if ((int)uVar21 != 0) {
    func_0x00010befa120(puVar6,param_2,&PTR____CFConstantStringClassReference_110e4bfb8);
  }
  puVar15 = puVar4;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar15 != puVar12) {
    puVar15 = puVar4;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110e4bfd8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar6,param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar15);
  }
  puVar15 = puVar4;
  func_0x00010c0f3aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar15 != puVar14) {
    puVar15 = puVar4;
    func_0x00010c0f3aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110e4bff8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar6,param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar15);
  }
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar8 = puVar6;
  func_0x00010bf446e0(puVar6,param_2,&PTR____CFConstantStringClassReference_110dbf078);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110e4c018);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3580(in_x5,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar8);
  puVar3 = in_x5;
  func_0x00010bef9860(in_x5,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(puVar9 + 0x50);
  puVar10 = puVar4;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar10;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  lVar17 = lVar2;
  func_0x00010bf529e0();
  if (lVar17 != 0) {
    uStack_688 = 0;
    uStack_690 = 0;
    uStack_678 = 0;
    uStack_680 = 0;
    lStack_6a8 = 0;
    uStack_6b0 = 0;
    uStack_698 = 0;
    plStack_6a0 = (long *)0x0;
    _objc_retain(lVar2);
    puVar15 = &uStack_6b0;
    puVar13 = auStack_570;
    lVar17 = lVar2;
    func_0x00010bf52a60();
    if (lVar17 != 0) {
      lVar16 = *plStack_6a0;
      do {
        lVar19 = 0;
        do {
          if (*plStack_6a0 != lVar16) {
            _objc_enumerationMutation(lVar2);
          }
          func_0x00010be58820(puVar9,param_2,*(undefined8 *)(lStack_6a8 + lVar19 * 8),puVar3);
          lVar19 = lVar19 + 1;
        } while (lVar17 != lVar19);
        puVar15 = &uStack_6b0;
        puVar13 = auStack_570;
        lVar17 = lVar2;
        func_0x00010bf52a60();
      } while (lVar17 != 0);
    }
    _objc_release(lVar2);
  }
  puVar10 = puVar4;
  func_0x00010c25e580();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bf529e0();
  _objc_release(puVar10);
  if (puVar11 != (undefined8 *)0x0) {
    puVar5 = puVar3;
    func_0x00010bef9860(puVar3,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    lStack_6e8 = 0;
    uStack_6f0 = 0;
    uStack_6d8 = 0;
    plStack_6e0 = (long *)0x0;
    uStack_6c8 = 0;
    uStack_6d0 = 0;
    uStack_6b8 = 0;
    uStack_6c0 = 0;
    puVar10 = puVar4;
    func_0x00010c25e580();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = &uStack_6f0;
    puVar13 = auStack_5f0;
    puStack_738 = puVar10;
    func_0x00010bf52a60();
    if (puStack_738 != (undefined8 *)0x0) {
      lVar17 = *plStack_6e0;
      do {
        puVar15 = (undefined8 *)0x0;
        do {
          if (*plStack_6e0 != lVar17) {
            _objc_enumerationMutation(puVar10);
          }
          lVar19 = *(long *)(lStack_6e8 + (long)puVar15 * 8);
          puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              &PTR____CFConstantStringClassReference_110e4c038);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b3580(puVar3,param_2,puVar7);
          _objc_release(puVar7);
          uStack_708 = 0;
          uStack_710 = 0;
          uStack_6f8 = 0;
          uStack_700 = 0;
          lStack_728 = 0;
          uStack_730 = 0;
          uStack_718 = 0;
          plStack_720 = (long *)0x0;
          _objc_retain(lVar19);
          lVar16 = lVar19;
          func_0x00010bf52a60(lVar19,param_2,&uStack_730,auStack_670,0x10);
          if (lVar16 != 0) {
            lVar22 = *plStack_720;
            do {
              lVar18 = 0;
              do {
                if (*plStack_720 != lVar22) {
                  _objc_enumerationMutation(lVar19);
                }
                func_0x00010be58800(puVar9,param_2,*(undefined8 *)(lStack_728 + lVar18 * 8),puVar12,
                                    puVar4,puVar5);
                lVar18 = lVar18 + 1;
              } while (lVar16 != lVar18);
              lVar16 = lVar19;
              func_0x00010bf52a60(lVar19,param_2,&uStack_730,auStack_670,0x10);
            } while (lVar16 != 0);
          }
          _objc_release(lVar19);
          puVar15 = (undefined8 *)((long)puVar15 + 1);
        } while (puVar15 != puStack_738);
        puVar15 = &uStack_6f0;
        puVar13 = auStack_5f0;
        puStack_738 = puVar10;
        func_0x00010bf52a60();
      } while (puStack_738 != (undefined8 *)0x0);
    }
    _objc_release(puVar10);
    _objc_release(puVar5);
  }
  _objc_release(lVar2);
  _objc_release(puVar3);
  _objc_release(puVar6);
  _objc_release(in_x5);
  _objc_release(puVar14);
  _objc_release(puVar12);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4f0) {
    ___stack_chk_fail();
    _objc_retain(puVar15);
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_retain(puVar13);
    _objc_opt_new(puVar6);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class();
    func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110e0cf18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar6,param_2,puVar7);
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar4 = puVar15;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar4;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110e4c058);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar6,param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar10);
    _objc_release(puVar4);
    puVar4 = puVar15;
    func_0x00010c0f3aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar4 != (undefined8 *)0x0) {
      puVar4 = puVar15;
      func_0x00010c0f3aa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110e4c078);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar6,param_2,puVar7);
      _objc_release(puVar7);
      _objc_release(puVar4);
    }
    puVar4 = puVar15;
    func_0x00010bf0cb60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar4 != (undefined8 *)0x0) {
      puVar4 = puVar15;
      func_0x00010bf0cb60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110e4c098);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar6,param_2,puVar7);
      _objc_release(puVar7);
      _objc_release(puVar4);
    }
    puVar4 = puVar15;
    func_0x00010c0d9820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar4 != (undefined8 *)0x0) {
      puVar4 = puVar15;
      func_0x00010c0d9820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110e4c0b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar6,param_2,puVar7);
      _objc_release(puVar7);
      _objc_release(puVar4);
    }
    puVar4 = puVar15;
    func_0x00010c1125e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar4 != (undefined8 *)0x0) {
      puVar4 = puVar15;
      func_0x00010c1125e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110e4c0d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar6,param_2,puVar7);
      _objc_release(puVar7);
      _objc_release(puVar4);
    }
    puVar4 = puVar15;
    func_0x00010c0d9ae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar4 != (undefined8 *)0x0) {
      puVar4 = puVar15;
      func_0x00010c0d9ae0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110e4c0f8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar6,param_2,puVar7);
      _objc_release(puVar7);
      _objc_release(puVar4);
    }
    puVar4 = puVar15;
    func_0x00010c1126e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar4 != (undefined8 *)0x0) {
      puVar4 = puVar15;
      func_0x00010c1126e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110e4c118);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar6,param_2,puVar7);
      _objc_release(puVar7);
      _objc_release(puVar4);
    }
    puVar4 = puVar15;
    func_0x00010c27bf80();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar4;
    func_0x00010bf529e0();
    _objc_release(puVar4);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar10 != (undefined8 *)0x0) {
      puVar4 = puVar15;
      func_0x00010c27bf80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110e4c138);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar6,param_2,puVar7);
      _objc_release(puVar7);
      _objc_release(puVar4);
    }
    puVar7 = puVar6;
    func_0x00010bf446e0(puVar6,param_2,&PTR____CFConstantStringClassReference_110dbf078);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3580(puVar13,param_2,puVar7);
    _objc_release(puVar13);
    _objc_release(puVar7);
    _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar15);
    return;
  }
  return;
}



/* Entry: 10635b58c; end: 10635b6cf; -[SCOperaPlaylistViewCoordinator _logGroup:] */

void FUN_10635b58c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 *param_6)

{
  undefined **ppuVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined1 *puVar20;
  undefined8 uVar21;
  long lVar22;
  undefined **ppuVar23;
  long unaff_x27;
  undefined1 *unaff_x28;
  undefined8 *puStack_628;
  undefined8 uStack_620;
  long lStack_618;
  long *plStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  long lStack_5d8;
  long *plStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  long lStack_598;
  long *plStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined1 auStack_560 [128];
  undefined8 auStack_4e0 [16];
  undefined8 auStack_460 [16];
  long lStack_3e0;
  undefined1 *puStack_3d0;
  long lStack_3c8;
  undefined **ppuStack_3c0;
  undefined1 *puStack_3b8;
  undefined1 *puStack_3b0;
  undefined *puStack_3a8;
  undefined **ppuStack_3a0;
  undefined1 *puStack_398;
  undefined1 *puStack_390;
  undefined1 *puStack_388;
  undefined1 ***pppuStack_380;
  code *pcStack_378;
  undefined **ppuStack_370;
  undefined *puStack_368;
  undefined8 uStack_360;
  long lStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 auStack_320 [16];
  long lStack_2a0;
  undefined1 **ppuStack_240;
  code *pcStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1e8 [128];
  long lStack_168;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar16 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar15 = param_3;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar15;
  func_0x00010bf51e00();
  _objc_release(lVar15);
  func_0x00010bf5ee40(*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  _objc_retain(lVar2);
  lVar15 = lVar2;
  func_0x00010bf52a60();
  if (lVar15 != 0) {
    lVar17 = *plStack_100;
    do {
      if (*plStack_100 != lVar17) {
        _objc_enumerationMutation(lVar2);
      }
      func_0x00010bf5f0a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      lVar15 = lVar15 + -1;
    } while ((lVar15 != 0) ||
            (lVar15 = lVar2, puVar16 = &uStack_110, func_0x00010bf52a60(), lVar15 != 0));
  }
  _objc_release(lVar2);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar8 = &uStack_230;
  pcStack_118 = FUN_10635b6d0;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x00010bef9860(puVar16,param_2,&PTR____CFConstantStringClassReference_110e4be58);
  _objc_retainAutoreleasedReturnValue();
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lVar2 = *(long *)(param_3 + 0x18);
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = auStack_1e8;
  lVar15 = lVar2;
  func_0x00010bf52a60();
  if (lVar15 != 0) {
    lVar17 = *plStack_220;
    do {
      lVar19 = 0;
      do {
        if (*plStack_220 != lVar17) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010be587e0(param_3,param_2,*(undefined8 *)(lStack_228 + lVar19 * 8),puVar16);
        lVar19 = lVar19 + 1;
      } while (lVar15 != lVar19);
      puVar9 = auStack_1e8;
      lVar15 = lVar2;
      puVar8 = &uStack_230;
      func_0x00010bf52a60();
    } while (lVar15 != 0);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  pcStack_238 = FUN_10635b800;
  lStack_2a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_240 = &puStack_120;
  _objc_retain(puVar8);
  _objc_retain(puVar9);
  puVar3 = *(undefined1 **)((long)puVar16 + 0x18);
  func_0x00010bf5ee40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e4be78;
  if (puVar8 != (undefined8 *)puVar3) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  _objc_retain(ppuVar1);
  _objc_release(puVar3);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar23 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  puVar3 = (undefined1 *)puVar8;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_370 = (undefined **)puVar3;
  func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e4be98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar3);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar3 = (undefined1 *)puVar8;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_370 = (undefined **)puVar3;
  func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e4beb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar3);
  puVar20 = *(undefined1 **)((long)puVar16 + 0x38);
  puVar3 = (undefined1 *)puVar8;
  func_0x00010be36bc0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(puVar20,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar3);
  if ((undefined8 *)puVar20 == puVar8) {
    func_0x00010befa120(puVar4,param_2,&PTR____CFConstantStringClassReference_110e4bed8);
  }
  uVar21 = *(undefined8 *)((long)puVar16 + 0x88);
  puVar3 = (undefined1 *)puVar8;
  func_0x00010be36bc0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar21,param_2,puVar3);
  _objc_release(puVar3);
  if ((int)uVar21 != 0) {
    func_0x00010befa120(puVar4,param_2,&PTR____CFConstantStringClassReference_110e4bef8);
  }
  puVar3 = (undefined1 *)puVar8;
  func_0x00010c264f20();
  if ((int)puVar3 != 0) {
    func_0x00010befa120(puVar4,param_2,&PTR____CFConstantStringClassReference_110e4bf18);
  }
  puVar3 = (undefined1 *)puVar8;
  func_0x00010bfb6280();
  if ((int)puVar3 != 0) {
    func_0x00010befa120(puVar4,param_2,&PTR____CFConstantStringClassReference_110e4bf38);
  }
  puVar3 = (undefined1 *)puVar8;
  func_0x00010bf14f80();
  if ((int)puVar3 != 0) {
    func_0x00010befa120(puVar4,param_2,&PTR____CFConstantStringClassReference_110e4bf58);
  }
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar6 = puVar4;
  func_0x00010bf446e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110dbf078);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_370 = ppuVar1;
  puStack_368 = puVar6;
  func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e4bf78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3580(puVar9,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar6);
  puVar3 = puVar9;
  func_0x00010bef9860(puVar9,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lStack_358 = 0;
  uStack_360 = 0;
  uStack_348 = 0;
  plStack_350 = (long *)0x0;
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  puVar20 = (undefined1 *)puVar8;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = &uStack_360;
  puVar12 = auStack_320;
  puVar14 = (undefined8 *)0x10;
  puVar7 = puVar20;
  func_0x00010bf52a60();
  if (puVar7 != (undefined1 *)0x0) {
    unaff_x27 = *plStack_350;
    do {
      unaff_x28 = (undefined1 *)0x0;
      do {
        if (*plStack_350 != unaff_x27) {
          _objc_enumerationMutation(puVar20);
        }
        param_6 = puVar3;
        func_0x00010be58800(puVar16,param_2,*(undefined8 *)(lStack_358 + (long)unaff_x28 * 8),puVar8
                            ,0);
        unaff_x28 = unaff_x28 + 1;
      } while (puVar7 != unaff_x28);
      puVar11 = &uStack_360;
      puVar12 = auStack_320;
      puVar14 = (undefined8 *)0x10;
      puVar7 = puVar20;
      func_0x00010bf52a60();
      ppuVar23 = (undefined **)0x0;
    } while (puVar7 != (undefined1 *)0x0);
  }
  _objc_release(puVar20);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(ppuVar1);
  _objc_release(puVar9);
  puVar7 = (undefined1 *)puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a0) {
    return;
  }
  ___stack_chk_fail();
  pcStack_378 = FUN_10635bbb0;
  lStack_3e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = puVar12;
  puStack_3d0 = unaff_x28;
  lStack_3c8 = unaff_x27;
  ppuStack_3c0 = ppuVar23;
  puStack_3b8 = puVar20;
  puStack_3b0 = puVar3;
  puStack_3a8 = puVar4;
  ppuStack_3a0 = ppuVar1;
  puStack_398 = (undefined1 *)puVar16;
  puStack_390 = puVar9;
  puStack_388 = (undefined1 *)puVar8;
  pppuStack_380 = &ppuStack_240;
  _objc_retain(puVar11);
  _objc_retain(puVar12);
  _objc_retain(puVar14);
  _objc_retain(param_6);
  puVar16 = puVar12;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar11 == puVar16) {
    puVar8 = *(undefined8 **)(puVar7 + 0x18);
    func_0x00010bf5ee40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar16);
    if (puVar12 == puVar8) goto LAB_10635bc94;
  }
  else {
    _objc_release(puVar16);
  }
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
LAB_10635bc94:
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar16 = puVar11;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e4be98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar16);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar16 = puVar11;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e4beb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar16);
  uVar21 = *(undefined8 *)(puVar7 + 0x58);
  puVar16 = puVar11;
  func_0x00010be36bc0(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar21,param_2,puVar16);
  _objc_release(puVar16);
  if ((int)uVar21 != 0) {
    func_0x00010befa120(puVar4,param_2,&PTR____CFConstantStringClassReference_110e4bfb8);
  }
  puVar16 = puVar11;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar16 != puVar12) {
    puVar16 = puVar11;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e4bfd8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar4,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar16);
  }
  puVar16 = puVar11;
  func_0x00010c0f3aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar16 != puVar14) {
    puVar16 = puVar11;
    func_0x00010c0f3aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e4bff8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar4,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar16);
  }
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar6 = puVar4;
  func_0x00010bf446e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110dbf078);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e4c018);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3580(param_6,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar6);
  puVar9 = param_6;
  func_0x00010bef9860(param_6,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(puVar7 + 0x50);
  puVar8 = puVar11;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar8;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  lVar15 = lVar2;
  func_0x00010bf529e0();
  if (lVar15 != 0) {
    uStack_578 = 0;
    uStack_580 = 0;
    uStack_568 = 0;
    uStack_570 = 0;
    lStack_598 = 0;
    uStack_5a0 = 0;
    uStack_588 = 0;
    plStack_590 = (long *)0x0;
    _objc_retain(lVar2);
    puVar16 = &uStack_5a0;
    puVar13 = auStack_460;
    lVar15 = lVar2;
    func_0x00010bf52a60();
    if (lVar15 != 0) {
      lVar17 = *plStack_590;
      do {
        lVar19 = 0;
        do {
          if (*plStack_590 != lVar17) {
            _objc_enumerationMutation(lVar2);
          }
          func_0x00010be58820(puVar7,param_2,*(undefined8 *)(lStack_598 + lVar19 * 8),puVar9);
          lVar19 = lVar19 + 1;
        } while (lVar15 != lVar19);
        puVar16 = &uStack_5a0;
        puVar13 = auStack_460;
        lVar15 = lVar2;
        func_0x00010bf52a60();
      } while (lVar15 != 0);
    }
    _objc_release(lVar2);
  }
  puVar8 = puVar11;
  func_0x00010c25e580();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010bf529e0();
  _objc_release(puVar8);
  if (puVar10 != (undefined8 *)0x0) {
    puVar3 = puVar9;
    func_0x00010bef9860(puVar9,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    lStack_5d8 = 0;
    uStack_5e0 = 0;
    uStack_5c8 = 0;
    plStack_5d0 = (long *)0x0;
    uStack_5b8 = 0;
    uStack_5c0 = 0;
    uStack_5a8 = 0;
    uStack_5b0 = 0;
    puVar8 = puVar11;
    func_0x00010c25e580();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = &uStack_5e0;
    puVar13 = auStack_4e0;
    puStack_628 = puVar8;
    func_0x00010bf52a60();
    if (puStack_628 != (undefined8 *)0x0) {
      lVar15 = *plStack_5d0;
      do {
        puVar16 = (undefined8 *)0x0;
        do {
          if (*plStack_5d0 != lVar15) {
            _objc_enumerationMutation(puVar8);
          }
          lVar19 = *(long *)(lStack_5d8 + (long)puVar16 * 8);
          puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              &PTR____CFConstantStringClassReference_110e4c038);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b3580(puVar9,param_2,puVar5);
          _objc_release(puVar5);
          uStack_5f8 = 0;
          uStack_600 = 0;
          uStack_5e8 = 0;
          uStack_5f0 = 0;
          lStack_618 = 0;
          uStack_620 = 0;
          uStack_608 = 0;
          plStack_610 = (long *)0x0;
          _objc_retain(lVar19);
          lVar17 = lVar19;
          func_0x00010bf52a60(lVar19,param_2,&uStack_620,auStack_560,0x10);
          if (lVar17 != 0) {
            lVar22 = *plStack_610;
            do {
              lVar18 = 0;
              do {
                if (*plStack_610 != lVar22) {
                  _objc_enumerationMutation(lVar19);
                }
                func_0x00010be58800(puVar7,param_2,*(undefined8 *)(lStack_618 + lVar18 * 8),puVar12,
                                    puVar11,puVar3);
                lVar18 = lVar18 + 1;
              } while (lVar17 != lVar18);
              lVar17 = lVar19;
              func_0x00010bf52a60(lVar19,param_2,&uStack_620,auStack_560,0x10);
            } while (lVar17 != 0);
          }
          _objc_release(lVar19);
          puVar16 = (undefined8 *)((long)puVar16 + 1);
        } while (puVar16 != puStack_628);
        puVar16 = &uStack_5e0;
        puVar13 = auStack_4e0;
        puStack_628 = puVar8;
        func_0x00010bf52a60();
      } while (puStack_628 != (undefined8 *)0x0);
    }
    _objc_release(puVar8);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  _objc_release(puVar9);
  _objc_release(puVar4);
  _objc_release(param_6);
  _objc_release(puVar14);
  _objc_release(puVar12);
  _objc_release(puVar11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3e0) {
    ___stack_chk_fail();
    _objc_retain(puVar16);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_retain(puVar13);
    _objc_opt_new(puVar4);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class();
    func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e0cf18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar4,param_2,puVar5);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar8 = puVar16;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar8;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e4c058);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar4,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar11);
    _objc_release(puVar8);
    puVar8 = puVar16;
    func_0x00010c0f3aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar8 != (undefined8 *)0x0) {
      puVar8 = puVar16;
      func_0x00010c0f3aa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e4c078);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar4,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar8);
    }
    puVar8 = puVar16;
    func_0x00010bf0cb60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar8 != (undefined8 *)0x0) {
      puVar8 = puVar16;
      func_0x00010bf0cb60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e4c098);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar4,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar8);
    }
    puVar8 = puVar16;
    func_0x00010c0d9820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar8 != (undefined8 *)0x0) {
      puVar8 = puVar16;
      func_0x00010c0d9820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e4c0b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar4,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar8);
    }
    puVar8 = puVar16;
    func_0x00010c1125e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar8 != (undefined8 *)0x0) {
      puVar8 = puVar16;
      func_0x00010c1125e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e4c0d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar4,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar8);
    }
    puVar8 = puVar16;
    func_0x00010c0d9ae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar8 != (undefined8 *)0x0) {
      puVar8 = puVar16;
      func_0x00010c0d9ae0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e4c0f8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar4,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar8);
    }
    puVar8 = puVar16;
    func_0x00010c1126e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar8 != (undefined8 *)0x0) {
      puVar8 = puVar16;
      func_0x00010c1126e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e4c118);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar4,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar8);
    }
    puVar8 = puVar16;
    func_0x00010c27bf80();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar8;
    func_0x00010bf529e0();
    _objc_release(puVar8);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar11 != (undefined8 *)0x0) {
      puVar8 = puVar16;
      func_0x00010c27bf80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e4c138);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar4,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar8);
    }
    puVar5 = puVar4;
    func_0x00010bf446e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110dbf078);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3580(puVar13,param_2,puVar5);
    _objc_release(puVar13);
    _objc_release(puVar5);
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar16);
    return;
  }
  return;
}



/* Entry: 10635b6d0; end: 10635b7ff; -[SCOperaPlaylistViewCoordinator logShakeToReportState:] */

void FUN_10635b6d0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 *param_6)

{
  undefined **ppuVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined1 *puVar20;
  undefined8 uVar21;
  long lVar22;
  undefined **ppuVar23;
  long unaff_x27;
  undefined1 *unaff_x28;
  undefined8 *puStack_518;
  undefined8 uStack_510;
  long lStack_508;
  long *plStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
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
  undefined1 auStack_450 [128];
  undefined8 auStack_3d0 [16];
  undefined8 auStack_350 [16];
  long lStack_2d0;
  undefined1 *puStack_2c0;
  long lStack_2b8;
  undefined **ppuStack_2b0;
  undefined1 *puStack_2a8;
  undefined1 *puStack_2a0;
  undefined *puStack_298;
  undefined **ppuStack_290;
  long lStack_288;
  undefined1 *puStack_280;
  undefined1 *puStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined **ppuStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 auStack_210 [16];
  long lStack_190;
  undefined1 *puStack_130;
  code *pcStack_128;
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
  
  puVar16 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bef9860(param_3,param_2,&PTR____CFConstantStringClassReference_110e4be58);
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = auStack_d8;
  lVar15 = lVar2;
  func_0x00010bf52a60();
  if (lVar15 != 0) {
    lVar18 = *plStack_110;
    do {
      lVar19 = 0;
      do {
        if (*plStack_110 != lVar18) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010be587e0(param_1,param_2,*(undefined8 *)(lStack_118 + lVar19 * 8),param_3);
        lVar19 = lVar19 + 1;
      } while (lVar15 != lVar19);
      puVar9 = auStack_d8;
      lVar15 = lVar2;
      puVar16 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar15 != 0);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_10635b800;
  lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar16);
  _objc_retain(puVar9);
  puVar3 = *(undefined1 **)(param_3 + 0x18);
  func_0x00010bf5ee40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e4be78;
  if (puVar16 != (undefined8 *)puVar3) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  _objc_retain(ppuVar1);
  _objc_release(puVar3);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar23 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  puVar3 = (undefined1 *)puVar16;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_260 = (undefined **)puVar3;
  func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e4be98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar3);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar3 = (undefined1 *)puVar16;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_260 = (undefined **)puVar3;
  func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e4beb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar3);
  puVar20 = *(undefined1 **)(param_3 + 0x38);
  puVar3 = (undefined1 *)puVar16;
  func_0x00010be36bc0(puVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(puVar20,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar3);
  if ((undefined8 *)puVar20 == puVar16) {
    func_0x00010befa120(puVar4,param_2,&PTR____CFConstantStringClassReference_110e4bed8);
  }
  uVar21 = *(undefined8 *)(param_3 + 0x88);
  puVar3 = (undefined1 *)puVar16;
  func_0x00010be36bc0(puVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar21,param_2,puVar3);
  _objc_release(puVar3);
  if ((int)uVar21 != 0) {
    func_0x00010befa120(puVar4,param_2,&PTR____CFConstantStringClassReference_110e4bef8);
  }
  puVar3 = (undefined1 *)puVar16;
  func_0x00010c264f20();
  if ((int)puVar3 != 0) {
    func_0x00010befa120(puVar4,param_2,&PTR____CFConstantStringClassReference_110e4bf18);
  }
  puVar3 = (undefined1 *)puVar16;
  func_0x00010bfb6280();
  if ((int)puVar3 != 0) {
    func_0x00010befa120(puVar4,param_2,&PTR____CFConstantStringClassReference_110e4bf38);
  }
  puVar3 = (undefined1 *)puVar16;
  func_0x00010bf14f80();
  if ((int)puVar3 != 0) {
    func_0x00010befa120(puVar4,param_2,&PTR____CFConstantStringClassReference_110e4bf58);
  }
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar6 = puVar4;
  func_0x00010bf446e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110dbf078);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_260 = ppuVar1;
  puStack_258 = puVar6;
  func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e4bf78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3580(puVar9,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar6);
  puVar3 = puVar9;
  func_0x00010bef9860(puVar9,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  puVar20 = (undefined1 *)puVar16;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = &uStack_250;
  puVar12 = auStack_210;
  puVar14 = (undefined8 *)0x10;
  puVar7 = puVar20;
  func_0x00010bf52a60();
  if (puVar7 != (undefined1 *)0x0) {
    unaff_x27 = *plStack_240;
    do {
      unaff_x28 = (undefined1 *)0x0;
      do {
        if (*plStack_240 != unaff_x27) {
          _objc_enumerationMutation(puVar20);
        }
        param_6 = puVar3;
        func_0x00010be58800(param_3,param_2,*(undefined8 *)(lStack_248 + (long)unaff_x28 * 8),
                            puVar16,0);
        unaff_x28 = unaff_x28 + 1;
      } while (puVar7 != unaff_x28);
      puVar11 = &uStack_250;
      puVar12 = auStack_210;
      puVar14 = (undefined8 *)0x10;
      puVar7 = puVar20;
      func_0x00010bf52a60();
      ppuVar23 = (undefined **)0x0;
    } while (puVar7 != (undefined1 *)0x0);
  }
  _objc_release(puVar20);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(ppuVar1);
  _objc_release(puVar9);
  puVar7 = (undefined1 *)puVar16;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_190) {
    return;
  }
  ___stack_chk_fail();
  pcStack_268 = FUN_10635bbb0;
  lStack_2d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = puVar12;
  puStack_2c0 = unaff_x28;
  lStack_2b8 = unaff_x27;
  ppuStack_2b0 = ppuVar23;
  puStack_2a8 = puVar20;
  puStack_2a0 = puVar3;
  puStack_298 = puVar4;
  ppuStack_290 = ppuVar1;
  lStack_288 = param_3;
  puStack_280 = puVar9;
  puStack_278 = (undefined1 *)puVar16;
  ppuStack_270 = &puStack_130;
  _objc_retain(puVar11);
  _objc_retain(puVar12);
  _objc_retain(puVar14);
  _objc_retain(param_6);
  puVar16 = puVar12;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar11 == puVar16) {
    puVar8 = *(undefined8 **)(puVar7 + 0x18);
    func_0x00010bf5ee40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar16);
    if (puVar12 == puVar8) goto LAB_10635bc94;
  }
  else {
    _objc_release(puVar16);
  }
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
LAB_10635bc94:
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar16 = puVar11;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e4be98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar16);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar16 = puVar11;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e4beb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar16);
  uVar21 = *(undefined8 *)(puVar7 + 0x58);
  puVar16 = puVar11;
  func_0x00010be36bc0(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar21,param_2,puVar16);
  _objc_release(puVar16);
  if ((int)uVar21 != 0) {
    func_0x00010befa120(puVar4,param_2,&PTR____CFConstantStringClassReference_110e4bfb8);
  }
  puVar16 = puVar11;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar16 != puVar12) {
    puVar16 = puVar11;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e4bfd8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar4,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar16);
  }
  puVar16 = puVar11;
  func_0x00010c0f3aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar16 != puVar14) {
    puVar16 = puVar11;
    func_0x00010c0f3aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e4bff8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar4,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar16);
  }
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar6 = puVar4;
  func_0x00010bf446e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110dbf078);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e4c018);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3580(param_6,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar6);
  puVar9 = param_6;
  func_0x00010bef9860(param_6,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(puVar7 + 0x50);
  puVar8 = puVar11;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar8;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  lVar15 = lVar2;
  func_0x00010bf529e0();
  if (lVar15 != 0) {
    uStack_468 = 0;
    uStack_470 = 0;
    uStack_458 = 0;
    uStack_460 = 0;
    lStack_488 = 0;
    uStack_490 = 0;
    uStack_478 = 0;
    plStack_480 = (long *)0x0;
    _objc_retain(lVar2);
    puVar16 = &uStack_490;
    puVar13 = auStack_350;
    lVar15 = lVar2;
    func_0x00010bf52a60();
    if (lVar15 != 0) {
      lVar18 = *plStack_480;
      do {
        lVar19 = 0;
        do {
          if (*plStack_480 != lVar18) {
            _objc_enumerationMutation(lVar2);
          }
          func_0x00010be58820(puVar7,param_2,*(undefined8 *)(lStack_488 + lVar19 * 8),puVar9);
          lVar19 = lVar19 + 1;
        } while (lVar15 != lVar19);
        puVar16 = &uStack_490;
        puVar13 = auStack_350;
        lVar15 = lVar2;
        func_0x00010bf52a60();
      } while (lVar15 != 0);
    }
    _objc_release(lVar2);
  }
  puVar8 = puVar11;
  func_0x00010c25e580();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010bf529e0();
  _objc_release(puVar8);
  if (puVar10 != (undefined8 *)0x0) {
    puVar3 = puVar9;
    func_0x00010bef9860(puVar9,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    lStack_4c8 = 0;
    uStack_4d0 = 0;
    uStack_4b8 = 0;
    plStack_4c0 = (long *)0x0;
    uStack_4a8 = 0;
    uStack_4b0 = 0;
    uStack_498 = 0;
    uStack_4a0 = 0;
    puVar8 = puVar11;
    func_0x00010c25e580();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = &uStack_4d0;
    puVar13 = auStack_3d0;
    puStack_518 = puVar8;
    func_0x00010bf52a60();
    if (puStack_518 != (undefined8 *)0x0) {
      lVar15 = *plStack_4c0;
      do {
        puVar16 = (undefined8 *)0x0;
        do {
          if (*plStack_4c0 != lVar15) {
            _objc_enumerationMutation(puVar8);
          }
          lVar19 = *(long *)(lStack_4c8 + (long)puVar16 * 8);
          puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              &PTR____CFConstantStringClassReference_110e4c038);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b3580(puVar9,param_2,puVar5);
          _objc_release(puVar5);
          uStack_4e8 = 0;
          uStack_4f0 = 0;
          uStack_4d8 = 0;
          uStack_4e0 = 0;
          lStack_508 = 0;
          uStack_510 = 0;
          uStack_4f8 = 0;
          plStack_500 = (long *)0x0;
          _objc_retain(lVar19);
          lVar18 = lVar19;
          func_0x00010bf52a60(lVar19,param_2,&uStack_510,auStack_450,0x10);
          if (lVar18 != 0) {
            lVar22 = *plStack_500;
            do {
              lVar17 = 0;
              do {
                if (*plStack_500 != lVar22) {
                  _objc_enumerationMutation(lVar19);
                }
                func_0x00010be58800(puVar7,param_2,*(undefined8 *)(lStack_508 + lVar17 * 8),puVar12,
                                    puVar11,puVar3);
                lVar17 = lVar17 + 1;
              } while (lVar18 != lVar17);
              lVar18 = lVar19;
              func_0x00010bf52a60(lVar19,param_2,&uStack_510,auStack_450,0x10);
            } while (lVar18 != 0);
          }
          _objc_release(lVar19);
          puVar16 = (undefined8 *)((long)puVar16 + 1);
        } while (puVar16 != puStack_518);
        puVar16 = &uStack_4d0;
        puVar13 = auStack_3d0;
        puStack_518 = puVar8;
        func_0x00010bf52a60();
      } while (puStack_518 != (undefined8 *)0x0);
    }
    _objc_release(puVar8);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  _objc_release(puVar9);
  _objc_release(puVar4);
  _objc_release(param_6);
  _objc_release(puVar14);
  _objc_release(puVar12);
  _objc_release(puVar11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2d0) {
    ___stack_chk_fail();
    _objc_retain(puVar16);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_retain(puVar13);
    _objc_opt_new(puVar4);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class();
    func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e0cf18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar4,param_2,puVar5);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar11 = puVar16;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e4c058);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar4,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar12);
    _objc_release(puVar11);
    puVar11 = puVar16;
    func_0x00010c0f3aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar11 != (undefined8 *)0x0) {
      puVar11 = puVar16;
      func_0x00010c0f3aa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e4c078);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar4,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar11);
    }
    puVar11 = puVar16;
    func_0x00010bf0cb60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar11 != (undefined8 *)0x0) {
      puVar11 = puVar16;
      func_0x00010bf0cb60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e4c098);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar4,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar11);
    }
    puVar11 = puVar16;
    func_0x00010c0d9820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar11 != (undefined8 *)0x0) {
      puVar11 = puVar16;
      func_0x00010c0d9820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e4c0b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar4,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar11);
    }
    puVar11 = puVar16;
    func_0x00010c1125e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar11 != (undefined8 *)0x0) {
      puVar11 = puVar16;
      func_0x00010c1125e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e4c0d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar4,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar11);
    }
    puVar11 = puVar16;
    func_0x00010c0d9ae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar11 != (undefined8 *)0x0) {
      puVar11 = puVar16;
      func_0x00010c0d9ae0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e4c0f8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar4,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar11);
    }
    puVar11 = puVar16;
    func_0x00010c1126e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar11 != (undefined8 *)0x0) {
      puVar11 = puVar16;
      func_0x00010c1126e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e4c118);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar4,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar11);
    }
    puVar11 = puVar16;
    func_0x00010c27bf80();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010bf529e0();
    _objc_release(puVar11);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar12 != (undefined8 *)0x0) {
      puVar11 = puVar16;
      func_0x00010c27bf80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e4c138);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar4,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar11);
    }
    puVar5 = puVar4;
    func_0x00010bf446e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110dbf078);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3580(puVar13,param_2,puVar5);
    _objc_release(puVar13);
    _objc_release(puVar5);
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar16);
    return;
  }
  return;
}



/* Entry: 10635b800; end: 10635bbaf; -[SCOperaPlaylistViewCoordinator _logShakeToReportStateGroup:logger:] */

void FUN_10635b800(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined **ppuVar21;
  long unaff_x27;
  long unaff_x28;
  undefined8 *puStack_3f8;
  undefined8 uStack_3f0;
  long lStack_3e8;
  long *plStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  long lStack_3a8;
  long *plStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined1 auStack_330 [128];
  undefined8 auStack_2b0 [16];
  undefined8 auStack_230 [16];
  long lStack_1b0;
  long lStack_1a0;
  long lStack_198;
  undefined **ppuStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined **ppuStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined **ppuStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 auStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010bf5ee40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e4be78;
  if (param_3 != lVar2) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  _objc_retain(ppuVar1);
  _objc_release(lVar2);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar21 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  lVar2 = param_3;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_140 = (undefined **)lVar2;
  func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110e4be98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(lVar2);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar2 = param_3;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_140 = (undefined **)lVar2;
  func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110e4beb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(lVar2);
  lVar17 = *(long *)(param_1 + 0x38);
  lVar2 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar17,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar17 == param_3) {
    func_0x00010befa120(puVar3,param_2,&PTR____CFConstantStringClassReference_110e4bed8);
  }
  uVar18 = *(undefined8 *)(param_1 + 0x88);
  lVar2 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar18,param_2,lVar2);
  _objc_release(lVar2);
  if ((int)uVar18 != 0) {
    func_0x00010befa120(puVar3,param_2,&PTR____CFConstantStringClassReference_110e4bef8);
  }
  lVar2 = param_3;
  func_0x00010c264f20();
  if ((int)lVar2 != 0) {
    func_0x00010befa120(puVar3,param_2,&PTR____CFConstantStringClassReference_110e4bf18);
  }
  lVar2 = param_3;
  func_0x00010bfb6280();
  if ((int)lVar2 != 0) {
    func_0x00010befa120(puVar3,param_2,&PTR____CFConstantStringClassReference_110e4bf38);
  }
  lVar2 = param_3;
  func_0x00010bf14f80();
  if ((int)lVar2 != 0) {
    func_0x00010befa120(puVar3,param_2,&PTR____CFConstantStringClassReference_110e4bf58);
  }
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar5 = puVar3;
  func_0x00010bf446e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110dbf078);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_140 = ppuVar1;
  puStack_138 = puVar5;
  func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110e4bf78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3580(param_4,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar5);
  uVar18 = param_4;
  func_0x00010bef9860(param_4,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = param_3;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = &uStack_130;
  puVar11 = auStack_f0;
  puVar12 = (undefined8 *)0x10;
  lVar17 = lVar2;
  func_0x00010bf52a60();
  if (lVar17 != 0) {
    unaff_x27 = *plStack_120;
    do {
      unaff_x28 = 0;
      do {
        if (*plStack_120 != unaff_x27) {
          _objc_enumerationMutation(lVar2);
        }
        param_6 = uVar18;
        func_0x00010be58800(param_1,param_2,*(undefined8 *)(lStack_128 + unaff_x28 * 8),param_3,0);
        unaff_x28 = unaff_x28 + 1;
      } while (lVar17 != unaff_x28);
      puVar10 = &uStack_130;
      puVar11 = auStack_f0;
      puVar12 = (undefined8 *)0x10;
      lVar17 = lVar2;
      func_0x00010bf52a60();
      ppuVar21 = (undefined **)0x0;
    } while (lVar17 != 0);
  }
  _objc_release(lVar2);
  _objc_release(uVar18);
  _objc_release(puVar3);
  _objc_release(ppuVar1);
  _objc_release(param_4);
  lVar17 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_10635bbb0;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = puVar11;
  lStack_1a0 = unaff_x28;
  lStack_198 = unaff_x27;
  ppuStack_190 = ppuVar21;
  lStack_188 = lVar2;
  uStack_180 = uVar18;
  puStack_178 = puVar3;
  ppuStack_170 = ppuVar1;
  lStack_168 = param_1;
  uStack_160 = param_4;
  lStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar10);
  _objc_retain(puVar11);
  _objc_retain(puVar12);
  _objc_retain(param_6);
  puVar6 = puVar11;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar10 == puVar6) {
    puVar7 = *(undefined8 **)(lVar17 + 0x18);
    func_0x00010bf5ee40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar6);
    if (puVar11 == puVar7) goto LAB_10635bc94;
  }
  else {
    _objc_release(puVar6);
  }
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
LAB_10635bc94:
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar6 = puVar10;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110e4be98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar6);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar6 = puVar10;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110e4beb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar6);
  uVar18 = *(undefined8 *)(lVar17 + 0x58);
  puVar6 = puVar10;
  func_0x00010be36bc0(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar18,param_2,puVar6);
  _objc_release(puVar6);
  if ((int)uVar18 != 0) {
    func_0x00010befa120(puVar3,param_2,&PTR____CFConstantStringClassReference_110e4bfb8);
  }
  puVar6 = puVar10;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar6 != puVar11) {
    puVar6 = puVar10;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110e4bfd8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar6);
  }
  puVar6 = puVar10;
  func_0x00010c0f3aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar6 != puVar12) {
    puVar6 = puVar10;
    func_0x00010c0f3aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110e4bff8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar6);
  }
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar5 = puVar3;
  func_0x00010bf446e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110dbf078);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110e4c018);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3580(param_6,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar5);
  uVar18 = param_6;
  func_0x00010bef9860(param_6,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = *(long *)(lVar17 + 0x50);
  puVar7 = puVar10;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  lVar2 = lVar13;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    uStack_348 = 0;
    uStack_350 = 0;
    uStack_338 = 0;
    uStack_340 = 0;
    lStack_368 = 0;
    uStack_370 = 0;
    uStack_358 = 0;
    plStack_360 = (long *)0x0;
    _objc_retain(lVar13);
    puVar6 = &uStack_370;
    puVar14 = auStack_230;
    lVar2 = lVar13;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar15 = *plStack_360;
      do {
        lVar19 = 0;
        do {
          if (*plStack_360 != lVar15) {
            _objc_enumerationMutation(lVar13);
          }
          func_0x00010be58820(lVar17,param_2,*(undefined8 *)(lStack_368 + lVar19 * 8),uVar18);
          lVar19 = lVar19 + 1;
        } while (lVar2 != lVar19);
        puVar6 = &uStack_370;
        puVar14 = auStack_230;
        lVar2 = lVar13;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(lVar13);
  }
  puVar7 = puVar10;
  func_0x00010c25e580();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf529e0();
  _objc_release(puVar7);
  if (puVar8 != (undefined8 *)0x0) {
    uVar9 = uVar18;
    func_0x00010bef9860(uVar18,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    lStack_3a8 = 0;
    uStack_3b0 = 0;
    uStack_398 = 0;
    plStack_3a0 = (long *)0x0;
    uStack_388 = 0;
    uStack_390 = 0;
    uStack_378 = 0;
    uStack_380 = 0;
    puVar7 = puVar10;
    func_0x00010c25e580();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = &uStack_3b0;
    puVar14 = auStack_2b0;
    puStack_3f8 = puVar7;
    func_0x00010bf52a60();
    if (puStack_3f8 != (undefined8 *)0x0) {
      lVar2 = *plStack_3a0;
      do {
        puVar14 = (undefined8 *)0x0;
        do {
          if (*plStack_3a0 != lVar2) {
            _objc_enumerationMutation(puVar7);
          }
          lVar19 = *(long *)(lStack_3a8 + (long)puVar14 * 8);
          puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              &PTR____CFConstantStringClassReference_110e4c038);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b3580(uVar18,param_2,puVar4);
          _objc_release(puVar4);
          uStack_3c8 = 0;
          uStack_3d0 = 0;
          uStack_3b8 = 0;
          uStack_3c0 = 0;
          lStack_3e8 = 0;
          uStack_3f0 = 0;
          uStack_3d8 = 0;
          plStack_3e0 = (long *)0x0;
          _objc_retain(lVar19);
          lVar15 = lVar19;
          func_0x00010bf52a60(lVar19,param_2,&uStack_3f0,auStack_330,0x10);
          if (lVar15 != 0) {
            lVar20 = *plStack_3e0;
            do {
              lVar16 = 0;
              do {
                if (*plStack_3e0 != lVar20) {
                  _objc_enumerationMutation(lVar19);
                }
                func_0x00010be58800(lVar17,param_2,*(undefined8 *)(lStack_3e8 + lVar16 * 8),puVar11,
                                    puVar10,uVar9);
                lVar16 = lVar16 + 1;
              } while (lVar15 != lVar16);
              lVar15 = lVar19;
              func_0x00010bf52a60(lVar19,param_2,&uStack_3f0,auStack_330,0x10);
            } while (lVar15 != 0);
          }
          _objc_release(lVar19);
          puVar14 = (undefined8 *)((long)puVar14 + 1);
        } while (puVar14 != puStack_3f8);
        puVar6 = &uStack_3b0;
        puVar14 = auStack_2b0;
        puStack_3f8 = puVar7;
        func_0x00010bf52a60();
      } while (puStack_3f8 != (undefined8 *)0x0);
    }
    _objc_release(puVar7);
    _objc_release(uVar9);
  }
  _objc_release(lVar13);
  _objc_release(uVar18);
  _objc_release(puVar3);
  _objc_release(param_6);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b0) {
    ___stack_chk_fail();
    _objc_retain(puVar6);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_retain(puVar14);
    _objc_opt_new(puVar3);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class();
    func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110e0cf18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3,param_2,puVar4);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar10 = puVar6;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110e4c058);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar11);
    _objc_release(puVar10);
    puVar10 = puVar6;
    func_0x00010c0f3aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar10 != (undefined8 *)0x0) {
      puVar10 = puVar6;
      func_0x00010c0f3aa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110e4c078);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar10);
    }
    puVar10 = puVar6;
    func_0x00010bf0cb60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar10 != (undefined8 *)0x0) {
      puVar10 = puVar6;
      func_0x00010bf0cb60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110e4c098);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar10);
    }
    puVar10 = puVar6;
    func_0x00010c0d9820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar10 != (undefined8 *)0x0) {
      puVar10 = puVar6;
      func_0x00010c0d9820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110e4c0b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar10);
    }
    puVar10 = puVar6;
    func_0x00010c1125e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar10 != (undefined8 *)0x0) {
      puVar10 = puVar6;
      func_0x00010c1125e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110e4c0d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar10);
    }
    puVar10 = puVar6;
    func_0x00010c0d9ae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar10 != (undefined8 *)0x0) {
      puVar10 = puVar6;
      func_0x00010c0d9ae0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110e4c0f8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar10);
    }
    puVar10 = puVar6;
    func_0x00010c1126e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar10 != (undefined8 *)0x0) {
      puVar10 = puVar6;
      func_0x00010c1126e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110e4c118);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar10);
    }
    puVar10 = puVar6;
    func_0x00010c27bf80();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bf529e0();
    _objc_release(puVar10);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar11 != (undefined8 *)0x0) {
      puVar10 = puVar6;
      func_0x00010c27bf80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110e4c138);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar10);
    }
    puVar4 = puVar3;
    func_0x00010bf446e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110dbf078);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3580(puVar14,param_2,puVar4);
    _objc_release(puVar14);
    _objc_release(puVar4);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar6);
    return;
  }
  return;
}



/* Entry: 10635bbb0; end: 10635c23b; -[SCOperaPlaylistViewCoordinator _logShakeToReportStateGroupItem:inGroup:parent:logger:] */

void FUN_10635bbb0(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *puStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [128];
  undefined8 auStack_170 [16];
  undefined8 auStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = param_4;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == puVar1) {
    puVar2 = *(undefined8 **)(param_1 + 0x18);
    func_0x00010bf5ee40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar1);
    if (param_4 == puVar2) goto LAB_10635bc94;
  }
  else {
    _objc_release(puVar1);
  }
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
LAB_10635bc94:
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = param_3;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110e4be98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar1);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = param_3;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110e4beb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar1);
  uVar9 = *(undefined8 *)(param_1 + 0x58);
  puVar1 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar9,param_2,puVar1);
  _objc_release(puVar1);
  if ((int)uVar9 != 0) {
    func_0x00010befa120(puVar3,param_2,&PTR____CFConstantStringClassReference_110e4bfb8);
  }
  puVar1 = param_3;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar1 != param_4) {
    puVar1 = param_3;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110e4bfd8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar1);
  }
  puVar1 = param_3;
  func_0x00010c0f3aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar1 != param_5) {
    puVar1 = param_3;
    func_0x00010c0f3aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110e4bff8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar1);
  }
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar5 = puVar3;
  func_0x00010bf446e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110dbf078);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110e4c018);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3580(param_6,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar5);
  uVar9 = param_6;
  func_0x00010bef9860(param_6,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = *(long *)(param_1 + 0x50);
  puVar2 = param_3;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  lVar8 = lVar10;
  func_0x00010bf529e0();
  if (lVar8 != 0) {
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    lStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    plStack_220 = (long *)0x0;
    _objc_retain(lVar10);
    puVar1 = &uStack_230;
    puVar11 = auStack_f0;
    lVar8 = lVar10;
    func_0x00010bf52a60();
    if (lVar8 != 0) {
      lVar12 = *plStack_220;
      do {
        lVar14 = 0;
        do {
          if (*plStack_220 != lVar12) {
            _objc_enumerationMutation(lVar10);
          }
          func_0x00010be58820(param_1,param_2,*(undefined8 *)(lStack_228 + lVar14 * 8),uVar9);
          lVar14 = lVar14 + 1;
        } while (lVar8 != lVar14);
        puVar1 = &uStack_230;
        puVar11 = auStack_f0;
        lVar8 = lVar10;
        func_0x00010bf52a60();
      } while (lVar8 != 0);
    }
    _objc_release(lVar10);
  }
  puVar2 = param_3;
  func_0x00010c25e580();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010bf529e0();
  _objc_release(puVar2);
  if (puVar6 != (undefined8 *)0x0) {
    uVar7 = uVar9;
    func_0x00010bef9860(uVar9,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    puVar2 = param_3;
    func_0x00010c25e580();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = &uStack_270;
    puVar11 = auStack_170;
    puStack_2b8 = puVar2;
    func_0x00010bf52a60();
    if (puStack_2b8 != (undefined8 *)0x0) {
      lVar8 = *plStack_260;
      do {
        puVar11 = (undefined8 *)0x0;
        do {
          if (*plStack_260 != lVar8) {
            _objc_enumerationMutation(puVar2);
          }
          lVar14 = *(long *)(lStack_268 + (long)puVar11 * 8);
          puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              &PTR____CFConstantStringClassReference_110e4c038);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b3580(uVar9,param_2,puVar4);
          _objc_release(puVar4);
          uStack_288 = 0;
          uStack_290 = 0;
          uStack_278 = 0;
          uStack_280 = 0;
          lStack_2a8 = 0;
          uStack_2b0 = 0;
          uStack_298 = 0;
          plStack_2a0 = (long *)0x0;
          _objc_retain(lVar14);
          lVar12 = lVar14;
          func_0x00010bf52a60(lVar14,param_2,&uStack_2b0,auStack_1f0,0x10);
          if (lVar12 != 0) {
            lVar15 = *plStack_2a0;
            do {
              lVar13 = 0;
              do {
                if (*plStack_2a0 != lVar15) {
                  _objc_enumerationMutation(lVar14);
                }
                func_0x00010be58800(param_1,param_2,*(undefined8 *)(lStack_2a8 + lVar13 * 8),param_4
                                    ,param_3,uVar7);
                lVar13 = lVar13 + 1;
              } while (lVar12 != lVar13);
              lVar12 = lVar14;
              func_0x00010bf52a60(lVar14,param_2,&uStack_2b0,auStack_1f0,0x10);
            } while (lVar12 != 0);
          }
          _objc_release(lVar14);
          puVar11 = (undefined8 *)((long)puVar11 + 1);
        } while (puVar11 != puStack_2b8);
        puVar1 = &uStack_270;
        puVar11 = auStack_170;
        puStack_2b8 = puVar2;
        func_0x00010bf52a60();
      } while (puStack_2b8 != (undefined8 *)0x0);
    }
    _objc_release(puVar2);
    _objc_release(uVar7);
  }
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(puVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(puVar1);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_retain(puVar11);
    _objc_opt_new(puVar3);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class();
    func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110e0cf18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3,param_2,puVar4);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar2 = puVar1;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110e4c058);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c0f3aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar2 != (undefined8 *)0x0) {
      puVar2 = puVar1;
      func_0x00010c0f3aa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110e4c078);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar2);
    }
    puVar2 = puVar1;
    func_0x00010bf0cb60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar2 != (undefined8 *)0x0) {
      puVar2 = puVar1;
      func_0x00010bf0cb60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110e4c098);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar2);
    }
    puVar2 = puVar1;
    func_0x00010c0d9820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar2 != (undefined8 *)0x0) {
      puVar2 = puVar1;
      func_0x00010c0d9820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110e4c0b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar2);
    }
    puVar2 = puVar1;
    func_0x00010c1125e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar2 != (undefined8 *)0x0) {
      puVar2 = puVar1;
      func_0x00010c1125e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110e4c0d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar2);
    }
    puVar2 = puVar1;
    func_0x00010c0d9ae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar2 != (undefined8 *)0x0) {
      puVar2 = puVar1;
      func_0x00010c0d9ae0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110e4c0f8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar2);
    }
    puVar2 = puVar1;
    func_0x00010c1126e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar2 != (undefined8 *)0x0) {
      puVar2 = puVar1;
      func_0x00010c1126e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110e4c118);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar2);
    }
    puVar2 = puVar1;
    func_0x00010c27bf80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010bf529e0();
    _objc_release(puVar2);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar6 != (undefined8 *)0x0) {
      puVar2 = puVar1;
      func_0x00010c27bf80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110e4c138);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar2);
    }
    puVar4 = puVar3;
    func_0x00010bf446e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110dbf078);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3580(puVar11,param_2,puVar4);
    _objc_release(puVar11);
    _objc_release(puVar4);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10635c23c; end: 10635c6b3; -[SCOperaPlaylistViewCoordinator _logShakeToReportStateViewModel:logger:] */

void FUN_10635c23c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110e0cf18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar3 = param_3;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110e4c058);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010c0f3aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar3 != 0) {
    lVar3 = param_3;
    func_0x00010c0f3aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110e4c078);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar3);
  }
  lVar3 = param_3;
  func_0x00010bf0cb60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar3 != 0) {
    lVar3 = param_3;
    func_0x00010bf0cb60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110e4c098);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar3);
  }
  lVar3 = param_3;
  func_0x00010c0d9820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar3 != 0) {
    lVar3 = param_3;
    func_0x00010c0d9820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110e4c0b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar3);
  }
  lVar3 = param_3;
  func_0x00010c1125e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar3 != 0) {
    lVar3 = param_3;
    func_0x00010c1125e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110e4c0d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar3);
  }
  lVar3 = param_3;
  func_0x00010c0d9ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar3 != 0) {
    lVar3 = param_3;
    func_0x00010c0d9ae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110e4c0f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar3);
  }
  lVar3 = param_3;
  func_0x00010c1126e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar3 != 0) {
    lVar3 = param_3;
    func_0x00010c1126e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110e4c118);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar3);
  }
  lVar3 = param_3;
  func_0x00010c27bf80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar4 != 0) {
    lVar3 = param_3;
    func_0x00010c27bf80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110e4c138);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar3);
  }
  puVar2 = puVar1;
  func_0x00010bf446e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dbf078);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3580(param_4,param_2,puVar2);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10635c6b4; end: 10635c6cb; -[SCOperaPlaylistViewCoordinator delegate] */

void FUN_10635c6b4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x108);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10635c6cc; end: 10635c6e3; -[SCOperaPlaylistViewCoordinator operaVC] */

void FUN_10635c6cc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x140);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10635c6e4; end: 10635c6fb; -[SCOperaPlaylistViewCoordinator operaConfiguration] */

void FUN_10635c6e4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x148);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10635c6fc; end: 10635c707; -[SCOperaPlaylistViewCoordinator setOperaConfiguration:] */

void FUN_10635c6fc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x148,param_3);
  return;
}



/* Entry: 10635c708; end: 10635c70f; -[SCOperaPlaylistViewCoordinator pageFeatureDataProvider] */

undefined8 FUN_10635c708(long param_1)

{
  return *(undefined8 *)(param_1 + 0x150);
}



/* Entry: 10635c710; end: 10635c88f; -[SCOperaPlaylistViewCoordinator .cxx_destruct] */

void FUN_10635c710(long param_1)

{
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_destroyWeak(param_1 + 0x148);
  _objc_destroyWeak(param_1 + 0x140);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_destroyWeak(param_1 + 0x110);
  _objc_destroyWeak(param_1 + 0x108);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_destroyWeak(param_1 + 0x98);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10635c890; end: 10635cc0b; -[SCOperaPlaylistPluginsManager initWithPlaylistPlugins:mediaResolverService:trackerService:] */

undefined8 *
FUN_10635c890(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_1f8 = PTR_PTR_1126f0f38;
  puVar1 = &uStack_200;
  uStack_200 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    puVar4 = param_3;
    func_0x00010bf529e0();
    puVar10 = param_3;
    puVar14 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    while (PTR__OBJC_CLASS___NSMutableArray_1126ae5d8 = (undefined *)puVar14,
          puVar4 != (undefined8 *)0x0) {
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      lStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      plStack_1a0 = (long *)0x0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      _objc_retain(puVar10);
      puVar4 = puVar10;
      func_0x00010bf52a60();
      if (puVar4 != (undefined8 *)0x0) {
        lVar15 = *plStack_1a0;
        do {
          puVar6 = PTR_s_dependentPlugins_1125b9040;
          puVar12 = (undefined8 *)0x0;
          do {
            if (*plStack_1a0 != lVar15) {
              _objc_enumerationMutation(puVar10);
            }
            uVar13 = *(ulong *)(lStack_1a8 + (long)puVar12 * 8);
            uVar5 = uVar13;
            _objc_opt_respondsToSelector(uVar13,puVar6);
            if ((uVar5 & 1) != 0) {
              func_0x00010bf6da60(uVar13);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa160(puVar14);
              _objc_release(uVar13);
            }
            puVar12 = (undefined8 *)((long)puVar12 + 1);
          } while (puVar4 != puVar12);
          puVar4 = puVar10;
          func_0x00010bf52a60();
        } while (puVar4 != (undefined8 *)0x0);
      }
      _objc_release(puVar10);
      puVar6 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
      func_0x00010bf529e0(puVar10);
      func_0x00010bfed320(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066b20(puVar3);
      _objc_release(puVar6);
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1d8 = 0;
      plStack_1e0 = (long *)0x0;
      _objc_retain(puVar10);
      puVar4 = puVar10;
      func_0x00010bf52a60();
      if (puVar4 != (undefined8 *)0x0) {
        lVar15 = *plStack_1e0;
        do {
          puVar12 = (undefined8 *)0x0;
          do {
            if (*plStack_1e0 != lVar15) {
              _objc_enumerationMutation(puVar10);
            }
            func_0x00010bf4b900(puVar2);
            func_0x00010befa120(puVar2);
            puVar12 = (undefined8 *)((long)puVar12 + 1);
          } while (puVar4 != puVar12);
          puVar4 = puVar10;
          func_0x00010bf52a60();
        } while (puVar4 != (undefined8 *)0x0);
      }
      _objc_release(puVar10);
      _objc_release(puVar10);
      puVar4 = puVar14;
      func_0x00010bf529e0();
      puVar10 = puVar14;
      puVar14 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    }
    puVar6 = puVar3;
    func_0x00010bf51e00();
    _objc_release(puVar10);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(param_3);
    uVar7 = puVar1[3];
    puVar1[3] = puVar6;
    _objc_release(uVar7);
    func_0x00010bea9880(puVar1);
    puVar10 = param_4;
    func_0x00010bea9620(puVar1);
    func_0x00010bea9360(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar1;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar10);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar10);
  puVar1 = puVar10;
  func_0x00010bf52a60();
  lVar15 = lRam0000000000000000;
  do {
    if (puVar1 == (undefined8 *)0x0) {
      _objc_release(puVar10);
      puVar6 = puVar2;
      func_0x00010bf51e00();
      uVar7 = param_3[1];
      param_3[1] = puVar6;
      _objc_release(uVar7);
      puVar6 = puVar3;
      func_0x00010bf51e00();
      uVar7 = param_3[2];
      param_3[2] = puVar6;
      _objc_release(uVar7);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar10);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
        return puVar10;
      }
      ___stack_chk_fail();
      func_0x00010bea9640();
                    /* WARNING: Could not recover jumptable at 0x00010bea9670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(puVar10,PTR_s__setUpMediaTypeConfigurations_112587f40);
      return puVar10;
    }
    puVar14 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar15) {
        _objc_enumerationMutation(puVar10);
      }
      puVar6 = PTR_DAT_1126a52f0;
      lVar16 = *(long *)((long)puVar14 * 8);
      _objc_retain(lVar16);
      lVar8 = lVar16;
      func_0x00010010fab4(lVar16,puVar6);
      _objc_release(lVar16);
      puVar6 = PTR_DAT_1126a5390;
      puVar9 = puVar2;
      if ((int)lVar8 == 0 || lVar16 == 0) {
        _objc_retain(lVar16);
        lVar8 = lVar16;
        func_0x00010010fab4(lVar16,puVar6);
        _objc_release(lVar16);
        puVar9 = puVar3;
        if ((int)lVar8 != 0 && lVar16 != 0) goto LAB_10635cd44;
      }
      else {
LAB_10635cd44:
        func_0x00010befa120(puVar9);
      }
      puVar14 = (undefined8 *)((long)puVar14 + 1);
    } while (puVar1 != puVar14);
    puVar1 = puVar10;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10635cc0c; end: 10635ce03; -[SCOperaPlaylistPluginsManager _setUpPlugins:] */

void FUN_10635cc0c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar4 == 0) {
      _objc_release(param_3);
      puVar7 = puVar2;
      func_0x00010bf51e00();
      uVar9 = *(undefined8 *)(param_1 + 8);
      *(undefined **)(param_1 + 8) = puVar7;
      _objc_release(uVar9);
      puVar7 = puVar3;
      func_0x00010bf51e00();
      uVar9 = *(undefined8 *)(param_1 + 0x10);
      *(undefined **)(param_1 + 0x10) = puVar7;
      _objc_release(uVar9);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010bea9640();
                    /* WARNING: Could not recover jumptable at 0x00010bea9670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__setUpMediaTypeConfigurations_112587f40);
      return;
    }
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      puVar7 = PTR_DAT_1126a52f0;
      lVar11 = *(long *)(lVar10 * 8);
      _objc_retain(lVar11);
      lVar5 = lVar11;
      func_0x00010010fab4(lVar11,puVar7);
      _objc_release(lVar11);
      puVar7 = PTR_DAT_1126a5390;
      puVar6 = puVar2;
      if ((int)lVar5 == 0 || lVar11 == 0) {
        _objc_retain(lVar11);
        lVar5 = lVar11;
        func_0x00010010fab4(lVar11,puVar7);
        _objc_release(lVar11);
        puVar6 = puVar3;
        if ((int)lVar5 != 0 && lVar11 != 0) goto LAB_10635cd44;
      }
      else {
LAB_10635cd44:
        func_0x00010befa120(puVar6);
      }
      lVar10 = lVar10 + 1;
    } while (lVar4 != lVar10);
    lVar4 = param_3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10635ce04; end: 10635ce27; -[SCOperaPlaylistPluginsManager _setUpMediaPluginsWithService:operaTrackerService:] */

void FUN_10635ce04(undefined8 param_1)

{
  func_0x00010bea9640();
                    /* WARNING: Could not recover jumptable at 0x00010bea9670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setUpMediaTypeConfigurations_112587f40);
  return;
}



/* Entry: 10635ce28; end: 10635d0fb; -[SCOperaPlaylistPluginsManager _setUpMediaResolverPluginsWithService:operaTrackerService:] */

void FUN_10635ce28(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 unaff_x25;
  long lVar12;
  undefined8 unaff_x26;
  long lVar13;
  long unaff_x27;
  long unaff_x28;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  undefined *puStack_160;
  long lStack_158;
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
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) goto LAB_10635d0b0;
  unaff_x22 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  unaff_x23 = *(long *)(param_1 + 8);
  _objc_retain(unaff_x23);
  lVar1 = unaff_x23;
  func_0x00010bf52a60(unaff_x23,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar1 == 0) {
LAB_10635d0a0:
    _objc_release(unaff_x23);
  }
  else {
    unaff_x26 = 0;
    unaff_x27 = *plStack_120;
    do {
      unaff_x28 = 0;
      do {
        if (*plStack_120 != unaff_x27) {
          _objc_enumerationMutation(unaff_x23);
        }
        unaff_x25 = *(undefined8 *)(lStack_128 + unaff_x28 * 8);
        func_0x00010c101280();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_1;
        func_0x00010bdd6fa0(param_1,param_2,unaff_x25);
        if ((int)lVar2 != 0) {
          uVar9 = unaff_x25;
          func_0x00010c0ea740(unaff_x25);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(unaff_x22,param_2,uVar9);
          _objc_release(uVar9);
          unaff_x26 = 1;
        }
        _objc_release(unaff_x25);
        unaff_x28 = unaff_x28 + 1;
      } while (lVar1 != unaff_x28);
      lVar1 = unaff_x23;
      func_0x00010bf52a60(unaff_x23,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar1 != 0);
    _objc_release(unaff_x23);
    unaff_x24 = 0;
    if (((int)unaff_x26 != 0) &&
       (puVar3 = unaff_x22, func_0x00010bf529e0(), puVar3 != (undefined *)0x0)) {
      lVar1 = param_3;
      func_0x00010c0c6480();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = param_4;
      func_0x00010c0847c0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar2;
      func_0x00010bf58820(lVar2,param_2,unaff_x22,unaff_x25);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 0x38);
      *(long *)(param_1 + 0x38) = lVar11;
      _objc_release(uVar9);
      _objc_release(unaff_x25);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_3;
      func_0x00010c0c6480();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = unaff_x24;
      func_0x00010bf560e0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      *(long *)(param_1 + 0x20) = lVar2;
      _objc_release(uVar9);
      _objc_release(unaff_x24);
      _objc_release(lVar1);
      unaff_x23 = *(long *)(param_1 + 0x10);
      func_0x00010c0d3c80();
      func_0x00010befa120();
      lVar1 = unaff_x23;
      func_0x00010bf51e00();
      uVar9 = *(undefined8 *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar1;
      _objc_release(uVar9);
      uVar9 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010bf09f60(uVar9,param_2,*(undefined8 *)(param_1 + 0x20));
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x18) = uVar9;
      _objc_release(uVar10);
      goto LAB_10635d0a0;
    }
  }
  _objc_release(unaff_x22);
LAB_10635d0b0:
  _objc_release(param_4);
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar8 = &uStack_260;
  pcStack_138 = FUN_10635d0fc;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lStack_190 = unaff_x28;
  lStack_188 = unaff_x27;
  uStack_180 = unaff_x26;
  uStack_178 = unaff_x25;
  lStack_170 = unaff_x24;
  lStack_168 = unaff_x23;
  puStack_160 = unaff_x22;
  lStack_158 = param_1;
  uStack_150 = param_4;
  lStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  lVar11 = *(long *)(lVar1 + 8);
  _objc_retain(lVar11);
  lVar2 = lVar11;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar12 = *plStack_250;
    do {
      lVar13 = 0;
      do {
        if (*plStack_250 != lVar12) {
          _objc_enumerationMutation(lVar11);
        }
        uVar9 = *(undefined8 *)(lStack_258 + lVar13 * 8);
        lVar4 = lVar1;
        func_0x00010be75500(lVar1,param_2,uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c27dd80(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3,param_2,lVar4,uVar9);
        _objc_release(uVar9);
        _objc_release(lVar4);
        lVar13 = lVar13 + 1;
      } while (lVar2 != lVar13);
      lVar2 = lVar11;
      puVar8 = &uStack_260;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar11);
  puVar5 = puVar3;
  func_0x00010bf51e00();
  uVar9 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined **)(lVar1 + 0x28) = puVar5;
  _objc_release(uVar9);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  puVar6 = (undefined1 *)puVar8;
  func_0x00010c101280();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c9e58;
  _objc_alloc(PTR_PTR_1126c9e58);
  puVar7 = (undefined1 *)puVar8;
  func_0x00010c27dd80(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  func_0x00010c055d80(puVar3,param_2,puVar7,puVar6,puVar6,puVar6,puVar6);
  _objc_release(puVar7);
  puVar7 = puVar6;
  func_0x00010c0d7180();
  if ((int)puVar7 != 0) {
    func_0x00010c1c5000(puVar3,param_2,puVar6);
  }
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10635d0fc; end: 10635d27f; -[SCOperaPlaylistPluginsManager _setUpMediaTypeConfigurations] */

void FUN_10635d0fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar7 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar8 = *(long *)(param_1 + 8);
  _objc_retain(lVar8);
  lVar2 = lVar8;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(lVar8);
        }
        uVar9 = *(undefined8 *)(lStack_128 + lVar11 * 8);
        lVar3 = param_1;
        func_0x00010be75500(param_1,param_2,uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c27dd80(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1,param_2,lVar3,uVar9);
        _objc_release(uVar9);
        _objc_release(lVar3);
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = lVar8;
      puVar7 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar8);
  puVar4 = puVar1;
  func_0x00010bf51e00();
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar4;
  _objc_release(uVar9);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  puVar5 = (undefined1 *)puVar7;
  func_0x00010c101280();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c9e58;
  _objc_alloc(PTR_PTR_1126c9e58);
  puVar6 = (undefined1 *)puVar7;
  func_0x00010c27dd80(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  func_0x00010c055d80(puVar1,param_2,puVar6,puVar5,puVar5,puVar5,puVar5);
  _objc_release(puVar6);
  puVar6 = puVar5;
  func_0x00010c0d7180();
  if ((int)puVar6 != 0) {
    func_0x00010c1c5000(puVar1,param_2,puVar5);
  }
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10635d280; end: 10635d337; -[SCOperaPlaylistPluginsManager _pluginMediaTypeConfigurations:] */

void FUN_10635d280(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c101280();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9e58;
  _objc_alloc(PTR_PTR_1126c9e58);
  uVar3 = param_3;
  func_0x00010c27dd80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c055d80(puVar2,param_2,uVar3,uVar1,uVar1,uVar1,uVar1);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c0d7180();
  if ((int)uVar3 != 0) {
    func_0x00010c1c5000(puVar2,param_2,uVar1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10635d338; end: 10635d39f; -[SCOperaPlaylistPluginsManager _builtInMediaResolverEnabledOnDataSource:] */

bool FUN_10635d338(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_operaMediaBundleProvider_1126183e8);
  if ((uVar2 & 1) == 0) {
    bVar1 = false;
  }
  else {
    uVar2 = param_3;
    func_0x00010c0ea740(param_3);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = uVar2 != 0;
    _objc_release();
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10635d3a0; end: 10635d543; -[SCOperaPlaylistPluginsManager _setUpExtraPropertiesProviders] */

void FUN_10635d3a0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar8);
  lVar5 = lVar8;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  puVar4 = PTR_s_extraPropertiesProvider_1125c5468;
  while (PTR_s_extraPropertiesProvider_1125c5468 = puVar4, lVar5 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar8);
      }
      uVar9 = *(ulong *)(lVar10 * 8);
      uVar3 = uVar9;
      _objc_opt_respondsToSelector(uVar9,puVar4);
      if ((uVar3 & 1) != 0) {
        uVar3 = uVar9;
        func_0x00010bf9eb00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar3 != 0) {
          func_0x00010bf9eb00(uVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          _objc_release(uVar9);
        }
      }
      lVar10 = lVar10 + 1;
    } while (lVar5 != lVar10);
    lVar5 = lVar8;
    func_0x00010bf52a60();
    puVar4 = PTR_s_extraPropertiesProvider_1125c5468;
  }
  _objc_release(lVar8);
  lVar5 = *(long *)(param_1 + 0x38);
  if (lVar5 != 0) {
    func_0x00010befa120(puVar2);
  }
  puVar4 = puVar2;
  func_0x00010bf51e00();
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar4;
  _objc_release(uVar7);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf20c00(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectIsEmpty_1103475d0)();
  return;
}



/* Entry: 10635d544; end: 10635d55b; -[SCOperaPlaylistPluginsManager _validateConfigurationUpdate:forPlugin:] */

void FUN_10635d544(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf20c00(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectIsEmpty_1103475d0)();
  return;
}



/* Entry: 10635d55c; end: 10635d6b7; -[SCOperaPlaylistPluginsManager updateOperaConfiguration:] */

undefined ** FUN_10635d55c(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  long lVar15;
  undefined **unaff_x22;
  undefined **unaff_x23;
  ulong uVar16;
  undefined **unaff_x24;
  undefined **unaff_x25;
  long lVar17;
  undefined **unaff_x26;
  undefined *puVar18;
  undefined **unaff_x27;
  long unaff_x28;
  undefined *puStack_a40;
  long lStack_a38;
  long *plStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  long lStack_978;
  long lStack_970;
  undefined **ppuStack_968;
  undefined **ppuStack_960;
  undefined **ppuStack_958;
  undefined **ppuStack_950;
  undefined **ppuStack_948;
  undefined **ppuStack_940;
  undefined **ppuStack_938;
  undefined **ppuStack_930;
  undefined **ppuStack_928;
  undefined8 ****ppppuStack_920;
  code *pcStack_918;
  undefined8 uStack_910;
  long lStack_908;
  undefined8 *puStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  long lStack_848;
  long lStack_840;
  undefined **ppuStack_838;
  undefined **ppuStack_830;
  undefined **ppuStack_828;
  undefined **ppuStack_820;
  undefined **ppuStack_818;
  undefined **ppuStack_810;
  undefined **ppuStack_808;
  undefined **ppuStack_800;
  undefined **ppuStack_7f8;
  undefined8 ****ppppuStack_7f0;
  code *pcStack_7e8;
  undefined *puStack_7e0;
  long lStack_7d8;
  undefined8 *puStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  long lStack_718;
  long lStack_710;
  undefined **ppuStack_708;
  undefined **ppuStack_700;
  undefined **ppuStack_6f8;
  undefined **ppuStack_6f0;
  undefined **ppuStack_6e8;
  undefined **ppuStack_6e0;
  undefined **ppuStack_6d8;
  undefined **ppuStack_6d0;
  undefined **ppuStack_6c8;
  undefined8 ****ppppuStack_6c0;
  code *pcStack_6b8;
  undefined *puStack_6b0;
  long lStack_6a8;
  undefined8 *puStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  long lStack_5e8;
  long lStack_5e0;
  undefined **ppuStack_5d8;
  undefined **ppuStack_5d0;
  undefined **ppuStack_5c8;
  undefined **ppuStack_5c0;
  undefined **ppuStack_5b8;
  undefined **ppuStack_5b0;
  undefined **ppuStack_5a8;
  undefined **ppuStack_5a0;
  undefined **ppuStack_598;
  undefined1 ****ppppuStack_590;
  code *pcStack_588;
  undefined *puStack_580;
  long lStack_578;
  undefined8 *puStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  long lStack_538;
  undefined8 *puStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  long lStack_3f8;
  long lStack_3f0;
  undefined **ppuStack_3e8;
  undefined **ppuStack_3e0;
  undefined **ppuStack_3d8;
  undefined **ppuStack_3d0;
  undefined **ppuStack_3c8;
  undefined **ppuStack_3c0;
  long lStack_3b8;
  undefined **ppuStack_3b0;
  undefined **ppuStack_3a8;
  undefined1 ***pppuStack_3a0;
  code *pcStack_398;
  undefined *puStack_390;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long lStack_2c8;
  long lStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  long lStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  long lStack_258;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  long lStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  long lStack_158;
  long lStack_150;
  undefined **ppuStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  ppuVar13 = &puStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar15 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar15);
  lVar9 = lVar15;
  func_0x00010bf52a60();
  if (lVar9 != 0) {
    unaff_x26 = (undefined **)*puStack_120;
    unaff_x27 = &PTR_s_updateEmoji__11267f000;
    do {
      unaff_x23 = (undefined **)PTR_s_updateOperaConfiguration__11267fa98;
      unaff_x28 = 0;
      ppuVar13 = param_3;
      do {
        if ((undefined **)*puStack_120 != unaff_x26) {
          _objc_enumerationMutation(lVar15);
        }
        unaff_x24 = *(undefined ***)(lStack_128 + unaff_x28 * 8);
        ppuVar11 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        param_3 = ppuVar13;
        if (((ulong)ppuVar11 & 1) != 0) {
          param_3 = unaff_x24;
          func_0x00010c2881c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar13);
          func_0x00010bee78a0(param_1);
          unaff_x25 = param_3;
        }
        unaff_x28 = unaff_x28 + 1;
        ppuVar13 = param_3;
      } while (lVar9 != unaff_x28);
      lVar9 = lVar15;
      ppuVar13 = &puStack_130;
      func_0x00010bf52a60();
      unaff_x22 = (undefined **)0x0;
    } while (lVar9 != 0);
  }
  lVar9 = lVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    ppuVar12 = &puStack_260;
    pcStack_138 = FUN_10635d6b8;
    lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_190 = unaff_x28;
    ppuStack_188 = unaff_x27;
    ppuStack_180 = unaff_x26;
    ppuStack_178 = unaff_x25;
    ppuStack_170 = unaff_x24;
    ppuStack_168 = unaff_x23;
    ppuStack_160 = unaff_x22;
    lStack_158 = lVar15;
    lStack_150 = param_1;
    ppuStack_148 = param_3;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar13);
    lStack_258 = 0;
    puStack_260 = (undefined *)0x0;
    uStack_248 = 0;
    puStack_250 = (undefined8 *)0x0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    ppuVar10 = *(undefined ***)(lVar9 + 0x18);
    _objc_retain(ppuVar10);
    ppuVar11 = ppuVar10;
    func_0x00010bf52a60();
    if (ppuVar11 != (undefined **)0x0) {
      unaff_x24 = (undefined **)*puStack_250;
      unaff_x25 = &PTR_s_didEndDisplayingSectionControlle_1125bb000;
      do {
        unaff_x22 = (undefined **)PTR_s_didFinishOperaConfigurationSetup_1125bb4d8;
        unaff_x26 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_250 != unaff_x24) {
            _objc_enumerationMutation(ppuVar10);
          }
          unaff_x23 = *(undefined ***)(lStack_258 + (long)unaff_x26 * 8);
          ppuVar12 = unaff_x23;
          _objc_opt_respondsToSelector(unaff_x23,unaff_x22);
          if (((ulong)ppuVar12 & 1) != 0) {
            func_0x00010bf76cc0(unaff_x23);
          }
          unaff_x26 = (undefined **)((long)unaff_x26 + 1);
        } while (ppuVar11 != unaff_x26);
        ppuVar11 = ppuVar10;
        ppuVar12 = &puStack_260;
        func_0x00010bf52a60();
        lVar15 = 0;
      } while (ppuVar11 != (undefined **)0x0);
    }
    _objc_release(ppuVar10);
    ppuVar11 = ppuVar13;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
      return ppuVar11;
    }
    ___stack_chk_fail();
    ppuVar7 = &puStack_390;
    pcStack_268 = FUN_10635d7f0;
    lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_2c0 = unaff_x28;
    ppuStack_2b8 = unaff_x27;
    ppuStack_2b0 = unaff_x26;
    ppuStack_2a8 = unaff_x25;
    ppuStack_2a0 = unaff_x24;
    ppuStack_298 = unaff_x23;
    ppuStack_290 = unaff_x22;
    lStack_288 = lVar15;
    ppuStack_280 = ppuVar10;
    ppuStack_278 = ppuVar13;
    ppuStack_270 = &puStack_140;
    _objc_retain(ppuVar12);
    lStack_388 = 0;
    puStack_390 = (undefined *)0x0;
    uStack_378 = 0;
    puStack_380 = (undefined8 *)0x0;
    uStack_368 = 0;
    uStack_370 = 0;
    uStack_358 = 0;
    uStack_360 = 0;
    ppuVar11 = (undefined **)ppuVar11[3];
    _objc_retain(ppuVar11);
    ppuVar13 = ppuVar11;
    func_0x00010bf52a60();
    param_3 = ppuVar12;
    if (ppuVar13 != (undefined **)0x0) {
      unaff_x24 = (undefined **)*puStack_380;
      unaff_x25 = &PTR_s_updateEmoji__11267f000;
      do {
        unaff_x22 = (undefined **)PTR_s_updateOperaDependencies__11267faa0;
        unaff_x26 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_380 != unaff_x24) {
            _objc_enumerationMutation(ppuVar11);
          }
          unaff_x23 = *(undefined ***)(lStack_388 + (long)unaff_x26 * 8);
          ppuVar12 = unaff_x23;
          _objc_opt_respondsToSelector(unaff_x23,unaff_x22);
          if (((ulong)ppuVar12 & 1) != 0) {
            func_0x00010c2881e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_3);
            param_3 = unaff_x23;
          }
          unaff_x26 = (undefined **)((long)unaff_x26 + 1);
        } while (ppuVar13 != unaff_x26);
        ppuVar13 = ppuVar11;
        ppuVar7 = &puStack_390;
        func_0x00010bf52a60();
        lVar15 = 0;
      } while (ppuVar13 != (undefined **)0x0);
    }
    ppuVar13 = ppuVar11;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2c8) {
      ___stack_chk_fail();
      ppuVar10 = &puStack_580;
      pcStack_398 = FUN_10635d93c;
      lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_3f0 = unaff_x28;
      ppuStack_3e8 = unaff_x27;
      ppuStack_3e0 = unaff_x26;
      ppuStack_3d8 = unaff_x25;
      ppuStack_3d0 = unaff_x24;
      ppuStack_3c8 = unaff_x23;
      ppuStack_3c0 = unaff_x22;
      lStack_3b8 = lVar15;
      ppuStack_3b0 = ppuVar11;
      ppuStack_3a8 = param_3;
      pppuStack_3a0 = &ppuStack_270;
      _objc_retain(ppuVar7);
      lStack_538 = 0;
      uStack_540 = 0;
      uStack_528 = 0;
      puStack_530 = (undefined8 *)0x0;
      uStack_518 = 0;
      uStack_520 = 0;
      uStack_508 = 0;
      uStack_510 = 0;
      ppuVar11 = (undefined **)ppuVar13[1];
      _objc_retain(ppuVar11);
      ppuVar12 = ppuVar11;
      func_0x00010bf52a60();
      if (ppuVar12 != (undefined **)0x0) {
        unaff_x25 = (undefined **)*puStack_530;
        unaff_x26 = &PTR_s_adToCallCallbacks_11259b000;
        do {
          unaff_x23 = (undefined **)PTR_s_addEventListenersWithEventAnnoun_11259b9c8;
          unaff_x27 = (undefined **)0x0;
          do {
            if ((undefined **)*puStack_530 != unaff_x25) {
              _objc_enumerationMutation(ppuVar11);
            }
            unaff_x24 = *(undefined ***)(lStack_538 + (long)unaff_x27 * 8);
            ppuVar1 = unaff_x24;
            _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
            if (((ulong)ppuVar1 & 1) != 0) {
              func_0x00010bef8080(unaff_x24);
            }
            unaff_x27 = (undefined **)((long)unaff_x27 + 1);
          } while (ppuVar12 != unaff_x27);
          ppuVar12 = ppuVar11;
          func_0x00010bf52a60();
          unaff_x22 = (undefined **)0x0;
        } while (ppuVar12 != (undefined **)0x0);
      }
      _objc_release(ppuVar11);
      uStack_558 = 0;
      uStack_560 = 0;
      uStack_548 = 0;
      uStack_550 = 0;
      lStack_578 = 0;
      puStack_580 = (undefined *)0x0;
      uStack_568 = 0;
      puStack_570 = (undefined8 *)0x0;
      ppuVar12 = (undefined **)ppuVar13[2];
      _objc_retain(ppuVar12);
      ppuVar13 = ppuVar12;
      func_0x00010bf52a60();
      if (ppuVar13 != (undefined **)0x0) {
        unaff_x24 = (undefined **)*puStack_570;
        do {
          unaff_x25 = (undefined **)0x0;
          do {
            if ((undefined **)*puStack_570 != unaff_x24) {
              _objc_enumerationMutation(ppuVar12);
            }
            unaff_x22 = *(undefined ***)(lStack_578 + (long)unaff_x25 * 8);
            unaff_x23 = unaff_x22;
            func_0x00010c127820();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bef99a0(ppuVar7);
            _objc_release(unaff_x23);
            unaff_x25 = (undefined **)((long)unaff_x25 + 1);
          } while (ppuVar13 != unaff_x25);
          ppuVar13 = ppuVar12;
          ppuVar10 = &puStack_580;
          func_0x00010bf52a60();
          ppuVar11 = (undefined **)0x0;
        } while (ppuVar13 != (undefined **)0x0);
      }
      _objc_release(ppuVar12);
      ppuVar13 = ppuVar7;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3f8) {
        return ppuVar13;
      }
      ___stack_chk_fail();
      ppuVar8 = &puStack_6b0;
      pcStack_588 = FUN_10635db30;
      lStack_5e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuVar1 = ppuVar10;
      lStack_5e0 = unaff_x28;
      ppuStack_5d8 = unaff_x27;
      ppuStack_5d0 = unaff_x26;
      ppuStack_5c8 = unaff_x25;
      ppuStack_5c0 = unaff_x24;
      ppuStack_5b8 = unaff_x23;
      ppuStack_5b0 = unaff_x22;
      ppuStack_5a8 = ppuVar11;
      ppuStack_5a0 = ppuVar12;
      ppuStack_598 = ppuVar7;
      ppppuStack_590 = &pppuStack_3a0;
      _objc_retain(ppuVar10);
      if (ppuVar10 != (undefined **)0x0) {
        uStack_688 = 0;
        uStack_690 = 0;
        uStack_678 = 0;
        uStack_680 = 0;
        lStack_6a8 = 0;
        puStack_6b0 = (undefined *)0x0;
        uStack_698 = 0;
        puStack_6a0 = (undefined8 *)0x0;
        ppuVar13 = (undefined **)ppuVar13[1];
        _objc_retain(ppuVar13);
        ppuVar12 = ppuVar13;
        func_0x00010bf52a60();
        if (ppuVar12 != (undefined **)0x0) {
          unaff_x24 = (undefined **)*puStack_6a0;
          unaff_x25 = &PTR_DAT_1126a5000;
          do {
            unaff_x26 = (undefined **)0x0;
            do {
              if ((undefined **)*puStack_6a0 != unaff_x24) {
                _objc_enumerationMutation(ppuVar13);
              }
              puVar2 = PTR_DAT_1126a5398;
              unaff_x22 = *(undefined ***)(lStack_6a8 + (long)unaff_x26 * 8);
              _objc_retain(unaff_x22);
              unaff_x23 = unaff_x22;
              func_0x00010010fab4(unaff_x22,puVar2);
              _objc_release(unaff_x22);
              if ((int)unaff_x23 != 0 && unaff_x22 != (undefined **)0x0) {
                func_0x00010c1d5440(unaff_x22);
              }
              unaff_x26 = (undefined **)((long)unaff_x26 + 1);
            } while (ppuVar12 != unaff_x26);
            ppuVar12 = ppuVar13;
            ppuVar8 = &puStack_6b0;
            func_0x00010bf52a60();
            ppuVar11 = (undefined **)0x0;
          } while (ppuVar12 != (undefined **)0x0);
        }
        _objc_release(ppuVar13);
        ppuVar1 = ppuVar8;
      }
      ppuVar12 = ppuVar10;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5e8) {
        return ppuVar12;
      }
      ___stack_chk_fail();
      ppuVar7 = &puStack_7e0;
      pcStack_6b8 = FUN_10635dc88;
      lStack_718 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_710 = unaff_x28;
      ppuStack_708 = unaff_x27;
      ppuStack_700 = unaff_x26;
      ppuStack_6f8 = unaff_x25;
      ppuStack_6f0 = unaff_x24;
      ppuStack_6e8 = unaff_x23;
      ppuStack_6e0 = unaff_x22;
      ppuStack_6d8 = ppuVar11;
      ppuStack_6d0 = ppuVar13;
      ppuStack_6c8 = ppuVar10;
      ppppuStack_6c0 = &ppppuStack_590;
      _objc_retain(ppuVar1);
      lStack_7d8 = 0;
      puStack_7e0 = (undefined *)0x0;
      uStack_7c8 = 0;
      puStack_7d0 = (undefined8 *)0x0;
      uStack_7b8 = 0;
      uStack_7c0 = 0;
      uStack_7a8 = 0;
      uStack_7b0 = 0;
      ppuVar12 = (undefined **)ppuVar12[3];
      _objc_retain(ppuVar12);
      ppuVar13 = ppuVar12;
      func_0x00010bf52a60();
      if (ppuVar13 != (undefined **)0x0) {
        unaff_x24 = (undefined **)*puStack_7d0;
        unaff_x25 = &PTR_s_setPlaybackPositionMs__112655000;
        do {
          unaff_x22 = (undefined **)PTR_s_setPlaylistItemController__1126551a0;
          unaff_x26 = (undefined **)0x0;
          do {
            if ((undefined **)*puStack_7d0 != unaff_x24) {
              _objc_enumerationMutation(ppuVar12);
            }
            unaff_x23 = *(undefined ***)(lStack_7d8 + (long)unaff_x26 * 8);
            ppuVar11 = unaff_x23;
            _objc_opt_respondsToSelector(unaff_x23,unaff_x22);
            if (((ulong)ppuVar11 & 1) != 0) {
              func_0x00010c1ddde0(unaff_x23);
            }
            unaff_x26 = (undefined **)((long)unaff_x26 + 1);
          } while (ppuVar13 != unaff_x26);
          ppuVar13 = ppuVar12;
          ppuVar7 = &puStack_7e0;
          func_0x00010bf52a60();
          ppuVar11 = (undefined **)0x0;
        } while (ppuVar13 != (undefined **)0x0);
      }
      _objc_release(ppuVar12);
      ppuVar13 = ppuVar1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_718) {
        return ppuVar13;
      }
      ___stack_chk_fail();
      pcStack_7e8 = FUN_10635ddc0;
      lStack_848 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_840 = unaff_x28;
      ppuStack_838 = unaff_x27;
      ppuStack_830 = unaff_x26;
      ppuStack_828 = unaff_x25;
      ppuStack_820 = unaff_x24;
      ppuStack_818 = unaff_x23;
      ppuStack_810 = unaff_x22;
      ppuStack_808 = ppuVar11;
      ppuStack_800 = ppuVar12;
      ppuStack_7f8 = ppuVar1;
      ppppuStack_7f0 = &ppppuStack_6c0;
      _objc_retain(ppuVar7);
      lStack_908 = 0;
      uStack_910 = 0;
      uStack_8f8 = 0;
      puStack_900 = (undefined8 *)0x0;
      uStack_8e8 = 0;
      uStack_8f0 = 0;
      uStack_8d8 = 0;
      uStack_8e0 = 0;
      ppuVar12 = (undefined **)ppuVar13[3];
      _objc_retain(ppuVar12);
      ppuVar13 = ppuVar12;
      func_0x00010bf52a60();
      if (ppuVar13 != (undefined **)0x0) {
        unaff_x24 = (undefined **)*puStack_900;
        unaff_x25 = &PTR_s_setOnCancel__112652000;
        do {
          unaff_x22 = (undefined **)PTR_s_setOperaControlling__112652f18;
          unaff_x26 = (undefined **)0x0;
          do {
            if ((undefined **)*puStack_900 != unaff_x24) {
              _objc_enumerationMutation(ppuVar12);
            }
            unaff_x23 = *(undefined ***)(lStack_908 + (long)unaff_x26 * 8);
            ppuVar11 = unaff_x23;
            _objc_opt_respondsToSelector(unaff_x23,unaff_x22);
            if (((ulong)ppuVar11 & 1) != 0) {
              func_0x00010c1d53c0(unaff_x23);
            }
            unaff_x26 = (undefined **)((long)unaff_x26 + 1);
          } while (ppuVar13 != unaff_x26);
          ppuVar13 = ppuVar12;
          func_0x00010bf52a60();
          ppuVar11 = (undefined **)0x0;
        } while (ppuVar13 != (undefined **)0x0);
      }
      _objc_release(ppuVar12);
      ppuVar13 = ppuVar7;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_848) {
        return ppuVar13;
      }
      ___stack_chk_fail();
      ppuVar10 = &puStack_a40;
      pcStack_918 = FUN_10635def8;
      lStack_978 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_a38 = 0;
      puStack_a40 = (undefined *)0x0;
      uStack_a28 = 0;
      plStack_a30 = (long *)0x0;
      uStack_a18 = 0;
      uStack_a20 = 0;
      uStack_a08 = 0;
      uStack_a10 = 0;
      puVar14 = ppuVar13[3];
      lStack_970 = unaff_x28;
      ppuStack_968 = unaff_x27;
      ppuStack_960 = unaff_x26;
      ppuStack_958 = unaff_x25;
      ppuStack_950 = unaff_x24;
      ppuStack_948 = unaff_x23;
      ppuStack_940 = unaff_x22;
      ppuStack_938 = ppuVar11;
      ppuStack_930 = ppuVar12;
      ppuStack_928 = ppuVar7;
      ppppuStack_920 = &ppppuStack_7f0;
      _objc_retain(puVar14);
      puVar2 = puVar14;
      func_0x00010bf52a60();
      if (puVar2 != (undefined *)0x0) {
        lVar15 = *plStack_a30;
        do {
          puVar6 = PTR_s_teardown_112678538;
          puVar18 = (undefined *)0x0;
          do {
            if (*plStack_a30 != lVar15) {
              _objc_enumerationMutation(puVar14);
            }
            uVar16 = *(ulong *)(lStack_a38 + (long)puVar18 * 8);
            uVar3 = uVar16;
            _objc_opt_respondsToSelector(uVar16,puVar6);
            if ((uVar3 & 1) != 0) {
              func_0x00010c26ac40(uVar16);
            }
            puVar18 = puVar18 + 1;
          } while (puVar2 != puVar18);
          puVar2 = puVar14;
          ppuVar10 = &puStack_a40;
          func_0x00010bf52a60();
        } while (puVar2 != (undefined *)0x0);
      }
      _objc_release(puVar14);
      func_0x00010c0c6440();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26ac40();
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_978) {
        return ppuVar13;
      }
      ___stack_chk_fail();
      lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(ppuVar10);
      ppuVar11 = ppuVar10;
      func_0x00010bef9860(ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = ppuVar13[1];
      _objc_retain(puVar14);
      puVar2 = puVar14;
      func_0x00010bf52a60();
      lVar15 = lRam0000000000000000;
      while (puVar2 != (undefined *)0x0) {
        puVar18 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar15) {
            _objc_enumerationMutation(puVar14);
          }
          puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          lVar17 = *(long *)((long)puVar18 * 8);
          _objc_opt_class();
          lVar4 = lVar17;
          func_0x00010c27dd80();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar17;
          func_0x00010c101280();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b3580(ppuVar11);
          _objc_release(puVar6);
          _objc_release(lVar5);
          _objc_release(lVar4);
          puVar6 = PTR_DAT_1126a53a0;
          _objc_retain(lVar17);
          lVar5 = lVar17;
          func_0x00010010fab4(lVar17,puVar6);
          lVar4 = lVar17;
          if ((int)lVar5 == 0) {
            lVar4 = 0;
          }
          _objc_retain(lVar4);
          _objc_release(lVar17);
          if (lVar4 != 0) {
            ppuVar12 = ppuVar11;
            func_0x00010bef9860(ppuVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0af5e0(lVar17);
            _objc_release(ppuVar12);
          }
          _objc_release(lVar4);
          puVar18 = puVar18 + 1;
        } while (puVar2 != puVar18);
        puVar2 = puVar14;
        func_0x00010bf52a60();
      }
      _objc_release(puVar14);
      ppuVar12 = ppuVar10;
      func_0x00010bef9860(ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar11);
      puVar14 = ppuVar13[2];
      _objc_retain(puVar14);
      puVar2 = puVar14;
      func_0x00010bf52a60();
      lVar15 = lRam0000000000000000;
      while (puVar2 != (undefined *)0x0) {
        puVar18 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar15) {
            _objc_enumerationMutation(puVar14);
          }
          func_0x00010c0ab340(ppuVar12);
          puVar18 = puVar18 + 1;
        } while (puVar2 != puVar18);
        puVar2 = puVar14;
        func_0x00010bf52a60();
      }
      _objc_release(puVar14);
      ppuVar11 = ppuVar10;
      func_0x00010bef9860(ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar12);
      puVar14 = ppuVar13[6];
      _objc_retain(puVar14);
      puVar2 = puVar14;
      func_0x00010bf52a60();
      lVar15 = lRam0000000000000000;
      while (puVar2 != (undefined *)0x0) {
        puVar18 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar15) {
            _objc_enumerationMutation(puVar14);
          }
          func_0x00010c0ab340(ppuVar11);
          puVar18 = puVar18 + 1;
        } while (puVar2 != puVar18);
        puVar2 = puVar14;
        func_0x00010bf52a60();
      }
      _objc_release(puVar14);
      _objc_release(ppuVar11);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
        return ppuVar10;
      }
      ___stack_chk_fail();
      return (undefined **)ppuVar10[5];
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return param_3;
}



/* Entry: 10635d6b8; end: 10635d7ef; -[SCOperaPlaylistPluginsManager didFinishOperaConfigurationSetup:] */

undefined1 * FUN_10635d6b8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uStack_910;
  long lStack_908;
  long *plStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  long lStack_848;
  undefined8 uStack_6b0;
  long lStack_6a8;
  long *plStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  long lStack_5e8;
  undefined8 uStack_580;
  long lStack_578;
  long *plStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  long lStack_4b8;
  undefined8 uStack_450;
  long lStack_448;
  long *plStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  long lStack_408;
  long *plStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  long lStack_2c8;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
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
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar9 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar9);
  lVar1 = lVar9;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar14 = *plStack_120;
    do {
      puVar7 = PTR_s_didFinishOperaConfigurationSetup_1125bb4d8;
      lVar16 = 0;
      do {
        if (*plStack_120 != lVar14) {
          _objc_enumerationMutation(lVar9);
        }
        uVar12 = *(ulong *)(lStack_128 + lVar16 * 8);
        uVar2 = uVar12;
        _objc_opt_respondsToSelector(uVar12,puVar7);
        if ((uVar2 & 1) != 0) {
          func_0x00010bf76cc0(uVar12);
        }
        lVar16 = lVar16 + 1;
      } while (lVar1 != lVar16);
      lVar1 = lVar9;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  puVar4 = &uStack_260;
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
  lVar9 = *(long *)(param_3 + 0x18);
  _objc_retain(lVar9);
  lVar1 = lVar9;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar14 = *plStack_250;
    do {
      puVar7 = PTR_s_updateOperaDependencies__11267faa0;
      lVar16 = 0;
      do {
        if (*plStack_250 != lVar14) {
          _objc_enumerationMutation(lVar9);
        }
        puVar13 = *(undefined1 **)(lStack_258 + lVar16 * 8);
        puVar3 = puVar13;
        _objc_opt_respondsToSelector(puVar13,puVar7);
        if (((ulong)puVar3 & 1) != 0) {
          func_0x00010c2881e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          puVar5 = (undefined8 *)puVar13;
        }
        lVar16 = lVar16 + 1;
      } while (lVar1 != lVar16);
      lVar1 = lVar9;
      puVar4 = &uStack_260;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return (undefined1 *)puVar5;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_450;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  lStack_408 = 0;
  uStack_410 = 0;
  uStack_3f8 = 0;
  plStack_400 = (long *)0x0;
  uStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_3d8 = 0;
  uStack_3e0 = 0;
  lVar14 = *(long *)(lVar9 + 8);
  _objc_retain(lVar14);
  lVar1 = lVar14;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar16 = *plStack_400;
    do {
      puVar7 = PTR_s_addEventListenersWithEventAnnoun_11259b9c8;
      lVar17 = 0;
      do {
        if (*plStack_400 != lVar16) {
          _objc_enumerationMutation(lVar14);
        }
        uVar12 = *(ulong *)(lStack_408 + lVar17 * 8);
        uVar2 = uVar12;
        _objc_opt_respondsToSelector(uVar12,puVar7);
        if ((uVar2 & 1) != 0) {
          func_0x00010bef8080(uVar12);
        }
        lVar17 = lVar17 + 1;
      } while (lVar1 != lVar17);
      lVar1 = lVar14;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar14);
  uStack_428 = 0;
  uStack_430 = 0;
  uStack_418 = 0;
  uStack_420 = 0;
  lStack_448 = 0;
  uStack_450 = 0;
  uStack_438 = 0;
  plStack_440 = (long *)0x0;
  lVar9 = *(long *)(lVar9 + 0x10);
  _objc_retain(lVar9);
  lVar1 = lVar9;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar14 = *plStack_440;
    do {
      lVar16 = 0;
      do {
        if (*plStack_440 != lVar14) {
          _objc_enumerationMutation(lVar9);
        }
        uVar10 = *(undefined8 *)(lStack_448 + lVar16 * 8);
        func_0x00010c127820();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef99a0(puVar4);
        _objc_release(uVar10);
        lVar16 = lVar16 + 1;
      } while (lVar1 != lVar16);
      lVar1 = lVar9;
      puVar5 = &uStack_450;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2c8) {
    ___stack_chk_fail();
    puVar8 = &uStack_580;
    lStack_4b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = (undefined1 *)puVar5;
    _objc_retain(puVar5);
    if (puVar5 != (undefined8 *)0x0) {
      uStack_558 = 0;
      uStack_560 = 0;
      uStack_548 = 0;
      uStack_550 = 0;
      lStack_578 = 0;
      uStack_580 = 0;
      uStack_568 = 0;
      plStack_570 = (long *)0x0;
      lVar9 = *(long *)((long)puVar4 + 8);
      _objc_retain(lVar9);
      lVar1 = lVar9;
      func_0x00010bf52a60();
      if (lVar1 != 0) {
        lVar14 = *plStack_570;
        do {
          lVar16 = 0;
          do {
            if (*plStack_570 != lVar14) {
              _objc_enumerationMutation(lVar9);
            }
            puVar7 = PTR_DAT_1126a5398;
            lVar11 = *(long *)(lStack_578 + lVar16 * 8);
            _objc_retain(lVar11);
            lVar17 = lVar11;
            func_0x00010010fab4(lVar11,puVar7);
            _objc_release(lVar11);
            if ((int)lVar17 != 0 && lVar11 != 0) {
              func_0x00010c1d5440(lVar11);
            }
            lVar16 = lVar16 + 1;
          } while (lVar1 != lVar16);
          lVar1 = lVar9;
          puVar8 = &uStack_580;
          func_0x00010bf52a60();
        } while (lVar1 != 0);
      }
      _objc_release(lVar9);
      puVar3 = (undefined1 *)puVar8;
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4b8) {
      return (undefined1 *)puVar5;
    }
    ___stack_chk_fail();
    puVar4 = &uStack_6b0;
    lStack_5e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar3);
    lStack_6a8 = 0;
    uStack_6b0 = 0;
    uStack_698 = 0;
    plStack_6a0 = (long *)0x0;
    uStack_688 = 0;
    uStack_690 = 0;
    uStack_678 = 0;
    uStack_680 = 0;
    lVar9 = *(long *)((long)puVar5 + 0x18);
    _objc_retain(lVar9);
    lVar1 = lVar9;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar14 = *plStack_6a0;
      do {
        puVar7 = PTR_s_setPlaylistItemController__1126551a0;
        lVar16 = 0;
        do {
          if (*plStack_6a0 != lVar14) {
            _objc_enumerationMutation(lVar9);
          }
          uVar12 = *(ulong *)(lStack_6a8 + lVar16 * 8);
          uVar2 = uVar12;
          _objc_opt_respondsToSelector(uVar12,puVar7);
          if ((uVar2 & 1) != 0) {
            func_0x00010c1ddde0(uVar12);
          }
          lVar16 = lVar16 + 1;
        } while (lVar1 != lVar16);
        lVar1 = lVar9;
        puVar4 = &uStack_6b0;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(lVar9);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5e8) {
      return puVar3;
    }
    ___stack_chk_fail();
    lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar4);
    lVar16 = *(long *)(puVar3 + 0x18);
    _objc_retain(lVar16);
    lVar1 = lVar16;
    func_0x00010bf52a60();
    lVar9 = lRam0000000000000000;
    puVar7 = PTR_s_setOperaControlling__112652f18;
    while (PTR_s_setOperaControlling__112652f18 = puVar7, lVar1 != 0) {
      lVar17 = 0;
      do {
        if (lRam0000000000000000 != lVar9) {
          _objc_enumerationMutation(lVar16);
        }
        uVar12 = *(ulong *)(lVar17 * 8);
        uVar2 = uVar12;
        _objc_opt_respondsToSelector(uVar12,puVar7);
        if ((uVar2 & 1) != 0) {
          func_0x00010c1d53c0(uVar12);
        }
        lVar17 = lVar17 + 1;
      } while (lVar1 != lVar17);
      lVar1 = lVar16;
      func_0x00010bf52a60();
      puVar7 = PTR_s_setOperaControlling__112652f18;
    }
    _objc_release(lVar16);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
      return (undefined1 *)puVar4;
    }
    ___stack_chk_fail();
    puVar5 = &uStack_910;
    lStack_848 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_908 = 0;
    uStack_910 = 0;
    uStack_8f8 = 0;
    plStack_900 = (long *)0x0;
    uStack_8e8 = 0;
    uStack_8f0 = 0;
    uStack_8d8 = 0;
    uStack_8e0 = 0;
    lVar9 = *(long *)((long)puVar4 + 0x18);
    _objc_retain(lVar9);
    lVar1 = lVar9;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar14 = *plStack_900;
      do {
        puVar7 = PTR_s_teardown_112678538;
        lVar16 = 0;
        do {
          if (*plStack_900 != lVar14) {
            _objc_enumerationMutation(lVar9);
          }
          uVar12 = *(ulong *)(lStack_908 + lVar16 * 8);
          uVar2 = uVar12;
          _objc_opt_respondsToSelector(uVar12,puVar7);
          if ((uVar2 & 1) != 0) {
            func_0x00010c26ac40(uVar12);
          }
          lVar16 = lVar16 + 1;
        } while (lVar1 != lVar16);
        lVar1 = lVar9;
        puVar5 = &uStack_910;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(lVar9);
    func_0x00010c0c6440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26ac40();
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_848) {
      ___stack_chk_fail();
      lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(puVar5);
      puVar3 = (undefined1 *)puVar5;
      func_0x00010bef9860(puVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar16 = *(long *)((long)puVar4 + 8);
      _objc_retain(lVar16);
      lVar1 = lVar16;
      func_0x00010bf52a60();
      lVar9 = lRam0000000000000000;
      while (lVar1 != 0) {
        lVar17 = 0;
        do {
          if (lRam0000000000000000 != lVar9) {
            _objc_enumerationMutation(lVar16);
          }
          puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          lVar15 = *(long *)(lVar17 * 8);
          _objc_opt_class();
          lVar11 = lVar15;
          func_0x00010c27dd80();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar15;
          func_0x00010c101280();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00(puVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b3580(puVar3);
          _objc_release(puVar7);
          _objc_release(lVar6);
          _objc_release(lVar11);
          puVar7 = PTR_DAT_1126a53a0;
          _objc_retain(lVar15);
          lVar6 = lVar15;
          func_0x00010010fab4(lVar15,puVar7);
          lVar11 = lVar15;
          if ((int)lVar6 == 0) {
            lVar11 = 0;
          }
          _objc_retain(lVar11);
          _objc_release(lVar15);
          if (lVar11 != 0) {
            puVar13 = puVar3;
            func_0x00010bef9860(puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0af5e0(lVar15);
            _objc_release(puVar13);
          }
          _objc_release(lVar11);
          lVar17 = lVar17 + 1;
        } while (lVar1 != lVar17);
        lVar1 = lVar16;
        func_0x00010bf52a60();
      }
      _objc_release(lVar16);
      puVar13 = (undefined1 *)puVar5;
      func_0x00010bef9860(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      lVar16 = *(long *)((long)puVar4 + 0x10);
      _objc_retain(lVar16);
      lVar1 = lVar16;
      func_0x00010bf52a60();
      lVar9 = lRam0000000000000000;
      while (lVar1 != 0) {
        lVar17 = 0;
        do {
          if (lRam0000000000000000 != lVar9) {
            _objc_enumerationMutation(lVar16);
          }
          func_0x00010c0ab340(puVar13);
          lVar17 = lVar17 + 1;
        } while (lVar1 != lVar17);
        lVar1 = lVar16;
        func_0x00010bf52a60();
      }
      _objc_release(lVar16);
      puVar3 = (undefined1 *)puVar5;
      func_0x00010bef9860(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
      lVar16 = *(long *)((long)puVar4 + 0x30);
      _objc_retain(lVar16);
      lVar1 = lVar16;
      func_0x00010bf52a60();
      lVar9 = lRam0000000000000000;
      while (lVar1 != 0) {
        lVar17 = 0;
        do {
          if (lRam0000000000000000 != lVar9) {
            _objc_enumerationMutation(lVar16);
          }
          func_0x00010c0ab340(puVar3);
          lVar17 = lVar17 + 1;
        } while (lVar1 != lVar17);
        lVar1 = lVar16;
        func_0x00010bf52a60();
      }
      _objc_release(lVar16);
      _objc_release(puVar3);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
        return (undefined1 *)puVar5;
      }
      ___stack_chk_fail();
      return *(undefined1 **)((long)puVar5 + 0x28);
    }
    return (undefined1 *)puVar4;
  }
  return (undefined1 *)puVar4;
}



/* Entry: 10635d7f0; end: 10635d93b; -[SCOperaPlaylistPluginsManager updateOperaDependencies:] */

undefined8 * FUN_10635d7f0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uStack_7e0;
  long lStack_7d8;
  long *plStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  long lStack_718;
  undefined8 uStack_580;
  long lStack_578;
  long *plStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  long lStack_4b8;
  undefined8 uStack_450;
  long lStack_448;
  long *plStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  long lStack_388;
  undefined8 uStack_320;
  long lStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
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
  
  puVar4 = &uStack_130;
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
  lVar9 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar9);
  lVar1 = lVar9;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar13 = *plStack_120;
    do {
      puVar7 = PTR_s_updateOperaDependencies__11267faa0;
      lVar16 = 0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(lVar9);
        }
        puVar12 = *(undefined1 **)(lStack_128 + lVar16 * 8);
        puVar2 = puVar12;
        _objc_opt_respondsToSelector(puVar12,puVar7);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010c2881e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_3);
          param_3 = puVar12;
        }
        lVar16 = lVar16 + 1;
      } while (lVar1 != lVar16);
      lVar1 = lVar9;
      puVar4 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
    return (undefined8 *)param_3;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_320;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  lStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2c8 = 0;
  plStack_2d0 = (long *)0x0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  lVar13 = *(long *)(lVar9 + 8);
  _objc_retain(lVar13);
  lVar1 = lVar13;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar16 = *plStack_2d0;
    do {
      puVar7 = PTR_s_addEventListenersWithEventAnnoun_11259b9c8;
      lVar17 = 0;
      do {
        if (*plStack_2d0 != lVar16) {
          _objc_enumerationMutation(lVar13);
        }
        uVar14 = *(ulong *)(lStack_2d8 + lVar17 * 8);
        uVar3 = uVar14;
        _objc_opt_respondsToSelector(uVar14,puVar7);
        if ((uVar3 & 1) != 0) {
          func_0x00010bef8080(uVar14);
        }
        lVar17 = lVar17 + 1;
      } while (lVar1 != lVar17);
      lVar1 = lVar13;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar13);
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  lStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  plStack_310 = (long *)0x0;
  lVar9 = *(long *)(lVar9 + 0x10);
  _objc_retain(lVar9);
  lVar1 = lVar9;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar13 = *plStack_310;
    do {
      lVar16 = 0;
      do {
        if (*plStack_310 != lVar13) {
          _objc_enumerationMutation(lVar9);
        }
        uVar10 = *(undefined8 *)(lStack_318 + lVar16 * 8);
        func_0x00010c127820();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef99a0(puVar4);
        _objc_release(uVar10);
        lVar16 = lVar16 + 1;
      } while (lVar1 != lVar16);
      lVar1 = lVar9;
      puVar5 = &uStack_320;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return puVar4;
  }
  ___stack_chk_fail();
  puVar8 = &uStack_450;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined1 *)puVar5;
  _objc_retain(puVar5);
  if (puVar5 != (undefined8 *)0x0) {
    uStack_428 = 0;
    uStack_430 = 0;
    uStack_418 = 0;
    uStack_420 = 0;
    lStack_448 = 0;
    uStack_450 = 0;
    uStack_438 = 0;
    plStack_440 = (long *)0x0;
    lVar9 = *(long *)((long)puVar4 + 8);
    _objc_retain(lVar9);
    lVar1 = lVar9;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar13 = *plStack_440;
      do {
        lVar16 = 0;
        do {
          if (*plStack_440 != lVar13) {
            _objc_enumerationMutation(lVar9);
          }
          puVar7 = PTR_DAT_1126a5398;
          lVar11 = *(long *)(lStack_448 + lVar16 * 8);
          _objc_retain(lVar11);
          lVar17 = lVar11;
          func_0x00010010fab4(lVar11,puVar7);
          _objc_release(lVar11);
          if ((int)lVar17 != 0 && lVar11 != 0) {
            func_0x00010c1d5440(lVar11);
          }
          lVar16 = lVar16 + 1;
        } while (lVar1 != lVar16);
        lVar1 = lVar9;
        puVar8 = &uStack_450;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(lVar9);
    puVar2 = (undefined1 *)puVar8;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_388) {
    ___stack_chk_fail();
    puVar4 = &uStack_580;
    lStack_4b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar2);
    lStack_578 = 0;
    uStack_580 = 0;
    uStack_568 = 0;
    plStack_570 = (long *)0x0;
    uStack_558 = 0;
    uStack_560 = 0;
    uStack_548 = 0;
    uStack_550 = 0;
    lVar9 = *(long *)((long)puVar5 + 0x18);
    _objc_retain(lVar9);
    lVar1 = lVar9;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar13 = *plStack_570;
      do {
        puVar7 = PTR_s_setPlaylistItemController__1126551a0;
        lVar16 = 0;
        do {
          if (*plStack_570 != lVar13) {
            _objc_enumerationMutation(lVar9);
          }
          uVar14 = *(ulong *)(lStack_578 + lVar16 * 8);
          uVar3 = uVar14;
          _objc_opt_respondsToSelector(uVar14,puVar7);
          if ((uVar3 & 1) != 0) {
            func_0x00010c1ddde0(uVar14);
          }
          lVar16 = lVar16 + 1;
        } while (lVar1 != lVar16);
        lVar1 = lVar9;
        puVar4 = &uStack_580;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(lVar9);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4b8) {
      return (undefined8 *)puVar2;
    }
    ___stack_chk_fail();
    lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar4);
    lVar16 = *(long *)(puVar2 + 0x18);
    _objc_retain(lVar16);
    lVar1 = lVar16;
    func_0x00010bf52a60();
    lVar9 = lRam0000000000000000;
    puVar7 = PTR_s_setOperaControlling__112652f18;
    while (PTR_s_setOperaControlling__112652f18 = puVar7, lVar1 != 0) {
      lVar17 = 0;
      do {
        if (lRam0000000000000000 != lVar9) {
          _objc_enumerationMutation(lVar16);
        }
        uVar14 = *(ulong *)(lVar17 * 8);
        uVar3 = uVar14;
        _objc_opt_respondsToSelector(uVar14,puVar7);
        if ((uVar3 & 1) != 0) {
          func_0x00010c1d53c0(uVar14);
        }
        lVar17 = lVar17 + 1;
      } while (lVar1 != lVar17);
      lVar1 = lVar16;
      func_0x00010bf52a60();
      puVar7 = PTR_s_setOperaControlling__112652f18;
    }
    _objc_release(lVar16);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
      return puVar4;
    }
    ___stack_chk_fail();
    puVar5 = &uStack_7e0;
    lStack_718 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_7d8 = 0;
    uStack_7e0 = 0;
    uStack_7c8 = 0;
    plStack_7d0 = (long *)0x0;
    uStack_7b8 = 0;
    uStack_7c0 = 0;
    uStack_7a8 = 0;
    uStack_7b0 = 0;
    lVar9 = *(long *)((long)puVar4 + 0x18);
    _objc_retain(lVar9);
    lVar1 = lVar9;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar13 = *plStack_7d0;
      do {
        puVar7 = PTR_s_teardown_112678538;
        lVar16 = 0;
        do {
          if (*plStack_7d0 != lVar13) {
            _objc_enumerationMutation(lVar9);
          }
          uVar14 = *(ulong *)(lStack_7d8 + lVar16 * 8);
          uVar3 = uVar14;
          _objc_opt_respondsToSelector(uVar14,puVar7);
          if ((uVar3 & 1) != 0) {
            func_0x00010c26ac40(uVar14);
          }
          lVar16 = lVar16 + 1;
        } while (lVar1 != lVar16);
        lVar1 = lVar9;
        puVar5 = &uStack_7e0;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(lVar9);
    func_0x00010c0c6440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26ac40();
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_718) {
      return puVar4;
    }
    ___stack_chk_fail();
    lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar5);
    puVar2 = (undefined1 *)puVar5;
    func_0x00010bef9860(puVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar16 = *(long *)((long)puVar4 + 8);
    _objc_retain(lVar16);
    lVar1 = lVar16;
    func_0x00010bf52a60();
    lVar9 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar17 = 0;
      do {
        if (lRam0000000000000000 != lVar9) {
          _objc_enumerationMutation(lVar16);
        }
        puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        lVar15 = *(long *)(lVar17 * 8);
        _objc_opt_class();
        lVar11 = lVar15;
        func_0x00010c27dd80();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar15;
        func_0x00010c101280();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b3580(puVar2);
        _objc_release(puVar7);
        _objc_release(lVar6);
        _objc_release(lVar11);
        puVar7 = PTR_DAT_1126a53a0;
        _objc_retain(lVar15);
        lVar6 = lVar15;
        func_0x00010010fab4(lVar15,puVar7);
        lVar11 = lVar15;
        if ((int)lVar6 == 0) {
          lVar11 = 0;
        }
        _objc_retain(lVar11);
        _objc_release(lVar15);
        if (lVar11 != 0) {
          puVar12 = puVar2;
          func_0x00010bef9860(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0af5e0(lVar15);
          _objc_release(puVar12);
        }
        _objc_release(lVar11);
        lVar17 = lVar17 + 1;
      } while (lVar1 != lVar17);
      lVar1 = lVar16;
      func_0x00010bf52a60();
    }
    _objc_release(lVar16);
    puVar12 = (undefined1 *)puVar5;
    func_0x00010bef9860(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    lVar16 = *(long *)((long)puVar4 + 0x10);
    _objc_retain(lVar16);
    lVar1 = lVar16;
    func_0x00010bf52a60();
    lVar9 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar17 = 0;
      do {
        if (lRam0000000000000000 != lVar9) {
          _objc_enumerationMutation(lVar16);
        }
        func_0x00010c0ab340(puVar12);
        lVar17 = lVar17 + 1;
      } while (lVar1 != lVar17);
      lVar1 = lVar16;
      func_0x00010bf52a60();
    }
    _objc_release(lVar16);
    puVar2 = (undefined1 *)puVar5;
    func_0x00010bef9860(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    lVar16 = *(long *)((long)puVar4 + 0x30);
    _objc_retain(lVar16);
    lVar1 = lVar16;
    func_0x00010bf52a60();
    lVar9 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar17 = 0;
      do {
        if (lRam0000000000000000 != lVar9) {
          _objc_enumerationMutation(lVar16);
        }
        func_0x00010c0ab340(puVar2);
        lVar17 = lVar17 + 1;
      } while (lVar1 != lVar17);
      lVar1 = lVar16;
      func_0x00010bf52a60();
    }
    _objc_release(lVar16);
    _objc_release(puVar2);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
      return puVar5;
    }
    ___stack_chk_fail();
    return (undefined8 *)*(undefined1 **)((long)puVar5 + 0x28);
  }
  return puVar5;
}



/* Entry: 10635d93c; end: 10635db2f; -[SCOperaPlaylistPluginsManager addEventListenersWithEventAnnouncing:] */

undefined1 * FUN_10635d93c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_6b0;
  long lStack_6a8;
  long *plStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  long lStack_5e8;
  undefined8 uStack_450;
  long lStack_448;
  long *plStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  long lStack_388;
  undefined8 uStack_320;
  long lStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long lStack_258;
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
  long lStack_68;
  
  puVar3 = &uStack_1f0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar9 = *(long *)(param_1 + 8);
  _objc_retain(lVar9);
  lVar1 = lVar9;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar13 = *plStack_1a0;
    do {
      puVar7 = PTR_s_addEventListenersWithEventAnnoun_11259b9c8;
      lVar16 = 0;
      do {
        if (*plStack_1a0 != lVar13) {
          _objc_enumerationMutation(lVar9);
        }
        uVar12 = *(ulong *)(lStack_1a8 + lVar16 * 8);
        uVar2 = uVar12;
        _objc_opt_respondsToSelector(uVar12,puVar7);
        if ((uVar2 & 1) != 0) {
          func_0x00010bef8080(uVar12);
        }
        lVar16 = lVar16 + 1;
      } while (lVar1 != lVar16);
      lVar1 = lVar9;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar9);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  lVar9 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar9);
  lVar1 = lVar9;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar13 = *plStack_1e0;
    do {
      lVar16 = 0;
      do {
        if (*plStack_1e0 != lVar13) {
          _objc_enumerationMutation(lVar9);
        }
        uVar10 = *(undefined8 *)(lStack_1e8 + lVar16 * 8);
        func_0x00010c127820();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef99a0(param_3);
        _objc_release(uVar10);
        lVar16 = lVar16 + 1;
      } while (lVar1 != lVar16);
      lVar1 = lVar9;
      puVar3 = &uStack_1f0;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_320;
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (undefined1 *)puVar3;
  _objc_retain(puVar3);
  if (puVar3 != (undefined8 *)0x0) {
    uStack_2f8 = 0;
    uStack_300 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    lStack_318 = 0;
    uStack_320 = 0;
    uStack_308 = 0;
    plStack_310 = (long *)0x0;
    lVar9 = *(long *)(param_3 + 8);
    _objc_retain(lVar9);
    lVar1 = lVar9;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar13 = *plStack_310;
      do {
        lVar16 = 0;
        do {
          if (*plStack_310 != lVar13) {
            _objc_enumerationMutation(lVar9);
          }
          puVar7 = PTR_DAT_1126a5398;
          lVar11 = *(long *)(lStack_318 + lVar16 * 8);
          _objc_retain(lVar11);
          lVar15 = lVar11;
          func_0x00010010fab4(lVar11,puVar7);
          _objc_release(lVar11);
          if ((int)lVar15 != 0 && lVar11 != 0) {
            func_0x00010c1d5440(lVar11);
          }
          lVar16 = lVar16 + 1;
        } while (lVar1 != lVar16);
        lVar1 = lVar9;
        puVar5 = &uStack_320;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(lVar9);
    puVar4 = (undefined1 *)puVar5;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
    return (undefined1 *)puVar3;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_450;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  lStack_448 = 0;
  uStack_450 = 0;
  uStack_438 = 0;
  plStack_440 = (long *)0x0;
  uStack_428 = 0;
  uStack_430 = 0;
  uStack_418 = 0;
  uStack_420 = 0;
  lVar9 = *(long *)((long)puVar3 + 0x18);
  _objc_retain(lVar9);
  lVar1 = lVar9;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar13 = *plStack_440;
    do {
      puVar7 = PTR_s_setPlaylistItemController__1126551a0;
      lVar16 = 0;
      do {
        if (*plStack_440 != lVar13) {
          _objc_enumerationMutation(lVar9);
        }
        uVar12 = *(ulong *)(lStack_448 + lVar16 * 8);
        uVar2 = uVar12;
        _objc_opt_respondsToSelector(uVar12,puVar7);
        if ((uVar2 & 1) != 0) {
          func_0x00010c1ddde0(uVar12);
        }
        lVar16 = lVar16 + 1;
      } while (lVar1 != lVar16);
      lVar1 = lVar9;
      puVar5 = &uStack_450;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return puVar4;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar5);
  lVar16 = *(long *)(puVar4 + 0x18);
  _objc_retain(lVar16);
  lVar1 = lVar16;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  puVar7 = PTR_s_setOperaControlling__112652f18;
  while (PTR_s_setOperaControlling__112652f18 = puVar7, lVar1 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(lVar16);
      }
      uVar12 = *(ulong *)(lVar15 * 8);
      uVar2 = uVar12;
      _objc_opt_respondsToSelector(uVar12,puVar7);
      if ((uVar2 & 1) != 0) {
        func_0x00010c1d53c0(uVar12);
      }
      lVar15 = lVar15 + 1;
    } while (lVar1 != lVar15);
    lVar1 = lVar16;
    func_0x00010bf52a60();
    puVar7 = PTR_s_setOperaControlling__112652f18;
  }
  _objc_release(lVar16);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return (undefined1 *)puVar5;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_6b0;
  lStack_5e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_6a8 = 0;
  uStack_6b0 = 0;
  uStack_698 = 0;
  plStack_6a0 = (long *)0x0;
  uStack_688 = 0;
  uStack_690 = 0;
  uStack_678 = 0;
  uStack_680 = 0;
  lVar9 = *(long *)((long)puVar5 + 0x18);
  _objc_retain(lVar9);
  lVar1 = lVar9;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar13 = *plStack_6a0;
    do {
      puVar7 = PTR_s_teardown_112678538;
      lVar16 = 0;
      do {
        if (*plStack_6a0 != lVar13) {
          _objc_enumerationMutation(lVar9);
        }
        uVar12 = *(ulong *)(lStack_6a8 + lVar16 * 8);
        uVar2 = uVar12;
        _objc_opt_respondsToSelector(uVar12,puVar7);
        if ((uVar2 & 1) != 0) {
          func_0x00010c26ac40(uVar12);
        }
        lVar16 = lVar16 + 1;
      } while (lVar1 != lVar16);
      lVar1 = lVar9;
      puVar3 = &uStack_6b0;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar9);
  func_0x00010c0c6440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26ac40();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5e8) {
    return (undefined1 *)puVar5;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar3);
  puVar4 = (undefined1 *)puVar3;
  func_0x00010bef9860(puVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = *(long *)((long)puVar5 + 8);
  _objc_retain(lVar16);
  lVar1 = lVar16;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(lVar16);
      }
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      lVar14 = *(long *)(lVar15 * 8);
      _objc_opt_class();
      lVar11 = lVar14;
      func_0x00010c27dd80();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar14;
      func_0x00010c101280();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b3580(puVar4);
      _objc_release(puVar7);
      _objc_release(lVar6);
      _objc_release(lVar11);
      puVar7 = PTR_DAT_1126a53a0;
      _objc_retain(lVar14);
      lVar6 = lVar14;
      func_0x00010010fab4(lVar14,puVar7);
      lVar11 = lVar14;
      if ((int)lVar6 == 0) {
        lVar11 = 0;
      }
      _objc_retain(lVar11);
      _objc_release(lVar14);
      if (lVar11 != 0) {
        puVar8 = puVar4;
        func_0x00010bef9860(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0af5e0(lVar14);
        _objc_release(puVar8);
      }
      _objc_release(lVar11);
      lVar15 = lVar15 + 1;
    } while (lVar1 != lVar15);
    lVar1 = lVar16;
    func_0x00010bf52a60();
  }
  _objc_release(lVar16);
  puVar8 = (undefined1 *)puVar3;
  func_0x00010bef9860(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  lVar16 = *(long *)((long)puVar5 + 0x10);
  _objc_retain(lVar16);
  lVar1 = lVar16;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(lVar16);
      }
      func_0x00010c0ab340(puVar8);
      lVar15 = lVar15 + 1;
    } while (lVar1 != lVar15);
    lVar1 = lVar16;
    func_0x00010bf52a60();
  }
  _objc_release(lVar16);
  puVar4 = (undefined1 *)puVar3;
  func_0x00010bef9860(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  lVar16 = *(long *)((long)puVar5 + 0x30);
  _objc_retain(lVar16);
  lVar1 = lVar16;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(lVar16);
      }
      func_0x00010c0ab340(puVar4);
      lVar15 = lVar15 + 1;
    } while (lVar1 != lVar15);
    lVar1 = lVar16;
    func_0x00010bf52a60();
  }
  _objc_release(lVar16);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return (undefined1 *)puVar3;
  }
  ___stack_chk_fail();
  return *(undefined1 **)((long)puVar3 + 0x28);
}



/* Entry: 10635db30; end: 10635dc87; -[SCOperaPlaylistPluginsManager setOperaEventSubscriber:] */

undefined1 * FUN_10635db30(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_4c0;
  long lStack_4b8;
  long *plStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  long lStack_3f8;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
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
  
  puVar4 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  _objc_retain(param_3);
  if (param_3 != (undefined1 *)0x0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar9 = *(long *)(param_1 + 8);
    _objc_retain(lVar9);
    lVar1 = lVar9;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar12 = *plStack_120;
      do {
        lVar14 = 0;
        do {
          if (*plStack_120 != lVar12) {
            _objc_enumerationMutation(lVar9);
          }
          puVar6 = PTR_DAT_1126a5398;
          lVar10 = *(long *)(lStack_128 + lVar14 * 8);
          _objc_retain(lVar10);
          lVar15 = lVar10;
          func_0x00010010fab4(lVar10,puVar6);
          _objc_release(lVar10);
          if ((int)lVar15 != 0 && lVar10 != 0) {
            func_0x00010c1d5440(lVar10);
          }
          lVar14 = lVar14 + 1;
        } while (lVar1 != lVar14);
        lVar1 = lVar9;
        puVar4 = &uStack_130;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(lVar9);
    puVar3 = (undefined1 *)puVar4;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  puVar4 = &uStack_260;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar3);
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  lVar9 = *(long *)(param_3 + 0x18);
  _objc_retain(lVar9);
  lVar1 = lVar9;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar12 = *plStack_250;
    do {
      puVar6 = PTR_s_setPlaylistItemController__1126551a0;
      lVar14 = 0;
      do {
        if (*plStack_250 != lVar12) {
          _objc_enumerationMutation(lVar9);
        }
        uVar11 = *(ulong *)(lStack_258 + lVar14 * 8);
        uVar2 = uVar11;
        _objc_opt_respondsToSelector(uVar11,puVar6);
        if ((uVar2 & 1) != 0) {
          func_0x00010c1ddde0(uVar11);
        }
        lVar14 = lVar14 + 1;
      } while (lVar1 != lVar14);
      lVar1 = lVar9;
      puVar4 = &uStack_260;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return puVar3;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  lVar14 = *(long *)(puVar3 + 0x18);
  _objc_retain(lVar14);
  lVar1 = lVar14;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  puVar6 = PTR_s_setOperaControlling__112652f18;
  while (PTR_s_setOperaControlling__112652f18 = puVar6, lVar1 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(lVar14);
      }
      uVar11 = *(ulong *)(lVar15 * 8);
      uVar2 = uVar11;
      _objc_opt_respondsToSelector(uVar11,puVar6);
      if ((uVar2 & 1) != 0) {
        func_0x00010c1d53c0(uVar11);
      }
      lVar15 = lVar15 + 1;
    } while (lVar1 != lVar15);
    lVar1 = lVar14;
    func_0x00010bf52a60();
    puVar6 = PTR_s_setOperaControlling__112652f18;
  }
  _objc_release(lVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return (undefined1 *)puVar4;
  }
  ___stack_chk_fail();
  puVar8 = &uStack_4c0;
  lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_4b8 = 0;
  uStack_4c0 = 0;
  uStack_4a8 = 0;
  plStack_4b0 = (long *)0x0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  uStack_488 = 0;
  uStack_490 = 0;
  lVar9 = *(long *)((long)puVar4 + 0x18);
  _objc_retain(lVar9);
  lVar1 = lVar9;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar12 = *plStack_4b0;
    do {
      puVar6 = PTR_s_teardown_112678538;
      lVar14 = 0;
      do {
        if (*plStack_4b0 != lVar12) {
          _objc_enumerationMutation(lVar9);
        }
        uVar11 = *(ulong *)(lStack_4b8 + lVar14 * 8);
        uVar2 = uVar11;
        _objc_opt_respondsToSelector(uVar11,puVar6);
        if ((uVar2 & 1) != 0) {
          func_0x00010c26ac40(uVar11);
        }
        lVar14 = lVar14 + 1;
      } while (lVar1 != lVar14);
      lVar1 = lVar9;
      puVar8 = &uStack_4c0;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar9);
  func_0x00010c0c6440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26ac40();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3f8) {
    return (undefined1 *)puVar4;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar8);
  puVar3 = (undefined1 *)puVar8;
  func_0x00010bef9860(puVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = *(long *)((long)puVar4 + 8);
  _objc_retain(lVar14);
  lVar1 = lVar14;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(lVar14);
      }
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      lVar13 = *(long *)(lVar15 * 8);
      _objc_opt_class();
      lVar10 = lVar13;
      func_0x00010c27dd80();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar13;
      func_0x00010c101280();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b3580(puVar3);
      _objc_release(puVar6);
      _objc_release(lVar5);
      _objc_release(lVar10);
      puVar6 = PTR_DAT_1126a53a0;
      _objc_retain(lVar13);
      lVar5 = lVar13;
      func_0x00010010fab4(lVar13,puVar6);
      lVar10 = lVar13;
      if ((int)lVar5 == 0) {
        lVar10 = 0;
      }
      _objc_retain(lVar10);
      _objc_release(lVar13);
      if (lVar10 != 0) {
        puVar7 = puVar3;
        func_0x00010bef9860(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0af5e0(lVar13);
        _objc_release(puVar7);
      }
      _objc_release(lVar10);
      lVar15 = lVar15 + 1;
    } while (lVar1 != lVar15);
    lVar1 = lVar14;
    func_0x00010bf52a60();
  }
  _objc_release(lVar14);
  puVar7 = (undefined1 *)puVar8;
  func_0x00010bef9860(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  lVar14 = *(long *)((long)puVar4 + 0x10);
  _objc_retain(lVar14);
  lVar1 = lVar14;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(lVar14);
      }
      func_0x00010c0ab340(puVar7);
      lVar15 = lVar15 + 1;
    } while (lVar1 != lVar15);
    lVar1 = lVar14;
    func_0x00010bf52a60();
  }
  _objc_release(lVar14);
  puVar3 = (undefined1 *)puVar8;
  func_0x00010bef9860(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  lVar14 = *(long *)((long)puVar4 + 0x30);
  _objc_retain(lVar14);
  lVar1 = lVar14;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(lVar14);
      }
      func_0x00010c0ab340(puVar3);
      lVar15 = lVar15 + 1;
    } while (lVar1 != lVar15);
    lVar1 = lVar14;
    func_0x00010bf52a60();
  }
  _objc_release(lVar14);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return (undefined1 *)puVar8;
  }
  ___stack_chk_fail();
  return *(undefined1 **)((long)puVar8 + 0x28);
}



/* Entry: 10635dc88; end: 10635ddbf; -[SCOperaPlaylistPluginsManager setPlaylistItemController:] */

undefined1 * FUN_10635dc88(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_390;
  long lStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long lStack_2c8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar3 = &uStack_130;
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
  lVar10 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar10);
  lVar1 = lVar10;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar12 = *plStack_120;
    do {
      puVar7 = PTR_s_setPlaylistItemController__1126551a0;
      lVar14 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(lVar10);
        }
        uVar11 = *(ulong *)(lStack_128 + lVar14 * 8);
        uVar2 = uVar11;
        _objc_opt_respondsToSelector(uVar11,puVar7);
        if ((uVar2 & 1) != 0) {
          func_0x00010c1ddde0(uVar11);
        }
        lVar14 = lVar14 + 1;
      } while (lVar1 != lVar14);
      lVar1 = lVar10;
      puVar3 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar3);
  lVar14 = *(long *)(param_3 + 0x18);
  _objc_retain(lVar14);
  lVar1 = lVar14;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  puVar7 = PTR_s_setOperaControlling__112652f18;
  while (PTR_s_setOperaControlling__112652f18 = puVar7, lVar1 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(lVar14);
      }
      uVar11 = *(ulong *)(lVar15 * 8);
      uVar2 = uVar11;
      _objc_opt_respondsToSelector(uVar11,puVar7);
      if ((uVar2 & 1) != 0) {
        func_0x00010c1d53c0(uVar11);
      }
      lVar15 = lVar15 + 1;
    } while (lVar1 != lVar15);
    lVar1 = lVar14;
    func_0x00010bf52a60();
    puVar7 = PTR_s_setOperaControlling__112652f18;
  }
  _objc_release(lVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return (undefined1 *)puVar3;
  }
  ___stack_chk_fail();
  puVar9 = &uStack_390;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  plStack_380 = (long *)0x0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  lVar10 = *(long *)((long)puVar3 + 0x18);
  _objc_retain(lVar10);
  lVar1 = lVar10;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar12 = *plStack_380;
    do {
      puVar7 = PTR_s_teardown_112678538;
      lVar14 = 0;
      do {
        if (*plStack_380 != lVar12) {
          _objc_enumerationMutation(lVar10);
        }
        uVar11 = *(ulong *)(lStack_388 + lVar14 * 8);
        uVar2 = uVar11;
        _objc_opt_respondsToSelector(uVar11,puVar7);
        if ((uVar2 & 1) != 0) {
          func_0x00010c26ac40(uVar11);
        }
        lVar14 = lVar14 + 1;
      } while (lVar1 != lVar14);
      lVar1 = lVar10;
      puVar9 = &uStack_390;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar10);
  func_0x00010c0c6440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26ac40();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2c8) {
    ___stack_chk_fail();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar9);
    puVar4 = (undefined1 *)puVar9;
    func_0x00010bef9860(puVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = *(long *)((long)puVar3 + 8);
    _objc_retain(lVar14);
    lVar1 = lVar14;
    func_0x00010bf52a60();
    lVar10 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar15 = 0;
      do {
        if (lRam0000000000000000 != lVar10) {
          _objc_enumerationMutation(lVar14);
        }
        puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        lVar13 = *(long *)(lVar15 * 8);
        _objc_opt_class();
        lVar5 = lVar13;
        func_0x00010c27dd80();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar13;
        func_0x00010c101280();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b3580(puVar4);
        _objc_release(puVar7);
        _objc_release(lVar6);
        _objc_release(lVar5);
        puVar7 = PTR_DAT_1126a53a0;
        _objc_retain(lVar13);
        lVar6 = lVar13;
        func_0x00010010fab4(lVar13,puVar7);
        lVar5 = lVar13;
        if ((int)lVar6 == 0) {
          lVar5 = 0;
        }
        _objc_retain(lVar5);
        _objc_release(lVar13);
        if (lVar5 != 0) {
          puVar8 = puVar4;
          func_0x00010bef9860(puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0af5e0(lVar13);
          _objc_release(puVar8);
        }
        _objc_release(lVar5);
        lVar15 = lVar15 + 1;
      } while (lVar1 != lVar15);
      lVar1 = lVar14;
      func_0x00010bf52a60();
    }
    _objc_release(lVar14);
    puVar8 = (undefined1 *)puVar9;
    func_0x00010bef9860(puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    lVar14 = *(long *)((long)puVar3 + 0x10);
    _objc_retain(lVar14);
    lVar1 = lVar14;
    func_0x00010bf52a60();
    lVar10 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar15 = 0;
      do {
        if (lRam0000000000000000 != lVar10) {
          _objc_enumerationMutation(lVar14);
        }
        func_0x00010c0ab340(puVar8);
        lVar15 = lVar15 + 1;
      } while (lVar1 != lVar15);
      lVar1 = lVar14;
      func_0x00010bf52a60();
    }
    _objc_release(lVar14);
    puVar4 = (undefined1 *)puVar9;
    func_0x00010bef9860(puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    lVar14 = *(long *)((long)puVar3 + 0x30);
    _objc_retain(lVar14);
    lVar1 = lVar14;
    func_0x00010bf52a60();
    lVar10 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar15 = 0;
      do {
        if (lRam0000000000000000 != lVar10) {
          _objc_enumerationMutation(lVar14);
        }
        func_0x00010c0ab340(puVar4);
        lVar15 = lVar15 + 1;
      } while (lVar1 != lVar15);
      lVar1 = lVar14;
      func_0x00010bf52a60();
    }
    _objc_release(lVar14);
    _objc_release(puVar4);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
      return (undefined1 *)puVar9;
    }
    ___stack_chk_fail();
    return *(undefined1 **)((long)puVar9 + 0x28);
  }
  return (undefined1 *)puVar3;
}


