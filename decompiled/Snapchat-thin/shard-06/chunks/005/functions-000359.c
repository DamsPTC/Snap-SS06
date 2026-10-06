/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104a0c280; end: 104a0c2e7; -[GTLRDateTime setHasTime:] */

void FUN_104a0c280(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010bfdd540();
  if ((param_3 == 0) || ((int)lVar1 != 0)) {
    if ((int)lVar1 == 0) {
      return;
    }
    if ((param_3 & 1) != 0) {
      return;
    }
    uVar2 = 0x7fffffffffffffff;
  }
  else {
    uVar2 = 0;
  }
  func_0x00010c1a9320(*(undefined8 *)(param_1 + 0x18),param_2,uVar2);
  func_0x00010c1c8500(*(undefined8 *)(param_1 + 0x18),param_2,uVar2);
  func_0x00010c1f8e00(*(undefined8 *)(param_1 + 0x18),param_2,uVar2);
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 104a0c2e8; end: 104a0c357; +[GTLRDateTime calendar] */

void FUN_104a0c2e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  _objc_alloc(PTR__OBJC_CLASS___NSCalendar_1126aeec8);
  func_0x00010bffabc0();
  puVar2 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x00010c26fda0(PTR__OBJC_CLASS___NSTimeZone_1126b7518,param_2,
                      &PTR____CFConstantStringClassReference_110da69f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c215860(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104a0c358; end: 104a0c35f; -[GTLRDateTime dateComponents] */

undefined8 FUN_104a0c358(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104a0c360; end: 104a0c367; -[GTLRDateTime setDateComponents:] */

void FUN_104a0c360(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 104a0c368; end: 104a0c36f; -[GTLRDateTime milliseconds] */

undefined8 FUN_104a0c368(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104a0c370; end: 104a0c377; -[GTLRDateTime setMilliseconds:] */

void FUN_104a0c370(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 104a0c378; end: 104a0c37f; -[GTLRDateTime offsetMinutes] */

undefined8 FUN_104a0c378(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104a0c380; end: 104a0c38b; -[GTLRDateTime setOffsetMinutes:] */

void FUN_104a0c380(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 104a0c38c; end: 104a0c3d3; -[GTLRDateTime .cxx_destruct] */

void FUN_104a0c38c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104a0c3d4; end: 104a0c443; +[GTLRDuration durationWithSeconds:nanos:] */

void FUN_104a0c3d4(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  if (param_3 < 0) {
    if (0 < param_4) goto LAB_104a0c438;
  }
  else if ((param_3 != 0) && (param_4 < 0)) goto LAB_104a0c438;
  if (0x88ca6c00 < param_4 + 0xc4653600U) {
    _objc_alloc();
    func_0x00010c042ca0();
  }
LAB_104a0c438:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a0c444; end: 104a0c67b; +[GTLRDuration durationWithJSONString:] */

void FUN_104a0c444(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  ulong uStack_50;
  long lStack_48;
  
  _objc_retain();
  uVar4 = param_3;
  func_0x00010c08fa60();
  if (uVar4 < 2) {
    uVar10 = 0;
    goto LAB_104a0c5b0;
  }
  if (lRam00000001136a0548 != -1) {
    func_0x000104a1cdd8();
  }
  puVar5 = PTR__OBJC_CLASS___NSScanner_1126b3380;
  func_0x00010c14f820(PTR__OBJC_CLASS___NSScanner_1126b3380,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17ace0();
  puVar6 = puVar5;
  func_0x00010c14f4e0(puVar5,param_2,&PTR____CFConstantStringClassReference_110db3638,0);
  puVar7 = puVar5;
  func_0x00010c14eda0(puVar5,param_2,&lStack_48);
  uVar10 = 0;
  if (((int)puVar7 != 0) && (-1 < lStack_48)) {
    puVar7 = puVar5;
    func_0x00010c14f4e0(puVar5,param_2,&PTR____CFConstantStringClassReference_110dad1f8,0);
    if ((int)puVar7 == 0) {
LAB_104a0c54c:
      puVar7 = puVar5;
      func_0x00010c14f4e0(puVar5,param_2,&PTR____CFConstantStringClassReference_110ecc238,0);
      if (((int)puVar7 != 0) && (puVar7 = puVar5, func_0x00010c06c740(), (int)puVar7 != 0)) {
        if ((int)puVar6 != 0) {
          lStack_48 = -lStack_48;
        }
        _objc_alloc(param_1);
        func_0x00010c042ca0();
        uVar10 = param_1;
        goto LAB_104a0c5a8;
      }
    }
    else {
      uStack_50 = 0;
      puVar7 = puVar5;
      func_0x00010c14ea40(puVar5,param_2,uRam00000001136a0540,&uStack_50);
      uVar4 = uStack_50;
      _objc_retain();
      if (((int)puVar7 != 0) && (uVar8 = uVar4, func_0x00010c08fa60(), uVar8 < 10)) {
        func_0x00010c067ec0(uVar4);
        uVar8 = uVar4;
        func_0x00010c08fa60();
        iVar3 = (int)uVar8;
        if (iVar3 < 9) {
          uVar2 = 8 - iVar3;
          auVar12._8_4_ = 1;
          auVar12._0_8_ = 0x100000001;
          auVar12._12_4_ = 1;
          iVar9 = 4;
          do {
            auVar13 = auVar12;
            auVar12._0_4_ = auVar13._0_4_ * 10;
            auVar12._4_4_ = auVar13._4_4_ * 10;
            auVar12._8_4_ = auVar13._8_4_ * 10;
            auVar12._12_4_ = auVar13._12_4_ * 10;
            iVar9 = iVar9 + -4;
          } while ((0xcU - iVar3 & 0xfffffffc) + iVar9 != 4);
          uVar1 = -iVar9;
          auVar11._0_4_ = -(uint)(uVar2 < uVar1);
          auVar11._4_4_ = -(uint)(uVar2 < (uVar1 | 1));
          auVar11._8_4_ = -(uint)(uVar2 < (uVar1 | 2));
          auVar11._12_4_ = -(uint)(uVar2 < (uVar1 | 3));
          auVar12 = auVar12 ^ (auVar12 ^ auVar13) & auVar11;
          NEON_ext(auVar12,auVar12,8,1);
        }
        _objc_release(uVar4);
        goto LAB_104a0c54c;
      }
      _objc_release(uVar4);
    }
    uVar10 = 0;
  }
LAB_104a0c5a8:
  _objc_release(puVar5);
LAB_104a0c5b0:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar10);
  return;
}



/* Entry: 104a0c67c; end: 104a0c6b7;  */

void FUN_104a0c67c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030,param_2,
                      &PTR____CFConstantStringClassReference_110dafed8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136a0540;
  puRam00000001136a0540 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104a0c6b8; end: 104a0c713; +[GTLRDuration durationWithTimeInterval:] */

void FUN_104a0c6b8(undefined8 param_1)

{
  undefined1 auStack_38 [8];
  
  _modf(auStack_38);
  _objc_alloc(param_1);
  func_0x00010c042ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a0c714; end: 104a0c723; -[GTLRDuration init] */

void FUN_104a0c714(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c042cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithSeconds_nanos_jsonString_1125ee528,0,0,0);
  return;
}



/* Entry: 104a0c724; end: 104a0c87f; -[GTLRDuration initWithSeconds:nanos:jsonString:] */

undefined8 *
FUN_104a0c724(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined *param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain();
  puStack_38 = PTR_PTR_1126e34a8;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = param_3;
    *(undefined4 *)(puVar1 + 1) = param_4;
    puVar2 = param_5;
    func_0x00010c08fa60();
    if (puVar2 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d9e0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar2 = param_5;
      func_0x00010bf51e00();
    }
    uVar3 = puVar1[3];
    puVar1[3] = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 104a0c880; end: 104a0c8c7; -[GTLRDuration timeInterval] */

double FUN_104a0c880(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c1552c0();
  func_0x00010c0d55a0(param_1);
  return (double)(int)param_1 / 1000000000.0 + (double)lVar1;
}



/* Entry: 104a0c8c8; end: 104a0c8cb; -[GTLRDuration copyWithZone:] */

void FUN_104a0c8c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104a0c8cc; end: 104a0c973; -[GTLRDuration isEqual:] */

bool FUN_104a0c8cc(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain();
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    puVar2 = PTR_PTR_1126ae100;
    func_0x00010bf39c40(PTR_PTR_1126ae100);
    lVar3 = param_3;
    func_0x00010c075f00(param_3,param_2,puVar2);
    if ((int)lVar3 != 0) {
      lVar3 = param_1;
      func_0x00010c1552c0();
      lVar4 = param_3;
      func_0x00010c1552c0();
      if (lVar3 == lVar4) {
        func_0x00010c0d55a0(param_1);
        lVar3 = param_3;
        func_0x00010c0d55a0(param_3);
        bVar1 = (int)param_1 == (int)lVar3;
        goto LAB_104a0c958;
      }
    }
    bVar1 = false;
  }
LAB_104a0c958:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 104a0c974; end: 104a0c9a7; -[GTLRDuration hash] */

long FUN_104a0c974(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c1552c0();
  func_0x00010c0d55a0(param_1);
  return lVar1 * 0xd + (long)(int)param_1;
}



/* Entry: 104a0c9a8; end: 104a0ca27; -[GTLRDuration description] */

void FUN_104a0c9a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40();
  func_0x00010c086000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110da6918);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104a0ca28; end: 104a0ca2f; -[GTLRDuration seconds] */

undefined8 FUN_104a0ca28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104a0ca30; end: 104a0ca37; -[GTLRDuration nanos] */

undefined4 FUN_104a0ca30(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 104a0ca38; end: 104a0ca3f; -[GTLRDuration jsonString] */

undefined8 FUN_104a0ca38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104a0ca40; end: 104a0ca4b; -[GTLRDuration .cxx_destruct] */

void FUN_104a0ca40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 104a0ca4c; end: 104a0cb23; +[GTLRErrorObject objectWithFoundationError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a0ca4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain();
  func_0x00010c0dfc60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11270f1b4);
  *(undefined8 *)(param_1 + _DAT_11270f1b4) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010bf3ec40(param_3);
  func_0x00010c0df780(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17dba0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = param_3;
  func_0x00010c09e4e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1c6e00(param_1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a0cb24; end: 104a0cbbb; +[GTLRErrorObject arrayPropertyToClassMap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a0cb24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110e3f818;
  puVar1 = PTR_PTR_1126ae108;
  func_0x00010bf39c40();
  ppuStack_30 = &PTR____CFConstantStringClassReference_110daf578;
  puVar2 = PTR_PTR_1126ae110;
  puStack_28 = puVar1;
  func_0x00010bf39c40();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_28,&ppuStack_38,2);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    lVar7 = (long)_DAT_11270f1b4;
    uVar3 = *(undefined8 *)(puVar1 + lVar7);
    func_0x00010c292820(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf72020(puVar4,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    func_0x00010c1d0640(puVar4,param_2,puVar1,&PTR____CFConstantStringClassReference_110da6c58);
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar5 = *(undefined **)(puVar1 + lVar7);
    if (puVar5 == (undefined *)0x0) {
      puVar5 = puVar1;
      func_0x00010c0cb140();
      _objc_retainAutoreleasedReturnValue();
      if (puVar5 != (undefined *)0x0) {
        func_0x00010c1d0640(puVar4,param_2,puVar5,
                            *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568);
      }
      puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf3ec40(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar1;
      func_0x00010c067fc0();
      func_0x00010bf99240(puVar2,param_2,&PTR____CFConstantStringClassReference_110da6c18,puVar6,
                          puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
    }
    else {
      func_0x00010bf87dc0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(puVar1 + lVar7);
      func_0x00010bf3ec40(uVar3);
      func_0x00010bf99240(puVar2,param_2,puVar5,uVar3,puVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a0cbbc; end: 104a0cd27; -[GTLRErrorObject foundationError] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a0cbbc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lVar5 = (long)_DAT_11270f1b4;
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c292820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72020(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c1d0640(puVar2,param_2,param_1,&PTR____CFConstantStringClassReference_110da6c58);
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  lVar3 = *(long *)(param_1 + lVar5);
  if (lVar3 == 0) {
    lVar3 = param_1;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      func_0x00010c1d0640(puVar2,param_2,lVar3,
                          *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568);
    }
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf3ec40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c067fc0();
    func_0x00010bf99240(puVar4,param_2,&PTR____CFConstantStringClassReference_110da6c18,lVar5,puVar2
                       );
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bf3ec40(uVar1);
    func_0x00010bf99240(puVar4,param_2,lVar3,uVar1,puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104a0cd28; end: 104a0cd7b; +[GTLRErrorObject underlyingObjectForError:] */

void FUN_104a0cd28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c292820(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a0cd7c; end: 104a0ce27; -[GTLRErrorObject isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104a0cd7c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_30;
  undefined *puStack_28;
  
  iVar1 = (int)&lStack_30;
  _objc_retain();
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puStack_28 = PTR_PTR_1126e34b0;
    lStack_30 = param_1;
    _objc_msgSendSuper2(&lStack_30,PTR_s_isEqual__1125fa0c8,param_3);
    if (iVar1 != 0) {
      func_0x00010bf39c40(PTR_PTR_1126ae118);
      lVar2 = param_3;
      func_0x00010c075f00();
      if ((int)lVar2 != 0) {
        uVar3 = *(undefined8 *)(param_1 + _DAT_11270f1b4);
        FUN_104a1ca1c(uVar3,*(undefined8 *)(param_3 + _DAT_11270f1b4));
        goto LAB_104a0ce0c;
      }
    }
    uVar3 = 0;
  }
LAB_104a0ce0c:
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 104a0ce28; end: 104a0ce2f; +[GTLRErrorObject supportsSecureCoding] */

undefined8 FUN_104a0ce28(void)

{
  return 1;
}



/* Entry: 104a0ce30; end: 104a0ced3; -[GTLRErrorObject initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104a0ce30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain();
  puStack_28 = PTR_PTR_1126e34b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithCoder__1125dd730,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar2 = param_3;
    func_0x00010bf67020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11270f1b4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11270f1b4) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104a0ced4; end: 104a0cf53; -[GTLRErrorObject encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a0ced4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_encodeWithCoder__1125c2658;
  puStack_38 = PTR_PTR_1126e34b0;
  uStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  func_0x00010bf93020(param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 104a0cf54; end: 104a0cf67; -[GTLRErrorObject .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a0cf54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11270f1b4,0);
  return;
}



/* Entry: 104a0cf68; end: 104a0d013; +[GTLRErrorObjectDetail propertyToJSONKeyMap] */

void FUN_104a0cf68(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110dad058;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110da6a58;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110da6a78);
  return;
}



/* Entry: 104a0d014; end: 104a0d02b; +[GTLRObject object] */

void FUN_104a0d014(void)

{
  _objc_alloc();
  func_0x00010bfee200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a0d02c; end: 104a0d09b; +[GTLRObject objectWithJSON:] */

void FUN_104a0d02c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  func_0x00010c0dfc60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  FUN_104a0d09c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a0d09c; end: 104a0d197;  */

void FUN_104a0d09c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = *(undefined **)PTR__kCFAllocatorDefault_11034ab78;
    _CFPropertyListCreateDeepCopy(puVar1,param_1,1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x00010bf64b60();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = 0;
      _objc_retain();
      if (puVar2 == (undefined *)0x0) {
        puVar1 = (undefined *)0x0;
      }
      else {
        puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
        func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        _objc_retain(uVar3);
        _objc_release(uVar3);
        uVar3 = uVar4;
      }
      _objc_release(puVar2);
      _objc_release(uVar3);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104a0d198; end: 104a0d1f3; +[GTLRObject objectWithJSON:objectClassResolver:] */

void FUN_104a0d198(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain();
  func_0x00010c0e02c0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_4;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a0d1f4; end: 104a0d1fb; +[GTLRObject propertyToJSONKeyMap] */

undefined8 FUN_104a0d1f4(void)

{
  return 0;
}



/* Entry: 104a0d1fc; end: 104a0d203; +[GTLRObject arrayPropertyToClassMap] */

undefined8 FUN_104a0d1fc(void)

{
  return 0;
}



/* Entry: 104a0d204; end: 104a0d20b; +[GTLRObject classForAdditionalProperties] */

undefined8 FUN_104a0d204(void)

{
  return 0;
}



/* Entry: 104a0d20c; end: 104a0d213; +[GTLRObject isKindValidForClassRegistry] */

undefined8 FUN_104a0d20c(void)

{
  return 1;
}



/* Entry: 104a0d214; end: 104a0d2cb; -[GTLRObject isEqual:] */

undefined8 FUN_104a0d214(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  if (param_1 == param_3) {
    uVar2 = 1;
    goto LAB_104a0d2b0;
  }
  if (param_3 == 0) {
LAB_104a0d2ac:
    uVar2 = 0;
  }
  else {
    func_0x00010bf39c40(param_1);
    uVar1 = param_3;
    func_0x00010c075f00();
    if ((uVar1 & 1) == 0) {
      func_0x00010bf39c40(param_3);
      uVar1 = param_1;
      func_0x00010c075f00();
      if ((int)uVar1 == 0) goto LAB_104a0d2ac;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = param_3;
    func_0x00010bdc18a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_104a1ca1c(uVar2,uVar1);
    _objc_release(uVar1);
  }
LAB_104a0d2b0:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 104a0d2cc; end: 104a0d2d7; -[GTLRObject hash] */

void FUN_104a0d2cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf39c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126ae0f0,PTR_s_class_1125ac0b8);
  return;
}



/* Entry: 104a0d2d8; end: 104a0d37f; -[GTLRObject copyWithZone:] */

undefined8 FUN_104a0d2d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010bf39c40();
  func_0x00010bf00e40();
  func_0x00010bfee200();
  uVar2 = param_1;
  func_0x00010bdc18a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_104a0d09c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b64e0(uVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c0dfde0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d06c0(uVar1,param_2,param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104a0d380; end: 104a0d383; -[GTLRObject descriptionWithLocale:] */

void FUN_104a0d380(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6e350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_description_1125b9278);
  return;
}



/* Entry: 104a0d384; end: 104a0d38b; +[GTLRObject supportsSecureCoding] */

undefined8 FUN_104a0d384(void)

{
  return 1;
}



/* Entry: 104a0d38c; end: 104a0d483; -[GTLRObject initWithCoder:] */

undefined8 * FUN_104a0d38c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain();
  puStack_48 = PTR_PTR_1126e34b8;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010bf39c40();
    func_0x00010bf39c40();
    func_0x00010c226900(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010bf67040();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[2];
    puVar1[2] = uVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104a0d484; end: 104a0d49b; -[GTLRObject encodeWithCoder:] */

void FUN_104a0d484(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf93030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_encodeObject_forKey__1125c25b0,*(undefined8 *)(param_1 + 0x10),
             &PTR____CFConstantStringClassReference_110e69858);
  return;
}



/* Entry: 104a0d49c; end: 104a0d543; -[GTLRObject setJSONValue:forKey:] */

void FUN_104a0d49c(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain();
  _objc_retain(param_4);
  puVar1 = param_1;
  func_0x00010bdc18a0();
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 != 0) && (puVar1 == (undefined *)0x0)) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71fe0(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b64e0(param_1,param_2,puVar1);
  }
  func_0x00010c220220(puVar1,param_2,param_3,param_4);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a0d544; end: 104a0d5af; -[GTLRObject JSONValueForKey:] */

void FUN_104a0d544(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bdc18a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a0d5b0; end: 104a0d677; -[GTLRObject JSONString] */

void FUN_104a0d5b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uStack_38;
  
  func_0x00010bdc18a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uVar4 = 0;
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    uStack_38 = 0;
    puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_1,1,&uStack_38
                       );
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uStack_38;
    _objc_retain(uStack_38);
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
    if (puVar1 != (undefined *)0x0) {
      ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc();
      func_0x00010c008340();
      if (ppuVar2 != (undefined **)0x0) {
        ppuVar3 = ppuVar2;
      }
    }
    _objc_release(puVar1);
  }
  _objc_release(param_1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 104a0d678; end: 104a0d717; -[GTLRObject additionalJSONKeys] */

void FUN_104a0d678(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = param_1;
  func_0x00010bf39c40();
  func_0x00010bf00360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d500();
    puVar3 = puVar4;
    func_0x00010bf529e0();
    if (puVar3 != (undefined *)0x0) goto LAB_104a0d6f4;
    _objc_release(puVar4);
  }
  puVar4 = (undefined *)0x0;
LAB_104a0d6f4:
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104a0d718; end: 104a0d76b; -[GTLRObject fieldsDescription] */

void FUN_104a0d718(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae0f0;
  func_0x00010bdc18a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfac920(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104a0d76c; end: 104a0d7b7; +[GTLRObject fieldsDescriptionForJSON:] */

void FUN_104a0d76c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfac940();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a0d7b8; end: 104a0dbdf; +[GTLRObject fieldsElementsForJSON:] */

void FUN_104a0d7b8(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
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
  _objc_retain();
  puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c246d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  _objc_retain();
  puVar9 = &uStack_1b0;
  puVar2 = puVar3;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar13 = *plStack_1a0;
    do {
      puVar12 = (undefined *)0x0;
      do {
        if (*plStack_1a0 != lVar13) {
          _objc_enumerationMutation(puVar3);
        }
        puVar4 = param_3;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
        puVar5 = puVar4;
        func_0x00010c075f00();
        if (((ulong)puVar5 & 1) == 0) {
          func_0x00010bf39c40(PTR__OBJC_CLASS___NSNumber_1126ae570);
          puVar5 = puVar4;
          func_0x00010c075f00();
          if ((int)puVar5 != 0) goto LAB_104a0d90c;
          func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          puVar5 = puVar4;
          func_0x00010c075f00();
          if ((int)puVar5 == 0) {
            func_0x00010bf39c40(PTR__OBJC_CLASS___NSArray_1126ae530);
            puVar5 = puVar4;
            func_0x00010c075f00();
            if ((int)puVar5 == 0) {
              puVar5 = PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8;
              func_0x00010bf5eec0(PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar4;
              func_0x00010bf39c40();
              _NSStringFromClass();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfd11c0(puVar5);
              _objc_release(puVar8);
              _objc_release(puVar5);
            }
            else {
              puVar5 = puVar4;
              func_0x00010bf529e0();
              if (puVar5 != (undefined *)0x0) {
                puVar5 = puVar4;
                func_0x00010c0dfd20();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
                puVar8 = puVar5;
                func_0x00010c075f00();
                if ((int)puVar8 == 0) {
                  func_0x00010befa120(puVar11);
                }
                else {
                  lVar7 = param_1;
                  func_0x00010bfac920();
                  _objc_retainAutoreleasedReturnValue();
                  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar11);
                  _objc_release(puVar8);
                  _objc_release(lVar7);
                }
                _objc_release(puVar5);
              }
            }
          }
          else {
            lVar6 = param_1;
            func_0x00010bfac940();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar6;
            func_0x00010bf52a60();
            lVar1 = lRam0000000000000000;
            while (lVar7 != 0) {
              lVar14 = 0;
              do {
                if (lRam0000000000000000 != lVar1) {
                  _objc_enumerationMutation(lVar6);
                }
                puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar11);
                _objc_release(puVar5);
                lVar14 = lVar14 + 1;
              } while (lVar7 != lVar14);
              lVar7 = lVar6;
              func_0x00010bf52a60();
            }
            _objc_release(lVar6);
          }
        }
        else {
LAB_104a0d90c:
          func_0x00010befa120(puVar11);
        }
        _objc_release(puVar4);
        puVar12 = puVar12 + 1;
      } while (puVar12 != puVar2);
      puVar9 = &uStack_1b0;
      puVar2 = puVar3;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126ae0f0;
    _objc_retain(puVar9);
    puVar11 = param_3;
    func_0x00010bdc18a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bdc18a0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    func_0x00010c0f57a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(puVar11);
    puVar11 = puVar2;
    func_0x00010bf529e0();
    if (puVar11 == (undefined *)0x0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      func_0x00010bf39c40(param_3);
      func_0x00010c0dfc60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b64e0();
      puVar11 = param_3;
    }
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 104a0dbe0; end: 104a0dcbb; -[GTLRObject patchObjectFromOriginal:] */

void FUN_104a0dbe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = PTR_PTR_1126ae0f0;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bdc18a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bdc18a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0f57a0(puVar3,param_2,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = puVar3;
  func_0x00010bf529e0();
  if (puVar4 == (undefined *)0x0) {
    param_1 = 0;
  }
  else {
    func_0x00010bf39c40(param_1);
    func_0x00010c0dfc60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b64e0();
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a0dcbc; end: 104a0dfff; +[GTLRObject patchDictionaryForJSON:fromOriginalJSON:] */

/* WARNING: Possible PIC construction at 0x000104a0de28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104a0de2c) */

void FUN_104a0dcbc(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  while (PTR__OBJC_CLASS___NSMutableArray_1126ae5d8 = puVar10, uVar3 != 0) {
    uVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(uVar2);
      }
      uVar4 = param_4;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_3;
      func_0x00010c296f60();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 == 0) goto code_r0x00010c0ddbe0;
      uVar6 = uVar4;
      FUN_104a1ca1c(uVar4,lVar5);
      if ((uVar6 & 1) == 0) {
        func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        uVar6 = uVar4;
        func_0x00010c075f00();
        if ((int)uVar6 != 0) {
          func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          lVar7 = lVar5;
          func_0x00010c075f00();
          if ((int)lVar7 != 0) {
            uVar8 = param_1;
            func_0x00010c0f57a0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c220220(puVar1);
            _objc_release(uVar8);
            goto LAB_104a0de64;
          }
        }
        func_0x00010c220220(puVar1);
      }
LAB_104a0de64:
      _objc_release(lVar5);
      _objc_release(uVar4);
      uVar13 = uVar13 + 1;
    } while (uVar3 != uVar13);
    uVar3 = uVar2;
    func_0x00010bf52a60();
    puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  }
  lVar9 = param_3;
  func_0x00010bf002e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  func_0x00010c12d500(puVar10);
  _objc_retain();
  puVar11 = puVar10;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (puVar11 != (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(puVar10);
      }
      lVar5 = param_3;
      func_0x00010c0dff20(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220220(puVar1);
      _objc_release(lVar5);
      puVar14 = puVar14 + 1;
    } while (puVar11 != puVar14);
    puVar11 = puVar10;
    func_0x00010bf52a60();
  }
  _objc_release(puVar10);
  _objc_release(puVar10);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
code_r0x00010c0ddbe0:
                    /* WARNING: Could not recover jumptable at 0x00010c0ddbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR__OBJC_CLASS___NSNull_1126aef28,PTR_s_null_112615110);
  return;
}



/* Entry: 104a0e000; end: 104a0e00b; +[GTLRObject nullValue] */

void FUN_104a0e000(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ddbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR__OBJC_CLASS___NSNull_1126aef28,PTR_s_null_112615110);
  return;
}



/* Entry: 104a0e00c; end: 104a0e12f; -[GTLRObject additionalPropertyForName:] */

void FUN_104a0e00c(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bStack_41;
  
  _objc_retain(param_3);
  puVar4 = param_1;
  func_0x00010bf26400(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010bf39c40(param_1);
    func_0x00010bf39c60();
    puVar2 = param_1;
    func_0x00010bdc1a00(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    bStack_41 = 0;
    if (puVar2 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
      puVar1 = (undefined *)0x0;
    }
    else {
      puVar3 = param_1;
      func_0x00010c0dfde0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126ae120;
      func_0x00010c0e0140(PTR_PTR_1126ae120,param_2,puVar2,puVar1,puVar3,&bStack_41);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar1 = puVar4;
      if ((bStack_41 & 1) == 0) {
        puVar1 = (undefined *)0x0;
      }
    }
    func_0x00010c175040(param_1,param_2,puVar1,param_3);
    _objc_retain(puVar4);
    _objc_release(puVar2);
  }
  else {
    _objc_retain();
  }
  _objc_release(puVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104a0e130; end: 104a0e1eb; -[GTLRObject setAdditionalProperty:forName:] */

void FUN_104a0e130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  char cStack_31;
  
  cStack_31 = '\0';
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf39c40(param_1);
  func_0x00010bf39c60();
  puVar2 = PTR_PTR_1126ae120;
  func_0x00010c085f20(PTR_PTR_1126ae120,param_2,param_3,uVar1,&cStack_31);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6500(param_1,param_2,puVar2,param_4);
  uVar1 = param_3;
  if (cStack_31 == '\0') {
    uVar1 = 0;
  }
  func_0x00010c175040(param_1,param_2,uVar1,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
  return;
}



/* Entry: 104a0e1ec; end: 104a0e33b; -[GTLRObject additionalProperties] */

void FUN_104a0e1ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
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
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010befd1a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar4 = auStack_e8;
  lVar6 = lVar2;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar2);
        }
        uVar7 = *(undefined8 *)(lStack_128 + lVar9 * 8);
        lVar3 = param_1;
        func_0x00010befd380(param_1,param_2,uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0560(puVar1,param_2,lVar3,uVar7);
        _objc_release(lVar3);
        lVar9 = lVar9 + 1;
      } while (lVar6 != lVar9);
      puVar4 = auStack_e8;
      lVar6 = lVar2;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lVar6 = *(long *)(lVar2 + 8);
  if ((puVar5 == (undefined8 *)0x0) || (lVar6 != 0)) {
    _objc_retain(puVar4);
    _objc_retain(puVar5);
    func_0x00010c220220(lVar6,param_2,puVar5,puVar4);
    _objc_release(puVar4);
  }
  else {
    _objc_retain();
    _objc_retain(puVar5);
    _objc_alloc();
    func_0x00010c030a20();
    _objc_release(puVar4);
    _objc_release(puVar5);
    puVar5 = *(undefined8 **)(lVar2 + 8);
    *(undefined **)(lVar2 + 8) = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 104a0e33c; end: 104a0e3ff; -[GTLRObject setCacheChild:forKey:] */

void FUN_104a0e33c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lVar2 = *(long *)(param_1 + 8);
  if ((param_3 == 0) || (lVar2 != 0)) {
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010c220220(lVar2,param_2,param_3,param_4);
    _objc_release(param_4);
  }
  else {
    _objc_retain();
    _objc_retain(param_3);
    _objc_alloc();
    func_0x00010c030a20();
    _objc_release(param_4);
    _objc_release(param_3);
    param_3 = *(long *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a0e400; end: 104a0e407; -[GTLRObject cacheChildForKey:] */

void FUN_104a0e400(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_objectForKey__1126159e0)
  ;
  return;
}



/* Entry: 104a0e408; end: 104a0e51b; +[GTLRObject allDeclaredProperties] */

void FUN_104a0e408(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  plVar3 = (long *)PTR_PTR_1126ae0f0;
  func_0x00010bf39c40();
  _class_getSuperclass();
  while (plVar3 != param_1) {
    plVar4 = param_1;
    _class_copyPropertyList(param_1,0);
    if (plVar4 != (long *)0x0) {
      lVar5 = *plVar4;
      plVar1 = plVar4;
      while (lVar5 != 0) {
        _property_getName();
        lVar5 = *plVar1;
        _property_getAttributes();
        _strstr();
        if ((lVar5 != 0) && (*(char *)(lVar5 + 2) == ',' || *(char *)(lVar5 + 2) == '\0')) {
          puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          _objc_release(puVar6);
        }
        lVar5 = plVar1[1];
        plVar1 = plVar1 + 1;
      }
      _free(plVar4);
    }
    _class_getSuperclass();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104a0e51c; end: 104a0e6b7; +[GTLRObject allKnownKeys] */

void FUN_104a0e51c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
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
  lVar1 = param_1;
  func_0x00010beffe20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae0f0;
  func_0x00010bf39c40(param_1);
  func_0x00010c118d80(puVar3,param_2,param_1);
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
  lVar4 = lVar1;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar6 = 0;
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar1);
        }
        puVar5 = puVar3;
        func_0x00010c0dff20(puVar3,param_2,*(undefined8 *)(lStack_128 + lVar8 * 8));
        _objc_retainAutoreleasedReturnValue();
        if (puVar5 != (undefined *)0x0) {
          func_0x00010c130f40(puVar2,param_2,lVar6,puVar5);
        }
        lVar6 = lVar6 + 1;
        _objc_release(puVar5);
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
      lVar4 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar4 != 0);
  }
  _objc_release(lVar1);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    func_0x00010bdc18c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bf39c40();
    func_0x00010c25d9e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da6ad8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104a0e6b8; end: 104a0e733; -[GTLRObject description] */

void FUN_104a0e6b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010bdc18c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110da6ad8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104a0e734; end: 104a0ea97; -[GTLRObject JSONDescription] */

void FUN_104a0e734(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lStack_140;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  func_0x00010bf39c40();
  func_0x00010bf00360();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25da60(PTR__OBJC_CLASS___NSMutableString_1126af7f8,param_2,
                      &PTR____CFConstantStringClassReference_110def438);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c246d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar4 = auStack_f0;
  puVar9 = (undefined *)0x10;
  lStack_140 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_130);
  if (lStack_140 != 0) {
    lVar2 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar2) {
          _objc_enumerationMutation(lVar3);
        }
        uVar13 = *(undefined8 *)(lStack_128 + lVar10 * 8);
        puVar4 = puVar1;
        func_0x00010bf4b900(puVar1,param_2,uVar13);
        ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
        if ((int)puVar4 == 0) {
          ppuVar5 = &PTR____CFConstantStringClassReference_110dbff78;
        }
        puVar11 = *(undefined **)(param_1 + 0x10);
        _objc_retain();
        func_0x00010c296f60(puVar11,param_2,uVar13);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        puVar9 = puVar11;
        func_0x00010c075f00(puVar11,param_2,puVar4);
        if ((int)puVar9 == 0) {
          puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf39c40(PTR__OBJC_CLASS___NSArray_1126ae530);
          puVar9 = puVar11;
          func_0x00010c075f00(puVar11,param_2,puVar4);
          puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          if ((int)puVar9 == 0) {
            func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
            puVar9 = puVar11;
            func_0x00010c075f00(puVar11,param_2,puVar4);
            if ((int)puVar9 == 0) {
              puVar4 = puVar11;
              func_0x00010bf6e340();
              _objc_retainAutoreleasedReturnValue();
              goto LAB_104a0e9d0;
            }
            ppuVar7 = &PTR____CFConstantStringClassReference_110e2b998;
            puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          }
          else {
            func_0x00010bf529e0();
            ppuVar7 = &PTR____CFConstantStringClassReference_110da6af8;
          }
          func_0x00010c25d9e0(puVar4,param_2,ppuVar7);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar4 = puVar11;
          func_0x00010bf002e0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar4;
          func_0x00010c246d00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          puVar6 = puVar9;
          func_0x00010bf446e0(puVar9,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              &PTR____CFConstantStringClassReference_110ecb178);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          _objc_release(puVar9);
        }
LAB_104a0e9d0:
        func_0x00010bf06ba0(puVar12,param_2,&PTR____CFConstantStringClassReference_110da6b18);
        _objc_release(ppuVar5);
        _objc_release(puVar11);
        _objc_release(puVar4);
        lVar10 = lVar10 + 1;
      } while (lStack_140 != lVar10);
      puVar4 = auStack_f0;
      puVar9 = (undefined *)0x10;
      lStack_140 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_130);
    } while (lStack_140 != 0);
  }
  _objc_release(lVar3);
  ppuVar5 = &PTR____CFConstantStringClassReference_110def478;
  func_0x00010bf070e0(puVar12);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain();
  ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar7 == ppuVar5) {
    _objc_release(ppuVar7);
LAB_104a0eb5c:
    puVar12 = (undefined *)0x0;
    if ((ppuVar5 != (undefined **)0x0) && (puVar4 != (undefined *)0x0)) {
      puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf71e20(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar9;
      func_0x00010bf39cc0(puVar9,param_2,puVar1,puVar4);
      puVar12 = puVar4;
      if (puVar11 != (undefined *)0x0) {
        puVar12 = puVar11;
      }
      _objc_retainAutorelease(puVar12);
      _objc_release(puVar1);
      func_0x00010c0dfc60(puVar12);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    ppuVar8 = ppuVar5;
    func_0x00010bf529e0();
    _objc_release(ppuVar7);
    if (ppuVar8 == (undefined **)0x0) goto LAB_104a0eb5c;
    if (puVar4 != (undefined *)0x0) {
      puVar1 = puVar4;
    }
    puVar4 = puVar9;
    func_0x00010bf39cc0(puVar9,param_2,ppuVar5,puVar1);
    puVar12 = puVar1;
    if (puVar4 != (undefined *)0x0) {
      puVar12 = puVar4;
    }
    _objc_retainAutorelease(puVar12);
    func_0x00010c0dfc60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d06c0();
    func_0x00010c1b64e0(puVar12,param_2,ppuVar5);
  }
  _objc_release(puVar9);
  _objc_release(ppuVar5);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 104a0ea98; end: 104a0ebe3; +[GTLRObject objectForJSON:defaultClass:objectClassResolver:] */

void FUN_104a0ea98(long param_1,undefined8 param_2,undefined *param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain();
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == param_3) {
    _objc_release(puVar1);
  }
  else {
    puVar2 = param_3;
    func_0x00010bf529e0();
    _objc_release(puVar1);
    if (puVar2 != (undefined *)0x0) {
      if (param_4 != 0) {
        param_1 = param_4;
      }
      lVar3 = param_5;
      func_0x00010bf39cc0(param_5,param_2,param_3,param_1);
      if (lVar3 != 0) {
        param_1 = lVar3;
      }
      _objc_retainAutorelease(param_1);
      func_0x00010c0dfc60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d06c0();
      func_0x00010c1b64e0(param_1,param_2,param_3);
      goto LAB_104a0ebbc;
    }
  }
  param_1 = 0;
  if ((param_3 != (undefined *)0x0) && (param_4 != 0)) {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_5;
    func_0x00010bf39cc0(param_5,param_2,puVar1,param_4);
    param_1 = param_4;
    if (lVar3 != 0) {
      param_1 = lVar3;
    }
    _objc_retainAutorelease(param_1);
    _objc_release(puVar1);
    func_0x00010c0dfc60(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_104a0ebbc:
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a0ebe4; end: 104a0ec13;  */

void FUN_104a0ebe4(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010bf39cc0(param_1,param_2,param_2,param_3);
  if (param_1 != 0) {
    param_3 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(param_3);
  return;
}



/* Entry: 104a0ec14; end: 104a0ec8b; +[GTLRObject initialize] */

void FUN_104a0ec14(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (puRam00000001136a0550 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc();
    func_0x00010bfee200();
    puVar3 = puRam00000001136a0550;
    puRam00000001136a0550 = puVar2;
    _objc_release(puVar3);
  }
  if (puRam00000001136a0558 != (undefined *)0x0) {
    return;
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc();
  func_0x00010bfee200();
  lVar1 = (long)puRam00000001136a0558;
  puRam00000001136a0558 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104a0ec8c; end: 104a0ece3; +[GTLRObject propertyToJSONKeyMapForClass:] */

void FUN_104a0ec8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126ae120;
  puVar1 = PTR_s_propertyToJSONKeyMap_1125255e8;
  puVar3 = PTR_PTR_1126ae0f0;
  func_0x00010bf39c40(PTR_PTR_1126ae0f0);
                    /* WARNING: Could not recover jumptable at 0x00010c0cadb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar2,PTR_s_mergedClassDictionaryForSelector_112610580,puVar1,param_3,puVar3,
             uRam00000001136a0550);
  return;
}



/* Entry: 104a0ece4; end: 104a0ed3b; +[GTLRObject arrayPropertyToClassMapForClass:] */

void FUN_104a0ece4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126ae120;
  puVar1 = PTR_s_arrayPropertyToClassMap_1125255d8;
  puVar3 = PTR_PTR_1126ae0f0;
  func_0x00010bf39c40(PTR_PTR_1126ae0f0);
                    /* WARNING: Could not recover jumptable at 0x00010c0cadb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar2,PTR_s_mergedClassDictionaryForSelector_112610580,puVar1,param_3,puVar3,
             uRam00000001136a0558);
  return;
}



/* Entry: 104a0ed3c; end: 104a0ed47; +[GTLRObject ancestorClass] */

void FUN_104a0ed3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf39c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126ae0f0,PTR_s_class_1125ac0b8);
  return;
}



/* Entry: 104a0ed48; end: 104a0edab; +[GTLRObject resolveInstanceMethod:] */

void FUN_104a0ed48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR_PTR_1126ae120;
  func_0x00010c13aa40();
  if (((ulong)puVar1 & 1) == 0) {
    puStack_28 = PTR_PTR_1126e34c0;
    uStack_30 = param_1;
    _objc_msgSendSuper2(&uStack_30,PTR_s_resolveInstanceMethod__11254da90,param_3);
  }
  return;
}



/* Entry: 104a0edac; end: 104a0edb3; -[GTLRObject JSON] */

undefined8 FUN_104a0edac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104a0edb4; end: 104a0edbf; -[GTLRObject setJSON:] */

void FUN_104a0edb4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 104a0edc0; end: 104a0edc7; -[GTLRObject objectClassResolver] */

undefined8 FUN_104a0edc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104a0edc8; end: 104a0edd3; -[GTLRObject setObjectClassResolver:] */

void FUN_104a0edc8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 104a0edd4; end: 104a0eddb; -[GTLRObject userProperties] */

undefined8 FUN_104a0edd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104a0eddc; end: 104a0ede7; -[GTLRObject setUserProperties:] */

void FUN_104a0eddc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 104a0ede8; end: 104a0ee2f; -[GTLRObject .cxx_destruct] */

void FUN_104a0ede8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104a0ee30; end: 104a0ee3b; +[GTLRCollectionObject collectionItemsKey] */

undefined ** FUN_104a0ee30(void)

{
  return &PTR____CFConstantStringClassReference_111019178;
}



/* Entry: 104a0ee3c; end: 104a0ef07; -[GTLRCollectionObject objectAtIndexedSubscript:] */

void FUN_104a0ee3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = param_1;
  func_0x00010bf39c40();
  func_0x00010bf3ff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c296f60(param_1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  if (param_1 == 0) {
    uVar4 = *(undefined8 *)PTR__NSRangeException_11034aaa0;
    func_0x00010bf39c40();
    func_0x00010c11f020(puVar1,param_2,uVar4,&PTR____CFConstantStringClassReference_110da6b38);
  }
  lVar3 = param_1;
  func_0x00010c0dfd40(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104a0ef08; end: 104a0ef93; -[GTLRCollectionObject countByEnumeratingWithState:objects:count:] */

undefined8 FUN_104a0ef08(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bf39c40();
  func_0x00010bf3ff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c296f60(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf52a60();
  _objc_release(param_1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 104a0ef94; end: 104a0f09b; -[GTLRDataObject description] */

void FUN_104a0ef94(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  ppuVar1 = param_1;
  func_0x00010bdc18a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bf529e0();
  _objc_release(ppuVar1);
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar1 = param_1;
    func_0x00010bdc18c0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40();
  ppuVar2 = param_1;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  func_0x00010bf4dac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110da6b58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104a0f09c; end: 104a0f14b; -[GTLRDataObject copyWithZone:] */

undefined1 * FUN_104a0f09c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e34c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_copyWithZone__1125b2238);
  uVar2 = param_1;
  func_0x00010bf63640(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  func_0x00010c189480(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010bf4dac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182a00(puVar1);
  _objc_release(param_1);
  return (undefined1 *)puVar1;
}



/* Entry: 104a0f14c; end: 104a0f15b; -[GTLRDataObject data] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a0f14c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_11270f1c8,1);
  return;
}



/* Entry: 104a0f15c; end: 104a0f167; -[GTLRDataObject setData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a0f15c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 104a0f168; end: 104a0f177; -[GTLRDataObject contentType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a0f168(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_11270f1cc,1);
  return;
}



/* Entry: 104a0f178; end: 104a0f183; -[GTLRDataObject setContentType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a0f178(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a0f184; end: 104a0f1c3; -[GTLRDataObject .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a0f184(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11270f1cc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11270f1c8,0);
  return;
}



/* Entry: 104a0f1c4; end: 104a0f2d7; -[GTLRResultArray itemsWithItemClass:] */

void FUN_104a0f1c4(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = param_1;
  func_0x00010bf26400(param_1,param_2,&PTR____CFConstantStringClassReference_110da6b78);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = param_1;
    func_0x00010bdc18a0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf39c40(PTR__OBJC_CLASS___NSArray_1126ae530);
      puVar3 = puVar2;
      func_0x00010c075f00(puVar2,param_2,puVar4);
      if ((int)puVar3 == 0) {
        puVar4 = puVar2;
        _objc_retain(puVar2);
      }
      else {
        puVar3 = param_1;
        func_0x00010c0dfde0(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126ae120;
        func_0x00010c0e0140(PTR_PTR_1126ae120,param_2,puVar2,param_3,puVar3,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
      }
    }
    func_0x00010c175040(param_1,param_2,puVar4,&PTR____CFConstantStringClassReference_110da6b78);
    _objc_release(puVar2);
  }
  else {
    puVar4 = puVar1;
    _objc_retain(puVar1);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104a0f2d8; end: 104a0f33f; -[GTLRResultArray JSONDescription] */

void FUN_104a0f2d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bdc18a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110da6af8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104a0f340; end: 104a0f3ab; +[GTLRObjectClassResolver resolverWithKindMap:surrogates:] */

void FUN_104a0f340(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c021200();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a0f3ac; end: 104a0f493; -[GTLRObjectClassResolver classForJSON:defaultClass:] */

long FUN_104a0f3ac(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  if ((param_4 == 0) || (lVar3 = param_4, func_0x00010c075f20(), (int)lVar3 != 0)) {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    lVar3 = param_3;
    func_0x00010c075f00(param_3,param_2,puVar1);
    if ((int)lVar3 != 0) {
      lVar3 = param_3;
      func_0x00010c296f60(param_3,param_2,&PTR____CFConstantStringClassReference_110dd6038);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
      lVar2 = lVar3;
      func_0x00010c075f00(lVar3,param_2,puVar1);
      if (((int)lVar2 != 0) && (lVar2 = lVar3, func_0x00010c08fa60(), lVar2 != 0)) {
        lVar2 = *(long *)(param_1 + 8);
        func_0x00010c0dff20(lVar2,param_2,lVar3);
        if (lVar2 != 0) {
          param_4 = lVar2;
        }
      }
      _objc_release(lVar3);
    }
  }
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x00010c0dff20(lVar3,param_2,param_4);
  if (lVar3 != 0) {
    param_4 = lVar3;
  }
  _objc_retainAutoreleaseReturnValue(param_4);
  _objc_release(param_3);
  return param_4;
}



/* Entry: 104a0f494; end: 104a0f4c3; -[GTLRObjectClassResolver .cxx_destruct] */

void FUN_104a0f494(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104a0f4c4; end: 104a0f5df; -[GTLRQuery initWithPathURITemplate:HTTPMethod:pathParameterNames:] */

undefined1 *
FUN_104a0f4c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar5 = &uStack_40;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puStack_38 = PTR_PTR_1126e34d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar5 != (undefined8 *)0x0) {
    puVar1 = (undefined1 *)puVar5;
    func_0x00010bf39c40();
    func_0x00010c0d9dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar5 + 0x78);
    *(undefined1 **)((long)puVar5 + 0x78) = puVar1;
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar5 + 0x70);
    *(undefined8 *)((long)puVar5 + 0x70) = uVar3;
    _objc_release(uVar4);
    uVar3 = param_4;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar5 + 0x50);
    *(undefined8 *)((long)puVar5 + 0x50) = uVar3;
    _objc_release(uVar4);
    uVar3 = param_5;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar5 + 0x68);
    *(undefined8 *)((long)puVar5 + 0x68) = uVar3;
    _objc_release(uVar4);
    lVar2 = *(long *)((long)puVar5 + 0x70);
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      _objc_release(puVar5);
      puVar5 = (undefined8 *)0x0;
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar5;
}



/* Entry: 104a0f5e0; end: 104a0f8d3; -[GTLRQuery copyWithZone:] */

long FUN_104a0f5e0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  func_0x00010bf39c40();
  func_0x00010bf00e40();
  lVar4 = param_1;
  func_0x00010c0f5a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfe4c80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c0f59c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0346e0(lVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar4);
  lVar4 = *(long *)(param_1 + 0x58);
  func_0x00010bf529e0();
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
    _CFPropertyListCreateDeepCopy(uVar5,*(undefined8 *)(param_1 + 0x58),1);
    func_0x00010c1b64e0(lVar1);
    _objc_release(uVar5);
  }
  lVar4 = param_1;
  func_0x00010bf9b240(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c198120(lVar1);
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010befcfe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1659e0(lVar1);
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010befd480(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c165b80(lVar1);
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010bf1eb20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172d40(lVar1);
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010bf44000(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17fb40(lVar1);
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010bf88840(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1911a0(lVar1);
  _objc_release(lVar4);
  func_0x00010bf9c2e0(param_1);
  func_0x00010c198940(lVar1);
  lVar4 = param_1;
  func_0x00010c0b3bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0780(lVar1);
  _objc_release(lVar4);
  func_0x00010c07b980(param_1);
  func_0x00010c1e6400(lVar1);
  lVar4 = param_1;
  func_0x00010c1356e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebce0(lVar1);
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010c13d1a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ed5c0(lVar1);
  _objc_release(lVar4);
  func_0x00010c2348c0(param_1);
  func_0x00010c2013c0(lVar1);
  lVar4 = param_1;
  func_0x00010c23c8a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c202a80(lVar1);
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010c28e440(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21ce80(lVar1);
  _objc_release(lVar4);
  func_0x00010c290440(param_1);
  func_0x00010c21d860(lVar1);
  return lVar1;
}



/* Entry: 104a0f8d4; end: 104a0f8db; -[GTLRQuery isBatchQuery] */

undefined8 FUN_104a0f8d4(void)

{
  return 0;
}


