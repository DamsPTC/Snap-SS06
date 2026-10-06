/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1056ae450; end: 1056ae54f; -[SCPlaybackLayerEditorImpl trackIndexOfType:] */

long FUN_1056ae450(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  uStack_38 = 0x1056ae4d8;
  puStack_30 = &UNK_1108a78f8;
  uStack_28 = param_3;
  func_0x00010be17e00(param_1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar1 = 0xffffffff;
  }
  else {
    lVar1 = param_1;
    func_0x00010c277f00(param_1);
  }
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 1056ae550; end: 1056ae76f; -[SCPlaybackLayerEditorImpl moveLocalSegmentAtIndex:toIndex:] */

void FUN_1056ae550(ulong param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  uVar1 = param_1;
  func_0x00010c09dea0();
  if (((param_3 < uVar1) && (uVar1 = param_1, func_0x00010c09dea0(), param_3 != param_4)) &&
     (param_4 < uVar1)) {
    uVar1 = param_1;
    func_0x00010be17e00(param_1,param_2,&PTR___NSConcreteGlobalBlock_1108a7918);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2787a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010c2787a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3c0();
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010c2787a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066b00();
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c09e9e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c09e9e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3c0();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c09e9e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066b00();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    puVar6 = PTR_PTR_1126bce78;
    _objc_alloc(PTR_PTR_1126bce78);
    puVar7 = PTR_PTR_1126affe8;
    func_0x00010c09e180(PTR_PTR_1126affe8,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126affe8;
    func_0x00010c09e180(PTR_PTR_1126affe8,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0439a0(puVar6,param_2,puVar7,puVar8,2);
    func_0x00010c0d9840(uVar4,param_2,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(uVar5);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1056ae770; end: 1056ae78b;  */

uint FUN_1056ae770(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c074780(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 1056ae78c; end: 1056aeb4f; -[SCPlaybackLayerEditorImpl deleteSegment:] */

void FUN_1056ae78c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_1056aeb50;
  uStack_80 = 0x1056aeb60;
  uStack_78 = 0;
  func_0x00010c0be120(param_3);
  uVar1 = param_1;
  func_0x00010be17e00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = puStack_98[5];
  func_0x00010c282760();
  uVar10 = uVar1;
  func_0x00010c2787c0();
  if ((uVar2 & 0xffffffff) < uVar10) {
    uVar10 = uVar1;
    func_0x00010c2787a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c282760(puStack_98[5]);
    uVar2 = uVar10;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar2;
    func_0x00010c0ff680();
    if (-1 < (long)(uVar10 - 1)) {
      do {
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar3 = uVar2;
        func_0x00010c0ff660(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar10 - 1;
        func_0x00010c296de0();
        func_0x00010c0df820(puVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        uVar3 = param_1;
        func_0x00010bf6c5a0();
        _objc_retainAutoreleasedReturnValue();
        if (uVar3 != 0) {
          func_0x00010befa120(puVar9);
        }
        _objc_release(uVar3);
        _objc_release(puVar4);
      } while (0 < (long)uVar10);
    }
    puVar4 = puVar9;
    func_0x00010bf529e0();
    if ((puVar4 == (undefined *)0x0) || (uVar10 = uVar1, func_0x00010c074780(), (uVar10 & 1) == 0))
    {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      if (puStack_98[5] == 0) {
        func_0x00010c1a3c60(uVar5);
      }
      else {
        func_0x00010c09e9e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c282760(puStack_98[5]);
        func_0x00010c12d3c0(uVar5);
        _objc_release(uVar5);
      }
      uVar10 = uVar1;
      func_0x00010c2787a0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c282760(puStack_98[5]);
      func_0x00010c12d3c0(uVar10);
      _objc_release(uVar10);
      uVar10 = uVar1;
      func_0x00010c2787c0();
      if (uVar10 == 0) {
        uVar6 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c0fee00(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar6;
        func_0x00010c0c4c40();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar5;
        func_0x00010c08c260();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c2791c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d360();
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar5);
        _objc_release(uVar6);
      }
    }
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    puVar4 = PTR_PTR_1126bce78;
    _objc_alloc(PTR_PTR_1126bce78);
    func_0x00010c0439a0();
    func_0x00010c0d9840(uVar5);
    _objc_release(puVar4);
    _objc_release(uVar2);
  }
  else {
    puVar9 = (undefined *)0x0;
  }
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1056aeb50; end: 1056aeb67;  */

void FUN_1056aeb50(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1056aeb68; end: 1056aebeb;  */

void FUN_1056aeb68(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1056aebec; end: 1056aee2b; -[SCPlaybackLayerEditorImpl addPlaybackLayer:segment:] */

void FUN_1056aebec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_4);
  func_0x00010bf51e00(param_3);
  puVar1 = PTR_PTR_1126bce70;
  func_0x00010c27df00();
  lVar2 = param_1;
  func_0x00010c0ff540(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_1056af754(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0fee00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ff5e0();
  func_0x00010c1dd6a0(uVar3);
  func_0x00010c1dd680(param_3);
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0fee00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    uVar5 = uVar3;
    func_0x0001006372a4(uVar3,&PTR___NSConcreteGlobalBlock_1108a7968);
    func_0x00010bf529e0();
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0fee00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066b00();
  }
  else {
    func_0x00010befa120(uVar3);
  }
  _objc_release(uVar3);
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0ff5c0(param_3);
  func_0x00010c0df820(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 8));
  func_0x00010be3c6c0(param_1);
  func_0x00010bdcf760(param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  puVar6 = PTR_PTR_1126bce68;
  _objc_alloc(PTR_PTR_1126bce68);
  uVar3 = param_3;
  func_0x00010bf51e00(param_3);
  func_0x00010c0439c0(puVar6);
  func_0x00010c0d9840(uVar4);
  _objc_release(puVar6);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1056aee2c; end: 1056aee6f;  */

bool FUN_1056aee2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf0b760();
  _objc_release(param_2);
  return (int)uVar1 == 5;
}



/* Entry: 1056aee70; end: 1056aefc7; -[SCPlaybackLayerEditorImpl addTimedPlaybackLayer:] */

void FUN_1056aee70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x00010bf51e00(param_3);
  func_0x00010c27df00(PTR_PTR_1126bce70,param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0fee00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ff5e0();
  func_0x00010c1dd6a0(uVar1,param_2,(int)uVar2 + 1);
  func_0x00010c1dd680(param_3,param_2,(int)uVar2 + 1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0fee00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010c0ff5c0(param_3);
  func_0x00010c0df820(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,param_3,puVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puVar4 = PTR_PTR_1126bce68;
  _objc_alloc(PTR_PTR_1126bce68);
  uVar2 = param_3;
  func_0x00010bf51e00(param_3);
  func_0x00010c0439c0(puVar4,param_2,0,uVar2,1);
  func_0x00010c0d9840(uVar1,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1056aefc8; end: 1056af10f; -[SCPlaybackLayerEditorImpl updatePlaybackLayerWithId:update:] */

void FUN_1056aefc8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar5 = 0;
    goto LAB_1056af0d4;
  }
  lVar2 = param_1;
  func_0x00010c158480();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar5 = lVar1;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar5;
    func_0x00010bfd7800();
    _objc_release(lVar5);
    if ((int)lVar3 != 0) goto LAB_1056af05c;
    lVar5 = 0;
  }
  else {
LAB_1056af05c:
    lVar5 = lVar1;
    func_0x00010bf51e00(lVar1);
    (**(code **)(param_4 + 0x10))(param_4,lVar5);
    func_0x00010bf3a660(lVar1);
    func_0x00010c0caba0(lVar1);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    puVar4 = PTR_PTR_1126bce68;
    _objc_alloc(PTR_PTR_1126bce68);
    func_0x00010c0439c0();
    func_0x00010c0d9840(uVar6);
    _objc_release(puVar4);
  }
  _objc_release(lVar2);
LAB_1056af0d4:
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 1056af110; end: 1056af20f; -[SCPlaybackLayerEditorImpl updateTrackSegmentWithIndex:update:] */

void FUN_1056af110(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bece0c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010bf51e00(lVar1);
    (**(code **)(param_4 + 0x10))(param_4,lVar2);
    func_0x00010bf3a660(lVar1);
    func_0x00010c0caba0(lVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    puVar3 = PTR_PTR_1126bce78;
    _objc_alloc(PTR_PTR_1126bce78);
    func_0x00010c0439a0();
    func_0x00010c0d9840(uVar4);
    _objc_release(puVar3);
    _objc_retain(param_3);
    _objc_release(lVar2);
    uVar4 = param_3;
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1056af210; end: 1056af3df; -[SCPlaybackLayerEditorImpl _insertPlaybackLayer:segment:] */

void FUN_1056af210(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bce70;
  func_0x00010c27df00(PTR_PTR_1126bce70,param_2,param_3);
  if (puVar1 < (undefined *)0xd) {
    func_0x00010bdc8240(param_1,param_2,param_4);
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010bfc1d80(uVar2,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == 0) {
      uVar3 = param_1;
      _objc_opt_class();
      func_0x00010bdf95e0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(uVar2);
      uVar3 = uVar2;
    }
    _objc_release(uVar2);
    uVar2 = uVar3;
    func_0x00010c0dfd40(uVar3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c282760();
    _objc_release(uVar2);
    func_0x00010bece0c0(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0ff680();
    if ((uVar4 & 0xffffffff) <= uVar2) {
      do {
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar2 = uVar3;
        func_0x00010c0dfd40(uVar3,param_2,puVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar2;
        func_0x00010c067ec0();
        func_0x00010c0df760(puVar6,param_2,(int)uVar5 + 1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c130f40(uVar3,param_2,puVar1,puVar6);
        _objc_release(puVar6);
        _objc_release(uVar2);
        puVar1 = puVar1 + 1;
      } while (puVar1 != (undefined *)0xd);
      uVar2 = param_1;
      func_0x00010c0ff660(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_3;
      func_0x00010c0ff5c0(param_3);
      func_0x00010c0671e0(uVar2,param_2,uVar7,uVar4 & 0xffffffff);
      _objc_release(uVar2);
    }
    _objc_release(param_1);
    _objc_release(uVar3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056af3e0; end: 1056af753; -[SCPlaybackLayerEditorImpl _addSegmentIfNeededForSegment:] */

void FUN_1056af3e0(undefined *param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  ulong uStack_58;
  
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010c0ff540(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_1056af754(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  uVar2 = param_3;
  FUN_1056af754();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1056af830;
  puStack_60 = &UNK_1108a78c8;
  _objc_retain(uVar2);
  puVar1 = param_1;
  uStack_58 = uVar2;
  func_0x00010be17e00(param_1,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126bce80;
    _objc_opt_new();
    func_0x00010c2191c0();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0fee00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c08c260();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c277f20();
    func_0x00010c218fe0(uVar7,param_2,(int)uVar8 + 1);
    func_0x00010c218fc0(puVar1,param_2,(int)uVar8 + 1);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    func_0x00010c1b1880(puVar1,param_2,uVar2 == 0);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0fee00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c08c260();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c2791c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    if (uVar2 == 0) goto LAB_1056af670;
LAB_1056af4b0:
    uVar3 = uVar2;
    func_0x00010c282760();
    puVar4 = puVar1;
    func_0x00010c2787a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar4;
    func_0x00010bf529e0();
    _objc_release(puVar4);
    if (puVar9 != (undefined *)(uVar3 & 0xffffffff)) goto LAB_1056af720;
    puVar4 = puVar1;
    func_0x00010c2787a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126bce88;
    _objc_opt_new(PTR_PTR_1126bce88);
    func_0x00010befa120(puVar4,param_2,puVar9);
    _objc_release(puVar9);
    _objc_release(puVar4);
    puVar4 = *(undefined **)(param_1 + 0x20);
    func_0x00010c09e9e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(param_1);
    func_0x00010bdf95e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar4,param_2,param_1);
    _objc_release(param_1);
  }
  else {
    if (uVar2 != 0) goto LAB_1056af4b0;
LAB_1056af670:
    puVar4 = puVar1;
    func_0x00010c2787a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar4;
    func_0x00010bf529e0();
    _objc_release(puVar4);
    if (puVar9 == (undefined *)0x0) {
      puVar4 = puVar1;
      func_0x00010c2787a0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126bce88;
      _objc_opt_new(PTR_PTR_1126bce88);
      func_0x00010befa120(puVar4,param_2,puVar9);
      _objc_release(puVar9);
      _objc_release(puVar4);
    }
    lVar10 = *(long *)(param_1 + 0x20);
    func_0x00010bfccec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar10 != 0) goto LAB_1056af720;
    puVar4 = param_1;
    _objc_opt_class(param_1);
    func_0x00010bdf95e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a3c60(*(undefined8 *)(param_1 + 0x20),param_2,puVar4);
  }
  _objc_release(puVar4);
LAB_1056af720:
  _objc_release(puVar1);
  _objc_release(uStack_58);
  _objc_release(uVar2);
  return;
}



/* Entry: 1056af754; end: 1056af82f;  */

void FUN_1056af754(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1056aeb50;
  uStack_30 = 0x1056aeb60;
  uStack_28 = 0;
  func_0x00010c0be120(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056af830; end: 1056af863;  */

uint FUN_1056af830(long param_1,undefined8 param_2)

{
  func_0x00010c074780(param_2);
  return (uint)param_2 ^ (uint)(*(long *)(param_1 + 0x20) != 0);
}



/* Entry: 1056af864; end: 1056af8bf; +[SCPlaybackLayerEditorImpl _defaultPlaybackLayerTypeCountsArray] */

void FUN_1056af864(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0xd;
  do {
    func_0x00010befa120(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c14b0);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1056af8c0; end: 1056af9eb; -[SCPlaybackLayerEditorImpl _trackSegmentAtIndex:] */

void FUN_1056af8c0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  ulong uStack_48;
  
  FUN_1056af754();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1056af9ec;
  puStack_50 = &UNK_1108a78c8;
  _objc_retain();
  uStack_48 = param_3;
  func_0x00010be17e00(param_1,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c282760();
  uVar1 = param_1;
  func_0x00010c2787a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  if ((uVar3 & 0xffffffff) < uVar2) {
    uVar1 = param_1;
    func_0x00010c2787a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c282760(param_3);
    uVar3 = uVar1;
    func_0x00010c0dfd40(uVar1,param_2,uVar2 & 0xffffffff);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_1);
  _objc_release(uStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1056af9ec; end: 1056afa1f;  */

uint FUN_1056af9ec(long param_1,undefined8 param_2)

{
  func_0x00010c074780(param_2);
  return (uint)param_2 ^ (uint)(*(long *)(param_1 + 0x20) != 0);
}



/* Entry: 1056afa20; end: 1056afb83; -[SCPlaybackLayerEditorImpl _firstTrackWhere:] */

void FUN_1056afa20(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_3);
  uVar10 = 0;
  while( true ) {
    uVar1 = *(ulong *)(param_1 + 0x28);
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c08c260();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c2791c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf529e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (uVar5 <= uVar10) break;
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0fee00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c08c260();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c2791c0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar9;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    uVar2 = param_3;
    (**(code **)(param_3 + 0x10))(param_3,uVar11);
    if ((uVar2 & 1) != 0) goto LAB_1056afb60;
    _objc_release(uVar11);
    uVar10 = uVar10 + 1;
  }
  uVar11 = 0;
LAB_1056afb60:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar11);
  return;
}



/* Entry: 1056afb84; end: 1056afcb7; -[SCPlaybackLayerEditorImpl _errorWithMessage:] */

undefined * FUN_1056afb84(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  undefined *puVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  undefined *puVar25;
  ulong uVar26;
  long lStack_360;
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
  undefined8 uStack_2a0;
  long lStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined1 auStack_260 [128];
  undefined1 auStack_1e0 [128];
  undefined1 auStack_160 [128];
  long lStack_e0;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uStack_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar20 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&uStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = 0;
  puVar14 = param_1;
  puVar2 = puVar20;
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar20);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  lStack_e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar14);
  FUN_1056af754();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010c0e00e0(lVar3,param_2,puVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = (uint)uVar15;
  if (uVar22 == (lVar3 == 0)) goto LAB_1056b0388;
  if (uVar22 == 0) {
LAB_1056afe80:
    puVar4 = param_1;
    func_0x00010c0ff540();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      if (uVar22 != 0) {
        puVar1 = puVar4;
        func_0x00010bfccec0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar1 == (undefined *)0x0) goto LAB_1056b0380;
      }
    }
    else if (uVar22 != 0) {
      puVar1 = puVar2;
      func_0x00010c282760();
      puVar20 = puVar4;
      func_0x00010c09e9e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar20;
      func_0x00010bf529e0();
      _objc_release(puVar20);
      if (puVar6 <= (undefined *)((ulong)puVar1 & 0xffffffff)) goto LAB_1056b0380;
    }
    puVar1 = puVar4;
    func_0x00010c09e9e0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar1;
    func_0x00010c0d3c80();
    _objc_release(puVar1);
    puVar1 = puVar20;
    func_0x00010bf529e0();
    puVar6 = puVar4;
    func_0x00010bfccec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar6 != (undefined *)0x0) {
      puVar25 = puVar4;
      func_0x00010bfccec0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar20,param_2,puVar25);
      _objc_release(puVar25);
    }
    if ((undefined *)0x1 < puVar1 + (puVar6 != (undefined *)0x0)) {
      puVar25 = (undefined *)0x0;
      do {
        uVar16 = (uint)((puVar1 == puVar25) != (puVar2 != (undefined *)0x0));
        if ((puVar2 != (undefined *)0x0) && (puVar1 != puVar25)) {
          puVar7 = puVar2;
          func_0x00010c282760();
          uVar16 = (uint)(puVar25 == (undefined *)((ulong)puVar7 & 0xffffffff));
        }
        puVar7 = puVar20;
        func_0x00010c0dfd40(puVar20,param_2,puVar25);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010bf4b900();
        _objc_release(puVar7);
        if ((uVar22 & uVar16) != (uint)puVar8) goto LAB_1056b0374;
        puVar25 = puVar25 + 1;
      } while (puVar1 + (puVar6 != (undefined *)0x0) != puVar25);
    }
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    lStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_2c8 = 0;
    plStack_2d0 = (long *)0x0;
    lVar9 = *(long *)(param_1 + 0x28);
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar9;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    lVar9 = lVar17;
    func_0x00010bf52a60(lVar17,param_2,&uStack_2e0,auStack_1e0,0x10);
    if (lVar9 != 0) {
      lVar18 = *plStack_2d0;
      do {
        lVar21 = 0;
        do {
          if (*plStack_2d0 != lVar18) {
            _objc_enumerationMutation(lVar17);
          }
          uVar10 = *(ulong *)(lStack_2d8 + lVar21 * 8);
          func_0x00010c0ff5c0();
          puVar1 = puVar14;
          func_0x00010c067fc0();
          if (puVar1 == (undefined *)(uVar10 & 0xffffffff)) {
            _objc_release(lVar17);
            if (uVar22 == 0) goto LAB_1056b0374;
            goto LAB_1056b0100;
          }
          lVar21 = lVar21 + 1;
        } while (lVar9 != lVar21);
        lVar9 = lVar17;
        func_0x00010bf52a60(lVar17,param_2,&uStack_2e0,auStack_1e0,0x10);
      } while (lVar9 != 0);
    }
    _objc_release(lVar17);
    if ((uVar15 & 1) == 0) {
LAB_1056b0100:
      uStack_2f8 = 0;
      uStack_300 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      lStack_318 = 0;
      uStack_320 = 0;
      uStack_308 = 0;
      plStack_310 = (long *)0x0;
      lVar21 = *(long *)(param_1 + 0x28);
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = lVar21;
      func_0x00010c0c4c40();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar17;
      func_0x00010c08c260();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = lVar9;
      func_0x00010c2791c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar9);
      _objc_release(lVar17);
      _objc_release(lVar21);
      lStack_360 = lVar18;
      func_0x00010bf52a60(lVar18,param_2,&uStack_320,auStack_260,0x10);
      if (lStack_360 != 0) {
        lVar17 = *plStack_310;
        do {
          lVar9 = 0;
          do {
            if (*plStack_310 != lVar17) {
              _objc_enumerationMutation(lVar18);
            }
            uVar26 = *(ulong *)(lStack_318 + lVar9 * 8);
            func_0x00010c074780(uVar26);
            uVar15 = uVar26;
            func_0x00010c074780();
            uVar10 = uVar26;
            func_0x00010c2787a0();
            _objc_retainAutoreleasedReturnValue();
            uVar24 = uVar10;
            func_0x00010bf529e0();
            _objc_release(uVar10);
            if (uVar24 != 0) {
              uVar10 = 0;
              uVar16 = (uint)uVar15;
              if (puVar2 == (undefined *)0x0) {
                uVar16 = 1;
              }
              do {
                uVar23 = (uint)uVar15 ^ (uint)(puVar2 != (undefined *)0x0);
                if ((uVar16 & 1) == 0) {
                  puVar1 = puVar2;
                  func_0x00010c282760();
                  uVar23 = (uint)(uVar10 == ((ulong)puVar1 & 0xffffffff));
                }
                uVar24 = uVar26;
                func_0x00010c2787a0();
                _objc_retainAutoreleasedReturnValue();
                uVar11 = uVar24;
                func_0x00010c0dfd40();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar24);
                uVar24 = uVar11;
                func_0x00010c0ff680();
                if (uVar24 == 0) {
                  uVar19 = 0;
                }
                else {
                  uVar24 = 0;
                  do {
                    uVar12 = uVar11;
                    func_0x00010c0ff660();
                    _objc_retainAutoreleasedReturnValue();
                    uVar13 = uVar12;
                    func_0x00010c296de0();
                    puVar1 = puVar14;
                    func_0x00010c067fc0();
                    _objc_release(uVar12);
                    if (puVar1 == (undefined *)(uVar13 & 0xffffffff)) {
                      uVar19 = 1;
                      goto LAB_1056b02f0;
                    }
                    uVar24 = uVar24 + 1;
                    uVar12 = uVar11;
                    func_0x00010c0ff680();
                  } while (uVar24 < uVar12);
                  uVar19 = 0;
                }
LAB_1056b02f0:
                _objc_release(uVar11);
                if (uVar19 != (uVar22 & uVar23)) goto LAB_1056b0368;
                uVar10 = uVar10 + 1;
                uVar24 = uVar26;
                func_0x00010c2787a0();
                _objc_retainAutoreleasedReturnValue();
                uVar11 = uVar24;
                func_0x00010bf529e0();
                _objc_release(uVar24);
              } while (uVar10 < uVar11);
            }
            lVar9 = lVar9 + 1;
          } while (lVar9 != lStack_360);
          lStack_360 = lVar18;
          func_0x00010bf52a60(lVar18,param_2,&uStack_320,auStack_260,0x10);
        } while (lStack_360 != 0);
      }
LAB_1056b0368:
      _objc_release(lVar18);
    }
LAB_1056b0374:
    _objc_release(puVar20);
  }
  else {
    lVar17 = lVar3;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar17;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar9;
    func_0x00010c0c55e0();
    _objc_release(lVar9);
    _objc_release(lVar17);
    if (lVar18 == 0) goto LAB_1056afe80;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    lStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    plStack_290 = (long *)0x0;
    puVar4 = *(undefined **)(param_1 + 0x28);
    func_0x00010c0c6280();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar4;
    func_0x00010bf52a60();
    if (puVar1 != (undefined *)0x0) {
      lVar17 = *plStack_290;
      do {
        puVar20 = (undefined *)0x0;
        do {
          if (*plStack_290 != lVar17) {
            _objc_enumerationMutation(puVar4);
          }
          lVar5 = *(long *)(lStack_298 + (long)puVar20 * 8);
          func_0x00010c0c55e0();
          lVar9 = lVar3;
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          lVar18 = lVar9;
          func_0x00010c0c5180();
          _objc_retainAutoreleasedReturnValue();
          lVar21 = lVar18;
          func_0x00010c0c55e0();
          _objc_release(lVar18);
          _objc_release(lVar9);
          if (lVar5 == lVar21) {
            _objc_release(puVar4);
            goto LAB_1056afe80;
          }
          puVar20 = puVar20 + 1;
        } while (puVar1 != puVar20);
        puVar1 = puVar4;
        func_0x00010bf52a60(puVar4,param_2,&uStack_2a0,auStack_160,0x10);
      } while (puVar1 != (undefined *)0x0);
    }
  }
LAB_1056b0380:
  _objc_release(puVar4);
LAB_1056b0388:
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e0) {
    ___stack_chk_fail();
    return *(undefined **)(puVar14 + 0x10);
  }
  return puVar14;
}



/* Entry: 1056afcb8; end: 1056b03db; -[SCPlaybackLayerEditorImpl _assertValidStateForPlaybackLayerId:exists:segment:] */

ulong FUN_1056afcb8(ulong param_1,undefined8 param_2,ulong param_3,uint param_4,ulong param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  long lStack_2f0;
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
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  FUN_1056af754();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == (lVar1 == 0)) goto LAB_1056b0388;
  if (param_4 == 0) {
LAB_1056afe80:
    uVar2 = param_1;
    func_0x00010c0ff540();
    _objc_retainAutoreleasedReturnValue();
    if (param_5 == 0) {
      if (param_4 != 0) {
        uVar3 = uVar2;
        func_0x00010bfccec0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar3 == 0) goto LAB_1056b0380;
      }
    }
    else if (param_4 != 0) {
      uVar3 = param_5;
      func_0x00010c282760();
      uVar15 = uVar2;
      func_0x00010c09e9e0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar15;
      func_0x00010bf529e0();
      _objc_release(uVar15);
      if (uVar7 <= (uVar3 & 0xffffffff)) goto LAB_1056b0380;
    }
    uVar3 = uVar2;
    func_0x00010c09e9e0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar3;
    func_0x00010c0d3c80();
    _objc_release(uVar3);
    uVar3 = uVar15;
    func_0x00010bf529e0();
    uVar7 = uVar2;
    func_0x00010bfccec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar7 != 0) {
      uVar18 = uVar2;
      func_0x00010bfccec0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar15,param_2,uVar18);
      _objc_release(uVar18);
    }
    uVar7 = (uVar7 != 0) + uVar3;
    if (1 < uVar7) {
      uVar18 = 0;
      do {
        uVar11 = (uint)((uVar3 == uVar18) != (param_5 != 0));
        if ((param_5 != 0) && (uVar3 != uVar18)) {
          uVar19 = param_5;
          func_0x00010c282760();
          uVar11 = (uint)(uVar18 == (uVar19 & 0xffffffff));
        }
        uVar19 = uVar15;
        func_0x00010c0dfd40(uVar15,param_2,uVar18);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar19;
        func_0x00010bf4b900();
        _objc_release(uVar19);
        if ((param_4 & uVar11) != (uint)uVar5) goto LAB_1056b0374;
        uVar18 = uVar18 + 1;
      } while (uVar7 != uVar18);
    }
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    lVar6 = *(long *)(param_1 + 0x28);
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar6;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    lVar6 = lVar12;
    func_0x00010bf52a60(lVar12,param_2,&uStack_270,auStack_170,0x10);
    if (lVar6 != 0) {
      lVar13 = *plStack_260;
      do {
        lVar16 = 0;
        do {
          if (*plStack_260 != lVar13) {
            _objc_enumerationMutation(lVar12);
          }
          uVar7 = *(ulong *)(lStack_268 + lVar16 * 8);
          func_0x00010c0ff5c0();
          uVar3 = param_3;
          func_0x00010c067fc0();
          if (uVar3 == (uVar7 & 0xffffffff)) {
            _objc_release(lVar12);
            if (param_4 == 0) goto LAB_1056b0374;
            goto LAB_1056b0100;
          }
          lVar16 = lVar16 + 1;
        } while (lVar6 != lVar16);
        lVar6 = lVar12;
        func_0x00010bf52a60(lVar12,param_2,&uStack_270,auStack_170,0x10);
      } while (lVar6 != 0);
    }
    _objc_release(lVar12);
    if ((param_4 & 1) == 0) {
LAB_1056b0100:
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_278 = 0;
      uStack_280 = 0;
      lStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_298 = 0;
      plStack_2a0 = (long *)0x0;
      lVar16 = *(long *)(param_1 + 0x28);
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar16;
      func_0x00010c0c4c40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar12;
      func_0x00010c08c260();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar6;
      func_0x00010c2791c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      _objc_release(lVar12);
      _objc_release(lVar16);
      lStack_2f0 = lVar13;
      func_0x00010bf52a60(lVar13,param_2,&uStack_2b0,auStack_1f0,0x10);
      if (lStack_2f0 != 0) {
        lVar12 = *plStack_2a0;
        do {
          lVar6 = 0;
          do {
            if (*plStack_2a0 != lVar12) {
              _objc_enumerationMutation(lVar13);
            }
            uVar19 = *(ulong *)(lStack_2a8 + lVar6 * 8);
            func_0x00010c074780(uVar19);
            uVar3 = uVar19;
            func_0x00010c074780();
            uVar7 = uVar19;
            func_0x00010c2787a0();
            _objc_retainAutoreleasedReturnValue();
            uVar18 = uVar7;
            func_0x00010bf529e0();
            _objc_release(uVar7);
            if (uVar18 != 0) {
              uVar7 = 0;
              uVar11 = (uint)uVar3;
              if (param_5 == 0) {
                uVar11 = 1;
              }
              do {
                uVar17 = (uint)uVar3 ^ (uint)(param_5 != 0);
                if ((uVar11 & 1) == 0) {
                  uVar18 = param_5;
                  func_0x00010c282760();
                  uVar17 = (uint)(uVar7 == (uVar18 & 0xffffffff));
                }
                uVar18 = uVar19;
                func_0x00010c2787a0();
                _objc_retainAutoreleasedReturnValue();
                uVar5 = uVar18;
                func_0x00010c0dfd40();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar18);
                uVar18 = uVar5;
                func_0x00010c0ff680();
                if (uVar18 == 0) {
                  uVar14 = 0;
                }
                else {
                  uVar18 = 0;
                  do {
                    uVar8 = uVar5;
                    func_0x00010c0ff660();
                    _objc_retainAutoreleasedReturnValue();
                    uVar9 = uVar8;
                    func_0x00010c296de0();
                    uVar10 = param_3;
                    func_0x00010c067fc0();
                    _objc_release(uVar8);
                    if (uVar10 == (uVar9 & 0xffffffff)) {
                      uVar14 = 1;
                      goto LAB_1056b02f0;
                    }
                    uVar18 = uVar18 + 1;
                    uVar8 = uVar5;
                    func_0x00010c0ff680();
                  } while (uVar18 < uVar8);
                  uVar14 = 0;
                }
LAB_1056b02f0:
                _objc_release(uVar5);
                if (uVar14 != (param_4 & uVar17)) goto LAB_1056b0368;
                uVar7 = uVar7 + 1;
                uVar18 = uVar19;
                func_0x00010c2787a0();
                _objc_retainAutoreleasedReturnValue();
                uVar5 = uVar18;
                func_0x00010bf529e0();
                _objc_release(uVar18);
              } while (uVar7 < uVar5);
            }
            lVar6 = lVar6 + 1;
          } while (lVar6 != lStack_2f0);
          lStack_2f0 = lVar13;
          func_0x00010bf52a60(lVar13,param_2,&uStack_2b0,auStack_1f0,0x10);
        } while (lStack_2f0 != 0);
      }
LAB_1056b0368:
      _objc_release(lVar13);
    }
LAB_1056b0374:
    _objc_release(uVar15);
  }
  else {
    lVar12 = lVar1;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar12;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar6;
    func_0x00010c0c55e0();
    _objc_release(lVar6);
    _objc_release(lVar12);
    if (lVar13 == 0) goto LAB_1056afe80;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    lStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    plStack_220 = (long *)0x0;
    uVar2 = *(ulong *)(param_1 + 0x28);
    func_0x00010c0c6280();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf52a60();
    if (uVar3 != 0) {
      lVar12 = *plStack_220;
      do {
        uVar15 = 0;
        do {
          if (*plStack_220 != lVar12) {
            _objc_enumerationMutation(uVar2);
          }
          lVar4 = *(long *)(lStack_228 + uVar15 * 8);
          func_0x00010c0c55e0();
          lVar6 = lVar1;
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          lVar13 = lVar6;
          func_0x00010c0c5180();
          _objc_retainAutoreleasedReturnValue();
          lVar16 = lVar13;
          func_0x00010c0c55e0();
          _objc_release(lVar13);
          _objc_release(lVar6);
          if (lVar4 == lVar16) {
            _objc_release(uVar2);
            goto LAB_1056afe80;
          }
          uVar15 = uVar15 + 1;
        } while (uVar3 != uVar15);
        uVar3 = uVar2;
        func_0x00010bf52a60(uVar2,param_2,&uStack_230,auStack_f0,0x10);
      } while (uVar3 != 0);
    }
  }
LAB_1056b0380:
  _objc_release(uVar2);
LAB_1056b0388:
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    return *(ulong *)(param_3 + 0x10);
  }
  return param_3;
}



/* Entry: 1056b03dc; end: 1056b03e3; -[SCPlaybackLayerEditorImpl playbackLayerChangeObservable] */

undefined8 FUN_1056b03dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1056b03e4; end: 1056b03eb; -[SCPlaybackLayerEditorImpl segmentChangeObservable] */

undefined8 FUN_1056b03e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1056b03ec; end: 1056b03f3; -[SCPlaybackLayerEditorImpl snapDoc] */

undefined8 FUN_1056b03ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1056b03f4; end: 1056b048f; -[SCPlaybackLayerEditorImpl .cxx_destruct] */

void FUN_1056b03f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056b0490; end: 1056b0593; -[SCSegmentObjects get:] */

void FUN_1056b0490(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1056b0594;
  uStack_30 = 0x1056b05a4;
  uStack_28 = 0;
  func_0x00010c0be120(param_3);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056b0594; end: 1056b05ab;  */

void FUN_1056b0594(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1056b05ac; end: 1056b05eb;  */

void FUN_1056b05ac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfccec0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1056b05ec; end: 1056b068f;  */

void FUN_1056b05ec(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c09e9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  if (param_2 < uVar2) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c09e9e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar5 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined8 *)(lVar6 + 0x28) = uVar4;
    _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 1056b0690; end: 1056b074f; -[SCRenderEffectsEditorImpl initWithSnapDoc:layerEditor:] */

undefined1 *
FUN_1056b0690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e99f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    func_0x00010c139f40(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056b0750; end: 1056b0843; -[SCRenderEffectsEditorImpl resetWithSnapDoc:snapDocKey:mediaIdToAssetId:] */

void FUN_1056b0750(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfdb0c0();
  _objc_release(uVar1);
  _objc_release(uVar2);
  if ((int)uVar3 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else {
    lVar4 = param_1;
    func_0x00010be8e140(param_1,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010be8e140(param_1,param_2,2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c12fa60();
    lVar7 = lVar5;
    func_0x00010c12fa60();
    *(long *)(param_1 + 0x18) = lVar7 + lVar6;
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056b0844; end: 1056b084f; -[SCRenderEffectsEditorImpl setRenderEffect:onPlaybackLayer:forFeature:renderEffectType:] */

void FUN_1056b0844(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ea650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setRenderEffect_onPlaybackLayer__1126583b8);
  return;
}



/* Entry: 1056b0850; end: 1056b0ae7; -[SCRenderEffectsEditorImpl setRenderEffect:onPlaybackLayer:forFeature:featureTagId:renderEffectType:] */

void FUN_1056b0850(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    func_0x00010c12e000(param_1,param_2,param_4,param_7);
  }
  else {
    lVar1 = param_1;
    func_0x00010bfc98a0(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010c12e000(param_1,param_2,param_4,param_7);
    }
    lVar1 = param_1;
    func_0x00010be8e140(param_1,param_2,param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126bcd28;
    _objc_opt_new(PTR_PTR_1126bcd28);
    func_0x00010c1ea620();
    puVar3 = PTR_PTR_1126bcd38;
    _objc_opt_new(PTR_PTR_1126bcd38);
    uVar9 = param_4;
    func_0x00010c2827c0(param_4);
    func_0x00010c1dd680(puVar3,param_2,uVar9);
    puVar4 = puVar2;
    func_0x00010c066480(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126bce90;
    _objc_opt_new(PTR_PTR_1126bce90);
    func_0x00010c185920();
    func_0x00010c211840(puVar4,param_2,param_6);
    puVar5 = PTR_PTR_1126bce98;
    _objc_opt_new();
    puVar6 = puVar5;
    func_0x00010bfa2d60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(puVar6);
    func_0x00010c1857c0(puVar2,param_2,puVar5);
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1056b0ae8;
    puStack_70 = &UNK_1108a7508;
    puStack_68 = puVar5;
    _objc_retain(puVar5);
    func_0x00010c288840(uVar9,param_2,param_4,&puStack_88);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar7 = lVar1;
    func_0x00010c12fa40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(lVar7);
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
    puVar6 = PTR_PTR_1126bcea0;
    _objc_alloc(PTR_PTR_1126bcea0);
    puVar8 = puVar2;
    func_0x00010bf51e00(puVar2);
    func_0x00010c03e0e0(puVar6,param_2,puVar8,1);
    func_0x00010c0d9840(uVar9,param_2,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar8);
    _objc_release(puStack_68);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1056b0ae8; end: 1056b0af3;  */

void FUN_1056b0ae8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1857d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setCreativeEditTag__11263f010,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1056b0af4; end: 1056b0bcb; -[SCRenderEffectsEditorImpl addRenderEffectNode:renderEffectType:] */

void FUN_1056b0af4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010be8e140(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c12fa40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(lVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  puVar4 = PTR_PTR_1126bcea0;
  _objc_alloc(PTR_PTR_1126bcea0);
  uVar5 = param_3;
  func_0x00010bf51e00(param_3);
  _objc_release(param_3);
  func_0x00010c03e0e0(puVar4,param_2,uVar5,1);
  func_0x00010c0d9840(uVar1,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1056b0bcc; end: 1056b0d47; -[SCRenderEffectsEditorImpl removeRenderEffectNode:renderEffectType:] */

void FUN_1056b0bcc(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
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
  puVar2 = param_3;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c0664a0();
  if (puVar1 != (undefined *)0x0) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    puVar1 = param_3;
    func_0x00010c066480();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf52a60();
    if (puVar2 != (undefined *)0x0) {
      lVar4 = *plStack_110;
      do {
        puVar5 = (undefined *)0x0;
        do {
          if (*plStack_110 != lVar4) {
            _objc_enumerationMutation(puVar1);
          }
          func_0x00010be8d0c0(param_1,param_2,*(undefined8 *)(lStack_118 + (long)puVar5 * 8),param_4
                             );
          puVar5 = puVar5 + 1;
        } while (puVar2 != puVar5);
        puVar2 = puVar1;
        func_0x00010bf52a60(puVar1,param_2,&uStack_120,auStack_d8,0x10);
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release(puVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar1 = PTR_PTR_1126bcea0;
    _objc_alloc(PTR_PTR_1126bcea0);
    puVar5 = param_3;
    func_0x00010bf51e00(param_3);
    func_0x00010c03e0e0(puVar1,param_2,puVar5,3);
    puVar2 = puVar1;
    func_0x00010c0d9840(uVar3,param_2,puVar1);
    _objc_release(puVar1);
    _objc_release(puVar5);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  func_0x00010c12e000(param_3,param_2,puVar2,1);
  func_0x00010c12e000(param_3,param_2,puVar2,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1056b0d48; end: 1056b0d93; -[SCRenderEffectsEditorImpl removeAllRenderEffectsFromPlaybackLayerWithId:] */

void FUN_1056b0d48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c12e000(param_1,param_2,param_3,1);
  func_0x00010c12e000(param_1,param_2,param_3,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056b0d94; end: 1056b1137; -[SCRenderEffectsEditorImpl removeRenderEffectNodesWhere:] */

void FUN_1056b0d94(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  _objc_retain(param_3);
  uVar10 = 0;
  while( true ) {
    uVar1 = *(ulong *)(param_1 + 8);
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar1;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c12fae0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar12;
    func_0x00010c12fb00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf529e0();
    _objc_release(uVar2);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar1);
    if (uVar3 <= uVar10) break;
    uVar1 = *(ulong *)(param_1 + 8);
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar1;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c12fae0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar12;
    func_0x00010c12fb00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar1);
    uVar11 = uVar3;
    func_0x00010c12f9a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010bf529e0();
    _objc_release(uVar11);
    if (uVar12 != 0) {
      uVar11 = 0;
      do {
        uVar12 = uVar3;
        func_0x00010c12f9a0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar12;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar12);
        uVar12 = uVar2;
        func_0x00010c12fa40();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar12;
        func_0x00010bf529e0();
        _objc_release(uVar12);
        if (uVar1 != 0) {
          uVar12 = 0;
          do {
            uVar1 = uVar2;
            func_0x00010c12fa40(uVar2);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar1;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar1);
            lVar5 = param_3;
            (**(code **)(param_3 + 0x10))(param_3,uVar4);
            if ((int)lVar5 != 0) {
              uVar1 = uVar2;
              func_0x00010c12fa40(uVar2);
              _objc_retainAutoreleasedReturnValue();
              uVar12 = uVar12 - 1;
              func_0x00010c12d3c0();
              _objc_release(uVar1);
            }
            _objc_release(uVar4);
            uVar12 = uVar12 + 1;
            uVar1 = uVar2;
            func_0x00010c12fa40();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar1;
            func_0x00010bf529e0();
            _objc_release(uVar1);
          } while (uVar12 < uVar4);
        }
        uVar12 = uVar2;
        func_0x00010c12fa40();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar12;
        func_0x00010bf529e0();
        _objc_release(uVar12);
        if (uVar1 == 0) {
          uVar12 = uVar3;
          func_0x00010c12f9a0(uVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar11 - 1;
          func_0x00010c12d3c0();
          _objc_release(uVar12);
        }
        _objc_release(uVar2);
        uVar11 = uVar11 + 1;
        uVar12 = uVar3;
        func_0x00010c12f9a0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar12;
        func_0x00010bf529e0();
        _objc_release(uVar12);
      } while (uVar11 < uVar2);
    }
    uVar11 = uVar3;
    func_0x00010c12f9a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010bf529e0();
    _objc_release(uVar11);
    if (uVar12 == 0) {
      uVar6 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0fee00(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c0c4c40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c12fae0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c12fb00();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar10 - 1;
      func_0x00010c12d3c0();
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
    }
    _objc_release(uVar3);
    uVar10 = uVar10 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056b1138; end: 1056b135b; -[SCRenderEffectsEditorImpl removeRenderEffectsFromPlaybackLayerWithId:renderEffectType:] */

void FUN_1056b1138(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be8e140(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar8 = uVar1;
    func_0x00010c12fa60();
    if (uVar8 != 0) {
      uVar8 = 0;
      do {
        uVar2 = uVar1;
        func_0x00010c12fa40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        uVar2 = uVar3;
        func_0x00010c066480();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        uVar2 = uVar4;
        func_0x00010c065ee0();
        if ((int)uVar2 == 10) {
          uVar2 = uVar4;
          func_0x00010c0ff5c0();
          uVar5 = param_3;
          func_0x00010c2827c0();
          if (uVar5 == (uVar2 & 0xffffffff)) {
            uVar8 = uVar1;
            func_0x00010c12fa40(uVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12d3c0();
            _objc_release(uVar8);
            *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + -1;
            _objc_release(uVar4);
            _objc_release(uVar3);
            break;
          }
        }
        uVar9 = *(undefined8 *)(param_1 + 0x20);
        puVar6 = PTR_PTR_1126bcea0;
        _objc_alloc(PTR_PTR_1126bcea0);
        uVar2 = uVar3;
        func_0x00010bf51e00(uVar3);
        func_0x00010c03e0e0(puVar6,param_2,uVar2,3);
        func_0x00010c0d9840(uVar9,param_2,puVar6);
        _objc_release(puVar6);
        _objc_release(uVar2);
        _objc_release(uVar4);
        _objc_release(uVar3);
        uVar8 = uVar8 + 1;
        uVar2 = uVar1;
        func_0x00010c12fa60();
      } while (uVar8 < uVar2);
    }
    func_0x00010c288840(*(undefined8 *)(param_1 + 0x10),param_2,param_3,
                        &PTR___NSConcreteGlobalBlock_1108a79a8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    if (*(long *)(param_1 + 0x18) == 0) {
      uVar7 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0fee00(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x00010c0c4c40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ea760();
      _objc_release(uVar9);
      _objc_release(uVar7);
    }
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056b135c; end: 1056b1367;  */

void FUN_1056b135c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1857d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setCreativeEditTag__11263f010,0);
  return;
}



/* Entry: 1056b1368; end: 1056b1603; -[SCRenderEffectsEditorImpl getRenderEffectWithPlaybackLayerInput:] */

void FUN_1056b1368(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined *puVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  undefined *puVar22;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar16 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_3;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfdb0c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 == 0) {
    puVar18 = (undefined *)0x0;
  }
  else {
    lVar4 = param_1;
    func_0x00010be8e140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be8e140();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar4;
    func_0x00010c12fa40(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar5);
    _objc_release(lVar21);
    lVar21 = param_1;
    func_0x00010c12fa40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar5);
    _objc_release(lVar21);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(puVar5);
    puVar6 = puVar5;
    func_0x00010bf52a60();
    puVar18 = (undefined *)0x0;
    if (puVar6 != (undefined *)0x0) {
      lVar21 = *plStack_120;
      do {
        puVar22 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar21) {
            _objc_enumerationMutation(puVar5);
          }
          puVar18 = *(undefined **)(lStack_128 + (long)puVar22 * 8);
          puVar7 = puVar18;
          func_0x00010c0664a0();
          if (puVar7 == (undefined *)0x1) {
            puVar7 = puVar18;
            func_0x00010c066480();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar7;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar7);
            puVar7 = puVar8;
            func_0x00010c065ee0();
            if ((int)puVar7 == 10) {
              puVar7 = puVar8;
              func_0x00010c0ff5c0();
              puVar9 = param_3;
              func_0x00010c2827c0();
              if (puVar9 == (undefined1 *)((ulong)puVar7 & 0xffffffff)) {
                func_0x00010c12f940();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar8);
                goto LAB_1056b159c;
              }
            }
            _objc_release(puVar8);
          }
          puVar22 = puVar22 + 1;
        } while (puVar6 != puVar22);
        puVar6 = puVar5;
        puVar16 = &uStack_130;
        func_0x00010bf52a60();
      } while (puVar6 != (undefined *)0x0);
      puVar18 = (undefined *)0x0;
    }
LAB_1056b159c:
    _objc_release(puVar5);
    _objc_release(puVar5);
    _objc_release(param_1);
    _objc_release(lVar4);
    puVar9 = (undefined1 *)puVar16;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(puVar9);
    puVar18 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = 0;
    while( true ) {
      uVar10 = *(ulong *)(param_3 + 8);
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar10;
      func_0x00010c0c4c40();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar19;
      func_0x00010c12fae0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar20;
      func_0x00010c12fb00();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar11;
      func_0x00010bf529e0();
      _objc_release(uVar11);
      _objc_release(uVar20);
      _objc_release(uVar19);
      _objc_release(uVar10);
      if (uVar12 <= uVar17) break;
      uVar10 = *(ulong *)(param_3 + 8);
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar10;
      func_0x00010c0c4c40();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar19;
      func_0x00010c12fae0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar20;
      func_0x00010c12fb00();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar11;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      _objc_release(uVar20);
      _objc_release(uVar19);
      _objc_release(uVar10);
      uVar19 = uVar12;
      func_0x00010c12f9a0();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar19;
      func_0x00010bf529e0();
      _objc_release(uVar19);
      if (uVar20 != 0) {
        uVar19 = 0;
        do {
          uVar20 = uVar12;
          func_0x00010c12f9a0();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar20;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar20);
          uVar20 = uVar11;
          func_0x00010c12fa40();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar20;
          func_0x00010bf529e0();
          _objc_release(uVar20);
          if (uVar10 != 0) {
            uVar20 = 0;
            do {
              uVar10 = uVar11;
              func_0x00010c12fa40(uVar11);
              _objc_retainAutoreleasedReturnValue();
              uVar13 = uVar10;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              uVar14 = uVar13;
              func_0x00010bf51e00();
              _objc_release(uVar13);
              _objc_release(uVar10);
              puVar15 = puVar9;
              (**(code **)(puVar9 + 0x10))(puVar9,uVar14);
              if ((int)puVar15 != 0) {
                func_0x00010befa120(puVar18);
              }
              _objc_release(uVar14);
              uVar20 = uVar20 + 1;
              uVar10 = uVar11;
              func_0x00010c12fa40();
              _objc_retainAutoreleasedReturnValue();
              uVar13 = uVar10;
              func_0x00010bf529e0();
              _objc_release(uVar10);
            } while (uVar20 < uVar13);
          }
          _objc_release(uVar11);
          uVar19 = uVar19 + 1;
          uVar20 = uVar12;
          func_0x00010c12f9a0();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar20;
          func_0x00010bf529e0();
          _objc_release(uVar20);
        } while (uVar19 < uVar11);
      }
      _objc_release(uVar12);
      uVar17 = uVar17 + 1;
    }
    _objc_release(puVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar18);
  return;
}



/* Entry: 1056b1604; end: 1056b18d7; -[SCRenderEffectsEditorImpl renderEffectNodesWhere:] */

void FUN_1056b1604(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 0;
  while( true ) {
    uVar2 = *(ulong *)(param_1 + 8);
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar2;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c12fae0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar10;
    func_0x00010c12fb00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf529e0();
    _objc_release(uVar3);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar2);
    if (uVar4 <= uVar8) break;
    uVar2 = *(ulong *)(param_1 + 8);
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar2;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c12fae0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar10;
    func_0x00010c12fb00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar2);
    uVar9 = uVar4;
    func_0x00010c12f9a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bf529e0();
    _objc_release(uVar9);
    if (uVar10 != 0) {
      uVar9 = 0;
      do {
        uVar10 = uVar4;
        func_0x00010c12f9a0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar10;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar10);
        uVar10 = uVar3;
        func_0x00010c12fa40();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar10;
        func_0x00010bf529e0();
        _objc_release(uVar10);
        if (uVar2 != 0) {
          uVar10 = 0;
          do {
            uVar2 = uVar3;
            func_0x00010c12fa40(uVar3);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar2;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar5;
            func_0x00010bf51e00();
            _objc_release(uVar5);
            _objc_release(uVar2);
            lVar7 = param_3;
            (**(code **)(param_3 + 0x10))(param_3,uVar6);
            if ((int)lVar7 != 0) {
              func_0x00010befa120(puVar1);
            }
            _objc_release(uVar6);
            uVar10 = uVar10 + 1;
            uVar2 = uVar3;
            func_0x00010c12fa40();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar2;
            func_0x00010bf529e0();
            _objc_release(uVar2);
          } while (uVar10 < uVar5);
        }
        _objc_release(uVar3);
        uVar9 = uVar9 + 1;
        uVar10 = uVar4;
        func_0x00010c12f9a0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar10;
        func_0x00010bf529e0();
        _objc_release(uVar10);
      } while (uVar9 < uVar3);
    }
    _objc_release(uVar4);
    uVar8 = uVar8 + 1;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1056b18d8; end: 1056b1ba3; -[SCRenderEffectsEditorImpl getRenderEffectNodeWithInput:renderEffectType:] */

undefined * FUN_1056b18d8(long param_1,undefined8 param_2,undefined *param_3,undefined1 *param_4)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined4 uVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  undefined *puVar20;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  code *pcStack_2e0;
  undefined *puStack_2d8;
  undefined1 *puStack_2d0;
  undefined4 uStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined1 **ppuStack_290;
  code *pcStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  long lStack_258;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_220 [128];
  long lStack_1a0;
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
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar15 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  puVar16 = param_4;
  _objc_retain(param_3);
  puVar3 = *(undefined **)(param_1 + 8);
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar3;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar18;
  func_0x00010bfdb0c0();
  _objc_release(puVar18);
  _objc_release(puVar3);
  if ((int)puVar4 == 0) {
    puVar18 = (undefined *)0x0;
  }
  else {
    func_0x00010be8e140(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = param_1;
    func_0x00010c12fa40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar5,param_2,lVar19);
    _objc_release(lVar19);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(puVar5);
    puVar16 = auStack_e8;
    puVar3 = puVar5;
    func_0x00010bf52a60();
    if (puVar3 != (undefined *)0x0) {
      lVar19 = *plStack_120;
      do {
        puVar20 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar19) {
            _objc_enumerationMutation(puVar5);
          }
          puVar18 = *(undefined **)(lStack_128 + (long)puVar20 * 8);
          puVar7 = puVar18;
          func_0x00010c0664a0();
          if (puVar7 == (undefined *)0x1) {
            puVar7 = puVar18;
            func_0x00010c066480();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar7;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar7);
            puVar7 = puVar4;
            func_0x00010c065ee0();
            iVar1 = (int)puVar7;
            if (iVar1 < 10) {
              if (iVar1 == 8) {
                puVar7 = puVar4;
                func_0x00010c277f00();
                iVar1 = (int)puVar7;
                puVar7 = param_3;
                func_0x00010c277f00();
                iVar2 = (int)puVar7;
                goto LAB_1056b1aec;
              }
              if (iVar1 == 9) {
                puVar7 = puVar4;
                func_0x00010c12fac0();
                puVar6 = param_3;
                func_0x00010c12fac0();
                if (((int)puVar7 != (int)puVar6) ||
                   (puVar7 = param_3, func_0x00010c12fac0(), (int)puVar7 == 0)) goto LAB_1056b1af4;
                goto LAB_1056b1b34;
              }
            }
            else {
              if (iVar1 == 10) {
                puVar7 = puVar4;
                func_0x00010c0ff5c0();
                iVar1 = (int)puVar7;
                puVar7 = param_3;
                func_0x00010c0ff5c0();
                iVar2 = (int)puVar7;
              }
              else {
                if (iVar1 != 0xb) goto LAB_1056b1af4;
                puVar7 = puVar4;
                func_0x00010c278740();
                iVar1 = (int)puVar7;
                puVar7 = param_3;
                func_0x00010c278740();
                iVar2 = (int)puVar7;
              }
LAB_1056b1aec:
              if (iVar1 == iVar2) {
LAB_1056b1b34:
                _objc_retain(puVar18);
                _objc_release(puVar4);
                goto LAB_1056b1b44;
              }
            }
LAB_1056b1af4:
            _objc_release(puVar4);
          }
          puVar20 = puVar20 + 1;
        } while (puVar3 != puVar20);
        puVar16 = auStack_e8;
        puVar3 = puVar5;
        puVar15 = &uStack_130;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined *)0x0);
    }
    puVar18 = (undefined *)0x0;
LAB_1056b1b44:
    _objc_release(puVar5);
    _objc_release(puVar5);
    _objc_release(param_1);
    puVar5 = (undefined *)puVar15;
  }
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_138 = FUN_1056b1ba4;
    lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar18 = puVar5;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(puVar5);
    uVar14 = SUB84(puVar18,0);
    puVar7 = *(undefined **)(puVar3 + 8);
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar7;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar20;
    func_0x00010bfdb0c0();
    _objc_release(puVar20);
    _objc_release(puVar7);
    if ((int)puVar18 == 0) {
      puVar18 = (undefined *)0x0;
    }
    else {
      param_3 = puVar3;
      func_0x00010be8e140(puVar3,param_2,2);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = param_3;
      func_0x00010c12fa40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar7,param_2,puVar20);
      _objc_release(puVar20);
      uStack_238 = 0;
      uStack_240 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      lStack_258 = 0;
      uStack_260 = 0;
      uStack_248 = 0;
      puStack_250 = (undefined8 *)0x0;
      _objc_retain(puVar7);
      puVar15 = &uStack_260;
      puVar16 = auStack_220;
      puVar6 = puVar7;
      func_0x00010bf52a60();
      uVar14 = SUB84(puVar15,0);
      if (puVar6 == (undefined *)0x0) {
        puVar18 = (undefined *)0x0;
      }
      else {
        puVar20 = (undefined *)*puStack_250;
        puStack_280 = param_3;
        puStack_278 = puVar5;
        puStack_270 = puVar20;
        puStack_268 = puVar7;
        do {
          puVar17 = (undefined *)0x0;
          do {
            if ((undefined *)*puStack_250 != puVar20) {
              _objc_enumerationMutation(puVar7);
            }
            puVar18 = *(undefined **)(lStack_258 + (long)puVar17 * 8);
            puVar8 = puVar18;
            func_0x00010c0664a0();
            if (puVar8 == (undefined *)0x1) {
              puVar4 = puVar18;
              func_0x00010bf5cc00();
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar4;
              func_0x00010c0840e0();
              _objc_retainAutoreleasedReturnValue();
              puVar9 = puVar8;
              func_0x00010bf96da0();
              _objc_retainAutoreleasedReturnValue();
              puVar3 = puVar9;
              func_0x00010bf96ee0();
              if ((int)puVar3 == 0x10) {
                _objc_release(puVar9);
                _objc_release(puVar8);
                _objc_release(puVar4);
              }
              else {
                puVar7 = puVar18;
                func_0x00010bf5cc00();
                _objc_retainAutoreleasedReturnValue();
                puVar5 = puVar7;
                func_0x00010c0840e0();
                _objc_retainAutoreleasedReturnValue();
                puVar3 = puVar5;
                func_0x00010bf96da0();
                _objc_retainAutoreleasedReturnValue();
                puVar10 = puVar3;
                func_0x00010bf96ee0();
                _objc_release(puVar3);
                _objc_release(puVar5);
                puVar20 = puStack_270;
                puVar5 = puStack_278;
                _objc_release(puVar7);
                _objc_release(puVar9);
                _objc_release(puVar8);
                _objc_release(puVar4);
                puVar7 = puStack_268;
                if ((int)puVar10 != 0x1b) goto LAB_1056b1eac;
              }
              puVar3 = puVar18;
              func_0x00010c066480();
              _objc_retainAutoreleasedReturnValue();
              puVar4 = puVar3;
              func_0x00010bfb1920();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar3);
              puVar8 = puVar5;
              func_0x00010c065ee0();
              iVar1 = (int)puVar8;
              if (iVar1 < 10) {
                if (iVar1 == 8) {
                  puVar3 = puVar4;
                  func_0x00010c277f00();
                  puVar8 = puVar5;
                  func_0x00010c277f00();
                  iVar1 = (int)puVar8;
                  goto LAB_1056b1e9c;
                }
                if (iVar1 == 9) {
                  puVar3 = puVar4;
                  func_0x00010c12fac0();
                  puVar8 = puVar5;
                  func_0x00010c12fac0();
                  if ((int)puVar3 != (int)puVar8) goto LAB_1056b1ea4;
                  puVar8 = puVar5;
                  func_0x00010c12fac0();
                  uVar14 = SUB84(puVar15,0);
                  if ((int)puVar8 == 0) goto LAB_1056b1ea4;
                  goto LAB_1056b1ee4;
                }
              }
              else {
                if (iVar1 == 10) {
                  puVar3 = puVar4;
                  func_0x00010c0ff5c0();
                  puVar8 = puVar5;
                  func_0x00010c0ff5c0();
                  iVar1 = (int)puVar8;
                }
                else {
                  if (iVar1 != 0xb) goto LAB_1056b1ea4;
                  puVar3 = puVar4;
                  func_0x00010c278740();
                  puVar8 = puVar5;
                  func_0x00010c278740();
                  iVar1 = (int)puVar8;
                }
LAB_1056b1e9c:
                uVar14 = SUB84(puVar15,0);
                if ((int)puVar3 == iVar1) {
LAB_1056b1ee4:
                  _objc_retain(puVar18);
                  _objc_release(puVar4);
                  param_3 = puStack_280;
                  goto LAB_1056b1f00;
                }
              }
LAB_1056b1ea4:
              _objc_release(puVar4);
            }
LAB_1056b1eac:
            puVar17 = puVar17 + 1;
          } while (puVar6 != puVar17);
          puVar15 = &uStack_260;
          puVar16 = auStack_220;
          puVar6 = puVar7;
          func_0x00010bf52a60();
          uVar14 = SUB84(puVar15,0);
        } while (puVar6 != (undefined *)0x0);
        puVar18 = (undefined *)0x0;
        param_3 = puStack_280;
      }
LAB_1056b1f00:
      _objc_release(puVar7);
      _objc_release(puVar7);
      _objc_release(param_3);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a0) {
      ___stack_chk_fail();
      pcStack_288 = FUN_1056b1f60;
      puStack_2c0 = puVar4;
      puStack_2b8 = puVar18;
      puStack_2b0 = puVar20;
      puStack_2a8 = puVar7;
      puStack_2a0 = puVar3;
      puStack_298 = param_3;
      ppuStack_290 = &puStack_140;
      _objc_retain(puVar16);
      lVar11 = *(long *)(puVar5 + 8);
      func_0x00010c0fee00(lVar11);
      _objc_retainAutoreleasedReturnValue();
      lVar19 = lVar11;
      func_0x00010c0c4c40();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar19;
      func_0x00010c12fae0();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar12;
      func_0x00010c12fb00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar12);
      _objc_release(lVar19);
      _objc_release(lVar11);
      puStack_2f0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_2e8 = 0xc2000000;
      pcStack_2e0 = FUN_1056b2078;
      puStack_2d8 = &UNK_1108a79f8;
      puStack_2d0 = puVar16;
      uStack_2c8 = uVar14;
      _objc_retain(puVar16);
      lVar19 = lVar13;
      func_0x00010bfb2040(lVar13,param_2,&puStack_2f0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puStack_2d0);
      _objc_release(puVar16);
      _objc_release(lVar13);
      return (undefined *)(ulong)(lVar19 != 0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar18);
  return puVar18;
}



/* Entry: 1056b1ba4; end: 1056b1f5f; -[SCRenderEffectsEditorImpl getFilterRenderEffectNodeWithInput:] */

undefined * FUN_1056b1ba4(undefined *param_1,undefined8 param_2,long param_3,undefined1 *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  undefined *unaff_x19;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *unaff_x24;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined1 *puStack_1a0;
  undefined4 uStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_3;
  _objc_retain(param_3);
  uVar11 = (undefined4)lVar7;
  puVar2 = *(undefined **)(param_1 + 8);
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar2;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010bfdb0c0();
  _objc_release(puVar14);
  _objc_release(puVar2);
  if ((int)puVar15 == 0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    unaff_x19 = param_1;
    func_0x00010be8e140(param_1,param_2,2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = unaff_x19;
    func_0x00010c12fa40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar2,param_2,puVar14);
    _objc_release(puVar14);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    puStack_120 = (undefined8 *)0x0;
    _objc_retain(puVar2);
    puVar12 = &uStack_130;
    param_4 = auStack_f0;
    puVar3 = puVar2;
    func_0x00010bf52a60();
    uVar11 = SUB84(puVar12,0);
    if (puVar3 == (undefined *)0x0) {
      puVar15 = (undefined *)0x0;
    }
    else {
      puVar14 = (undefined *)*puStack_120;
      puStack_150 = unaff_x19;
      lStack_148 = param_3;
      puStack_140 = puVar14;
      puStack_138 = puVar2;
      do {
        puVar13 = (undefined *)0x0;
        do {
          if ((undefined *)*puStack_120 != puVar14) {
            _objc_enumerationMutation(puVar2);
          }
          puVar15 = *(undefined **)(lStack_128 + (long)puVar13 * 8);
          puVar4 = puVar15;
          func_0x00010c0664a0();
          if (puVar4 == (undefined *)0x1) {
            unaff_x24 = puVar15;
            func_0x00010bf5cc00();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = unaff_x24;
            func_0x00010c0840e0();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar4;
            func_0x00010bf96da0();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            func_0x00010bf96ee0();
            if ((int)puVar6 == 0x10) {
              _objc_release(puVar5);
              _objc_release(puVar4);
              _objc_release(unaff_x24);
            }
            else {
              puVar2 = puVar15;
              func_0x00010bf5cc00();
              _objc_retainAutoreleasedReturnValue();
              puVar14 = puVar2;
              func_0x00010c0840e0();
              _objc_retainAutoreleasedReturnValue();
              param_1 = puVar14;
              func_0x00010bf96da0();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = param_1;
              func_0x00010bf96ee0();
              _objc_release(param_1);
              _objc_release(puVar14);
              puVar14 = puStack_140;
              param_3 = lStack_148;
              _objc_release(puVar2);
              _objc_release(puVar5);
              _objc_release(puVar4);
              _objc_release(unaff_x24);
              puVar2 = puStack_138;
              if ((int)puVar6 != 0x1b) goto LAB_1056b1eac;
            }
            param_1 = puVar15;
            func_0x00010c066480();
            _objc_retainAutoreleasedReturnValue();
            unaff_x24 = param_1;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            lVar7 = param_3;
            func_0x00010c065ee0();
            iVar1 = (int)lVar7;
            if (iVar1 < 10) {
              if (iVar1 == 8) {
                param_1 = unaff_x24;
                func_0x00010c277f00();
                lVar7 = param_3;
                func_0x00010c277f00();
                iVar1 = (int)lVar7;
                goto LAB_1056b1e9c;
              }
              if (iVar1 == 9) {
                param_1 = unaff_x24;
                func_0x00010c12fac0();
                lVar7 = param_3;
                func_0x00010c12fac0();
                if ((int)param_1 != (int)lVar7) goto LAB_1056b1ea4;
                lVar7 = param_3;
                func_0x00010c12fac0();
                uVar11 = SUB84(puVar12,0);
                if ((int)lVar7 == 0) goto LAB_1056b1ea4;
                goto LAB_1056b1ee4;
              }
            }
            else {
              if (iVar1 == 10) {
                param_1 = unaff_x24;
                func_0x00010c0ff5c0();
                lVar7 = param_3;
                func_0x00010c0ff5c0();
                iVar1 = (int)lVar7;
              }
              else {
                if (iVar1 != 0xb) goto LAB_1056b1ea4;
                param_1 = unaff_x24;
                func_0x00010c278740();
                lVar7 = param_3;
                func_0x00010c278740();
                iVar1 = (int)lVar7;
              }
LAB_1056b1e9c:
              uVar11 = SUB84(puVar12,0);
              if ((int)param_1 == iVar1) {
LAB_1056b1ee4:
                _objc_retain(puVar15);
                _objc_release(unaff_x24);
                unaff_x19 = puStack_150;
                goto LAB_1056b1f00;
              }
            }
LAB_1056b1ea4:
            _objc_release(unaff_x24);
          }
LAB_1056b1eac:
          puVar13 = puVar13 + 1;
        } while (puVar3 != puVar13);
        puVar12 = &uStack_130;
        param_4 = auStack_f0;
        puVar3 = puVar2;
        func_0x00010bf52a60();
        uVar11 = SUB84(puVar12,0);
      } while (puVar3 != (undefined *)0x0);
      puVar15 = (undefined *)0x0;
      unaff_x19 = puStack_150;
    }
LAB_1056b1f00:
    _objc_release(puVar2);
    _objc_release(puVar2);
    _objc_release(unaff_x19);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_158 = FUN_1056b1f60;
    puStack_190 = unaff_x24;
    puStack_188 = puVar15;
    puStack_180 = puVar14;
    puStack_178 = puVar2;
    puStack_170 = param_1;
    puStack_168 = unaff_x19;
    puStack_160 = &stack0xfffffffffffffff0;
    _objc_retain(param_4);
    lVar8 = *(long *)(param_3 + 8);
    func_0x00010c0fee00(lVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar8;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar7;
    func_0x00010c12fae0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c12fb00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    _objc_release(lVar7);
    _objc_release(lVar8);
    puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1b8 = 0xc2000000;
    pcStack_1b0 = FUN_1056b2078;
    puStack_1a8 = &UNK_1108a79f8;
    puStack_1a0 = param_4;
    uStack_198 = uVar11;
    _objc_retain(param_4);
    lVar7 = lVar10;
    func_0x00010bfb2040(lVar10,param_2,&puStack_1c0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puStack_1a0);
    _objc_release(param_4);
    _objc_release(lVar10);
    return (undefined *)(ulong)(lVar7 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return puVar15;
}



/* Entry: 1056b1f60; end: 1056b2077; -[SCRenderEffectsEditorImpl containsRenderEffectNodeOfType:where:] */

bool FUN_1056b1f60(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0fee00(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c12fae0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c12fb00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1056b2078;
  puStack_58 = &UNK_1108a79f8;
  uStack_50 = param_4;
  uStack_48 = param_3;
  _objc_retain(param_4);
  lVar2 = lVar4;
  func_0x00010bfb2040(lVar4,param_2,&puStack_70);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_release(lVar4);
  return lVar2 != 0;
}



/* Entry: 1056b2078; end: 1056b215f;  */

bool FUN_1056b2078(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c14fb60();
  if ((int)lVar2 == *(int *)(param_1 + 0x28)) {
    lVar2 = param_2;
    func_0x00010c12f9a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    lVar3 = lVar2;
    func_0x00010bfb2040(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    bVar1 = lVar3 != 0;
    _objc_release(lVar3);
    _objc_release(uVar4);
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 1056b2160; end: 1056b21bf;  */

bool FUN_1056b2160(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c12fa40(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bfb2040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(lVar1);
  return lVar1 != 0;
}



/* Entry: 1056b21c0; end: 1056b22ef; -[SCRenderEffectsEditorImpl maxOutputIndexOfRenderEffectNodesForType:] */

ulong FUN_1056b21c0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  func_0x00010be8e140();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c12fa60();
  if (uVar5 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    uVar4 = 0;
    do {
      uVar6 = param_1;
      func_0x00010c12fa40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar6;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      uVar6 = uVar1;
      func_0x00010c0eee20();
      if (uVar6 != 0) {
        uVar6 = 0;
        do {
          uVar2 = uVar1;
          func_0x00010c0eee00();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c296de0();
          _objc_release(uVar2);
          if ((uint)uVar5 < (uint)uVar3) {
            uVar2 = uVar1;
            func_0x00010c0eee00();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar2;
            func_0x00010c296de0();
            _objc_release(uVar2);
          }
          uVar6 = uVar6 + 1;
          uVar2 = uVar1;
          func_0x00010c0eee20();
        } while (uVar6 < uVar2);
      }
      _objc_release(uVar1);
      uVar4 = uVar4 + 1;
      uVar6 = param_1;
      func_0x00010c12fa60();
    } while (uVar4 < uVar6);
    uVar5 = uVar5 & 0xffffffff;
  }
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 1056b22f0; end: 1056b2663; -[SCRenderEffectsEditorImpl _renderEffectDAGFromSceneOfType:] */

undefined * FUN_1056b22f0(long param_1,undefined *param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  int iVar19;
  undefined1 *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  int iVar26;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_1f8 [128];
  long lStack_178;
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
  
  puVar17 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfdb0c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((uVar4 & 1) == 0) {
    puVar21 = PTR_PTR_1126bcea8;
    _objc_opt_new(PTR_PTR_1126bcea8);
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0fee00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ea760();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(puVar21);
  }
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  lVar7 = *(long *)(param_1 + 8);
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar7;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar24;
  func_0x00010c12fae0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar25;
  func_0x00010c12fb00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar7);
  puVar20 = auStack_d8;
  lVar24 = lVar23;
  func_0x00010bf52a60();
  iVar19 = (int)puVar20;
  if (lVar24 != 0) {
    lVar25 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar25) {
          _objc_enumerationMutation(lVar23);
        }
        puVar22 = *(undefined **)(lStack_118 + lVar7 * 8);
        puVar21 = puVar22;
        func_0x00010c14fb60();
        iVar19 = (int)puVar20;
        if ((int)puVar21 == param_3) {
          _objc_retain(puVar22);
          goto LAB_1056b24b0;
        }
        lVar7 = lVar7 + 1;
      } while (lVar24 != lVar7);
      puVar20 = auStack_d8;
      lVar24 = lVar23;
      puVar17 = &uStack_120;
      func_0x00010bf52a60();
      iVar19 = (int)puVar20;
    } while (lVar24 != 0);
  }
  puVar22 = (undefined *)0x0;
LAB_1056b24b0:
  _objc_release(lVar23);
  lVar7 = *(long *)(param_1 + 8);
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar7;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar24;
  func_0x00010c12fae0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar25;
  func_0x00010c12fb20();
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar7);
  if ((puVar22 == (undefined *)0x0) || (puVar21 = puVar22, lVar23 == 0)) {
    puVar21 = PTR_PTR_1126bceb0;
    _objc_opt_new();
    _objc_release(puVar22);
    func_0x00010c1f6740(puVar21);
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar8;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c12fae0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010c12fb00();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = (undefined8 *)puVar21;
    func_0x00010befa120();
    _objc_release(uVar9);
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar8);
  }
  puVar22 = puVar21;
  func_0x00010c12f9c0();
  if (puVar22 == (undefined *)0x0) {
    puVar22 = puVar21;
    func_0x00010c12f9a0(puVar21);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126bceb8;
    _objc_opt_new();
    puVar17 = (undefined8 *)puVar11;
    func_0x00010befa120(puVar22);
    _objc_release(puVar11);
    _objc_release(puVar22);
  }
  puVar22 = puVar21;
  func_0x00010c12f9a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar22;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar22);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return puVar11;
  }
  ___stack_chk_fail();
  puVar18 = &uStack_240;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = *(undefined **)(puVar21 + 8);
  puVar16 = (undefined *)puVar17;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar10;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar22;
  func_0x00010bfdb0c0();
  _objc_release(puVar22);
  _objc_release();
  if ((int)puVar11 == 0) {
    puVar21 = (undefined *)0x0;
  }
  else {
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    lStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    plStack_230 = (long *)0x0;
    puVar11 = *(undefined **)(puVar21 + 8);
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar11;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar21;
    func_0x00010c12fae0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar22;
    func_0x00010c12fb00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar11);
    puVar20 = auStack_1f8;
    puVar21 = puVar10;
    func_0x00010bf52a60();
    iVar19 = (int)puVar20;
    if (puVar21 != (undefined *)0x0) {
      lVar24 = *plStack_230;
      do {
        puVar22 = (undefined *)0x0;
        do {
          if (*plStack_230 != lVar24) {
            _objc_enumerationMutation(puVar10);
          }
          lVar23 = *(long *)(lStack_238 + (long)puVar22 * 8);
          lVar25 = lVar23;
          func_0x00010c14fb60();
          iVar19 = (int)puVar20;
          if ((int)lVar25 == (int)puVar17) {
            _objc_retain(lVar23);
            lVar24 = lVar23;
            func_0x00010c12f9c0();
            puVar21 = (undefined *)(ulong)(lVar24 != 0);
            _objc_release(lVar23);
            goto LAB_1056b27f0;
          }
          puVar22 = puVar22 + 1;
        } while (puVar21 != puVar22);
        puVar20 = auStack_1f8;
        puVar21 = puVar10;
        puVar18 = &uStack_240;
        func_0x00010bf52a60();
        iVar19 = (int)puVar20;
      } while (puVar21 != (undefined *)0x0);
    }
    puVar21 = (undefined *)0x0;
LAB_1056b27f0:
    _objc_release();
    puVar16 = (undefined *)puVar18;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return puVar21;
  }
  ___stack_chk_fail();
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar16);
  puVar21 = puVar10;
  func_0x00010be8e140();
  _objc_retainAutoreleasedReturnValue();
  if (puVar21 != (undefined *)0x0) {
    puVar22 = puVar21;
    func_0x00010c12fa60();
    if (puVar22 != (undefined *)0x0) {
      puVar22 = (undefined *)0x0;
      do {
        puVar11 = puVar21;
        func_0x00010c12fa40();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar11;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        puVar11 = puVar12;
        func_0x00010c066480();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar11;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        puVar11 = puVar13;
        func_0x00010c065ee0();
        puVar14 = puVar16;
        func_0x00010c065ee0();
        if ((int)puVar11 == (int)puVar14) {
          puVar22 = puVar13;
          func_0x00010c065ee0();
          iVar1 = (int)puVar22;
          if (iVar1 < 10) {
            if (iVar1 == 8) {
              puVar22 = puVar13;
              func_0x00010c277f00();
              iVar26 = (int)puVar22;
              puVar22 = puVar16;
              func_0x00010c277f00();
              iVar1 = (int)puVar22;
            }
            else {
              if (iVar1 != 9) goto LAB_1056b2ac0;
              puVar22 = puVar13;
              func_0x00010c12fac0();
              iVar26 = (int)puVar22;
              puVar22 = puVar16;
              func_0x00010c12fac0();
              iVar1 = (int)puVar22;
            }
LAB_1056b29b8:
            if (iVar26 != iVar1) goto LAB_1056b2ac0;
            puVar22 = (undefined *)0x0;
LAB_1056b2a0c:
            puVar11 = puVar21;
            func_0x00010c12fa40(puVar21);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12d3c0();
            _objc_release(puVar11);
            uVar6 = *(undefined8 *)(puVar10 + 0x20);
            *(long *)(puVar10 + 0x18) = *(long *)(puVar10 + 0x18) + -1;
            puVar11 = PTR_PTR_1126bcea0;
            _objc_alloc(PTR_PTR_1126bcea0);
            puVar14 = puVar12;
            func_0x00010bf51e00(puVar12);
            func_0x00010c03e0e0(puVar11);
            func_0x00010c0d9840(uVar6);
            _objc_release(puVar11);
            _objc_release(puVar14);
            _objc_release(puVar13);
            _objc_release(puVar12);
            if (puVar22 == (undefined *)0x0) break;
            func_0x00010c288840(*(undefined8 *)(puVar10 + 0x10));
            _objc_unsafeClaimAutoreleasedReturnValue();
            puVar12 = puVar22;
          }
          else {
            if (iVar1 == 10) {
              puVar11 = puVar13;
              func_0x00010c0ff5c0();
              puVar14 = puVar16;
              func_0x00010c0ff5c0();
              puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              if ((int)puVar11 == (int)puVar14) {
                func_0x00010c0ff5c0(puVar16);
                func_0x00010c0df840();
                _objc_retainAutoreleasedReturnValue();
                goto LAB_1056b2a0c;
              }
            }
            else if (iVar1 == 0xb) {
              puVar22 = puVar13;
              func_0x00010c278740();
              iVar26 = (int)puVar22;
              puVar22 = puVar16;
              func_0x00010c278740();
              iVar1 = (int)puVar22;
              goto LAB_1056b29b8;
            }
LAB_1056b2ac0:
            _objc_release(puVar13);
          }
          _objc_release(puVar12);
          break;
        }
        _objc_release(puVar13);
        _objc_release(puVar12);
        puVar22 = puVar22 + 1;
        puVar11 = puVar21;
        func_0x00010c12fa60();
      } while (puVar22 < puVar11);
    }
    if (*(long *)(puVar10 + 0x18) == 0) {
      uVar5 = *(undefined8 *)(puVar10 + 8);
      func_0x00010c0fee00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0c4c40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ea760();
      _objc_release(uVar6);
      _objc_release(uVar5);
    }
    puVar22 = puVar21;
    func_0x00010c12fa60();
    if (puVar22 == (undefined *)0x0) {
      lVar15 = *(long *)(puVar10 + 8);
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      lVar25 = lVar15;
      func_0x00010c0c4c40();
      _objc_retainAutoreleasedReturnValue();
      lVar23 = lVar25;
      func_0x00010c12fae0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar23;
      func_0x00010c12fb00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar23);
      _objc_release(lVar25);
      _objc_release(lVar15);
      lVar25 = lVar7;
      func_0x00010bf52a60();
      lVar23 = lRam0000000000000000;
      while (lVar25 != 0) {
        lVar15 = 0;
        do {
          if (lRam0000000000000000 != lVar23) {
            _objc_enumerationMutation(lVar7);
          }
          iVar1 = (int)*(undefined8 *)(lVar15 * 8);
          func_0x00010c14fb60();
          if (iVar1 == iVar19) {
            uVar8 = *(undefined8 *)(puVar10 + 8);
            func_0x00010c0fee00(uVar8);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar8;
            func_0x00010c0c4c40();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar6;
            func_0x00010c12fae0();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar5;
            func_0x00010c12fb00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12d360();
            _objc_release(uVar9);
            _objc_release(uVar5);
            _objc_release(uVar6);
            _objc_release(uVar8);
            goto LAB_1056b2c78;
          }
          lVar15 = lVar15 + 1;
        } while (lVar25 != lVar15);
        lVar25 = lVar7;
        func_0x00010bf52a60();
      }
LAB_1056b2c78:
      _objc_release(lVar7);
    }
  }
  _objc_release(puVar21);
  _objc_release(puVar16);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
    return puVar16;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c1857d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setCreativeEditTag__11263f010,0);
  return param_2;
}



/* Entry: 1056b2664; end: 1056b2833; -[SCRenderEffectsEditorImpl _hasRenderEffectDAGFromSceneOfType:] */

undefined1 * FUN_1056b2664(long param_1,undefined1 *param_2,undefined1 *param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  int iVar21;
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
  puVar2 = *(undefined **)(param_1 + 8);
  puVar15 = param_3;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar3;
  func_0x00010bfdb0c0();
  _objc_release(puVar3);
  _objc_release();
  if ((int)puVar20 == 0) {
    puVar17 = (undefined1 *)0x0;
  }
  else {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    puVar4 = *(undefined **)(param_1 + 8);
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar3;
    func_0x00010c12fae0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar20;
    func_0x00010c12fb00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar20);
    _objc_release(puVar3);
    _objc_release(puVar4);
    puVar15 = auStack_d8;
    puVar3 = puVar2;
    func_0x00010bf52a60();
    param_4 = (int)puVar15;
    if (puVar3 != (undefined *)0x0) {
      lVar19 = *plStack_110;
      do {
        puVar20 = (undefined *)0x0;
        do {
          if (*plStack_110 != lVar19) {
            _objc_enumerationMutation(puVar2);
          }
          lVar18 = *(long *)(lStack_118 + (long)puVar20 * 8);
          lVar5 = lVar18;
          func_0x00010c14fb60();
          param_4 = (int)puVar15;
          if ((int)lVar5 == (int)param_3) {
            _objc_retain(lVar18);
            lVar19 = lVar18;
            func_0x00010c12f9c0();
            puVar17 = (undefined1 *)(ulong)(lVar19 != 0);
            _objc_release(lVar18);
            goto LAB_1056b27f0;
          }
          puVar20 = puVar20 + 1;
        } while (puVar3 != puVar20);
        puVar15 = auStack_d8;
        puVar3 = puVar2;
        puVar16 = &uStack_120;
        func_0x00010bf52a60();
        param_4 = (int)puVar15;
      } while (puVar3 != (undefined *)0x0);
    }
    puVar17 = (undefined1 *)0x0;
LAB_1056b27f0:
    _objc_release();
    puVar15 = (undefined1 *)puVar16;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar17;
  }
  ___stack_chk_fail();
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar15);
  puVar3 = puVar2;
  func_0x00010be8e140();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 != (undefined *)0x0) {
    puVar20 = puVar3;
    func_0x00010c12fa60();
    if (puVar20 != (undefined *)0x0) {
      puVar20 = (undefined *)0x0;
      do {
        puVar4 = puVar3;
        func_0x00010c12fa40();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar4;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        puVar4 = puVar6;
        func_0x00010c066480();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar4;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        puVar4 = puVar7;
        func_0x00010c065ee0();
        puVar17 = puVar15;
        func_0x00010c065ee0();
        if ((int)puVar4 == (int)puVar17) {
          puVar20 = puVar7;
          func_0x00010c065ee0();
          iVar1 = (int)puVar20;
          if (iVar1 < 10) {
            if (iVar1 == 8) {
              puVar20 = puVar7;
              func_0x00010c277f00();
              iVar21 = (int)puVar20;
              puVar17 = puVar15;
              func_0x00010c277f00();
              iVar1 = (int)puVar17;
            }
            else {
              if (iVar1 != 9) goto LAB_1056b2ac0;
              puVar20 = puVar7;
              func_0x00010c12fac0();
              iVar21 = (int)puVar20;
              puVar17 = puVar15;
              func_0x00010c12fac0();
              iVar1 = (int)puVar17;
            }
LAB_1056b29b8:
            if (iVar21 != iVar1) goto LAB_1056b2ac0;
            puVar20 = (undefined *)0x0;
LAB_1056b2a0c:
            puVar4 = puVar3;
            func_0x00010c12fa40(puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12d3c0();
            _objc_release(puVar4);
            uVar10 = *(undefined8 *)(puVar2 + 0x20);
            *(long *)(puVar2 + 0x18) = *(long *)(puVar2 + 0x18) + -1;
            puVar4 = PTR_PTR_1126bcea0;
            _objc_alloc(PTR_PTR_1126bcea0);
            puVar8 = puVar6;
            func_0x00010bf51e00(puVar6);
            func_0x00010c03e0e0(puVar4);
            func_0x00010c0d9840(uVar10);
            _objc_release(puVar4);
            _objc_release(puVar8);
            _objc_release(puVar7);
            _objc_release(puVar6);
            if (puVar20 == (undefined *)0x0) break;
            func_0x00010c288840(*(undefined8 *)(puVar2 + 0x10));
            _objc_unsafeClaimAutoreleasedReturnValue();
            puVar6 = puVar20;
          }
          else {
            if (iVar1 == 10) {
              puVar4 = puVar7;
              func_0x00010c0ff5c0();
              puVar17 = puVar15;
              func_0x00010c0ff5c0();
              puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              if ((int)puVar4 == (int)puVar17) {
                func_0x00010c0ff5c0(puVar15);
                func_0x00010c0df840();
                _objc_retainAutoreleasedReturnValue();
                goto LAB_1056b2a0c;
              }
            }
            else if (iVar1 == 0xb) {
              puVar20 = puVar7;
              func_0x00010c278740();
              iVar21 = (int)puVar20;
              puVar17 = puVar15;
              func_0x00010c278740();
              iVar1 = (int)puVar17;
              goto LAB_1056b29b8;
            }
LAB_1056b2ac0:
            _objc_release(puVar7);
          }
          _objc_release(puVar6);
          break;
        }
        _objc_release(puVar7);
        _objc_release(puVar6);
        puVar20 = puVar20 + 1;
        puVar4 = puVar3;
        func_0x00010c12fa60();
      } while (puVar20 < puVar4);
    }
    if (*(long *)(puVar2 + 0x18) == 0) {
      uVar9 = *(undefined8 *)(puVar2 + 8);
      func_0x00010c0fee00(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010c0c4c40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ea760();
      _objc_release(uVar10);
      _objc_release(uVar9);
    }
    puVar20 = puVar3;
    func_0x00010c12fa60();
    if (puVar20 == (undefined *)0x0) {
      lVar11 = *(long *)(puVar2 + 8);
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar11;
      func_0x00010c0c4c40();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = lVar5;
      func_0x00010c12fae0();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar18;
      func_0x00010c12fb00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar18);
      _objc_release(lVar5);
      _objc_release(lVar11);
      lVar5 = lVar12;
      func_0x00010bf52a60();
      lVar18 = lRam0000000000000000;
      while (lVar5 != 0) {
        lVar11 = 0;
        do {
          if (lRam0000000000000000 != lVar18) {
            _objc_enumerationMutation(lVar12);
          }
          iVar1 = (int)*(undefined8 *)(lVar11 * 8);
          func_0x00010c14fb60();
          if (iVar1 == param_4) {
            uVar13 = *(undefined8 *)(puVar2 + 8);
            func_0x00010c0fee00(uVar13);
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar13;
            func_0x00010c0c4c40();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar10;
            func_0x00010c12fae0();
            _objc_retainAutoreleasedReturnValue();
            uVar14 = uVar9;
            func_0x00010c12fb00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12d360();
            _objc_release(uVar14);
            _objc_release(uVar9);
            _objc_release(uVar10);
            _objc_release(uVar13);
            goto LAB_1056b2c78;
          }
          lVar11 = lVar11 + 1;
        } while (lVar5 != lVar11);
        lVar5 = lVar12;
        func_0x00010bf52a60();
      }
LAB_1056b2c78:
      _objc_release(lVar12);
    }
  }
  _objc_release(puVar3);
  _objc_release(puVar15);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    return puVar15;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c1857d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setCreativeEditTag__11263f010,0);
  return param_2;
}



/* Entry: 1056b2834; end: 1056b2ccb; -[SCRenderEffectsEditorImpl _removeRenderEffectsWithInput:renderEffectType:] */

void FUN_1056b2834(undefined *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined *puVar16;
  int iVar17;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = param_1;
  func_0x00010be8e140();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 != (undefined *)0x0) {
    puVar16 = puVar2;
    func_0x00010c12fa60();
    if (puVar16 != (undefined *)0x0) {
      puVar16 = (undefined *)0x0;
      do {
        puVar3 = puVar2;
        func_0x00010c12fa40();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        puVar3 = puVar4;
        func_0x00010c066480();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        puVar3 = puVar5;
        func_0x00010c065ee0();
        uVar6 = param_3;
        func_0x00010c065ee0();
        if ((int)puVar3 == (int)uVar6) {
          puVar16 = puVar5;
          func_0x00010c065ee0();
          iVar1 = (int)puVar16;
          if (iVar1 < 10) {
            if (iVar1 == 8) {
              puVar16 = puVar5;
              func_0x00010c277f00();
              iVar17 = (int)puVar16;
              uVar6 = param_3;
              func_0x00010c277f00();
              iVar1 = (int)uVar6;
            }
            else {
              if (iVar1 != 9) goto LAB_1056b2ac0;
              puVar16 = puVar5;
              func_0x00010c12fac0();
              iVar17 = (int)puVar16;
              uVar6 = param_3;
              func_0x00010c12fac0();
              iVar1 = (int)uVar6;
            }
LAB_1056b29b8:
            if (iVar17 != iVar1) goto LAB_1056b2ac0;
            puVar16 = (undefined *)0x0;
LAB_1056b2a0c:
            puVar3 = puVar2;
            func_0x00010c12fa40(puVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12d3c0();
            _objc_release(puVar3);
            uVar6 = *(undefined8 *)(param_1 + 0x20);
            *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + -1;
            puVar3 = PTR_PTR_1126bcea0;
            _objc_alloc(PTR_PTR_1126bcea0);
            puVar7 = puVar4;
            func_0x00010bf51e00(puVar4);
            func_0x00010c03e0e0(puVar3);
            func_0x00010c0d9840(uVar6);
            _objc_release(puVar3);
            _objc_release(puVar7);
            _objc_release(puVar5);
            _objc_release(puVar4);
            if (puVar16 == (undefined *)0x0) break;
            func_0x00010c288840(*(undefined8 *)(param_1 + 0x10));
            _objc_unsafeClaimAutoreleasedReturnValue();
            puVar4 = puVar16;
          }
          else {
            if (iVar1 == 10) {
              puVar3 = puVar5;
              func_0x00010c0ff5c0();
              uVar6 = param_3;
              func_0x00010c0ff5c0();
              puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              if ((int)puVar3 == (int)uVar6) {
                func_0x00010c0ff5c0(param_3);
                func_0x00010c0df840();
                _objc_retainAutoreleasedReturnValue();
                goto LAB_1056b2a0c;
              }
            }
            else if (iVar1 == 0xb) {
              puVar16 = puVar5;
              func_0x00010c278740();
              iVar17 = (int)puVar16;
              uVar6 = param_3;
              func_0x00010c278740();
              iVar1 = (int)uVar6;
              goto LAB_1056b29b8;
            }
LAB_1056b2ac0:
            _objc_release(puVar5);
          }
          _objc_release(puVar4);
          break;
        }
        _objc_release(puVar5);
        _objc_release(puVar4);
        puVar16 = puVar16 + 1;
        puVar3 = puVar2;
        func_0x00010c12fa60();
      } while (puVar16 < puVar3);
    }
    if (*(long *)(param_1 + 0x18) == 0) {
      uVar8 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0fee00(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar8;
      func_0x00010c0c4c40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ea760();
      _objc_release(uVar6);
      _objc_release(uVar8);
    }
    puVar16 = puVar2;
    func_0x00010c12fa60();
    if (puVar16 == (undefined *)0x0) {
      lVar9 = *(long *)(param_1 + 8);
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c0c4c40();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c12fae0();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x00010c12fb00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      lVar10 = lVar12;
      func_0x00010bf52a60();
      lVar11 = lRam0000000000000000;
      while (lVar10 != 0) {
        lVar9 = 0;
        do {
          if (lRam0000000000000000 != lVar11) {
            _objc_enumerationMutation(lVar12);
          }
          iVar1 = (int)*(undefined8 *)(lVar9 * 8);
          func_0x00010c14fb60();
          if (iVar1 == param_4) {
            uVar13 = *(undefined8 *)(param_1 + 8);
            func_0x00010c0fee00(uVar13);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar13;
            func_0x00010c0c4c40();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar6;
            func_0x00010c12fae0();
            _objc_retainAutoreleasedReturnValue();
            uVar14 = uVar8;
            func_0x00010c12fb00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12d360();
            _objc_release(uVar14);
            _objc_release(uVar8);
            _objc_release(uVar6);
            _objc_release(uVar13);
            goto LAB_1056b2c78;
          }
          lVar9 = lVar9 + 1;
        } while (lVar10 != lVar9);
        lVar10 = lVar12;
        func_0x00010bf52a60();
      }
LAB_1056b2c78:
      _objc_release(lVar12);
    }
  }
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c1857d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setCreativeEditTag__11263f010,0);
  return;
}



/* Entry: 1056b2ccc; end: 1056b2cd7;  */

void FUN_1056b2ccc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1857d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setCreativeEditTag__11263f010,0);
  return;
}



/* Entry: 1056b2cd8; end: 1056b2cdf; -[SCRenderEffectsEditorImpl renderEffectChangeObservable] */

undefined8 FUN_1056b2cd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1056b2ce0; end: 1056b2d1b; -[SCRenderEffectsEditorImpl .cxx_destruct] */

void FUN_1056b2ce0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056b2d1c; end: 1056b2de7; -[SCSnapDocAutoCaptionsEditorImpl initWithSnapDoc:layerEditor:gridEditor:] */

undefined1 *
FUN_1056b2d1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e99f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056b2de8; end: 1056b2e17; -[SCSnapDocAutoCaptionsEditorImpl resetWithSnapDoc:snapDocKey:mediaIdToAssetId:] */

void FUN_1056b2de8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1056b2e18; end: 1056b30bb; -[SCSnapDocAutoCaptionsEditorImpl addAutoCaptionsPlaybackLayerWithAutoCaptionsState:segment:] */

void FUN_1056b2e18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar1 = PTR_PTR_1126b25d0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  uVar9 = param_3;
  FUN_1056b3518(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf931e0(uVar10,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c118b40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2199c0();
  _objc_release(puVar2);
  _objc_release(uVar10);
  _objc_release(uVar9);
  uVar9 = param_3;
  func_0x0001056b34b8(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar10 = uVar9;
  func_0x00010bf51e00(uVar9);
  puVar2 = puVar1;
  func_0x00010bf5cc00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf114a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1db620();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar10);
  _objc_release(uVar9);
  puVar2 = puVar1;
  func_0x00010c118b40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c27a600();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c270d00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf51e00();
  puVar6 = puVar1;
  func_0x00010bf5cc00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf114a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216000();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126bcec0;
  _objc_opt_new(PTR_PTR_1126bcec0);
  puVar3 = puVar1;
  func_0x00010bf5cc00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16cc80();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010befa9a0(uVar9,param_2,puVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
  return;
}



/* Entry: 1056b30bc; end: 1056b331b; -[SCSnapDocAutoCaptionsEditorImpl decodeAutoCaptionsMetadata:playbackLayerId:] */

void FUN_1056b30bc(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c0ff640(lVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c27a600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    uVar4 = param_3;
    func_0x00010c0fb880();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lVar6 = *(long *)(param_1 + 0x18);
    func_0x00010bf67240(lVar6,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar6;
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      uVar9 = uVar4;
      func_0x00010bf529e0();
      if (uVar9 != 0) {
        uVar9 = 0;
        do {
          lVar2 = lVar6;
          func_0x00010c0dfd40(lVar6,param_2,uVar9);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar2 != 0) {
            puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
            lVar2 = lVar6;
            func_0x00010c0dfd40(lVar6,param_2,uVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar10,param_2,lVar2);
            _objc_release(lVar2);
            uVar7 = uVar4;
            func_0x00010bf529e0();
            if (uVar9 + 1 < uVar7) {
              lVar2 = lVar6;
              func_0x00010c0dfd40(lVar6,param_2,uVar9 + 1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar10,param_2,lVar2);
              _objc_release(lVar2);
            }
            puVar8 = PTR_PTR_1126bcec8;
            _objc_alloc(PTR_PTR_1126bcec8);
            uVar7 = uVar4;
            func_0x00010c0dfd40(uVar4,param_2,uVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c051760(puVar8,param_2,uVar7,puVar10);
            func_0x00010befa120(puVar5,param_2,puVar8);
            _objc_release(puVar8);
            _objc_release(uVar7);
            _objc_release(puVar10);
          }
          uVar7 = uVar4;
          func_0x00010bf529e0();
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar7);
      }
      puVar10 = PTR_PTR_1126bced0;
      _objc_alloc(PTR_PTR_1126bced0);
      func_0x00010c035e80();
    }
    _objc_release(lVar6);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1056b331c; end: 1056b3417; -[SCSnapDocAutoCaptionsEditorImpl autoCaptionsStateAtSegment:] */

void FUN_1056b331c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c0ff580();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    param_1 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0ff640(uVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf5cc00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf114a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010bf66c80(param_1,param_2,uVar6,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1056b3418; end: 1056b347b;  */

bool FUN_1056b3418(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf5cc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cc820();
  _objc_release(uVar1);
  _objc_release(param_2);
  return (int)uVar2 == 9;
}



/* Entry: 1056b347c; end: 1056b350f; -[SCSnapDocAutoCaptionsEditorImpl .cxx_destruct] */

void FUN_1056b347c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056b3510; end: 1056b3517;  */

void FUN_1056b3510(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_text_1126787e8);
  return;
}



/* Entry: 1056b3518; end: 1056b37b7;  */

undefined1 * FUN_1056b3518(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  double dVar15;
  double dVar16;
  long lStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  long lStack_258;
  undefined *puStack_250;
  long lStack_248;
  undefined1 *puStack_240;
  code *pcStack_238;
  long lStack_230;
  long lStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [256];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  lVar2 = param_1;
  lStack_230 = param_1;
  func_0x00010c0fb820();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = &uStack_220;
  puVar10 = auStack_180;
  uVar11 = 0x10;
  lStack_228 = lVar2;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar13 = *plStack_210;
    do {
      lVar14 = 0;
      do {
        if (*plStack_210 != lVar13) {
          _objc_enumerationMutation(lStack_228);
        }
        lVar3 = *(long *)(lStack_218 + lVar14 * 8);
        func_0x00010c27a600();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        dVar15 = 0.0;
        lStack_1b8 = 0;
        uStack_1c0 = 0;
        uStack_1a8 = 0;
        plStack_1b0 = (long *)0x0;
        uStack_198 = 0;
        uStack_1a0 = 0;
        uStack_188 = 0;
        uStack_190 = 0;
        _objc_retain(lVar3);
        lVar4 = lVar3;
        func_0x00010bf52a60();
        lVar6 = lVar3;
        if (lVar4 != 0) {
          param_1 = *plStack_1b0;
          do {
            unaff_x21 = 0;
            do {
              dVar16 = dVar15;
              if (*plStack_1b0 != param_1) {
                _objc_enumerationMutation(lVar3);
                dVar16 = dVar15;
              }
              puVar12 = *(undefined **)(lStack_1b8 + unaff_x21 * 8);
              puVar5 = puVar12;
              func_0x00010c27a460(puVar12);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c14e120();
              dVar15 = dVar16;
              _objc_release(puVar5);
              if (0.0 < dVar16) {
                _objc_retain(puVar12);
                goto LAB_1056b3710;
              }
              unaff_x21 = unaff_x21 + 1;
            } while (lVar4 != unaff_x21);
            lVar4 = lVar3;
            func_0x00010bf52a60();
          } while (lVar4 != 0);
        }
        _objc_release(lVar3);
        puVar12 = PTR_PTR_1126bb2a8;
        _objc_alloc(PTR_PTR_1126bb2a8);
        func_0x00010bfb1920(lVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar6;
        func_0x00010c27a460();
        _objc_retainAutoreleasedReturnValue();
        uStack_1d8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
        uStack_1e0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
        uStack_1d0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
        func_0x00010c052280(puVar12);
        _objc_release(lVar4);
LAB_1056b3710:
        _objc_release(lVar6);
        _objc_release(lVar3);
        _objc_release(lVar3);
        func_0x00010befa120(puVar1);
        _objc_release(puVar12);
        lVar14 = lVar14 + 1;
      } while (lVar14 != lVar2);
      puVar9 = &uStack_220;
      puVar10 = auStack_180;
      uVar11 = 0x10;
      lVar2 = lStack_228;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (lVar2 != 0);
  }
  _objc_release(lStack_228);
  lVar2 = lStack_230;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  plVar7 = &lStack_270;
  pcStack_238 = FUN_1056b37b8;
  uStack_260 = unaff_x22;
  lStack_258 = unaff_x21;
  puStack_250 = puVar1;
  lStack_248 = param_1;
  puStack_240 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  _objc_retain(puVar10);
  _objc_retain(uVar11);
  puStack_268 = PTR_PTR_1126e9a00;
  lStack_270 = lVar2;
  _objc_msgSendSuper2(&lStack_270,PTR_s_init_1125d9248);
  if (plVar7 != (long *)0x0) {
    _objc_retain(puVar9);
    uVar8 = *(undefined8 *)((long)plVar7 + 8);
    *(undefined8 **)((long)plVar7 + 8) = puVar9;
    _objc_release(uVar8);
    _objc_retain(puVar10);
    uVar8 = *(undefined8 *)((long)plVar7 + 0x10);
    *(undefined1 **)((long)plVar7 + 0x10) = puVar10;
    _objc_release(uVar8);
    _objc_retain(uVar11);
    uVar8 = *(undefined8 *)((long)plVar7 + 0x18);
    *(undefined8 *)((long)plVar7 + 0x18) = uVar11;
    _objc_release(uVar8);
  }
  _objc_release(uVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  return (undefined1 *)plVar7;
}



/* Entry: 1056b37b8; end: 1056b3883; -[SCSnapDocDrawingEditorImpl initWithSnapDoc:layerEditor:gridEditor:] */

undefined1 *
FUN_1056b37b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e9a00;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056b3884; end: 1056b38b3; -[SCSnapDocDrawingEditorImpl resetWithSnapDoc:snapDocKey:mediaIdToAssetId:] */

void FUN_1056b3884(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1056b38b4; end: 1056b3cd7; -[SCSnapDocDrawingEditorImpl addDrawingPlaybackLayerWithStroke:segment:] */

void FUN_1056b38b4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bced8;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c099460(param_3);
  func_0x00010bf93320(uVar11);
  func_0x00010c2256c0(puVar1);
  lVar2 = param_3;
  func_0x00010bf89e60();
  if (lVar2 == 1) {
    puVar3 = PTR_PTR_1126bcee8;
    _objc_opt_new(PTR_PTR_1126bcee8);
    lVar2 = param_3;
    func_0x00010bf8e2c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17ac80(puVar3);
    _objc_release(lVar2);
    func_0x00010c17ac80(puVar1);
  }
  else {
    if (lVar2 != 0) goto LAB_1056b3a44;
    puVar3 = PTR_PTR_1126bcee0;
    _objc_opt_new(PTR_PTR_1126bcee0);
    lVar2 = param_3;
    func_0x00010bf40c40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfc9760();
    func_0x00010c17e800(puVar3);
    _objc_release(lVar2);
    func_0x00010c20eaa0(puVar1);
  }
  _objc_release(puVar3);
LAB_1056b3a44:
  lVar2 = param_3;
  func_0x00010c102f00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = &PTR___NSConcreteGlobalBlock_1108a7ac8;
  lVar4 = lVar2;
  func_0x000100504554();
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b25d0;
  _objc_opt_new(PTR_PTR_1126b25d0);
  puVar5 = puVar3;
  func_0x00010bf5cc00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf89f40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174000();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93040(uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010bf5cc00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf89f40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9880();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar11);
  _objc_release(puVar5);
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfce320(uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf5cc00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf89f40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a4560();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar11);
  puVar5 = PTR_PTR_1126bcef0;
  _objc_opt_new(PTR_PTR_1126bcef0);
  puVar6 = puVar3;
  func_0x00010bf5cc00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c191960();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010befa9a0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(lVar4);
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar11);
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c09ea00(ppuVar9);
                    /* WARNING: Could not recover jumptable at 0x00010c297190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_valueWithCGPoint__112683688);
  return;
}



/* Entry: 1056b3cd8; end: 1056b3d03;  */

void FUN_1056b3cd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c09ea00(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c297190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_valueWithCGPoint__112683688);
  return;
}



/* Entry: 1056b3d04; end: 1056b3e63; -[SCSnapDocDrawingEditorImpl drawingStrokesAtSegment:] */

undefined * FUN_1056b3d04(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c0ff580();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar2);
  lVar4 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      lVar5 = param_1;
      func_0x00010bf8a000();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 != 0) {
        func_0x00010befa120(puVar3);
      }
      _objc_release(lVar5);
      lVar9 = lVar9 + 1;
    } while (lVar4 != lVar9);
    lVar4 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x00010bf5cc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0cc820();
  _objc_release(uVar6);
  _objc_release(param_2);
  return (undefined *)(ulong)((int)uVar7 == 8);
}



/* Entry: 1056b3e64; end: 1056b3ec7;  */

bool FUN_1056b3e64(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf5cc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cc820();
  _objc_release(uVar1);
  _objc_release(param_2);
  return (int)uVar2 == 8;
}



/* Entry: 1056b3ec8; end: 1056b3fb7; -[SCSnapDocDrawingEditorImpl drawingStrokeOfPlaybackLayerWithId:] */

void FUN_1056b3ec8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c0ff640(uVar6,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126bb2b0;
  uVar1 = uVar6;
  func_0x00010bf5cc00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf89f40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c067fc0(param_3);
  _objc_release(param_3);
  func_0x00010c0fcd00(*(undefined8 *)(param_1 + 0x18));
  func_0x00010bf89fa0(puVar5,param_2,uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1056b3fb8; end: 1056b3ff3; -[SCSnapDocDrawingEditorImpl .cxx_destruct] */

void FUN_1056b3fb8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056b3ff4; end: 1056b432b; +[SCDrawingCTItemUtil drawingStrokeFromMetadata:uniqueId:canvasWidth:] */

void FUN_1056b3ff4(double param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  _objc_retain(param_4);
  puVar2 = param_4;
  func_0x00010bf21960();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_4;
  func_0x00010bf219c0();
  if ((int)puVar3 != 3) {
LAB_1056b420c:
    puVar7 = (undefined *)0x0;
    goto LAB_1056b42f4;
  }
  puVar3 = param_4;
  func_0x00010bfce320();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00010c2a5040();
  if ((int)puVar7 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = param_4;
    func_0x00010bfce320();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bfe0640();
    _objc_release(puVar7);
    _objc_release(puVar3);
    if ((int)puVar8 == 0) goto LAB_1056b420c;
    puVar3 = param_4;
    func_0x00010bfce320(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    func_0x00010c2a5040();
    puVar7 = param_4;
    func_0x00010bfce320(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar7;
    func_0x00010bfe0640();
    _objc_release(puVar7);
    _objc_release(puVar3);
    puVar7 = PTR_PTR_1126bcef8;
    puVar9 = param_4;
    func_0x00010c0f5a60(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_4;
    func_0x00010bfce320(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a5040();
    puVar6 = param_4;
    func_0x00010bfce320(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe0640();
    func_0x00010bf67080((float)param_1,
                        (float)((param_1 / (double)((ulong)puVar8 & 0xffffffff)) *
                               (double)((ulong)puVar4 & 0xffffffff)),puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar8;
    func_0x000100504554();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar9);
    puVar4 = puVar2;
    func_0x00010bf21980();
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puVar7 = (undefined *)0x0;
    iVar1 = (int)puVar4;
    if (iVar1 == 0) goto LAB_1056b42ec;
    puVar4 = puVar2;
    if (iVar1 == 1) {
      func_0x00010c25dfa0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf40c40();
      func_0x00010bf41500(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = (undefined *)0x0;
LAB_1056b425c:
      _objc_release(puVar4);
    }
    else {
      puVar9 = (undefined *)0x0;
      puVar8 = puVar7;
      if (iVar1 == 2) {
        func_0x00010bf35900(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar4;
        func_0x00010bf35900();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = (undefined *)0x0;
        goto LAB_1056b425c;
      }
    }
    puVar7 = PTR_PTR_1126bcf08;
    _objc_alloc(PTR_PTR_1126bcf08);
    puVar4 = PTR_PTR_1126bcef8;
    func_0x00010c2a5040(puVar2);
    puVar5 = param_4;
    func_0x00010bfce320(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a5040();
    func_0x00010bf66e00((float)param_1,puVar4);
    func_0x00010c026160(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar9);
    _objc_release(puVar8);
  }
LAB_1056b42ec:
  _objc_release(puVar3);
LAB_1056b42f4:
  _objc_release(puVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1056b432c; end: 1056b4393;  */

void FUN_1056b432c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bcf00;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010bdc1060(param_4);
  _objc_release(param_4);
  func_0x00010c026b40(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056b4394; end: 1056b4493; -[SCSnapDocFiltersEditorImpl initWithSnapDoc:layerEditor:renderEffectsEditor:sdomEditor:] */

undefined1 *
FUN_1056b4394(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e9a08;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = 0;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056b4494; end: 1056b44c3; -[SCSnapDocFiltersEditorImpl resetWithSnapDoc:snapDocKey:mediaIdToAssetId:] */

void FUN_1056b4494(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1056b44c4; end: 1056b47a7; -[SCSnapDocFiltersEditorImpl updateRenderEffectsWithFilter:segment:] */

void FUN_1056b44c4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
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
  lVar1 = param_1;
  func_0x00010be8e1a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  puVar10 = &uStack_140;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar11 = *plStack_130;
    do {
      lVar12 = 0;
      do {
        if (*plStack_130 != lVar11) {
          _objc_enumerationMutation(lVar1);
        }
        puVar3 = PTR_PTR_1126bcd28;
        _objc_opt_new(PTR_PTR_1126bcd28);
        puVar4 = puVar3;
        func_0x00010c066480();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120();
        _objc_release(puVar4);
        *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
        func_0x00010c1ea6e0(puVar3);
        puVar4 = PTR_PTR_1126b0cc0;
        _objc_opt_new();
        puVar5 = PTR_PTR_1126b0cb8;
        _objc_opt_new(PTR_PTR_1126b0cb8);
        puVar6 = PTR_PTR_1126b37c0;
        _objc_opt_new();
        _objc_retain();
        _objc_retain(puVar4);
        _objc_retain(puVar6);
        func_0x00010c0bd2a0(param_3);
        func_0x00010c196600(puVar5);
        func_0x00010c1b5d40(puVar4);
        func_0x00010c1863a0(puVar3);
        puVar7 = PTR_PTR_1126bce98;
        _objc_opt_new();
        puVar8 = PTR_PTR_1126bce90;
        _objc_opt_new(PTR_PTR_1126bce90);
        puVar9 = puVar7;
        func_0x00010bfa2d60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120();
        _objc_release(puVar9);
        func_0x00010c1857c0(puVar3);
        func_0x00010befae60(*(undefined8 *)(param_1 + 0x20));
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar4);
        _objc_release(puVar6);
        _objc_release(puVar4);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar3);
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      puVar10 = &uStack_140;
      lVar2 = lVar1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar10);
  func_0x00010c19bd60(*(undefined8 *)(param_3 + 0x20));
  if (puVar10 != (undefined8 *)0x0) {
    func_0x00010c1c73c0(*(undefined8 *)(param_3 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar10);
  return;
}



/* Entry: 1056b47a8; end: 1056b47fb;  */

void FUN_1056b47a8(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010c19bd60(*(undefined8 *)(param_1 + 0x20));
  if (param_3 != 0) {
    func_0x00010c1c73c0(*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056b47fc; end: 1056b4807;  */

void FUN_1056b47fc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1bcc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setLensSnapchat__11264cd48,param_2);
  return;
}



/* Entry: 1056b4808; end: 1056b493b; -[SCSnapDocFiltersEditorImpl replaceRenderEffectsWithFilters:atSegment:] */

void FUN_1056b4808(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
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
  _objc_retain(param_4);
  func_0x00010bf6c640(param_1,param_2,param_4);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010c289220(param_1,param_2,*(undefined8 *)(lStack_118 + lVar8 * 8),param_4);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = param_3;
  func_0x00010be16a20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar7 = lVar1;
    func_0x00010bf5cc00();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar8;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf96ee0();
    if ((int)lVar3 == 0x10) {
      _objc_release(lVar2);
      _objc_release(lVar8);
      _objc_release(lVar7);
    }
    else {
      lVar3 = lVar1;
      func_0x00010bf5cc00();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0840e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf96da0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf96ee0();
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar8);
      _objc_release(lVar7);
      if ((int)lVar6 != 0x1b) goto LAB_1056b4a50;
    }
    func_0x00010c12dfc0(*(undefined8 *)(param_3 + 0x20),param_2,lVar1,2);
  }
LAB_1056b4a50:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1056b493c; end: 1056b4a6f; -[SCSnapDocFiltersEditorImpl deleteRenderEffectsLastFilterNodeAtSegment:] */

void FUN_1056b493c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = param_1;
  func_0x00010be16a20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bf5cc00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf96ee0();
    if ((int)lVar5 == 0x10) {
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    else {
      lVar5 = lVar1;
      func_0x00010bf5cc00();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c0840e0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf96da0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf96ee0();
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      if ((int)lVar8 != 0x1b) goto LAB_1056b4a50;
    }
    func_0x00010c12dfc0(*(undefined8 *)(param_1 + 0x20),param_2,lVar1,2);
  }
LAB_1056b4a50:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1056b4a70; end: 1056b4d43; -[SCSnapDocFiltersEditorImpl deleteRenderEffectsAllFiltersNodesAtSegment:] */

/* WARNING: Possible PIC construction at 0x0001056b4b8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001056b4c00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001056b4b90) */
/* WARNING: Removing unreachable block (ram,0x0001056b4bb4) */
/* WARNING: Removing unreachable block (ram,0x0001056b4c04) */
/* WARNING: Removing unreachable block (ram,0x0001056b4c40) */
/* WARNING: Removing unreachable block (ram,0x0001056b4c8c) */

void FUN_1056b4a70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010be8e1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      lVar4 = *(long *)(param_1 + 0x20);
      func_0x00010bfc5960();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 != 0) {
        lVar5 = lVar4;
        func_0x00010bf5cc00();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c0840e0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010bf96ee0();
        if ((int)lVar8 == 0x10) goto code_r0x00010be63ee0;
        lVar8 = lVar4;
        func_0x00010bf5cc00();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar8;
        func_0x00010c0840e0();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar9;
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar10;
        func_0x00010bf96ee0();
        if ((int)lVar11 == 0x1b) goto code_r0x00010be63ee0;
        _objc_release(lVar10);
        _objc_release(lVar9);
        _objc_release(lVar8);
        _objc_release(lVar7);
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(lVar4);
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 != lVar3);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
code_r0x00010be63ee0:
                    /* WARNING: Could not recover jumptable at 0x00010be63ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1056b4d44; end: 1056b4d47; -[SCSnapDocFiltersEditorImpl numberOfFiltersAppliedOnSegment:] */

void FUN_1056b4d44(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be63ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__nodeCountOfSegment__112576958);
  return;
}



/* Entry: 1056b4d48; end: 1056b4eab; -[SCSnapDocFiltersEditorImpl _findLastNodeAtSegment:] */

void FUN_1056b4d48(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010be8e1a0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010bf529e0();
  if (lVar7 == 0) {
    lVar7 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x00010bfc5960();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010be63ee0(param_1,param_2,param_3);
    lVar7 = 0;
    if ((lVar4 != 0) && (0 < lVar5)) {
      lVar8 = 0;
      lVar9 = 1;
      do {
        lVar7 = lVar4;
        puVar6 = PTR_PTR_1126bcd38;
        _objc_opt_new(PTR_PTR_1126bcd38);
        lVar4 = lVar7;
        func_0x00010c12f9e0(lVar7);
        func_0x00010c1ea740(puVar6,param_2,lVar4);
        _objc_retain(lVar7);
        _objc_release(lVar8);
        lVar4 = *(long *)(param_1 + 0x20);
        func_0x00010bfc5960(lVar4,param_2,puVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar7);
        _objc_release(puVar6);
        bVar1 = lVar9 < lVar5;
        lVar8 = lVar7;
        lVar9 = lVar9 + 1;
      } while (lVar4 != 0 && bVar1);
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 1056b4eac; end: 1056b4ee7; -[SCSnapDocFiltersEditorImpl _nodeCountOfSegment:] */

undefined8 FUN_1056b4eac(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfaec40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1056b4ee8; end: 1056b51eb; -[SCSnapDocFiltersEditorImpl filtersAtSegment:] */

void FUN_1056b4ee8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  
  lVar1 = param_1;
  func_0x00010be8e1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010bfc5960();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    while (lVar3 != 0) {
      lVar10 = lVar3;
      func_0x00010bf5cc00();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar10;
      func_0x00010c0840e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf96da0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf96ee0();
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar10);
      puVar9 = PTR_PTR_1126bcd58;
      lVar10 = lVar3;
      if ((int)lVar6 == 0x10) {
        func_0x00010bf5cc00(lVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar10;
        func_0x00010c0840e0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010bfad780();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar3;
        func_0x00010bf5cc00(lVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar8;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf5d740(puVar9,param_2,lVar6,lVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar7);
        _objc_release(lVar8);
LAB_1056b5124:
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(lVar4);
        _objc_release(lVar10);
        func_0x00010befa120(puVar11,param_2,puVar9);
        _objc_release(puVar9);
      }
      else {
        lVar4 = lVar3;
        func_0x00010bf5cc00();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c0840e0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar6;
        func_0x00010bf96ee0();
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(lVar4);
        puVar9 = PTR_PTR_1126bcd58;
        if ((int)lVar8 == 0x1b) {
          func_0x00010bf5cc00(lVar3);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar10;
          func_0x00010c0840e0();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010bf96da0();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010c096c60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c27e6e0(puVar9,param_2,lVar6);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_1056b5124;
        }
      }
      puVar9 = PTR_PTR_1126bcd38;
      _objc_opt_new(PTR_PTR_1126bcd38);
      lVar10 = lVar3;
      func_0x00010c12f9e0(lVar3);
      func_0x00010c1ea740(puVar9,param_2,lVar10);
      lVar10 = *(long *)(param_1 + 0x20);
      func_0x00010bfc5960(lVar10,param_2,puVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(puVar9);
      lVar3 = lVar10;
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 1056b51ec; end: 1056b57c7; -[SCSnapDocFiltersEditorImpl appliedFilters] */

undefined * FUN_1056b51ec(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c12fa80(lVar1,param_2,&PTR___NSConcreteGlobalBlock_1108a7bc8);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(lVar1);
  lVar2 = lVar1;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
      _objc_release(lVar1);
      puVar3 = puVar20;
      func_0x00010bf51e00();
      _objc_release(puVar20);
      _objc_release(lVar1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
        return puVar3;
      }
      ___stack_chk_fail();
      _objc_retain(param_2);
      lVar2 = param_2;
      func_0x00010bf5cc00();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar2;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar9;
      func_0x00010bfae120();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = lVar1;
      func_0x00010bfadfa0();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = lVar17;
      func_0x00010c297e80();
      _objc_retainAutoreleasedReturnValue();
      if (lVar18 == 0) {
        lVar10 = param_2;
        func_0x00010bf5cc00();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar10;
        func_0x00010c0840e0();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar11;
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar12;
        func_0x00010bf96ee0();
        if ((int)lVar13 == 0x1b) {
          puVar20 = (undefined *)0x1;
        }
        else {
          lVar13 = param_2;
          func_0x00010bf5cc00();
          _objc_retainAutoreleasedReturnValue();
          lVar14 = lVar13;
          func_0x00010c0840e0();
          _objc_retainAutoreleasedReturnValue();
          lVar15 = lVar14;
          func_0x00010bf96da0();
          _objc_retainAutoreleasedReturnValue();
          lVar16 = lVar15;
          func_0x00010bf96ee0();
          puVar20 = (undefined *)(ulong)((int)lVar16 == 0x10);
          _objc_release(lVar15);
          _objc_release(lVar14);
          _objc_release(lVar13);
        }
        _objc_release(lVar12);
        _objc_release(lVar11);
        _objc_release(lVar10);
      }
      else {
        puVar20 = (undefined *)0x1;
      }
      _objc_release(lVar18);
      _objc_release(lVar17);
      _objc_release(lVar1);
      _objc_release(lVar9);
      _objc_release(lVar2);
      _objc_release(param_2);
      return puVar20;
    }
    lVar18 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(lVar1);
      }
      puVar19 = *(undefined **)(lVar18 * 8);
      puVar3 = puVar19;
      func_0x00010bf5cc00();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0840e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf96da0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf96ee0();
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126bcd58;
      if ((int)puVar6 == 0x10) {
        puVar4 = puVar19;
        func_0x00010bf5cc00();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar4;
        func_0x00010c0840e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar6;
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar5;
        func_0x00010bfad780();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf5cc00();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar19;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf5d740();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        _objc_release(puVar19);
        puVar19 = puVar6;
LAB_1056b5480:
        _objc_release(puVar8);
LAB_1056b5484:
        _objc_release(puVar5);
        _objc_release(puVar19);
        _objc_release(puVar4);
        func_0x00010befa120(puVar20);
        _objc_release(puVar3);
      }
      else {
        puVar3 = puVar19;
        func_0x00010bf5cc00();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c0840e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010bf96ee0();
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar3);
        puVar3 = PTR_PTR_1126bcd58;
        if ((int)puVar6 == 0x1b) {
          func_0x00010bf5cc00();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar19;
          func_0x00010c0840e0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar6;
          func_0x00010bf96da0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar5;
          func_0x00010c096c60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c27e6e0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar19;
          puVar19 = puVar6;
          goto LAB_1056b5480;
        }
        puVar3 = puVar19;
        func_0x00010bf5cc00();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010bfae120();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010bfadfa0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar6;
        func_0x00010c297e80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar3);
        puVar3 = PTR_PTR_1126bcd58;
        if (puVar8 != (undefined *)0x0) {
          puVar4 = PTR_PTR_1126b3828;
          _objc_opt_new();
          func_0x00010bf5cc00();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar19;
          func_0x00010c0cc0c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf5d740();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_1056b5484;
        }
      }
      lVar18 = lVar18 + 1;
    } while (lVar2 != lVar18);
    lVar2 = lVar1;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1056b57c8; end: 1056b58f3; -[SCSnapDocFiltersEditorImpl _renderEffectNodeInputsForSegmentIndex:] */

void FUN_1056b57c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1056b58f4;
  uStack_40 = 0x1056b5904;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puStack_38 = puVar1;
  _objc_retain(param_3);
  func_0x00010c0be120(param_3);
  uVar2 = puStack_58[5];
  _objc_retain(uVar2);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(puStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1056b58f4; end: 1056b590b;  */

void FUN_1056b58f4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1056b590c; end: 1056b5a5b;  */

long FUN_1056b590c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c0ff5a0(lVar1,param_2,&PTR___NSConcreteGlobalBlock_1108a7be8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(lVar1);
      }
      uVar6 = *(undefined8 *)(lVar7 * 8);
      puVar3 = PTR_PTR_1126bcd38;
      _objc_opt_new(PTR_PTR_1126bcd38);
      func_0x00010c067ec0(uVar6);
      func_0x00010c1dd680(puVar3);
      func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
      _objc_release(puVar3);
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = lVar1;
    func_0x00010bf52a60();
  }
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return lVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bf0b760();
  if ((int)lVar5 == 5) {
    lVar1 = param_2;
    func_0x00010c0c3fe0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010bfd8fc0();
    _objc_release(lVar1);
  }
  else {
    lVar5 = 0;
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  return lVar5;
}



/* Entry: 1056b5a5c; end: 1056b5ae7;  */

undefined8 FUN_1056b5a5c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf0b760();
  if ((int)uVar3 == 5) {
    uVar2 = param_2;
    func_0x00010c0c3fe0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd8fc0();
    _objc_release(uVar2);
  }
  else {
    uVar3 = 0;
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 1056b5ae8; end: 1056b5c37;  */

long FUN_1056b5ae8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c0ff580(lVar1,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR___NSConcreteGlobalBlock_1108a7c08);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(lVar1);
      }
      uVar6 = *(undefined8 *)(lVar7 * 8);
      puVar3 = PTR_PTR_1126bcd38;
      _objc_opt_new(PTR_PTR_1126bcd38);
      func_0x00010c067ec0(uVar6);
      func_0x00010c1dd680(puVar3);
      func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
      _objc_release(puVar3);
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = lVar1;
    func_0x00010bf52a60();
  }
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return lVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bf0b760();
  if ((int)lVar5 == 5) {
    lVar1 = param_2;
    func_0x00010c0c3fe0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010bfd8fc0();
    _objc_release(lVar1);
  }
  else {
    lVar5 = 0;
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  return lVar5;
}



/* Entry: 1056b5c38; end: 1056b5cc3;  */

undefined8 FUN_1056b5c38(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf0b760();
  if ((int)uVar3 == 5) {
    uVar2 = param_2;
    func_0x00010c0c3fe0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd8fc0();
    _objc_release(uVar2);
  }
  else {
    uVar3 = 0;
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 1056b5cc4; end: 1056b5d0b; -[SCSnapDocFiltersEditorImpl .cxx_destruct] */

void FUN_1056b5cc4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056b5d0c; end: 1056b5d9f; -[SCSnapDocGridEditorImpl initWithSnapDoc:pixelWidth:defaultGridWidth:] */

undefined1 *
FUN_1056b5d0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e9a10;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1056b5da0; end: 1056b5de3; -[SCSnapDocGridEditorImpl isGridSizeSet] */

bool FUN_1056b5da0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfce320(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2a5040();
  _objc_release(uVar1);
  return (int)uVar2 != 0;
}



/* Entry: 1056b5de4; end: 1056b5e0b; -[SCSnapDocGridEditorImpl pixelHeight] */

float FUN_1056b5de4(double param_1,long param_2)

{
  double dVar1;
  
  dVar1 = *(double *)(param_2 + 0x10);
  func_0x00010bfce280();
  return (float)(dVar1 / param_1);
}



/* Entry: 1056b5e0c; end: 1056b5e3b; -[SCSnapDocGridEditorImpl resetWithSnapDoc:snapDocKey:mediaIdToAssetId:] */

void FUN_1056b5e0c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1056b5e3c; end: 1056b5e93; -[SCSnapDocGridEditorImpl gridProperties] */

void FUN_1056b5e3c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010bfd78c0();
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bfce320(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf51e00();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1056b5e94; end: 1056b5f1b; -[SCSnapDocGridEditorImpl pixelSize] */

undefined1  [16] FUN_1056b5e94(double param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010bfce320();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2a5040();
  if ((int)uVar2 == 0) {
    _objc_release(uVar1);
  }
  else {
    func_0x00010bfce280(param_2);
    dVar3 = param_1;
    _objc_release(uVar1);
    if (param_1 != 0.0) {
      dVar4 = *(double *)(param_2 + 0x10);
      func_0x00010bfce280(param_2);
      dVar3 = dVar4 / dVar3;
      goto LAB_1056b5f08;
    }
  }
  dVar4 = *(double *)PTR__CGSizeZero_110347620;
  dVar3 = *(double *)(PTR__CGSizeZero_110347620 + 8);
LAB_1056b5f08:
  auVar5._8_8_ = dVar3;
  auVar5._0_8_ = dVar4;
  return auVar5;
}



/* Entry: 1056b5f1c; end: 1056b5fc7; -[SCSnapDocGridEditorImpl gridAspectRatio] */

double FUN_1056b5f1c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfce320();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2a5040();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    dVar7 = 0.0;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 8);
    func_0x00010bfce320(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c2a5040();
    uVar5 = *(ulong *)(param_1 + 8);
    func_0x00010bfce320(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfe0640();
    dVar7 = (double)(uVar4 & 0xffffffff) / (double)(uVar6 & 0xffffffff);
    _objc_release(uVar5);
    _objc_release(uVar3);
  }
  return dVar7;
}


