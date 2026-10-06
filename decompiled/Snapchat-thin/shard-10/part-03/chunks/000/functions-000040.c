/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107db0e8c; end: 107db0f2f;  */

void FUN_107db0e8c(long param_1)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = *(undefined1 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c07a2c0(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2791a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf529e0();
  if (*(long *)(param_1 + 0x20) == 0) {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
  }
  else {
    func_0x00010bf8b160(&uStack_58);
  }
  _CMTimeGetSeconds(&uStack_58);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2,uVar3,uVar5);
  _objc_release(uVar4);
  return;
}



/* Entry: 107db0f30; end: 107db0f37; -[SnapVideoFilter _dataFromContentResult:] */

void FUN_107db0f30(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010bfcaaa0(), lVar1 != 0)) {
    lVar3 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c13e900();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar2 = param_3;
      func_0x00010bf58280(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bfc48a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
    }
    else {
      _objc_retain(lVar1);
      lVar3 = lVar1;
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107db0f38; end: 107db12db; -[SnapVideoFilter _audioGenericAssetsFromSnapDocParser:queue:completion:] */

void FUN_107db0f38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  code *pcStack_2d8;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 uStack_258;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  code *pcStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar3 = param_5;
  _objc_retain();
  _dispatch_group_create();
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_107da8f04;
  uStack_88 = 0x107da8f14;
  uStack_80 = 0;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_107da8f04;
  uStack_b8 = 0x107da8f14;
  uStack_b0 = 0;
  uStack_108 = 0;
  uStack_f8 = 0x3032000000;
  pcStack_f0 = FUN_107da8f04;
  uStack_e8 = 0x107da8f14;
  uStack_e0 = 0;
  puStack_100 = &uStack_108;
  puStack_d0 = &uStack_d8;
  puStack_a0 = &uStack_a8;
  _dispatch_group_enter();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_107db12dc;
  puStack_138 = &UNK_110a0caf0;
  puStack_120 = &uStack_108;
  _objc_retain(uVar3);
  uStack_130 = uVar3;
  uStack_128 = param_1;
  puStack_118 = &uStack_a8;
  puStack_110 = &uStack_d8;
  func_0x00010c13e8a0(param_3);
  uStack_180 = 0;
  uStack_170 = 0x3032000000;
  pcStack_168 = FUN_107da8f04;
  uStack_160 = 0x107da8f14;
  uStack_158 = 0;
  uStack_1b0 = 0;
  uStack_1a0 = 0x3032000000;
  pcStack_198 = FUN_107da8f04;
  uStack_190 = 0x107da8f14;
  uStack_188 = 0;
  uStack_1e0 = 0;
  uStack_1d0 = 0x3032000000;
  pcStack_1c8 = FUN_107da8f04;
  uStack_1c0 = 0x107da8f14;
  uStack_1b8 = 0;
  puStack_1d8 = &uStack_1e0;
  puStack_1a8 = &uStack_1b0;
  puStack_178 = &uStack_180;
  _dispatch_group_enter(uVar3);
  puStack_228 = puVar1;
  uStack_220 = 0xc2000000;
  uStack_218 = 0x107db14b8;
  puStack_210 = &UNK_110a0caf0;
  puStack_1f8 = &uStack_1e0;
  _objc_retain(uVar3);
  uStack_208 = uVar3;
  uStack_200 = param_1;
  puStack_1f0 = &uStack_180;
  puStack_1e8 = &uStack_1b0;
  func_0x00010c13e8a0(param_3);
  uStack_258 = 0;
  uStack_248 = 0x3032000000;
  pcStack_240 = FUN_107da8f04;
  uStack_238 = 0x107da8f14;
  uStack_230 = 0;
  puStack_250 = &uStack_258;
  _dispatch_group_enter(uVar3);
  puVar2 = PTR_PTR_1126bf688;
  puStack_288 = puVar1;
  uStack_280 = 0xc2000000;
  pcStack_278 = FUN_107db1694;
  puStack_270 = &UNK_110a0cb20;
  puStack_260 = &uStack_258;
  _objc_retain(uVar3);
  uStack_268 = uVar3;
  func_0x00010c0fdde0(puVar2);
  puStack_2e8 = puVar1;
  uStack_2e0 = 0xc2000000;
  pcStack_2d8 = FUN_107db16f0;
  puStack_2d0 = &UNK_110a0cb50;
  puStack_2c0 = &uStack_a8;
  puStack_2b8 = &uStack_180;
  puStack_2b0 = &uStack_d8;
  puStack_2a8 = &uStack_1b0;
  puStack_2a0 = &uStack_108;
  puStack_298 = &uStack_1e0;
  uStack_2c8 = param_5;
  puStack_290 = &uStack_258;
  _objc_retain(param_5);
  func_0x000100bc0718(uVar3,param_4,&puStack_2e8);
  _objc_release(uStack_2c8);
  _objc_release(uStack_268);
  __Block_object_dispose(&uStack_258,8);
  _objc_release(uStack_230);
  _objc_release(uStack_208);
  __Block_object_dispose(&uStack_1e0,8);
  _objc_release(uStack_1b8);
  __Block_object_dispose(&uStack_1b0,8);
  _objc_release(uStack_188);
  __Block_object_dispose(&uStack_180,8);
  _objc_release(uStack_158);
  _objc_release(uStack_130);
  __Block_object_dispose(&uStack_108,8);
  _objc_release(uStack_e0);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_5);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107db12dc; end: 107db1693;  */

void FUN_107db12dc(long param_1,long param_2,long param_3,undefined8 param_4,undefined *param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_2;
  lVar8 = param_3;
  uVar9 = param_4;
  puVar5 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 == (undefined *)0x0) {
    if (param_2 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      lVar8 = param_2;
      func_0x00010bdf7cc0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = *(long *)(*(long *)(param_1 + 0x38) + 8);
      uVar7 = *(undefined8 *)(lVar10 + 0x28);
      *(undefined8 *)(lVar10 + 0x28) = uVar1;
      _objc_release(uVar7);
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      if (*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28) == 0) {
        lVar10 = *(long *)(param_1 + 0x28);
        _objc_opt_class();
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = 0;
        lVar8 = lVar10;
        puVar5 = puVar2;
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = *(long *)(*(long *)(param_1 + 0x30) + 8);
        uVar1 = *(undefined8 *)(lVar11 + 0x28);
        *(undefined **)(lVar11 + 0x28) = puVar3;
        _objc_release(uVar1);
        _objc_release(puVar2);
        _objc_release(lVar10);
      }
      lVar10 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      _objc_retain(param_4);
      uVar1 = *(undefined8 *)(lVar10 + 0x28);
      *(undefined8 *)(lVar10 + 0x28) = param_4;
      goto LAB_107db1454;
    }
  }
  else {
    lVar10 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    _objc_retain(param_5);
    uVar1 = *(undefined8 *)(lVar10 + 0x28);
    *(undefined **)(lVar10 + 0x28) = param_5;
LAB_107db1454:
    _objc_release(uVar1);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = lVar4;
  _objc_retain(lVar4);
  _objc_retain(lVar8);
  _objc_retain(uVar9);
  _objc_retain(puVar5);
  if (puVar5 == (undefined *)0x0) {
    if (lVar4 == 0) goto LAB_107db1634;
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010bdf7cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = *(long *)(*(long *)(param_2 + 0x38) + 8);
    uVar7 = *(undefined8 *)(lVar11 + 0x28);
    *(undefined8 *)(lVar11 + 0x28) = uVar1;
    _objc_release(uVar7);
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (*(long *)(*(long *)(*(long *)(param_2 + 0x38) + 8) + 0x28) == 0) {
      uVar1 = *(undefined8 *)(param_2 + 0x28);
      _objc_opt_class(uVar1);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = *(long *)(*(long *)(param_2 + 0x30) + 8);
      uVar7 = *(undefined8 *)(lVar11 + 0x28);
      *(undefined **)(lVar11 + 0x28) = puVar3;
      _objc_release(uVar7);
      _objc_release(puVar2);
      _objc_release(uVar1);
    }
    lVar11 = *(long *)(*(long *)(param_2 + 0x40) + 8);
    _objc_retain(uVar9);
    uVar1 = *(undefined8 *)(lVar11 + 0x28);
    *(undefined8 *)(lVar11 + 0x28) = uVar9;
  }
  else {
    lVar11 = *(long *)(*(long *)(param_2 + 0x30) + 8);
    _objc_retain(puVar5);
    uVar1 = *(undefined8 *)(lVar11 + 0x28);
    *(undefined **)(lVar11 + 0x28) = puVar5;
  }
  _objc_release(uVar1);
LAB_107db1634:
  _dispatch_group_leave(*(undefined8 *)(param_2 + 0x20));
  _objc_release(puVar5);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar6);
  lVar8 = *(long *)(*(long *)(lVar4 + 0x28) + 8);
  uVar9 = *(undefined8 *)(lVar8 + 0x28);
  *(long *)(lVar8 + 0x28) = lVar6;
  _objc_retain(lVar6);
  _objc_release(uVar9);
  _dispatch_group_leave(*(undefined8 *)(lVar4 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 107db1694; end: 107db16ef;  */

void FUN_107db1694(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107db16f0; end: 107db18ff;  */

undefined * FUN_107db16f0(double param_1,double param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  double *pdVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  func_0x00010c1d0640(puVar1);
  func_0x00010c1d0640(puVar10);
  func_0x00010c1d0640(puVar10);
  func_0x00010c1d0640(puVar2);
  func_0x00010c1d0640(puVar2);
  lVar11 = *(long *)(param_3 + 0x20);
  lVar12 = *(long *)(*(long *)(*(long *)(param_3 + 0x58) + 8) + 0x28);
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (lVar12 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = puVar1;
  func_0x00010bf51e00();
  puVar5 = puVar10;
  func_0x00010bf51e00(puVar10);
  puVar6 = puVar2;
  func_0x00010bf51e00(puVar2);
  puVar7 = puVar4;
  (**(code **)(lVar11 + 0x10))(lVar11,puVar3,puVar4,puVar5,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  if (lVar12 != 0) {
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(puVar10);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return puVar1;
  }
  ___stack_chk_fail();
  pdVar8 = &dStack_d0;
  func_0x00010c279200();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  if (puVar1 == (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    func_0x00010c106f40(&dStack_d0,puVar1);
    func_0x00010b691288();
    if (pdVar8 == (double *)0x3) {
      func_0x00010c0d5d20(puVar1);
      func_0x00010c106f40(&dStack_d0,puVar1);
      dVar17 = param_2 * dStack_c0 + param_1 * dStack_d0;
      dVar13 = param_2 * dStack_b8 + param_1 * dStack_c8;
      dVar15 = -(dStack_c8 * param_1) - param_2 * dStack_b8;
      if (0.0 <= dVar13) {
        dVar15 = dVar13;
      }
      dVar16 = -(dStack_d0 * param_1) - param_2 * dStack_c0;
      if (0.0 <= dVar17) {
        dVar16 = dVar17;
      }
      dVar14 = -0.5625;
      if (dVar17 != 0.0) {
        if (dVar13 == 0.0) {
          dVar14 = INFINITY;
        }
        else {
          dVar14 = dVar16 / dVar15 + -0.5625;
        }
      }
      puVar10 = (undefined *)(ulong)(0.029999999329447746 < ABS(dVar14));
    }
    else {
      puVar10 = (undefined *)0x1;
    }
  }
  _objc_release(puVar1);
  return puVar10;
}



/* Entry: 107db1900; end: 107db1a1f; -[SnapVideoFilter _isImportedContent:] */

bool FUN_107db1900(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  double *pdVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  
  pdVar2 = &dStack_60;
  func_0x00010c279200(param_5,param_4,*(undefined8 *)PTR__AVMediaTypeVideo_110348090);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  if (lVar1 == 0) {
    bVar3 = false;
  }
  else {
    func_0x00010c106f40(&dStack_60,lVar1);
    func_0x00010b691288();
    if (pdVar2 == (double *)0x3) {
      func_0x00010c0d5d20(lVar1);
      func_0x00010c106f40(&dStack_60,lVar1);
      dVar8 = param_2 * dStack_50 + param_1 * dStack_60;
      dVar4 = param_2 * dStack_48 + param_1 * dStack_58;
      dVar6 = -(dStack_58 * param_1) - param_2 * dStack_48;
      if (0.0 <= dVar4) {
        dVar6 = dVar4;
      }
      dVar7 = -(dStack_60 * param_1) - param_2 * dStack_50;
      if (0.0 <= dVar8) {
        dVar7 = dVar8;
      }
      dVar5 = -0.5625;
      if (dVar8 != 0.0) {
        if (dVar4 == 0.0) {
          dVar5 = INFINITY;
        }
        else {
          dVar5 = dVar7 / dVar6 + -0.5625;
        }
      }
      bVar3 = 0.029999999329447746 < ABS(dVar5);
    }
    else {
      bVar3 = true;
    }
  }
  _objc_release(lVar1);
  return bVar3;
}



/* Entry: 107db1a20; end: 107db1a77;  */

void FUN_107db1a20(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = &UNK_10f45becf;
  _dispatch_queue_create(&UNK_10f45becf,0);
  uVar1 = puRam0000000113727b10;
  puRam0000000113727b10 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107db1a78; end: 107db1bcb; -[SCMemoriesTranscodeSnapInfo initWithSnapCreateTimeUTC:snapTimeZoneName:memoriesSnapId:snapCroppingState:snapSize:contentViewSize:snapOrientation:isRotational:isCircular:] */

undefined1 *
FUN_107db1a78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
             undefined1 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_78 = PTR_PTR_1126fb0e8;
  uStack_80 = param_5;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x38) = param_1;
    *(undefined8 *)((long)puVar1 + 0x40) = param_2;
    *(undefined8 *)((long)puVar1 + 0x48) = param_3;
    *(undefined8 *)((long)puVar1 + 0x50) = param_4;
    *(undefined8 *)((long)puVar1 + 0x30) = param_11;
    *(undefined1 *)((long)puVar1 + 8) = param_12;
    *(undefined1 *)((long)puVar1 + 9) = param_13;
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 107db1bcc; end: 107db1bef; -[SCMemoriesTranscodeSnapInfo copyWithZone:] */

undefined8 FUN_107db1bcc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107db1bf0; end: 107db1d17; -[SCMemoriesTranscodeSnapInfo hash] */

undefined8 * FUN_107db1bf0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  long lStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_78 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 0x30);
  uVar7 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_60 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_58 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar7 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_50 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x50) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_48 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  lStack_40 = -lVar6;
  if (-1 < lVar6) {
    lStack_40 = lVar6;
  }
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  uStack_68 = uVar3;
  func_0x000100505190(&uStack_80,0xb);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_107db1e40:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107db1e4c;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       (((*(long *)((long)puVar4 + 0x30) == *(long *)(param_3 + 0x30) &&
         (*(char *)((long)puVar4 + 8) == param_3[8])) && (*(char *)((long)puVar4 + 9) == param_3[9])
        ))) {
      puVar8 = (undefined1 *)0x0;
      if ((((*(double *)((long)puVar4 + 0x38) != *(double *)(param_3 + 0x38)) ||
           (*(double *)((long)puVar4 + 0x40) != *(double *)(param_3 + 0x40))) ||
          (puVar8 = (undefined1 *)0x0,
          *(double *)((long)puVar4 + 0x48) != *(double *)(param_3 + 0x48))) ||
         (*(double *)((long)puVar4 + 0x50) != *(double *)(param_3 + 0x50))) goto LAB_107db1e4c;
      lVar6 = *(long *)((long)puVar4 + 0x10);
      if (((lVar6 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
         (((lVar6 = *(long *)((long)puVar4 + 0x18), lVar6 == *(long *)(param_3 + 0x18) ||
           (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
          ((lVar6 = *(long *)((long)puVar4 + 0x20), lVar6 == *(long *)(param_3 + 0x20) ||
           (func_0x00010c071ae0(), (int)lVar6 != 0)))))) {
        puVar8 = *(undefined1 **)((long)puVar4 + 0x28);
        if (puVar8 != *(undefined1 **)(param_3 + 0x28)) {
          func_0x00010c071ae0();
          goto LAB_107db1e4c;
        }
        goto LAB_107db1e40;
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_107db1e4c:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 107db1d18; end: 107db1e67; -[SCMemoriesTranscodeSnapInfo isEqual:] */

long FUN_107db1d18(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107db1e40:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107db1e4c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30) &&
         (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = 0;
      if ((((*(double *)(param_1 + 0x38) != *(double *)(param_3 + 0x38)) ||
           (*(double *)(param_1 + 0x40) != *(double *)(param_3 + 0x40))) ||
          (lVar3 = 0, *(double *)(param_1 + 0x48) != *(double *)(param_3 + 0x48))) ||
         (*(double *)(param_1 + 0x50) != *(double *)(param_3 + 0x50))) goto LAB_107db1e4c;
      lVar3 = *(long *)(param_1 + 0x10);
      if (((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
         (((lVar3 = *(long *)(param_1 + 0x18), lVar3 == *(long *)(param_3 + 0x18) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
          ((lVar3 = *(long *)(param_1 + 0x20), lVar3 == *(long *)(param_3 + 0x20) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)))))) {
        lVar3 = *(long *)(param_1 + 0x28);
        if (lVar3 != *(long *)(param_3 + 0x28)) {
          func_0x00010c071ae0();
          goto LAB_107db1e4c;
        }
        goto LAB_107db1e40;
      }
    }
    lVar3 = 0;
  }
LAB_107db1e4c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107db1e68; end: 107db1e6f; -[SCMemoriesTranscodeSnapInfo snapCreateTimeUTC] */

undefined8 FUN_107db1e68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107db1e70; end: 107db1e77; -[SCMemoriesTranscodeSnapInfo snapTimeZoneName] */

undefined8 FUN_107db1e70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107db1e78; end: 107db1e7f; -[SCMemoriesTranscodeSnapInfo memoriesSnapId] */

undefined8 FUN_107db1e78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107db1e80; end: 107db1e87; -[SCMemoriesTranscodeSnapInfo snapCroppingState] */

undefined8 FUN_107db1e80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107db1e88; end: 107db1e8f; -[SCMemoriesTranscodeSnapInfo snapSize] */

undefined1  [16] FUN_107db1e88(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x38);
}



/* Entry: 107db1e90; end: 107db1e97; -[SCMemoriesTranscodeSnapInfo contentViewSize] */

undefined1  [16] FUN_107db1e90(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x48);
}



/* Entry: 107db1e98; end: 107db1e9f; -[SCMemoriesTranscodeSnapInfo snapOrientation] */

undefined8 FUN_107db1e98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107db1ea0; end: 107db1ea7; -[SCMemoriesTranscodeSnapInfo isRotational] */

undefined1 FUN_107db1ea0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107db1ea8; end: 107db1eaf; -[SCMemoriesTranscodeSnapInfo isCircular] */

undefined1 FUN_107db1ea8(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107db1eb0; end: 107db1ef7; -[SCMemoriesTranscodeSnapInfo .cxx_destruct] */

void FUN_107db1eb0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107db1ef8; end: 107db1eff; -[SCVoiceoverServices mediaLoader] */

undefined8 FUN_107db1ef8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107db1f00; end: 107db1f07; -[SCVoiceoverServices genericAssetFactory] */

undefined8 FUN_107db1f00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107db1f08; end: 107db1f37; -[SCVoiceoverServices .cxx_destruct] */

void FUN_107db1f08(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107db1f38; end: 107db1f9f; +[SCSnapshotsPbSnaps descriptor] */

void FUN_107db1f38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727b30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b80500,
                        &PTR____CFConstantStringClassReference_110e6a2b8,&PTR_DAT_113245868,
                        &PTR_s_snapsArray_113245880,1,0x10,0x1c);
    puRam0000000113727b30 = puVar1;
  }
  return;
}



/* Entry: 107db1fa0; end: 107db2007; +[SCSnapshotsPbSnap descriptor] */

void FUN_107db1fa0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727b38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b80550,
                        &PTR____CFConstantStringClassReference_110db5518,&PTR_DAT_113245868,
                        &PTR_s_identifier_1132458a0,3,0x20,0x1c);
    puRam0000000113727b38 = puVar1;
  }
  return;
}



/* Entry: 107db2008; end: 107db207b; -[SCMemoriesTranscodingHelperServices initWithMemoriesTranscodingHelper:] */

undefined1 * FUN_107db2008(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fb0f8;
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



/* Entry: 107db207c; end: 107db2083; -[SCMemoriesTranscodingHelperServices memoriesTranscodingHelper] */

undefined8 FUN_107db207c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107db2084; end: 107db208f; -[SCMemoriesTranscodingHelperServices .cxx_destruct] */

void FUN_107db2084(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107db2090; end: 107db215b; -[SCSpectaclesAuxiliaryContentMagicMomentDepthProvider initWithSnaps:availabilityHandler:metadataProvider:] */

undefined1 *
FUN_107db2090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126fb100;
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



/* Entry: 107db215c; end: 107db21f7; -[SCSpectaclesAuxiliaryContentMagicMomentDepthProvider awaitDepthWithCompletion:] */

void FUN_107db215c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107db21f8;
  puStack_40 = &UNK_110859a38;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bf136a0(uVar2,param_2,uVar1,0,0,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107db21f8; end: 107db2203;  */

void FUN_107db21f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107db2200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107db2204; end: 107db223f; -[SCSpectaclesAuxiliaryContentMagicMomentDepthProvider prioritizeDepth] */

void FUN_107db2204(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfb1920(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c113b00(uVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107db2240; end: 107db228f; -[SCSpectaclesAuxiliaryContentMagicMomentDepthProvider depthStatusForMedia] */

void FUN_107db2240(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107db2290;
  puStack_20 = &UNK_110848868;
  uStack_18 = param_1;
  func_0x00010bdfae20(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 107db2290; end: 107db22cf;  */

undefined8 FUN_107db2290(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdfae00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd7c00();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 107db22d0; end: 107db232f; -[SCSpectaclesAuxiliaryContentMagicMomentDepthProvider depthStatusForFrameAtTime:] */

void FUN_107db22d0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_107db2330;
  puStack_38 = &UNK_110a0cbc0;
  uStack_20 = param_3[1];
  uStack_28 = *param_3;
  uStack_18 = param_3[2];
  uStack_30 = param_1;
  func_0x00010bdfae20(param_1,param_2,&puStack_50);
  return;
}



/* Entry: 107db2330; end: 107db238f;  */

undefined8 FUN_107db2330(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdfae00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd7c20();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 107db2390; end: 107db24f3; -[SCSpectaclesAuxiliaryContentMagicMomentDepthProvider _depthStatusWithProviderQueryBlock:] */

long FUN_107db2390(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
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
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar3 = *(long *)(param_1 + 8);
  _objc_retain(lVar3);
  lVar4 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar4 != 0) {
    lVar7 = *plStack_120;
    lVar5 = 1;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar3);
        }
        uVar6 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        uVar1 = *(ulong *)(param_1 + 0x10);
        func_0x00010c070740(uVar1,param_2,uVar6);
        if ((uVar1 & 1) != 0) {
LAB_107db24a4:
          _objc_release(lVar3);
          goto LAB_107db24ac;
        }
        uVar2 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c07b100(uVar2,param_2,uVar6);
        if ((int)uVar2 == 0) {
          lVar5 = 0;
          goto LAB_107db24a4;
        }
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
      lVar4 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar4 != 0);
  }
  _objc_release(lVar3);
  lVar4 = param_3;
  (**(code **)(param_3 + 0x10))();
  lVar5 = 1;
  if ((int)lVar4 != 0) {
    lVar5 = 2;
  }
LAB_107db24ac:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lVar4 = *(long *)(param_3 + 0x20);
    if (lVar4 == 0) {
      uVar6 = *(undefined8 *)(param_3 + 0x18);
      func_0x00010bf6de60(uVar6,param_2,*(undefined8 *)(param_3 + 8));
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_3 + 0x20);
      *(undefined8 *)(param_3 + 0x20) = uVar6;
      _objc_release(uVar2);
      lVar4 = *(long *)(param_3 + 0x20);
    }
    _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
    return lVar4;
  }
  return lVar5;
}



/* Entry: 107db24f4; end: 107db254b; -[SCSpectaclesAuxiliaryContentMagicMomentDepthProvider _depthProvider] */

void FUN_107db24f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf6de60(uVar1,param_2,*(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x20);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107db254c; end: 107db2593; -[SCSpectaclesAuxiliaryContentMagicMomentDepthProvider .cxx_destruct] */

void FUN_107db254c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107db2594; end: 107db265b; -[SCSpectaclesSnapCommandProvider initWithSnap:metadataProvider:] */

undefined1 *
FUN_107db2594(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined1 *puStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = param_1;
  puVar6 = puVar1;
  uVar7 = param_4;
  func_0x00010c04a1a0();
  _objc_release(param_4);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar2;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_80;
  pcStack_48 = FUN_107db265c;
  puStack_70 = puVar1;
  puStack_68 = param_1;
  uStack_60 = param_4;
  puStack_58 = puVar2;
  puStack_50 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  _objc_retain(uVar7);
  puStack_78 = PTR_PTR_1126fb108;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined **)0x0) {
    _objc_retain(puVar6);
    uVar5 = *(undefined8 *)((long)ppuVar4 + 8);
    *(undefined **)((long)ppuVar4 + 8) = puVar6;
    _objc_release(uVar5);
    _objc_retain(uVar7);
    uVar5 = *(undefined8 *)((long)ppuVar4 + 0x10);
    *(undefined8 *)((long)ppuVar4 + 0x10) = uVar7;
    _objc_release(uVar5);
    puVar1 = PTR_PTR_1126d1390;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)ppuVar4 + 0x18);
    *(undefined **)((long)ppuVar4 + 0x18) = puVar1;
    _objc_release(uVar5);
  }
  _objc_release(uVar7);
  _objc_release(puVar6);
  return (undefined1 *)ppuVar4;
}



/* Entry: 107db265c; end: 107db2723; -[SCSpectaclesSnapCommandProvider initWithSnaps:metadataProvider:] */

undefined1 *
FUN_107db265c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fb108;
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
    puVar3 = PTR_PTR_1126d1390;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107db2724; end: 107db27cf; -[SCSpectaclesSnapCommandProvider fisheyeDistortionToRenderingDistortionCommand] */

void FUN_107db2724(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000109023a28();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bfb1920(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c124600(uVar1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c087c00(uVar2,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107db27d0; end: 107db2883; -[SCSpectaclesSnapCommandProvider rectificationCommandForCamera:] */

void FUN_107db27d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001090239e0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bfb1920(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c124620(uVar1,param_2,uVar2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c124640(uVar2,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107db2884; end: 107db28ef; -[SCSpectaclesSnapCommandProvider cardboardDistortionCommandForCamera:] */

void FUN_107db2884(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001090239e0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010c0d0de0(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107db28f0; end: 107db292b; -[SCSpectaclesSnapCommandProvider .cxx_destruct] */

void FUN_107db28f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107db292c; end: 107db2f1f; -[SCLensRawDeviceMotionData initWithSpectaclesDataSet:] */

undefined8
FUN_107db292c(undefined8 param_1,double param_2,double param_3,undefined8 param_4,long param_5,
             ulong param_6)

{
  double *pdVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  double *pdVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  float fVar22;
  double dVar23;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  plVar5 = (long *)0x78;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110a0cc00;
  plVar17 = plVar5 + 3;
  plVar5[4] = 0;
  *plVar17 = 0;
  plVar5[6] = 0;
  plVar5[5] = 0;
  plVar5[8] = 0;
  plVar5[7] = 0;
  plVar5[10] = 0;
  plVar5[9] = 0;
  plVar5[0xc] = 0;
  plVar5[0xb] = 0;
  plVar5[0xe] = 0;
  plVar5[0xd] = 0;
  uVar6 = param_6;
  func_0x00010bfeae00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf529e0();
  lVar12 = plVar5[3];
  if ((ulong)((plVar5[5] - lVar12 >> 3) * -0x5555555555555555) < uVar7) {
    if (uVar7 < 0xaaaaaaaaaaaaaab) {
      lVar14 = plVar5[4];
      FUN_107db2f34();
      lVar12 = uVar7 + (lVar14 - lVar12);
      lVar14 = param_5 * 0x18;
      param_5 = plVar5[3];
      lVar15 = lVar12 - (plVar5[4] - param_5);
      _memcpy(lVar15);
      lVar8 = plVar5[3];
      plVar5[3] = lVar15;
      plVar5[4] = lVar12;
      plVar5[5] = uVar7 + lVar14;
      if (lVar8 != 0) {
        __ZdlPv();
      }
      goto LAB_107db2a48;
    }
  }
  else {
LAB_107db2a48:
    _objc_release(uVar6);
    uVar6 = param_6;
    func_0x00010bfeae00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf529e0();
    lVar12 = plVar5[6];
    if ((ulong)((plVar5[8] - lVar12 >> 3) * -0x5555555555555555) < uVar7) {
      if (0xaaaaaaaaaaaaaaa < uVar7) {
        FUN_107db2f78();
        goto LAB_107db2e84;
      }
      lVar14 = plVar5[7];
      FUN_107db2f8c();
      lVar12 = uVar7 + (lVar14 - lVar12);
      lVar14 = param_5 * 0x18;
      param_5 = plVar5[6];
      lVar15 = lVar12 - (plVar5[7] - param_5);
      _memcpy(lVar15);
      lVar8 = plVar5[6];
      plVar5[6] = lVar15;
      plVar5[7] = lVar12;
      plVar5[8] = uVar7 + lVar14;
      if (lVar8 != 0) {
        __ZdlPv();
      }
    }
    _objc_release(uVar6);
    dVar19 = 0.0;
    uVar6 = param_6;
    func_0x00010bfeae00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf52a60();
    lVar12 = lRam0000000000000000;
    if (uVar7 == 0) {
      _objc_release(uVar6);
LAB_107db2d6c:
      plVar17 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar3) {
          *plVar17 = *plVar17 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else {
      do {
        uVar18 = 0;
        do {
          if (lRam0000000000000000 != lVar12) {
            _objc_enumerationMutation(uVar6);
          }
          lVar8 = *(long *)(uVar18 * 8);
          lVar14 = lVar8;
          func_0x00010c2709c0();
          func_0x00010beec920(lVar8);
          func_0x00010beec920(lVar8);
          dVar21 = param_2;
          func_0x00010beec920(lVar8);
          dVar20 = (double)lVar14;
          dVar23 = dVar20 / 1000.0;
          fVar22 = (float)param_3;
          pdVar1 = (double *)plVar5[4];
          if (pdVar1 < (double *)plVar5[5]) {
            *pdVar1 = dVar23;
            *(float *)(pdVar1 + 1) = (float)dVar19;
            *(float *)((long)pdVar1 + 0xc) = (float)param_2;
            pdVar13 = pdVar1 + 3;
            *(float *)(pdVar1 + 2) = fVar22;
          }
          else {
            lVar14 = (long)pdVar1 - *plVar17;
            uVar10 = (lVar14 >> 3) * -0x5555555555555555 + 1;
            if (0xaaaaaaaaaaaaaaa < uVar10) {
              FUN_107db2f20();
              goto LAB_107db2e84;
            }
            lVar15 = plVar5[5] - *plVar17 >> 3;
            uVar11 = lVar15 * 0x5555555555555556;
            if (uVar11 < uVar10 || uVar11 - uVar10 == 0) {
              uVar11 = uVar10;
            }
            if (0x555555555555554 < (ulong)(lVar15 * -0x5555555555555555)) {
              uVar11 = 0xaaaaaaaaaaaaaaa;
            }
            FUN_107db2f34();
            pdVar1 = (double *)(uVar11 + lVar14);
            lVar14 = param_5 * 0x18;
            *pdVar1 = dVar23;
            *(float *)(pdVar1 + 1) = (float)dVar19;
            *(float *)((long)pdVar1 + 0xc) = (float)param_2;
            *(float *)(pdVar1 + 2) = fVar22;
            pdVar13 = pdVar1 + 3;
            param_5 = *plVar17;
            lVar16 = (long)pdVar1 - (plVar5[4] - param_5);
            _memcpy(lVar16);
            lVar15 = *plVar17;
            *plVar17 = lVar16;
            plVar5[4] = (long)pdVar13;
            plVar5[5] = uVar11 + lVar14;
            if (lVar15 != 0) {
              __ZdlPv();
            }
          }
          plVar5[4] = (long)pdVar13;
          func_0x00010c141cc0(lVar8);
          dVar19 = dVar20;
          func_0x00010c141cc0(lVar8);
          param_2 = dVar21;
          func_0x00010c141cc0(lVar8);
          fVar22 = (float)param_3;
          pdVar1 = (double *)plVar5[7];
          if (pdVar1 < (double *)plVar5[8]) {
            *pdVar1 = dVar23;
            *(float *)(pdVar1 + 1) = (float)dVar20;
            *(float *)((long)pdVar1 + 0xc) = (float)dVar21;
            pdVar13 = pdVar1 + 3;
            *(float *)(pdVar1 + 2) = fVar22;
          }
          else {
            lVar14 = (long)pdVar1 - plVar5[6];
            uVar10 = (lVar14 >> 3) * -0x5555555555555555 + 1;
            if (0xaaaaaaaaaaaaaaa < uVar10) {
              FUN_107db2f78();
              goto LAB_107db2e84;
            }
            lVar8 = plVar5[8] - plVar5[6] >> 3;
            uVar11 = lVar8 * 0x5555555555555556;
            if (uVar11 < uVar10 || uVar11 - uVar10 == 0) {
              uVar11 = uVar10;
            }
            if (0x555555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
              uVar11 = 0xaaaaaaaaaaaaaaa;
            }
            FUN_107db2f8c();
            pdVar1 = (double *)(uVar11 + lVar14);
            lVar14 = param_5 * 0x18;
            *pdVar1 = dVar23;
            *(float *)(pdVar1 + 1) = (float)dVar20;
            *(float *)((long)pdVar1 + 0xc) = (float)dVar21;
            *(float *)(pdVar1 + 2) = fVar22;
            pdVar13 = pdVar1 + 3;
            param_5 = plVar5[6];
            lVar15 = (long)pdVar1 - (plVar5[7] - param_5);
            _memcpy(lVar15);
            lVar8 = plVar5[6];
            plVar5[6] = lVar15;
            plVar5[7] = (long)pdVar13;
            plVar5[8] = uVar11 + lVar14;
            if (lVar8 != 0) {
              __ZdlPv();
            }
          }
          plVar5[7] = (long)pdVar13;
          uVar18 = uVar18 + 1;
        } while (uVar7 != uVar18);
        uVar7 = uVar6;
        func_0x00010bf52a60();
      } while (uVar7 != 0);
      _objc_release(uVar6);
      if (plVar5 != (long *)0x0) goto LAB_107db2d6c;
    }
    func_0x00010c01d4c0(param_4);
    _objc_retain();
    if (plVar5 != (long *)0x0) {
      plVar17 = plVar5 + 1;
      do {
        lVar12 = *plVar17;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar3) {
          *plVar17 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (plVar5 != (long *)0x0) {
      plVar17 = plVar5 + 1;
      do {
        lVar12 = *plVar17;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar3) {
          *plVar17 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    _objc_release(param_6);
    _objc_release(param_4);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      return param_4;
    }
    ___stack_chk_fail();
  }
  FUN_107db2f20();
LAB_107db2e84:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x107db2e88);
  (*pcVar4)();
}



/* Entry: 107db2f20; end: 107db2f33;  */

void FUN_107db2f20(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (puVar1 < (undefined *)0xaaaaaaaaaaaaaab) {
    __Znwm((long)puVar1 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  puVar2 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (puVar2 < (undefined8 *)0xaaaaaaaaaaaaaab) {
    __Znwm((long)puVar2 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  *puVar2 = &PTR_FUN_110a0cc00;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107db2f34; end: 107db2f77;  */

void FUN_107db2f34(ulong param_1)

{
  undefined8 *puVar1;
  
  if (param_1 < 0xaaaaaaaaaaaaaab) {
    __Znwm(param_1 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (puVar1 < (undefined8 *)0xaaaaaaaaaaaaaab) {
    __Znwm((long)puVar1 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  *puVar1 = &PTR_FUN_110a0cc00;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107db2f78; end: 107db2f8b;  */

void FUN_107db2f78(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (puVar1 < (undefined8 *)0xaaaaaaaaaaaaaab) {
    __Znwm((long)puVar1 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  *puVar1 = &PTR_FUN_110a0cc00;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107db2f8c; end: 107db2fcf;  */

void FUN_107db2f8c(undefined8 *param_1)

{
  if (param_1 < (undefined8 *)0xaaaaaaaaaaaaaab) {
    __Znwm((long)param_1 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110a0cc00;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107db2fd0; end: 107db2fdf;  */

void FUN_107db2fd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a0cc00;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107db2fe0; end: 107db2fff;  */

void FUN_107db2fe0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a0cc00;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107db3000; end: 107db3063;  */

void FUN_107db3000(long param_1)

{
  if (*(long *)(param_1 + 0x60) != 0) {
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x60);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x48);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x30);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107db3064; end: 107db3067;  */

void FUN_107db3064(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107db3068; end: 107db30bf;  */

long FUN_107db3068(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 107db30c0; end: 107db31c3; -[SCSpectaclesImuDataFrame initWithVLKFrame:timestamp:] */

undefined1 *
FUN_107db30c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126fb110;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010beec900();
    *(double *)((long)puVar1 + 0x10) = (double)-(int)uVar2 / 16384.0;
    uVar2 = param_3;
    func_0x00010beec8e0();
    *(double *)((long)puVar1 + 0x18) = (double)-(int)uVar2 / 16384.0;
    uVar2 = param_3;
    func_0x00010beec8c0();
    *(double *)((long)puVar1 + 0x20) = (double)-(int)uVar2 / 16384.0;
    uVar2 = param_3;
    func_0x00010bfcfcc0();
    *(double *)((long)puVar1 + 0x28) = (double)-(int)uVar2 / 939.6507840145499;
    uVar2 = param_3;
    func_0x00010bfcfca0();
    *(double *)((long)puVar1 + 0x30) = (double)-(int)uVar2 / 939.6507840145499;
    uVar2 = param_3;
    func_0x00010bfcfc80();
    *(double *)((long)puVar1 + 0x38) = (double)-(int)uVar2 / 939.6507840145499;
    *(undefined8 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107db31c4; end: 107db33bb; -[SCSpectaclesImuDataFrame initWithMLBFrame:transformOffset:timestampOffset:] */

undefined8 ***
FUN_107db31c4(undefined8 ***param_1,undefined8 param_2,ulong param_3,double *param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 **ppuStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010beec8c0();
  uVar2 = param_3;
  func_0x00010beec8e0();
  if ((int)uVar1 == (int)uVar2) {
    uVar1 = param_3;
    func_0x00010beec8e0();
    uVar2 = param_3;
    func_0x00010beec900();
    if ((int)uVar1 == (int)uVar2) {
      pppuVar3 = param_1;
      pppuVar4 = (undefined8 ***)0x0;
      goto LAB_107db3390;
    }
  }
  puStack_48 = PTR_PTR_1126fb110;
  pppuVar3 = &ppuStack_50;
  ppuStack_50 = param_1;
  _objc_msgSendSuper2(pppuVar3,PTR_s_init_1125d9248);
  if (pppuVar3 != (undefined8 ***)0x0) {
    uVar1 = param_3;
    func_0x00010beec8c0();
    dVar5 = (double)(int)uVar1;
    uVar1 = param_3;
    func_0x00010beec8e0();
    dVar6 = (double)(int)uVar1;
    uVar1 = param_3;
    func_0x00010beec900();
    dVar7 = (double)(int)uVar1;
    dVar9 = *param_4;
    dVar8 = param_4[2];
    dVar10 = param_4[4];
    dVar11 = param_4[6];
    dVar13 = param_4[8];
    dVar12 = param_4[10];
    pppuVar3[3] = (undefined8 **)
                  (param_4[1] * 6.103515625e-05 * dVar5 + param_4[5] * 6.103515625e-05 * dVar6 +
                  param_4[9] * 6.103515625e-05 * dVar7);
    pppuVar3[2] = (undefined8 **)
                  (dVar9 * 6.103515625e-05 * dVar5 + dVar10 * 6.103515625e-05 * dVar6 +
                  dVar13 * 6.103515625e-05 * dVar7);
    pppuVar3[4] = (undefined8 **)
                  (dVar5 * dVar8 * 6.103515625e-05 + dVar6 * dVar11 * 6.103515625e-05 +
                  dVar7 * dVar12 * 6.103515625e-05);
    uVar1 = param_3;
    func_0x00010bfcfc80();
    dVar5 = (double)(int)uVar1;
    uVar1 = param_3;
    func_0x00010bfcfca0();
    dVar6 = (double)(int)uVar1;
    uVar1 = param_3;
    func_0x00010bfcfcc0();
    dVar7 = (double)(int)uVar1;
    dVar9 = *param_4;
    dVar8 = param_4[2];
    dVar10 = param_4[4];
    dVar11 = param_4[6];
    dVar13 = param_4[8];
    dVar12 = param_4[10];
    pppuVar3[6] = (undefined8 **)
                  (param_4[1] * 0.0005321125768275396 * dVar5 +
                   param_4[5] * 0.0005321125768275396 * dVar6 +
                  param_4[9] * 0.0005321125768275396 * dVar7);
    pppuVar3[5] = (undefined8 **)
                  (dVar9 * 0.0005321125768275396 * dVar5 + dVar10 * 0.0005321125768275396 * dVar6 +
                  dVar13 * 0.0005321125768275396 * dVar7);
    pppuVar3[7] = (undefined8 **)
                  (dVar5 * dVar8 * 0.0005321125768275396 + dVar6 * dVar11 * 0.0005321125768275396 +
                  dVar7 * dVar12 * 0.0005321125768275396);
    uVar1 = param_3;
    func_0x00010c26f900();
    pppuVar3[1] = (undefined8 **)((uVar1 & 0xffffffff) - param_5);
  }
  _objc_retain(pppuVar3);
  pppuVar4 = pppuVar3;
LAB_107db3390:
  _objc_release(param_3);
  _objc_release(pppuVar3);
  return pppuVar4;
}



/* Entry: 107db33bc; end: 107db3457; -[SCSpectaclesImuDataFrame initWithImuFrame:timestampOffset:] */

undefined1 *
FUN_107db33bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,long param_7)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_6);
  puStack_38 = PTR_PTR_1126fb110;
  uStack_40 = param_4;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beec920(param_6);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    func_0x00010c141cc0(param_6);
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
    *(undefined8 *)((long)puVar1 + 0x30) = param_2;
    *(undefined8 *)((long)puVar1 + 0x38) = param_3;
    lVar2 = param_6;
    func_0x00010c2709c0();
    *(long *)((long)puVar1 + 8) = lVar2 - param_7;
  }
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 107db3458; end: 107db3513; -[SCSpectaclesImuDataFrame encodedVLKFrame] */

void FUN_107db3458(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d7d58;
  _objc_alloc_init(PTR_PTR_1126d7d58);
  func_0x00010c160ba0();
  func_0x00010c160b80(puVar1,param_2,(int)(*(double *)(param_1 + 0x18) * -16384.0));
  func_0x00010c160b60(puVar1,param_2,(int)(*(double *)(param_1 + 0x20) * -16384.0));
  func_0x00010c1a4e20(puVar1,param_2,(int)(*(double *)(param_1 + 0x28) * -939.6507840145499));
  func_0x00010c1a4e00(puVar1,param_2,(int)(*(double *)(param_1 + 0x30) * -939.6507840145499));
  func_0x00010c1a4de0(puVar1,param_2,(int)(*(double *)(param_1 + 0x38) * -939.6507840145499));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107db3514; end: 107db370b; -[SCSpectaclesImuDataFrame encodedMLBFrameWithTransformOffset:timestampOffset:] */

void FUN_107db3514(long param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  dVar2 = *(double *)(param_1 + 0x10);
  dVar3 = *(double *)(param_1 + 0x18);
  dVar4 = *(double *)(param_1 + 0x20);
  uStack_78 = param_3[5];
  uStack_80 = param_3[4];
  uStack_68 = param_3[7];
  uStack_70 = param_3[6];
  uStack_58 = param_3[9];
  uStack_60 = param_3[8];
  uStack_48 = param_3[0xb];
  uStack_50 = param_3[10];
  uStack_98 = param_3[1];
  uStack_a0 = *param_3;
  uStack_88 = param_3[3];
  uStack_90 = param_3[2];
  ___invert_d3(&dStack_100,&uStack_a0);
  dVar9 = dStack_f8 * 16384.0;
  dVar5 = dStack_f0 * 16384.0;
  dVar13 = dStack_d0 * 16384.0;
  dVar12 = dStack_d8 * 16384.0;
  dVar10 = dStack_b8 * 16384.0;
  dVar11 = dStack_b0 * 16384.0;
  dVar6 = *(double *)(param_1 + 0x28);
  dVar7 = *(double *)(param_1 + 0x30);
  dVar8 = *(double *)(param_1 + 0x38);
  uStack_78 = param_3[5];
  uStack_80 = param_3[4];
  uStack_68 = param_3[7];
  uStack_70 = param_3[6];
  uStack_58 = param_3[9];
  uStack_60 = param_3[8];
  uStack_48 = param_3[0xb];
  uStack_50 = param_3[10];
  uStack_98 = param_3[1];
  uStack_a0 = *param_3;
  uStack_88 = param_3[3];
  uStack_90 = param_3[2];
  ___invert_d3(&dStack_100,&uStack_a0);
  puVar1 = PTR_PTR_1126d7d60;
  _objc_alloc_init(PTR_PTR_1126d7d60);
  func_0x00010c160b60();
  func_0x00010c160b80(puVar1,param_2,(int)(dVar9 * dVar2 + dVar12 * dVar3 + dVar10 * dVar4));
  func_0x00010c160ba0(puVar1,param_2,(int)(dVar2 * dVar5 + dVar3 * dVar13 + dVar4 * dVar11));
  func_0x00010c1a4de0(puVar1,param_2,
                      (int)(dStack_100 * 1879.3015680290998 * dVar6 +
                            dStack_e0 * 1879.3015680290998 * dVar7 +
                           dStack_c0 * 1879.3015680290998 * dVar8));
  func_0x00010c1a4e00(puVar1,param_2,
                      (int)(dStack_f8 * 1879.3015680290998 * dVar6 +
                            dStack_d8 * 1879.3015680290998 * dVar7 +
                           dStack_b8 * 1879.3015680290998 * dVar8));
  func_0x00010c1a4e20(puVar1,param_2,
                      (int)(dVar6 * dStack_f0 * 1879.3015680290998 +
                            dVar7 * dStack_d0 * 1879.3015680290998 +
                           dVar8 * dStack_b0 * 1879.3015680290998));
  func_0x00010c215200(puVar1,param_2,*(int *)(param_1 + 8) + param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107db370c; end: 107db3717; -[SCSpectaclesImuDataFrame acceleration] */

undefined8 FUN_107db370c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107db3718; end: 107db3723; -[SCSpectaclesImuDataFrame setAcceleration:] */

void FUN_107db3718(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  *(undefined8 *)(param_4 + 0x10) = param_1;
  *(undefined8 *)(param_4 + 0x18) = param_2;
  *(undefined8 *)(param_4 + 0x20) = param_3;
  return;
}



/* Entry: 107db3724; end: 107db372f; -[SCSpectaclesImuDataFrame rotationRate] */

undefined8 FUN_107db3724(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107db3730; end: 107db373b; -[SCSpectaclesImuDataFrame setRotationRate:] */

void FUN_107db3730(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  *(undefined8 *)(param_4 + 0x28) = param_1;
  *(undefined8 *)(param_4 + 0x30) = param_2;
  *(undefined8 *)(param_4 + 0x38) = param_3;
  return;
}



/* Entry: 107db373c; end: 107db3743; -[SCSpectaclesImuDataFrame timestamp] */

undefined8 FUN_107db373c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107db3744; end: 107db374b; -[SCSpectaclesImuDataFrame setTimestamp:] */

void FUN_107db3744(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 107db374c; end: 107db37df; -[SCSpectaclesTimestampFrame initWithFrame:timestampOffset:] */

undefined1 * FUN_107db374c(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fb118;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c246460();
    *(ulong *)((long)puVar1 + 8) = (uVar2 & 0xffffffff) - param_4;
    uVar2 = param_3;
    func_0x00010bf98280();
    *(ulong *)((long)puVar1 + 0x10) = (uVar2 & 0xffffffff) - param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107db37e0; end: 107db386b; -[SCSpectaclesTimestampFrame initWithTimestampFrame:timestampOffset:] */

undefined1 * FUN_107db37e0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fb118;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = param_3;
    func_0x00010c24fb20();
    *(long *)((long)puVar1 + 8) = lVar2 - param_4;
    lVar2 = param_3;
    func_0x00010bf94e80();
    *(long *)((long)puVar1 + 0x10) = lVar2 - param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107db386c; end: 107db38c3; -[SCSpectaclesTimestampFrame encodedFrameWithTimestampOffset:] */

void FUN_107db386c(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d7d68;
  _objc_alloc_init(PTR_PTR_1126d7d68);
  func_0x00010c206700();
  func_0x00010c196ca0(puVar1,param_2,*(int *)(param_1 + 0x10) + param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107db38c4; end: 107db38cb; -[SCSpectaclesTimestampFrame startOfFrame] */

undefined8 FUN_107db38c4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107db38cc; end: 107db38d3; -[SCSpectaclesTimestampFrame setStartOfFrame:] */

void FUN_107db38cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 107db38d4; end: 107db38db; -[SCSpectaclesTimestampFrame endOfFrame] */

undefined8 FUN_107db38d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107db38dc; end: 107db38e3; -[SCSpectaclesTimestampFrame setEndOfFrame:] */

void FUN_107db38dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 107db38e4; end: 107db3b6f; -[SCSpectaclesImuDataSet initWithLagunaData:] */

undefined8 * FUN_107db38e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  puStack_68 = PTR_PTR_1126fb120;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 == (undefined8 *)0x0) {
LAB_107db3b30:
    _objc_retain(puVar1);
    puVar9 = puVar1;
  }
  else {
    puVar2 = PTR_PTR_1126d7d70;
    _objc_alloc();
    func_0x00010c008360();
    _objc_retain(0);
    if ((puVar2 != (undefined *)0x0) &&
       (puVar3 = puVar2, func_0x00010bfeae40(), puVar3 != (undefined *)0x0)) {
      puVar3 = puVar2;
      func_0x00010bfeae40();
      puVar4 = puVar2;
      func_0x00010bfeae60();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar4;
      func_0x00010bfb7180();
      _objc_release(puVar4);
      if ((undefined *)(long)(int)puVar10 <= puVar3) {
        puVar3 = puVar2;
        func_0x00010bfeae60();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bfeaec0();
        puVar1[4] = (ulong)puVar4 & 0xffffffff;
        puVar4 = puVar3;
        func_0x00010bfeaea0();
        puVar1[3] = (long)(int)puVar4;
        puVar4 = puVar2;
        func_0x00010bfeae60(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb7180();
        _objc_release(puVar4);
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar2;
        func_0x00010bfeae40();
        if (puVar10 != (undefined *)0x0) {
          puVar10 = (undefined *)0x0;
          do {
            puVar5 = PTR_PTR_1126d7d78;
            _objc_alloc(PTR_PTR_1126d7d78);
            puVar6 = puVar2;
            func_0x00010bfeae20(puVar2);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar6;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c05fae0(puVar5);
            func_0x00010befa120(puVar4);
            _objc_release(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar6);
            puVar10 = puVar10 + 1;
            puVar5 = puVar2;
            func_0x00010bfeae40();
          } while (puVar10 < puVar5);
        }
        puVar10 = puVar4;
        func_0x00010bf51e00();
        uVar8 = puVar1[1];
        puVar1[1] = puVar10;
        _objc_release(uVar8);
        _objc_release(puVar4);
        _objc_release(puVar3);
        _objc_release(puVar2);
        _objc_release(0);
        goto LAB_107db3b30;
      }
    }
    _objc_release(puVar2);
    _objc_release(0);
    puVar9 = (undefined8 *)0x0;
  }
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar9;
}



/* Entry: 107db3b70; end: 107db3f2b; -[SCSpectaclesImuDataSet initWithMLBData:offset:] */

undefined8 * FUN_107db3b70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  undefined8 *puVar10;
  undefined *puVar11;
  undefined8 uStack_108;
  undefined *puStack_100;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_100 = PTR_PTR_1126fb120;
  puVar10 = &uStack_108;
  puVar8 = PTR_s_init_1125d9248;
  uStack_108 = param_1;
  _objc_msgSendSuper2(puVar10,PTR_s_init_1125d9248);
  if (puVar10 == (undefined8 *)0x0) {
LAB_107db3eb0:
    _objc_retain(puVar10);
  }
  else {
    puVar2 = PTR_PTR_1126d7d80;
    _objc_alloc();
    func_0x00010c008360();
    _objc_retain(0);
    puVar3 = puVar2;
    func_0x00010bfeadc0();
    if (puVar3 != (undefined *)0x0) {
      puVar3 = puVar2;
      func_0x00010bfeada0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = puVar4;
      func_0x00010bfead60();
      if ((puVar3 != (undefined *)0x0) &&
         (puVar3 = puVar4, func_0x00010c29a360(), puVar3 != (undefined *)0x0)) {
        puVar3 = puVar4;
        func_0x00010bfeae60();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010bfeaec0();
        puVar10[4] = (ulong)puVar5 & 0xffffffff;
        _objc_release(puVar3);
        puVar3 = puVar4;
        func_0x00010bfeae60();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010bfeaea0();
        puVar10[3] = (long)(int)puVar5;
        _objc_release(puVar3);
        puVar3 = puVar4;
        func_0x00010c29a340();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c246460();
        puVar10[5] = (ulong)puVar6 & 0xffffffff;
        _objc_release(puVar5);
        _objc_release(puVar3);
        puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar4;
        func_0x00010bfead40();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar6;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (puVar3 != (undefined *)0x0) {
          puVar11 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(puVar6);
            }
            puVar7 = PTR_PTR_1126d7d78;
            _objc_alloc();
            func_0x00010c027dc0();
            if (puVar7 != (undefined *)0x0) {
              func_0x00010befa120(puVar5);
            }
            _objc_release(puVar7);
            puVar11 = puVar11 + 1;
          } while (puVar3 != puVar11);
          puVar3 = puVar6;
          func_0x00010bf52a60();
        }
        _objc_release(puVar6);
        puVar3 = puVar5;
        func_0x00010bf51e00();
        uVar9 = puVar10[1];
        puVar10[1] = puVar3;
        _objc_release(uVar9);
        puVar3 = puVar4;
        func_0x00010c29a340();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar10);
        puVar6 = puVar3;
        func_0x00010c0b8600();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = puVar10[2];
        puVar10[2] = puVar6;
        _objc_release(uVar9);
        _objc_release(puVar3);
        _objc_release(puVar10);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar2);
        _objc_release(0);
        goto LAB_107db3eb0;
      }
      _objc_release(puVar4);
    }
    _objc_release(puVar2);
    _objc_release(0);
    puVar10 = (undefined8 *)0x0;
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar10;
  }
  ___stack_chk_fail();
  puVar10 = (undefined8 *)PTR_PTR_1126d7d88;
  _objc_retain(puVar8);
  _objc_alloc(puVar10);
  func_0x00010c015020();
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return puVar10;
}



/* Entry: 107db3f2c; end: 107db3f8b;  */

void FUN_107db3f2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d7d88;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c015020();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107db3f8c; end: 107db402b; -[SCSpectaclesImuDataSet initWithMalibuData:] */

undefined8 FUN_107db3f8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = lRam0000000113727b40;
  _objc_retain(param_3);
  if (lVar1 != -1) {
    func_0x00010002a2fc(0x113727b40,&PTR___NSConcreteGlobalBlock_110a0ccf0);
  }
  func_0x00010c027da0(param_1);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 107db402c; end: 107db40cb; -[SCSpectaclesImuDataSet initWithNewportData:] */

undefined8 FUN_107db402c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = lRam0000000113727b48;
  _objc_retain(param_3);
  if (lVar1 != -1) {
    func_0x00010002a2fc(0x113727b48,&PTR___NSConcreteGlobalBlock_110a0cd10);
  }
  func_0x00010c027da0(param_1);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 107db40cc; end: 107db4723; -[SCSpectaclesImuDataSet initWithConcatenatedDataSets:trimmedToTimeRange:] */

undefined ***
FUN_107db40cc(undefined **param_1,undefined8 param_2,undefined **param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined ***pppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puStack_4a0;
  undefined *puStack_498;
  undefined *puStack_490;
  undefined **ppuStack_480;
  undefined **ppuStack_478;
  undefined1 *puStack_470;
  code *pcStack_468;
  undefined8 *puStack_458;
  undefined **ppuStack_450;
  long lStack_448;
  undefined ***pppuStack_440;
  undefined **ppuStack_438;
  long lStack_430;
  undefined **ppuStack_428;
  long lStack_420;
  undefined **ppuStack_418;
  undefined *puStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined *puStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined *puStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined *puStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined *puStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined *puStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined *puStack_320;
  undefined8 uStack_318;
  code *pcStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined **ppuStack_210;
  undefined *puStack_208;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_208 = PTR_PTR_1126fb120;
  pppuVar2 = &ppuStack_210;
  puVar7 = PTR_s_init_1125d9248;
  ppuStack_210 = param_1;
  _objc_msgSendSuper2(pppuVar2,PTR_s_init_1125d9248);
  if (pppuVar2 != (undefined ***)0x0) {
    ppuVar3 = param_3;
    puStack_458 = param_4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010bfeaec0();
    pppuVar2[4] = ppuVar4;
    _objc_release(ppuVar3);
    ppuVar3 = param_3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c1497c0();
    pppuVar2[3] = ppuVar4;
    _objc_release(ppuVar3);
    ppuVar3 = param_3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010bfb1400();
    pppuVar2[5] = ppuVar4;
    _objc_release(ppuVar3);
    param_1 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    plStack_240 = (long *)0x0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    _objc_retain(param_3);
    ppuStack_450 = param_3;
    func_0x00010bf52a60();
    ppuStack_438 = param_3;
    if (param_3 != (undefined **)0x0) {
      lStack_448 = *plStack_240;
      pppuStack_440 = pppuVar2;
      ppuStack_438 = param_3;
      ppuStack_418 = ppuVar3;
      do {
        param_1 = (undefined **)0x0;
        do {
          if (*plStack_240 != lStack_448) {
            _objc_enumerationMutation(ppuStack_450);
          }
          lVar10 = *(long *)(lStack_248 + (long)param_1 * 8);
          ppuStack_428 = param_1;
          func_0x00010bfb1400(lVar10);
          uStack_288 = 0;
          uStack_290 = 0;
          uStack_278 = 0;
          plStack_280 = (long *)0x0;
          uStack_268 = 0;
          uStack_270 = 0;
          uStack_258 = 0;
          uStack_260 = 0;
          lStack_430 = lVar10;
          func_0x00010bfeae00();
          _objc_retainAutoreleasedReturnValue();
          lStack_420 = lVar10;
          func_0x00010bf52a60();
          if (lVar10 != 0) {
            lVar12 = *plStack_280;
            do {
              lVar11 = 0;
              do {
                if (*plStack_280 != lVar12) {
                  _objc_enumerationMutation(lStack_420);
                }
                puVar13 = PTR_PTR_1126d7d78;
                _objc_alloc();
                func_0x00010c01d500();
                ppuVar5 = ppuVar3;
                func_0x00010c089820();
                _objc_retainAutoreleasedReturnValue();
                if (ppuVar5 == (undefined **)0x0) {
LAB_107db4338:
                  func_0x00010befa120(ppuVar3);
                }
                else {
                  func_0x00010c089820();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar9 = ppuVar3;
                  func_0x00010c2709c0();
                  puVar6 = puVar13;
                  func_0x00010c2709c0();
                  _objc_release(ppuVar3);
                  _objc_release(ppuVar5);
                  ppuVar3 = ppuStack_418;
                  if ((long)ppuVar9 < (long)puVar6) goto LAB_107db4338;
                }
                _objc_release(puVar13);
                lVar11 = lVar11 + 1;
              } while (lVar10 != lVar11);
              lVar10 = lStack_420;
              func_0x00010bf52a60();
            } while (lVar10 != 0);
          }
          _objc_release(lStack_420);
          uStack_2a8 = 0;
          uStack_2b0 = 0;
          uStack_298 = 0;
          uStack_2a0 = 0;
          uStack_2c8 = 0;
          uStack_2d0 = 0;
          uStack_2b8 = 0;
          plStack_2c0 = (long *)0x0;
          lVar10 = lStack_430;
          func_0x00010c270a40();
          _objc_retainAutoreleasedReturnValue();
          lStack_420 = lVar10;
          func_0x00010bf52a60();
          if (lVar10 != 0) {
            lVar12 = *plStack_2c0;
            do {
              lVar11 = 0;
              do {
                if (*plStack_2c0 != lVar12) {
                  _objc_enumerationMutation(lStack_420);
                }
                puVar13 = PTR_PTR_1126d7d88;
                _objc_alloc();
                func_0x00010c052a60();
                ppuVar3 = ppuVar4;
                func_0x00010c089820();
                _objc_retainAutoreleasedReturnValue();
                if (ppuVar3 == (undefined **)0x0) {
LAB_107db4454:
                  func_0x00010befa120(ppuVar4);
                }
                else {
                  ppuVar5 = ppuVar4;
                  func_0x00010c089820();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar9 = ppuVar5;
                  func_0x00010c24fb20();
                  puVar6 = puVar13;
                  func_0x00010bf94e80();
                  _objc_release(ppuVar5);
                  _objc_release(ppuVar3);
                  if ((long)ppuVar9 < (long)puVar6) goto LAB_107db4454;
                }
                _objc_release(puVar13);
                lVar11 = lVar11 + 1;
              } while (lVar10 != lVar11);
              lVar10 = lStack_420;
              func_0x00010bf52a60();
            } while (lVar10 != 0);
          }
          _objc_release(lStack_420);
          ppuVar3 = ppuStack_418;
          pppuVar2 = pppuStack_440;
          param_1 = (undefined **)((long)ppuStack_428 + 1);
        } while (param_1 != ppuStack_438);
        ppuVar5 = ppuStack_450;
        func_0x00010bf52a60();
        ppuStack_438 = ppuVar5;
      } while (ppuVar5 != (undefined **)0x0);
    }
    _objc_release(ppuStack_450);
    puVar1 = puStack_458;
    puVar13 = PTR___NSConcreteStackBlock_11034bd00;
    ppuVar5 = ppuVar4;
    if (((((*(byte *)((long)puStack_458 + 0xc) & 1) == 0) ||
         ((*(byte *)((long)puStack_458 + 0x24) & 1) == 0)) || (puStack_458[5] != 0)) ||
       ((long)puStack_458[3] < 0)) {
      ppuVar9 = ppuVar3;
      func_0x00010bf51e00();
      ppuVar8 = pppuVar2[1];
      pppuVar2[1] = ppuVar9;
      _objc_release(ppuVar8);
      func_0x00010bf51e00();
    }
    else {
      puStack_320 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_318 = 0xc0000000;
      pcStack_310 = FUN_107db4724;
      puStack_308 = &UNK_110a0cc70;
      uStack_2f8 = puStack_458[1];
      uStack_300 = *puStack_458;
      uStack_2e8 = puStack_458[3];
      uStack_2f0 = puStack_458[2];
      uStack_2d8 = puStack_458[5];
      uStack_2e0 = puStack_458[4];
      func_0x00010bfece40();
      puStack_370 = puVar13;
      uStack_368 = 0xc0000000;
      uStack_360 = 0x107db4784;
      puStack_358 = &UNK_110a0cc70;
      uStack_348 = puVar1[1];
      uStack_350 = *puVar1;
      uStack_338 = puVar1[3];
      uStack_340 = puVar1[2];
      uStack_328 = puVar1[5];
      uStack_330 = puVar1[4];
      func_0x00010bfece40();
      func_0x00010bf529e0();
      func_0x00010bf529e0();
      puStack_3c0 = puVar13;
      uStack_3b8 = 0xc0000000;
      uStack_3b0 = 0x107db47f0;
      puStack_3a8 = &UNK_110a0cc90;
      uStack_398 = puVar1[1];
      uStack_3a0 = *puVar1;
      uStack_388 = puVar1[3];
      uStack_390 = puVar1[2];
      uStack_378 = puVar1[5];
      uStack_380 = puVar1[4];
      ppuVar9 = ppuVar4;
      func_0x00010bfece40();
      puStack_410 = puVar13;
      uStack_408 = 0xc0000000;
      uStack_400 = 0x107db4850;
      puStack_3f8 = &UNK_110a0cc90;
      uStack_3e8 = puVar1[1];
      uStack_3f0 = *puVar1;
      uStack_3d8 = puVar1[3];
      uStack_3e0 = puVar1[2];
      uStack_3c8 = puVar1[5];
      uStack_3d0 = puVar1[4];
      func_0x00010bfece40();
      param_1 = ppuVar4;
      func_0x00010bf529e0();
      if ((undefined **)((long)ppuVar9 + -1) <= param_1) {
        param_1 = (undefined **)((long)ppuVar9 + -1);
      }
      func_0x00010bf529e0();
      ppuVar9 = ppuVar3;
      func_0x00010c25e980();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = pppuVar2[1];
      pppuVar2[1] = ppuVar9;
      _objc_release(ppuVar8);
      func_0x00010c25e980();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar9 = pppuVar2[2];
    pppuVar2[2] = ppuVar5;
    _objc_release(ppuVar9);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    param_3 = ppuStack_450;
  }
  ppuVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return pppuVar2;
  }
  ___stack_chk_fail();
  pcStack_468 = FUN_107db4724;
  ppuStack_480 = param_3;
  ppuStack_478 = param_1;
  puStack_470 = &stack0xfffffffffffffff0;
  func_0x00010c2709c0(puVar7);
  puStack_498 = ppuVar3[5];
  puVar13 = ppuVar3[4];
  puStack_490 = ppuVar3[6];
  puStack_4a0 = puVar13;
  _CMTimeGetSeconds(&puStack_4a0);
  return (undefined ***)(ulong)((long)(ulong)(uint)(int)((double)puVar13 * 1000.0) <= (long)puVar7);
}



/* Entry: 107db4724; end: 107db48bb;  */

bool FUN_107db4724(long param_1,long param_2)

{
  double dVar1;
  double dStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x00010c2709c0(param_2);
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  dVar1 = *(double *)(param_1 + 0x20);
  uStack_30 = *(undefined8 *)(param_1 + 0x30);
  dStack_40 = dVar1;
  _CMTimeGetSeconds(&dStack_40);
  return (long)(ulong)(uint)(int)(dVar1 * 1000.0) <= param_2;
}



/* Entry: 107db48bc; end: 107db48d7; -[SCSpectaclesImuDataSet isSupportedMalibuVersion] */

bool FUN_107db48bc(ulong param_1)

{
  func_0x00010bfeaec0();
  return 299 < param_1;
}



/* Entry: 107db48d8; end: 107db48f3; -[SCSpectaclesImuDataSet isSupportedNewportVersion] */

bool FUN_107db48d8(ulong param_1)

{
  func_0x00010bfeaec0();
  return 199 < param_1;
}



/* Entry: 107db48f4; end: 107db49b3; -[SCSpectaclesImuDataSet isValidForVideoOfDuration:] */

bool FUN_107db48f4(double param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = param_2;
  func_0x00010bfeae00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  uVar4 = param_2;
  func_0x00010c1497c0();
  if ((double)uVar3 <= param_1 * 0.5 * (double)uVar4) {
    bVar1 = false;
  }
  else {
    func_0x00010bfeae00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c2709c0();
    bVar1 = param_1 * 0.5 < (double)(long)uVar4;
    _objc_release(uVar3);
    _objc_release(param_2);
  }
  _objc_release(uVar2);
  return bVar1;
}



/* Entry: 107db49b4; end: 107db4cb7; -[SCSpectaclesImuDataSet _mlbDataWithOffset:] */

undefined * FUN_107db49b4(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126d7d80;
  _objc_alloc_init();
  puVar3 = PTR_PTR_1126d7d90;
  _objc_alloc_init();
  puVar4 = puVar2;
  func_0x00010bfeada0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010bfeae60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ab5a0();
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010bfeae60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ab580();
  _objc_release(puVar4);
  lVar8 = param_1;
  func_0x00010bfeae00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar8;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar8);
      }
      uVar7 = *(undefined8 *)(lVar9 * 8);
      puVar4 = puVar3;
      func_0x00010bfead40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf935a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar4);
      _objc_release(uVar7);
      _objc_release(puVar4);
      lVar9 = lVar9 + 1;
    } while (lVar5 != lVar9);
    lVar5 = lVar8;
    func_0x00010bf52a60();
  }
  _objc_release(lVar8);
  func_0x00010c270a40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      uVar7 = *(undefined8 *)(lVar8 * 8);
      puVar4 = puVar3;
      func_0x00010c29a340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf93540();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar4);
      _objc_release(uVar7);
      _objc_release(puVar4);
      lVar8 = lVar8 + 1;
    } while (lVar5 != lVar8);
    lVar5 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  puVar4 = puVar2;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = PTR_PTR_1126d7d70;
    _objc_alloc_init(PTR_PTR_1126d7d70);
    puVar4 = puVar3;
    func_0x00010bfeae60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ab5a0();
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010bfeae60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ab580();
    _objc_release(puVar4);
    func_0x00010bfece40(*(undefined8 *)(puVar2 + 8));
    puVar4 = puVar3;
    func_0x00010bfeae60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f560();
    _objc_release(puVar4);
    lVar6 = *(long *)(puVar2 + 8);
    _objc_retain(lVar6);
    lVar5 = lVar6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar5 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar6);
        }
        uVar7 = *(undefined8 *)(lVar9 * 8);
        puVar2 = puVar3;
        func_0x00010bfeae20(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf93740(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(uVar7);
        _objc_release(puVar2);
        lVar9 = lVar9 + 1;
      } while (lVar5 != lVar9);
      lVar5 = lVar6;
      func_0x00010bf52a60();
    }
    _objc_release(lVar6);
    puVar4 = puVar3;
    func_0x00010bf63640(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
      ___stack_chk_fail();
      func_0x00010c2709c0(param_2);
      return (undefined *)(ulong)(-0x83 < param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return puVar4;
}



/* Entry: 107db4cb8; end: 107db4ea7; -[SCSpectaclesImuDataSet lagunaData] */

undefined * FUN_107db4cb8(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126d7d70;
  _objc_alloc_init(PTR_PTR_1126d7d70);
  puVar3 = puVar2;
  func_0x00010bfeae60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ab5a0();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010bfeae60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ab580();
  _objc_release(puVar3);
  func_0x00010bfece40(*(undefined8 *)(param_1 + 8));
  puVar3 = puVar2;
  func_0x00010bfeae60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f560();
  _objc_release(puVar3);
  lVar6 = *(long *)(param_1 + 8);
  _objc_retain(lVar6);
  lVar4 = lVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar6);
      }
      uVar7 = *(undefined8 *)(lVar8 * 8);
      puVar3 = puVar2;
      func_0x00010bfeae20(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf93740(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3);
      _objc_release(uVar7);
      _objc_release(puVar3);
      lVar8 = lVar8 + 1;
    } while (lVar4 != lVar8);
    lVar4 = lVar6;
    func_0x00010bf52a60();
  }
  _objc_release(lVar6);
  puVar3 = puVar2;
  func_0x00010bf63640(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x00010c2709c0(param_2);
  return (undefined *)(ulong)(-0x83 < param_2);
}



/* Entry: 107db4ea8; end: 107db4ec7;  */

bool FUN_107db4ea8(undefined8 param_1,long param_2)

{
  func_0x00010c2709c0(param_2);
  return -0x83 < param_2;
}



/* Entry: 107db4ec8; end: 107db4f47; -[SCSpectaclesImuDataSet malibuData] */

void FUN_107db4ec8(undefined8 param_1)

{
  if (lRam0000000113727b40 != -1) {
    func_0x00010002a2fc(0x113727b40,&PTR___NSConcreteGlobalBlock_110a0ccf0);
  }
  func_0x00010be60c40(param_1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107db4f48; end: 107db4fc7; -[SCSpectaclesImuDataSet newportData] */

void FUN_107db4f48(undefined8 param_1)

{
  if (lRam0000000113727b48 != -1) {
    func_0x00010002a2fc(0x113727b48,&PTR___NSConcreteGlobalBlock_110a0cd10);
  }
  func_0x00010be60c40(param_1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107db4fc8; end: 107db4fcf; -[SCSpectaclesImuDataSet imuFrames] */

undefined8 FUN_107db4fc8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107db4fd0; end: 107db4fff; -[SCSpectaclesImuDataSet setImuFrames:] */

void FUN_107db4fd0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 107db5000; end: 107db5007; -[SCSpectaclesImuDataSet timestampFrames] */

undefined8 FUN_107db5000(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107db5008; end: 107db5037; -[SCSpectaclesImuDataSet setTimestampFrames:] */

void FUN_107db5008(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107db5038; end: 107db503f; -[SCSpectaclesImuDataSet sampleFrequencyHz] */

undefined8 FUN_107db5038(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107db5040; end: 107db5047; -[SCSpectaclesImuDataSet setSampleFrequencyHz:] */

void FUN_107db5040(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 107db5048; end: 107db504f; -[SCSpectaclesImuDataSet imuVersion] */

undefined8 FUN_107db5048(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107db5050; end: 107db5057; -[SCSpectaclesImuDataSet setImuVersion:] */

void FUN_107db5050(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 107db5058; end: 107db505f; -[SCSpectaclesImuDataSet firstFrameTimestamp] */

undefined8 FUN_107db5058(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107db5060; end: 107db5067; -[SCSpectaclesImuDataSet setFirstFrameTimestamp:] */

void FUN_107db5060(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}


