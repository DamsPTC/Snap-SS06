/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108e234b8; end: 108e234cf;  */

void FUN_108e234b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108e234cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 108e234d0; end: 108e2363b;  */

void FUN_108e234d0(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08fa60();
  if ((param_3 == 0) && (lVar1 != 0)) {
    puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008460();
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c08fa60();
    if (puVar5 == (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = puVar2;
      func_0x00010c25cd40();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar3);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_108e2363c;
    puStack_58 = &UNK_11084aaa8;
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar4);
    puStack_50 = puVar5;
    uStack_48 = uVar4;
    _objc_retain(puVar5);
    func_0x000107c312d0("APPSTORE",&puStack_70);
    _objc_release(puStack_50);
    _objc_release(uStack_48);
    _objc_release(puVar5);
    _objc_release(puVar2);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
  _objc_release(param_2);
  return;
}



/* Entry: 108e2363c; end: 108e23653;  */

void FUN_108e2363c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108e23650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108e23654; end: 108e2376f;  */

void FUN_108e23654(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    uVar1 = param_3;
    func_0x00010bf20c00();
    _CGRectIsEmpty();
    if ((uVar1 & 1) == 0) {
      _objc_retain(param_2);
      _objc_retain(param_3);
      lVar2 = param_1;
      func_0x00010c0ba440(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      _objc_release(param_2);
      goto LAB_108e23738;
    }
  }
  lVar2 = 0;
LAB_108e23738:
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 108e23770; end: 108e238ff;  */

void FUN_108e23770(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  uVar1 = uVar4;
  func_0x00010bf193c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11f2a0(param_3);
  func_0x00010c1042e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11f2a0(param_3);
  _objc_release(param_3);
  func_0x00010c1042e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c26c600(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c15a980(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar7);
  uVar1 = uVar3;
  func_0x00010c0b8620(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e23900; end: 108e23a3b;  */

void FUN_108e23900(double param_1,double param_2,double param_3,double param_4,long param_5,
                  ulong param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  
  _objc_retain(param_6);
  uVar1 = param_6;
  func_0x00010c1244c0();
  _CGRectIsEmpty();
  if ((uVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_5 + 0x20);
    func_0x00010c1244c0(param_6);
    uVar2 = *(undefined8 *)(param_5 + 0x28);
    func_0x00010c26c1e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf513e0(param_1,param_2,param_3,param_4,uVar4);
    _objc_release(uVar2);
    param_3 = param_3 / *(double *)(param_5 + 0x40);
    param_4 = param_4 / *(double *)(param_5 + 0x48);
    param_1 = param_1 / *(double *)(param_5 + 0x40);
    param_2 = param_2 / *(double *)(param_5 + 0x48);
    puVar3 = PTR_PTR_1126dc0b8;
    _objc_alloc(PTR_PTR_1126dc0b8);
    dVar5 = param_1;
    _CGRectGetMidX(param_1,param_2,param_3,param_4);
    _CGRectGetMidY(param_1,param_2,param_3,param_4);
    func_0x00010c046a00(param_3,param_4,dVar5,param_1,puVar3);
  }
  else {
    puVar3 = (undefined *)0x0;
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108e23a3c; end: 108e23d2f;  */

void FUN_108e23a3c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  
  dVar3 = param_1;
  uVar5 = param_2;
  uVar6 = param_3;
  uVar7 = param_4;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  _objc_retain(param_5);
  func_0x00010c0b6c20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126dc0c0;
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  uStack_b8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_c0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_b0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  if (param_7 == 0) {
    uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_a0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    func_0x00010bf2ffc0(dVar3,uVar5,uVar6,uVar7,dVar3,uVar5,uVar6,uVar7,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_a0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    func_0x00010bf2ffe0(dVar3,uVar5,uVar6,uVar7,dVar3,uVar5,uVar6,uVar7,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_5);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar4 = dVar3;
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  _objc_release(puVar2);
  if (dVar4 <= dVar3) {
    dVar3 = dVar4;
  }
  dVar4 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  _CGAffineTransformMakeScale(&uStack_f0,dVar4 / dVar3,dVar4 / dVar3);
  puVar2 = puVar1;
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uStack_b8 = uStack_e8;
  uStack_c0 = uStack_f0;
  uStack_a8 = uStack_d8;
  uStack_b0 = uStack_e0;
  uStack_98 = uStack_c8;
  uStack_a0 = uStack_d0;
  func_0x00010c219960();
  _objc_release(puVar2);
  dVar3 = param_1;
  _CGRectGetMidX(param_1,param_2,param_3,param_4);
  _CGRectGetMidY(param_1,param_2,param_3,param_4);
  puVar2 = puVar1;
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar3,param_1);
  _objc_release(puVar2);
  _objc_release(param_8);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e23d30; end: 108e23f8f;  */

void FUN_108e23d30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined1 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  
  _objc_retain();
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar8 = param_1;
  uVar9 = param_2;
  func_0x00010b690ae4();
  func_0x000107c308a4();
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_108e23f90;
  puStack_f0 = &UNK_110ac6690;
  _objc_retain(param_7);
  lStack_e8 = param_7;
  uStack_d8 = uVar8;
  uStack_d0 = uVar9;
  uStack_c8 = param_5;
  uStack_c0 = param_6;
  uStack_b8 = param_1;
  uStack_b0 = param_2;
  uStack_a8 = param_8;
  _objc_retain(puVar1);
  ppuVar2 = &puStack_108;
  puStack_e0 = puVar1;
  _objc_retainBlock();
  lVar3 = param_7;
  func_0x00010bf07f80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfb40c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf14140();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08fa60();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  if (lVar6 == 0) {
    (*(code *)ppuVar2[2])(ppuVar2,0);
  }
  else {
    lVar3 = param_7;
    func_0x00010bf07f80(param_7);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfb40c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf14140();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(ppuVar2);
    func_0x00010bf30200(param_9);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(ppuVar2);
  }
  puVar7 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(puStack_e0);
  _objc_release(lStack_e8);
  _objc_release(puVar1);
  _objc_release(param_9);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108e23f90; end: 108e24157;  */

void FUN_108e23f90(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  dVar5 = *(double *)(param_1 + 0x30);
  FUN_108e23a3c(dVar5,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                *(undefined8 *)(param_1 + 0x48),uVar1,*(undefined1 *)(param_1 + 0x60),0,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c26ba60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar6 = *(double *)(param_1 + 0x30);
  _CGRectGetWidth(dVar6,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                  *(undefined8 *)(param_1 + 0x48));
  dVar5 = dVar5 / dVar6;
  func_0x00010bf20c00(uVar2);
  _CGRectGetHeight();
  dVar7 = *(double *)(param_1 + 0x30);
  dVar10 = *(double *)(param_1 + 0x48);
  _CGRectGetHeight(dVar7,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  dVar9 = *(double *)(param_1 + 0x58);
  dVar5 = dVar5 * *(double *)(param_1 + 0x50);
  dVar7 = (dVar6 / dVar7) * dVar9;
  func_0x00010bf20c00(uVar2);
  dVar6 = INFINITY;
  if (dVar10 != 0.0) {
    dVar6 = dVar9 / dVar10;
  }
  dVar10 = 0.0;
  if (dVar9 != 0.0) {
    dVar10 = dVar6;
  }
  dVar9 = dVar5 / dVar7;
  dVar6 = INFINITY;
  if (dVar7 != 0.0) {
    dVar6 = dVar9;
  }
  dVar8 = 0.0;
  if (dVar5 != 0.0) {
    dVar8 = dVar6;
  }
  if (dVar10 != dVar8) {
    func_0x00010bf20c00(uVar2);
    func_0x00010b690ae4(dVar6,dVar9,dVar5,dVar7);
    dVar5 = dVar6;
    dVar7 = dVar9;
  }
  puVar3 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
  func_0x00010c0469e0(dVar5,dVar7);
  _objc_retain(uVar2);
  puVar4 = puVar3;
  func_0x00010bfe91c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(uVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e24158; end: 108e2426f;  */

void FUN_108e24158(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c308a4(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bf89cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_drawViewHierarchyInRect_afterScr_1125c00e0,1);
  return;
}



/* Entry: 108e24270; end: 108e242ef;  */

void FUN_108e24270(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bf303a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bf303a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    FUN_108e242f0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 108e242f0; end: 108e24697;  */

void FUN_108e242f0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_1 == 0) goto LAB_108e24464;
  lVar1 = param_2;
  func_0x00010bf303a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar6 = 0;
  if (lVar1 == 0) goto LAB_108e24468;
  lVar6 = param_2;
  func_0x00010bf303a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010c113040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar6);
  if (lVar1 != 0) {
    lVar6 = param_2;
    func_0x00010bf303a0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar6;
    func_0x00010c113040();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c25e080();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar6);
    if (lVar3 != 0) {
      lVar1 = param_2;
      func_0x00010bf303a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c113040();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c25e080();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar3;
      func_0x00010c0d3c80();
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_2;
      func_0x00010c0fb8e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 == 0) {
        lVar1 = param_1;
        func_0x00010c113040();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010bf15ec0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar1);
        if (lVar2 != 0) {
          lVar1 = param_1;
          func_0x00010c113040(param_1);
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar1;
          func_0x00010bf15ec0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14cda0();
          _objc_release(lVar2);
          goto LAB_108e24508;
        }
        puVar7 = (undefined *)0x0;
      }
      else {
        lVar1 = param_2;
        func_0x00010c0fb8e0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14cda0();
LAB_108e24508:
        _objc_release(lVar1);
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf070e0(lVar6);
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
      func_0x00010c25cd40();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_2;
      func_0x00010bf0e540();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c14cee0();
      _objc_release(lVar1);
      if ((int)lVar2 != 0) {
        func_0x00010bf070e0(puVar4);
      }
      lVar1 = param_2;
      func_0x00010bf0e540();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c14cf00();
      _objc_release(lVar1);
      if ((int)lVar2 != 0) {
        func_0x00010bf070e0(puVar4);
      }
      lVar1 = param_2;
      func_0x00010bf0e540();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c14cf40();
      _objc_release(lVar1);
      if ((int)lVar2 != 0) {
        func_0x00010bf070e0(puVar4);
      }
      puVar5 = puVar4;
      func_0x00010c08fa60();
      if (puVar5 != (undefined *)0x0) {
        func_0x00010c08fa60(puVar4);
        func_0x00010bf6b860(puVar4);
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf070e0(lVar6);
        _objc_release(puVar5);
      }
      _objc_release(puVar4);
      _objc_release(puVar7);
      goto LAB_108e24468;
    }
  }
LAB_108e24464:
  lVar6 = 0;
LAB_108e24468:
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 108e24698; end: 108e24fdb; +[SCCaptionUtils attributedStringFromSOJUGalleryCaption:] */

void FUN_108e24698(float param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                  undefined8 param_5,undefined8 param_6,undefined **param_7)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined ***pppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **unaff_x26;
  undefined *puVar19;
  undefined8 uVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined8 uStack_3f8;
  double dStack_3f0;
  double dStack_3e8;
  double dStack_3e0;
  double dStack_3d0;
  double dStack_3c8;
  double dStack_3c0;
  double dStack_3b0;
  double dStack_3a8;
  double dStack_3a0;
  undefined **ppuStack_300;
  long lStack_2f8;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined1 *puStack_2b0;
  code *pcStack_2a8;
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined *puStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined **ppuStack_1c8;
  undefined8 uStack_1c0;
  undefined **ppuStack_1b8;
  undefined8 uStack_1b0;
  undefined **ppuStack_1a8;
  undefined *apuStack_1a0 [16];
  undefined8 uStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc();
  ppuVar18 = param_4;
  func_0x00010c26b700(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e820();
  _objc_release(ppuVar18);
  ppuVar18 = param_4;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = ppuVar18;
  func_0x00010c08fa60();
  _objc_release(ppuVar18);
  puVar19 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  _objc_opt_new();
  ppuVar18 = param_4;
  func_0x00010c27dde0();
  if ((((ppuVar18 == (undefined **)0x38c476c7) ||
       (ppuVar18 = param_4, func_0x00010c27dde0(), ppuVar18 == (undefined **)0x6b8dab7c)) ||
      (ppuVar18 = param_4, func_0x00010c27dde0(), ppuVar18 == (undefined **)0x23fcce0d)) ||
     (ppuVar18 = param_4, func_0x00010c27dde0(), ppuVar18 == (undefined **)0xffffffffd11d7d4a)) {
    func_0x00010c166c00(puVar19);
  }
  uStack_80 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_298 = puVar19;
  puStack_78 = puVar19;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6f40(ppuVar15);
  _objc_release(puVar2);
  ppuVar18 = param_4;
  func_0x00010c26b8a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar18;
  func_0x00010bf529e0();
  _objc_release(ppuVar18);
  ppuStack_280 = ppuVar1;
  ppuStack_260 = param_4;
  if (ppuVar3 == (undefined **)0x0) {
    uStack_120 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    ppuVar18 = (undefined **)PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_118 = ppuVar18;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6f40(ppuVar15);
    _objc_release(puVar19);
  }
  else {
    uVar5 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    lStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    plStack_200 = (long *)0x0;
    ppuVar18 = param_4;
    func_0x00010c26b8a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar18;
    func_0x00010bf52a60();
    param_1 = (float)uVar5;
    if (ppuVar1 == (undefined **)0x0) {
      ppuStack_268 = (undefined **)0x0;
    }
    else {
      ppuStack_270 = (undefined **)*plStack_200;
      ppuStack_278 = *(undefined ***)PTR__NSForegroundColorAttributeName_1103457f8;
      ppuStack_268 = ppuVar1;
      ppuStack_258 = ppuVar15;
      do {
        ppuVar15 = (undefined **)0x0;
        do {
          if ((undefined **)*plStack_200 != ppuStack_270) {
            _objc_enumerationMutation(ppuVar18);
          }
          puVar19 = PTR__OBJC_CLASS___UIColor_1126aea70;
          unaff_x26 = *(undefined ***)(lStack_208 + (long)ppuVar15 * 8);
          func_0x00010bf41480(unaff_x26);
          func_0x00010bf41580();
          _objc_retainAutoreleasedReturnValue();
          if (puVar19 == (undefined *)0x0) {
            puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
            func_0x00010c23ba80();
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            _objc_retain(puVar19);
            puVar2 = puVar19;
          }
          _objc_release(puVar19);
          ppuVar1 = unaff_x26;
          func_0x00010c11f2a0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = ppuVar1;
          func_0x00010c2517e0();
          ppuVar17 = unaff_x26;
          func_0x00010c11f2a0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = ppuVar17;
          func_0x00010c08fb20();
          _objc_release(ppuVar17);
          _objc_release(ppuVar1);
          ppuVar1 = ppuStack_260;
          ppuVar17 = ppuStack_260;
          func_0x00010c26b700();
          _objc_retainAutoreleasedReturnValue();
          ppuVar10 = ppuVar17;
          func_0x00010c08fa60();
          _objc_release(ppuVar17);
          if (ppuVar10 < (undefined **)((long)(int)ppuVar4 + (long)(int)ppuVar3)) {
            ppuVar3 = unaff_x26;
            func_0x00010c11f2a0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2517e0();
            func_0x00010c26b700(ppuVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c08fa60();
            func_0x00010c11f2a0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2517e0();
            _objc_release(unaff_x26);
            _objc_release(ppuVar1);
            _objc_release(ppuVar3);
          }
          ppuStack_110 = ppuStack_278;
          puVar19 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          puStack_108 = puVar2;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef6f40(ppuStack_258);
          _objc_release(puVar19);
          _objc_release(puVar2);
          ppuVar15 = (undefined **)((long)ppuVar15 + 1);
        } while (ppuStack_268 != ppuVar15);
        ppuVar15 = ppuVar18;
        func_0x00010bf52a60();
        param_1 = (float)uVar5;
        ppuStack_268 = ppuVar15;
      } while (ppuVar15 != (undefined **)0x0);
      ppuStack_268 = (undefined **)0x0;
      param_4 = ppuStack_260;
      ppuVar15 = ppuStack_258;
    }
  }
  _objc_release(ppuVar18);
  func_0x00010c27dde0();
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___UIFont_1126aec38;
  ppuVar18 = param_4;
  func_0x00010bfb4000(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  func_0x00010bfb41a0((double)param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar18);
  ppuVar18 = param_4;
  func_0x00010bf8b600();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar18;
  func_0x00010bf303a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = ppuVar3;
  func_0x00010bfb40c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar17;
  func_0x00010c0989c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(ppuVar17);
  _objc_release(ppuVar3);
  _objc_release(ppuVar18);
  ppuVar18 = (undefined **)0x0;
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar3 = param_4;
    func_0x00010bf8b600();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = ppuVar3;
    func_0x00010bf303a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar18 = ppuVar17;
    func_0x00010bfb40c0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = ppuVar18;
    func_0x00010c0989c0();
    _objc_retainAutoreleasedReturnValue();
    param_7 = ppuStack_280;
    func_0x00010bef6f20(ppuVar15);
    _objc_release(unaff_x26);
    _objc_release(ppuVar18);
    _objc_release(ppuVar17);
    _objc_release(ppuVar3);
  }
  ppuVar4 = param_4;
  func_0x00010c25dfe0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar4;
  func_0x00010bf529e0();
  _objc_release(ppuVar4);
  if (ppuVar3 == (undefined **)0x0) {
    uStack_1d0 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    ppuVar16 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_1c8 = ppuVar1;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = (undefined **)0x0;
    ppuVar4 = ppuVar16;
    ppuVar12 = ppuStack_280;
    func_0x00010bef6f40(ppuVar15);
  }
  else {
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    lStack_248 = 0;
    puStack_250 = (undefined *)0x0;
    uStack_238 = 0;
    plStack_240 = (long *)0x0;
    ppuVar16 = param_4;
    func_0x00010c25dfe0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &puStack_250;
    ppuVar10 = apuStack_1a0;
    ppuVar12 = (undefined **)0x10;
    ppuVar11 = ppuVar16;
    func_0x00010bf52a60();
    ppuStack_268 = ppuVar11;
    if (ppuVar11 != (undefined **)0x0) {
      ppuStack_280 = (undefined **)*plStack_240;
      uStack_288 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
      uStack_290 = *(undefined8 *)PTR__NSUnderlineStyleAttributeName_110345880;
      ppuStack_278 = ppuVar16;
      ppuStack_270 = ppuVar1;
      ppuStack_258 = ppuVar15;
      do {
        ppuVar15 = (undefined **)0x0;
        do {
          if ((undefined **)*plStack_240 != ppuStack_280) {
            _objc_enumerationMutation(ppuVar16);
          }
          uVar20 = *(undefined8 *)(lStack_248 + (long)ppuVar15 * 8);
          func_0x00010bf1ede0();
          func_0x00010c0840c0(uVar20);
          uVar5 = uVar20;
          func_0x00010c27f780();
          ppuVar1 = ppuStack_270;
          func_0x00010bfb3ce0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar18 = ppuVar1;
          func_0x00010bfb3d60();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar1);
          unaff_x26 = (undefined **)PTR__OBJC_CLASS___UIFont_1126aec38;
          func_0x00010bfb4080(ppuStack_260);
          func_0x00010bfb4160();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar20;
          func_0x00010c11f2a0();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010c2517e0();
          ppuVar17 = (undefined **)(long)(int)uVar7;
          func_0x00010c11f2a0(uVar20);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar20;
          func_0x00010c08fb20();
          _objc_release(uVar20);
          _objc_release(uVar6);
          ppuVar3 = ppuStack_258;
          ppuVar1 = ppuStack_258;
          func_0x00010c25cd40(ppuStack_258);
          _objc_retainAutoreleasedReturnValue();
          FUN_108e3ebf0(ppuVar17,(long)(int)uVar7,ppuVar1);
          _objc_release(ppuVar1);
          uStack_1b0 = uStack_288;
          puVar19 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          ppuStack_1a8 = unaff_x26;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef6f40(ppuVar3);
          _objc_release(puVar19);
          if ((int)uVar5 != 0) {
            uStack_1c0 = uStack_290;
            ppuStack_1b8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0600;
            puVar19 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bef6f40(ppuStack_258);
            _objc_release(puVar19);
          }
          _objc_release(unaff_x26);
          _objc_release(ppuVar18);
          ppuVar16 = ppuStack_278;
          ppuVar15 = (undefined **)((long)ppuVar15 + 1);
        } while (ppuStack_268 != ppuVar15);
        ppuVar4 = &puStack_250;
        ppuVar10 = apuStack_1a0;
        ppuVar12 = (undefined **)0x10;
        ppuVar15 = ppuStack_278;
        func_0x00010bf52a60();
        ppuStack_268 = ppuVar15;
      } while (ppuVar15 != (undefined **)0x0);
      ppuStack_268 = (undefined **)0x0;
      param_4 = ppuStack_260;
      ppuVar15 = ppuStack_258;
      ppuVar1 = ppuStack_270;
    }
  }
  _objc_release(ppuVar16);
  ppuVar16 = ppuVar15;
  func_0x00010bf51e00();
  _objc_release(ppuVar1);
  _objc_release(puStack_298);
  _objc_release(ppuVar15);
  ppuVar1 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pppuVar9 = &ppuStack_300;
  ppuStack_2d8 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  pcStack_2a8 = FUN_108e24fdc;
  lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = ppuVar4;
  ppuVar11 = ppuVar10;
  ppuVar13 = ppuVar12;
  ppuVar14 = param_7;
  ppuStack_2f0 = unaff_x26;
  ppuStack_2e8 = ppuVar18;
  ppuStack_2e0 = ppuVar17;
  ppuStack_2d0 = ppuVar3;
  ppuStack_2c8 = ppuVar16;
  ppuStack_2c0 = ppuVar15;
  ppuStack_2b8 = param_4;
  puStack_2b0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar4);
  _objc_retain(ppuVar10);
  _objc_retain(param_7);
  ppuVar15 = ppuVar4;
  func_0x00010bf416c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar18 = ppuVar15;
  func_0x00010bf529e0();
  _objc_release(ppuVar15);
  if (ppuVar18 == (undefined **)0x0) {
    if (ppuVar10 == (undefined **)0x0) {
      ppuVar16 = (undefined **)0x0;
    }
    else {
      ppuVar11 = (undefined **)0x1;
      ppuVar16 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      ppuStack_300 = ppuVar10;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = (undefined **)pppuVar9;
    }
  }
  else {
    ppuVar15 = ppuVar4;
    func_0x00010bf416c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar18 = ppuVar15;
    func_0x00010c0d3c80();
    _objc_release(ppuVar15);
    if (((int)ppuVar12 == 0) || (ppuVar10 == (undefined **)0x0)) {
LAB_108e25178:
      ppuVar1 = ppuVar18;
      func_0x00010bf51e00();
    }
    else {
      ppuVar15 = ppuVar4;
      func_0x00010bf413c0();
      if (ppuVar15 == (undefined **)0x1) {
        ppuVar15 = ppuVar18;
        func_0x00010bf529e0();
        if (ppuVar15 == (undefined **)0x2) {
          ppuVar11 = (undefined **)0x1;
        }
        else {
          ppuVar15 = ppuVar18;
          func_0x00010bf529e0();
          if (ppuVar15 != (undefined **)0x1) goto LAB_108e25178;
          ppuVar11 = (undefined **)0x0;
        }
        ppuVar8 = ppuVar10;
        func_0x00010c1d04c0(ppuVar18);
        goto LAB_108e25178;
      }
      ppuVar15 = ppuVar4;
      func_0x00010bf413c0();
      if (ppuVar15 != (undefined **)0x3) goto LAB_108e25178;
      _objc_opt_class();
      ppuVar15 = ppuVar18;
      func_0x00010bf51e00();
      ppuVar3 = ppuVar4;
      func_0x00010bf41420();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar15;
      ppuVar11 = ppuVar3;
      ppuVar13 = param_7;
      ppuVar14 = ppuVar10;
      func_0x00010bf413e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar3);
      _objc_release(ppuVar15);
    }
    _objc_release(ppuVar18);
    ppuVar16 = ppuVar1;
  }
  _objc_release(param_7);
  _objc_release(ppuVar10);
  _objc_release(ppuVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2f8) {
    ___stack_chk_fail();
    _objc_retain(ppuVar8);
    _objc_retain(ppuVar11);
    _objc_retain(ppuVar13);
    _objc_retain(ppuVar14);
    ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    if ((ppuVar11 == (undefined **)0x0) ||
       (ppuVar18 = ppuVar11, func_0x00010bf529e0(), ppuVar18 < (undefined **)0x3)) {
      _objc_release(ppuVar11);
      ppuVar11 = &PTR__OBJC_CLASS___NSConstantArray_111183158;
    }
    ppuVar18 = ppuVar13;
    func_0x00010bfc63e0();
    if ((((ulong)ppuVar18 & 1) == 0) ||
       (ppuVar18 = ppuVar14, func_0x00010bfc63e0(), ((ulong)ppuVar18 & 1) == 0)) {
      _objc_retain(ppuVar8);
      ppuVar16 = ppuVar8;
    }
    else {
      ppuVar18 = ppuVar8;
      func_0x00010bf529e0();
      if (ppuVar18 != (undefined **)0x0) {
        ppuVar18 = (undefined **)0x0;
        do {
          ppuVar1 = ppuVar8;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = ppuVar11;
          func_0x00010bf529e0();
          if (ppuVar3 < (undefined **)0x4) {
LAB_108e253d0:
            ppuVar3 = ppuVar1;
            func_0x00010bfc63e0();
            if (((ulong)ppuVar3 & 1) != 0) {
              ppuVar3 = ppuVar11;
              dVar22 = dStack_3c0;
              func_0x00010c0dfd40(ppuVar11);
              fVar21 = SUB84(dVar22,0);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfb2c80();
              dVar23 = dStack_3e0 + (double)fVar21 * (dStack_3c0 - dStack_3a0);
              _objc_release(ppuVar3);
              ppuVar3 = ppuVar11;
              dVar22 = dStack_3c8;
              func_0x00010c0dfd40(ppuVar11);
              fVar21 = SUB84(dVar22,0);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfb2c80();
              dVar24 = dStack_3e8 + (double)fVar21 * (dStack_3c8 - dStack_3a8);
              _objc_release(ppuVar3);
              ppuVar3 = ppuVar11;
              dVar22 = dStack_3d0;
              func_0x00010c0dfd40(ppuVar11);
              fVar21 = SUB84(dVar22,0);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfb2c80();
              dVar25 = dStack_3f0 + (double)fVar21 * (dStack_3d0 - dStack_3b0);
              _objc_release(ppuVar3);
              dVar22 = dVar23 + 1.0;
              if (0.0 <= dVar23) {
                dVar22 = dVar23;
              }
              if (dVar22 <= 0.0) {
                dVar22 = 0.0;
              }
              dVar23 = 1.0;
              if (dVar22 <= 1.0) {
                dVar23 = dVar22;
              }
              if (dVar24 <= 0.0) {
                dVar24 = 0.0;
              }
              dVar22 = 1.0;
              if (dVar24 <= 1.0) {
                dVar22 = dVar24;
              }
              if (dVar25 <= 0.0) {
                dVar25 = 0.0;
              }
              dVar24 = 1.0;
              if (dVar25 <= 1.0) {
                dVar24 = dVar25;
              }
              puVar19 = PTR__OBJC_CLASS___UIColor_1126aea70;
              func_0x00010bf415e0(dVar23,dVar22,dVar24,uStack_3f8,
                                  PTR__OBJC_CLASS___UIColor_1126aea70);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(ppuVar15);
              goto LAB_108e254f4;
            }
            func_0x00010befa120(ppuVar15);
          }
          else {
            ppuVar3 = ppuVar11;
            func_0x00010bf529e0();
            puVar19 = PTR__OBJC_CLASS___UIColor_1126aea70;
            if (ppuVar3 == (undefined **)0x5) {
              ppuVar3 = ppuVar11;
              func_0x00010c0dfd40(ppuVar11);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c067ec0();
              func_0x00010bf41580();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar3);
              if (puVar19 == (undefined *)0x0) goto LAB_108e2534c;
LAB_108e25360:
              ppuVar3 = ppuVar14;
              func_0x00010c071c60();
              if ((int)ppuVar3 == 0) {
                _objc_release(puVar19);
                goto LAB_108e253d0;
              }
            }
            else {
LAB_108e2534c:
              ppuVar3 = ppuVar14;
              func_0x00010c071c60();
              puVar19 = (undefined *)0x0;
              if (((ulong)ppuVar3 & 1) == 0) goto LAB_108e25360;
            }
            puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
            ppuVar3 = ppuVar11;
            func_0x00010c0dfd40(ppuVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c067ec0();
            func_0x00010bf41580(puVar2);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar3);
            func_0x00010befa120(ppuVar15);
            _objc_release(puVar2);
LAB_108e254f4:
            _objc_release(puVar19);
          }
          _objc_release(ppuVar1);
          ppuVar18 = (undefined **)((long)ppuVar18 + 1);
          ppuVar1 = ppuVar8;
          func_0x00010bf529e0();
        } while (ppuVar18 < ppuVar1);
      }
      ppuVar16 = ppuVar15;
      func_0x00010bf51e00(ppuVar15);
    }
    _objc_release(ppuVar15);
    _objc_release(ppuVar14);
    _objc_release(ppuVar13);
    _objc_release(ppuVar11);
    _objc_release(ppuVar8);
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar16);
  return;
}



/* Entry: 108e24fdc; end: 108e251df; +[SCCaptionUtils getColorArrayFromDynamicCaptionTextColor:pickedColor:colorIsChangeable:baseColor:] */

void FUN_108e24fdc(undefined **param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
                  undefined **param_5,undefined **param_6)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined ***pppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uStack_158;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  undefined1 auStack_138 [8];
  double dStack_130;
  double dStack_128;
  double dStack_120;
  undefined1 auStack_118 [8];
  double dStack_110;
  double dStack_108;
  double adStack_100 [2];
  undefined **ppuStack_60;
  long lStack_58;
  
  pppuVar7 = &ppuStack_60;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = param_3;
  ppuVar8 = param_4;
  ppuVar9 = param_5;
  ppuVar10 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  ppuVar1 = param_3;
  func_0x00010bf416c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar1;
  func_0x00010bf529e0();
  _objc_release(ppuVar1);
  if (ppuVar11 == (undefined **)0x0) {
    if (param_4 == (undefined **)0x0) {
      param_1 = (undefined **)0x0;
    }
    else {
      ppuVar8 = (undefined **)0x1;
      param_1 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      ppuStack_60 = param_4;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = (undefined **)pppuVar7;
    }
    goto LAB_108e2518c;
  }
  ppuVar1 = param_3;
  func_0x00010bf416c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar1;
  func_0x00010c0d3c80();
  _objc_release(ppuVar1);
  if (((int)param_5 == 0) || (param_4 == (undefined **)0x0)) {
LAB_108e25178:
    param_1 = ppuVar11;
    func_0x00010bf51e00();
  }
  else {
    ppuVar1 = param_3;
    func_0x00010bf413c0();
    if (ppuVar1 == (undefined **)0x1) {
      ppuVar1 = ppuVar11;
      func_0x00010bf529e0();
      if (ppuVar1 == (undefined **)0x2) {
        ppuVar8 = (undefined **)0x1;
      }
      else {
        ppuVar1 = ppuVar11;
        func_0x00010bf529e0();
        if (ppuVar1 != (undefined **)0x1) goto LAB_108e25178;
        ppuVar8 = (undefined **)0x0;
      }
      ppuVar6 = param_4;
      func_0x00010c1d04c0(ppuVar11);
      goto LAB_108e25178;
    }
    ppuVar1 = param_3;
    func_0x00010bf413c0();
    if (ppuVar1 != (undefined **)0x3) goto LAB_108e25178;
    _objc_opt_class();
    ppuVar1 = ppuVar11;
    func_0x00010bf51e00();
    ppuVar2 = param_3;
    func_0x00010bf41420();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar1;
    ppuVar8 = ppuVar2;
    ppuVar9 = param_6;
    ppuVar10 = param_4;
    func_0x00010bf413e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    _objc_release(ppuVar1);
  }
  _objc_release(ppuVar11);
LAB_108e2518c:
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_retain(ppuVar6);
    _objc_retain(ppuVar8);
    _objc_retain(ppuVar9);
    _objc_retain(ppuVar10);
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    if ((ppuVar8 == (undefined **)0x0) ||
       (ppuVar11 = ppuVar8, func_0x00010bf529e0(), ppuVar11 < (undefined **)0x3)) {
      _objc_release(ppuVar8);
      ppuVar8 = &PTR__OBJC_CLASS___NSConstantArray_111183158;
    }
    ppuVar11 = ppuVar9;
    func_0x00010bfc63e0(ppuVar9,param_2,adStack_100,&dStack_108,&dStack_110,auStack_118);
    if ((((ulong)ppuVar11 & 1) == 0) ||
       (ppuVar11 = ppuVar10,
       func_0x00010bfc63e0(ppuVar10,param_2,&dStack_120,&dStack_128,&dStack_130,auStack_138),
       ((ulong)ppuVar11 & 1) == 0)) {
      _objc_retain(ppuVar6);
      param_1 = ppuVar6;
    }
    else {
      ppuVar11 = ppuVar6;
      func_0x00010bf529e0();
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar11 = (undefined **)0x0;
        do {
          ppuVar2 = ppuVar6;
          func_0x00010c0dfd40(ppuVar6,param_2,ppuVar11);
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = ppuVar8;
          func_0x00010bf529e0();
          if (ppuVar3 < (undefined **)0x4) {
LAB_108e253d0:
            ppuVar3 = ppuVar2;
            func_0x00010bfc63e0(ppuVar2,param_2,&dStack_140,&dStack_148,&dStack_150,&uStack_158);
            dVar14 = dStack_140;
            if (((ulong)ppuVar3 & 1) != 0) {
              dVar15 = dStack_120 - adStack_100[0];
              ppuVar3 = ppuVar8;
              dVar17 = dStack_120;
              func_0x00010c0dfd40(ppuVar8,param_2,0);
              fVar13 = SUB84(dVar17,0);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfb2c80();
              dVar14 = dVar14 + (double)fVar13 * dVar15;
              _objc_release(ppuVar3);
              dVar15 = dStack_148;
              dVar16 = dStack_128 - dStack_108;
              ppuVar3 = ppuVar8;
              dVar17 = dStack_128;
              func_0x00010c0dfd40(ppuVar8,param_2,1);
              fVar13 = SUB84(dVar17,0);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfb2c80();
              dVar15 = dVar15 + (double)fVar13 * dVar16;
              _objc_release(ppuVar3);
              dVar17 = dStack_150;
              dVar18 = dStack_130 - dStack_110;
              ppuVar3 = ppuVar8;
              dVar16 = dStack_130;
              func_0x00010c0dfd40(ppuVar8,param_2,2);
              fVar13 = SUB84(dVar16,0);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfb2c80();
              dVar17 = dVar17 + (double)fVar13 * dVar18;
              _objc_release(ppuVar3);
              dVar16 = dVar14 + 1.0;
              if (0.0 <= dVar14) {
                dVar16 = dVar14;
              }
              if (dVar16 <= 0.0) {
                dVar16 = 0.0;
              }
              dVar14 = 1.0;
              if (dVar16 <= 1.0) {
                dVar14 = dVar16;
              }
              if (dVar15 <= 0.0) {
                dVar15 = 0.0;
              }
              dVar16 = 1.0;
              if (dVar15 <= 1.0) {
                dVar16 = dVar15;
              }
              if (dVar17 <= 0.0) {
                dVar17 = 0.0;
              }
              dVar15 = 1.0;
              if (dVar17 <= 1.0) {
                dVar15 = dVar17;
              }
              puVar12 = PTR__OBJC_CLASS___UIColor_1126aea70;
              func_0x00010bf415e0(dVar14,dVar16,dVar15,uStack_158,
                                  PTR__OBJC_CLASS___UIColor_1126aea70);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(ppuVar1,param_2,puVar12);
              goto LAB_108e254f4;
            }
            func_0x00010befa120(ppuVar1,param_2,ppuVar2);
          }
          else {
            ppuVar3 = ppuVar8;
            func_0x00010bf529e0();
            puVar12 = PTR__OBJC_CLASS___UIColor_1126aea70;
            if (ppuVar3 == (undefined **)0x5) {
              ppuVar3 = ppuVar8;
              func_0x00010c0dfd40(ppuVar8,param_2,4);
              _objc_retainAutoreleasedReturnValue();
              ppuVar4 = ppuVar3;
              func_0x00010c067ec0();
              func_0x00010bf41580(puVar12,param_2,(long)(int)ppuVar4);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar3);
              if (puVar12 == (undefined *)0x0) goto LAB_108e2534c;
LAB_108e25360:
              ppuVar3 = ppuVar10;
              func_0x00010c071c60(ppuVar10,param_2,puVar12);
              if ((int)ppuVar3 == 0) {
                _objc_release(puVar12);
                goto LAB_108e253d0;
              }
            }
            else {
LAB_108e2534c:
              ppuVar3 = ppuVar10;
              func_0x00010c071c60(ppuVar10,param_2,ppuVar2);
              puVar12 = (undefined *)0x0;
              if (((ulong)ppuVar3 & 1) == 0) goto LAB_108e25360;
            }
            puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
            ppuVar3 = ppuVar8;
            func_0x00010c0dfd40(ppuVar8,param_2,3);
            _objc_retainAutoreleasedReturnValue();
            ppuVar4 = ppuVar3;
            func_0x00010c067ec0();
            func_0x00010bf41580(puVar5,param_2,(long)(int)ppuVar4);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar3);
            func_0x00010befa120(ppuVar1,param_2,puVar5);
            _objc_release(puVar5);
LAB_108e254f4:
            _objc_release(puVar12);
          }
          _objc_release(ppuVar2);
          ppuVar11 = (undefined **)((long)ppuVar11 + 1);
          ppuVar2 = ppuVar6;
          func_0x00010bf529e0();
        } while (ppuVar11 < ppuVar2);
      }
      param_1 = ppuVar1;
      func_0x00010bf51e00(ppuVar1);
    }
    _objc_release(ppuVar1);
    _objc_release(ppuVar10);
    _objc_release(ppuVar9);
    _objc_release(ppuVar8);
    _objc_release(ppuVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108e251e0; end: 108e2559f; +[SCCaptionUtils colorTransform:tranformParameters:baseColor:pickedColor:] */

void FUN_108e251e0(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined **param_4,
                  ulong param_5,ulong param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  undefined1 auStack_d8 [8];
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  undefined1 auStack_b8 [8];
  double dStack_b0;
  double dStack_a8;
  double adStack_a0 [2];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  if ((param_4 == (undefined **)0x0) ||
     (ppuVar2 = param_4, func_0x00010bf529e0(), ppuVar2 < (undefined **)0x3)) {
    _objc_release(param_4);
    param_4 = &PTR__OBJC_CLASS___NSConstantArray_111183158;
  }
  uVar3 = param_5;
  func_0x00010bfc63e0(param_5,param_2,adStack_a0,&dStack_a8,&dStack_b0,auStack_b8);
  if (((uVar3 & 1) == 0) ||
     (uVar3 = param_6,
     func_0x00010bfc63e0(param_6,param_2,&dStack_c0,&dStack_c8,&dStack_d0,auStack_d8),
     (uVar3 & 1) == 0)) {
    _objc_retain(param_3);
    puVar7 = param_3;
  }
  else {
    puVar7 = param_3;
    func_0x00010bf529e0();
    if (puVar7 != (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
      do {
        puVar4 = param_3;
        func_0x00010c0dfd40(param_3,param_2,puVar7);
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = param_4;
        func_0x00010bf529e0();
        if (ppuVar2 < (undefined **)0x4) {
LAB_108e253d0:
          puVar8 = puVar4;
          func_0x00010bfc63e0(puVar4,param_2,&dStack_e0,&dStack_e8,&dStack_f0,&uStack_f8);
          dVar10 = dStack_e0;
          if (((ulong)puVar8 & 1) != 0) {
            dVar11 = dStack_c0 - adStack_a0[0];
            ppuVar2 = param_4;
            dVar13 = dStack_c0;
            func_0x00010c0dfd40(param_4,param_2,0);
            fVar9 = SUB84(dVar13,0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfb2c80();
            dVar10 = dVar10 + (double)fVar9 * dVar11;
            _objc_release(ppuVar2);
            dVar11 = dStack_e8;
            dVar12 = dStack_c8 - dStack_a8;
            ppuVar2 = param_4;
            dVar13 = dStack_c8;
            func_0x00010c0dfd40(param_4,param_2,1);
            fVar9 = SUB84(dVar13,0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfb2c80();
            dVar11 = dVar11 + (double)fVar9 * dVar12;
            _objc_release(ppuVar2);
            dVar13 = dStack_f0;
            dVar14 = dStack_d0 - dStack_b0;
            ppuVar2 = param_4;
            dVar12 = dStack_d0;
            func_0x00010c0dfd40(param_4,param_2,2);
            fVar9 = SUB84(dVar12,0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfb2c80();
            dVar13 = dVar13 + (double)fVar9 * dVar14;
            _objc_release(ppuVar2);
            dVar12 = dVar10 + 1.0;
            if (0.0 <= dVar10) {
              dVar12 = dVar10;
            }
            if (dVar12 <= 0.0) {
              dVar12 = 0.0;
            }
            dVar10 = 1.0;
            if (dVar12 <= 1.0) {
              dVar10 = dVar12;
            }
            if (dVar11 <= 0.0) {
              dVar11 = 0.0;
            }
            dVar12 = 1.0;
            if (dVar11 <= 1.0) {
              dVar12 = dVar11;
            }
            if (dVar13 <= 0.0) {
              dVar13 = 0.0;
            }
            dVar11 = 1.0;
            if (dVar13 <= 1.0) {
              dVar11 = dVar13;
            }
            puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
            func_0x00010bf415e0(dVar10,dVar12,dVar11,uStack_f8,PTR__OBJC_CLASS___UIColor_1126aea70);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar1,param_2,puVar8);
            goto LAB_108e254f4;
          }
          func_0x00010befa120(puVar1,param_2,puVar4);
        }
        else {
          ppuVar2 = param_4;
          func_0x00010bf529e0();
          puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
          if (ppuVar2 == (undefined **)0x5) {
            ppuVar2 = param_4;
            func_0x00010c0dfd40(param_4,param_2,4);
            _objc_retainAutoreleasedReturnValue();
            ppuVar5 = ppuVar2;
            func_0x00010c067ec0();
            func_0x00010bf41580(puVar8,param_2,(long)(int)ppuVar5);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar2);
            if (puVar8 == (undefined *)0x0) goto LAB_108e2534c;
LAB_108e25360:
            uVar3 = param_6;
            func_0x00010c071c60(param_6,param_2,puVar8);
            if ((int)uVar3 == 0) {
              _objc_release(puVar8);
              goto LAB_108e253d0;
            }
          }
          else {
LAB_108e2534c:
            uVar3 = param_6;
            func_0x00010c071c60(param_6,param_2,puVar4);
            puVar8 = (undefined *)0x0;
            if ((uVar3 & 1) == 0) goto LAB_108e25360;
          }
          puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
          ppuVar2 = param_4;
          func_0x00010c0dfd40(param_4,param_2,3);
          _objc_retainAutoreleasedReturnValue();
          ppuVar5 = ppuVar2;
          func_0x00010c067ec0();
          func_0x00010bf41580(puVar6,param_2,(long)(int)ppuVar5);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar2);
          func_0x00010befa120(puVar1,param_2,puVar6);
          _objc_release(puVar6);
LAB_108e254f4:
          _objc_release(puVar8);
        }
        _objc_release(puVar4);
        puVar7 = puVar7 + 1;
        puVar4 = param_3;
        func_0x00010bf529e0();
      } while (puVar7 < puVar4);
    }
    puVar7 = puVar1;
    func_0x00010bf51e00(puVar1);
  }
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108e255a0; end: 108e258b7; +[SCCaptionUtils gradientImageFromColors:colorStops:colorGradientAngleDegree:imageSize:drawingRects:] */

void FUN_108e255a0(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                  ulong param_6,ulong param_7,ulong param_8,ulong param_9)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 uVar5;
  long extraout_x8;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dStack_b0;
  long lStack_a8;
  
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar14 = param_3;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar6 = param_7;
  func_0x00010bf529e0();
  if (uVar6 == 0) {
    uVar6 = 0;
  }
  else {
    uVar1 = param_8;
    func_0x00010bf529e0(param_8);
    _UIGraphicsBeginImageContext(param_2,param_3);
    _UIGraphicsGetCurrentContext();
    uVar6 = uVar1;
    _CGColorSpaceCreateDeviceRGB();
    uVar2 = param_7;
    func_0x00010c0b8600(param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_8;
    func_0x00010bf529e0();
    uVar4 = uVar6;
    param_6 = uVar2;
    if (uVar7 == 0) {
      _CGGradientCreateWithColors(uVar6,uVar2,0);
    }
    else {
      uVar7 = param_8;
      func_0x00010bf529e0(param_8);
      (*(code *)PTR____chkstk_darwin_11034bd40)(uVar7 * 8 + 0xf & 0xfffffffffffffff0);
      uVar7 = param_8;
      func_0x00010bf529e0();
      if (uVar7 != 0) {
        uVar7 = 0;
        do {
          fVar8 = SUB84(param_2,0);
          uVar3 = param_8;
          func_0x00010c0dfd40(param_8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb2c80();
          param_2 = (double)fVar8;
          *(double *)(((long)&dStack_b0 - extraout_x8) + uVar7 * 8) = param_2;
          _objc_release(uVar3);
          uVar7 = uVar7 + 1;
          uVar3 = param_8;
          func_0x00010bf529e0();
        } while (uVar7 < uVar3);
      }
      _CGGradientCreateWithColors(uVar6,uVar2,(long)&dStack_b0 - extraout_x8);
    }
    uVar5 = 0;
    if (param_1 != 90.0) {
      uVar5 = 3;
    }
    uVar7 = param_9;
    func_0x00010bf529e0();
    if (uVar7 != 0) {
      dVar12 = 180.0;
      dVar9 = (param_1 * 3.141592653589793) / 180.0;
      ___sincos_stret(dVar9);
      uVar7 = 0;
      dVar15 = dVar9;
      dVar13 = dVar12;
      do {
        uVar3 = param_9;
        func_0x00010c0dfd20(param_9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc1080();
        _objc_release(uVar3);
        dVar11 = dVar15;
        _CGRectGetWidth(dVar15,dVar13,dVar14,param_4);
        dVar10 = dVar15;
        _CGRectGetHeight(dVar15,dVar13,dVar14,param_4);
        dVar14 = dVar15 + dVar11 * 0.5;
        param_4 = dVar13 + dVar10 * 0.5;
        dVar16 = dVar12 * dVar11 * 0.5;
        dVar15 = dVar14 - dVar16;
        dVar11 = dVar9 * dVar10 * 0.5;
        dVar13 = param_4 - dVar11;
        dVar14 = dVar14 + dVar16;
        param_4 = param_4 + dVar11;
        param_6 = uVar4;
        _CGContextDrawLinearGradient(uVar1,uVar4,uVar5);
        uVar7 = uVar7 + 1;
        uVar3 = param_9;
        func_0x00010bf529e0();
      } while (uVar7 < uVar3);
    }
    _CGGradientRelease(uVar4);
    _CGColorSpaceRelease(uVar6);
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    _UIGraphicsEndImageContext();
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
    return;
  }
  ___stack_chk_fail();
  _objc_retainAutorelease(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 108e258b8; end: 108e258cf;  */

void FUN_108e258b8(undefined8 param_1,undefined8 param_2)

{
  _objc_retainAutorelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 108e258d0; end: 108e26393;  */

void FUN_108e258d0(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
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
  long lVar31;
  long lVar32;
  undefined8 uVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  undefined *puStack_1e8;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  
  lVar31 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar1 = param_2;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puStack_1c8 = (undefined *)0x0;
  }
  else {
    func_0x00010beffa20();
    func_0x00010c06e940();
    lVar1 = param_2;
    func_0x00010bf0e540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puStack_1d8 = (undefined *)0x0;
      puStack_1d0 = (undefined *)0x0;
    }
    else {
      puStack_1d0 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_2;
      func_0x00010bf0e540(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_2;
      func_0x00010bf0e540(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      _objc_retain(puStack_1d0);
      func_0x00010bf97b00(lVar1);
      _objc_release(lVar2);
      _objc_release(lVar1);
      puStack_1d8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_2;
      func_0x00010bf0e540(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_2;
      func_0x00010bf0e540(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      _objc_retain(puStack_1d8);
      func_0x00010bf97b20(lVar1);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(puStack_1d8);
      _objc_release(puStack_1d0);
    }
    func_0x00010bf86ca0(param_2);
    dVar35 = 0.0;
    if (param_1 != 1.79769313486232e+308) {
      func_0x00010bf86ca0(param_2);
      dVar35 = param_1;
    }
    func_0x00010bf8c740(param_2);
    dVar34 = 0.0;
    if (param_1 != 1.79769313486232e+308) {
      func_0x00010bf8c740(param_2);
      dVar34 = param_1;
    }
    func_0x00010bf34840(param_2);
    dVar37 = 0.5;
    if (param_1 != 1.79769313486232e+308) {
      func_0x00010bf34840(param_2);
      dVar37 = param_1;
    }
    func_0x00010bf348c0(param_2);
    dVar36 = 0.5;
    if (param_1 != 1.79769313486232e+308) {
      func_0x00010bf348c0(param_2);
      dVar36 = param_1;
    }
    puVar3 = PTR_PTR_1126c3fe0;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(dVar37,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c063600();
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x00010c141a80(param_2);
    if (dVar36 == 1.79769313486232e+308) {
      dVar36 = 0.0;
    }
    else {
      func_0x00010c141a80(param_2);
    }
    lVar1 = param_2;
    func_0x00010c0fb8e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puStack_1e8 = (undefined *)0x0;
    }
    else {
      lVar1 = param_2;
      func_0x00010c0fb8e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14cda0();
      _objc_release(lVar1);
      puStack_1e8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010c268460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar6 = param_2;
      func_0x00010c268460();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar6;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar1 != 0) {
        lVar32 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar6);
          }
          lVar7 = param_2;
          func_0x00010c268460();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          func_0x00010c0dff20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar7);
          lVar7 = lVar8;
          func_0x00010c290fa0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar7 != 0) {
            puVar5 = PTR_PTR_1126dc0e0;
            _objc_alloc_init(PTR_PTR_1126dc0e0);
            puVar9 = puVar5;
            func_0x00010c2097e0();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar8;
            func_0x00010c290fa0(lVar8);
            _objc_retainAutoreleasedReturnValue();
            lVar10 = lVar7;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puVar9;
            func_0x00010c21e620(puVar9);
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar11;
            func_0x00010bf21f60();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar11);
            _objc_release(lVar10);
            _objc_release(lVar7);
            _objc_release(puVar9);
            _objc_release(puVar5);
            func_0x00010befa120(puVar4);
            _objc_release(puVar12);
          }
          _objc_release(lVar8);
          lVar32 = lVar32 + 1;
        } while (lVar1 != lVar32);
        lVar1 = lVar6;
        func_0x00010bf52a60();
      }
      _objc_release(lVar6);
    }
    puVar5 = PTR_PTR_1126dc0e8;
    _objc_alloc_init();
    lVar1 = param_2;
    func_0x00010bf303a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c113040();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    FUN_108e0dda4();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    func_0x00010c178860();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(lVar6);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(puVar5);
    lVar1 = param_2;
    func_0x00010bf303a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010befd420();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar5 = PTR_PTR_1126dc0e8;
    _objc_alloc_init();
    lVar1 = param_2;
    func_0x00010bf07f80(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    FUN_108e0dda4();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    func_0x00010c178860();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar9;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(puVar5);
    lVar1 = param_2;
    func_0x00010c2790e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    FUN_1091743c8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar5 = PTR_PTR_1126dc0f0;
    _objc_alloc_init();
    puVar9 = puVar5;
    func_0x00010c21ace0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar9;
    func_0x00010c212f20();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010c213120();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010c20eac0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar15;
    func_0x00010c19e600(dVar35);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010c193bc0(dVar34);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x00010c1dee80();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar18;
    func_0x00010c1ee8e0(dVar36);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c081660(param_2);
    puVar20 = puVar19;
    func_0x00010c1b51a0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar20;
    func_0x00010c219440();
    _objc_retainAutoreleasedReturnValue();
    lVar32 = param_2;
    func_0x00010bf07f80();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar32;
    func_0x00010bfb40c0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bfb3f20();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar21;
    func_0x00010c21ada0();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar22;
    func_0x00010c193040();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar23;
    func_0x00010c1db640();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar4;
    func_0x00010bf51e00();
    puVar26 = puVar24;
    func_0x00010c21f5a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c081160(param_2);
    puVar27 = puVar26;
    func_0x00010c1b50a0();
    _objc_retainAutoreleasedReturnValue();
    puVar28 = puVar27;
    func_0x00010c165940();
    _objc_retainAutoreleasedReturnValue();
    puVar29 = puVar28;
    func_0x00010c169a20();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_2;
    func_0x00010bfc0860();
    _objc_retainAutoreleasedReturnValue();
    puVar30 = puVar29;
    func_0x00010c1a2740();
    _objc_retainAutoreleasedReturnValue();
    puStack_1c8 = puVar30;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar30);
    _objc_release(lVar10);
    _objc_release(puVar29);
    _objc_release(puVar28);
    _objc_release(puVar27);
    _objc_release(puVar26);
    _objc_release(puVar25);
    _objc_release(puVar24);
    _objc_release(puVar23);
    _objc_release(puVar22);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar32);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(lVar1);
    _objc_release(puVar9);
    _objc_release(puVar5);
    _objc_release(lVar2);
    _objc_release(puVar12);
    _objc_release(lVar6);
    _objc_release(puVar11);
    _objc_release(puVar4);
    _objc_release(puStack_1e8);
    _objc_release(puVar3);
    _objc_release(puStack_1d8);
    _objc_release(puStack_1d0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar31) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_1c8);
    return;
  }
  ___stack_chk_fail();
  func_0x00010c14cda0(param_3);
  puVar3 = PTR_PTR_1126dc0c8;
  _objc_alloc_init(PTR_PTR_1126dc0c8);
  puVar4 = puVar3;
  func_0x00010c209bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c1ba860();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar5;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar33 = *(undefined8 *)(param_2 + 0x20);
  puVar3 = PTR_PTR_1126dc0d0;
  _objc_alloc_init(PTR_PTR_1126dc0d0);
  puVar4 = puVar3;
  func_0x00010c17eb00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c1e6f40();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar5;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar33);
  _objc_release(puVar11);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar9);
  return;
}



/* Entry: 108e26394; end: 108e264c3;  */

void FUN_108e26394(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_48;
  
  uStack_48 = 0xffffff;
  func_0x00010c14cda0(param_2,param_2,&uStack_48);
  puVar1 = PTR_PTR_1126dc0c8;
  _objc_alloc_init(PTR_PTR_1126dc0c8);
  puVar2 = puVar1;
  func_0x00010c209bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c1ba860();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126dc0d0;
  _objc_alloc_init(PTR_PTR_1126dc0d0);
  puVar2 = puVar1;
  func_0x00010c17eb00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c1e6f40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar4);
  return;
}



/* Entry: 108e264c4; end: 108e26713;  */

void FUN_108e264c4(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010c0e00e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14d200();
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010c0e00e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14d1e0();
    _objc_release(lVar1);
  }
  lVar1 = param_2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010c0e00e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    _objc_release(lVar1);
  }
  puVar2 = PTR_PTR_1126dc0c8;
  _objc_alloc_init(PTR_PTR_1126dc0c8);
  puVar3 = puVar2;
  func_0x00010c209bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c1ba860();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR_PTR_1126dc0d8;
  _objc_alloc_init(PTR_PTR_1126dc0d8);
  puVar3 = puVar2;
  func_0x00010c172e00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c1b5d20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010c21b460();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c1e6f40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108e26714; end: 108e267b3;  */

