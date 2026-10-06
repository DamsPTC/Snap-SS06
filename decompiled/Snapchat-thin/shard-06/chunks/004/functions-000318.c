/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104938538; end: 10493855f;  */

void FUN_104938538(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010493853c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x10))();
  return;
}



/* Entry: 104938560; end: 104938563;  */

void FUN_104938560(void)

{
  return;
}



/* Entry: 104938564; end: 104938613;  */

undefined1  [16] FUN_104938564(undefined8 param_1)

{
  undefined8 uVar1;
  
  __ss11_StringGutsV4growyySiF(0x49);
  __sSS6appendyySSF(0xd00000000000001f,0x800000010f21c070);
  uVar1 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF(param_1,0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar1);
  __sSS6appendyySSF(0xd000000000000028,0x800000010f21c090);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 104938614; end: 10493862b;  */

void FUN_104938614(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 10493862c; end: 1049386c3;  */

void FUN_10493862c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 1049386c4; end: 104938733; +[FBSDKBase64 initialize] */

void FUN_1049386c4(undefined *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126add10;
  func_0x00010bf39c40();
  if (puVar2 != param_1) {
    return;
  }
  puVar2 = PTR_PTR_1126add10;
  func_0x00010c0d8420();
  uVar1 = puRam000000011369ce10;
  puRam000000011369ce10 = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126add10;
  func_0x00010c0d8420();
  uVar1 = puRam000000011369ce18;
  puRam000000011369ce18 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104938734; end: 10493873f; +[FBSDKBase64 decodeAsData:] */

void FUN_104938734(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf66c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uRam000000011369ce10,PTR_s_decodeAsData__1125b74b8);
  return;
}



/* Entry: 104938740; end: 10493874b; +[FBSDKBase64 decodeAsString:] */

void FUN_104938740(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf66c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uRam000000011369ce10,PTR_s_decodeAsString__1125b74c0);
  return;
}



/* Entry: 10493874c; end: 104938757; +[FBSDKBase64 encodeString:] */

void FUN_10493874c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf93170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uRam000000011369ce18,PTR_s_encodeString__1125c2600);
  return;
}



/* Entry: 104938758; end: 1049387bf; +[FBSDKBase64 base64FromBase64Url:] */

void FUN_104938758(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c25cfc0(param_3,param_2,&PTR____CFConstantStringClassReference_110db3638,
                      &PTR____CFConstantStringClassReference_110dae918);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1049387c0; end: 104938863; -[FBSDKBase64 decodeAsData:] */

void FUN_1049387c0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain();
  if (param_3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c08fa60();
    uVar3 = param_3;
    if ((uVar1 & 3) != 0) {
      uVar2 = param_3;
      func_0x00010c08fa60(param_3);
      func_0x00010c25cf00(param_3,param_2,uVar2 + (4 - ((uint)uVar1 & 3)),
                          &PTR____CFConstantStringClassReference_110db9ab8,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
    }
    puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
    func_0x00010bff6b20();
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104938864; end: 1049388bf; -[FBSDKBase64 decodeAsString:] */

void FUN_104938864(long param_1)

{
  undefined *puVar1;
  
  func_0x00010bf66c40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c008340();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1049388c0; end: 1049389af; -[FBSDKBase64 encodeString:] */

void FUN_1049388c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf64920(param_3,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1049389b0; end: 104938b23; +[FBSDKBasicUtility JSONStringForObject:error:invalidObjectHandler:] */

void FUN_1049389b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  long param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain();
  if ((param_5 == 0) &&
     (puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,
     func_0x00010c082de0(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_3),
     ((ulong)puVar3 & 1) != 0)) {
LAB_104938a40:
    ppuVar1 = (undefined **)PTR_PTR_1126add78;
    func_0x00010bf64b60(PTR_PTR_1126add78,param_2,param_3,0,param_4);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_3;
    if (ppuVar1 == (undefined **)0x0) {
LAB_104938ae8:
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x00010c008340();
    }
  }
  else {
    func_0x00010bde92a0(param_1,param_2,param_3,param_5,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010c082de0(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_1);
    param_3 = param_1;
    if (((ulong)puVar3 & 1) != 0) goto LAB_104938a40;
    if (param_4 == (undefined8 *)0x0) {
      puVar3 = (undefined *)0x0;
      goto LAB_104938af4;
    }
    ppuVar1 = &PTR____CFConstantStringClassReference_110da05d8;
    _NSClassFromString();
    func_0x00010c0d8420();
    ppuVar2 = ppuVar1;
    func_0x00010c13b700();
    if ((int)ppuVar2 == 0) goto LAB_104938ae8;
    ppuVar2 = ppuVar1;
    func_0x00010c069b20(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110e3dd58,param_1,
                        &PTR____CFConstantStringClassReference_110da05f8,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    puVar3 = (undefined *)0x0;
    *param_4 = ppuVar2;
  }
  _objc_release(ppuVar1);
LAB_104938af4:
  _objc_release(param_5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104938b24; end: 104938bdf; +[FBSDKBasicUtility dictionary:setJSONStringForObject:forKey:error:] */

bool FUN_104938b24(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  bool bVar1;
  
  _objc_retain(param_3);
  _objc_retain();
  bVar1 = true;
  if ((param_4 != 0) && (param_5 != 0)) {
    func_0x00010bdc19c0(param_1,param_2,param_4,param_6,0);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = param_1 != 0;
    if (param_1 != 0) {
      func_0x00010bf71e80(PTR_PTR_1126add78,param_2,param_3,param_1,param_5);
    }
    _objc_release(param_1);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 104938be0; end: 104938f3b; +[FBSDKBasicUtility _convertObjectToJSONObject:invalidObjectHandler:stop:] */

void FUN_104938be0(undefined **param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
                  undefined1 *param_5)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined8 *puStack_120;
  undefined **ppuStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined *apuStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar10 = param_4;
  _objc_retain();
  _objc_retain();
  puStack_108 = &uStack_110;
  uStack_110 = 0;
  uStack_100 = 0x2020000000;
  uStack_f8 = 0;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
  ppuVar4 = param_3;
  func_0x00010c075f00();
  if (((ulong)ppuVar4 & 1) != 0) goto LAB_104938e80;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSNumber_1126ae570);
  ppuVar4 = param_3;
  func_0x00010c075f00();
  if (((ulong)ppuVar4 & 1) != 0) goto LAB_104938e80;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSURL_1126ae598);
  ppuVar4 = param_3;
  func_0x00010c075f00();
  if ((int)ppuVar4 == 0) {
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    ppuVar4 = param_3;
    func_0x00010c075f00();
    if ((int)ppuVar4 == 0) {
      func_0x00010bf39c40(PTR__OBJC_CLASS___NSArray_1126ae530);
      ppuVar4 = param_3;
      func_0x00010c075f00();
      if ((int)ppuVar4 == 0) {
        ppuVar4 = param_4;
        (*(code *)param_4[2])(param_4,param_3,param_5);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_104938e78;
      }
      ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010c0d8420();
      _objc_retain();
      ppuVar10 = apuStack_f0;
      ppuVar5 = param_3;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (ppuVar11 = param_3, ppuVar5 != (undefined **)0x0) {
        ppuVar12 = (undefined **)0x0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(param_3);
          }
          ppuVar6 = param_1;
          func_0x00010bde92a0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar10 = ppuVar6;
          func_0x00010bf09f20(PTR_PTR_1126add78);
          bVar1 = *(byte *)(puStack_108 + 3);
          _objc_release(ppuVar6);
          if ((bVar1 & 1) != 0) goto LAB_104938e70;
          ppuVar12 = (undefined **)((long)ppuVar12 + 1);
        } while (ppuVar5 != ppuVar12);
        ppuVar10 = apuStack_f0;
        ppuVar5 = param_3;
        func_0x00010bf52a60();
      }
    }
    else {
      ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010c0d8420();
      puVar7 = PTR_PTR_1126add78;
      puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_148 = 0xc2000000;
      pcStack_140 = FUN_104938f3c;
      puStack_138 = &UNK_1107b8ee8;
      _objc_retain();
      ppuVar5 = param_4;
      ppuStack_130 = ppuVar4;
      ppuStack_118 = param_1;
      _objc_retain();
      puStack_120 = &uStack_110;
      ppuVar10 = &puStack_150;
      ppuStack_128 = ppuVar5;
      func_0x00010bf71e40(puVar7);
      _objc_retain();
      _objc_release(param_3);
      _objc_release(ppuStack_128);
      param_3 = ppuVar4;
      ppuVar11 = ppuStack_130;
    }
LAB_104938e70:
    _objc_release(ppuVar11);
  }
  else {
    ppuVar4 = param_3;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
  }
LAB_104938e78:
  _objc_release(param_3);
  param_3 = ppuVar4;
LAB_104938e80:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = *(undefined1 *)(puStack_108 + 3);
  }
  __Block_object_dispose(&uStack_110,8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
    return;
  }
  ___stack_chk_fail();
  uVar9 = 8;
  __Block_object_dispose(&uStack_110,8);
  __Unwind_Resume();
  puVar3 = PTR_PTR_1126add78;
  puVar7 = param_4[7];
  _objc_retain(uVar9);
  func_0x00010bde92a0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126add78;
  func_0x00010bf3f0e0(PTR_PTR_1126add78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  func_0x00010bf71e80(puVar3);
  _objc_release(puVar8);
  _objc_release(puVar7);
  if (*(char *)(*(long *)(param_4[6] + 8) + 0x18) == '\x01') {
    *(undefined1 *)ppuVar10 = 1;
  }
  return;
}



/* Entry: 104938f3c; end: 10493901b;  */

void FUN_104938f3c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126add78;
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_2);
  func_0x00010bde92a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126add78;
  func_0x00010bf3f0e0(PTR_PTR_1126add78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bf71e80(puVar1);
  _objc_release(puVar3);
  _objc_release(uVar2);
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) == '\x01') {
    *param_4 = 1;
  }
  return;
}



/* Entry: 10493901c; end: 1049390b3; +[FBSDKBasicUtility objectForJSONString:error:] */

void FUN_10493901c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126add78;
  func_0x00010c25d860();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (puVar1 == (undefined *)0x0) {
    puVar2 = (undefined *)0x0;
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    puVar2 = PTR_PTR_1126add78;
    func_0x00010bdc1900(PTR_PTR_1126add78,param_2,puVar1,4,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1049390b4; end: 1049393c3; +[FBSDKBasicUtility queryStringWithDictionary:error:invalidObjectHandler:] */

undefined *
FUN_1049390b4(undefined *param_1,undefined *param_2,long param_3,undefined8 *param_4,
             undefined *param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  bool bVar9;
  undefined *puVar10;
  byte abStack_f1 [129];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c0d8420();
  if (param_3 != 0) {
    lVar2 = param_3;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0d3c80();
    _objc_release(lVar2);
    puVar10 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfae5e0(lVar3);
    _objc_release(puVar10);
    func_0x00010c246be0(lVar3);
    abStack_f1[0] = 0;
    _objc_retain();
    lVar4 = lVar3;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    if (lVar4 != 0) {
      bVar9 = false;
      do {
        lVar8 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar3);
          }
          lVar5 = param_3;
          func_0x00010c0e00e0(param_3);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = param_1;
          func_0x00010bf51480();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar5);
          func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
          puVar6 = puVar10;
          func_0x00010c075f00();
          puVar7 = puVar10;
          if ((int)puVar6 != 0) {
            puVar7 = param_1;
            func_0x00010bdc2e20();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar10);
          }
          puVar10 = puVar7;
          if (param_5 != (undefined *)0x0) {
            func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
            puVar6 = puVar7;
            func_0x00010c075f00();
            if (((ulong)puVar6 & 1) == 0) {
              puVar10 = param_5;
              param_2 = puVar7;
              (**(code **)(param_5 + 0x10))(param_5,puVar7,abStack_f1);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar7);
              if ((abStack_f1[0] & 1) != 0) {
                _objc_release(puVar10);
                goto LAB_104939328;
              }
            }
          }
          if (puVar10 != (undefined *)0x0) {
            if (bVar9) {
              func_0x00010bf070e0(puVar1);
            }
            func_0x00010bf06ba0(puVar1);
            bVar9 = true;
          }
          _objc_release(puVar10);
          lVar8 = lVar8 + 1;
        } while (lVar4 != lVar8);
        lVar4 = lVar3;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
LAB_104939328:
    _objc_release(lVar3);
    _objc_release(lVar3);
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
  }
  puVar10 = puVar1;
  func_0x00010c08fa60();
  if (puVar10 == (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = puVar1;
    func_0x00010bf51e00(puVar1);
  }
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_retain(param_2);
    func_0x00010bf39c40(puVar1);
    puVar1 = param_2;
    func_0x00010c075f00(param_2);
    _objc_release(param_2);
    return puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return puVar10;
}



/* Entry: 1049393c4; end: 104939413;  */

undefined8 FUN_1049393c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_2);
  func_0x00010bf39c40(puVar1);
  uVar2 = param_2;
  func_0x00010c075f00(param_2);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 104939414; end: 1049394a7; +[FBSDKBasicUtility convertRequestValue:] */

