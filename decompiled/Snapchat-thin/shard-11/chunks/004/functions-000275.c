/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108542fb0; end: 10854315f; -[SCUploadableChatVideo _thumbnailDataFromAsset:overlayImage:size:] */

void FUN_108542fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170;
  _objc_retain(param_5);
  _objc_alloc(puVar1);
  func_0x00010bff41a0();
  _objc_release(param_5);
  func_0x00010c169b80(puVar1,param_4,1);
  lStack_58 = 0;
  uStack_88 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_90 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_80 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  puVar2 = puVar1;
  func_0x00010bf51e60(puVar1,param_4,&uStack_90,0,&lStack_58);
  if (lStack_58 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    _objc_alloc(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x00010bffa280(0x3ff0000000000000);
    func_0x00010befa120(puVar3,param_4,puVar4);
    _objc_release(puVar4);
    _CGImageRelease(puVar2);
    if (param_6 != 0) {
      func_0x00010befa120(puVar3,param_4,param_6);
    }
    uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_90 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_80 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_70 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe6ce0(param_1,param_2,0x3ff0000000000000,PTR__OBJC_CLASS___UIImage_1126aea68,
                        param_4,puVar3,&uStack_90);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    _UIImageJPEGRepresentation(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  else {
    _CGImageRelease(puVar2);
    puVar4 = (undefined *)0x0;
  }
  _objc_release(puVar1);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108543160; end: 108543173; -[SCUploadableChatVideo hasSound] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_108543160(long param_1)

{
  return *(byte *)(param_1 + _DAT_1127760d8) & 1;
}



/* Entry: 108543174; end: 108543183; -[SCUploadableChatVideo setHasSound:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108543174(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127760d8) = param_3;
  return;
}



/* Entry: 108543184; end: 108543197; -[SCUploadableChatVideo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108543184(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127760d4,0);
  return;
}



/* Entry: 108543198; end: 108543543; -[SCChatMediaContent toChatMediaDataForMessageId:analyticsMessageId:conversationId:isQuoted:] */

void FUN_108543198(double param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,undefined4 param_7)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  double dVar9;
  double dVar10;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126d9fa8;
  _objc_retain(param_5);
  _objc_opt_new(puVar1);
  uVar2 = param_2;
  func_0x00010c0c5180(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c6bc0;
  _objc_opt_new(PTR_PTR_1126c6bc0);
  func_0x00010c1c4880();
  puVar4 = PTR_PTR_1126c6bc8;
  _objc_alloc(PTR_PTR_1126c6bc8);
  func_0x00010c005180();
  _objc_release(param_5);
  uVar5 = param_2;
  func_0x00010c0ef6e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar5 != 0) {
    puVar6 = PTR_PTR_1126c6bc0;
    _objc_opt_new(PTR_PTR_1126c6bc0);
    uVar5 = param_2;
    FUN_108543920(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4880(puVar6);
    _objc_release(uVar5);
    func_0x00010c1d74c0(puVar4);
    _objc_release(puVar6);
  }
  func_0x00010c1a99e0(puVar1);
  uVar5 = param_2;
  func_0x00010c2a5040(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  if (0.0 < param_1) {
    uVar7 = param_2;
    func_0x00010bfe0640(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    dVar9 = param_1;
    _objc_release(uVar7);
    _objc_release(uVar5);
    if (param_1 <= 0.0) goto LAB_108543394;
    puVar6 = PTR_PTR_1126d9fb0;
    _objc_alloc(PTR_PTR_1126d9fb0);
    uVar5 = param_2;
    func_0x00010c2a5040(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    uVar7 = param_2;
    dVar10 = dVar9;
    func_0x00010bfe0640(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c0630e0(dVar9,dVar10,puVar6);
    func_0x00010c1c5240(puVar1);
    _objc_release(puVar6);
    _objc_release(uVar7);
  }
  _objc_release(uVar5);
LAB_108543394:
  uVar5 = param_2;
  func_0x00010c0c6c20();
  if ((uVar5 == 0) ||
     ((uVar5 = param_2, func_0x00010c0c6c20(), uVar5 < 0x14 &&
      ((1L << (uVar5 & 0x3f) & 0x9c080U) != 0)))) {
    puVar6 = param_6;
    FUN_108543a00(param_6,param_4,uVar2,0,param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aaba0(puVar1);
    _objc_release(puVar8);
  }
  else {
    func_0x00010c2213e0(puVar1);
    puVar6 = PTR_PTR_1126d9fb8;
    _objc_opt_new(PTR_PTR_1126d9fb8);
    uVar5 = param_2;
    func_0x00010bf8b160(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c192d40(puVar6);
    _objc_release(uVar5);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0c6c20(param_2);
    func_0x0001085439dc();
    func_0x00010c0df6e0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a6de0(puVar6);
    _objc_release(puVar8);
    func_0x00010c221ae0(puVar1);
  }
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf44960(param_2);
  func_0x00010c0df760(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c5440(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108543544; end: 108543657; -[SCChatMediaContent composerChatMediaType] */

undefined4 FUN_108543544(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = param_1;
  func_0x00010c0c6c20();
  if ((uVar2 < 0x14) && ((1L << (uVar2 & 0x3f) & 0x9c080U) != 0)) {
    func_0x00010c0c6c20();
    uVar4 = 5;
    if ((param_1 + 1 < 0xd) && ((0x129fU >> (ulong)((uint)(param_1 + 1) & 0x1f) & 1) != 0)) {
      return 5;
    }
    FUN_1085440bc();
    uVar1 = (uint)param_1;
    uVar3 = 3;
  }
  else {
    uVar2 = param_1;
    func_0x00010c0c6c20();
    if ((0x15 < uVar2) || ((1L << (uVar2 & 0x3f) & 0x363630U) == 0)) {
      uVar2 = param_1;
      func_0x00010c0c6c20();
      if (uVar2 == 0) {
        return 1;
      }
      func_0x00010c0c6c20();
      if (param_1 - 1 < 0x15) {
        return *(undefined4 *)(&UNK_10df356b8 + (param_1 - 1) * 4);
      }
      return 0;
    }
    func_0x00010c0c6c20();
    uVar4 = 6;
    if ((param_1 + 1 < 0xd) && ((0x129fU >> (ulong)((uint)(param_1 + 1) & 0x1f) & 1) != 0)) {
      return 6;
    }
    FUN_1085440bc();
    uVar1 = (uint)param_1;
    uVar3 = 4;
  }
  if (8 < uVar1) {
    uVar3 = uVar4;
  }
  return uVar3;
}



/* Entry: 108543658; end: 1085436d3;  */

uint FUN_108543658(ulong param_1)

{
  return (uint)(param_1 < 0x14) & 0x9c080U >> (ulong)((uint)param_1 & 0x1f);
}



/* Entry: 1085436d4; end: 1085438eb;  */

void FUN_1085436d4(long param_1,undefined *param_2)

{
  undefined *unaff_x20;
  
  _objc_retain(param_2);
  if (param_2 == (undefined *)0x0) {
    unaff_x20 = (undefined *)0x0;
    goto LAB_1085437f4;
  }
  if (param_1 < 3) {
    if (param_1 == 0) {
      _objc_retain(param_2);
      unaff_x20 = param_2;
      goto LAB_1085437f4;
    }
    if ((param_1 != 1) && (param_1 != 2)) goto LAB_1085437f4;
  }
  else if (param_1 < 5) {
    if ((param_1 != 3) && (param_1 != 4)) goto LAB_1085437f4;
  }
  else if ((param_1 != 5) && (param_1 != 6)) goto LAB_1085437f4;
  unaff_x20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
LAB_1085437f4:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
  return;
}



/* Entry: 1085438ec; end: 10854391f;  */

void FUN_1085438ec(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110ee1ef8);
  return;
}



/* Entry: 108543920; end: 1085439b7;  */

void FUN_108543920(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c0ef6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0c5180(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = 2;
  if (lVar2 != 0) {
    uVar3 = 6;
  }
  FUN_1085436d4(uVar3,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1085439b8; end: 1085439ff;  */

undefined8 FUN_1085439b8(long param_1)

{
  if (param_1 + 1U < 0x1c) {
    return *(undefined8 *)(&UNK_10df35710 + (param_1 + 1U) * 8);
  }
  return 0;
}



/* Entry: 108543a00; end: 108543bbf;  */

void FUN_108543a00(undefined *param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuVar7 = (undefined **)0x0;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_1;
  if (((param_1 != (undefined *)0x0) && (param_2 != (undefined *)0x0)) && (param_3 != 0)) {
    _objc_retain(param_3);
    _objc_retain(param_2);
    _objc_retain(param_1);
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(param_2);
    _objc_release(param_1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    ppuVar7 = &PTR____CFConstantStringClassReference_110dbb318;
    param_2 = puVar5;
    FUN_108543d00(&PTR____CFConstantStringClassReference_110dbb318,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar7);
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(puVar5);
  _objc_retain(puVar5);
  func_0x00010c0c0800(param_2);
  _objc_release(puVar5);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 108543bc0; end: 108543c7f;  */

void FUN_108543bc0(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  _objc_retain(param_1);
  _objc_retain(param_1);
  func_0x00010c0c0800(param_2);
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108543c80; end: 108543ccf;  */

void FUN_108543c80(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126b27a8;
  func_0x00010bfe9800(PTR_PTR_1126b27a8,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108543cd0; end: 108543cff;  */

void FUN_108543cd0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000108543ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,param_2);
  return;
}



/* Entry: 108543d00; end: 1085440bb;  */

undefined * FUN_108543d00(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  _objc_opt_new();
  func_0x00010c1f6900();
  func_0x00010c1a9200(puVar1);
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_2);
  func_0x00010bf0a0e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(param_2);
      }
      puVar4 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
      _objc_alloc();
      lVar5 = param_2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c02dc20();
      func_0x00010befa120(puVar2);
      _objc_release(puVar4);
      _objc_release(lVar5);
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    lVar3 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  _objc_release(param_2);
  func_0x00010c1e6460(puVar1);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    func_0x00010bf44780();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    puVar1 = puVar4;
    func_0x00010c11d4e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010bf71fe0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar6 = puVar4;
    func_0x00010c11d4e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar6;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (puVar1 != (undefined *)0x0) {
      puVar12 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(puVar6);
        }
        uVar11 = *(undefined8 *)((long)puVar12 * 8);
        uVar7 = uVar11;
        func_0x00010c296d80(uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d4f60(uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(uVar11);
        _objc_release(uVar7);
        puVar12 = puVar12 + 1;
      } while (puVar1 != puVar12);
      puVar1 = puVar6;
      func_0x00010bf52a60();
    }
    _objc_release(puVar6);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
      ___stack_chk_fail();
      if (puVar4 + -4 < (undefined *)0x12) {
        return (undefined *)(ulong)*(uint *)(&UNK_10df358a8 + (long)(puVar4 + -4) * 4);
      }
      return (undefined *)0x5;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return puVar2;
}



/* Entry: 1085440bc; end: 1085440df;  */

undefined4 FUN_1085440bc(long param_1)

{
  if (param_1 - 4U < 0x12) {
    return *(undefined4 *)(&UNK_10df358a8 + (param_1 - 4U) * 4);
  }
  return 5;
}



/* Entry: 1085440e0; end: 108544133;  */

void FUN_1085440e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be44c60();
  if ((int)uVar1 != 0) {
    func_0x00010bee8fc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0778c0();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 108544134; end: 1085442b7;  */

bool FUN_108544134(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f4a518a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2533c0(param_1,param_2,puVar1,param_3);
  _objc_release(puVar1);
  return param_1 == 2;
}



/* Entry: 1085442b8; end: 1085442c3;  */

void FUN_1085442b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4ee70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__loadVideoTrackCompletedWithComp_112571538,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1085442c4; end: 1085443db;  */

void FUN_1085442c4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be44c60();
  _objc_retain(0);
  if ((int)lVar1 == 0) {
    (**(code **)(param_3 + 0x10))
              (*(undefined8 *)PTR__CGSizeZero_110347620,
               *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),param_3,0);
  }
  else {
    func_0x00010bee8fc0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      (**(code **)(param_3 + 0x10))
                (*(undefined8 *)PTR__CGSizeZero_110347620,
                 *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),param_3,0);
    }
    else {
      _objc_retain(param_3);
      func_0x00010c09c1a0(param_1);
      _objc_release(param_3);
    }
    _objc_release(param_1);
  }
  _objc_release(0);
  _objc_release(param_3);
  return;
}



/* Entry: 1085443dc; end: 1085443e7;  */

void FUN_1085443dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001085443e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1085443e8; end: 108544437;  */

void FUN_1085443e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c279200(param_1,param_2,*(undefined8 *)PTR__AVMediaTypeVideo_110348090);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108544438; end: 108544643;  */

bool FUN_108544438(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f4a5196);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2533c0(param_1,param_2,puVar1,param_3);
  _objc_release(puVar1);
  return param_1 == 2;
}



/* Entry: 108544644; end: 108544667;  */

undefined4 FUN_108544644(long param_1)

{
  if (param_1 - 10U < 0x11) {
    return *(undefined4 *)(&UNK_10df358f0 + (param_1 - 10U) * 4);
  }
  return 2;
}



/* Entry: 108544668; end: 10854478b;  */

void FUN_108544668(double param_1,double param_2,long param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  long lVar5;
  double dVar6;
  
  if (param_3 != 0) {
    dVar1 = param_1;
    _objc_retain(param_3);
    func_0x00010c23d0a0(param_3);
    func_0x00010c23d0a0(param_3);
    if (param_2 <= dVar1) {
      dVar1 = param_2;
    }
    dVar3 = SQRT(param_1 * param_1 + 1.0);
    dVar4 = (double)(long)(dVar1 / dVar3);
    dVar2 = dVar4 * 0.5;
    dVar6 = (double)(long)dVar2;
    func_0x00010c23d0a0(param_3);
    func_0x00010c23d0a0(param_3);
    dVar6 = dVar6 - dVar3 * 0.5;
    lVar5 = (long)dVar6;
    func_0x00010c23d0a0(param_3);
    dVar1 = dVar6;
    func_0x00010c23d0a0(param_3);
    func_0x00010c14e120(param_3);
    _UIGraphicsBeginImageContextWithOptions((long)(param_1 * dVar4),dVar4,dVar1,0);
    func_0x00010bf89920((long)((double)(long)((double)(long)(param_1 * dVar4) * 0.5) - dVar2 * 0.5),
                        lVar5,dVar6,dVar3,param_3);
    _objc_release(param_3);
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    _UIGraphicsEndImageContext();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10854478c; end: 1085448fb;  */

void FUN_10854478c(double param_1,double param_2,undefined8 param_3,double param_4,long param_5,
                  long param_6,long param_7,int param_8)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain();
  _objc_retain(param_6);
  lVar1 = param_7;
  _objc_retain(param_7);
  _objc_autoreleasePoolPush();
  if (((param_5 == 0) && (param_6 == 0)) && (param_7 == 0)) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    dVar3 = param_1;
    dVar4 = param_2;
    _UIGraphicsBeginImageContextWithOptions(param_1,param_2,param_3,0);
    if (param_7 != 0) {
      dVar3 = 0.0;
      dVar4 = 0.0;
      lVar2 = param_7;
      func_0x00010bf89920(0,0,param_1,param_2,param_7);
    }
    if (param_6 != 0) {
      dVar3 = (param_1 - param_1 * param_4) * 0.5;
      dVar4 = (param_2 - param_2 * param_4) * 0.5;
      lVar2 = param_6;
      func_0x00010bf89920(dVar3,dVar4,param_6);
    }
    if (param_5 != 0) {
      func_0x00010c23d0a0(param_5);
      func_0x00010c23d0a0(param_5);
      dVar5 = 1.0;
      dVar3 = dVar3 / dVar4;
      if (param_8 != 0) {
        dVar5 = 1.0 / SQRT(dVar3 * dVar3 + 1.0);
      }
      lVar2 = param_5;
      func_0x00010bf89920((param_1 - dVar3 * param_2 * dVar5) * 0.5,
                          (param_2 - param_2 * dVar5) * 0.5,param_5);
    }
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    _UIGraphicsEndImageContext();
  }
  _objc_autoreleasePoolPop(lVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1085448fc; end: 1085449cf;  */

void FUN_1085448fc(undefined8 param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2;
  _objc_retain();
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    _objc_autoreleasePoolPush();
    lVar2 = param_2;
    if (param_3 == 0) {
      func_0x00010c23d0a0(param_2);
      func_0x00010bf5c840(param_2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      FUN_108544668(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_autoreleasePoolPop(lVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1085449d0; end: 108544ad7;  */

void FUN_1085449d0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ee1f38;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110ee1f38,
                      &PTR____CFConstantStringClassReference_110ee1f58,0);
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



/* Entry: 108544ad8; end: 108544c6f; -[SCSpectaclesPreviewCustomExportScope initWithUIContainer:fromViewController:delegate:configuration:commonLoggingParamsBuilder:thumbnailLivePreview:snap:editedImage:] */

undefined1 *
FUN_108544ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_68 = PTR_PTR_1126fcc18;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_10;
    _objc_release(uVar2);
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



/* Entry: 108544c70; end: 108544e07; -[SCSpectaclesPreviewCustomExportScope initWithUIContainer:fromViewController:delegate:configuration:commonLoggingParamsBuilder:thumbnailLivePreview:snap:editedVideoFilter:] */

undefined1 *
FUN_108544c70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_68 = PTR_PTR_1126fcc18;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
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



/* Entry: 108544e08; end: 108544e0f; -[SCSpectaclesPreviewCustomExportScope uiContainer] */

undefined8 FUN_108544e08(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108544e10; end: 108544e3f; -[SCSpectaclesPreviewCustomExportScope setUiContainer:] */

void FUN_108544e10(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108544e40; end: 108544e57; -[SCSpectaclesPreviewCustomExportScope fromViewController] */

void FUN_108544e40(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108544e58; end: 108544e63; -[SCSpectaclesPreviewCustomExportScope setFromViewController:] */

void FUN_108544e58(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 108544e64; end: 108544e7b; -[SCSpectaclesPreviewCustomExportScope delegate] */

void FUN_108544e64(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108544e7c; end: 108544e87; -[SCSpectaclesPreviewCustomExportScope setDelegate:] */

void FUN_108544e7c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 108544e88; end: 108544e8f; -[SCSpectaclesPreviewCustomExportScope configuration] */

undefined8 FUN_108544e88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108544e90; end: 108544ebf; -[SCSpectaclesPreviewCustomExportScope setConfiguration:] */

void FUN_108544e90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108544ec0; end: 108544ec7; -[SCSpectaclesPreviewCustomExportScope commonLoggingParamsBuilder] */

undefined8 FUN_108544ec0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108544ec8; end: 108544ef7; -[SCSpectaclesPreviewCustomExportScope setCommonLoggingParamsBuilder:] */

void FUN_108544ec8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108544ef8; end: 108544eff; -[SCSpectaclesPreviewCustomExportScope thumbnailLivePreview] */

undefined8 FUN_108544ef8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108544f00; end: 108544f2f; -[SCSpectaclesPreviewCustomExportScope setThumbnailLivePreview:] */

void FUN_108544f00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108544f30; end: 108544f37; -[SCSpectaclesPreviewCustomExportScope snap] */

undefined8 FUN_108544f30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108544f38; end: 108544f67; -[SCSpectaclesPreviewCustomExportScope setSnap:] */

void FUN_108544f38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108544f68; end: 108544f6f; -[SCSpectaclesPreviewCustomExportScope editedVideoFilter] */

undefined8 FUN_108544f68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108544f70; end: 108544f9f; -[SCSpectaclesPreviewCustomExportScope setEditedVideoFilter:] */

void FUN_108544f70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108544fa0; end: 108544fa7; -[SCSpectaclesPreviewCustomExportScope editedImage] */

undefined8 FUN_108544fa0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108544fa8; end: 108544fd7; -[SCSpectaclesPreviewCustomExportScope setEditedImage:] */

void FUN_108544fa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108544fd8; end: 108545053; -[SCSpectaclesPreviewCustomExportScope .cxx_destruct] */

void FUN_108544fd8(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108545054; end: 108545067;  */

void FUN_108545054(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc3470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSURL_1126ae598,PTR_s_URLWithString__11254e6b8,
             &PTR____CFConstantStringClassReference_110ee20b8);
  return;
}



/* Entry: 108545068; end: 1085450e3;  */

undefined * FUN_108545068(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110ee20b8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf2cf00(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 1085450e4; end: 1085452ef; -[SCSpectaclesCustomExportViewController initWithDelegate:viewModel:defaultOptionIndex:thumbnailLiveView:snaps:onDemandResourceFetcher:photoPermissionCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1085450e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126fcc20;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar1 + (long)_DAT_112776104,param_3);
    lVar8 = (long)_DAT_112776108;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_4;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11277610c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_6;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_112776110;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_7;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_112776114;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_9;
    _objc_release(uVar2);
    uVar3 = *(ulong *)((long)puVar1 + lVar8);
    func_0x00010c0ec5a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf529e0();
    _objc_release(uVar3);
    if (param_5 < uVar4) {
      *(ulong *)((long)puVar1 + (long)_DAT_112776118) = param_5;
    }
    uVar2 = param_8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bfe7d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277611c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277611c) = uVar5;
    _objc_release(uVar6);
    _objc_release(uVar2);
    func_0x00010c1c8c00(puVar1);
    func_0x00010c1c8b80(puVar1);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1085452f0; end: 10854645b; -[SCSpectaclesCustomExportViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085452f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

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
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_130 = PTR_PTR_1126fcc20;
  puStack_138 = param_4;
  _objc_msgSendSuper2(&puStack_138,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  func_0x00010c013de0(puVar1);
  func_0x00010c222380(param_4);
  _objc_release(puVar1);
  _objc_release();
  _UIAccessibilityIsReduceTransparencyEnabled();
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_4;
    func_0x00010c29bf00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
    func_0x00010bf8cf60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
    _objc_alloc();
    func_0x00010c00ee20();
    puVar1 = param_4;
    func_0x00010c29bf00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar1);
    func_0x00010c219b60(puVar3);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar4 = puVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_4;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    puStack_a0 = puVar7;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_4;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar3;
    puStack_98 = puVar11;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = param_4;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar3;
    puStack_90 = puVar15;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = param_4;
    func_0x00010c29bf00(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar19;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_4;
    func_0x00010c29bf00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010be396a0(param_4);
  func_0x00010be39b80(param_4);
  func_0x00010be3a480(param_4);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  lVar34 = (long)_DAT_112776120;
  uVar32 = *(undefined8 *)(param_4 + lVar34);
  *(undefined **)(param_4 + lVar34) = puVar1;
  _objc_release(uVar32);
  lVar33 = (long)_DAT_112776108;
  uVar21 = *(undefined8 *)(param_4 + lVar33);
  func_0x00010c2711a0(uVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_4 + lVar34));
  _objc_release(uVar21);
  func_0x000107c30a88();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar21;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_4 + lVar34));
  _objc_release(uVar32);
  _objc_release(uVar21);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_4 + lVar34));
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(param_4 + lVar34));
  puVar1 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_4 + lVar34));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar22 = *(undefined8 *)(param_4 + lVar34);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar22;
  func_0x00010bf493c0(0x4053800000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_4 + lVar34);
  uStack_b0 = uVar32;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar23;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_a8 = uVar21;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar6);
  _objc_release(uVar21);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar23);
  _objc_release(uVar32);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar22);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  lVar35 = (long)_DAT_112776124;
  uVar32 = *(undefined8 *)(param_4 + lVar35);
  *(undefined **)(param_4 + lVar35) = puVar1;
  _objc_release(uVar32);
  uVar21 = *(undefined8 *)(param_4 + lVar33);
  func_0x00010c260dc0(uVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_4 + lVar35));
  _objc_release(uVar21);
  func_0x000107c30a88();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar21;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_4 + lVar35));
  _objc_release(uVar32);
  _objc_release(uVar21);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_4 + lVar35));
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(param_4 + lVar35));
  func_0x00010c1cfce0(*(undefined8 *)(param_4 + lVar35));
  puVar1 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_4 + lVar35));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar23 = *(undefined8 *)(param_4 + lVar35);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_4 + lVar34);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar23;
  func_0x00010bf493c0(0x4018000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_4 + lVar35);
  uStack_c8 = uVar32;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar25;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_4 + lVar35);
  uStack_c0 = uVar21;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar26;
  func_0x00010bf493c0(0xc054000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_b8 = uVar22;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar6);
  _objc_release(uVar22);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar26);
  _objc_release(uVar21);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar25);
  _objc_release(uVar32);
  _objc_release(uVar24);
  _objc_release(uVar23);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar36 = (long)_DAT_112776128;
  uVar32 = *(undefined8 *)(param_4 + lVar36);
  *(undefined **)(param_4 + lVar36) = puVar1;
  _objc_release(uVar32);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_4 + lVar36));
  _objc_release(puVar1);
  puVar1 = param_4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_4 + lVar36));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar23 = *(undefined8 *)(param_4 + lVar36);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar6;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar23;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_4 + lVar36);
  uStack_e0 = uVar22;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar24;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_4 + lVar36);
  uStack_d8 = uVar21;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_4 + lVar35);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar25;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_d0 = uVar32;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar2);
  _objc_release(uVar32);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar21);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(uVar24);
  _objc_release(uVar22);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(uVar23);
  puVar2 = PTR_PTR_1126d9fc0;
  _objc_alloc();
  puVar1 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  uVar32 = *(undefined8 *)(param_4 + lVar33);
  func_0x00010c0ec5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0151c0(0,0,param_3,0x4077c00000000000);
  lVar34 = (long)_DAT_11277612c;
  uVar21 = *(undefined8 *)(param_4 + lVar34);
  *(undefined **)(param_4 + lVar34) = puVar2;
  _objc_release(uVar21);
  _objc_release(uVar32);
  _objc_release(puVar1);
  func_0x00010c160fc0(*(undefined8 *)(param_4 + lVar34));
  func_0x00010c198f00(*(undefined8 *)(param_4 + lVar34));
  func_0x00010befbb60(*(undefined8 *)(param_4 + lVar36));
  func_0x00010c219b60(*(undefined8 *)(param_4 + lVar34));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar24 = *(undefined8 *)(param_4 + lVar34);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_4 + lVar36);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar24;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_4 + lVar34);
  uStack_100 = uVar32;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(param_4 + lVar36);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar26;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = *(undefined8 *)(param_4 + lVar34);
  uStack_f8 = uVar23;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_4 + lVar36);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar28;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = *(undefined8 *)(param_4 + lVar34);
  uStack_f0 = uVar22;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = *(undefined8 *)(param_4 + lVar36);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar30;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_e8 = uVar21;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar2);
  _objc_release(uVar21);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(uVar22);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar23);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar32);
  _objc_release(uVar25);
  _objc_release(uVar24);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar35 = (long)_DAT_112776130;
  uVar32 = *(undefined8 *)(param_4 + lVar35);
  *(undefined **)(param_4 + lVar35) = puVar1;
  _objc_release(uVar32);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_4 + lVar35));
  _objc_release(puVar1);
  puVar1 = param_4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_4 + lVar35));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar25 = *(undefined8 *)(param_4 + lVar35);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar6;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar25;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_4 + lVar35);
  uStack_128 = uVar24;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(param_4 + lVar36);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar26;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = *(undefined8 *)(param_4 + lVar35);
  uStack_120 = uVar22;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_4 + _DAT_112776134);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar28;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = *(undefined8 *)(param_4 + lVar35);
  uStack_118 = uVar23;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar30;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = *(undefined8 *)(param_4 + lVar35);
  uStack_110 = uVar32;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar31;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_108 = uVar21;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar2);
  _objc_release(uVar21);
  _objc_release(uVar31);
  _objc_release(uVar32);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(uVar30);
  _objc_release(uVar23);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar22);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar24);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(uVar25);
  puVar1 = PTR_PTR_1126d9fc8;
  _objc_alloc();
  puVar2 = param_4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  uVar32 = *(undefined8 *)(param_4 + lVar33);
  func_0x00010c0ec5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c014440(0,0,param_3,0x4040000000000000);
  lVar34 = (long)_DAT_112776138;
  uVar21 = *(undefined8 *)(param_4 + lVar34);
  *(undefined **)(param_4 + lVar34) = puVar1;
  _objc_release(uVar21);
  _objc_release(uVar32);
  _objc_release(puVar2);
  func_0x00010c1f7b20(*(undefined8 *)(param_4 + lVar34));
  func_0x00010befbb60(*(undefined8 *)(param_4 + lVar35));
  puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010c18b5e0();
  func_0x00010bef9040(*(undefined8 *)(param_4 + lVar35));
  uVar21 = *(undefined8 *)(param_4 + lVar33);
  func_0x00010c0ec5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar21;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed7b60(param_4);
  _objc_release(uVar32);
  _objc_release(uVar21);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c08cdc0(*(undefined8 *)(puVar1 + _DAT_11277612c));
  puVar2 = puVar1;
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010c19f0e0(0,0,*(undefined8 *)(puVar1 + _DAT_112776138));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10854645c; end: 1085464cb; -[SCSpectaclesCustomExportViewController viewWillLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10854645c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  func_0x00010c08cdc0(*(undefined8 *)(param_4 + _DAT_11277612c));
  lVar1 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010c19f0e0(0,0,param_3,0x4040000000000000,*(undefined8 *)(param_4 + _DAT_112776138));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085464cc; end: 1085464eb; -[SCSpectaclesCustomExportViewController viewDidLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085464cc(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_112776100) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + _DAT_112776100) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010beafa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupSelectedFormatCollectionVi_112589828);
  return;
}



