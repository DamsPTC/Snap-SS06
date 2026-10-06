/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107f6fc98; end: 107f6fe3b;  */

void FUN_107f6fc98(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__OBJC_CLASS___PHAdjustmentData_1126d8808;
  _objc_alloc(PTR__OBJC_CLASS___PHAdjustmentData_1126d8808);
  puVar2 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf09780(puVar2,param_2,puVar3,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c013d40(puVar1,param_2,&PTR____CFConstantStringClassReference_110ec9558,
                      &PTR____CFConstantStringClassReference_110dc0598,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar3);
  if (*(char *)(param_1 + 0x38) == '\x01') {
    puVar2 = PTR__OBJC_CLASS___PHAssetChangeRequest_1126c3948;
    func_0x00010bf5a8e0(PTR__OBJC_CLASS___PHAssetChangeRequest_1126c3948,param_2,
                        *(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    puVar3 = *(undefined **)(param_1 + 0x28);
    func_0x00010bf5a700(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1855e0(puVar2,param_2,puVar3);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___PHContentEditingOutput_1126d8810;
    _objc_alloc(PTR__OBJC_CLASS___PHContentEditingOutput_1126d8810);
    func_0x00010c003480();
    func_0x00010c165dc0();
    puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    puVar4 = puVar2;
    func_0x00010c1304a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d1580(puVar3,param_2,uVar5,puVar4,0);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___PHAssetChangeRequest_1126c3948;
    func_0x00010bf35020(PTR__OBJC_CLASS___PHAssetChangeRequest_1126c3948,param_2,
                        *(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c181e80();
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f6fe3c; end: 107f6fedf;  */

void FUN_107f6fe3c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = param_1;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(lVar1);
    _objc_release(lVar1);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 107f6fee0; end: 107f6fef3;  */

void FUN_107f6fee0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107f6fef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 107f6fef4; end: 107f6ff63;  */

undefined8 FUN_107f6fef4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x000109127dd4();
  if (lVar1 == 1) {
    uVar2 = 0x4066800000000000;
  }
  else {
    lVar1 = param_1;
    func_0x000109127dd4();
    uVar2 = 0x4072c00000000000;
    if (lVar1 != 2) {
      uVar2 = 0x405e000000000000;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 107f6ff64; end: 107f7009f;  */

bool FUN_107f6ff64(double param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  double dVar4;
  
  _objc_retain();
  _objc_retain(param_3);
  FUN_107f6fef4(param_3);
  lVar1 = param_3;
  dVar4 = param_1;
  func_0x000109127d28();
  _objc_release(param_3);
  lVar2 = param_2;
  if ((double)lVar1 <= param_1) {
    if (param_2 != 0) {
      func_0x00010c0c6c20();
      goto LAB_107f6ffd8;
    }
  }
  else if (param_2 != 0) {
    func_0x00010c0c6c20();
    param_1 = (double)lVar1;
LAB_107f6ffd8:
    if (lVar2 == 2) {
      func_0x00010bf8b160(param_2);
      bVar3 = param_1 < dVar4;
      goto LAB_107f6fff8;
    }
  }
  bVar3 = false;
LAB_107f6fff8:
  _objc_release(param_2);
  return bVar3;
}



/* Entry: 107f700a0; end: 107f70217;  */

bool FUN_107f700a0(double param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  double dVar3;
  
  _objc_retain();
  FUN_107f6fef4(param_3);
  lVar2 = param_2;
  dVar3 = param_1;
  func_0x00010c0c6ac0();
  if (((uint)lVar2 >> 0x11 & 1) == 0) {
    if ((param_2 == 0) || (lVar2 = param_2, func_0x00010c0c6c20(), lVar2 != 2)) {
      bVar1 = false;
    }
    else {
      func_0x00010bf8b160(param_2);
      bVar1 = param_1 < dVar3;
    }
  }
  else {
    func_0x00010bf8b160(param_2);
    bVar1 = param_1 <= dVar3 * 8.0;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 107f70218; end: 107f70277;  */

bool FUN_107f70218(double param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  
  _objc_retain();
  if ((param_2 == 0) || (lVar1 = param_2, func_0x00010c0c6c20(), lVar1 != 2)) {
    bVar2 = false;
  }
  else {
    func_0x00010bf8b160(param_2);
    bVar2 = 60.0 < param_1;
  }
  _objc_release(param_2);
  return bVar2;
}



/* Entry: 107f70278; end: 107f702ff;  */

bool FUN_107f70278(double param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  double dVar3;
  
  _objc_retain();
  _objc_retain(param_3);
  if ((param_2 == 0) || (lVar2 = param_2, func_0x00010c0c6c20(), lVar2 != 2)) {
    bVar1 = false;
  }
  else {
    func_0x00010bf8b160(param_2);
    dVar3 = param_1;
    func_0x000108f4a2bc(param_3);
    bVar1 = param_1 < dVar3;
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 107f70300; end: 107f703c3;  */

void FUN_107f70300(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf8b160();
  if ((long)param_1 < 0xe10) {
    if (((long)param_1 / 0x3c) % 0x3c < 1) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dc44d8;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dc44b8;
    }
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ec9578;
  }
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f703c4; end: 107f7047b;  */

undefined1  [16] FUN_107f703c4(undefined8 param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 auStack_60 [16];
  double dStack_50;
  double dStack_48;
  
  func_0x00010c279200(param_3,param_4,*(undefined8 *)PTR__AVMediaTypeVideo_110348090);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  dVar5 = (double)func_0x00010c0d5d20(lVar4);
  if (lVar4 == 0) {
    uVar9 = 0;
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
    uVar20 = 0;
    uVar21 = 0;
    uVar22 = 0;
    uVar23 = 0;
    uVar24 = 0;
    dStack_50 = 0.0;
    dStack_48 = 0.0;
  }
  else {
    func_0x00010c106f40(auStack_60,lVar4);
    uVar17 = (undefined1)auStack_60._8_8_;
    uVar18 = SUB81(auStack_60._8_8_,1);
    uVar19 = SUB81(auStack_60._8_8_,2);
    uVar20 = SUB81(auStack_60._8_8_,3);
    uVar21 = SUB81(auStack_60._8_8_,4);
    uVar22 = SUB81(auStack_60._8_8_,5);
    uVar23 = SUB81(auStack_60._8_8_,6);
    uVar24 = SUB81(auStack_60._8_8_,7);
    uVar9 = (undefined1)auStack_60._0_8_;
    uVar10 = SUB81(auStack_60._0_8_,1);
    uVar11 = SUB81(auStack_60._0_8_,2);
    uVar12 = SUB81(auStack_60._0_8_,3);
    uVar13 = SUB81(auStack_60._0_8_,4);
    uVar14 = SUB81(auStack_60._0_8_,5);
    uVar15 = SUB81(auStack_60._0_8_,6);
    uVar16 = SUB81(auStack_60._0_8_,7);
  }
  dVar7 = dStack_50 * param_2 +
          (double)CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,
                                                  CONCAT12(uVar11,CONCAT11(uVar10,uVar9))))))) *
          dVar5;
  dVar8 = dStack_48 * param_2 +
          (double)CONCAT17(uVar24,CONCAT16(uVar23,CONCAT15(uVar22,CONCAT14(uVar21,CONCAT13(uVar20,
                                                  CONCAT12(uVar19,CONCAT11(uVar18,uVar17))))))) *
          dVar5;
  auVar6._0_8_ = -(ulong)(dVar7 < 0.0);
  auVar6._8_8_ = -(ulong)(dVar8 < 0.0);
  dVar5 = -dVar8;
  auVar1._8_8_ = dVar8;
  auVar1._0_8_ = dVar7;
  auVar3[8] = SUB81(dVar5,0);
  auVar3._0_8_ = -dVar7;
  auVar3[9] = (char)((ulong)dVar5 >> 8);
  auVar3[10] = (char)((ulong)dVar5 >> 0x10);
  auVar3[0xb] = (char)((ulong)dVar5 >> 0x18);
  auVar3[0xc] = (char)((ulong)dVar5 >> 0x20);
  auVar3[0xd] = (char)((ulong)dVar5 >> 0x28);
  auVar3[0xe] = (char)((ulong)dVar5 >> 0x30);
  auVar3[0xf] = (char)((ulong)dVar5 >> 0x38);
  auVar2._8_8_ = dVar8;
  auVar2._0_8_ = dVar7;
  _objc_release(lVar4);
  return auVar2 ^ (auVar1 ^ auVar3) & auVar6;
}



/* Entry: 107f7047c; end: 107f706e3;  */

void FUN_107f7047c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_1);
  puVar1 = param_4;
  func_0x00010bf5a700();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar1);
    puVar2 = puVar1;
  }
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d2760;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c009540();
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010c0c6c20();
  _objc_release(param_4);
  puVar3 = PTR_PTR_1126b62b0;
  _objc_alloc(PTR_PTR_1126b62b0);
  func_0x00010c0487e0();
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107f706e4; end: 107f7090b; -[SCActivityItemCompositeGenerator initWithGenerators:compositor:shouldGenerateSerially:] */

undefined8 *
FUN_107f706e4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long unaff_x23;
  long lVar9;
  long unaff_x24;
  undefined8 *puVar10;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
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
  undefined8 uStack_e8;
  undefined *puStack_e0;
  long lStack_58;
  
  puVar10 = &uStack_130;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_e0 = PTR_PTR_1126fbda8;
  puVar7 = &uStack_e8;
  uStack_e8 = param_1;
  _objc_msgSendSuper2(puVar7,PTR_s_init_1125d9248);
  if (puVar7 != (undefined8 *)0x0) {
    puVar1 = param_3;
    func_0x00010bf51e00();
    uVar6 = puVar7[1];
    puVar7[1] = puVar1;
    _objc_release(uVar6);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar6 = puVar7[2];
    puVar7[2] = puVar2;
    _objc_release(uVar6);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar6 = puVar7[6];
    puVar7[6] = puVar2;
    _objc_release(uVar6);
    puVar1 = param_3;
    func_0x00010c0d3c80();
    uVar6 = puVar7[3];
    puVar7[3] = puVar1;
    _objc_release(uVar6);
    _objc_retain(param_4);
    uVar6 = puVar7[4];
    puVar7[4] = param_4;
    _objc_release(uVar6);
    func_0x00010c180600(puVar7[4]);
    *(char *)(puVar7 + 7) = (char)param_5;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_3);
    puVar1 = param_3;
    func_0x00010bf52a60();
    if (puVar1 != (undefined8 *)0x0) {
      unaff_x24 = *plStack_120;
      do {
        puVar10 = (undefined8 *)0x0;
        do {
          if (*plStack_120 != unaff_x24) {
            _objc_enumerationMutation(param_3);
          }
          unaff_x23 = *(long *)(lStack_128 + (long)puVar10 * 8);
          lVar3 = unaff_x23;
          func_0x00010c084220();
          puVar7[0xb] = puVar7[0xb] + lVar3;
          func_0x00010c18b5e0(unaff_x23);
          puVar10 = (undefined8 *)((long)puVar10 + 1);
        } while (puVar1 != puVar10);
        puVar1 = param_3;
        puVar10 = &uStack_130;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined8 *)0x0);
    }
    _objc_release(param_3);
    param_5 = param_3;
    func_0x00010bf529e0();
    puVar1 = param_3;
    func_0x00010bf529e0();
    puVar7[5] = (undefined1 *)((long)puVar1 + (long)param_5);
    puVar1 = puVar10;
  }
  _objc_release(param_4);
  puVar10 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar7;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_240;
  pcStack_138 = FUN_107f7090c;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_170 = unaff_x24;
  lStack_168 = unaff_x23;
  puStack_160 = param_5;
  puStack_158 = puVar7;
  uStack_150 = param_4;
  puStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar1);
  uVar6 = puVar10[8];
  puVar10[8] = puVar1;
  _objc_release(uVar6);
  if (*(char *)(puVar10 + 7) == '\x01') {
    lVar4 = puVar10[1];
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bfbf660();
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
    lVar4 = puVar10[1];
    _objc_retain(lVar4);
    lVar3 = lVar4;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar8 = *plStack_230;
      do {
        lVar9 = 0;
        do {
          if (*plStack_230 != lVar8) {
            _objc_enumerationMutation(lVar4);
          }
          func_0x00010bfbf660(*(undefined8 *)(lStack_238 + lVar9 * 8));
          lVar9 = lVar9 + 1;
        } while (lVar3 != lVar9);
        lVar3 = lVar4;
        puVar5 = &uStack_240;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
  }
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar7 = (undefined8 *)puVar1[1];
  _objc_retain(puVar5);
  func_0x00010bfb1920(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc0440();
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return puVar7;
}



/* Entry: 107f7090c; end: 107f70a57; -[SCActivityItemCompositeGenerator generateItemForActivityType:] */

void FUN_107f7090c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
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
  
  puVar4 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined1 **)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  if (*(char *)(param_1 + 0x38) == '\x01') {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined8 *)param_3;
    func_0x00010bfbf660();
  }
  else {
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    lVar2 = *(long *)(param_1 + 8);
    _objc_retain(lVar2);
    lVar3 = lVar2;
    func_0x00010bf52a60(lVar2,param_2,&uStack_110,auStack_c8,0x10);
    if (lVar3 != 0) {
      lVar5 = *plStack_100;
      do {
        lVar6 = 0;
        do {
          if (*plStack_100 != lVar5) {
            _objc_enumerationMutation(lVar2);
          }
          func_0x00010bfbf660(*(undefined8 *)(lStack_108 + lVar6 * 8),param_2,param_3);
          lVar6 = lVar6 + 1;
        } while (lVar3 != lVar6);
        lVar3 = lVar2;
        puVar4 = &uStack_110;
        func_0x00010bf52a60(lVar2,param_2,&uStack_110,auStack_c8,0x10);
      } while (lVar3 != 0);
    }
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  uVar1 = *(undefined8 *)(param_3 + 8);
  _objc_retain(puVar4);
  func_0x00010bfb1920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc0440();
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f70a58; end: 107f70aa7; -[SCActivityItemCompositeGenerator generateThumbnailForExport:] */

void FUN_107f70a58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bfb1920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc0440();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f70aa8; end: 107f70b97; -[SCActivityItemCompositeGenerator cancel] */

void FUN_107f70aa8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      func_0x00010bf2dba0(*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bfb2670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar4 + 8),PTR_s_flatMap__1125ca340,
             &PTR___NSConcreteGlobalBlock_110a150d8);
  return;
}



/* Entry: 107f70b98; end: 107f70baf; -[SCActivityItemCompositeGenerator _items] */

void FUN_107f70b98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb2670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_flatMap__1125ca340,
             &PTR___NSConcreteGlobalBlock_110a150d8);
  return;
}