void FUN_104939414(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar2 = param_3;
  func_0x00010c075f00(param_3,param_2,puVar1);
  uVar3 = param_3;
  if ((int)uVar2 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSURL_1126ae598);
    uVar2 = param_3;
    func_0x00010c075f00(param_3,param_2,puVar1);
    if ((int)uVar2 == 0) goto LAB_104939498;
    func_0x00010beec820(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c25d700(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
  param_3 = uVar3;
LAB_104939498:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1049394a8; end: 1049394d7; +[FBSDKBasicUtility URLEncode:] */

void FUN_1049394a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _CFURLCreateStringByAddingPercentEscapes
            (0,param_3,0,&PTR____CFConstantStringClassReference_110da0618,0x8000100);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1049394d8; end: 1049396fb; +[FBSDKBasicUtility dictionaryWithQueryString:] */

void FUN_1049394d8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined **ppuVar10;
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
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010c0d8420();
  lVar2 = param_3;
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar7 = &uStack_130;
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar2);
        }
        ppuVar10 = *(undefined ***)(lStack_128 + lVar8 * 8);
        ppuVar4 = ppuVar10;
        func_0x00010c08fa60();
        if (ppuVar4 != (undefined **)0x0) {
          ppuVar4 = ppuVar10;
          func_0x00010c11f420();
          if (ppuVar4 == (undefined **)0x7fffffffffffffff) {
            _objc_retain(ppuVar10);
            ppuVar4 = ppuVar10;
            ppuVar10 = &PTR____CFConstantStringClassReference_110daafd8;
          }
          else {
            ppuVar4 = ppuVar10;
            func_0x00010c260c20(ppuVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c260c00(ppuVar10);
            _objc_retainAutoreleasedReturnValue();
          }
          lVar5 = param_1;
          func_0x00010bdc2e00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar4);
          lVar6 = param_1;
          func_0x00010bdc2e00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar10);
          if (lVar5 != 0 && lVar6 != 0) {
            func_0x00010bf71e80(PTR_PTR_1126add78);
          }
          _objc_release(lVar6);
          _objc_release(lVar5);
        }
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      puVar7 = &uStack_130;
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    func_0x00010c25cfc0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar7;
    func_0x00010c25d020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1049396fc; end: 104939757; +[FBSDKBasicUtility URLDecode:] */

void FUN_1049396fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c25cfc0(param_3,param_2,&PTR____CFConstantStringClassReference_110dae918,
                      &PTR____CFConstantStringClassReference_110db2d98);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c25d020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104939758; end: 1049398df; +[FBSDKBasicUtility gzip:] */

void FUN_104939758(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 *puStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined1 auStack_448 [1024];
  long lStack_48;
  
  iVar1 = (int)&puStack_4c0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar3 = param_3;
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  puVar4 = param_3;
  func_0x00010c08fa60();
  puVar5 = (undefined *)0x0;
  if ((puVar3 != (undefined *)0x0) && ((undefined *)0xffffffff00000000 < puVar4 + -0x100000000)) {
    uStack_468 = 0;
    uStack_470 = 0;
    uStack_458 = 0;
    uStack_460 = 0;
    uStack_488 = 0;
    uStack_490 = 0;
    uStack_478 = 0;
    uStack_480 = 0;
    puStack_4a8 = (undefined1 *)0x0;
    uStack_4b0 = 0;
    uStack_498 = 0;
    uStack_4a0 = 0;
    uStack_4b8 = 0;
    puStack_4c0 = (undefined *)0x0;
    _deflateInit2_(&puStack_4c0,0xffffffff,8,0x1f,8,0,&UNK_10f45dced,0x70);
    if (iVar1 == 0) {
      uStack_4b8 = CONCAT44(uStack_4b8._4_4_,(int)puVar4);
      puVar4 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
      puStack_4c0 = puVar3;
      func_0x00010bf64a60();
      _objc_retainAutoreleasedReturnValue();
      do {
        uStack_4a0 = CONCAT44(uStack_4a0._4_4_,0x400);
        puStack_4a8 = auStack_448;
        uVar2 = (uint)&puStack_4c0;
        _deflate(&puStack_4c0,4);
        if (1 < uVar2) {
          _deflateEnd(&puStack_4c0);
          puVar5 = (undefined *)0x0;
          goto LAB_104939898;
        }
        if ((int)uStack_4a0 != 0x400) {
          func_0x00010bf06a40(puVar4);
        }
      } while (uVar2 == 0);
      _deflateEnd(&puStack_4c0);
      puVar5 = puVar4;
      _objc_retain();
LAB_104939898:
      _objc_release(puVar4);
    }
    else {
      puVar5 = (undefined *)0x0;
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar5 = param_3;
    func_0x00010bf39c40();
    func_0x00010c13ed40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar5 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSUUID_1126b0270;
      func_0x00010bdc3540();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bdc3580();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25d9e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar4);
      func_0x00010c0f9f60(param_3);
      puVar5 = puVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1049398e0; end: 104939993; +[FBSDKBasicUtility anonymousID] */

void FUN_1049398e0(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = param_1;
  func_0x00010bf39c40();
  func_0x00010c13ed40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    func_0x00010bdc3540();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110da0638);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    func_0x00010c0f9f60(param_1,param_2,puVar3);
    puVar1 = puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104939994; end: 104939a43; +[FBSDKBasicUtility retrievePersistedAnonymousID] */

void FUN_104939994(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x00010bf39c40();
  func_0x00010c0fa3c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c004040();
  puVar2 = PTR_PTR_1126add58;
  func_0x00010c0dff00(PTR_PTR_1126add58,param_2,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104939a44; end: 104939acb; +[FBSDKBasicUtility persistenceFilePath:] */

void FUN_104939a44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = 5;
  _NSSearchPathForDirectoriesInDomains(5,1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c25ce00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104939acc; end: 104939bdb; +[FBSDKBasicUtility persistAnonymousID:] */

undefined * FUN_104939acc(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  byte *unaff_x23;
  undefined8 unaff_x24;
  long lVar16;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  byte *pbStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  ulong uStack_c0;
  byte abStack_b8 [32];
  long lStack_98;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110da05b8;
  uStack_40 = param_3;
  _objc_retain(param_3);
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = param_1;
  func_0x00010bdc19c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf39c40();
  func_0x00010c0fa3c0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = 1;
  uVar13 = 1;
  puVar3 = param_1;
  func_0x00010c2be520(puVar2);
  _objc_release(param_1);
  _objc_release(puVar2);
  puVar15 = puVar1;
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar15;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_104939bdc;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_retain();
  ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSData_1126ae778);
  puVar15 = puVar3;
  func_0x00010c075f00();
  if ((int)puVar15 == 0) {
    ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar15 = puVar3;
    func_0x00010c075f00();
    if ((int)puVar15 != 0) {
      ppuVar11 = (undefined **)0x4;
      puVar1 = puVar3;
      func_0x00010bf64920();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104939c68;
    }
  }
  else {
    puVar1 = puVar3;
    _objc_retain();
LAB_104939c68:
    if (puVar1 != (undefined *)0x0) {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bf25f00();
      puVar15 = puVar1;
      func_0x00010c08fa60(puVar1);
      unaff_x23 = abStack_b8;
      _CC_SHA256(puVar2,puVar15,abStack_b8);
      puVar2 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
      func_0x00010c25d900();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = 0;
      do {
        uStack_c0 = (ulong)unaff_x23[lVar16];
        ppuVar11 = &PTR____CFConstantStringClassReference_110e18c58;
        func_0x00010bf06ba0(puVar2);
        lVar16 = lVar16 + 1;
      } while (lVar16 != 0x20);
      puVar15 = puVar2;
      func_0x00010bf51e00();
      _objc_release(puVar2);
      _objc_release(puVar1);
      unaff_x24 = 0x20;
      goto LAB_104939d08;
    }
  }
  puVar15 = (undefined *)0x0;
LAB_104939d08:
  puVar4 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
    return puVar15;
  }
  ___stack_chk_fail();
  ppuVar7 = &puStack_110;
  pcStack_c8 = FUN_104939d48;
  ppuVar5 = ppuVar11;
  uStack_100 = unaff_x24;
  pbStack_f8 = unaff_x23;
  puStack_f0 = puVar15;
  puStack_e8 = puVar2;
  puStack_e0 = puVar1;
  puStack_d8 = puVar3;
  ppuStack_d0 = &puStack_60;
  _objc_retain(ppuVar11);
  uVar6 = uVar12;
  _objc_retain(uVar12);
  puStack_108 = PTR_PTR_1126e32a0;
  puStack_110 = puVar4;
  _objc_msgSendSuper2(&puStack_110,PTR_s_init_1125d9248);
  if (ppuVar7 != (undefined **)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    func_0x00010c0d8420();
    uVar14 = *(undefined8 *)((long)ppuVar7 + 0x28);
    *(undefined **)((long)ppuVar7 + 0x28) = puVar1;
    _objc_release(uVar14);
    *(undefined1 *)((long)ppuVar7 + 8) = 1;
    _objc_storeStrong((undefined1 *)((long)ppuVar7 + 0x10),ppuVar11);
    _objc_storeStrong((undefined1 *)((long)ppuVar7 + 0x20),uVar12);
    puVar8 = (undefined1 *)((long)ppuVar7 + 0x18);
    _objc_storeStrong(puVar8,uVar13);
    _NSTemporaryDirectory();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c25ce00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    uVar10 = *(ulong *)((long)ppuVar7 + 0x10);
    func_0x00010bfa1640();
    if ((uVar10 & 1) == 0) {
      func_0x00010bfa15e0(*(undefined8 *)((long)ppuVar7 + 0x10));
    }
    puVar8 = puRam000000011369ce28;
    puRam000000011369ce28 = puVar9;
    _objc_retain(puVar9);
    _objc_release(puVar8);
    puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    func_0x00010bdc3540();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar15 = puVar2;
    func_0x00010c25cfc0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puRam000000011369ce20;
    puRam000000011369ce20 = puVar15;
    _objc_release(puVar1);
    _objc_release(puVar9);
    _objc_release(puVar2);
  }
  _objc_release(uVar6);
  _objc_release(ppuVar5);
  return (undefined *)ppuVar7;
}



/* Entry: 104939bdc; end: 104939d47; +[FBSDKBasicUtility SHA256Hash:] */

undefined1 *
FUN_104939bdc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined *unaff_x21;
  undefined *puVar12;
  byte *unaff_x23;
  undefined8 unaff_x24;
  long lVar13;
  long lStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  byte *pbStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  ulong uStack_70;
  byte abStack_68 [32];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSData_1126ae778);
  lVar13 = param_3;
  func_0x00010c075f00();
  if ((int)lVar13 == 0) {
    ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
    lVar13 = param_3;
    func_0x00010c075f00();
    if ((int)lVar13 != 0) {
      ppuVar10 = (undefined **)0x4;
      unaff_x20 = param_3;
      func_0x00010bf64920();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104939c68;
    }
  }
  else {
    unaff_x20 = param_3;
    _objc_retain();
LAB_104939c68:
    if (unaff_x20 != 0) {
      lVar13 = unaff_x20;
      _objc_retainAutorelease(unaff_x20);
      func_0x00010bf25f00();
      lVar1 = unaff_x20;
      func_0x00010c08fa60(unaff_x20);
      unaff_x23 = abStack_68;
      _CC_SHA256(lVar13,lVar1,abStack_68);
      unaff_x21 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
      func_0x00010c25d900();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = 0;
      do {
        uStack_70 = (ulong)unaff_x23[lVar13];
        ppuVar10 = &PTR____CFConstantStringClassReference_110e18c58;
        func_0x00010bf06ba0(unaff_x21);
        lVar13 = lVar13 + 1;
      } while (lVar13 != 0x20);
      puVar12 = unaff_x21;
      func_0x00010bf51e00();
      _objc_release(unaff_x21);
      _objc_release(unaff_x20);
      unaff_x24 = 0x20;
      goto LAB_104939d08;
    }
  }
  puVar12 = (undefined *)0x0;
LAB_104939d08:
  lVar13 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
    return puVar12;
  }
  ___stack_chk_fail();
  plVar4 = &lStack_c0;
  pcStack_78 = FUN_104939d48;
  ppuVar2 = ppuVar10;
  uStack_b0 = unaff_x24;
  pbStack_a8 = unaff_x23;
  puStack_a0 = puVar12;
  puStack_98 = unaff_x21;
  lStack_90 = unaff_x20;
  lStack_88 = param_3;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar10);
  uVar3 = param_4;
  _objc_retain(param_4);
  puStack_b8 = PTR_PTR_1126e32a0;
  lStack_c0 = lVar13;
  _objc_msgSendSuper2(&lStack_c0,PTR_s_init_1125d9248);
  if (plVar4 != (long *)0x0) {
    puVar12 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    func_0x00010c0d8420();
    uVar11 = *(undefined8 *)((long)plVar4 + 0x28);
    *(undefined **)((long)plVar4 + 0x28) = puVar12;
    _objc_release(uVar11);
    *(undefined1 *)((long)plVar4 + 8) = 1;
    _objc_storeStrong((undefined1 *)((long)plVar4 + 0x10),ppuVar10);
    _objc_storeStrong((undefined1 *)((long)plVar4 + 0x20),param_4);
    puVar5 = (undefined1 *)((long)plVar4 + 0x18);
    _objc_storeStrong(puVar5,param_5);
    _NSTemporaryDirectory();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c25ce00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    uVar7 = *(ulong *)((long)plVar4 + 0x10);
    func_0x00010bfa1640();
    if ((uVar7 & 1) == 0) {
      func_0x00010bfa15e0(*(undefined8 *)((long)plVar4 + 0x10));
    }
    puVar5 = puRam000000011369ce28;
    puRam000000011369ce28 = puVar6;
    _objc_retain(puVar6);
    _objc_release(puVar5);
    puVar12 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    func_0x00010bdc3540();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar12;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    puVar9 = puVar8;
    func_0x00010c25cfc0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puRam000000011369ce20;
    puRam000000011369ce20 = puVar9;
    _objc_release(puVar12);
    _objc_release(puVar6);
    _objc_release(puVar8);
  }
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  return (undefined1 *)plVar4;
}