/* Entry: 1085464ec; end: 1085466e7; -[SCSpectaclesCustomExportViewController handlePanGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085464ec(double param_1,double param_2,double param_3,undefined *param_4,
                  undefined8 param_5,long param_6)

{
  double *pdVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  
  _objc_retain(param_6);
  func_0x00010c27adc0(param_6,param_5,*(undefined8 *)(param_4 + _DAT_112776130));
  lVar5 = param_6;
  dVar7 = param_1;
  func_0x00010c252440();
  if (lVar5 == 1) {
    lVar5 = (long)_DAT_11277613c;
    lVar6 = (long)_DAT_11277612c;
    puVar2 = *(undefined **)(param_4 + lVar6);
    func_0x00010bf40120(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4cdc0();
    uVar3 = *(undefined8 *)(param_4 + lVar6);
    func_0x00010bf40120(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4cdc0();
    *(double *)(param_4 + lVar5) = dVar7;
    *(double *)((long)(param_4 + lVar5) + 8) = param_2;
LAB_108546588:
    _objc_release(uVar3);
    param_4 = puVar2;
  }
  else {
    lVar5 = param_6;
    func_0x00010c252440();
    if (lVar5 != 2) {
      lVar5 = param_6;
      func_0x00010c252440();
      puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      if (lVar5 != 3) goto LAB_108546620;
      lVar5 = (long)_DAT_11277612c;
      uVar3 = *(undefined8 *)(param_4 + lVar5);
      func_0x00010bf40120(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4cdc0();
      puVar4 = param_4;
      func_0x00010c29bf00(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      func_0x00010bfed060(puVar2,param_5,(long)(dVar7 / param_3),0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_4 + lVar5);
      func_0x00010bf40120(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c158b60();
      goto LAB_108546588;
    }
    pdVar1 = (double *)(param_4 + _DAT_11277613c);
    *pdVar1 = *pdVar1 - param_1;
    uVar3 = *(undefined8 *)(param_4 + _DAT_11277612c);
    func_0x00010bf40120(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182300(*pdVar1,pdVar1[1]);
    _objc_release(uVar3);
    func_0x00010c29bf00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219ba0(*(undefined8 *)PTR__CGPointZero_110347540,
                        *(undefined8 *)(PTR__CGPointZero_110347540 + 8),param_6,param_5,param_4);
  }
  _objc_release(param_4);
LAB_108546620:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 1085466e8; end: 108546797; -[SCSpectaclesCustomExportViewController _setupSelectedFormatCollectionViewsPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085466e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,
                      *(undefined8 *)(param_1 + _DAT_112776118),0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277612c);
  func_0x00010bf40120(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c158b60();
  _objc_release(uVar2);
  lVar3 = (long)_DAT_112776138;
  func_0x00010c158b60(*(undefined8 *)(param_1 + lVar3),param_2,puVar1,0,0x10);
  func_0x00010c1525a0(*(undefined8 *)(param_1 + lVar3),param_2,puVar1,0x10,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108546798; end: 108546a67; -[SCSpectaclesCustomExportViewController _initCancelButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108546798(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined1 auStack_1f0 [8];
  undefined1 auStack_1e8 [8];
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af938;
  _objc_alloc_init();
  lVar19 = (long)_DAT_112776140;
  uVar15 = *(undefined8 *)(param_4 + lVar19);
  *(undefined **)(param_4 + lVar19) = puVar1;
  _objc_release(uVar15);
  uVar18 = *(undefined8 *)(param_4 + lVar19);
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar15;
  func_0x00010bf33880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar15);
  func_0x00010befbd60(*(undefined8 *)(param_4 + lVar19));
  lVar20 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar20);
  func_0x00010c219b60(*(undefined8 *)(param_4 + lVar19));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_4 + lVar19);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar20;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_4 + lVar19);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar5;
  func_0x00010bf493c0(0x4041800000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_4 + lVar19);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar6;
  func_0x00010bf49420(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_4 + lVar19);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar7;
  func_0x00010bf49420(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar8);
  _objc_release(uVar18);
  _objc_release(uVar7);
  _objc_release(uVar15);
  _objc_release(uVar6);
  _objc_release(uVar17);
  _objc_release(lVar16);
  _objc_release(lVar11);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar20);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af938;
  _objc_alloc_init();
  lVar14 = (long)_DAT_112776144;
  uVar17 = *(undefined8 *)(lVar2 + lVar14);
  *(undefined **)(lVar2 + lVar14) = puVar1;
  _objc_release(uVar17);
  uVar17 = *(undefined8 *)(lVar2 + lVar14);
  func_0x00010c271420(uVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c165e20();
  _objc_release(uVar17);
  func_0x00010c160fc0(*(undefined8 *)(lVar2 + lVar14));
  uVar15 = *(undefined8 *)(lVar2 + lVar14);
  func_0x00010c08c0e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4036000000000000);
  _objc_release(uVar15);
  func_0x000107c30a88();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar15;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(lVar2 + lVar14);
  func_0x00010c271420(uVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar15);
  func_0x00010befbd60(*(undefined8 *)(lVar2 + lVar14));
  lVar20 = lVar2;
  func_0x00010c29bf00(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar20);
  func_0x00010c219b60(*(undefined8 *)(lVar2 + lVar14));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar6 = *(undefined8 *)(lVar2 + lVar14);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar20;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar2 + lVar14);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar7;
  func_0x00010bf49420(0x406a400000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar2 + lVar14);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar9;
  func_0x00010bf49420(0x4046000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar2 + lVar14);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c29bf00(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  uVar5 = uVar10;
  func_0x00010bf493c0(-25.0 - param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar8);
  _objc_release(uVar5);
  _objc_release(lVar11);
  _objc_release(lVar4);
  _objc_release(uVar10);
  _objc_release(uVar18);
  _objc_release(uVar9);
  _objc_release(uVar15);
  _objc_release(uVar7);
  _objc_release(uVar17);
  _objc_release(lVar3);
  _objc_release(lVar20);
  _objc_release(uVar6);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar19 = (long)_DAT_112776134;
  uVar17 = *(undefined8 *)(lVar2 + lVar19);
  *(undefined **)(lVar2 + lVar19) = puVar1;
  _objc_release(uVar17);
  func_0x00010854ba1c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(lVar2 + lVar19));
  _objc_release(uVar17);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar2 + lVar19));
  _objc_release(puVar1);
  func_0x000107c30a88();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar2 + lVar19));
  _objc_release(puVar8);
  _objc_release(puVar1);
  func_0x00010c1cfce0(*(undefined8 *)(lVar2 + lVar19));
  func_0x00010c1bdb00(*(undefined8 *)(lVar2 + lVar19));
  func_0x00010c213040(*(undefined8 *)(lVar2 + lVar19));
  lVar20 = lVar2;
  func_0x00010c29bf00(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar20);
  func_0x00010c219b60(*(undefined8 *)(lVar2 + lVar19));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar11 = *(long *)(lVar2 + lVar19);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar20;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(lVar2 + lVar19);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar18;
  func_0x00010bf49420(0x4070e00000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar2 + lVar19);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar2 + lVar14);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar5;
  func_0x00010bf493c0(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar8;
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar8);
  _objc_release(uVar17);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar15);
  _objc_release(uVar18);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar20);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar13);
  func_0x00010c082b00(puVar13);
  func_0x00010c1a7f60(*(undefined8 *)(lVar11 + _DAT_112776134));
  puVar1 = puVar13;
  func_0x00010c082b00();
  if ((int)puVar1 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    lVar20 = (long)_DAT_112776144;
    func_0x00010c16e440(*(undefined8 *)(lVar11 + lVar20));
    _objc_release(puVar1);
    func_0x00010c1a9fc0(*(undefined8 *)(lVar11 + lVar20));
    uVar17 = *(undefined8 *)(lVar11 + lVar20);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(uVar17);
    _objc_release(puVar1);
    uVar17 = *(undefined8 *)(lVar11 + lVar20);
    func_0x00010854ba64();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar17);
    _objc_release(puVar1);
    uVar17 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
    uVar15 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
    uVar18 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
    uVar5 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
    func_0x00010c2163a0(uVar17,uVar15,uVar18,uVar5,*(undefined8 *)(lVar11 + lVar20));
    func_0x00010c1aa240(uVar17,uVar15,uVar18,uVar5,*(undefined8 *)(lVar11 + lVar20));
    func_0x00010c181e40(uVar17,uVar15,uVar18,uVar5,*(undefined8 *)(lVar11 + lVar20));
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = (long)_DAT_112776144;
    func_0x00010c16e440(*(undefined8 *)(lVar11 + lVar20));
    _objc_release(puVar1);
    func_0x00010c2163a0(0,0x400c000000000000,0,0xc00c000000000000,*(undefined8 *)(lVar11 + lVar20));
    func_0x00010c1aa240(0,0xc00c000000000000,0,0x400c000000000000,*(undefined8 *)(lVar11 + lVar20));
    func_0x00010c181e40(0,0x402e000000000000,0,0x402e000000000000,*(undefined8 *)(lVar11 + lVar20));
    uVar17 = *(undefined8 *)(lVar11 + lVar20);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c1248c0(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(uVar17);
    _objc_release(puVar1);
    uVar17 = *(undefined8 *)(lVar11 + lVar20);
    func_0x00010854ba04();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar17);
    _objc_release(puVar1);
    _objc_initWeak(auStack_1e8,lVar11);
    uVar17 = *(undefined8 *)(lVar11 + _DAT_11277611c);
    puVar12 = auStack_1f0;
    _objc_copyWeak(puVar12,auStack_1e8);
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar17);
    _objc_release(puVar12);
    _objc_destroyWeak(auStack_1f0);
    _objc_destroyWeak(auStack_1e8);
  }
  _objc_release(puVar13);
  return;
}



/* Entry: 108546a68; end: 10854702b; -[SCSpectaclesCustomExportViewController _initExportButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108546a68(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af938;
  _objc_alloc_init();
  lVar17 = (long)_DAT_112776144;
  uVar16 = *(undefined8 *)(param_4 + lVar17);
  *(undefined **)(param_4 + lVar17) = puVar1;
  _objc_release(uVar16);
  uVar16 = *(undefined8 *)(param_4 + lVar17);
  func_0x00010c271420(uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c165e20();
  _objc_release(uVar16);
  func_0x00010c160fc0(*(undefined8 *)(param_4 + lVar17));
  uVar2 = *(undefined8 *)(param_4 + lVar17);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4036000000000000);
  _objc_release(uVar2);
  func_0x000107c30a88();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar2;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_4 + lVar17);
  func_0x00010c271420(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar3);
  _objc_release(uVar16);
  _objc_release(uVar2);
  func_0x00010befbd60(*(undefined8 *)(param_4 + lVar17));
  lVar18 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar18);
  func_0x00010c219b60(*(undefined8 *)(param_4 + lVar17));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(param_4 + lVar17);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar18;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_4 + lVar17);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010bf49420(0x406a400000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_4 + lVar17);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010bf49420(0x4046000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_4 + lVar17);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  uVar12 = uVar8;
  func_0x00010bf493c0(-25.0 - param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar10);
  _objc_release(uVar12);
  _objc_release(lVar11);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(uVar16);
  _objc_release(lVar5);
  _objc_release(lVar18);
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar19 = (long)_DAT_112776134;
  uVar16 = *(undefined8 *)(param_4 + lVar19);
  *(undefined **)(param_4 + lVar19) = puVar1;
  _objc_release(uVar16);
  func_0x00010854ba1c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_4 + lVar19));
  _objc_release(uVar16);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_4 + lVar19));
  _objc_release(puVar1);
  func_0x000107c30a88();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_4 + lVar19));
  _objc_release(puVar10);
  _objc_release(puVar1);
  func_0x00010c1cfce0(*(undefined8 *)(param_4 + lVar19));
  func_0x00010c1bdb00(*(undefined8 *)(param_4 + lVar19));
  func_0x00010c213040(*(undefined8 *)(param_4 + lVar19));
  lVar18 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar18);
  func_0x00010c219b60(*(undefined8 *)(param_4 + lVar19));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar11 = *(long *)(param_4 + lVar19);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar18;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_4 + lVar19);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf49420(0x4070e00000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_4 + lVar19);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_4 + lVar17);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar12;
  func_0x00010bf493c0(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar10;
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar10);
  _objc_release(uVar16);
  _objc_release(uVar4);
  _objc_release(uVar12);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(lVar9);
  _objc_release(lVar5);
  _objc_release(lVar18);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar14);
  func_0x00010c082b00(puVar14);
  func_0x00010c1a7f60(*(undefined8 *)(lVar11 + _DAT_112776134));
  puVar1 = puVar14;
  func_0x00010c082b00();
  if ((int)puVar1 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    lVar18 = (long)_DAT_112776144;
    func_0x00010c16e440(*(undefined8 *)(lVar11 + lVar18));
    _objc_release(puVar1);
    func_0x00010c1a9fc0(*(undefined8 *)(lVar11 + lVar18));
    uVar16 = *(undefined8 *)(lVar11 + lVar18);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(uVar16);
    _objc_release(puVar1);
    uVar16 = *(undefined8 *)(lVar11 + lVar18);
    func_0x00010854ba64();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar16);
    _objc_release(puVar1);
    uVar16 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
    uVar2 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
    uVar3 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
    uVar12 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
    func_0x00010c2163a0(uVar16,uVar2,uVar3,uVar12,*(undefined8 *)(lVar11 + lVar18));
    func_0x00010c1aa240(uVar16,uVar2,uVar3,uVar12,*(undefined8 *)(lVar11 + lVar18));
    func_0x00010c181e40(uVar16,uVar2,uVar3,uVar12,*(undefined8 *)(lVar11 + lVar18));
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = (long)_DAT_112776144;
    func_0x00010c16e440(*(undefined8 *)(lVar11 + lVar18));
    _objc_release(puVar1);
    func_0x00010c2163a0(0,0x400c000000000000,0,0xc00c000000000000,*(undefined8 *)(lVar11 + lVar18));
    func_0x00010c1aa240(0,0xc00c000000000000,0,0x400c000000000000,*(undefined8 *)(lVar11 + lVar18));
    func_0x00010c181e40(0,0x402e000000000000,0,0x402e000000000000,*(undefined8 *)(lVar11 + lVar18));
    uVar16 = *(undefined8 *)(lVar11 + lVar18);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c1248c0(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(uVar16);
    _objc_release(puVar1);
    uVar16 = *(undefined8 *)(lVar11 + lVar18);
    func_0x00010854ba04();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar16);
    _objc_release(puVar1);
    _objc_initWeak(auStack_138,lVar11);
    uVar16 = *(undefined8 *)(lVar11 + _DAT_11277611c);
    puVar13 = auStack_140;
    _objc_copyWeak(puVar13,auStack_138);
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar16);
    _objc_release(puVar13);
    _objc_destroyWeak(auStack_140);
    _objc_destroyWeak(auStack_138);
  }
  _objc_release(puVar14);
  return;
}



/* Entry: 10854702c; end: 10854732b; -[SCSpectaclesCustomExportViewController _updateExportButtonWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10854702c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  func_0x00010c082b00(param_3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112776134));
  uVar3 = param_3;
  func_0x00010c082b00();
  if ((int)uVar3 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_112776144;
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4));
    _objc_release(puVar2);
    func_0x00010c1a9fc0(*(undefined8 *)(param_1 + lVar4));
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(uVar3);
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010854ba64();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar3);
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
    uVar5 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
    uVar6 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
    uVar7 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
    func_0x00010c2163a0(uVar3,uVar5,uVar6,uVar7,*(undefined8 *)(param_1 + lVar4));
    func_0x00010c1aa240(uVar3,uVar5,uVar6,uVar7,*(undefined8 *)(param_1 + lVar4));
    func_0x00010c181e40(uVar3,uVar5,uVar6,uVar7,*(undefined8 *)(param_1 + lVar4));
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_112776144;
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4));
    _objc_release(puVar2);
    func_0x00010c2163a0(0,0x400c000000000000,0,0xc00c000000000000,*(undefined8 *)(param_1 + lVar4));
    func_0x00010c1aa240(0,0xc00c000000000000,0,0x400c000000000000,*(undefined8 *)(param_1 + lVar4));
    func_0x00010c181e40(0,0x402e000000000000,0,0x402e000000000000,*(undefined8 *)(param_1 + lVar4));
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c1248c0(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(uVar3);
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010854ba04();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar3);
    _objc_release(puVar2);
    _objc_initWeak(auStack_68,param_1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11277611c);
    puVar1 = auStack_70;
    _objc_copyWeak(puVar1,auStack_68);
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar3);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10854732c; end: 1085473eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10854732c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112776108);
    func_0x00010c0ec5a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c082b00();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar3 != 0) {
      func_0x00010c1a9fc0(*(undefined8 *)(param_1 + _DAT_112776144));
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085473ec; end: 10854769b; -[SCSpectaclesCustomExportViewController _initShareButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085473ec(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + _DAT_112776108);
  func_0x00010c239e40();
  if ((int)lVar1 != 0) {
    puVar2 = PTR_PTR_1126af938;
    _objc_alloc_init();
    lVar14 = (long)_DAT_11277614c;
    uVar12 = *(undefined8 *)(param_1 + lVar14);
    *(undefined **)(param_1 + lVar14) = puVar2;
    _objc_release(uVar12);
    uVar12 = *(undefined8 *)(param_1 + lVar14);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110ee2158);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(uVar12,param_2,puVar2,0);
    _objc_release(puVar2);
    func_0x00010befbd60(*(undefined8 *)(param_1 + lVar14),param_2,param_1,
                        PTR_s__shareButtonPressed__11253bb98,0x40);
    lVar1 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar1);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar14),param_2,0);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar1 = *(long *)(param_1 + lVar14);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = (long)_DAT_112776144;
    uVar3 = *(undefined8 *)(param_1 + lVar13);
    func_0x00010c2793a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bf49520(0x4040800000000000,lVar1,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar14);
    lStack_80 = lVar4;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar5;
    func_0x00010bf493c0(0xc024000000000000,uVar5,param_2,lVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar14);
    uStack_78 = uVar12;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + lVar13);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010bf493a0(uVar8,param_2,uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar10;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_80,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2,param_2,puVar11);
    _objc_release(puVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar12);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(uVar3);
    _objc_release(lVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = lVar1 + _DAT_112776104;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf61500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10854769c; end: 1085476d7; -[SCSpectaclesCustomExportViewController _cancelButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10854769c(long param_1)

{
  param_1 = param_1 + _DAT_112776104;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf61500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085476d8; end: 108547b33; -[SCSpectaclesCustomExportViewController _shareButtonPressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085476d8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined **unaff_x25;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  long lStack_68;
  
  ppuVar13 = &puStack_e0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar16 = (long)_DAT_11277612c;
  lVar1 = *(long *)(param_1 + lVar16);
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar1;
  func_0x00010bfed180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  puVar14 = (undefined *)0x0;
  if (lVar17 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar16);
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar2;
    func_0x00010bfed180();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar15;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0840e0();
    _objc_release(uVar3);
    _objc_release(uVar15);
    _objc_release(uVar2);
    uVar5 = *(ulong *)(param_1 + _DAT_112776108);
    func_0x00010c0ec5a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c082b00();
    if ((int)uVar7 == 0) {
      _objc_release(uVar6);
      _objc_release(uVar5);
    }
    else {
      lVar17 = *(long *)(param_1 + _DAT_112776144);
      _objc_release(uVar6);
      _objc_release();
      if ((param_3 == lVar17) && (FUN_108545068(), (uVar5 & 1) == 0)) {
        puVar12 = PTR_PTR_1126af178;
        func_0x00010c22b900();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar12;
        func_0x00010854ba94();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR_PTR_1126af180;
        puVar14 = puVar8;
        func_0x00010854baac();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef320();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_70 = puVar11;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c235c40(puVar12);
        _objc_release(puVar9);
        _objc_release(puVar11);
        _objc_release(puVar14);
        _objc_release(puVar8);
        _objc_release(puVar12);
        goto LAB_108547a9c;
      }
    }
    _objc_initWeak(auStack_78,param_1);
    puVar14 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_108547b34;
    puStack_98 = &UNK_110842a68;
    unaff_x25 = &puStack_b0;
    _objc_copyWeak(auStack_88,auStack_78);
    _objc_retain(param_3);
    ppuVar10 = &puStack_b0;
    lStack_90 = param_3;
    uStack_80 = uVar4;
    _objc_retainBlock();
    puVar11 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010bf10fa0();
    if (puVar11 == (undefined *)0x0) {
      uVar15 = *(undefined8 *)(param_1 + _DAT_112776114);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puStack_e0 = puVar14;
      uStack_d8 = 0xc2000000;
      uStack_d0 = 0x108547be4;
      puStack_c8 = &UNK_110849380;
      _objc_copyWeak(auStack_b8,auStack_78);
      _objc_retain(ppuVar10);
      ppuStack_c0 = ppuVar10;
      func_0x00010c134a40(uVar15);
      _objc_release(uVar15);
      _objc_release(ppuStack_c0);
      _objc_destroyWeak(auStack_b8);
    }
    else {
      puVar11 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
      func_0x00010bf10fa0();
      if (puVar11 != (undefined *)0x2) {
        puVar11 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
        func_0x00010bf10fa0();
        if (puVar11 != (undefined *)0x1) {
          puVar11 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
          func_0x00010bf10fa0();
          ppuVar13 = (undefined **)puVar14;
          if (puVar11 == (undefined *)0x3) {
            (*(code *)ppuVar10[2])(ppuVar10);
          }
          goto LAB_108547a7c;
        }
      }
      puVar12 = *(undefined **)(param_1 + _DAT_112776114);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = (undefined **)puVar12;
      func_0x00010854ba4c();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = (undefined *)ppuVar13;
      func_0x00010854ba34();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar14;
      func_0x00010854ba7c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1184e0(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar14);
      _objc_release(ppuVar13);
      _objc_release(puVar12);
    }
LAB_108547a7c:
    _objc_release(ppuVar10);
    _objc_release(lStack_90);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_78);
    puVar14 = (undefined *)ppuVar13;
  }
LAB_108547a9c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(puVar14 + 0x28);
  _objc_destroyWeak(unaff_x25 + 5);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  lVar17 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (lVar17 != 0) {
    if (*(long *)(param_3 + 0x20) == *(long *)(lVar17 + _DAT_11277614c)) {
      lVar1 = lVar17 + _DAT_112776104;
      _objc_loadWeakRetained(lVar1);
      func_0x00010bf614e0();
    }
    else {
      if (*(long *)(param_3 + 0x20) != *(long *)(lVar17 + _DAT_112776144)) goto LAB_108547bd0;
      lVar1 = lVar17 + _DAT_112776104;
      _objc_loadWeakRetained(lVar1);
      func_0x00010bf614c0();
    }
    _objc_release(lVar1);
  }
LAB_108547bd0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar17);
  return;
}



/* Entry: 108547b34; end: 108547c83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108547b34(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(long *)(param_1 + 0x20) == *(long *)(lVar1 + _DAT_11277614c)) {
      lVar2 = lVar1 + _DAT_112776104;
      _objc_loadWeakRetained(lVar2);
      func_0x00010bf614e0();
    }
    else {
      if (*(long *)(param_1 + 0x20) != *(long *)(lVar1 + _DAT_112776144)) goto LAB_108547bd0;
      lVar2 = lVar1 + _DAT_112776104;
      _objc_loadWeakRetained(lVar2);
      func_0x00010bf614c0();
    }
    _objc_release(lVar2);
  }
LAB_108547bd0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108547c84; end: 108547cf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108547c84(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x30) == '\x01') {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
    else {
      lVar2 = lVar1 + _DAT_112776104;
      _objc_loadWeakRetained(lVar2);
      func_0x00010bf61500();
      _objc_release(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108547cf4; end: 108547fa7; -[SCSpectaclesCustomExportViewController exportImagesCollectionView:imageDidScroll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108547cf4(double param_1,undefined8 param_2,double param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  lVar7 = (long)_DAT_11277612c;
  lVar1 = *(long *)(param_4 + lVar7);
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfed180();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar8 != 0) {
    uVar3 = *(undefined8 *)(param_4 + lVar7);
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bfed180();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0840e0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
    lVar2 = param_4;
    func_0x00010c29bf00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    param_1 = param_1 / param_3;
    _objc_release(lVar2);
    dVar9 = (double)(int)param_1;
    dVar10 = param_1 - dVar9;
    lVar8 = (long)_DAT_112776138;
    uVar6 = *(undefined8 *)(param_4 + lVar8);
    puVar4 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_5,(long)(int)param_1,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf33b60(uVar6,param_5,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    uVar3 = *(undefined8 *)(param_4 + lVar8);
    puVar4 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_5,(long)(int)param_1,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf33b60(uVar3,param_5,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010bfb68e0(uVar6);
    dVar11 = param_3 * 0.5;
    func_0x00010bfb68e0(uVar3);
    dVar12 = param_3 * 0.5;
    func_0x00010bf345e0(uVar6);
    lVar2 = param_4;
    func_0x00010c29bf00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _objc_release(lVar2);
    uVar5 = *(undefined8 *)(param_4 + lVar8);
    func_0x00010bf4cdc0(uVar5);
    func_0x00010c1822e0((dVar9 - param_3 * 0.5) + dVar10 * (dVar11 + dVar12),uVar5);
    uVar5 = uVar6;
    func_0x00010bf9d0c0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    dVar9 = ABS(dVar10 * 0.65);
    func_0x00010c1677c0(1.0 - dVar9);
    _objc_release(uVar5);
    uVar5 = uVar3;
    func_0x00010bf9d0c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(dVar9 + 0.35);
    _objc_release(uVar5);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar6);
    return;
  }
  return;
}



/* Entry: 108547fa8; end: 108548053; -[SCSpectaclesCustomExportViewController exportImagesCollectionView:imageDidEndScroll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108547fa8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c142240();
  *(undefined8 *)(param_1 + _DAT_112776148) = uVar1;
  func_0x00010c158b60(*(undefined8 *)(param_1 + _DAT_112776138),param_2,param_4,0,0x10);
  _objc_release(param_4);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112776108);
  func_0x00010c0ec5a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed7b60(param_1,param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108548054; end: 1085480b3; -[SCSpectaclesCustomExportViewController labelCollectionView:didSelectLabelAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108548054(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277612c);
  _objc_retain(param_4);
  func_0x00010bf40120(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c158b60();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085480b4; end: 1085480c3; -[SCSpectaclesCustomExportViewController snaps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1085480b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112776110);
}



/* Entry: 1085480c4; end: 1085481df; -[SCSpectaclesCustomExportViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085480c4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112776110,0);
  _objc_storeStrong(param_1 + _DAT_11277611c,0);
  _objc_storeStrong(param_1 + _DAT_112776114,0);
  _objc_storeStrong(param_1 + _DAT_112776138,0);
  _objc_storeStrong(param_1 + _DAT_112776130,0);
  _objc_storeStrong(param_1 + _DAT_11277612c,0);
  _objc_storeStrong(param_1 + _DAT_112776128,0);
  _objc_storeStrong(param_1 + _DAT_112776124,0);
  _objc_storeStrong(param_1 + _DAT_112776120,0);
  _objc_storeStrong(param_1 + _DAT_112776140,0);
  _objc_storeStrong(param_1 + _DAT_112776134,0);
  _objc_storeStrong(param_1 + _DAT_112776144,0);
  _objc_storeStrong(param_1 + _DAT_11277614c,0);
  _objc_storeStrong(param_1 + _DAT_11277610c,0);
  _objc_storeStrong(param_1 + _DAT_112776108,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112776104);
  return;
}



/* Entry: 1085481e0; end: 1085483e3; -[SCSpectaclesExportImageCollectionView initWithFrame:viewModels:thumbnailLiveView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1085481e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_78 = PTR_PTR_1126fcc28;
  uStack_80 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_80,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112776150;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112776154;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d9fd0;
    _objc_alloc_init(PTR_PTR_1126d9fd0);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
    _objc_alloc();
    func_0x00010c014040(param_1,param_2,param_3,param_4);
    lVar5 = (long)_DAT_112776158;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    _objc_opt_class(PTR_PTR_1126d9fd8);
    func_0x00010c126000(uVar2);
    func_0x00010c1d8be0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c189840(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c2026e0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c2025c0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(puVar1);
    _objc_release(puVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 1085483e4; end: 10854840f; -[SCSpectaclesExportImageCollectionView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085483e4(long param_1)

{
  func_0x00010bf20c00();
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112776158),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 108548410; end: 10854847f; -[SCSpectaclesExportImageCollectionView collectionView:cellForItemAtIndexPath:] */

