/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10722acb0; end: 10722b193; -[SCStoriesOperaDataSource _friendStoriesDataSourceForStorySnap:] */

void FUN_10722acb0(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x24;
  long lVar10;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf28a40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  func_0x00010bfbeba0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar7;
  func_0x00010bf529e0();
  _objc_release(lVar7);
  _objc_release(lVar3);
  if (lVar2 != 0) {
    unaff_x24 = 0;
    goto LAB_10722b14c;
  }
  lVar3 = *(long *)(param_1 + 0x70);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = *(long *)(param_1 + 0x58);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar8 = lVar3;
      func_0x0001085367d4();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_3;
      func_0x00010bf3cf60(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(lVar8);
      lVar7 = lVar8;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar7 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar8);
          }
          uVar5 = *(undefined8 *)(lVar10 * 8);
          func_0x00010bf3cf60();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c0720c0();
          _objc_release(uVar5);
          if ((int)uVar6 != 0) {
            func_0x00010c0b0de0(*(undefined8 *)(param_1 + 0x108));
            unaff_x24 = *(long *)(param_1 + 0x70);
            func_0x00010c0e00e0(unaff_x24);
            _objc_retainAutoreleasedReturnValue();
            bVar1 = false;
            goto LAB_10722ae84;
          }
          lVar10 = lVar10 + 1;
        } while (lVar7 != lVar10);
        lVar7 = lVar8;
        func_0x00010bf52a60();
        unaff_x24 = 0;
      }
      bVar1 = true;
LAB_10722ae84:
      _objc_release(lVar8);
      _objc_release(lVar4);
      _objc_release(lVar8);
      _objc_release(lVar3);
      if (!bVar1) goto LAB_10722b14c;
    }
  }
  uVar6 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c2923e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010853acb4(param_3,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  lVar7 = *(long *)(param_1 + 0x70);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) {
    lVar2 = param_3;
    func_0x00010853a834();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar7 = *(long *)(param_1 + 0x70);
      lVar8 = param_3;
      func_0x00010bf5b080(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar8;
      func_0x00010bf5b440();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar8);
      if (lVar7 == 0) {
        lVar7 = *(long *)(param_1 + 0x70);
        lVar8 = param_3;
        func_0x00010bf5b080(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar8;
        func_0x00010bf5bc00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        _objc_release(lVar8);
        if (lVar7 == 0) {
          lVar7 = *(long *)(param_1 + 0x70);
          lVar8 = param_3;
          func_0x00010853a9c4(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar8);
          if (lVar7 == 0) {
            lVar7 = *(long *)(param_1 + 0x70);
            lVar8 = param_3;
            func_0x00010853ab3c(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar8);
            if (lVar7 == 0) goto LAB_10722b0ec;
            uVar6 = *(undefined8 *)(param_1 + 0x108);
          }
          else {
            uVar6 = *(undefined8 *)(param_1 + 0x108);
          }
        }
        else {
          uVar6 = *(undefined8 *)(param_1 + 0x108);
        }
      }
      else {
        uVar6 = *(undefined8 *)(param_1 + 0x108);
      }
      func_0x00010c0b0de0(uVar6);
      _objc_retain(lVar7);
      unaff_x24 = lVar7;
    }
    else {
      lVar8 = *(long *)(param_1 + 0x78);
      func_0x00010c0e00e0(lVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      lVar7 = *(long *)(param_1 + 0x70);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar8;
      if (lVar7 == 0) {
LAB_10722b0ec:
        func_0x00010c0b0de0(*(undefined8 *)(param_1 + 0x108));
        lVar7 = *(long *)(param_1 + 0x70);
        func_0x00010bf00d20();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = lVar7;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar7);
        lVar7 = 0;
      }
      else {
        func_0x00010c0b0de0(*(undefined8 *)(param_1 + 0x108));
        _objc_retain(lVar7);
        unaff_x24 = lVar7;
      }
    }
    _objc_release(lVar2);
  }
  else {
    _objc_retain();
    unaff_x24 = lVar7;
  }
  _objc_release(lVar3);
  _objc_release(lVar7);
LAB_10722b14c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    unaff_x24 = *(long *)(param_3 + 400);
    _objc_retain(unaff_x24);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x24);
  return;
}



/* Entry: 10722b194; end: 10722b1bb; -[SCStoriesOperaDataSource mediaManager] */

void FUN_10722b194(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 400);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10722b1bc; end: 10722b1ef; -[SCStoriesOperaDataSource canResolvePlaylistItemGroupDataModel:] */

bool FUN_10722b1bc(long param_1)

{
  func_0x00010be94940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 10722b1f0; end: 10722b32b; -[SCStoriesOperaDataSource playlistItemGroupModelForDataModel:] */

void FUN_10722b1f0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010be94940();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b4d28;
  if (lVar2 == 0) {
    puVar6 = (undefined *)0x0;
    goto LAB_10722b304;
  }
  _objc_retain(param_3);
  _objc_opt_class(puVar6);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar6);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  lVar4 = *(long *)(param_1 + 0x50);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c27dd80();
  _objc_release(lVar4);
  if ((lVar5 == 7) && (uVar1 != 0)) {
    func_0x00010c084960(param_3);
LAB_10722b2c8:
    func_0x00010c264f20(param_3);
  }
  else if (uVar1 != 0) goto LAB_10722b2c8;
  puVar6 = PTR_PTR_1126b23e8;
  _objc_alloc(PTR_PTR_1126b23e8);
  func_0x00010c01ade0();
  _objc_release(uVar1);
LAB_10722b304:
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10722b32c; end: 10722b64b; -[SCStoriesOperaDataSource _resolveDataModelToPlaylistItemGroupId:] */

void FUN_10722b32c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
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
  uVar3 = uVar1;
  func_0x00010c08fa60();
  puVar2 = PTR_PTR_1126b4d28;
  if (uVar3 == 0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar3 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(param_3);
    uVar4 = param_1;
    func_0x00010be3e920();
    uVar11 = 0;
    if ((uVar4 & 1) == 0) {
      uVar4 = uVar3;
      func_0x00010c259cc0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar4;
      func_0x00010c08fa60();
      _objc_release(uVar4);
      puVar2 = PTR_PTR_1126c2118;
      if (uVar11 == 0) {
        _objc_retain(param_3);
        _objc_opt_class(puVar2);
        uVar11 = param_3;
        _objc_opt_isKindOfClass(param_3,puVar2);
        uVar4 = param_3;
        if ((uVar11 & 1) == 0) {
          uVar4 = 0;
        }
        _objc_retain(uVar4);
        _objc_release(param_3);
        if (uVar4 == 0) {
          uVar11 = 0;
        }
        else {
          puStack_88 = &uStack_90;
          uStack_90 = 0;
          uStack_80 = 0x3032000000;
          pcStack_78 = FUN_10722b64c;
          uStack_70 = 0x10722b65c;
          uStack_68 = 0;
          func_0x00010c0bdf40(param_3);
          lVar5 = puStack_88[5];
          func_0x00010c25b340();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar6;
          func_0x00010bf28a40();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          func_0x00010bfbeba0();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar8;
          func_0x00010bf529e0();
          _objc_release(lVar8);
          _objc_release(lVar7);
          _objc_release(lVar6);
          _objc_release(lVar5);
          if (lVar9 == 0) {
            uVar11 = param_3;
            func_0x000108535b00(param_3);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            uVar11 = 0;
          }
          __Block_object_dispose(&uStack_90,8);
          _objc_release(uStack_68);
        }
        _objc_release(uVar4);
      }
      else {
        uVar10 = *(undefined8 *)(param_1 + 0x50);
        uVar4 = uVar3;
        func_0x00010c259cc0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar10);
        _objc_release(uVar4);
        uVar11 = uVar3;
        func_0x00010c259cc0(uVar3);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    _objc_release(uVar3);
  }
  else {
    _objc_retain(uVar1);
    uVar11 = uVar1;
  }
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar11);
  return;
}



/* Entry: 10722b64c; end: 10722b673;  */

void FUN_10722b64c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10722b674; end: 10722b6ab;  */

void FUN_10722b674(long param_1,undefined8 param_2)

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



/* Entry: 10722b6ac; end: 10722b6b7;  */

void FUN_10722b6ac(void)

{
  return;
}



/* Entry: 10722b6b8; end: 10722b99f; -[SCStoriesOperaDataSource _isCameoStory:] */

bool FUN_10722b6b8(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
LAB_10722b770:
    bVar1 = false;
    goto LAB_10722b978;
  }
  iVar2 = (int)*(undefined8 *)(param_1 + 0x138);
  func_0x00010c258940();
  if (iVar2 == 0) {
LAB_10722b778:
    uVar6 = param_3;
    func_0x00010c27dd80();
    if (uVar6 != 6) {
      uVar6 = param_3;
      func_0x00010c27dd80();
      uVar8 = param_3;
      if (uVar6 == 3) {
        if (*(char *)(param_1 + 0x30) == '\x01') {
          uVar5 = *(undefined8 *)(param_1 + 0x38);
        }
        else {
          uVar5 = 0;
        }
        uVar7 = *(ulong *)(param_1 + 0x10);
        _objc_retain(uVar5);
        func_0x00010c259cc0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0ee3e0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
LAB_10722b8f4:
        _objc_release(uVar8);
        uVar8 = uVar7;
        func_0x00010c25b340(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar8;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10722b91c;
      }
      uVar6 = param_3;
      func_0x00010c27dd80();
      if (uVar6 == 5) {
        uVar7 = *(ulong *)(param_1 + 0x10);
        func_0x00010c259cc0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c275700(uVar7);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10722b8f4;
      }
      uVar6 = 0;
LAB_10722b92c:
      uVar8 = uVar6;
      func_0x00010bf28a40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar8;
      func_0x00010bfbeba0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar7;
      func_0x00010bf529e0();
      bVar1 = uVar4 != 0;
      _objc_release(uVar7);
      goto LAB_10722b964;
    }
    uVar8 = *(ulong *)(param_1 + 0x10);
    uVar6 = param_3;
    func_0x00010c259cc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23ce00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126cc4e8;
    _objc_retain(uVar8);
    _objc_opt_class(puVar3);
    uVar7 = uVar8;
    _objc_opt_isKindOfClass(uVar8,puVar3);
    uVar6 = uVar8;
    if ((uVar7 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar8);
    if (uVar6 != 0) {
      uVar7 = uVar8;
      func_0x00010c25b340(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar7;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      uVar7 = uVar8;
LAB_10722b91c:
      _objc_release(uVar8);
      _objc_release(uVar7);
      goto LAB_10722b92c;
    }
    bVar1 = false;
  }
  else {
    uVar8 = *(ulong *)(param_1 + 0x50);
    uVar6 = param_3;
    func_0x00010c259cc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar8 == 0) {
      lVar9 = *(long *)(param_1 + 0x58);
      uVar8 = param_3;
      func_0x00010c259cc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar8);
      _objc_release(uVar6);
      if (lVar9 != 0) goto LAB_10722b770;
      goto LAB_10722b778;
    }
    bVar1 = false;
LAB_10722b964:
    _objc_release(uVar8);
    uVar8 = uVar6;
  }
  _objc_release(uVar8);
LAB_10722b978:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10722b9a0; end: 10722b9a7; -[SCStoriesOperaDataSource needToPrepareMediaBeforeDisplay] */

undefined8 FUN_10722b9a0(void)

{
  return 1;
}



/* Entry: 10722b9a8; end: 10722b9d7; -[SCStoriesOperaDataSource operaMediaBundleProvider] */

void FUN_10722b9a8(long param_1)

{
  if (*(char *)(param_1 + 0x130) == '\0') {
    param_1 = 0;
  }
  _objc_retain(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10722b9d8; end: 10722ba97; -[SCStoriesOperaDataSource canProvideMediaBundleForPlaylistItem:] */

long FUN_10722b9d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x130) == '\x01') {
    uVar1 = param_3;
    func_0x00010c27dd80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      func_0x00010bec4e00(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010c0c5340();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      lVar4 = lVar3;
      FUN_10722f3f0(lVar3);
      _objc_release(lVar3);
      goto LAB_10722ba7c;
    }
  }
  lVar4 = 0;
LAB_10722ba7c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10722ba98; end: 10722bd23; -[SCStoriesOperaDataSource mediaBundleFromPlaylistItem:] */

void FUN_10722ba98(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  _objc_retain(param_3);
  uVar12 = param_3;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar12;
  func_0x00010c0720c0();
  _objc_release(uVar12);
  if ((int)uVar3 == 0) {
    uVar12 = 0;
    goto LAB_10722bcfc;
  }
  lVar4 = param_1;
  func_0x00010bec4e00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010bfce400(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar12;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  lVar5 = param_1;
  func_0x00010bec4be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf1eea0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c260dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c08fa60();
  if (lVar9 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(long *)(param_1 + 0x28) == 0x62 || *(long *)(param_1 + 0x28) == 0x65;
  }
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  if (*(char *)(param_1 + 0x131) == '\x01') {
    uVar11 = *(ulong *)(param_1 + 0x28);
    if ((uVar11 < 0x3a) && ((1L << (uVar11 & 0x3f) & 0x200380060800180U) != 0)) {
      uVar12 = 1;
    }
    else {
      if ((0x19 < uVar11 - 0x49) || ((1L << (uVar11 - 0x49 & 0x3f) & 0x2020001U) == 0)) {
        uVar12 = 0;
        uVar1 = uVar11 - 0x57 >> 1;
        if ((7 < (uVar1 | uVar11 - 0x57 << 0x3f)) || ((1L << (uVar1 & 0x3f) & 0xb1U) == 0))
        goto LAB_10722bc64;
      }
      uVar12 = *(undefined8 *)(param_1 + 0xe8);
      FUN_10723dd44(uVar12);
    }
  }
  else {
    uVar12 = 0;
  }
LAB_10722bc64:
  uVar13 = *(undefined8 *)(param_1 + 0x28);
  uVar10 = *(undefined8 *)(param_1 + 0x138);
  func_0x00010bf91820(uVar10);
  FUN_10723dd50(uVar13,lVar5,uVar10);
  lVar6 = lVar5;
  FUN_10722f4a0(lVar5,lVar4,*(undefined8 *)(param_1 + 0x138),bVar2,uVar12,
                *(undefined1 *)(param_1 + 0x132));
  lVar7 = param_1;
  func_0x00010beb36a0(param_1);
  uVar12 = uVar3;
  FUN_10722e71c(uVar3,lVar4,*(undefined8 *)(param_1 + 0x28),
                ((uint)uVar13 | (uint)*(byte *)(param_1 + 0x131)) & (uint)lVar6 & 1,bVar2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(uVar3);
  _objc_release(lVar4);
LAB_10722bcfc:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar12);
  return;
}



/* Entry: 10722bd24; end: 10722bda3; -[SCStoriesOperaDataSource prefetchAmount] */

long FUN_10722bd24(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(long *)(param_1 + 0x28) - 0x49;
  if (uVar4 < 0x1a && (1L << (uVar4 & 0x3f) & 0x2020001U) != 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110ea3158;
  }
  else {
    uVar3 = *(long *)(param_1 + 0x28) - 0x57;
    uVar4 = uVar3 >> 1;
    if ((uVar4 | uVar3 << 0x3f) < 8) {
      ppuVar2 = (undefined **)(&PTR_PTR_110993bf8)[uVar4];
    }
    else {
      ppuVar2 = &PTR____CFConstantStringClassReference_110ea3178;
    }
  }
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  func_0x00010c067f00(uVar1,param_2,ppuVar2,10,0);
  return (long)(int)uVar1;
}



/* Entry: 10722bda4; end: 10722c007; -[SCStoriesOperaDataSource prefetchRequestFromPlaylistItem:prefetchSignals:importance:] */

void FUN_10722bda4(long param_1,undefined8 param_2,undefined **param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_4;
  uVar8 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar9 = *(long *)(param_1 + 0x50);
  ppuVar1 = param_3;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar9,param_2,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  if (lVar9 == 0) {
    ppuVar1 = param_3;
    func_0x00010c27dd80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = &PTR____CFConstantStringClassReference_110efd7b8;
    ppuVar2 = ppuVar1;
    func_0x00010c0720c0();
    _objc_release(ppuVar1);
    if ((int)ppuVar2 != 0) {
      uVar10 = *(undefined8 *)(param_1 + 0x1b0);
      ppuVar6 = &PTR____CFConstantStringClassReference_110f697b8;
      ppuStack_78 = &PTR____CFConstantStringClassReference_110f69858;
      ppuVar1 = param_3;
      func_0x00010bfce400();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar1;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      ppuStack_80 = ppuVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_80,1);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = 1;
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_70 = puVar3;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_70,&ppuStack_78,
                          1);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar4;
      func_0x00010c0eb7e0(uVar10,param_2,&PTR____CFConstantStringClassReference_110f697b8,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(ppuVar2);
      _objc_release(ppuVar1);
    }
    lVar11 = 0;
  }
  else {
    ppuVar1 = param_3;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be19460(param_1,param_2,ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1;
    ppuVar6 = param_3;
    puVar7 = param_4;
    func_0x00010c107d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(ppuVar2);
    _objc_release(ppuVar1);
    uVar8 = param_5;
  }
  _objc_release(lVar9);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    ppuVar1 = ppuStack_80;
    _objc_retain(ppuVar6);
    _objc_retain(puVar7);
    _objc_retain(uVar8);
    _objc_retain(param_6);
    _objc_retain(param_8);
    _objc_retain(ppuVar1);
    ppuVar2 = ppuVar6;
    func_0x00010be36bc0(ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be19460(param_3,param_2,ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = (undefined **)PTR____NSArray0__struct_11034ab48;
    if (param_3 != (undefined **)0x0) {
      ppuVar5 = param_3;
      func_0x00010c107d40(param_3,param_2,ppuVar6,puVar7,uVar8,param_6,param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
    }
    puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_108 = 0xc2000000;
    pcStack_100 = FUN_10722c1a4;
    puStack_f8 = &UNK_11084aaa8;
    ppuStack_f0 = ppuVar5;
    uStack_e8 = param_8;
    _objc_retain(ppuVar5);
    _objc_retain(param_8);
    func_0x00010c0f7fc0(ppuVar1,param_2,&puStack_110);
    _objc_release(ppuStack_f0);
    _objc_release(uStack_e8);
    _objc_release(ppuVar5);
    _objc_release(param_8);
    _objc_release(param_3);
    _objc_release(ppuVar2);
    _objc_release(ppuVar1);
    _objc_release(param_6);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(ppuVar6);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar11);
  return;
}



/* Entry: 10722c008; end: 10722c1a3; -[SCStoriesOperaDataSource generatePrefetchRequestsForGroup:startPosition:prefetchSignalsList:importanceList:maxNumberOfItems:completion:completionQueue:] */

void FUN_10722c008(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar1 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be19460(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (param_1 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x00010c107d40(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
  }
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10722c1a4;
  puStack_78 = &UNK_11084aaa8;
  puStack_70 = puVar2;
  uStack_68 = param_8;
  _objc_retain(puVar2);
  _objc_retain(param_8);
  func_0x00010c0f7fc0(param_9,param_2,&puStack_90);
  _objc_release(puStack_70);
  _objc_release(uStack_68);
  _objc_release(puVar2);
  _objc_release(param_8);
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10722c1a4; end: 10722c1bf;  */

void FUN_10722c1a4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010722c1b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 10722c1c0; end: 10722c24f; -[SCStoriesOperaDataSource resolvePlaylistItemGroupWithMutator:] */

void FUN_10722c1c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  func_0x00010be19460(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13ac00();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10722c250; end: 10722c643; -[SCStoriesOperaDataSource _friendStoriesDataSourceForStoryId:] */

void FUN_10722c250(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar3 = *(long *)(param_1 + 0x70);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar10 = param_3;
  if (lVar3 == 0) {
    lVar3 = param_1;
    func_0x00010bec4be0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      lVar5 = *(long *)(param_1 + 0x50);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      uVar12 = 0;
      if (lVar5 != 0) {
        uVar9 = *(undefined8 *)(param_1 + 0x50);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar9;
        func_0x00010c084960();
        _objc_release(uVar9);
      }
      uVar13 = *(undefined8 *)(param_1 + 0x1a8);
      iVar2 = (int)*(undefined8 *)(param_1 + 0x40);
      func_0x00010c0720c0();
      uVar9 = 4;
      if (iVar2 == 0) {
        uVar9 = uVar13;
      }
      lVar5 = *(long *)(param_1 + 0x38);
      func_0x00010c08fa60();
      if (lVar5 != 0) {
        uVar9 = 3;
      }
      uVar6 = *(ulong *)(param_1 + 0x138);
      func_0x00010c258960();
      if ((uVar6 & 1) == 0) {
        uVar6 = *(ulong *)(param_1 + 0x10);
        _objc_opt_respondsToSelector(uVar6,PTR_s_storyAvailability_112673e88);
        if ((uVar6 & 1) != 0) {
          func_0x00010c259180();
        }
      }
      uVar14 = *(undefined8 *)(param_1 + 0x28);
      uVar13 = *(undefined8 *)(param_1 + 0x138);
      func_0x00010bf91820(uVar13);
      FUN_10723dd50(uVar14,lVar3,uVar13);
      puVar4 = PTR_PTR_1126d53b8;
      _objc_alloc();
      func_0x00010c04d280(puVar4,*(undefined8 *)(param_1 + 0xe0),lVar3,uVar9,
                          *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x18),
                          *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x80),
                          *(undefined8 *)(param_1 + 0x28),uVar12,*(undefined1 *)(param_1 + 0x31));
      func_0x00010c18b5e0();
      func_0x00010c20c6c0(puVar4);
      lVar5 = param_1 + 0x1a0;
      _objc_loadWeakRetained(lVar5);
      func_0x00010c1ddde0(puVar4);
      _objc_release(lVar5);
      lVar5 = param_1;
      func_0x00010bfa0bc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19a380(puVar4);
      _objc_release(lVar5);
      lVar7 = lVar3;
      func_0x0001085367d4();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar7;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar5 != 0) {
        lVar15 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar7);
          }
          lVar8 = *(long *)(lVar15 * 8);
          func_0x00010853a834();
          _objc_retainAutoreleasedReturnValue();
          if (lVar8 != 0) {
            uVar12 = *(undefined8 *)(param_1 + 0x78);
            func_0x00010c0e00e0(uVar12);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x78));
            _objc_release(uVar12);
          }
          _objc_release(lVar8);
          lVar15 = lVar15 + 1;
        } while (lVar5 != lVar15);
        lVar5 = lVar7;
        func_0x00010bf52a60();
      }
      _objc_release(lVar7);
      puVar10 = puVar4;
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x70));
    }
    _objc_release(lVar3);
  }
  else {
    puVar4 = *(undefined **)(param_1 + 0x70);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  uVar12 = *(undefined8 *)(param_3 + 0x58);
  _objc_retain(puVar10);
  func_0x00010c12d3e0(uVar12);
  puVar4 = param_3;
  func_0x00010bec4be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_3 + 0x58));
  _objc_release(puVar4);
  uVar12 = *(undefined8 *)(param_3 + 0x70);
  func_0x00010c0e00e0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_3 + 0x58);
  func_0x00010c0e00e0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20c720(uVar12);
  _objc_release(uVar9);
  param_3 = param_3 + 0x1a0;
  _objc_loadWeakRetained(param_3);
  func_0x00010bf0c2a0();
  _objc_release(puVar10);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar12);
  return;
}



/* Entry: 10722c644; end: 10722c723; -[SCStoriesOperaDataSource reloadGroupWithID:] */

void FUN_10722c644(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(param_3);
  func_0x00010c12d3e0(uVar3,param_2,param_3);
  lVar1 = param_1;
  func_0x00010bec4be0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x58),param_2,lVar1,param_3);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c0e00e0(uVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c0e00e0(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20c720(uVar3,param_2,uVar2);
  _objc_release(uVar2);
  param_1 = param_1 + 0x1a0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf0c2a0();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10722c724; end: 10722c877; -[SCStoriesOperaDataSource refreshGroupFromLocalCacheWithID:dataProvider:] */

void FUN_10722c724(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(param_4);
  func_0x00010c12d3e0(uVar5,param_2,param_3);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar5 = *(undefined8 *)(param_1 + 0x38);
  }
  else {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  lVar1 = param_4;
  func_0x00010c293c40(param_4,param_2,param_3,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126c2118;
    func_0x00010bfb8500(PTR_PTR_1126c2118,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) {
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x58),param_2,puVar2,param_3);
      _objc_release(puVar2);
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c0e00e0(uVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c0e00e0(uVar4,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20c720(uVar3,param_2,uVar4);
  _objc_release(uVar4);
  param_1 = param_1 + 0x1a0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf0c2a0();
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(lVar1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10722c878; end: 10722c9b7; -[SCStoriesOperaDataSource appendGroups:] */

void FUN_10722c878(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar5 = *(undefined8 *)(lVar7 * 8);
      uVar3 = param_1;
      func_0x00010be3e920();
      if ((uVar3 & 1) == 0) {
        uVar6 = *(undefined8 *)(param_1 + 0x50);
        func_0x00010c259cc0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar6);
        _objc_release(uVar5);
      }
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bec4e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10722c9b8; end: 10722c9bb; -[SCStoriesOperaDataSource dataModelFor:] */

void FUN_10722c9b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec4e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__storySnapForItem__11258ed28);
  return;
}



/* Entry: 10722c9bc; end: 10722ca0f; -[SCStoriesOperaDataSource dataModelForGroup:] */

void FUN_10722c9bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec4be0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10722ca10; end: 10722caa7; -[SCStoriesOperaDataSource _shouldEnableContentDescriptorZipForPlaybackSequence:] */

undefined8 FUN_10722ca10(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x0001085394d0();
  puVar2 = PTR_PTR_1126c99b8;
  if (param_3 != 0) {
    if (*(long *)(param_1 + 0x28) == 0x56) {
      uVar4 = 1;
    }
    else if (*(long *)(param_1 + 0x28) == 0x1e) {
      uVar4 = *(undefined8 *)(param_1 + 0x138);
      puVar2 = PTR_PTR_1126c2a20;
      func_0x00010c24b860(PTR_PTR_1126c2a20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f320(uVar4);
      _objc_release(puVar2);
    }
    else {
      uVar4 = 0;
    }
    return uVar4;
  }
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(&PTR____CFConstantStringClassReference_110ea3b98);
  _objc_retain(uVar1);
  _objc_alloc_init(puVar2);
  func_0x000108534aa8(uVar4);
  func_0x00010c182be0(puVar2);
  puVar3 = PTR_PTR_1126ae780;
  _objc_alloc_init(PTR_PTR_1126ae780);
  func_0x00010c1d5760();
  uVar4 = uVar1;
  func_0x00010bf1f440(uVar1);
  _objc_release(&PTR____CFConstantStringClassReference_110ea3b98);
  _objc_release(uVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  return uVar4;
}



/* Entry: 10722caa8; end: 10722cdeb; -[SCStoriesOperaDataSource _storyPlaybackSequenceForStoryId:] */

void FUN_10722caa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = *(undefined **)(param_1 + 0x58);
  func_0x00010c0e00e0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    _objc_retain();
    goto LAB_10722cdc4;
  }
  lVar2 = *(long *)(param_1 + 0x50);
  func_0x00010c0e00e0(lVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    lVar2 = 1;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x50);
    func_0x00010c0e00e0(lVar3,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c27dd80();
    _objc_release(lVar3);
  }
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar4 = *(undefined8 *)(param_1 + 0x38);
  }
  else {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  puVar1 = (undefined *)0x0;
  if (lVar2 < 6) {
    if (2 < lVar2) {
      if (lVar2 == 3) {
        lVar2 = *(long *)(param_1 + 0x10);
        func_0x00010c0ee3e0(lVar2,param_2,param_3,uVar4);
        _objc_retainAutoreleasedReturnValue();
        if (lVar2 == 0) goto LAB_10722cda8;
        puVar1 = PTR_PTR_1126c2118;
        func_0x00010c0ee4e0(PTR_PTR_1126c2118,param_2,lVar2);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if (lVar2 != 5) goto LAB_10722cdb4;
        lVar2 = *(long *)(param_1 + 0x10);
        func_0x00010c275700(lVar2,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
        if (lVar2 == 0) goto LAB_10722cda8;
        puVar1 = PTR_PTR_1126c2118;
        func_0x00010c275760(PTR_PTR_1126c2118,param_2,lVar2);
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_10722cd84;
    }
    if (lVar2 == 1) {
      lVar2 = *(long *)(param_1 + 0x10);
      func_0x00010c293c40(lVar2,param_2,param_3,uVar4);
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 != 0) {
        puVar1 = PTR_PTR_1126c2118;
        func_0x00010bfb8500(PTR_PTR_1126c2118,param_2,lVar2);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10722cd84;
      }
LAB_10722cda8:
      _objc_release(0);
      puVar1 = (undefined *)0x0;
    }
    else if (lVar2 == 2) {
      lVar2 = *(long *)(param_1 + 0x10);
      func_0x00010bf62620(lVar2,param_2,param_3,uVar4);
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) goto LAB_10722cda8;
      puVar1 = PTR_PTR_1126c2118;
      func_0x00010bf62740(PTR_PTR_1126c2118,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10722cd84;
    }
  }
  else {
    if (lVar2 < 8) {
      if (lVar2 == 6) {
        lVar2 = *(long *)(param_1 + 0x10);
        func_0x00010c23ce00(lVar2,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
        if (lVar2 == 0) goto LAB_10722cda8;
        puVar1 = PTR_PTR_1126c2118;
        func_0x00010c23ce20(PTR_PTR_1126c2118,param_2,lVar2);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if (lVar2 != 7) goto LAB_10722cdb4;
        lVar2 = *(long *)(param_1 + 0x10);
        func_0x00010c0ba000(lVar2,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
        if (lVar2 == 0) goto LAB_10722cda8;
        puVar1 = PTR_PTR_1126c2118;
        func_0x00010c0ba0c0(PTR_PTR_1126c2118,param_2,lVar2);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else if (lVar2 == 8) {
      lVar2 = *(long *)(param_1 + 0x10);
      func_0x00010c14bc60(lVar2,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) goto LAB_10722cda8;
      puVar1 = PTR_PTR_1126c2118;
      func_0x00010c14bda0(PTR_PTR_1126c2118,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (lVar2 != 9) goto LAB_10722cdb4;
      lVar2 = *(long *)(param_1 + 0x10);
      func_0x00010bf24c00(lVar2,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) goto LAB_10722cda8;
      puVar1 = PTR_PTR_1126c2118;
      func_0x00010bf24c20(PTR_PTR_1126c2118,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
    }
LAB_10722cd84:
    _objc_release(lVar2);
    if (puVar1 != (undefined *)0x0) {
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x58),param_2,puVar1,param_3);
    }
  }
LAB_10722cdb4:
  _objc_retain(puVar1);
  _objc_release(uVar4);
LAB_10722cdc4:
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10722cdec; end: 10722cebf; -[SCStoriesOperaDataSource _userStoryOperaGroupIdForPage:] */

void FUN_10722cdec(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b5bc0;
  _objc_opt_class(PTR_PTR_1126b5bc0);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar1 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  if (uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c2923e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010853acb4(uVar5,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10722cec0; end: 10722cf63; -[SCStoriesOperaDataSource _storySnapForItem:] */

void FUN_10722cec0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  func_0x00010be19460(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c25b1e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10722cf64; end: 10722d01f; -[SCStoriesOperaDataSource pageDataForDataModel:completion:] */

void FUN_10722cf64(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126b5bc0;
  _objc_opt_class(PTR_PTR_1126b5bc0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
  else {
    func_0x00010be19480(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f0e80();
    _objc_release(param_1);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10722d020; end: 10722d143; -[SCStoriesOperaDataSource extraPropertiesForDataModel:item:baseOperaPage:completion:] */

void FUN_10722d020(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,
                  undefined8 param_5,long param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0720c0();
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126b5bc0;
  if ((uVar1 & 1) == 0) {
    (**(code **)(param_6 + 0x10))(param_6,0,0);
  }
  else {
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
      func_0x00010be19480(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9ea40();
      _objc_release(param_1);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10722d144; end: 10722d20b; -[SCStoriesOperaDataSource prepareMediaForItem:startWaitingForDownloadCallback:completion:] */

void FUN_10722d144(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfce400(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010be19460(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c109b20();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10722d20c; end: 10722d2a3; -[SCStoriesOperaDataSource removeMediaForItem:] */

void FUN_10722d20c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      func_0x00010be19460(param_1,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d120();
      _objc_release(param_1);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10722d2a4; end: 10722d337; -[SCStoriesOperaDataSource setEventAnnouncing:] */

void FUN_10722d2a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x1b0) == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010c12cf80(*(long *)(param_1 + 0x1b0),param_2,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x1b0);
  }
  *(undefined8 *)(param_1 + 0x1b0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x1b0);
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



/* Entry: 10722d338; end: 10722d56b; -[SCStoriesOperaDataSource registeredEventsForOperaSession] */

void FUN_10722d338(void)

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
  undefined **ppuVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined **ppuVar21;
  ulong uVar22;
  ulong in_x4;
  code *pcVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  long lVar26;
  uint uVar27;
  undefined8 auStack_1d8 [7];
  undefined8 auStack_1a0 [7];
  ulong uStack_168;
  long lStack_160;
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
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
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
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010bf3df00();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110ebeb98;
  puVar2 = PTR_PTR_1126d53c0;
  puStack_d8 = puVar1;
  puStack_d0 = puVar1;
  func_0x00010c108ac0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2338;
  puStack_e0 = puVar2;
  puStack_c0 = puVar2;
  func_0x00010c0c4dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c95c8;
  puStack_e8 = puVar1;
  puStack_b8 = puVar1;
  func_0x00010c09d2c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c9460;
  puStack_b0 = puVar2;
  func_0x00010c269c60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c9460;
  puStack_a8 = puVar1;
  func_0x00010c269c80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c9460;
  puStack_a0 = puVar3;
  func_0x00010c0f25e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c9460;
  puStack_98 = puVar4;
  func_0x00010c0f2620();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b2638;
  puStack_90 = puVar5;
  func_0x00010c0f5e80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b2638;
  puStack_88 = puVar6;
  func_0x00010c13d5c0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b2638;
  puStack_80 = puVar7;
  func_0x00010c24eb60();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126b2638;
  puStack_78 = puVar8;
  func_0x00010bf948a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar21 = &puStack_d0;
  uVar22 = 0xd;
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(puStack_e8);
  _objc_release(puStack_e0);
  puVar11 = puStack_d8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return;
  }
  ___stack_chk_fail();
  pcStack_f8 = FUN_10722d56c;
  lStack_160 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_150 = puVar6;
  puStack_148 = puVar10;
  puStack_140 = puVar5;
  puStack_138 = puVar4;
  puStack_130 = puVar3;
  puStack_128 = puVar1;
  puStack_120 = puVar2;
  puStack_118 = puVar9;
  puStack_110 = puVar8;
  puStack_108 = puVar7;
  puStack_100 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar21);
  _objc_retain(uVar22);
  _objc_retain(in_x4);
  ppuVar12 = ppuVar21;
  func_0x00010c0720c0();
  if ((int)ppuVar12 != 0) {
    uVar13 = in_x4;
    func_0x00010c0e00e0(in_x4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    func_0x00010bee37a0(puVar11);
    _objc_release(uVar13);
  }
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010bf3df00(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar21;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if ((int)ppuVar12 != 0) {
    func_0x00010c0ea960(*(undefined8 *)(puVar11 + 400));
  }
  puVar1 = PTR_PTR_1126d53c0;
  func_0x00010c108ac0(PTR_PTR_1126d53c0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar21;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if ((int)ppuVar12 != 0) {
    puVar1 = PTR_PTR_1126d53c8;
    func_0x00010c24bc00(PTR_PTR_1126d53c8);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = in_x4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    if (uVar13 != 0) {
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_168 = uVar13;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf06be0(puVar11);
      _objc_release(puVar1);
    }
    _objc_release(uVar13);
  }
  uVar13 = uVar22;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  puVar1 = PTR_PTR_1126b5bc0;
  _objc_opt_class(PTR_PTR_1126b5bc0);
  uVar15 = uVar14;
  _objc_opt_isKindOfClass(uVar14,puVar1);
  uVar13 = uVar14;
  if ((uVar15 & 1) == 0) {
    uVar13 = 0;
  }
  _objc_retain(uVar13);
  _objc_release(uVar14);
  if (uVar13 == 0) goto LAB_10722e278;
  puVar1 = PTR_PTR_1126b2338;
  func_0x00010c0c4dc0(PTR_PTR_1126b2338);
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar21;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if ((int)ppuVar12 != 0) {
    puVar1 = puVar11;
    func_0x00010bee7180(puVar11);
    _objc_retainAutoreleasedReturnValue();
    lVar16 = *(long *)(puVar11 + 0x70);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b2348;
    func_0x00010c120300(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = in_x4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_opt_class(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar18 = uVar17;
    _objc_opt_isKindOfClass(uVar17,puVar2);
    uVar15 = uVar17;
    if ((uVar18 & 1) == 0) {
      uVar15 = 0;
    }
    _objc_retain(uVar15);
    _objc_release(uVar17);
    if (lVar16 != 0) {
      uVar18 = uVar15;
      func_0x00010c14d800();
      if ((int)uVar18 == 0) {
LAB_10722d888:
        if ((uVar15 == 0) || (uVar18 = uVar17, func_0x00010c14d800(), (uVar18 & 1) != 0))
        goto LAB_10722d944;
        uVar18 = uVar17;
        func_0x00010c14d140();
        if ((uVar18 & 1) == 0) {
          uVar24 = *(undefined8 *)(puVar11 + 0x160);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar20 = uVar24;
          func_0x00010bf1f3c0();
          _objc_release(uVar24);
          if ((int)uVar20 == 0) goto LAB_10722d944;
        }
        pcVar23 = (code *)0x10722e320;
        puVar25 = auStack_1d8;
      }
      else {
        uVar19 = *(ulong *)(puVar11 + 0x158);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar18 = uVar19;
        func_0x00010bf1f3c0();
        _objc_release(uVar19);
        if ((uVar18 & 1) == 0) goto LAB_10722d888;
        pcVar23 = FUN_10722e2d4;
        puVar25 = auStack_1a0;
        uVar17 = uVar15;
      }
      *puVar25 = PTR___NSConcreteStackBlock_11034bd00;
      puVar25[1] = 0xc2000000;
      puVar25[2] = pcVar23;
      puVar25[3] = &UNK_110848ba8;
      _objc_retain(lVar16);
      puVar25[4] = lVar16;
      _objc_retain(uVar14);
      puVar25[5] = uVar13;
      _objc_retain(uVar17);
      puVar25[6] = uVar15;
      func_0x00010bcbe2c4("APPSTORE",puVar25);
      _objc_release(puVar25[6]);
      _objc_release(puVar25[5]);
      _objc_release(puVar25[4]);
    }
LAB_10722d944:
    _objc_release(uVar15);
    _objc_release(lVar16);
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126c95c8;
  func_0x00010c09d2c0(PTR_PTR_1126c95c8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar21;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if ((int)ppuVar12 != 0) {
    puVar1 = puVar11;
    func_0x00010bee7180(puVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(puVar11 + 0x70);
    func_0x00010c0e00e0(uVar20);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010bf3cf60(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128e00(uVar20);
    _objc_release(uVar15);
    _objc_release(uVar20);
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126b2638;
  func_0x00010c13d5c0(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar21;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if ((int)ppuVar12 != 0) {
    puVar1 = puVar11;
    func_0x00010bee7180(puVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(puVar11 + 0x70);
    func_0x00010c0e00e0(uVar20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c138260();
    _objc_release(uVar20);
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126b2638;
  func_0x00010c0f5e80(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar21;
  func_0x00010c0720c0();
  if (((ulong)ppuVar12 & 1) == 0) {
    puVar2 = PTR_PTR_1126b2638;
    func_0x00010c24eb60(PTR_PTR_1126b2638);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar21;
    func_0x00010c0720c0();
    if ((int)ppuVar12 != 0) {
      _objc_release(puVar2);
      goto LAB_10722dac4;
    }
    puVar3 = PTR_PTR_1126b2638;
    func_0x00010bf948a0(PTR_PTR_1126b2638);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar21;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (((ulong)ppuVar12 & 1) != 0) goto LAB_10722dacc;
  }
  else {
LAB_10722dac4:
    _objc_release(puVar1);
LAB_10722dacc:
    puVar1 = puVar11;
    func_0x00010bee7180(puVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(puVar11 + 0x70);
    func_0x00010c0e00e0(uVar20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7fb00();
    _objc_release(uVar20);
    _objc_release(puVar1);
  }
  uVar20 = *(undefined8 *)(puVar11 + 0x138);
  FUN_10722f7b0(uVar20,*(undefined8 *)(puVar11 + 0x28));
  puVar1 = PTR_PTR_1126c9460;
  func_0x00010c269c80(PTR_PTR_1126c9460);
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar21;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  uVar27 = (uint)uVar20;
  if (((int)ppuVar12 != 0) && (uVar27 != 0)) {
    puVar1 = puVar11;
    func_0x00010bee7180();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined *)0x0) {
      uVar20 = *(undefined8 *)(puVar11 + 0x70);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7fb00();
      puVar2 = puVar11 + 0x1a0;
      _objc_loadWeakRetained();
      uVar15 = uVar14;
      func_0x00010bf3cf60(uVar14);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c101420();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar15);
      _objc_release(puVar2);
      puVar2 = puVar3;
      func_0x00010bfce400();
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 != (undefined *)0x0) {
        puVar4 = puVar2;
        func_0x00010c084fc0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar4);
        if (puVar5 == puVar3) {
          puVar4 = puVar11 + 0x1a0;
          _objc_loadWeakRetained();
          puVar5 = puVar4;
          func_0x00010c101260();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010bfce660();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          _objc_release(puVar4);
          if (puVar6 != (undefined *)0x0) {
            puVar4 = puVar6;
            func_0x00010be36bc0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar4 != (undefined *)0x0) {
              puVar4 = puVar6;
              func_0x00010c084fc0();
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar4;
              func_0x00010c089820();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar4);
              if (puVar5 != (undefined *)0x0) {
                lVar26 = *(long *)(puVar11 + 0x70);
                puVar4 = puVar6;
                func_0x00010be36bc0(puVar6);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar4);
                lVar16 = lVar26;
                func_0x00010c25b1e0();
                _objc_retainAutoreleasedReturnValue();
                if ((lVar26 != 0) && (lVar16 != 0)) {
                  func_0x00010bf7fb00(lVar26);
                }
                _objc_release(lVar16);
                _objc_release(lVar26);
              }
              _objc_release(puVar5);
            }
          }
          _objc_release(puVar6);
        }
      }
      _objc_release(puVar2);
      _objc_release(puVar3);
      _objc_release(uVar20);
    }
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126c9460;
  func_0x00010c0f2620(PTR_PTR_1126c9460);
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar21;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if (((uint)ppuVar12 & uVar27) == 1) {
    puVar1 = puVar11;
    func_0x00010bee7180();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined *)0x0) {
      uVar20 = *(undefined8 *)(puVar11 + 0x70);
      func_0x00010c0e00e0(uVar20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7fb00();
      _objc_release(uVar20);
    }
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126c9460;
  func_0x00010c269c60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar21;
  func_0x00010c0720c0();
  if (((ulong)ppuVar12 & 1) == 0) {
    puVar2 = PTR_PTR_1126c9460;
    func_0x00010c0f25e0(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar21;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    _objc_release(puVar1);
    uVar27 = (uint)ppuVar12 & uVar27 & 1;
  }
  else {
    _objc_release(puVar1);
  }
  if (uVar27 != 0) {
    puVar1 = puVar11;
    func_0x00010bee7180();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined *)0x0) {
      uVar20 = *(undefined8 *)(puVar11 + 0x70);
      func_0x00010c0e00e0(uVar20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c138260();
      puVar2 = PTR_PTR_1126c9460;
      func_0x00010c269c60();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar21;
      func_0x00010c0720c0();
      _objc_release(puVar2);
      if ((int)ppuVar12 != 0) {
        puVar2 = puVar11 + 0x1a0;
        _objc_loadWeakRetained();
        func_0x00010bf3cf60(uVar14);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c101420();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar14);
        _objc_release(puVar2);
        puVar2 = puVar3;
        func_0x00010bfce400();
        _objc_retainAutoreleasedReturnValue();
        if (puVar2 != (undefined *)0x0) {
          puVar4 = puVar2;
          func_0x00010c084fc0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010c089820();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar4);
          if (puVar5 == puVar3) {
            puVar4 = puVar11 + 0x1a0;
            _objc_loadWeakRetained();
            puVar5 = puVar4;
            func_0x00010c101260();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            func_0x00010bfce580();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar5);
            _objc_release(puVar4);
            if (puVar6 != (undefined *)0x0) {
              puVar4 = puVar6;
              func_0x00010be36bc0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (puVar4 != (undefined *)0x0) {
                uVar24 = *(undefined8 *)(puVar11 + 0x70);
                puVar4 = puVar6;
                func_0x00010be36bc0(puVar6);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar4);
                func_0x00010c138260(uVar24);
                _objc_release(uVar24);
              }
            }
            _objc_release(puVar6);
          }
        }
        _objc_release(puVar2);
        _objc_release(puVar3);
      }
      _objc_release(uVar20);
    }
    _objc_release(puVar1);
  }
  if ((*(ulong *)(puVar11 + 0x28) & 0xfffffffffffffffb) == 0x62) {
    puVar1 = PTR_PTR_1126c9460;
    func_0x00010c269c60(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar21;
    func_0x00010c0720c0();
    _objc_release(puVar1);
    if ((int)ppuVar12 != 0) {
      puVar1 = puVar11;
      func_0x00010bee7180();
      _objc_retainAutoreleasedReturnValue();
      if (puVar1 != (undefined *)0x0) {
        uVar20 = *(undefined8 *)(puVar11 + 0x70);
        func_0x00010c0e00e0(uVar20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf7fb00();
        _objc_release(uVar20);
      }
      _objc_release(puVar1);
    }
    puVar1 = PTR_PTR_1126c9460;
    func_0x00010c269c80(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar21;
    func_0x00010c0720c0();
    _objc_release(puVar1);
    if ((int)ppuVar12 != 0) {
      puVar1 = puVar11;
      func_0x00010bee7180();
      _objc_retainAutoreleasedReturnValue();
      if (puVar1 != (undefined *)0x0) {
        uVar20 = *(undefined8 *)(puVar11 + 0x70);
        func_0x00010c0e00e0(uVar20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf7fb00();
        _objc_release(uVar20);
      }
      _objc_release(puVar1);
    }
    puVar1 = PTR_PTR_1126c9460;
    func_0x00010c0f25e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar21;
    func_0x00010c0720c0();
    if ((int)ppuVar12 == 0) {
      puVar2 = PTR_PTR_1126c9460;
      func_0x00010c0f2620(PTR_PTR_1126c9460);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar21;
      func_0x00010c0720c0();
      _objc_release(puVar2);
      _objc_release(puVar1);
      if ((int)ppuVar12 == 0) goto LAB_10722e278;
    }
    else {
      _objc_release(puVar1);
    }
    uVar20 = *(undefined8 *)(puVar11 + 0x70);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c138260();
    puVar1 = puVar11;
    func_0x00010bee7180();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = *(undefined8 *)(puVar11 + 0x48);
    *(undefined **)(puVar11 + 0x48) = puVar1;
    _objc_release(uVar24);
    _objc_release(uVar20);
  }
LAB_10722e278:
  _objc_release(uVar13);
  _objc_release(in_x4);
  _objc_release(uVar22);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_160) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = ppuVar21[4];
  puVar2 = ppuVar21[5];
  func_0x00010bf3cf60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c5680(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10722d56c; end: 10722e2d3; -[SCStoriesOperaDataSource operaViewDidSendEvent:page:params:] */

void FUN_10722d56c(long param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  code *pcVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  long lVar20;
  uint uVar21;
  undefined8 auStack_e8 [7];
  undefined8 auStack_b0 [7];
  ulong uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 != 0) {
    uVar1 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    func_0x00010bee37a0(param_1);
    _objc_release(uVar1);
  }
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010bf3df00(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)uVar1 != 0) {
    func_0x00010c0ea960(*(undefined8 *)(param_1 + 400));
  }
  puVar2 = PTR_PTR_1126d53c0;
  func_0x00010c108ac0(PTR_PTR_1126d53c0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)uVar1 != 0) {
    puVar2 = PTR_PTR_1126d53c8;
    func_0x00010c24bc00(PTR_PTR_1126d53c8);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (uVar1 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_78 = uVar1;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf06be0(param_1);
      _objc_release(puVar2);
    }
    _objc_release(uVar1);
  }
  uVar1 = param_4;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b5bc0;
  _objc_opt_class(PTR_PTR_1126b5bc0);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  if (uVar1 == 0) goto LAB_10722e278;
  puVar2 = PTR_PTR_1126b2338;
  func_0x00010c0c4dc0(PTR_PTR_1126b2338);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)uVar4 != 0) {
    lVar5 = param_1;
    func_0x00010bee7180(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(param_1 + 0x70);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b2348;
    func_0x00010c120300(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_opt_class(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar8 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar2);
    uVar4 = uVar7;
    if ((uVar8 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar7);
    if (lVar6 != 0) {
      uVar8 = uVar4;
      func_0x00010c14d800();
      if ((int)uVar8 == 0) {
LAB_10722d888:
        if ((uVar4 == 0) || (uVar8 = uVar7, func_0x00010c14d800(), (uVar8 & 1) != 0))
        goto LAB_10722d944;
        uVar8 = uVar7;
        func_0x00010c14d140();
        if ((uVar8 & 1) == 0) {
          uVar18 = *(undefined8 *)(param_1 + 0x160);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar18;
          func_0x00010bf1f3c0();
          _objc_release(uVar18);
          if ((int)uVar10 == 0) goto LAB_10722d944;
        }
        pcVar17 = (code *)0x10722e320;
        puVar19 = auStack_e8;
      }
      else {
        uVar9 = *(ulong *)(param_1 + 0x158);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar9;
        func_0x00010bf1f3c0();
        _objc_release(uVar9);
        if ((uVar8 & 1) == 0) goto LAB_10722d888;
        pcVar17 = FUN_10722e2d4;
        puVar19 = auStack_b0;
        uVar7 = uVar4;
      }
      *puVar19 = PTR___NSConcreteStackBlock_11034bd00;
      puVar19[1] = 0xc2000000;
      puVar19[2] = pcVar17;
      puVar19[3] = &UNK_110848ba8;
      _objc_retain(lVar6);
      puVar19[4] = lVar6;
      _objc_retain(uVar3);
      puVar19[5] = uVar1;
      _objc_retain(uVar7);
      puVar19[6] = uVar4;
      func_0x00010bcbe2c4("APPSTORE",puVar19);
      _objc_release(puVar19[6]);
      _objc_release(puVar19[5]);
      _objc_release(puVar19[4]);
    }
LAB_10722d944:
    _objc_release(uVar4);
    _objc_release(lVar6);
    _objc_release(lVar5);
  }
  puVar2 = PTR_PTR_1126c95c8;
  func_0x00010c09d2c0(PTR_PTR_1126c95c8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)uVar4 != 0) {
    lVar5 = param_1;
    func_0x00010bee7180(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c0e00e0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf3cf60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128e00(uVar10);
    _objc_release(uVar4);
    _objc_release(uVar10);
    _objc_release(lVar5);
  }
  puVar2 = PTR_PTR_1126b2638;
  func_0x00010c13d5c0(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)uVar4 != 0) {
    lVar5 = param_1;
    func_0x00010bee7180(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c0e00e0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c138260();
    _objc_release(uVar10);
    _objc_release(lVar5);
  }
  puVar2 = PTR_PTR_1126b2638;
  func_0x00010c0f5e80(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0720c0();
  if ((uVar4 & 1) == 0) {
    puVar11 = PTR_PTR_1126b2638;
    func_0x00010c24eb60(PTR_PTR_1126b2638);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar4 != 0) {
      _objc_release(puVar11);
      goto LAB_10722dac4;
    }
    puVar16 = PTR_PTR_1126b2638;
    func_0x00010bf948a0(PTR_PTR_1126b2638);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar16);
    _objc_release(puVar11);
    _objc_release(puVar2);
    if ((uVar4 & 1) != 0) goto LAB_10722dacc;
  }
  else {
LAB_10722dac4:
    _objc_release(puVar2);
LAB_10722dacc:
    lVar5 = param_1;
    func_0x00010bee7180(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c0e00e0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7fb00();
    _objc_release(uVar10);
    _objc_release(lVar5);
  }
  uVar10 = *(undefined8 *)(param_1 + 0x138);
  FUN_10722f7b0(uVar10,*(undefined8 *)(param_1 + 0x28));
  puVar2 = PTR_PTR_1126c9460;
  func_0x00010c269c80(PTR_PTR_1126c9460);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  uVar21 = (uint)uVar10;
  if (((int)uVar4 != 0) && (uVar21 != 0)) {
    lVar5 = param_1;
    func_0x00010bee7180();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 != 0) {
      uVar10 = *(undefined8 *)(param_1 + 0x70);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7fb00();
      lVar6 = param_1 + 0x1a0;
      _objc_loadWeakRetained();
      uVar4 = uVar3;
      func_0x00010bf3cf60(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar6;
      func_0x00010c101420();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(lVar6);
      lVar6 = lVar12;
      func_0x00010bfce400();
      _objc_retainAutoreleasedReturnValue();
      if (lVar6 != 0) {
        lVar13 = lVar6;
        func_0x00010c084fc0();
        _objc_retainAutoreleasedReturnValue();
        lVar14 = lVar13;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar13);
        if (lVar14 == lVar12) {
          lVar13 = param_1 + 0x1a0;
          _objc_loadWeakRetained();
          lVar14 = lVar13;
          func_0x00010c101260();
          _objc_retainAutoreleasedReturnValue();
          lVar15 = lVar14;
          func_0x00010bfce660();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar14);
          _objc_release(lVar13);
          if (lVar15 != 0) {
            lVar13 = lVar15;
            func_0x00010be36bc0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar13 != 0) {
              lVar13 = lVar15;
              func_0x00010c084fc0();
              _objc_retainAutoreleasedReturnValue();
              lVar14 = lVar13;
              func_0x00010c089820();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar13);
              if (lVar14 != 0) {
                lVar20 = *(long *)(param_1 + 0x70);
                lVar13 = lVar15;
                func_0x00010be36bc0(lVar15);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar13);
                lVar13 = lVar20;
                func_0x00010c25b1e0();
                _objc_retainAutoreleasedReturnValue();
                if ((lVar20 != 0) && (lVar13 != 0)) {
                  func_0x00010bf7fb00(lVar20);
                }
                _objc_release(lVar13);
                _objc_release(lVar20);
              }
              _objc_release(lVar14);
            }
          }
          _objc_release(lVar15);
        }
      }
      _objc_release(lVar6);
      _objc_release(lVar12);
      _objc_release(uVar10);
    }
    _objc_release(lVar5);
  }
  puVar2 = PTR_PTR_1126c9460;
  func_0x00010c0f2620(PTR_PTR_1126c9460);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if (((uint)uVar4 & uVar21) == 1) {
    lVar5 = param_1;
    func_0x00010bee7180();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 != 0) {
      uVar10 = *(undefined8 *)(param_1 + 0x70);
      func_0x00010c0e00e0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7fb00();
      _objc_release(uVar10);
    }
    _objc_release(lVar5);
  }
  puVar2 = PTR_PTR_1126c9460;
  func_0x00010c269c60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0720c0();
  if ((uVar4 & 1) == 0) {
    puVar11 = PTR_PTR_1126c9460;
    func_0x00010c0f25e0(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar11);
    _objc_release(puVar2);
    uVar21 = (uint)uVar4 & uVar21 & 1;
  }
  else {
    _objc_release(puVar2);
  }
  if (uVar21 != 0) {
    lVar5 = param_1;
    func_0x00010bee7180();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 != 0) {
      uVar10 = *(undefined8 *)(param_1 + 0x70);
      func_0x00010c0e00e0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c138260();
      puVar2 = PTR_PTR_1126c9460;
      func_0x00010c269c60();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010c0720c0();
      _objc_release(puVar2);
      if ((int)uVar4 != 0) {
        lVar6 = param_1 + 0x1a0;
        _objc_loadWeakRetained();
        func_0x00010bf3cf60(uVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar6;
        func_0x00010c101420();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        _objc_release(lVar6);
        lVar6 = lVar12;
        func_0x00010bfce400();
        _objc_retainAutoreleasedReturnValue();
        if (lVar6 != 0) {
          lVar13 = lVar6;
          func_0x00010c084fc0();
          _objc_retainAutoreleasedReturnValue();
          lVar14 = lVar13;
          func_0x00010c089820();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar13);
          if (lVar14 == lVar12) {
            lVar13 = param_1 + 0x1a0;
            _objc_loadWeakRetained();
            lVar14 = lVar13;
            func_0x00010c101260();
            _objc_retainAutoreleasedReturnValue();
            lVar15 = lVar14;
            func_0x00010bfce580();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar14);
            _objc_release(lVar13);
            if (lVar15 != 0) {
              lVar13 = lVar15;
              func_0x00010be36bc0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (lVar13 != 0) {
                uVar18 = *(undefined8 *)(param_1 + 0x70);
                lVar13 = lVar15;
                func_0x00010be36bc0(lVar15);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar13);
                func_0x00010c138260(uVar18);
                _objc_release(uVar18);
              }
            }
            _objc_release(lVar15);
          }
        }
        _objc_release(lVar6);
        _objc_release(lVar12);
      }
      _objc_release(uVar10);
    }
    _objc_release(lVar5);
  }
  if ((*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffb) == 0x62) {
    puVar2 = PTR_PTR_1126c9460;
    func_0x00010c269c60(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    if ((int)uVar3 != 0) {
      lVar5 = param_1;
      func_0x00010bee7180();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 != 0) {
        uVar10 = *(undefined8 *)(param_1 + 0x70);
        func_0x00010c0e00e0(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf7fb00();
        _objc_release(uVar10);
      }
      _objc_release(lVar5);
    }
    puVar2 = PTR_PTR_1126c9460;
    func_0x00010c269c80(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    if ((int)uVar3 != 0) {
      lVar5 = param_1;
      func_0x00010bee7180();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 != 0) {
        uVar10 = *(undefined8 *)(param_1 + 0x70);
        func_0x00010c0e00e0(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf7fb00();
        _objc_release(uVar10);
      }
      _objc_release(lVar5);
    }
    puVar2 = PTR_PTR_1126c9460;
    func_0x00010c0f25e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar3 == 0) {
      puVar11 = PTR_PTR_1126c9460;
      func_0x00010c0f2620(PTR_PTR_1126c9460);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010c0720c0();
      _objc_release(puVar11);
      _objc_release(puVar2);
      if ((int)uVar3 == 0) goto LAB_10722e278;
    }
    else {
      _objc_release(puVar2);
    }
    uVar10 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c138260();
    lVar5 = param_1;
    func_0x00010bee7180();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(param_1 + 0x48);
    *(long *)(param_1 + 0x48) = lVar5;
    _objc_release(uVar18);
    _objc_release(uVar10);
  }
LAB_10722e278:
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uVar10 = *(undefined8 *)(param_3 + 0x20);
  uVar18 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010bf3cf60(uVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c5680(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar18);
  return;
}



/* Entry: 10722e2d4; end: 10722e36b;  */

void FUN_10722e2d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf3cf60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c5680(uVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10722e36c; end: 10722e443; -[SCStoriesOperaDataSource _updateViewLocationIfNeeded:withPage:] */

void FUN_10722e36c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  if ((param_3 != -1) && (param_3 != *(long *)(param_1 + 0x28))) {
    *(long *)(param_1 + 0x28) = param_3;
    lVar1 = param_1;
    func_0x00010bee7180(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      lVar2 = *(long *)(param_1 + 0x70);
      func_0x00010c0e00e0(lVar2,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 != 0) {
        uVar3 = *(undefined8 *)(param_1 + 0x50);
        func_0x00010c0e00e0(uVar3,param_2,lVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c084960();
        func_0x00010c28bf00(lVar2,param_2,param_3,uVar4);
        _objc_release(uVar3);
        _objc_release(lVar2);
      }
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10722e444; end: 10722e44b; -[SCStoriesOperaDataSource storiesMediaManager] */

undefined8 FUN_10722e444(long param_1)

{
  return *(undefined8 *)(param_1 + 400);
}



/* Entry: 10722e44c; end: 10722e463; -[SCStoriesOperaDataSource viewModelConnectionsCallbackController] */

void FUN_10722e44c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x198);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10722e464; end: 10722e46f; -[SCStoriesOperaDataSource setViewModelConnectionsCallbackController:] */

void FUN_10722e464(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x198,param_3);
  return;
}



/* Entry: 10722e470; end: 10722e477; -[SCStoriesOperaDataSource enableCriticalModeWhenLoading] */

undefined1 FUN_10722e470(long param_1)

{
  return *(undefined1 *)(param_1 + 0x188);
}



/* Entry: 10722e478; end: 10722e48f; -[SCStoriesOperaDataSource playlistItemController] */

void FUN_10722e478(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x1a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10722e490; end: 10722e49b; -[SCStoriesOperaDataSource setPlaylistItemController:] */

void FUN_10722e490(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x1a0,param_3);
  return;
}



/* Entry: 10722e49c; end: 10722e4a3; -[SCStoriesOperaDataSource showViewersTable] */

undefined1 FUN_10722e49c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x189);
}



/* Entry: 10722e4a4; end: 10722e4ab; -[SCStoriesOperaDataSource setShowViewersTable:] */

void FUN_10722e4a4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x189) = param_3;
  return;
}



/* Entry: 10722e4ac; end: 10722e4b3; -[SCStoriesOperaDataSource viewingType] */

undefined8 FUN_10722e4ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1a8);
}



/* Entry: 10722e4b4; end: 10722e4bb; -[SCStoriesOperaDataSource setViewingType:] */

void FUN_10722e4b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x1a8) = param_3;
  return;
}



/* Entry: 10722e4bc; end: 10722e4c3; -[SCStoriesOperaDataSource eventAnnouncing] */

undefined8 FUN_10722e4bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1b0);
}



/* Entry: 10722e4c4; end: 10722e4db; -[SCStoriesOperaDataSource fanPassUpsellPlaylistFiltering] */

void FUN_10722e4c4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x1b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10722e4dc; end: 10722e4e7; -[SCStoriesOperaDataSource setFanPassUpsellPlaylistFiltering:] */

void FUN_10722e4dc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x1b8,param_3);
  return;
}



/* Entry: 10722e4e8; end: 10722e71b; -[SCStoriesOperaDataSource .cxx_destruct] */

void FUN_10722e4e8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x1b8);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_destroyWeak(param_1 + 0x1a0);
  _objc_destroyWeak(param_1 + 0x198);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
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
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10722e71c; end: 10722f3ef;  */

void FUN_10722e71c(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,int param_6)

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
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puStack_d8;
  undefined *puStack_c0;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf1eea0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar15;
  func_0x00010c08fa60();
  _objc_release(puVar15);
  _objc_release(puVar2);
  if (puVar3 == (undefined *)0x0) {
    puVar2 = puVar1;
    func_0x00010bf7f0c0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar2;
    func_0x00010c08fa60();
    _objc_release(puVar2);
    puVar2 = puVar1;
    if (puVar15 == (undefined *)0x0) {
      puVar15 = puVar1;
      func_0x00010bf06600();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar15;
      func_0x00010c08fa60();
      _objc_release(puVar15);
      if (puVar3 == (undefined *)0x0) {
        puVar15 = (undefined *)0x0;
        goto LAB_10722f0bc;
      }
      func_0x00010bf06600(puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf7f0c0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar15 = puVar2;
    func_0x00010722f0f8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    _objc_retain(param_2);
    _objc_retain(param_1);
    puVar3 = param_2;
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126bc668;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    puVar15 = puVar3;
    func_0x00010bf1eea0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar15;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf649c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008360();
    _objc_release(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar15);
    puVar2 = puVar4;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27dd80();
    puVar5 = PTR_PTR_1126b2c80;
    func_0x00010bf4cda0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b2c88;
    _objc_alloc();
    puVar15 = puVar3;
    func_0x00010bf93e00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar15;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar3;
    func_0x00010bf93e00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar14;
    func_0x00010c085300();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c029840();
    _objc_release(puVar8);
    _objc_release(puVar14);
    _objc_release(puVar7);
    _objc_release(puVar15);
    puVar15 = puVar3;
    func_0x00010bf1eea0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar15;
    func_0x00010c0ef4a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar7;
    func_0x00010c08fa60();
    _objc_release(puVar7);
    _objc_release(puVar15);
    if (puVar14 == (undefined *)0x0) {
      puStack_c0 = (undefined *)0x0;
    }
    else {
      puVar15 = puVar3;
      func_0x00010bf1eea0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar15;
      func_0x00010c0ef4a0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar7;
      func_0x00010722f840();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar15);
      puVar15 = PTR_PTR_1126b2c80;
      func_0x00010bf4cda0(PTR_PTR_1126b2c80);
      _objc_retainAutoreleasedReturnValue();
      puStack_c0 = PTR_PTR_1126b2c88;
      _objc_alloc();
      puVar7 = puVar3;
      func_0x00010bf93e00(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar3;
      func_0x00010bf93e00(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar13;
      func_0x00010c085300();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c029840();
      _objc_release(puVar9);
      _objc_release(puVar13);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar15);
      _objc_release(puVar14);
    }
    puVar15 = puVar3;
    func_0x00010bf1eea0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar15;
    func_0x00010bfb11c0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar7;
    func_0x00010c08fa60();
    _objc_release(puVar7);
    _objc_release(puVar15);
    puVar15 = PTR_PTR_1126b2c80;
    if (puVar14 == (undefined *)0x0) {
      puStack_d8 = (undefined *)0x0;
    }
    else {
      puVar7 = puVar3;
      func_0x00010bf1eea0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar7;
      func_0x00010bfb11c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4cda0(puVar15);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar14);
      _objc_release(puVar7);
      puStack_d8 = PTR_PTR_1126b2c88;
      _objc_alloc();
      puVar7 = puVar3;
      func_0x00010bf93e00(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar7;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar3;
      func_0x00010bf93e00(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar8;
      func_0x00010c085300();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c029840();
      _objc_release(puVar13);
      _objc_release(puVar8);
      _objc_release(puVar14);
      _objc_release(puVar7);
      _objc_release(puVar15);
    }
    func_0x00010c25b720();
    puVar15 = puVar3;
    func_0x00010bf267e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_1;
    func_0x00010b26c050(param_1,puVar15);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(puVar15);
    puVar7 = PTR_PTR_1126b1060;
    _objc_alloc();
    func_0x00010c032f60();
    puVar15 = param_2;
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar15;
    func_0x00010bf1eea0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar14;
    func_0x00010c260dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    _objc_release(puVar15);
    puVar15 = puVar8;
    func_0x00010c08fa60();
    puVar14 = (undefined *)0x0;
    if ((param_5 != 0) && (puVar15 != (undefined *)0x0)) {
      puVar15 = puVar3;
      func_0x00010bf1eea0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar15;
      func_0x00010c0802a0();
      if ((int)puVar14 == 0) {
        puVar13 = (undefined *)0x0;
      }
      else {
        puVar13 = puVar3;
        func_0x00010bf93e00(puVar3);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar15);
      puVar14 = PTR_PTR_1126b2c88;
      _objc_alloc();
      puVar15 = PTR_PTR_1126b2c80;
      puVar9 = puVar8;
      func_0x00010722f840(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4cda0(puVar15);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar13;
      func_0x00010c086560(puVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar13;
      func_0x00010c085300(puVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c029840();
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar15);
      _objc_release(puVar9);
      _objc_release(puVar13);
    }
    puVar13 = PTR_PTR_1126b2c98;
    _objc_alloc();
    func_0x00010c061c60();
    puVar9 = PTR_PTR_1126b2c90;
    _objc_alloc();
    puVar15 = puVar3;
    func_0x00010bf9c720(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = param_2;
    func_0x00010c26f2a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8b160();
    func_0x00010c011180();
    _objc_release(puVar11);
    _objc_release(puVar15);
    puVar15 = PTR_PTR_1126b2ca0;
    _objc_alloc(PTR_PTR_1126b2ca0);
    puVar11 = puVar3;
    func_0x00010bf267e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar4);
    if ((((param_6 != 0) && (puVar4 != (undefined *)0x0)) &&
        (puVar12 = puVar4, func_0x00010bf4ce20(), (int)puVar12 != 2)) &&
       (puVar12 = puVar4, func_0x00010bf4ce20(), (int)puVar12 == 3)) {
      puVar12 = puVar4;
      func_0x00010c0c4220();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa1dc0();
      _objc_release(puVar12);
    }
    _objc_release(puVar4);
    func_0x00010c029020(puVar15);
    _objc_release(puVar11);
    _objc_release(puVar9);
    _objc_release(puVar13);
    _objc_release(puVar8);
    _objc_release(puVar14);
    _objc_release(puVar7);
    _objc_release(uVar10);
    _objc_release(puStack_d8);
    _objc_release(puStack_c0);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(param_2);
  }
LAB_10722f0bc:
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 10722f3f0; end: 10722f49f;  */

uint FUN_10722f3f0(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010c25b720();
  if (lVar2 == 1) {
    uVar5 = 1;
  }
  else if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010c0d7220(param_1);
    uVar5 = (uint)lVar2 ^ 1;
  }
  else {
    uVar5 = 0;
  }
  lVar2 = param_1;
  func_0x00010bf1eea0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar1 = 0;
  if (lVar4 != 0) {
    uVar1 = uVar5;
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10722f4a0; end: 10722f7af;  */

uint FUN_10722f4a0(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,uint param_6)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c11f8;
  func_0x00010c14bcc0(PTR_PTR_1126c11f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f320();
  _objc_release(puVar1);
  _objc_retain(param_1);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x2020000000;
  uStack_88 = 0;
  func_0x00010c0bdf40(param_1);
  uVar5 = param_5 & *(byte *)(puStack_98 + 3);
  if (((param_5 & 1) == 0) && ((*(byte *)(puStack_98 + 3) & 1) != 0)) {
    uVar5 = (uint)*(byte *)(puStack_78 + 3);
  }
  __Block_object_dispose(&uStack_a0,8);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(param_1);
  uVar2 = param_2;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c27dd80();
  uVar6 = 1;
  uVar4 = uVar3 + 1;
  if (uVar4 < 0x1c) {
    if ((1L << (uVar4 & 0x3f) & 0xb4b5dbbU) == 0) {
      if ((1L << (uVar4 & 0x3f) & 0x484a040U) != 0) {
        uVar6 = 0;
      }
    }
    else if ((uVar3 < 0x1b) &&
            (((uint)(uVar3 + 1 < 0x1b) & 0x6c6bd77U >> (ulong)((uint)(uVar3 + 1) & 0x1f)) == 0)) {
      uVar6 = 0x18039f >> (ulong)((uint)uVar3 & 0x1f);
    }
  }
  _objc_release(uVar2);
  uVar4 = param_2;
  func_0x00010c0c5340(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c27dd80();
  _objc_release(uVar4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar5 & uVar6 & (param_6 |
                         (uint)(uVar2 + 1 < 0x1c) & 0xd8de5fdU >> (ulong)((uint)(uVar2 + 1) & 0x1f))
  ;
}



/* Entry: 10722f7b0; end: 10722f8e3;  */

ulong FUN_10722f7b0(ulong param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain();
  if (param_2 == 0x2b) {
    uVar2 = 1;
  }
  else if (param_2 == 0x2d) {
    puVar1 = PTR_PTR_1126c11f8;
    func_0x00010c25fa80(PTR_PTR_1126c11f8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf1f320(param_1);
    _objc_release(puVar1);
  }
  else {
    uVar2 = (ulong)(param_2 == 7 || param_2 == 0x1e);
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10722f8e4; end: 10722f93f;  */

void FUN_10722f8e4(long param_1,long param_2)

{
  long lVar1;
  
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf529e0();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = lVar1 == 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10722f940; end: 10722f943;  */

void FUN_10722f940(void)

{
  return;
}



/* Entry: 10722f944; end: 10722f9fb;  */

void FUN_10722f944(long param_1,long param_2)

{
  long lVar1;
  
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf529e0();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = lVar1 == 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10722f9fc; end: 10722fa1f;  */

void FUN_10722f9fc(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  return;
}



/* Entry: 10722fa20; end: 10722fa8b;  */

void FUN_10722fa20(long param_1,long param_2)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010bf529e0();
    *(bool *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = lVar1 == 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 10722fa8c; end: 10722fb8b;  */

void FUN_10722fa8c(void)

{
  return;
}



/* Entry: 10722fb8c; end: 10722ffd7; +[SCStoriesOperaSnapPagePropertyParser pagesPropertiesForStorySnap:storiesPlaybackSequence:customStoryMetadata:error:viewLocation:viewLocationPos:mediaManager:storiesMediaCoordinator:chromeAvatarProvider:currentUserId:publicProfileId:impalaLegacyServices:snapchattersSynchronousDataFetcher:circumstanceEngine:lazyDataFetcher:musicContentRestrictionServices:snapchatterUserInfoProvider:numOfSnapsInStorySequence:indexOfSnapInStorySequence:numOfProgressSegmentsInStorySequence:progressSegmentIndexOfSnapInStorySequence:longVideoExperienceConfig:autoProgressingConfiguration:isAutoAdvanceSuppressedForSnap:offPlatformLinkGenerationService:storiesConfigProvider:profilesProvider:spotlightDataFetcher:p2pOptions:fanPassDisplayName:friendOfGroupFeedDisplayName:pageType:isJoinedPlayback:snapchatterObservableRepository:] */

void FUN_10722fb8c(undefined **param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000d8;
  
  ppuVar2 = &PTR__OBJC_CLASS___NSConstantArray_111181658;
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_retain(in_stack_000000d8);
    _objc_retain(in_stack_000000c0);
    _objc_retain(in_stack_000000b8);
    _objc_retain(in_stack_000000b0);
    _objc_retain(in_stack_000000a8);
    _objc_retain(in_stack_000000a0);
    _objc_retain(in_stack_00000098);
    _objc_retain(in_stack_00000090);
    _objc_retain(in_stack_00000080);
    _objc_retain(in_stack_00000078);
    _objc_retain(param_19);
    _objc_retain(param_18);
    _objc_retain(param_17);
    _objc_retain(param_16);
    _objc_retain(param_15);
    _objc_retain(param_14);
    _objc_retain(param_13);
    _objc_retain(param_12);
    _objc_retain(param_11);
    _objc_retain(param_10);
    _objc_retain(param_9);
    _objc_retain(param_6);
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x000107d267d0(param_3,param_12,param_19,param_15);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = param_1;
    func_0x00010c22bd60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(in_stack_000000d8);
    _objc_release(in_stack_000000c0);
    _objc_release(in_stack_000000b8);
    _objc_release(param_19);
    _objc_release(param_18);
    _objc_release(param_11);
    ppuVar3 = ppuVar2;
    func_0x00010c0d3c80();
    _objc_release(ppuVar2);
    func_0x00010bdcd2a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(in_stack_000000b0);
    _objc_release(in_stack_000000a8);
    _objc_release(in_stack_000000a0);
    _objc_release(in_stack_00000098);
    _objc_release(in_stack_00000090);
    _objc_release(in_stack_00000080);
    _objc_release(in_stack_00000078);
    _objc_release(param_17);
    _objc_release(param_16);
    _objc_release(param_15);
    _objc_release(param_14);
    _objc_release(param_13);
    _objc_release(param_12);
    _objc_release(param_10);
    _objc_release(param_9);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    ppuVar2 = param_1;
    func_0x00010c0d3c80(param_1);
    _objc_release(param_1);
    _objc_release(ppuVar3);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10722ffd8; end: 10723046b; +[SCStoriesOperaSnapPagePropertyParser _appendMediaPagePropertiesToPageProperties:forStorySnap:posterSnapchatter:storiesPlaybackSequence:customStoryMetadata:viewLocation:currentUserId:publicProfileId:circumstanceEngine:lazyDataFetcher:snapchattersSynchronousDataFetcher:impalaLegacyServices:numOfSnapsInStorySequence:indexOfSnapInStorySequence:numOfProgressSegmentsInStorySequence:progressSegmentIndexOfSnapInStorySequence:longVideoExperienceConfig:autoProgressingConfiguration:isAutoAdvanceSuppressedForSnap:mediaManager:storiesMediaCoordinator:error:offPlatformLinkGenerationService:profilesProvider:storiesConfigProvider:spotlightDataFetcher:isJoinedPlayback:p2pOptions:] */

void FUN_10722ffd8(double param_1,undefined *param_2,undefined8 param_3,undefined **param_4,
                  undefined **param_5,undefined8 param_6,undefined *param_7,undefined8 param_8,
                  undefined **param_9,undefined8 param_10,undefined *param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,long param_15)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  long lVar27;
  undefined ***pppuVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined **ppuVar32;
  undefined **ppuVar33;
  undefined8 uVar34;
  undefined *puVar35;
  undefined8 uVar36;
  uint uVar37;
  ulong uVar38;
  long lVar39;
  long lVar40;
  undefined *puVar41;
  undefined *puVar42;
  uint uVar43;
  long lVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  ulong in_stack_00000098;
  byte in_stack_000000a0;
  undefined *in_stack_000000a8;
  undefined **ppuStack_630;
  undefined **ppuStack_628;
  undefined *puStack_608;
  undefined **ppuStack_5e8;
  undefined *puStack_5c8;
  undefined1 auStack_3f0 [8];
  undefined *puStack_3e8;
  undefined8 uStack_3e0;
  code *pcStack_3d8;
  undefined *puStack_3d0;
  undefined **ppuStack_3c8;
  undefined **ppuStack_3c0;
  undefined **ppuStack_3b8;
  undefined **ppuStack_3b0;
  undefined *puStack_3a8;
  undefined *puStack_3a0;
  undefined **ppuStack_398;
  undefined8 uStack_390;
  undefined1 uStack_388;
  undefined **ppuStack_300;
  undefined *puStack_2f8;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined *puStack_2b0;
  undefined **ppuStack_2a8;
  undefined *puStack_2a0;
  code *pcStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined **ppuStack_280;
  long lStack_278;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  byte bStack_158;
  undefined *puStack_150;
  undefined *puStack_c8;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uVar11;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar34 = param_6;
  puVar35 = param_7;
  uVar36 = param_8;
  ppuVar32 = param_9;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(in_stack_00000050);
  _objc_retain(in_stack_00000058);
  _objc_retain(in_stack_00000068);
  _objc_retain(in_stack_00000070);
  _objc_retain(in_stack_00000078);
  _objc_retain(in_stack_00000080);
  _objc_retain(in_stack_00000088);
  _objc_retain(in_stack_00000090);
  _objc_retain(in_stack_00000098);
  _objc_retain(in_stack_000000a8);
  if (in_stack_00000068 != 0) {
    func_0x00010c1d0640(param_4);
    func_0x00010c1d0640(param_4);
  }
  ppuVar6 = param_5;
  func_0x00010c0c5340(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar44 = in_stack_00000070;
  func_0x00010c0c6980();
  _objc_release(ppuVar6);
  ppuVar6 = param_5;
  func_0x00010bfa0a00();
  if (0 < (long)ppuVar6) {
    _objc_release(in_stack_00000078);
    func_0x00010c1d0640(param_4);
    puVar7 = PTR_PTR_1126ca7c8;
    func_0x00010c0e8cc0(PTR_PTR_1126ca7c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4);
    _objc_release(puVar7);
    in_stack_00000078 = 0;
    lVar44 = 2;
  }
  if ((in_stack_00000078 == 0) && (lVar44 == 2)) {
    puStack_150 = in_stack_000000a8;
    bStack_158 = in_stack_000000a0;
    uStack_168 = in_stack_00000090;
    uStack_160 = in_stack_00000098;
    uStack_178 = in_stack_00000080;
    uStack_170 = in_stack_00000088;
    uStack_188 = in_stack_00000058;
    uStack_198 = in_stack_00000048;
    uStack_190 = in_stack_00000050;
    uStack_1a0 = in_stack_00000040;
    lStack_1b8 = param_15;
    uStack_1c8 = param_13;
    uStack_1c0 = param_14;
    puStack_1d8 = param_11;
    uStack_1d0 = param_12;
    uStack_1e0 = param_10;
    ppuVar6 = param_4;
    ppuVar33 = param_5;
    uVar34 = param_6;
    puVar35 = param_7;
    uVar36 = param_8;
    func_0x00010bf06ec0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar32 = param_9;
    puStack_c8 = param_2;
  }
  else {
    func_0x00010be4f100();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = &puStack_78;
    ppuVar33 = (undefined **)0x1;
    puStack_c8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = param_2;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
  }
  _objc_release(in_stack_000000a8);
  _objc_release(in_stack_00000098);
  _objc_release(in_stack_00000090);
  _objc_release(in_stack_00000088);
  _objc_release(in_stack_00000080);
  _objc_release(in_stack_00000078);
  _objc_release(in_stack_00000070);
  _objc_release(in_stack_00000068);
  _objc_release(in_stack_00000058);
  _objc_release(in_stack_00000050);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  uVar37 = (uint)bStack_158;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar6);
  _objc_retain(ppuVar33);
  _objc_retain(uVar34);
  _objc_retain(puVar35);
  _objc_retain(uVar36);
  _objc_retain(uStack_1e0);
  _objc_retain(puStack_1d8);
  _objc_retain(uStack_1d0);
  _objc_retain(uStack_1c8);
  _objc_retain(uStack_1c0);
  _objc_retain(lStack_1b8);
  _objc_retain(uStack_190);
  _objc_retain(uStack_188);
  _objc_retain(uStack_178);
  _objc_retain(uStack_170);
  _objc_retain(uStack_168);
  _objc_retain(uStack_160);
  _objc_retain(puStack_150);
  ppuVar8 = ppuVar33;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar8;
  func_0x00010c27dd80();
  if (((((undefined *)0x1b < (undefined *)((long)ppuVar9 + 1U)) ||
       ((1L << ((long)ppuVar9 + 1U & 0x3f) & 0xb4b5dbbU) == 0)) ||
      ((undefined *)0x1a < (undefined *)((long)ppuVar9 + 1U))) ||
     ((1L << ((long)ppuVar9 + 1U & 0x3f) & 0x6c6bd77U) == 0)) {
    _objc_release(ppuVar8);
    ppuVar8 = param_4;
    func_0x00010be6f700(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(ppuVar6);
  }
  _objc_release(ppuVar8);
  if (((long)ppuVar32 - 0x2bU < 0x29) &&
     ((1L << ((long)ppuVar32 - 0x2bU & 0x3f) & 0x10000000007U) != 0)) {
    func_0x00010c1d0640(ppuVar6);
  }
  ppuVar9 = ppuVar33;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar9;
  func_0x00010c27dd80();
  ppuVar8 = (undefined **)((long)ppuVar10 + 1);
  if (ppuVar8 < (undefined **)0x1c) {
    if ((1L << ((ulong)ppuVar8 & 0x3f) & 0xb4b5dbbU) == 0) {
      uVar5 = 0x484a040;
    }
    else {
      if ((((undefined *)((long)ppuVar10 + 1U) < (undefined *)0x1b) &&
          ((1L << ((long)ppuVar10 + 1U & 0x3f) & 0x6c6bd77U) != 0)) ||
         ((undefined **)0x1a < ppuVar10)) goto LAB_107230748;
      uVar5 = 0x7e7fc60;
      ppuVar8 = ppuVar10;
    }
    if ((1L << ((ulong)ppuVar8 & 0x3f) & (ulong)uVar5) != 0) {
      _objc_release(ppuVar9);
      ppuVar9 = param_4;
      func_0x00010be6f6c0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60(ppuVar6);
    }
  }
LAB_107230748:
  _objc_release(ppuVar9);
  ppuVar8 = ppuVar33;
  func_0x000107d2b30c(ppuVar33,puVar35,uStack_1e0,uStack_1c0,uStack_1d0,ppuVar32);
  ppuVar9 = ppuVar33;
  func_0x00010bfa0a00();
  puVar7 = puVar35;
  func_0x000107d29c48();
  iVar4 = 0;
  if ((int)puVar7 != 0) {
    uVar11 = uStack_1d0;
    func_0x000108f48408();
    iVar4 = (int)uVar11;
  }
  if (((long)ppuVar9 < 1) && (iVar4 == 0)) {
    ppuVar9 = param_4;
    func_0x00010be6f640(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(ppuVar6);
    _objc_release(ppuVar9);
  }
  else {
    ppuStack_300 = &PTR____CFConstantStringClassReference_110f0ea98;
    puStack_2f8 = PTR____kCFBooleanTrue_11034ab68;
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(ppuVar6);
    _objc_release(puVar7);
  }
  uVar38 = (long)ppuVar32 - 0x54;
  if (((uVar38 < 0x14) && ((1L << (uVar38 & 0x3f) & 0x80021U) != 0)) ||
     (ppuVar32 == (undefined **)0x7)) {
    puVar41 = PTR_PTR_1126c9e18;
    _objc_alloc();
    func_0x00010c00c560();
    puVar12 = puVar41;
    func_0x00010c0f12c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(ppuVar33);
    _objc_retain(puVar35);
    _objc_retain(puVar12);
    ppuVar9 = ppuVar33;
    func_0x00010c12fc80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar9;
    func_0x00010bf0d6a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar10;
    func_0x00010c08fa60();
    _objc_release(ppuVar10);
    _objc_release(ppuVar9);
    puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
    if (ppuVar13 == (undefined **)0x0) {
      puStack_608 = (undefined *)0x0;
    }
    else {
      ppuVar9 = ppuVar33;
      func_0x00010c12fc80(ppuVar33);
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar9;
      func_0x00010bf0d6a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar10);
      _objc_release(ppuVar9);
      if (puVar7 == (undefined *)0x0) {
        puStack_608 = (undefined *)0x0;
      }
      else {
        puVar14 = PTR_PTR_1126b2368;
        _objc_opt_new();
        puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        puVar42 = puVar14;
        func_0x00010c2b53a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar15);
        _objc_release(puVar14);
        ppuStack_2e8 = &PTR____CFConstantStringClassReference_110f0cad8;
        ppuStack_2e0 = &PTR____CFConstantStringClassReference_110f0bd58;
        ppuStack_2a8 = (undefined **)PTR____kCFBooleanTrue_11034ab68;
        ppuStack_2d8 = &PTR____CFConstantStringClassReference_110f0cc38;
        ppuStack_2d0 = &PTR____CFConstantStringClassReference_110f0cc18;
        puStack_2a0 = PTR____kCFBooleanFalse_11034ab60;
        pcStack_298 = (code *)PTR____kCFBooleanTrue_11034ab68;
        puStack_290 = PTR____kCFBooleanTrue_11034ab68;
        ppuStack_2c8 = &PTR____CFConstantStringClassReference_110f0ccb8;
        ppuStack_2c0 = &PTR____CFConstantStringClassReference_110f0bbd8;
        puVar14 = PTR_PTR_1126b8238;
        puStack_2b0 = puVar7;
        func_0x00010c291260();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_2b8 = &PTR____CFConstantStringClassReference_110dcadf8;
        puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_288 = puVar14;
        ppuStack_280 = ppuVar33;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b53e0(puVar42);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar15);
        _objc_release(puVar14);
        if (puVar35 != (undefined *)0x0) {
          ppuStack_2f0 = &PTR____CFConstantStringClassReference_110ea1a58;
          puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          puStack_3a0 = puVar35;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2b53e0(puVar42);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar14);
        }
        puVar14 = puVar42;
        func_0x00010c1531a0();
        _objc_retainAutoreleasedReturnValue();
        puStack_608 = puVar14;
        func_0x00010bf51e00();
        _objc_release(puVar14);
        _objc_release(puVar42);
      }
      _objc_release(puVar7);
    }
    _objc_release(puVar12);
    _objc_release(puVar35);
    _objc_release(ppuVar33);
    _objc_release(puVar12);
    _objc_release(puVar41);
  }
  else {
    puStack_608 = (undefined *)0x0;
  }
  ppuVar9 = ppuVar33;
  func_0x00010c26f2a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar9;
  func_0x00010c071060();
  _objc_release(ppuVar9);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(ppuVar6);
  _objc_release(puVar7);
  if (((((long)ppuVar32 - 0x49U < 0x1a) &&
       ((1L << ((long)ppuVar32 - 0x49U & 0x3f) & 0x2020001U) != 0)) ||
      ((uVar1 = (long)ppuVar32 - 0x57U >> 1, (uVar1 | (long)ppuVar32 - 0x57U << 0x3f) < 8 &&
       ((1L << (uVar1 & 0x3f) & 0xb1U) != 0)))) && (((ulong)ppuVar10 & 1) == 0)) {
    puStack_3e8 = PTR___NSConcreteStackBlock_11034bd00;
    param_1 = 1.60807493534087e-314;
    uStack_3e0 = 0xc2000000;
    pcStack_3d8 = FUN_107232fdc;
    puStack_3d0 = &UNK_110993e08;
    _objc_retain(ppuVar33);
    ppuStack_3c8 = ppuVar33;
    _objc_retain(ppuVar6);
    ppuStack_3c0 = ppuVar6;
    func_0x00010c0bdf40(puVar35);
    _objc_release(ppuStack_3c0);
    _objc_release(ppuStack_3c8);
  }
  if ((((ppuVar32 == (undefined **)0x7) || (ppuVar32 == (undefined **)0x59)) ||
      (ppuVar32 == (undefined **)0x54)) &&
     (ppuVar9 = ppuVar33, func_0x000108539be8(ppuVar33,uStack_1d0), (int)ppuVar9 != 0)) {
    func_0x00010c1d0640(ppuVar6);
  }
  else {
    ppuVar9 = ppuVar6;
    func_0x00010c0e00e0(ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(ppuVar9);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c22eda0(ppuVar33);
    func_0x00010c0df760(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuVar6);
    _objc_release(puVar7);
  }
  puVar7 = puVar35;
  func_0x000108539290();
  puVar41 = puVar35;
  func_0x000108538ba0();
  puVar12 = puVar35;
  func_0x000108538878();
  uVar5 = (uint)puVar12;
  if (uVar37 != 0) {
    ppuVar9 = ppuVar33;
    func_0x00010853a0e0();
    if ((int)ppuVar9 == 0) {
      uVar5 = 0;
    }
    else {
      func_0x000108f48368();
      uVar5 = 1;
    }
  }
  puVar12 = puVar35;
  func_0x0001085393b0();
  puVar14 = puVar35;
  func_0x000108536f70();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar32 == (undefined **)0x1e) {
    puVar15 = PTR_PTR_1126c2a20;
    func_0x00010c24b800(PTR_PTR_1126c2a20);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uStack_168;
    func_0x00010bf1f320();
    if ((int)uVar11 == 0) {
      bVar2 = false;
    }
    else {
      puVar42 = puVar14;
      func_0x00010bfa4340();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar42;
      func_0x00010c067ec0();
      bVar2 = (int)puVar16 == 0x10d;
      _objc_release(puVar42);
    }
    _objc_release(puVar15);
  }
  else {
    bVar2 = false;
  }
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar42 = PTR_PTR_1126c9358;
  func_0x00010c07f340(PTR_PTR_1126c9358);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(ppuVar6);
  _objc_release(puVar42);
  _objc_release(puVar15);
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar42 = PTR_PTR_1126c9358;
  func_0x00010c07d1a0(PTR_PTR_1126c9358);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(ppuVar6);
  _objc_release(puVar42);
  _objc_release(puVar15);
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar42 = PTR_PTR_1126c9358;
  func_0x00010c07b7c0(PTR_PTR_1126c9358);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(ppuVar6);
  _objc_release(puVar42);
  _objc_release(puVar15);
  ppuVar10 = ppuVar33;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar10;
  func_0x00010c27dd80();
  ppuVar9 = (undefined **)((long)ppuVar13 + 1);
  if (ppuVar9 < (undefined **)0x1c) {
    if ((1L << ((ulong)ppuVar9 & 0x3f) & 0xb4b5dbbU) == 0) {
      uVar43 = 0x484a040;
    }
    else {
      if ((((undefined *)((long)ppuVar13 + 1U) < (undefined *)0x1b) &&
          ((1L << ((long)ppuVar13 + 1U & 0x3f) & 0x6c6bd77U) != 0)) ||
         ((undefined **)0x1a < ppuVar13)) goto LAB_107231000;
      uVar43 = 0x7e7fc60;
      ppuVar9 = ppuVar13;
    }
    if ((1L << ((ulong)ppuVar9 & 0x3f) & (ulong)uVar43) == 0) goto LAB_107231000;
    _objc_release(ppuVar10);
    if (ppuVar32 != (undefined **)0x2b) goto LAB_10723107c;
  }
  else {
LAB_107231000:
    if (ppuVar32 == (undefined **)0x2b) {
      func_0x00010bf8b460(uStack_190);
      puVar15 = puVar35;
      func_0x000107d2e490(puVar35,ppuVar33,0x2b);
      _objc_release(ppuVar10);
      if ((((uint)puVar7 | (uint)puVar15 ^ 0xffffffff) & 1) != 0) goto LAB_10723146c;
    }
    else {
      _objc_release(ppuVar10);
LAB_10723107c:
      func_0x00010bf8b460(uStack_190);
      puVar15 = puVar35;
      func_0x000107d2e490(puVar35,ppuVar33,ppuVar32);
      if (((int)puVar15 == 0) || (uVar11 = uStack_168, func_0x00010c269660(), (int)uVar11 == 0))
      goto LAB_10723146c;
    }
    uVar11 = uStack_168;
    func_0x00010bf90b60();
    _objc_retain(ppuVar6);
    _objc_retain(ppuVar33);
    _objc_retain(uStack_190);
    func_0x00010c1d0640(ppuVar6);
    func_0x00010c1d0640(ppuVar6);
    func_0x00010c1d0640(ppuVar6);
    puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c2696a0(uStack_190);
    func_0x00010c0df720(puVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuVar6);
    _objc_release(puVar15);
    uVar17 = uStack_190;
    func_0x00010c0dba40();
    puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((int)uVar17 != 0) {
      ppuVar9 = ppuVar33;
      func_0x00010c26f2a0(ppuVar33);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf8b160();
      dVar46 = param_1;
      func_0x00010c2696a0(uStack_190);
      param_1 = (double)(long)((param_1 + -2.5) / dVar46);
      func_0x00010c0df720(puVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppuVar6);
      _objc_release(puVar15);
      _objc_release(ppuVar9);
      puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c2696a0(uStack_190);
      func_0x00010c0df720(puVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppuVar6);
      _objc_release(puVar15);
      func_0x00010c1d0640(ppuVar6);
    }
    uVar17 = uStack_190;
    func_0x00010c0dba40();
    dVar46 = param_1;
    if (((uint)uVar11 | (uint)uVar17) == 1) {
      ppuVar9 = ppuVar33;
      func_0x00010c26f2a0(ppuVar33);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf8b160();
      dVar45 = param_1;
      func_0x00010c2696a0(uStack_190);
      ppuVar10 = ppuVar33;
      func_0x00010bf3cf60(ppuVar33);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      dVar46 = -2.5;
      if (0.0 < param_1 + -2.5) {
        dVar47 = 0.0;
        do {
          puVar42 = PTR_PTR_1126d53e0;
          _objc_alloc(PTR_PTR_1126d53e0);
          dVar46 = dVar47;
          func_0x00010c030d20();
          func_0x00010befa120(puVar15);
          _objc_release(puVar42);
          dVar47 = dVar45 + dVar47;
        } while (dVar47 < param_1 + -2.5);
      }
      puVar42 = PTR_PTR_1126d53e8;
      _objc_alloc();
      func_0x00010c010d80();
      _objc_release(puVar15);
      _objc_release(ppuVar10);
      _objc_release(ppuVar9);
      puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_2b0 = puVar42;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppuVar6);
      _objc_release(puVar15);
      _objc_release(puVar42);
    }
    ppuVar9 = ppuVar33;
    func_0x00010c29e300(ppuVar33);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29ecc0();
    if (dVar46 <= 0.0) {
LAB_10723144c:
      _objc_release(ppuVar9);
    }
    else {
      ppuVar10 = ppuVar33;
      func_0x00010c29e300();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = ppuVar10;
      func_0x00010c083540();
      _objc_release(ppuVar10);
      _objc_release(ppuVar9);
      puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (((ulong)ppuVar13 & 1) == 0) {
        ppuVar9 = ppuVar33;
        func_0x00010c29e300(ppuVar33);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c29ecc0();
        dVar45 = dVar46;
        func_0x00010c2696a0(uStack_190);
        dVar47 = dVar45;
        func_0x00010c2696a0(uStack_190);
        func_0x00010c0df720(dVar47 * (double)((int)((dVar46 / 1000.0) / dVar45) + 1),puVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(ppuVar6);
        _objc_release(puVar15);
        goto LAB_10723144c;
      }
    }
    _objc_release(uStack_190);
    _objc_release(ppuVar33);
    _objc_release(ppuVar6);
  }
LAB_10723146c:
  uVar11 = uVar34;
  func_0x00010c2923e0(uVar34);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uStack_1e0;
  func_0x00010c0720c0(uStack_1e0);
  _objc_release(uVar11);
  ppuVar9 = ppuVar33;
  func_0x00010c262160();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar9 != (undefined **)0x0) {
    ppuVar10 = ppuVar33;
    func_0x00010c262160();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar10;
    func_0x00010bf529e0();
    _objc_release(ppuVar10);
    _objc_release(ppuVar9);
    if (ppuVar13 != (undefined **)0x0) {
      ppuVar9 = ppuVar33;
      func_0x00010c262160(ppuVar33);
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar9;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppuVar6);
      _objc_release(ppuVar10);
      _objc_release(ppuVar9);
    }
  }
  uVar11 = uVar34;
  func_0x000100bf119c(uVar34);
  ppuVar9 = ppuVar33;
  FUN_10723b17c(ppuVar33,puVar35,uStack_1e0,ppuVar6,uStack_1d0,uStack_1c0,uVar11,uVar17,bVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107b281fc(ppuVar6,ppuVar9);
  uVar1 = uStack_160;
  if (((ulong)puVar7 & 1) == 0) {
    ppuVar10 = ppuVar32;
    func_0x000108f4b978();
    if (uStack_160 != 0) {
      uVar1 = (ulong)ppuVar10 & 1;
      goto joined_r0x000107231594;
    }
  }
  else {
joined_r0x000107231594:
    if (uVar1 != 0) {
      _objc_initWeak(&puStack_2b0,uStack_160);
      puVar15 = PTR_PTR_1126ae720;
      _objc_copyWeak(auStack_3f0,&puStack_2b0);
      _objc_retain(ppuVar9);
      func_0x00010bf11fe0(puVar15);
      _objc_retainAutoreleasedReturnValue();
      puVar42 = PTR_PTR_1126b2d20;
      func_0x00010c24afc0(PTR_PTR_1126b2d20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppuVar6);
      _objc_release(puVar42);
      _objc_release(puVar15);
      _objc_release(ppuVar9);
      _objc_destroyWeak(auStack_3f0);
      _objc_destroyWeak(&puStack_2b0);
    }
  }
  if ((ppuVar32 == (undefined **)0x65) &&
     (uVar11 = uStack_1d0, func_0x000108f4b700(uStack_1d0,0), (int)uVar11 != 0)) {
    ppuVar10 = ppuVar33;
    func_0x00010853c32c(ppuVar33);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR_PTR_1126b6060;
    func_0x00010bfeb420(PTR_PTR_1126b6060);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuVar6);
    _objc_release(puVar15);
    _objc_release(ppuVar10);
    ppuVar10 = ppuVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    ppuVar13 = ppuVar33;
    func_0x000107d2bff8();
    if (((ulong)ppuVar13 & 1) == 0 && ppuVar10 == (undefined **)0x0) {
      puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar42 = PTR_PTR_1126b2d20;
      func_0x00010bf7f080(PTR_PTR_1126b2d20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppuVar6);
      _objc_release(puVar42);
      _objc_release(puVar15);
    }
  }
  if ((((ppuVar32 == (undefined **)0x59 || (((uint)puVar7 | (uint)puVar12) & 1) != 0) || bVar2) &&
      (uVar11 = uStack_1d0, func_0x000108f4b700(uStack_1d0,0), (int)uVar11 != 0)) &&
     (ppuVar10 = ppuVar32, func_0x000108f4b9ec(ppuVar32,uStack_168), (int)ppuVar10 != 0)) {
    puVar12 = PTR_PTR_1126b2d20;
    func_0x00010c24ae80(PTR_PTR_1126b2d20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuVar6);
    _objc_release(puVar12);
  }
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(ppuVar6);
  _objc_release(puVar12);
  if (((ulong)puVar41 & 1) == 0) {
    ppuVar10 = ppuVar33;
    func_0x00010bf4cc60(ppuVar33);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1126c9270;
    func_0x00010c2532a0(PTR_PTR_1126c9270);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuVar6);
    _objc_release(puVar12);
    _objc_release(ppuVar10);
  }
  ppuVar10 = ppuVar33;
  func_0x000109017f30(ppuVar33,puVar35,uStack_1e0,(ulong)ppuVar8 & 0xffffffff,uStack_1d0,ppuVar32,
                      uStack_1c0);
  if (ppuVar10 != (undefined **)0x0) {
    ppuVar10 = ppuVar33;
    func_0x00010c15f2e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar10 != (undefined **)0x0) {
      func_0x000109017f30(ppuVar33,puVar35,uStack_1e0,(ulong)ppuVar8 & 0xffffffff,uStack_1d0,
                          ppuVar32,uStack_1c0);
      ppuVar10 = ppuVar33;
      func_0x000109018dc4(ppuVar33,uStack_170);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR_PTR_1126b23b0;
      _objc_alloc(PTR_PTR_1126b23b0);
      puVar12 = PTR_PTR_1126b23b8;
      ppuVar13 = ppuVar33;
      func_0x00010bf5b080();
      _objc_retainAutoreleasedReturnValue();
      ppuVar18 = ppuVar13;
      func_0x00010bf5b440();
      _objc_retainAutoreleasedReturnValue();
      ppuVar19 = ppuVar33;
      func_0x00010bf5b080();
      _objc_retainAutoreleasedReturnValue();
      ppuVar20 = ppuVar19;
      func_0x00010bf5bc00(ppuVar19);
      _objc_retainAutoreleasedReturnValue();
      ppuVar21 = ppuVar33;
      func_0x00010bf5b080(ppuVar33);
      _objc_retainAutoreleasedReturnValue();
      ppuVar22 = ppuVar21;
      func_0x00010bf5b380();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2942e0(puVar12);
      _objc_retainAutoreleasedReturnValue();
      ppuVar23 = ppuVar33;
      func_0x00010bf5b080(ppuVar33);
      _objc_retainAutoreleasedReturnValue();
      ppuVar24 = ppuVar23;
      func_0x00010bf5b440();
      _objc_retainAutoreleasedReturnValue();
      ppuVar25 = ppuVar33;
      func_0x00010c15f2e0(ppuVar33);
      _objc_retainAutoreleasedReturnValue();
      ppuVar26 = ppuVar33;
      func_0x000109018770(ppuVar33);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c03e660(puVar15);
      _objc_release(ppuVar26);
      _objc_release(ppuVar25);
      _objc_release(ppuVar24);
      _objc_release(ppuVar23);
      _objc_release(puVar12);
      _objc_release(ppuVar22);
      _objc_release(ppuVar21);
      _objc_release(ppuVar20);
      _objc_release(ppuVar19);
      _objc_release(ppuVar18);
      _objc_release(ppuVar13);
      func_0x00010c1d0640(ppuVar6);
      _objc_release(puVar15);
      _objc_release(ppuVar10);
    }
  }
  ppuVar10 = ppuVar9;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar10;
  func_0x00010c06d7a0();
  if ((int)ppuVar13 == 0) {
LAB_107231ab0:
    _objc_release(ppuVar10);
  }
  else {
    ppuVar13 = ppuVar33;
    func_0x00010bfa0a00();
    _objc_release(ppuVar10);
    if (ppuVar13 == (undefined **)0x0) {
      ppuVar10 = param_4;
      func_0x00010be6f480(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60(ppuVar6);
      goto LAB_107231ab0;
    }
  }
  uVar11 = uStack_178;
  ppuVar10 = ppuVar33;
  if (uVar5 == 0) {
    if ((int)puVar41 != 0) {
      ppuVar13 = ppuVar33;
      func_0x00010bf5b080(ppuVar33);
      _objc_retainAutoreleasedReturnValue();
      ppuVar18 = ppuVar13;
      func_0x00010bf5b1a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      _objc_release(ppuVar18);
      _objc_release(ppuVar13);
      func_0x00010c269d40(uStack_178);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5b080(ppuVar33);
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = ppuVar10;
      func_0x00010bf5b1a0();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar11;
      func_0x00010bfbf8c0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107231bc4;
    }
  }
  else {
    func_0x00010c269d40(uStack_178);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5b080(ppuVar33);
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar10;
    func_0x00010bf5bc00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar18 = ppuVar33;
    func_0x00010c15f2e0(ppuVar33);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar11;
    func_0x00010bfbf8a0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar18);
LAB_107231bc4:
    _objc_release(ppuVar13);
    _objc_release(ppuVar10);
    _objc_release(uVar11);
    uVar11 = uVar17;
    func_0x00010beec820(uVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuVar6);
    _objc_release(uVar11);
    _objc_release(uVar17);
  }
  uVar11 = uStack_1d0;
  func_0x000108f4a29c();
  if ((int)uVar11 == 0) {
    bVar2 = true;
  }
  else {
    ppuVar10 = ppuVar33;
    func_0x00010c26fe00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar10;
    func_0x00010bf529e0();
    bVar2 = ppuVar13 == (undefined **)0x0;
    _objc_release(ppuVar10);
  }
  ppuVar10 = ppuVar33;
  func_0x00010c26fe00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar10;
  func_0x00010bf529e0();
  _objc_release(ppuVar10);
  if (ppuVar13 != (undefined **)0x0) {
    puVar41 = PTR_PTR_1126b10e0;
    _objc_opt_new(PTR_PTR_1126b10e0);
    func_0x000108f37c18();
    _objc_release(puVar41);
  }
  if (ppuVar32 == (undefined **)0x1d) {
    ppuVar10 = ppuVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar10;
    func_0x00010c067fc0();
    bVar3 = ppuVar13 == (undefined **)0x5c;
    _objc_release(ppuVar10);
  }
  else {
    bVar3 = false;
  }
  puVar15 = puVar35;
  func_0x0001085367d4();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0();
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar15);
  puVar41 = puVar15;
  func_0x00010bf52a60();
  lVar44 = lRam0000000000000000;
  while (puVar41 != (undefined *)0x0) {
    puVar42 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar44) {
        _objc_enumerationMutation(puVar15);
      }
      lVar40 = *(long *)((long)puVar42 * 8);
      lVar39 = lVar40;
      func_0x00010bfa0a00();
      puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (lVar39 < 1) {
        func_0x00010c25b820(lVar40);
        func_0x00010c0df7c0(puVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar12);
        _objc_release(puVar16);
      }
      else {
        lVar39 = lVar40;
        func_0x00010bfa0a00();
        if (0 < lVar39) {
          lVar39 = 0;
          do {
            func_0x00010befa120(puVar12);
            lVar27 = lVar40;
            func_0x00010bfa0a00();
            lVar39 = lVar39 + 1;
          } while (lVar39 < lVar27);
        }
      }
      puVar42 = puVar42 + 1;
    } while (puVar42 != puVar41);
    puVar41 = puVar15;
    func_0x00010bf52a60();
  }
  _objc_release(puVar15);
  ppuVar10 = ppuVar33;
  func_0x00010bfa0a00();
  puVar41 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (0 < (long)ppuVar10) {
    func_0x00010bfa0a00(ppuVar33);
    func_0x00010c0df7c0(puVar41);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuVar6);
    _objc_release(puVar41);
  }
  ppuVar10 = ppuVar33;
  func_0x00010c25b820();
  ppuVar13 = ppuVar32;
  func_0x000107d27e00(ppuVar32,uStack_1d0,uStack_168,ppuVar33,(ulong)puVar7 & 0xffffffff,uStack_1a0,
                      uStack_198,(ulong)puVar7 & 0xffffffff,(byte)puVar7 & bVar2,bVar3,ppuVar10,
                      puVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(ppuVar6);
  ppuVar10 = ppuVar33;
  func_0x00010c25a280();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar10 == (undefined **)0x0) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    if (((0x13 < uVar38) || ((1L << (uVar38 & 0x3f) & 0x80021U) == 0)) &&
       (ppuVar32 != (undefined **)0x7)) {
      bVar2 = false;
    }
  }
  _objc_release();
  uVar11 = uStack_1d0;
  func_0x000108f485c8();
  ppuStack_398 = &puStack_3a0;
  puStack_3a0 = (undefined *)0x0;
  uStack_390 = 0x2020000000;
  uStack_388 = 0;
  ppuStack_2a8 = &puStack_2b0;
  puStack_2b0 = (undefined *)0x0;
  puStack_2a0 = (undefined *)0x3032000000;
  pcStack_298 = FUN_10723313c;
  puStack_290 = (undefined *)0x10723314c;
  puStack_288 = (undefined *)0x0;
  puVar7 = puVar35;
  func_0x000108538878();
  if (((int)puVar7 != 0) && (puVar7 = PTR_PTR_1126ce808, func_0x00010c29d3e0(), (int)puVar7 != 0)) {
    func_0x000108f4b010();
  }
  ppuVar19 = ppuVar33;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  ppuVar18 = (undefined **)PTR___NSConcreteStackBlock_11034bd00;
  uVar43 = (uint)(ppuVar32 == (undefined **)0x7) & uVar37 & (uint)uVar11 & (uVar5 ^ 1);
  _objc_retain(ppuVar6);
  _objc_retain(ppuVar33);
  _objc_retain(puVar35);
  ppuVar10 = &puStack_3a0;
  _objc_retain(ppuVar6);
  _objc_retain(ppuVar33);
  _objc_retain(uStack_168);
  _objc_retain(ppuVar6);
  func_0x00010c0c1320(ppuVar19);
  _objc_release(ppuVar19);
  if (*(char *)(ppuStack_398 + 3) == '\x01') {
    lVar44 = lStack_1b8;
    func_0x00010bfe9f40(lStack_1b8);
    _objc_retainAutoreleasedReturnValue();
    lVar39 = lVar44;
    func_0x00010bfe9e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar44);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (uVar43 == 0) {
      ppuVar18 = ppuVar33;
      func_0x00010c25a280(ppuVar33);
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar18;
      func_0x00010c241720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0676c0();
    }
    func_0x00010c0df760(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuVar6);
    _objc_release(puVar7);
    if (uVar43 == 0) {
      _objc_release(ppuVar10);
      _objc_release(ppuVar18);
    }
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuVar6);
    _objc_release(puVar7);
    func_0x000107d74fcc(ppuVar6,lVar39,1);
    _objc_release(lVar39);
  }
  else {
    if ((bVar2) && (((uVar37 ^ 1 | uVar5) & 1) != 0)) {
      ppuVar10 = ppuVar33;
      func_0x00010c25a280();
      _objc_retainAutoreleasedReturnValue();
      ppuVar18 = ppuVar10;
      func_0x00010c241720();
      _objc_retainAutoreleasedReturnValue();
      ppuVar19 = ppuVar18;
      func_0x00010c0676c0();
      _objc_release(ppuVar18);
      _objc_release(ppuVar10);
      if ((int)ppuVar19 != 0) {
        lVar44 = lStack_1b8;
        func_0x00010bfe9f40(lStack_1b8);
        _objc_retainAutoreleasedReturnValue();
        lVar39 = lVar44;
        func_0x00010bfe9e60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar44);
        func_0x00010c1d0640(ppuVar6);
        func_0x000107d74fcc(ppuVar6,lVar39,0);
        _objc_release(lVar39);
        goto LAB_107232588;
      }
    }
    puVar41 = ppuStack_2a8[5];
    _objc_retain(puStack_1d8);
    _objc_retain(puVar41);
    _objc_retain(ppuVar6);
    _objc_retain(lStack_1b8);
    _objc_retain(uStack_1d0);
    _objc_retain(uStack_168);
    _objc_retain(ppuVar33);
    puVar7 = PTR_PTR_1126b1270;
    func_0x00010c134400(PTR_PTR_1126b1270);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uStack_168;
    func_0x00010bf1f320();
    _objc_release(puVar7);
    ppuStack_2e8 = (undefined **)PTR___NSConcreteStackBlock_11034bd00;
    ppuStack_2e0 = (undefined **)0xc0000000;
    ppuStack_2d8 = (undefined **)FUN_1072380ac;
    ppuStack_2d0 = (undefined **)&UNK_110994098;
    ppuStack_2c0 = (undefined **)CONCAT71(ppuStack_2c0._1_7_,(char)uVar11);
    pppuVar28 = &ppuStack_2e8;
    ppuStack_2c8 = ppuVar32;
    FUN_1072380ac();
    if (lStack_1b8 == 0) {
      uVar43 = 0;
    }
    else {
      puVar7 = puStack_1d8;
      func_0x00010c08fa60();
      uVar43 = 0;
      if (puStack_608 == (undefined *)0x0) {
        uVar43 = (uint)(puVar7 != (undefined *)0x0) & ((uint)ppuVar8 ^ 0xffffffff);
      }
    }
    _objc_retain(ppuVar33);
    uVar11 = uStack_168;
    func_0x000108535744(uStack_168,ppuVar32);
    ppuVar8 = ppuVar33;
    func_0x00010853a5d4();
    _objc_release(ppuVar33);
    if (pppuVar28 == (undefined ***)0x5c || ((uint)uVar11 & (uint)ppuVar8 & 1) != 0) {
      puVar7 = puVar41;
      func_0x00010c08fa60();
      if ((pppuVar28 != (undefined ***)0xffffffffffffffff) &&
         (func_0x000107d75344(ppuVar6,1), puVar7 != (undefined *)0x0 || uVar43 != 0)) {
        puVar7 = PTR_PTR_1126b0f10;
        _objc_alloc(PTR_PTR_1126b0f10);
        func_0x00010c033460();
        lVar44 = lStack_1b8;
        func_0x00010bfe9f40(lStack_1b8);
        _objc_retainAutoreleasedReturnValue();
        lVar39 = lVar44;
        func_0x00010bfea240();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar44);
        func_0x000107d74fcc(ppuVar6,lVar39,0);
        _objc_release(lVar39);
        _objc_release(puVar7);
      }
    }
    _objc_release(ppuVar33);
    _objc_release(uStack_168);
    _objc_release(uStack_1d0);
    _objc_release(lStack_1b8);
    _objc_release(ppuVar6);
    _objc_release(puVar41);
    _objc_release(puStack_1d8);
  }
LAB_107232588:
  if ((((ppuVar32 == (undefined **)0x7) || (ppuVar32 == (undefined **)0x67)) ||
      (ppuVar32 == (undefined **)0x59)) && (puStack_150 != (undefined *)0x0)) {
    puVar7 = puStack_150;
    func_0x00010c247520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar7 == (undefined *)0x0) goto LAB_1072325f8;
    puVar7 = puStack_150;
    func_0x00010c233400();
    _objc_retainAutoreleasedReturnValue();
    puVar41 = puVar7;
    func_0x00010bf1f3c0();
    if ((int)puVar41 == 0) {
      uVar43 = 0;
    }
    else {
      uVar43 = uVar37 ^ 1 | uVar5;
    }
    _objc_release(puVar7);
    bVar2 = true;
  }
  else {
LAB_1072325f8:
    uVar43 = 0;
    bVar2 = false;
  }
  puVar7 = PTR_PTR_1126c3320;
  func_0x00010c0729e0();
  ppuStack_628 = ppuVar33;
  if ((((uint)puVar7 ^ 1) & uVar43) == 1) {
    ppuVar8 = ppuVar33;
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar8;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(ppuVar8);
    if (ppuVar10 == (undefined **)0x0) goto LAB_107232894;
    ppuVar10 = ppuVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    ppuVar18 = ppuVar10;
    _objc_opt_isKindOfClass(ppuVar10,puVar7);
    ppuVar8 = ppuVar10;
    if (((ulong)ppuVar18 & 1) == 0) {
      ppuVar8 = (undefined **)0x0;
    }
    _objc_retain(ppuVar8);
    _objc_release(ppuVar10);
    ppuStack_5e8 = (undefined **)PTR____NSArray0__struct_11034ab48;
    if (ppuVar8 != (undefined **)0x0) {
      ppuStack_5e8 = ppuVar8;
    }
    _objc_retain();
    _objc_release(ppuVar8);
    _objc_opt_class(PTR_PTR_1126c9810);
    ppuVar8 = ppuStack_5e8;
    func_0x00010bf09f60(ppuStack_5e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuVar6);
    _objc_release(ppuVar8);
    _objc_retain(puStack_1d8);
    puStack_5c8 = puStack_1d8;
    if (puStack_1d8 == (undefined *)0x0) {
      puStack_5c8 = puStack_150;
      func_0x00010c116a20();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar41 = PTR_PTR_1126c97b8;
    _objc_alloc(PTR_PTR_1126c97b8);
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_630 = ppuStack_628;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puStack_150;
    func_0x00010c242440(puStack_150);
    _objc_retainAutoreleasedReturnValue();
    puVar42 = puStack_150;
    func_0x00010c242460(puStack_150);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puStack_150;
    func_0x00010c247520(puStack_150);
    _objc_retainAutoreleasedReturnValue();
    puVar29 = puStack_150;
    func_0x00010c124a40(puStack_150);
    _objc_retainAutoreleasedReturnValue();
    puVar30 = puStack_150;
    func_0x00010bf68780();
    _objc_retainAutoreleasedReturnValue();
    puVar31 = puStack_150;
    func_0x00010bf68600();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03b040(puVar41);
    func_0x00010c1d0640(ppuVar6);
    _objc_release(puVar41);
    _objc_release(puVar31);
    _objc_release(puVar30);
    _objc_release(puVar29);
    _objc_release(puVar16);
    _objc_release(puVar42);
LAB_107232868:
    _objc_release(puVar7);
    _objc_release(ppuStack_630);
    _objc_release(ppuStack_628);
    _objc_release(puStack_5c8);
    _objc_release(ppuStack_5e8);
  }
  else {
LAB_107232894:
    if (((!bVar2 && ((ulong)puVar7 & 1) == 0) &&
        (puVar7 = puStack_1d8, func_0x00010c08fa60(), puVar7 != (undefined *)0x0)) &&
       ((ppuVar32 == (undefined **)0x54 || ppuVar32 == (undefined **)0x7 &&
        (((uVar37 ^ 1 | uVar5) & 1) != 0)))) {
      ppuVar8 = ppuVar33;
      func_0x00010c0c5340();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar8;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(ppuVar8);
      if (ppuVar10 != (undefined **)0x0) {
        ppuVar10 = ppuVar6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
        _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
        ppuVar18 = ppuVar10;
        _objc_opt_isKindOfClass(ppuVar10,puVar7);
        ppuVar8 = ppuVar10;
        if (((ulong)ppuVar18 & 1) == 0) {
          ppuVar8 = (undefined **)0x0;
        }
        _objc_retain(ppuVar8);
        _objc_release(ppuVar10);
        ppuStack_5e8 = (undefined **)PTR____NSArray0__struct_11034ab48;
        if (ppuVar8 != (undefined **)0x0) {
          ppuStack_5e8 = ppuVar8;
        }
        _objc_retain();
        _objc_release(ppuVar8);
        ppuVar8 = &PTR_PTR_1133e0b90;
        if (ppuVar32 != (undefined **)0x54) {
          ppuVar8 = &PTR_PTR_1133e0b78;
        }
        puStack_5c8 = *ppuVar8;
        _objc_retain();
        _objc_opt_class(PTR_PTR_1126c9810);
        ppuVar8 = ppuStack_5e8;
        func_0x00010bf09f60(ppuStack_5e8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(ppuVar6);
        _objc_release(ppuVar8);
        puVar7 = PTR_PTR_1126c97b8;
        _objc_alloc(PTR_PTR_1126c97b8);
        func_0x00010c0c5340();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_630 = ppuStack_628;
        func_0x00010c0c5180();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c03b040(puVar7);
        func_0x00010c1d0640(ppuVar6);
        goto LAB_107232868;
      }
    }
  }
  ppuVar8 = param_4;
  func_0x00010be6f440(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(ppuVar6);
  _objc_release(ppuVar8);
  if (((ulong)ppuVar32 & 0xfffffffffffffffb) == 0x62) {
    puVar7 = puVar35;
    func_0x0001085367d4(puVar35);
    _objc_retainAutoreleasedReturnValue();
    puVar41 = puVar7;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071ae0(ppuVar33);
    _objc_release(puVar41);
    _objc_release(puVar7);
    puVar7 = puVar35;
    func_0x0001085367d4(puVar35);
    _objc_retainAutoreleasedReturnValue();
    puVar41 = puVar7;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071ae0(ppuVar33);
    _objc_release(puVar41);
    _objc_release(puVar7);
    ppuVar8 = param_4;
    func_0x00010be6f500(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(ppuVar6);
    _objc_release(ppuVar8);
  }
  ppuVar8 = param_4;
  func_0x00010be6f4c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(ppuVar6);
  _objc_release(ppuVar8);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar41 = PTR_PTR_1126b2d20;
  func_0x00010c100260(PTR_PTR_1126b2d20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(ppuVar6);
  _objc_release(puVar41);
  _objc_release(puVar7);
  _objc_retain(ppuVar33);
  uVar11 = uStack_168;
  func_0x000108535744(uStack_168,ppuVar32);
  ppuVar32 = ppuVar33;
  func_0x00010853a5d4();
  _objc_release(ppuVar33);
  if (((uint)uVar11 & (uint)ppuVar32) == 1) {
    puVar7 = PTR_PTR_1126c11f8;
    func_0x00010c24c820(PTR_PTR_1126c11f8);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uStack_168;
    func_0x00010bf1f320();
    if ((int)uVar11 == 0) {
LAB_107232ccc:
      _objc_release(puVar7);
    }
    else {
      puVar41 = PTR_PTR_1126ce808;
      func_0x00010c29d3a0();
      _objc_release(puVar7);
      if ((int)puVar41 != 0) {
        puVar7 = PTR_PTR_1126c11f8;
        func_0x00010c24c840(PTR_PTR_1126c11f8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1f320(uStack_168);
        _objc_release(puVar7);
        puVar7 = PTR_PTR_1126c11f8;
        func_0x00010c24c860(PTR_PTR_1126c11f8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1f320(uStack_168);
        goto LAB_107232ccc;
      }
    }
    func_0x00010be6f660(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(ppuVar6);
    _objc_release(param_4);
  }
  ppuVar32 = ppuVar6;
  if (puStack_608 == (undefined *)0x0) {
    func_0x00010bf51e00();
    puStack_c8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_3b8 = ppuVar32;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf51e00();
    puStack_3a8 = puStack_608;
    puStack_c8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_3b0 = ppuVar32;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_retain();
  _objc_release(puStack_c8);
  _objc_release(ppuVar32);
  _objc_release(ppuVar6);
  _objc_release(uStack_168);
  _objc_release(ppuVar33);
  _objc_release(ppuVar6);
  _objc_release(puVar35);
  _objc_release(ppuVar33);
  _objc_release(ppuVar6);
  __Block_object_dispose(&puStack_2b0,8);
  _objc_release(puStack_288);
  __Block_object_dispose(&puStack_3a0,8);
  _objc_release(ppuVar13);
  _objc_release(puVar12);
  _objc_release(puVar15);
  _objc_release(ppuVar9);
  _objc_release(puVar14);
  _objc_release(puStack_608);
  _objc_release(puStack_150);
  _objc_release(uStack_160);
  _objc_release(uStack_168);
  _objc_release(uStack_170);
  _objc_release(uStack_178);
  _objc_release(uStack_188);
  _objc_release(uStack_190);
  _objc_release(lStack_1b8);
  _objc_release(uStack_1c0);
  _objc_release(uStack_1c8);
  _objc_release(uStack_1d0);
  _objc_release(puStack_1d8);
  _objc_release(uStack_1e0);
  _objc_release(uVar36);
  _objc_release(puVar35);
  _objc_release(uVar34);
  _objc_release(ppuVar33);
  _objc_release(ppuVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_278) {
    ___stack_chk_fail();
    __Block_object_dispose(&puStack_2b0,8);
    __Block_object_dispose(&puStack_3a0,8);
    __Unwind_Resume(ppuVar6);
    return;
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_c8);
  return;
}



/* Entry: 10723046c; end: 107232fcb; +[SCStoriesOperaSnapPagePropertyParser appendPagePropertiesAfterMediaLoadedToPageProperties:forStorySnap:posterSnapchatter:storiesPlaybackSequence:customStoryMetadata:viewLocation:currentUserId:publicProfileId:circumstanceEngine:lazyDataFetcher:snapchattersSynchronousDataFetcher:impalaLegacyServices:numOfSnapsInStorySequence:indexOfSnapInStorySequence:numOfProgressSegmentsInStorySequence:progressSegmentIndexOfSnapInStorySequence:longVideoExperienceConfig:autoProgressingConfiguration:isAutoAdvanceSuppressedForSnap:offPlatformLinkGenerationService:profilesProvider:storiesConfigProvider:spotlightDataFetcher:isJoinedPlayback:p2pOptions:] */

void FUN_10723046c(double param_1,ulong *param_2,undefined8 param_3,undefined *param_4,
                  ulong *param_5,undefined8 param_6,ulong param_7,undefined8 param_8,
                  undefined **param_9,undefined8 param_10,undefined *param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,long param_15)

{
  undefined **ppuVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined *puVar10;
  undefined *puVar11;
  ulong *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined **ppuVar22;
  ulong *puVar23;
  ulong *puVar24;
  ulong *puVar25;
  ulong *puVar26;
  ulong *puVar27;
  ulong *puVar28;
  ulong *puVar29;
  ulong *puVar30;
  ulong *puVar31;
  long lVar32;
  undefined ***pppuVar33;
  long lVar34;
  undefined *puVar35;
  undefined *puVar36;
  uint uVar37;
  ulong uVar38;
  long lVar39;
  long lVar40;
  undefined *puVar41;
  ulong uVar42;
  uint uVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  ulong in_stack_00000080;
  byte in_stack_00000088;
  undefined *in_stack_00000090;
  ulong *puStack_450;
  ulong *puStack_448;
  undefined *puStack_428;
  undefined *puStack_408;
  undefined *puStack_3e8;
  undefined1 auStack_210 [8];
  undefined *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  ulong *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  ulong uStack_1c0;
  ulong *puStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  undefined **ppuStack_120;
  undefined *puStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  ulong *puStack_a0;
  long lStack_98;
  undefined8 uVar9;
  
  uVar37 = (uint)in_stack_00000088;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(in_stack_00000050);
  _objc_retain(in_stack_00000058);
  _objc_retain(in_stack_00000068);
  _objc_retain(in_stack_00000070);
  _objc_retain(in_stack_00000078);
  _objc_retain(in_stack_00000080);
  _objc_retain(in_stack_00000090);
  puVar6 = param_5;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c27dd80();
  if (((((undefined *)0x1b < (undefined *)((long)puVar7 + 1U)) ||
       ((1L << ((long)puVar7 + 1U & 0x3f) & 0xb4b5dbbU) == 0)) ||
      ((undefined *)0x1a < (undefined *)((long)puVar7 + 1U))) ||
     ((1L << ((long)puVar7 + 1U & 0x3f) & 0x6c6bd77U) == 0)) {
    _objc_release(puVar6);
    puVar6 = param_2;
    func_0x00010be6f700(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(param_4);
  }
  _objc_release(puVar6);
  if (((long)param_9 - 0x2bU < 0x29) &&
     ((1L << ((long)param_9 - 0x2bU & 0x3f) & 0x10000000007U) != 0)) {
    func_0x00010c1d0640(param_4);
  }
  puVar7 = param_5;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c27dd80();
  puVar6 = (ulong *)((long)puVar8 + 1);
  if (puVar6 < (ulong *)0x1c) {
    if ((1L << ((ulong)puVar6 & 0x3f) & 0xb4b5dbbU) == 0) {
      uVar5 = 0x484a040;
    }
    else {
      if ((((undefined *)((long)puVar8 + 1U) < (undefined *)0x1b) &&
          ((1L << ((long)puVar8 + 1U & 0x3f) & 0x6c6bd77U) != 0)) || ((ulong *)0x1a < puVar8))
      goto LAB_107230748;
      uVar5 = 0x7e7fc60;
      puVar6 = puVar8;
    }
    if ((1L << ((ulong)puVar6 & 0x3f) & (ulong)uVar5) != 0) {
      _objc_release(puVar7);
      puVar7 = param_2;
      func_0x00010be6f6c0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60(param_4);
    }
  }
LAB_107230748:
  _objc_release(puVar7);
  puVar6 = param_5;
  func_0x000107d2b30c(param_5,param_7,param_10,param_14,param_12,param_9);
  puVar7 = param_5;
  func_0x00010bfa0a00();
  uVar38 = param_7;
  func_0x000107d29c48();
  iVar4 = 0;
  if ((int)uVar38 != 0) {
    uVar9 = param_12;
    func_0x000108f48408();
    iVar4 = (int)uVar9;
  }
  if (((long)puVar7 < 1) && (iVar4 == 0)) {
    puVar7 = param_2;
    func_0x00010be6f640(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(param_4);
    _objc_release(puVar7);
  }
  else {
    ppuStack_120 = &PTR____CFConstantStringClassReference_110f0ea98;
    puStack_118 = PTR____kCFBooleanTrue_11034ab68;
    puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(param_4);
    _objc_release(puVar10);
  }
  uVar38 = (long)param_9 - 0x54;
  if (((uVar38 < 0x14) && ((1L << (uVar38 & 0x3f) & 0x80021U) != 0)) ||
     (param_9 == (undefined **)0x7)) {
    puVar11 = PTR_PTR_1126c9e18;
    _objc_alloc();
    func_0x00010c00c560();
    puVar41 = puVar11;
    func_0x00010c0f12c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    _objc_retain(param_7);
    _objc_retain(puVar41);
    puVar7 = param_5;
    func_0x00010c12fc80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf0d6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar8;
    func_0x00010c08fa60();
    _objc_release(puVar8);
    _objc_release(puVar7);
    puVar10 = PTR__OBJC_CLASS___NSURL_1126ae598;
    if (puVar12 == (ulong *)0x0) {
      puStack_428 = (undefined *)0x0;
    }
    else {
      puVar7 = param_5;
      func_0x00010c12fc80(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf0d6a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar7);
      if (puVar10 == (undefined *)0x0) {
        puStack_428 = (undefined *)0x0;
      }
      else {
        puVar13 = PTR_PTR_1126b2368;
        _objc_opt_new();
        puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar13;
        func_0x00010c2b53a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar14);
        _objc_release(puVar13);
        ppuStack_108 = &PTR____CFConstantStringClassReference_110f0cad8;
        ppuStack_100 = &PTR____CFConstantStringClassReference_110f0bd58;
        ppuStack_c8 = (undefined **)PTR____kCFBooleanTrue_11034ab68;
        ppuStack_f8 = &PTR____CFConstantStringClassReference_110f0cc38;
        ppuStack_f0 = &PTR____CFConstantStringClassReference_110f0cc18;
        puStack_c0 = PTR____kCFBooleanFalse_11034ab60;
        pcStack_b8 = (code *)PTR____kCFBooleanTrue_11034ab68;
        puStack_b0 = PTR____kCFBooleanTrue_11034ab68;
        ppuStack_e8 = &PTR____CFConstantStringClassReference_110f0ccb8;
        ppuStack_e0 = &PTR____CFConstantStringClassReference_110f0bbd8;
        puVar13 = PTR_PTR_1126b8238;
        puStack_d0 = puVar10;
        func_0x00010c291260();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_d8 = &PTR____CFConstantStringClassReference_110dcadf8;
        puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_a8 = puVar13;
        puStack_a0 = param_5;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b53e0(puVar15);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar14);
        _objc_release(puVar13);
        if (param_7 != 0) {
          ppuStack_110 = &PTR____CFConstantStringClassReference_110ea1a58;
          puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          uStack_1c0 = param_7;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2b53e0(puVar15);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar13);
        }
        puVar13 = puVar15;
        func_0x00010c1531a0();
        _objc_retainAutoreleasedReturnValue();
        puStack_428 = puVar13;
        func_0x00010bf51e00();
        _objc_release(puVar13);
        _objc_release(puVar15);
      }
      _objc_release(puVar10);
    }
    _objc_release(puVar41);
    _objc_release(param_7);
    _objc_release(param_5);
    _objc_release(puVar41);
    _objc_release(puVar11);
  }
  else {
    puStack_428 = (undefined *)0x0;
  }
  puVar7 = param_5;
  func_0x00010c26f2a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c071060();
  _objc_release(puVar7);
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_4);
  _objc_release(puVar10);
  if (((((long)param_9 - 0x49U < 0x1a) && ((1L << ((long)param_9 - 0x49U & 0x3f) & 0x2020001U) != 0)
       ) || ((uVar16 = (long)param_9 - 0x57U >> 1, (uVar16 | (long)param_9 - 0x57U << 0x3f) < 8 &&
             ((1L << (uVar16 & 0x3f) & 0xb1U) != 0)))) && (((ulong)puVar8 & 1) == 0)) {
    puStack_208 = PTR___NSConcreteStackBlock_11034bd00;
    param_1 = 1.60807493534087e-314;
    uStack_200 = 0xc2000000;
    pcStack_1f8 = FUN_107232fdc;
    puStack_1f0 = &UNK_110993e08;
    _objc_retain(param_5);
    puStack_1e8 = param_5;
    _objc_retain(param_4);
    puStack_1e0 = param_4;
    func_0x00010c0bdf40(param_7);
    _objc_release(puStack_1e0);
    _objc_release(puStack_1e8);
  }
  if ((((param_9 == (undefined **)0x7) || (param_9 == (undefined **)0x59)) ||
      (param_9 == (undefined **)0x54)) &&
     (puVar7 = param_5, func_0x000108539be8(param_5,param_12), (int)puVar7 != 0)) {
    func_0x00010c1d0640(param_4);
  }
  else {
    puVar10 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(puVar10);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c22eda0(param_5);
    func_0x00010c0df760(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4);
    _objc_release(puVar10);
  }
  uVar16 = param_7;
  func_0x000108539290();
  uVar17 = param_7;
  func_0x000108538ba0();
  uVar18 = param_7;
  func_0x000108538878();
  uVar5 = (uint)uVar18;
  if (uVar37 != 0) {
    puVar7 = param_5;
    func_0x00010853a0e0();
    if ((int)puVar7 == 0) {
      uVar5 = 0;
    }
    else {
      func_0x000108f48368();
      uVar5 = 1;
    }
  }
  uVar18 = param_7;
  func_0x0001085393b0();
  uVar19 = param_7;
  func_0x000108536f70();
  _objc_retainAutoreleasedReturnValue();
  if (param_9 == (undefined **)0x1e) {
    puVar10 = PTR_PTR_1126c2a20;
    func_0x00010c24b800(PTR_PTR_1126c2a20);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = in_stack_00000078;
    func_0x00010bf1f320();
    if ((int)uVar9 == 0) {
      bVar2 = false;
    }
    else {
      uVar42 = uVar19;
      func_0x00010bfa4340();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar42;
      func_0x00010c067ec0();
      bVar2 = (int)uVar20 == 0x10d;
      _objc_release(uVar42);
    }
    _objc_release(puVar10);
  }
  else {
    bVar2 = false;
  }
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126c9358;
  func_0x00010c07f340(PTR_PTR_1126c9358);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_4);
  _objc_release(puVar11);
  _objc_release(puVar10);
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126c9358;
  func_0x00010c07d1a0(PTR_PTR_1126c9358);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_4);
  _objc_release(puVar11);
  _objc_release(puVar10);
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126c9358;
  func_0x00010c07b7c0(PTR_PTR_1126c9358);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_4);
  _objc_release(puVar11);
  _objc_release(puVar10);
  puVar8 = param_5;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar8;
  func_0x00010c27dd80();
  puVar7 = (ulong *)((long)puVar12 + 1);
  if (puVar7 < (ulong *)0x1c) {
    if ((1L << ((ulong)puVar7 & 0x3f) & 0xb4b5dbbU) == 0) {
      uVar43 = 0x484a040;
    }
    else {
      if ((((undefined *)((long)puVar12 + 1U) < (undefined *)0x1b) &&
          ((1L << ((long)puVar12 + 1U & 0x3f) & 0x6c6bd77U) != 0)) || ((ulong *)0x1a < puVar12))
      goto LAB_107231000;
      uVar43 = 0x7e7fc60;
      puVar7 = puVar12;
    }
    if ((1L << ((ulong)puVar7 & 0x3f) & (ulong)uVar43) == 0) goto LAB_107231000;
    _objc_release(puVar8);
    if (param_9 != (undefined **)0x2b) goto LAB_10723107c;
  }
  else {
LAB_107231000:
    if (param_9 == (undefined **)0x2b) {
      func_0x00010bf8b460(in_stack_00000050);
      uVar42 = param_7;
      func_0x000107d2e490(param_7,param_5,0x2b);
      _objc_release(puVar8);
      if ((((uint)uVar16 | (uint)uVar42 ^ 0xffffffff) & 1) != 0) goto LAB_10723146c;
    }
    else {
      _objc_release(puVar8);
LAB_10723107c:
      func_0x00010bf8b460(in_stack_00000050);
      uVar42 = param_7;
      func_0x000107d2e490(param_7,param_5,param_9);
      if (((int)uVar42 == 0) || (uVar9 = in_stack_00000078, func_0x00010c269660(), (int)uVar9 == 0))
      goto LAB_10723146c;
    }
    uVar9 = in_stack_00000078;
    func_0x00010bf90b60();
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(in_stack_00000050);
    func_0x00010c1d0640(param_4);
    func_0x00010c1d0640(param_4);
    func_0x00010c1d0640(param_4);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c2696a0(in_stack_00000050);
    func_0x00010c0df720(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4);
    _objc_release(puVar10);
    uVar21 = in_stack_00000050;
    func_0x00010c0dba40();
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((int)uVar21 != 0) {
      puVar7 = param_5;
      func_0x00010c26f2a0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf8b160();
      dVar45 = param_1;
      func_0x00010c2696a0(in_stack_00000050);
      param_1 = (double)(long)((param_1 + -2.5) / dVar45);
      func_0x00010c0df720(puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_4);
      _objc_release(puVar10);
      _objc_release(puVar7);
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c2696a0(in_stack_00000050);
      func_0x00010c0df720(puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_4);
      _objc_release(puVar10);
      func_0x00010c1d0640(param_4);
    }
    uVar21 = in_stack_00000050;
    func_0x00010c0dba40();
    dVar45 = param_1;
    if (((uint)uVar9 | (uint)uVar21) == 1) {
      puVar7 = param_5;
      func_0x00010c26f2a0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf8b160();
      dVar44 = param_1;
      func_0x00010c2696a0(in_stack_00000050);
      puVar8 = param_5;
      func_0x00010bf3cf60(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      dVar45 = -2.5;
      if (0.0 < param_1 + -2.5) {
        dVar46 = 0.0;
        do {
          puVar11 = PTR_PTR_1126d53e0;
          _objc_alloc(PTR_PTR_1126d53e0);
          dVar45 = dVar46;
          func_0x00010c030d20();
          func_0x00010befa120(puVar10);
          _objc_release(puVar11);
          dVar46 = dVar44 + dVar46;
        } while (dVar46 < param_1 + -2.5);
      }
      puVar11 = PTR_PTR_1126d53e8;
      _objc_alloc();
      func_0x00010c010d80();
      _objc_release(puVar10);
      _objc_release(puVar8);
      _objc_release(puVar7);
      puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_d0 = puVar11;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_4);
      _objc_release(puVar10);
      _objc_release(puVar11);
    }
    puVar7 = param_5;
    func_0x00010c29e300(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29ecc0();
    if (dVar45 <= 0.0) {
LAB_10723144c:
      _objc_release(puVar7);
    }
    else {
      puVar8 = param_5;
      func_0x00010c29e300();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar8;
      func_0x00010c083540();
      _objc_release(puVar8);
      _objc_release(puVar7);
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (((ulong)puVar12 & 1) == 0) {
        puVar7 = param_5;
        func_0x00010c29e300(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c29ecc0();
        dVar44 = dVar45;
        func_0x00010c2696a0(in_stack_00000050);
        dVar46 = dVar44;
        func_0x00010c2696a0(in_stack_00000050);
        func_0x00010c0df720(dVar46 * (double)((int)((dVar45 / 1000.0) / dVar44) + 1),puVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_4);
        _objc_release(puVar10);
        goto LAB_10723144c;
      }
    }
    _objc_release(in_stack_00000050);
    _objc_release(param_5);
    _objc_release(param_4);
  }
LAB_10723146c:
  uVar9 = param_6;
  func_0x00010c2923e0(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_10;
  func_0x00010c0720c0(param_10);
  _objc_release(uVar9);
  puVar7 = param_5;
  func_0x00010c262160();
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 != (ulong *)0x0) {
    puVar8 = param_5;
    func_0x00010c262160();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar8;
    func_0x00010bf529e0();
    _objc_release(puVar8);
    _objc_release(puVar7);
    if (puVar12 != (ulong *)0x0) {
      puVar7 = param_5;
      func_0x00010c262160(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_4);
      _objc_release(puVar8);
      _objc_release(puVar7);
    }
  }
  uVar9 = param_6;
  func_0x000100bf119c(param_6);
  puVar7 = param_5;
  FUN_10723b17c(param_5,param_7,param_10,param_4,param_12,param_14,uVar9,uVar21,bVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107b281fc(param_4,puVar7);
  uVar42 = in_stack_00000080;
  if ((uVar16 & 1) == 0) {
    ppuVar22 = param_9;
    func_0x000108f4b978();
    if (in_stack_00000080 != 0) {
      uVar42 = (ulong)ppuVar22 & 1;
      goto joined_r0x000107231594;
    }
  }
  else {
joined_r0x000107231594:
    if (uVar42 != 0) {
      _objc_initWeak(&puStack_d0,in_stack_00000080);
      puVar10 = PTR_PTR_1126ae720;
      _objc_copyWeak(auStack_210,&puStack_d0);
      _objc_retain(puVar7);
      func_0x00010bf11fe0(puVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR_PTR_1126b2d20;
      func_0x00010c24afc0(PTR_PTR_1126b2d20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_4);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar7);
      _objc_destroyWeak(auStack_210);
      _objc_destroyWeak(&puStack_d0);
    }
  }
  if ((param_9 == (undefined **)0x65) &&
     (uVar9 = param_12, func_0x000108f4b700(param_12,0), (int)uVar9 != 0)) {
    puVar8 = param_5;
    func_0x00010853c32c(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126b6060;
    func_0x00010bfeb420(PTR_PTR_1126b6060);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4);
    _objc_release(puVar10);
    _objc_release(puVar8);
    puVar10 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar8 = param_5;
    func_0x000107d2bff8();
    if (((ulong)puVar8 & 1) == 0 && puVar10 == (undefined *)0x0) {
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR_PTR_1126b2d20;
      func_0x00010bf7f080(PTR_PTR_1126b2d20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_4);
      _objc_release(puVar11);
      _objc_release(puVar10);
    }
  }
  if ((((param_9 == (undefined **)0x59 || (((uint)uVar16 | (uint)uVar18) & 1) != 0) || bVar2) &&
      (uVar9 = param_12, func_0x000108f4b700(param_12,0), (int)uVar9 != 0)) &&
     (ppuVar22 = param_9, func_0x000108f4b9ec(param_9,in_stack_00000078), (int)ppuVar22 != 0)) {
    puVar10 = PTR_PTR_1126b2d20;
    func_0x00010c24ae80(PTR_PTR_1126b2d20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4);
    _objc_release(puVar10);
  }
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_4);
  _objc_release(puVar10);
  if ((uVar17 & 1) == 0) {
    puVar8 = param_5;
    func_0x00010bf4cc60(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126c9270;
    func_0x00010c2532a0(PTR_PTR_1126c9270);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4);
    _objc_release(puVar10);
    _objc_release(puVar8);
  }
  puVar8 = param_5;
  func_0x000109017f30(param_5,param_7,param_10,(ulong)puVar6 & 0xffffffff,param_12,param_9,param_14)
  ;
  if (puVar8 != (ulong *)0x0) {
    puVar8 = param_5;
    func_0x00010c15f2e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar8 != (ulong *)0x0) {
      func_0x000109017f30(param_5,param_7,param_10,(ulong)puVar6 & 0xffffffff,param_12,param_9,
                          param_14);
      puVar8 = param_5;
      func_0x000109018dc4(param_5,in_stack_00000070);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR_PTR_1126b23b0;
      _objc_alloc(PTR_PTR_1126b23b0);
      puVar10 = PTR_PTR_1126b23b8;
      puVar12 = param_5;
      func_0x00010bf5b080();
      _objc_retainAutoreleasedReturnValue();
      puVar23 = puVar12;
      func_0x00010bf5b440();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = param_5;
      func_0x00010bf5b080();
      _objc_retainAutoreleasedReturnValue();
      puVar25 = puVar24;
      func_0x00010bf5bc00(puVar24);
      _objc_retainAutoreleasedReturnValue();
      puVar26 = param_5;
      func_0x00010bf5b080(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar27 = puVar26;
      func_0x00010bf5b380();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2942e0(puVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar28 = param_5;
      func_0x00010bf5b080(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar29 = puVar28;
      func_0x00010bf5b440();
      _objc_retainAutoreleasedReturnValue();
      puVar30 = param_5;
      func_0x00010c15f2e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar31 = param_5;
      func_0x000109018770(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c03e660(puVar11);
      _objc_release(puVar31);
      _objc_release(puVar30);
      _objc_release(puVar29);
      _objc_release(puVar28);
      _objc_release(puVar10);
      _objc_release(puVar27);
      _objc_release(puVar26);
      _objc_release(puVar25);
      _objc_release(puVar24);
      _objc_release(puVar23);
      _objc_release(puVar12);
      func_0x00010c1d0640(param_4);
      _objc_release(puVar11);
      _objc_release(puVar8);
    }
  }
  puVar8 = puVar7;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar8;
  func_0x00010c06d7a0();
  if ((int)puVar12 == 0) {
LAB_107231ab0:
    _objc_release(puVar8);
  }
  else {
    puVar12 = param_5;
    func_0x00010bfa0a00();
    _objc_release(puVar8);
    if (puVar12 == (ulong *)0x0) {
      puVar8 = param_2;
      func_0x00010be6f480(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60(param_4);
      goto LAB_107231ab0;
    }
  }
  uVar9 = in_stack_00000068;
  puVar8 = param_5;
  if (uVar5 == 0) {
    if ((int)uVar17 != 0) {
      puVar12 = param_5;
      func_0x00010bf5b080(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar23 = puVar12;
      func_0x00010bf5b1a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      _objc_release(puVar23);
      _objc_release(puVar12);
      func_0x00010c269d40(in_stack_00000068);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5b080(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar8;
      func_0x00010bf5b1a0();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar9;
      func_0x00010bfbf8c0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107231bc4;
    }
  }
  else {
    func_0x00010c269d40(in_stack_00000068);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5b080(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar8;
    func_0x00010bf5bc00();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = param_5;
    func_0x00010c15f2e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar9;
    func_0x00010bfbf8a0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar23);
LAB_107231bc4:
    _objc_release(puVar12);
    _objc_release(puVar8);
    _objc_release(uVar9);
    uVar9 = uVar21;
    func_0x00010beec820(uVar21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4);
    _objc_release(uVar9);
    _objc_release(uVar21);
  }
  uVar9 = param_12;
  func_0x000108f4a29c();
  if ((int)uVar9 == 0) {
    bVar2 = true;
  }
  else {
    puVar8 = param_5;
    func_0x00010c26fe00();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar8;
    func_0x00010bf529e0();
    bVar2 = puVar12 == (ulong *)0x0;
    _objc_release(puVar8);
  }
  puVar8 = param_5;
  func_0x00010c26fe00();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar8;
  func_0x00010bf529e0();
  _objc_release(puVar8);
  if (puVar12 != (ulong *)0x0) {
    puVar10 = PTR_PTR_1126b10e0;
    _objc_opt_new(PTR_PTR_1126b10e0);
    func_0x000108f37c18();
    _objc_release(puVar10);
  }
  if (param_9 == (undefined **)0x1d) {
    puVar10 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c067fc0();
    bVar3 = puVar11 == (undefined *)0x5c;
    _objc_release(puVar10);
  }
  else {
    bVar3 = false;
  }
  uVar18 = param_7;
  func_0x0001085367d4();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0();
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar18);
  uVar17 = uVar18;
  func_0x00010bf52a60();
  lVar34 = lRam0000000000000000;
  while (uVar17 != 0) {
    uVar42 = 0;
    do {
      if (lRam0000000000000000 != lVar34) {
        _objc_enumerationMutation(uVar18);
      }
      lVar40 = *(long *)(uVar42 * 8);
      lVar39 = lVar40;
      func_0x00010bfa0a00();
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (lVar39 < 1) {
        func_0x00010c25b820(lVar40);
        func_0x00010c0df7c0(puVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar10);
        _objc_release(puVar11);
      }
      else {
        lVar39 = lVar40;
        func_0x00010bfa0a00();
        if (0 < lVar39) {
          lVar39 = 0;
          do {
            func_0x00010befa120(puVar10);
            lVar32 = lVar40;
            func_0x00010bfa0a00();
            lVar39 = lVar39 + 1;
          } while (lVar39 < lVar32);
        }
      }
      uVar42 = uVar42 + 1;
    } while (uVar42 != uVar17);
    uVar17 = uVar18;
    func_0x00010bf52a60();
  }
  _objc_release(uVar18);
  puVar8 = param_5;
  func_0x00010bfa0a00();
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (0 < (long)puVar8) {
    func_0x00010bfa0a00(param_5);
    func_0x00010c0df7c0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4);
    _objc_release(puVar11);
  }
  puVar8 = param_5;
  func_0x00010c25b820();
  ppuVar22 = param_9;
  func_0x000107d27e00(param_9,param_12,in_stack_00000078,param_5,uVar16 & 0xffffffff,
                      in_stack_00000040,in_stack_00000048,uVar16 & 0xffffffff,(byte)uVar16 & bVar2,
                      bVar3,puVar8,puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(param_4);
  puVar8 = param_5;
  func_0x00010c25a280();
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 == (ulong *)0x0) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    if (((0x13 < uVar38) || ((1L << (uVar38 & 0x3f) & 0x80021U) == 0)) &&
       (param_9 != (undefined **)0x7)) {
      bVar2 = false;
    }
  }
  _objc_release();
  uVar9 = param_12;
  func_0x000108f485c8();
  puStack_1b8 = &uStack_1c0;
  uStack_1c0 = 0;
  uStack_1b0 = 0x2020000000;
  uStack_1a8 = 0;
  ppuStack_c8 = &puStack_d0;
  puStack_d0 = (undefined *)0x0;
  puStack_c0 = (undefined *)0x3032000000;
  pcStack_b8 = FUN_10723313c;
  puStack_b0 = (undefined *)0x10723314c;
  puStack_a8 = (undefined *)0x0;
  uVar38 = param_7;
  func_0x000108538878();
  if (((int)uVar38 != 0) && (puVar11 = PTR_PTR_1126ce808, func_0x00010c29d3e0(), (int)puVar11 != 0))
  {
    func_0x000108f4b010();
  }
  puVar23 = param_5;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = (ulong *)PTR___NSConcreteStackBlock_11034bd00;
  uVar43 = (uint)(param_9 == (undefined **)0x7) & uVar37 & (uint)uVar9 & (uVar5 ^ 1);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puVar8 = &uStack_1c0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(in_stack_00000078);
  _objc_retain(param_4);
  func_0x00010c0c1320(puVar23);
  _objc_release(puVar23);
  if ((char)puStack_1b8[3] == '\x01') {
    lVar34 = param_15;
    func_0x00010bfe9f40(param_15);
    _objc_retainAutoreleasedReturnValue();
    lVar39 = lVar34;
    func_0x00010bfe9e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar34);
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (uVar43 == 0) {
      puVar12 = param_5;
      func_0x00010c25a280(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar12;
      func_0x00010c241720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0676c0();
    }
    func_0x00010c0df760(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4);
    _objc_release(puVar11);
    if (uVar43 == 0) {
      _objc_release(puVar8);
      _objc_release(puVar12);
    }
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4);
    _objc_release(puVar11);
    func_0x000107d74fcc(param_4,lVar39,1);
    _objc_release(lVar39);
  }
  else {
    if ((bVar2) && (((uVar37 ^ 1 | uVar5) & 1) != 0)) {
      puVar8 = param_5;
      func_0x00010c25a280();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar8;
      func_0x00010c241720();
      _objc_retainAutoreleasedReturnValue();
      puVar23 = puVar12;
      func_0x00010c0676c0();
      _objc_release(puVar12);
      _objc_release(puVar8);
      if ((int)puVar23 != 0) {
        lVar34 = param_15;
        func_0x00010bfe9f40(param_15);
        _objc_retainAutoreleasedReturnValue();
        lVar39 = lVar34;
        func_0x00010bfe9e60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar34);
        func_0x00010c1d0640(param_4);
        func_0x000107d74fcc(param_4,lVar39,0);
        _objc_release(lVar39);
        goto LAB_107232588;
      }
    }
    puVar41 = ppuStack_c8[5];
    _objc_retain(param_11);
    _objc_retain(puVar41);
    _objc_retain(param_4);
    _objc_retain(param_15);
    _objc_retain(param_12);
    _objc_retain(in_stack_00000078);
    _objc_retain(param_5);
    puVar11 = PTR_PTR_1126b1270;
    func_0x00010c134400(PTR_PTR_1126b1270);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = in_stack_00000078;
    func_0x00010bf1f320();
    _objc_release(puVar11);
    ppuStack_108 = (undefined **)PTR___NSConcreteStackBlock_11034bd00;
    ppuStack_100 = (undefined **)0xc0000000;
    ppuStack_f8 = (undefined **)FUN_1072380ac;
    ppuStack_f0 = (undefined **)&UNK_110994098;
    ppuStack_e0 = (undefined **)CONCAT71(ppuStack_e0._1_7_,(char)uVar9);
    pppuVar33 = &ppuStack_108;
    ppuStack_e8 = param_9;
    FUN_1072380ac();
    if (param_15 == 0) {
      uVar43 = 0;
    }
    else {
      puVar11 = param_11;
      func_0x00010c08fa60();
      uVar43 = 0;
      if (puStack_428 == (undefined *)0x0) {
        uVar43 = (uint)(puVar11 != (undefined *)0x0) & ((uint)puVar6 ^ 0xffffffff);
      }
    }
    _objc_retain(param_5);
    uVar9 = in_stack_00000078;
    func_0x000108535744(in_stack_00000078,param_9);
    puVar6 = param_5;
    func_0x00010853a5d4();
    _objc_release(param_5);
    if (pppuVar33 == (undefined ***)0x5c || ((uint)uVar9 & (uint)puVar6 & 1) != 0) {
      puVar11 = puVar41;
      func_0x00010c08fa60();
      if ((pppuVar33 != (undefined ***)0xffffffffffffffff) &&
         (func_0x000107d75344(param_4,1), puVar11 != (undefined *)0x0 || uVar43 != 0)) {
        puVar11 = PTR_PTR_1126b0f10;
        _objc_alloc(PTR_PTR_1126b0f10);
        func_0x00010c033460();
        lVar34 = param_15;
        func_0x00010bfe9f40(param_15);
        _objc_retainAutoreleasedReturnValue();
        lVar39 = lVar34;
        func_0x00010bfea240();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar34);
        func_0x000107d74fcc(param_4,lVar39,0);
        _objc_release(lVar39);
        _objc_release(puVar11);
      }
    }
    _objc_release(param_5);
    _objc_release(in_stack_00000078);
    _objc_release(param_12);
    _objc_release(param_15);
    _objc_release(param_4);
    _objc_release(puVar41);
    _objc_release(param_11);
  }
LAB_107232588:
  if ((((param_9 == (undefined **)0x7) || (param_9 == (undefined **)0x67)) ||
      (param_9 == (undefined **)0x59)) && (in_stack_00000090 != (undefined *)0x0)) {
    puVar11 = in_stack_00000090;
    func_0x00010c247520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar11 == (undefined *)0x0) goto LAB_1072325f8;
    puVar11 = in_stack_00000090;
    func_0x00010c233400();
    _objc_retainAutoreleasedReturnValue();
    puVar41 = puVar11;
    func_0x00010bf1f3c0();
    if ((int)puVar41 == 0) {
      uVar43 = 0;
    }
    else {
      uVar43 = uVar37 ^ 1 | uVar5;
    }
    _objc_release(puVar11);
    bVar2 = true;
  }
  else {
LAB_1072325f8:
    uVar43 = 0;
    bVar2 = false;
  }
  puVar11 = PTR_PTR_1126c3320;
  func_0x00010c0729e0();
  puStack_448 = param_5;
  if ((((uint)puVar11 ^ 1) & uVar43) == 1) {
    puVar6 = param_5;
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar6);
    if (puVar8 == (ulong *)0x0) goto LAB_107232894;
    puVar41 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar13 = puVar41;
    _objc_opt_isKindOfClass(puVar41,puVar11);
    puVar11 = puVar41;
    if (((ulong)puVar13 & 1) == 0) {
      puVar11 = (undefined *)0x0;
    }
    _objc_retain(puVar11);
    _objc_release(puVar41);
    puStack_408 = PTR____NSArray0__struct_11034ab48;
    if (puVar11 != (undefined *)0x0) {
      puStack_408 = puVar11;
    }
    _objc_retain();
    _objc_release(puVar11);
    _objc_opt_class(PTR_PTR_1126c9810);
    puVar11 = puStack_408;
    func_0x00010bf09f60(puStack_408);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4);
    _objc_release(puVar11);
    _objc_retain(param_11);
    puStack_3e8 = param_11;
    if (param_11 == (undefined *)0x0) {
      puStack_3e8 = in_stack_00000090;
      func_0x00010c116a20();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar41 = PTR_PTR_1126c97b8;
    _objc_alloc(PTR_PTR_1126c97b8);
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    puStack_450 = puStack_448;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = in_stack_00000090;
    func_0x00010c242440(in_stack_00000090);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = in_stack_00000090;
    func_0x00010c242460(in_stack_00000090);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = in_stack_00000090;
    func_0x00010c247520(in_stack_00000090);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = in_stack_00000090;
    func_0x00010c124a40(in_stack_00000090);
    _objc_retainAutoreleasedReturnValue();
    puVar35 = in_stack_00000090;
    func_0x00010bf68780();
    _objc_retainAutoreleasedReturnValue();
    puVar36 = in_stack_00000090;
    func_0x00010bf68600();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03b040(puVar41);
    func_0x00010c1d0640(param_4);
    _objc_release(puVar41);
    _objc_release(puVar36);
    _objc_release(puVar35);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
LAB_107232868:
    _objc_release(puVar11);
    _objc_release(puStack_450);
    _objc_release(puStack_448);
    _objc_release(puStack_3e8);
    _objc_release(puStack_408);
  }
  else {
LAB_107232894:
    if (((!bVar2 && ((ulong)puVar11 & 1) == 0) &&
        (puVar11 = param_11, func_0x00010c08fa60(), puVar11 != (undefined *)0x0)) &&
       ((param_9 == (undefined **)0x54 || param_9 == (undefined **)0x7 &&
        (((uVar37 ^ 1 | uVar5) & 1) != 0)))) {
      puVar6 = param_5;
      func_0x00010c0c5340();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar6;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar6);
      if (puVar8 != (ulong *)0x0) {
        puVar41 = param_4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
        _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
        puVar13 = puVar41;
        _objc_opt_isKindOfClass(puVar41,puVar11);
        puVar11 = puVar41;
        if (((ulong)puVar13 & 1) == 0) {
          puVar11 = (undefined *)0x0;
        }
        _objc_retain(puVar11);
        _objc_release(puVar41);
        puStack_408 = PTR____NSArray0__struct_11034ab48;
        if (puVar11 != (undefined *)0x0) {
          puStack_408 = puVar11;
        }
        _objc_retain();
        _objc_release(puVar11);
        ppuVar1 = &PTR_PTR_1133e0b90;
        if (param_9 != (undefined **)0x54) {
          ppuVar1 = &PTR_PTR_1133e0b78;
        }
        puStack_3e8 = *ppuVar1;
        _objc_retain();
        _objc_opt_class(PTR_PTR_1126c9810);
        puVar11 = puStack_408;
        func_0x00010bf09f60(puStack_408);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_4);
        _objc_release(puVar11);
        puVar11 = PTR_PTR_1126c97b8;
        _objc_alloc(PTR_PTR_1126c97b8);
        func_0x00010c0c5340();
        _objc_retainAutoreleasedReturnValue();
        puStack_450 = puStack_448;
        func_0x00010c0c5180();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c03b040(puVar11);
        func_0x00010c1d0640(param_4);
        goto LAB_107232868;
      }
    }
  }
  puVar6 = param_2;
  func_0x00010be6f440(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(param_4);
  _objc_release(puVar6);
  if (((ulong)param_9 & 0xfffffffffffffffb) == 0x62) {
    uVar38 = param_7;
    func_0x0001085367d4(param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar38;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071ae0(param_5);
    _objc_release(uVar16);
    _objc_release(uVar38);
    uVar38 = param_7;
    func_0x0001085367d4(param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar38;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071ae0(param_5);
    _objc_release(uVar16);
    _objc_release(uVar38);
    puVar6 = param_2;
    func_0x00010be6f500(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(param_4);
    _objc_release(puVar6);
  }
  puVar6 = param_2;
  func_0x00010be6f4c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(param_4);
  _objc_release(puVar6);
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar41 = PTR_PTR_1126b2d20;
  func_0x00010c100260(PTR_PTR_1126b2d20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_4);
  _objc_release(puVar41);
  _objc_release(puVar11);
  _objc_retain(param_5);
  uVar9 = in_stack_00000078;
  func_0x000108535744(in_stack_00000078,param_9);
  puVar6 = param_5;
  func_0x00010853a5d4();
  _objc_release(param_5);
  if (((uint)uVar9 & (uint)puVar6) != 1) goto LAB_107232d18;
  puVar11 = PTR_PTR_1126c11f8;
  func_0x00010c24c820(PTR_PTR_1126c11f8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = in_stack_00000078;
  func_0x00010bf1f320();
  if ((int)uVar9 == 0) {
LAB_107232ccc:
    _objc_release(puVar11);
  }
  else {
    puVar41 = PTR_PTR_1126ce808;
    func_0x00010c29d3a0();
    _objc_release(puVar11);
    if ((int)puVar41 != 0) {
      puVar11 = PTR_PTR_1126c11f8;
      func_0x00010c24c840(PTR_PTR_1126c11f8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f320(in_stack_00000078);
      _objc_release(puVar11);
      puVar11 = PTR_PTR_1126c11f8;
      func_0x00010c24c860(PTR_PTR_1126c11f8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f320(in_stack_00000078);
      goto LAB_107232ccc;
    }
  }
  func_0x00010be6f660(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(param_4);
  _objc_release(param_2);
LAB_107232d18:
  puVar11 = param_4;
  if (puStack_428 == (undefined *)0x0) {
    func_0x00010bf51e00();
    puVar41 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_1d8 = puVar11;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf51e00();
    puStack_1c8 = puStack_428;
    puVar41 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_1d0 = puVar11;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_retain();
  _objc_release(puVar41);
  _objc_release(puVar11);
  _objc_release(param_4);
  _objc_release(in_stack_00000078);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  __Block_object_dispose(&puStack_d0,8);
  _objc_release(puStack_a8);
  __Block_object_dispose(&uStack_1c0,8);
  _objc_release(ppuVar22);
  _objc_release(puVar10);
  _objc_release(uVar18);
  _objc_release(puVar7);
  _objc_release(uVar19);
  _objc_release(puStack_428);
  _objc_release(in_stack_00000090);
  _objc_release(in_stack_00000080);
  _objc_release(in_stack_00000078);
  _objc_release(in_stack_00000070);
  _objc_release(in_stack_00000068);
  _objc_release(in_stack_00000058);
  _objc_release(in_stack_00000050);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
    ___stack_chk_fail();
    __Block_object_dispose(&puStack_d0,8);
    __Block_object_dispose(&uStack_1c0,8);
    __Unwind_Resume(param_4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar41);
  return;
}



/* Entry: 107232fcc; end: 107232fdb;  */

void FUN_107232fcc(void)

{
  return;
}



/* Entry: 107232fdc; end: 1072330af;  */

void FUN_107232fdc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c15f2e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  if ((int)uVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_setObject_forKeyedSubscript__112651bb8,
               PTR____kCFBooleanTrue_11034ab68,&PTR____CFConstantStringClassReference_110f0be38);
    return;
  }
  return;
}



/* Entry: 1072330b0; end: 1072330bb;  */

void FUN_1072330b0(void)

{
  return;
}



/* Entry: 1072330bc; end: 10723313b;  */

void FUN_1072330bc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfaa640();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c11ac40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10723313c; end: 107233153;  */

void FUN_10723313c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107233154; end: 107233247;  */

void FUN_107233154(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(char *)(param_1 + 0x50) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0e00e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110ed3958);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    uVar4 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar5 + 0x28) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  if (*(char *)(param_1 + 0x51) == '\x01') {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
    func_0x00010853a0e0();
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
    func_0x000108538878();
  }
  if ((*(long *)(param_1 + 0x48) == 7) &&
     (((iVar1 != 0 && ((*(byte *)(param_1 + 0x52) & 1) != 0)) ||
      (*(char *)(param_1 + 0x53) == '\x01')))) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = 1;
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107233248; end: 10723326f;  */

void FUN_107233248(void)

{
  return;
}



/* Entry: 107233270; end: 1072334db;  */

void FUN_107233270(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  lVar6 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x28) = param_3;
  _objc_release(uVar2);
  puVar3 = param_6;
  func_0x00010c275280();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c08fa60();
  if ((puVar4 == (undefined *)0x0) ||
     (puVar4 = param_6, func_0x00010c27b920(), puVar4 != (undefined *)0x0)) {
LAB_1072332e4:
    _objc_release(puVar3);
  }
  else {
    puVar4 = param_6;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar3);
    if (puVar4 == (undefined *)0x0) {
      puVar3 = param_6;
      func_0x00010c275280(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20),param_2,puVar3,
                          &PTR____CFConstantStringClassReference_110ebe998);
      _objc_release(puVar3);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c2621c0(uVar2);
      func_0x00010c0df780(puVar3,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20),param_2,puVar3,
                          &PTR____CFConstantStringClassReference_110ebe9b8);
      _objc_release(puVar3);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c1029e0(uVar2);
      func_0x00010c0df7c0(puVar3,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20),param_2,puVar3,
                          &PTR____CFConstantStringClassReference_110ebe9d8);
      goto LAB_1072332e4;
    }
  }
  if (*(long *)(param_1 + 0x40) == 0x5a) {
    puVar3 = param_6;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) {
      puVar4 = param_6;
      func_0x00010c275280();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c08fa60();
      if (puVar5 == (undefined *)0x0) {
        _objc_release(puVar4);
      }
      else {
        iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
        func_0x00010c086060();
        _objc_release(puVar4);
        _objc_release(puVar3);
        if (iVar1 == 0) goto LAB_1072334bc;
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c1d0640(uVar2,param_2,&PTR____CFConstantStringClassReference_110ebec38,
                            &PTR____CFConstantStringClassReference_110ebe818);
        func_0x000108f59764();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20),param_2,uVar2,
                            &PTR____CFConstantStringClassReference_110f0d018);
        _objc_release(uVar2);
        puVar3 = param_6;
        func_0x00010bf50280(param_6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20),param_2,puVar3,
                            &PTR____CFConstantStringClassReference_110ebea58);
      }
      _objc_release(puVar3);
    }
  }
LAB_1072334bc:
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1072334dc; end: 1072334df;  */

void FUN_1072334dc(void)

{
  return;
}



/* Entry: 1072334e0; end: 10723356b;  */

void FUN_1072334e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c9358;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c14bba0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2);
  _objc_release(param_2);
  _objc_release(puVar1);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  }
  return;
}



/* Entry: 10723356c; end: 107234303; +[SCStoriesOperaSnapPagePropertyParser sharedPagePropertiesForStorySnap:posterSnapchatter:storiesPlaybackSequence:customStoryMetadata:viewLocation:viewLocationPos:chromeAvatarProvider:currentUserId:circumstanceEngine:lazyDataFetcher:musicContentRestrictionServices:snapchatterUserInfoProvider:snapchattersSynchronousDataFetcher:storiesConfigProvider:fanPassDisplayName:friendOfGroupFeedDisplayName:pageType:isJoinedPlayback:snapchatterObservableRepository:] */

void FUN_10723356c(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
                  undefined **param_5,undefined **param_6,undefined **param_7,undefined **param_8,
                  undefined8 param_9,undefined8 param_10,undefined **param_11,undefined8 param_12,
                  undefined8 param_13,undefined **param_14,undefined **param_15,ulong param_16,
                  long param_17,undefined **param_18,undefined4 param_19,undefined4 param_20,
                  byte param_21,undefined4 param_22,undefined8 param_23)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined **ppuVar17;
  undefined8 uVar18;
  long lVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined **ppuStack_768;
  undefined *puStack_5c8;
  undefined **ppuStack_5c0;
  undefined8 uStack_5b8;
  code *pcStack_5b0;
  undefined **ppuStack_5a8;
  undefined **ppuStack_5a0;
  undefined **ppuStack_598;
  undefined **ppuStack_590;
  undefined **ppuStack_588;
  undefined **ppuStack_580;
  undefined *puStack_578;
  undefined8 uStack_570;
  code *pcStack_568;
  undefined *puStack_560;
  undefined **ppuStack_558;
  undefined **ppuStack_550;
  undefined **ppuStack_548;
  undefined **ppuStack_540;
  undefined **ppuStack_538;
  undefined **ppuStack_530;
  undefined *puStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined *puStack_510;
  undefined **ppuStack_508;
  undefined **ppuStack_500;
  undefined **ppuStack_4f8;
  undefined **ppuStack_4f0;
  undefined **ppuStack_4e8;
  undefined **ppuStack_4e0;
  undefined *puStack_4d8;
  undefined **ppuStack_4d0;
  code *pcStack_4c8;
  undefined *puStack_4c0;
  undefined **ppuStack_4b8;
  undefined **ppuStack_4b0;
  undefined **ppuStack_4a8;
  undefined **ppuStack_4a0;
  undefined **ppuStack_498;
  undefined **ppuStack_490;
  undefined *puStack_488;
  undefined **ppuStack_480;
  code *pcStack_478;
  code *pcStack_470;
  undefined **ppuStack_468;
  undefined **ppuStack_460;
  undefined **ppuStack_458;
  undefined **ppuStack_450;
  undefined **ppuStack_448;
  undefined **ppuStack_440;
  undefined *puStack_438;
  undefined **ppuStack_430;
  code *pcStack_428;
  code *pcStack_420;
  ulong uStack_418;
  undefined **ppuStack_410;
  undefined *puStack_390;
  undefined **ppuStack_388;
  undefined **ppuStack_380;
  ulong uStack_378;
  long lStack_370;
  undefined **ppuStack_368;
  undefined8 uStack_360;
  byte bStack_358;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined8 *puStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined8 *puStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined8 *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = param_3;
  ppuVar22 = param_4;
  ppuVar23 = param_5;
  ppuVar17 = param_6;
  ppuVar24 = param_7;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_23);
  puVar20 = PTR____NSDictionary0__struct_11034ab58;
  if ((param_3 != (undefined **)0x0) && (param_5 != (undefined **)0x0)) {
    bStack_358 = param_21;
    ppuStack_368 = param_18;
    uStack_360 = param_23;
    uStack_378 = param_16;
    lStack_370 = param_17;
    ppuStack_380 = param_15;
    ppuVar21 = param_3;
    FUN_107234304(param_3,param_4,param_5,param_6,param_9,param_10,param_11,param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR_PTR_1126b2368;
    _objc_opt_new();
    puVar3 = puVar20;
    func_0x00010c2b53e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar20);
    _objc_retain(param_3);
    uStack_160 = 0;
    uStack_150 = 0x3032000000;
    pcStack_148 = FUN_10723313c;
    uStack_140 = 0x10723314c;
    ppuStack_138 = &PTR____CFConstantStringClassReference_110daafd8;
    ppuVar4 = param_3;
    puStack_158 = &uStack_160;
    func_0x00010bf0e700(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
    uVar27 = 0xc2000000;
    uStack_180 = 0xc2000000;
    pcStack_178 = FUN_107238164;
    puStack_170 = &UNK_11086f548;
    puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1a8 = 0xc2000000;
    pcStack_1a0 = FUN_107238180;
    puStack_198 = &UNK_110992258;
    puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1d0 = 0xc2000000;
    uStack_1c8 = 0x1072381b8;
    puStack_1c0 = &UNK_1109258d8;
    puStack_200 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1f8 = 0xc2000000;
    pcStack_1f0 = FUN_1072381f0;
    puStack_1e8 = &UNK_110925908;
    puStack_228 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_220 = 0xc2000000;
    uStack_218 = 0x10723820c;
    puStack_210 = &UNK_110925938;
    puStack_250 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_248 = 0xc2000000;
    uStack_240 = 0x107238228;
    puStack_238 = &UNK_110919400;
    ppuVar17 = &puStack_200;
    ppuVar24 = &puStack_228;
    param_8 = &puStack_250;
    puStack_230 = &uStack_160;
    puStack_208 = &uStack_160;
    puStack_1e0 = &uStack_160;
    puStack_1b8 = &uStack_160;
    puStack_190 = &uStack_160;
    puStack_168 = &uStack_160;
    func_0x00010c0c1320();
    _objc_release(ppuVar4);
    puVar25 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puStack_390 = (undefined *)puStack_158[5];
    ppuVar4 = param_3;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_388 = ppuVar4;
    func_0x000108ea5f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuStack_388);
    _objc_release(ppuVar4);
    __Block_object_dispose(&uStack_160,8);
    _objc_release(ppuStack_138);
    _objc_release(param_3);
    func_0x00010c2b53a0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_a0 = &PTR____CFConstantStringClassReference_110dcadf8;
    ppuStack_98 = &PTR____CFConstantStringClassReference_110ed3938;
    ppuStack_90 = param_3;
    func_0x0001085381ac(param_5);
    func_0x00010c0df880();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_88 = puVar20;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b53e0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar26);
    _objc_release(puVar20);
    puVar26 = puVar3;
    func_0x00010c1531a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = param_5;
    func_0x000108536f70();
    _objc_retainAutoreleasedReturnValue();
    ppuVar22 = ppuVar5;
    func_0x00010bf45460();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar22;
    func_0x00010c08fa60();
    _objc_release(ppuVar22);
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar4 = ppuVar5;
      func_0x00010bf45460(ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar26);
      _objc_release(ppuVar4);
    }
    ppuVar4 = param_3;
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar4;
    func_0x00010bf267e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00();
    if (((ulong)puVar20 & 1) == 0) {
      func_0x00010c1d0640(puVar26);
    }
    if (param_6 != (undefined **)0x0) {
      func_0x00010c1d0640(puVar26);
    }
    if (((ulong)param_7 & 0xfffffffffffffffb) == 0x62) {
      func_0x00010c1d0640(puVar26);
      uVar27 = 0x4008000000000000;
    }
    else {
      ppuVar4 = param_3;
      func_0x00010c26f2a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf8b160();
      _objc_release(ppuVar4);
    }
    ppuStack_130 = &PTR____CFConstantStringClassReference_110ea1a58;
    ppuStack_128 = &PTR____CFConstantStringClassReference_110dc41b8;
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_e8 = param_5;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_120 = &PTR____CFConstantStringClassReference_110e47e98;
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_e0 = puVar7;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_118 = &PTR____CFConstantStringClassReference_110ea2bf8;
    ppuVar4 = param_3;
    puStack_d8 = puVar8;
    func_0x00010c29e300();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c083540();
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_110 = &PTR____CFConstantStringClassReference_110f0bc98;
    ppuVar22 = param_3;
    puStack_d0 = puVar20;
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    ppuVar23 = ppuVar22;
    func_0x00010c27dd80();
    if (((((undefined *)0x1b < (undefined *)((long)ppuVar23 + 1U)) ||
         ((1L << ((long)ppuVar23 + 1U & 0x3f) & 0xb4b5dbbU) == 0)) ||
        ((undefined *)0x1a < (undefined *)((long)ppuVar23 + 1U))) ||
       ((1L << ((long)ppuVar23 + 1U & 0x3f) & 0x6c6bd77U) == 0)) {
      uVar27 = 0;
    }
    func_0x00010c0df720(uVar27);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_108 = &PTR____CFConstantStringClassReference_110e9e918;
    ppuVar10 = param_3;
    puStack_c8 = puVar9;
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27dd80();
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_b8 = PTR____kCFBooleanTrue_11034ab68;
    ppuStack_100 = &PTR____CFConstantStringClassReference_110f0bcf8;
    ppuStack_f8 = &PTR____CFConstantStringClassReference_110f0e358;
    puStack_b0 = PTR____kCFBooleanFalse_11034ab60;
    ppuStack_f0 = &PTR____CFConstantStringClassReference_110f0be98;
    ppuVar12 = param_3;
    puStack_c0 = puVar11;
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27dd80();
    FUN_10722fa8c();
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    ppuVar23 = (undefined **)0x9;
    puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_a8 = puVar13;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar26);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(ppuVar12);
    _objc_release(puVar11);
    _objc_release(ppuVar10);
    _objc_release(puVar9);
    _objc_release(ppuVar22);
    _objc_release(puVar20);
    _objc_release(ppuVar4);
    _objc_release(puVar8);
    _objc_release(puVar7);
    puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar26);
    _objc_release(puVar20);
    if ((long)param_7 < 0x54) {
      if (param_7 == (undefined **)0x7) {
LAB_107233e24:
        ppuVar4 = param_3;
        func_0x000108539be8(param_3,param_11);
        if ((int)ppuVar4 != 0) {
          puVar20 = PTR_PTR_1126b12d0;
          func_0x00010c12f540(PTR_PTR_1126b12d0);
          _objc_retainAutoreleasedReturnValue();
          uVar15 = param_16;
          func_0x00010bf1f320();
          _objc_release(puVar20);
          uVar16 = (ulong)puStack_390 >> 8;
          puStack_390 = (undefined *)CONCAT71((int7)uVar16,(char)uVar15);
          ppuVar23 = (undefined **)0x1;
          ppuVar4 = param_3;
          ppuVar17 = param_14;
          ppuVar24 = param_15;
          param_8 = param_11;
          func_0x000107d25090(param_3,param_4,param_6,param_10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar26);
          _objc_release(ppuVar4);
          ppuStack_388 = param_5;
        }
      }
      if (param_7 == (undefined **)0x39) {
        puVar20 = PTR_PTR_1126c11f8;
        func_0x00010c1172a0(PTR_PTR_1126c11f8);
        _objc_retainAutoreleasedReturnValue();
        uVar16 = param_16;
        func_0x00010bf1f320();
        _objc_release(puVar20);
        if ((int)uVar16 != 0) {
          uVar27 = param_1;
          func_0x00010be6f600(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef7f60(puVar26);
          _objc_release(uVar27);
        }
      }
    }
    else if ((param_7 == (undefined **)0x59) || (param_7 == (undefined **)0x54)) goto LAB_107233e24;
    ppuVar4 = param_3;
    func_0x00010bf4e860();
    _objc_retainAutoreleasedReturnValue();
    ppuVar22 = ppuVar4;
    func_0x00010c08fa60();
    _objc_release(ppuVar4);
    puVar20 = PTR_PTR_1126b2378;
    if (ppuVar22 != (undefined **)0x0) {
      ppuVar17 = param_3;
      func_0x00010bf4e860(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f40e0(puVar20);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar17);
      uVar27 = param_13;
      func_0x00010bf4d340();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar27;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar20;
      func_0x00010c27f9c0(puVar20);
      _objc_retainAutoreleasedReturnValue();
      ppuVar17 = param_3;
      func_0x00010c0c5340();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar17;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108534aa8();
      ppuVar23 = ppuVar4;
      func_0x00010c2884e0(uVar18);
      _objc_release(ppuVar4);
      _objc_release(ppuVar17);
      _objc_release(puVar9);
      _objc_release(uVar18);
      _objc_release(uVar27);
      _objc_release(puVar20);
      ppuVar17 = param_7;
    }
    ppuVar10 = param_3;
    func_0x00010c24a0a0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (ppuVar10 != (undefined **)0x0) {
      func_0x00010c24a0e0(ppuVar10);
      func_0x00010c0df760(puVar20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar26);
      _objc_release(puVar20);
      ppuVar4 = ppuVar10;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      ppuVar22 = ppuVar4;
      func_0x00010c08fa60();
      _objc_release(ppuVar4);
      if (ppuVar22 != (undefined **)0x0) {
        ppuVar4 = ppuVar10;
        func_0x00010bf85d80(ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar26);
        _objc_release(ppuVar4);
      }
      ppuVar4 = ppuVar10;
      func_0x00010c116a20();
      _objc_retainAutoreleasedReturnValue();
      ppuVar22 = ppuVar4;
      func_0x00010c08fa60();
      _objc_release(ppuVar4);
      if (ppuVar22 != (undefined **)0x0) {
        ppuVar4 = ppuVar10;
        func_0x00010c116a20(ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar26);
        _objc_release(ppuVar4);
      }
    }
    puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010beb3180(param_1);
    func_0x00010c0df760(puVar20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar26);
    _objc_release(puVar20);
    ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107d2ea54(param_3);
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar22 = &PTR____CFConstantStringClassReference_110f0eaf8;
    ppuVar4 = ppuVar12;
    func_0x00010c1d0640(puVar26);
    _objc_release(ppuVar12);
    puVar20 = puVar26;
    func_0x00010bf51e00();
    _objc_release(ppuVar10);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    _objc_release(puVar26);
    _objc_release(puVar25);
    _objc_release(puVar3);
    _objc_release(ppuVar21);
  }
  _objc_release(param_23);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  ppuVar21 = (undefined **)0x8;
  __Block_object_dispose(&uStack_160);
  __Unwind_Resume();
  _objc_retain();
  _objc_retain(ppuVar21);
  _objc_retain(ppuVar4);
  _objc_retain(ppuVar22);
  _objc_retain(ppuVar23);
  _objc_retain(ppuVar17);
  _objc_retain(ppuVar24);
  _objc_retain(puStack_390);
  _objc_retain(ppuStack_388);
  _objc_retain(ppuStack_380);
  _objc_retain(uStack_378);
  _objc_retain(lStack_370);
  _objc_retain(ppuStack_368);
  _objc_retain(uStack_360);
  _objc_retain(param_3);
  _objc_retain(ppuVar21);
  _objc_retain(ppuVar4);
  _objc_retain(ppuVar22);
  _objc_retain(ppuVar17);
  _objc_retain(ppuVar24);
  _objc_retain(ppuStack_388);
  _objc_retain(ppuStack_380);
  _objc_retain(uStack_378);
  _objc_retain(ppuStack_368);
  puVar20 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_5c8 = (undefined *)0x0;
  uStack_5b8 = 0x3032000000;
  pcStack_5b0 = FUN_10723313c;
  ppuStack_5a8 = (undefined **)0x10723314c;
  ppuStack_5a0 = (undefined **)0x0;
  puStack_488 = PTR___NSConcreteStackBlock_11034bd00;
  ppuStack_480 = (undefined **)0xc2000000;
  pcStack_478 = FUN_1072383e4;
  pcStack_470 = (code *)&UNK_110994348;
  ppuStack_5c0 = &puStack_5c8;
  _objc_retain(ppuVar22);
  ppuStack_468 = ppuVar22;
  _objc_retain(param_3);
  ppuStack_460 = param_3;
  _objc_retain(ppuStack_380);
  ppuStack_458 = ppuStack_380;
  _objc_retain(ppuVar21);
  puStack_4d8 = puVar20;
  ppuStack_4d0 = (undefined **)0xc2000000;
  pcStack_4c8 = FUN_1072387b8;
  puStack_4c0 = &UNK_110994378;
  ppuStack_450 = ppuVar21;
  ppuStack_448 = &puStack_5c8;
  _objc_retain(ppuVar22);
  ppuStack_4b8 = ppuVar22;
  _objc_retain(ppuStack_368);
  ppuStack_4b0 = ppuStack_368;
  ppuStack_4a0 = &puStack_5c8;
  _objc_retain(param_3);
  puStack_528 = puVar20;
  uStack_520 = 0xc2000000;
  uStack_518 = 0x1072388b0;
  puStack_510 = &UNK_110991ed8;
  ppuStack_4f0 = param_8;
  ppuStack_4a8 = param_3;
  _objc_retain(param_3);
  ppuStack_508 = param_3;
  _objc_retain(ppuVar24);
  ppuStack_500 = ppuVar24;
  ppuStack_4f8 = &puStack_5c8;
  _objc_retain(param_3);
  _objc_retain(param_3);
  _objc_retain(param_3);
  puStack_438 = puVar20;
  ppuStack_430 = (undefined **)0xc2000000;
  pcStack_428 = FUN_107238e54;
  pcStack_420 = (code *)&UNK_110994408;
  _objc_retain(uStack_378);
  uStack_418 = uStack_378;
  puStack_578 = puVar20;
  uStack_570 = 0xc2000000;
  pcStack_568 = FUN_1072390b0;
  puStack_560 = &UNK_1109946f8;
  ppuStack_410 = &puStack_5c8;
  _objc_retain(param_3);
  ppuStack_558 = param_3;
  _objc_retain(ppuStack_380);
  ppuStack_550 = ppuStack_380;
  ppuStack_548 = &puStack_5c8;
  func_0x00010c0bdf40(ppuVar4);
  puVar25 = ppuStack_5c0[5];
  _objc_retain(puVar25);
  _objc_release(ppuStack_550);
  _objc_release(ppuStack_558);
  _objc_release(uStack_418);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(ppuStack_500);
  _objc_release(ppuStack_508);
  _objc_release(ppuStack_4a8);
  _objc_release(ppuStack_4b0);
  _objc_release(ppuStack_4b8);
  _objc_release(ppuStack_450);
  _objc_release(ppuStack_458);
  _objc_release(ppuStack_460);
  _objc_release(ppuStack_468);
  __Block_object_dispose(&puStack_5c8,8);
  _objc_release(ppuStack_5a0);
  _objc_release(ppuStack_368);
  _objc_release(uStack_378);
  _objc_release(ppuStack_380);
  _objc_release(ppuStack_388);
  _objc_release(ppuVar24);
  _objc_release(ppuVar17);
  _objc_release(ppuVar22);
  _objc_release(ppuVar4);
  _objc_release(ppuVar21);
  _objc_release(param_3);
  puVar20 = puVar25;
  func_0x00010bf529e0();
  if (puVar20 == (undefined *)0x0) {
    _objc_retain(param_3);
    uVar16 = uStack_378;
    func_0x000108535744(uStack_378,param_8);
    ppuVar5 = param_3;
    func_0x00010853a5d4();
    _objc_release(param_3);
    puVar20 = PTR____NSDictionary0__struct_11034ab58;
    if (((int)uVar16 != 0) && ((int)ppuVar5 != 0)) goto LAB_1072347f8;
  }
  else {
LAB_1072347f8:
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    puVar20 = puVar3;
    func_0x00010bef7f60();
    func_0x000107d2668c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar20);
    uVar27 = 0;
    func_0x000107d265e4(0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(uVar27);
    puVar20 = PTR_PTR_1126b12d0;
    func_0x00010c12f540(PTR_PTR_1126b12d0);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uStack_378;
    func_0x00010bf1f320();
    _objc_release(puVar20);
    ppuStack_768 = param_3;
    func_0x000107d25090(param_3,ppuVar21,ppuVar22,ppuVar17,0,ppuStack_388,ppuStack_380,ppuVar24,
                        uVar16 & 0xff,ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = param_3;
    func_0x00010c24a0a0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR_PTR_1126c50b0;
    if (ppuVar5 == (undefined **)0x0) {
      puVar20 = PTR_PTR_1126c3320;
      func_0x00010c0729e0();
      if ((int)puVar20 != 0) goto LAB_107234a5c;
LAB_107234a78:
      ppuVar6 = param_3;
      func_0x00010853a704();
      if ((int)ppuVar6 == 0) {
        if ((param_8 == (undefined **)0x7) && (bStack_358 != 0)) {
          ppuVar6 = param_3;
          func_0x00010853a0e0();
          if (((ulong)ppuVar6 & 1) == 0) {
            func_0x000108f5992c();
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            func_0x000108f59914();
            _objc_retainAutoreleasedReturnValue();
          }
          ppuVar12 = ppuStack_768;
          func_0x00010c08fa60();
          ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
          if (ppuVar12 == (undefined **)0x0) {
            _objc_retain(ppuVar6);
            ppuVar10 = ppuVar6;
          }
          else {
            func_0x000108f59944();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c14de00();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuStack_768);
            ppuStack_768 = ppuVar12;
          }
          _objc_release(ppuStack_768);
          _objc_release(ppuVar6);
          ppuStack_768 = ppuVar10;
        }
        func_0x00010c1d0640(puVar3);
        uVar27 = 0;
        func_0x000107d26654(0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(uVar27);
      }
      else {
        ppuStack_4d0 = &puStack_4d8;
        puStack_4d8 = (undefined *)0x0;
        pcStack_4c8 = (code *)0x2020000000;
        puStack_4c0 = (undefined *)0x0;
        ppuStack_480 = &puStack_488;
        puStack_488 = (undefined *)0x0;
        pcStack_478 = (code *)0x3032000000;
        pcStack_470 = FUN_10723313c;
        ppuStack_468 = (undefined **)0x10723314c;
        ppuStack_460 = (undefined **)0x0;
        _objc_retain(ppuStack_768);
        func_0x00010c0bdf40(ppuVar4);
        puVar20 = ppuStack_480[5];
        func_0x00010c08fa60();
        if (puVar20 != (undefined *)0x0) {
          puVar20 = ppuStack_480[5];
          func_0x000107d264a0(puVar20);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(puVar20);
          puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(puVar20);
        }
        _objc_release(ppuStack_768);
        __Block_object_dispose(&puStack_488,8);
        _objc_release(ppuStack_460);
        __Block_object_dispose(&puStack_4d8,8);
      }
    }
    else {
      ppuVar6 = ppuVar5;
      func_0x00010c116a20();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar5;
      func_0x00010bf85d80(ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c24a0e0(ppuVar5);
      func_0x00010c232640();
      _objc_release(ppuVar10);
      _objc_release(ppuVar6);
      puVar26 = PTR_PTR_1126c3320;
      func_0x00010c0729e0();
      if (((ulong)puVar26 & 1) == 0) {
        if ((int)puVar20 == 0) goto LAB_107234a78;
        func_0x00010c1d0640(puVar3);
        puVar20 = PTR_PTR_1126c50b0;
        ppuVar6 = ppuVar5;
        func_0x00010bf85d80(ppuVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfca940(puVar20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(puVar20);
        _objc_release(ppuVar6);
        ppuVar6 = ppuVar5;
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        ppuVar10 = ppuVar6;
        func_0x00010c08fa60();
        _objc_release(ppuVar6);
        if (ppuVar10 != (undefined **)0x0) {
          ppuVar6 = ppuVar5;
          func_0x00010bf85d80(ppuVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(ppuVar6);
        }
      }
      else {
LAB_107234a5c:
        lVar19 = lStack_370;
        func_0x00010c08fa60();
        if (lVar19 == 0) {
          func_0x000108f598b4();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          _objc_retain(lStack_370);
          lVar19 = lStack_370;
        }
        func_0x00010c1d0640(puVar3);
        func_0x00010c1d0640(puVar3);
        func_0x00010c1d0640(puVar3);
        func_0x00010c1d0640(puVar3);
        uVar27 = 0;
        func_0x000107d26654(0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(uVar27);
        puVar20 = PTR_PTR_1126b0c40;
        puVar26 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe7aa0(0x4028000000000000,0x4028000000000000,puVar20);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar26);
        func_0x00010c1d0640(puVar3);
        ppuVar6 = param_3;
        func_0x00010bfa0a00();
        if (0 < (long)ppuVar6) {
          func_0x00010c1d0640(puVar3);
        }
        _objc_release(puVar20);
        _objc_release(lVar19);
      }
    }
    func_0x00010c1d0640(puVar3);
    uVar27 = 0;
    func_0x000107d2661c(0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(uVar27);
    puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar20);
    puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar20);
    func_0x00010c1d0640(puVar3);
    func_0x00010c1d0640(puVar3);
    if (ppuVar22 != (undefined **)0x0) {
      uVar27 = 0;
      func_0x000107d26654(0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar22;
      func_0x000107d2669c(ppuVar22,uVar27);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar27);
      if (ppuVar6 != (undefined **)0x0) {
        func_0x00010c1d0640(puVar3);
      }
      _objc_release(ppuVar6);
    }
    _objc_retain(param_3);
    _objc_retain(ppuVar4);
    _objc_retain(ppuVar23);
    _objc_retain(ppuVar17);
    _objc_retain(ppuStack_388);
    _objc_retain(ppuStack_380);
    puVar20 = PTR___NSConcreteStackBlock_11034bd00;
    puVar26 = PTR____NSDictionary0__struct_11034ab58;
    if (ppuVar23 != (undefined **)0x0) {
      puStack_438 = (undefined *)0x0;
      pcStack_428 = (code *)0x3032000000;
      pcStack_420 = FUN_10723313c;
      uStack_418 = 0x10723314c;
      ppuStack_410 = (undefined **)0x0;
      puStack_488 = PTR___NSConcreteStackBlock_11034bd00;
      ppuStack_480 = (undefined **)0xc2000000;
      pcStack_478 = FUN_10723918c;
      pcStack_470 = (code *)&UNK_110994438;
      ppuStack_440 = &puStack_438;
      ppuStack_430 = &puStack_438;
      _objc_retain(param_3);
      ppuStack_468 = param_3;
      _objc_retain(ppuVar17);
      ppuStack_460 = ppuVar17;
      _objc_retain(ppuVar23);
      ppuStack_458 = ppuVar23;
      _objc_retain(ppuStack_388);
      ppuStack_450 = ppuStack_388;
      _objc_retain(ppuStack_380);
      ppuStack_448 = ppuStack_380;
      puStack_4d8 = puVar20;
      ppuStack_4d0 = (undefined **)0xc2000000;
      pcStack_4c8 = FUN_10723954c;
      puStack_4c0 = &UNK_110994468;
      ppuStack_490 = &puStack_438;
      _objc_retain(param_3);
      ppuStack_4b8 = param_3;
      _objc_retain(ppuVar17);
      ppuStack_4b0 = ppuVar17;
      _objc_retain(ppuVar23);
      ppuStack_4a8 = ppuVar23;
      _objc_retain(ppuStack_388);
      ppuStack_4a0 = ppuStack_388;
      _objc_retain(ppuStack_380);
      ppuStack_498 = ppuStack_380;
      puStack_528 = puVar20;
      uStack_520 = 0xc2000000;
      uStack_518 = 0x107239594;
      puStack_510 = &UNK_110994498;
      ppuStack_4e0 = &puStack_438;
      _objc_retain(param_3);
      ppuStack_508 = param_3;
      _objc_retain(ppuVar17);
      ppuStack_500 = ppuVar17;
      _objc_retain(ppuVar23);
      ppuStack_4f8 = ppuVar23;
      _objc_retain(ppuStack_388);
      ppuStack_4f0 = ppuStack_388;
      _objc_retain(ppuStack_380);
      ppuStack_4e8 = ppuStack_380;
      puStack_578 = puVar20;
      uStack_570 = 0xc2000000;
      pcStack_568 = (code *)0x1072395dc;
      puStack_560 = &UNK_1109944c8;
      ppuStack_530 = &puStack_438;
      _objc_retain(param_3);
      ppuStack_558 = param_3;
      _objc_retain(ppuVar17);
      ppuStack_550 = ppuVar17;
      _objc_retain(ppuVar23);
      ppuStack_548 = ppuVar23;
      _objc_retain(ppuStack_388);
      ppuStack_540 = ppuStack_388;
      _objc_retain(ppuStack_380);
      ppuStack_538 = ppuStack_380;
      puStack_5c8 = puVar20;
      ppuStack_5c0 = (undefined **)0xc2000000;
      uStack_5b8 = 0x107239624;
      pcStack_5b0 = (code *)&UNK_1109944f8;
      ppuStack_580 = &puStack_438;
      _objc_retain(param_3);
      ppuStack_5a8 = param_3;
      _objc_retain(ppuVar17);
      ppuStack_5a0 = ppuVar17;
      _objc_retain(ppuVar23);
      ppuStack_598 = ppuVar23;
      _objc_retain(ppuStack_388);
      ppuStack_590 = ppuStack_388;
      _objc_retain(ppuStack_380);
      ppuStack_588 = ppuStack_380;
      _objc_retain(param_3);
      _objc_retain(ppuVar17);
      _objc_retain(ppuVar23);
      _objc_retain(ppuStack_388);
      _objc_retain(ppuStack_380);
      _objc_retain(param_3);
      _objc_retain(ppuVar17);
      _objc_retain(ppuVar23);
      _objc_retain(ppuStack_388);
      _objc_retain(ppuStack_380);
      _objc_retain(param_3);
      _objc_retain(ppuVar17);
      _objc_retain(ppuVar23);
      _objc_retain(ppuStack_388);
      _objc_retain(ppuStack_380);
      func_0x00010c0bdf40(ppuVar4);
      puVar26 = ppuStack_430[5];
      _objc_retain(puVar26);
      _objc_release(ppuStack_380);
      _objc_release(ppuStack_388);
      _objc_release(ppuVar23);
      _objc_release(ppuVar17);
      _objc_release(param_3);
      _objc_release(ppuStack_380);
      _objc_release(ppuStack_388);
      _objc_release(ppuVar23);
      _objc_release(ppuVar17);
      _objc_release(param_3);
      _objc_release(ppuStack_380);
      _objc_release(ppuStack_388);
      _objc_release(ppuVar23);
      _objc_release(ppuVar17);
      _objc_release(param_3);
      _objc_release(ppuStack_588);
      _objc_release(ppuStack_590);
      _objc_release(ppuStack_598);
      _objc_release(ppuStack_5a0);
      _objc_release(ppuStack_5a8);
      _objc_release(ppuStack_538);
      _objc_release(ppuStack_540);
      _objc_release(ppuStack_548);
      _objc_release(ppuStack_550);
      _objc_release(ppuStack_558);
      _objc_release(ppuStack_4e8);
      _objc_release(ppuStack_4f0);
      _objc_release(ppuStack_4f8);
      _objc_release(ppuStack_500);
      _objc_release(ppuStack_508);
      _objc_release(ppuStack_498);
      _objc_release(ppuStack_4a0);
      _objc_release(ppuStack_4a8);
      _objc_release(ppuStack_4b0);
      _objc_release(ppuStack_4b8);
      _objc_release(ppuStack_448);
      _objc_release(ppuStack_450);
      _objc_release(ppuStack_458);
      _objc_release(ppuStack_460);
      _objc_release(ppuStack_468);
      __Block_object_dispose(&puStack_438,8);
      _objc_release(ppuStack_410);
    }
    _objc_release(ppuStack_380);
    _objc_release(ppuStack_388);
    _objc_release(ppuVar17);
    _objc_release(ppuVar23);
    _objc_release(ppuVar4);
    _objc_release(param_3);
    puVar20 = puVar26;
    func_0x00010bf529e0();
    if (puVar20 != (undefined *)0x0) {
      func_0x00010bef7f60(puVar3);
    }
    ppuVar6 = param_3;
    func_0x00010bfa0a00();
    if (ppuVar6 == (undefined **)0x0) {
      ppuVar6 = ppuVar4;
      func_0x0001085376b8();
      if (((int)ppuVar6 != 0) &&
         (ppuVar6 = ppuVar4, func_0x0001085381ac(), ppuVar6 != (undefined **)0x0)) {
        ppuVar6 = param_3;
        func_0x00010c25a280();
        _objc_retainAutoreleasedReturnValue();
        if ((ppuVar6 == (undefined **)0x0) ||
           ((((undefined *)0x13 < (undefined *)((long)param_8 + -0x54) ||
             ((1L << ((ulong)((long)param_8 + -0x54) & 0x3f) & 0x80021U) == 0)) &&
            (param_8 != (undefined **)0x7)))) {
          _objc_release();
          if (param_8 == (undefined **)0x34) goto LAB_107235abc;
          _objc_retain(puVar3);
          _objc_retain(ppuVar4);
          _objc_retain(puStack_390);
          _objc_retain(ppuVar24);
          _objc_retain(uStack_378);
          _objc_retain(uStack_360);
          ppuVar6 = ppuVar4;
          func_0x0001085379d8();
          iVar1 = (int)ppuVar6;
          ppuVar6 = ppuVar4;
          func_0x000108539290();
          if ((int)ppuVar6 == 0) {
            iVar2 = 0;
          }
          else {
            puVar20 = PTR_PTR_1126c11f8;
            func_0x00010c24c820(PTR_PTR_1126c11f8);
            _objc_retainAutoreleasedReturnValue();
            uVar16 = uStack_378;
            func_0x00010bf1f320();
            iVar2 = (int)uVar16;
            if (iVar2 != 0) {
              puVar9 = PTR_PTR_1126ce808;
              func_0x00010c29d3a0();
              _objc_release(puVar20);
              if ((int)puVar9 == 0) {
                iVar2 = 0;
                goto LAB_1072356d0;
              }
              puVar9 = puStack_390;
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              func_0x0001085381ac(ppuVar4);
              puVar20 = puVar9;
              func_0x00010c25bac0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar9);
              if (puVar20 != (undefined *)0x0) {
                puVar9 = puVar20;
                func_0x00010c080120();
                iVar1 = (int)puVar9;
              }
            }
            _objc_release(puVar20);
          }
LAB_1072356d0:
          puVar20 = PTR_PTR_1126d5298;
          _objc_alloc(PTR_PTR_1126d5298);
          func_0x0001085381ac(ppuVar4);
          ppuVar6 = ppuVar4;
          func_0x000108535ec8(ppuVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c04d5c0(puVar20);
          _objc_release(uStack_360);
          _objc_release(ppuVar6);
          puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR_PTR_1126b2d20;
          func_0x00010c25acc0(PTR_PTR_1126b2d20);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(puVar7);
          _objc_release(puVar9);
          func_0x00010c1d0640(puVar3);
          func_0x00010c1d0640(puVar3);
          puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(puVar9);
          func_0x00010c1d0640(puVar3);
          if ((iVar2 == 0) || (iVar1 == 0)) {
            if (iVar1 == 0) {
              ppuVar6 = ppuVar4;
              func_0x000108538a18();
              if (((ulong)ppuVar6 & 1) == 0) {
                func_0x00010c1d0640(puVar3);
                puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x000108f4816c(ppuVar24,1);
                func_0x00010c0df780(puVar9);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puVar3);
                _objc_release(puVar9);
                func_0x00010c1d0640(puVar3);
                func_0x00010c1d0640(puVar3);
                puVar7 = PTR_PTR_1126d52a0;
                puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                puVar8 = PTR__OBJC_CLASS___UIScreen_1126aea10;
                func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf20c00();
                func_0x00010c2bea80(puVar7);
                func_0x00010c0df720(puVar9);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puVar3);
                _objc_release(puVar9);
                _objc_release(puVar8);
                func_0x00010c1d0640(puVar3);
              }
            }
            else {
              func_0x00010c1d0640(puVar3);
              puVar9 = PTR_PTR_1126d52a8;
              _objc_alloc(PTR_PTR_1126d52a8);
              func_0x0001085381ac(ppuVar4);
              func_0x00010c04d5a0(puVar9);
              func_0x00010c1d0640(puVar3);
              _objc_release(puVar9);
              func_0x00010c1d0640(puVar3);
              puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
              func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar3);
              _objc_release(puVar9);
            }
          }
          else {
            func_0x00010c1d0640(puVar3);
            func_0x00010c1d0640(puVar3);
            func_0x00010c1d0640(puVar3);
          }
          _objc_release(puVar20);
          _objc_release(uStack_378);
          _objc_release(ppuVar24);
          _objc_release(puStack_390);
          _objc_release(ppuVar4);
        }
        _objc_release();
      }
LAB_107235abc:
      ppuVar6 = param_3;
      func_0x00010c25a280();
      _objc_retainAutoreleasedReturnValue();
      if ((ppuVar6 == (undefined **)0x0) ||
         ((((undefined *)0x13 < (undefined *)((long)param_8 + -0x54) ||
           ((1L << ((ulong)((long)param_8 + -0x54) & 0x3f) & 0x80021U) == 0)) &&
          (param_8 != (undefined **)0x7)))) {
        _objc_release();
        _objc_retain(param_3);
        _objc_retain(ppuVar22);
        _objc_retain(ppuVar24);
        _objc_retain(ppuVar4);
        _objc_retain(puVar3);
        if ((bStack_358 & 1) == 0) {
          func_0x000108538878();
        }
        else {
          func_0x00010853a0e0();
        }
        func_0x000108538ba0(ppuVar4);
        _objc_release(ppuVar4);
        if ((ppuVar22 != (undefined **)0x0) &&
           (((ppuVar6 = ppuVar22, func_0x00010c27dd80(), ppuVar6 == (undefined **)0x6 ||
             (ppuVar6 = ppuVar22, func_0x00010c27dd80(), ppuVar6 == (undefined **)0x7)) &&
            (ppuVar6 = ppuVar22, func_0x00010c27dd80(), ppuVar6 == (undefined **)0x7)))) {
          func_0x000108060950(ppuVar24);
        }
        puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(puVar20);
        puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR_PTR_1126b2d20;
        func_0x00010beeebc0(PTR_PTR_1126b2d20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(puVar9);
        _objc_release(puVar20);
        puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(puVar3);
        _objc_release(puVar20);
        _objc_release(ppuVar24);
        _objc_release(ppuVar22);
      }
      _objc_release();
    }
    puVar20 = puVar3;
    func_0x00010bf51e00(puVar3);
    _objc_release(puVar26);
    _objc_release(ppuVar5);
    _objc_release(ppuStack_768);
    _objc_release(puVar3);
  }
  _objc_release(puVar25);
  _objc_release(uStack_360);
  _objc_release(ppuStack_368);
  _objc_release(lStack_370);
  _objc_release(uStack_378);
  _objc_release(ppuStack_380);
  _objc_release(ppuStack_388);
  _objc_release(puStack_390);
  _objc_release(ppuVar24);
  _objc_release(ppuVar17);
  _objc_release(ppuVar23);
  _objc_release(ppuVar22);
  _objc_release(ppuVar4);
  _objc_release(ppuVar21);
  _objc_release(param_3);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
  return;
}



/* Entry: 107234304; end: 107235dcb;  */

void FUN_107234304(undefined **param_1,undefined **param_2,ulong param_3,undefined **param_4,
                  undefined **param_5,undefined **param_6,undefined **param_7,undefined **param_8,
                  undefined *param_9,undefined **param_10,undefined **param_11,ulong param_12,
                  long param_13,undefined **param_14,undefined8 param_15,byte param_16)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuStack_3d8;
  undefined *puStack_238;
  undefined **ppuStack_230;
  undefined8 uStack_228;
  code *pcStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined *puStack_148;
  undefined **ppuStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined *puStack_f8;
  undefined **ppuStack_f0;
  code *pcStack_e8;
  code *pcStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  code *pcStack_98;
  code *pcStack_90;
  ulong uStack_88;
  undefined **ppuStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_14);
  puVar10 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_238 = (undefined *)0x0;
  uStack_228 = 0x3032000000;
  pcStack_220 = FUN_10723313c;
  ppuStack_218 = (undefined **)0x10723314c;
  ppuStack_210 = (undefined **)0x0;
  puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
  ppuStack_f0 = (undefined **)0xc2000000;
  pcStack_e8 = FUN_1072383e4;
  pcStack_e0 = (code *)&UNK_110994348;
  ppuStack_230 = &puStack_238;
  _objc_retain(param_4);
  ppuStack_d8 = param_4;
  _objc_retain(param_1);
  ppuStack_d0 = param_1;
  _objc_retain(param_11);
  ppuStack_c8 = param_11;
  _objc_retain(param_2);
  puStack_148 = puVar10;
  ppuStack_140 = (undefined **)0xc2000000;
  pcStack_138 = FUN_1072387b8;
  puStack_130 = &UNK_110994378;
  ppuStack_c0 = param_2;
  ppuStack_b8 = &puStack_238;
  _objc_retain(param_4);
  ppuStack_128 = param_4;
  _objc_retain(param_14);
  ppuStack_120 = param_14;
  ppuStack_110 = &puStack_238;
  _objc_retain(param_1);
  puStack_198 = puVar10;
  uStack_190 = 0xc2000000;
  uStack_188 = 0x1072388b0;
  puStack_180 = &UNK_110991ed8;
  ppuStack_160 = param_8;
  ppuStack_118 = param_1;
  _objc_retain(param_1);
  ppuStack_178 = param_1;
  _objc_retain(param_7);
  ppuStack_170 = param_7;
  ppuStack_168 = &puStack_238;
  _objc_retain(param_1);
  _objc_retain(param_1);
  _objc_retain(param_1);
  puStack_a8 = puVar10;
  ppuStack_a0 = (undefined **)0xc2000000;
  pcStack_98 = FUN_107238e54;
  pcStack_90 = (code *)&UNK_110994408;
  _objc_retain(param_12);
  uStack_88 = param_12;
  puStack_1e8 = puVar10;
  uStack_1e0 = 0xc2000000;
  pcStack_1d8 = FUN_1072390b0;
  puStack_1d0 = &UNK_1109946f8;
  ppuStack_80 = &puStack_238;
  _objc_retain(param_1);
  ppuStack_1c8 = param_1;
  _objc_retain(param_11);
  ppuStack_1c0 = param_11;
  ppuStack_1b8 = &puStack_238;
  func_0x00010c0bdf40(param_3);
  puVar15 = ppuStack_230[5];
  _objc_retain(puVar15);
  _objc_release(ppuStack_1c0);
  _objc_release(ppuStack_1c8);
  _objc_release(uStack_88);
  _objc_release(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  _objc_release(ppuStack_170);
  _objc_release(ppuStack_178);
  _objc_release(ppuStack_118);
  _objc_release(ppuStack_120);
  _objc_release(ppuStack_128);
  _objc_release(ppuStack_c0);
  _objc_release(ppuStack_c8);
  _objc_release(ppuStack_d0);
  _objc_release(ppuStack_d8);
  __Block_object_dispose(&puStack_238,8);
  _objc_release(ppuStack_210);
  _objc_release(param_14);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  puVar10 = puVar15;
  func_0x00010bf529e0();
  if (puVar10 == (undefined *)0x0) {
    _objc_retain(param_1);
    uVar3 = param_12;
    func_0x000108535744(param_12,param_8);
    ppuVar4 = param_1;
    func_0x00010853a5d4();
    _objc_release(param_1);
    puVar10 = PTR____NSDictionary0__struct_11034ab58;
    if (((int)uVar3 == 0) || ((int)ppuVar4 == 0)) goto LAB_107235cf0;
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar10 = puVar5;
  func_0x00010bef7f60();
  func_0x000107d2668c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar5);
  _objc_release(puVar10);
  uVar6 = 0;
  func_0x000107d265e4(0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar5);
  _objc_release(uVar6);
  puVar10 = PTR_PTR_1126b12d0;
  func_0x00010c12f540(PTR_PTR_1126b12d0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_12;
  func_0x00010bf1f320();
  _objc_release(puVar10);
  ppuStack_3d8 = param_1;
  func_0x000107d25090(param_1,param_2,param_4,param_6,0,param_10,param_11,param_7,uVar3 & 0xff,
                      param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = param_1;
  func_0x00010c24a0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126c50b0;
  if (ppuVar4 == (undefined **)0x0) {
    puVar10 = PTR_PTR_1126c3320;
    func_0x00010c0729e0();
    if ((int)puVar10 != 0) goto LAB_107234a5c;
LAB_107234a78:
    ppuVar7 = param_1;
    func_0x00010853a704();
    if ((int)ppuVar7 == 0) {
      if ((param_8 == (undefined **)0x7) && (param_16 != 0)) {
        ppuVar7 = param_1;
        func_0x00010853a0e0();
        if (((ulong)ppuVar7 & 1) == 0) {
          func_0x000108f5992c();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x000108f59914();
          _objc_retainAutoreleasedReturnValue();
        }
        ppuVar11 = ppuStack_3d8;
        func_0x00010c08fa60();
        ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (ppuVar11 == (undefined **)0x0) {
          _objc_retain(ppuVar7);
          ppuVar8 = ppuVar7;
        }
        else {
          func_0x000108f59944();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuStack_3d8);
          ppuStack_3d8 = ppuVar11;
        }
        _objc_release(ppuStack_3d8);
        _objc_release(ppuVar7);
        ppuStack_3d8 = ppuVar8;
      }
      func_0x00010c1d0640(puVar5);
      uVar6 = 0;
      func_0x000107d26654(0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5);
      _objc_release(uVar6);
    }
    else {
      ppuStack_140 = &puStack_148;
      puStack_148 = (undefined *)0x0;
      pcStack_138 = (code *)0x2020000000;
      puStack_130 = (undefined *)0x0;
      ppuStack_f0 = &puStack_f8;
      puStack_f8 = (undefined *)0x0;
      pcStack_e8 = (code *)0x3032000000;
      pcStack_e0 = FUN_10723313c;
      ppuStack_d8 = (undefined **)0x10723314c;
      ppuStack_d0 = (undefined **)0x0;
      _objc_retain(ppuStack_3d8);
      func_0x00010c0bdf40(param_3);
      puVar10 = ppuStack_f0[5];
      func_0x00010c08fa60();
      if (puVar10 != (undefined *)0x0) {
        puVar10 = ppuStack_f0[5];
        func_0x000107d264a0(puVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar5);
        _objc_release(puVar10);
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar5);
        _objc_release(puVar10);
      }
      _objc_release(ppuStack_3d8);
      __Block_object_dispose(&puStack_f8,8);
      _objc_release(ppuStack_d0);
      __Block_object_dispose(&puStack_148,8);
    }
  }
  else {
    ppuVar7 = ppuVar4;
    func_0x00010c116a20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar4;
    func_0x00010bf85d80(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24a0e0(ppuVar4);
    func_0x00010c232640();
    _objc_release(ppuVar8);
    _objc_release(ppuVar7);
    puVar16 = PTR_PTR_1126c3320;
    func_0x00010c0729e0();
    if (((ulong)puVar16 & 1) == 0) {
      if ((int)puVar10 == 0) goto LAB_107234a78;
      func_0x00010c1d0640(puVar5);
      puVar10 = PTR_PTR_1126c50b0;
      ppuVar7 = ppuVar4;
      func_0x00010bf85d80(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfca940(puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5);
      _objc_release(puVar10);
      _objc_release(ppuVar7);
      ppuVar7 = ppuVar4;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar7;
      func_0x00010c08fa60();
      _objc_release(ppuVar7);
      if (ppuVar8 != (undefined **)0x0) {
        ppuVar7 = ppuVar4;
        func_0x00010bf85d80(ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar5);
        _objc_release(ppuVar7);
      }
    }
    else {
LAB_107234a5c:
      lVar9 = param_13;
      func_0x00010c08fa60();
      if (lVar9 == 0) {
        func_0x000108f598b4();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(param_13);
        lVar9 = param_13;
      }
      func_0x00010c1d0640(puVar5);
      func_0x00010c1d0640(puVar5);
      func_0x00010c1d0640(puVar5);
      func_0x00010c1d0640(puVar5);
      uVar6 = 0;
      func_0x000107d26654(0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5);
      _objc_release(uVar6);
      puVar10 = PTR_PTR_1126b0c40;
      puVar16 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe7aa0(0x4028000000000000,0x4028000000000000,puVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar16);
      func_0x00010c1d0640(puVar5);
      ppuVar7 = param_1;
      func_0x00010bfa0a00();
      if (0 < (long)ppuVar7) {
        func_0x00010c1d0640(puVar5);
      }
      _objc_release(puVar10);
      _objc_release(lVar9);
    }
  }
  func_0x00010c1d0640(puVar5);
  uVar6 = 0;
  func_0x000107d2661c(0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar5);
  _objc_release(uVar6);
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar5);
  _objc_release(puVar10);
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar5);
  _objc_release(puVar10);
  func_0x00010c1d0640(puVar5);
  func_0x00010c1d0640(puVar5);
  if (param_4 != (undefined **)0x0) {
    uVar6 = 0;
    func_0x000107d26654(0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = param_4;
    func_0x000107d2669c(param_4,uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    if (ppuVar7 != (undefined **)0x0) {
      func_0x00010c1d0640(puVar5);
    }
    _objc_release(ppuVar7);
  }
  _objc_retain(param_1);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puVar10 = PTR___NSConcreteStackBlock_11034bd00;
  puVar16 = PTR____NSDictionary0__struct_11034ab58;
  if (param_5 != (undefined **)0x0) {
    puStack_a8 = (undefined *)0x0;
    pcStack_98 = (code *)0x3032000000;
    pcStack_90 = FUN_10723313c;
    uStack_88 = 0x10723314c;
    ppuStack_80 = (undefined **)0x0;
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    ppuStack_f0 = (undefined **)0xc2000000;
    pcStack_e8 = FUN_10723918c;
    pcStack_e0 = (code *)&UNK_110994438;
    ppuStack_b0 = &puStack_a8;
    ppuStack_a0 = &puStack_a8;
    _objc_retain(param_1);
    ppuStack_d8 = param_1;
    _objc_retain(param_6);
    ppuStack_d0 = param_6;
    _objc_retain(param_5);
    ppuStack_c8 = param_5;
    _objc_retain(param_10);
    ppuStack_c0 = param_10;
    _objc_retain(param_11);
    ppuStack_b8 = param_11;
    puStack_148 = puVar10;
    ppuStack_140 = (undefined **)0xc2000000;
    pcStack_138 = FUN_10723954c;
    puStack_130 = &UNK_110994468;
    ppuStack_100 = &puStack_a8;
    _objc_retain(param_1);
    ppuStack_128 = param_1;
    _objc_retain(param_6);
    ppuStack_120 = param_6;
    _objc_retain(param_5);
    ppuStack_118 = param_5;
    _objc_retain(param_10);
    ppuStack_110 = param_10;
    _objc_retain(param_11);
    ppuStack_108 = param_11;
    puStack_198 = puVar10;
    uStack_190 = 0xc2000000;
    uStack_188 = 0x107239594;
    puStack_180 = &UNK_110994498;
    ppuStack_150 = &puStack_a8;
    _objc_retain(param_1);
    ppuStack_178 = param_1;
    _objc_retain(param_6);
    ppuStack_170 = param_6;
    _objc_retain(param_5);
    ppuStack_168 = param_5;
    _objc_retain(param_10);
    ppuStack_160 = param_10;
    _objc_retain(param_11);
    ppuStack_158 = param_11;
    puStack_1e8 = puVar10;
    uStack_1e0 = 0xc2000000;
    pcStack_1d8 = (code *)0x1072395dc;
    puStack_1d0 = &UNK_1109944c8;
    ppuStack_1a0 = &puStack_a8;
    _objc_retain(param_1);
    ppuStack_1c8 = param_1;
    _objc_retain(param_6);
    ppuStack_1c0 = param_6;
    _objc_retain(param_5);
    ppuStack_1b8 = param_5;
    _objc_retain(param_10);
    ppuStack_1b0 = param_10;
    _objc_retain(param_11);
    ppuStack_1a8 = param_11;
    puStack_238 = puVar10;
    ppuStack_230 = (undefined **)0xc2000000;
    uStack_228 = 0x107239624;
    pcStack_220 = (code *)&UNK_1109944f8;
    ppuStack_1f0 = &puStack_a8;
    _objc_retain(param_1);
    ppuStack_218 = param_1;
    _objc_retain(param_6);
    ppuStack_210 = param_6;
    _objc_retain(param_5);
    ppuStack_208 = param_5;
    _objc_retain(param_10);
    ppuStack_200 = param_10;
    _objc_retain(param_11);
    ppuStack_1f8 = param_11;
    _objc_retain(param_1);
    _objc_retain(param_6);
    _objc_retain(param_5);
    _objc_retain(param_10);
    _objc_retain(param_11);
    _objc_retain(param_1);
    _objc_retain(param_6);
    _objc_retain(param_5);
    _objc_retain(param_10);
    _objc_retain(param_11);
    _objc_retain(param_1);
    _objc_retain(param_6);
    _objc_retain(param_5);
    _objc_retain(param_10);
    _objc_retain(param_11);
    func_0x00010c0bdf40(param_3);
    puVar16 = ppuStack_a0[5];
    _objc_retain(puVar16);
    _objc_release(param_11);
    _objc_release(param_10);
    _objc_release(param_5);
    _objc_release(param_6);
    _objc_release(param_1);
    _objc_release(param_11);
    _objc_release(param_10);
    _objc_release(param_5);
    _objc_release(param_6);
    _objc_release(param_1);
    _objc_release(param_11);
    _objc_release(param_10);
    _objc_release(param_5);
    _objc_release(param_6);
    _objc_release(param_1);
    _objc_release(ppuStack_1f8);
    _objc_release(ppuStack_200);
    _objc_release(ppuStack_208);
    _objc_release(ppuStack_210);
    _objc_release(ppuStack_218);
    _objc_release(ppuStack_1a8);
    _objc_release(ppuStack_1b0);
    _objc_release(ppuStack_1b8);
    _objc_release(ppuStack_1c0);
    _objc_release(ppuStack_1c8);
    _objc_release(ppuStack_158);
    _objc_release(ppuStack_160);
    _objc_release(ppuStack_168);
    _objc_release(ppuStack_170);
    _objc_release(ppuStack_178);
    _objc_release(ppuStack_108);
    _objc_release(ppuStack_110);
    _objc_release(ppuStack_118);
    _objc_release(ppuStack_120);
    _objc_release(ppuStack_128);
    _objc_release(ppuStack_b8);
    _objc_release(ppuStack_c0);
    _objc_release(ppuStack_c8);
    _objc_release(ppuStack_d0);
    _objc_release(ppuStack_d8);
    __Block_object_dispose(&puStack_a8,8);
    _objc_release(ppuStack_80);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_1);
  puVar10 = puVar16;
  func_0x00010bf529e0();
  if (puVar10 != (undefined *)0x0) {
    func_0x00010bef7f60(puVar5);
  }
  ppuVar7 = param_1;
  func_0x00010bfa0a00();
  if (ppuVar7 == (undefined **)0x0) {
    uVar3 = param_3;
    func_0x0001085376b8();
    if (((int)uVar3 != 0) && (uVar3 = param_3, func_0x0001085381ac(), uVar3 != 0)) {
      ppuVar7 = param_1;
      func_0x00010c25a280();
      _objc_retainAutoreleasedReturnValue();
      if ((ppuVar7 == (undefined **)0x0) ||
         ((((undefined *)0x13 < (undefined *)((long)param_8 + -0x54) ||
           ((1L << ((ulong)((long)param_8 + -0x54) & 0x3f) & 0x80021U) == 0)) &&
          (param_8 != (undefined **)0x7)))) {
        _objc_release();
        if (param_8 == (undefined **)0x34) goto LAB_107235abc;
        _objc_retain(puVar5);
        _objc_retain(param_3);
        _objc_retain(param_9);
        _objc_retain(param_7);
        _objc_retain(param_12);
        _objc_retain(param_15);
        uVar3 = param_3;
        func_0x0001085379d8();
        iVar1 = (int)uVar3;
        uVar3 = param_3;
        func_0x000108539290();
        if ((int)uVar3 == 0) {
          iVar2 = 0;
        }
        else {
          puVar10 = PTR_PTR_1126c11f8;
          func_0x00010c24c820(PTR_PTR_1126c11f8);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = param_12;
          func_0x00010bf1f320();
          iVar2 = (int)uVar3;
          if (iVar2 != 0) {
            puVar12 = PTR_PTR_1126ce808;
            func_0x00010c29d3a0();
            _objc_release(puVar10);
            if ((int)puVar12 == 0) {
              iVar2 = 0;
              goto LAB_1072356d0;
            }
            puVar12 = param_9;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x0001085381ac(param_3);
            puVar10 = puVar12;
            func_0x00010c25bac0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar12);
            if (puVar10 != (undefined *)0x0) {
              puVar12 = puVar10;
              func_0x00010c080120();
              iVar1 = (int)puVar12;
            }
          }
          _objc_release(puVar10);
        }
LAB_1072356d0:
        puVar10 = PTR_PTR_1126d5298;
        _objc_alloc(PTR_PTR_1126d5298);
        func_0x0001085381ac(param_3);
        uVar3 = param_3;
        func_0x000108535ec8(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04d5c0(puVar10);
        _objc_release(param_15);
        _objc_release(uVar3);
        puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR_PTR_1126b2d20;
        func_0x00010c25acc0(PTR_PTR_1126b2d20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar5);
        _objc_release(puVar13);
        _objc_release(puVar12);
        func_0x00010c1d0640(puVar5);
        func_0x00010c1d0640(puVar5);
        puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar5);
        _objc_release(puVar12);
        func_0x00010c1d0640(puVar5);
        if ((iVar2 == 0) || (iVar1 == 0)) {
          if (iVar1 == 0) {
            uVar3 = param_3;
            func_0x000108538a18();
            if ((uVar3 & 1) == 0) {
              func_0x00010c1d0640(puVar5);
              puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x000108f4816c(param_7,1);
              func_0x00010c0df780(puVar12);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar5);
              _objc_release(puVar12);
              func_0x00010c1d0640(puVar5);
              func_0x00010c1d0640(puVar5);
              puVar13 = PTR_PTR_1126d52a0;
              puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              puVar14 = PTR__OBJC_CLASS___UIScreen_1126aea10;
              func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf20c00();
              func_0x00010c2bea80(puVar13);
              func_0x00010c0df720(puVar12);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar5);
              _objc_release(puVar12);
              _objc_release(puVar14);
              func_0x00010c1d0640(puVar5);
            }
          }
          else {
            func_0x00010c1d0640(puVar5);
            puVar12 = PTR_PTR_1126d52a8;
            _objc_alloc(PTR_PTR_1126d52a8);
            func_0x0001085381ac(param_3);
            func_0x00010c04d5a0(puVar12);
            func_0x00010c1d0640(puVar5);
            _objc_release(puVar12);
            func_0x00010c1d0640(puVar5);
            puVar12 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar5);
            _objc_release(puVar12);
          }
        }
        else {
          func_0x00010c1d0640(puVar5);
          func_0x00010c1d0640(puVar5);
          func_0x00010c1d0640(puVar5);
        }
        _objc_release(puVar10);
        _objc_release(param_12);
        _objc_release(param_7);
        _objc_release(param_9);
        _objc_release(param_3);
      }
      _objc_release();
    }
LAB_107235abc:
    ppuVar7 = param_1;
    func_0x00010c25a280();
    _objc_retainAutoreleasedReturnValue();
    if ((ppuVar7 == (undefined **)0x0) ||
       ((((undefined *)0x13 < (undefined *)((long)param_8 + -0x54) ||
         ((1L << ((ulong)((long)param_8 + -0x54) & 0x3f) & 0x80021U) == 0)) &&
        (param_8 != (undefined **)0x7)))) {
      _objc_release();
      _objc_retain(param_1);
      _objc_retain(param_4);
      _objc_retain(param_7);
      _objc_retain(param_3);
      _objc_retain(puVar5);
      if ((param_16 & 1) == 0) {
        func_0x000108538878();
      }
      else {
        func_0x00010853a0e0();
      }
      func_0x000108538ba0(param_3);
      _objc_release(param_3);
      if ((param_4 != (undefined **)0x0) &&
         (((ppuVar7 = param_4, func_0x00010c27dd80(), ppuVar7 == (undefined **)0x6 ||
           (ppuVar7 = param_4, func_0x00010c27dd80(), ppuVar7 == (undefined **)0x7)) &&
          (ppuVar7 = param_4, func_0x00010c27dd80(), ppuVar7 == (undefined **)0x7)))) {
        func_0x000108060950(param_7);
      }
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5);
      _objc_release(puVar10);
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR_PTR_1126b2d20;
      func_0x00010beeebc0(PTR_PTR_1126b2d20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5);
      _objc_release(puVar12);
      _objc_release(puVar10);
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5);
      _objc_release(puVar5);
      _objc_release(puVar10);
      _objc_release(param_7);
      _objc_release(param_4);
    }
    _objc_release();
  }
  puVar10 = puVar5;
  func_0x00010bf51e00(puVar5);
  _objc_release(puVar16);
  _objc_release(ppuVar4);
  _objc_release(ppuStack_3d8);
  _objc_release(puVar5);
LAB_107235cf0:
  _objc_release(puVar15);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 107235dcc; end: 107235efb; +[SCStoriesOperaSnapPagePropertyParser _pagePropertiesForResponsiveOverride] */

void FUN_107235dcc(double param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126caf60;
  _objc_opt_new(PTR_PTR_1126caf60);
  func_0x00010c2b25c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetHeight();
  dVar6 = param_1;
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  _objc_release(puVar5);
  bVar1 = false;
  bVar2 = false;
  if (param_1 < 1024.0) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(dVar6)) {
      bVar1 = dVar6 < 1024.0;
      bVar2 = false;
    }
  }
  if (bVar1 == bVar2) {
    func_0x00010c2b3720(0,puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b3660(0,puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar5 = puVar4;
  func_0x00010bf21f60(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3,param_3,puVar5,&PTR____CFConstantStringClassReference_110f0e978);
  _objc_release(puVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107235efc; end: 107235fbb; +[SCStoriesOperaSnapPagePropertyParser _pagePropertiesForVideoStorySnap:] */

void FUN_107235efc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c26f2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c071060();
  _objc_release(uVar3);
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110caac8;
  if ((int)uVar4 == 0) {
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110caae0;
  }
  func_0x00010c1d0640(puVar2,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110f0c258);
  uVar3 = param_3;
  func_0x00010c0c5340(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107235fbc; end: 1072360e7; +[SCStoriesOperaSnapPagePropertyParser _pagePropertiesForSpectaclesStorySnap:] */

undefined *
FUN_107235fbc(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,ulong param_7,undefined8 param_8)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined ***pppuVar14;
  long lVar15;
  uint uVar16;
  undefined8 unaff_x22;
  undefined **ppuVar17;
  undefined8 uVar18;
  undefined8 uStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  undefined1 uStack_238;
  undefined **ppuStack_230;
  long lStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined1 **ppuStack_210;
  code *pcStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  uint uStack_1c4;
  undefined **ppuStack_1c0;
  undefined ***pppuStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined **ppuStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined **ppuStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined **ppuStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c27dd80();
  if ((0x1a < uVar3 || (1L << (uVar3 & 0x3f) & 0x7e7fc60U) == 0) ||
     (func_0x000108544644(), 1 < (int)uVar3 - 0xbU)) {
    func_0x00010c141c40(param_3);
  }
  _objc_release(uVar2);
  ppuStack_48 = &PTR____CFConstantStringClassReference_110f0c0f8;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = &puStack_40;
  pppuVar14 = &ppuStack_48;
  lVar15 = 1;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_40 = puVar4;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lVar13 = lStack_38;
  ppuVar8 = ppuStack_48;
  pcStack_58 = FUN_1072360e8;
  uStack_1c4 = (uint)(byte)puStack_40;
  lStack_d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar11);
  _objc_retain(pppuVar14);
  _objc_retain(lVar15);
  uStack_1e8 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(uStack_50);
  _objc_retain(ppuVar8);
  lStack_1e0 = lVar13;
  _objc_retain(lVar13);
  uStack_1d8 = unaff_x22;
  _objc_retain(unaff_x22);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = ppuVar8;
  puStack_1b0 = puVar5;
  func_0x000108f4b3e4();
  uStack_1d0 = uStack_50;
  uVar18 = uStack_50;
  pppuStack_1b8 = pppuVar14;
  if ((int)ppuVar17 == 0) {
    ppuVar17 = ppuVar11;
    FUN_107239d54(ppuVar11,param_8,uStack_50);
    if ((int)ppuVar17 != 0) {
      func_0x00010befa120(puStack_1b0);
      puVar5 = PTR_PTR_1126b2dd8;
      _objc_alloc(PTR_PTR_1126b2dd8);
      puVar6 = puVar5;
      func_0x00010723caa8();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c056260(puVar5);
      func_0x00010befa120(puVar4);
      _objc_release(puVar5);
      _objc_release(puVar6);
    }
    ppuVar17 = ppuVar11;
    func_0x000107d28710(ppuVar11,pppuVar14,param_8,param_7);
    if (((ulong)ppuVar17 & 1) == 0) {
      _objc_retain(ppuVar11);
      uVar7 = uStack_1d8;
      func_0x000108535744(uStack_1d8,param_7);
      ppuVar17 = ppuVar11;
      func_0x00010853a5d4();
      _objc_release(ppuVar11);
      if (((int)uVar7 != 0) && ((int)ppuVar17 != 0)) goto LAB_1072363a4;
    }
    else {
LAB_1072363a4:
      uVar2 = param_7;
      FUN_107236cb4(param_7,ppuVar11);
      if ((int)uVar2 != 0) {
        func_0x00010befa120(puStack_1b0);
        puVar5 = PTR_PTR_1126b2dd8;
        _objc_alloc(PTR_PTR_1126b2dd8);
        puVar6 = puVar5;
        func_0x00010b75e404();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1072363ec;
      }
    }
  }
  else {
    ppuVar17 = ppuVar11;
    func_0x000107d28710(ppuVar11,pppuVar14,param_8,param_7);
    if (((ulong)ppuVar17 & 1) == 0) {
      _objc_retain(ppuVar11);
      uVar7 = uStack_1d8;
      func_0x000108535744(uStack_1d8,param_7);
      ppuVar17 = ppuVar11;
      func_0x00010853a5d4();
      _objc_release(ppuVar11);
      if (((int)uVar7 != 0) && ((int)ppuVar17 != 0)) goto LAB_107236224;
    }
    else {
LAB_107236224:
      uVar2 = param_7;
      FUN_107236cb4(param_7,ppuVar11);
      if ((int)uVar2 != 0) {
        func_0x00010befa120(puStack_1b0);
        puVar5 = PTR_PTR_1126b2dd8;
        _objc_alloc(PTR_PTR_1126b2dd8);
        puVar6 = puVar5;
        func_0x00010b75e404();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c056260(puVar5);
        func_0x00010befa120(puVar4);
        _objc_release(puVar5);
        _objc_release(puVar6);
      }
    }
    ppuVar17 = ppuVar11;
    FUN_107239d54(ppuVar11,param_8,uStack_50);
    if ((int)ppuVar17 != 0) {
      func_0x00010befa120(puStack_1b0);
      puVar5 = PTR_PTR_1126b2dd8;
      _objc_alloc(PTR_PTR_1126b2dd8);
      puVar6 = puVar5;
      func_0x00010723caa8();
      _objc_retainAutoreleasedReturnValue();
LAB_1072363ec:
      func_0x00010c056260(puVar5);
      func_0x00010befa120(puVar4);
      _objc_release(puVar5);
      _objc_release(puVar6);
      pppuVar14 = pppuStack_1b8;
      uVar18 = uStack_1d0;
    }
  }
  ppuVar17 = ppuVar8;
  func_0x000108f4ae38();
  if (((int)ppuVar17 != 0) &&
     ((((param_7 - 0x49 < 0x1a && ((1L << (param_7 - 0x49 & 0x3f) & 0x2020001U) != 0)) ||
       ((uVar2 = param_7 - 0x57 >> 1, (uVar2 | param_7 - 0x57 << 0x3f) < 8 &&
        ((1L << (uVar2 & 0x3f) & 0xb1U) != 0)))) || ((param_7 & 0xfffffffffffffffe) == 0x2c)))) {
    func_0x00010befa120(puStack_1b0);
  }
  ppuVar17 = ppuVar11;
  func_0x000107d2e758(ppuVar11,param_8,param_7);
  if ((int)ppuVar17 != 0) {
    func_0x00010befa120(puStack_1b0);
    puVar5 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar6 = puVar5;
    func_0x00010b75e41c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c056260(puVar5);
    func_0x00010befa120(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar6);
  }
  ppuVar17 = ppuVar11;
  func_0x000107d28d3c(ppuVar11,pppuVar14,lVar15,param_8,ppuVar8);
  if (((int)ppuVar17 != 0) && (((param_7 == 7 || (param_7 == 0x59)) || (param_7 == 0x54)))) {
    func_0x00010befa120(puStack_1b0);
    puVar5 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    ppuVar17 = &PTR____CFConstantStringClassReference_110e1edd8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1edd8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c056260(puVar5);
    func_0x00010befa120(puVar4);
    _objc_release(puVar5);
    _objc_release(ppuVar17);
  }
  ppuVar17 = ppuVar11;
  func_0x000107d2aafc(ppuVar11,pppuVar14,lVar15,param_8);
  if ((int)ppuVar17 == 0) {
LAB_10723664c:
    if ((param_7 == 0x65) || (param_7 == 0x62)) {
LAB_10723665c:
      func_0x00010befa120(puStack_1b0);
      puVar5 = PTR_PTR_1126b2dd8;
      _objc_alloc(PTR_PTR_1126b2dd8);
      puVar6 = puVar5;
      func_0x00010723c970();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c056260(puVar5);
      func_0x00010befa120(puVar4);
      _objc_release(puVar5);
      _objc_release(puVar6);
    }
  }
  else if ((long)param_7 < 0x59) {
    if ((param_7 == 7) || (param_7 == 0x54)) {
LAB_1072365e0:
      func_0x00010befa120(puStack_1b0);
      puVar5 = PTR_PTR_1126b2dd8;
      _objc_alloc(PTR_PTR_1126b2dd8);
      ppuVar17 = &PTR____CFConstantStringClassReference_110ea31b8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea31b8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c056260(puVar5);
      func_0x00010befa120(puVar4);
      _objc_release(puVar5);
      _objc_release(ppuVar17);
      goto LAB_10723664c;
    }
  }
  else {
    if ((param_7 == 0x65) || (param_7 == 0x62)) goto LAB_10723665c;
    if (param_7 == 0x59) goto LAB_1072365e0;
  }
  ppuVar17 = ppuVar11;
  func_0x000109017f30(ppuVar11,pppuVar14,param_8,uStack_1c4,ppuVar8,param_7,uVar18);
  if (ppuVar17 != (undefined **)0x0) {
    func_0x00010befa120(puStack_1b0);
    puVar5 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar6 = puVar5;
    func_0x00010723c9d0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c056260(puVar5);
    func_0x00010befa120(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar6);
  }
  puVar5 = PTR_PTR_1126d53d0;
  func_0x00010bf2d3e0();
  if (((int)puVar5 != 0) &&
     (puVar5 = PTR_PTR_1126d53d0, func_0x00010c07c600(), ((ulong)puVar5 & 1) == 0)) {
    func_0x00010befa120(puStack_1b0);
    puVar5 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar6 = puVar5;
    func_0x00010723ca00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c056260(puVar5);
    func_0x00010befa120(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar6);
  }
  _objc_retain(ppuVar11);
  _objc_retain(lVar15);
  ppuStack_1c0 = ppuVar8;
  if (lVar15 == 0) {
    bVar1 = false;
  }
  else {
    lVar13 = lVar15;
    func_0x00010c27dd80();
    bVar1 = lVar13 == 10;
  }
  uStack_140 = 0;
  uStack_130 = 0x2020000000;
  uStack_128 = 0;
  ppuVar8 = ppuVar11;
  puStack_138 = &uStack_140;
  func_0x00010bf0e700(ppuVar11);
  _objc_retainAutoreleasedReturnValue();
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  uStack_158 = 0x10723829c;
  puStack_150 = &UNK_110992258;
  ppuStack_200 = &PTR___NSConcreteGlobalBlock_110994218;
  puStack_148 = &uStack_140;
  func_0x00010c0c1320();
  _objc_release(ppuVar8);
  if (bVar1) {
    uVar16 = 1;
  }
  else {
    uVar16 = (uint)*(byte *)(puStack_138 + 3);
  }
  __Block_object_dispose(&uStack_140,8);
  _objc_release(lVar15);
  _objc_release(ppuVar11);
  ppuVar8 = ppuVar11;
  func_0x000107d295b8(ppuVar11,pppuStack_1b8,lVar15,param_8,ppuStack_1c0);
  if (((uVar16 | (uint)ppuVar8 ^ 0xffffffff) & 1) == 0) {
    puVar5 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    ppuVar8 = &PTR____CFConstantStringClassReference_110e53578;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e53578,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c056260(puVar5);
    func_0x00010befa120(puVar4);
    _objc_release(puVar5);
    _objc_release(ppuVar8);
    puVar5 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    ppuVar8 = &PTR____CFConstantStringClassReference_110e61278;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e61278,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c056260(puVar5);
    func_0x00010befa120(puVar4);
    _objc_release(puVar5);
    _objc_release(ppuVar8);
  }
  ppuStack_120 = &PTR____CFConstantStringClassReference_110f0bcf8;
  ppuStack_118 = &PTR____CFConstantStringClassReference_110f0dc78;
  puStack_f8 = PTR____kCFBooleanTrue_11034ab68;
  puStack_f0 = PTR____kCFBooleanTrue_11034ab68;
  puStack_e8 = puStack_1b0;
  ppuStack_110 = &PTR____CFConstantStringClassReference_110f0dd78;
  ppuStack_108 = &PTR____CFConstantStringClassReference_110f0dcb8;
  ppuVar17 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_100 = &PTR____CFConstantStringClassReference_110f0ddf8;
  puVar6 = puVar4;
  puStack_e0 = puVar5;
  func_0x00010bf51e00();
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_d8 = puVar6;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c0d3c80();
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(puVar5);
  ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf529e0(puStack_1b0);
  puVar5 = (undefined *)ppuVar8;
  func_0x00010c0df760(ppuVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar10);
  _objc_release(puVar5);
  if (uStack_1c4 != 0) {
    func_0x00010c1d0640(puVar10);
    puVar5 = PTR_PTR_1126ce808;
    func_0x00010c29d380();
    if ((int)puVar5 != 0) {
      puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1a0 = 0xc2000000;
      pcStack_198 = FUN_107236dec;
      puStack_190 = &UNK_110993f88;
      ppuVar8 = &puStack_1a8;
      _objc_retain(ppuVar11);
      uVar18 = uStack_1d0;
      ppuStack_188 = ppuVar11;
      _objc_retain(uStack_1d0);
      uStack_180 = uVar18;
      _objc_retain(puVar10);
      ppuVar17 = ppuStack_1c0;
      puStack_178 = puVar10;
      _objc_retain(ppuStack_1c0);
      ppuStack_170 = ppuVar17;
      ppuStack_200 = &PTR___NSConcreteGlobalBlock_110994058;
      ppuStack_1f8 = &PTR___NSConcreteGlobalBlock_110994078;
      func_0x00010c0bdf40(pppuStack_1b8);
      _objc_release(ppuStack_170);
      _objc_release(puStack_178);
      _objc_release(uStack_180);
      _objc_release(ppuStack_188);
    }
  }
  func_0x00010c1d0640(puVar10);
  puVar5 = puVar10;
  func_0x00010bf51e00(puVar10);
  _objc_release(puVar10);
  _objc_release(puStack_1b0);
  _objc_release(puVar4);
  _objc_release(uStack_1d8);
  _objc_release(lStack_1e0);
  _objc_release(ppuStack_1c0);
  _objc_release(uStack_1d0);
  _objc_release(param_8);
  _objc_release(uStack_1e8);
  _objc_release(lVar15);
  _objc_release(pppuStack_1b8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d0) {
    ___stack_chk_fail();
    lVar13 = 8;
    __Block_object_dispose(&uStack_140);
    ppuVar12 = ppuVar11;
    __Unwind_Resume();
    pcStack_208 = FUN_107236cb4;
    ppuStack_230 = ppuVar17;
    lStack_228 = lVar15;
    ppuStack_220 = ppuVar8;
    ppuStack_218 = ppuVar11;
    ppuStack_210 = &puStack_60;
    _objc_retain(lVar13);
    puStack_248 = &uStack_250;
    uStack_250 = 0;
    uStack_240 = 0x2020000000;
    uStack_238 = 0;
    lVar15 = lVar13;
    func_0x00010c25a280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar16 = 1;
    if ((ppuVar12 == (undefined **)0x7) && (lVar15 != 0)) {
      lVar15 = lVar13;
      func_0x00010bf0e700(lVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c1320();
      _objc_release(lVar15);
      uVar16 = (uint)*(byte *)(puStack_248 + 3);
    }
    __Block_object_dispose(&uStack_250,8);
    _objc_release(lVar13);
    return (undefined *)(ulong)(uVar16 & 1);
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return puVar5;
}



/* Entry: 1072360e8; end: 107236cb3; +[SCStoriesOperaSnapPagePropertyParser _pagePropertiesForShareableStorySnap:storiesPlaybackSequence:customStoryMetadata:pageProperties:viewLocation:currentUserId:snapchattersSynchronousDataFetcher:circumstanceEngine:isReplyEnabled:profilesProvider:storiesConfigProvider:] */

undefined *
FUN_1072360e8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5,
             undefined8 param_6,ulong param_7,undefined8 param_8,undefined8 param_9,
             undefined **param_10,byte param_11,undefined4 param_12,undefined8 param_13,
             undefined8 param_14)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  uint uVar12;
  undefined **ppuVar13;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined **ppuStack_1e0;
  long lStack_1d8;
  undefined **ppuStack_1d0;
  ulong uStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  uint uStack_174;
  undefined **ppuStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined **ppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  uStack_174 = (uint)param_11;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_198 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  uStack_190 = param_13;
  _objc_retain(param_13);
  uStack_188 = param_14;
  _objc_retain(param_14);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = param_10;
  puStack_160 = puVar3;
  func_0x000108f4b3e4();
  uStack_180 = param_9;
  uStack_168 = param_4;
  if ((int)ppuVar4 == 0) {
    uVar5 = param_3;
    FUN_107239d54(param_3,param_8,param_9);
    if ((int)uVar5 != 0) {
      func_0x00010befa120(puStack_160);
      puVar3 = PTR_PTR_1126b2dd8;
      _objc_alloc(PTR_PTR_1126b2dd8);
      puVar6 = puVar3;
      func_0x00010723caa8();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c056260(puVar3);
      func_0x00010befa120(puVar2);
      _objc_release(puVar3);
      _objc_release(puVar6);
    }
    uVar5 = param_3;
    func_0x000107d28710(param_3,param_4,param_8,param_7);
    if ((uVar5 & 1) == 0) {
      _objc_retain(param_3);
      uVar7 = uStack_188;
      func_0x000108535744(uStack_188,param_7);
      uVar5 = param_3;
      func_0x00010853a5d4();
      _objc_release(param_3);
      if (((int)uVar7 != 0) && ((int)uVar5 != 0)) goto LAB_1072363a4;
    }
    else {
LAB_1072363a4:
      uVar5 = param_7;
      FUN_107236cb4(param_7,param_3);
      if ((int)uVar5 != 0) {
        func_0x00010befa120(puStack_160);
        puVar3 = PTR_PTR_1126b2dd8;
        _objc_alloc(PTR_PTR_1126b2dd8);
        puVar6 = puVar3;
        func_0x00010b75e404();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1072363ec;
      }
    }
  }
  else {
    uVar5 = param_3;
    func_0x000107d28710(param_3,param_4,param_8,param_7);
    if ((uVar5 & 1) == 0) {
      _objc_retain(param_3);
      uVar7 = uStack_188;
      func_0x000108535744(uStack_188,param_7);
      uVar5 = param_3;
      func_0x00010853a5d4();
      _objc_release(param_3);
      if (((int)uVar7 != 0) && ((int)uVar5 != 0)) goto LAB_107236224;
    }
    else {
LAB_107236224:
      uVar5 = param_7;
      FUN_107236cb4(param_7,param_3);
      if ((int)uVar5 != 0) {
        func_0x00010befa120(puStack_160);
        puVar3 = PTR_PTR_1126b2dd8;
        _objc_alloc(PTR_PTR_1126b2dd8);
        puVar6 = puVar3;
        func_0x00010b75e404();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c056260(puVar3);
        func_0x00010befa120(puVar2);
        _objc_release(puVar3);
        _objc_release(puVar6);
      }
    }
    uVar5 = param_3;
    FUN_107239d54(param_3,param_8,param_9);
    if ((int)uVar5 != 0) {
      func_0x00010befa120(puStack_160);
      puVar3 = PTR_PTR_1126b2dd8;
      _objc_alloc(PTR_PTR_1126b2dd8);
      puVar6 = puVar3;
      func_0x00010723caa8();
      _objc_retainAutoreleasedReturnValue();
LAB_1072363ec:
      func_0x00010c056260(puVar3);
      func_0x00010befa120(puVar2);
      _objc_release(puVar3);
      _objc_release(puVar6);
      param_4 = uStack_168;
      param_9 = uStack_180;
    }
  }
  ppuVar4 = param_10;
  func_0x000108f4ae38();
  if (((int)ppuVar4 != 0) &&
     ((((param_7 - 0x49 < 0x1a && ((1L << (param_7 - 0x49 & 0x3f) & 0x2020001U) != 0)) ||
       ((uVar5 = param_7 - 0x57 >> 1, (uVar5 | param_7 - 0x57 << 0x3f) < 8 &&
        ((1L << (uVar5 & 0x3f) & 0xb1U) != 0)))) || ((param_7 & 0xfffffffffffffffe) == 0x2c)))) {
    func_0x00010befa120(puStack_160);
  }
  uVar5 = param_3;
  func_0x000107d2e758(param_3,param_8,param_7);
  if ((int)uVar5 != 0) {
    func_0x00010befa120(puStack_160);
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar6 = puVar3;
    func_0x00010b75e41c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c056260(puVar3);
    func_0x00010befa120(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar6);
  }
  uVar5 = param_3;
  func_0x000107d28d3c(param_3,param_4,param_5,param_8,param_10);
  if (((int)uVar5 != 0) && (((param_7 == 7 || (param_7 == 0x59)) || (param_7 == 0x54)))) {
    func_0x00010befa120(puStack_160);
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e1edd8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1edd8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c056260(puVar3);
    func_0x00010befa120(puVar2);
    _objc_release(puVar3);
    _objc_release(ppuVar4);
  }
  uVar5 = param_3;
  func_0x000107d2aafc(param_3,param_4,param_5,param_8);
  if ((int)uVar5 == 0) {
LAB_10723664c:
    if ((param_7 != 0x65) && (param_7 != 0x62)) goto LAB_1072366bc;
  }
  else {
    if ((long)param_7 < 0x59) {
      if ((param_7 != 7) && (param_7 != 0x54)) goto LAB_1072366bc;
LAB_1072365e0:
      func_0x00010befa120(puStack_160);
      puVar3 = PTR_PTR_1126b2dd8;
      _objc_alloc(PTR_PTR_1126b2dd8);
      ppuVar4 = &PTR____CFConstantStringClassReference_110ea31b8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea31b8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c056260(puVar3);
      func_0x00010befa120(puVar2);
      _objc_release(puVar3);
      _objc_release(ppuVar4);
      goto LAB_10723664c;
    }
    if ((param_7 != 0x65) && (param_7 != 0x62)) {
      if (param_7 != 0x59) goto LAB_1072366bc;
      goto LAB_1072365e0;
    }
  }
  func_0x00010befa120(puStack_160);
  puVar3 = PTR_PTR_1126b2dd8;
  _objc_alloc(PTR_PTR_1126b2dd8);
  puVar6 = puVar3;
  func_0x00010723c970();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c056260(puVar3);
  func_0x00010befa120(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar6);
LAB_1072366bc:
  uVar5 = param_3;
  func_0x000109017f30(param_3,param_4,param_8,uStack_174,param_10,param_7,param_9);
  if (uVar5 != 0) {
    func_0x00010befa120(puStack_160);
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar6 = puVar3;
    func_0x00010723c9d0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c056260(puVar3);
    func_0x00010befa120(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar6);
  }
  puVar3 = PTR_PTR_1126d53d0;
  func_0x00010bf2d3e0();
  if (((int)puVar3 != 0) &&
     (puVar3 = PTR_PTR_1126d53d0, func_0x00010c07c600(), ((ulong)puVar3 & 1) == 0)) {
    func_0x00010befa120(puStack_160);
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    puVar6 = puVar3;
    func_0x00010723ca00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c056260(puVar3);
    func_0x00010befa120(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar6);
  }
  _objc_retain(param_3);
  _objc_retain(param_5);
  ppuStack_170 = param_10;
  if (param_5 == 0) {
    bVar1 = false;
  }
  else {
    lVar8 = param_5;
    func_0x00010c27dd80();
    bVar1 = lVar8 == 10;
  }
  uStack_f0 = 0;
  uStack_e0 = 0x2020000000;
  uStack_d8 = 0;
  uVar5 = param_3;
  puStack_e8 = &uStack_f0;
  func_0x00010bf0e700(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  uStack_108 = 0x10723829c;
  puStack_100 = &UNK_110992258;
  ppuStack_1b0 = &PTR___NSConcreteGlobalBlock_110994218;
  puStack_f8 = &uStack_f0;
  func_0x00010c0c1320();
  _objc_release(uVar5);
  if (bVar1) {
    uVar12 = 1;
  }
  else {
    uVar12 = (uint)*(byte *)(puStack_e8 + 3);
  }
  __Block_object_dispose(&uStack_f0,8);
  _objc_release(param_5);
  _objc_release(param_3);
  uVar5 = param_3;
  func_0x000107d295b8(param_3,uStack_168,param_5,param_8,ppuStack_170);
  if (((uVar12 | (uint)uVar5 ^ 0xffffffff) & 1) == 0) {
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e53578;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e53578,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c056260(puVar3);
    func_0x00010befa120(puVar2);
    _objc_release(puVar3);
    _objc_release(ppuVar4);
    puVar3 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e61278;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e61278,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c056260(puVar3);
    func_0x00010befa120(puVar2);
    _objc_release(puVar3);
    _objc_release(ppuVar4);
  }
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110f0bcf8;
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110f0dc78;
  puStack_a8 = PTR____kCFBooleanTrue_11034ab68;
  puStack_a0 = PTR____kCFBooleanTrue_11034ab68;
  puStack_98 = puStack_160;
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110f0dd78;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110f0dcb8;
  ppuVar13 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110f0ddf8;
  puVar6 = puVar2;
  puStack_90 = puVar3;
  func_0x00010bf51e00();
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_88 = puVar6;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c0d3c80();
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(puVar3);
  ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf529e0(puStack_160);
  puVar3 = (undefined *)ppuVar4;
  func_0x00010c0df760(ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar10);
  _objc_release(puVar3);
  if (uStack_174 != 0) {
    func_0x00010c1d0640(puVar10);
    puVar3 = PTR_PTR_1126ce808;
    func_0x00010c29d380();
    if ((int)puVar3 != 0) {
      puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_150 = 0xc2000000;
      pcStack_148 = FUN_107236dec;
      puStack_140 = &UNK_110993f88;
      ppuVar4 = &puStack_158;
      _objc_retain(param_3);
      uVar7 = uStack_180;
      uStack_138 = param_3;
      _objc_retain(uStack_180);
      uStack_130 = uVar7;
      _objc_retain(puVar10);
      ppuVar13 = ppuStack_170;
      puStack_128 = puVar10;
      _objc_retain(ppuStack_170);
      ppuStack_120 = ppuVar13;
      ppuStack_1b0 = &PTR___NSConcreteGlobalBlock_110994058;
      ppuStack_1a8 = &PTR___NSConcreteGlobalBlock_110994078;
      func_0x00010c0bdf40(uStack_168);
      _objc_release(ppuStack_120);
      _objc_release(puStack_128);
      _objc_release(uStack_130);
      _objc_release(uStack_138);
    }
  }
  func_0x00010c1d0640(puVar10);
  puVar3 = puVar10;
  func_0x00010bf51e00(puVar10);
  _objc_release(puVar10);
  _objc_release(puStack_160);
  _objc_release(puVar2);
  _objc_release(uStack_188);
  _objc_release(uStack_190);
  _objc_release(ppuStack_170);
  _objc_release(uStack_180);
  _objc_release(param_8);
  _objc_release(uStack_198);
  _objc_release(param_5);
  _objc_release(uStack_168);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    lVar11 = 8;
    __Block_object_dispose(&uStack_f0);
    uVar5 = param_3;
    __Unwind_Resume();
    pcStack_1b8 = FUN_107236cb4;
    ppuStack_1e0 = ppuVar13;
    lStack_1d8 = param_5;
    ppuStack_1d0 = ppuVar4;
    uStack_1c8 = param_3;
    puStack_1c0 = &stack0xfffffffffffffff0;
    _objc_retain(lVar11);
    puStack_1f8 = &uStack_200;
    uStack_200 = 0;
    uStack_1f0 = 0x2020000000;
    uStack_1e8 = 0;
    lVar8 = lVar11;
    func_0x00010c25a280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar12 = 1;
    if ((uVar5 == 7) && (lVar8 != 0)) {
      lVar8 = lVar11;
      func_0x00010bf0e700(lVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c1320();
      _objc_release(lVar8);
      uVar12 = (uint)*(byte *)(puStack_1f8 + 3);
    }
    __Block_object_dispose(&uStack_200,8);
    _objc_release(lVar11);
    return (undefined *)(ulong)(uVar12 & 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return puVar3;
}



/* Entry: 107236cb4; end: 107236deb;  */

byte FUN_107236cb4(long param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  lVar1 = param_2;
  func_0x00010c25a280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  bVar2 = 1;
  if ((param_1 == 7) && (lVar1 != 0)) {
    lVar1 = param_2;
    func_0x00010bf0e700(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c1320();
    _objc_release(lVar1);
    bVar2 = *(byte *)(puStack_48 + 3);
  }
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_2);
  return bVar2 & 1;
}



/* Entry: 107236dec; end: 10723703b;  */

void FUN_107236dec(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe9ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf24fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x000107d249d0(lVar4,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar5 = param_2;
    func_0x00010bf82560();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bfe9ee0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar6;
    func_0x00010bf24fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar5);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c1d0640(uVar7);
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000108f593d4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30));
  _objc_release(puVar8);
  _objc_release(uVar7);
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000108f593ec();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30));
  _objc_release(puVar8);
  _objc_release(uVar7);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30));
  uVar9 = *(ulong *)(param_1 + 0x38);
  func_0x000108f4affc();
  if ((uVar9 & 1) == 0) {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30));
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10723703c; end: 107237057;  */

void FUN_10723703c(void)

{
  return;
}



/* Entry: 107237058; end: 10723706b; +[SCStoriesOperaSnapPagePropertyParser _pagePropertiesForSingleSnapStoryInUpNextMixedFeed:showActionCounts:showDescriptions:] */

void FUN_107237058(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined **ppuStack_1e8;
  ulong uStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined1 **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined1 *puStack_140;
  undefined *puStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  puVar5 = PTR____kCFBooleanTrue_11034ab68;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_130 = &PTR____CFConstantStringClassReference_110f0dc78;
  ppuStack_128 = &PTR____CFConstantStringClassReference_110f0dd98;
  puStack_d0 = PTR____kCFBooleanTrue_11034ab68;
  puStack_c8 = PTR____kCFBooleanTrue_11034ab68;
  ppuStack_120 = &PTR____CFConstantStringClassReference_110f0ea38;
  ppuStack_118 = &PTR____CFConstantStringClassReference_110f0ea58;
  puStack_c0 = PTR____kCFBooleanTrue_11034ab68;
  puStack_b8 = PTR____kCFBooleanTrue_11034ab68;
  ppuStack_110 = &PTR____CFConstantStringClassReference_110f0ea78;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar11 = param_3;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_108 = &PTR____CFConstantStringClassReference_110ebe8f8;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_b0 = puVar2;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_100 = &PTR____CFConstantStringClassReference_110f0ea98;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_a8 = puVar3;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = puVar5;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110f0eab8;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110ebe918;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_a0 = puVar4;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110ebe938;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_90 = puVar5;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110ebe958;
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_88 = puVar6;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110f0ead8;
  uVar1 = (uint)param_3 ^ 1;
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_80 = puVar7;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar8;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c0d3c80();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if ((uVar1 & 1) == 0) {
    func_0x00010c1d0640(puVar10);
    func_0x00010c1d0640(puVar10);
    func_0x00010c1d0640(puVar10);
    func_0x00010c1d0640(puVar10);
    puVar3 = PTR_PTR_1126b2d20;
    func_0x00010c27fe20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar10);
    _objc_release(puVar3);
  }
  puVar5 = puVar10;
  func_0x00010bf51e00();
  _objc_release(puVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puStack_138 = &LAB_107d27014;
    lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_1a8 = &PTR____CFConstantStringClassReference_110f0ea78;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_150 = puVar3;
    puStack_148 = puVar5;
    puStack_140 = &stack0xfffffffffffffff0;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_1a0 = &PTR____CFConstantStringClassReference_110ebe8f8;
    ppuStack_198 = &PTR____CFConstantStringClassReference_110f0ead8;
    puStack_178 = PTR____kCFBooleanTrue_11034ab68;
    puStack_170 = PTR____kCFBooleanFalse_11034ab60;
    puStack_168 = PTR____kCFBooleanTrue_11034ab68;
    ppuStack_190 = &PTR____CFConstantStringClassReference_110f0ea58;
    ppuStack_188 = &PTR____CFConstantStringClassReference_110ebe8d8;
    puStack_160 = PTR____kCFBooleanTrue_11034ab68;
    ppuVar12 = &puStack_180;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_180 = puVar2;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    _objc_release(puVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_158) {
      ___stack_chk_fail();
      puStack_1b8 = &UNK_107d27110;
      uStack_1e0 = (ulong)uVar1;
      puStack_1d8 = puVar10;
      puStack_1d0 = puVar2;
      puStack_1c8 = puVar5;
      ppuStack_1c0 = &puStack_140;
      _objc_retain(uVar11);
      _objc_retain(ppuVar12);
      puStack_210 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_208 = 0xc2000000;
      puStack_200 = &UNK_107d271c8;
      puStack_1f8 = &UNK_110a090c0;
      uStack_1f0 = uVar11;
      ppuStack_1e8 = ppuVar12;
      _objc_retain(ppuVar12);
      _objc_retain(uVar11);
      func_0x000100504554(puVar3,&puStack_210);
      _objc_release(ppuStack_1e8);
      _objc_release(uStack_1f0);
      _objc_release(ppuVar12);
      _objc_release(uVar11);
      puVar5 = puVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10723706c; end: 107237073; +[SCStoriesOperaSnapPagePropertyParser _pagePropertiesForSpotlightMultisnapTopAttribution] */

void FUN_10723706c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR____kCFBooleanTrue_11034ab68;
  puStack_40 = PTR____kCFBooleanFalse_11034ab60;
  puStack_38 = PTR____kCFBooleanTrue_11034ab68;
  puStack_30 = PTR____kCFBooleanTrue_11034ab68;
  ppuVar3 = &puStack_50;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    _objc_retain(param_2);
    _objc_retain(ppuVar3);
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    puStack_d0 = &UNK_107d271c8;
    puStack_c8 = &UNK_110a090c0;
    uStack_c0 = param_2;
    ppuStack_b8 = ppuVar3;
    _objc_retain(ppuVar3);
    _objc_retain(param_2);
    func_0x000100504554(puVar1,&puStack_e0);
    _objc_release(ppuStack_b8);
    _objc_release(uStack_c0);
    _objc_release(ppuVar3);
    _objc_release(param_2);
    puVar2 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107237074; end: 107237127; +[SCStoriesOperaSnapPagePropertyParser _loadingPagePropertiesForPageProperties:error:] */

void FUN_107237074(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c0d3c80(param_3);
  if (param_4 == 0) {
    uVar2 = uVar1;
    func_0x000107d26c28();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(uVar1,param_2,uVar2);
    _objc_release(uVar2);
    param_1 = uVar1;
    func_0x00010bf51e00(uVar1);
  }
  else {
    func_0x00010bf98de0(param_1,param_2,param_4,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107237128; end: 10723759b; +[SCStoriesOperaSnapPagePropertyParser errorPropertiesForError:pageProperties:] */

void FUN_107237128(undefined8 param_1,undefined8 param_2,ulong param_3,undefined *param_4)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  puVar8 = PTR____NSDictionary0__struct_11034ab58;
  if (param_3 == 0) goto LAB_107237554;
  func_0x00010c0d3c80(param_4);
  func_0x00010c1d0640();
  func_0x00010c1d0640(param_4);
  ppuVar1 = &PTR____CFConstantStringClassReference_110db3738;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db3738,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_4);
  _objc_release(ppuVar1);
  uVar2 = param_3;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ba158;
  func_0x00010bf87dc0(PTR_PTR_1126ba158);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0720c0();
  puVar8 = param_4;
  if ((int)uVar4 == 0) {
    _objc_release(puVar3);
    _objc_release(uVar2);
LAB_107237320:
    uVar2 = param_3;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0720c0();
    if (((int)uVar4 == 0) || (uVar4 = param_3, func_0x00010bf3ec40(), uVar4 != 0xd0)) {
      _objc_retain(param_3);
      uVar4 = param_3;
      func_0x00010bf87dc0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c071ae0();
      if ((uVar5 & 1) != 0) {
        uVar5 = param_3;
        func_0x00010bf3ec40();
        if ((uVar5 == 0xfffffffffffffc14) ||
           (uVar5 = param_3, func_0x00010bf3ec40(), uVar5 == 0xfffffffffffffc0f)) {
          _objc_release(uVar4);
          _objc_release(param_3);
        }
        else {
          uVar5 = param_3;
          func_0x00010bf3ec40();
          _objc_release(uVar4);
          _objc_release(param_3);
          if (uVar5 != 0xfffffffffffffc13) goto LAB_1072373d8;
        }
        goto LAB_1072373b4;
      }
      _objc_release(uVar4);
      _objc_release(param_3);
LAB_1072373d8:
      uVar4 = param_3;
      func_0x00010bf87dc0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0720c0();
      if ((uVar5 & 1) == 0) {
        _objc_release(uVar4);
        _objc_release(uVar2);
LAB_107237444:
        uVar2 = param_3;
        func_0x00010bf87dc0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        func_0x00010c0720c0();
        ppuVar1 = &PTR____CFConstantStringClassReference_110db9c98;
        ppuVar6 = &PTR____CFConstantStringClassReference_110dc3e98;
        if ((int)uVar4 != 0) {
          uVar4 = param_3;
          func_0x00010bf3ec40();
          _objc_release(uVar2);
          ppuVar6 = &PTR____CFConstantStringClassReference_110e499f8;
          if (uVar4 != 0x280) {
            ppuVar6 = &PTR____CFConstantStringClassReference_110dc3e98;
          }
          ppuVar7 = &PTR____CFConstantStringClassReference_110e49a18;
          if (uVar4 != 0x280) {
            ppuVar7 = ppuVar1;
          }
          goto LAB_1072374b8;
        }
        goto LAB_1072374b0;
      }
      uVar5 = param_3;
      func_0x00010bf3ec40();
      _objc_release(uVar4);
      _objc_release(uVar2);
      if (uVar5 != 0) goto LAB_107237444;
      ppuVar6 = &PTR____CFConstantStringClassReference_110e49a38;
      ppuVar7 = &PTR____CFConstantStringClassReference_110e49a58;
    }
    else {
LAB_1072373b4:
      ppuVar1 = &PTR____CFConstantStringClassReference_110e49a58;
      ppuVar6 = &PTR____CFConstantStringClassReference_110e49a38;
LAB_1072374b0:
      _objc_release(uVar2);
      ppuVar7 = ppuVar1;
    }
LAB_1072374b8:
    func_0x00010bcbeaa8(ppuVar6,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bcbeaa8(ppuVar7,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4);
    func_0x00010c1d0640(param_4);
    func_0x00010c1d0640(param_4);
    func_0x00010bf51e00(param_4);
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
  }
  else {
    uVar4 = param_3;
    func_0x00010bf3ec40();
    _objc_release(puVar3);
    _objc_release(uVar2);
    if (uVar4 != 0x66) goto LAB_107237320;
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4);
    _objc_release(ppuVar1);
    func_0x00010c1d0640(param_4);
    ppuVar1 = &PTR____CFConstantStringClassReference_110e49a78;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e49a78,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4);
    _objc_release(ppuVar1);
    ppuVar1 = &PTR____CFConstantStringClassReference_110e49a98;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e49a98,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4);
    _objc_release(ppuVar1);
    func_0x00010bf51e00(param_4);
  }
  _objc_release(param_4);
LAB_107237554:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10723759c; end: 10723773f; +[SCStoriesOperaSnapPagePropertyParser _pagePropertiesForBoostWithStoriesPlaybackSequence:pageProperties:] */

void FUN_10723759c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  int iVar6;
  undefined **ppuVar7;
  int iVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110f0e2b8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (param_4 != (undefined *)0x0) {
    puVar3 = param_4;
  }
  _objc_retain(puVar3);
  _objc_release(param_4);
  ppuStack_78 = &PTR____CFConstantStringClassReference_110f0e2b8;
  puVar1 = PTR_PTR_1126d52b0;
  _objc_opt_class(PTR_PTR_1126d52b0);
  puVar2 = puVar3;
  func_0x00010bf09f60(puVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110eb95d8;
  uVar10 = param_3;
  puStack_60 = puVar2;
  func_0x000107d2a444(param_3);
  func_0x00010c0df6e0(puVar3,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110eb95f8;
  uVar10 = param_3;
  puStack_58 = puVar3;
  func_0x000107d2a658();
  _objc_release(param_3);
  func_0x00010c0df6e0(puVar1,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  iVar6 = (int)&puStack_60;
  iVar8 = (int)&ppuStack_78;
  uVar10 = 3;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_retain(uVar10);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    puVar3 = PTR____kCFBooleanFalse_11034ab60;
    ppuVar9 = &PTR____CFConstantStringClassReference_110ebe978;
    ppuVar7 = (undefined **)PTR____kCFBooleanFalse_11034ab60;
    if (iVar6 != 0) {
      func_0x00010c1d0640(puVar4,param_2,PTR____kCFBooleanTrue_11034ab68,
                          &PTR____CFConstantStringClassReference_110ebe978);
      uVar5 = uVar10;
      func_0x000108f4aedc();
      puVar1 = PTR____kCFBooleanFalse_11034ab60;
      if ((int)uVar5 == 0) {
        func_0x00010c1d0640(puVar4,param_2,PTR____kCFBooleanFalse_11034ab60,
                            &PTR____CFConstantStringClassReference_110f0bc78);
        func_0x00010c1d0640(puVar4,param_2,puVar1,&PTR____CFConstantStringClassReference_110ebea98);
        ppuVar9 = &PTR____CFConstantStringClassReference_110f0c258;
        ppuVar7 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110caac8;
      }
      else {
        ppuVar9 = &PTR____CFConstantStringClassReference_110f0be38;
        ppuVar7 = (undefined **)PTR____kCFBooleanTrue_11034ab68;
      }
    }
    func_0x00010c1d0640(puVar4,param_2,ppuVar7,ppuVar9);
    puVar1 = PTR____kCFBooleanTrue_11034ab68;
    if (iVar8 == 0) {
      puVar1 = puVar3;
    }
    func_0x00010c1d0640(puVar4,param_2,puVar1,&PTR____CFConstantStringClassReference_110ebea18);
    _objc_release(uVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107237740; end: 107237867; +[SCStoriesOperaSnapPagePropertyParser _pagePropertiesForDisableAutoProgressingWithIsLastStorySnap:isFirstStorySnap:circumstanceEngine:storiesConfigProvider:] */

void FUN_107237740(undefined8 param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  
  _objc_retain(param_5);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar2 = PTR____kCFBooleanFalse_11034ab60;
  ppuVar6 = &PTR____CFConstantStringClassReference_110ebe978;
  ppuVar5 = (undefined **)PTR____kCFBooleanFalse_11034ab60;
  if (param_3 != 0) {
    func_0x00010c1d0640(puVar3,param_2,PTR____kCFBooleanTrue_11034ab68,
                        &PTR____CFConstantStringClassReference_110ebe978);
    uVar4 = param_5;
    func_0x000108f4aedc();
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
    if ((int)uVar4 == 0) {
      func_0x00010c1d0640(puVar3,param_2,PTR____kCFBooleanFalse_11034ab60,
                          &PTR____CFConstantStringClassReference_110f0bc78);
      func_0x00010c1d0640(puVar3,param_2,puVar1,&PTR____CFConstantStringClassReference_110ebea98);
      ppuVar6 = &PTR____CFConstantStringClassReference_110f0c258;
      ppuVar5 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110caac8;
    }
    else {
      ppuVar6 = &PTR____CFConstantStringClassReference_110f0be38;
      ppuVar5 = (undefined **)PTR____kCFBooleanTrue_11034ab68;
    }
  }
  func_0x00010c1d0640(puVar3,param_2,ppuVar5,ppuVar6);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if (param_4 == 0) {
    puVar1 = puVar2;
  }
  func_0x00010c1d0640(puVar3,param_2,puVar1,&PTR____CFConstantStringClassReference_110ebea18);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107237868; end: 107237f7f; +[SCStoriesOperaSnapPagePropertyParser _pagePropertiesForAutoProgressingWithStorySnap:autoProgressingConfiguration:viewLocation:circumstanceEngine:storiesConfigProvider:isAutoAdvanceSuppressedForSnap:] */

void FUN_107237868(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5,
                  ulong param_6,undefined8 param_7,undefined8 param_8,int param_9)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  uVar4 = param_5;
  func_0x00010bf2c880();
  if ((uVar4 & 1) == 0) {
    uVar4 = param_4;
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c27dd80();
    if ((uVar5 + 1 < 0x1c) && ((0xd8de5fdU >> (ulong)((uint)(uVar5 + 1) & 0x1f) & 1) != 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = (param_6 & 0xfffffffffffffffb) == 0x62;
    }
    _objc_release(uVar4);
    bVar1 = bVar2;
    if (param_9 != 0) goto LAB_107237940;
LAB_1072378e4:
    bVar2 = bVar1;
    uVar9 = 0;
  }
  else {
    bVar2 = false;
    bVar1 = false;
    if (param_9 == 0) goto LAB_1072378e4;
LAB_107237940:
    uVar6 = param_8;
    FUN_10722f7b0(param_8,param_6);
    uVar9 = (uint)uVar6;
  }
  if (bVar2 || (uVar9 & 1) != 0) {
    func_0x00010c1d0640(puVar3);
    func_0x00010c1d0640(puVar3);
    if (uVar9 != 0) {
      uVar4 = param_4;
      func_0x00010c0c5340();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c27dd80();
      if ((((uVar5 + 1 < 0x1c) && ((1L << (uVar5 + 1 & 0x3f) & 0xb4b5dbbU) != 0)) &&
          (uVar5 + 1 < 0x1b)) && ((1L << (uVar5 + 1 & 0x3f) & 0x6c6bd77U) != 0)) {
        _objc_release(uVar4);
      }
      else {
        _objc_release(uVar4);
        func_0x00010c1d0640(puVar3);
      }
    }
  }
  uVar4 = param_4;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c27dd80();
  if ((uVar5 + 1 < 0x1c) && ((1L << (uVar5 + 1 & 0x3f) & 0xd8de5fdU) != 0)) {
LAB_107237a38:
    _objc_release(uVar4);
  }
  else {
    uVar5 = param_4;
    func_0x00010c26f2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c071060();
    if ((uVar7 & 1) == 0) {
      _objc_release(uVar5);
      goto LAB_107237a38;
    }
    uVar7 = param_5;
    func_0x00010bf2c880();
    _objc_release(uVar5);
    _objc_release(uVar4);
    if ((int)uVar7 != 0) {
      func_0x00010c1d0640(puVar3);
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0ce4e0(param_5);
      func_0x00010c0df740(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3);
      _objc_release(puVar8);
      func_0x00010c1d0640(puVar3);
    }
  }
  uVar4 = param_4;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c27dd80();
  if ((uVar5 + 1 < 0x1c) && ((1L << (uVar5 + 1 & 0x3f) & 0xd8de5fdU) != 0)) {
LAB_107237a7c:
    _objc_release(uVar4);
  }
  else {
    uVar5 = param_4;
    func_0x00010c26f2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c071060();
    if ((int)uVar7 != 0) {
      _objc_release(uVar5);
      goto LAB_107237a7c;
    }
    uVar7 = param_5;
    func_0x00010bf2c8e0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    if ((int)uVar7 != 0) {
      uVar4 = param_4;
      func_0x00010c26f2a0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf8b160();
      dVar10 = param_1;
      _objc_release(uVar4);
      uVar4 = param_5;
      func_0x00010c231be0();
      if (((int)uVar4 == 0) || (func_0x00010c0ce4e0(param_5), SUB84(dVar10,0) <= 0.0)) {
        func_0x00010c0ce4e0(param_5);
        dVar11 = (double)(ulong)(uint)(float)param_1;
        if ((float)param_1 < SUB84(dVar10,0)) goto LAB_107237e5c;
      }
      else {
LAB_107237e5c:
        func_0x00010c0ce4e0(param_5);
        dVar11 = dVar10;
      }
      func_0x00010c1d0640(puVar3);
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df740(dVar11,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3);
      _objc_release(puVar8);
      func_0x00010c1d0640(puVar3);
    }
  }
  uVar4 = param_4;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c27dd80();
  if ((uVar5 + 1 < 0x1b) && ((1L << (uVar5 + 1 & 0x3f) & 0x6c6bd77U) != 0)) {
LAB_107237ac0:
    _objc_release(uVar4);
LAB_107237ac8:
    uVar4 = param_4;
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c27dd80();
    if ((((0x1b < uVar5 + 1) || ((1L << (uVar5 + 1 & 0x3f) & 0xb4b5dbbU) == 0)) ||
        (0x1a < uVar5 + 1)) || ((1L << (uVar5 + 1 & 0x3f) & 0x6c6bd77U) == 0)) {
      uVar5 = param_4;
      func_0x00010c26f2a0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010c071060();
      if ((uVar7 & 1) != 0) {
        uVar7 = param_5;
        func_0x00010bf2c8a0();
        _objc_release(uVar5);
        _objc_release(uVar4);
        if ((int)uVar7 == 0) goto LAB_107237b30;
        func_0x00010c0ce760(param_5);
        uVar4 = param_4;
        func_0x00010c26f2a0(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf8b160();
        _objc_release(uVar4);
        uVar4 = param_5;
        func_0x00010c0f0220();
        if (uVar4 != 0) {
          func_0x00010c0f0220(param_5);
        }
        func_0x00010c1d0640(puVar3);
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(puVar8);
        goto LAB_107237f5c;
      }
      _objc_release(uVar5);
    }
    _objc_release(uVar4);
  }
  else {
    uVar5 = param_4;
    func_0x00010c26f2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c071060();
    if ((uVar7 & 1) == 0) {
      _objc_release(uVar5);
      goto LAB_107237ac0;
    }
    uVar7 = param_5;
    func_0x00010bf2c840();
    _objc_release(uVar5);
    _objc_release(uVar4);
    if ((int)uVar7 == 0) goto LAB_107237ac8;
    func_0x00010c1d0640(puVar3);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf20920(param_5);
    func_0x00010c0df840(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar8);
LAB_107237f5c:
    func_0x00010c1d0640(puVar3);
    func_0x00010c1d0640(puVar3);
  }
LAB_107237b30:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107237f80; end: 10723807b; +[SCStoriesOperaSnapPagePropertyParser _pagePropertiesForCloseAction:] */

undefined * FUN_107237f80(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0e2b8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (param_3 != (undefined *)0x0) {
    puVar3 = param_3;
  }
  _objc_retain(puVar3);
  _objc_release(param_3);
  ppuStack_48 = &PTR____CFConstantStringClassReference_110f0e2b8;
  puVar1 = PTR_PTR_1126d53d8;
  _objc_opt_class(PTR_PTR_1126d53d8);
  puVar2 = puVar3;
  func_0x00010bf09f60(puVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  ppuVar4 = &puStack_40;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_40 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,ppuVar4,&ppuStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  puVar3 = (undefined *)0x1;
  switch(ppuVar4) {
  case (undefined **)0xffffffffffffffff:
  case (undefined **)0x0:
  case (undefined **)0x1:
  case (undefined **)0x2:
  case (undefined **)0x4:
  case (undefined **)0x5:
  case (undefined **)0x6:
  case (undefined **)0x7:
  case (undefined **)0x8:
  case (undefined **)0x9:
  case (undefined **)0xa:
  case (undefined **)0xb:
  case (undefined **)0x10:
  case (undefined **)0x14:
  case (undefined **)0x15:
  case (undefined **)0x16:
  case (undefined **)0x17:
  case (undefined **)0x18:
  case (undefined **)0x19:
  case (undefined **)0x1a:
  case (undefined **)0x1b:
  case (undefined **)0x1c:
  case (undefined **)0x1d:
  case (undefined **)0x1e:
  case (undefined **)0x1f:
  case (undefined **)0x20:
  case (undefined **)0x21:
  case (undefined **)0x22:
  case (undefined **)0x23:
  case (undefined **)0x24:
  case (undefined **)0x25:
  case (undefined **)0x26:
  case (undefined **)0x27:
  case (undefined **)0x28:
  case (undefined **)0x2a:
  case (undefined **)0x2b:
  case (undefined **)0x2c:
  case (undefined **)0x2d:
  case (undefined **)0x2e:
  case (undefined **)0x2f:
  case (undefined **)0x30:
  case (undefined **)0x31:
  case (undefined **)0x32:
  case (undefined **)0x34:
  case (undefined **)0x35:
  case (undefined **)0x37:
  case (undefined **)0x38:
  case (undefined **)0x39:
  case (undefined **)0x3a:
  case (undefined **)0x3b:
  case (undefined **)0x3c:
  case (undefined **)0x3d:
  case (undefined **)0x3e:
  case (undefined **)0x3f:
  case (undefined **)0x40:
  case (undefined **)0x42:
  case (undefined **)0x43:
  case (undefined **)0x46:
  case (undefined **)0x48:
  case (undefined **)0x4f:
  case (undefined **)0x50:
  case (undefined **)0x51:
  case (undefined **)0x52:
  case (undefined **)0x53:
  case (undefined **)0x55:
  case (undefined **)0x58:
  case (undefined **)0x5b:
  case (undefined **)0x5c:
  case (undefined **)0x5d:
  case (undefined **)0x60:
  case (undefined **)0x61:
  case (undefined **)0x63:
  case (undefined **)0x64:
  case (undefined **)0x66:
  case (undefined **)0x67:
  case (undefined **)0x68:
    puVar3 = (undefined *)0x0;
  }
  return puVar3;
}



/* Entry: 10723807c; end: 1072380ab; +[SCStoriesOperaSnapPagePropertyParser _shouldDisableShadowOnLeftTap:] */

undefined8 FUN_10723807c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  switch(param_3) {
  case 0xffffffffffffffff:
  case 0:
  case 1:
  case 2:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0x10:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x34:
  case 0x35:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x42:
  case 0x43:
  case 0x46:
  case 0x48:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x55:
  case 0x58:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x60:
  case 0x61:
  case 99:
  case 100:
  case 0x66:
  case 0x67:
  case 0x68:
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 1072380ac; end: 107238163;  */

undefined8 FUN_1072380ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x20);
  if (((0x19 < lVar5 - 0x49U || (1L << (lVar5 - 0x49U & 0x3f) & 0x2020001U) == 0) &&
      ((uVar2 = lVar5 - 0x57U >> 1, 7 < (uVar2 | lVar5 - 0x57U << 0x3f) ||
       ((0xb1U >> (ulong)((uint)uVar2 & 0x1f) & 1) == 0)))) &&
     ((1 < lVar5 - 0x69U || ((*(byte *)(param_1 + 0x28) & 1) == 0)))) {
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    iVar3 = 0x11181670;
    func_0x00010bf4b900(&PTR__OBJC_CLASS___NSConstantArray_111181670,param_2,puVar4);
    _objc_release(puVar4);
    uVar1 = 0x13;
    if (iVar3 == 0) {
      uVar1 = 0xffffffffffffffff;
    }
    return uVar1;
  }
  return 0x5c;
}



/* Entry: 107238164; end: 10723817f;  */

void FUN_107238164(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined ***)(lVar2 + 0x28) = &PTR____CFConstantStringClassReference_110dafeb8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107238180; end: 1072381ef;  */

void FUN_107238180(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1072381f0; end: 1072382df;  */

void FUN_1072381f0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined ***)(lVar2 + 0x28) = &PTR____CFConstantStringClassReference_110e50718;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1072382e0; end: 1072383df;  */

void FUN_1072382e0(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c0e1a60();
  *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = lVar2;
  _objc_release(lVar4);
  if (*(long *)(param_1 + 0x38) == 0x39) {
    lVar4 = param_2;
    func_0x00010c25b6c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = param_2;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    _objc_retain(lVar5);
    uVar1 = *(undefined8 *)(lVar3 + 0x28);
    *(long *)(lVar3 + 0x28) = lVar5;
    _objc_release(uVar1);
    if (lVar2 != 0) {
      _objc_release(lVar5);
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    _objc_retain(uVar1);
    lVar4 = *(long *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = uVar1;
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1072383e0; end: 1072383e3;  */

void FUN_1072383e0(void)

{
  return;
}



/* Entry: 1072383e4; end: 1072387b7;  */

void FUN_1072383e4(long param_1,undefined **param_2)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  ulong uVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined ***pppuVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined **ppuVar22;
  undefined *puVar23;
  undefined **unaff_x25;
  long unaff_x26;
  undefined **ppuStack_408;
  undefined *puStack_400;
  long lStack_3f8;
  undefined **ppuStack_3f0;
  undefined *puStack_3e8;
  undefined *puStack_3e0;
  undefined **ppuStack_3d8;
  undefined *puStack_3d0;
  undefined **ppuStack_3c8;
  undefined8 ***pppuStack_3c0;
  code *pcStack_3b8;
  undefined **ppuStack_3a8;
  undefined **ppuStack_3a0;
  undefined **ppuStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  long lStack_378;
  undefined **ppuStack_370;
  undefined **ppuStack_368;
  undefined8 ***pppuStack_360;
  code *pcStack_358;
  undefined **ppuStack_348;
  undefined **ppuStack_340;
  undefined **ppuStack_338;
  undefined **ppuStack_330;
  undefined **ppuStack_328;
  undefined **ppuStack_320;
  long lStack_318;
  long lStack_310;
  undefined **ppuStack_308;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  long lStack_278;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined8 ***pppuStack_240;
  code *pcStack_238;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  long lStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined8 ***pppuStack_1e0;
  undefined8 uStack_1d8;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  long lStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined1 ***pppuStack_180;
  undefined8 uStack_178;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  long lStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined1 **ppuStack_120;
  undefined8 uStack_118;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  long lStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  long lStack_d0;
  undefined **ppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar13 = param_2;
  _objc_retain(param_2);
  lVar2 = *(long *)(param_1 + 0x20);
  if ((lVar2 == 0) || (func_0x00010c27dd80(), lVar2 != 1)) {
    ppuVar3 = *(undefined ***)(param_1 + 0x28);
    ppuVar13 = *(undefined ***)(param_1 + 0x30);
    func_0x000107d249d0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar3 = *(undefined ***)(param_1 + 0x20);
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar4 = *(undefined ***)(param_1 + 0x38);
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar4 == (undefined **)0x0) {
    ppuVar8 = *(undefined ***)(param_1 + 0x28);
    func_0x00010bf5b080();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar8;
    func_0x00010bf5bc00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar8);
  }
  else {
    _objc_retain(ppuVar4);
    ppuVar5 = ppuVar4;
  }
  _objc_release(ppuVar4);
  uVar6 = *(ulong *)(param_1 + 0x38);
  func_0x00010901d2a0();
  if ((uVar6 & 1) == 0) {
    ppuVar4 = param_2;
    func_0x00010bf82560();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar4;
    func_0x00010c078f60();
    _objc_release(ppuVar4);
    if ((int)ppuVar8 != 0) goto LAB_1072384ec;
  }
  else {
LAB_1072384ec:
    ppuVar8 = param_2;
    func_0x00010bf82560();
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = ppuVar8;
    func_0x00010bfe9ee0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = unaff_x25;
    func_0x00010bf24fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x25);
    _objc_release(ppuVar8);
    ppuVar8 = ppuVar4;
    func_0x00010c08fa60();
    if (ppuVar8 == (undefined **)0x0) {
      lVar7 = *(long *)(param_1 + 0x28);
      func_0x00010bf5b080();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar7;
      func_0x00010bf5b380();
      _objc_retainAutoreleasedReturnValue();
      unaff_x26 = lVar2;
      func_0x00010c08fa60();
      _objc_release(lVar2);
      _objc_release(lVar7);
      if (unaff_x26 == 0) {
        ppuVar11 = *(undefined ***)(param_1 + 0x38);
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar11;
        func_0x00010c08fa60();
        if (ppuVar8 == (undefined **)0x0) {
          _objc_retain(ppuVar5);
          ppuVar8 = ppuVar5;
        }
        else {
          ppuVar8 = *(undefined ***)(param_1 + 0x38);
          func_0x00010bf85d80();
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        ppuVar11 = *(undefined ***)(param_1 + 0x28);
        func_0x00010bf5b080();
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar11;
        func_0x00010bf5b380();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(ppuVar3);
      ppuVar3 = ppuVar8;
      unaff_x25 = ppuVar11;
    }
    else {
      _objc_retain(ppuVar4);
      ppuVar11 = ppuVar3;
      ppuVar3 = ppuVar4;
    }
    _objc_release(ppuVar11);
    _objc_release(ppuVar4);
    ppuVar8 = ppuVar3;
  }
  ppuVar11 = ppuVar3;
  func_0x00010c08fa60();
  if ((ppuVar11 != (undefined **)0x0) &&
     (ppuVar11 = ppuVar5, func_0x00010c08fa60(), ppuVar11 != (undefined **)0x0)) {
    func_0x000100bf119c(*(undefined8 *)(param_1 + 0x38));
    lVar2 = *(long *)(param_1 + 0x38);
    func_0x000108f47238();
    if (lVar2 == 0) {
      ppuVar4 = param_2;
      func_0x00010bf82560();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar4;
      func_0x00010c0e1a60();
      _objc_release(ppuVar4);
      if (ppuVar8 == (undefined **)0x0) {
        ppuVar4 = param_2;
        func_0x00010bf82560(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c238c20();
        _objc_release(ppuVar4);
      }
    }
    ppuStack_a8 = &PTR____CFConstantStringClassReference_110f0d6b8;
    ppuStack_a0 = &PTR____CFConstantStringClassReference_110f0dcf8;
    ppuStack_98 = &PTR____CFConstantStringClassReference_110f0dd18;
    ppuStack_90 = &PTR____CFConstantStringClassReference_110f0dd58;
    unaff_x25 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_80 = ppuVar3;
    ppuStack_78 = ppuVar3;
    ppuStack_70 = ppuVar5;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_88 = &PTR____CFConstantStringClassReference_110f0d6f8;
    ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_68 = ppuVar4;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_60 = ppuVar8;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    uVar20 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined **)(lVar2 + 0x28) = puVar21;
    _objc_release(uVar20);
    _objc_release(ppuVar8);
    _objc_release(ppuVar4);
  }
  _objc_release(ppuVar5);
  _objc_release(ppuVar3);
  ppuVar11 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_1072387b8;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = (undefined **)ppuVar11[4];
  ppuStack_e0 = ppuVar5;
  ppuStack_d8 = ppuVar3;
  lStack_d0 = param_1;
  ppuStack_c8 = param_2;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar9;
  func_0x00010c08fa60();
  ppuVar22 = ppuVar9;
  if (ppuVar10 == (undefined **)0x0) {
    ppuVar22 = (undefined **)ppuVar11[5];
    _objc_retain(ppuVar22);
    _objc_release(ppuVar9);
    ppuVar3 = ppuVar22;
  }
  ppuVar10 = ppuVar22;
  func_0x00010c08fa60();
  if (ppuVar10 != (undefined **)0x0) {
    ppuStack_108 = &PTR____CFConstantStringClassReference_110f0d6b8;
    ppuStack_100 = &PTR____CFConstantStringClassReference_110f0dcf8;
    puVar21 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_f8 = ppuVar22;
    ppuStack_f0 = ppuVar22;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(*(long *)(ppuVar11[7] + 8) + 0x28);
    *(undefined **)(*(long *)(ppuVar11[7] + 8) + 0x28) = puVar21;
    _objc_release(uVar20);
  }
  ppuVar10 = ppuVar22;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  uStack_118 = 0x1072388b0;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = ppuVar13;
  ppuStack_140 = ppuVar5;
  ppuStack_138 = ppuVar3;
  ppuStack_130 = ppuVar22;
  ppuStack_128 = ppuVar11;
  ppuStack_120 = &puStack_c0;
  _objc_retain(ppuVar13);
  puVar21 = ppuVar10[7];
  if (((puVar21 == (undefined *)0x7) || (puVar21 == (undefined *)0x59)) ||
     (puVar21 == (undefined *)0x54)) {
    iVar1 = (int)ppuVar10[4];
    ppuVar9 = (undefined **)ppuVar10[5];
    func_0x000108539be8();
    if (iVar1 == 0) goto LAB_107238928;
    ppuVar11 = *(undefined ***)(*(long *)(ppuVar10[6] + 8) + 0x28);
    *(undefined **)(*(long *)(ppuVar10[6] + 8) + 0x28) = PTR____NSDictionary0__struct_11034ab58;
  }
  else {
LAB_107238928:
    ppuVar11 = (undefined **)ppuVar10[5];
    func_0x000108f4a260();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_168 = &PTR____CFConstantStringClassReference_110f0d6b8;
    ppuStack_160 = &PTR____CFConstantStringClassReference_110f0dcf8;
    puVar21 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_158 = ppuVar11;
    ppuStack_150 = ppuVar11;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(*(long *)(ppuVar10[6] + 8) + 0x28);
    *(undefined **)(*(long *)(ppuVar10[6] + 8) + 0x28) = puVar21;
    _objc_release(uVar20);
    ppuVar3 = ppuVar11;
  }
  _objc_release(ppuVar11);
  ppuVar11 = ppuVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  uStack_178 = 0x1072389d4;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar22 = ppuVar9;
  ppuStack_1a0 = ppuVar5;
  ppuStack_198 = ppuVar3;
  ppuStack_190 = ppuVar10;
  ppuStack_188 = ppuVar13;
  pppuStack_180 = &ppuStack_120;
  _objc_retain(ppuVar9);
  ppuVar3 = ppuVar9;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar3;
  func_0x00010c08fa60();
  _objc_release(ppuVar3);
  ppuVar13 = (undefined **)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    ppuStack_1c8 = &PTR____CFConstantStringClassReference_110f0d6b8;
    ppuVar3 = ppuVar9;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_1c0 = &PTR____CFConstantStringClassReference_110f0dcf8;
    ppuVar13 = ppuVar9;
    ppuStack_1b8 = ppuVar3;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_1b0 = ppuVar13;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(*(long *)(ppuVar11[5] + 8) + 0x28);
    *(undefined **)(*(long *)(ppuVar11[5] + 8) + 0x28) = puVar21;
    _objc_release(uVar20);
    _objc_release(ppuVar13);
    _objc_release(ppuVar3);
  }
  ppuVar5 = ppuVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  uStack_1d8 = 0x107238b00;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar10 = ppuVar22;
  ppuStack_200 = ppuVar13;
  ppuStack_1f8 = ppuVar3;
  ppuStack_1f0 = ppuVar11;
  ppuStack_1e8 = ppuVar9;
  pppuStack_1e0 = &pppuStack_180;
  _objc_retain(ppuVar22);
  ppuVar3 = ppuVar22;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar3;
  func_0x00010c08fa60();
  _objc_release(ppuVar3);
  ppuVar13 = (undefined **)0x0;
  if (ppuVar11 != (undefined **)0x0) {
    ppuStack_228 = &PTR____CFConstantStringClassReference_110f0d6b8;
    ppuVar3 = ppuVar22;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_220 = &PTR____CFConstantStringClassReference_110f0dcf8;
    ppuVar13 = ppuVar22;
    ppuStack_218 = ppuVar3;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_210 = ppuVar13;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(*(long *)(ppuVar5[5] + 8) + 0x28);
    *(undefined **)(*(long *)(ppuVar5[5] + 8) + 0x28) = puVar21;
    _objc_release(uVar20);
    _objc_release(ppuVar13);
    _objc_release(ppuVar3);
  }
  ppuVar11 = ppuVar22;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  pcStack_238 = FUN_107238c2c;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = ppuVar10;
  ppuStack_270 = ppuVar8;
  ppuStack_268 = ppuVar4;
  ppuStack_260 = ppuVar13;
  ppuStack_258 = ppuVar3;
  ppuStack_250 = ppuVar5;
  ppuStack_248 = ppuVar22;
  pppuStack_240 = &pppuStack_1e0;
  _objc_retain(ppuVar10);
  puVar12 = ppuVar11[4];
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar12;
  func_0x00010bf5b380();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar21;
  func_0x00010c08fa60();
  _objc_release(puVar21);
  _objc_release(puVar12);
  if (puVar23 == (undefined *)0x0) {
    ppuVar4 = ppuVar10;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010c08fa60();
    _objc_release(ppuVar4);
    ppuVar13 = (undefined **)0x0;
    ppuVar3 = (undefined **)0x0;
    if (ppuVar5 == (undefined **)0x0) goto LAB_107238e18;
    ppuStack_2b8 = &PTR____CFConstantStringClassReference_110f0d6b8;
    ppuVar4 = ppuVar10;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_2b0 = &PTR____CFConstantStringClassReference_110f0dcf8;
    ppuVar3 = ppuVar10;
    ppuStack_2a8 = ppuVar4;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_2a0 = ppuVar3;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = *(undefined ***)(*(long *)(ppuVar11[5] + 8) + 0x28);
    *(undefined **)(*(long *)(ppuVar11[5] + 8) + 0x28) = puVar21;
  }
  else {
    ppuStack_298 = &PTR____CFConstantStringClassReference_110f0d6b8;
    ppuVar4 = (undefined **)ppuVar11[4];
    func_0x00010bf5b080();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar4;
    func_0x00010bf5b380();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_290 = &PTR____CFConstantStringClassReference_110f0dcf8;
    ppuVar13 = (undefined **)ppuVar11[4];
    ppuStack_288 = ppuVar3;
    func_0x00010bf5b080();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar13;
    func_0x00010bf5b380();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_280 = ppuVar8;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(*(long *)(ppuVar11[5] + 8) + 0x28);
    *(undefined **)(*(long *)(ppuVar11[5] + 8) + 0x28) = puVar21;
    _objc_release(uVar20);
    _objc_release(ppuVar8);
  }
  _objc_release(ppuVar13);
  _objc_release(ppuVar3);
  _objc_release(ppuVar4);
LAB_107238e18:
  ppuVar5 = ppuVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return;
  }
  ___stack_chk_fail();
  pcStack_2c8 = FUN_107238e54;
  lStack_318 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_310 = unaff_x26;
  ppuStack_308 = unaff_x25;
  ppuStack_300 = ppuVar8;
  ppuStack_2f8 = ppuVar13;
  ppuStack_2f0 = ppuVar3;
  ppuStack_2e8 = ppuVar4;
  ppuStack_2e0 = ppuVar11;
  ppuStack_2d8 = ppuVar10;
  pppuStack_2d0 = &pppuStack_240;
  _objc_retain(ppuVar9);
  ppuVar13 = ppuVar9;
  func_0x00010c25b6c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar13;
  func_0x00010c08fa60();
  ppuVar4 = ppuVar9;
  if (ppuVar3 == (undefined **)0x0) {
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c25b6c0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar13);
  ppuStack_348 = &PTR____CFConstantStringClassReference_110f0d6b8;
  ppuStack_340 = &PTR____CFConstantStringClassReference_110f0dcf8;
  ppuVar13 = ppuVar9;
  ppuStack_330 = ppuVar4;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_338 = &PTR____CFConstantStringClassReference_110f0dd18;
  ppuVar3 = ppuVar9;
  ppuStack_328 = ppuVar13;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_320 = ppuVar3;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar21;
  func_0x00010c0d3c80();
  _objc_release(puVar21);
  _objc_release(ppuVar3);
  _objc_release(ppuVar13);
  puVar21 = ppuVar5[4];
  ppuVar13 = (undefined **)PTR_PTR_1126c11f8;
  func_0x00010c14bc40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f320();
  _objc_release(ppuVar13);
  if ((int)puVar21 != 0) {
    ppuVar13 = ppuVar9;
    func_0x00010bf82560();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar13;
    func_0x00010c0e1a60();
    _objc_release(ppuVar13);
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar13 = ppuVar9;
      func_0x00010bf82560();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c238c20();
      _objc_release(ppuVar13);
    }
    puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar23);
    _objc_release(puVar21);
  }
  puVar12 = puVar23;
  func_0x00010bf51e00();
  uVar20 = *(undefined8 *)(*(long *)(ppuVar5[5] + 8) + 0x28);
  *(undefined **)(*(long *)(ppuVar5[5] + 8) + 0x28) = puVar12;
  _objc_release(uVar20);
  _objc_release(puVar23);
  _objc_release(ppuVar4);
  ppuVar3 = ppuVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_318) {
    return;
  }
  ___stack_chk_fail();
  pcStack_358 = FUN_1072390b0;
  lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = ppuVar3[4];
  puVar17 = ppuVar3[5];
  ppuStack_370 = ppuVar5;
  ppuStack_368 = ppuVar9;
  pppuStack_360 = &pppuStack_2d0;
  func_0x000107d249d0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_3a8 = &PTR____CFConstantStringClassReference_110f0d6b8;
  ppuStack_3a0 = &PTR____CFConstantStringClassReference_110f0dcf8;
  ppuStack_398 = &PTR____CFConstantStringClassReference_110f0dd18;
  puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_390 = puVar14;
  puStack_388 = puVar14;
  puStack_380 = puVar14;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(*(long *)(ppuVar3[6] + 8) + 0x28);
  *(undefined **)(*(long *)(ppuVar3[6] + 8) + 0x28) = puVar12;
  _objc_release(uVar20);
  puVar12 = puVar14;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_378) {
    return;
  }
  ___stack_chk_fail();
  pcStack_3b8 = FUN_10723918c;
  lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar16 = puVar17;
  ppuStack_3f0 = ppuVar13;
  puStack_3e8 = puVar21;
  puStack_3e0 = puVar23;
  ppuStack_3d8 = ppuVar4;
  puStack_3d0 = puVar14;
  ppuStack_3c8 = ppuVar3;
  pppuStack_3c0 = &pppuStack_360;
  _objc_retain(puVar17);
  puVar21 = puVar17;
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar21;
  func_0x00010bfe9ee0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar23;
  func_0x00010bf24fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010c08fa60();
  _objc_release(puVar14);
  _objc_release(puVar23);
  _objc_release(puVar21);
  if (puVar15 == (undefined *)0x0) {
    uVar20 = *(undefined8 *)(puVar12 + 0x20);
    puVar16 = *(undefined **)(puVar12 + 0x28);
    ppuVar13 = *(undefined ***)(puVar12 + 0x30);
    pppuVar18 = *(undefined ****)(puVar12 + 0x38);
    uVar19 = *(undefined8 *)(puVar12 + 0x40);
    FUN_107239320(uVar20,puVar16,ppuVar13,pppuVar18,uVar19);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = *(undefined **)(*(long *)(*(long *)(puVar12 + 0x48) + 8) + 0x28);
    *(undefined8 *)(*(long *)(*(long *)(puVar12 + 0x48) + 8) + 0x28) = uVar20;
  }
  else {
    ppuStack_408 = &PTR____CFConstantStringClassReference_110f0d978;
    puVar21 = puVar17;
    func_0x00010bf82560();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar21;
    func_0x00010bfe9ee0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar23;
    func_0x00010bf24fc0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = &puStack_400;
    pppuVar18 = &ppuStack_408;
    uVar19 = 1;
    puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_400 = puVar14;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(*(long *)(*(long *)(puVar12 + 0x48) + 8) + 0x28);
    *(undefined **)(*(long *)(*(long *)(puVar12 + 0x48) + 8) + 0x28) = puVar15;
    _objc_release(uVar20);
    _objc_release(puVar14);
    _objc_release(puVar23);
  }
  _objc_release(puVar21);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3f8) {
    ___stack_chk_fail();
    lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(ppuVar13);
    puVar21 = puVar17;
    func_0x000107d267d0(puVar17,puVar16,pppuVar18,uVar19);
    _objc_retainAutoreleasedReturnValue();
    if (puVar21 == (undefined *)0x0) {
      puVar23 = (undefined *)0x0;
    }
    else {
      puVar12 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      func_0x00010c1d0640();
      puVar23 = PTR_PTR_1126b19f8;
      func_0x00010c258040();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar12);
      _objc_release(puVar16);
      _objc_release(puVar14);
      _objc_release(puVar23);
      puVar23 = puVar17;
      func_0x00010bf0e700(puVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c1320();
      _objc_release(puVar23);
      puVar23 = puVar12;
      func_0x00010bf51e00(puVar12);
      _objc_release(puVar12);
    }
    _objc_release(puVar21);
    _objc_release(ppuVar13);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar2) {
      ___stack_chk_fail();
      uVar20 = *(undefined8 *)(puVar17 + 0x20);
      FUN_107239320(uVar20,*(undefined8 *)(puVar17 + 0x28),*(undefined8 *)(puVar17 + 0x30),
                    *(undefined8 *)(puVar17 + 0x38),*(undefined8 *)(puVar17 + 0x40));
      _objc_retainAutoreleasedReturnValue();
      uVar19 = *(undefined8 *)(*(long *)(*(long *)(puVar17 + 0x48) + 8) + 0x28);
      *(undefined8 *)(*(long *)(*(long *)(puVar17 + 0x48) + 8) + 0x28) = uVar20;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar19);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar23);
    return;
  }
  return;
}



/* Entry: 1072387b8; end: 107238c2b;  */

void FUN_1072387b8(long param_1,undefined *param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined ***pppuVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined **ppuStack_358;
  long lStack_350;
  long lStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  long lStack_320;
  undefined *puStack_318;
  undefined8 **ppuStack_310;
  code *pcStack_308;
  undefined **ppuStack_2f8;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 **ppuStack_2b0;
  code *pcStack_2a8;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  long lStack_268;
  undefined8 **ppuStack_220;
  code *pcStack_218;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined8 **ppuStack_190;
  code *pcStack_188;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 **ppuStack_130;
  undefined8 uStack_128;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined1 **ppuStack_d0;
  undefined8 uStack_c8;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar2;
  func_0x00010c08fa60();
  lVar18 = lVar2;
  if (lVar17 == 0) {
    lVar18 = *(long *)(param_1 + 0x28);
    _objc_retain(lVar18);
    _objc_release(lVar2);
  }
  lVar17 = lVar18;
  func_0x00010c08fa60();
  if (lVar17 != 0) {
    ppuStack_58 = &PTR____CFConstantStringClassReference_110f0d6b8;
    ppuStack_50 = &PTR____CFConstantStringClassReference_110f0dcf8;
    puVar20 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_48 = lVar18;
    lStack_40 = lVar18;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    uVar15 = *(undefined8 *)(lVar17 + 0x28);
    *(undefined **)(lVar17 + 0x28) = puVar20;
    _objc_release(uVar15);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  uStack_68 = 0x1072388b0;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar20 = param_2;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  lVar17 = *(long *)(lVar18 + 0x38);
  if (((lVar17 == 7) || (lVar17 == 0x59)) || (lVar17 == 0x54)) {
    iVar1 = (int)*(undefined8 *)(lVar18 + 0x20);
    puVar20 = *(undefined **)(lVar18 + 0x28);
    func_0x000108539be8();
    if (iVar1 == 0) goto LAB_107238928;
    lVar17 = *(long *)(*(long *)(lVar18 + 0x30) + 8);
    uVar15 = *(undefined8 *)(lVar17 + 0x28);
    *(undefined **)(lVar17 + 0x28) = PTR____NSDictionary0__struct_11034ab58;
  }
  else {
LAB_107238928:
    uVar15 = *(undefined8 *)(lVar18 + 0x28);
    func_0x000108f4a260();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_b8 = &PTR____CFConstantStringClassReference_110f0d6b8;
    ppuStack_b0 = &PTR____CFConstantStringClassReference_110f0dcf8;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    uStack_a8 = uVar15;
    uStack_a0 = uVar15;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = *(long *)(*(long *)(lVar18 + 0x30) + 8);
    uVar14 = *(undefined8 *)(lVar17 + 0x28);
    *(undefined **)(lVar17 + 0x28) = puVar5;
    _objc_release(uVar14);
  }
  _objc_release(uVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  uStack_c8 = 0x1072389d4;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar20;
  ppuStack_d0 = &puStack_70;
  _objc_retain(puVar20);
  puVar19 = puVar20;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar19;
  func_0x00010c08fa60();
  _objc_release(puVar19);
  puVar5 = (undefined *)0x0;
  if (puVar3 != (undefined *)0x0) {
    ppuStack_118 = &PTR____CFConstantStringClassReference_110f0d6b8;
    puVar19 = puVar20;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_110 = &PTR____CFConstantStringClassReference_110f0dcf8;
    puVar5 = puVar20;
    puStack_108 = puVar19;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_100 = puVar5;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + 0x28);
    *(undefined **)(*(long *)(*(long *)(param_2 + 0x28) + 8) + 0x28) = puVar3;
    _objc_release(uVar15);
    _objc_release(puVar5);
    _objc_release(puVar19);
  }
  puVar3 = puVar20;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  uStack_128 = 0x107238b00;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar4;
  puStack_150 = puVar5;
  puStack_148 = puVar19;
  puStack_140 = param_2;
  puStack_138 = puVar20;
  ppuStack_130 = &ppuStack_d0;
  _objc_retain(puVar4);
  puVar20 = puVar4;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar20;
  func_0x00010c08fa60();
  _objc_release(puVar20);
  if (puVar5 != (undefined *)0x0) {
    ppuStack_178 = &PTR____CFConstantStringClassReference_110f0d6b8;
    puVar20 = puVar4;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_170 = &PTR____CFConstantStringClassReference_110f0dcf8;
    puVar5 = puVar4;
    puStack_168 = puVar20;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_160 = puVar5;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(*(long *)(*(long *)(puVar3 + 0x28) + 8) + 0x28);
    *(undefined **)(*(long *)(*(long *)(puVar3 + 0x28) + 8) + 0x28) = puVar19;
    _objc_release(uVar15);
    _objc_release(puVar5);
    _objc_release(puVar20);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  pcStack_188 = FUN_107238c2c;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar20 = puVar6;
  ppuStack_190 = &ppuStack_130;
  _objc_retain(puVar6);
  lVar2 = *(long *)(puVar4 + 0x20);
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar2;
  func_0x00010bf5b380();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010c08fa60();
  _objc_release(lVar17);
  _objc_release(lVar2);
  if (lVar18 == 0) {
    puVar5 = puVar6;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar5;
    func_0x00010c08fa60();
    _objc_release(puVar5);
    if (puVar19 == (undefined *)0x0) goto LAB_107238e18;
    ppuStack_208 = &PTR____CFConstantStringClassReference_110f0d6b8;
    puVar5 = puVar6;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_200 = &PTR____CFConstantStringClassReference_110f0dcf8;
    puVar19 = puVar6;
    puStack_1f8 = puVar5;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_1f0 = puVar19;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(*(long *)(*(long *)(puVar4 + 0x28) + 8) + 0x28);
    *(undefined **)(*(long *)(*(long *)(puVar4 + 0x28) + 8) + 0x28) = puVar3;
  }
  else {
    ppuStack_1e8 = &PTR____CFConstantStringClassReference_110f0d6b8;
    puVar5 = *(undefined **)(puVar4 + 0x20);
    func_0x00010bf5b080();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar5;
    func_0x00010bf5b380();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_1e0 = &PTR____CFConstantStringClassReference_110f0dcf8;
    uVar15 = *(undefined8 *)(puVar4 + 0x20);
    puStack_1d8 = puVar19;
    func_0x00010bf5b080();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar15;
    func_0x00010bf5b380();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    uStack_1d0 = uVar14;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(*(long *)(*(long *)(puVar4 + 0x28) + 8) + 0x28);
    *(undefined **)(*(long *)(*(long *)(puVar4 + 0x28) + 8) + 0x28) = puVar3;
    _objc_release(uVar16);
    _objc_release(uVar14);
  }
  _objc_release(uVar15);
  _objc_release(puVar19);
  _objc_release(puVar5);
LAB_107238e18:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_218 = FUN_107238e54;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_220 = &ppuStack_190;
  _objc_retain(puVar20);
  puVar5 = puVar20;
  func_0x00010c25b6c0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar5;
  func_0x00010c08fa60();
  puVar3 = puVar20;
  if (puVar19 == (undefined *)0x0) {
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c25b6c0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar5);
  ppuStack_298 = &PTR____CFConstantStringClassReference_110f0d6b8;
  ppuStack_290 = &PTR____CFConstantStringClassReference_110f0dcf8;
  puVar5 = puVar20;
  puStack_280 = puVar3;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_288 = &PTR____CFConstantStringClassReference_110f0dd18;
  puVar19 = puVar20;
  puStack_278 = puVar5;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_270 = puVar19;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010c0d3c80();
  _objc_release(puVar4);
  _objc_release(puVar19);
  _objc_release(puVar5);
  puVar19 = *(undefined **)(puVar6 + 0x20);
  puVar5 = PTR_PTR_1126c11f8;
  func_0x00010c14bc40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f320();
  _objc_release(puVar5);
  if ((int)puVar19 != 0) {
    puVar5 = puVar20;
    func_0x00010bf82560();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar5;
    func_0x00010c0e1a60();
    _objc_release(puVar5);
    if (puVar19 == (undefined *)0x0) {
      puVar5 = puVar20;
      func_0x00010bf82560();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c238c20();
      _objc_release(puVar5);
    }
    puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar7);
    _objc_release(puVar19);
  }
  puVar4 = puVar7;
  func_0x00010bf51e00();
  uVar15 = *(undefined8 *)(*(long *)(*(long *)(puVar6 + 0x28) + 8) + 0x28);
  *(undefined **)(*(long *)(*(long *)(puVar6 + 0x28) + 8) + 0x28) = puVar4;
  _objc_release(uVar15);
  _objc_release(puVar7);
  _objc_release(puVar3);
  puVar4 = puVar20;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  pcStack_2a8 = FUN_1072390b0;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = *(long *)(puVar4 + 0x20);
  lVar2 = *(long *)(puVar4 + 0x28);
  puStack_2c0 = puVar6;
  puStack_2b8 = puVar20;
  ppuStack_2b0 = &ppuStack_220;
  func_0x000107d249d0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_2f8 = &PTR____CFConstantStringClassReference_110f0d6b8;
  ppuStack_2f0 = &PTR____CFConstantStringClassReference_110f0dcf8;
  ppuStack_2e8 = &PTR____CFConstantStringClassReference_110f0dd18;
  puVar20 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_2e0 = lVar18;
  lStack_2d8 = lVar18;
  lStack_2d0 = lVar18;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(*(long *)(*(long *)(puVar4 + 0x30) + 8) + 0x28);
  *(undefined **)(*(long *)(*(long *)(puVar4 + 0x30) + 8) + 0x28) = puVar20;
  _objc_release(uVar15);
  lVar17 = lVar18;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_308 = FUN_10723918c;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = lVar2;
  puStack_340 = puVar5;
  puStack_338 = puVar19;
  puStack_330 = puVar7;
  puStack_328 = puVar3;
  lStack_320 = lVar18;
  puStack_318 = puVar4;
  ppuStack_310 = &ppuStack_2b0;
  _objc_retain(lVar2);
  lVar18 = lVar2;
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar18;
  func_0x00010bfe9ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf24fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c08fa60();
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar18);
  if (lVar10 == 0) {
    uVar15 = *(undefined8 *)(lVar17 + 0x20);
    lVar11 = *(long *)(lVar17 + 0x28);
    plVar12 = *(long **)(lVar17 + 0x30);
    pppuVar13 = *(undefined ****)(lVar17 + 0x38);
    uVar14 = *(undefined8 *)(lVar17 + 0x40);
    FUN_107239320(uVar15,lVar11,plVar12,pppuVar13,uVar14);
    _objc_retainAutoreleasedReturnValue();
    lVar17 = *(long *)(*(long *)(lVar17 + 0x48) + 8);
    lVar18 = *(long *)(lVar17 + 0x28);
    *(undefined8 *)(lVar17 + 0x28) = uVar15;
  }
  else {
    ppuStack_358 = &PTR____CFConstantStringClassReference_110f0d978;
    lVar18 = lVar2;
    func_0x00010bf82560();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar18;
    func_0x00010bfe9ee0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bf24fc0();
    _objc_retainAutoreleasedReturnValue();
    plVar12 = &lStack_350;
    pppuVar13 = &ppuStack_358;
    uVar14 = 1;
    puVar20 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_350 = lVar9;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = *(long *)(*(long *)(lVar17 + 0x48) + 8);
    uVar15 = *(undefined8 *)(lVar17 + 0x28);
    *(undefined **)(lVar17 + 0x28) = puVar20;
    _objc_release(uVar15);
    _objc_release(lVar9);
    _objc_release(lVar8);
  }
  _objc_release(lVar18);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return;
  }
  ___stack_chk_fail();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(plVar12);
  lVar17 = lVar2;
  func_0x000107d267d0(lVar2,lVar11,pppuVar13,uVar14);
  _objc_retainAutoreleasedReturnValue();
  if (lVar17 == 0) {
    puVar20 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010c1d0640();
    puVar20 = PTR_PTR_1126b19f8;
    func_0x00010c258040();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar19);
    _objc_release(puVar20);
    lVar11 = lVar2;
    func_0x00010bf0e700(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c1320();
    _objc_release(lVar11);
    puVar20 = puVar5;
    func_0x00010bf51e00(puVar5);
    _objc_release(puVar5);
  }
  _objc_release(lVar17);
  _objc_release(plVar12);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
    return;
  }
  ___stack_chk_fail();
  uVar15 = *(undefined8 *)(lVar2 + 0x20);
  FUN_107239320(uVar15,*(undefined8 *)(lVar2 + 0x28),*(undefined8 *)(lVar2 + 0x30),
                *(undefined8 *)(lVar2 + 0x38),*(undefined8 *)(lVar2 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  lVar17 = *(long *)(*(long *)(lVar2 + 0x48) + 8);
  uVar14 = *(undefined8 *)(lVar17 + 0x28);
  *(undefined8 *)(lVar17 + 0x28) = uVar15;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar14);
  return;
}