/* Entry: 104939d48; end: 104939f0b; -[FBSDKCrashHandler initWithFileManager:bundle:fileDataExtractor:] */

undefined1 *
FUN_104939d48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar3 = &uStack_50;
  uVar1 = param_3;
  _objc_retain(param_3);
  uVar2 = param_4;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e32a0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    func_0x00010c0d8420();
    uVar10 = *(undefined8 *)((long)puVar3 + 0x28);
    *(undefined **)((long)puVar3 + 0x28) = puVar4;
    _objc_release(uVar10);
    *(undefined1 *)((long)puVar3 + 8) = 1;
    _objc_storeStrong((undefined1 *)((long)puVar3 + 0x10),param_3);
    _objc_storeStrong((undefined1 *)((long)puVar3 + 0x20),param_4);
    puVar5 = (undefined1 *)((long)puVar3 + 0x18);
    _objc_storeStrong(puVar5,param_5);
    _NSTemporaryDirectory();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c25ce00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    uVar7 = *(ulong *)((long)puVar3 + 0x10);
    func_0x00010bfa1640();
    if ((uVar7 & 1) == 0) {
      func_0x00010bfa15e0(*(undefined8 *)((long)puVar3 + 0x10));
    }
    puVar5 = puRam000000011369ce28;
    puRam000000011369ce28 = puVar6;
    _objc_retain(puVar6);
    _objc_release(puVar5);
    puVar4 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    func_0x00010bdc3540();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar9 = puVar8;
    func_0x00010c25cfc0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puRam000000011369ce20;
    puRam000000011369ce20 = puVar9;
    _objc_release(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar8);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  return (undefined1 *)puVar3;
}



/* Entry: 104939f0c; end: 104939f7f; +[FBSDKCrashHandler shared] */

