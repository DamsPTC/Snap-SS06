/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105f60d28; end: 105f60d2f; -[SCMemoriesCameraRollAlbum name] */

undefined8 FUN_105f60d28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105f60d30; end: 105f60d37; -[SCMemoriesCameraRollAlbum setName:] */

void FUN_105f60d30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105f60d38; end: 105f60d67; -[SCMemoriesCameraRollAlbum .cxx_destruct] */

void FUN_105f60d38(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f60d68; end: 105f60ddb; -[SCMemoriesCameraRollData initWithFetchResult:] */

undefined1 * FUN_105f60d68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ee470;
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



/* Entry: 105f60ddc; end: 105f60df7; -[SCMemoriesCameraRollData itemCount] */

double FUN_105f60ddc(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bf529e0(uVar1);
  return (double)uVar1;
}



/* Entry: 105f60df8; end: 105f60dfb; -[SCMemoriesCameraRollData setItemCount:] */

void FUN_105f60df8(void)

{
  return;
}



/* Entry: 105f60dfc; end: 105f60e7f; -[SCMemoriesCameraRollData getItemWithIndex:preferredWidth:preferredHeight:] */

void FUN_105f60dfc(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_4;
  func_0x00010c082d80();
  if ((int)lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_4 + 8);
    func_0x00010c0dfd20(uVar2,param_5,(long)param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    FUN_105f60ed0(param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105f60e80; end: 105f60e8b; -[SCMemoriesCameraRollData pushToValdiMarshaller:] */

void FUN_105f60e80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af954f8(param_3,param_1);
  func_0x00010af954c0();
  func_0x00010af954b8();
  func_0x00010af953dc();
  func_0x00010af953ec();
  return;
}



/* Entry: 105f60e8c; end: 105f60ec3; -[SCMemoriesCameraRollData isValidIndex:] */

bool FUN_105f60e8c(double param_1)

{
  double dVar1;
  
  if (param_1 < 0.0) {
    return false;
  }
  dVar1 = param_1;
  func_0x00010c084220();
  return param_1 < dVar1;
}



/* Entry: 105f60ec4; end: 105f60ecf; -[SCMemoriesCameraRollData .cxx_destruct] */

void FUN_105f60ec4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f60ed0; end: 105f61267;  */

void FUN_105f60ed0(double param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  double dVar9;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  dVar8 = param_1;
  _objc_retain();
  uVar1 = param_3;
  func_0x00010c09da80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126c6608;
    _objc_alloc(PTR_PTR_1126c6608);
    uVar1 = param_3;
    func_0x00010c09da80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0c6c20(param_3);
    func_0x00010c0200c0(puVar2,param_4,uVar1,uVar3 != 1);
    _objc_release(uVar1);
    puVar7 = PTR_PTR_1126c6610;
    _objc_alloc(PTR_PTR_1126c6610);
    uVar1 = param_3;
    func_0x00010c0fce40(param_3);
    uVar3 = param_3;
    func_0x00010c0fcaa0(param_3);
    func_0x00010bf8b160(param_3);
    dVar9 = dVar8 * 1000.0;
    uVar4 = param_3;
    func_0x00010bf5a700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c0200e0((double)uVar1,(double)uVar3,dVar9,dVar8 * 1000.0,puVar7,param_4,puVar2);
    _objc_release(uVar4);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar1 = param_3;
    func_0x00010c074c20(param_3);
    func_0x00010c0df6e0(puVar5,param_4,uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18ec60(puVar7,param_4,puVar5);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar1 = param_3;
    func_0x00010c072a60(param_3);
    func_0x00010c0df6e0(puVar5,param_4,uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b0e60(puVar7,param_4,puVar5);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar1 = param_3;
    func_0x00010c0c6ac0(param_3);
    func_0x00010c0df760(puVar5,param_4,(uint)uVar1 >> 2 & 1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b41a0(puVar7,param_4,puVar5);
    _objc_release(puVar5);
    uVar1 = param_3;
    func_0x000107fda3e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c176f20(puVar7,param_4,uVar1);
    _objc_release(uVar1);
    puVar5 = PTR_PTR_1126c6618;
    puVar6 = puVar2;
    func_0x00010c0844e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe8f40(param_1,param_2,puVar5,param_4,puVar6,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2144a0(puVar7,param_4,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar6);
    puVar5 = PTR_PTR_1126c6618;
    puVar6 = puVar2;
    func_0x00010c0844e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe8f20(puVar5,param_4,puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182a80(puVar7,param_4,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar6);
    uVar1 = param_3;
    func_0x00010c09ea00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 != 0) {
      puVar5 = PTR_PTR_1126c6620;
      _objc_alloc();
      uVar1 = param_3;
      func_0x00010c09ea00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf51c80();
      uVar3 = param_3;
      func_0x00010c09ea00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf51c80();
      func_0x00010c021a60(param_1);
      _objc_release(uVar3);
      _objc_release(uVar1);
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_105f61268;
      puStack_80 = &UNK_1108fdb10;
      puStack_78 = puVar5;
      func_0x00010c1a3560(puVar7,param_4,&puStack_98);
      _objc_release(puVar5);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105f61268; end: 105f6127b;  */

void FUN_105f61268(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13b090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b3540,PTR_s_resolvedPromiseWithValue__11262c640,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105f6127c; end: 105f6148b;  */

void FUN_105f6127c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_5;
  func_0x00010c241220(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x000107e8599c(param_3);
  fVar9 = (float)param_3;
  uVar3 = uVar1;
  func_0x000106d7a74c(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c26e480();
  puVar4 = PTR_PTR_1126c6628;
  _objc_alloc();
  uVar5 = param_4;
  func_0x00010bf97200(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar6 = uVar3;
  func_0x00010beec820(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  uVar7 = param_5;
  func_0x00010bf59960(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f260(puVar2);
  func_0x00010b5fa088();
  uVar8 = param_5;
  func_0x00010c246620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067ec0();
  func_0x00010b5fa33c();
  func_0x00010bf8b160(param_5);
  _objc_release(param_5);
  func_0x00010c010300((double)(long)puVar2,(double)fVar9 * 1000.0,puVar4);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105f6148c; end: 105f61577;  */

void FUN_105f6148c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  _objc_retain();
  func_0x00010c0b6c20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x000107e8599c(param_3);
  uVar2 = param_4;
  func_0x000106d7a74c(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c6628;
  _objc_alloc(PTR_PTR_1126c6628);
  uVar3 = uVar2;
  func_0x00010beec820(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010300(0,0,puVar1,param_5,&PTR____CFConstantStringClassReference_110daafd8,param_4,
                      uVar3,5,0,0,0);
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f61578; end: 105f616ff;  */

void FUN_105f61578(double param_1)

{
  undefined *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [48];
  
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010bf8b340();
  _CMTimeMake(auStack_68,(long)param_1,1000);
  uStack_78 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_80 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_70 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  _CMTimeRangeMake(auStack_50,&uStack_80,auStack_68);
  func_0x00010c297240(puVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f61700; end: 105f61c57;  */

void FUN_105f61700(undefined *param_1,undefined *param_2)

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
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010bf10fa0();
  puVar14 = PTR_PTR_1126ae558;
  if (puVar1 != (undefined *)0x3) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(puVar14);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_105f61c04;
  }
  puVar14 = param_1;
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar14;
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  puVar2 = PTR__OBJC_CLASS___PHAsset_1126bd898;
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa50e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  puVar3 = puVar2;
  func_0x00010bf529e0();
  puVar14 = PTR_PTR_1126ae558;
  if (puVar3 == (undefined *)0x1) {
    puVar3 = puVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR_PTR_1126ae558;
    if (puVar3 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe9c80(puVar14);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar4 = param_1;
      func_0x000105f615f0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar3;
      func_0x00010c0c6c20();
      if (puVar14 == (undefined *)0x2) {
        puVar5 = param_2;
        func_0x00010c29a4c0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126c6630;
        _objc_opt_new(PTR_PTR_1126c6630);
        puVar14 = puVar5;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar14;
        func_0x00010bf165a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar14);
        puVar14 = puVar5;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = param_1;
        func_0x00010c0844e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c0844e0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar14;
        func_0x00010bdc0da0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar14);
        puVar8 = puVar10;
        func_0x00010bfbc3e0(puVar10);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar3);
        _objc_retain(param_1);
        _objc_retain(puVar4);
        _objc_retain(puVar10);
        puVar14 = puVar8;
        func_0x00010c0b8600(puVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        _objc_release(puVar4);
        _objc_release(param_1);
        _objc_release(puVar10);
        _objc_release(puVar3);
        _objc_release(puVar10);
      }
      else {
        if (puVar14 != (undefined *)0x1) {
          puVar14 = (undefined *)0x0;
          goto LAB_105f61be8;
        }
        puVar5 = PTR_PTR_1126bf8a0;
        _objc_alloc();
        func_0x00010c03ffa0(0x4094000000000000);
        puVar14 = param_2;
        func_0x00010bfe7f20();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar14;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar7;
        func_0x00010bdc1860();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        _objc_release(puVar14);
        puVar7 = puVar6;
        func_0x00010bfbc3e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar3);
        _objc_retain(param_1);
        _objc_retain(puVar4);
        puVar14 = puVar7;
        func_0x00010c0b8600(puVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        _objc_release(puVar4);
        _objc_release(param_1);
        puVar7 = puVar3;
      }
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
LAB_105f61be8:
    _objc_release(puVar4);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(puVar14);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
LAB_105f61c04:
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126aff30;
    func_0x00010bfe94a0(PTR_PTR_1126aff30);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126aff28;
    puVar14 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2a9a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    puVar14 = PTR_PTR_1126aff40;
    _objc_alloc(PTR_PTR_1126aff40);
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0844e0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c0844e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01d3c0(puVar14);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 105f61c58; end: 105f61edb;  */

void FUN_105f61c58(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aff30;
  func_0x00010bfe94a0(PTR_PTR_1126aff30);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126aff28;
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2a9a0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126aff40;
  _objc_alloc(PTR_PTR_1126aff40);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0844e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01d3c0(puVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105f61edc; end: 105f61f27;  */

void FUN_105f61edc(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain();
  _objc_alloc(puVar1);
  func_0x00010c038f40();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f61f28; end: 105f62277; -[SCMemoriesCameraRollPaginator initWithPhotoLibraryFetcher:photoPermissionCoordinator:allowPhotoEntries:allowVideoEntries:coreConfigProvider:shouldUseAlbums:userPreference:source:cameraRollConfig:] */

undefined8 *
FUN_105f61f28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int param_5,int param_6,undefined8 param_7,int param_8,undefined8 param_9,
             undefined8 param_10,undefined *param_11)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126ee478;
  puVar2 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 == (undefined8 *)0x0) goto LAB_105f6222c;
  _objc_retain(param_3);
  uVar3 = puVar2[1];
  puVar2[1] = param_3;
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126ae790;
  _objc_alloc();
  func_0x00010c021520();
  uVar3 = puVar2[7];
  puVar2[7] = puVar4;
  _objc_release(uVar3);
  _objc_retain(param_4);
  uVar3 = puVar2[0x10];
  puVar2[0x10] = param_4;
  _objc_release(uVar3);
  _objc_retain(param_7);
  uVar3 = puVar2[9];
  puVar2[9] = param_7;
  _objc_release(uVar3);
  _objc_retain(param_9);
  uVar3 = puVar2[0xc];
  puVar2[0xc] = param_9;
  _objc_release(uVar3);
  puVar2[0xd] = param_10;
  uVar3 = param_7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x000108ec0dec();
  *(char *)(puVar2 + 0xb) = (char)uVar5;
  _objc_release(uVar3);
  puVar2[4] = 0;
  puVar4 = PTR_PTR_1126ae820;
  _objc_opt_new();
  uVar3 = puVar2[5];
  puVar2[5] = puVar4;
  _objc_release(uVar3);
  if ((*(byte *)(puVar2 + 0xb) & 1) == 0) {
    func_0x00010c0d9840(puVar2[5]);
  }
  puVar4 = PTR_PTR_1126ae820;
  _objc_opt_new();
  uVar3 = puVar2[10];
  puVar2[10] = puVar4;
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126ae820;
  _objc_opt_new();
  uVar3 = puVar2[6];
  puVar2[6] = puVar4;
  _objc_release(uVar3);
  uVar3 = 3;
  if (param_6 == 0) {
    uVar3 = 0;
  }
  uVar5 = 0;
  if (param_6 == 0) {
    uVar5 = 2;
  }
  if (param_5 == 0) {
    uVar5 = uVar3;
  }
  puVar2[2] = uVar5;
  _objc_retain(param_11);
  uVar3 = puVar2[0xe];
  puVar2[0xe] = param_11;
  _objc_release(uVar3);
  puVar4 = param_11;
  func_0x00010c0f1c60();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    puVar2[0xf] = 100;
  }
  else {
    puVar6 = param_11;
    func_0x00010c0f1c60();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c067fc0();
    puVar2[0xf] = puVar7;
    _objc_release(puVar6);
  }
  _objc_release(puVar4);
  uVar3 = param_7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x000108ec0ec4();
  *(char *)(puVar2 + 0x11) = (char)uVar5;
  _objc_release(uVar3);
  puVar8 = puVar2;
  func_0x00010be3ea20();
  uVar1 = (uint)puVar8 ^ 1;
  *(char *)((long)puVar2 + 0x89) = (char)uVar1;
  if ((uVar1 & 1) != 0) goto LAB_105f6222c;
  puVar4 = param_11;
  func_0x00010c10a920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar4 == (undefined *)0x0) {
    if (param_8 != 0) {
      puVar4 = PTR_PTR_1126c6638;
      func_0x00010bdf9160();
      _objc_retainAutoreleasedReturnValue();
      goto joined_r0x000105f6220c;
    }
  }
  else {
    puVar6 = param_11;
    func_0x00010c10a920();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    (**(code **)(puVar6 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
joined_r0x000105f6220c:
    if (puVar4 != (undefined *)0x0) {
      func_0x00010bedf660(puVar2);
      _objc_release(puVar4);
    }
  }
  func_0x00010bfa57c0(puVar2);
LAB_105f6222c:
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 105f62278; end: 105f6229f; -[SCMemoriesCameraRollPaginator selectedAssetCollectionObservable] */

void FUN_105f62278(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f622a0; end: 105f623b7; -[SCMemoriesCameraRollPaginator setSelectedAssetCollection:] */

void FUN_105f622a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x90);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x00010bedf660(param_1,param_2,param_3);
    *(undefined1 *)(param_1 + 0x40) = 0;
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release(uVar2);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined1 *)(param_1 + 0x89) = 0;
    puVar3 = PTR_PTR_1126c6640;
    _objc_alloc(PTR_PTR_1126c6640);
    func_0x00010c055cc0();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x30),param_2,puVar3);
    func_0x00010bfa57c0(param_1);
    puVar4 = PTR_PTR_1126c6638;
    func_0x00010be9dd80(PTR_PTR_1126c6638,param_2,*(undefined8 *)(param_1 + 0x68));
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c09da80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f623b8; end: 105f6258f; -[SCMemoriesCameraRollPaginator fetchCameraRoll] */

void FUN_105f623b8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = param_1;
  func_0x00010be3ea20();
  if ((int)lVar1 != 0) {
    _objc_initWeak(auStack_48,param_1);
    if (*(long *)(param_1 + 0x90) == 0) {
      puVar4 = PTR_PTR_1126b2688;
      _objc_opt_new(PTR_PTR_1126b2688);
      func_0x00010c2b4b40();
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf21f60(puVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_78,auStack_48);
      func_0x00010bfab780(uVar2);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_78);
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x90);
      func_0x00010bf51e00(uVar3);
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_105f62590;
      puStack_58 = &UNK_1108fdba0;
      _objc_copyWeak(auStack_50,auStack_48);
      func_0x00010bfab6a0(uVar2);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_50);
    }
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 105f62590; end: 105f62687;  */

void FUN_105f62590(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 auStack_90 [6];
  undefined8 auStack_60 [6];
  
  puVar4 = auStack_90;
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) goto LAB_105f62664;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    lVar1 = param_2;
    func_0x00010bf529e0();
    if (lVar1 == 0) goto LAB_105f62664;
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x000108ec0dd8();
    _objc_release(uVar2);
    if ((int)uVar5 == 0) goto LAB_105f62664;
    pcVar3 = FUN_105f62694;
  }
  else {
    pcVar3 = FUN_105f62688;
    puVar4 = auStack_60;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  *puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puVar4[1] = 0xc2000000;
  puVar4[2] = pcVar3;
  puVar4[3] = &UNK_110841f80;
  puVar4[4] = param_1;
  _objc_retain(param_2);
  puVar4[5] = param_2;
  func_0x00010c0f7fc0(uVar5);
  _objc_release(puVar4[5]);
LAB_105f62664:
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 105f62688; end: 105f62693;  */

void FUN_105f62688(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3b030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__initialLoadWithFetchResult__11256c5a8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105f62694; end: 105f6284b;  */

void FUN_105f62694(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = *(long *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar1 = *(undefined8 *)(lVar5 + 0x18);
  *(undefined8 *)(lVar5 + 0x18) = uVar4;
  _objc_release(uVar1);
  func_0x00010be883e0(*(undefined8 *)(param_1 + 0x20));
  lVar5 = *(long *)(param_1 + 0x20);
  uVar2 = *(ulong *)(lVar5 + 0x18);
  uVar6 = *(long *)(lVar5 + 0x78) * *(long *)(lVar5 + 0x20);
  func_0x00010bf529e0();
  if (uVar2 <= uVar6) {
    uVar6 = uVar2;
  }
  puVar3 = PTR_PTR_1126c6640;
  _objc_alloc(PTR_PTR_1126c6640);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be215c0(uVar4,param_2,0,uVar6 - 1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c055cc0(puVar3,param_2,0,uVar4);
  _objc_release(uVar4);
  func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30),param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105f6284c; end: 105f62857;  */

void FUN_105f6284c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3b030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__initialLoadWithFetchResult__11256c5a8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105f62858; end: 105f62917;  */

void FUN_105f62858(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  lVar5 = *(long *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar1 = *(undefined8 *)(lVar5 + 0x18);
  *(undefined8 *)(lVar5 + 0x18) = uVar4;
  _objc_release(uVar1);
  func_0x00010be883e0(*(undefined8 *)(param_1 + 0x20));
  lVar5 = *(long *)(param_1 + 0x20);
  lVar7 = *(long *)(lVar5 + 0x78);
  uVar2 = *(ulong *)(lVar5 + 0x18);
  lVar5 = *(long *)(lVar5 + 0x20);
  func_0x00010bf529e0();
  uVar6 = lVar7 * lVar5;
  if (uVar2 <= uVar6) {
    uVar6 = uVar2;
  }
  puVar3 = PTR_PTR_1126c6640;
  _objc_alloc(PTR_PTR_1126c6640);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be215c0(uVar4,param_2,0,uVar6 - 1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c055cc0(puVar3,param_2,0,uVar4);
  _objc_release(uVar4);
  func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30),param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105f62918; end: 105f629d7; -[SCMemoriesCameraRollPaginator reset] */

void FUN_105f62918(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(char *)(param_1 + 0x40) == '\x01') {
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      _objc_initWeak(auStack_28,param_1);
      uVar2 = *(undefined8 *)(param_1 + 0x38);
      _objc_copyWeak(auStack_30,auStack_28);
      func_0x00010c0f7fc0(uVar2);
      _objc_destroyWeak(auStack_30);
      _objc_destroyWeak(auStack_28);
    }
  }
  return;
}



/* Entry: 105f629d8; end: 105f62a8f;  */

void FUN_105f629d8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (0 < *(long *)(param_1 + 0x78))) {
    uVar1 = *(ulong *)(param_1 + 0x18);
    uVar4 = *(long *)(param_1 + 0x20) * *(long *)(param_1 + 0x78);
    func_0x00010bf529e0();
    if (uVar1 <= uVar4) {
      uVar4 = uVar1;
    }
    if (uVar4 != 0) {
      puVar2 = PTR_PTR_1126c6640;
      _objc_alloc(PTR_PTR_1126c6640);
      lVar3 = param_1;
      func_0x00010be215c0(param_1,param_2,0,uVar4 - 1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c055cc0(puVar2,param_2,0,lVar3);
      _objc_release(lVar3);
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x30),param_2,puVar2);
      _objc_release(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f62a90; end: 105f62a97; -[SCMemoriesCameraRollPaginator observe] */

void FUN_105f62a90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_toSCBridgeObservable_11267a270);
  return;
}



/* Entry: 105f62a98; end: 105f62a9f; -[SCMemoriesCameraRollPaginator observeUpdates] */

void FUN_105f62a98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_toSCBridgeObservable_11267a270);
  return;
}



/* Entry: 105f62aa0; end: 105f62b53; -[SCMemoriesCameraRollPaginator loadNextPage] */

void FUN_105f62aa0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105f62b54; end: 105f62c37;  */

void FUN_105f62b54(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (uVar2 = *(ulong *)(lVar1 + 0x18), uVar2 != 0)) {
    if (*(char *)(lVar1 + 0x58) == '\x01') {
      _CACurrentMediaTime();
      uVar2 = *(ulong *)(lVar1 + 0x18);
      func_0x00010bf529e0(uVar2);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(lVar1 + 0x20);
      lVar6 = *(long *)(lVar1 + 0x78);
      func_0x00010bf529e0();
      if (uVar2 <= (ulong)(lVar6 * lVar5)) goto LAB_105f62c24;
      _CACurrentMediaTime();
      lVar6 = *(long *)(lVar1 + 0x78);
      uVar4 = *(ulong *)(lVar1 + 0x18);
      lVar5 = *(long *)(lVar1 + 0x20);
      func_0x00010bf529e0();
      *(long *)(lVar1 + 0x20) = *(long *)(lVar1 + 0x20) + 1;
      lVar5 = lVar6 * lVar5;
      uVar2 = lVar5 + lVar6;
      if (uVar4 <= uVar2) {
        uVar2 = uVar4;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    func_0x00010be215c0(uVar3,param_2,lVar5,uVar2 - 1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be883e0(lVar1);
    func_0x00010c0d9840(*(undefined8 *)(lVar1 + 0x28),param_2,uVar3);
    _CACurrentMediaTime();
    _objc_release(uVar3);
  }
LAB_105f62c24:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105f62c38; end: 105f62cb3; -[SCMemoriesCameraRollPaginator hasReachedLastPage] */

byte FUN_105f62c38(long param_1)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  
  if (*(char *)(param_1 + 0x88) == '\x01') {
    bVar3 = *(byte *)(param_1 + 0x89);
    goto LAB_105f62ca4;
  }
  lVar1 = param_1;
  func_0x00010be3ea20();
  if ((int)lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x18);
    if (uVar2 == 0) {
      bVar3 = 0;
      goto LAB_105f62ca4;
    }
    if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
      func_0x00010bf529e0();
      bVar3 = uVar2 <= (ulong)(*(long *)(param_1 + 0x78) * *(long *)(param_1 + 0x20));
      goto LAB_105f62ca4;
    }
  }
  bVar3 = 1;
LAB_105f62ca4:
  return bVar3 & 1;
}



/* Entry: 105f62cb4; end: 105f62d13; -[SCMemoriesCameraRollPaginator _refreshCachedHasReachedLastPage] */

void FUN_105f62cb4(long param_1)

{
  ulong uVar1;
  bool bVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  if (uVar1 == 0) {
    *(undefined1 *)(param_1 + 0x89) = 0;
  }
  else {
    if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
      func_0x00010bf529e0();
      bVar2 = uVar1 <= (ulong)(*(long *)(param_1 + 0x78) * *(long *)(param_1 + 0x20));
    }
    else {
      bVar2 = true;
    }
    *(bool *)(param_1 + 0x89) = bVar2;
  }
  return;
}



/* Entry: 105f62d14; end: 105f62d1b; -[SCMemoriesCameraRollPaginator shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_105f62d14(void)

{
  return 0;
}



/* Entry: 105f62d1c; end: 105f62d27; -[SCMemoriesCameraRollPaginator pushToValdiMarshaller:] */

void FUN_105f62d1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af954f8(param_3,param_1);
  func_0x00010af954c0();
  func_0x00010af954b8();
  func_0x00010af953dc();
  func_0x00010af953ec();
  return;
}



/* Entry: 105f62d28; end: 105f62e13; -[SCMemoriesCameraRollPaginator _getPaginateItemsWithStartIndex:endIndex:] */

void FUN_105f62d28(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  uVar1 = lVar2 - 1U;
  if (param_4 <= lVar2 - 1U) {
    uVar1 = param_4;
  }
  puVar5 = PTR____NSArray0__struct_11034ab48;
  if (param_3 <= uVar1) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,(uVar1 - param_3) + 1);
    _objc_retainAutoreleasedReturnValue();
    do {
      lVar4 = *(long *)(param_1 + 0x18);
      func_0x00010c0dfd20(lVar4,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x000107fe9894();
      lVar2 = lVar4;
      FUN_105f60ed0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 != 0) {
        func_0x00010befa120(puVar3,param_2,lVar2);
      }
      _objc_release(lVar2);
      _objc_release(lVar4);
      param_3 = param_3 + 1;
    } while (param_3 <= uVar1);
    puVar5 = puVar3;
    func_0x00010bf51e00(puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105f62e14; end: 105f62e5b; -[SCMemoriesCameraRollPaginator _initialLoadWithFetchResult:] */

void FUN_105f62e14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x40) = 1;
  func_0x00010be883e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c09bcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_loadNextPage_112604948);
  return;
}



/* Entry: 105f62e5c; end: 105f62eb3; -[SCMemoriesCameraRollPaginator _updateSelectedAssetCollection:] */

void FUN_105f62e5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x50),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f62eb4; end: 105f63003; +[SCMemoriesCameraRollPaginator _defaultAssetCollectionForSource:userPreference:] */

undefined ** FUN_105f62eb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126c6638;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010be9dd80(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar3 = lVar2;
  puVar6 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  ppuVar5 = (undefined **)PTR__OBJC_CLASS___PHAssetCollection_1126bf858;
  if (lVar3 == 0) {
    ppuVar7 = (undefined **)0x0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_50 = lVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_50,1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bfa4f40(ppuVar5,param_2,puVar4,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    _objc_release(puVar4);
  }
  _objc_release(lVar3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar7);
    return ppuVar7;
  }
  ___stack_chk_fail();
  if (puVar6 + -1 < (undefined *)0x10) {
    return (undefined **)(&PTR_PTR_1108fdbd0)[(long)(puVar6 + -1)];
  }
  return &PTR____CFConstantStringClassReference_110e33958;
}



/* Entry: 105f63004; end: 105f6302b; +[SCMemoriesCameraRollPaginator _selectedAlbumKeyForSource:] */

undefined ** FUN_105f63004(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 0x10) {
    return (undefined **)(&PTR_PTR_1108fdbd0)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110e33958;
}



/* Entry: 105f6302c; end: 105f630a3; -[SCMemoriesCameraRollPaginator _isCameraRollFullAccess] */

undefined8 FUN_105f6302c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x80);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c079f60();
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c079f80();
    _objc_release(uVar3);
  }
  else {
    uVar4 = 1;
  }
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 105f630a4; end: 105f630ab; -[SCMemoriesCameraRollPaginator selectedAssetCollection] */

undefined8 FUN_105f630a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 105f630ac; end: 105f63147; -[SCMemoriesCameraRollPaginator .cxx_destruct] */

void FUN_105f630ac(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f63148; end: 105f63273; -[SCMemoriesCameraRollProvider initWithMemoriesCameraRollPaginator:photoPermissionCoordinator:coreConfigProvider:photoLibraryFetcher:allowPhotoEntries:allowVideoEntries:] */

undefined1 *
FUN_105f63148(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,int param_7,int param_8)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126ee480;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + 8);
    *(undefined8 *)((long)puVar2 + 8) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x10);
    *(undefined8 *)((long)puVar2 + 0x10) = param_6;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x20);
    *(undefined8 *)((long)puVar2 + 0x20) = param_4;
    _objc_release(uVar3);
    uVar3 = 3;
    if (param_8 == 0) {
      uVar3 = 0;
    }
    uVar1 = 0;
    if (param_8 == 0) {
      uVar1 = 2;
    }
    if (param_7 == 0) {
      uVar1 = uVar3;
    }
    *(undefined8 *)((long)puVar2 + 0x18) = uVar1;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x28);
    *(undefined8 *)((long)puVar2 + 0x28) = param_5;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 105f63274; end: 105f6336f; -[SCMemoriesCameraRollProvider createPaginator] */

void FUN_105f63274(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar2);
  func_0x00010c137fe0(uVar2);
  puVar1 = PTR_PTR_1126c6648;
  _objc_alloc(PTR_PTR_1126c6648);
  func_0x00010c030cc0();
  func_0x00010c1d08e0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f63370; end: 105f6338f;  */

void FUN_105f63370(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e06d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_observe_112615bc8);
  return;
}



/* Entry: 105f63390; end: 105f633ff; -[SCMemoriesCameraRollProvider currentAlbumObservable] */

void FUN_105f63390(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c1592c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105f63400; end: 105f6344b;  */

void FUN_105f63400(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c6650;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c032c20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f6344c; end: 105f63617; -[SCMemoriesCameraRollProvider limitPhotoLibraryAccessObservable] */

void FUN_105f6344c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126c6658;
    _objc_alloc_init();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_105f63618;
    puStack_68 = &UNK_110841f80;
    lStack_60 = param_1;
    _objc_retain();
    puStack_58 = puVar2;
    func_0x0001000d76cc("APPSTORE",&puStack_80);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x30));
    _objc_initWeak(auStack_88,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0fb4e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_90,auStack_88);
    _objc_retain(puVar2);
    func_0x00010c25ff60(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + 0x30);
    func_0x00010c272120(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
    _objc_release(puStack_58);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105f63618; end: 105f63623;  */

void FUN_105f63618(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updatePermissionStatusForAuthor_112594d30,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105f63624; end: 105f636e7;  */

void FUN_105f63624(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    uStack_40 = 0x105f636b8;
    puStack_38 = &UNK_110841f80;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lStack_30 = lVar1;
    _objc_retain(uVar2);
    uStack_28 = uVar2;
    func_0x0001000d76cc("APPSTORE",&puStack_50);
    _objc_release(uStack_28);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 105f636e8; end: 105f637b3; -[SCMemoriesCameraRollProvider _updatePermissionStatusForAuthorizedState:] */

void FUN_105f636e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c079f60();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c079f80();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c079fa0();
      _objc_release(uVar3);
      uVar5 = 3;
      if ((int)uVar4 != 0) {
        uVar5 = 1;
      }
    }
    else {
      uVar5 = 5;
    }
  }
  else {
    uVar5 = 4;
  }
  func_0x00010c16ca60(param_3,param_2,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f637b4; end: 105f63ad3; -[SCMemoriesCameraRollProvider observeDataWithAlbumId:] */

void FUN_105f637b4(ulong param_1,undefined1 *param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined **unaff_x24;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new();
  uVar2 = param_1;
  func_0x00010be3ea20();
  puVar7 = puVar1;
  if ((uVar2 & 1) == 0) {
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    goto LAB_105f63a44;
  }
  _objc_initWeak(auStack_68,param_1);
  if ((param_3 == 0) ||
     (lVar3 = param_3, func_0x00010c08fa60(), puVar5 = PTR__OBJC_CLASS___PHAssetCollection_1126bf858
     , lVar3 == 0)) {
LAB_105f6394c:
    puVar5 = PTR_PTR_1126b2688;
    _objc_opt_new();
    func_0x00010c2b4b40();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = *(undefined ***)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    param_2 = auStack_68;
    _objc_copyWeak(auStack_a0,param_2);
    _objc_retain(puVar1);
    func_0x00010bfab780(unaff_x24);
    _objc_release(unaff_x24);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_a0);
    _objc_release(puVar4);
    _objc_release(puVar5);
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_60 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa4f40();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    if (puVar9 == (undefined *)0x0) goto LAB_105f6394c;
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar9;
    func_0x00010bf51e00();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_105f63ad4;
    puStack_80 = &UNK_1108fdcc0;
    unaff_x24 = &puStack_98;
    param_2 = auStack_68;
    _objc_copyWeak(auStack_70,param_2);
    _objc_retain(puVar1);
    puStack_78 = puVar1;
    func_0x00010bfab6a0(uVar6);
    _objc_release(puVar5);
    _objc_release(uVar6);
    _objc_release(puStack_78);
    _objc_destroyWeak(auStack_70);
  }
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_destroyWeak(auStack_68);
LAB_105f63a44:
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x24 + 5);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  _objc_retain(param_2);
  lVar3 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    puVar1 = PTR_PTR_1126c6660;
    _objc_alloc(PTR_PTR_1126c6660);
    puVar8 = param_2;
    func_0x00010bfa9d40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c012900(puVar1);
    _objc_release(puVar8);
    func_0x00010c0d9840(*(undefined8 *)(param_3 + 0x20));
    _objc_release(puVar1);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105f63ad4; end: 105f63c1b;  */

void FUN_105f63ad4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126c6660;
    _objc_alloc(PTR_PTR_1126c6660);
    uVar3 = param_2;
    func_0x00010bfa9d40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c012900(puVar2);
    _objc_release(uVar3);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105f63c1c; end: 105f63c23; -[SCMemoriesCameraRollProvider shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_105f63c1c(void)

{
  return 0;
}



/* Entry: 105f63c24; end: 105f63c2f; -[SCMemoriesCameraRollProvider pushToValdiMarshaller:] */

void FUN_105f63c24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af954f8(param_3,param_1);
  func_0x00010af954c0();
  func_0x00010af954b8();
  func_0x00010af953dc();
  func_0x00010af953ec();
  return;
}



/* Entry: 105f63c30; end: 105f63ca7; -[SCMemoriesCameraRollProvider _isCameraRollFullAccess] */

undefined8 FUN_105f63c30(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c079f60();
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c079f80();
    _objc_release(uVar3);
  }
  else {
    uVar4 = 1;
  }
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 105f63ca8; end: 105f63d1b; -[SCMemoriesCameraRollProvider switchToRecentsAlbum] */

void FUN_105f63ca8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___PHAssetCollection_1126bf858;
  func_0x00010bfa4f60(PTR__OBJC_CLASS___PHAssetCollection_1126bf858,param_2,2,0xd1,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 != (undefined *)0x0) {
    func_0x00010c1fae60(*(undefined8 *)(param_1 + 8),param_2,puVar2);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f63d1c; end: 105f63d8f; -[SCMemoriesCameraRollProvider switchToFavoritesAlbum] */

void FUN_105f63d1c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___PHAssetCollection_1126bf858;
  func_0x00010bfa4f60(PTR__OBJC_CLASS___PHAssetCollection_1126bf858,param_2,2,0xcb,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 != (undefined *)0x0) {
    func_0x00010c1fae60(*(undefined8 *)(param_1 + 8),param_2,puVar2);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f63d90; end: 105f63e03; -[SCMemoriesCameraRollProvider switchToVideosAlbum] */

void FUN_105f63d90(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___PHAssetCollection_1126bf858;
  func_0x00010bfa4f60(PTR__OBJC_CLASS___PHAssetCollection_1126bf858,param_2,2,0xca,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 != (undefined *)0x0) {
    func_0x00010c1fae60(*(undefined8 *)(param_1 + 8),param_2,puVar2);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f63e04; end: 105f63e57; -[SCMemoriesCameraRollProvider .cxx_destruct] */

void FUN_105f63e04(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f63e58; end: 105f63efb; -[SCMemoriesEmptyStateController initWithPhotoPermissionCoordinator:cameraRollFetcher:] */

undefined1 *
FUN_105f63e58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ee488;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f63efc; end: 105f63f03; -[SCMemoriesEmptyStateController shouldShowOnboardingScreen] */

undefined8 FUN_105f63efc(void)

{
  return 0;
}



/* Entry: 105f63f04; end: 105f63f0b; -[SCMemoriesEmptyStateController getOnboardingScreenPortraitUri] */

undefined8 FUN_105f63f04(void)

{
  return 0;
}



/* Entry: 105f63f0c; end: 105f63f0f; -[SCMemoriesEmptyStateController onTapOnboardingGotIt] */

void FUN_105f63f0c(void)

{
  return;
}



/* Entry: 105f63f10; end: 105f63f13; -[SCMemoriesEmptyStateController onTapOnboardingLearnMore] */

void FUN_105f63f10(void)

{
  return;
}



/* Entry: 105f63f14; end: 105f63f17; -[SCMemoriesEmptyStateController onTapCreateSnap] */

void FUN_105f63f14(void)

{
  return;
}



/* Entry: 105f63f18; end: 105f6403b; -[SCMemoriesEmptyStateController onTapAcquireCameraRollAuthorization] */

void FUN_105f63f18(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010bf10fa0();
  if (puVar1 == (undefined *)0x0) {
    _objc_initWeak(auStack_28,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010c134a40(uVar2);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
    return;
  }
  puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010bf10fa0();
  if ((puVar1 != (undefined *)0x2) &&
     (puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30, func_0x00010bf10fa0(),
     puVar1 != (undefined *)0x1)) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e99c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105f6403c; end: 105f640c3;  */

void FUN_105f6403c(long param_1,int param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_1 + 0x18;
      _objc_loadWeakRetained(lVar1);
      func_0x00010bf10fa0(PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30);
      func_0x00010bf8ede0(lVar1);
      _objc_release(lVar1);
    }
    if (param_2 != 0) {
      func_0x00010bfa57c0(*(undefined8 *)(param_1 + 0x10));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f640c4; end: 105f640cb; -[SCMemoriesEmptyStateController shouldHideCreateSnapButton] */

undefined8 FUN_105f640c4(void)

{
  return 1;
}



/* Entry: 105f640cc; end: 105f640d3; -[SCMemoriesEmptyStateController shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_105f640cc(void)

{
  return 0;
}



/* Entry: 105f640d4; end: 105f640df; -[SCMemoriesEmptyStateController pushToValdiMarshaller:] */

void FUN_105f640d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af954f8(param_3,param_1);
  func_0x00010af954c0();
  func_0x00010af954b8();
  func_0x00010af953dc();
  func_0x00010af953ec();
  return;
}



/* Entry: 105f640e0; end: 105f640f7; -[SCMemoriesEmptyStateController delegate] */

void FUN_105f640e0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f640f8; end: 105f64103; -[SCMemoriesEmptyStateController setDelegate:] */

void FUN_105f640f8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 105f64104; end: 105f6413b; -[SCMemoriesEmptyStateController .cxx_destruct] */

void FUN_105f64104(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f6413c; end: 105f64143; -[SCMemoriesPhotoLibraryAuthorizedState setAuthorizedState:] */

void FUN_105f6413c(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 105f64144; end: 105f6414b; -[SCMemoriesPhotoLibraryAuthorizedState authorizedState] */

undefined4 FUN_105f64144(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 105f6414c; end: 105f64157; -[SCMemoriesPhotoLibraryAuthorizedState pushToValdiMarshaller:] */

void FUN_105f6414c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af954f8(param_3,param_1);
  func_0x00010af954c0();
  func_0x00010af954b8();
  func_0x00010af953dc();
  func_0x00010af953ec();
  return;
}



/* Entry: 105f64158; end: 105f641cb; -[SCMemoriesSnapData initWithMemoriesSnapItem:] */

undefined1 * FUN_105f64158(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ee490;
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



/* Entry: 105f641cc; end: 105f641e7; -[SCMemoriesSnapData itemCount] */

double FUN_105f641cc(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bf529e0(uVar1);
  return (double)uVar1;
}



/* Entry: 105f641e8; end: 105f641eb; -[SCMemoriesSnapData setItemCount:] */

void FUN_105f641e8(void)

{
  return;
}



/* Entry: 105f641ec; end: 105f641f7; -[SCMemoriesSnapData getItemWithIndex:preferredWidth:preferredHeight:] */

void FUN_105f641ec(double param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dfd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 8),PTR_s_objectAtIndex__112615960,(long)param_1);
  return;
}



/* Entry: 105f641f8; end: 105f64203; -[SCMemoriesSnapData pushToValdiMarshaller:] */

undefined8 FUN_105f641f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af97f34(param_3,param_1);
  func_0x00010af97f2c();
  func_0x00010af97ee8();
  func_0x00010af97ef8();
  return param_3;
}



/* Entry: 105f64204; end: 105f64243; -[SCMemoriesSnapData isValidIndex:] */

bool FUN_105f64204(double param_1,long param_2)

{
  ulong uVar1;
  
  if (param_1 < 0.0) {
    return false;
  }
  uVar1 = *(ulong *)(param_2 + 8);
  func_0x00010bf529e0();
  return param_1 < (double)uVar1;
}



/* Entry: 105f64244; end: 105f6424f; -[SCMemoriesSnapData .cxx_destruct] */

void FUN_105f64244(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f64250; end: 105f6459f; -[SCMemoriesSnapStore initWithMergedDataSource:coreConfigProvider:entrySyncStatusGenerator:memoriesEncryptedDatabase:dataObjectContext:entryEligibility:] */

undefined8 *
FUN_105f64250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126ee498;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = puVar1[4];
    puVar1[4] = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    puVar1[3] = 0;
    *(undefined1 *)((long)puVar1 + 0x81) = 1;
    uVar2 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x000108ec0ec4();
    *(char *)(puVar1 + 0x10) = (char)uVar4;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x000108ec0ee0();
    *(char *)(puVar1 + 0xe) = (char)uVar4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_7;
    _objc_release(uVar2);
    puVar1[0xf] = param_8;
    _objc_initWeak(auStack_78,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    if (*(char *)(puVar1 + 0xe) == '\x01') {
      _objc_retain(param_5);
      uVar2 = puVar1[10];
      puVar1[10] = param_5;
      _objc_release(uVar2);
    }
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar5);
    uVar2 = puVar1[1];
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105f645a0; end: 105f64607;  */

void FUN_105f645a0(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  if (param_1 != 0) {
    func_0x00010be1d680(param_1);
  }
  func_0x00010c2971c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f64608; end: 105f6479b; -[SCMemoriesSnapStore createPaginator] */

void FUN_105f64608(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  puVar1 = PTR_PTR_1126c6648;
  _objc_alloc(PTR_PTR_1126c6648);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105f6479c;
  puStack_78 = &UNK_11085af88;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105f647a4;
  puStack_a0 = &UNK_1108434b0;
  uStack_70 = uVar2;
  _objc_copyWeak(auStack_98,auStack_68);
  _objc_copyWeak(auStack_c0,auStack_68);
  func_0x00010c030cc0(puVar1);
  func_0x00010c1d08e0();
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f6479c; end: 105f647a3;  */

void FUN_105f6479c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_toSCBridgeObservable_11267a270);
  return;
}



/* Entry: 105f647a4; end: 105f6481f;  */

void FUN_105f647a4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be4e200(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f64820; end: 105f64827;  */

void FUN_105f64820(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_toSCBridgeObservable_11267a270);
  return;
}



/* Entry: 105f64828; end: 105f6482f; -[SCMemoriesSnapStore shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_105f64828(void)

{
  return 0;
}



/* Entry: 105f64830; end: 105f6483b; -[SCMemoriesSnapStore pushToValdiMarshaller:] */

undefined8 FUN_105f64830(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af97f34(param_3,param_1);
  func_0x00010af97f2c();
  func_0x00010af97ee8();
  func_0x00010af97ef8();
  return param_3;
}



/* Entry: 105f6483c; end: 105f64843; -[SCMemoriesSnapStore observeData] */

void FUN_105f6483c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_toSCBridgeObservable_11267a270);
  return;
}



/* Entry: 105f64844; end: 105f648fb; -[SCMemoriesSnapStore observeSnapsInTimeRangeWithQuery:] */

void FUN_105f64844(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105f648fc;
  puStack_40 = &UNK_1108fdd20;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0b8600(uVar2,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f648fc; end: 105f6496f;  */

void FUN_105f648fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c6668;
  func_0x00010c2457e0(PTR_PTR_1126c6668,param_2,*(undefined8 *)(param_1 + 0x20),param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c6670;
  _objc_alloc(PTR_PTR_1126c6670);
  puVar3 = puVar1;
  func_0x00010bf529e0(puVar1);
  func_0x00010c04a1c0((double)puVar3,puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f64970; end: 105f64b93; +[SCMemoriesSnapStore snapsMatchingQuery:items:] */

void FUN_105f64970(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined *puStack_190;
  undefined *puStack_188;
  ulong uStack_180;
  ulong uStack_178;
  long lStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  ulong uStack_148;
  ulong uStack_140;
  long lStack_138;
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
  lStack_138 = param_4;
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c250fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf957a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_140 = param_3;
  func_0x00010c099040();
  _objc_retainAutoreleasedReturnValue();
  uStack_148 = param_3;
  if (param_3 == 0) {
    puVar13 = (undefined *)0xffffffffffffffff;
  }
  else {
    func_0x00010c067fc0();
    puVar13 = (undefined *)(param_3 & ((long)param_3 >> 0x3f ^ 0xffffffffffffffffU));
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lStack_138;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(lStack_138);
  puVar9 = &uStack_130;
  puVar10 = auStack_f0;
  uVar11 = 0x10;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar12 = *plStack_120;
    do {
      param_4 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(lStack_138);
        }
        puVar15 = *(undefined8 **)(lStack_128 + param_4 * 8);
        puVar5 = puVar3;
        func_0x00010bf529e0();
        if (puVar13 <= puVar5) goto LAB_105f64b20;
        puVar6 = puVar15;
        func_0x00010bf31360();
        _objc_retainAutoreleasedReturnValue();
        if (((puVar6 != (undefined8 *)0x0) &&
            ((puVar7 = puVar6, func_0x00010c0b4ca0(), uVar1 == 0 ||
             (uVar8 = uVar1, func_0x00010c0b4ca0(), (long)uVar8 <= (long)puVar7)))) &&
           ((uVar2 == 0 || (uVar8 = uVar2, func_0x00010c0b4ca0(), (long)puVar7 <= (long)uVar8)))) {
          func_0x00010befa120(puVar3);
          puVar9 = puVar15;
        }
        _objc_release(puVar6);
        param_4 = param_4 + 1;
      } while (lVar4 != param_4);
      puVar9 = &uStack_130;
      puVar10 = auStack_f0;
      uVar11 = 0x10;
      lVar4 = lStack_138;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
LAB_105f64b20:
  lVar4 = lStack_138;
  _objc_release(lStack_138);
  _objc_release(uStack_148);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(lVar4);
  uVar8 = uStack_140;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  lStack_168 = lVar4;
  pcStack_158 = FUN_105f64b94;
  puStack_190 = puVar3;
  puStack_188 = puVar13;
  uStack_180 = uVar2;
  uStack_178 = uVar1;
  lStack_170 = param_4;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  _objc_retain(puVar10);
  _objc_retain(uVar11);
  _objc_retain(param_6);
  _objc_initWeak(auStack_198,uVar8);
  uVar14 = *(undefined8 *)(uVar8 + 0x10);
  _objc_copyWeak(auStack_1a0,auStack_198);
  _objc_retain(puVar10);
  func_0x00010c0f7fc0(uVar14);
  _objc_release(puVar10);
  _objc_destroyWeak(auStack_1a0);
  _objc_destroyWeak(auStack_198);
  _objc_release(param_6);
  _objc_release(uVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  return;
}



/* Entry: 105f64b94; end: 105f64caf; -[SCMemoriesSnapStore dataSource:didChangeEntries:failedEntries:fetchEntryError:] */

void FUN_105f64b94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}


