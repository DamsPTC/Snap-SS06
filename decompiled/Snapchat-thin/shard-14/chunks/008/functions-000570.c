/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b693868; end: 10b693937;  */

void FUN_10b693868(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                  undefined8 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  
  dVar1 = param_1;
  dVar3 = param_2;
  func_0x00010c23d0a0();
  func_0x00010c23d0a0(param_5);
  dVar2 = param_1 + dVar3;
  param_3 = param_3 + dVar2;
  func_0x00010c23d0a0(param_5);
  func_0x00010c23d0a0(param_5);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10b693938;
  puStack_80 = &UNK_110d58b20;
  uStack_78 = param_5;
  dStack_70 = param_2;
  dStack_68 = param_1;
  dStack_60 = dVar2;
  dStack_58 = dVar3;
  func_0x00010c12fc00(param_4 + param_2 + dVar1,param_3,param_5,param_6,&puStack_98);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b693938; end: 10b69394b;  */

void FUN_10b693938(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x20),PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 10b69394c; end: 10b693abf;  */

void FUN_10b69394c(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                  undefined8 param_6,long param_7)

{
  bool bVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  
  _objc_retain(param_7);
  dVar3 = *(double *)PTR__UIEdgeInsetsZero_110345bb0;
  dVar5 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  bVar1 = false;
  if ((param_2 == dVar5) && (bVar1 = false, !NAN(param_1) && !NAN(dVar3))) {
    bVar1 = param_1 == dVar3;
  }
  bVar2 = false;
  if ((bVar1) &&
     (bVar2 = false, !NAN(param_4) && !NAN(*(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18)))) {
    bVar2 = param_4 == *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  }
  if (bVar2) {
    dVar4 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
    if ((param_7 == 0) && (param_3 == dVar4)) {
      _objc_retain(param_5);
      goto LAB_10b693a98;
    }
    func_0x00010c23d0a0(param_5);
    if (param_3 != dVar4) goto LAB_10b6939b0;
    param_2 = *(double *)PTR__CGPointZero_110347540;
    param_1 = *(double *)(PTR__CGPointZero_110347540 + 8);
    param_3 = dVar5;
    dStack_60 = dVar3;
  }
  else {
    func_0x00010c23d0a0(param_5);
LAB_10b6939b0:
    func_0x00010c23d0a0(param_5);
    dVar3 = param_4 + param_2 + dVar3;
    func_0x00010c23d0a0(param_5);
    dVar4 = param_1 + dVar5;
    param_3 = param_3 + dVar4;
    func_0x00010c23d0a0(param_5);
    func_0x00010c23d0a0(param_5);
    dStack_60 = dVar4;
  }
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10b693ac0;
  puStack_88 = &UNK_110d58c60;
  uStack_80 = param_5;
  dStack_70 = param_2;
  dStack_68 = param_1;
  dStack_58 = dVar5;
  _objc_retain(param_7);
  lStack_78 = param_7;
  func_0x00010c12fc00(dVar3,param_3,param_5,param_6,&puStack_a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lStack_78);
LAB_10b693a98:
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 10b693ac0; end: 10b693baf;  */

void FUN_10b693ac0(long param_1)

{
  func_0x00010bf89920(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x20));
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010c19bbe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc8e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__UIRectFillUsingBlendMode_110345d68)
              (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
               *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),0x14);
    return;
  }
  return;
}



/* Entry: 10b693bb0; end: 10b693bc3;  */

void FUN_10b693bb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x20),PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 10b693bc4; end: 10b693de3;  */