void FUN_104939f0c(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_104939f80;
  puStack_20 = &UNK_110848088;
  uStack_18 = param_1;
  if (lRam000000011369ce30 != -1) {
    func_0x00010002a2fc(0x11369ce30,&puStack_38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369ce38);
  return;
}



/* Entry: 104939f80; end: 10493a01b;  */

void FUN_104939f80(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSData_1126ae778);
  func_0x00010c012ca0(uVar2,param_2,puVar3,puVar4,puVar5);
  uVar1 = uRam000000011369ce38;
  uRam000000011369ce38 = uVar2;
  _objc_release(uVar1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10493a01c; end: 10493a027; +[FBSDKCrashHandler getFBSDKVersion] */

undefined ** FUN_10493a01c(void)

{
  return &PTR____CFConstantStringClassReference_110da06d8;
}



/* Entry: 10493a028; end: 10493a05f; +[FBSDKCrashHandler disable] */

void FUN_10493a028(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126add88;
  func_0x00010c22b6a0(PTR_PTR_1126add88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7f9e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10493a060; end: 10493a0af; -[FBSDKCrashHandler disable] */

void FUN_10493a060(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010c1b52e0(param_1,param_2,0);
  puVar1 = PTR_PTR_1126add88;
  func_0x00010c22b6a0(PTR_PTR_1126add88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed12c0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1d0970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setObservers__112651c80,0);
  return;
}



/* Entry: 10493a0b0; end: 10493a103; +[FBSDKCrashHandler addObserver:] */

void FUN_10493a0b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126add88;
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa200();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10493a104; end: 10493a2ab; -[FBSDKCrashHandler addObserver:] */

void FUN_10493a104(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  ulong uStack_58;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010c081aa0();
  if (((int)uVar2 != 0) &&
     (uVar2 = param_1, func_0x00010be435e0(), puVar1 = PTR___NSConcreteStackBlock_11034bd00,
     (int)uVar2 != 0)) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10493a2ac;
    puStack_60 = &UNK_110842e18;
    uStack_58 = param_1;
    if (lRam000000011369ce40 != -1) {
      func_0x00010002a2fc(0x11369ce40,&puStack_78);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    _objc_sync_enter();
    uVar2 = param_1;
    func_0x00010c0e13e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf4b900();
    _objc_release(uVar2);
    if ((uVar4 & 1) == 0) {
      uVar2 = param_1;
      func_0x00010c0e13e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      _objc_release(uVar2);
      uVar5 = 0xffffffffffff8000;
      _dispatch_get_global_queue(0xffffffffffff8000,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_a8 = puVar1;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_10493a30c;
      puStack_90 = &UNK_110841f80;
      uVar6 = param_3;
      uStack_88 = param_1;
      _objc_retain();
      uStack_80 = uVar6;
      func_0x00010007380c(uVar5,&puStack_a8);
      _objc_release(uVar5);
      func_0x00010be9eda0(param_1);
      _objc_release(uStack_80);
    }
    _objc_sync_exit(uVar3);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10493a2ac; end: 10493a30b;  */

void FUN_10493a2ac(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126add88;
  func_0x00010c22b6a0(PTR_PTR_1126add88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be3cca0();
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be21b20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10493a30c; end: 10493a317;  */

void FUN_10493a30c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1b690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__generateMethodMapping__112564740,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10493a318; end: 10493a36b; +[FBSDKCrashHandler removeObserver:] */

void FUN_10493a318(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126add88;
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10493a36c; end: 10493a477; -[FBSDKCrashHandler removeObserver:] */

void FUN_10493a36c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  _objc_sync_enter();
  lVar2 = param_1;
  func_0x00010c0e13e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf4b900();
  _objc_release(lVar2);
  if ((int)lVar3 != 0) {
    lVar2 = param_1;
    func_0x00010c0e13e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360();
    _objc_release(lVar2);
    func_0x00010c0e13e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf529e0();
    _objc_release(param_1);
    if (lVar2 == 0) {
      puVar4 = PTR_PTR_1126add88;
      func_0x00010c22b6a0(PTR_PTR_1126add88);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bed12c0();
      _objc_release(puVar4);
    }
  }
  _objc_sync_exit(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10493a478; end: 10493a4af; +[FBSDKCrashHandler clearCrashReportFiles] */

void FUN_10493a478(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126add88;
  func_0x00010c22b6a0(PTR_PTR_1126add88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3b0c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10493a4b0; end: 10493a62b; -[FBSDKCrashHandler clearCrashReportFiles] */

void FUN_10493a4b0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = param_1;
  func_0x00010bface80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010bfa15c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar6 = uVar1;
  func_0x00010bf529e0();
  if (uVar6 != 0) {
    uVar6 = 0;
    do {
      puVar2 = PTR_PTR_1126add78;
      func_0x00010bf09f40(PTR_PTR_1126add78,param_2,uVar1,uVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bfda7c0();
      if ((int)puVar3 == 0) {
LAB_10493a5f0:
        _objc_release(puVar2);
      }
      else {
        puVar3 = PTR_PTR_1126add78;
        func_0x00010bf09f40(PTR_PTR_1126add78,param_2,uVar1,uVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf4bb00();
        _objc_release(puVar3);
        _objc_release(puVar2);
        puVar2 = puRam000000011369ce28;
        if (((ulong)puVar4 & 1) == 0) {
          puVar3 = PTR_PTR_1126add78;
          func_0x00010bf09f40(PTR_PTR_1126add78,param_2,uVar1,uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25ce00(puVar2,param_2,puVar3);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          uVar5 = param_1;
          func_0x00010bface80(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa1700();
          _objc_release(uVar5);
          goto LAB_10493a5f0;
        }
      }
      uVar6 = uVar6 + 1;
      uVar5 = uVar1;
      func_0x00010bf529e0();
    } while (uVar6 < uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10493a62c; end: 10493a667; -[FBSDKCrashHandler _installExceptionsHandler] */

void FUN_10493a62c(code *param_1)

{
  _NSGetUncaughtExceptionHandler();
  if (param_1 != FUN_10493a668) {
    pcRam000000011369ce48 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbc44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__NSSetUncaughtExceptionHandler_1103455e0)(FUN_10493a668);
    return;
  }
  return;
}



/* Entry: 10493a668; end: 10493a6c7;  */

void FUN_10493a668(undefined8 param_1)

{
  undefined *puVar1;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126add88;
  func_0x00010c22b6a0(PTR_PTR_1126add88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14a580();
  _objc_release(puVar1);
  if (pcRam000000011369ce48 != (code *)0x0) {
    (*pcRam000000011369ce48)(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10493a6c8; end: 10493a6ef; -[FBSDKCrashHandler _uninstallExceptionsHandler] */

void FUN_10493a6c8(void)

{
  _NSSetUncaughtExceptionHandler(uRam000000011369ce48);
  uRam000000011369ce48 = 0;
  return;
}



/* Entry: 10493a6f0; end: 10493a84f; -[FBSDKCrashHandler saveException:] */

void FUN_10493a6f0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puStack_1b0;
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [128];
  long lStack_e0;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  ulong uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uVar1 = param_3;
  func_0x00010bf282c0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar11 = param_3;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    if (uVar11 != 0) {
      uVar1 = param_3;
      func_0x00010bf282c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0a0c0(puVar2,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      ppuStack_68 = &PTR____CFConstantStringClassReference_110da0658;
      ppuStack_60 = &PTR____CFConstantStringClassReference_110daf558;
      uVar1 = param_3;
      puStack_58 = puVar2;
      func_0x00010c0d4f60();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      uStack_50 = uVar1;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_58,&ppuStack_68,
                          2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be98d60(param_1,param_2,puVar3);
      _objc_release(puVar3);
      _objc_release(uVar1);
      _objc_release(puVar2);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    lStack_e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar1 = param_3;
    func_0x00010be4cf80();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar1;
    func_0x00010bf529e0();
    if (uVar11 == 0) {
      func_0x00010bf3b0c0(param_3);
      puStack_1b0 = (undefined *)0x0;
    }
    else {
      puStack_1b0 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      lStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      plStack_190 = (long *)0x0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uVar11 = uVar1;
      _objc_retain();
      uVar4 = uVar11;
      func_0x00010bf52a60();
      if (uVar4 != 0) {
        lVar9 = *plStack_190;
        do {
          uVar10 = 0;
          do {
            if (*plStack_190 != lVar9) {
              _objc_enumerationMutation(uVar11);
            }
            uVar8 = *(undefined8 *)(lStack_198 + uVar10 * 8);
            uVar5 = uVar8;
            func_0x00010c0e00e0(uVar8,param_2,&PTR____CFConstantStringClassReference_110da0658);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = param_3;
            func_0x00010be4dcc0(param_3,param_2,uVar8);
            _objc_retainAutoreleasedReturnValue();
            if (uVar6 != 0) {
              puVar2 = PTR_PTR_1126add78;
              func_0x00010bdc1900(PTR_PTR_1126add78,param_2,uVar6,0,0);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR_PTR_1126add90;
              func_0x00010c265aa0(PTR_PTR_1126add90,param_2,uVar5,puVar2);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
              func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,uVar8);
              _objc_retainAutoreleasedReturnValue();
              if (puVar3 != (undefined *)0x0) {
                func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar7,puVar3,
                                    &PTR____CFConstantStringClassReference_110da0658);
                func_0x00010c12d3e0(puVar7,param_2,&PTR____CFConstantStringClassReference_110da0698)
                ;
                func_0x00010bf09f20(PTR_PTR_1126add78,param_2,puStack_1b0,puVar7);
              }
              _objc_release(puVar7);
              _objc_release(puVar3);
              _objc_release(puVar2);
            }
            _objc_release(uVar6);
            _objc_release(uVar5);
            uVar10 = uVar10 + 1;
          } while (uVar4 != uVar10);
          uVar4 = uVar11;
          func_0x00010bf52a60(uVar11,param_2,&uStack_1a0,auStack_160,0x10);
        } while (uVar4 != 0);
      }
      _objc_release(uVar11);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e0) {
      ___stack_chk_fail();
      uVar11 = uVar1;
      func_0x00010bface80();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar11;
      func_0x00010bfa15c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      uVar11 = uVar1;
      func_0x00010be1e1e0(uVar1,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar11;
      func_0x00010c246ca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010bf529e0();
      if (uVar11 != 0) {
        uVar11 = 0;
        do {
          puVar3 = PTR_PTR_1126add78;
          func_0x00010bf09f40(PTR_PTR_1126add78,param_2,uVar10,uVar11);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar1;
          func_0x00010be4cf60(uVar1,param_2,puVar3);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          if (uVar6 != 0) {
            puVar3 = PTR_PTR_1126add78;
            func_0x00010bdc1900(PTR_PTR_1126add78,param_2,uVar6,0,0);
            _objc_retainAutoreleasedReturnValue();
            if (puVar3 != (undefined *)0x0) {
              func_0x00010bf09f20(PTR_PTR_1126add78,param_2,puVar2,puVar3);
            }
            _objc_release(puVar3);
          }
          _objc_release(uVar6);
          uVar11 = uVar11 + 1;
          uVar6 = uVar10;
          func_0x00010bf529e0();
          if (4 < uVar6) {
            uVar6 = 5;
          }
        } while (uVar11 < uVar6);
      }
      puStack_1b0 = puVar2;
      func_0x00010bf51e00(puVar2);
      _objc_release(puVar2);
      _objc_release(uVar10);
      _objc_release(uVar4);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_1b0);
    return;
  }
  return;
}



/* Entry: 10493a850; end: 10493aa97; -[FBSDKCrashHandler _getProcessedCrashLogs] */

void FUN_10493a850(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puStack_140;
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
  uVar1 = param_1;
  func_0x00010be4cf80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar1;
  func_0x00010bf529e0();
  if (uVar11 == 0) {
    func_0x00010bf3b0c0(param_1);
    puStack_140 = (undefined *)0x0;
  }
  else {
    puStack_140 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
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
    uVar11 = uVar1;
    _objc_retain();
    uVar2 = uVar11;
    func_0x00010bf52a60();
    if (uVar2 != 0) {
      lVar9 = *plStack_120;
      do {
        uVar10 = 0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(uVar11);
          }
          uVar8 = *(undefined8 *)(lStack_128 + uVar10 * 8);
          uVar3 = uVar8;
          func_0x00010c0e00e0(uVar8,param_2,&PTR____CFConstantStringClassReference_110da0658);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = param_1;
          func_0x00010be4dcc0(param_1,param_2,uVar8);
          _objc_retainAutoreleasedReturnValue();
          if (uVar4 != 0) {
            puVar5 = PTR_PTR_1126add78;
            func_0x00010bdc1900(PTR_PTR_1126add78,param_2,uVar4,0,0);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR_PTR_1126add90;
            func_0x00010c265aa0(PTR_PTR_1126add90,param_2,uVar3,puVar5);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
            func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,uVar8);
            _objc_retainAutoreleasedReturnValue();
            if (puVar6 != (undefined *)0x0) {
              func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar7,puVar6,
                                  &PTR____CFConstantStringClassReference_110da0658);
              func_0x00010c12d3e0(puVar7,param_2,&PTR____CFConstantStringClassReference_110da0698);
              func_0x00010bf09f20(PTR_PTR_1126add78,param_2,puStack_140,puVar7);
            }
            _objc_release(puVar7);
            _objc_release(puVar6);
            _objc_release(puVar5);
          }
          _objc_release(uVar4);
          _objc_release(uVar3);
          uVar10 = uVar10 + 1;
        } while (uVar2 != uVar10);
        uVar2 = uVar11;
        func_0x00010bf52a60(uVar11,param_2,&uStack_130,auStack_f0,0x10);
      } while (uVar2 != 0);
    }
    _objc_release(uVar11);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    uVar11 = uVar1;
    func_0x00010bface80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar11;
    func_0x00010bfa15c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
    uVar11 = uVar1;
    func_0x00010be1e1e0(uVar1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar11;
    func_0x00010c246ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bf529e0();
    if (uVar11 != 0) {
      uVar11 = 0;
      do {
        puVar6 = PTR_PTR_1126add78;
        func_0x00010bf09f40(PTR_PTR_1126add78,param_2,uVar10,uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar1;
        func_0x00010be4cf60(uVar1,param_2,puVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        if (uVar4 != 0) {
          puVar6 = PTR_PTR_1126add78;
          func_0x00010bdc1900(PTR_PTR_1126add78,param_2,uVar4,0,0);
          _objc_retainAutoreleasedReturnValue();
          if (puVar6 != (undefined *)0x0) {
            func_0x00010bf09f20(PTR_PTR_1126add78,param_2,puVar5,puVar6);
          }
          _objc_release(puVar6);
        }
        _objc_release(uVar4);
        uVar11 = uVar11 + 1;
        uVar4 = uVar10;
        func_0x00010bf529e0();
        if (4 < uVar4) {
          uVar4 = 5;
        }
      } while (uVar11 < uVar4);
    }
    puStack_140 = puVar5;
    func_0x00010bf51e00(puVar5);
    _objc_release(puVar5);
    _objc_release(uVar10);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_140);
  return;
}



/* Entry: 10493aa98; end: 10493ac37; -[FBSDKCrashHandler _loadCrashLogs] */

void FUN_10493aa98(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = param_1;
  func_0x00010bface80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010bfa15c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar6 = param_1;
  func_0x00010be1e1e0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c246ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf529e0();
  if (uVar6 != 0) {
    uVar6 = 0;
    do {
      puVar4 = PTR_PTR_1126add78;
      func_0x00010bf09f40(PTR_PTR_1126add78,param_2,uVar2,uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_1;
      func_0x00010be4cf60(param_1,param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      if (uVar5 != 0) {
        puVar4 = PTR_PTR_1126add78;
        func_0x00010bdc1900(PTR_PTR_1126add78,param_2,uVar5,0,0);
        _objc_retainAutoreleasedReturnValue();
        if (puVar4 != (undefined *)0x0) {
          func_0x00010bf09f20(PTR_PTR_1126add78,param_2,puVar3,puVar4);
        }
        _objc_release(puVar4);
      }
      _objc_release(uVar5);
      uVar6 = uVar6 + 1;
      uVar5 = uVar2;
      func_0x00010bf529e0();
      if (4 < uVar5) {
        uVar5 = 5;
      }
    } while (uVar6 < uVar5);
  }
  puVar4 = puVar3;
  func_0x00010bf51e00(puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10493ac38; end: 10493ac43;  */

void FUN_10493ac38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf433b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_compare__1125ae690,param_2);
  return;
}



/* Entry: 10493ac44; end: 10493accf; -[FBSDKCrashHandler _loadCrashLog:] */

void FUN_10493ac44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bf63820(param_1);
  uVar1 = uRam000000011369ce28;
  func_0x00010c25ce00(uRam000000011369ce28,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfa1620(param_1,param_2,uVar1,1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10493acd0; end: 10493ae3b; -[FBSDKCrashHandler _getCrashLogFileNames:] */

void FUN_10493acd0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_7e0;
  long lStack_7d8;
  long *plStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined1 auStack_798 [128];
  long lStack_718;
  undefined1 auStack_698 [1024];
  undefined1 auStack_298 [256];
  long lStack_198;
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
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
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
  _objc_retain();
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar13 = *plStack_120;
    do {
      lVar15 = 0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(param_3);
        }
        uVar12 = *(undefined8 *)(lStack_128 + lVar15 * 8);
        uVar3 = uVar12;
        func_0x00010bfda7c0(uVar12,param_2,&PTR____CFConstantStringClassReference_110da0718);
        if (((int)uVar3 != 0) &&
           (uVar3 = uVar12,
           func_0x00010bfdcf80(uVar12,param_2,&PTR____CFConstantStringClassReference_110e6d9f8),
           (int)uVar3 != 0)) {
          func_0x00010bf09f20(PTR_PTR_1126add78,param_2,puVar1,uVar12);
        }
        lVar15 = lVar15 + 1;
      } while (lVar2 != lVar15);
      lVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf72020();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c25d9e0(puVar5,param_2,&PTR____CFConstantStringClassReference_110da0738);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar4,puVar5,
                        &PTR____CFConstantStringClassReference_110dc1558);
    func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar4,uRam000000011369ce20,
                        &PTR____CFConstantStringClassReference_110da0698);
    lVar2 = param_3;
    func_0x00010bf24980();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar2;
    func_0x00010bfa16c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf24980();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar2;
    func_0x00010bfa16c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar1 = PTR_PTR_1126add78;
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110f2ee78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar1,param_2,puVar4,puVar6,
                        &PTR____CFConstantStringClassReference_110e6d7b8);
    _objc_release(puVar6);
    _uname(auStack_698);
    puVar1 = PTR_PTR_1126add78;
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,auStack_298);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar1,param_2,puVar4,puVar6,
                        &PTR____CFConstantStringClassReference_110dd7ff8);
    _objc_release(puVar6);
    puVar1 = PTR_PTR_1126add78;
    puVar6 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
    func_0x00010bf5e640();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c267460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar1,param_2,puVar4,puVar7,
                        &PTR____CFConstantStringClassReference_110da0678);
    _objc_release(puVar7);
    _objc_release(puVar6);
    puVar1 = PTR_PTR_1126add78;
    func_0x00010bf64b60(PTR_PTR_1126add78,param_2,puVar4,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be21660(param_3,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2be500(puVar1,param_2,param_3,1);
    _objc_release(param_3);
    _objc_release(puVar1);
    _objc_release(lVar15);
    _objc_release(lVar13);
    _objc_release(puVar5);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
      return;
    }
    ___stack_chk_fail();
    puVar10 = &uStack_7e0;
    lStack_718 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_7d8 = 0;
    uStack_7e0 = 0;
    uStack_7c8 = 0;
    plStack_7d0 = (long *)0x0;
    uStack_7b8 = 0;
    uStack_7c0 = 0;
    uStack_7a8 = 0;
    uStack_7b0 = 0;
    lVar13 = *(long *)(puVar4 + 0x28);
    _objc_retain();
    puVar9 = auStack_798;
    lVar2 = lVar13;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar15 = *plStack_7d0;
      do {
        lVar14 = 0;
        do {
          if (*plStack_7d0 != lVar15) {
            _objc_enumerationMutation(lVar13);
          }
          lVar11 = *(long *)(lStack_7d8 + lVar14 * 8);
          if (lVar11 != 0) {
            lVar8 = lVar11;
            func_0x00010c1085a0(lVar11);
            _objc_retainAutoreleasedReturnValue();
            puVar1 = puVar4;
            func_0x00010be15fc0(puVar4,param_2,lVar8,*(undefined8 *)(puVar4 + 0x30));
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar8);
            func_0x00010bf79060(lVar11,param_2,puVar1);
            _objc_release(puVar1);
          }
          lVar14 = lVar14 + 1;
        } while (lVar2 != lVar14);
        puVar9 = auStack_798;
        lVar2 = lVar13;
        puVar10 = &uStack_7e0;
        func_0x00010bf52a60(lVar13,param_2,&uStack_7e0,puVar9,0x10);
      } while (lVar2 != 0);
    }
    _objc_release(lVar13);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_718) {
      return;
    }
    ___stack_chk_fail();
    puVar5 = PTR_PTR_1126add88;
    _objc_retain(puVar9);
    _objc_retain(puVar10);
    func_0x00010c22b6a0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar5;
    func_0x00010be15fc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar10);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10493ae3c; end: 10493b107; -[FBSDKCrashHandler _saveCrashLog:] */

void FUN_10493ae3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
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
  undefined1 auStack_668 [128];
  long lStack_5e8;
  undefined1 auStack_568 [1024];
  undefined1 auStack_168 [256];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf72020();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c25d9e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110da0738);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar1,puVar3,
                      &PTR____CFConstantStringClassReference_110dc1558);
  func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar1,uRam000000011369ce20,
                      &PTR____CFConstantStringClassReference_110da0698);
  uVar4 = param_1;
  func_0x00010bf24980();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfa16c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = param_1;
  func_0x00010bf24980();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bfa16c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126add78;
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110f2ee78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80(puVar2,param_2,puVar1,puVar7,&PTR____CFConstantStringClassReference_110e6d7b8)
  ;
  _objc_release(puVar7);
  _uname(auStack_568);
  puVar2 = PTR_PTR_1126add78;
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,auStack_168);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80(puVar2,param_2,puVar1,puVar7,&PTR____CFConstantStringClassReference_110dd7ff8)
  ;
  _objc_release(puVar7);
  puVar2 = PTR_PTR_1126add78;
  puVar7 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c267460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80(puVar2,param_2,puVar1,puVar8,&PTR____CFConstantStringClassReference_110da0678)
  ;
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar2 = PTR_PTR_1126add78;
  func_0x00010bf64b60(PTR_PTR_1126add78,param_2,puVar1,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be21660(param_1,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2be500(puVar2,param_2,param_1,1);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar13 = &uStack_6b0;
  lStack_5e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_6a8 = 0;
  uStack_6b0 = 0;
  uStack_698 = 0;
  plStack_6a0 = (long *)0x0;
  uStack_688 = 0;
  uStack_690 = 0;
  uStack_678 = 0;
  uStack_680 = 0;
  lVar9 = *(long *)(puVar1 + 0x28);
  _objc_retain();
  puVar12 = auStack_668;
  lVar10 = lVar9;
  func_0x00010bf52a60();
  if (lVar10 != 0) {
    lVar15 = *plStack_6a0;
    do {
      lVar16 = 0;
      do {
        if (*plStack_6a0 != lVar15) {
          _objc_enumerationMutation(lVar9);
        }
        lVar14 = *(long *)(lStack_6a8 + lVar16 * 8);
        if (lVar14 != 0) {
          lVar11 = lVar14;
          func_0x00010c1085a0(lVar14);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar1;
          func_0x00010be15fc0(puVar1,param_2,lVar11,*(undefined8 *)(puVar1 + 0x30));
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar11);
          func_0x00010bf79060(lVar14,param_2,puVar2);
          _objc_release(puVar2);
        }
        lVar16 = lVar16 + 1;
      } while (lVar10 != lVar16);
      puVar12 = auStack_668;
      lVar10 = lVar9;
      puVar13 = &uStack_6b0;
      func_0x00010bf52a60(lVar9,param_2,&uStack_6b0,puVar12,0x10);
    } while (lVar10 != 0);
  }
  _objc_release(lVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5e8) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126add88;
  _objc_retain(puVar12);
  _objc_retain(puVar13);
  func_0x00010c22b6a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010be15fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(puVar13);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10493b108; end: 10493b253; -[FBSDKCrashHandler _sendCrashLogs] */

void FUN_10493b108(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
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
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = *(long *)(param_1 + 0x28);
  _objc_retain();
  puVar5 = auStack_e8;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(lVar1);
        }
        lVar9 = *(long *)(lStack_128 + lVar11 * 8);
        if (lVar9 != 0) {
          lVar3 = lVar9;
          func_0x00010c1085a0(lVar9);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = param_1;
          func_0x00010be15fc0(param_1,param_2,lVar3,*(undefined8 *)(param_1 + 0x30));
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar3);
          func_0x00010bf79060(lVar9,param_2,lVar4);
          _objc_release(lVar4);
        }
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      puVar5 = auStack_e8;
      lVar2 = lVar1;
      puVar6 = &uStack_130;
      func_0x00010bf52a60(lVar1,param_2,&uStack_130,puVar5,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = PTR_PTR_1126add88;
  _objc_retain(puVar5);
  _objc_retain(puVar6);
  func_0x00010c22b6a0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010be15fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10493b254; end: 10493b2df; +[FBSDKCrashHandler _filterCrashLogs:processedCrashLogs:] */

void FUN_10493b254(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126add88;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010be15fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10493b2e0; end: 10493b473; -[FBSDKCrashHandler _filterCrashLogs:processedCrashLogs:] */

undefined * FUN_10493b2e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
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
  
  puVar6 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
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
  _objc_retain();
  puVar5 = auStack_f0;
  lVar2 = param_4;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_4);
        }
        uVar8 = *(undefined8 *)(lStack_128 + lVar10 * 8);
        uVar3 = uVar8;
        func_0x00010c0e00e0(uVar8,param_2,&PTR____CFConstantStringClassReference_110da0658);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_1;
        func_0x00010bdd9000(param_1,param_2,uVar3,param_3);
        if ((int)uVar4 != 0) {
          func_0x00010bf09f20(PTR_PTR_1126add78,param_2,puVar1,uVar8);
        }
        _objc_release(uVar3);
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      puVar5 = auStack_f0;
      lVar2 = param_4;
      puVar6 = &uStack_130;
      func_0x00010bf52a60(param_4,param_2,&uStack_130,puVar5,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126add88;
  _objc_retain(puVar5);
  _objc_retain(puVar6);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010bdd9000();
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar1);
  return puVar7;
}



/* Entry: 10493b474; end: 10493b4f7; +[FBSDKCrashHandler _callstack:containsPrefix:] */

undefined *
FUN_10493b474(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126add88;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bdd9000();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 10493b4f8; end: 10493b633; -[FBSDKCrashHandler _callstack:containsPrefix:] */

undefined * FUN_10493b4f8(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
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
  
  puVar3 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x00010bf446e0(param_3,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  _objc_retain();
  lVar1 = param_4;
  func_0x00010bf52a60();
  puVar4 = (undefined *)0x0;
  if (lVar1 != 0) {
    lVar5 = *plStack_100;
    do {
      lVar6 = 0;
      do {
        if (*plStack_100 != lVar5) {
          _objc_enumerationMutation(param_4);
        }
        puVar3 = *(undefined8 **)(lStack_108 + lVar6 * 8);
        uVar2 = param_3;
        func_0x00010bf4bb00(param_3,param_2,puVar3);
        if ((uVar2 & 1) != 0) {
          puVar4 = (undefined *)0x1;
          goto LAB_10493b5e4;
        }
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = param_4;
      puVar3 = &uStack_110;
      func_0x00010bf52a60(param_4,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
    puVar4 = (undefined *)0x0;
  }
LAB_10493b5e4:
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar4;
  }
  ___stack_chk_fail();
  puVar4 = PTR_PTR_1126add88;
  _objc_retain(puVar3);
  func_0x00010c22b6a0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be1b680();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return puVar4;
}



/* Entry: 10493b634; end: 10493b687; +[FBSDKCrashHandler _generateMethodMapping:] */

void FUN_10493b634(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126add88;
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be1b680();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10493b688; end: 10493b7e7; -[FBSDKCrashHandler _generateMethodMapping:] */

void FUN_10493b688(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  lVar1 = param_3;
  func_0x00010c1085a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
    func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126add90;
    lVar1 = param_3;
    func_0x00010c1085a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bfb73a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfc7960(puVar3,param_2,lVar1,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar4 = puVar3;
    func_0x00010bf529e0();
    if (puVar4 != (undefined *)0x0) {
      puVar4 = PTR_PTR_1126add78;
      func_0x00010bf64b60(PTR_PTR_1126add78,param_2,puVar3,0,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be21680(param_1,param_2,uRam000000011369ce20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2be500(puVar4,param_2,param_1,1);
      _objc_release(param_1);
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10493b7e8; end: 10493b857; +[FBSDKCrashHandler _loadLibData:] */

void FUN_10493b7e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126add88;
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010be4dcc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10493b858; end: 10493b923; -[FBSDKCrashHandler _loadLibData:] */

void FUN_10493b858(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSObject_1126b1300;
  puVar2 = PTR_PTR_1126add78;
  _objc_retain(param_3);
  func_0x00010bf39c40(puVar1);
  func_0x00010bf71e60(puVar2,param_2,param_3,&PTR____CFConstantStringClassReference_110da0698,puVar1
                     );
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = param_1;
  func_0x00010bf63820(param_1);
  func_0x00010be21680(param_1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa1620(uVar3,param_2,param_1,1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10493b924; end: 10493b993; +[FBSDKCrashHandler _getPathToCrashFile:] */

void FUN_10493b924(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126add88;
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010be21660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10493b994; end: 10493ba03; -[FBSDKCrashHandler _getPathToCrashFile:] */

void FUN_10493b994(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = uRam000000011369ce28;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110da0758);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ce00(uVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10493ba04; end: 10493ba73; +[FBSDKCrashHandler _getPathToLibDataFile:] */

void FUN_10493ba04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126add88;
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010be21680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10493ba74; end: 10493bae3; -[FBSDKCrashHandler _getPathToLibDataFile:] */

void FUN_10493ba74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = uRam000000011369ce28;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110da0778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ce00(uVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10493bae4; end: 10493bb27; +[FBSDKCrashHandler _isSafeToGenerateMapping] */

undefined * FUN_10493bae4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126add88;
  func_0x00010c22b6a0(PTR_PTR_1126add88);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010be435e0();
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 10493bb28; end: 10493bbe7; -[FBSDKCrashHandler _isSafeToGenerateMapping] */

undefined8 FUN_10493bb28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    uVar4 = 1;
  }
  else {
    uVar3 = param_1;
    func_0x00010bface80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be21680(param_1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfa1640(uVar3,param_2,param_1);
    _objc_release(param_1);
    _objc_release(uVar3);
  }
  _objc_release(puVar2);
  return uVar4;
}



/* Entry: 10493bbe8; end: 10493bbef; -[FBSDKCrashHandler isTurnedOn] */

undefined1 FUN_10493bbe8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10493bbf0; end: 10493bbf7; -[FBSDKCrashHandler setIsTurnedOn:] */

void FUN_10493bbf0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10493bbf8; end: 10493bbff; -[FBSDKCrashHandler fileManager] */

undefined8 FUN_10493bbf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10493bc00; end: 10493bc0b; -[FBSDKCrashHandler setFileManager:] */

void FUN_10493bc00(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 10493bc0c; end: 10493bc13; -[FBSDKCrashHandler dataExtractor] */

undefined8 FUN_10493bc0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10493bc14; end: 10493bc1f; -[FBSDKCrashHandler setDataExtractor:] */

void FUN_10493bc14(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 10493bc20; end: 10493bc27; -[FBSDKCrashHandler bundle] */

undefined8 FUN_10493bc20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10493bc28; end: 10493bc33; -[FBSDKCrashHandler setBundle:] */

void FUN_10493bc28(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 10493bc34; end: 10493bc3b; -[FBSDKCrashHandler observers] */

undefined8 FUN_10493bc34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10493bc3c; end: 10493bc47; -[FBSDKCrashHandler setObservers:] */

void FUN_10493bc3c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 10493bc48; end: 10493bc4f; -[FBSDKCrashHandler processedCrashLogs] */

undefined8 FUN_10493bc48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10493bc50; end: 10493bc5b; -[FBSDKCrashHandler setProcessedCrashLogs:] */

void FUN_10493bc50(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 10493bc5c; end: 10493bcaf; -[FBSDKCrashHandler .cxx_destruct] */

void FUN_10493bc5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10493bcb0; end: 10493bce3; +[FBSDKLibAnalyzer initialize] */

void FUN_10493bcb0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam000000011369ce50;
  puRam000000011369ce50 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10493bce4; end: 10493beab; +[FBSDKLibAnalyzer getMethodsTable:frameworks:] */

void FUN_10493bce4(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  long lVar16;
  undefined *puVar17;
  undefined1 *puVar18;
  long lVar19;
  long lVar20;
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
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  lVar16 = param_1;
  func_0x00010be1dc60(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain();
  puVar6 = auStack_e8;
  lVar2 = lVar16;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar19 = *plStack_120;
    do {
      lVar20 = 0;
      do {
        if (*plStack_120 != lVar19) {
          _objc_enumerationMutation(lVar16);
        }
        lVar3 = *(long *)(lStack_128 + lVar20 * 8);
        _NSClassFromString();
        if (lVar3 != 0) {
          func_0x00010bdc6440(param_1,param_2,lVar3,0);
          _object_getClass(lVar3);
          func_0x00010bdc6440(param_1,param_2,lVar3,1);
        }
        lVar20 = lVar20 + 1;
      } while (lVar2 != lVar20);
      puVar6 = auStack_e8;
      lVar2 = lVar16;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar16);
  puVar4 = puRam000000011369ce50;
  _objc_retain();
  _objc_sync_enter();
  puVar17 = puRam000000011369ce50;
  func_0x00010bf51e00();
  _objc_sync_exit(puVar4);
  _objc_release(puVar4);
  _objc_release(lVar16);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_sync_exit(puVar4);
    __Unwind_Resume();
    _objc_retain();
    _objc_retain();
    puVar17 = (undefined *)0x0;
    if ((puVar5 != (undefined8 *)0x0) && (puVar6 != (undefined1 *)0x0)) {
      puVar18 = puVar6;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar18;
      func_0x00010c246ca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar18);
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = (undefined1 *)puVar5;
      func_0x00010bf529e0();
      puVar17 = (undefined *)0x0;
      if (puVar18 != (undefined1 *)0x0) {
        bVar1 = false;
        lVar16 = 0;
        puVar18 = (undefined1 *)0x0;
        do {
          puVar17 = PTR_PTR_1126add78;
          func_0x00010bf09f40(PTR_PTR_1126add78,param_2,puVar5,puVar18);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = param_3;
          func_0x00010be1cd20(param_3,param_2,puVar17);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar17);
          uVar9 = uVar8;
          func_0x00010c08fa60();
          puVar17 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          if (9 < uVar9) {
            uVar9 = uVar8;
            func_0x00010c08fa60(uVar8);
            uVar10 = uVar8;
            func_0x00010c260c80(uVar8,param_2,uVar9 - 10,10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c25d9e0(puVar17,param_2,&PTR____CFConstantStringClassReference_110da0798);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar10);
            uVar9 = param_3;
            func_0x00010be9c740(param_3,param_2,puVar17,puVar7);
            _objc_retainAutoreleasedReturnValue();
            puVar12 = PTR_PTR_1126add78;
            if (uVar9 == 0) {
              lVar16 = lVar16 + 1;
            }
            else {
              if (lVar16 != 0) {
                puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                    &PTR____CFConstantStringClassReference_110da07b8);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf09f20(puVar12,param_2,puVar4,puVar11);
                _objc_release(puVar11);
              }
              puVar12 = PTR_PTR_1126add78;
              puVar11 = PTR__OBJC_CLASS___NSObject_1126b1300;
              func_0x00010bf39c40(PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x00010bf71e60(puVar12,param_2,puVar6,uVar9,puVar11);
              _objc_retainAutoreleasedReturnValue();
              puVar13 = puVar12;
              func_0x00010bf4bb00();
              puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              puVar11 = PTR_PTR_1126add78;
              if (((ulong)puVar13 & 1) != 0) {
                _objc_release(puVar12);
                _objc_release(uVar9);
                _objc_release(puVar17);
                _objc_release(uVar8);
                puVar17 = (undefined *)0x0;
                goto LAB_10493c1c4;
              }
              uVar10 = param_3;
              func_0x00010be20ec0(param_3,param_2,puVar17,uVar9);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c25d9e0(puVar14,param_2,&PTR____CFConstantStringClassReference_110dae518);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf09f20(puVar11,param_2,puVar4,puVar14);
              _objc_release(puVar14);
              _objc_release(uVar10);
              _objc_release(puVar12);
              lVar16 = 0;
              bVar1 = true;
            }
            _objc_release(uVar9);
            _objc_release(puVar17);
          }
          _objc_release(uVar8);
          puVar18 = puVar18 + 1;
          puVar15 = (undefined1 *)puVar5;
          func_0x00010bf529e0();
          puVar17 = PTR_PTR_1126add78;
        } while (puVar18 < puVar15);
        if (lVar16 != 0) {
          puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              &PTR____CFConstantStringClassReference_110da07b8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf09f20(puVar17,param_2,puVar4,puVar12);
          _objc_release(puVar12);
        }
        puVar17 = puVar4;
        if (!bVar1) {
          puVar17 = (undefined *)0x0;
        }
      }
      _objc_retain();
LAB_10493c1c4:
      _objc_release(puVar4);
      _objc_release(puVar7);
    }
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 10493beac; end: 10493c22f; +[FBSDKLibAnalyzer symbolicateCallstack:methodMapping:] */

void FUN_10493beac(ulong param_1,undefined8 param_2,ulong param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  ulong uVar13;
  
  _objc_retain();
  _objc_retain();
  puVar12 = (undefined *)0x0;
  if ((param_3 != 0) && (param_4 != 0)) {
    lVar11 = param_4;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar11;
    func_0x00010c246ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar11);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = param_3;
    func_0x00010bf529e0();
    puVar12 = (undefined *)0x0;
    if (uVar13 != 0) {
      bVar1 = false;
      lVar11 = 0;
      uVar13 = 0;
      do {
        puVar12 = PTR_PTR_1126add78;
        func_0x00010bf09f40(PTR_PTR_1126add78,param_2,param_3,uVar13);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_1;
        func_0x00010be1cd20(param_1,param_2,puVar12);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar12);
        uVar5 = uVar4;
        func_0x00010c08fa60();
        puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (9 < uVar5) {
          uVar5 = uVar4;
          func_0x00010c08fa60(uVar4);
          uVar6 = uVar4;
          func_0x00010c260c80(uVar4,param_2,uVar5 - 10,10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25d9e0(puVar12,param_2,&PTR____CFConstantStringClassReference_110da0798);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar6);
          uVar5 = param_1;
          func_0x00010be9c740(param_1,param_2,puVar12,lVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR_PTR_1126add78;
          if (uVar5 == 0) {
            lVar11 = lVar11 + 1;
          }
          else {
            if (lVar11 != 0) {
              puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                  &PTR____CFConstantStringClassReference_110da07b8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf09f20(puVar8,param_2,puVar3,puVar7);
              _objc_release(puVar7);
            }
            puVar8 = PTR_PTR_1126add78;
            puVar7 = PTR__OBJC_CLASS___NSObject_1126b1300;
            func_0x00010bf39c40(PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x00010bf71e60(puVar8,param_2,param_4,uVar5,puVar7);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar8;
            func_0x00010bf4bb00();
            puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            puVar7 = PTR_PTR_1126add78;
            if (((ulong)puVar9 & 1) != 0) {
              _objc_release(puVar8);
              _objc_release(uVar5);
              _objc_release(puVar12);
              _objc_release(uVar4);
              puVar12 = (undefined *)0x0;
              goto LAB_10493c1c4;
            }
            uVar6 = param_1;
            func_0x00010be20ec0(param_1,param_2,puVar12,uVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c25d9e0(puVar10,param_2,&PTR____CFConstantStringClassReference_110dae518);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf09f20(puVar7,param_2,puVar3,puVar10);
            _objc_release(puVar10);
            _objc_release(uVar6);
            _objc_release(puVar8);
            lVar11 = 0;
            bVar1 = true;
          }
          _objc_release(uVar5);
          _objc_release(puVar12);
        }
        _objc_release(uVar4);
        uVar13 = uVar13 + 1;
        uVar4 = param_3;
        func_0x00010bf529e0();
        puVar12 = PTR_PTR_1126add78;
      } while (uVar13 < uVar4);
      if (lVar11 != 0) {
        puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            &PTR____CFConstantStringClassReference_110da07b8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf09f20(puVar12,param_2,puVar3,puVar8);
        _objc_release(puVar8);
      }
      puVar12 = puVar3;
      if (!bVar1) {
        puVar12 = (undefined *)0x0;
      }
    }
    _objc_retain();
LAB_10493c1c4:
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 10493c230; end: 10493c237;  */

void FUN_10493c230(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf433b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_compare__1125ae690);
  return;
}



/* Entry: 10493c238; end: 10493c49b; +[FBSDKLibAnalyzer _getClassNames:frameworks:] */

void FUN_10493c238(undefined **param_1,undefined8 param_2,undefined **param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  undefined **ppuVar16;
  ulong uVar17;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  uint uStack_304;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined1 **ppuStack_2b0;
  code *pcStack_2a8;
  undefined **ppuStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  ulong *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  uint uStack_244;
  undefined1 auStack_240 [128];
  long lStack_1c0;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  uint uStack_f4;
  undefined *apuStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010c0d8420();
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010bf9ae80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = param_1;
  ppuVar6 = param_3;
  func_0x00010be1dc80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar16 = ppuVar4;
  func_0x00010befa160(ppuVar1);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  ppuVar5 = param_4;
  ppuStack_148 = param_4;
  func_0x00010bf529e0();
  if (ppuVar5 != (undefined **)0x0) {
    uStack_f4 = 0;
    ppuVar2 = (undefined **)&uStack_f4;
    ppuStack_150 = param_3;
    _objc_copyImageNames();
    if (uStack_f4 != 0) {
      unaff_x28 = (undefined **)0x0;
      do {
        ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25da80();
        _objc_retainAutoreleasedReturnValue();
        uStack_138 = 0;
        puStack_140 = (undefined *)0x0;
        uStack_128 = 0;
        plStack_130 = (long *)0x0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        ppuVar4 = ppuStack_148;
        _objc_retain();
        ppuVar16 = &puStack_140;
        ppuVar6 = apuStack_f0;
        ppuVar5 = ppuVar4;
        func_0x00010bf52a60();
        if (ppuVar5 != (undefined **)0x0) {
          lVar15 = *plStack_130;
          unaff_x26 = ppuVar5;
          do {
            param_4 = (undefined **)0x0;
            do {
              if (*plStack_130 != lVar15) {
                _objc_enumerationMutation(ppuVar4);
              }
              ppuVar16 = ppuVar3;
              func_0x00010bf4bb00();
              if ((int)ppuVar16 != 0) {
                unaff_x27 = param_1;
                func_0x00010be1dc80();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa160(ppuVar1);
                _objc_release(unaff_x27);
              }
              param_4 = (undefined **)((long)param_4 + 1);
            } while (unaff_x26 != param_4);
            ppuVar16 = &puStack_140;
            ppuVar6 = apuStack_f0;
            unaff_x26 = ppuVar4;
            func_0x00010bf52a60();
          } while (unaff_x26 != (undefined **)0x0);
        }
        _objc_release(ppuVar4);
        _objc_release(ppuVar3);
        unaff_x28 = (undefined **)((long)unaff_x28 + 1);
      } while (unaff_x28 < (undefined **)(ulong)uStack_f4);
    }
    _free(ppuVar2);
    param_3 = ppuStack_150;
  }
  ppuVar5 = ppuVar1;
  func_0x00010bf51e00();
  _objc_release(ppuVar1);
  _objc_release(ppuStack_148);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_158 = FUN_10493c49c;
    lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar7 = ppuVar16;
    ppuVar8 = ppuVar6;
    ppuStack_1b0 = unaff_x28;
    ppuStack_1a8 = unaff_x27;
    ppuStack_1a0 = unaff_x26;
    ppuStack_198 = ppuVar4;
    ppuStack_190 = ppuVar3;
    ppuStack_188 = ppuVar2;
    ppuStack_180 = ppuVar1;
    ppuStack_178 = ppuVar5;
    ppuStack_170 = param_4;
    ppuStack_168 = param_3;
    puStack_160 = &stack0xfffffffffffffff0;
    _objc_retain();
    iVar13 = (int)ppuVar8;
    _objc_retain();
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uStack_244 = 0;
    ppuVar5 = ppuVar16;
    _objc_retainAutorelease();
    ppuStack_298 = ppuVar16;
    func_0x00010bdc3520();
    _objc_copyClassNamesForImage();
    if (uStack_244 != 0) {
      unaff_x26 = (undefined **)0x0;
      unaff_x27 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
      do {
        ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25da80();
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar6;
        func_0x00010bf529e0();
        if (ppuVar7 == (undefined **)0x0) {
          ppuVar7 = ppuVar1;
          ppuVar8 = ppuVar2;
          func_0x00010bf09f20(PTR_PTR_1126add78);
          iVar13 = (int)ppuVar8;
        }
        else {
          uStack_268 = 0;
          uStack_270 = 0;
          uStack_258 = 0;
          uStack_260 = 0;
          uStack_288 = 0;
          puStack_290 = (undefined *)0x0;
          uStack_278 = 0;
          puStack_280 = (ulong *)0x0;
          ppuVar3 = ppuVar6;
          _objc_retain();
          ppuVar7 = &puStack_290;
          iVar13 = (int)auStack_240;
          ppuVar8 = ppuVar3;
          func_0x00010bf52a60();
          if (ppuVar8 != (undefined **)0x0) {
            ppuVar16 = (undefined **)*puStack_280;
            do {
              unaff_x28 = (undefined **)0x0;
              do {
                if ((undefined **)*puStack_280 != ppuVar16) {
                  _objc_enumerationMutation(ppuVar3);
                }
                ppuVar4 = ppuVar2;
                func_0x00010bfda7c0();
                if ((int)ppuVar4 != 0) {
                  ppuVar7 = ppuVar1;
                  ppuVar4 = ppuVar2;
                  func_0x00010bf09f20(PTR_PTR_1126add78);
                  iVar13 = (int)ppuVar4;
                  ppuVar4 = ppuVar8;
                  goto LAB_10493c5fc;
                }
                unaff_x28 = (undefined **)((long)unaff_x28 + 1);
              } while (ppuVar8 != unaff_x28);
              ppuVar7 = &puStack_290;
              iVar13 = (int)auStack_240;
              ppuVar8 = ppuVar3;
              func_0x00010bf52a60();
              ppuVar4 = ppuVar8;
            } while (ppuVar8 != (undefined **)0x0);
          }
LAB_10493c5fc:
          _objc_release(ppuVar3);
        }
        _objc_release(ppuVar2);
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (unaff_x26 < (undefined **)(ulong)uStack_244);
    }
    _free(ppuVar5);
    ppuVar5 = ppuVar1;
    func_0x00010bf51e00();
    _objc_release(ppuVar1);
    _objc_release(ppuVar6);
    _objc_release(ppuStack_298);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c0) {
      ___stack_chk_fail();
      pcStack_2a8 = FUN_10493c6a0;
      uStack_304 = 0;
      ppuVar8 = ppuVar7;
      ppuStack_300 = unaff_x28;
      ppuStack_2f8 = unaff_x27;
      ppuStack_2f0 = unaff_x26;
      ppuStack_2e8 = ppuVar4;
      ppuStack_2e0 = ppuVar3;
      ppuStack_2d8 = ppuVar2;
      ppuStack_2d0 = ppuVar5;
      ppuStack_2c8 = ppuVar1;
      ppuStack_2c0 = ppuVar6;
      ppuStack_2b8 = ppuVar16;
      ppuStack_2b0 = &puStack_160;
      _class_copyMethodList(ppuVar7,&uStack_304);
      ppuVar2 = &PTR____CFConstantStringClassReference_110dae918;
      if (iVar13 == 0) {
        ppuVar2 = &PTR____CFConstantStringClassReference_110db3638;
      }
      _objc_retain();
      uVar14 = (ulong)uStack_304;
      if (uStack_304 != 0) {
        uVar17 = 0;
        do {
          puVar9 = ppuVar8[uVar17];
          if (puVar9 != (undefined *)0x0) {
            _method_getName();
            _class_getMethodImplementation(ppuVar7,puVar9);
            puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c25d9e0();
            _objc_retainAutoreleasedReturnValue();
            puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            ppuVar16 = ppuVar7;
            _NSStringFromClass();
            _objc_retainAutoreleasedReturnValue();
            _NSStringFromSelector();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c25d9e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar9);
            _objc_release(ppuVar16);
            if ((puVar10 != (undefined *)0x0) && (puVar11 != (undefined *)0x0)) {
              uVar12 = uRam000000011369ce50;
              _objc_retain(uRam000000011369ce50);
              _objc_sync_enter();
              func_0x00010bf71e80(PTR_PTR_1126add78);
              _objc_sync_exit(uVar12);
              _objc_release(uVar12);
            }
            _objc_release(puVar11);
            _objc_release(puVar10);
            uVar14 = (ulong)uStack_304;
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar14);
      }
      _free(ppuVar8);
      _objc_release(ppuVar2);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 10493c49c; end: 10493c69f; +[FBSDKLibAnalyzer _getClassesFrom:prefixes:] */

void FUN_10493c49c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  undefined **unaff_x27;
  long unaff_x28;
  uint uStack_1b4;
  long lStack_1b0;
  undefined **ppuStack_1a8;
  ulong uStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  long lStack_170;
  undefined8 *puStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  uint uStack_f4;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_3;
  lVar6 = param_4;
  _objc_retain();
  iVar10 = (int)lVar6;
  _objc_retain();
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uStack_f4 = 0;
  puVar2 = param_3;
  _objc_retainAutorelease();
  puStack_148 = param_3;
  func_0x00010bdc3520();
  _objc_copyClassNamesForImage();
  if (uStack_f4 != 0) {
    unaff_x26 = 0;
    unaff_x27 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    do {
      unaff_x23 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_4;
      func_0x00010bf529e0();
      if (lVar6 == 0) {
        puVar9 = puVar1;
        puVar3 = unaff_x23;
        func_0x00010bf09f20(PTR_PTR_1126add78);
        iVar10 = (int)puVar3;
      }
      else {
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_128 = 0;
        puStack_130 = (undefined8 *)0x0;
        unaff_x24 = param_4;
        _objc_retain();
        puVar9 = &uStack_140;
        iVar10 = (int)auStack_f0;
        lVar6 = unaff_x24;
        func_0x00010bf52a60();
        if (lVar6 != 0) {
          param_3 = (undefined8 *)*puStack_130;
          do {
            unaff_x28 = 0;
            do {
              if ((undefined8 *)*puStack_130 != param_3) {
                _objc_enumerationMutation(unaff_x24);
              }
              puVar3 = unaff_x23;
              func_0x00010bfda7c0();
              if ((int)puVar3 != 0) {
                puVar9 = puVar1;
                puVar3 = unaff_x23;
                func_0x00010bf09f20(PTR_PTR_1126add78);
                iVar10 = (int)puVar3;
                unaff_x25 = lVar6;
                goto LAB_10493c5fc;
              }
              unaff_x28 = unaff_x28 + 1;
            } while (lVar6 != unaff_x28);
            puVar9 = &uStack_140;
            iVar10 = (int)auStack_f0;
            lVar6 = unaff_x24;
            func_0x00010bf52a60();
            unaff_x25 = lVar6;
          } while (lVar6 != 0);
        }
LAB_10493c5fc:
        _objc_release(unaff_x24);
      }
      _objc_release(unaff_x23);
      unaff_x26 = unaff_x26 + 1;
    } while (unaff_x26 < uStack_f4);
  }
  _free(puVar2);
  puVar2 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(puStack_148);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_158 = FUN_10493c6a0;
    uStack_1b4 = 0;
    puVar4 = puVar9;
    lStack_1b0 = unaff_x28;
    ppuStack_1a8 = unaff_x27;
    uStack_1a0 = unaff_x26;
    lStack_198 = unaff_x25;
    lStack_190 = unaff_x24;
    puStack_188 = unaff_x23;
    puStack_180 = puVar2;
    puStack_178 = puVar1;
    lStack_170 = param_4;
    puStack_168 = param_3;
    puStack_160 = &stack0xfffffffffffffff0;
    _class_copyMethodList(puVar9,&uStack_1b4);
    ppuVar5 = &PTR____CFConstantStringClassReference_110dae918;
    if (iVar10 == 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110db3638;
    }
    _objc_retain();
    uVar11 = (ulong)uStack_1b4;
    if (uStack_1b4 != 0) {
      uVar12 = 0;
      do {
        lVar6 = puVar4[uVar12];
        if (lVar6 != 0) {
          _method_getName();
          _class_getMethodImplementation(puVar9,lVar6);
          puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25d9e0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          puVar1 = puVar9;
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          _NSStringFromSelector();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25d9e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar6);
          _objc_release(puVar1);
          if ((puVar7 != (undefined *)0x0) && (puVar3 != (undefined *)0x0)) {
            uVar8 = uRam000000011369ce50;
            _objc_retain(uRam000000011369ce50);
            _objc_sync_enter();
            func_0x00010bf71e80(PTR_PTR_1126add78);
            _objc_sync_exit(uVar8);
            _objc_release(uVar8);
          }
          _objc_release(puVar3);
          _objc_release(puVar7);
          uVar11 = (ulong)uStack_1b4;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar11);
    }
    _free(puVar4);
    _objc_release(ppuVar5);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10493c6a0; end: 10493c853; +[FBSDKLibAnalyzer _addClass:isClassMethod:] */

void FUN_10493c6a0(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uStack_64;
  
  uStack_64 = 0;
  lVar1 = param_3;
  _class_copyMethodList(param_3,&uStack_64);
  ppuVar2 = &PTR____CFConstantStringClassReference_110dae918;
  if (param_4 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110db3638;
  }
  _objc_retain();
  uVar8 = (ulong)uStack_64;
  if (uStack_64 != 0) {
    uVar9 = 0;
    do {
      lVar3 = *(long *)(lVar1 + uVar9 * 8);
      if (lVar3 != 0) {
        _method_getName();
        _class_getMethodImplementation(param_3,lVar3);
        puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25d9e0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        lVar5 = param_3;
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        _NSStringFromSelector();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25d9e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        _objc_release(lVar5);
        if ((puVar4 != (undefined *)0x0) && (puVar6 != (undefined *)0x0)) {
          uVar7 = uRam000000011369ce50;
          _objc_retain(uRam000000011369ce50);
          _objc_sync_enter();
          func_0x00010bf71e80(PTR_PTR_1126add78);
          _objc_sync_exit(uVar7);
          _objc_release(uVar7);
        }
        _objc_release(puVar6);
        _objc_release(puVar4);
        uVar8 = (ulong)uStack_64;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar8);
  }
  _free(lVar1);
  _objc_release(ppuVar2);
  return;
}



/* Entry: 10493c854; end: 10493c9c7; +[FBSDKLibAnalyzer _getAddress:] */

void FUN_10493c854(undefined8 param_1,undefined8 param_2,long param_3,undefined1 *param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  long unaff_x22;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined *puStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  ppuVar4 = &puStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
  lVar7 = param_3;
  func_0x00010c075f00(param_3,param_2,ppuVar1);
  if ((int)lVar7 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    unaff_x20 = param_3;
    func_0x00010bf44740(param_3,param_2,&PTR____CFConstantStringClassReference_110db2d98);
    _objc_retainAutoreleasedReturnValue();
    lStack_118 = 0;
    puStack_120 = (undefined *)0x0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    _objc_retain();
    param_4 = auStack_d8;
    lVar7 = unaff_x20;
    func_0x00010bf52a60();
    if (lVar7 != 0) {
      lVar6 = *plStack_110;
      unaff_x22 = lVar7;
      do {
        lVar7 = 0;
        do {
          if (*plStack_110 != lVar6) {
            _objc_enumerationMutation(unaff_x20);
          }
          puVar5 = *(undefined **)(lStack_118 + lVar7 * 8);
          puVar2 = puVar5;
          ppuVar4 = &PTR____CFConstantStringClassReference_110f27e18;
          func_0x00010bf4bb00(puVar5,param_2,&PTR____CFConstantStringClassReference_110f27e18);
          if (((ulong)puVar2 & 1) != 0) {
            _objc_retain();
            goto LAB_10493c974;
          }
          lVar7 = lVar7 + 1;
        } while (unaff_x22 != lVar7);
        param_4 = auStack_d8;
        unaff_x22 = unaff_x20;
        ppuVar4 = &puStack_120;
        func_0x00010bf52a60(unaff_x20,param_2,&puStack_120,param_4,0x10);
      } while (unaff_x22 != 0);
    }
    puVar5 = (undefined *)0x0;
LAB_10493c974:
    _objc_release(unaff_x20);
    _objc_release(unaff_x20);
    ppuVar1 = ppuVar4;
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___NSScanner_1126b3380;
    pcStack_128 = FUN_10493c9c8;
    uStack_160 = 0;
    uStack_158 = 0;
    lStack_150 = unaff_x22;
    puStack_148 = puVar5;
    lStack_140 = unaff_x20;
    lStack_138 = param_3;
    puStack_130 = &stack0xfffffffffffffff0;
    _objc_retain(param_4);
    func_0x00010c14f820(puVar2,param_2,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14eca0();
    puVar3 = PTR__OBJC_CLASS___NSScanner_1126b3380;
    func_0x00010c14f820(PTR__OBJC_CLASS___NSScanner_1126b3380,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(puVar2);
    func_0x00010c14eca0(puVar3,param_2,&uStack_160);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110da0838);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10493c9c8; end: 10493ca97; +[FBSDKLibAnalyzer _getOffset:secondString:] */

void FUN_10493c9c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSScanner_1126b3380;
  uStack_40 = 0;
  uStack_38 = 0;
  _objc_retain(param_4);
  func_0x00010c14f820(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14eca0();
  puVar2 = PTR__OBJC_CLASS___NSScanner_1126b3380;
  func_0x00010c14f820(PTR__OBJC_CLASS___NSScanner_1126b3380,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
  func_0x00010c14eca0(puVar2,param_2,&uStack_40);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110da0838);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10493ca98; end: 10493cbfb; +[FBSDKLibAnalyzer _searchMethod:sortedAllAddress:] */

void FUN_10493ca98(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  _objc_retain();
  puVar5 = param_4;
  func_0x00010bf529e0();
  if (puVar5 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar1 = param_4;
    func_0x00010bfb1920(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126add78;
    puVar5 = param_4;
    func_0x00010bf529e0(param_4);
    func_0x00010bf09f40(puVar2,param_2,param_4,puVar5 + -1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bf433a0(param_3,param_2,puVar1);
    if ((lVar3 == -1) || (lVar3 = param_3, func_0x00010bf433a0(param_3,param_2,puVar2), lVar3 == 1))
    {
      puVar5 = (undefined *)0x0;
    }
    else {
      lVar3 = param_3;
      func_0x00010bf433a0(param_3,param_2,puVar1);
      puVar5 = puVar1;
      if ((lVar3 == 0) ||
         (lVar3 = param_3, func_0x00010bf433a0(param_3,param_2,puVar2), puVar5 = puVar2, lVar3 == 0)
         ) {
        _objc_retain(puVar5);
      }
      else {
        puVar5 = param_4;
        func_0x00010bf529e0(param_4);
        puVar4 = param_4;
        func_0x00010bfece00(param_4,param_2,param_3,0,puVar5 + -1,0x400,
                            &PTR___NSConcreteGlobalBlock_1107b8f90);
        puVar5 = PTR_PTR_1126add78;
        func_0x00010bf09f40(PTR_PTR_1126add78,param_2,param_4,puVar4 + -1);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10493cbfc; end: 10493cc03;  */

void FUN_10493cbfc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf433b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_compare__1125ae690);
  return;
}



/* Entry: 10493cc04; end: 10493cc77; +[FBSDKTypeUtility arrayValue:] */

void FUN_10493cc04(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  if (param_3 == 0) {
    param_1 = 0;
  }
  else {
    _objc_retain(param_3);
    func_0x00010bf39c40(puVar1);
    func_0x00010be65840(param_1,param_2,param_3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10493cc78; end: 10493cd0f; +[FBSDKTypeUtility array:objectAtIndex:] */

void FUN_10493cc78(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  
  _objc_retain();
  func_0x00010bf0a0a0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    uVar1 = param_3;
    func_0x00010bf529e0();
    _objc_release(param_1);
    if (param_4 < uVar1) {
      uVar1 = param_3;
      func_0x00010c0dfd40(param_3,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10493ccf4;
    }
  }
  uVar1 = 0;
LAB_10493ccf4:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10493cd10; end: 10493cd7b; +[FBSDKTypeUtility array:addObject:] */

void FUN_10493cd10(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain();
  if (param_4 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    uVar2 = param_3;
    func_0x00010c075f00(param_3,param_2,puVar1);
    if ((int)uVar2 != 0) {
      func_0x00010befa120(param_3,param_2,param_4);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10493cd7c; end: 10493ce17; +[FBSDKTypeUtility boolValue:] */

ulong FUN_10493cd7c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar2 = param_3;
  func_0x00010c075f00(param_3,param_2,puVar1);
  if ((int)uVar2 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar2 = param_3;
    func_0x00010c075f00(param_3,param_2,puVar1);
    if ((int)uVar2 == 0) {
      func_0x00010c0e0240(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = (ulong)(param_1 != 0);
      _objc_release();
      goto LAB_10493ce00;
    }
  }
  uVar2 = param_3;
  func_0x00010bf1f3c0(param_3);
LAB_10493ce00:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10493ce18; end: 10493ce8b; +[FBSDKTypeUtility dictionaryValue:] */

void FUN_10493ce18(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  if (param_3 == 0) {
    param_1 = 0;
  }
  else {
    _objc_retain(param_3);
    func_0x00010bf39c40(puVar1);
    func_0x00010be65840(param_1,param_2,param_3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10493ce8c; end: 10493cf2f; +[FBSDKTypeUtility dictionary:objectForKey:ofType:] */

void FUN_10493ce8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  func_0x00010bf71fc0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00010c075f00(uVar1,param_2,param_5);
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar1;
    _objc_retain(uVar1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10493cf30; end: 10493cf4b; +[FBSDKTypeUtility dictionary:setObject:forKey:] */

void FUN_10493cf30(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  if ((param_4 != 0) && (param_5 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_3,PTR_s_setObject_forKeyedSubscript__112651bb8,param_4,param_5);
    return;
  }
  return;
}


