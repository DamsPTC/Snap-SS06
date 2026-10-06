/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109159504; end: 10915953b;  */

void FUN_109159504(long param_1,undefined8 param_2)

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



/* Entry: 10915953c; end: 10915954f;  */

void FUN_10915953c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109159550; end: 1091595fb; -[SCSnapchatSticker _itemInstanceFromCTPItem:bitmojiPresentationModel:] */

void FUN_109159550(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf96f00();
  if (lVar1 == 2) {
    func_0x00010bdd4840(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_3;
    func_0x00010bf96f00();
    if (lVar1 == 1) {
      func_0x00010bebd580(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      param_1 = 0;
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1091595fc; end: 109159757; -[SCSnapchatSticker _ctpBitmojiStickerCTPItemFromSOJUSticker:] */

void FUN_1091595fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  func_0x00010bdd4800(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar6 = 0;
    puVar7 = (undefined *)0x0;
  }
  else {
    lVar6 = param_1;
    func_0x00010c26afc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bfb7be0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = 1;
    if (lVar2 != 0) {
      uVar1 = 2;
    }
    _objc_release();
    puVar7 = PTR_PTR_1126ba800;
    _objc_alloc(PTR_PTR_1126ba800);
    uVar3 = param_3;
    func_0x00010c06c0a0(param_3);
    func_0x00010bfffd00(puVar7,param_2,lVar6,uVar1,uVar3,0);
  }
  puVar4 = PTR_PTR_1126baa60;
  _objc_alloc(PTR_PTR_1126baa60);
  lVar2 = param_1;
  func_0x00010c26afc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c26afc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01fe20(puVar4,param_2,lVar2,2,puVar7,lVar5,0);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(puVar7);
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 109159758; end: 109159b1f; -[SCSnapchatSticker _bitmojiItemInstanceFromCTPItem:bitmojiPresentationModel:] */

void FUN_109159758(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126ba800;
  _objc_opt_class(PTR_PTR_1126ba800);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar13);
  uVar1 = uVar2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126ba7e8;
    _objc_opt_new(PTR_PTR_1126ba7e8);
    puVar13 = PTR_PTR_1126b0cc0;
    _objc_opt_new();
    puVar5 = PTR_PTR_1126b0cb8;
    _objc_opt_new();
    puVar6 = PTR_PTR_1126b37c0;
    _objc_opt_new();
    puVar7 = PTR_PTR_1126ba7e0;
    _objc_opt_new(PTR_PTR_1126ba7e0);
    uVar3 = uVar2;
    func_0x00010bf1c500();
    uVar8 = uVar2;
    func_0x00010bf41a00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17ece0(puVar7);
    _objc_release(uVar8);
    func_0x00010c21acc0(puVar7);
    func_0x00010c06c000(uVar2);
    func_0x00010c1af280(puVar7);
    uVar8 = uVar2;
    func_0x00010bf62ee0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar8 != 0) {
      puVar9 = PTR_PTR_1126ba7f8;
      _objc_opt_new(PTR_PTR_1126ba7f8);
      uVar8 = uVar2;
      func_0x00010bf62ee0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar8;
      func_0x00010c1306a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1eab00(puVar9);
      _objc_release(uVar10);
      _objc_release(uVar8);
      func_0x00010bf62ee0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar2;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(puVar9);
      _objc_release(uVar8);
      _objc_release(uVar2);
      func_0x00010c189160(puVar7);
      _objc_release(puVar9);
    }
    uVar11 = param_4;
    func_0x00010bf63000(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c188dc0(puVar4);
    _objc_release(uVar11);
    uVar11 = param_4;
    func_0x00010bf12ea0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16da00(puVar4);
    _objc_release(uVar11);
    if (uVar3 == 2) {
      uVar11 = param_4;
      func_0x00010bfb7be0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19fa20(puVar4);
      _objc_release(uVar11);
    }
    func_0x00010c130220();
    func_0x00010c1ea920(puVar4);
    puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar2 = param_3;
    func_0x00010c0844e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00();
    _objc_release(uVar2);
    puVar12 = PTR__OBJC_CLASS___NSData_1126ae778;
    if (((ulong)puVar9 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c0844e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf649c0(puVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a99c0(puVar5);
      _objc_release(puVar12);
      _objc_release(uVar2);
    }
    func_0x00010c171580(puVar6);
    func_0x00010c196600(puVar5);
    func_0x00010c1b5d40(puVar13);
    puVar9 = puVar13;
    func_0x00010c0cc0c0(puVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1715c0();
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 109159b20; end: 109159dd7; -[SCSnapchatSticker _snapchatItemInstanceFromCTPItem:] */

void FUN_109159b20(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126babc8;
  _objc_opt_class(PTR_PTR_1126babc8);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar10);
  uVar1 = uVar2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = PTR_PTR_1126b0cc0;
    _objc_opt_new(PTR_PTR_1126b0cc0);
    puVar4 = PTR_PTR_1126b0cb8;
    _objc_opt_new(PTR_PTR_1126b0cb8);
    puVar5 = PTR_PTR_1126b37c0;
    _objc_opt_new(PTR_PTR_1126b37c0);
    puVar6 = PTR_PTR_1126babb0;
    _objc_opt_new(PTR_PTR_1126babb0);
    puVar7 = PTR_PTR_1126b0ce8;
    _objc_opt_new();
    uVar3 = uVar2;
    func_0x00010c2434e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cafa0(puVar6);
    _objc_release(uVar3);
    func_0x00010c06c000(uVar2);
    func_0x00010c1af280(puVar6);
    func_0x00010c0c45e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar7);
    _objc_retain(puVar7);
    func_0x00010c0c1100(uVar2);
    _objc_release(uVar2);
    func_0x00010c1c4360(puVar6);
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar2 = param_3;
    func_0x00010c0844e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00();
    _objc_release(uVar2);
    puVar9 = PTR__OBJC_CLASS___NSData_1126ae778;
    if (((ulong)puVar8 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c0844e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf649c0(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a99c0(puVar4);
      _objc_release(puVar9);
      _objc_release(uVar2);
    }
    func_0x00010c2056e0(puVar5);
    func_0x00010c196600(puVar4);
    func_0x00010c1b5d40(puVar10);
    _objc_release(puVar7);
    _objc_release(puVar7);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 109159dd8; end: 109159e7f;  */

void FUN_109159dd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c214440(uVar1);
  func_0x00010c182a60(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109159e80; end: 109159ec7; -[SCSnapchatSticker .cxx_destruct] */

void FUN_109159e80(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109159ec8; end: 109159f3b; -[CTPGRPCFeedsConverter initWithMediaContentConverter:] */

undefined1 * FUN_109159ec8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112700928;
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



/* Entry: 109159f3c; end: 109159f63; -[CTPGRPCFeedsConverter protoFeedTypeFromFeedType:] */

undefined4 FUN_109159f3c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 0x19) {
    return *(undefined4 *)(&UNK_10dfb8060 + (param_3 - 1U) * 4);
  }
  return 0xfbadbeef;
}



/* Entry: 109159f64; end: 109159f83; -[CTPGRPCFeedsConverter feedTypeFromProtoFeedType:] */

undefined8 FUN_109159f64(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if (param_3 < 0x1e) {
    return *(undefined8 *)(&UNK_10dfb80c8 + (ulong)param_3 * 8);
  }
  return 0;
}



/* Entry: 109159f84; end: 10915a0eb; -[CTPGRPCFeedsConverter _feedSourceFromProtoSourceDeltaForce:] */

void FUN_109159f84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bfcecc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c086ae0();
  puVar4 = PTR_PTR_1126dd800;
  puVar6 = (undefined *)0x0;
  iVar1 = (int)uVar3;
  if (iVar1 != 0) {
    if (iVar1 == 3) {
      uVar3 = uVar2;
      func_0x00010bfe5ea0(uVar2);
      func_0x00010bfe5f80(puVar4,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar4;
    }
    else {
      puVar7 = puVar6;
      if (iVar1 == 2) {
        uVar3 = uVar2;
        func_0x00010c0d4f60(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d5160(puVar4,param_2,uVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        puVar7 = puVar4;
      }
    }
    puVar4 = PTR_PTR_1126dd808;
    _objc_alloc(PTR_PTR_1126dd808);
    uVar3 = param_3;
    func_0x00010bfcecc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c087060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021180(puVar4,param_2,uVar5,puVar7);
    _objc_release(uVar5);
    _objc_release(uVar3);
    puVar6 = PTR_PTR_1126be980;
    func_0x00010bf6d360(PTR_PTR_1126be980,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar7);
  }
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10915a0ec; end: 10915a17f; -[CTPGRPCFeedsConverter _feedSourceFromProtoSourceCompute:] */

void FUN_10915a0ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126be980;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0f5800(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf13b20(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf459e0(puVar3,param_2,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10915a180; end: 10915a18b; -[CTPGRPCFeedsConverter _feedSourceFromProtoSourceClient:] */

void FUN_10915a180(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3ca50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126be980,PTR_s_client_1125acc38);
  return;
}



/* Entry: 10915a18c; end: 10915a27b; -[CTPGRPCFeedsConverter _feedSourceFromProtoFeedSource:] */

void FUN_10915a18c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c247940();
  iVar1 = (int)uVar2;
  uVar2 = param_3;
  if (iVar1 == 3) {
    func_0x00010bf3ca40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be0ee00(param_1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (iVar1 == 2) {
    func_0x00010bf457e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be0ee20(param_1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (iVar1 != 1) {
      param_1 = 0;
      goto LAB_10915a260;
    }
    func_0x00010bf6d2e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be0ee40(param_1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
LAB_10915a260:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10915a27c; end: 10915a55f; -[CTPGRPCFeedsConverter feedFromProtoFeed:context:] */

void FUN_10915a27c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    func_0x00010c27dd80(param_3);
    func_0x00010bfa4360();
    lVar2 = param_3;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bfd8ea0();
    if ((int)lVar3 == 0) {
      uVar11 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010c0c3fe0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar4;
      func_0x00010c28f740(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(uVar4);
    }
    lVar3 = param_3;
    func_0x00010c0da980();
    if (lVar3 == 0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_3;
      func_0x00010c0da960();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar5;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar3 != 0) {
        lVar9 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar5);
          }
          lVar6 = param_1;
          func_0x00010bfa3c20(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar12);
          _objc_release(lVar6);
          lVar9 = lVar9 + 1;
        } while (lVar3 != lVar9);
        lVar3 = lVar5;
        func_0x00010bf52a60();
      }
      _objc_release(lVar5);
    }
    lVar3 = param_3;
    func_0x00010bfdc740();
    if ((int)lVar3 == 0) {
      param_1 = 0;
    }
    else {
      lVar3 = param_3;
      func_0x00010c247520(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be0ede0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
    }
    puVar7 = PTR_PTR_1126b0cb0;
    _objc_alloc(PTR_PTR_1126b0cb0);
    func_0x00010c0559c0();
    puVar10 = PTR_PTR_1126be988;
    _objc_alloc(PTR_PTR_1126be988);
    func_0x00010c2480a0(param_3);
    func_0x00010c0124e0(puVar10);
    _objc_release(puVar7);
    _objc_release(param_1);
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 10915a560; end: 10915a56b; -[CTPGRPCFeedsConverter .cxx_destruct] */

void FUN_10915a560(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10915a56c; end: 10915a71f; -[CTPProtobufItemTransformer itemFromProtobufItem:] */

void FUN_10915a56c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfd6be0();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    uVar1 = param_3;
    func_0x00010bf96da0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf96ee0();
    func_0x00010c0df760(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar3 = *(ulong *)(param_1 + 8);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      uVar1 = param_3;
      func_0x00010bfe5ea0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010bf15da0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      func_0x00010bf96f40(uVar3);
      uVar5 = uVar3;
      func_0x00010bf96e00();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126ba800;
      _objc_opt_class(PTR_PTR_1126ba800);
      uVar6 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar7);
      if (((uVar6 & 1) == 0) || (uVar6 = uVar5, func_0x00010bf1c500(), uVar6 != 0)) {
        puVar7 = PTR_PTR_1126baa60;
        _objc_alloc(PTR_PTR_1126baa60);
        uVar1 = param_3;
        func_0x000109161b98(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01fe20(puVar7);
        _objc_release(uVar1);
      }
      else {
        puVar7 = (undefined *)0x0;
      }
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10915a720; end: 10915a85b; -[CTPProtobufItemTransformer protobufItemFromItem:] */

void FUN_10915a720(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = param_3;
  func_0x00010bf96f00(param_3);
  lVar3 = param_1;
  func_0x00010bf96dc0(param_1,param_2,uVar1);
  func_0x00010c0df760(puVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010c0e00e0(lVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar4 = lVar3;
    func_0x00010bdc2220(lVar3,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b0cb8;
    _objc_alloc_init(PTR_PTR_1126b0cb8);
    func_0x00010c196600();
    puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
    uVar1 = param_3;
    func_0x00010c0844e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf649c0(puVar5,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a99c0(puVar6,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(uVar1);
    _objc_release(lVar4);
  }
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10915a85c; end: 10915a8df; -[CTPProtobufItemTransformer presentationModelFromProtobufMetadata:protobufEntityTypeNumber:] */

void FUN_10915a85c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0e00e0(lVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c10f540(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10915a8e0; end: 10915a903; -[CTPProtobufItemTransformer entityCaseFromEntityType:] */

undefined4 FUN_10915a8e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 0x11) {
    return *(undefined4 *)(&UNK_10dfb81b8 + (param_3 - 1U) * 4);
  }
  return 0;
}



/* Entry: 10915a904; end: 10915a90f; -[CTPProtobufItemTransformer .cxx_destruct] */

void FUN_10915a904(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10915a910; end: 10915a92b;  */

void FUN_10915a910(void)

{
  _objc_alloc_init(PTR_PTR_1126badf0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10915a92c; end: 10915a933; -[CTPUniversalProtobufItemTransformer itemFromProtobufItem:] */

void FUN_10915a92c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c084470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_itemFromProtobufItem__1125feb28);
  return;
}



/* Entry: 10915a934; end: 10915a93b; -[CTPUniversalProtobufItemTransformer protobufItemFromItem:] */

void FUN_10915a934(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1196b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_protobufItemFromItem__112623fc8);
  return;
}



/* Entry: 10915a93c; end: 10915a943; -[CTPUniversalProtobufItemTransformer presentationModelFromProtobufMetadata:protobufEntityTypeNumber:] */

void FUN_10915a93c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10f570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_presentationModelFromProtobufMet_112621778);
  return;
}



/* Entry: 10915a944; end: 10915a94b; -[CTPUniversalProtobufItemTransformer entityCaseFromEntityType:] */

void FUN_10915a944(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf96dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_entityCaseFromEntityType__1125c3518);
  return;
}



/* Entry: 10915a94c; end: 10915a957; -[CTPUniversalProtobufItemTransformer .cxx_destruct] */

void FUN_10915a94c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10915a958; end: 10915ab37; -[CTPProtobufEntityTransformerBitmojiSticker SCCTPCTItemEntityFromProtobufItem:] */

void FUN_10915a958(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ba800;
  _objc_opt_class(PTR_PTR_1126ba800);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar6);
  uVar1 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  if (uVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126b37c0;
    _objc_opt_new(PTR_PTR_1126b37c0);
    puVar3 = PTR_PTR_1126ba7e0;
    _objc_opt_new(PTR_PTR_1126ba7e0);
    uVar2 = param_3;
    func_0x00010bf41a00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17ece0(puVar3);
    _objc_release(uVar2);
    func_0x00010bf1c500(param_3);
    func_0x00010c119080(param_1);
    func_0x00010c21acc0(puVar3);
    func_0x00010c06c000(param_3);
    func_0x00010c1af280(puVar3);
    uVar2 = param_3;
    func_0x00010bf62ee0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar2 != 0) {
      puVar4 = PTR_PTR_1126ba7f8;
      _objc_opt_new(PTR_PTR_1126ba7f8);
      uVar2 = param_3;
      func_0x00010bf62ee0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010c1306a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1eab00(puVar4);
      _objc_release(uVar5);
      _objc_release(uVar2);
      func_0x00010bf62ee0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(puVar4);
      _objc_release(uVar2);
      _objc_release(param_3);
      func_0x00010c189160(puVar3);
      _objc_release(puVar4);
    }
    func_0x00010c171580(puVar6);
    _objc_release(puVar3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10915ab38; end: 10915ab9f; -[CTPProtobufEntityTransformerBitmojiSticker presentationModelFromProtobufMetadata:] */

void FUN_10915ab38(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  func_0x00010bf1c360();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126ba808;
    _objc_alloc(PTR_PTR_1126ba808);
    func_0x00010bff8380();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10915aba0; end: 10915ac63; -[CTPProtobufEntityTransformerBitmojiSticker entityFromProtobufItem:] */

void FUN_10915aba0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010bfd6be0(), (int)lVar1 == 0)) {
    param_1 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf96ee0();
    uVar3 = param_1;
    func_0x00010bf96f20();
    if ((int)lVar2 == (int)uVar3) {
      lVar2 = lVar1;
      func_0x00010bf1c2e0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf96e20(param_1,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
    }
    else {
      param_1 = 0;
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10915ac64; end: 10915adbf; -[CTPProtobufEntityTransformerBitmojiSticker entityFromProtobufSticker:] */

void FUN_10915ac64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c27dd80(param_3);
  func_0x00010bf1c520(param_1,param_2,uVar1);
  uVar1 = param_3;
  func_0x00010bfd61c0();
  if ((int)uVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126bb280;
    _objc_alloc(PTR_PTR_1126bb280);
    uVar1 = param_3;
    func_0x00010bf62ee0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c1306a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010bf62ee0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03e2a0(puVar6,param_2,uVar2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  puVar5 = PTR_PTR_1126ba800;
  _objc_alloc(PTR_PTR_1126ba800);
  uVar1 = param_3;
  func_0x00010bf41a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c06c000(param_3);
  func_0x00010bfffd00(puVar5,param_2,uVar1,param_1,uVar2,puVar6);
  _objc_release(uVar1);
  _objc_release(puVar6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10915adc0; end: 10915addb; -[CTPProtobufEntityTransformerBitmojiSticker protoBitmojiTypeFromBitmojiType:] */

undefined4 FUN_10915adc0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_3 != 1) {
    uVar1 = 0xfbadbeef;
  }
  if (param_3 == 2) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 10915addc; end: 10915adf3; -[CTPProtobufEntityTransformerBitmojiSticker bitmojiTypeFromProtoBitmojiType:] */

undefined1 FUN_10915addc(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined1 uVar1;
  
  uVar1 = 2;
  if (param_3 != 1) {
    uVar1 = param_3 == 0;
  }
  return uVar1;
}



/* Entry: 10915adf4; end: 10915b273; -[CTPProtobufEntityTransformerCameo SCCTPCTItemEntityFromProtobufItem:] */

void FUN_10915adf4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126be9e0;
  _objc_opt_class(PTR_PTR_1126be9e0);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  if (uVar1 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = PTR_PTR_1126b37c0;
    _objc_opt_new();
    puVar5 = PTR_PTR_1126dd810;
    _objc_opt_new();
    uVar6 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0c45e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar6;
    func_0x00010c119360(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4360(puVar5);
    _objc_release(uVar14);
    _objc_release(uVar4);
    _objc_release(uVar6);
    puVar7 = PTR_PTR_1126ae740;
    func_0x00010bf09f00(PTR_PTR_1126ae740);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a2660(puVar5);
    _objc_release(puVar7);
    uVar8 = param_3;
    func_0x00010bfbec20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar8;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (uVar4 != 0) {
      uVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(uVar8);
        }
        uVar14 = *(undefined8 *)(uVar12 * 8);
        puVar9 = puVar5;
        func_0x00010bfbec20(puVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126bae00;
        func_0x00010c067ec0(uVar14);
        func_0x00010c1190a0(puVar7);
        func_0x00010befc800(puVar9);
        _objc_release(puVar9);
        uVar12 = uVar12 + 1;
      } while (uVar4 != uVar12);
      uVar4 = uVar8;
      func_0x00010bf52a60();
    }
    _objc_release(uVar8);
    puVar7 = PTR_PTR_1126dd818;
    _objc_opt_new(PTR_PTR_1126dd818);
    func_0x00010c188de0(puVar5);
    _objc_release(puVar7);
    uVar4 = param_3;
    func_0x00010bf62940(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010bf6a6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf62940(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b260();
    _objc_release(puVar7);
    _objc_release(uVar8);
    _objc_release(uVar4);
    uVar4 = param_3;
    func_0x00010bf62940(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6a720();
    puVar7 = puVar5;
    func_0x00010bf62940(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b2c0();
    _objc_release(puVar7);
    _objc_release(uVar4);
    uVar4 = param_3;
    func_0x00010bf62940(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c081fe0();
    puVar7 = puVar5;
    func_0x00010bf62940(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b54c0();
    _objc_release(puVar7);
    _objc_release(uVar4);
    uVar4 = param_3;
    func_0x00010bf62940(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010bfb3fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar8;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar12;
    func_0x00010c0d3c80();
    puVar7 = puVar5;
    func_0x00010bf62940(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e580();
    _objc_release(puVar7);
    _objc_release(uVar10);
    _objc_release(uVar12);
    _objc_release(uVar8);
    _objc_release(uVar4);
    func_0x00010bf62940();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c26b840();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar8;
    func_0x00010c0d3c80();
    puVar7 = puVar5;
    func_0x00010bf62940(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213100();
    _objc_release(puVar7);
    _objc_release(uVar12);
    _objc_release(uVar8);
    _objc_release(uVar4);
    _objc_release(param_3);
    _objc_release(puVar5);
  }
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    puVar13 = PTR_PTR_1126dd820;
    _objc_retain(puVar3);
    _objc_opt_new(puVar13);
    puVar5 = puVar3;
    func_0x00010bdc2b80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21afe0(puVar13);
    _objc_release(puVar5);
    puVar5 = puVar3;
    func_0x00010c0d4f60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010c1cafa0(puVar13);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 10915b274; end: 10915b3c3;  */

void FUN_10915b274(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126dd820;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  uVar2 = param_2;
  func_0x00010bdc2b80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21afe0(puVar1);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c0d4f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c1cafa0(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10915b3c4; end: 10915b3cb; -[CTPProtobufEntityTransformerCameo presentationModelFromProtobufMetadata:] */

undefined8 FUN_10915b3c4(void)

{
  return 0;
}



/* Entry: 10915b3cc; end: 10915b5d7; -[CTPProtobufEntityTransformerCameo entityFromProtobufItem:] */

void FUN_10915b3cc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010bfd6be0(), (int)lVar1 == 0)) {
    puVar10 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf96ee0();
    lVar3 = param_1;
    func_0x00010bf96f20();
    if ((int)lVar2 == (int)lVar3) {
      lVar2 = lVar1;
      func_0x00010bf28a40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bfd8f20();
      if ((int)lVar3 == 0) {
        puVar10 = (undefined *)0x0;
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 8);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c0c45e0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c28f740(uVar4,param_2,lVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        _objc_release(uVar4);
        puVar7 = PTR_PTR_1126dd830;
        lVar3 = lVar2;
        func_0x00010bfbec20(lVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar2;
        func_0x00010bfbec40(lVar2);
        func_0x00010bf51340(puVar7,param_2,lVar3,lVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        puVar8 = PTR_PTR_1126dd830;
        lVar3 = lVar2;
        func_0x00010bf62940(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf51300(puVar8,param_2,lVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        puVar10 = PTR_PTR_1126be9e0;
        _objc_alloc(PTR_PTR_1126be9e0);
        lVar3 = lVar2;
        func_0x00010bf28b00(lVar2);
        puVar9 = puVar7;
        func_0x00010bf51e00(puVar7);
        func_0x00010bffaf20(puVar10,param_2,lVar3,puVar9,uVar5,puVar8,1);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(uVar5);
      }
      _objc_release(lVar2);
    }
    else {
      puVar10 = (undefined *)0x0;
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10915b5d8; end: 10915b5ef; +[CTPProtobufEntityTransformerCameo protoCameoGenderFromCameoGender:] */

undefined1 FUN_10915b5d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  
  uVar1 = 2;
  if (param_3 != 2) {
    uVar1 = param_3 == 1;
  }
  return uVar1;
}



/* Entry: 10915b5f0; end: 10915b607; +[CTPProtobufEntityTransformerCameo cameoGenderFromProtoCameoGender:] */

undefined1 FUN_10915b5f0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined1 uVar1;
  
  uVar1 = 2;
  if (param_3 != 2) {
    uVar1 = param_3 == 1;
  }
  return uVar1;
}



/* Entry: 10915b608; end: 10915b613; -[CTPProtobufEntityTransformerCameo .cxx_destruct] */

void FUN_10915b608(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10915b614; end: 10915b6d7; -[CTPProtobufEntityTransformerChatCameo SCCTPCTItemEntityFromProtobufItem:] */

void FUN_10915b614(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126be9e0;
  _objc_opt_class(PTR_PTR_1126be9e0);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar4);
  uVar1 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  if (uVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126b37c0;
    _objc_opt_new(PTR_PTR_1126b37c0);
    puVar3 = PTR_PTR_1126dd838;
    _objc_opt_new(PTR_PTR_1126dd838);
    func_0x00010bf28b00(param_3);
    func_0x00010c175dc0(puVar3);
    func_0x00010c17af20(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10915b6d8; end: 10915b6df; -[CTPProtobufEntityTransformerChatCameo presentationModelFromProtobufMetadata:] */

undefined8 FUN_10915b6d8(void)

{
  return 0;
}



/* Entry: 10915b6e0; end: 10915b8cb; -[CTPProtobufEntityTransformerChatCameo entityFromProtobufItem:] */

void FUN_10915b6e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010bfd6be0(), (int)lVar1 == 0)) {
    puVar8 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf96ee0();
    uVar3 = param_1;
    func_0x00010bf96f20();
    if ((int)lVar2 == (int)uVar3) {
      lVar2 = lVar1;
      func_0x00010bf36020();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126dd830;
      lVar4 = lVar2;
      func_0x00010bfbec20();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x00010bfbec40(lVar2);
      func_0x00010bf51340(puVar6,param_2,lVar4,lVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      lVar4 = lVar2;
      func_0x00010c26b6a0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 == 0) {
        lVar7 = lVar2;
        func_0x00010c13b540(lVar2);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(lVar5);
        lVar7 = lVar5;
      }
      _objc_release(lVar5);
      _objc_release(lVar4);
      uVar3 = param_1;
      func_0x00010be5e520(param_1,param_2,lVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3780(param_1,param_2,lVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126be9e0;
      _objc_alloc(PTR_PTR_1126be9e0);
      lVar4 = lVar2;
      func_0x00010bf28b00(lVar2);
      func_0x00010bffaf20(puVar8,param_2,lVar4,puVar6,uVar3,param_1,2);
      _objc_release(param_1);
      _objc_release(uVar3);
      _objc_release(lVar7);
      _objc_release(puVar6);
      _objc_release(lVar2);
    }
    else {
      puVar8 = (undefined *)0x0;
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10915b8cc; end: 10915b987; -[CTPProtobufEntityTransformerChatCameo _mediaContentFrom:] */

void FUN_10915b8cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  func_0x00010c084fc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = PTR_PTR_1126d25c0;
  uVar2 = uVar1;
  func_0x00010bdc2b80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bdc2b80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28fb20(puVar4,param_2,uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10915b988; end: 10915bb53; -[CTPProtobufEntityTransformerChatCameo _CTPCustomTextparametersFrom:] */

void FUN_10915b988(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf62940();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf529e0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = param_3;
  func_0x00010bf62940();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x1) {
    puVar2 = puVar1;
    func_0x00010bf002e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = param_3;
    func_0x00010bf62940(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bdf6c60(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0e00e0(puVar1,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(puVar1);
    if (puVar2 != (undefined *)0x0) goto LAB_10915bb10;
    puVar3 = param_3;
    func_0x00010bf62940(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c087ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010c0e00e0(puVar3,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  _objc_release(puVar1);
  _objc_release(puVar3);
LAB_10915bb10:
  puVar1 = PTR_PTR_1126dd830;
  func_0x00010bf51300(PTR_PTR_1126dd830,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10915bb54; end: 10915bbcb; -[CTPProtobufEntityTransformerChatCameo _currentLocale] */

void FUN_10915bb54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010c106cc0(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c25cfc0(puVar2,param_2,&PTR____CFConstantStringClassReference_110db3638,
                      &PTR____CFConstantStringClassReference_110dc1338);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10915bbcc; end: 10915bbd7; -[CTPProtobufEntityTransformerChatCameo .cxx_destruct] */

void FUN_10915bbcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10915bbd8; end: 10915bc83; +[CTPProtobugEntityTransformerCameoHelper convertProtoGendersToNumbers:gendersArrayCount:] */

void FUN_10915bbd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  func_0x00010bf0a0e0(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10915bc84;
  puStack_40 = &UNK_110842ff8;
  _objc_retain();
  puStack_38 = puVar1;
  func_0x00010bf980c0(param_3,param_2,&puStack_58);
  _objc_release(param_3);
  _objc_release(puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10915bc84; end: 10915bcdf;  */

void FUN_10915bc84(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010bf28ae0(PTR_PTR_1126bae00,param_2,param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10915bce0; end: 10915c03b; +[CTPProtobugEntityTransformerCameoHelper convertProtoCustomTextParameters:] */

undefined * FUN_10915bce0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar2 = param_3;
  func_0x00010bfb3fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar11 = *plStack_1a0;
    do {
      lVar14 = 0;
      do {
        if (*plStack_1a0 != lVar11) {
          _objc_enumerationMutation(lVar2);
        }
        uVar12 = *(undefined8 *)(lStack_1a8 + lVar14 * 8);
        puVar4 = PTR_PTR_1126dd840;
        _objc_alloc(PTR_PTR_1126dd840);
        uVar5 = uVar12;
        func_0x00010c0d4f60(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc2b80(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c02d4a0(puVar4,param_2,uVar5,uVar12);
        _objc_release(uVar12);
        _objc_release(uVar5);
        func_0x00010befa120(puVar1,param_2,puVar4);
        _objc_release(puVar4);
        lVar14 = lVar14 + 1;
      } while (lVar3 != lVar14);
      lVar3 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_1b0,auStack_f0,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lVar2 = param_3;
  func_0x00010c26b840();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar11 = *plStack_1e0;
    do {
      lVar14 = 0;
      do {
        if (*plStack_1e0 != lVar11) {
          _objc_enumerationMutation(lVar2);
        }
        uVar13 = *(undefined8 *)(lStack_1e8 + lVar14 * 8);
        puVar6 = PTR_PTR_1126dd848;
        _objc_alloc(PTR_PTR_1126dd848);
        uVar5 = uVar13;
        func_0x00010c0c34a0(uVar13);
        uVar12 = uVar13;
        func_0x00010c0c3540(uVar13);
        uVar7 = uVar13;
        func_0x00010c0c3560(uVar13);
        uVar8 = uVar13;
        func_0x00010c0c36e0(uVar13);
        func_0x00010c24a060(uVar13);
        func_0x00010c028de0(puVar6,param_2,uVar5,uVar12,uVar7,uVar8,uVar13);
        func_0x00010befa120(puVar4,param_2,puVar6);
        _objc_release(puVar6);
        lVar14 = lVar14 + 1;
      } while (lVar3 != lVar14);
      lVar3 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_1f0,auStack_170,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  puVar6 = PTR_PTR_1126dd850;
  _objc_alloc(PTR_PTR_1126dd850);
  lVar2 = param_3;
  func_0x00010bfb3fe0(param_3);
  lVar3 = param_3;
  func_0x00010bf2fa80(param_3);
  lVar11 = param_3;
  func_0x00010bf6a6a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_3;
  func_0x00010bf6a720(param_3);
  lVar9 = param_3;
  func_0x00010c081fe0(param_3);
  lVar10 = param_3;
  func_0x00010c26b860();
  func_0x00010c013bc0(puVar6,param_2,puVar1,lVar2,lVar3,lVar11,lVar14,lVar9,puVar4,lVar10);
  _objc_release(lVar11);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return puVar6;
  }
  ___stack_chk_fail();
  return (undefined *)0xc;
}



/* Entry: 10915c03c; end: 10915c043; -[CTPProtobufEntityTransformerCaptionStyle entityTypeOutput] */

undefined8 FUN_10915c03c(void)

{
  return 0xc;
}



/* Entry: 10915c044; end: 10915c04b; -[CTPProtobufEntityTransformerCaptionStyle entityTypeInput] */

undefined8 FUN_10915c044(void)

{
  return 0xb;
}



/* Entry: 10915c04c; end: 10915c15f; -[CTPProtobufEntityTransformerCaptionStyle SCCTPCTItemEntityFromProtobufItem:] */

void FUN_10915c04c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126dbfe0;
  _objc_opt_class(PTR_PTR_1126dbfe0);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar4);
  uVar1 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  if (uVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126b37c0;
    _objc_opt_new(PTR_PTR_1126b37c0);
    puVar3 = PTR_PTR_1126dc178;
    _objc_opt_new(PTR_PTR_1126dc178);
    func_0x00010bfadea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    func_0x00010c178900(puVar3);
    _objc_release(param_3);
    func_0x00010be83500(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c178a20(puVar3);
    _objc_release(param_1);
    func_0x00010c178a00(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10915c160; end: 10915c267; -[CTPProtobufEntityTransformerCaptionStyle SCCTPItemFromCaptionStyle:] */

void FUN_10915c160(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar5 = PTR_PTR_1126b0cb8;
  if (param_3 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_3);
    _objc_opt_new(puVar5);
    puVar1 = PTR_PTR_1126b37c0;
    _objc_opt_new(PTR_PTR_1126b37c0);
    puVar2 = PTR_PTR_1126dc178;
    _objc_opt_new(PTR_PTR_1126dc178);
    func_0x00010be83500(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c178a20(puVar2,param_2,param_1);
    _objc_release(param_1);
    lVar3 = param_3;
    func_0x00010bfadea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    lVar4 = lVar3;
    func_0x00010c067fc0(lVar3);
    func_0x00010c178900(puVar2,param_2,lVar4);
    _objc_release(lVar3);
    func_0x00010c178a00(puVar1,param_2,puVar2);
    func_0x00010c196600(puVar5,param_2,puVar1);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10915c268; end: 10915c26f; -[CTPProtobufEntityTransformerCaptionStyle presentationModelFromProtobufMetadata:] */

undefined8 FUN_10915c268(void)

{
  return 0;
}



/* Entry: 10915c270; end: 10915c333; -[CTPProtobufEntityTransformerCaptionStyle entityFromProtobufItem:] */

void FUN_10915c270(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010bfd6be0(), (int)lVar1 == 0)) {
    param_1 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf96ee0();
    uVar3 = param_1;
    func_0x00010bf96f20();
    if ((int)lVar2 == (int)uVar3) {
      lVar2 = lVar1;
      func_0x00010bf30580(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be0a9a0(param_1,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
    }
    else {
      param_1 = 0;
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10915c334; end: 10915c6a3; -[CTPProtobufEntityTransformerCaptionStyle _entityFromProtobufCaptionStyles:] */

void FUN_10915c334(undefined *param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar11 = param_3;
  func_0x00010bf305a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar11;
  func_0x00010bf529e0();
  _objc_release(uVar11);
  if (uVar2 == 0) {
    puStack_70 = (undefined *)0x0;
  }
  else {
    uVar11 = 0;
    puStack_70 = (undefined *)0x0;
    do {
      uVar2 = param_3;
      func_0x00010bf305a0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      uVar2 = uVar3;
      func_0x00010bfb40c0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf144e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_1;
      func_0x00010bddb300(param_1,param_2,uVar2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(uVar2);
      uVar2 = uVar3;
      func_0x00010bf144e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfd47e0(uVar3);
      puVar6 = param_1;
      func_0x00010bddb2a0(param_1,param_2,uVar2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      puVar7 = param_1;
      func_0x00010bdd2a80(param_1,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010c25e260(uVar3);
      puVar8 = param_1;
      func_0x00010bddb400(param_1,param_2,uVar2);
      puVar10 = (undefined *)0x3;
      if (puVar8 != (undefined *)0x6 || puVar6 == (undefined *)0x0) {
        puVar10 = puVar8;
      }
      uVar2 = uVar3;
      func_0x00010c25e140();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c0720c0();
      _objc_release(uVar2);
      if ((int)uVar4 == 0) {
        puVar8 = PTR_PTR_1126dc058;
        _objc_alloc();
        uVar2 = uVar3;
        func_0x00010c25e140(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf85d80(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar3;
        func_0x00010bf40d20(uVar3);
        func_0x00010c04eda0(puVar8,param_2,uVar2,uVar4,puVar5,puVar6,uVar9,puVar7,puVar10);
        _objc_release(uVar4);
        _objc_release(uVar2);
        if (uVar11 != 0) goto LAB_10915c594;
LAB_10915c500:
        _objc_retain(puVar8);
        _objc_release(puStack_70);
        puStack_70 = puVar8;
      }
      else {
        puVar8 = param_1;
        func_0x00010bdf76e0(param_1,param_2,uVar3,puVar7,puVar6,puVar10,puVar5);
        _objc_retainAutoreleasedReturnValue();
        if (uVar11 == 0) goto LAB_10915c500;
LAB_10915c594:
        func_0x00010befa120(puVar1,param_2,puVar8);
      }
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(uVar3);
      uVar11 = uVar11 + 1;
      uVar2 = param_3;
      func_0x00010bf305a0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf529e0();
      _objc_release(uVar2);
    } while (uVar11 < uVar3);
  }
  puVar5 = PTR_PTR_1126dbfe0;
  _objc_alloc(PTR_PTR_1126dbfe0);
  puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf30400();
  func_0x00010c14de00(puVar10,param_2,&PTR____CFConstantStringClassReference_110db3bb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03a080(puVar5,param_2,puStack_70,puVar1,puVar10);
  _objc_release(puVar10);
  _objc_release(puVar1);
  _objc_release(puStack_70);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10915c6a4; end: 10915c767; -[CTPProtobufEntityTransformerCaptionStyle _baseColorFromProto:] */

void FUN_10915c6a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf15ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be985a0(param_1,param_2,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if ((int)param_1 == 0) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = param_3;
    func_0x00010bf15ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf414c0(puVar2,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10915c768; end: 10915cbbf; -[CTPProtobufEntityTransformerCaptionStyle _customGlowCaptionStyleFromProto:baseColor:backgroundStyle:styleType:fontStyle:] */

void FUN_10915c768(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  float fVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  puVar1 = PTR_PTR_1126dc008;
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_98 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_98,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfffc80(0,puVar1,param_2,puVar3,&PTR__OBJC_CLASS___NSConstantArray_111183860,2,0);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126dc008;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xfce8f9);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_a0 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_a0,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfffc80(0,puVar2,param_2,puVar4,&PTR__OBJC_CLASS___NSConstantArray_111183878,3,0);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126dc028;
  _objc_alloc();
  uVar28 = 0x4039000000000000;
  func_0x00010c0542a0(0x4039000000000000,0x4034000000000000,0x4034000000000000,0x4014000000000000);
  puVar4 = PTR_PTR_1126dc038;
  _objc_alloc();
  uVar5 = param_7;
  func_0x00010bfb3f20();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_7;
  func_0x00010bfb4120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb4000(param_7);
  uVar29 = uVar28;
  func_0x00010c0cd720(param_7);
  uVar7 = param_7;
  uVar30 = uVar29;
  func_0x00010c26ca00();
  uVar8 = param_7;
  func_0x00010c26bb00(param_7);
  func_0x00010c26b7a0();
  uVar9 = param_7;
  func_0x00010c26c7e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0989c0(param_7);
  uVar31 = uVar30;
  func_0x00010c099280(param_7);
  uVar10 = param_7;
  func_0x00010bf14140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf143a0();
  uVar11 = param_7;
  func_0x00010c0c45e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  func_0x00010c013ba0(uVar28,uVar29,0x3ff0000000000000,uVar30,uVar31,puVar4,param_2,uVar5,uVar6,
                      puVar1,puVar2,uVar7,uVar8);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(uVar5);
  puVar12 = PTR_PTR_1126dc048;
  _objc_alloc();
  uVar5 = param_5;
  func_0x00010bf13d40(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_5;
  func_0x00010bf20d60(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  fVar27 = 0.0;
  func_0x00010bff63e0(0x4034000000000000,puVar12,param_2,uVar5,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  puVar13 = PTR_PTR_1126dc058;
  _objc_alloc();
  lVar14 = param_3;
  func_0x00010c25e140();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_3;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf40d20(param_3);
  _objc_release(param_3);
  lVar24 = lVar14;
  lVar26 = lVar15;
  func_0x00010c04eda0();
  _objc_release(param_4);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    ___stack_chk_fail();
    _objc_retain(lVar26);
    _objc_retain(lVar24);
    lVar14 = lVar24;
    func_0x00010bfb3c40(lVar24);
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar24;
    func_0x00010bfd7380(lVar24);
    puVar1 = puVar12;
    func_0x00010bddb2c0(puVar12,param_2,lVar14,lVar15);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar14);
    lVar14 = lVar24;
    func_0x00010bf1fb20(lVar24);
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar24;
    func_0x00010bfd4c40(lVar24);
    puVar2 = puVar12;
    func_0x00010bddb2c0(puVar12,param_2,lVar14,lVar15);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar14);
    lVar14 = lVar24;
    func_0x00010c0f0ba0(lVar24);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar12;
    func_0x00010bddb3c0(puVar12,param_2,lVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar14);
    lVar14 = lVar24;
    func_0x00010c26ca00(lVar24);
    puVar4 = puVar12;
    func_0x00010bddb3e0(puVar12,param_2,lVar14);
    lVar14 = lVar24;
    func_0x00010c0c45e0(lVar24);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar12;
    func_0x00010bddb320(puVar12,param_2,lVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar14);
    lVar14 = lVar24;
    func_0x00010c26bb00(lVar24);
    puVar17 = puVar12;
    func_0x00010bddb3a0(puVar12,param_2,lVar14);
    lVar14 = lVar24;
    func_0x00010c26b760(lVar24);
    puVar18 = puVar12;
    func_0x00010bddb380(puVar12,param_2,lVar14);
    lVar14 = lVar24;
    func_0x00010c26c7c0(lVar24);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bddb360(puVar12,param_2,lVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar14);
    puVar13 = PTR_PTR_1126dc038;
    _objc_alloc(PTR_PTR_1126dc038);
    lVar14 = lVar24;
    func_0x00010bfb3f20();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar24;
    func_0x00010bfb4120();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar24;
    func_0x00010bfb4000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c296d80();
    dVar32 = (double)fVar27;
    lVar20 = lVar24;
    func_0x00010c0cd720(lVar24);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c296d80();
    dVar33 = (double)fVar27;
    lVar21 = lVar24;
    func_0x00010bfb3bc0(lVar24);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c296d80();
    dVar34 = (double)fVar27;
    lVar22 = lVar24;
    func_0x00010c0989c0(lVar24);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c296d80();
    dVar35 = (double)fVar27;
    lVar23 = lVar24;
    func_0x00010c099280(lVar24);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar24);
    func_0x00010c296d80(lVar23);
    lVar24 = lVar26;
    func_0x00010bf14140();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = lVar24;
    func_0x00010c08fa60();
    if (lVar25 == 0) {
      func_0x00010c013ba0(dVar32,dVar33,dVar34,dVar35,(double)fVar27,puVar13,param_2,lVar14,lVar15,
                          puVar1,puVar2,puVar4,puVar17,puVar18,puVar12,puVar3,0,4,puVar16);
    }
    else {
      lVar25 = lVar26;
      func_0x00010bf14140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c013ba0(dVar32,dVar33,dVar34,dVar35,(double)fVar27,puVar13,param_2,lVar14,lVar15,
                          puVar1,puVar2,puVar4,puVar17,puVar18,puVar12,puVar3,lVar25,4,puVar16);
      _objc_release(lVar25);
    }
    _objc_release(lVar24);
    _objc_release(lVar23);
    _objc_release(lVar22);
    _objc_release(lVar21);
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(puVar12);
    _objc_release(puVar16);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(lVar26);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 10915cbc0; end: 10915cfaf; -[CTPProtobufEntityTransformerCaptionStyle _captionStyleFontFromFontStyleProto:backgroundStyleProto:] */

void FUN_10915cbc0(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfb3c40(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bfd7380(param_4);
  uVar3 = param_2;
  func_0x00010bddb2c0(param_2,param_3,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf1fb20(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bfd4c40(param_4);
  uVar4 = param_2;
  func_0x00010bddb2c0(param_2,param_3,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c0f0ba0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bddb3c0(param_2,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c26ca00(param_4);
  uVar5 = param_2;
  func_0x00010bddb3e0(param_2,param_3,uVar1);
  uVar1 = param_4;
  func_0x00010c0c45e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010bddb320(param_2,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c26bb00(param_4);
  uVar7 = param_2;
  func_0x00010bddb3a0(param_2,param_3,uVar1);
  uVar1 = param_4;
  func_0x00010c26b760(param_4);
  uVar8 = param_2;
  func_0x00010bddb380(param_2,param_3,uVar1);
  uVar1 = param_4;
  func_0x00010c26c7c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bddb360(param_2,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar9 = PTR_PTR_1126dc038;
  _objc_alloc(PTR_PTR_1126dc038);
  uVar1 = param_4;
  func_0x00010bfb3f20();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_4;
  func_0x00010bfb4120();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_4;
  func_0x00010bfb4000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c296d80();
  dVar18 = (double)param_1;
  uVar12 = param_4;
  func_0x00010c0cd720(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c296d80();
  dVar19 = (double)param_1;
  uVar13 = param_4;
  func_0x00010bfb3bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c296d80();
  dVar20 = (double)param_1;
  uVar14 = param_4;
  func_0x00010c0989c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c296d80();
  dVar21 = (double)param_1;
  uVar15 = param_4;
  func_0x00010c099280(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c296d80(uVar15);
  lVar16 = param_5;
  func_0x00010bf14140();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c08fa60();
  if (lVar17 == 0) {
    func_0x00010c013ba0(dVar18,dVar19,dVar20,dVar21,(double)param_1,puVar9,param_3,uVar1,uVar10,
                        uVar3,uVar4,uVar5,uVar7,uVar8,param_2,uVar2,0,4,uVar6);
  }
  else {
    lVar17 = param_5;
    func_0x00010bf14140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c013ba0(dVar18,dVar19,dVar20,dVar21,(double)param_1,puVar9,param_3,uVar1,uVar10,
                        uVar3,uVar4,uVar5,uVar7,uVar8,param_2,uVar2,lVar17,4,uVar6);
    _objc_release(lVar17);
  }
  _objc_release(lVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10915cfb0; end: 10915d0fb; -[CTPProtobufEntityTransformerCaptionStyle _captionStyleShadowsFromProtoArray:] */

void FUN_10915cfb0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
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
  
  puVar6 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar12 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  puVar3 = auStack_d8;
  lVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_120,puVar3,0x10);
  fVar11 = (float)uVar12;
  iVar7 = (int)puVar3;
  if (lVar1 != 0) {
    lVar9 = *plStack_110;
    do {
      lVar10 = 0;
      do {
        if (*plStack_110 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        lVar2 = param_1;
        func_0x00010bddb340(param_1,param_2,*(undefined8 *)(lStack_118 + lVar10 * 8),1);
        _objc_retainAutoreleasedReturnValue();
        if (lVar2 != 0) {
          func_0x00010befa120(puVar8,param_2,lVar2);
        }
        _objc_release(lVar2);
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      puVar3 = auStack_d8;
      lVar1 = param_3;
      puVar6 = &uStack_120;
      func_0x00010bf52a60(param_3,param_2,&uStack_120,puVar3,0x10);
      fVar11 = (float)uVar12;
      iVar7 = (int)puVar3;
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if (iVar7 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      _objc_retain(puVar6);
      puVar3 = (undefined1 *)puVar6;
      func_0x00010bf40c40(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = (undefined1 *)puVar6;
      func_0x00010bfd56a0(puVar6);
      func_0x00010bddb2c0(param_3,param_2,puVar3,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar8 = PTR_PTR_1126dc018;
      _objc_alloc(PTR_PTR_1126dc018);
      puVar3 = (undefined1 *)puVar6;
      func_0x00010c2be880(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c296d80();
      dVar13 = (double)fVar11;
      puVar4 = (undefined1 *)puVar6;
      func_0x00010c2beba0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c296d80();
      dVar14 = (double)fVar11;
      puVar5 = (undefined1 *)puVar6;
      func_0x00010c11ef60(puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      func_0x00010c296d80(puVar5);
      func_0x00010bfffbc0(dVar13,dVar14,(double)fVar11,puVar8,param_2,param_3);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10915d0fc; end: 10915d233; -[CTPProtobufEntityTransformerCaptionStyle _captionStyleShadowFromProto:hasShadow:] */

void FUN_10915d0fc(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  
  if (param_5 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_4);
    uVar1 = param_4;
    func_0x00010bf40c40(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010bfd56a0(param_4);
    func_0x00010bddb2c0(param_2,param_3,uVar1,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar4 = PTR_PTR_1126dc018;
    _objc_alloc(PTR_PTR_1126dc018);
    uVar1 = param_4;
    func_0x00010c2be880(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c296d80();
    dVar5 = (double)param_1;
    uVar2 = param_4;
    func_0x00010c2beba0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c296d80();
    dVar6 = (double)param_1;
    uVar3 = param_4;
    func_0x00010c11ef60(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    func_0x00010c296d80(uVar3);
    func_0x00010bfffbc0(dVar5,dVar6,(double)param_1,puVar4,param_3,param_2);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10915d234; end: 10915d343; -[CTPProtobufEntityTransformerCaptionStyle _captionStyleTextPaddingFromProto:] */

void FUN_10915d234(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  puVar1 = PTR_PTR_1126dc028;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  uVar2 = param_4;
  func_0x00010c274140(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c296d80();
  dVar6 = (double)param_1;
  uVar3 = param_4;
  func_0x00010c08e360(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c296d80();
  dVar7 = (double)param_1;
  uVar4 = param_4;
  func_0x00010c140820(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c296d80();
  dVar8 = (double)param_1;
  uVar5 = param_4;
  func_0x00010bf1fec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c296d80(uVar5);
  func_0x00010c0542a0(dVar6,dVar7,dVar8,(double)param_1,puVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10915d344; end: 10915d46f; -[CTPProtobufEntityTransformerCaptionStyle _captionStyleBackgroundStyleFromProto:hasBackgroundStyle:] */

void FUN_10915d344(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  if (param_5 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_4);
    uVar1 = param_4;
    func_0x00010bf40c40(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010bfd56a0(param_4);
    uVar3 = param_2;
    func_0x00010bddb2c0(param_2,param_3,uVar1,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = param_4;
    func_0x00010bf20d60(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010bfd4cc0(param_4);
    func_0x00010bddb340(param_2,param_3,uVar1,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar4 = PTR_PTR_1126dc048;
    _objc_alloc(PTR_PTR_1126dc048);
    uVar1 = param_4;
    func_0x00010bf1fbe0(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    func_0x00010c296d80(uVar1);
    func_0x00010bff63e0((double)param_1,puVar4,param_3,uVar3,param_2);
    _objc_release(uVar1);
    _objc_release(param_2);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10915d470; end: 10915d7ff; -[CTPProtobufEntityTransformerCaptionStyle _captionStyleColorFromProto:hasColor:] */

void FUN_10915d470(undefined8 param_1,undefined8 param_2,undefined *param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  float fVar9;
  undefined8 uVar10;
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
  puVar2 = param_3;
  _objc_retain(param_3);
  if (param_4 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    plStack_220 = (long *)0x0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    puVar2 = param_3;
    func_0x00010bf41320();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf52a60();
    if (puVar5 != (undefined *)0x0) {
      lVar6 = *plStack_220;
      do {
        puVar8 = (undefined *)0x0;
        do {
          if (*plStack_220 != lVar6) {
            _objc_enumerationMutation(puVar2);
          }
          puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c296d80(*(undefined8 *)(lStack_228 + (long)puVar8 * 8));
          func_0x00010c0df740(puVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1,param_2,puVar7);
          _objc_release(puVar7);
          puVar8 = puVar8 + 1;
        } while (puVar5 != puVar8);
        puVar5 = puVar2;
        func_0x00010bf52a60(puVar2,param_2,&uStack_230,auStack_f0,0x10);
      } while (puVar5 != (undefined *)0x0);
    }
    _objc_release(puVar2);
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    puVar2 = param_3;
    func_0x00010bf41460();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf52a60();
    if (puVar5 != (undefined *)0x0) {
      lVar6 = *plStack_260;
      do {
        puVar7 = (undefined *)0x0;
        do {
          if (*plStack_260 != lVar6) {
            _objc_enumerationMutation(puVar2);
          }
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c296d80(*(undefined8 *)(lStack_268 + (long)puVar7 * 8));
          func_0x00010c0df740(puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar8,param_2,puVar4);
          _objc_release(puVar4);
          puVar7 = puVar7 + 1;
        } while (puVar5 != puVar7);
        puVar5 = puVar2;
        func_0x00010bf52a60(puVar2,param_2,&uStack_270,auStack_170,0x10);
      } while (puVar5 != (undefined *)0x0);
    }
    _objc_release(puVar2);
    puVar2 = param_3;
    func_0x00010bf413c0(param_3);
    func_0x00010bddb2e0(param_1,param_2,puVar2);
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar10 = 0;
    lStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    plStack_2a0 = (long *)0x0;
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    puVar2 = param_3;
    func_0x00010bf40c60();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf52a60();
    fVar9 = (float)uVar10;
    if (puVar5 != (undefined *)0x0) {
      lVar6 = *plStack_2a0;
      do {
        puVar4 = (undefined *)0x0;
        do {
          if (*plStack_2a0 != lVar6) {
            _objc_enumerationMutation(puVar2);
          }
          puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010bf414c0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,
                              *(undefined8 *)(lStack_2a8 + (long)puVar4 * 8));
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa140(puVar7,param_2,puVar3);
          _objc_release(puVar3);
          puVar4 = puVar4 + 1;
        } while (puVar5 != puVar4);
        puVar5 = puVar2;
        func_0x00010bf52a60(puVar2,param_2,&uStack_2b0,auStack_1f0,0x10);
        fVar9 = (float)uVar10;
      } while (puVar5 != (undefined *)0x0);
    }
    _objc_release(puVar2);
    puVar5 = PTR_PTR_1126dc008;
    _objc_alloc();
    puVar4 = param_3;
    func_0x00010bf41000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c296d80();
    puVar2 = puVar7;
    func_0x00010bfffc80((double)fVar9,puVar5,param_2,puVar7,puVar1,param_1,puVar8);
    _objc_release(puVar4);
    _objc_release(puVar7);
    _objc_release(puVar8);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar5 = PTR_PTR_1126dd858;
    _objc_retain(puVar2);
    _objc_alloc(puVar5);
    puVar1 = puVar2;
    func_0x00010bf4db80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010c26e3a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010c26d880(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf4be80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010c003ee0(puVar5,param_2,puVar1,puVar8,puVar7,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar7);
    _objc_release(puVar8);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10915d800; end: 10915d8df; -[CTPProtobufEntityTransformerCaptionStyle _captionStyleMediaContentFromProto:] */

void FUN_10915d800(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126dd858;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010bf4db80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c26e3a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c26d880(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf4be80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c003ee0(puVar1,param_2,uVar2,uVar3,uVar4,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10915d8e0; end: 10915d8ef; -[CTPProtobufEntityTransformerCaptionStyle _captionStyleTextTransformFromProto:] */

long FUN_10915d8e0(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_3 - 1U < 3) {
    lVar1 = (ulong)(param_3 - 1U) + 1;
  }
  return lVar1;
}



/* Entry: 10915d8f0; end: 10915d8ff; -[CTPProtobufEntityTransformerCaptionStyle _captionStyleTextDecorationFromProto:] */

long FUN_10915d8f0(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_3 - 1U < 4) {
    lVar1 = (ulong)(param_3 - 1U) + 1;
  }
  return lVar1;
}



/* Entry: 10915d900; end: 10915d90f; -[CTPProtobufEntityTransformerCaptionStyle _captionStyleTextAlignFromProto:] */

long FUN_10915d900(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_3 - 1U < 3) {
    lVar1 = (ulong)(param_3 - 1U) + 1;
  }
  return lVar1;
}



/* Entry: 10915d910; end: 10915d91f; -[CTPProtobufEntityTransformerCaptionStyle _captionStyleColorTransformFromProto:] */

long FUN_10915d910(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_3 - 1U < 3) {
    lVar1 = (ulong)(param_3 - 1U) + 1;
  }
  return lVar1;
}



/* Entry: 10915d920; end: 10915d92f; -[CTPProtobufEntityTransformerCaptionStyle _captionStyleTypeFromProto:] */

long FUN_10915d920(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_3 - 1U < 7) {
    lVar1 = (ulong)(param_3 - 1U) + 1;
  }
  return lVar1;
}



/* Entry: 10915d930; end: 10915dacb; -[CTPProtobufEntityTransformerCaptionStyle _protoCaptionFromCaptionStyle:] */

void FUN_10915d930(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
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
  
  puVar7 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar2 = param_3;
  func_0x00010c113040(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be83520(param_1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(lVar2);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar2 = param_3;
  func_0x00010befd420();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar2);
        }
        uVar3 = param_1;
        func_0x00010be83520(param_1,param_2,*(undefined8 *)(lStack_128 + lVar9 * 8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1,param_2,uVar3);
        _objc_release(uVar3);
        lVar9 = lVar9 + 1;
      } while (lVar4 != lVar9);
      lVar4 = lVar2;
      puVar7 = &uStack_130;
      func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar4 != 0);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126dc168;
    _objc_retain(puVar7);
    _objc_opt_new(puVar1);
    puVar5 = (undefined1 *)puVar7;
    func_0x00010c25e080(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20eb20(puVar1,param_2,puVar5);
    _objc_release(puVar5);
    puVar5 = (undefined1 *)puVar7;
    func_0x00010bf85d80(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18fca0(puVar1,param_2,puVar5);
    _objc_release(puVar5);
    puVar5 = (undefined1 *)puVar7;
    func_0x00010bfb40c0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010be18600(param_3,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e620(puVar1,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(puVar5);
    puVar5 = (undefined1 *)puVar7;
    func_0x00010bf144e0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = (undefined1 *)puVar7;
    func_0x00010bfb40c0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bdd24a0(param_3,param_2,puVar5,puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e900(puVar1,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = (undefined1 *)puVar7;
    func_0x00010c06ebe0(puVar7);
    func_0x00010c17e8c0(puVar1,param_2,puVar5);
    puVar5 = (undefined1 *)puVar7;
    func_0x00010bf15ec0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf09c40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16f2c0(puVar1,param_2,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar5);
    func_0x00010c1b5ba0(puVar1,param_2,0);
    puVar5 = (undefined1 *)puVar7;
    func_0x00010c25e260(puVar7);
    _objc_release(puVar7);
    func_0x00010bec5aa0(param_3,param_2,puVar5);
    func_0x00010c20eb80(puVar1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10915dacc; end: 10915dca7; -[CTPProtobufEntityTransformerCaptionStyle _protoCaptionStyleFromDynamicCaptionStyle:] */

void FUN_10915dacc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126dc168;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010c25e080(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20eb20(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf85d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18fca0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bfb40c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be18600(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e620(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf144e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bfb40c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bdd24a0(param_1,param_2,uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e900(puVar1,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c06ebe0(param_3);
  func_0x00010c17e8c0(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010bf15ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf09c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16f2c0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c1b5ba0(puVar1,param_2,0);
  uVar2 = param_3;
  func_0x00010c25e260(param_3);
  _objc_release(param_3);
  func_0x00010bec5aa0(param_1,param_2,uVar2);
  func_0x00010c20eb80(puVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10915dca8; end: 10915e073; -[CTPProtobufEntityTransformerCaptionStyle _fontStyleFromDynmaicCaptionFontStyle:] */

void FUN_10915dca8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c26c7e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c26c7e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x000107c31908();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126dc158;
  _objc_opt_new(PTR_PTR_1126dc158);
  lVar1 = param_3;
  func_0x00010bfb3f20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e560(puVar3);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bfb4120(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e640(puVar3);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c26b920(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bde1f80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e500(puVar3);
  _objc_release(uVar4);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf1fb20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bde1f80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280(puVar3);
  _objc_release(uVar4);
  _objc_release(lVar1);
  func_0x00010c0989c0(param_3);
  uVar4 = param_1;
  func_0x00010bdc3800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bd7a0(puVar3);
  _objc_release(uVar4);
  func_0x00010c099280(param_3);
  uVar4 = param_1;
  func_0x00010bdc3800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdbe0(puVar3);
  _objc_release(uVar4);
  func_0x00010bfb4000(param_3);
  uVar4 = param_1;
  func_0x00010bdc3800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e5c0(puVar3);
  _objc_release(uVar4);
  func_0x00010bfb3bc0(param_3);
  uVar4 = param_1;
  func_0x00010bdc3800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e4c0(puVar3);
  _objc_release(uVar4);
  func_0x00010c26ca00(param_3);
  func_0x00010becb780(param_1);
  func_0x00010c213880(puVar3);
  lVar1 = lVar5;
  func_0x00010c0d3c80(lVar5);
  func_0x00010c213720(puVar3);
  _objc_release(lVar1);
  func_0x00010c26bb00(param_3);
  func_0x00010becb500(param_1);
  func_0x00010c213260(puVar3);
  func_0x00010c26b7a0(param_3);
  func_0x00010becb320(param_1);
  func_0x00010c213000(puVar3);
  lVar1 = param_3;
  func_0x00010c26c540(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010becb6e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7e40(puVar3);
  _objc_release(uVar4);
  _objc_release(lVar1);
  func_0x00010c0cd720(param_3);
  uVar4 = param_1;
  func_0x00010bdc3800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c7ba0(puVar3);
  _objc_release(uVar4);
  lVar1 = param_3;
  func_0x00010c0c45e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5e540(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4360(puVar3);
  _objc_release(param_1);
  _objc_release(lVar1);
  _objc_release(lVar5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10915e074; end: 10915e07f;  */

void FUN_10915e074(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010becb730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__textShadowFromCaptionTextShadow_112590770,
             param_2);
  return;
}



/* Entry: 10915e080; end: 10915e27f; -[CTPProtobufEntityTransformerCaptionStyle _colorFromCaptionTextColor:] */

void FUN_10915e080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bf416c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000107c31908();
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf41360(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x000107c31908();
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf41420(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x000107c31908();
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126dc120;
  _objc_opt_new(PTR_PTR_1126dc120);
  uVar1 = uVar2;
  func_0x00010c0d3c80(uVar2);
  func_0x00010c17e840(puVar5);
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010c0d3c80(uVar3);
  func_0x00010c17ea00(puVar5);
  _objc_release(uVar1);
  func_0x00010bf413c0(param_4);
  func_0x00010bde1fe0(param_2);
  func_0x00010c17ea80(puVar5);
  func_0x00010bf41000(param_4);
  _objc_release(param_4);
  func_0x00010bdc3800(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17e900(puVar5);
  _objc_release(param_2);
  uVar1 = uVar4;
  func_0x00010c0d3c80(uVar4);
  func_0x00010c17eae0(puVar5);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10915e280; end: 10915e287;  */

void FUN_10915e280(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf09c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_argbHexString_1125a00b8);
  return;
}



/* Entry: 10915e288; end: 10915e2df;  */

void FUN_10915e288(float param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bfb2c80(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc3810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((double)param_1,uVar1,PTR_s__GPBFloatValueFromFloat__11254e7a0);
  return;
}



/* Entry: 10915e2e0; end: 10915e42b; -[CTPProtobufEntityTransformerCaptionStyle _textShadowFromCaptionTextShadow:] */

void FUN_10915e2e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126dc128;
  if (param_4 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_4);
    _objc_opt_new(puVar3);
    lVar1 = param_4;
    func_0x00010bf40c40(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010bde1f80(param_2,param_3,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17e800(puVar3,param_3,uVar2);
    _objc_release(uVar2);
    _objc_release(lVar1);
    func_0x00010c2bea40(param_4);
    uVar2 = param_2;
    func_0x00010bdc3800(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c227500(puVar3,param_3,uVar2);
    _objc_release(uVar2);
    func_0x00010c2bec60(param_4);
    uVar2 = param_2;
    func_0x00010bdc3800(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2276e0(puVar3,param_3,uVar2);
    _objc_release(uVar2);
    func_0x00010c11ef60(param_4);
    _objc_release(param_4);
    func_0x00010bdc3800(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e6e60(puVar3,param_3,param_2);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10915e42c; end: 10915e54b; -[CTPProtobufEntityTransformerCaptionStyle _textPaddingFromCaptionTextPadding:] */

void FUN_10915e42c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126dc130;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c274800(param_4);
  uVar2 = param_2;
  func_0x00010bdc3800(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2172c0(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  func_0x00010c08e8a0(param_4);
  uVar2 = param_2;
  func_0x00010bdc3800(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ba100(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  func_0x00010c140ce0(param_4);
  uVar2 = param_2;
  func_0x00010bdc3800(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ee020(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  func_0x00010bf203c0(param_4);
  _objc_release(param_4);
  func_0x00010bdc3800(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173440(puVar1,param_3,param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10915e54c; end: 10915e6bb; -[CTPProtobufEntityTransformerCaptionStyle _backgroundStyleFromCaptionBackgroundStyle:fontStyle:] */

void FUN_10915e54c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126dc160;
  if (param_4 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_opt_new(puVar3);
    lVar1 = param_4;
    func_0x00010bf13d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010bde1f80(param_2,param_3,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17e800(puVar3,param_3,uVar2);
    _objc_release(uVar2);
    _objc_release(lVar1);
    lVar1 = param_4;
    func_0x00010bf20d60(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010becb720(param_2,param_3,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173a20(puVar3,param_3,uVar2);
    _objc_release(uVar2);
    _objc_release(lVar1);
    func_0x00010bf1fbe0(param_4);
    _objc_release(param_4);
    func_0x00010bdc3800(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173300(puVar3,param_3,param_2);
    _objc_release(param_2);
    uVar2 = param_5;
    func_0x00010bf14140(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    func_0x00010c16e780(puVar3,param_3,uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10915e6bc; end: 10915e6cb; -[CTPProtobufEntityTransformerCaptionStyle _colorTransformFromCaptionColorTransform:] */

int FUN_10915e6bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 - 1U < 3) {
    iVar1 = (int)(param_3 - 1U) + 1;
  }
  return iVar1;
}



/* Entry: 10915e6cc; end: 10915e6db; -[CTPProtobufEntityTransformerCaptionStyle _textTransformFromCaptionTextTransform:] */

int FUN_10915e6cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 - 1U < 3) {
    iVar1 = (int)(param_3 - 1U) + 1;
  }
  return iVar1;
}



/* Entry: 10915e6dc; end: 10915e6eb; -[CTPProtobufEntityTransformerCaptionStyle _textAlignFromCaptionTextAlignment:] */

int FUN_10915e6dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 - 1U < 3) {
    iVar1 = (int)(param_3 - 1U) + 1;
  }
  return iVar1;
}



/* Entry: 10915e6ec; end: 10915e6fb; -[CTPProtobufEntityTransformerCaptionStyle _textDecorationFromCaptionTextDecoration:] */

int FUN_10915e6ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 - 1U < 4) {
    iVar1 = (int)(param_3 - 1U) + 1;
  }
  return iVar1;
}



/* Entry: 10915e6fc; end: 10915e70b; -[CTPProtobufEntityTransformerCaptionStyle _styleTypeFromCaptionStyleType:] */

int FUN_10915e6fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 - 1U < 7) {
    iVar1 = (int)(param_3 - 1U) + 1;
  }
  return iVar1;
}



/* Entry: 10915e70c; end: 10915e7f7; -[CTPProtobufEntityTransformerCaptionStyle _mediaContentFromCaptionMediaContent:] */

void FUN_10915e70c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b0ce8;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010c26e3a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c214440(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf4db80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182a60(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c26d880(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213ea0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf4be80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c181c20(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10915e7f8; end: 10915e837; -[CTPProtobufEntityTransformerCaptionStyle _GPBFloatValueFromFloat:] */

void FUN_10915e7f8(double param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c0300;
  _objc_opt_new(PTR_PTR_1126c0300);
  func_0x00010c220160((float)param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10915e838; end: 10915e97b; -[CTPProtobufEntityTransformerCaptionStyle _safeHexColorCheck:] */

bool FUN_10915e838(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_3;
    func_0x00010c25cfc0(param_3,param_2,&PTR____CFConstantStringClassReference_110f27e18,
                        &PTR____CFConstantStringClassReference_110daafd8);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c28ed80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010c25cfc0(lVar3,param_2,&PTR____CFConstantStringClassReference_110dbf518,
                        &PTR____CFConstantStringClassReference_110daafd8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    puVar4 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030,param_2,
                        &PTR____CFConstantStringClassReference_110e8a278);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c06a520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    lVar3 = lVar2;
    func_0x00010c11f340(lVar2,param_2,puVar5);
    if (lVar3 == 0x7fffffffffffffff) {
      lVar3 = lVar2;
      func_0x00010c08fa60();
      if (lVar3 == 6) {
        bVar1 = true;
      }
      else {
        lVar3 = lVar2;
        func_0x00010c08fa60(lVar2);
        bVar1 = lVar3 == 8;
      }
    }
    else {
      bVar1 = false;
    }
    _objc_release(puVar5);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10915e97c; end: 10915e983; -[CTPProtobufEntityTransformerChatReactionSticker SCCTPCTItemEntityFromProtobufItem:] */

undefined8 FUN_10915e97c(void)

{
  return 0;
}



/* Entry: 10915e984; end: 10915e98b; -[CTPProtobufEntityTransformerChatReactionSticker presentationModelFromProtobufMetadata:] */

undefined8 FUN_10915e984(void)

{
  return 0;
}



/* Entry: 10915e98c; end: 10915eacf; -[CTPProtobufEntityTransformerChatReactionSticker entityFromProtobufItem:] */

void FUN_10915e98c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010bfd6be0(), (int)lVar1 == 0)) {
    puVar7 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf96ee0();
    uVar3 = param_1;
    func_0x00010bf96f20();
    if ((int)lVar2 == (int)uVar3) {
      lVar2 = lVar1;
      func_0x00010bf37240(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c120e00();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126bea40;
      _objc_alloc(PTR_PTR_1126bea40);
      lVar5 = lVar1;
      func_0x00010bf37240(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c068280();
      func_0x00010be86120(param_1,param_2,lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01e580(puVar7,param_2,(long)(int)lVar6,param_1);
      _objc_release(param_1);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar2);
    }
    else {
      puVar7 = (undefined *)0x0;
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10915ead0; end: 10915ed23; -[CTPProtobufEntityTransformerChatReactionSticker _reactionEntitiesFromEntities:] */

void FUN_10915ead0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar2 = PTR_PTR_1126badf8;
  _objc_alloc_init();
  puVar3 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110ade858);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126bae18;
  _objc_alloc(PTR_PTR_1126bae18);
  func_0x00010c029100();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar5 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar5 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(param_3);
        }
        uVar9 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        uVar6 = uVar9;
        func_0x00010c2544c0();
        if ((int)uVar6 == 3) {
          func_0x00010c2434c0(uVar9);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar4;
          func_0x00010bf96e20(puVar4,param_2,uVar9);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = (undefined *)0x0;
LAB_10915ec44:
          _objc_release(uVar9);
        }
        else {
          if ((int)uVar6 == 1) {
            func_0x00010bf1a980(uVar9);
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar2;
            func_0x00010bf96e20(puVar2,param_2,uVar9);
            _objc_retainAutoreleasedReturnValue();
            puVar11 = (undefined *)0x0;
            goto LAB_10915ec44;
          }
          puVar11 = (undefined *)0x0;
          puVar10 = (undefined *)0x0;
        }
        puVar7 = PTR_PTR_1126dd860;
        _objc_alloc(PTR_PTR_1126dd860);
        func_0x00010bff7f40();
        func_0x00010befa120(puVar1,param_2,puVar7);
        _objc_release(puVar7);
        _objc_release(puVar11);
        _objc_release(puVar10);
        lVar8 = lVar8 + 1;
      } while (lVar5 != lVar8);
      lVar5 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar5 != 0);
  }
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_alloc_init(PTR_PTR_1126badf0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10915ed24; end: 10915ed3f;  */

void FUN_10915ed24(void)

{
  _objc_alloc_init(PTR_PTR_1126badf0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10915ed40; end: 10915efb7; -[CTPProtobufEntityTransformerCustomSticker SCCTPCTItemEntityFromProtobufItem:] */

void FUN_10915ed40(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b37c0;
  _objc_alloc_init(PTR_PTR_1126b37c0);
  puVar2 = PTR_PTR_1126ba828;
  _objc_alloc_init(PTR_PTR_1126ba828);
  lVar3 = param_3;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf92c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195640(puVar2);
  _objc_release(lVar4);
  lVar4 = lVar3;
  func_0x00010bf92c80(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195660(puVar2);
  _objc_release(lVar4);
  func_0x00010c0c4a20(lVar3);
  func_0x00010c2256c0(puVar2);
  func_0x00010c0c4a20(lVar3);
  func_0x00010c1a7d00(puVar2);
  lVar4 = lVar3;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x000107c3094c();
  if ((int)lVar5 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar6);
  }
  func_0x00010c185c40(puVar2);
  _objc_release(puVar6);
  _objc_release(lVar4);
  func_0x00010c0ed1a0(lVar3);
  func_0x00010c1d64a0(puVar2);
  lVar4 = lVar3;
  func_0x00010c0c45e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    puStack_70 = &uStack_78;
    uStack_78 = 0;
    uStack_68 = 0x3032000000;
    pcStack_60 = FUN_10915efb8;
    uStack_58 = 0x10915efc8;
    puVar6 = PTR_PTR_1126b0ce8;
    _objc_alloc_init();
    lVar4 = lVar3;
    puStack_50 = puVar6;
    func_0x00010c0c45e0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c1100();
    _objc_release(lVar4);
    func_0x00010c1c4360(puVar2);
    __Block_object_dispose(&uStack_78,8);
    _objc_release(puStack_50);
  }
  func_0x00010c188860(puVar1);
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10915efb8; end: 10915efd3;  */

void FUN_10915efb8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10915efd4; end: 10915f037;  */

void FUN_10915efd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  _objc_retain(param_3);
  func_0x00010c213ea0(uVar1);
  func_0x00010c181c20(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10915f038; end: 10915f03f; -[CTPProtobufEntityTransformerCustomSticker presentationModelFromProtobufMetadata:] */

undefined8 FUN_10915f038(void)

{
  return 0;
}



/* Entry: 10915f040; end: 10915f197; -[CTPProtobufEntityTransformerCustomSticker entityFromProtobufItem:] */

void FUN_10915f040(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010bfd6be0(), (int)lVar1 == 0)) {
    param_1 = 0;
    goto LAB_10915f174;
  }
  lVar1 = param_3;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf96ee0();
  uVar3 = param_1;
  func_0x00010bf96f20();
  if ((int)lVar2 == (int)uVar3) {
    lVar2 = lVar1;
    func_0x00010bf61ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bfd8f20();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)lVar4 == 0) {
LAB_10915f128:
      func_0x00010bf96e40(param_1,param_2,lVar2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar4 = lVar2;
      func_0x00010bf92c60(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c078d80(puVar5,param_2,lVar4);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (((ulong)puVar5 & 1) == 0) {
        _objc_release(lVar4);
      }
      else {
        lVar6 = lVar2;
        func_0x00010bf92c80(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c078d80(puVar7,param_2,lVar6);
        _objc_release(lVar6);
        _objc_release(lVar4);
        if ((int)puVar7 != 0) goto LAB_10915f128;
      }
      param_1 = 0;
    }
    _objc_release(lVar2);
  }
  else {
    param_1 = 0;
  }
  _objc_release(lVar1);
LAB_10915f174:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}