void FUN_108e26714(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126dc0e8;
  _objc_retain(param_2);
  _objc_alloc_init(puVar1);
  uVar2 = param_2;
  FUN_108e0dda4(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar3 = puVar1;
  func_0x00010c178860(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108e267b4; end: 108e267fb;  */

void FUN_108e267b4(long param_1)

{
  if (param_1 == 0x6b8dab7c) {
    func_0x00010bf8b640();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf8b5a0(PTR_PTR_1126cbf68);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e267fc; end: 108e27147;  */

/* WARNING: Possible PIC construction at 0x000108e2693c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108e26e58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108e26940) */
/* WARNING: Removing unreachable block (ram,0x000108e26e5c) */
/* WARNING: Removing unreachable block (ram,0x000108e26d60) */
/* WARNING: Removing unreachable block (ram,0x000108e26e08) */

void FUN_108e267fc(double param_1,undefined *param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_e8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1fca0(param_2);
  if (param_1 == 0.0) {
    puStack_e8 = (undefined *)0x0;
  }
  else {
    puStack_e8 = PTR_PTR_1126dc008;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0.0;
    func_0x00010bfffc80(0);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  puVar3 = param_2;
  func_0x00010c229ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (puVar3 != (undefined *)0x0) {
    func_0x00010c229ee0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf40c40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2827c0();
    param_3 = param_2;
    goto code_r0x00010bf41580;
  }
  puVar2 = param_2;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)puVar3 == 0) {
    puVar2 = param_2;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfda7c0();
    _objc_release(puVar2);
    if ((int)puVar3 != 0) {
      puStack_f8 = PTR_PTR_1126dc008;
      _objc_alloc();
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf41080();
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      param_1 = 0.0;
      func_0x00010bfffc80(0);
      _objc_release(puVar6);
      _objc_release(puVar2);
      _objc_release(puVar5);
      goto LAB_108e26c28;
    }
    puVar2 = param_2;
    func_0x00010bfb3c40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf529e0();
    _objc_release(puVar2);
    if (puVar3 != (undefined *)0x0) {
      puVar2 = param_2;
      func_0x00010bfb3c80();
      param_1 = 0.0;
      if (puVar2 != (undefined *)0xffffffffc9e88893) {
        param_1 = 90.0;
      }
      puVar2 = param_2;
      func_0x00010bfb3c40(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = puVar3;
      func_0x00010c089820(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puStack_f8 = PTR_PTR_1126dc008;
      _objc_alloc();
      func_0x00010bfffc80(param_1);
      goto LAB_108e26c2c;
    }
    puStack_f8 = (undefined *)0x0;
  }
  else {
    puStack_f8 = PTR_PTR_1126dc008;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0.0;
    func_0x00010bfffc80(0);
LAB_108e26c28:
    _objc_release(puVar4);
    puVar2 = puVar1;
LAB_108e26c2c:
    _objc_release(puVar3);
    puVar1 = puVar2;
  }
  puVar2 = param_2;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = param_2;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    param_1 = 1.1;
    dVar10 = 1.5;
    if ((int)puVar3 == 0) {
      dVar10 = param_1;
    }
  }
  else {
    dVar10 = 1.2;
  }
  puVar2 = param_2;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)puVar3 == 0) {
    puStack_100 = (undefined *)0x0;
  }
  else {
    puStack_100 = PTR_PTR_1126dc028;
    _objc_alloc();
    param_1 = 12.0;
    func_0x00010c0542a0(0x4028000000000000,0x4028000000000000,0x4028000000000000,0x4028000000000000)
    ;
  }
  puVar3 = param_2;
  func_0x00010c127f20(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126dc038;
  _objc_alloc(PTR_PTR_1126dc038);
  puVar2 = param_2;
  func_0x00010bfb3f20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1fca0(param_2);
  dVar9 = param_1;
  func_0x00010c086540(param_2);
  puVar5 = param_2;
  func_0x00010bfb3f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c013ba0(0x4050400000000000,0,param_1,dVar9,dVar10,puVar4);
  _objc_release(puVar5);
  _objc_release(puVar2);
  puVar5 = param_2;
  func_0x00010bf13d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (puVar5 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126dc058;
    _objc_alloc(PTR_PTR_1126dc058);
    puVar5 = param_2;
    func_0x00010c0d4f60(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_2;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_2;
    func_0x00010bf40d20();
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 != (undefined *)0x0) {
      func_0x00010bf40d40(param_2);
    }
    func_0x00010c04eda0(puVar2);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126dbfe0;
    _objc_alloc(PTR_PTR_1126dbfe0);
    func_0x00010c03a080();
    _objc_release(puVar2);
    _objc_release(0);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puStack_100);
    _objc_release(puStack_f8);
    _objc_release(0);
    _objc_release(puStack_e8);
    _objc_release(puVar1);
    _objc_release(param_2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
      return;
    }
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2827c0(param_3);
  }
  else {
    func_0x00010bf13d40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2827c0();
    param_3 = param_2;
  }
code_r0x00010bf41580:
                    /* WARNING: Could not recover jumptable at 0x00010bf41590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar2,PTR_s_colorWithHexCode__1125adf08,param_3);
  return;
}



/* Entry: 108e27148; end: 108e27177;  */

void FUN_108e27148(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2827c0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bf41590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_colorWithHexCode__1125adf08,param_2);
  return;
}



/* Entry: 108e27178; end: 108e2720b; +[SCCaptionUtils captionPresent:] */

uint FUN_108e27178(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c25d0a0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar2);
  _objc_release(uVar2);
  return (uint)puVar1 ^ 1;
}



/* Entry: 108e2720c; end: 108e2791f; +[SCCaptionUtils removeTaggedItemAndUpdateDictionaryIfNecessary:textView:range:replacementTextLength:useFirstNameForTagging:] */

void FUN_108e2720c(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,
                  undefined *param_5,long param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puStack_4c8;
  undefined8 uStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 uStack_3a0;
  code *pcStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long lStack_378;
  long *plStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long *plStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  plStack_330 = (long *)0x0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  _objc_retain(param_3);
  lVar9 = param_3;
  func_0x00010bf52a60();
  if (lVar9 != 0) {
    lVar10 = *plStack_330;
    do {
      lVar12 = 0;
      do {
        if (*plStack_330 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010bef7f60(puVar1);
        lVar12 = lVar12 + 1;
      } while (lVar9 != lVar12);
      lVar9 = param_3;
      func_0x00010bf52a60();
    } while (lVar9 != 0);
  }
  _objc_release(param_3);
  if (param_6 != 0 || param_5 != (undefined *)0x0) {
    uStack_358 = 0;
    uStack_360 = 0;
    uStack_348 = 0;
    uStack_350 = 0;
    lStack_378 = 0;
    uStack_380 = 0;
    uStack_368 = 0;
    plStack_370 = (long *)0x0;
    puVar2 = puVar1;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_4c8 = puVar2;
    func_0x00010bf52a60();
    if (puStack_4c8 != (undefined *)0x0) {
      lVar9 = *plStack_370;
      do {
        puVar13 = (undefined *)0x0;
        do {
          if (*plStack_370 != lVar9) {
            _objc_enumerationMutation(puVar2);
          }
          puVar16 = *(undefined **)(lStack_378 + (long)puVar13 * 8);
          puVar15 = puVar1;
          func_0x00010c0dff20(puVar1);
          _objc_retainAutoreleasedReturnValue();
          puStack_3a8 = &uStack_3b0;
          uStack_3b0 = 0;
          uStack_3a0 = 0x3032000000;
          pcStack_398 = FUN_108e27920;
          uStack_390 = 0x108e27930;
          uStack_388 = 0;
          func_0x00010c0c0b00();
          func_0x00010c067fc0();
          lVar12 = puStack_3a8[5];
          func_0x00010c08fa60();
          lVar10 = param_6;
          _NSIntersectionRange(param_5,param_6,puVar16,lVar12);
          if (((param_5 == puVar16 && (param_7 == 0 && param_6 != 0)) ||
              (param_5 <= puVar16 + lVar12 && puVar16 < param_5)) || (lVar10 != 0)) {
            if (param_4 != 0) {
              uVar3 = param_4;
              func_0x00010c26c860();
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar3;
              func_0x00010c08fa60();
              _objc_release(uVar3);
              uVar3 = param_4;
              func_0x00010c26c860();
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar3;
              func_0x00010c08fa60();
              _objc_release(uVar3);
              uVar6 = param_4;
              func_0x00010c26b700(param_4);
              _objc_retainAutoreleasedReturnValue();
              uVar3 = lVar12 + 1U;
              if ((long)(uVar4 - (long)puVar16) <= (long)(lVar12 + 1U)) {
                uVar3 = uVar4 - (long)puVar16;
              }
              if (uVar3 <= uVar5) {
                uVar5 = uVar3;
              }
              FUN_108e3ebf0(puVar16,uVar5,uVar6);
              _objc_release(uVar6);
              uVar3 = param_4;
              func_0x00010c26c860(param_4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c12b3c0();
              _objc_release(uVar3);
            }
            _objc_retain(param_3);
            lVar10 = param_3;
            func_0x00010bf52a60();
            lVar12 = lRam0000000000000000;
            while (lVar10 != 0) {
              lVar14 = 0;
              do {
                if (lRam0000000000000000 != lVar12) {
                  _objc_enumerationMutation(param_3);
                }
                lVar11 = *(long *)(lVar14 * 8);
                lVar7 = lVar11;
                func_0x00010c0dff20();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (lVar7 != 0) {
                  func_0x00010c12d3e0(lVar11);
                }
                lVar14 = lVar14 + 1;
              } while (lVar10 != lVar14);
              lVar10 = param_3;
              func_0x00010bf52a60();
            }
            _objc_release(param_3);
          }
          __Block_object_dispose(&uStack_3b0,8);
          _objc_release(uStack_388);
          _objc_release(puVar15);
          puVar13 = puVar13 + 1;
        } while (puVar13 != puStack_4c8);
        puStack_4c8 = puVar2;
        func_0x00010bf52a60();
      } while (puStack_4c8 != (undefined *)0x0);
    }
    _objc_release(puVar2);
  }
  puVar13 = puVar1;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar13;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (puVar2 != (undefined *)0x0) {
    puVar15 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(puVar13);
      }
      puVar16 = *(undefined **)((long)puVar15 * 8);
      if (((0 < param_7) && (puVar8 = puVar16, func_0x00010c067fc0(), param_5 == puVar8)) ||
         (puVar8 = puVar16, func_0x00010c067fc0(), param_5 < puVar8)) {
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c067fc0(puVar16);
        func_0x00010c0df780();
        _objc_retainAutoreleasedReturnValue();
        if (puVar8 != puVar16) {
          _objc_retain(param_3);
          lVar10 = param_3;
          func_0x00010bf52a60();
          lVar12 = lRam0000000000000000;
          while (lVar10 != 0) {
            lVar14 = 0;
            do {
              if (lRam0000000000000000 != lVar12) {
                _objc_enumerationMutation(param_3);
              }
              lVar11 = *(long *)(lVar14 * 8);
              lVar7 = lVar11;
              func_0x00010c0dff20();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (lVar7 != 0) {
                lVar7 = lVar11;
                func_0x00010c0e00e0(lVar11);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(lVar11);
                _objc_release(lVar7);
                func_0x00010c1d0640(lVar11);
              }
              lVar14 = lVar14 + 1;
            } while (lVar10 != lVar14);
            lVar10 = param_3;
            func_0x00010bf52a60();
          }
          _objc_release(param_3);
        }
        _objc_release(puVar8);
      }
      puVar15 = puVar15 + 1;
    } while (puVar15 != puVar2);
    puVar2 = puVar13;
    func_0x00010bf52a60();
  }
  _objc_release(puVar13);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = 8;
  __Block_object_dispose(&uStack_3b0);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar9 + 0x28);
  *(undefined8 *)(lVar9 + 0x28) = 0;
  return;
}



/* Entry: 108e27920; end: 108e27937;  */

void FUN_108e27920(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108e27938; end: 108e27a03;  */

void FUN_108e27938(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 unaff_x23;
  
  _objc_retain(param_2);
  cVar1 = *(char *)(param_1 + 0x28);
  uVar2 = param_2;
  func_0x00010c290fa0();
  _objc_retainAutoreleasedReturnValue();
  if (cVar1 == '\x01') {
    unaff_x23 = uVar2;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = unaff_x23;
    FUN_10901e6c8();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = uVar2;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar3;
  _objc_release(uVar4);
  if (cVar1 != '\0') {
    _objc_release(uVar3);
    uVar3 = unaff_x23;
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108e27a04; end: 108e27c47; +[SCCaptionUtils addTaggedItemToDictionary:taggedItem:textLengthDiff:insertIndex:textLength:] */

undefined *
FUN_108e27a04(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
             long param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined *puStack_138;
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
  lVar6 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar9 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar9;
  func_0x00010c0d3c80();
  _objc_release(puVar9);
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(param_3);
  _objc_release(puVar9);
  if (param_5 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    puStack_138 = param_4;
    _objc_retain(puVar1);
    lVar6 = 0x10;
    puVar2 = puVar1;
    func_0x00010bf52a60();
    if (puVar2 != (undefined *)0x0) {
      lVar7 = *plStack_120;
      do {
        puVar9 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(puVar1);
          }
          lVar8 = *(long *)(lStack_128 + (long)puVar9 * 8);
          lVar6 = lVar8;
          func_0x00010c067fc0();
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (param_6 < lVar6) {
            func_0x00010c067fc0(lVar8);
            func_0x00010c0df780(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = param_3;
            func_0x00010c0e00e0(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(param_3);
            _objc_release(puVar4);
            func_0x00010c1d0640(param_3);
            _objc_release(puVar3);
          }
          puVar9 = puVar9 + 1;
        } while (puVar2 != puVar9);
        lVar6 = 0x10;
        puVar2 = puVar1;
        func_0x00010bf52a60();
        puVar9 = (undefined *)0x0;
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release(puVar1);
    param_4 = puStack_138;
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_4;
  puVar5 = puVar2;
  func_0x00010c1d0560(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar3;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_108e27c48;
  puStack_180 = puVar9;
  lStack_178 = param_5;
  puStack_170 = puVar1;
  puStack_168 = puVar2;
  puStack_160 = param_4;
  puStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  _objc_retain(lVar6);
  puVar9 = puVar5;
  func_0x00010c08fa60();
  if (puVar9 < puVar4) {
    puVar4 = puVar5;
    func_0x00010c08fa60();
  }
  puVar1 = puVar5;
  func_0x00010c260c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar2 = puVar1;
  func_0x00010c11f440();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  puVar9 = puVar2;
  if (lVar7 != 0) {
    puStack_198 = &uStack_1a0;
    uStack_1a0 = 0;
    uStack_190 = 0x2020000000;
    uStack_188 = 0;
    func_0x00010c0c0b00(lVar7);
    puVar9 = (undefined *)0x7fffffffffffffff;
    if ((long)puVar4 <= (long)(puVar2 + puStack_198[3] + 1)) {
      puVar9 = puVar2;
    }
    __Block_object_dispose(&uStack_1a0,8);
  }
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(puVar1);
  return puVar9;
}



/* Entry: 108e27c48; end: 108e27ddb; +[SCCaptionUtils findPreviousTaggingPositionFromPosition:text:taggedItemsDictionary:] */

ulong FUN_108e27c48(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010c08fa60();
  if (uVar1 < param_3) {
    param_3 = param_4;
    func_0x00010c08fa60();
  }
  uVar2 = param_4;
  func_0x00010c260c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = uVar2;
  func_0x00010c11f440();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_5;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  uVar1 = uVar3;
  if (lVar5 != 0) {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x2020000000;
    uStack_48 = 0;
    func_0x00010c0c0b00(lVar5);
    uVar1 = 0x7fffffffffffffff;
    if ((long)param_3 <= (long)(uVar3 + puStack_58[3] + 1)) {
      uVar1 = uVar3;
    }
    __Block_object_dispose(&uStack_60,8);
  }
  _objc_release(lVar5);
  _objc_release(param_5);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 108e27ddc; end: 108e27e3f;  */

void FUN_108e27ddc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c290fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08fa60();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108e27e40; end: 108e28067; +[SCCaptionUtils deleteAndModifyTaggingForEditingCaption:currentTaggingIndex:] */

void FUN_108e27e40(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  _objc_release(puVar1);
  if ((param_4 == 0x7fffffffffffffff) || ((long)puVar2 <= param_4)) goto LAB_108e28048;
  puVar1 = param_3;
  func_0x00010bf8c8e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c15a1e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = param_3;
  func_0x00010bf8c8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_3;
  func_0x00010bf8c8e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf193c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c24d960(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010c0e1ce0(puVar1,param_2,puVar5,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  if (puVar7 == puVar2) {
    puVar1 = param_3;
    func_0x00010c26b700(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c260c20();
    _objc_retainAutoreleasedReturnValue();
LAB_108e27f7c:
    func_0x00010c212f20(param_3,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  else if ((long)puVar7 < (long)puVar2) {
    puVar1 = param_3;
    func_0x00010bf8c8e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    func_0x00010c26caa0(param_3,param_2,puVar1,puVar7,0,
                        &PTR____CFConstantStringClassReference_110db2d98);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    if ((int)puVar2 != 0) {
      puVar2 = param_3;
      func_0x00010c26b700(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25da60(puVar1,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      func_0x00010c066ec0(puVar1,param_2,&PTR____CFConstantStringClassReference_110db2d98,puVar7);
      puVar2 = puVar1;
      func_0x00010bf51e00(puVar1);
      goto LAB_108e27f7c;
    }
  }
  _objc_release(puVar3);
LAB_108e28048:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e28068; end: 108e2812b; +[SCCaptionUtils appliedStyleFromCaptionStyle:captionStylePreference:shouldDefaultToAltStyle:] */

void FUN_108e28068(undefined8 param_1,undefined8 param_2,long param_3,long param_4,int param_5)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  _objc_retain(param_3);
  if (param_4 == 2) {
LAB_108e280a4:
    lVar1 = param_3;
    func_0x00010befd420();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = param_3;
      func_0x00010befd420(param_3);
      _objc_retainAutoreleasedReturnValue();
      unaff_x20 = lVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      goto LAB_108e28110;
    }
  }
  else if (param_4 != 1) {
    if (param_4 != 0) goto LAB_108e28110;
    if (param_5 != 0) goto LAB_108e280a4;
  }
  unaff_x20 = param_3;
  func_0x00010c113040(param_3);
  _objc_retainAutoreleasedReturnValue();
LAB_108e28110:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
  return;
}



/* Entry: 108e2812c; end: 108e28233; +[SCCaptionUtils findNextAppliedStyleFromCaption:] */

void FUN_108e2812c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf303a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010befd420();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010c113040(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  if (lVar3 != 0) {
    lVar4 = param_3;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf07f80();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c071ae0();
    _objc_release(lVar5);
    _objc_release(lVar4);
    lVar4 = lVar3;
    if ((int)lVar6 == 0) {
      lVar4 = lVar2;
    }
  }
  _objc_retain(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 108e28234; end: 108e282cf; +[SCCaptionUtils isDynamicUnlockablesCaptionStyleTypeOfClassic:] */

ulong FUN_108e28234(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c25e080();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071ae0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c25e080(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c071ae0();
    _objc_release(uVar1);
  }
  else {
    uVar2 = 1;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 108e282d0; end: 108e2837b; -[SCDynamicCaptionFontStyle doesHaveValidContentMedia] */

bool FUN_108e282d0(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar2 = param_1;
  func_0x00010c0c45e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf4db80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06d500(puVar4,param_2,lVar3);
  if (((ulong)puVar4 & 1) == 0) {
    func_0x00010c0c45e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bf4be80();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar5 != 0;
    _objc_release();
    _objc_release(param_1);
  }
  else {
    bVar1 = false;
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 108e2837c; end: 108e28593; -[SCDynamicCaptionStyle styleIdsForInvalidContentMedia] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108e2837c(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puStack_170;
  undefined *puStack_168;
  ulong uStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
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
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar9 = param_1;
  func_0x00010c113040(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  uVar9 = param_1;
  func_0x00010befd420();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010bf529e0();
  _objc_release(uVar9);
  if (uVar3 != 0) {
    func_0x00010befd420(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar2);
    _objc_release(param_1);
  }
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(puVar2);
  puVar8 = puVar2;
  func_0x00010bf52a60();
  if (puVar8 != (undefined *)0x0) {
    lVar10 = *plStack_120;
    do {
      puVar11 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(puVar2);
        }
        uVar9 = *(ulong *)(lStack_128 + (long)puVar11 * 8);
        uVar3 = uVar9;
        func_0x00010bfb40c0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf87960();
        _objc_release(uVar3);
        if ((uVar4 & 1) == 0) {
          func_0x00010c25e080();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
          _objc_release(uVar9);
        }
        puVar11 = puVar11 + 1;
      } while (puVar8 != puVar11);
      puVar8 = puVar2;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (puVar8 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  puVar8 = puVar1;
  func_0x00010bf529e0();
  if (puVar8 == (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    _objc_retain(puVar1);
    puVar8 = puVar1;
  }
  _objc_release(puVar2);
  puVar11 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return puVar8;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_170;
  pcStack_138 = FUN_108e28594;
  uStack_160 = uVar9;
  puStack_158 = puVar8;
  puStack_150 = puVar2;
  puStack_148 = puVar1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  puStack_168 = PTR_PTR_1126fea50;
  puStack_170 = puVar11;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&puStack_170,
                      PTR_s_initWithFrame__1125e2948);
  if (ppuVar5 != (undefined **)0x0) {
    _objc_storeWeak((undefined1 *)((long)ppuVar5 + (long)_DAT_11277c10c),puVar6);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)ppuVar5 + (long)_DAT_11277c110);
    *(undefined **)((long)ppuVar5 + (long)_DAT_11277c110) = puVar2;
    _objc_release(uVar7);
    func_0x00010c16e440(ppuVar5);
    func_0x00010c17d4c0(ppuVar5);
    func_0x00010c285f60(ppuVar5);
  }
  _objc_release(puVar6);
  return (undefined1 *)ppuVar5;
}



/* Entry: 108e28594; end: 108e2866b; -[SCPreviewCaptionBackgroundView initWithCaptionTextView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108e28594(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fea50;
  uStack_40 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_40,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11277c10c),param_3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277c110);
    *(undefined **)((long)puVar1 + (long)_DAT_11277c110) = puVar2;
    _objc_release(uVar3);
    func_0x00010c16e440(puVar1);
    func_0x00010c17d4c0(puVar1);
    func_0x00010c285f60(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e2866c; end: 108e286d3; -[SCPreviewCaptionBackgroundView initWithCaptionTextView:resourceDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108e2866c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bffc6a0();
  if (param_1 != 0) {
    _objc_storeWeak(param_1 + _DAT_11277c114,param_4);
  }
  _objc_release(param_4);
  return param_1;
}



/* Entry: 108e286d4; end: 108e28743; -[SCPreviewCaptionBackgroundView initWithCaptionTextView:backgroundImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108e286d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  func_0x00010bffc6a0(param_1,param_2,param_3);
  if (param_1 != 0) {
    lVar2 = (long)_DAT_11277c118;
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = param_4;
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  return param_1;
}



/* Entry: 108e28744; end: 108e28783; -[SCPreviewCaptionBackgroundView updateFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e28744(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + _DAT_11277c10c;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfb68e0();
  func_0x00010c19f0e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108e28784; end: 108e288e3; -[SCPreviewCaptionBackgroundView backgroundOverflowInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_108e28784(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11277c10c;
  lVar1 = param_2 + lVar4;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf07f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c25e080();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c071ae0();
  _objc_release(lVar1);
  if ((int)lVar3 == 0) {
    lVar1 = lVar2;
    func_0x00010c25e080();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c071ae0();
    _objc_release(lVar1);
    if ((int)lVar3 == 0) {
      param_1 = *(double *)PTR__UIEdgeInsetsZero_110345bb0;
    }
    else {
      param_2 = param_2 + lVar4;
      _objc_loadWeakRetained(param_2);
      func_0x00010c14e120();
      _objc_release(param_2);
      param_1 = param_1 * -30.0;
    }
  }
  else {
    param_2 = param_2 + lVar4;
    _objc_loadWeakRetained(param_2);
    func_0x00010c14e120();
    _objc_release(param_2);
    param_1 = param_1 * -10.0;
  }
  _objc_release(lVar2);
  return param_1;
}



/* Entry: 108e288e4; end: 108e289b3; -[SCPreviewCaptionBackgroundView backgroundOverflowOffSet] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108e288e4(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  undefined1 auVar7 [16];
  
  lVar5 = (long)_DAT_11277c10c;
  lVar1 = param_2 + lVar5;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf07f80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c25e080();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c071ae0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar4 == 0) {
    dVar6 = *(double *)PTR__CGPointZero_110347540;
    param_1 = *(double *)(PTR__CGPointZero_110347540 + 8);
  }
  else {
    param_2 = param_2 + lVar5;
    _objc_loadWeakRetained(param_2);
    func_0x00010c14e120();
    _objc_release(param_2);
    dVar6 = param_1 * 0.0;
    param_1 = param_1 * 10.0;
  }
  auVar7._8_8_ = param_1;
  auVar7._0_8_ = dVar6;
  return auVar7;
}



/* Entry: 108e289b4; end: 108e28a53; -[SCPreviewCaptionBackgroundView drawRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e289b4(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126fea50;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_drawRect__1125271c8);
  uVar1 = *(ulong *)(param_1 + _DAT_11277c110);
  func_0x00010bdc0fe0();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  _CGColorEqualToColor(uVar1,puVar3);
  _objc_release(puVar2);
  if ((uVar1 & 1) == 0) {
    func_0x00010bed3b80(param_1);
  }
  return;
}



/* Entry: 108e28a54; end: 108e28b53; -[SCPreviewCaptionBackgroundView _updateBackgroundLayers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e28a54(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010be8b760();
  lVar1 = param_1 + _DAT_11277c10c;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf07f80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c25e260();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 < 4) {
    if (lVar3 != 1) {
      if (lVar3 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdcef10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__applyWordBackgroundStyle_112551560);
        return;
      }
      if (lVar3 != 3) {
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdce410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__applyLineBackgroundStyle_1125512a0);
    return;
  }
  if (lVar3 == 4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdce150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__applyEntireBackgroundStyle_1125511f0);
    return;
  }
  if (lVar3 != 5) {
    if (lVar3 != 7) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdcdbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__applyBubbleWrapBackgroundStyle_112551090);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdcdfb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__applyCustomBackgroundStyle_112551188);
  return;
}



/* Entry: 108e28b54; end: 108e28c57; -[SCPreviewCaptionBackgroundView _applyCustomBackgroundStyle] */

/* WARNING: Possible PIC construction at 0x000108e28bd0: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e28b54(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11277c10c;
  lVar1 = param_1 + lVar5;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf07f80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c25e080();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c071ae0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar4 == 0) {
    lVar5 = param_1 + lVar5;
    _objc_loadWeakRetained();
    lVar1 = lVar5;
    func_0x00010bf07f80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c25e080();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c071ae0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar5);
    if ((int)lVar3 == 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdce150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__applyEntireBackgroundStyle_1125511f0);
  return;
}



/* Entry: 108e28c58; end: 108e28ca7; -[SCPreviewCaptionBackgroundView _applyLineBackgroundStyle] */

void FUN_108e28c58(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108e28ca8;
  puStack_20 = &UNK_110ac67f0;
  uStack_18 = param_1;
  func_0x00010be202c0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 108e28ca8; end: 108e28cbb;  */

void FUN_108e28ca8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc5fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__addBackgroundForTextRange_textP_11254f190,
             param_2,param_3,param_4);
  return;
}



/* Entry: 108e28cbc; end: 108e28d0b; -[SCPreviewCaptionBackgroundView _applyWordBackgroundStyle] */

void FUN_108e28cbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108e28d0c;
  puStack_20 = &UNK_110ac67f0;
  uStack_18 = param_1;
  func_0x00010be23ec0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 108e28d0c; end: 108e28d1f;  */

void FUN_108e28d0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc5fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__addBackgroundForTextRange_textP_11254f190,
             param_2,param_3,param_4);
  return;
}



/* Entry: 108e28d20; end: 108e28e3f; -[SCPreviewCaptionBackgroundView _applyEntireBackgroundStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e28d20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11277c11c);
  lVar5 = (long)_DAT_11277c10c;
  lVar2 = param_5 + lVar5;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c26c620();
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  _objc_release(lVar2);
  lVar5 = param_5 + lVar5;
  _objc_loadWeakRetained(lVar5);
  lVar2 = lVar5;
  func_0x00010bf07f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  lVar5 = lVar2;
  func_0x00010bfb40c0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010c26c540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  uVar6 = *puVar1;
  uVar7 = puVar1[1];
  uVar8 = puVar1[2];
  uVar9 = puVar1[3];
  func_0x00010bdc9520(param_5,param_6,lVar3);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  lVar5 = lVar2;
  func_0x00010bfb40c0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar5;
  func_0x00010bf14140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  func_0x00010bdc5f80(*puVar1,puVar1[1],puVar1[2],puVar1[3],param_5,param_6,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 108e28e40; end: 108e28e43; -[SCPreviewCaptionBackgroundView _applyBubbleWrapBackgroundStyle] */

void FUN_108e28e40(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdce150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__applyEntireBackgroundStyle_1125511f0);
  return;
}



/* Entry: 108e28e44; end: 108e29007; -[SCPreviewCaptionBackgroundView _addBackgroundForTextRange:textPadding:isLastLine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e28e44(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,ulong param_9)

{
  double *pdVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  pdVar1 = (double *)(param_5 + _DAT_11277c11c);
  lVar8 = (long)_DAT_11277c10c;
  _objc_retain(param_8);
  _objc_retain(param_7);
  lVar3 = param_5 + lVar8;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bfb1b20();
  _objc_release(param_7);
  *pdVar1 = param_1;
  pdVar1[1] = param_2;
  pdVar1[2] = param_3;
  pdVar1[3] = param_4;
  _objc_release(lVar3);
  dVar9 = *pdVar1;
  dVar11 = pdVar1[1];
  dVar12 = pdVar1[2];
  dVar13 = pdVar1[3];
  func_0x00010bdc9520(param_5);
  dVar10 = dVar9;
  _objc_release(param_8);
  *pdVar1 = dVar9;
  pdVar1[1] = dVar11;
  pdVar1[2] = dVar12;
  pdVar1[3] = dVar13;
  iVar2 = 2;
  func_0x000107c31924(2,0x10,0,0);
  if (iVar2 == 0) {
    uVar5 = param_9 & 1;
  }
  else {
    uVar4 = param_5 + lVar8;
    _objc_loadWeakRetained();
    uVar5 = uVar4;
    func_0x00010c26c320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar4);
    if ((param_9 & 1) != 0) goto LAB_108e28f74;
  }
  if (uVar5 == 0) {
    lVar3 = param_5 + lVar8;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c099440();
    pdVar1[3] = pdVar1[3] - dVar10;
    _objc_release(lVar3);
  }
LAB_108e28f74:
  lVar8 = param_5 + lVar8;
  _objc_loadWeakRetained(lVar8);
  lVar3 = lVar8;
  func_0x00010bf07f80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010bfb40c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf14140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(lVar8);
  func_0x00010bdc5f80(*pdVar1,pdVar1[1],pdVar1[2],pdVar1[3],param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 108e29008; end: 108e29103; -[SCPreviewCaptionBackgroundView _adjustTextRect:withTextPadding:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_108e29008(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  double dVar2;
  double dVar3;
  
  lVar1 = (long)_DAT_11277c10c;
  dVar3 = param_1;
  _objc_retain(param_4);
  param_2 = param_2 + lVar1;
  _objc_loadWeakRetained(param_2);
  func_0x00010c14e120();
  dVar2 = dVar3;
  _objc_release(param_2);
  func_0x00010c08e8a0(param_4);
  dVar3 = param_1 - dVar3 * dVar2;
  if (NAN(dVar3)) {
    dVar3 = param_1;
  }
  func_0x00010c274800(param_4);
  func_0x00010c08e8a0(param_4);
  func_0x00010c140ce0(param_4);
  func_0x00010c274800(param_4);
  func_0x00010bf203c0(param_4);
  _objc_release(param_4);
  return dVar3;
}



/* Entry: 108e29104; end: 108e2940b; -[SCPreviewCaptionBackgroundView _applyBrushBackgroundStyleWithTextRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e29104(double param_1,undefined8 param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c200c80();
  _objc_release(puVar2);
  lVar9 = (long)_DAT_11277c110;
  puVar2 = puVar1;
  func_0x00010c216160(puVar1,param_6,*(undefined8 *)(param_5 + lVar9));
  FUN_109201598();
  _objc_retainAutoreleasedReturnValue();
  dVar11 = 40.0;
  dVar12 = 40.0;
  puVar3 = puVar2;
  func_0x00010c13a160(0x4044000000000000,0x4044000000000000,0x4044000000000000,0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_11277c118;
  uVar8 = *(undefined8 *)(param_5 + lVar10);
  *(undefined **)(param_5 + lVar10) = puVar3;
  _objc_release(uVar8);
  func_0x00010befbb60(param_5,param_6,puVar1);
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c182220();
  puVar4 = puVar3;
  func_0x00010c08c0e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c200c80();
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010c216160(puVar3,param_6,*(undefined8 *)(param_5 + lVar9));
  func_0x0001092015a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_5,param_6,puVar3);
  func_0x00010c23d0a0(*(undefined8 *)(param_5 + lVar10));
  dVar14 = param_4 / dVar12;
  func_0x00010c23d0a0(puVar4);
  dVar11 = dVar11 * dVar14;
  func_0x00010c23d0a0(puVar4);
  dVar14 = dVar14 * dVar12;
  dVar12 = param_1;
  _CGRectGetMaxY(param_1,param_2,param_3,param_4);
  lVar9 = param_5 + _DAT_11277c10c;
  _objc_loadWeakRetained();
  lVar5 = lVar9;
  func_0x00010c26b7a0();
  _objc_release(lVar9);
  puVar6 = puVar4;
  if (lVar5 == 0) {
    _CGRectGetMinX(param_1,param_2,param_3,param_4);
    dVar13 = 21.0;
LAB_108e29374:
    func_0x00010c19f0e0(param_1 + dVar13,dVar12 + -1.0,dVar11,dVar14,puVar3);
    func_0x00010bfe9720(puVar4,param_6,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(puVar3,param_6,puVar6);
  }
  else {
    if (lVar5 != 2) {
      if (lVar5 != 1) goto LAB_108e293b8;
      _CGRectGetMidX(param_1,param_2,param_3,param_4);
      dVar13 = dVar11 * -0.5;
      goto LAB_108e29374;
    }
    _CGRectGetMaxX(param_1,param_2,param_3,param_4);
    func_0x00010c19f0e0((param_1 + -21.0) - dVar11,dVar12 + -1.0,dVar11,dVar14,puVar3);
    func_0x00010bfe9480(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(puVar3,param_6,puVar7);
    _objc_release(puVar7);
  }
  _objc_release(puVar6);
LAB_108e293b8:
  func_0x00010bed3b40(param_5,param_6,puVar1,*(undefined8 *)(param_5 + lVar10));
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e2940c; end: 108e297cf; -[SCPreviewCaptionBackgroundView _applyRainbowBackgroundStyleWithTextRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e2940c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puStack_98 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_108e297d0;
  puStack_a0 = &UNK_110ac6820;
  puStack_88 = puStack_98;
  func_0x00010be202c0(param_5,param_6,&puStack_b8);
  if (0.0 < (double)puStack_88[3]) {
    dVar8 = param_1;
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    dVar7 = (double)puStack_88[3];
    dVar9 = param_1;
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    _objc_alloc_init(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    func_0x00010c0d18c0(*(undefined8 *)PTR__CGPointZero_110347540,
                        *(undefined8 *)(PTR__CGPointZero_110347540 + 8));
    dVar7 = (dVar8 / dVar7) * 0.5;
    dVar8 = dVar7 + dVar7;
    dVar9 = (double)(long)(dVar9 / dVar8);
    if (0.0 < dVar9) {
      dVar6 = 0.0;
      uVar5 = 1;
      do {
        func_0x00010bef6d40(dVar7 + dVar6 * dVar8,0,dVar7,0x400921fb54442d18,0,puVar2);
        dVar6 = (double)uVar5;
        uVar5 = uVar5 + 1;
      } while (dVar6 < dVar9);
    }
    if (0.0 < (double)puStack_88[3]) {
      dVar6 = 0.0;
      uVar5 = 1;
      do {
        func_0x00010bef6d40(dVar8 * dVar9,dVar7 + dVar6 * dVar8,dVar7,0x4012d97c7f3321d2,
                            0x3ff921fb54442d18,puVar2);
        dVar6 = (double)uVar5;
        uVar5 = uVar5 + 1;
      } while (dVar6 < (double)puStack_88[3]);
    }
    uVar5 = (uint)(dVar9 + -1.0);
    if (-1 < (int)uVar5) {
      do {
        func_0x00010bef6d40(dVar7 + (double)uVar5 * dVar8,dVar8 * (double)puStack_88[3],dVar7,0,
                            0x400921fb54442d18,puVar2);
        bVar1 = 0 < (int)uVar5;
        uVar5 = uVar5 - 1;
      } while (bVar1);
    }
    uVar5 = (uint)((double)puStack_88[3] + -1.0);
    if (-1 < (int)uVar5) {
      do {
        func_0x00010bef6d40(0,dVar7 + (double)uVar5 * dVar8,dVar7,0x3ff921fb54442d18,
                            0x4012d97c7f3321d2,puVar2);
        bVar1 = 0 < (int)uVar5;
        uVar5 = uVar5 - 1;
      } while (bVar1);
    }
    func_0x00010bf3dc80(puVar2);
    puVar3 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    _objc_alloc_init(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
    _objc_retainAutorelease(puVar2);
    func_0x00010bdc1040();
    func_0x00010c1d9820(puVar3);
    uVar4 = *(undefined8 *)(param_5 + _DAT_11277c110);
    func_0x00010bf414e0(0x3fe8a3d70a3d70a4,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c19bc00(puVar3);
    _objc_release(uVar4);
    dVar7 = param_1;
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    func_0x00010c19f0e0(param_1 + (dVar9 * dVar8 - dVar7) * -0.5,param_2,param_3,param_4,puVar3);
    func_0x00010c08c0e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(param_5);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  __Block_object_dispose(&uStack_90,8);
  return;
}



/* Entry: 108e297d0; end: 108e297eb;  */

void FUN_108e297d0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(double *)(lVar1 + 0x18) = *(double *)(lVar1 + 0x18) + 3.0;
  return;
}



/* Entry: 108e297ec; end: 108e29bf7; -[SCPreviewCaptionBackgroundView _applyGlowBackgroundStyleWithTextRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e297ec(undefined8 param_1,double param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined8 uStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = (long)_DAT_11277c10c;
  puVar2 = (undefined *)(param_5 + lVar11);
  dVar15 = param_2;
  dVar26 = param_3;
  dVar27 = param_4;
  _objc_loadWeakRetained();
  puVar3 = puVar2;
  func_0x00010bf07f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c4438;
  puVar13 = puVar3;
  func_0x00010bfb40c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar13;
  func_0x00010bf1fb20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06ebe0(puVar3);
  puVar4 = puVar3;
  func_0x00010bf15ec0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc3d20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar12);
  _objc_release(puVar13);
  dVar16 = 0.0;
  puVar2 = puVar3;
  func_0x00010bfb40c0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar2;
  func_0x00010c26c7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar13;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar2 != (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar13);
      }
      puVar4 = PTR_PTR_1126c4438;
      uVar14 = *(undefined8 *)((long)puVar12 * 8);
      uVar6 = uVar14;
      func_0x00010bf40c40(uVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c06ebe0();
      puVar7 = puVar3;
      func_0x00010bf15ec0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfc3d20();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar7);
      _objc_release(uVar6);
      lVar9 = param_5 + lVar11;
      _objc_loadWeakRetained(lVar9);
      func_0x00010c14e120();
      _objc_release(lVar9);
      puVar4 = PTR__OBJC_CLASS___CALayer_1126b1750;
      _objc_alloc_init(PTR__OBJC_CLASS___CALayer_1126b1750);
      dVar26 = param_3;
      dVar27 = param_4;
      _CGRectIntegral(param_1,param_2);
      func_0x00010c19f0e0(puVar4);
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc0fe0();
      func_0x00010c173280(puVar4);
      func_0x00010c200c80(puVar4);
      func_0x00010c1733a0(dVar16 + dVar16,puVar4);
      dVar15 = *(double *)(param_5 + _DAT_11277c120);
      func_0x00010c1842e0(puVar4);
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc0fe0();
      func_0x00010c1fe740(puVar4);
      func_0x00010c2bea40(uVar14);
      dVar29 = dVar16 * dVar15;
      func_0x00010c2bec60(uVar14);
      dVar15 = dVar16 * dVar15;
      func_0x00010c1fe7a0(dVar29,puVar4);
      dVar29 = 5.26354424712089e-315;
      func_0x00010c1fe800(puVar4);
      func_0x00010c11ef60(uVar14);
      dVar16 = dVar16 * dVar29 * 3.0;
      func_0x00010c1fe840(puVar4);
      lVar9 = param_5;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066f40();
      _objc_release(lVar9);
      _objc_release(puVar4);
      _objc_release(puVar8);
      puVar12 = puVar12 + 1;
    } while (puVar2 != puVar12);
    puVar2 = puVar13;
    func_0x00010bf52a60();
  }
  _objc_release(puVar13);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  dVar29 = dVar26;
  dVar28 = dVar27;
  _objc_opt_new();
  puStack_248 = &uStack_250;
  uStack_250 = 0;
  uStack_240 = 0x2020000000;
  uStack_238 = 0;
  puStack_268 = &uStack_270;
  uStack_270 = 0;
  uStack_260 = 0x2020000000;
  uStack_258 = 0;
  _objc_retain();
  func_0x00010be202c0(puVar3);
  dVar30 = *(double *)(puVar3 + _DAT_11277c120);
  puVar13 = puVar2;
  func_0x00010bf51e00();
  puVar12 = puVar3;
  dVar16 = dVar30;
  func_0x00010c22dc40();
  puVar4 = puVar13;
  if ((int)puVar12 != 0) {
    puVar4 = puVar3;
    dVar16 = dVar30;
    func_0x00010befd880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
  }
  puVar12 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  _objc_alloc_init(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  for (puVar13 = (undefined *)0x0; puVar5 = puVar4, func_0x00010bf529e0(), puVar13 < puVar5;
      puVar13 = puVar13 + 1) {
    puVar5 = puVar4;
    func_0x00010c0dfd40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1080();
    dVar17 = dVar16;
    dVar25 = dVar15;
    dVar18 = dVar29;
    dVar19 = dVar28;
    _objc_release(puVar5);
    if (puVar13 == (undefined *)0x0) {
      dVar17 = dVar16;
      _CGRectGetMinX(dVar16,dVar15,dVar29,dVar28);
      dVar25 = dVar16;
      _CGRectGetMinY(dVar16,dVar15,dVar29,dVar28);
      func_0x00010c0d18c0(dVar17,dVar30 + dVar25,puVar12);
      dVar17 = dVar16;
      _CGRectGetMinX(dVar16,dVar15,dVar29,dVar28);
      dVar25 = dVar16;
      _CGRectGetMinY(dVar16,dVar15,dVar29,dVar28);
      func_0x00010befac40(dVar30 + dVar17,dVar25,dVar16,dVar15,puVar12);
      dVar17 = dVar16;
      _CGRectGetMaxX(dVar16,dVar15,dVar29,dVar28);
      dVar25 = dVar16;
      _CGRectGetMinY(dVar16,dVar15,dVar29,dVar28);
      func_0x00010bef98c0(dVar17 - dVar30,dVar25,puVar12);
      dVar17 = dVar16;
      _CGRectGetMaxX(dVar16,dVar15,dVar29,dVar28);
      dVar25 = dVar16;
      _CGRectGetMinY(dVar16,dVar15,dVar29,dVar28);
      dVar18 = dVar16;
      _CGRectGetMaxX(dVar16,dVar15,dVar29,dVar28);
      dVar19 = dVar16;
      _CGRectGetMinY(dVar16,dVar15,dVar29,dVar28);
      dVar25 = dVar30 + dVar25;
      func_0x00010befac40(puVar12);
    }
    puVar5 = puVar4;
    func_0x00010bf529e0();
    dVar24 = dVar17;
    if (puVar13 + 1 < puVar5) {
      puVar5 = puVar4;
      func_0x00010c0dfd40(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc1080();
      _objc_release(puVar5);
      dVar20 = dVar16;
      _CGRectGetMaxX(dVar16,dVar15,dVar29,dVar28);
      dVar21 = dVar17;
      _CGRectGetMaxX(dVar17,dVar25,dVar18,dVar19);
      dVar24 = dVar17;
      if (dVar20 - dVar21 <= 0.0) {
        if (0.0 <= dVar20 - dVar21) {
          _CGRectGetMaxX(dVar17,dVar25,dVar18,dVar19);
          _CGRectGetMinY(dVar17,dVar25);
          dVar25 = dVar30 + dVar17;
          func_0x00010bef98c0(puVar12);
          goto LAB_108e2a1dc;
        }
        dVar20 = dVar16;
        _CGRectGetMaxX(dVar16,dVar15,dVar29,dVar28);
        dVar21 = dVar17;
        _CGRectGetMinY(dVar17,dVar25,dVar18,dVar19);
        func_0x00010bef98c0(dVar20,dVar21 - dVar30,puVar12);
        dVar20 = dVar16;
        _CGRectGetMaxX(dVar16,dVar15,dVar29,dVar28);
        dVar21 = dVar17;
        _CGRectGetMinY(dVar17,dVar25,dVar18,dVar19);
        _CGRectGetMaxX(dVar16,dVar15,dVar29,dVar28);
        dVar15 = dVar17;
        _CGRectGetMinY(dVar17,dVar25,dVar18,dVar19);
        func_0x00010befac40(dVar30 + dVar20,dVar21,dVar16,dVar15,puVar12);
        dVar16 = dVar17;
        _CGRectGetMaxX(dVar17,dVar25,dVar18,dVar19);
        dVar15 = dVar17;
        _CGRectGetMinY(dVar17,dVar25,dVar18,dVar19);
        func_0x00010bef98c0(dVar16 - dVar30,dVar15,puVar12);
        _CGRectGetMaxX(dVar17,dVar25,dVar18,dVar19);
        dVar20 = dVar17;
        _CGRectGetMinY(dVar17,dVar25,dVar18,dVar19);
        dVar16 = dVar17;
        _CGRectGetMaxX(dVar17,dVar25,dVar18,dVar19);
        _CGRectGetMinY(dVar17,dVar25,dVar18,dVar19);
        dVar19 = dVar17;
        dVar18 = dVar16;
      }
      else {
        dVar20 = dVar16;
        _CGRectGetMaxX(dVar16,dVar15,dVar29,dVar28);
        dVar21 = dVar16;
        _CGRectGetMaxY(dVar16,dVar15,dVar29,dVar28);
        func_0x00010bef98c0(dVar20,dVar21 - dVar30,puVar12);
        dVar20 = dVar16;
        _CGRectGetMaxX(dVar16,dVar15,dVar29,dVar28);
        dVar21 = dVar16;
        _CGRectGetMaxY(dVar16,dVar15,dVar29,dVar28);
        dVar22 = dVar16;
        _CGRectGetMaxX(dVar16,dVar15,dVar29,dVar28);
        dVar23 = dVar16;
        _CGRectGetMaxY(dVar16,dVar15,dVar29,dVar28);
        func_0x00010befac40(dVar20 - dVar30,dVar21,dVar22,dVar23,puVar12);
        dVar20 = dVar17;
        _CGRectGetMaxX(dVar17,dVar25,dVar18,dVar19);
        dVar21 = dVar16;
        _CGRectGetMaxY(dVar16,dVar15,dVar29,dVar28);
        func_0x00010bef98c0(dVar30 + dVar20,dVar21,puVar12);
        _CGRectGetMaxX(dVar17,dVar25,dVar18,dVar19);
        dVar20 = dVar16;
        _CGRectGetMaxY(dVar16,dVar15,dVar29,dVar28);
        _CGRectGetMaxX(dVar17,dVar25,dVar18,dVar19);
        _CGRectGetMaxY(dVar16,dVar15,dVar29,dVar28);
        dVar19 = dVar16;
        dVar18 = dVar17;
      }
      dVar25 = dVar30 + dVar20;
      func_0x00010befac40(puVar12);
    }
LAB_108e2a1dc:
    dVar16 = dVar24;
    dVar15 = dVar25;
    dVar29 = dVar18;
    dVar28 = dVar19;
  }
  puVar13 = puVar4;
  func_0x00010bf529e0();
  if (-1 < (long)(puVar13 + -1)) {
    do {
      puVar5 = puVar4;
      func_0x00010c0dfd40(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc1080();
      dVar17 = dVar16;
      dVar25 = dVar15;
      dVar18 = dVar29;
      dVar19 = dVar28;
      _objc_release(puVar5);
      puVar5 = puVar4;
      func_0x00010bf529e0();
      if (puVar13 == puVar5) {
        dVar17 = dVar16;
        _CGRectGetMaxX(dVar16,dVar15,dVar29,dVar28);
        dVar25 = dVar16;
        _CGRectGetMaxY(dVar16,dVar15,dVar29,dVar28);
        func_0x00010bef98c0(dVar17,dVar25 - dVar30,puVar12);
        dVar17 = dVar16;
        _CGRectGetMaxX(dVar16,dVar15,dVar29,dVar28);
        dVar25 = dVar16;
        _CGRectGetMaxY(dVar16,dVar15,dVar29,dVar28);
        dVar18 = dVar16;
        _CGRectGetMaxX(dVar16,dVar15,dVar29,dVar28);
        dVar19 = dVar16;
        _CGRectGetMaxY(dVar16,dVar15,dVar29,dVar28);
        func_0x00010befac40(dVar17 - dVar30,dVar25,dVar18,dVar19,puVar12);
        dVar17 = dVar16;
        _CGRectGetMinX(dVar16,dVar15,dVar29,dVar28);
        dVar25 = dVar16;
        _CGRectGetMaxY(dVar16,dVar15,dVar29,dVar28);
        func_0x00010bef98c0(dVar30 + dVar17,dVar25,puVar12);
        dVar17 = dVar16;
        _CGRectGetMinX(dVar16,dVar15,dVar29,dVar28);
        dVar25 = dVar16;
        _CGRectGetMaxY(dVar16,dVar15,dVar29,dVar28);
        dVar18 = dVar16;
        _CGRectGetMinX(dVar16,dVar15,dVar29,dVar28);
        dVar19 = dVar16;
        _CGRectGetMaxY(dVar16,dVar15,dVar29,dVar28);
        dVar25 = dVar25 - dVar30;
        func_0x00010befac40(puVar12);
      }
      dVar24 = dVar17;
      if (-1 < (long)(puVar13 + -2)) {
        puVar5 = puVar4;
        func_0x00010c0dfd40(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc1080();
        _objc_release(puVar5);
        dVar20 = dVar16;
        _CGRectGetMinX(dVar16,dVar15,dVar29,dVar28);
        dVar21 = dVar17;
        _CGRectGetMinX(dVar17,dVar25,dVar18,dVar19);
        dVar24 = dVar17;
        if (0.0 <= dVar20 - dVar21) {
          if (dVar20 - dVar21 <= 0.0) {
            _CGRectGetMinX(dVar17,dVar25,dVar18,dVar19);
            _CGRectGetMaxY(dVar17,dVar25);
            dVar25 = dVar17 - dVar30;
            func_0x00010bef98c0(puVar12);
            goto LAB_108e2a6e0;
          }
          dVar20 = dVar16;
          _CGRectGetMinX(dVar16,dVar15,dVar29,dVar28);
          dVar21 = dVar17;
          _CGRectGetMaxY(dVar17,dVar25,dVar18,dVar19);
          func_0x00010bef98c0(dVar20,dVar30 + dVar21,puVar12);
          dVar20 = dVar16;
          _CGRectGetMinX(dVar16,dVar15,dVar29,dVar28);
          dVar21 = dVar17;
          _CGRectGetMaxY(dVar17,dVar25,dVar18,dVar19);
          _CGRectGetMinX(dVar16,dVar15,dVar29,dVar28);
          dVar15 = dVar17;
          _CGRectGetMaxY(dVar17,dVar25,dVar18,dVar19);
          func_0x00010befac40(dVar20 - dVar30,dVar21,dVar16,dVar15,puVar12);
          dVar16 = dVar17;
          _CGRectGetMinX(dVar17,dVar25,dVar18,dVar19);
          dVar15 = dVar17;
          _CGRectGetMaxY(dVar17,dVar25,dVar18,dVar19);
          func_0x00010bef98c0(dVar30 + dVar16,dVar15,puVar12);
          _CGRectGetMinX(dVar17,dVar25,dVar18,dVar19);
          dVar20 = dVar17;
          _CGRectGetMaxY(dVar17,dVar25,dVar18,dVar19);
          dVar16 = dVar17;
          _CGRectGetMinX(dVar17,dVar25,dVar18,dVar19);
          _CGRectGetMaxY(dVar17,dVar25,dVar18,dVar19);
          dVar19 = dVar17;
          dVar18 = dVar16;
        }
        else {
          dVar20 = dVar16;
          _CGRectGetMinX(dVar16,dVar15,dVar29,dVar28);
          dVar21 = dVar16;
          _CGRectGetMinY(dVar16,dVar15,dVar29,dVar28);
          func_0x00010bef98c0(dVar20,dVar30 + dVar21,puVar12);
          dVar20 = dVar16;
          _CGRectGetMinX(dVar16,dVar15,dVar29,dVar28);
          dVar21 = dVar16;
          _CGRectGetMinY(dVar16,dVar15,dVar29,dVar28);
          dVar22 = dVar16;
          _CGRectGetMinX(dVar16,dVar15,dVar29,dVar28);
          dVar23 = dVar16;
          _CGRectGetMinY(dVar16,dVar15,dVar29,dVar28);
          func_0x00010befac40(dVar30 + dVar20,dVar21,dVar22,dVar23,puVar12);
          dVar20 = dVar17;
          _CGRectGetMinX(dVar17,dVar25,dVar18,dVar19);
          dVar21 = dVar16;
          _CGRectGetMinY(dVar16,dVar15,dVar29,dVar28);
          func_0x00010bef98c0(dVar20 - dVar30,dVar21,puVar12);
          _CGRectGetMinX(dVar17,dVar25,dVar18,dVar19);
          dVar20 = dVar16;
          _CGRectGetMinY(dVar16,dVar15,dVar29,dVar28);
          _CGRectGetMinX(dVar17,dVar25,dVar18,dVar19);
          _CGRectGetMinY(dVar16,dVar15,dVar29,dVar28);
          dVar19 = dVar16;
          dVar18 = dVar17;
        }
        dVar25 = dVar20 - dVar30;
        func_0x00010befac40(puVar12);
      }
LAB_108e2a6e0:
      puVar13 = puVar13 + -1;
      dVar16 = dVar24;
      dVar15 = dVar25;
      dVar29 = dVar18;
      dVar28 = dVar19;
    } while (puVar13 != (undefined *)0x0);
  }
  func_0x00010bf3dc80(puVar12);
  puVar13 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  _objc_alloc_init(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  func_0x000107c308a4(dVar26,dVar27);
  func_0x00010c19f0e0(puVar13);
  _objc_retainAutorelease(puVar12);
  func_0x00010bdc1040();
  func_0x00010c1d9820(puVar13);
  func_0x00010bdc0fe0(*(undefined8 *)(puVar3 + _DAT_11277c110));
  func_0x00010c19bc00(puVar13);
  func_0x00010c08c0e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
  _objc_release(puVar3);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar4);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_270,8);
  __Block_object_dispose(&uStack_250,8);
  _objc_release(puVar2);
  return;
}



/* Entry: 108e29bf8; end: 108e2a83b; -[SCPreviewCaptionBackgroundView _applyBubbleWrapBackgroundStyleWithTextRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e29bf8(undefined8 param_1,double param_2,double param_3,double param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  dVar14 = param_3;
  dVar17 = param_4;
  _objc_opt_new();
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x2020000000;
  uStack_98 = 0;
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x2020000000;
  uStack_b8 = 0;
  _objc_retain();
  func_0x00010be202c0(param_5);
  dVar18 = *(double *)(param_5 + _DAT_11277c120);
  puVar5 = puVar1;
  func_0x00010bf51e00();
  puVar2 = param_5;
  dVar6 = dVar18;
  func_0x00010c22dc40();
  puVar3 = puVar5;
  if ((int)puVar2 != 0) {
    puVar3 = param_5;
    dVar6 = dVar18;
    func_0x00010befd880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  _objc_alloc_init(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  for (puVar5 = (undefined *)0x0; puVar4 = puVar3, func_0x00010bf529e0(), puVar5 < puVar4;
      puVar5 = puVar5 + 1) {
    puVar4 = puVar3;
    func_0x00010c0dfd40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1080();
    dVar7 = dVar6;
    dVar16 = param_2;
    dVar8 = dVar14;
    dVar9 = dVar17;
    _objc_release(puVar4);
    if (puVar5 == (undefined *)0x0) {
      dVar7 = dVar6;
      _CGRectGetMinX(dVar6,param_2,dVar14,dVar17);
      dVar16 = dVar6;
      _CGRectGetMinY(dVar6,param_2,dVar14,dVar17);
      func_0x00010c0d18c0(dVar7,dVar18 + dVar16,puVar2);
      dVar7 = dVar6;
      _CGRectGetMinX(dVar6,param_2,dVar14,dVar17);
      dVar16 = dVar6;
      _CGRectGetMinY(dVar6,param_2,dVar14,dVar17);
      func_0x00010befac40(dVar18 + dVar7,dVar16,dVar6,param_2,puVar2);
      dVar7 = dVar6;
      _CGRectGetMaxX(dVar6,param_2,dVar14,dVar17);
      dVar16 = dVar6;
      _CGRectGetMinY(dVar6,param_2,dVar14,dVar17);
      func_0x00010bef98c0(dVar7 - dVar18,dVar16,puVar2);
      dVar7 = dVar6;
      _CGRectGetMaxX(dVar6,param_2,dVar14,dVar17);
      dVar16 = dVar6;
      _CGRectGetMinY(dVar6,param_2,dVar14,dVar17);
      dVar8 = dVar6;
      _CGRectGetMaxX(dVar6,param_2,dVar14,dVar17);
      dVar9 = dVar6;
      _CGRectGetMinY(dVar6,param_2,dVar14,dVar17);
      dVar16 = dVar18 + dVar16;
      func_0x00010befac40(puVar2);
    }
    puVar4 = puVar3;
    func_0x00010bf529e0();
    dVar15 = dVar7;
    if (puVar5 + 1 < puVar4) {
      puVar4 = puVar3;
      func_0x00010c0dfd40(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc1080();
      _objc_release(puVar4);
      dVar10 = dVar6;
      _CGRectGetMaxX(dVar6,param_2,dVar14,dVar17);
      dVar11 = dVar7;
      _CGRectGetMaxX(dVar7,dVar16,dVar8,dVar9);
      dVar15 = dVar7;
      if (dVar10 - dVar11 <= 0.0) {
        if (0.0 <= dVar10 - dVar11) {
          _CGRectGetMaxX(dVar7,dVar16,dVar8,dVar9);
          _CGRectGetMinY(dVar7,dVar16);
          dVar16 = dVar18 + dVar7;
          func_0x00010bef98c0(puVar2);
          goto LAB_108e2a1dc;
        }
        dVar10 = dVar6;
        _CGRectGetMaxX(dVar6,param_2,dVar14,dVar17);
        dVar11 = dVar7;
        _CGRectGetMinY(dVar7,dVar16,dVar8,dVar9);
        func_0x00010bef98c0(dVar10,dVar11 - dVar18,puVar2);
        dVar10 = dVar6;
        _CGRectGetMaxX(dVar6,param_2,dVar14,dVar17);
        dVar11 = dVar7;
        _CGRectGetMinY(dVar7,dVar16,dVar8,dVar9);
        _CGRectGetMaxX(dVar6,param_2,dVar14,dVar17);
        dVar14 = dVar7;
        _CGRectGetMinY(dVar7,dVar16,dVar8,dVar9);
        func_0x00010befac40(dVar18 + dVar10,dVar11,dVar6,dVar14,puVar2);
        dVar6 = dVar7;
        _CGRectGetMaxX(dVar7,dVar16,dVar8,dVar9);
        dVar14 = dVar7;
        _CGRectGetMinY(dVar7,dVar16,dVar8,dVar9);
        func_0x00010bef98c0(dVar6 - dVar18,dVar14,puVar2);
        _CGRectGetMaxX(dVar7,dVar16,dVar8,dVar9);
        dVar10 = dVar7;
        _CGRectGetMinY(dVar7,dVar16,dVar8,dVar9);
        dVar6 = dVar7;
        _CGRectGetMaxX(dVar7,dVar16,dVar8,dVar9);
        _CGRectGetMinY(dVar7,dVar16,dVar8,dVar9);
        dVar9 = dVar7;
        dVar8 = dVar6;
      }
      else {
        dVar10 = dVar6;
        _CGRectGetMaxX(dVar6,param_2,dVar14,dVar17);
        dVar11 = dVar6;
        _CGRectGetMaxY(dVar6,param_2,dVar14,dVar17);
        func_0x00010bef98c0(dVar10,dVar11 - dVar18,puVar2);
        dVar10 = dVar6;
        _CGRectGetMaxX(dVar6,param_2,dVar14,dVar17);
        dVar11 = dVar6;
        _CGRectGetMaxY(dVar6,param_2,dVar14,dVar17);
        dVar12 = dVar6;
        _CGRectGetMaxX(dVar6,param_2,dVar14,dVar17);
        dVar13 = dVar6;
        _CGRectGetMaxY(dVar6,param_2,dVar14,dVar17);
        func_0x00010befac40(dVar10 - dVar18,dVar11,dVar12,dVar13,puVar2);
        dVar10 = dVar7;
        _CGRectGetMaxX(dVar7,dVar16,dVar8,dVar9);
        dVar11 = dVar6;
        _CGRectGetMaxY(dVar6,param_2,dVar14,dVar17);
        func_0x00010bef98c0(dVar18 + dVar10,dVar11,puVar2);
        _CGRectGetMaxX(dVar7,dVar16,dVar8,dVar9);
        dVar10 = dVar6;
        _CGRectGetMaxY(dVar6,param_2,dVar14,dVar17);
        _CGRectGetMaxX(dVar7,dVar16,dVar8,dVar9);
        _CGRectGetMaxY(dVar6,param_2,dVar14,dVar17);
        dVar9 = dVar6;
        dVar8 = dVar7;
      }
      dVar16 = dVar18 + dVar10;
      func_0x00010befac40(puVar2);
    }
LAB_108e2a1dc:
    dVar6 = dVar15;
    param_2 = dVar16;
    dVar14 = dVar8;
    dVar17 = dVar9;
  }
  puVar5 = puVar3;
  func_0x00010bf529e0();
  if (-1 < (long)(puVar5 + -1)) {
    do {
      puVar4 = puVar3;
      func_0x00010c0dfd40(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc1080();
      dVar7 = dVar6;
      dVar16 = param_2;
      dVar8 = dVar14;
      dVar9 = dVar17;
      _objc_release(puVar4);
      puVar4 = puVar3;
      func_0x00010bf529e0();
      if (puVar5 == puVar4) {
        dVar7 = dVar6;
        _CGRectGetMaxX(dVar6,param_2,dVar14,dVar17);
        dVar16 = dVar6;
        _CGRectGetMaxY(dVar6,param_2,dVar14,dVar17);
        func_0x00010bef98c0(dVar7,dVar16 - dVar18,puVar2);
        dVar7 = dVar6;
        _CGRectGetMaxX(dVar6,param_2,dVar14,dVar17);
        dVar16 = dVar6;
        _CGRectGetMaxY(dVar6,param_2,dVar14,dVar17);
        dVar8 = dVar6;
        _CGRectGetMaxX(dVar6,param_2,dVar14,dVar17);
        dVar9 = dVar6;
        _CGRectGetMaxY(dVar6,param_2,dVar14,dVar17);
        func_0x00010befac40(dVar7 - dVar18,dVar16,dVar8,dVar9,puVar2);
        dVar7 = dVar6;
        _CGRectGetMinX(dVar6,param_2,dVar14,dVar17);
        dVar16 = dVar6;
        _CGRectGetMaxY(dVar6,param_2,dVar14,dVar17);
        func_0x00010bef98c0(dVar18 + dVar7,dVar16,puVar2);
        dVar7 = dVar6;
        _CGRectGetMinX(dVar6,param_2,dVar14,dVar17);
        dVar16 = dVar6;
        _CGRectGetMaxY(dVar6,param_2,dVar14,dVar17);
        dVar8 = dVar6;
        _CGRectGetMinX(dVar6,param_2,dVar14,dVar17);
        dVar9 = dVar6;
        _CGRectGetMaxY(dVar6,param_2,dVar14,dVar17);
        dVar16 = dVar16 - dVar18;
        func_0x00010befac40(puVar2);
      }
      dVar15 = dVar7;
      if (-1 < (long)(puVar5 + -2)) {
        puVar4 = puVar3;
        func_0x00010c0dfd40(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc1080();
        _objc_release(puVar4);
        dVar10 = dVar6;
        _CGRectGetMinX(dVar6,param_2,dVar14,dVar17);
        dVar11 = dVar7;
        _CGRectGetMinX(dVar7,dVar16,dVar8,dVar9);
        dVar15 = dVar7;
        if (0.0 <= dVar10 - dVar11) {
          if (dVar10 - dVar11 <= 0.0) {
            _CGRectGetMinX(dVar7,dVar16,dVar8,dVar9);
            _CGRectGetMaxY(dVar7,dVar16);
            dVar16 = dVar7 - dVar18;
            func_0x00010bef98c0(puVar2);
            goto LAB_108e2a6e0;
          }
          dVar10 = dVar6;
          _CGRectGetMinX(dVar6,param_2,dVar14,dVar17);
          dVar11 = dVar7;
          _CGRectGetMaxY(dVar7,dVar16,dVar8,dVar9);
          func_0x00010bef98c0(dVar10,dVar18 + dVar11,puVar2);
          dVar10 = dVar6;
          _CGRectGetMinX(dVar6,param_2,dVar14,dVar17);
          dVar11 = dVar7;
          _CGRectGetMaxY(dVar7,dVar16,dVar8,dVar9);
          _CGRectGetMinX(dVar6,param_2,dVar14,dVar17);
          dVar14 = dVar7;
          _CGRectGetMaxY(dVar7,dVar16,dVar8,dVar9);
          func_0x00010befac40(dVar10 - dVar18,dVar11,dVar6,dVar14,puVar2);
          dVar6 = dVar7;
          _CGRectGetMinX(dVar7,dVar16,dVar8,dVar9);
          dVar14 = dVar7;
          _CGRectGetMaxY(dVar7,dVar16,dVar8,dVar9);
          func_0x00010bef98c0(dVar18 + dVar6,dVar14,puVar2);
          _CGRectGetMinX(dVar7,dVar16,dVar8,dVar9);
          dVar10 = dVar7;
          _CGRectGetMaxY(dVar7,dVar16,dVar8,dVar9);
          dVar6 = dVar7;
          _CGRectGetMinX(dVar7,dVar16,dVar8,dVar9);
          _CGRectGetMaxY(dVar7,dVar16,dVar8,dVar9);
          dVar9 = dVar7;
          dVar8 = dVar6;
        }
        else {
          dVar10 = dVar6;
          _CGRectGetMinX(dVar6,param_2,dVar14,dVar17);
          dVar11 = dVar6;
          _CGRectGetMinY(dVar6,param_2,dVar14,dVar17);
          func_0x00010bef98c0(dVar10,dVar18 + dVar11,puVar2);
          dVar10 = dVar6;
          _CGRectGetMinX(dVar6,param_2,dVar14,dVar17);
          dVar11 = dVar6;
          _CGRectGetMinY(dVar6,param_2,dVar14,dVar17);
          dVar12 = dVar6;
          _CGRectGetMinX(dVar6,param_2,dVar14,dVar17);
          dVar13 = dVar6;
          _CGRectGetMinY(dVar6,param_2,dVar14,dVar17);
          func_0x00010befac40(dVar18 + dVar10,dVar11,dVar12,dVar13,puVar2);
          dVar10 = dVar7;
          _CGRectGetMinX(dVar7,dVar16,dVar8,dVar9);
          dVar11 = dVar6;
          _CGRectGetMinY(dVar6,param_2,dVar14,dVar17);
          func_0x00010bef98c0(dVar10 - dVar18,dVar11,puVar2);
          _CGRectGetMinX(dVar7,dVar16,dVar8,dVar9);
          dVar10 = dVar6;
          _CGRectGetMinY(dVar6,param_2,dVar14,dVar17);
          _CGRectGetMinX(dVar7,dVar16,dVar8,dVar9);
          _CGRectGetMinY(dVar6,param_2,dVar14,dVar17);
          dVar9 = dVar6;
          dVar8 = dVar7;
        }
        dVar16 = dVar10 - dVar18;
        func_0x00010befac40(puVar2);
      }
LAB_108e2a6e0:
      puVar5 = puVar5 + -1;
      dVar6 = dVar15;
      param_2 = dVar16;
      dVar14 = dVar8;
      dVar17 = dVar9;
    } while (puVar5 != (undefined *)0x0);
  }
  func_0x00010bf3dc80(puVar2);
  puVar5 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  _objc_alloc_init(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  func_0x000107c308a4(param_3,param_4);
  func_0x00010c19f0e0(puVar5);
  _objc_retainAutorelease(puVar2);
  func_0x00010bdc1040();
  func_0x00010c1d9820(puVar5);
  func_0x00010bdc0fe0(*(undefined8 *)(param_5 + _DAT_11277c110));
  func_0x00010c19bc00(puVar5);
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
  _objc_release(param_5);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_d0,8);
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(puVar1);
  return;
}



/* Entry: 108e2a83c; end: 108e2a9a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e2a83c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  
  lVar3 = *(long *)(param_5 + 0x20);
  lVar4 = (long)_DAT_11277c10c;
  _objc_retain(param_7);
  _objc_retain(param_6);
  lVar3 = lVar3 + lVar4;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bfb1b20();
  _objc_release(param_6);
  _objc_release(lVar3);
  func_0x00010bdc9520(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + 0x20));
  _objc_release(param_7);
  uVar2 = *(undefined8 *)(param_5 + 0x28);
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2971a0(param_1,param_2,param_3,param_4,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2);
  _objc_release(puVar1);
  dVar5 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  lVar3 = *(long *)(*(long *)(param_5 + 0x30) + 8);
  if (*(double *)(lVar3 + 0x18) < param_1) {
    *(double *)(lVar3 + 0x18) = dVar5;
    lVar3 = *(long *)(param_5 + 0x28);
    func_0x00010bf529e0();
    *(long *)(*(long *)(*(long *)(param_5 + 0x38) + 8) + 0x18) = lVar3 + -1;
  }
  return;
}



/* Entry: 108e2a9a8; end: 108e2ab67; -[SCPreviewCaptionBackgroundView shouldAdjustBubbleWrapLineRects:cornerRadius:] */

undefined8
FUN_108e2a9a8(double param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,ulong param_7)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  _objc_retain(param_7);
  uVar3 = param_7;
  func_0x00010c0d3c80();
  uVar4 = param_7;
  func_0x00010bf529e0();
  if (uVar4 != 0) {
    param_1 = param_1 + param_1;
    uVar4 = 0;
    dVar9 = param_1;
    do {
      uVar1 = uVar4 + 1;
      uVar5 = uVar3;
      func_0x00010bf529e0();
      if (uVar5 <= uVar1) break;
      uVar5 = uVar3;
      func_0x00010c0dfd40(uVar3,param_6,uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc1080();
      dVar7 = dVar9;
      dVar10 = param_2;
      dVar11 = param_3;
      uVar6 = param_4;
      _objc_release(uVar5);
      uVar4 = uVar3;
      func_0x00010c0dfd40(uVar3,param_6,uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc1080();
      _objc_release(uVar4);
      dVar12 = dVar9;
      _CGRectGetMinX(dVar9,param_2,param_3,param_4);
      dVar8 = dVar7;
      _CGRectGetMinX(dVar7,dVar10,dVar11,uVar6);
      dVar12 = dVar12 - dVar8;
      _CGRectGetMaxX(dVar9,param_2,param_3,param_4);
      _CGRectGetMaxX();
      dVar9 = dVar9 - dVar7;
      if ((dVar12 != 0.0) || (param_3 = dVar11, dVar9 != 0.0)) {
        bVar2 = false;
        if ((dVar12 != 0.0) && (bVar2 = false, !NAN(ABS(dVar12)) && !NAN(param_1))) {
          bVar2 = ABS(dVar12) < param_1;
        }
        if (!bVar2) {
          dVar10 = ABS(dVar9);
          bVar2 = false;
          if ((dVar9 != 0.0) && (bVar2 = false, !NAN(dVar10) && !NAN(param_1))) {
            bVar2 = dVar10 < param_1;
          }
          param_3 = param_1;
          if (!bVar2) goto LAB_108e2ab10;
        }
        uVar6 = 1;
        goto LAB_108e2ab30;
      }
LAB_108e2ab10:
      uVar5 = param_7;
      func_0x00010bf529e0();
      uVar4 = uVar1;
      param_2 = dVar10;
      param_4 = uVar6;
    } while (uVar1 < uVar5);
  }
  uVar6 = 0;
LAB_108e2ab30:
  _objc_release(uVar3);
  _objc_release(param_7);
  return uVar6;
}



/* Entry: 108e2ab68; end: 108e2ae6f; -[SCPreviewCaptionBackgroundView adjustBubbleWrapLineRects:cornerRadius:] */

void FUN_108e2ab68(double param_1,double param_2,double param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6,ulong param_7)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dStack_b0;
  
  _objc_retain(param_7);
  uVar3 = param_7;
  func_0x00010c0d3c80(param_7);
  uVar4 = param_7;
  func_0x00010bf529e0();
  if (uVar4 != 0) {
    dVar7 = param_1 + param_1;
    uVar4 = 0;
    dStack_b0 = dVar7;
    do {
      uVar1 = uVar4 + 1;
      uVar5 = param_7;
      func_0x00010bf529e0();
      if (uVar5 <= uVar1) break;
      uVar5 = uVar3;
      func_0x00010c0dfd40(uVar3,param_6,uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc1080();
      dVar8 = dStack_b0;
      dVar12 = param_2;
      dVar14 = param_3;
      uVar16 = param_4;
      _objc_release(uVar5);
      uVar5 = uVar3;
      func_0x00010c0dfd40(uVar3,param_6,uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc1080();
      _objc_release(uVar5);
      dVar9 = dStack_b0;
      _CGRectGetMinX(dStack_b0,param_2,param_3,param_4);
      dVar10 = dVar8;
      _CGRectGetMinX(dVar8,dVar12,dVar14,uVar16);
      dVar21 = dVar9 - dVar10;
      dVar20 = dStack_b0;
      _CGRectGetMaxX(dStack_b0,param_2,param_3,param_4);
      dVar11 = dVar8;
      dVar13 = dVar12;
      dVar15 = dVar14;
      uVar17 = uVar16;
      _CGRectGetMaxX();
      dVar20 = dVar20 - dVar11;
      if ((dVar21 != 0.0) || (dVar20 != 0.0)) {
        dVar11 = ABS(dVar20);
        bVar2 = dVar11 < dVar7;
        dVar13 = dVar7;
        if ((dVar21 != 0.0 && ABS(dVar21) < dVar7) || (dVar20 != 0.0 && bVar2)) {
          dVar19 = param_3;
          if (dVar21 != 0.0 && ABS(dVar21) < dVar7) {
            dVar18 = dVar14 - dVar21;
            dVar19 = param_3 + dVar21;
            uVar5 = uVar4;
            uVar17 = param_4;
            dVar15 = dVar19;
            dVar13 = param_2;
            dVar11 = dVar10;
            if (dVar21 <= 0.0) {
              dVar19 = param_3;
              dVar10 = dStack_b0;
              dVar14 = dVar18;
              dVar8 = dVar9;
              uVar5 = uVar4 + 1;
              uVar17 = uVar16;
              dVar15 = dVar18;
              dVar13 = dVar12;
              dVar11 = dVar9;
            }
            dStack_b0 = dVar10;
            puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
            func_0x00010c2971a0(PTR__OBJC_CLASS___NSValue_1126afdf8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d04c0(uVar3,param_6,puVar6,uVar5);
            _objc_release(puVar6);
          }
          if (dVar20 != 0.0 && bVar2) {
            uVar17 = param_4;
            dVar15 = dVar19 - dVar20;
            dVar13 = param_2;
            dVar11 = dStack_b0;
            if (0.0 < dVar20) {
              uVar4 = uVar4 + 1;
              uVar17 = uVar16;
              dVar15 = dVar20 + dVar14;
              dVar13 = dVar12;
              dVar11 = dVar8;
            }
            puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
            func_0x00010c2971a0(PTR__OBJC_CLASS___NSValue_1126afdf8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d04c0(uVar3,param_6,puVar6,uVar4);
            _objc_release(puVar6);
          }
        }
      }
      uVar5 = param_7;
      func_0x00010bf529e0();
      uVar4 = uVar1;
      dStack_b0 = dVar11;
      param_2 = dVar13;
      param_3 = dVar15;
      param_4 = uVar17;
    } while (uVar1 < uVar5);
  }
  uVar4 = param_5;
  func_0x00010c22dc40(param_1,param_5,param_6,uVar3);
  if ((uVar4 & 1) == 0) {
    param_5 = uVar3;
    func_0x00010bf51e00(uVar3);
  }
  else {
    func_0x00010befd880(param_1,param_5,param_6,uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar3);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 108e2ae70; end: 108e2b03b; -[SCPreviewCaptionBackgroundView _removeBackgroundAndBoxShadowLayers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e2ae70(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined **param_5,undefined ***param_6)

{
  bool bVar1;
  undefined ***pppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined ***pppuVar9;
  undefined1 *puVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  undefined ***pppuVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined ***pppuVar16;
  long lVar17;
  undefined ***pppuVar18;
  undefined8 uVar19;
  undefined ***pppuVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined *puStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined *puStack_340;
  undefined ***pppuStack_338;
  undefined8 uStack_330;
  undefined1 auStack_328 [8];
  undefined ***pppuStack_320;
  undefined ***pppuStack_318;
  undefined ***pppuStack_310;
  undefined1 *puStack_308;
  undefined1 **ppuStack_300;
  code *pcStack_2f8;
  long lStack_2e8;
  undefined1 *puStack_2e0;
  undefined ***pppuStack_2d8;
  undefined ***pppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined8 uStack_2c0;
  code *pcStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined1 auStack_2a0 [8];
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  long lStack_270;
  undefined1 *puStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_48;
  
  puVar14 = &uStack_1d0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  plStack_180 = (long *)0x0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  pppuVar16 = (undefined ***)param_5;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  pppuVar2 = pppuVar16;
  func_0x00010bf51e00();
  _objc_release(pppuVar16);
  pppuVar16 = pppuVar2;
  func_0x00010bf52a60();
  if (pppuVar16 != (undefined ***)0x0) {
    lVar17 = *plStack_180;
    do {
      pppuVar20 = (undefined ***)0x0;
      do {
        if (*plStack_180 != lVar17) {
          _objc_enumerationMutation(pppuVar2);
        }
        func_0x00010c12c960(*(undefined8 *)(lStack_188 + (long)pppuVar20 * 8));
        pppuVar20 = (undefined ***)((long)pppuVar20 + 1);
      } while (pppuVar16 != pppuVar20);
      pppuVar16 = pppuVar2;
      func_0x00010bf52a60();
    } while (pppuVar16 != (undefined ***)0x0);
  }
  _objc_release(pppuVar2);
  uVar15 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  lStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  puStack_1c0 = (undefined8 *)0x0;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  pppuVar16 = (undefined ***)param_5;
  func_0x00010c25ec40();
  _objc_retainAutoreleasedReturnValue();
  pppuVar2 = pppuVar16;
  func_0x00010bf51e00();
  _objc_release(pppuVar16);
  _objc_release(param_5);
  pppuVar20 = pppuVar2;
  func_0x00010bf52a60();
  if (pppuVar20 != (undefined ***)0x0) {
    pppuVar16 = (undefined ***)*puStack_1c0;
    do {
      pppuVar18 = (undefined ***)0x0;
      do {
        if ((undefined ***)*puStack_1c0 != pppuVar16) {
          _objc_enumerationMutation(pppuVar2);
        }
        func_0x00010c12c940(*(undefined8 *)(lStack_1c8 + (long)pppuVar18 * 8));
        pppuVar18 = (undefined ***)((long)pppuVar18 + 1);
      } while (pppuVar20 != pppuVar18);
      pppuVar20 = pppuVar2;
      puVar14 = &uStack_1d0;
      func_0x00010bf52a60();
      param_5 = (undefined **)0x0;
    } while (pppuVar20 != (undefined ***)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1d8 = FUN_108e2b03c;
  lStack_270 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1e0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar14);
  bVar1 = true;
  if ((!NAN(param_3)) && (bVar1 = true, !NAN(param_4))) {
    bVar1 = false;
  }
  if (bVar1) goto LAB_108e2b864;
  pppuVar16 = (undefined ***)(long)_DAT_11277c10c;
  pppuVar20 = (undefined ***)((long)pppuVar2 + (long)pppuVar16);
  puStack_2e0 = (undefined1 *)puVar14;
  _objc_loadWeakRetained();
  pppuVar18 = pppuVar20;
  func_0x00010bf07f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppuVar20);
  lStack_2e8 = (long)_DAT_11277c110;
  uVar19 = *(undefined8 *)((long)pppuVar2 + lStack_2e8);
  pppuStack_2d0 = pppuVar2;
  func_0x00010c06ebe0(pppuVar18);
  pppuStack_2d8 = pppuVar18;
  func_0x00010bf15ec0(pppuVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126dc008;
  _objc_retain(uVar19);
  _objc_alloc(puVar3);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_278 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_298 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0630;
  ppuStack_290 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0630;
  ppuStack_288 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0630;
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf41080();
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_280 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  dVar21 = 0.0;
  func_0x00010bfffc80(0,puVar3);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  pppuVar20 = (undefined ***)PTR_PTR_1126c4438;
  func_0x00010bfc3d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar19);
  pppuVar2 = pppuVar20;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppuVar20);
  _objc_release(puVar3);
  _objc_release(pppuVar18);
  puVar7 = (undefined *)((long)pppuStack_2d0 + (long)pppuVar16);
  _objc_loadWeakRetained(puVar7);
  func_0x00010c216160();
  _objc_release(puVar7);
  pppuVar20 = pppuStack_2d8;
  func_0x00010c25e080();
  _objc_retainAutoreleasedReturnValue();
  pppuVar18 = pppuVar20;
  func_0x00010c071ae0();
  if ((int)pppuVar18 == 0) {
    pppuVar18 = pppuStack_2d8;
    func_0x00010c25e080();
    _objc_retainAutoreleasedReturnValue();
    pppuVar9 = pppuVar18;
    func_0x00010c071ae0();
    _objc_release(pppuVar18);
    _objc_release(pppuVar20);
    if ((int)pppuVar9 != 0) goto LAB_108e2b300;
  }
  else {
    _objc_release(pppuVar20);
LAB_108e2b300:
    puVar7 = (undefined *)((long)pppuStack_2d0 + (long)pppuVar16);
    _objc_loadWeakRetained(puVar7);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(puVar7);
    _objc_release(puVar3);
    _objc_release(puVar7);
  }
  pppuVar20 = (undefined ***)((long)pppuStack_2d0 + (long)pppuVar16);
  _objc_loadWeakRetained();
  param_5 = (undefined **)pppuVar20;
  func_0x00010bf07f80();
  _objc_retainAutoreleasedReturnValue();
  pppuVar18 = (undefined ***)param_5;
  func_0x00010c25e260();
  _objc_release(param_5);
  _objc_release(pppuVar20);
  if (pppuVar18 == (undefined ***)0x7) {
    func_0x00010bdcdbe0(uVar15,param_2,param_3,param_4,pppuStack_2d0);
  }
  else {
    pppuVar20 = pppuStack_2d8;
    func_0x00010c25e080();
    _objc_retainAutoreleasedReturnValue();
    param_5 = (undefined **)pppuVar20;
    func_0x00010c071ae0();
    _objc_release(pppuVar20);
    if ((int)param_5 == 0) {
      pppuVar20 = pppuStack_2d8;
      func_0x00010c25e080();
      _objc_retainAutoreleasedReturnValue();
      param_5 = (undefined **)pppuVar20;
      func_0x00010c071ae0();
      _objc_release(pppuVar20);
      if ((int)param_5 == 0) {
        pppuVar20 = pppuStack_2d8;
        func_0x00010c25e080();
        _objc_retainAutoreleasedReturnValue();
        param_5 = (undefined **)pppuVar20;
        func_0x00010c071ae0();
        _objc_release(pppuVar20);
        if ((int)param_5 == 0) {
          puVar10 = puStack_2e0;
          func_0x00010c08fa60();
          if (puVar10 == (undefined1 *)0x0) {
            pppuVar20 = pppuStack_2d8;
            func_0x00010bf144e0();
            _objc_retainAutoreleasedReturnValue();
            pppuVar18 = pppuVar20;
            func_0x00010bf20d60();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(pppuVar20);
            puVar7 = (undefined *)((long)pppuStack_2d0 + (long)pppuVar16);
            _objc_loadWeakRetained(puVar7);
            func_0x00010c14e120();
            _objc_release(puVar7);
            dVar23 = *(double *)((long)pppuStack_2d0 + (long)_DAT_11277c120);
            uVar19 = *(undefined8 *)((long)pppuStack_2d0 + lStack_2e8);
            _objc_retain(uVar19);
            pppuVar20 = pppuVar18;
            func_0x00010bf40c40();
            _objc_retainAutoreleasedReturnValue();
            pppuVar9 = pppuVar20;
            func_0x00010bf416c0();
            _objc_retainAutoreleasedReturnValue();
            pppuVar11 = pppuVar9;
            func_0x00010bf529e0();
            if (pppuVar11 == (undefined ***)0x0) {
              pppuVar11 = (undefined ***)PTR__OBJC_CLASS___UIColor_1126aea70;
              func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              pppuVar12 = pppuVar18;
              func_0x00010bf40c40(pppuVar18);
              _objc_retainAutoreleasedReturnValue();
              pppuVar13 = pppuVar12;
              func_0x00010bf416c0();
              _objc_retainAutoreleasedReturnValue();
              pppuVar11 = pppuVar13;
              func_0x00010bfb1920();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(pppuVar13);
              _objc_release(pppuVar12);
            }
            _objc_release(pppuVar9);
            _objc_release(pppuVar20);
            param_5 = &PTR_PTR_1126b1000;
            puVar7 = PTR__OBJC_CLASS___CALayer_1126b1750;
            _objc_alloc_init(PTR__OBJC_CLASS___CALayer_1126b1750);
            func_0x00010c19f0e0(uVar15,param_2,param_3,param_4);
            func_0x00010c200c80(puVar7);
            _objc_retainAutorelease(uVar19);
            func_0x00010bdc0fe0(uVar19);
            func_0x00010c16e440(puVar7);
            func_0x00010c1842e0(dVar23,puVar7);
            pppuVar20 = pppuStack_2d0;
            func_0x00010c08c0e0(pppuStack_2d0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befbb20();
            _objc_release(pppuVar20);
            puVar3 = PTR__OBJC_CLASS___CALayer_1126b1750;
            _objc_alloc_init(PTR__OBJC_CLASS___CALayer_1126b1750);
            func_0x00010c19f0e0(uVar15,param_2,param_3,param_4);
            _objc_retainAutorelease(uVar19);
            func_0x00010bdc0fe0(uVar19);
            _objc_release(uVar19);
            func_0x00010c16e440(puVar3);
            func_0x00010c200c80(puVar3);
            func_0x00010c1842e0(dVar23,puVar3);
            _objc_retainAutorelease(pppuVar11);
            func_0x00010bdc0fe0(pppuVar11);
            func_0x00010c1fe740(puVar3);
            func_0x00010c2bea40(pppuVar18);
            dVar22 = dVar23;
            func_0x00010c2bec60(pppuVar18);
            func_0x00010c1fe7a0(dVar21 * dVar23,dVar21 * dVar22,puVar3);
            dVar23 = 5.26354424712089e-315;
            func_0x00010c1fe800(0x3f800000,puVar3);
            func_0x00010c11ef60(pppuVar18);
            func_0x00010c1fe840(dVar21 * dVar23,puVar3);
            pppuVar20 = pppuStack_2d0;
            func_0x00010c08c0e0(pppuStack_2d0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c066f40();
            _objc_release(pppuVar20);
            _objc_release(puVar3);
            _objc_release(puVar7);
            _objc_release(pppuVar11);
            _objc_release(pppuVar18);
          }
          else {
            puVar7 = PTR__OBJC_CLASS___UIImageView_1126aec28;
            _objc_alloc_init();
            func_0x00010c19f0e0(uVar15,param_2,param_3,param_4);
            puVar3 = puVar7;
            func_0x00010c08c0e0(puVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c200c80();
            _objc_release(puVar3);
            func_0x00010c216160(puVar7);
            func_0x00010befbb60(pppuStack_2d0);
            if (*(long *)((long)pppuStack_2d0 + (long)_DAT_11277c118) == 0) {
              _objc_initWeak(&ppuStack_298);
              puVar3 = (undefined *)((long)pppuStack_2d0 + (long)_DAT_11277c114);
              _objc_loadWeakRetained(puVar3);
              ppuStack_2c8 = (undefined **)PTR___NSConcreteStackBlock_11034bd00;
              uStack_2c0 = 0xc2000000;
              pcStack_2b8 = FUN_108e2b8d8;
              puStack_2b0 = &UNK_110857ce0;
              param_5 = (undefined **)&ppuStack_2c8;
              param_6 = &ppuStack_298;
              _objc_copyWeak(auStack_2a0);
              _objc_retain(puVar7);
              puStack_2a8 = puVar7;
              func_0x00010bf30200(puVar3);
              _objc_release(puVar3);
              _objc_release(puStack_2a8);
              _objc_destroyWeak(auStack_2a0);
              _objc_destroyWeak(&ppuStack_298);
            }
            else {
              param_6 = pppuStack_2d0;
              func_0x00010bed3b40(pppuStack_2d0,pppuStack_2d0,puVar7);
            }
            _objc_release(puVar7);
          }
        }
        else {
          func_0x00010bdce220(uVar15,param_2,param_3,param_4,pppuStack_2d0);
        }
      }
      else {
        func_0x00010bdce7a0(uVar15,param_2,param_3,param_4,pppuStack_2d0);
      }
    }
    else {
      func_0x00010bdcdba0(uVar15,param_2,param_3,param_4,pppuStack_2d0);
    }
  }
  _objc_release(pppuVar2);
  _objc_release(pppuStack_2d8);
  puVar14 = (undefined8 *)puStack_2e0;
LAB_108e2b864:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_270) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(param_5 + 5);
  _objc_destroyWeak(&ppuStack_298);
  puVar10 = (undefined1 *)puVar14;
  __Unwind_Resume();
  pcStack_2f8 = FUN_108e2b8d8;
  pppuStack_320 = pppuVar2;
  pppuStack_318 = pppuVar16;
  pppuStack_310 = (undefined ***)param_5;
  puStack_308 = (undefined1 *)puVar14;
  ppuStack_300 = &puStack_1e0;
  _objc_retain(param_6);
  puStack_358 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_350 = 0xc2000000;
  uStack_348 = 0x108e2b998;
  puStack_340 = &UNK_110848218;
  _objc_retain(param_6);
  pppuStack_338 = param_6;
  _objc_copyWeak(auStack_328,puVar10 + 0x28);
  uVar15 = *(undefined8 *)(puVar10 + 0x20);
  _objc_retain(uVar15);
  uStack_330 = uVar15;
  func_0x000107c312d0("APPSTORE",&puStack_358);
  _objc_release(uStack_330);
  _objc_destroyWeak(auStack_328);
  _objc_release(pppuStack_338);
  _objc_release(param_6);
  return;
}



/* Entry: 108e2b03c; end: 108e2b8d7; -[SCPreviewCaptionBackgroundView _addBackgroundAndBoxShadowLayers:imageURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e2b03c(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined ***param_5,undefined ***param_6,long param_7)

{
  bool bVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined ***pppuVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **unaff_x20;
  long unaff_x21;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined ***pppuStack_168;
  undefined8 uStack_160;
  undefined1 auStack_158 [8];
  undefined ***pppuStack_150;
  long lStack_148;
  undefined **ppuStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  long lStack_118;
  long lStack_110;
  undefined **ppuStack_108;
  undefined ***pppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  bVar1 = true;
  if ((!NAN(param_3)) && (bVar1 = true, !NAN(param_4))) {
    bVar1 = false;
  }
  if (bVar1) goto LAB_108e2b864;
  unaff_x21 = (long)_DAT_11277c10c;
  ppuVar2 = (undefined **)((long)param_5 + unaff_x21);
  lStack_110 = param_7;
  _objc_loadWeakRetained();
  ppuVar3 = ppuVar2;
  func_0x00010bf07f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  lStack_118 = (long)_DAT_11277c110;
  uVar16 = *(undefined8 *)((long)param_5 + lStack_118);
  pppuStack_100 = param_5;
  func_0x00010c06ebe0(ppuVar3);
  ppuStack_108 = ppuVar3;
  func_0x00010bf15ec0(ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126dc008;
  _objc_retain(uVar16);
  _objc_alloc(puVar4);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_a8 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_c8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0630;
  ppuStack_c0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0630;
  ppuStack_b8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0630;
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf41080();
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_b0 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  dVar17 = 0.0;
  func_0x00010bfffc80(0,puVar4);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  pppuVar10 = (undefined ***)PTR_PTR_1126c4438;
  func_0x00010bfc3d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar16);
  param_5 = pppuVar10;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppuVar10);
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  puVar8 = (undefined *)((long)pppuStack_100 + unaff_x21);
  _objc_loadWeakRetained(puVar8);
  func_0x00010c216160();
  _objc_release(puVar8);
  ppuVar2 = ppuStack_108;
  func_0x00010c25e080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c071ae0();
  if ((int)ppuVar3 == 0) {
    ppuVar3 = ppuStack_108;
    func_0x00010c25e080();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar3;
    func_0x00010c071ae0();
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    if ((int)ppuVar11 != 0) goto LAB_108e2b300;
  }
  else {
    _objc_release(ppuVar2);
LAB_108e2b300:
    puVar8 = (undefined *)((long)pppuStack_100 + unaff_x21);
    _objc_loadWeakRetained(puVar8);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(puVar8);
    _objc_release(puVar4);
    _objc_release(puVar8);
  }
  ppuVar2 = (undefined **)((long)pppuStack_100 + unaff_x21);
  _objc_loadWeakRetained();
  unaff_x20 = ppuVar2;
  func_0x00010bf07f80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = unaff_x20;
  func_0x00010c25e260();
  _objc_release(unaff_x20);
  _objc_release(ppuVar2);
  if (ppuVar3 == (undefined **)0x7) {
    func_0x00010bdcdbe0(param_1,param_2,param_3,param_4,pppuStack_100);
  }
  else {
    ppuVar2 = ppuStack_108;
    func_0x00010c25e080();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = ppuVar2;
    func_0x00010c071ae0();
    _objc_release(ppuVar2);
    if ((int)unaff_x20 == 0) {
      ppuVar2 = ppuStack_108;
      func_0x00010c25e080();
      _objc_retainAutoreleasedReturnValue();
      unaff_x20 = ppuVar2;
      func_0x00010c071ae0();
      _objc_release(ppuVar2);
      if ((int)unaff_x20 == 0) {
        ppuVar2 = ppuStack_108;
        func_0x00010c25e080();
        _objc_retainAutoreleasedReturnValue();
        unaff_x20 = ppuVar2;
        func_0x00010c071ae0();
        _objc_release(ppuVar2);
        if ((int)unaff_x20 == 0) {
          lVar12 = lStack_110;
          func_0x00010c08fa60();
          if (lVar12 == 0) {
            ppuVar2 = ppuStack_108;
            func_0x00010bf144e0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar3 = ppuVar2;
            func_0x00010bf20d60();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar2);
            puVar8 = (undefined *)((long)pppuStack_100 + unaff_x21);
            _objc_loadWeakRetained(puVar8);
            func_0x00010c14e120();
            _objc_release(puVar8);
            dVar19 = *(double *)((long)pppuStack_100 + (long)_DAT_11277c120);
            uVar16 = *(undefined8 *)((long)pppuStack_100 + lStack_118);
            _objc_retain(uVar16);
            ppuVar2 = ppuVar3;
            func_0x00010bf40c40();
            _objc_retainAutoreleasedReturnValue();
            ppuVar11 = ppuVar2;
            func_0x00010bf416c0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar13 = ppuVar11;
            func_0x00010bf529e0();
            if (ppuVar13 == (undefined **)0x0) {
              ppuVar13 = (undefined **)PTR__OBJC_CLASS___UIColor_1126aea70;
              func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              ppuVar14 = ppuVar3;
              func_0x00010bf40c40(ppuVar3);
              _objc_retainAutoreleasedReturnValue();
              ppuVar15 = ppuVar14;
              func_0x00010bf416c0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar13 = ppuVar15;
              func_0x00010bfb1920();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar15);
              _objc_release(ppuVar14);
            }
            _objc_release(ppuVar11);
            _objc_release(ppuVar2);
            unaff_x20 = &PTR_PTR_1126b1000;
            puVar8 = PTR__OBJC_CLASS___CALayer_1126b1750;
            _objc_alloc_init(PTR__OBJC_CLASS___CALayer_1126b1750);
            func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
            func_0x00010c200c80(puVar8);
            _objc_retainAutorelease(uVar16);
            func_0x00010bdc0fe0(uVar16);
            func_0x00010c16e440(puVar8);
            func_0x00010c1842e0(dVar19,puVar8);
            pppuVar10 = pppuStack_100;
            func_0x00010c08c0e0(pppuStack_100);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befbb20();
            _objc_release(pppuVar10);
            puVar4 = PTR__OBJC_CLASS___CALayer_1126b1750;
            _objc_alloc_init(PTR__OBJC_CLASS___CALayer_1126b1750);
            func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
            _objc_retainAutorelease(uVar16);
            func_0x00010bdc0fe0(uVar16);
            _objc_release(uVar16);
            func_0x00010c16e440(puVar4);
            func_0x00010c200c80(puVar4);
            func_0x00010c1842e0(dVar19,puVar4);
            _objc_retainAutorelease(ppuVar13);
            func_0x00010bdc0fe0(ppuVar13);
            func_0x00010c1fe740(puVar4);
            func_0x00010c2bea40(ppuVar3);
            dVar18 = dVar19;
            func_0x00010c2bec60(ppuVar3);
            func_0x00010c1fe7a0(dVar17 * dVar19,dVar17 * dVar18,puVar4);
            dVar19 = 5.26354424712089e-315;
            func_0x00010c1fe800(0x3f800000,puVar4);
            func_0x00010c11ef60(ppuVar3);
            func_0x00010c1fe840(dVar17 * dVar19,puVar4);
            pppuVar10 = pppuStack_100;
            func_0x00010c08c0e0(pppuStack_100);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c066f40();
            _objc_release(pppuVar10);
            _objc_release(puVar4);
            _objc_release(puVar8);
            _objc_release(ppuVar13);
            _objc_release(ppuVar3);
          }
          else {
            puVar8 = PTR__OBJC_CLASS___UIImageView_1126aec28;
            _objc_alloc_init();
            func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
            puVar4 = puVar8;
            func_0x00010c08c0e0(puVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c200c80();
            _objc_release(puVar4);
            func_0x00010c216160(puVar8);
            func_0x00010befbb60(pppuStack_100);
            if (*(long *)((long)pppuStack_100 + (long)_DAT_11277c118) == 0) {
              _objc_initWeak(&ppuStack_c8);
              puVar4 = (undefined *)((long)pppuStack_100 + (long)_DAT_11277c114);
              _objc_loadWeakRetained(puVar4);
              puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_f0 = 0xc2000000;
              pcStack_e8 = FUN_108e2b8d8;
              puStack_e0 = &UNK_110857ce0;
              unaff_x20 = &puStack_f8;
              param_6 = &ppuStack_c8;
              _objc_copyWeak(auStack_d0);
              _objc_retain(puVar8);
              puStack_d8 = puVar8;
              func_0x00010bf30200(puVar4);
              _objc_release(puVar4);
              _objc_release(puStack_d8);
              _objc_destroyWeak(auStack_d0);
              _objc_destroyWeak(&ppuStack_c8);
            }
            else {
              param_6 = pppuStack_100;
              func_0x00010bed3b40(pppuStack_100,pppuStack_100,puVar8);
            }
            _objc_release(puVar8);
          }
        }
        else {
          func_0x00010bdce220(param_1,param_2,param_3,param_4,pppuStack_100);
        }
      }
      else {
        func_0x00010bdce7a0(param_1,param_2,param_3,param_4,pppuStack_100);
      }
    }
    else {
      func_0x00010bdcdba0(param_1,param_2,param_3,param_4,pppuStack_100);
    }
  }
  _objc_release(param_5);
  _objc_release(ppuStack_108);
  param_7 = lStack_110;
LAB_108e2b864:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x20 + 5);
  _objc_destroyWeak(&ppuStack_c8);
  lVar12 = param_7;
  __Unwind_Resume();
  pcStack_128 = FUN_108e2b8d8;
  pppuStack_150 = param_5;
  lStack_148 = unaff_x21;
  ppuStack_140 = unaff_x20;
  lStack_138 = param_7;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(param_6);
  puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_180 = 0xc2000000;
  uStack_178 = 0x108e2b998;
  puStack_170 = &UNK_110848218;
  _objc_retain(param_6);
  pppuStack_168 = param_6;
  _objc_copyWeak(auStack_158,lVar12 + 0x28);
  uVar16 = *(undefined8 *)(lVar12 + 0x20);
  _objc_retain(uVar16);
  uStack_160 = uVar16;
  func_0x000107c312d0("APPSTORE",&puStack_188);
  _objc_release(uStack_160);
  _objc_destroyWeak(auStack_158);
  _objc_release(pppuStack_168);
  _objc_release(param_6);
  return;
}



/* Entry: 108e2b8d8; end: 108e2b9fb;  */

void FUN_108e2b8d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x108e2b998;
  puStack_50 = &UNK_110848218;
  _objc_retain(param_2);
  uStack_48 = param_2;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x000107c312d0("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 108e2b9fc; end: 108e2ba93; -[SCPreviewCaptionBackgroundView _updateBackgroundImageView:image:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e2b9fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = (long)_DAT_11277c118;
  lVar1 = *(long *)(param_1 + lVar3);
  if (lVar1 == 0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar1 = *(long *)(param_1 + lVar3);
  }
  func_0x00010bfe9720(lVar1,param_2,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(param_3,param_2,lVar1);
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e2ba94; end: 108e2bbc7; -[SCPreviewCaptionBackgroundView _getWordBackgroundRects:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e2ba94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uStack_48 = 0;
  puVar2 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
  func_0x00010c127e80(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8,param_2,
                      &PTR____CFConstantStringClassReference_110efb558,0,&uStack_48);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uStack_48;
  _objc_retain(uStack_48);
  lVar3 = param_1 + _DAT_11277c10c;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010bf193c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_108e2bbc8;
  puStack_70 = &UNK_110ac68b0;
  lStack_68 = param_1;
  lStack_60 = lVar4;
  puStack_58 = puVar2;
  uStack_50 = param_3;
  _objc_retain(param_3);
  _objc_retain(puVar2);
  _objc_retain(lVar4);
  func_0x00010be202c0(param_1,param_2,&puStack_88);
  _objc_release(uStack_50);
  _objc_release(puStack_58);
  _objc_release(lStack_60);
  _objc_release(puVar2);
  _objc_release(lVar4);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 108e2bbc8; end: 108e2bdb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e2bbc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x20);
  lVar4 = (long)_DAT_11277c10c;
  _objc_retain(param_2);
  lVar2 = lVar2 + lVar4;
  _objc_loadWeakRetained(lVar2);
  uVar1 = param_2;
  func_0x00010c24d960(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e1ce0(lVar2);
  _objc_release(uVar1);
  _objc_release(lVar2);
  lVar2 = *(long *)(param_1 + 0x20) + lVar4;
  _objc_loadWeakRetained(lVar2);
  uVar1 = param_2;
  func_0x00010c24d960(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf940a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c0e1ce0(lVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  lVar4 = *(long *)(param_1 + 0x20) + lVar4;
  _objc_loadWeakRetained(lVar4);
  lVar2 = lVar4;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
  _objc_retain(param_3);
  func_0x00010bf97dc0(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e2bdb4; end: 108e2bf43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e2bdb4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  func_0x00010c11f2a0(param_2);
  lVar6 = (long)_DAT_11277c10c;
  lVar1 = *(long *)(param_1 + 0x20) + lVar6;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c260c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11f340(lVar3);
  lVar1 = *(long *)(param_1 + 0x20) + lVar6;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c1042e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x20) + lVar6;
  _objc_loadWeakRetained(lVar1);
  lVar5 = lVar1;
  func_0x00010c1042e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar6 = *(long *)(param_1 + 0x20) + lVar6;
  _objc_loadWeakRetained(lVar6);
  lVar1 = lVar6;
  func_0x00010c26c600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),lVar1,*(undefined8 *)(param_1 + 0x30),
             *(undefined1 *)(param_1 + 0x40));
  _objc_release(lVar1);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 108e2bf44; end: 108e2c25f; -[SCPreviewCaptionBackgroundView _getLineBackgroundRects:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e2bf44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  ppuVar7 = &puStack_b0;
  _objc_retain(param_3);
  lVar8 = (long)_DAT_11277c10c;
  lVar1 = param_1 + lVar8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c08ce80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010c26ba00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bfcd260();
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = param_1 + lVar8;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010bf07f80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bfb40c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c26c540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar1);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x108e2c104;
  puStack_98 = &UNK_110ac68e0;
  lStack_90 = lVar2;
  lStack_88 = param_1;
  lStack_80 = lVar6;
  uStack_78 = param_3;
  lStack_70 = lVar4;
  uStack_68 = param_2;
  _objc_retain(param_3);
  _objc_retainBlock(&puStack_b0);
  param_1 = param_1 + lVar8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c08ce80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97d80();
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(ppuVar7);
  _objc_release(uStack_78);
  _objc_release(param_3);
  _objc_release(lVar6);
  _objc_release(lVar2);
  return;
}



/* Entry: 108e2c260; end: 108e2c26f; -[SCPreviewCaptionBackgroundView textBackgroundColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e2c260(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c110);
}



/* Entry: 108e2c270; end: 108e2c27b; -[SCPreviewCaptionBackgroundView setTextBackgroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e2c270(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108e2c27c; end: 108e2c28b; -[SCPreviewCaptionBackgroundView textBackgroundCornerRadius] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e2c27c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c120);
}



/* Entry: 108e2c28c; end: 108e2c29b; -[SCPreviewCaptionBackgroundView setTextBackgroundCornerRadius:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e2c28c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11277c120) = param_1;
  return;
}



/* Entry: 108e2c29c; end: 108e2c2b3; -[SCPreviewCaptionBackgroundView textRect] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e2c29c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c11c);
}



/* Entry: 108e2c2b4; end: 108e2c30b; -[SCPreviewCaptionBackgroundView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e2c2b4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277c110,0);
  _objc_storeStrong(param_1 + _DAT_11277c118,0);
  _objc_destroyWeak(param_1 + _DAT_11277c114);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11277c10c);
  return;
}



/* Entry: 108e2c30c; end: 108e2c377; -[SCPreviewCaptionContainerView didAddSubview:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e2c30c(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fea58;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_didAddSubview__112531ca8);
  lVar1 = param_1;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  *(long *)(param_1 + _DAT_11277c124) = lVar2;
  _objc_release(lVar1);
  return;
}



/* Entry: 108e2c378; end: 108e2c407; -[SCPreviewCaptionContainerView willRemoveSubview:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e2c378(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  *(long *)(param_1 + _DAT_11277c124) = lVar2 + -1;
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_1126fea58;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_willRemoveSubview__11253d918,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 108e2c408; end: 108e2c417; -[SCPreviewCaptionContainerView subviewsCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e2c408(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c124);
}



/* Entry: 108e2c418; end: 108e2c7cf; -[SCPreviewCaptionEditingManagerLegacy initWithStaticCaptionsContainerView:originalContentBounds:superviewBounds:superviewContentBounds:isSpectacleMedia:shouldEnableUserTagging:userTaggingFriendsProvider:captionDataProvider:previewCaptionLogger:circumstanceEngine:valdiRuntimeProvider:dynamicCaptionFetcher:creativeToolsABProvider:previewView:asyncQueueProvider:networkingClient:customojiFeature:stickerContainer:captionStickerSuggestionsServices:stickerSuggestionsActionHandler:aiFontsEnabled:] */

undefined8 *
FUN_108e2c418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
             undefined1 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined1 param_32)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  
  uVar3 = param_3;
  uVar4 = param_4;
  _objc_retain(param_11);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  puStack_b0 = PTR_PTR_1126fea60;
  puVar1 = &uStack_b8;
  uStack_b8 = param_9;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_23);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_23;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 3,param_15);
    _objc_storeWeak(puVar1 + 1,param_11);
    puVar1[0x10] = param_1;
    puVar1[0x11] = param_2;
    puVar1[0x12] = param_3;
    puVar1[0x13] = param_4;
    puVar1[8] = param_5;
    puVar1[9] = param_6;
    puVar1[10] = param_7;
    puVar1[0xb] = param_8;
    puVar1[0xc] = param_17;
    puVar1[0xd] = param_18;
    puVar1[0xe] = param_19;
    puVar1[0xf] = param_20;
    func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
    puVar1[0x18] = param_20;
    puVar1[0x19] = param_19;
    puVar1[0x1a] = uVar3;
    puVar1[0x1b] = uVar4;
    *(undefined1 *)((long)puVar1 + 0x31) = param_12;
    _objc_storeWeak(puVar1 + 2,param_14);
    *(undefined1 *)(puVar1 + 6) = param_13;
    func_0x00010beaaf60(puVar1);
    _objc_retain(param_16);
    uVar3 = puVar1[0x15];
    puVar1[0x15] = param_16;
    _objc_release(uVar3);
    _objc_retain(param_21);
    uVar3 = puVar1[0x1c];
    puVar1[0x1c] = param_21;
    _objc_release(uVar3);
    _objc_retain(param_22);
    uVar3 = puVar1[0x1f];
    puVar1[0x1f] = param_22;
    _objc_release(uVar3);
    _objc_retain(param_24);
    uVar3 = puVar1[0x21];
    puVar1[0x21] = param_24;
    _objc_release(uVar3);
    _objc_retain(param_25);
    uVar3 = puVar1[0x22];
    puVar1[0x22] = param_25;
    _objc_release(uVar3);
    _objc_retain(param_26);
    uVar3 = puVar1[4];
    puVar1[4] = param_26;
    _objc_release(uVar3);
    _objc_retain(param_27);
    uVar3 = puVar1[5];
    puVar1[5] = param_27;
    _objc_release(uVar3);
    _objc_retain(param_28);
    uVar3 = puVar1[0x24];
    puVar1[0x24] = param_28;
    _objc_release(uVar3);
    _objc_retain(param_29);
    uVar3 = puVar1[0x25];
    puVar1[0x25] = param_29;
    _objc_release(uVar3);
    _objc_retain(param_30);
    uVar3 = puVar1[0x26];
    puVar1[0x26] = param_30;
    _objc_release(uVar3);
    _objc_storeWeak(puVar1 + 0x27,param_31);
    *(undefined1 *)(puVar1 + 0x29) = param_32;
  }
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_11);
  return puVar1;
}



/* Entry: 108e2c7d0; end: 108e2c877; -[SCPreviewCaptionEditingManagerLegacy _setupBlackBackgroundView] */

void FUN_108e2c7d0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf20c00();
  func_0x00010c013de0();
  uVar3 = *(undefined8 *)(param_1 + 0x160);
  *(undefined **)(param_1 + 0x160) = puVar1;
  _objc_release(uVar3);
  _objc_release(lVar2);
  func_0x00010c21e900(*(undefined8 *)(param_1 + 0x160));
  uVar3 = *(undefined8 *)(param_1 + 0x160);
  func_0x00010c16d4a0(uVar3);
  FUN_108e3eca4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + 0x160));
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fe0000000000000,*(undefined8 *)(param_1 + 0x160),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108e2c878; end: 108e2c8ef; -[SCPreviewCaptionEditingManagerLegacy _updateEditingBackgroundViewsVisibility] */

void FUN_108e2c878(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x160),param_2,0);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010bf4b2a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066fe0(lVar1);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010beba990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showRemixExplanationLabelIfNece_11258c408);
  return;
}



/* Entry: 108e2c8f0; end: 108e2ca43; -[SCPreviewCaptionEditingManagerLegacy _showRemixExplanationLabelIfNecessary] */

void FUN_108e2c8f0(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar1 = *(ulong *)(param_2 + 0x158);
  if (uVar1 != 0) {
    func_0x00010bfdd240();
    if ((uVar1 & 1) != 0) {
LAB_108e2c914:
      puVar4 = PTR_PTR_1126dc0f8;
      lVar2 = *(long *)(param_2 + 0xe8);
      if (lVar2 == 0) {
        lVar2 = param_2 + 8;
        _objc_loadWeakRetained(lVar2);
        func_0x00010bf20c00();
        func_0x00010c087740();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_2 + 0xe8);
        *(undefined **)(param_2 + 0xe8) = puVar4;
        _objc_release(uVar5);
        _objc_release(lVar2);
        func_0x00010bfb68e0(*(undefined8 *)(param_2 + 0xe8));
        func_0x00010c19f0e0(param_1,0x4031000000000000,*(undefined8 *)(param_2 + 0xe8));
        uVar5 = 0;
        lVar2 = *(long *)(param_2 + 0xe8);
      }
      else {
        uVar5 = 0;
      }
      goto LAB_108e2c9f4;
    }
    uVar3 = *(undefined8 *)(param_2 + 0x158);
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf4bb00();
    if ((int)uVar5 == 0) {
      _objc_release(uVar3);
    }
    else {
      lVar2 = *(long *)(param_2 + 0x100);
      func_0x00010bf329a0();
      _objc_release(uVar3);
      if (lVar2 == 1) goto LAB_108e2c914;
    }
  }
  lVar2 = *(long *)(param_2 + 0xe8);
  if (lVar2 == 0) {
    return;
  }
  uVar5 = 1;
LAB_108e2c9f4:
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    lVar2 = param_2 + 8;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c066f80();
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 0xe8),PTR_s_setHidden__1126479f8,uVar5);
  return;
}



/* Entry: 108e2ca44; end: 108e2ca6f; -[SCPreviewCaptionEditingManagerLegacy setText:] */

void FUN_108e2ca44(long param_1)

{
  func_0x00010c212f20(*(undefined8 *)(param_1 + 0x158));
                    /* WARNING: Could not recover jumptable at 0x00010be92ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetEditingCaptionWithGesture__112582448,0)
  ;
  return;
}



/* Entry: 108e2ca70; end: 108e2cdcb; -[SCPreviewCaptionEditingManagerLegacy tap:] */

void FUN_108e2ca70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x158) != 0) {
    func_0x00010c268be0(*(long *)(param_1 + 0x158),param_2,param_3);
    goto LAB_108e2cda4;
  }
  lVar1 = param_1;
  func_0x00010bf2d920();
  if ((int)lVar1 == 0) goto LAB_108e2cda4;
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c110740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x150;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1108a0();
  _objc_release(lVar1);
  func_0x00010bde6940(param_1);
  if (lVar2 == 0) {
    lVar1 = param_1 + 0x150;
    _objc_loadWeakRetained();
    lVar3 = lVar1;
    func_0x00010c1107c0();
    _objc_release(lVar1);
    if ((int)lVar3 == 0) goto LAB_108e2cb74;
    lVar1 = param_1;
    func_0x00010c0d8640(param_1,param_2,0,0);
  }
  else {
LAB_108e2cb74:
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010bf303a0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c113040();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c25e080();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010bfaf140(lVar1,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    lVar1 = lVar2;
    if (lVar6 == 0) {
      lVar1 = param_1;
      func_0x00010be8ede0(param_1,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
    }
    lVar2 = lVar1;
    func_0x00010beffa20();
    *(long *)(param_1 + 0xa0) = lVar2;
  }
  func_0x00010c2a6cc0(*(undefined8 *)(param_1 + 0x100),param_2,lVar1);
  uVar12 = *(undefined8 *)(param_1 + 0x100);
  lVar2 = lVar1;
  func_0x00010bf303a0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167d60(uVar12,param_2,lVar2);
  _objc_release(lVar2);
  _objc_retain(lVar1);
  uVar12 = *(undefined8 *)(param_1 + 0x158);
  *(long *)(param_1 + 0x158) = lVar1;
  _objc_release(uVar12);
  uVar7 = *(undefined8 *)(param_1 + 0x158);
  func_0x00010c252440(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar7;
  func_0x00010bf07f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x158);
  FUN_108e24270(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 0xa8);
  uVar9 = *(undefined8 *)(param_1 + 0x158);
  func_0x00010bf303a0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar9;
  func_0x00010bfadea0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126cbf68;
  uVar14 = *(undefined8 *)(param_1 + 0xb8);
  uVar10 = uVar12;
  func_0x00010c25e260(uVar12);
  func_0x00010c06cf40(puVar11,param_2,uVar10);
  func_0x00010c0a2800(uVar13,param_2,uVar7,uVar14,puVar11,uVar8);
  _objc_release(uVar7);
  _objc_release(uVar9);
  if (lVar1 != 0) {
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_108e2cdcc;
    puStack_80 = &UNK_110848ba8;
    _objc_retain(lVar1);
    lStack_78 = lVar1;
    _objc_retain(param_3);
    uStack_70 = param_3;
    lStack_68 = param_1;
    func_0x00010bdd34a0(param_1,param_2,lVar1,0,&puStack_98);
    _objc_release(uStack_70);
    _objc_release(lStack_78);
  }
  _objc_release(uVar8);
  _objc_release(uVar12);
  _objc_release(lVar1);
LAB_108e2cda4:
  _objc_release(param_3);
  return;
}



/* Entry: 108e2cdcc; end: 108e2ce1f;  */

void FUN_108e2cdcc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c268be0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0xa8);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_108e24270(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a2780(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e2ce20; end: 108e2ce2b; -[SCPreviewCaptionEditingManagerLegacy newCaptionWithState:shouldKeepStyles:] */

void FUN_108e2ce20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be62df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__newCaptionWithState_fromGesture_112576518,param_3,1,param_4);
  return;
}



/* Entry: 108e2ce2c; end: 108e2cf13; -[SCPreviewCaptionEditingManagerLegacy _newCaptionWithState:fromGesture:shouldKeepStyles:] */

long FUN_108e2ce2c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010bde6940(param_1);
  if (param_3 == 0) {
    param_3 = param_1;
    func_0x00010bdebd00(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_3;
    func_0x00010c280560();
    if (lVar1 <= *(long *)(param_1 + 0x38)) {
      lVar1 = *(long *)(param_1 + 0x38);
    }
    *(long *)(param_1 + 0x38) = lVar1;
  }
  lVar1 = param_1;
  func_0x00010bdebcc0(param_1,param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c280560(param_3);
  func_0x00010c21b740(lVar1,param_2,lVar2);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c110660();
  _objc_release(param_1);
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 108e2cf14; end: 108e2d143; -[SCPreviewCaptionEditingManagerLegacy _newCaptionWithState:fromGesture:defaultCaptionStyleType:shouldKeepStyles:] */

undefined *
FUN_108e2cf14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_108e2d144;
  uStack_80 = 0x108e2d154;
  puStack_98 = &uStack_a0;
  _objc_retain(param_3);
  uStack_78 = param_3;
  func_0x00010bde6940(param_1);
  lVar5 = puStack_98[5];
  uStack_b0 = 0;
  if (lVar5 != 0) {
    uStack_b0 = param_4;
  }
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_108e2d15c;
  puStack_d0 = &UNK_110ab6050;
  lStack_c8 = param_1;
  puStack_b8 = &uStack_a0;
  uStack_a8 = param_6;
  _objc_retain(puVar1);
  ppuVar2 = &puStack_e8;
  puStack_c0 = puVar1;
  _objc_retainBlock();
  if (lVar5 == 0) {
    func_0x00010bdebce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    _objc_retain(ppuVar2);
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(param_1);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    _objc_release(param_1);
  }
  else {
    lVar5 = puStack_98[5];
    func_0x00010c280560();
    if (lVar5 <= *(long *)(param_1 + 0x38)) {
      lVar5 = *(long *)(param_1 + 0x38);
    }
    *(long *)(param_1 + 0x38) = lVar5;
    (*(code *)ppuVar2[2])(ppuVar2);
  }
  puVar4 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(puStack_c0);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(puVar1);
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 108e2d144; end: 108e2d15b;  */

void FUN_108e2d144(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108e2d15c; end: 108e2d25b;  */

void FUN_108e2d15c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdebcc0(uVar1,param_2,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28)
                      ,*(undefined1 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  func_0x00010c280560(uVar2);
  func_0x00010c21b740(uVar1,param_2,uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6b020(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c110660();
  _objc_release(uVar2);
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e2d25c; end: 108e2d2e7; -[SCPreviewCaptionEditingManagerLegacy deleteCaption:deleteType:] */

void FUN_108e2d25c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
    _objc_release(lVar1);
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1106e0();
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 108e2d2e8; end: 108e2d4c7; -[SCPreviewCaptionEditingManagerLegacy captionButtonPressed] */

void FUN_108e2d2e8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (*(long *)(param_1 + 0x158) == 0) {
    lVar3 = param_1 + 0x150;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c1108a0();
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010c0d8640();
    uVar7 = *(undefined8 *)(param_1 + 0x158);
    *(long *)(param_1 + 0x158) = lVar3;
    _objc_release(uVar7);
    func_0x00010c2a6cc0(*(undefined8 *)(param_1 + 0x100));
    uVar4 = *(undefined8 *)(param_1 + 0x158);
    func_0x00010c252440(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010bf07f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x158);
    FUN_108e24270(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0xa8);
    uVar6 = *(undefined8 *)(param_1 + 0x158);
    func_0x00010bf303a0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010bfadea0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126cbf68;
    func_0x00010c25e260(uVar7);
    func_0x00010c06cf40(puVar1);
    func_0x00010c0a2800(uVar8);
    _objc_release(uVar4);
    _objc_release(uVar6);
    func_0x00010c24eaa0(*(undefined8 *)(param_1 + 0x158));
    func_0x00010c0a2780(*(undefined8 *)(param_1 + 0xa8));
    func_0x00010bed7420(param_1);
    _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar7);
    return;
  }
  lVar3 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c110640();
  _objc_release(lVar3);
  if ((int)lVar2 != 0) {
    func_0x00010c178640(*(undefined8 *)(param_1 + 0x158));
                    /* WARNING: Could not recover jumptable at 0x00010c255ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x158),PTR_s_stopEditingAnimated__1126731e0,1);
    return;
  }
  return;
}



/* Entry: 108e2d4c8; end: 108e2d547; -[SCPreviewCaptionEditingManagerLegacy alignmentPressed] */

void FUN_108e2d4c8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x158);
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06e960();
  _objc_release(uVar1);
  if (((uVar2 & 1) == 0) && (uVar2 = *(long *)(param_1 + 0xa0) - 1, uVar2 < 3)) {
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(&UNK_10dfa38d8 + uVar2 * 8);
                    /* WARNING: Could not recover jumptable at 0x00010c166c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x158),PTR_s_setAlignment__112637520);
    return;
  }
  return;
}



/* Entry: 108e2d548; end: 108e2d59f; -[SCPreviewCaptionEditingManagerLegacy updateLayoutWithSuperviewBounds:superviewContentBounds:superviewEdgeInset:] */

void FUN_108e2d548(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  long lVar1;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  *(undefined8 *)(param_9 + 0x40) = param_1;
  *(undefined8 *)(param_9 + 0x48) = param_2;
  *(undefined8 *)(param_9 + 0x50) = param_3;
  *(undefined8 *)(param_9 + 0x58) = param_4;
  *(undefined8 *)(param_9 + 0x60) = param_5;
  *(undefined8 *)(param_9 + 0x68) = param_6;
  *(undefined8 *)(param_9 + 0x70) = param_7;
  *(undefined8 *)(param_9 + 0x78) = param_8;
  *(undefined8 *)(param_9 + 200) = in_stack_00000008;
  *(undefined8 *)(param_9 + 0xc0) = in_stack_00000000;
  *(undefined8 *)(param_9 + 0xd0) = in_stack_00000010;
  *(undefined8 *)(param_9 + 0xd8) = in_stack_00000018;
  lVar1 = param_9 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf20c00();
  func_0x00010c19f0e0(*(undefined8 *)(param_9 + 0x160));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108e2d5a0; end: 108e2d6bf; -[SCPreviewCaptionEditingManagerLegacy _resetEditingCaptionWithGesture:] */

void FUN_108e2d5a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010c1593c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x158);
  func_0x00010c252440(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c25e1c0();
  lVar3 = param_1;
  func_0x00010bdcd9e0(param_1,param_2,uVar1,uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010beceba0(param_1,param_2,uVar2,uVar1,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x158);
  _objc_retain(uVar2);
  lVar5 = param_1;
  func_0x00010be62de0(param_1,param_2,lVar4,param_3,0);
  uVar6 = *(undefined8 *)(param_1 + 0x158);
  *(long *)(param_1 + 0x158) = lVar5;
  _objc_release(uVar6);
  func_0x00010bf6b840(param_1,param_2,uVar2,1);
  _objc_release(uVar2);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c110820();
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e2d6c0; end: 108e2d80b; -[SCPreviewCaptionEditingManagerLegacy _replacementCaptionForUnavailableCaption:] */

void FUN_108e2d6c0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0fb8e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    lVar2 = lVar1;
    func_0x00010bf303a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c113040();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf15ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1db640(lVar1,param_2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  func_0x00010c178860(lVar1,param_2,0);
  func_0x00010c1b8c80(lVar1,param_2,0);
  lVar2 = param_1;
  func_0x00010bdebcc0(param_1,param_2,lVar1,1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c280560(lVar1);
  func_0x00010c21b740(lVar2,param_2,lVar3);
  func_0x00010bf6b840(param_1,param_2,param_3,1);
  _objc_release(param_3);
  param_1 = param_1 + 0x150;
  _objc_loadWeakRetained(param_1);
  func_0x00010c110660();
  _objc_release(param_1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 108e2d80c; end: 108e2d84f; -[SCPreviewCaptionEditingManagerLegacy canStartEditingCaption] */

undefined8 FUN_108e2d80c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c1107c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108e2d850; end: 108e2d887; -[SCPreviewCaptionEditingManagerLegacy prepareCaptionEditing] */

void FUN_108e2d850(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c110800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e2d888; end: 108e2d8c3; -[SCPreviewCaptionEditingManagerLegacy didSwitchToStyleMode] */

void FUN_108e2d888(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x100);
  func_0x00010bf329a0();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c265790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x100),PTR_s_switchToCarouselMode__112677008,0);
    return;
  }
  return;
}