void FUN_10b693bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  if ((bRam00000001137f7838 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
    func_0x00010c077480();
    if ((int)puVar1 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSThread_1126b47e0;
      func_0x00010bf282c0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar2;
      func_0x00010bf529e0();
      if ((undefined *)0x9 < puVar1) {
        puVar1 = (undefined *)0xa;
      }
      func_0x00010c25e980(puVar2,param_3,0,puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar2);
    }
  }
  puVar1 = PTR__OBJC_CLASS___CIImage_1126b3128;
  _objc_retainAutorelease(param_2);
  func_0x00010bdc1020();
  func_0x00010bfe9240(puVar1,param_3,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___CIFilter_1126c7620;
  func_0x00010bfae980(PTR__OBJC_CLASS___CIFilter_1126c7620,param_3,
                      &PTR____CFConstantStringClassReference_110f6d938);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b3a0();
  uVar8 = *(undefined8 *)PTR__kCIInputImageKey_11034ad80;
  func_0x00010c220220(puVar2,param_3,puVar1,uVar8);
  puVar3 = puVar2;
  func_0x00010c0eedc0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___CIFilter_1126c7620;
  func_0x00010bfae980(PTR__OBJC_CLASS___CIFilter_1126c7620,param_3,
                      &PTR____CFConstantStringClassReference_110ed5fd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b3a0();
  func_0x00010c220220(puVar4,param_3,puVar3,uVar8);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220220(puVar4,param_3,puVar5,*(undefined8 *)PTR__kCIInputRadiusKey_11034ad90);
  _objc_release(puVar5);
  puVar5 = puVar4;
  func_0x00010c0eedc0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  FUN_10b695ddc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9de20(puVar1);
  puVar7 = puVar6;
  func_0x00010bf54e00(puVar6,param_3,puVar5);
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe9240(PTR__OBJC_CLASS___UIImage_1126aea68,param_3,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _CGImageRelease(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10b693de4; end: 10b693ed7;  */

void FUN_10b693de4(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  
  dVar2 = param_1;
  dVar3 = param_2;
  _objc_retain(param_5);
  func_0x00010c23d0a0(param_5);
  dVar4 = dVar2 + param_1 * 2.0;
  func_0x00010c23d0a0(param_5);
  dVar5 = dVar3 + param_1 * 2.0;
  func_0x00010c23d0a0(param_5);
  func_0x00010c23d0a0(param_5);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10b693ed8;
  puStack_90 = &UNK_110d58bb0;
  uStack_88 = param_5;
  dStack_80 = param_1;
  dStack_78 = param_2;
  dStack_70 = param_1;
  dStack_68 = param_1;
  dStack_60 = dVar2;
  dStack_58 = dVar3;
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010c12fc00(dVar4,dVar5,param_5,param_4,&puStack_a8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_88);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b693ed8; end: 10b693f5f;  */

void FUN_10b693ed8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,*(undefined8 *)(param_1 + 0x30),PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  _CGContextSetShadowWithColor
            (*(undefined8 *)PTR__CGSizeZero_110347620,*(undefined8 *)(PTR__CGSizeZero_110347620 + 8)
             ,uVar3,param_2,puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
             *(undefined8 *)(param_1 + 0x20),PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 10b693f60; end: 10b693ff7;  */

void FUN_10b693f60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf1c920(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7c20(puVar2,param_2,param_3,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b693ff8; end: 10b69418b;  */

void FUN_10b693ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d660(param_5);
  puVar2 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  _objc_alloc();
  func_0x00010c0469e0(param_1,param_2);
  _objc_retain(puVar1);
  _objc_retain(param_5);
  puVar3 = puVar2;
  func_0x00010bfe91c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf897f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__CGPointZero_110347540,
             *(undefined8 *)(PTR__CGPointZero_110347540 + 8),*(undefined8 *)(puVar2 + 0x20),
             PTR_s_drawAtPoint_withAttributes__1125bffa0,*(undefined8 *)(puVar2 + 0x28));
  return;
}



/* Entry: 10b69418c; end: 10b6941a3;  */

void FUN_10b69418c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf897f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__CGPointZero_110347540,
             *(undefined8 *)(PTR__CGPointZero_110347540 + 8),*(undefined8 *)(param_1 + 0x20),
             PTR_s_drawAtPoint_withAttributes__1125bffa0,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10b6941a4; end: 10b694407;  */

void FUN_10b6941a4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  double dVar9;
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
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  dVar8 = param_1;
  _objc_retain(param_4);
  if ((bRam00000001137f7838 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
    func_0x00010c077480();
    if ((int)puVar1 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSThread_1126b47e0;
      func_0x00010bf282c0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar2;
      func_0x00010bf529e0();
      if ((undefined *)0x9 < puVar1) {
        puVar1 = (undefined *)0xa;
      }
      func_0x00010c25e980(puVar2,param_3,0,puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar2);
    }
  }
  puVar1 = PTR__OBJC_CLASS___CIImage_1126b3128;
  uVar3 = param_4;
  _objc_retainAutorelease(param_4);
  func_0x00010bdc1020();
  func_0x00010bfe9240(puVar1,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___CIFilter_1126c7620;
  func_0x00010bfae980(PTR__OBJC_CLASS___CIFilter_1126c7620,param_3,
                      &PTR____CFConstantStringClassReference_110f6d938);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220220();
  func_0x00010bf9de20(puVar1);
  _CGRectGetWidth();
  dVar9 = dVar8;
  func_0x00010bf9de20(puVar1);
  _CGRectGetHeight();
  _CGAffineTransformMakeTranslation
            (&uStack_90,(dVar8 - param_1 * dVar8) * 0.5,(dVar9 - param_1 * dVar9) * 0.5);
  uStack_e8 = uStack_88;
  uStack_f0 = uStack_90;
  uStack_d8 = uStack_78;
  uStack_e0 = uStack_80;
  uStack_c8 = uStack_68;
  uStack_d0 = uStack_70;
  _CGAffineTransformScale(&uStack_c0,param_1,param_1,&uStack_f0);
  uStack_78 = uStack_a8;
  uStack_80 = uStack_b0;
  uStack_68 = uStack_98;
  uStack_70 = uStack_a0;
  uStack_88 = uStack_b8;
  uStack_90 = uStack_c0;
  puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297160(PTR__OBJC_CLASS___NSValue_1126afdf8,param_3,&uStack_c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220220(puVar2,param_3,puVar4,&PTR____CFConstantStringClassReference_110f6d958);
  _objc_release(puVar4);
  puVar4 = puVar2;
  func_0x00010c0eedc0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c187140(PTR__OBJC_CLASS___EAGLContext_1126d34e8,param_3,0);
  puVar5 = PTR__OBJC_CLASS___CIContext_1126b3120;
  func_0x00010bf4f640(PTR__OBJC_CLASS___CIContext_1126b3120,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9de20(puVar1);
  puVar6 = puVar5;
  func_0x00010bf54e00(puVar5,param_3,puVar4);
  puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe9240(PTR__OBJC_CLASS___UIImage_1126aea68,param_3,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _CGImageRelease(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10b694408; end: 10b6945a3;  */

void FUN_10b694408(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  char *pcStack_78;
  undefined8 uStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  
  _objc_retain(param_6);
  uVar1 = param_6;
  func_0x00010bf529e0();
  if (uVar1 == 0) {
    param_4 = 0;
  }
  else {
    uVar1 = param_6;
    func_0x00010bf529e0();
    dStack_68 = (double)(long)(param_2 * 0.06) * ((double)uVar1 + -1.0);
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x4010000000;
    dStack_60 = param_1 - dStack_68;
    dStack_58 = param_2 - dStack_68;
    pcStack_78 = "";
    uStack_70 = 0;
    uVar1 = param_6;
    func_0x00010bfb1920(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfe88e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_6);
    func_0x00010c12fc40(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
    _objc_release(uVar2);
    _objc_release(uVar1);
    __Block_object_dispose(&uStack_90,8);
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 10b6945a4; end: 10b694713;  */

void FUN_10b6945a4(undefined8 param_1,double param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  long lStack_180;
  double dStack_178;
  double dStack_170;
  double dStack_168;
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
  dVar9 = 0.0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = *(long *)(param_3 + 0x20);
  func_0x00010c140180();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      lVar3 = lVar2;
      do {
        if (*plStack_110 != lVar7) {
          lVar3 = lVar1;
          _objc_enumerationMutation(lVar1);
        }
        uVar6 = *(undefined8 *)(lStack_118 + lVar8 * 8);
        _objc_autoreleasePoolPush();
        func_0x00010be76280(*(undefined8 *)(param_3 + 0x30),*(undefined8 *)(param_3 + 0x38),uVar6);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = *(long *)(*(long *)(param_3 + 0x28) + 8);
        func_0x00010bf89920(*(undefined8 *)(lVar5 + 0x20),*(undefined8 *)(lVar5 + 0x28),
                            *(undefined8 *)(lVar5 + 0x30),*(undefined8 *)(lVar5 + 0x38));
        _objc_release(uVar6);
        _objc_autoreleasePoolPop(lVar3);
        lVar5 = *(long *)(*(long *)(param_3 + 0x28) + 8);
        *(double *)(lVar5 + 0x20) = *(double *)(param_3 + 0x40) + *(double *)(lVar5 + 0x20);
        lVar5 = *(long *)(*(long *)(param_3 + 0x28) + 8);
        param_2 = *(double *)(lVar5 + 0x28);
        dVar9 = param_2 - *(double *)(param_3 + 0x40);
        *(double *)(lVar5 + 0x28) = dVar9;
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_4,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  dVar11 = param_2;
  func_0x00010c23d0a0();
  dVar10 = dVar11 * 0.6;
  func_0x00010c23d0a0(lVar1);
  func_0x00010c23d0a0(lVar1);
  dStack_178 = dVar10;
  if (dVar9 < dVar10) {
    func_0x00010c23d0a0(lVar1);
    dVar11 = dVar9;
    func_0x00010c23d0a0(lVar1);
    dVar11 = dVar11 / 0.6;
    dStack_178 = dVar9;
  }
  param_2 = dVar11 / param_2;
  puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_198 = 0xc2000000;
  uStack_190 = 0x10b694824;
  puStack_188 = &UNK_110d58cc0;
  dStack_168 = param_2 + param_2;
  lStack_180 = lVar1;
  dStack_170 = dVar11;
  func_0x00010c12fc00(dStack_178,dVar11,lVar1,param_4,&puStack_1a0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe9540(param_2,0x3fd3333333333333,PTR__OBJC_CLASS___UIImage_1126aea68,param_4,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b694714; end: 10b6948bb;  */

void FUN_10b694714(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  
  dVar3 = param_2;
  func_0x00010c23d0a0();
  dVar2 = dVar3 * 0.6;
  func_0x00010c23d0a0(param_3);
  func_0x00010c23d0a0(param_3);
  dStack_58 = dVar2;
  if (param_1 < dVar2) {
    func_0x00010c23d0a0(param_3);
    dVar3 = param_1;
    func_0x00010c23d0a0(param_3);
    dVar3 = dVar3 / 0.6;
    dStack_58 = param_1;
  }
  param_2 = dVar3 / param_2;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x10b694824;
  puStack_68 = &UNK_110d58cc0;
  dStack_48 = param_2 + param_2;
  uStack_60 = param_3;
  dStack_50 = dVar3;
  func_0x00010c12fc00(dStack_58,dVar3,param_3,param_4,&puStack_80);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe9540(param_2,0x3fd3333333333333,PTR__OBJC_CLASS___UIImage_1126aea68,param_4,param_3
                     );
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b6948bc; end: 10b694ba3;  */

void FUN_10b6948bc(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar12 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (lRam00000001137f7840 != -1) {
    func_0x000107c27d9c(0x1137f7840,&PTR___NSConcreteGlobalBlock_110d58cf0);
  }
  if (((bRam00000001137f7838 & 1) == 0) &&
     (puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0, func_0x00010c077480(), (int)puVar1 != 0)) {
    puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
    func_0x00010bf282c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c25e980(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar1);
  }
  puVar2 = PTR__OBJC_CLASS___CIImage_1126b3128;
  _objc_alloc();
  _objc_retainAutorelease(param_5);
  func_0x00010bdc1020();
  func_0x00010bffa240();
  puVar3 = PTR__OBJC_CLASS___CIVector_1126d8aa0;
  func_0x00010c23d0a0(param_5);
  dVar12 = dVar12 + param_1 * 2.0;
  func_0x00010c23d0a0(param_5);
  func_0x00010c2979a0(dVar12,param_2 + param_1 * 2.0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___CIColor_1126c9738;
  _objc_alloc();
  func_0x00010bfffa60();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c23d0a0(param_5);
  dVar11 = dVar12;
  func_0x00010c23d0a0(param_5);
  dVar12 = dVar12 / (dVar11 + param_1 * 2.0);
  func_0x00010c0df720(dVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = puRam00000001137f7848;
  func_0x00010bdc3660(puVar3);
  dVar11 = dVar12;
  func_0x00010bdc3680(puVar3);
  func_0x00010bf08ba0(0,0,dVar12,dVar11,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  FUN_10b695ddc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9de20(uVar6);
  uVar8 = uVar7;
  func_0x00010bf54e00(uVar7);
  _objc_release(uVar7);
  puVar9 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe9240(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  _CGImageRelease(uVar8);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___CIKernel_1126d8a98;
  func_0x00010c086500();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = puRam00000001137f7848;
  puRam00000001137f7848 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 10b694ba4; end: 10b694bdf;  */

void FUN_10b694ba4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___CIKernel_1126d8a98;
  func_0x00010c086500(PTR__OBJC_CLASS___CIKernel_1126d8a98,param_2,
                      &PTR____CFConstantStringClassReference_110f6d978);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137f7848;
  puRam00000001137f7848 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b694be0; end: 10b694be3;  */

void FUN_10b694be0(void)

{
  return;
}



/* Entry: 10b694be4; end: 10b694e63;  */

void FUN_10b694be4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  double dVar9;
  undefined8 uVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar9 = param_1;
  _objc_retain(param_4);
  if (lRam00000001137f7850 != -1) {
    func_0x000107c27d9c(0x1137f7850,&PTR___NSConcreteGlobalBlock_110d58d30);
  }
  if (((bRam00000001137f7838 & 1) == 0) &&
     (puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0, func_0x00010c077480(), (int)puVar1 != 0)) {
    puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
    func_0x00010bf282c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c25e980(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar1);
  }
  puVar2 = PTR__OBJC_CLASS___CIImage_1126b3128;
  _objc_alloc();
  _objc_retainAutorelease(param_2);
  func_0x00010bdc1020();
  func_0x00010bffa240();
  puVar3 = PTR__OBJC_CLASS___CIColor_1126c9738;
  _objc_alloc();
  func_0x00010bfffa60();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c23d0a0(param_2);
  uVar10 = 0x3ff0000000000000;
  dVar9 = 1.0 - (param_1 + param_1) / dVar9;
  func_0x00010c0df720(dVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = puRam00000001137f7858;
  func_0x00010c23d0a0(param_2);
  func_0x00010c23d0a0(param_2);
  func_0x00010bf08ba0(0,0,dVar9,uVar10,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar5;
  FUN_10b695ddc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9de20(uVar5);
  uVar6 = uVar10;
  func_0x00010bf54e00(uVar10);
  _objc_release(uVar10);
  puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe9240(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  _CGImageRelease(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___CIKernel_1126d8a98;
  func_0x00010c086500();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = puRam00000001137f7858;
  puRam00000001137f7858 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 10b694e64; end: 10b694e9f;  */

void FUN_10b694e64(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___CIKernel_1126d8a98;
  func_0x00010c086500(PTR__OBJC_CLASS___CIKernel_1126d8a98,param_2,
                      &PTR____CFConstantStringClassReference_110f6d998);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137f7858;
  puRam00000001137f7858 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b694ea0; end: 10b694ea3;  */

void FUN_10b694ea0(void)

{
  return;
}



/* Entry: 10b694ea4; end: 10b694ef3;  */

void FUN_10b694ea4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  uVar2 = param_1;
  _objc_retainAutorelease();
  func_0x00010bdc1020();
  func_0x00010c14e120(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bfe9270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar1,PTR_s_imageWithCGImage_scale_orientati_1125d7e60,uVar2,param_3);
  return;
}



/* Entry: 10b694ef4; end: 10b694f9b;  */

void FUN_10b694ef4(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain();
  uVar3 = param_3 - 1;
  puVar1 = param_1;
  if (((uVar3 < 7) && ((0x77U >> (ulong)((uint)uVar3 & 0x1f) & 1) != 0)) &&
     (*(double *)(&UNK_10e5d3ce8 + uVar3 * 8) * 2.220446049250313e-16 <=
      *(double *)(&UNK_10e5d3ce8 + uVar3 * 8))) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8a20(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  puVar2 = puVar1;
  func_0x00010bfe9680(puVar1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b694f9c; end: 10b6952ff;  */

void FUN_10b694f9c(double param_1,double param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  short *psVar8;
  uint uVar9;
  undefined *puVar10;
  ulong uVar11;
  char *pcVar12;
  char *pcVar13;
  short *psVar14;
  undefined *puVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  short *psVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  
  if (((bRam00000001137f7838 & 1) == 0) &&
     (puVar2 = PTR__OBJC_CLASS___NSThread_1126b47e0, func_0x00010c077480(), (int)puVar2 != 0)) {
    puVar2 = PTR__OBJC_CLASS___NSThread_1126b47e0;
    func_0x00010bf282c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c25e980(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar2);
  }
  func_0x00010c23d0a0(param_3);
  func_0x00010c14e120(param_3);
  param_2 = param_2 * param_1;
  uVar17 = (uint)param_2;
  uVar18 = (ulong)uVar17;
  func_0x00010c23d0a0(param_3);
  dVar20 = param_2;
  func_0x00010c14e120(param_3);
  uVar16 = (uint)(param_2 * dVar20);
  puVar2 = param_3;
  _objc_retainAutorelease();
  func_0x00010bdc1020();
  _CGImageGetWidth();
  puVar3 = param_3;
  _objc_retainAutorelease();
  func_0x00010bdc1020();
  _CGImageGetHeight();
  if (1 < (int)uVar17 && 1 < (int)uVar16) {
    psVar19 = (short *)(long)(int)uVar16;
    pcVar4 = (char *)(ulong)(uVar16 * uVar17);
    _calloc(pcVar4,1);
    pcVar5 = pcVar4;
    _CGBitmapContextCreate();
    puVar6 = param_3;
    _objc_retainAutorelease(param_3);
    func_0x00010bdc1020();
    _CGContextDrawImage(0,0,(double)uVar16,(double)uVar17,pcVar5,puVar6);
    uVar7 = uVar18;
    _calloc(uVar18,2);
    psVar8 = psVar19;
    _calloc(psVar19,2);
    if (0 < (long)puVar3) {
      puVar10 = (undefined *)0x0;
      pcVar12 = pcVar4;
      do {
        pcVar13 = pcVar12;
        psVar14 = psVar8;
        puVar15 = puVar2;
        if (0 < (long)puVar2) {
          do {
            if (*pcVar13 != '\0') {
              *(short *)(uVar7 + (long)puVar10 * 2) = *(short *)(uVar7 + (long)puVar10 * 2) + 1;
              *psVar14 = *psVar14 + 1;
            }
            psVar14 = psVar14 + 1;
            puVar15 = puVar15 + -1;
            pcVar13 = pcVar13 + 1;
          } while (puVar15 != (undefined *)0x0);
        }
        puVar10 = puVar10 + 1;
        pcVar12 = pcVar12 + (long)psVar19;
      } while (puVar10 != puVar3);
    }
    uVar11 = 0;
    do {
      if (*(short *)(uVar7 + uVar11 * 2) != 0) {
        dVar20 = (double)(uVar11 & 0xffffffff);
        goto LAB_10b6951a0;
      }
      uVar11 = uVar11 + 1;
    } while (uVar18 != uVar11);
    dVar20 = 0.0;
LAB_10b6951a0:
    uVar9 = 0xffffffff;
    do {
      if ((int)uVar18 < 1) {
        dVar22 = 0.0;
        goto LAB_10b6951cc;
      }
      lVar1 = uVar18 * 2;
      uVar18 = uVar18 - 1;
      uVar9 = uVar9 + 1;
    } while (*(short *)(uVar7 + lVar1 + -2) == 0);
    dVar22 = (double)uVar9;
LAB_10b6951cc:
    uVar18 = 0;
    do {
      if (psVar8[uVar18] != 0) {
        dVar21 = (double)(uVar18 & 0xffffffff);
        goto LAB_10b6951f4;
      }
      uVar18 = uVar18 + 1;
    } while (uVar16 != uVar18);
    dVar21 = 0.0;
LAB_10b6951f4:
    uVar9 = 0xffffffff;
    uVar18 = (ulong)uVar16;
    do {
      if ((int)uVar18 < 1) {
        dVar23 = 0.0;
        goto LAB_10b695220;
      }
      lVar1 = uVar18 - 1;
      uVar9 = uVar9 + 1;
      uVar18 = uVar18 - 1;
    } while (psVar8[lVar1] == 0);
    dVar23 = (double)uVar9;
LAB_10b695220:
    _free(pcVar4);
    _free(psVar8);
    _free(uVar7);
    _CFRelease(pcVar5);
    if ((((dVar20 != 0.0) || (dVar22 != 0.0)) || (dVar21 != 0.0)) || (dVar23 != 0.0)) {
      _CGImageCreateWithImageInRect
                (dVar21,dVar20,(double)uVar16 - (dVar21 + dVar23),(double)uVar17 - (dVar20 + dVar22)
                 ,puVar6);
      puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010c14e120(param_3);
      func_0x00010bfe8380(param_3);
      func_0x00010bfe9260(dVar21,puVar2);
      _objc_retainAutoreleasedReturnValue();
      _CFRelease(puVar6);
      goto LAB_10b6952d4;
    }
  }
  _objc_retain(param_3);
  puVar2 = param_3;
LAB_10b6952d4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b695300; end: 10b69553b;  */

void FUN_10b695300(double param_1,double param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  dVar11 = param_1;
  if (((bRam00000001137f7838 & 1) == 0) &&
     (puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0, func_0x00010c077480(), (int)puVar1 != 0)) {
    puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
    func_0x00010bf282c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c25e980(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar1);
  }
  func_0x00010c23d0a0(param_3);
  dVar7 = dVar11 + param_1 * 2.0;
  func_0x00010c14e120(param_3);
  dVar7 = dVar11 * dVar7;
  func_0x00010c23d0a0(param_3);
  dVar8 = param_2 + param_1 * 2.0;
  func_0x00010c14e120(param_3);
  dVar8 = dVar11 * dVar8;
  uVar2 = param_3;
  _objc_retainAutorelease(param_3);
  func_0x00010bdc1020();
  _CGImageGetBitsPerComponent();
  uVar3 = param_3;
  _objc_retainAutorelease(param_3);
  func_0x00010bdc1020();
  _CGImageGetColorSpace();
  uVar4 = param_3;
  _objc_retainAutorelease(param_3);
  func_0x00010bdc1020();
  _CGImageGetBitmapInfo();
  uVar5 = 0;
  _CGBitmapContextCreate(0,(long)dVar7,(long)dVar8,uVar2,0,uVar3,uVar4);
  func_0x00010c14e120(param_3);
  dVar9 = param_1 * dVar11;
  func_0x00010c14e120(param_3);
  dVar10 = param_1 * dVar11;
  func_0x00010c23d0a0(param_3);
  dVar6 = dVar11;
  func_0x00010c14e120(param_3);
  dVar11 = dVar11 * dVar6;
  func_0x00010c23d0a0(param_3);
  func_0x00010c14e120(param_3);
  uVar2 = param_3;
  _objc_retainAutorelease(param_3);
  func_0x00010bdc1020();
  _CGContextDrawImage(dVar9,dVar10,dVar11,param_2 * dVar6,uVar5,uVar2);
  uVar2 = uVar5;
  _CGBitmapContextCreateImage(uVar5);
  uVar3 = param_3;
  func_0x00010be62d40(param_1,dVar7,dVar8,param_3);
  uVar4 = uVar2;
  _CGImageCreateWithMask(uVar2,uVar3);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c14e120(param_3);
  func_0x00010bfe9260(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _CGContextRelease(uVar5);
  _CGImageRelease(uVar2);
  _CGImageRelease(uVar3);
  _CGImageRelease(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b69553c; end: 10b6955eb;  */

void FUN_10b69553c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x00010c25cbc0(param_5,param_6,(long)param_1,(long)param_2);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10b6955ec;
  puStack_40 = &UNK_110d58d70;
  uStack_38 = param_5;
  _objc_retain();
  uVar1 = param_5;
  func_0x00010c12fc00(param_3,param_4,param_5,param_6,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b6955ec; end: 10b695613;  */

void FUN_10b6955ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _CGContextGetClipBoundingBox(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 10b695614; end: 10b695733;  */

undefined8 FUN_10b695614(double param_1,double param_2,double param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _CGColorSpaceCreateDeviceGray();
  uVar1 = 0;
  _CGBitmapContextCreate(0,(long)param_2,(long)param_3,8,0,param_4,0);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  _CGContextSetFillColorWithColor(uVar1,puVar3);
  _objc_release(puVar2);
  _CGContextFillRect(0,0,param_2,param_3,uVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  _CGContextSetFillColorWithColor(uVar1,puVar3);
  _objc_release(puVar2);
  _CGContextFillRect(param_1,param_1,param_2 - param_1 * 2.0,param_3 - param_1 * 2.0,uVar1);
  uVar4 = uVar1;
  _CGBitmapContextCreateImage(uVar1);
  _CGContextRelease(uVar1);
  _CGColorSpaceRelease(param_4);
  return uVar4;
}



/* Entry: 10b695734; end: 10b69580b;  */

void FUN_10b695734(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  
  dVar1 = param_1;
  func_0x00010c23d0a0();
  func_0x00010c23d0a0(param_3);
  if (param_2 <= dVar1) {
    dVar1 = param_2;
  }
  dVar2 = dVar1;
  if (param_1 <= dVar1) {
    dVar2 = param_1;
  }
  dVar3 = dVar1 / dVar2;
  func_0x00010c23d0a0(param_3);
  dVar4 = dVar1 / dVar3;
  func_0x00010c23d0a0(param_3);
  func_0x00010c14e120(param_3);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10b69580c;
  puStack_68 = &UNK_110d58cc0;
  uStack_60 = param_3;
  dStack_58 = dVar2;
  dStack_50 = dVar4;
  dStack_48 = param_2 / dVar3;
  func_0x00010c12fc20(dVar2,dVar2,dVar1,param_3,param_4,1,&puStack_80);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b69580c; end: 10b69582f;  */

void FUN_10b69580c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((*(double *)(param_1 + 0x28) - *(double *)(param_1 + 0x30)) * 0.5,0,
             *(double *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x20),PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 10b695830; end: 10b69589f;  */

double FUN_10b695830(double param_1,undefined8 param_2)

{
  double dVar1;
  
  func_0x00010c23d0a0();
  dVar1 = param_1;
  func_0x00010c14e120(param_2);
  return param_1 * dVar1;
}



/* Entry: 10b6958a0; end: 10b69597f;  */

double FUN_10b6958a0(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                    long param_5)

{
  double dVar1;
  undefined8 uVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  
  uVar7 = (undefined4)((ulong)param_1 >> 0x20);
  uVar6 = SUB84(param_1,0);
  func_0x00010c23d0a0();
  dVar9 = (double)CONCAT44(uVar7,uVar6);
  func_0x00010c14e120(param_3);
  dVar9 = dVar9 * (double)CONCAT44(uVar7,uVar6);
  func_0x00010c23d0a0(param_3);
  func_0x00010c14e120(param_3);
  param_2 = param_2 * (double)CONCAT44(uVar7,uVar6);
  dVar1 = (double)NEON_ucvtf((long)dVar9);
  uVar6 = SUB84(dVar1,0);
  uVar7 = (undefined4)((ulong)dVar1 >> 0x20);
  dVar8 = (double)NEON_ucvtf((long)param_2);
  bVar3 = true;
  if ((dVar1 <= param_1) && (bVar3 = false, !NAN(param_1) && !NAN(dVar8))) {
    bVar3 = param_1 < dVar8;
  }
  if (bVar3) {
    uVar4 = (ulong)dVar9;
    uVar5 = (ulong)param_2;
    dVar9 = ((double)(uVar5 >> 1) + dVar1 * param_1) / dVar8;
    if (uVar5 < uVar4) {
      dVar9 = param_1;
      param_1 = ((double)(uVar4 >> 1) + dVar8 * param_1) / dVar1;
    }
    uVar2 = NEON_ucvtf((long)dVar9);
    uVar6 = (undefined4)uVar2;
    uVar7 = (undefined4)((ulong)uVar2 >> 0x20);
    NEON_ucvtf((long)param_1);
  }
  if (param_5 < 2) {
    return (double)CONCAT44(uVar7,uVar6);
  }
  return (double)((float)(int)((double)CONCAT44(uVar7,uVar6) / (double)param_5) * (float)param_5);
}



/* Entry: 10b695980; end: 10b695a9b;  */

void FUN_10b695980(double param_1,double param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  double dStack_60;
  double dStack_58;
  
  func_0x00010c14e760();
  dVar5 = param_1;
  dVar4 = param_2;
  func_0x00010c23d0a0(param_3);
  dVar3 = dVar5;
  func_0x00010c14e120(param_3);
  dVar5 = dVar5 * dVar3;
  func_0x00010c23d0a0(param_3);
  func_0x00010c14e120(param_3);
  _objc_retain(param_3);
  dVar5 = (double)NEON_ucvtf((long)dVar5);
  dVar3 = (double)NEON_ucvtf((long)(dVar4 * dVar3));
  bVar1 = false;
  if ((param_1 == dVar5) && (bVar1 = false, !NAN(param_2) && !NAN(dVar3))) {
    bVar1 = param_2 == dVar3;
  }
  if ((!bVar1) || (lVar2 = param_3, func_0x00010bfe8380(), lVar2 != 0)) {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10b695a9c;
    puStack_70 = &UNK_110ac6d80;
    lVar2 = param_3;
    lStack_68 = param_3;
    dStack_60 = param_1;
    dStack_58 = param_2;
    func_0x00010c12fc20(param_1,param_2,0x3ff0000000000000,param_3,param_4,0,&puStack_88);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    param_3 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b695a9c; end: 10b695ab7;  */

void FUN_10b695a9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__CGPointZero_110347540,
             *(undefined8 *)(PTR__CGPointZero_110347540 + 8),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 10b695ab8; end: 10b695c4b;  */

void FUN_10b695ab8(double param_1,double param_2,undefined *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  
  puVar2 = param_3;
  _objc_retainAutorelease();
  iVar1 = (int)puVar2;
  func_0x00010bdc1020();
  _CGImageGetColorSpace();
  _CGColorSpaceGetModel();
  if (iVar1 == 0) {
    _objc_retain(param_3);
  }
  else {
    func_0x00010c23d0a0(param_3);
    puVar2 = param_3;
    dVar5 = param_1;
    func_0x00010c23d0a0(param_3);
    dVar6 = param_2;
    _CGColorSpaceCreateDeviceGray();
    func_0x00010c23d0a0(param_3);
    func_0x00010c23d0a0(param_3);
    uVar3 = 0;
    _CGBitmapContextCreate(0,(long)dVar5,(long)dVar6,8,0,puVar2,0);
    _objc_retainAutorelease(param_3);
    func_0x00010bdc1020();
    _CGContextDrawImage(0,0,param_1,param_2,uVar3,param_3);
    uVar4 = uVar3;
    _CGBitmapContextCreateImage(uVar3);
    param_3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe9240(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    _CGColorSpaceRelease(puVar2);
    _CGContextRelease(uVar3);
    _CFRelease(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b695c4c; end: 10b695ddb;  */

void FUN_10b695c4c(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  uVar2 = param_4;
  _CGImageGetWidth();
  uVar3 = param_4;
  _CGImageGetHeight();
  dVar10 = (double)uVar2;
  dVar12 = (double)uVar3;
  bVar1 = true;
  if ((dVar10 <= param_1) && (bVar1 = false, !NAN(param_1) && !NAN(dVar12))) {
    bVar1 = param_1 < dVar12;
  }
  if (bVar1) {
    dVar11 = ((double)(uVar3 >> 1) + dVar10 * param_1) / dVar12;
    if (uVar3 < uVar2) {
      dVar11 = param_1;
      param_1 = ((double)(uVar2 >> 1) + dVar12 * param_1) / dVar10;
    }
    dVar10 = (double)NEON_ucvtf((long)dVar11);
    dVar12 = (double)NEON_ucvtf((long)param_1);
  }
  uVar8 = (ulong)dVar10;
  uVar9 = (ulong)dVar12;
  if (uVar2 == uVar8 && uVar3 == uVar9) {
    puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe9260(0x3ff0000000000000,PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = param_4;
    _CGImageGetColorSpace(param_4);
    uVar3 = param_4;
    _CGImageGetBitsPerComponent(param_4);
    uVar4 = param_4;
    _CGImageGetBytesPerRow(param_4);
    _CGImageGetAlphaInfo(param_4);
    lVar5 = 0;
    _CGBitmapContextCreate(0,uVar8,uVar9,uVar3,uVar4,uVar2,param_4);
    if (lVar5 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      _CGContextDrawImage(0,0,(double)uVar8,(double)uVar9);
      lVar6 = lVar5;
      _CGBitmapContextCreateImage(lVar5);
      puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe9260(0x3ff0000000000000,PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      _CFRelease(lVar6);
      _CGContextRelease(lVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10b695ddc; end: 10b695f17;  */

void FUN_10b695ddc(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f7860 != -1) {
    func_0x000107c27d9c(0x1137f7860,&PTR___NSConcreteGlobalBlock_110d58da0);
  }
  uVar1 = uRam00000001137f7868;
  _objc_retain(uRam00000001137f7868);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b695f18; end: 10b695f7b;  */

void FUN_10b695f18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_10b695f7c(param_3);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_alloc(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x00010bffa280(0x3ff0000000000000);
  _CGImageRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b695f7c; end: 10b69620f;  */

ulong FUN_10b695f7c(ulong param_1)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  ulong uVar16;
  undefined1 *puVar17;
  int iVar18;
  long lVar19;
  
  uVar4 = param_1;
  _CVPixelBufferGetPixelFormatType();
  _CVPixelBufferLockBaseAddress(param_1,0);
  uVar5 = param_1;
  _CVPixelBufferGetWidth();
  uVar6 = param_1;
  _CVPixelBufferGetHeight();
  iVar18 = (int)uVar4;
  if ((iVar18 == 0x52474241) || (iVar18 == 0x42475241)) {
    uVar4 = param_1;
    _CVPixelBufferGetBaseAddress(param_1);
    uVar7 = param_1;
    _CVPixelBufferGetBytesPerRow(param_1);
    uVar11 = uVar7;
    _CGColorSpaceCreateDeviceRGB();
    uVar15 = 0x2002;
    if (iVar18 != 0x42475241) {
      uVar15 = 0x4001;
    }
    _CGBitmapContextCreate(uVar4,uVar5,uVar6,8,uVar7,uVar11,uVar15);
    uVar5 = uVar4;
    _CGBitmapContextCreateImage();
    _CGContextRelease(uVar4);
    _CGColorSpaceRelease(uVar11);
  }
  else {
    uVar7 = param_1;
    _CVPixelBufferGetBaseAddressOfPlane(param_1,1);
    uVar4 = param_1;
    _CVPixelBufferGetBaseAddressOfPlane(param_1,0);
    uVar8 = param_1;
    _CVPixelBufferGetBytesPerRowOfPlane(param_1,0);
    uVar9 = param_1;
    _CVPixelBufferGetBytesPerRowOfPlane(param_1,1);
    lVar19 = uVar5 * 4;
    uVar10 = lVar19 * uVar6;
    _malloc();
    uVar11 = uVar10;
    if (uVar6 != 0) {
      uVar16 = 0;
      puVar17 = (undefined1 *)(uVar10 + 1);
      do {
        if (uVar5 != 0) {
          uVar11 = 0;
          puVar12 = puVar17;
          do {
            pbVar1 = (byte *)(uVar7 + (uVar11 & 0x7ffffffe));
            puVar12[-1] = 0xff;
            bVar3 = *(byte *)(uVar4 + uVar11);
            uVar14 = (uint)*pbVar1;
            iVar18 = uVar14 * 0x1c4 + (uint)bVar3 * 0x100 + -0xe180;
            uVar2 = iVar18 >> 8 & (iVar18 >> 0x1f ^ 0xffffffffU);
            if (0xfe < (int)uVar2) {
              uVar2 = 0xff;
            }
            *puVar12 = (char)uVar2;
            uVar13 = (uint)pbVar1[1];
            iVar18 = (0x80 - uVar14) * 0x58 + (uint)bVar3 * 0x100 + (0x80 - uVar13) * 0xb6 + 0x80;
            uVar2 = iVar18 >> 8 & (iVar18 >> 0x1f ^ 0xffffffffU);
            if (0xfe < (int)uVar2) {
              uVar2 = 0xff;
            }
            puVar12[1] = (char)uVar2;
            iVar18 = uVar13 * 0x166 + (uint)bVar3 * 0x100 + -0xb280;
            uVar2 = iVar18 >> 8 & (iVar18 >> 0x1f ^ 0xffffffffU);
            if (0xfe < (int)uVar2) {
              uVar2 = 0xff;
            }
            puVar12[2] = (char)uVar2;
            uVar11 = uVar11 + 1;
            puVar12 = puVar12 + 4;
          } while (uVar5 != uVar11);
        }
        uVar4 = uVar4 + uVar8;
        uVar11 = uVar9;
        if ((uVar16 & 1) == 0) {
          uVar11 = 0;
        }
        uVar7 = uVar7 + uVar11;
        uVar16 = uVar16 + 1;
        puVar17 = puVar17 + lVar19;
      } while (uVar16 != uVar6);
    }
    _CGColorSpaceCreateDeviceRGB();
    uVar4 = uVar10;
    _CGBitmapContextCreate(uVar10,uVar5,uVar6,8,lVar19,uVar11,0x2001);
    uVar5 = uVar4;
    _CGBitmapContextCreateImage();
    _CGContextRelease(uVar4);
    _CGColorSpaceRelease(uVar11);
    _free(uVar10);
  }
  _CVPixelBufferUnlockBaseAddress(param_1,0);
  return uVar5;
}



/* Entry: 10b696210; end: 10b6964bb;  */

void FUN_10b696210(undefined *param_1,undefined8 param_2,undefined *param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *unaff_x21;
  long lVar9;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined *puStack_120;
  ulong uStack_118;
  ulong uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [136];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_4 != 1) {
    if (param_4 == 0) {
      param_1 = PTR__OBJC_CLASS___CIImage_1126b3128;
      func_0x00010bfe9700(PTR__OBJC_CLASS___CIImage_1126b3128,param_2,param_3,param_5);
      _objc_retainAutoreleasedReturnValue();
      unaff_x21 = PTR__OBJC_CLASS___UIImage_1126aea68;
      param_3 = param_1;
      func_0x00010bfe9280(0x3ff0000000000000);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
    }
    goto LAB_10b696460;
  }
  puVar1 = param_3;
  _CVPixelBufferGetPixelFormatType();
  if ((int)puVar1 == 0x34323066) {
    _CVPixelBufferLockBaseAddress(param_3,1);
    puVar1 = param_3;
    _CVPixelBufferGetWidth();
    puVar2 = param_3;
    _CVPixelBufferGetHeight();
    puVar3 = param_3;
    _CVPixelBufferGetBaseAddressOfPlane(param_3,0);
    puVar4 = param_3;
    _CVPixelBufferGetBaseAddressOfPlane(param_3,1);
    if ((puVar3 != (undefined *)0x0) && (puVar4 != (undefined *)0x0)) {
      puVar5 = param_3;
      _CVPixelBufferGetBytesPerRowOfPlane(param_3,0);
      puVar6 = param_3;
      _CVPixelBufferGetBytesPerRowOfPlane(param_3,1);
      uStack_118 = (ulong)puVar2 >> 1;
      uStack_110 = (ulong)puVar1 >> 1;
      lVar9 = (long)puVar1 * 4;
      puVar8 = (undefined *)((long)puVar2 * lVar9);
      puStack_120 = puVar4;
      puStack_108 = puVar6;
      puStack_100 = puVar3;
      puStack_f8 = puVar2;
      puStack_f0 = puVar1;
      puStack_e8 = puVar5;
      _malloc();
      if (puVar8 != (undefined *)0x0) {
        puStack_140 = puVar8;
        puStack_138 = puVar2;
        puStack_130 = puVar1;
        lStack_128 = lVar9;
        _vImageConvert_YpCbCrToARGB_GenerateConversion
                  (*(undefined8 *)PTR__kvImage_YpCbCrToARGBMatrix_ITU_R_601_4_110347850,0x1133bb7b0,
                   auStack_e0,4,0,0);
        ppuVar7 = &puStack_100;
        _vImageConvert_420Yp8_CbCr8ToARGB8888
                  (ppuVar7,&puStack_120,&puStack_140,auStack_e0,&UNK_10e5d3d20,0xff,0x10);
        _CVPixelBufferUnlockBaseAddress(param_3,1);
        if (ppuVar7 == (undefined **)0x0) {
          _CGColorSpaceCreateDeviceRGB();
          puVar3 = puVar8;
          _CGBitmapContextCreate(puVar8,puVar1,puVar2,8,lVar9,param_3,0x4001);
          param_1 = puVar3;
          _CGBitmapContextCreateImage();
          _CGContextRelease(puVar3);
          _CGColorSpaceRelease(param_3);
        }
        else {
          param_1 = (undefined *)0x0;
        }
        _free(puVar8);
        goto LAB_10b696434;
      }
    }
    _CVPixelBufferUnlockBaseAddress(param_3,1);
    param_1 = (undefined *)0x0;
  }
  else {
    FUN_10b695f7c();
    param_1 = param_3;
  }
LAB_10b696434:
  unaff_x21 = PTR__OBJC_CLASS___UIImage_1126aea68;
  param_3 = param_1;
  func_0x00010bfe9260(0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  _CGImageRelease();
LAB_10b696460:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    __Unwind_Resume(param_1);
    _CVPixelBufferLockBaseAddress(param_3,1);
    puVar1 = PTR__OBJC_CLASS___CIImage_1126b3128;
    func_0x00010bfe92e0(PTR__OBJC_CLASS___CIImage_1126b3128);
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = puVar1;
    func_0x00010bfe6da0();
    _objc_retainAutoreleasedReturnValue();
    _CVPixelBufferUnlockBaseAddress(param_3,1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x21);
  return;
}



/* Entry: 10b6964bc; end: 10b696577;  */

void FUN_10b6964bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _CVPixelBufferLockBaseAddress(param_3,1);
  puVar1 = PTR__OBJC_CLASS___CIImage_1126b3128;
  func_0x00010bfe92e0(PTR__OBJC_CLASS___CIImage_1126b3128);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfe6da0();
  _objc_retainAutoreleasedReturnValue();
  _CVPixelBufferUnlockBaseAddress(param_3,1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b696578; end: 10b69662b;  */

undefined8 FUN_10b696578(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _CVPixelBufferLockBaseAddress(param_1,1);
  puVar1 = PTR__OBJC_CLASS___CIImage_1126b3128;
  func_0x00010bfe92e0(PTR__OBJC_CLASS___CIImage_1126b3128);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9de20();
  uVar2 = param_2;
  func_0x00010bf54e00(param_2);
  _CVPixelBufferUnlockBaseAddress(param_1,1);
  _objc_release(puVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 10b69662c; end: 10b696acb;  */

/* WARNING: Possible PIC construction at 0x00010b696890: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b696894) */

void FUN_10b69662c(double param_1,double param_2,undefined *param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
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
  undefined *puStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_144 [116];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar13 = param_1;
  _objc_retain();
  if (param_3 == (undefined *)0x0) {
LAB_10b69668c:
    puVar12 = (undefined *)0x0;
  }
  else {
    fVar15 = SUB84(param_1,0);
    dVar13 = 5.53552857091405e-315;
    bVar1 = false;
    bVar2 = true;
    if (0.0 <= fVar15) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar15)) {
        bVar1 = fVar15 == 100.0;
        bVar2 = 100.0 <= fVar15;
      }
    }
    if (bVar2 && !bVar1) goto LAB_10b69668c;
    puVar12 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
    puVar11 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar12);
    if (((ulong)puVar11 & 1) == 0) {
      puVar12 = PTR__OBJC_CLASS___UIImage_1126aea68;
      _objc_opt_class();
      puVar11 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar12);
      if (((ulong)puVar11 & 1) != 0) {
        _objc_retain(param_3);
        puVar11 = param_3;
        goto LAB_10b6966f4;
      }
      puVar11 = (undefined *)0x0;
LAB_10b6967e4:
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar11 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010c14d040();
      _objc_retainAutoreleasedReturnValue();
LAB_10b6966f4:
      func_0x00010c23d0a0(puVar11);
      if ((dVar13 == 0.0) || (func_0x00010c23d0a0(puVar11), param_2 == 0.0)) goto LAB_10b6967e4;
      if (param_4 == 0) {
        func_0x00010c23d0a0(puVar11);
        dVar14 = dVar13;
        func_0x00010c14e120(puVar11);
        _UIGraphicsBeginImageContextWithOptions(dVar13,param_2,dVar14,0);
        func_0x00010c23d0a0(puVar11);
        func_0x00010c23d0a0(puVar11);
        goto code_r0x00010bf89920;
      }
      puVar12 = PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00;
      _objc_alloc_init(PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00);
      func_0x00010c1d4c20();
      func_0x00010c14e120(puVar11);
      func_0x00010c1f5fe0(puVar12);
      func_0x00010c1e0260(puVar12);
      puVar4 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
      _objc_alloc();
      func_0x00010c23d0a0(puVar11);
      func_0x00010c046ac0();
      puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
      dVar13 = 1.60807493534087e-314;
      uStack_c8 = 0xc2000000;
      pcStack_c0 = FUN_10b696acc;
      puStack_b8 = &UNK_11086bc40;
      _objc_retain(puVar11);
      puVar5 = puVar4;
      puStack_b0 = puVar11;
      func_0x00010bfe91c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puStack_b0);
      _objc_release(puVar4);
      _objc_release(puVar12);
      if (puVar5 == (undefined *)0x0) {
LAB_10b696ab8:
        puVar12 = (undefined *)0x0;
      }
      else {
        puVar4 = puVar5;
        _objc_retainAutorelease();
        func_0x00010bdc1020();
        puVar6 = puVar4;
        _CGImageGetBytesPerRow();
        puVar7 = puVar4;
        _CGImageGetWidth();
        puVar8 = puVar4;
        _CGImageGetHeight();
        _CGImageGetDataProvider();
        _CGDataProviderCopyData();
        puVar9 = puVar4;
        _CFDataGetBytePtr();
        puVar10 = auStack_144;
        func_0x0001082400c0(param_1,puVar10,0,0x20e);
        puVar12 = PTR__OBJC_CLASS___NSError_1126ae858;
        if ((int)puVar10 == 0) {
          uStack_98 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
          ppuStack_90 = &PTR____CFConstantStringClassReference_110f6d9f8;
          puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
LAB_10b696a8c:
          func_0x00010bf99240(puVar12);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          _CFRelease(puVar4);
          _objc_release(puVar12);
          dVar13 = param_1;
          goto LAB_10b696ab8;
        }
        iVar3 = (int)auStack_144;
        func_0x0001082401cc();
        puVar12 = PTR__OBJC_CLASS___NSError_1126ae858;
        if (iVar3 == 0) {
          uStack_a8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
          ppuStack_a0 = &PTR____CFConstantStringClassReference_110f6da18;
          puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_10b696a8c;
        }
        uStack_168 = 0;
        uStack_170 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_188 = 0;
        uStack_190 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        uStack_1a8 = 0;
        uStack_1b0 = 0;
        uStack_198 = 0;
        uStack_1a0 = 0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        puStack_1e8 = (undefined1 *)0x0;
        uStack_1d8 = 0;
        uStack_1e0 = 0;
        uStack_208 = 0;
        uStack_210 = 0;
        uStack_1f8 = 0;
        uStack_200 = 0;
        uStack_228 = 0;
        uStack_230 = 0;
        uStack_218 = 0;
        uStack_220 = 0;
        uStack_250 = 0;
        uStack_238 = 0;
        uStack_240 = 0;
        puStack_1f0 = &UNK_108245dd0;
        uStack_248 = CONCAT44((int)puVar8,(int)puVar7);
        if (puVar9 != (undefined *)0x0) {
          func_0x0001082466a0(&uStack_250,puVar9,puVar6,4,1,1);
        }
        dVar13 = 0.0;
        func_0x0001082463d4(0,&uStack_250,0,0);
        func_0x000108248234(&uStack_250);
        uStack_270 = 0;
        uStack_268 = 0;
        uStack_260 = 0;
        puStack_1f0 = &UNK_1082460ac;
        puStack_1e8 = (undefined1 *)&uStack_270;
        func_0x000108251920(auStack_144,&uStack_250);
        puVar12 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
        _objc_retainAutoreleasedReturnValue();
        _free(uStack_270);
        func_0x000108246064(&uStack_250);
        _CFRelease(puVar4);
      }
      _objc_release(puVar5);
    }
    _objc_release(puVar11);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
    return;
  }
  ___stack_chk_fail();
  puVar11 = *(undefined **)(param_3 + 0x20);
  func_0x00010c23d0a0(puVar11);
  func_0x00010c23d0a0(*(undefined8 *)(param_3 + 0x20));
code_r0x00010bf89920:
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,0,dVar13,param_2,puVar11,PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 10b696acc; end: 10b696b1b;  */

void FUN_10b696acc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c23d0a0(uVar1);
  func_0x00010c23d0a0(*(undefined8 *)(param_3 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,0,param_1,param_2,uVar1,PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 10b696b1c; end: 10b696e07;  */

undefined ** FUN_10b696b1c(undefined *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined **ppuVar11;
  long lVar12;
  int aiStack_160 [4];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
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
  int aiStack_a0 [14];
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    aiStack_a0[6] = 0;
    aiStack_a0[7] = 0;
    aiStack_a0[4] = 0;
    aiStack_a0[5] = 0;
    aiStack_a0[10] = 0;
    aiStack_a0[0xb] = 0;
    aiStack_a0[8] = 0;
    aiStack_a0[9] = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    aiStack_a0[2] = 0;
    aiStack_a0[3] = 0;
    aiStack_a0[0] = 0;
    aiStack_a0[1] = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    aiStack_160[2] = 0;
    aiStack_160[3] = 0;
    aiStack_160[0] = 0;
    aiStack_160[1] = 0;
    puVar5 = param_1;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    puVar6 = param_1;
    func_0x00010c08fa60(param_1);
    if (puVar5 == (undefined *)0x0) {
LAB_10b696bc8:
      puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
      uStack_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_50 = &PTR____CFConstantStringClassReference_110f6da38;
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240(puVar5);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uStack_140 = 0;
      aiStack_160[2] = 0;
      aiStack_160[3] = 0;
      aiStack_160[0] = 0;
      aiStack_160[1] = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      func_0x00010822d4a4(puVar5,puVar6,aiStack_160,(ulong)aiStack_160 | 4,(ulong)aiStack_160 | 8,
                          (ulong)aiStack_160 | 0xc,&uStack_150,0);
      if ((int)puVar5 != 0) goto LAB_10b696bc8;
      uStack_138 = CONCAT44(uStack_138._4_4_,7);
      aiStack_a0[2] = 1;
      puVar6 = param_1;
      _objc_retainAutorelease();
      func_0x00010bf25f00();
      puVar5 = param_1;
      func_0x00010c08fa60(param_1);
      func_0x00010822dbe4(puVar6,puVar5,aiStack_160);
      puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
      if ((int)puVar6 == 0) {
        piVar1 = aiStack_160;
        if (uStack_a8._4_4_ != 0) {
          piVar1 = aiStack_a0;
        }
        iVar2 = *piVar1;
        lVar12 = (long)iVar2;
        piVar1 = (int *)((ulong)aiStack_160 | 4);
        if (uStack_a8._4_4_ != 0) {
          piVar1 = aiStack_a0 + 1;
        }
        iVar3 = *piVar1;
        uVar8 = 0;
        _CGDataProviderCreateWithData(0,uStack_128,uStack_118,0x10b696e30);
        uVar9 = uVar8;
        _CGColorSpaceCreateDeviceRGB();
        uVar10 = 0x4005;
        if (aiStack_160[2] != 0) {
          uVar10 = 0x4001;
        }
        _CGImageCreate(lVar12,(long)iVar3,8,0x20,(long)(iVar2 << 2),uVar9,uVar10,uVar8,0,0,0);
        _CGColorSpaceRelease(uVar9);
        _CGDataProviderRelease(uVar8);
        ppuVar11 = (undefined **)PTR__OBJC_CLASS___UIImage_1126aea68;
        _objc_alloc(PTR__OBJC_CLASS___UIImage_1126aea68);
        func_0x00010bffa220();
        _CGImageRelease(lVar12);
        goto LAB_10b696c44;
      }
      uStack_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      FUN_10b696e08();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_60 = puVar6;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
    }
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  ppuVar11 = (undefined **)0x0;
LAB_10b696c44:
  _objc_release();
  uVar4 = (uint)param_1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar11);
    return ppuVar11;
  }
  ___stack_chk_fail();
  if (uVar4 < 8) {
    return (undefined **)(&PTR_PTR_110d58de8)[uVar4 - 1];
  }
  return &PTR____CFConstantStringClassReference_110f6daf8;
}



/* Entry: 10b696e08; end: 10b696e37;  */

undefined ** FUN_10b696e08(uint param_1)

{
  if (param_1 < 8) {
    return (undefined **)(&PTR_PTR_110d58de8)[param_1 - 1];
  }
  return &PTR____CFConstantStringClassReference_110f6daf8;
}



/* Entry: 10b696e38; end: 10b69709f;  */

void FUN_10b696e38(undefined8 param_1,char *param_2)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uStack_a0;
  code *pcStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  if (param_2 == (char *)0x0) {
LAB_10b696f5c:
    puVar12 = (undefined *)0x0;
  }
  else {
    lVar3 = 1;
    _calloc(1,0x100);
    pcVar4 = param_2;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar5 = param_2;
    func_0x00010c08fa60(param_2);
    if (pcVar4 == (char *)0x0) {
LAB_10b696edc:
      puVar12 = PTR__OBJC_CLASS___NSError_1126ae858;
      uStack_78 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_70 = &PTR____CFConstantStringClassReference_110f6da38;
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _free(lVar3);
      _objc_release(puVar12);
      goto LAB_10b696f5c;
    }
    *(undefined8 *)(lVar3 + 0x30) = 0;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    *(undefined8 *)(lVar3 + 0x10) = 0;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    *(undefined8 *)(lVar3 + 0x20) = 0;
    func_0x00010822d4a4(pcVar4,pcVar5,lVar3 + 0x10,lVar3 + 0x14,lVar3 + 0x18,lVar3 + 0x1c,
                        lVar3 + 0x20,0);
    if ((int)pcVar4 != 0) goto LAB_10b696edc;
    uVar8 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
    _CFDataCreateCopy(uVar8,param_2);
    *(undefined8 *)(lVar3 + 8) = uVar8;
    bVar2 = *(int *)(lVar3 + 0xcc) != 0;
    lVar7 = 0x14;
    if (bVar2) {
      lVar7 = 0xd4;
    }
    lVar11 = 0x10;
    if (bVar2) {
      lVar11 = 0xd0;
    }
    lVar13 = (long)*(int *)(lVar3 + lVar11);
    iVar1 = *(int *)(lVar3 + lVar7);
    pcStack_98 = FUN_10b6970a0;
    uStack_a0 = 0;
    uStack_88 = 0;
    pcStack_90 = FUN_10b6971f8;
    puStack_80 = (undefined *)0x10b697234;
    lVar7 = lVar3;
    _CGDataProviderCreateDirect(lVar3,lVar13 * 4 * (long)iVar1,&uStack_a0);
    lVar11 = lVar7;
    _CGColorSpaceCreateDeviceRGB();
    uVar10 = 0x4005;
    if (*(int *)(lVar3 + 0x18) != 0) {
      uVar10 = 0x4001;
    }
    _CGImageCreate(lVar13,(long)iVar1,8,0x20,(long)(int)(lVar13 * 4),lVar11,uVar10,lVar7);
    _CGColorSpaceRelease(lVar11);
    _CGDataProviderRelease(lVar7);
    puVar12 = PTR__OBJC_CLASS___UIImage_1126aea68;
    _objc_alloc();
    func_0x00010bffa280(param_1);
    _CGImageRelease(lVar13);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
    return;
  }
  ___stack_chk_fail();
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*param_2 == '\x01') {
    if (*(int *)(param_2 + 4) == 0) {
LAB_10b697128:
      puVar9 = *(undefined1 **)(param_2 + 0x48);
      goto LAB_10b6971c8;
    }
  }
  else {
    lVar7 = 7;
    param_2[0x38] = '\a';
    param_2[0x39] = '\0';
    param_2[0x3a] = '\0';
    param_2[0x3b] = '\0';
    param_2[0xd8] = '\x01';
    param_2[0xd9] = '\0';
    param_2[0xda] = '\0';
    param_2[0xdb] = '\0';
    lVar11 = *(long *)(param_2 + 8);
    if (lVar11 == 0) {
      param_2[4] = '\a';
      param_2[5] = '\0';
      param_2[6] = '\0';
      param_2[7] = '\0';
      *param_2 = '\x01';
    }
    else {
      _CFDataGetBytePtr();
      uVar8 = *(undefined8 *)(param_2 + 8);
      _CFDataGetLength(uVar8);
      func_0x00010822dbe4(lVar11,uVar8,param_2 + 0x10);
      *(int *)(param_2 + 4) = (int)lVar11;
      *param_2 = '\x01';
      lVar7 = lVar11;
      if ((int)lVar11 == 0) goto LAB_10b697128;
    }
    puVar12 = PTR__OBJC_CLASS___NSError_1126ae858;
    FUN_10b696e08();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(lVar7);
    _objc_release(puVar12);
  }
  puVar9 = (undefined1 *)0x0;
LAB_10b6971c8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar3) {
    ___stack_chk_fail();
    *puVar9 = 0;
    *(undefined8 *)(puVar9 + 0x48) = 0;
    if (*(int *)(puVar9 + 0x44) < 1) {
      _free(*(undefined8 *)(puVar9 + 0xa8));
    }
    *(undefined8 *)(puVar9 + 0xa8) = 0;
    return;
  }
  return;
}



/* Entry: 10b6970a0; end: 10b6971f7;  */

void FUN_10b6970a0(char *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*param_1 == '\x01') {
    if (*(int *)(param_1 + 4) == 0) {
LAB_10b697128:
      puVar5 = *(undefined1 **)(param_1 + 0x48);
      goto LAB_10b6971c8;
    }
  }
  else {
    lVar1 = 7;
    param_1[0x38] = '\a';
    param_1[0x39] = '\0';
    param_1[0x3a] = '\0';
    param_1[0x3b] = '\0';
    param_1[0xd8] = '\x01';
    param_1[0xd9] = '\0';
    param_1[0xda] = '\0';
    param_1[0xdb] = '\0';
    lVar7 = *(long *)(param_1 + 8);
    if (lVar7 == 0) {
      param_1[4] = '\a';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      *param_1 = '\x01';
    }
    else {
      _CFDataGetBytePtr();
      uVar2 = *(undefined8 *)(param_1 + 8);
      _CFDataGetLength(uVar2);
      func_0x00010822dbe4(lVar7,uVar2,param_1 + 0x10);
      *(int *)(param_1 + 4) = (int)lVar7;
      *param_1 = '\x01';
      lVar1 = lVar7;
      if ((int)lVar7 == 0) goto LAB_10b697128;
    }
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    FUN_10b696e08();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(lVar1);
    _objc_release(puVar4);
  }
  puVar5 = (undefined1 *)0x0;
LAB_10b6971c8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    *puVar5 = 0;
    *(undefined8 *)(puVar5 + 0x48) = 0;
    if (*(int *)(puVar5 + 0x44) < 1) {
      _free(*(undefined8 *)(puVar5 + 0xa8));
    }
    *(undefined8 *)(puVar5 + 0xa8) = 0;
    return;
  }
  return;
}



/* Entry: 10b6971f8; end: 10b697277;  */

void FUN_10b6971f8(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x44) < 1) {
    _free(*(undefined8 *)(param_1 + 0xa8));
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  return;
}



/* Entry: 10b697278; end: 10b6972d3;  */

void FUN_10b697278(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_s_encoding_1125c2788;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(param_1,puVar1,puVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10b6972d4; end: 10b697373;  */

ulong FUN_10b6972d4(ulong param_1)

{
  ulong uVar1;
  
  _objc_getAssociatedObject(param_1,PTR_s_encoding_1125c2788);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c282760();
  _objc_release(param_1);
  return uVar1 & 0xffffffff;
}



/* Entry: 10b697374; end: 10b697397;  */

void FUN_10b697374(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14d0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,PTR__OBJC_CLASS___UIImage_1126aea68,
             PTR_s_sc_imageWithData_scale_shouldInt_112630e50,param_3,0);
  return;
}



/* Entry: 10b697398; end: 10b69748b;  */

void FUN_10b697398(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  double dVar3;
  
  dVar3 = param_1;
  _objc_retain(param_4);
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    uVar1 = param_4;
    func_0x00010c105b00();
    func_0x00010b88a670();
    if ((int)uVar1 < 1) {
      puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe9400(param_1,PTR__OBJC_CLASS___UIImage_1126aea68,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c195840();
    }
    else {
      if (param_1 <= 0.0) {
        puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
        func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14e120();
        _objc_release(puVar2);
        param_1 = dVar3;
      }
      dVar3 = (double)(uVar1 & 0xffffffff) / param_1;
      puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010c14d060(dVar3,dVar3,param_1,PTR__OBJC_CLASS___UIImage_1126aea68,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b69748c; end: 10b697793;  */

void FUN_10b69748c(double param_1,double param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,undefined **param_6,int param_7)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = param_6;
  dVar11 = param_1;
  _objc_retain(param_6);
  if (param_6 == (undefined **)0x0) {
    ppuVar9 = (undefined **)0x0;
    goto LAB_10b697744;
  }
  dVar12 = dVar11;
  dVar13 = param_3;
  if (param_3 <= 0.0) {
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    dVar12 = dVar11;
    _objc_release(puVar1);
    dVar13 = dVar11;
  }
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  uStack_98 = *(undefined8 *)PTR__kCGImageSourceShouldCache_110349d70;
  puStack_90 = PTR____kCFBooleanFalse_11034ab60;
  ppuVar8 = &puStack_90;
  param_7 = (int)&uStack_98;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_6;
  _CGImageSourceCreateWithData(param_6,puVar1);
  if (ppuVar2 == (undefined **)0x0) {
LAB_10b697600:
    param_3 = dVar12;
    ppuVar9 = (undefined **)0x0;
  }
  else {
    ppuVar8 = (undefined **)0x0;
    ppuVar3 = ppuVar2;
    _CGImageSourceCopyPropertiesAtIndex();
    if (ppuVar3 == (undefined **)0x0) {
      _CFRelease(ppuVar2);
      goto LAB_10b697600;
    }
    ppuVar4 = ppuVar3;
    func_0x00010c0e00e0();
    fVar10 = SUB84(dVar12,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar4 == (undefined **)0x0 || ppuVar5 == (undefined **)0x0) {
LAB_10b6975cc:
      ppuVar9 = (undefined **)PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe9400(param_3,PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bfb2c80(ppuVar4);
      dVar12 = (double)fVar10;
      dVar11 = dVar12;
      if (dVar12 < param_2 * dVar13) {
        func_0x00010bfb2c80(ppuVar5);
        dVar11 = (double)SUB84(dVar12,0);
        if ((double)SUB84(dVar12,0) < param_2 * dVar13) goto LAB_10b6975cc;
      }
      param_3 = dVar11;
      uStack_c8 = *(undefined8 *)PTR__kCGImageSourceCreateThumbnailFromImageAlways_110349d60;
      uStack_c0 = *(undefined8 *)PTR__kCGImageSourceCreateThumbnailWithTransform_110349d68;
      puStack_b0 = PTR____kCFBooleanTrue_11034ab68;
      puStack_a8 = PTR____kCFBooleanTrue_11034ab68;
      uStack_b8 = *(undefined8 *)PTR__kCGImageSourceThumbnailMaxPixelSize_110349d80;
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      param_7 = (int)&uStack_c8;
      puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_a0 = puVar6;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      ppuVar8 = ppuVar2;
      _CGImageSourceCreateThumbnailAtIndex(ppuVar2,0,puVar7);
      if (ppuVar8 == (undefined **)0x0) {
        ppuVar9 = (undefined **)0x0;
      }
      else {
        param_7 = 0;
        ppuVar9 = (undefined **)PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe9260(dVar13,PTR__OBJC_CLASS___UIImage_1126aea68);
        _objc_retainAutoreleasedReturnValue();
        _CGImageRelease(ppuVar8);
        param_3 = dVar13;
      }
      _objc_release(puVar7);
    }
    _CFRelease(ppuVar2);
    ppuVar8 = param_6;
    func_0x00010c105b00();
    func_0x00010c195840(ppuVar9);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
  }
  _objc_release(puVar1);
  dVar11 = param_3;
LAB_10b697744:
  _objc_release(param_6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    _objc_retain(ppuVar8);
    if (ppuVar8 == (undefined **)0x0) {
      ppuVar9 = (undefined **)0x0;
    }
    else {
      ppuVar9 = ppuVar8;
      func_0x00010c105b00();
      if (ppuVar9 == (undefined **)0x3) {
        ppuVar9 = ppuVar8;
        if (param_7 == 0) {
          FUN_10b696e38(dVar11,ppuVar8,0);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          FUN_10b696b1c();
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        ppuVar9 = (undefined **)PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe9400(dVar11,PTR__OBJC_CLASS___UIImage_1126aea68);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c195840();
    }
    _objc_release(ppuVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar9);
  return;
}



/* Entry: 10b697794; end: 10b697853;  */

void FUN_10b697794(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  int param_5)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  if (param_4 == (undefined *)0x0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = param_4;
    func_0x00010c105b00();
    if (puVar1 == (undefined *)0x3) {
      puVar1 = param_4;
      if (param_5 == 0) {
        FUN_10b696e38(param_1,param_4,0);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        FUN_10b696b1c();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe9400(param_1,PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c195840();
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b697854; end: 10b697a6b;  */

void FUN_10b697854(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14d0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,PTR__OBJC_CLASS___UIImage_1126aea68,
             PTR_s_sc_imageWithData_scale_isDecoded_112630e48);
  return;
}



/* Entry: 10b697a6c; end: 10b697a93;  */

undefined4 FUN_10b697a6c(long param_1)

{
  undefined4 uVar1;
  
  if ((uint)param_1 < 0x16) {
    func_0x00010b697928();
  }
  else {
    param_1 = -0x4524111;
  }
  uVar1 = 3;
  switch(param_1) {
  case 1:
    return 1;
  case 2:
    return 2;
  case 3:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    break;
  case 4:
    return 4;
  case 5:
    return 0xd;
  case 6:
    return 7;
  case 7:
    return 6;
  case 8:
    return 0xe;
  case 0x10:
    return 0x10;
  case 0x11:
    return 0x11;
  case 0x12:
    uVar1 = 0x12;
    break;
  default:
    uVar1 = 0;
    if (param_1 != -0x4524111) {
      uVar1 = 3;
    }
    return uVar1;
  }
  return uVar1;
}



/* Entry: 10b697a94; end: 10b697ae7;  */

void FUN_10b697a94(int param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  uVar1 = param_1 - 1;
  if ((uVar1 < 0x12) && ((0x3b17fU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    uVar2 = *(undefined8 *)(&PTR_PTR_110d58e20)[uVar1];
    _objc_retain(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b697ae8; end: 10b697c6b;  */

undefined * FUN_10b697ae8(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c23f420();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
      puVar7 = (undefined *)0x0;
LAB_10b697c24:
      _objc_release(param_1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
        return puVar7;
      }
      ___stack_chk_fail();
      puVar7 = PTR_PTR_1126d83d8;
      _objc_alloc(PTR_PTR_1126d83d8);
      puVar5 = puVar7;
      func_0x000107c31920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b6979dc(param_1);
      func_0x00010bff4420(puVar7);
      _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
      return puVar7;
    }
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      puVar7 = PTR_PTR_1126d83d8;
      uVar8 = *(ulong *)(lVar9 * 8);
      _objc_retain(uVar8);
      _objc_opt_class(puVar7);
      uVar4 = uVar8;
      _objc_opt_isKindOfClass(uVar8,puVar7);
      uVar1 = uVar8;
      if ((uVar4 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar8);
      uVar4 = uVar1;
      func_0x00010bf0b760();
      _objc_release(uVar1);
      if ((uint)uVar4 < 0x16) {
        func_0x00010b697928();
      }
      else {
        uVar4 = 0xfffffffffbadbeef;
      }
      if (uVar4 == param_2) {
        puVar7 = (undefined *)0x1;
        goto LAB_10b697c24;
      }
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = param_1;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10b697c6c; end: 10b697cdb;  */

void FUN_10b697c6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d83d8;
  _objc_alloc(PTR_PTR_1126d83d8);
  puVar2 = puVar1;
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b6979dc(param_1);
  func_0x00010bff4420(puVar1,param_2,puVar2,param_1,0);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b697cdc; end: 10b697dbf; -[SCCoreDataObjectObserveContext initWithObserveToken:context:objectClass:objectID:] */

undefined1 *
FUN_10b697cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112709bf0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b697dc0; end: 10b697e03; -[SCCoreDataObjectObserveContext dealloc] */

void FUN_10b697dc0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c281a60();
  puStack_28 = PTR_PTR_112709bf0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b697e04; end: 10b697e13; -[SCCoreDataObjectObserveContext unobserve] */

void FUN_10b697e04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c281b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_unobserve_objectClass_objectID__11267e0e8,
             *(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x18),
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10b697e14; end: 10b697e4f; -[SCCoreDataObjectObserveContext .cxx_destruct] */

void FUN_10b697e14(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b697e50; end: 10b697e6f; +[SCCoreDataObjectContext sharedContextFor:] */

void FUN_10b697e50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22b8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126e0498,PTR_s_sharedContextFor_logger_flipper__112668858,param_3,0,0,0,0,0);
  return;
}



/* Entry: 10b697e70; end: 10b697ff7; +[SCCoreDataObjectContext sharedContextFor:logger:flipper:crashLogger:circumstanceEngine:backgroundExecutionServices:] */

void FUN_10b697e70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (lRam00000001137f7878 != -1) {
    func_0x000107c27d9c(0x1137f7878,&PTR___NSConcreteGlobalBlock_110d58eb0);
  }
  _dispatch_semaphore_wait(uRam00000001137f7880,0xffffffffffffffff);
  puVar1 = puRam00000001137f7888;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126e0498;
    _objc_alloc(PTR_PTR_1126e0498);
    puVar2 = PTR_PTR_1126b24d8;
    func_0x00010c22b9c0(PTR_PTR_1126b24d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0045c0(puVar1);
    _objc_release(puVar2);
    func_0x00010c1d0640(puRam00000001137f7888);
  }
  _dispatch_semaphore_signal(uRam00000001137f7880);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b697ff8; end: 10b69804f;  */

void FUN_10b697ff8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137f7888;
  puRam00000001137f7888 = puVar2;
  _objc_release(uVar1);
  uVar3 = 1;
  _dispatch_semaphore_create();
  uVar1 = uRam00000001137f7880;
  uRam00000001137f7880 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b698050; end: 10b6980e3; +[SCCoreDataObjectContext setCurrentObjectContext:] */

void FUN_10b698050(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010bf60460(PTR__OBJC_CLASS___NSThread_1126b47e0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c26d3e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010c12d3e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f6dc18);
  }
  else {
    func_0x00010c1d0640(puVar2,param_2,param_3,&PTR____CFConstantStringClassReference_110f6dc18);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6980e4; end: 10b698157; +[SCCoreDataObjectContext currentCoreDataObjectContext] */

void FUN_10b6980e4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010bf60460(PTR__OBJC_CLASS___NSThread_1126b47e0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c26d3e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b698158; end: 10b6981eb; +[SCCoreDataObjectContext setCurrentCoreDataObjectContext:] */

void FUN_10b698158(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010bf60460(PTR__OBJC_CLASS___NSThread_1126b47e0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c26d3e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010c12d3e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f6dc38);
  }
  else {
    func_0x00010c1d0640(puVar2,param_2,param_3,&PTR____CFConstantStringClassReference_110f6dc38);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6981ec; end: 10b69827f; +[SCCoreDataObjectContext managedObjectID:forContext:] */

void FUN_10b6981ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c0fa460(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_4;
  func_0x00010c0b7fa0(param_4,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b698280; end: 10b6982af; -[SCCoreDataObjectContext contextName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b698280(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11279175c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b6982b0; end: 10b698333; -[SCCoreDataObjectContext _installWithPersistentStoreCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b6982b0(long param_1)

{
  undefined *puVar1;
  
  func_0x00010c1dad60(*(undefined8 *)(param_1 + _DAT_112791770));
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  *(undefined8 *)(param_1 + _DAT_11279176c) = 1;
  return;
}



/* Entry: 10b698334; end: 10b69873b; -[SCCoreDataObjectContext _migratePersistentStoreWithFileURL:sourceModel:destinationModel:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_10b698334(undefined **param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
             undefined *param_5,undefined8 *param_6)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined1 uVar6;
  undefined *puVar7;
  int iVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined1 uStack_128;
  undefined **ppuStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined **ppuStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _CACurrentMediaTime();
  puVar9 = PTR__OBJC_CLASS___NSMappingModel_1126e04b0;
  puVar4 = param_4;
  puVar10 = param_5;
  puStack_d0 = param_5;
  puStack_c8 = param_4;
  func_0x00010bfed680();
  uVar6 = SUB81(puVar10,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_d8 = puVar9;
  if (puVar9 == (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    uVar11 = *(undefined8 *)PTR__NSSQLiteStoreType_11034b9f0;
    ppuVar1 = (undefined **)0x0;
    puVar10 = (undefined *)0x0;
    ppuStack_e0 = param_1;
    do {
      param_4 = puVar10;
      param_1 = ppuVar1;
      func_0x000107c31920();
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = &PTR____CFConstantStringClassReference_110f6dc58;
      func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110f6dc58,param_2,puVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_3;
      func_0x00010bdc2ca0(param_3,param_2,ppuVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar1);
      _objc_release(puVar9);
      puVar9 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSMigrationManager_1126e04b8;
      _objc_alloc();
      func_0x00010c04aa80();
      uStack_f0 = 0;
      puVar10 = puVar3;
      puVar4 = param_3;
      puStack_e8 = param_6;
      uVar6 = (char)uVar11;
      func_0x00010c0cd3c0();
      iVar8 = (int)param_1;
      if ((int)puVar10 != 0) {
        puVar4 = param_3;
        func_0x00010c0f5800(param_3);
        _objc_retainAutoreleasedReturnValue();
        param_5 = puVar9;
        func_0x00010bfacbe0(puVar9,param_2,puVar4);
        _objc_release(puVar4);
        if ((int)param_5 == 0) {
          puVar10 = puVar9;
          puVar4 = puVar2;
          puVar7 = param_3;
          func_0x00010c0d1580();
          uVar6 = SUB81(puVar7,0);
        }
        else {
          param_5 = puVar9;
          puVar4 = param_3;
          puVar7 = puVar2;
          puStack_c0 = param_3;
          func_0x00010c130ee0();
          puVar10 = puStack_c0;
          uVar6 = SUB81(puVar7,0);
          _objc_retain(puStack_c0);
          _objc_release(param_3);
          param_3 = puVar10;
          puVar10 = param_5;
        }
        if (((ulong)puVar10 & 1) != 0) {
          _objc_release(puVar3);
          _objc_release(puVar9);
          _objc_release(puVar2);
          ppuVar1 = ppuStack_e0;
          *(int *)((long)ppuStack_e0 + (long)_DAT_112791784) =
               *(int *)((long)ppuStack_e0 + (long)_DAT_112791784) - iVar8;
          if (iVar8 != 0) {
            ppuStack_b8 = &PTR____CFConstantStringClassReference_110dae878;
            ppuVar5 = ppuStack_e0;
            func_0x00010bf4eb80();
            _objc_retainAutoreleasedReturnValue();
            ppuStack_b0 = &PTR____CFConstantStringClassReference_110ec2f38;
            param_5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            ppuStack_98 = ppuVar5;
            func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,-iVar8);
            _objc_retainAutoreleasedReturnValue();
            ppuStack_a8 = &PTR____CFConstantStringClassReference_110f6dc78;
            param_1 = &PTR_PTR_1126b2000;
            puVar4 = PTR_PTR_1126b24e8;
            puStack_90 = param_5;
            func_0x00010c276400();
            _objc_retainAutoreleasedReturnValue();
            ppuStack_a0 = &PTR____CFConstantStringClassReference_110f6dc98;
            puVar9 = PTR_PTR_1126b24e8;
            puStack_88 = puVar4;
            func_0x00010bfb7480();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            puStack_80 = puVar9;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_98,
                                &ppuStack_b8,4);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar9);
            _objc_release(puVar4);
            _objc_release(param_5);
            _objc_release(ppuVar5);
            uVar6 = 0;
            puVar4 = param_4;
            func_0x00010be51fa0(ppuVar1);
            _objc_release(puVar10);
          }
          puVar9 = (undefined *)0x1;
          puVar10 = param_4;
          goto LAB_10b6986cc;
        }
      }
      puVar10 = (undefined *)*param_6;
      _objc_retain(puVar10);
      _objc_release(param_4);
      func_0x00010c23e800(0x3fb999999999999a,PTR__OBJC_CLASS___NSThread_1126b47e0);
      _objc_release(puVar3);
      _objc_release(puVar9);
      _objc_release();
      param_1 = (undefined **)(ulong)(iVar8 - 1U);
      puVar9 = puVar2;
      ppuVar1 = param_1;
    } while (iVar8 - 1U != 0xfffffffb);
    puVar9 = (undefined *)0x0;
    *(int *)((long)ppuStack_e0 + (long)_DAT_112791784) =
         *(int *)((long)ppuStack_e0 + (long)_DAT_112791784) + 5;
LAB_10b6986cc:
    _CACurrentMediaTime();
    _objc_release(puVar10);
  }
  _objc_release(puStack_d8);
  _objc_release(puStack_d0);
  _objc_release(puStack_c8);
  puVar10 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar9;
  }
  ___stack_chk_fail();
  pcStack_f8 = FUN_10b69873c;
  ppuStack_120 = param_1;
  puStack_118 = param_5;
  puStack_110 = param_3;
  puStack_108 = param_4;
  puStack_100 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  uVar11 = *(undefined8 *)(puVar10 + _DAT_112791770);
  puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_150 = 0xc2000000;
  pcStack_148 = FUN_10b6987dc;
  puStack_140 = &UNK_1108523f8;
  puStack_138 = puVar10;
  puStack_130 = puVar4;
  uStack_128 = uVar6;
  _objc_retain(puVar4);
  func_0x00010c0f8440(uVar11,param_2,&puStack_158);
  _objc_release(puStack_130);
  _objc_release(puVar4);
  return puVar4;
}



/* Entry: 10b69873c; end: 10b6987db; -[SCCoreDataObjectContext destroyPersistentStore:reinstall:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b69873c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112791770);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b6987dc;
  puStack_50 = &UNK_1108523f8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x00010c0f8440(uVar1,param_2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 10b6987dc; end: 10b698a47;  */

/* WARNING: Removing unreachable block (ram,0x00010b6988ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b6987dc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + (long)_DAT_112791770);
  func_0x00010c0fa460();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0fa480();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (uVar3 != 0) {
    uVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(uVar2);
      }
      func_0x00010c12d9e0(uVar1);
      _objc_retain(0);
      uVar9 = uVar9 + 1;
    } while (uVar3 != uVar9);
    uVar3 = uVar2;
    func_0x00010bf52a60();
  }
  _objc_release(uVar2);
  func_0x00010be8cf20();
  if (uVar1 != 0) {
    lVar4 = *(long *)(param_1 + 0x20);
    if (*(char *)(param_1 + 0x30) == '\x01') {
      func_0x00010be3d060();
      lVar4 = *(long *)(param_1 + 0x20);
      uVar8 = 1;
    }
    else {
      uVar8 = 2;
    }
    *(undefined8 *)(lVar4 + _DAT_11279176c) = uVar8;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  }
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4eb80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010becd900(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar8);
  lVar4 = 0;
  func_0x00010be51fa0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    _objc_retain(lVar4);
    uVar3 = uVar1;
    func_0x00010becd900();
    if (uVar3 < 0x33) {
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x10))(lVar4,0);
      }
    }
    else {
      _objc_retain(lVar4);
      func_0x00010bf6f060(uVar1);
      _objc_release(lVar4);
    }
    _objc_release(lVar4);
    return;
  }
  return;
}



/* Entry: 10b698a48; end: 10b698b03; -[SCCoreDataObjectContext destroyPersistentStoreIfNeededWithPrecheck:reinstall:] */

void FUN_10b698a48(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010becd900();
  if (uVar1 < 0x33) {
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3,0);
    }
  }
  else {
    _objc_retain(param_3);
    func_0x00010bf6f060(param_1);
    _objc_release(param_3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10b698b04; end: 10b698b1b;  */

void FUN_10b698b04(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b698b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 10b698b1c; end: 10b698b7b; -[SCCoreDataObjectContext installPersistentStore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b698b1c(long param_1,undefined8 param_2)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10b698b7c;
  puStack_28 = &UNK_110848c48;
  uStack_18 = 0;
  lStack_20 = param_1;
  func_0x00010c0f8440(*(undefined8 *)(param_1 + _DAT_112791770),param_2,&puStack_40);
  return;
}



/* Entry: 10b698b7c; end: 10b698b83;  */

void FUN_10b698b7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3ce10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__installPersistentStoreIfNeeded_11256cd20);
  return;
}



/* Entry: 10b698b84; end: 10b698c97; -[SCCoreDataObjectContext _createDiskFileDirIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b698b84(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112791760);
  func_0x00010bdc2cc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bfacbe0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  if (((ulong)puVar4 & 1) == 0) {
    uStack_48 = 0;
    func_0x00010bf55da0(puVar1,param_2,uVar2,1,0,&uStack_48);
    func_0x00010befb520(uVar2);
  }
  puVar4 = PTR_PTR_1126b24d8;
  func_0x00010c22b9c0(PTR_PTR_1126b24d8,param_2,*(undefined8 *)(param_1 + _DAT_11279175c));
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c071ae0();
  _objc_release(puVar4);
  if (((ulong)puVar5 & 1) == 0) {
    func_0x00010c0bb480(PTR_PTR_1126dbe20,param_2,uVar2);
  }
  _objc_release(uVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 10b698c98; end: 10b699663; -[SCCoreDataObjectContext _installPersistentStoreIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10b698c98(ulong param_1,undefined8 param_2,undefined *param_3,int param_4,long param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined *puVar21;
  ulong uVar22;
  undefined8 uVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  undefined *puStack_290;
  undefined *puStack_258;
  undefined1 auStack_1e8 [96];
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  ulong uStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  ulong uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_104 [148];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar18 = param_1;
  if (*(long *)(param_1 + (long)_DAT_11279176c) != 0) goto LAB_10b699628;
  uVar18 = *(ulong *)(param_1 + (long)_DAT_112791760);
  _objc_retain(uVar18);
  func_0x00010bded2c0(param_1);
  uVar20 = *(undefined8 *)(param_1 + (long)_DAT_112791768);
  uVar26 = uVar18;
  func_0x00010beec820(uVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7c00(uVar20);
  _objc_release(uVar26);
  puVar2 = PTR__OBJC_CLASS___NSManagedObjectModel_1126e04c0;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  _objc_opt_class(param_1);
  func_0x00010bf249e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bdc2ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0040a0();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar4 = PTR__OBJC_CLASS___NSPersistentStoreCoordinator_1126e04c8;
  _objc_alloc();
  func_0x00010c028280();
  _objc_retain(puVar2);
  _CC_SHA1_Init(auStack_1e8);
  puVar5 = puVar2;
  func_0x00010bf96d80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar5;
  func_0x00010bf52a60();
  lVar17 = lRam0000000000000000;
  while (puVar3 != (undefined *)0x0) {
    puVar21 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar17) {
        _objc_enumerationMutation(puVar5);
      }
      uVar23 = *(undefined8 *)((long)puVar21 * 8);
      uVar20 = uVar23;
      func_0x00010c298c60(uVar23);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar20;
      _objc_retainAutorelease();
      func_0x00010bf25f00();
      func_0x00010c298c60(uVar23);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar23;
      func_0x00010c08fa60();
      _CC_SHA1_Update(auStack_1e8,uVar6,uVar7);
      _objc_release(uVar23);
      _objc_release(uVar20);
      puVar21 = puVar21 + 1;
    } while (puVar3 != puVar21);
    puVar3 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  _CC_SHA1_Final(auStack_104,auStack_1e8);
  puVar21 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar8 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar18;
  func_0x00010bdc2ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar26;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_1;
  func_0x00010be3d060();
  puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
  puVar3 = PTR__NSFileProtectionNone_110345440;
  if ((int)uVar24 == 0) {
    uVar24 = uVar26;
    func_0x00010c0f5800(uVar26);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf64a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar24);
    puVar9 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
    _objc_alloc();
    func_0x00010bfeea60();
    func_0x00010c1ec620();
    puVar10 = puVar9;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSPersistentStoreCoordinator_1126e04c8;
    uStack_118 = *(undefined8 *)PTR__NSPersistentStoreFileProtectionKey_11034b9e0;
    uStack_110 = *(undefined8 *)puVar3;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cc380();
    _objc_retainAutoreleasedReturnValue();
    puStack_258 = (undefined *)0x0;
    _objc_retain();
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c06ef60();
    if (((ulong)puVar3 & 1) == 0) {
      if (puVar10 == (undefined *)0x0) {
        uVar24 = 0;
        bVar1 = false;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSManagedObjectModel_1126e04c0;
        _objc_opt_class(PTR__OBJC_CLASS___NSManagedObjectModel_1126e04c0);
        puVar12 = puVar10;
        _objc_opt_isKindOfClass(puVar10,puVar3);
        if ((((ulong)puVar12 & 1) == 0) ||
           (puVar3 = puVar10, func_0x00010c06ef60(), (int)puVar3 == 0)) {
          uVar24 = 0;
          bVar1 = false;
        }
        else {
          uVar24 = param_1;
          func_0x00010be60540();
          _objc_retain();
          bVar1 = true;
        }
      }
      puStack_290 = (undefined *)0x0;
      puVar3 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
      func_0x00010bf09780();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e060();
      func_0x00010c1894a0(puVar8);
      if ((uVar24 & 1) == 0) {
        puVar12 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x00010bf69bc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be8cf20(param_1);
        if (bVar1) {
          ppuStack_148 = &PTR____CFConstantStringClassReference_110dae878;
          uVar24 = param_1;
          func_0x00010bf4eb80();
          _objc_retainAutoreleasedReturnValue();
          ppuStack_140 = &PTR____CFConstantStringClassReference_110f6dc78;
          puVar13 = PTR_PTR_1126b24e8;
          uStack_130 = uVar24;
          func_0x00010c276400();
          _objc_retainAutoreleasedReturnValue();
          ppuStack_138 = &PTR____CFConstantStringClassReference_110f6dc98;
          puVar14 = PTR_PTR_1126b24e8;
          puStack_128 = puVar13;
          func_0x00010bfb7480();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          puStack_120 = puVar14;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar14);
          _objc_release(puVar13);
          _objc_release(uVar24);
        }
        else {
          ppuStack_178 = &PTR____CFConstantStringClassReference_110dae878;
          uVar24 = param_1;
          func_0x00010bf4eb80();
          _objc_retainAutoreleasedReturnValue();
          ppuStack_170 = &PTR____CFConstantStringClassReference_110f6dc78;
          puVar13 = PTR_PTR_1126b24e8;
          uStack_160 = uVar24;
          func_0x00010c276400();
          _objc_retainAutoreleasedReturnValue();
          ppuStack_168 = &PTR____CFConstantStringClassReference_110f6dc98;
          puVar14 = PTR_PTR_1126b24e8;
          puStack_158 = puVar13;
          func_0x00010bfb7480();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          puStack_150 = puVar14;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar14);
          _objc_release(puVar13);
          _objc_release(uVar24);
        }
        func_0x00010be51fa0(param_1);
        _objc_release(puVar15);
        _objc_release(puVar12);
      }
      _objc_release(puVar3);
LAB_10b6994dc:
      _objc_release(puStack_290);
    }
    else if ((puVar2 != (undefined *)0x0) &&
            (puVar3 = puVar10, func_0x00010c06ef60(), ((ulong)puVar3 & 1) == 0)) {
      puStack_290 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
      func_0x00010bf09780();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e060();
      func_0x00010c1894a0(puVar8);
      goto LAB_10b6994dc;
    }
    func_0x00010be3d060(param_1);
    _objc_release(puVar11);
LAB_10b699500:
    _objc_release(puStack_258);
    _objc_release(puVar10);
    _objc_release(puVar9);
  }
  else {
    puVar5 = puVar8;
    func_0x00010bf63aa0();
    _objc_retainAutoreleasedReturnValue();
    if ((puVar5 == (undefined *)0x0) ||
       (puVar3 = puVar5, func_0x00010c071ae0(), ((ulong)puVar3 & 1) == 0)) {
      puVar9 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64a80(PTR__OBJC_CLASS___NSData_1126ae778);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
      _objc_alloc();
      func_0x00010bfeea60();
      func_0x00010c1ec620();
      puStack_258 = puVar10;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      if ((puVar2 != (undefined *)0x0) &&
         (puVar3 = puStack_258, func_0x00010c071ae0(), ((ulong)puVar3 & 1) == 0)) {
        puVar3 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
        func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14e060();
        _objc_release(puVar3);
      }
      func_0x00010c1894a0(puVar8);
      goto LAB_10b699500;
    }
  }
  _objc_release(puVar5);
  puVar3 = puVar4;
  func_0x00010c0fa480();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf529e0();
  _objc_release(puVar3);
  if (puVar5 != (undefined *)0x0) {
    func_0x00010be3d080(param_1);
  }
  func_0x00010bdc8380(param_1);
  uStack_188 = *(undefined8 *)PTR__NSFileProtectionKey_110345438;
  uStack_180 = *(undefined8 *)PTR__NSFileProtectionNone_110345440;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar26;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  param_5 = 0;
  param_3 = puVar3;
  uVar22 = uVar24;
  func_0x00010c16b7e0(puVar8);
  param_4 = (int)uVar22;
  _objc_release(uVar24);
  _objc_release(puVar3);
  func_0x00010c24f440(*(undefined8 *)(param_1 + (long)_DAT_112791780));
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(puVar8);
  _objc_release(puVar21);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release();
LAB_10b699628:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return uVar18;
  }
  ___stack_chk_fail();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010bded2c0(uVar18);
  if (param_4 == 0) {
    lVar19 = 1;
  }
  else {
    lVar19 = 3;
  }
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = 0;
  uVar26 = 0;
  uVar27 = *(ulong *)PTR__NSSQLiteStoreType_11034b9f0;
  do {
    lVar16 = param_5;
    uVar24 = uVar27;
    func_0x00010befa820();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    _objc_release(0);
    uVar22 = (ulong)(lVar16 != 0);
    if (lVar16 != 0) {
      *(int *)(uVar18 + (long)_DAT_112791784) =
           *(int *)(uVar18 + (long)_DAT_112791784) - (int)lVar25;
      if (lVar25 != 0) {
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df760();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df6e0();
        _objc_retainAutoreleasedReturnValue();
        uVar27 = uVar18;
        func_0x00010bf4eb80();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_PTR_1126b24e8;
        func_0x00010c276400();
        _objc_retainAutoreleasedReturnValue();
        puVar21 = PTR_PTR_1126b24e8;
        func_0x00010bfb7480();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar21);
        _objc_release(puVar5);
        _objc_release(uVar27);
        _objc_release(puVar4);
        _objc_release(puVar2);
        func_0x00010be51fa0(uVar18);
        goto LAB_10b699a70;
      }
      uVar22 = 1;
      goto LAB_10b699a78;
    }
    _objc_retain(0);
    _objc_release(0);
    func_0x00010c23e800(0x3fb999999999999a,PTR__OBJC_CLASS___NSThread_1126b47e0);
    lVar25 = lVar25 + -1;
  } while (-lVar25 != lVar19);
  *(int *)(uVar18 + (long)_DAT_112791784) = *(int *)(uVar18 + (long)_DAT_112791784) + (int)lVar19;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar18;
  func_0x00010bf4eb80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b24e8;
  func_0x00010c276400();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b24e8;
  func_0x00010bfb7480();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar27);
  _objc_release(puVar2);
  func_0x00010be51fa0(uVar18);
LAB_10b699a70:
  _objc_release(puVar8);
  uVar24 = uVar26;
LAB_10b699a78:
  _objc_release(lVar16);
  _objc_release(puVar3);
  _objc_release(0);
  _objc_release(0);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return uVar22;
  }
  ___stack_chk_fail();
  _objc_retain(uVar24);
  uVar20 = *(undefined8 *)(param_3 + _DAT_112791770);
  _objc_retain(uVar24);
  func_0x00010c0f8440(uVar20);
  _objc_release(uVar24);
  _objc_release(uVar24);
  return uVar24;
}



/* Entry: 10b699664; end: 10b699af3; -[SCCoreDataObjectContext _installWithFileURL:migrateAutomatically:persistentStoreCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10b699664(undefined *param_1,undefined8 param_2,long param_3,int param_4,long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  code *pcStack_1d0;
  undefined *puStack_1c8;
  long lStack_1c0;
  ulong uStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  undefined **ppuStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  long lStack_160;
  ulong uStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_160 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010bded2c0(param_1);
  puStack_170 = (undefined *)CONCAT44(puStack_170._4_4_,param_4);
  if (param_4 == 0) {
    uStack_c0 = *(undefined8 *)PTR__NSPersistentStoreFileProtectionKey_11034b9e0;
    uStack_b8 = *(undefined8 *)PTR__NSFileProtectionNone_110345440;
    puVar9 = (undefined *)0x1;
    lVar12 = -0xa8;
    lVar3 = -0xb0;
    uVar8 = 1;
  }
  else {
    uStack_b0 = *(undefined8 *)PTR__NSMigratePersistentStoresAutomaticallyOption_11034b9d8;
    uStack_a8 = *(undefined8 *)PTR__NSInferMappingModelAutomaticallyOption_11034b9c0;
    puStack_98 = PTR____kCFBooleanTrue_11034ab68;
    puStack_90 = PTR____kCFBooleanTrue_11034ab68;
    uStack_a0 = *(undefined8 *)PTR__NSPersistentStoreFileProtectionKey_11034b9e0;
    uStack_88 = *(undefined8 *)PTR__NSFileProtectionNone_110345440;
    puVar9 = (undefined *)0x3;
    lVar12 = -0x88;
    lVar3 = -0xa0;
    uVar8 = 3;
  }
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_168 = param_1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,
                      &stack0xfffffffffffffff0 + lVar12,&stack0xfffffffffffffff0 + lVar3,uVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = 0;
  uVar14 = *(ulong *)PTR__NSSQLiteStoreType_11034b9f0;
  ppuVar10 = &PTR_PTR_1126b4000;
  uVar13 = 0;
  puStack_178 = puVar9;
  do {
    lVar3 = param_5;
    uVar7 = uVar14;
    uStack_158 = uVar13;
    func_0x00010befa820();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uStack_158;
    _objc_retain(uStack_158);
    _objc_release(uVar13);
    puVar6 = puStack_168;
    uVar11 = (ulong)(lVar3 != 0);
    if (lVar3 != 0) {
      *(int *)(puStack_168 + _DAT_112791784) = *(int *)(puStack_168 + _DAT_112791784) - (int)lVar12;
      if (lVar12 != 0) {
        ppuStack_150 = &PTR____CFConstantStringClassReference_110ec2f38;
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,-lVar12);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_148 = &PTR____CFConstantStringClassReference_110f6dd38;
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puStack_178 = puVar9;
        puStack_128 = puVar9;
        func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                            (ulong)puStack_170 & 0xffffffff);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_140 = &PTR____CFConstantStringClassReference_110dae878;
        puStack_170 = puVar5;
        puStack_120 = puVar5;
        func_0x00010bf4eb80();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_138 = &PTR____CFConstantStringClassReference_110f6dc78;
        puVar9 = PTR_PTR_1126b24e8;
        puStack_180 = puVar6;
        puStack_118 = puVar6;
        func_0x00010c276400();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_130 = &PTR____CFConstantStringClassReference_110f6dc98;
        puVar6 = PTR_PTR_1126b24e8;
        puStack_110 = puVar9;
        func_0x00010bfb7480();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_108 = puVar6;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_128,
                            &ppuStack_150,5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        _objc_release(puVar9);
        _objc_release(puStack_180);
        _objc_release(puStack_170);
        _objc_release(puStack_178);
        uVar7 = uVar13;
        func_0x00010be51fa0(puStack_168,param_2,uVar13,4,puVar5);
        goto LAB_10b699a70;
      }
      uVar11 = 1;
      puVar9 = puStack_168;
      goto LAB_10b699a78;
    }
    _objc_retain(uVar1);
    _objc_release(uVar13);
    func_0x00010c23e800(0x3fb999999999999a,PTR__OBJC_CLASS___NSThread_1126b47e0);
    puVar6 = puStack_168;
    lVar12 = lVar12 + -1;
    uVar13 = uVar1;
  } while ((undefined *)-lVar12 != puVar9);
  *(int *)(puStack_168 + _DAT_112791784) = *(int *)(puStack_168 + _DAT_112791784) + (int)puStack_178
  ;
  ppuStack_100 = &PTR____CFConstantStringClassReference_110f6dd38;
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(ulong)puStack_170 & 0xffffffff);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110dae878;
  puVar5 = puVar6;
  puStack_170 = puVar9;
  puStack_e0 = puVar9;
  func_0x00010bf4eb80();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110f6dc78;
  puVar9 = PTR_PTR_1126b24e8;
  puStack_178 = puVar5;
  puStack_d8 = puVar5;
  func_0x00010c276400();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110f6dc98;
  puVar4 = PTR_PTR_1126b24e8;
  puStack_d0 = puVar9;
  func_0x00010bfb7480();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_c8 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_e0,&ppuStack_100,4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar9);
  _objc_release(puStack_178);
  _objc_release(puStack_170);
  uVar7 = uVar1;
  func_0x00010be51fa0(puVar6,param_2,uVar1,3,puVar5);
LAB_10b699a70:
  ppuVar10 = &PTR_PTR_1126b2000;
  _objc_release(puVar5);
LAB_10b699a78:
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(uVar13);
  _objc_release(uVar1);
  _objc_release(param_5);
  lVar12 = lStack_160;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return uVar11;
  }
  ___stack_chk_fail();
  pcStack_188 = FUN_10b699af4;
  puStack_1b0 = puVar2;
  puStack_1a8 = puVar9;
  lStack_1a0 = param_5;
  ppuStack_198 = ppuVar10;
  puStack_190 = &stack0xfffffffffffffff0;
  _objc_retain(uVar7);
  uVar8 = *(undefined8 *)(lVar12 + _DAT_112791770);
  puStack_1e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d8 = 0xc2000000;
  pcStack_1d0 = FUN_10b699b8c;
  puStack_1c8 = &UNK_11084aaa8;
  lStack_1c0 = lVar12;
  uStack_1b8 = uVar7;
  _objc_retain(uVar7);
  func_0x00010c0f8440(uVar8,param_2,&puStack_1e0);
  _objc_release(uStack_1b8);
  _objc_release(uVar7);
  return uVar7;
}



/* Entry: 10b699af4; end: 10b699b8b; -[SCCoreDataObjectContext perform:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b699af4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112791770);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b699b8c;
  puStack_48 = &UNK_11084aaa8;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f8440(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10b699b8c; end: 10b699be7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b699b8c(long param_1)

{
  func_0x00010be3ce00(*(undefined8 *)(param_1 + 0x20));
  if (*(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_11279176c) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010b699bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
              (*(long *)(param_1 + 0x28),
               *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112791770));
    return;
  }
  return;
}



/* Entry: 10b699be8; end: 10b699c7b; -[SCCoreDataObjectContext performAndWait:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b699be8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112791770);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b699c7c;
  puStack_48 = &UNK_11084aaa8;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f8460(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b699c7c; end: 10b699cd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b699c7c(long param_1)

{
  func_0x00010be3ce00(*(undefined8 *)(param_1 + 0x20));
  if (*(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_11279176c) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010b699cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
              (*(long *)(param_1 + 0x28),
               *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112791770));
    return;
  }
  return;
}



/* Entry: 10b699cd8; end: 10b699ce7; -[SCCoreDataObjectContext changeRequestCreatedForManagedObjectID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b699cd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11279177c),PTR_s_addObject__11259c1f0);
  return;
}



/* Entry: 10b699ce8; end: 10b699d8b; -[SCCoreDataObjectContext dispatchOnceWithToken:block:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b699ce8(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  _objc_retain(param_4);
  if (*param_3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112791770);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10b699d8c;
    puStack_48 = &UNK_110860cf8;
    plStack_38 = param_3;
    _objc_retain(param_4);
    uStack_40 = param_4;
    func_0x00010c0f8460(uVar1,param_2,&puStack_60);
    _objc_release(uStack_40);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b699d8c; end: 10b699dcf;  */

void FUN_10b699d8c(long param_1)

{
  if (**(long **)(param_1 + 0x28) != 0) {
    return;
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  **(undefined8 **)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 10b699dd0; end: 10b699f23; -[SCCoreDataObjectContext performChanges:queue:completionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b699dd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112791754);
  func_0x00010bf145c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf17d00();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112791770);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10b699f24;
  puStack_88 = &UNK_110c9c438;
  lStack_80 = param_1;
  uStack_78 = param_4;
  uStack_70 = uVar1;
  uStack_68 = param_3;
  uStack_60 = param_5;
  uStack_58 = uVar2;
  _objc_retain(uVar1);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f8440(uVar3,param_2,&puStack_a0);
  _objc_release(uStack_70);
  _objc_release(uStack_60);
  _objc_release(uStack_78);
  _objc_release(uStack_68);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b699f24; end: 10b69a137;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b699f24(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010be3ce00(*(undefined8 *)(param_1 + 0x20));
  if (lRam00000001137f7870 != -1) {
    func_0x000107c27d9c(0x1137f7870,&PTR___NSConcreteGlobalBlock_110d58f70);
  }
  if (*(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_11279176c) == 1) {
    lVar6 = (long)_DAT_112791770;
    func_0x00010c187680(PTR_PTR_1126e0498);
    func_0x00010c187180(PTR_PTR_1126e0498);
    lVar5 = (long)_DAT_112791788;
    *(long *)(*(long *)(param_1 + 0x20) + lVar5) = *(long *)(*(long *)(param_1 + 0x20) + lVar5) + 1;
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
    *(long *)(*(long *)(param_1 + 0x20) + lVar5) = *(long *)(*(long *)(param_1 + 0x20) + lVar5) + -1
    ;
    func_0x00010c12adc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11279177c));
    func_0x00010c187680(PTR_PTR_1126e0498);
    func_0x00010c187180(PTR_PTR_1126e0498);
    lVar1 = *(long *)(*(long *)(param_1 + 0x20) + lVar6);
    func_0x00010c0fa460();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010c0fa480();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010bf529e0();
    _objc_release(lVar5);
    _objc_release(lVar1);
    if (lVar7 == 0) {
      func_0x00010be58160();
      uVar3 = 0;
      uVar4 = 0;
    }
    else {
      uVar4 = (undefined1)*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6);
      uStack_48 = 0;
      func_0x00010c149e40();
      uVar3 = uStack_48;
      _objc_retain(uStack_48);
    }
    lVar5 = *(long *)(param_1 + 0x28);
    if ((lVar5 != 0) && (lVar7 = *(long *)(param_1 + 0x40), lVar7 != 0)) {
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_10b69a138;
      puStack_68 = &UNK_1108523f8;
      _objc_retain(lVar7);
      lStack_58 = lVar7;
      uStack_50 = uVar4;
      _objc_retain(uVar3);
      uStack_60 = uVar3;
      func_0x000107c27d8c(lVar5,&puStack_80);
      _objc_release(uStack_60);
      _objc_release(lStack_58);
    }
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94260();
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  return;
}



/* Entry: 10b69a138; end: 10b69a14b;  */

void FUN_10b69a138(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b69a148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10b69a14c; end: 10b69a29f; -[SCCoreDataObjectContext performChangesAndWait:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b69a14c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_10b69a2a0;
  uStack_70 = 0x10b69a2b0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112791770);
  uStack_68 = 0;
  _objc_retain(param_3);
  func_0x00010c0f8460(uVar2);
  if (param_4 != (undefined8 *)0x0) {
    uVar2 = puStack_88[5];
    _objc_retainAutorelease();
    *param_4 = uVar2;
  }
  uVar1 = *(undefined1 *)(puStack_58 + 3);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10b69a2a0; end: 10b69a2b7;  */

void FUN_10b69a2a0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b69a2b8; end: 10b69a463;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b69a2b8(long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  func_0x00010be3ce00(*(undefined8 *)(param_1 + 0x20));
  lVar3 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar3 + _DAT_11279176c) == 1) {
    lVar6 = (long)_DAT_112791788;
    lVar5 = *(long *)(lVar3 + lVar6);
    if (lVar5 == 0) {
      func_0x00010c187680(PTR_PTR_1126e0498);
      func_0x00010c187180(PTR_PTR_1126e0498);
      lVar3 = *(long *)(param_1 + 0x20);
      lVar5 = *(long *)(lVar3 + lVar6);
    }
    *(long *)(lVar3 + lVar6) = lVar5 + 1;
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    *(long *)(*(long *)(param_1 + 0x20) + lVar6) = *(long *)(*(long *)(param_1 + 0x20) + lVar6) + -1
    ;
    if (*(long *)(*(long *)(param_1 + 0x20) + lVar6) == 0) {
      func_0x00010c12adc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11279177c));
      func_0x00010c187680(PTR_PTR_1126e0498);
      func_0x00010c187180(PTR_PTR_1126e0498);
      lVar7 = (long)_DAT_112791770;
      lVar6 = *(long *)(*(long *)(param_1 + 0x20) + lVar7);
      func_0x00010c0fa460();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar6;
      func_0x00010c0fa480();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010bf529e0();
      _objc_release(lVar3);
      _objc_release(lVar6);
      if (lVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be58170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (*(long *)(param_1 + 0x20),PTR_s__logSaveSkippedNoStore_1125739f8);
        return;
      }
      uVar1 = (undefined1)*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar7);
      lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
      uVar4 = *(undefined8 *)(lVar3 + 0x28);
      func_0x00010c149e40();
      _objc_retain(uVar4);
      uVar2 = *(undefined8 *)(lVar3 + 0x28);
      *(undefined8 *)(lVar3 + 0x28) = uVar4;
      _objc_release(uVar2);
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = uVar1;
    }
    else {
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
    }
  }
  return;
}



/* Entry: 10b69a464; end: 10b69a5e7; -[SCCoreDataObjectContext observe:object:queue:changeHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b69a464(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_6;
  _objc_retain();
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126e04d0;
  _objc_alloc(PTR_PTR_1126e04d0);
  func_0x00010c030d40();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112791770);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_10b69a5e8;
  puStack_a0 = &UNK_110d58ed0;
  lStack_98 = param_1;
  uStack_90 = uVar2;
  uStack_88 = param_5;
  uStack_80 = param_4;
  uStack_78 = uVar1;
  uStack_70 = param_6;
  uStack_68 = param_3;
  _objc_retain(uVar1);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(uVar2);
  func_0x00010c0f8440(uVar4,param_2,&puStack_b8);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_70);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b69a5e8; end: 10b69a793;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b69a5e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lStack_58;
  
  lVar6 = (long)_DAT_112791770;
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010c0b7f80(PTR_PTR_1126e0498,param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6));
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + lVar6);
    lStack_58 = 0;
    func_0x00010bf9b3a0(lVar2,param_2,puVar1,&lStack_58);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lStack_58;
    _objc_retain(lStack_58);
    puVar3 = PTR_PTR_1126e04d8;
    _objc_alloc(PTR_PTR_1126e04d8);
    func_0x00010c0307a0();
    lVar7 = 0;
    if (lVar2 != 0 && lVar6 == 0) {
      lVar7 = *(long *)(param_1 + 0x20);
      func_0x00010bfe9d60(lVar7,param_2,*(undefined8 *)(param_1 + 0x50),lVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    if (lVar7 != *(long *)(param_1 + 0x38)) {
      uVar4 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010bf002e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f8000(puVar3,param_2,lVar7,uVar4);
      _objc_release(uVar4);
    }
    lVar8 = (long)_DAT_112791774;
    puVar5 = *(undefined **)(*(long *)(param_1 + 0x20) + lVar8);
    func_0x00010c0e00e0(puVar5,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar8),param_2,puVar5,puVar1);
    }
    func_0x00010c1d0640(puVar5,param_2,puVar3,*(undefined8 *)(param_1 + 0x40));
    _objc_release(puVar5);
    _objc_release(lVar7);
    _objc_release(puVar3);
    _objc_release(lVar2);
    _objc_release(lVar6);
  }
  _objc_release(puVar1);
  return;
}



/* Entry: 10b69a794; end: 10b69a9a7; -[SCCoreDataObjectContext unobserve:objectClass:objectID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b69a794(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112791770);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x10b69a860;
  puStack_68 = &UNK_110d58f00;
  lStack_60 = param_1;
  uStack_58 = param_5;
  uStack_50 = param_3;
  uStack_48 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c0f8440(uVar1,param_2,&puStack_80);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(param_5);
  return;
}



/* Entry: 10b69a9a8; end: 10b69a9af;  */

void FUN_10b69a9a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c069d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_invalidate_1125f8150)
  ;
  return;
}