/* Entry: 107f70bb0; end: 107f70c2f; -[SCActivityItemCompositeGenerator itemId] */

void FUN_107f70bb0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfb2660(uVar1,param_2,&PTR___NSConcreteGlobalBlock_110a150f8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb2660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107f70c30; end: 107f70c37;  */

void FUN_107f70c30(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0844f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_itemId_1125feb48);
  return;
}



/* Entry: 107f70c38; end: 107f70c5f;  */

void FUN_107f70c38(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 107f70c60; end: 107f70e33; -[SCActivityItemCompositeGenerator activityItemGenerator:didGenerateItem:itemId:] */

void FUN_107f70c60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x107f70cf0;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107f70e34; end: 107f70e83; -[SCActivityItemCompositeGenerator estimatedMediaSize] */

undefined8 FUN_107f70e34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c124d20(uVar1,param_2,&PTR___NSConcreteGlobalBlock_110a15158,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cd240);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c282800();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 107f70e84; end: 107f70ee3;  */

void FUN_107f70e84(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_3);
  func_0x00010c282800(param_2);
  lVar2 = param_3;
  func_0x00010bf997c0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar1,PTR_s_numberWithUnsignedLongLong__112615838,lVar2 + param_2);
  return;
}



/* Entry: 107f70ee4; end: 107f70f33; -[SCActivityItemCompositeGenerator itemDuration] */