void FUN_108548410(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bf6e0c0(param_3,param_2,&PTR____CFConstantStringClassReference_110ee2178,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde4dc0(param_1,param_2,param_3,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 108548480; end: 10854848f; -[SCSpectaclesExportImageCollectionView collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108548480(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112776150),PTR_s_count_1125b2420);
  return;
}



/* Entry: 108548490; end: 1085484ab; -[SCSpectaclesExportImageCollectionView collectionView:layout:sizeForItemAtIndexPath:] */

undefined1  [16]
FUN_108548490(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  
  func_0x00010bfb68e0();
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 1085484ac; end: 108548643; -[SCSpectaclesExportImageCollectionView scrollViewDidScroll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085484ac(double param_1,undefined8 param_2,double param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_6);
  lVar4 = (long)_DAT_11277615c;
  if ((*(byte *)(param_4 + lVar4) & 1) == 0) {
    *(undefined1 *)(param_4 + lVar4) = 1;
    func_0x00010bf4cdc0(param_6);
    func_0x00010bfb68e0(param_4);
    _fmod(param_1,param_3);
    puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    if (param_1 == 0.0) {
      func_0x00010bf4cdc0(param_6);
      func_0x00010bfb68e0(param_4);
      func_0x00010bfed020(puVar3,param_5,(long)(param_1 / param_3),0);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = (long)_DAT_112776158;
      lVar1 = *(long *)(param_4 + lVar5);
      func_0x00010c29fc60();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf529e0();
      if (lVar2 == 1) {
        lVar2 = lVar1;
        func_0x00010bfb1920(lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bde4dc0(param_4,param_5,lVar2,puVar3);
        _objc_release(lVar2);
      }
      func_0x00010c158b60(*(undefined8 *)(param_4 + lVar5),param_5,puVar3,0,0x10);
      lVar2 = param_4 + _DAT_112776160;
      _objc_loadWeakRetained(lVar2);
      func_0x00010bf9d040();
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    else {
      puVar3 = (undefined *)(param_4 + _DAT_112776160);
      _objc_loadWeakRetained(puVar3);
      func_0x00010bf4cdc0(param_6);
      func_0x00010bf9d060(puVar3,param_5,param_4);
    }
    _objc_release(puVar3);
    *(undefined1 *)(param_4 + lVar4) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 108548644; end: 1085486e3; -[SCSpectaclesExportImageCollectionView _configureCell:indexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108548644(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112776150);
  _objc_retain(param_3);
  func_0x00010c142240(param_4);
  func_0x00010c0dfd40(uVar2,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_112776154;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  uVar1 = uVar2;
  func_0x00010bf5c6e0();
  func_0x00010c186180(uVar3,param_2,uVar1);
  func_0x00010c28d0e0(param_3,param_2,uVar2,*(undefined8 *)(param_1 + lVar4));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1085486e4; end: 108548703; -[SCSpectaclesExportImageCollectionView exportImagesDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085486e4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112776160);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108548704; end: 108548717; -[SCSpectaclesExportImageCollectionView setExportImagesDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108548704(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112776160,param_3);
  return;
}



/* Entry: 108548718; end: 108548727; -[SCSpectaclesExportImageCollectionView collectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108548718(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112776158);
}



/* Entry: 108548728; end: 108548767; -[SCSpectaclesExportImageCollectionView setCollectionView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108548728(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112776158;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108548768; end: 1085487c3; -[SCSpectaclesExportImageCollectionView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108548768(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112776158,0);
  _objc_destroyWeak(param_1 + _DAT_112776160);
  _objc_storeStrong(param_1 + _DAT_112776150,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112776154,0);
  return;
}



/* Entry: 1085487c4; end: 108548cbb; -[SCSpectaclesExportImageCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1085487c4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  undefined8 *puVar36;
  undefined8 *puVar37;
  undefined8 *puVar38;
  undefined8 *puVar39;
  undefined8 *puVar40;
  undefined8 *puVar41;
  undefined8 *puVar42;
  undefined8 *puVar43;
  undefined8 *puVar44;
  undefined8 *puVar45;
  undefined8 uVar46;
  long lVar47;
  long lVar48;
  undefined8 *puVar49;
  long lVar50;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c8 = PTR_PTR_1126fcc30;
  puVar1 = &uStack_d0;
  uStack_d0 = param_3;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  lVar4 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    lVar48 = (long)_DAT_112776164;
    uVar46 = *(undefined8 *)((long)puVar1 + lVar48);
    *(undefined **)((long)puVar1 + lVar48) = puVar2;
    _objc_release(uVar46);
    func_0x00010befbb60(puVar1);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar48));
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar48));
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    param_2 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,param_2,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar50 = (long)_DAT_112776168;
    uVar46 = *(undefined8 *)((long)puVar1 + lVar50);
    *(undefined **)((long)puVar1 + lVar50) = puVar2;
    _objc_release(uVar46);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar50));
    _objc_release(puVar2);
    func_0x000107c30a88();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfb3e40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar50));
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar50));
    func_0x00010c1bdb00(*(undefined8 *)((long)puVar1 + lVar50));
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar50));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar50));
    func_0x00010befbb60(puVar1);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar50));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar4 = *(long *)((long)puVar1 + lVar48);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar47 = lVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_c0 = lVar47;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar48);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar49 = puVar1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar46 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = uVar46;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar48);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar7;
    func_0x00010bf493c0(0xc054000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar22;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar48);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar9;
    func_0x00010bf493c0(0xc054000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar23;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar50);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar1 + lVar48);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar26;
    uVar13 = *(undefined8 *)((long)puVar1 + lVar50);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)((long)puVar1 + lVar48);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = uVar15;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar50);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)((long)puVar1 + lVar48);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_90 = uVar18;
    uVar19 = *(undefined8 *)((long)puVar1 + lVar50);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 68.0;
    uVar20 = uVar19;
    func_0x00010bf49420(0x4051000000000000);
    _objc_retainAutoreleasedReturnValue();
    param_6 = 8;
    puVar21 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_88 = uVar20;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_5 = puVar21;
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar21);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar26);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar23);
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release(uVar22);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(uVar46);
    _objc_release(puVar49);
    _objc_release(uVar6);
    _objc_release(lVar47);
    _objc_release(puVar5);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar1;
  }
  ___stack_chk_fail();
  lVar47 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar50 = (long)_DAT_112776164;
  func_0x00010c14d960(*(undefined8 *)(lVar4 + lVar50));
  puVar1 = param_5;
  func_0x00010bf6e540(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar48 = (long)_DAT_112776168;
  func_0x00010c212f20(*(undefined8 *)(lVar4 + lVar48));
  _objc_release(puVar1);
  puVar1 = param_5;
  func_0x00010bf6e540(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60(*(undefined8 *)(lVar4 + lVar48));
  _objc_release(puVar1);
  puVar49 = *(undefined8 **)(lVar4 + lVar50);
  _objc_retain(puVar49);
  puVar1 = param_5;
  func_0x00010bf6e540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar5 = puVar49;
  if (puVar1 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    _objc_release(puVar49);
    func_0x00010c219b60(puVar5);
    func_0x00010befbb60(*(undefined8 *)(lVar4 + lVar50));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar1 = puVar5;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar46 = *(undefined8 *)(lVar4 + lVar50);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar49 = puVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)(lVar4 + lVar50);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar5;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)(lVar4 + lVar50);
    func_0x00010c274200(uVar23);
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar21;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar5;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = *(undefined8 *)(lVar4 + lVar48);
    func_0x00010c274200(uVar26);
    _objc_retainAutoreleasedReturnValue();
    param_1 = -6.0;
    puVar27 = puVar25;
    func_0x00010bf493c0(0xc018000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar27);
    _objc_release(uVar26);
    _objc_release(puVar25);
    _objc_release(puVar24);
    _objc_release(uVar23);
    _objc_release(puVar21);
    _objc_release(puVar10);
    _objc_release(uVar22);
    _objc_release(puVar8);
    _objc_release(puVar49);
    _objc_release(uVar46);
    _objc_release(puVar1);
  }
  puVar1 = param_5;
  func_0x00010c082b00();
  if ((int)puVar1 == 0) {
    puVar1 = param_5;
    func_0x00010c26dde0(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar49 = param_5;
    func_0x00010bf398c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010bdc8980(lVar4);
  }
  else {
    puVar1 = (undefined8 *)PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    puVar49 = (undefined8 *)PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    func_0x00010c219b60(puVar1);
    func_0x00010c219b60(puVar49);
    func_0x00010befbb60(puVar5);
    func_0x00010befbb60(puVar5);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar8 = puVar1;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar5;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar1;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar5;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = puVar24;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar28 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar29 = puVar5;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar30 = puVar28;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar31 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar32 = puVar5;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar33 = puVar31;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar34 = puVar49;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar35 = puVar5;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar36 = puVar34;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar37 = puVar49;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar38 = puVar5;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar39 = puVar37;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar40 = puVar49;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar41 = puVar5;
    func_0x00010c274200(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar42 = puVar40;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar43 = puVar49;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar44 = puVar5;
    func_0x00010bf1ff80(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar45 = puVar43;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar45);
    _objc_release(puVar44);
    _objc_release(puVar43);
    _objc_release(puVar42);
    _objc_release(puVar41);
    _objc_release(puVar40);
    _objc_release(puVar39);
    _objc_release(puVar38);
    _objc_release(puVar37);
    _objc_release(puVar36);
    _objc_release(puVar35);
    _objc_release(puVar34);
    _objc_release(puVar33);
    _objc_release(puVar32);
    _objc_release(puVar31);
    _objc_release(puVar30);
    _objc_release(puVar29);
    _objc_release(puVar28);
    _objc_release(puVar27);
    _objc_release(puVar25);
    _objc_release(puVar24);
    _objc_release(puVar21);
    _objc_release(puVar10);
    _objc_release(puVar8);
    puVar8 = param_5;
    func_0x00010c26dde0(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_5;
    func_0x00010bf398c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc8980(lVar4);
    _objc_release(puVar10);
    _objc_release(puVar8);
    puVar10 = param_5;
    func_0x00010c26dde0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = param_5;
    func_0x00010bf398c0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar49;
    func_0x00010bdc8980(lVar4);
    _objc_release(puVar21);
    _objc_release(puVar10);
  }
  _objc_release(puVar49);
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release(param_6);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar47) {
    return param_5;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  _UIGraphicsBeginImageContextWithOptions(param_1,param_2,0x3ff0000000000000,0);
  func_0x00010c19bbe0(puVar8);
  _objc_release(puVar8);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x000100841590(param_1,param_2);
  func_0x00010bf199c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad4a0();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bbe0();
  _objc_release(puVar2);
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199a0(0x3ff0000000000000,0x3ff0000000000000,param_1 + -2.0,param_1 + -2.0,
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad680(0x3ff0000000000000);
  _objc_release(puVar1);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return puVar1;
}



/* Entry: 108548cbc; end: 10854947b; -[SCSpectaclesExportImageCollectionViewCell updateWithViewModel:thumbnailLiveView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108548cbc(double param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
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
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  long lVar33;
  undefined *puVar34;
  long lVar35;
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
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar35 = (long)_DAT_112776164;
  func_0x00010c14d960(*(undefined8 *)(param_3 + lVar35));
  puVar1 = param_5;
  func_0x00010bf6e540(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar33 = (long)_DAT_112776168;
  func_0x00010c212f20(*(undefined8 *)(param_3 + lVar33),param_4,puVar1);
  _objc_release(puVar1);
  puVar1 = param_5;
  func_0x00010bf6e540(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60(*(undefined8 *)(param_3 + lVar33),param_4,puVar1 == (undefined *)0x0);
  _objc_release(puVar1);
  puVar34 = *(undefined **)(param_3 + lVar35);
  _objc_retain(puVar34);
  puVar1 = param_5;
  func_0x00010bf6e540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = puVar34;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    _objc_release(puVar34);
    func_0x00010c219b60(puVar2,param_4,0);
    func_0x00010befbb60(*(undefined8 *)(param_3 + lVar35),param_4,puVar2);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar34 = puVar2;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_3 + lVar35);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar34;
    func_0x00010bf493a0(puVar34,param_4,uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    puStack_90 = puVar4;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_3 + lVar35);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf493a0(puVar5,param_4,uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    puStack_88 = puVar7;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_3 + lVar35);
    func_0x00010c274200(uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010bf493a0(puVar8,param_4,uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar2;
    puStack_80 = puVar10;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_3 + lVar33);
    func_0x00010c274200(uVar12);
    _objc_retainAutoreleasedReturnValue();
    param_1 = -6.0;
    puVar13 = puVar11;
    func_0x00010bf493c0(0xc018000000000000,puVar11,param_4,uVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar13;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_90,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1,param_4,puVar14);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(uVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(puVar34);
  }
  puVar1 = param_5;
  func_0x00010c082b00();
  if ((int)puVar1 == 0) {
    puVar1 = param_5;
    func_0x00010c26dde0(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar34 = param_5;
    func_0x00010bf398c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bdc8980(param_3,param_4,puVar2,puVar1,puVar34,param_6);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    puVar34 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    func_0x00010c219b60(puVar1,param_4,0);
    func_0x00010c219b60(puVar34,param_4,0);
    func_0x00010befbb60(puVar2,param_4,puVar1);
    func_0x00010befbb60(puVar2,param_4,puVar34);
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar5 = puVar1;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010bf493a0(puVar5,param_4,puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    puStack_d0 = puVar8;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar2;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar10;
    func_0x00010bf493a0(puVar10,param_4,puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar1;
    puStack_c8 = puVar13;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar14;
    func_0x00010bf493a0(puVar14,param_4,puVar15);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar1;
    puStack_c0 = puVar16;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar2;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar17;
    func_0x00010bf493a0(puVar17,param_4,puVar18);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar34;
    puStack_b8 = puVar19;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar2;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar20;
    func_0x00010bf493a0(puVar20,param_4,puVar21);
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar34;
    puStack_b0 = puVar22;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar2;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar23;
    func_0x00010bf493a0(puVar23,param_4,puVar24);
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar34;
    puStack_a8 = puVar25;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = puVar2;
    func_0x00010c274200(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar28 = puVar26;
    func_0x00010bf493a0(puVar26,param_4,puVar27);
    _objc_retainAutoreleasedReturnValue();
    puVar29 = puVar34;
    puStack_a0 = puVar28;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar30 = puVar2;
    func_0x00010bf1ff80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar31 = puVar29;
    func_0x00010bf493a0(puVar29,param_4,puVar30);
    _objc_retainAutoreleasedReturnValue();
    puVar32 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_98 = puVar31;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_d0,8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar4,param_4,puVar32);
    _objc_release(puVar32);
    _objc_release(puVar31);
    _objc_release(puVar30);
    _objc_release(puVar29);
    _objc_release(puVar28);
    _objc_release(puVar27);
    _objc_release(puVar26);
    _objc_release(puVar25);
    _objc_release(puVar24);
    _objc_release(puVar23);
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar5);
    puVar4 = param_5;
    func_0x00010c26dde0(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_5;
    func_0x00010bf398c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc8980(param_3,param_4,puVar1,puVar4,puVar5,0);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar5 = param_5;
    func_0x00010c26dde0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_5;
    func_0x00010bf398c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar34;
    func_0x00010bdc8980(param_3,param_4,puVar34,puVar5,puVar7,0);
    _objc_release(puVar7);
    _objc_release(puVar5);
  }
  _objc_release(puVar34);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  _UIGraphicsBeginImageContextWithOptions(param_1,param_2,0x3ff0000000000000,0);
  func_0x00010c19bbe0(puVar4);
  _objc_release(puVar4);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x000100841590(param_1,param_2);
  func_0x00010bf199c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad4a0();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bbe0();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199a0(0x3ff0000000000000,0x3ff0000000000000,param_1 + -2.0,param_1 + -2.0,
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad680(0x3ff0000000000000);
  _objc_release(puVar1);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10854947c; end: 10854957f; -[SCSpectaclesExportImageCollectionViewCell _borderImageForThumbnailOfSize:color:] */

void FUN_10854947c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  _objc_retain(param_5);
  _UIGraphicsBeginImageContextWithOptions(param_1,param_2,0x3ff0000000000000,0);
  func_0x00010c19bbe0(param_5);
  _objc_release(param_5);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x000100841590(param_1,param_2);
  func_0x00010bf199c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad4a0();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bbe0();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199a0(0x3ff0000000000000,0x3ff0000000000000,param_1 + -2.0,param_1 + -2.0,
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad680(0x3ff0000000000000);
  _objc_release(puVar1);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108549580; end: 10854a047; -[SCSpectaclesExportImageCollectionViewCell _addThumbnailViewToView:thumbnailImage:backgroundColor:thumbnailLiveView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108549580(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,long param_7,long param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined *puVar27;
  long lVar28;
  double dVar29;
  double dVar30;
  undefined8 uVar31;
  
  lVar28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  func_0x00010c219b60();
  func_0x00010c16e440(puVar1);
  func_0x00010befbb60(param_5);
  func_0x00010c23d0a0(param_6);
  dVar29 = INFINITY;
  if (param_2 != 0.0) {
    dVar29 = param_1 / param_2;
  }
  dVar30 = 0.0;
  if (param_1 != 0.0) {
    dVar30 = dVar29;
  }
  puVar2 = puVar1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_5;
  func_0x00010c2a5060(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(puVar2);
  func_0x00010c1e3380(0x443b8000,puVar4);
  puVar2 = puVar1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_5;
  func_0x00010bfe0660(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(puVar2);
  func_0x00010c1e3380(0x443b8000,puVar5);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar6 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_5;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010bf493e0(dVar30);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_5;
  func_0x00010c2a5060(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar14;
  func_0x00010bf49500();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_5;
  func_0x00010bfe0660(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar17;
  func_0x00010bf49500();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(lVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(lVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(lVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(lVar3);
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c01bf60();
  func_0x00010c219b60();
  func_0x00010c181f00(0x437a0000,puVar6);
  func_0x00010c181f00(0x437a0000,puVar6);
  func_0x00010befbb60(param_5);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar31 = 0x3ff0000000000000;
  if (param_7 != 0) {
    uVar31 = 0x3fee666666666666;
  }
  puVar7 = puVar6;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar6;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar1;
  func_0x00010bf348e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar6;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar1;
  func_0x00010c2a5060(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar14;
  func_0x00010bf493e0(uVar31);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar6;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar1;
  func_0x00010bfe0660(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar19;
  func_0x00010bf493e0(uVar31);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar7);
  if (param_8 != 0) {
    func_0x00010c219b60(param_8);
    lVar3 = param_8;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == param_5) {
      func_0x00010bf21300(param_5);
    }
    else {
      func_0x00010c12c960(param_8);
      func_0x00010befbb60(param_5);
      puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      lVar3 = param_8;
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar3;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = param_8;
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar6;
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = lVar15;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      lVar23 = param_8;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar6;
      func_0x00010c274200(puVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar24 = lVar23;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      lVar25 = param_8;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar6;
      func_0x00010bf1ff80(puVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar26 = lVar25;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar2);
      _objc_release(puVar12);
      _objc_release(lVar26);
      _objc_release(puVar11);
      _objc_release(lVar25);
      _objc_release(lVar24);
      _objc_release(puVar10);
      _objc_release(lVar23);
      _objc_release(lVar18);
      _objc_release(puVar8);
      _objc_release(lVar15);
      _objc_release(lVar9);
      _objc_release(puVar7);
      _objc_release(lVar3);
    }
  }
  if (param_7 != 0) {
    func_0x00010c23d0a0(param_6);
    func_0x00010bdd5360();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    func_0x00010c219b60();
    func_0x00010befbb60(param_5);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar8 = puVar7;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar6;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar7;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar6;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar7;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar6;
    func_0x00010c274200(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar7;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar6;
    func_0x00010bf1ff80(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar20;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar27);
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(param_3);
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar28) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_5 + _DAT_112776168,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_5 + _DAT_112776164,0);
  return;
}



/* Entry: 10854a048; end: 10854a087; -[SCSpectaclesExportImageCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10854a048(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112776168,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112776164,0);
  return;
}



/* Entry: 10854a088; end: 10854a0f3; -[SCSpectaclesExportImageCollectionViewLayout init] */

undefined1 * FUN_10854a088(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fcc38;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1f7ac0(puVar1);
    func_0x00010c1c82c0(0,puVar1);
    func_0x00010c1c8300(0,puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10854a0f4; end: 10854a0fb; -[SCSpectaclesExportImageCollectionViewLayout shouldInvalidateLayoutForBoundsChange:] */

undefined8 FUN_10854a0f4(void)

{
  return 1;
}



/* Entry: 10854a0fc; end: 10854a497; -[SCSpectaclesExportImageCollectionViewLayout layoutAttributesForElementsInRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *****
FUN_10854a0fc(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
             undefined8 *****param_5,undefined8 param_6,undefined8 *param_7,undefined1 *param_8,
             undefined8 param_9)

{
  undefined8 *****pppppuVar1;
  undefined8 *****pppppuVar2;
  undefined8 *****pppppuVar3;
  undefined8 *****pppppuVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *****pppppuVar9;
  undefined8 *****pppppuVar10;
  undefined8 *****unaff_x24;
  long lVar11;
  undefined8 *****pppppuVar12;
  double dVar13;
  double dVar14;
  double unaff_d8;
  double unaff_d9;
  double unaff_d10;
  double unaff_d11;
  undefined8 ****ppppuStack_350;
  undefined *puStack_348;
  double dStack_340;
  double dStack_338;
  double dStack_330;
  double dStack_328;
  undefined8 ****ppppuStack_320;
  undefined8 ****ppppuStack_318;
  undefined8 ****ppppuStack_310;
  undefined8 ****ppppuStack_308;
  undefined8 ****ppppuStack_300;
  undefined8 ****ppppuStack_2f8;
  undefined1 *puStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  double dStack_2c0;
  undefined8 uStack_2b0;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  double dStack_1c0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 ****ppppuStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [128];
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_118 = PTR_PTR_1126fcc38;
  pppppuVar1 = &ppppuStack_120;
  ppppuStack_120 = param_5;
  _objc_msgSendSuper2(pppppuVar1,PTR_s_layoutAttributesForElementsInRec_112600c60);
  _objc_retainAutoreleasedReturnValue();
  pppppuVar2 = param_5;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  pppppuVar10 = pppppuVar2;
  func_0x00010bfed180();
  _objc_retainAutoreleasedReturnValue();
  pppppuVar3 = pppppuVar10;
  func_0x00010bf529e0();
  _objc_release(pppppuVar10);
  pppppuVar9 = pppppuVar2;
  _objc_release();
  pppppuVar4 = (undefined8 *****)0x0;
  dVar13 = param_1;
  dVar14 = param_3;
  dStack_328 = unaff_d8;
  dStack_330 = unaff_d9;
  if (pppppuVar3 != (undefined8 *****)0x0) {
    pppppuVar10 = param_5;
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar4 = pppppuVar10;
    func_0x00010bfed180();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = pppppuVar4;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar2 = unaff_x24;
    func_0x00010c0840e0();
    _objc_release(unaff_x24);
    _objc_release(pppppuVar4);
    _objc_release(pppppuVar10);
    pppppuVar10 = param_5;
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    dVar14 = param_3;
    _objc_release(pppppuVar10);
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4cdc0();
    _objc_release(param_5);
    dVar13 = 0.0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    lStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    plStack_150 = (long *)0x0;
    _objc_retain(pppppuVar1);
    param_7 = &uStack_160;
    param_8 = auStack_110;
    param_9 = 0x10;
    pppppuVar3 = pppppuVar1;
    func_0x00010bf52a60();
    puVar5 = PTR__CATransform3DIdentity_110346c58;
    if (pppppuVar3 != (undefined8 *****)0x0) {
      dVar13 = (double)((long)pppppuVar2 * (long)(int)param_3);
      pppppuVar9 = (undefined8 *****)((long)pppppuVar2 + -1);
      lVar11 = *plStack_150;
      if (0.0 <= param_1 - dVar13) {
        pppppuVar9 = (undefined8 *****)((long)pppppuVar2 + 1);
      }
      param_3 = ABS(param_1 - dVar13) / (double)(int)param_3;
      param_1 = param_3 * 0.30000000000000004 + 0.7;
      dVar13 = 1.0;
      unaff_d10 = 1.0 - param_3;
      param_2 = 0xbfd3333333333334;
      unaff_d11 = param_3 * -0.30000000000000004 + 1.0;
      do {
        pppppuVar12 = (undefined8 *****)0x0;
        do {
          if (*plStack_150 != lVar11) {
            _objc_enumerationMutation(pppppuVar1);
          }
          pppppuVar10 = *(undefined8 ******)(lStack_158 + (long)pppppuVar12 * 8);
          pppppuVar4 = pppppuVar10;
          func_0x00010bfecf20();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = pppppuVar4;
          func_0x00010c0840e0();
          _objc_release(pppppuVar4);
          if (unaff_x24 == pppppuVar2) {
            func_0x00010c1677c0(unaff_d10);
            uStack_218 = *(undefined8 *)(puVar5 + 0x48);
            uStack_220 = *(undefined8 *)(puVar5 + 0x40);
            uStack_208 = *(undefined8 *)(puVar5 + 0x58);
            uStack_210 = *(undefined8 *)(puVar5 + 0x50);
            uStack_1f8 = *(undefined8 *)(puVar5 + 0x68);
            uStack_200 = *(undefined8 *)(puVar5 + 0x60);
            uStack_1e8 = *(undefined8 *)(puVar5 + 0x78);
            uStack_1f0 = *(undefined8 *)(puVar5 + 0x70);
            uStack_258 = *(undefined8 *)(puVar5 + 8);
            uStack_260 = *(undefined8 *)puVar5;
            uStack_248 = *(undefined8 *)(puVar5 + 0x18);
            uStack_250 = *(undefined8 *)(puVar5 + 0x10);
            uStack_238 = *(undefined8 *)(puVar5 + 0x28);
            uStack_240 = *(undefined8 *)(puVar5 + 0x20);
            uStack_228 = *(undefined8 *)(puVar5 + 0x38);
            uStack_230 = *(undefined8 *)(puVar5 + 0x30);
            dVar14 = 1.0;
            _CATransform3DScale(&uStack_1e0,unaff_d11,unaff_d11,0x3ff0000000000000,&uStack_260);
            uStack_218 = uStack_198;
            uStack_220 = uStack_1a0;
            uStack_208 = uStack_188;
            uStack_210 = uStack_190;
            uStack_1f8 = uStack_178;
            uStack_200 = uStack_180;
            uStack_1e8 = uStack_168;
            uStack_1f0 = uStack_170;
            uStack_258 = uStack_1d8;
            uStack_260 = uStack_1e0;
            uStack_248 = uStack_1c8;
            uStack_250 = uStack_1d0;
            dVar13 = dStack_1c0;
            param_2 = uStack_1b0;
LAB_10854a410:
            func_0x00010c219940(pppppuVar10);
          }
          else {
            pppppuVar4 = pppppuVar10;
            func_0x00010bfecf20();
            _objc_retainAutoreleasedReturnValue();
            unaff_x24 = pppppuVar4;
            func_0x00010c0840e0();
            _objc_release(pppppuVar4);
            if (unaff_x24 == pppppuVar9) {
              func_0x00010c1677c0(param_3,pppppuVar10);
              uStack_218 = *(undefined8 *)(puVar5 + 0x48);
              uStack_220 = *(undefined8 *)(puVar5 + 0x40);
              uStack_208 = *(undefined8 *)(puVar5 + 0x58);
              uStack_210 = *(undefined8 *)(puVar5 + 0x50);
              uStack_1f8 = *(undefined8 *)(puVar5 + 0x68);
              uStack_200 = *(undefined8 *)(puVar5 + 0x60);
              uStack_1e8 = *(undefined8 *)(puVar5 + 0x78);
              uStack_1f0 = *(undefined8 *)(puVar5 + 0x70);
              uStack_258 = *(undefined8 *)(puVar5 + 8);
              uStack_260 = *(undefined8 *)puVar5;
              uStack_248 = *(undefined8 *)(puVar5 + 0x18);
              uStack_250 = *(undefined8 *)(puVar5 + 0x10);
              uStack_238 = *(undefined8 *)(puVar5 + 0x28);
              uStack_240 = *(undefined8 *)(puVar5 + 0x20);
              uStack_228 = *(undefined8 *)(puVar5 + 0x38);
              uStack_230 = *(undefined8 *)(puVar5 + 0x30);
              dVar14 = 1.0;
              _CATransform3DScale(&uStack_2e0,param_1,param_1,0x3ff0000000000000,&uStack_260);
              uStack_218 = uStack_298;
              uStack_220 = uStack_2a0;
              uStack_208 = uStack_288;
              uStack_210 = uStack_290;
              uStack_1f8 = uStack_278;
              uStack_200 = uStack_280;
              uStack_1e8 = uStack_268;
              uStack_1f0 = uStack_270;
              uStack_258 = uStack_2d8;
              uStack_260 = uStack_2e0;
              uStack_248 = uStack_2c8;
              uStack_250 = uStack_2d0;
              dVar13 = dStack_2c0;
              param_2 = uStack_2b0;
              goto LAB_10854a410;
            }
          }
          pppppuVar12 = (undefined8 *****)((long)pppppuVar12 + 1);
        } while (pppppuVar3 != pppppuVar12);
        param_7 = &uStack_160;
        param_8 = auStack_110;
        param_9 = 0x10;
        pppppuVar3 = pppppuVar1;
        func_0x00010bf52a60();
        param_5 = (undefined8 *****)0x0;
      } while (pppppuVar3 != (undefined8 *****)0x0);
    }
    pppppuVar9 = pppppuVar1;
    _objc_release();
    dStack_328 = param_3;
    dStack_330 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppppuVar1);
    return pppppuVar1;
  }
  ___stack_chk_fail();
  pppppuVar3 = &ppppuStack_350;
  pcStack_2e8 = FUN_10854a498;
  dStack_340 = unaff_d11;
  dStack_338 = unaff_d10;
  ppppuStack_320 = unaff_x24;
  ppppuStack_318 = pppppuVar4;
  ppppuStack_310 = pppppuVar10;
  ppppuStack_308 = param_5;
  ppppuStack_300 = pppppuVar2;
  ppppuStack_2f8 = pppppuVar1;
  puStack_2f0 = &stack0xfffffffffffffff0;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar5 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_alloc_init(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
  func_0x00010c1f7ac0();
  func_0x00010c1c82c0(0,puVar5);
  func_0x00010c1c8300(0,puVar5);
  puStack_348 = PTR_PTR_1126fcc40;
  ppppuStack_350 = pppppuVar9;
  _objc_msgSendSuper2(dVar13,param_2,dVar14,param_4,&ppppuStack_350,
                      PTR_s_initWithFrame_collectionViewLayo_1125e29e0,puVar5);
  if (pppppuVar3 != (undefined8 *****)0x0) {
    _objc_storeWeak((undefined1 *)((long)pppppuVar3 + (long)_DAT_11277616c),param_7);
    puVar6 = param_8;
    func_0x00010bf51e00();
    uVar8 = *(undefined8 *)((long)pppppuVar3 + (long)_DAT_112776170);
    *(undefined1 **)((long)pppppuVar3 + (long)_DAT_112776170) = puVar6;
    _objc_release(uVar8);
    *(undefined8 *)((long)pppppuVar3 + (long)_DAT_112776174) = param_9;
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(pppppuVar3);
    _objc_release(puVar7);
    _objc_opt_class(PTR_PTR_1126d9fe0);
    func_0x00010c126000(pppppuVar3);
    func_0x00010c1f7b20(pppppuVar3);
    func_0x00010c21e900(pppppuVar3);
    func_0x00010c189840(pppppuVar3);
    func_0x00010c18b5e0(pppppuVar3);
    func_0x00010c2026e0(pppppuVar3);
    func_0x00010c2025c0(pppppuVar3);
    func_0x00010c167a00(pppppuVar3);
  }
  _objc_release(puVar5);
  _objc_release(param_8);
  _objc_release(param_7);
  return pppppuVar3;
}



/* Entry: 10854a498; end: 10854a667; -[SCSpectaclesExportLabelCollectionView initWithFrame:exportLabelsDelegate:viewModels:defaultType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10854a498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar2 = &uStack_70;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_alloc_init(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
  func_0x00010c1f7ac0();
  func_0x00010c1c82c0(0,puVar1);
  func_0x00010c1c8300(0,puVar1);
  puStack_68 = PTR_PTR_1126fcc40;
  uStack_70 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_70,
                      PTR_s_initWithFrame_collectionViewLayo_1125e29e0,puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar2 + (long)_DAT_11277616c),param_7);
    uVar3 = param_8;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)((long)puVar2 + (long)_DAT_112776170);
    *(undefined8 *)((long)puVar2 + (long)_DAT_112776170) = uVar3;
    _objc_release(uVar5);
    *(undefined8 *)((long)puVar2 + (long)_DAT_112776174) = param_9;
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2);
    _objc_release(puVar4);
    _objc_opt_class(PTR_PTR_1126d9fe0);
    func_0x00010c126000(puVar2);
    func_0x00010c1f7b20(puVar2);
    func_0x00010c21e900(puVar2);
    func_0x00010c189840(puVar2);
    func_0x00010c18b5e0(puVar2);
    func_0x00010c2026e0(puVar2);
    func_0x00010c2025c0(puVar2);
    func_0x00010c167a00(puVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar2;
}



/* Entry: 10854a668; end: 10854a7b3; -[SCSpectaclesExportLabelCollectionView collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10854a668(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  func_0x00010bf6e0c0(param_3,param_2,&PTR____CFConstantStringClassReference_110ee2198,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112776170);
  lVar1 = param_4;
  func_0x00010c142240(param_4);
  func_0x00010c0dfd40(uVar4,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c0d5060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf9d0c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = uVar4;
  func_0x00010beecec0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(param_3,param_2,uVar2);
  _objc_release(uVar2);
  lVar1 = param_4;
  func_0x00010c142240();
  _objc_release(param_4);
  if (lVar1 == *(long *)(param_1 + _DAT_112776174)) {
    uVar2 = param_3;
    func_0x00010bf9d0c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0x3ff0000000000000);
    _objc_release(uVar2);
  }
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10854a7b4; end: 10854a7c3; -[SCSpectaclesExportLabelCollectionView collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10854a7b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112776170),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10854a7c4; end: 10854a7cb; -[SCSpectaclesExportLabelCollectionView numberOfSectionsInCollectionView:] */

undefined8 FUN_10854a7c4(void)

{
  return 1;
}



/* Entry: 10854a7cc; end: 10854a863; -[SCSpectaclesExportLabelCollectionView collectionView:layout:sizeForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_10854a7cc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar1 = PTR_PTR_1126d9fe0;
  uVar3 = *(undefined8 *)(param_3 + _DAT_112776170);
  func_0x00010c142240(param_7);
  func_0x00010c0dfd40(uVar3,param_4,param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c0d5060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d3c0(puVar1,param_4,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar3);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10854a864; end: 10854a8bf; -[SCSpectaclesExportLabelCollectionView collectionView:didSelectItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10854a864(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11277616c;
  _objc_retain(param_4);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010c087580();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10854a8c0; end: 10854aabb; -[SCSpectaclesExportLabelCollectionView collectionView:layout:insetForSectionAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10854a8c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = (long)_DAT_112776170;
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bfb1920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d5060();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d660(uVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d5060();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 0x4024000000000000;
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d660(uVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bfb68e0(param_1);
  func_0x00010bfb68e0(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return 0;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_1 + _DAT_112776170,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11277616c);
  return uVar7;
}



/* Entry: 10854aabc; end: 10854aaf7; -[SCSpectaclesExportLabelCollectionView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10854aabc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112776170,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11277616c);
  return;
}