undefined8 FUN_107f70ee4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c124d20(uVar1,param_2,&PTR___NSConcreteGlobalBlock_110a15178,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cd240);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067fc0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 107f70f34; end: 107f70f93;  */

void FUN_107f70f34(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_3);
  func_0x00010c067fc0(param_2);
  lVar2 = param_3;
  func_0x00010c084340(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,lVar2 + param_2);
  return;
}



/* Entry: 107f70f94; end: 107f70fdb; -[SCActivityItemCompositeGenerator primarySortDate] */

void FUN_107f70f94(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfb1920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c113020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107f70fdc; end: 107f71023; -[SCActivityItemCompositeGenerator secondarySortDate] */

void FUN_107f70fdc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfb1920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c155080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107f71024; end: 107f7124b; -[SCActivityItemCompositeGenerator activityItemGenerator:didFailGeneratingItemWithError:itemId:] */

void FUN_107f71024(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x107f71108;
  puStack_68 = &UNK_11084c4a0;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107f7124c; end: 107f712db; -[SCActivityItemCompositeGenerator activityItemGenerator:didUpdateProgress:] */

void FUN_107f7124c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107f712dc;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107f712dc; end: 107f7142f;  */

void FUN_107f712dc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  float fVar11;
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
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(lVar3);
  puVar2 = auStack_d8;
  lVar1 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_120,puVar2,0x10);
  if (lVar1 == 0) {
    fVar11 = 0.0;
  }
  else {
    lVar5 = *plStack_110;
    fVar11 = 0.0;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(lVar3);
        }
        func_0x00010c117720(*(undefined8 *)(lStack_118 + lVar6 * 8));
        fVar11 = fVar11 + (float)CONCAT13(uVar10,CONCAT12(uVar9,CONCAT11(uVar8,uVar7)));
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      puVar2 = auStack_d8;
      lVar1 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_120,puVar2,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar3);
  *(float *)(*(long *)(param_1 + 0x20) + 0x48) =
       fVar11 / (float)*(long *)(*(long *)(param_1 + 0x20) + 0x28);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef1720();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_retain(puVar2);
    uVar4 = *(undefined8 *)(lVar1 + 0x60);
    *(undefined1 **)(lVar1 + 0x60) = puVar2;
    _objc_retain(puVar2);
    _objc_release(uVar4);
    lVar3 = lVar1;
    func_0x00010bf6b020(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar1 + 0x60);
    lVar5 = lVar1;
    func_0x00010c0844e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef1700(lVar3,param_2,lVar1,uVar4,lVar5);
    _objc_release(puVar2);
    _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 107f71430; end: 107f714d3; -[SCActivityItemCompositeGenerator activityItemCompositor:didFinishWithComposite:] */

void FUN_107f71430(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  lVar1 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  lVar2 = param_1;
  func_0x00010c0844e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef1700(lVar1,param_2,param_1,uVar3,lVar2);
  _objc_release(param_4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107f714d4; end: 107f7154f; -[SCActivityItemCompositeGenerator activityItemCompositor:didProgress:] */

void FUN_107f714d4(float param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 8);
  func_0x00010bf529e0();
  uVar2 = *(ulong *)(param_2 + 8);
  func_0x00010bf529e0();
  *(float *)(param_2 + 0x48) =
       (param_1 * (float)uVar2 + (float)uVar1) / (float)*(long *)(param_2 + 0x28);
  lVar3 = param_2;
  func_0x00010bf6b020(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef1720(*(undefined4 *)(param_2 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 107f71550; end: 107f715cf; -[SCActivityItemCompositeGenerator activityItemCompositor:didFailWithError:] */

void FUN_107f71550(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0844e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef16e0(uVar1,param_2,param_1,param_4,uVar2);
  _objc_release(param_4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f715d0; end: 107f716c3; -[SCActivityItemCompositeGenerator activityItemCompositor:requestsDurationForItem:] */

float FUN_107f715d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  lVar3 = *(long *)(param_1 + 8);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107f716c4;
  puStack_50 = &UNK_110a15198;
  uStack_48 = param_4;
  _objc_retain(param_4);
  func_0x00010bfaea20(lVar3,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    fVar4 = 0.0;
  }
  else {
    lVar1 = lVar3;
    func_0x00010bfb1920(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c084340();
    fVar4 = (float)lVar2;
    _objc_release(lVar1);
  }
  _objc_release(lVar3);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return fVar4;
}



/* Entry: 107f716c4; end: 107f716ff;  */

bool FUN_107f716c4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0840e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 == param_2;
}



/* Entry: 107f71700; end: 107f71717; -[SCActivityItemCompositeGenerator delegate] */

void FUN_107f71700(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f71718; end: 107f71723; -[SCActivityItemCompositeGenerator setDelegate:] */

void FUN_107f71718(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 107f71724; end: 107f7172b; -[SCActivityItemCompositeGenerator itemCount] */

undefined8 FUN_107f71724(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107f7172c; end: 107f71733; -[SCActivityItemCompositeGenerator progress] */

undefined4 FUN_107f7172c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}



/* Entry: 107f71734; end: 107f7173b; -[SCActivityItemCompositeGenerator item] */

undefined8 FUN_107f71734(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107f7173c; end: 107f717af; -[SCActivityItemCompositeGenerator .cxx_destruct] */

void FUN_107f7173c(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f717b0; end: 107f71887; -[SCActivityItemGeneratorProxy initWithGenerator:performer:] */

undefined1 *
FUN_107f717b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fbdb0;
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
    uVar3 = *(ulong *)((long)puVar1 + 8);
    _objc_opt_respondsToSelector(uVar3,PTR_s_itemCount_1125fea98);
    if ((uVar3 & 1) == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = *(undefined8 *)((long)puVar1 + 8);
      func_0x00010c084220();
    }
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x00010c1b17a0(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f71888; end: 107f718d7; -[SCActivityItemGeneratorProxy setDelegate:] */

void FUN_107f71888(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c18b5e0(uVar1);
  _objc_storeWeak(param_1 + 0x30,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f718d8; end: 107f718df; -[SCActivityItemGeneratorProxy itemDuration] */

void FUN_107f718d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c084350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_itemDuration_1125feae0);
  return;
}



/* Entry: 107f718e0; end: 107f718e7; -[SCActivityItemGeneratorProxy itemId] */

void FUN_107f718e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0844f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_itemId_1125feb48);
  return;
}



/* Entry: 107f718e8; end: 107f718ef; -[SCActivityItemGeneratorProxy estimatedMediaSize] */

void FUN_107f718e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf997d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_estimatedMediaSize_1125c3f98);
  return;
}



/* Entry: 107f718f0; end: 107f718f7; -[SCActivityItemGeneratorProxy primarySortDate] */

void FUN_107f718f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c113030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_primarySortDate_112622628);
  return;
}



/* Entry: 107f718f8; end: 107f718ff; -[SCActivityItemGeneratorProxy secondarySortDate] */

void FUN_107f718f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c155090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_secondarySortDate_112632e40);
  return;
}



/* Entry: 107f71900; end: 107f71a0b; -[SCActivityItemGeneratorProxy generateItemForActivityType:] */

void FUN_107f71900(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c074500();
  if ((uVar1 & 1) == 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
      func_0x00010c1b17a0(param_1,param_2,1);
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_107f71a0c;
      puStack_58 = &UNK_110841f80;
      uStack_50 = param_1;
      _objc_retain(param_3);
      uStack_48 = param_3;
      func_0x00010c0f7fc0(uVar3,param_2,&puStack_70);
      uVar1 = uStack_48;
    }
    else {
      uVar1 = param_1;
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      uVar2 = param_1;
      func_0x00010c0844e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef1700(uVar1,param_2,param_1,uVar3,uVar2);
      _objc_release(uVar2);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107f71a0c; end: 107f71a17;  */

void FUN_107f71a0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbf670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_generateItemForActivityType__1125cd740,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107f71a18; end: 107f71a1f; -[SCActivityItemGeneratorProxy generateThumbnailForExport:] */

void FUN_107f71a18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc0450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_generateThumbnailForExport__1125cdab8);
  return;
}



/* Entry: 107f71a20; end: 107f71a87; -[SCActivityItemGeneratorProxy cancel] */

void FUN_107f71a20(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x00010c1b17a0(param_1,param_2,0);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107f71a88;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_48);
  return;
}



/* Entry: 107f71a88; end: 107f71a93;  */

void FUN_107f71a88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 107f71a94; end: 107f71b4b; -[SCActivityItemGeneratorProxy activityItemGenerator:didGenerateItem:itemId:] */

void FUN_107f71a94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c1b17a0(param_1,param_2,0);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bef1720(*(undefined4 *)(param_1 + 0x1c));
  _objc_release(lVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bef1700();
  _objc_release(param_4);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107f71b4c; end: 107f71beb; -[SCActivityItemGeneratorProxy activityItemGenerator:didFailGeneratingItemWithError:itemId:] */

void FUN_107f71b4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c1b17a0(param_1,param_2,0);
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bef1720(*(undefined4 *)(param_1 + 0x1c));
  _objc_release(lVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bef16e0();
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107f71bec; end: 107f71c33; -[SCActivityItemGeneratorProxy activityItemGenerator:didUpdateProgress:] */

void FUN_107f71bec(undefined8 param_1,long param_2)

{
  *(int *)(param_2 + 0x1c) = (int)param_1;
  param_2 = param_2 + 0x30;
  _objc_loadWeakRetained(param_2);
  func_0x00010bef1720(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f71c34; end: 107f71c53; -[SCActivityItemGeneratorProxy respondsToSelector:] */

uint FUN_107f71c34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_opt_respondsToSelector(uVar1,param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 107f71c54; end: 107f71c5b; -[SCActivityItemGeneratorProxy itemCount] */

undefined8 FUN_107f71c54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107f71c5c; end: 107f71c63; -[SCActivityItemGeneratorProxy progress] */

undefined4 FUN_107f71c5c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



/* Entry: 107f71c64; end: 107f71c6b; -[SCActivityItemGeneratorProxy item] */

undefined8 FUN_107f71c64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107f71c6c; end: 107f71c83; -[SCActivityItemGeneratorProxy delegate] */

void FUN_107f71c6c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f71c84; end: 107f71c8f; -[SCActivityItemGeneratorProxy isGenerating] */

byte FUN_107f71c84(long param_1)

{
  return *(byte *)(param_1 + 0x18) & 1;
}



/* Entry: 107f71c90; end: 107f71c97; -[SCActivityItemGeneratorProxy setIsGenerating:] */

void FUN_107f71c90(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 107f71c98; end: 107f71cdb; -[SCActivityItemGeneratorProxy .cxx_destruct] */

void FUN_107f71c98(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f71cdc; end: 107f71d97; -[SCGalleryBatchExportActivity initWithActivityItemProvider:photoPermissionCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107f71cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126fbdb8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127720e0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127720e4;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f71d98; end: 107f71da3; -[SCGalleryBatchExportActivity activityType] */

undefined ** FUN_107f71d98(void)

{
  return &PTR____CFConstantStringClassReference_110ec95b8;
}



/* Entry: 107f71da4; end: 107f71dd3; -[SCGalleryBatchExportActivity activityTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f71da4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127720e8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f71dd4; end: 107f71de7; -[SCGalleryBatchExportActivity activityImage] */

void FUN_107f71dd4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe8230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIImage_1126aea68,PTR_s_imageNamed__1125d7a50,
             &PTR____CFConstantStringClassReference_110ebd798);
  return;
}



/* Entry: 107f71de8; end: 107f71eaf; -[SCGalleryBatchExportActivity canPerformWithActivityItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107f71de8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010bf10fa0();
  if ((puVar1 != (undefined *)0x2) &&
     (puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30, func_0x00010bf10fa0(),
     puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0, puVar2 != (undefined *)0x1)) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110ec95d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ec95d8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c084220();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127720e8);
    *(undefined **)(param_1 + _DAT_1127720e8) = puVar1;
    _objc_release(uVar4);
    _objc_release(ppuVar3);
    return 1;
  }
  return 0;
}



/* Entry: 107f71eb0; end: 107f71ee7; -[SCGalleryBatchExportActivity prepareWithActivityItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f71eb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127720ec);
  *(undefined8 *)(param_1 + _DAT_1127720ec) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f71ee8; end: 107f71f67; -[SCGalleryBatchExportActivity performActivity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f71ee8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127720e4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c134a40();
  _objc_release(uVar1);
  return;
}



/* Entry: 107f71f68; end: 107f71fef;  */

void FUN_107f71f68(undefined8 param_1)

{
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(param_1);
  return;
}



/* Entry: 107f71ff0; end: 107f71fff;  */

void FUN_107f71ff0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef1510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_activityDidFinish__112599ee8,
             *(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 107f72000; end: 107f7211f; -[SCGalleryBatchExportActivity .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f72000(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127720e4,0);
  _objc_storeStrong(param_1 + _DAT_1127720e0,0);
  _objc_storeStrong(param_1 + _DAT_1127720ec,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127720e8,0);
  return;
}



/* Entry: 107f72120; end: 107f7221b; -[SCMemoriesActivityItemGeneratorHelper initWithGallerySnap:generatorType:cachingMediaManager:circumstanceEngine:] */

undefined1 *
FUN_107f72120(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126fbdc0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f7221c; end: 107f7231f; -[SCMemoriesActivityItemGeneratorHelper requestThumbnailForExporting:] */

void FUN_107f7221c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000108ec16c0(uVar2);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107f72320;
  puStack_68 = &UNK_110a0bf58;
  uVar4 = *(undefined8 *)PTR__CGSizeZero_110347620;
  uVar5 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  lStack_60 = param_1;
  uStack_58 = param_3;
  _objc_retain(param_3);
  func_0x00010c134d00(uVar4,uVar5,uVar1,param_2,uVar3,0,0,1,(uint)uVar2 ^ 1,
                      PTR___dispatch_main_q_11034be20,0,&puStack_80);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 107f72320; end: 107f723a3;  */

void FUN_107f72320(long param_1,long param_2)

{
  undefined *puVar1;
  
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107f72348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2,0);
    return;
  }
  puVar1 = PTR_PTR_1126d7cb8;
  func_0x00010bf99380(PTR_PTR_1126d7cb8,0,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),
                      &PTR____CFConstantStringClassReference_110ec97b8,0,0);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f723a4; end: 107f723eb; -[SCMemoriesActivityItemGeneratorHelper .cxx_destruct] */

void FUN_107f723a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f723ec; end: 107f72657;  */

void FUN_107f723ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 != 0) {
    uVar1 = param_1;
    func_0x00010c06cde0();
    if ((int)uVar1 == 0) {
      puVar2 = PTR_PTR_1126bf788;
      _objc_alloc(PTR_PTR_1126bf788);
      func_0x00010c017ba0();
      _objc_retain(param_3);
      _objc_retain(param_5);
      _objc_retain(param_4);
      _objc_retain(param_2);
      func_0x00010bf89240(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(param_2);
      _objc_release(param_4);
      _objc_release(param_5);
      _objc_release(param_3);
    }
    else {
      (**(code **)(param_5 + 0x10))(param_5,1);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 107f72658; end: 107f7281b;  */

void FUN_107f72658(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68;
  _objc_alloc_init(PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68);
  func_0x00010c1ec960();
  func_0x00010c18ba80(puVar1);
  func_0x00010c1cc000(puVar1);
  puVar2 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010c1357a0(0x4062c00000000000,0x4062c00000000000,puVar2);
  _objc_release(puVar2);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(puVar1);
  return;
}



/* Entry: 107f7281c; end: 107f72b23; +[SCMemoriesExportErrorFactory errorWithGeneratorType:exportStep:errorReceived:additionalInfo:] */

void FUN_107f7281c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined *param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar3 = (undefined *)0x0;
  if ((param_3 != 0) && (param_4 != 0)) {
    if (param_6 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar1 = param_6;
      func_0x00010c0d3c80(param_6);
    }
    func_0x00010c1d0560();
    func_0x00010c1d0560(puVar1,param_2,param_4,&PTR____CFConstantStringClassReference_110ec9638);
    if (param_5 != 0) {
      lVar2 = param_5;
      func_0x00010bf87dc0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(puVar1,param_2,lVar2,&PTR____CFConstantStringClassReference_110ec9658);
      _objc_release(lVar2);
      lVar2 = param_5;
      func_0x00010bf6e340(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(puVar1,param_2,lVar2,&PTR____CFConstantStringClassReference_110ec9678);
      _objc_release(lVar2);
    }
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    lVar2 = param_5;
    func_0x00010bf3ec40(param_5);
    func_0x00010bf99240(puVar3,param_2,&PTR____CFConstantStringClassReference_110ec95f8,lVar2,puVar1
                       );
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107f72b24; end: 107f72c93;  */

long FUN_107f72b24(ulong param_1,ulong param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bc3f0;
  _objc_opt_new(PTR_PTR_1126bc3f0);
  puVar2 = puVar1;
  func_0x00010bf134e0((double)param_1,(double)param_2,(double)param_3,0,0x3ff0000000000000);
  _objc_release(puVar1);
  return (long)((double)(long)puVar2 * 0.15 * (double)param_3);
}



/* Entry: 107f72c94; end: 107f72d47;  */

long FUN_107f72c94(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  lVar1 = param_2;
  func_0x00010c0c6c20();
  lVar2 = param_2;
  if (lVar1 == 1) {
    func_0x00010c0fce40(param_2);
    lVar1 = param_2;
    func_0x00010c0fcaa0(param_2);
    func_0x000107f72bcc(lVar2,lVar1);
  }
  else {
    lVar1 = param_2;
    func_0x00010c0c6c20();
    if (lVar1 == 2) {
      func_0x00010c0fce40(param_2);
      lVar1 = param_2;
      func_0x00010c0fcaa0(param_2);
      func_0x00010bf8b160(param_2);
      func_0x000107f72b24(lVar2,lVar1,(long)param_1);
    }
    else {
      lVar2 = 0;
    }
  }
  _objc_release(param_2);
  return lVar2;
}



/* Entry: 107f72d48; end: 107f72d53; -[SCMemoriesCachingMediaHelperServices .cxx_destruct] */

void FUN_107f72d48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f72d54; end: 107f72d5f; -[SCMemoriesCachingMediaServices .cxx_destruct] */

void FUN_107f72d54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f72d60; end: 107f72d67; -[SCMemoriesSnapDocThumbnailGeneratorServices memoriesSnapDocThumbnailGenerator] */

undefined8 FUN_107f72d60(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f72d68; end: 107f72d73; -[SCMemoriesSnapDocThumbnailGeneratorServices .cxx_destruct] */

void FUN_107f72d68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f72d74; end: 107f72ed3; -[SCThumbnailImageProcessCommandSnapInfo initWithSnapCreateTimeUTC:snapTimeZoneName:memoriesSnapId:cameraRollId:snapSize:contentSize:spectaclesSnapInfo:] */

undefined1 *
FUN_107f72d74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126fbde0;
  uStack_70 = param_5;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x30) = param_1;
    *(undefined8 *)((long)puVar1 + 0x38) = param_2;
    *(undefined8 *)((long)puVar1 + 0x40) = param_3;
    *(undefined8 *)((long)puVar1 + 0x48) = param_4;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 107f72ed4; end: 107f72ef7; -[SCThumbnailImageProcessCommandSnapInfo copyWithZone:] */

undefined8 FUN_107f72ed4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f72ef8; end: 107f73017; -[SCThumbnailImageProcessCommandSnapInfo hash] */

undefined8 * FUN_107f72ef8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar5 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uStack_70 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar8 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_50 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_48 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar8 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_40 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_38 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uStack_58 = uVar4;
  func_0x00010bfde980();
  uStack_30 = uVar3;
  func_0x000100505190(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == (undefined8 *)param_3) {
LAB_107f73120:
    puVar9 = (undefined1 *)0x1;
  }
  else {
    puVar9 = (undefined1 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107f73124;
    puVar9 = (undefined1 *)puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if (((ulong)puVar6 & 1) != 0) {
      bVar2 = false;
      if ((*(double *)((long)puVar5 + 0x30) == *(double *)(param_3 + 0x30)) &&
         (bVar2 = false, !NAN(*(double *)((long)puVar5 + 0x38)) && !NAN(*(double *)(param_3 + 0x38))
         )) {
        bVar2 = *(double *)((long)puVar5 + 0x38) == *(double *)(param_3 + 0x38);
      }
      if (bVar2) {
        puVar9 = (undefined1 *)0x0;
        if ((*(double *)((long)puVar5 + 0x40) != *(double *)(param_3 + 0x40)) ||
           (*(double *)((long)puVar5 + 0x48) != *(double *)(param_3 + 0x48))) goto LAB_107f73124;
        lVar7 = *(long *)((long)puVar5 + 8);
        if (((((lVar7 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
             ((lVar7 = *(long *)((long)puVar5 + 0x10), lVar7 == *(long *)(param_3 + 0x10) ||
              (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
            ((lVar7 = *(long *)((long)puVar5 + 0x18), lVar7 == *(long *)(param_3 + 0x18) ||
             (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
           ((lVar7 = *(long *)((long)puVar5 + 0x20), lVar7 == *(long *)(param_3 + 0x20) ||
            (func_0x00010c071ae0(), (int)lVar7 != 0)))) {
          puVar9 = *(undefined1 **)((long)puVar5 + 0x28);
          if (puVar9 != *(undefined1 **)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_107f73124;
          }
          goto LAB_107f73120;
        }
      }
    }
    puVar9 = (undefined1 *)0x0;
  }
LAB_107f73124:
  _objc_release(param_3);
  return (undefined8 *)puVar9;
}



/* Entry: 107f73018; end: 107f7313f; -[SCThumbnailImageProcessCommandSnapInfo isEqual:] */

long FUN_107f73018(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107f73120:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107f73124;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      bVar1 = false;
      if ((*(double *)(param_1 + 0x30) == *(double *)(param_3 + 0x30)) &&
         (bVar1 = false, !NAN(*(double *)(param_1 + 0x38)) && !NAN(*(double *)(param_3 + 0x38)))) {
        bVar1 = *(double *)(param_1 + 0x38) == *(double *)(param_3 + 0x38);
      }
      if (bVar1) {
        lVar4 = 0;
        if ((*(double *)(param_1 + 0x40) != *(double *)(param_3 + 0x40)) ||
           (*(double *)(param_1 + 0x48) != *(double *)(param_3 + 0x48))) goto LAB_107f73124;
        lVar4 = *(long *)(param_1 + 8);
        if (((((lVar4 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
             ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
            ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           ((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
          lVar4 = *(long *)(param_1 + 0x28);
          if (lVar4 != *(long *)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_107f73124;
          }
          goto LAB_107f73120;
        }
      }
    }
    lVar4 = 0;
  }
LAB_107f73124:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 107f73140; end: 107f73147; -[SCThumbnailImageProcessCommandSnapInfo snapCreateTimeUTC] */

undefined8 FUN_107f73140(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f73148; end: 107f7314f; -[SCThumbnailImageProcessCommandSnapInfo snapTimeZoneName] */

undefined8 FUN_107f73148(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f73150; end: 107f73157; -[SCThumbnailImageProcessCommandSnapInfo memoriesSnapId] */

undefined8 FUN_107f73150(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107f73158; end: 107f7315f; -[SCThumbnailImageProcessCommandSnapInfo cameraRollId] */

undefined8 FUN_107f73158(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107f73160; end: 107f73167; -[SCThumbnailImageProcessCommandSnapInfo snapSize] */

undefined1  [16] FUN_107f73160(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x30);
}



/* Entry: 107f73168; end: 107f7316f; -[SCThumbnailImageProcessCommandSnapInfo contentSize] */

undefined1  [16] FUN_107f73168(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x40);
}



/* Entry: 107f73170; end: 107f73177; -[SCThumbnailImageProcessCommandSnapInfo spectaclesSnapInfo] */

undefined8 FUN_107f73170(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107f73178; end: 107f731cb; -[SCThumbnailImageProcessCommandSnapInfo .cxx_destruct] */

void FUN_107f73178(long param_1)

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



/* Entry: 107f731cc; end: 107f73253; -[SCSpectaclesSnapInfo initWithIsSpectaclesVideo:isCircularFormatSpectaclesMedia:isCroppableSpectaclesMedia:isTopBottomStereoSpectaclesMedia:isRotationalFormatSpectaclesMedia:requiresRectification:stereoCamera:] */

void FUN_107f731cc(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126fbde8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined1 *)((long)puVar1 + 10) = param_5;
    *(undefined1 *)((long)puVar1 + 0xb) = param_6;
    *(undefined1 *)((long)puVar1 + 0xc) = param_7;
    *(undefined1 *)((long)puVar1 + 0xd) = param_8;
    *(undefined8 *)((long)puVar1 + 0x10) = param_9;
  }
  return;
}



/* Entry: 107f73254; end: 107f73277; -[SCSpectaclesSnapInfo copyWithZone:] */

undefined8 FUN_107f73254(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}


