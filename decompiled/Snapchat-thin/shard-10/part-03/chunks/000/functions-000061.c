/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107dfaa44; end: 107dfaabb; -[SCMotionManager _stopMotionUpdatesIfNecessary] */

void FUN_107dfaa44(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x68);
  func_0x00010c079ba0();
  if (((uVar1 & 1) == 0) && (*(long *)(param_1 + 0x18) == 0)) {
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c255e60();
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c1d9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x68),PTR_s_setPaused__112654088,1);
    return;
  }
  return;
}



/* Entry: 107dfaabc; end: 107dfab2b; +[SCMotionManager normalizeAngle:] */

double FUN_107dfaabc(double param_1)

{
  float fVar1;
  double dVar2;
  
  if (param_1 <= 0.0) {
    fVar1 = (float)(3.141592653589793 - param_1);
    _fmodf(fVar1,0x40c90fdb);
    dVar2 = 3.141592653589793 - (double)fVar1;
  }
  else {
    fVar1 = (float)(param_1 + 3.141592653589793);
    _fmodf(fVar1,0x40c90fdb);
    dVar2 = (double)fVar1 + -3.141592653589793;
  }
  return dVar2;
}



/* Entry: 107dfab2c; end: 107dfab33; -[SCMotionManager valueObservable] */

undefined8 FUN_107dfab2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107dfab34; end: 107dfab3b; -[SCMotionManager currentValue] */

undefined8 FUN_107dfab34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 107dfab3c; end: 107dfaba7; -[SCMotionManager .cxx_destruct] */

void FUN_107dfab3c(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107dfaba8; end: 107dfabef; -[SCMotionResponseCurve init] */

void FUN_107dfaba8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126fb418;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x30) = 0;
    *(undefined8 *)((long)puVar1 + 0x28) = 0;
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
    *(undefined8 *)((long)puVar1 + 0x18) = 0;
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
    *(undefined8 *)((long)puVar1 + 8) = 0;
  }
  return;
}



/* Entry: 107dfabf0; end: 107dfad2b; -[SCMotionResponseCurve evaluate:] */

double FUN_107dfabf0(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar2 = -1.0;
  if (-1.0 <= param_1) {
    dVar2 = param_1;
  }
  dVar2 = (double)NEON_fminnm(dVar2,0x3ff0000000000000);
  dVar3 = -1.0;
  if (0.0 <= dVar2) {
    dVar3 = 0.0;
  }
  dVar4 = 1.0;
  if (dVar2 <= 0.0) {
    dVar4 = dVar3;
  }
  if (dVar4 == *(double *)(param_2 + 0x10)) {
    if (dVar4 <= 0.0) {
      if (dVar4 < 0.0) {
        if (*(double *)(param_2 + 0x28) <= dVar2) {
          if (dVar2 <= *(double *)(param_2 + 0x28)) goto LAB_107dfad24;
          goto LAB_107dfaca4;
        }
        goto LAB_107dfacd4;
      }
      lVar1 = 0;
    }
    else if (*(double *)(param_2 + 0x28) < dVar2) {
LAB_107dfacd4:
      lVar1 = 2;
    }
    else if (*(double *)(param_2 + 0x28) <= dVar2) {
LAB_107dfad24:
      lVar1 = *(long *)(param_2 + 8);
    }
    else {
LAB_107dfaca4:
      lVar1 = 1;
    }
  }
  else {
    lVar1 = 2;
    if (dVar4 == 0.0) {
      lVar1 = 0;
    }
    *(long *)(param_2 + 8) = lVar1;
    *(double *)(param_2 + 0x18) = dVar4;
    *(double *)(param_2 + 0x20) = dVar4;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
  }
  if (lVar1 == *(long *)(param_2 + 8)) {
LAB_107dfac68:
    *(long *)(param_2 + 8) = lVar1;
    *(double *)(param_2 + 0x28) = dVar2;
    *(double *)(param_2 + 0x10) = dVar4;
    if (lVar1 != 1) {
      if (lVar1 != 2) {
        return *(double *)(param_2 + 0x30);
      }
      dVar5 = *(double *)(param_2 + 0x18);
      dVar3 = *(double *)(param_2 + 0x20);
LAB_107dfacf4:
      dVar2 = 1.0 - (dVar2 - (dVar4 - dVar5)) / dVar5;
      dVar3 = dVar4 + dVar2 * -(dVar2 * dVar3);
      goto LAB_107dfad10;
    }
    dVar5 = *(double *)(param_2 + 0x18);
    dVar3 = *(double *)(param_2 + 0x20);
  }
  else {
    if (lVar1 == 2) {
      dVar5 = dVar4 - *(double *)(param_2 + 0x28);
      dVar3 = dVar4 - *(double *)(param_2 + 0x30);
      *(undefined8 *)(param_2 + 8) = 2;
      *(double *)(param_2 + 0x20) = dVar3;
      *(double *)(param_2 + 0x28) = dVar2;
      *(double *)(param_2 + 0x10) = dVar4;
      *(double *)(param_2 + 0x18) = dVar5;
      goto LAB_107dfacf4;
    }
    if (lVar1 != 1) goto LAB_107dfac68;
    dVar5 = *(double *)(param_2 + 0x28);
    dVar3 = *(double *)(param_2 + 0x30);
    *(undefined8 *)(param_2 + 8) = 1;
    *(double *)(param_2 + 0x20) = dVar3;
    *(double *)(param_2 + 0x28) = dVar2;
    *(double *)(param_2 + 0x10) = dVar4;
    *(double *)(param_2 + 0x18) = dVar5;
  }
  dVar3 = dVar3 * (dVar2 / dVar5);
LAB_107dfad10:
  *(double *)(param_2 + 0x30) = dVar3;
  return dVar3;
}



/* Entry: 107dfad2c; end: 107dfad8b; -[SCMotionValue initWithRotation:translation:gravity:] */

void FUN_107dfad2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fb420;
  uStack_40 = param_5;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 107dfad8c; end: 107dfadaf; -[SCMotionValue copyWithZone:] */

undefined8 FUN_107dfad8c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107dfadb0; end: 107dfadb7; -[SCMotionValue rotation] */

undefined8 FUN_107dfadb0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107dfadb8; end: 107dfadbf; -[SCMotionValue translation] */

undefined1  [16] FUN_107dfadb8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x18);
}



/* Entry: 107dfadc0; end: 107dfadc7; -[SCMotionValue gravity] */

undefined8 FUN_107dfadc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107dfadc8; end: 107dfb8b7;  */

void FUN_107dfadc8(undefined8 param_1,double param_2,undefined *param_3,undefined ***param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined ***pppuVar25;
  uint uVar26;
  undefined8 uVar27;
  double dVar28;
  double dVar29;
  undefined **ppuVar30;
  undefined ***pppuVar31;
  undefined **ppuVar32;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  uint uStack_22c;
  undefined4 uStack_228;
  uint uStack_224;
  long lStack_220;
  undefined4 uStack_218;
  undefined1 uStack_214;
  undefined1 uStack_211;
  long lStack_210;
  undefined1 auStack_208 [40];
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined **ppuStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined ***pppuStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined **ppuStack_f0;
  undefined ***pppuStack_e8;
  undefined **ppuStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  pppuVar25 = param_4;
  _objc_retain();
  if (param_3 == (undefined *)0x0) goto LAB_107dfaea8;
  _objc_autoreleasePoolPush();
  lStack_240 = 0;
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  param_5 = param_3;
  func_0x00010bf64ae0();
  _objc_retainAutoreleasedReturnValue();
  lStack_250 = lStack_240;
  _objc_retain(lStack_240);
  if (lStack_250 == 0) {
    dVar28 = 9.0711419660548e-315;
    ppuStack_158 = (undefined **)0x0;
    ppuStack_160 = (undefined **)0x6d6f6f76;
    lStack_248 = 0;
    pppuVar25 = &ppuStack_160;
    param_5 = (undefined *)0x1;
    FUN_107dfcad0(&uStack_100,puVar2,pppuVar25,1,&lStack_248);
    lStack_250 = lStack_248;
    _objc_retain(lStack_248);
    if (lStack_250 != 0) goto LAB_107dfae90;
    puVar3 = puVar2;
    func_0x00010c25eac0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0d3c80();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_autoreleasePoolPop(puVar1);
    puVar1 = PTR__OBJC_CLASS___AVAsset_1126aff38;
    func_0x00010bf0b9e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    func_0x00010c0d5d20(puVar3);
    if (puVar3 == (undefined *)0x0) {
      pppuVar31 = (undefined ***)0x0;
      dVar29 = 0.0;
      ppuVar32 = (undefined **)0x0;
      ppuVar30 = (undefined **)0x0;
    }
    else {
      func_0x00010c106f40(&uStack_100,puVar3);
      dVar29 = (double)uStack_f8;
      ppuVar30 = uStack_100;
      pppuVar31 = pppuStack_e8;
      ppuVar32 = ppuStack_f0;
    }
    _objc_retain(puVar4);
    uStack_1b8 = 0;
    ppuStack_1c0 = (undefined **)0x6d6f6f76;
    uStack_1b0 = 0x7472616b;
    uStack_198 = 0;
    uStack_1a0 = 0x6d646961;
    uStack_188 = 0;
    uStack_190 = 0x6d696e66;
    uStack_178 = 0;
    uStack_180 = 0x7374626c;
    uStack_168 = 0;
    uStack_170 = 0x73747364;
    lStack_210 = 0;
    pppuVar25 = &ppuStack_1c0;
    pppuStack_1a8 = param_4;
    FUN_107dfcad0(auStack_208,puVar4,pppuVar25,6,&lStack_210);
    lVar5 = lStack_210;
    _objc_retain(lStack_210);
    if (lVar5 == 0) {
      dVar29 = param_2 * (double)pppuVar31 + dVar28 * dVar29;
      dVar28 = (param_2 * (double)ppuVar32 + dVar28 * (double)ppuVar30) * 0.5;
      if (dVar28 == 0.0) {
        lVar5 = 0;
      }
      else {
        lVar5 = (long)((dVar28 / dVar29) * 70.0);
      }
      func_0x00010b690b78(lVar5);
      puVar1 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
      puVar2 = puVar4;
      func_0x00010c25eac0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf64b00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      uStack_211 = 2;
      puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64a00();
      _objc_retainAutoreleasedReturnValue();
      uVar27 = 0x73743364;
      FUN_107dfd374(0x73743364,0,0);
      _objc_retainAutoreleasedReturnValue();
      uStack_214 = 0;
      uStack_218 = 0x70616e53;
      puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64a00();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = 0x73766864;
      FUN_107dfd374(0x73766864,0,0);
      _objc_retainAutoreleasedReturnValue();
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64a00();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = 0x70726864;
      FUN_107dfd374(0x70726864,0,0);
      _objc_retainAutoreleasedReturnValue();
      uVar26 = (uint)(long)(((double)(long)dVar29 / -180.0 + 1.0) * 2147483648.0);
      uVar26 = (uVar26 & 0xff00ff00) >> 8 | (uVar26 & 0xff00ff) << 8;
      uVar26 = uVar26 >> 0x10 | uVar26 << 0x10;
      uStack_100 = (undefined **)CONCAT44(uVar26,uVar26);
      uVar26 = (uint)(long)(((double)(long)dVar28 / -360.0 + 1.0) * 2147483648.0);
      uVar26 = (uVar26 & 0xff00ff00) >> 8 | (uVar26 & 0xff00ff) << 8;
      uVar26 = uVar26 >> 0x10 | uVar26 << 0x10;
      uStack_f8 = (undefined **)CONCAT44(uVar26,uVar26);
      puVar10 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778,uVar9,&uStack_100,0x10);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = 0x65717569;
      FUN_107dfd374(0x65717569,0,0);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
      func_0x00010bf63640();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf06ae0();
      func_0x00010bf06ae0(puVar12);
      uVar13 = 0x70726f6a;
      FUN_107dfd1fc(0x70726f6a,puVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
      func_0x00010bf63640(PTR__OBJC_CLASS___NSMutableData_1126b4958);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf06ae0();
      func_0x00010bf06ae0(puVar14);
      uVar15 = 0x73763364;
      FUN_107dfd1fc(0x73763364,puVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf06ae0(puVar1);
      func_0x00010bf06ae0(puVar1);
      lStack_220 = 0;
      pppuVar25 = &ppuStack_1c0;
      FUN_107dfcf94(puVar4,pppuVar25,6,puVar1,&lStack_220);
      lVar5 = lStack_220;
      _objc_retain(lStack_220);
      if (lVar5 == 0) {
        puVar16 = puVar1;
        func_0x00010c08fa60();
        uVar26 = (int)puVar16 - 8;
        uVar26 = (uVar26 & 0xff00ff00) >> 8 | (uVar26 & 0xff00ff) << 8;
        uStack_224 = uVar26 >> 0x10 | uVar26 << 0x10;
        func_0x00010c130cc0(puVar4);
        puVar16 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
        _objc_opt_new();
        uStack_228 = 0x64697575;
        uStack_1d8 = 0xdd1f52027a581488;
        uStack_1e0 = 0x934a55f86382ccff;
        puVar17 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120();
        func_0x00010befa120(puVar17);
        ppuStack_160 = &PTR____CFConstantStringClassReference_110ebf938;
        ppuStack_158 = &PTR____CFConstantStringClassReference_110ebf958;
        uStack_100 = &PTR____CFConstantStringClassReference_110dad378;
        uStack_f8 = &PTR____CFConstantStringClassReference_110dad378;
        ppuStack_150 = &PTR____CFConstantStringClassReference_110ebf978;
        ppuStack_148 = &PTR____CFConstantStringClassReference_110ebf998;
        ppuStack_f0 = &PTR____CFConstantStringClassReference_110dce2b8;
        pppuStack_e8 = (undefined ***)&PTR____CFConstantStringClassReference_110ebf9b8;
        ppuStack_e0 = &PTR____CFConstantStringClassReference_110ebf9f8;
        ppuStack_140 = &PTR____CFConstantStringClassReference_110ebf9d8;
        ppuStack_138 = &PTR____CFConstantStringClassReference_110ebfa18;
        puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_130 = &PTR____CFConstantStringClassReference_110ebfa38;
        puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puStack_d8 = puVar18;
        func_0x00010c0df780();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_128 = &PTR____CFConstantStringClassReference_110ebfa58;
        puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puStack_d0 = puVar19;
        func_0x00010c0df780();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_120 = &PTR____CFConstantStringClassReference_110ebfa78;
        puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puStack_c8 = puVar20;
        func_0x00010c0df780();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_118 = &PTR____CFConstantStringClassReference_110ebfa98;
        puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puStack_c0 = puVar21;
        func_0x00010c0df780();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_110 = &PTR____CFConstantStringClassReference_110ebfab8;
        puVar23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puStack_b8 = puVar22;
        func_0x00010c0df780();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_108 = &PTR____CFConstantStringClassReference_110ebfad8;
        ppuStack_a8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ccec8;
        puVar24 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_b0 = puVar23;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar23);
        _objc_release(puVar22);
        _objc_release(puVar21);
        _objc_release(puVar20);
        _objc_release(puVar19);
        _objc_release(puVar18);
        ppuStack_160 = (undefined **)PTR___NSConcreteStackBlock_11034bd00;
        ppuStack_158 = (undefined **)0xc2000000;
        ppuStack_150 = (undefined **)FUN_107dfb8b8;
        ppuStack_148 = (undefined **)&UNK_11088bba8;
        ppuStack_140 = (undefined **)puVar17;
        _objc_retain(puVar17);
        func_0x00010bf97ce0(puVar24);
        func_0x00010befa120(puVar17);
        puVar18 = puVar17;
        func_0x00010bf446e0();
        _objc_retainAutoreleasedReturnValue();
        puVar19 = puVar18;
        func_0x00010bf64920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar18);
        puVar18 = puVar19;
        func_0x00010c08fa60();
        uVar26 = (int)puVar18 + 0x18;
        uVar26 = (uVar26 & 0xff00ff00) >> 8 | (uVar26 & 0xff00ff) << 8;
        uStack_22c = uVar26 >> 0x10 | uVar26 << 0x10;
        func_0x00010bf06a40(puVar16);
        func_0x00010bf06a40(puVar16);
        func_0x00010bf06a40(puVar16);
        func_0x00010bf06ae0(puVar16);
        uStack_f8 = (undefined **)0x0;
        uStack_100 = (undefined **)0x6d6f6f76;
        ppuStack_f0 = (undefined **)0x7472616b;
        puStack_d8 = (undefined *)0x0;
        ppuStack_e0 = (undefined **)0x6d646961;
        lStack_238 = 0;
        pppuVar25 = (undefined ***)&uStack_100;
        pppuStack_e8 = param_4;
        func_0x000107dfd108(puVar4,pppuVar25,3,puVar16,1,&lStack_238);
        lVar5 = lStack_238;
        _objc_retain(lStack_238);
        _objc_release(puVar19);
        _objc_release(ppuStack_140);
        _objc_release(puVar17);
        _objc_release(puVar24);
        _objc_release(puVar16);
      }
      _objc_release(uVar15);
      _objc_release(puVar14);
      _objc_release(uVar13);
      _objc_release(puVar12);
      _objc_release(uVar11);
      _objc_release(puVar10);
      _objc_release(uVar9);
      _objc_release(puVar8);
      _objc_release(uVar7);
      _objc_release(puVar6);
      _objc_release(uVar27);
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
    _objc_release(lVar5);
    _objc_release(puVar4);
    lStack_250 = 0;
    puVar6 = PTR__OBJC_CLASS___NSFileHandle_1126bc690;
    param_5 = param_3;
    func_0x00010bfacd20();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    _objc_retain(puVar4);
    puVar2 = puVar4;
    func_0x00010c08fa60();
    puVar1 = puVar4;
    while (puVar2 != (undefined *)0x0) {
      _objc_autoreleasePoolPush();
      func_0x00010c1571a0(puVar6);
      puVar8 = puVar6;
      func_0x00010c121360();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e1d00();
      func_0x00010c1571a0(puVar6);
      param_5 = puVar1;
      func_0x00010c2bda00(puVar6);
      func_0x00010c0e1d00();
      _objc_release(puVar1);
      _objc_autoreleasePoolPop(puVar2);
      puVar2 = puVar8;
      func_0x00010c08fa60();
      puVar1 = puVar8;
    }
    func_0x00010bf3dba0(puVar6);
    _objc_release(puVar1);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar4);
  }
  else {
LAB_107dfae90:
    _objc_release(puVar2);
    _objc_autoreleasePoolPop(puVar1);
  }
  _objc_release(lStack_250);
LAB_107dfaea8:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a0) {
    ___stack_chk_fail();
    _objc_retain(pppuVar25);
    _objc_retain(param_5);
    puVar1 = param_5;
    _objc_opt_respondsToSelector(param_5,PTR_s_stringValue_112674fe8);
    puVar2 = param_5;
    if (((ulong)puVar1 & 1) != 0) {
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_5);
    }
    uVar27 = *(undefined8 *)(param_3 + 0x20);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar27);
    _objc_release(puVar1);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pppuVar25);
    return;
  }
  return;
}



/* Entry: 107dfb8b8; end: 107dfb97b;  */

void FUN_107dfb8b8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_stringValue_112674fe8);
  uVar2 = param_3;
  if ((uVar1 & 1) != 0) {
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107dfb97c; end: 107dfbb87; -[SCSpectaclesVR180VideoActivityItemGenerator initWithGallerySnap:spawner:outputUrl:] */

undefined8 *
FUN_107dfb97c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_80 = PTR_PTR_1126fb428;
  puVar8 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar8,PTR_s_init_1125d9248);
  if (puVar8 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar1 = puVar8[5];
    puVar8[5] = param_4;
    _objc_release(uVar1);
    _objc_retain(param_3);
    uVar1 = puVar8[2];
    puVar8[2] = param_3;
    _objc_release(uVar1);
    _objc_retain(param_5);
    uVar1 = puVar8[3];
    puVar8[3] = param_5;
    _objc_release(uVar1);
    puVar2 = puVar8;
    func_0x00010bfc0c40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c248140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar8;
    func_0x00010bfc0c40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c248160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar5 = PTR_PTR_1126d7ee0;
    _objc_alloc(PTR_PTR_1126d7ee0);
    func_0x00010c032860();
    puVar6 = PTR_PTR_1126d7c08;
    _objc_alloc();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar3;
    puStack_70 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c017780();
    uVar1 = puVar8[1];
    puVar8[1] = puVar6;
    _objc_release(uVar1);
    _objc_release(puVar7);
    func_0x00010c18b5e0(puVar8[1]);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar8;
  }
  ___stack_chk_fail();
  puVar8 = *(undefined8 **)(param_3 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bf997d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar8,PTR_s_estimatedMediaSize_1125c3f98);
  return puVar8;
}



/* Entry: 107dfbb88; end: 107dfbb8f; -[SCSpectaclesVR180VideoActivityItemGenerator estimatedMediaSize] */

void FUN_107dfbb88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf997d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_estimatedMediaSize_1125c3f98);
  return;
}



/* Entry: 107dfbb90; end: 107dfbb97; -[SCSpectaclesVR180VideoActivityItemGenerator itemId] */

void FUN_107dfbb90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 107dfbb98; end: 107dfbb9f; -[SCSpectaclesVR180VideoActivityItemGenerator primarySortDate] */

void FUN_107dfbb98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf59970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_createTimeUtc_1125b4000);
  return;
}



/* Entry: 107dfbba0; end: 107dfbba7; -[SCSpectaclesVR180VideoActivityItemGenerator secondarySortDate] */

void FUN_107dfbba0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf59970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_createTimeUtc_1125b4000);
  return;
}



/* Entry: 107dfbba8; end: 107dfbbaf; -[SCSpectaclesVR180VideoActivityItemGenerator cancel] */

void FUN_107dfbba8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 107dfbbb0; end: 107dfbbcb; -[SCSpectaclesVR180VideoActivityItemGenerator itemDuration] */

long FUN_107dfbbb0(float param_1,long param_2)

{
  func_0x00010bf8b160(*(undefined8 *)(param_2 + 0x10));
  return (long)param_1;
}



/* Entry: 107dfbbcc; end: 107dfbbd7; -[SCSpectaclesVR180VideoActivityItemGenerator generateItemForActivityType:] */

void FUN_107dfbbcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbf670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_generateItemForActivityType__1125cd740,0);
  return;
}



/* Entry: 107dfbbd8; end: 107dfbbe7; -[SCSpectaclesVR180VideoActivityItemGenerator generateThumbnailForExport:] */

void FUN_107dfbbd8(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfc0450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_generateThumbnailForExport__1125cdab8);
    return;
  }
  return;
}



/* Entry: 107dfbbe8; end: 107dfbc67; -[SCSpectaclesVR180VideoActivityItemGenerator activityItemGenerator:didGenerateItem:itemId:] */

void FUN_107dfbbe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  func_0x00010bef1700(uVar1,param_2,param_1,param_4,uVar2);
  _objc_release(param_4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107dfbc68; end: 107dfbcaf; -[SCSpectaclesVR180VideoActivityItemGenerator activityItemGenerator:didUpdateProgress:] */

void FUN_107dfbc68(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef1720(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107dfbcb0; end: 107dfbd2f; -[SCSpectaclesVR180VideoActivityItemGenerator activityItemGenerator:didFailGeneratingItemWithError:itemId:] */

void FUN_107dfbcb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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



/* Entry: 107dfbd30; end: 107dfbd47; -[SCSpectaclesVR180VideoActivityItemGenerator delegate] */

void FUN_107dfbd30(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107dfbd48; end: 107dfbd53; -[SCSpectaclesVR180VideoActivityItemGenerator setDelegate:] */

void FUN_107dfbd48(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 107dfbd54; end: 107dfbd5b; -[SCSpectaclesVR180VideoActivityItemGenerator generatorSpawner] */

undefined8 FUN_107dfbd54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107dfbd5c; end: 107dfbdab; -[SCSpectaclesVR180VideoActivityItemGenerator .cxx_destruct] */

void FUN_107dfbd5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107dfbdac; end: 107dfbe1f; -[SCSpectaclesVR180VideoCompositor initWithOutputUrl:] */

undefined1 * FUN_107dfbdac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fb430;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107dfbe20; end: 107dfbe67; -[SCSpectaclesVR180VideoCompositor dealloc] */

void FUN_107dfbe20(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf2e3c0(*(undefined8 *)(param_1 + 8));
  puStack_28 = PTR_PTR_1126fb430;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107dfbe68; end: 107dfc7e3; -[SCSpectaclesVR180VideoCompositor createCompositeFromItems:] */

void FUN_107dfbe68(undefined **param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 uVar16;
  int iVar17;
  undefined *puVar18;
  undefined **ppuVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  double dVar28;
  undefined *puStack_280;
  undefined8 uStack_278;
  code *pcStack_270;
  undefined *puStack_268;
  undefined1 auStack_260 [8];
  double dStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  double dStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined **ppuStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined **ppuStack_1b8;
  double dStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  double dStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  double dStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0();
  if (uVar1 != 2) {
    ppuVar6 = param_1;
    func_0x00010bf455e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be0b240(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef1660(ppuVar6);
    _objc_release(param_1);
    _objc_release(ppuVar6);
    goto LAB_107dfc774;
  }
  uVar2 = param_3;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar4 = param_3;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar3);
  uVar2 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar4);
  if (uVar1 == 0 || uVar2 == 0) {
    ppuVar6 = param_1;
    func_0x00010bf455e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be0b240(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef1660(ppuVar6);
    _objc_release(param_1);
    _objc_release(ppuVar6);
  }
  else {
    ppuVar6 = (undefined **)PTR__OBJC_CLASS___AVAsset_1126aff38;
    func_0x00010bf0b9e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___AVAsset_1126aff38;
    func_0x00010bf0b9e0();
    _objc_retainAutoreleasedReturnValue();
    if ((ppuVar6 == (undefined **)0x0) || (puVar3 == (undefined *)0x0)) {
      ppuVar12 = param_1;
      func_0x00010bf455e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be0b240(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef1660(ppuVar12);
      _objc_release(param_1);
      _objc_release(ppuVar12);
    }
    else {
      ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      ppuStack_a8 = ppuVar6;
      puStack_a0 = puVar3;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = (undefined **)PTR__OBJC_CLASS___AVMutableComposition_1126beaa8;
      _objc_alloc_init();
      puVar8 = PTR__OBJC_CLASS___AVMutableVideoCompositionInstruction_1126d7d10;
      func_0x00010c299860();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf8b160(&dStack_190,ppuVar6);
      uVar25 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      dVar22 = *(double *)PTR__kCMTimeZero_110348670;
      uVar16 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      dStack_240 = dVar22;
      uStack_238 = uVar25;
      uStack_230 = uVar16;
      _CMTimeRangeMake(&dStack_158,&dStack_240,&dStack_190);
      uStack_188 = uStack_150;
      dStack_190 = dStack_158;
      uStack_178 = uStack_140;
      uStack_180 = uStack_148;
      uStack_168 = uStack_130;
      uStack_170 = uStack_138;
      func_0x00010c214ec0(puVar8);
      func_0x00010c1b9960(puVar8);
      ppuVar19 = ppuVar6;
      func_0x00010c279200();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar19;
      func_0x00010bf529e0();
      _objc_release(ppuVar19);
      if (ppuVar9 == (undefined **)0x0) {
        ppuVar19 = (undefined **)0x0;
        uVar26 = uStack_148;
LAB_107dfc25c:
        uStack_1d8 = 0;
        uStack_1e0 = 0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        lStack_1f8 = 0;
        uStack_200 = 0;
        uStack_1e8 = 0;
        plStack_1f0 = (long *)0x0;
        _objc_retain(ppuVar12);
        ppuVar11 = ppuVar12;
        func_0x00010bf52a60();
        if (ppuVar11 == (undefined **)0x0) {
          dVar28 = *(double *)PTR__CGSizeZero_110347620;
          uVar27 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
          iVar17 = 0x3c;
        }
        else {
          lVar14 = *plStack_1f0;
          do {
            ppuVar21 = (undefined **)0x0;
            ppuVar10 = ppuVar19;
            do {
              uVar27 = uVar26;
              if (*plStack_1f0 != lVar14) {
                _objc_enumerationMutation(ppuVar12);
                uVar27 = uVar26;
              }
              puVar20 = *(undefined **)(lStack_1f8 + (long)ppuVar21 * 8);
              ppuVar9 = ppuVar7;
              func_0x00010bef9f20(ppuVar7);
              _objc_retainAutoreleasedReturnValue();
              puVar18 = puVar20;
              func_0x00010c279200();
              _objc_retainAutoreleasedReturnValue();
              puVar15 = puVar18;
              func_0x00010bfb1920();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar18);
              if (puVar15 == (undefined *)0x0) {
                ppuVar19 = param_1;
                func_0x00010bf455e0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010be0b240(param_1);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bef1660(ppuVar19);
                _objc_release(param_1);
                _objc_release(ppuVar19);
                _objc_release(ppuVar9);
                ppuVar11 = ppuVar12;
                goto LAB_107dfc728;
              }
              if (puVar20 == (undefined *)0x0) {
                dStack_240 = 0.0;
                uStack_238 = 0;
                uStack_230 = 0;
              }
              else {
                func_0x00010bf8b160(&dStack_240,puVar20);
              }
              dStack_1b0 = dVar22;
              uStack_1a8 = uVar25;
              uStack_1a0 = uVar16;
              _CMTimeRangeMake(&dStack_190,&dStack_1b0,&dStack_240);
              dVar23 = dVar22;
              dStack_240 = dVar22;
              uStack_238 = uVar25;
              uStack_230 = uVar16;
              ppuStack_208 = ppuVar10;
              func_0x00010c067160(ppuVar9);
              ppuVar19 = ppuStack_208;
              _objc_retain(ppuStack_208);
              _objc_release(ppuVar10);
              func_0x00010c0da9e0(ppuVar9);
              dVar28 = dVar23;
              func_0x00010c0d5d20(puVar15);
              puVar18 = PTR__OBJC_CLASS___AVMutableVideoCompositionLayerInstruction_1126d7d18;
              func_0x00010c2998a0(
                                 PTR__OBJC_CLASS___AVMutableVideoCompositionLayerInstruction_1126d7d18
                                 );
              _objc_retainAutoreleasedReturnValue();
              dVar24 = dVar28;
              if (puVar20 != puVar3) {
                dVar24 = 0.0;
              }
              _CGAffineTransformMakeTranslation(&dStack_190,dVar24,0);
              uStack_238 = uStack_188;
              dStack_240 = dStack_190;
              uStack_228 = uStack_178;
              uStack_230 = uStack_180;
              uStack_218 = uStack_168;
              uStack_220 = uStack_170;
              uVar26 = uStack_180;
              dStack_1b0 = dVar22;
              uStack_1a8 = uVar25;
              uStack_1a0 = uVar16;
              func_0x00010c219980(puVar18);
              puVar20 = puVar8;
              func_0x00010c08c380(puVar8);
              _objc_retainAutoreleasedReturnValue();
              puVar13 = puVar20;
              func_0x00010bf09f60();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1b9960(puVar8);
              _objc_release(puVar13);
              _objc_release(puVar20);
              _objc_release(puVar18);
              _objc_release(puVar15);
              _objc_release(ppuVar9);
              ppuVar21 = (undefined **)((long)ppuVar21 + 1);
              ppuVar10 = ppuVar19;
            } while (ppuVar11 != ppuVar21);
            ppuVar11 = ppuVar12;
            func_0x00010bf52a60();
          } while (ppuVar11 != (undefined **)0x0);
          iVar17 = (int)SUB84(dVar23,0);
        }
        _objc_release(ppuVar12);
        ppuVar11 = (undefined **)PTR__OBJC_CLASS___AVMutableVideoComposition_1126d7d20;
        func_0x00010c299820(PTR__OBJC_CLASS___AVMutableVideoComposition_1126d7d20);
        _objc_retainAutoreleasedReturnValue();
        puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a100(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1adc60(ppuVar11);
        _objc_release(puVar18);
        _CMTimeMake(&dStack_258,1,iVar17);
        uStack_188 = uStack_250;
        dStack_190 = dStack_258;
        uStack_180 = uStack_248;
        func_0x00010c19f2e0(ppuVar11);
        func_0x00010c1ea8e0(dVar28 + dVar28,uVar27,ppuVar11);
        puVar18 = PTR__OBJC_CLASS___AVAssetExportSession_1126b0d60;
        _objc_alloc();
        func_0x00010bff4280();
        ppuVar9 = param_1 + 1;
        puVar15 = *ppuVar9;
        *ppuVar9 = puVar18;
        _objc_release(puVar15);
        func_0x00010c1d7200(*ppuVar9);
        func_0x00010c2213a0(*ppuVar9);
        func_0x00010c1d6fc0(*ppuVar9);
        puVar18 = PTR__OBJC_CLASS___CADisplayLink_1126b94a8;
        func_0x00010bf85b60();
        _objc_retainAutoreleasedReturnValue();
        ppuVar10 = param_1 + 3;
        puVar15 = *ppuVar10;
        *ppuVar10 = puVar18;
        _objc_release(puVar15);
        puVar15 = *ppuVar10;
        puVar18 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
        func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befc2c0(puVar15);
        _objc_release(puVar18);
        _objc_initWeak(&dStack_190,param_1);
        puVar18 = *ppuVar9;
        puStack_280 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_278 = 0xc2000000;
        pcStack_270 = FUN_107dfc7e4;
        puStack_268 = &UNK_1108434b0;
        ppuVar9 = &puStack_280;
        _objc_copyWeak(auStack_260,&dStack_190);
        func_0x00010bf9cee0(puVar18);
        _objc_destroyWeak(auStack_260);
        _objc_destroyWeak(&dStack_190);
        ppuVar10 = ppuVar19;
      }
      else {
        ppuVar10 = ppuVar7;
        func_0x00010bef9f20(ppuVar7);
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar6;
        func_0x00010c279200();
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = ppuVar9;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar9);
        if (ppuVar11 != (undefined **)0x0) {
          func_0x00010bf8b160(&dStack_240,ppuVar6);
          dStack_1b0 = dVar22;
          uStack_1a8 = uVar25;
          uStack_1a0 = uVar16;
          _CMTimeRangeMake(&dStack_190,&dStack_1b0,&dStack_240);
          ppuStack_1b8 = (undefined **)0x0;
          uStack_238 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
          dStack_240 = *(double *)PTR__kCMTimeInvalid_110348648;
          uStack_230 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 0x10);
          func_0x00010c067160(ppuVar10);
          ppuVar19 = ppuStack_1b8;
          _objc_retain(ppuStack_1b8);
          _objc_release(ppuVar11);
          _objc_release(ppuVar10);
          uVar26 = uStack_148;
          goto LAB_107dfc25c;
        }
        ppuVar11 = param_1;
        func_0x00010bf455e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be0b240();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef1660(ppuVar11);
        _objc_release(param_1);
      }
LAB_107dfc728:
      _objc_release(ppuVar11);
      _objc_release(ppuVar10);
      _objc_release(puVar8);
      _objc_release(ppuVar7);
      _objc_release(ppuVar12);
      param_1 = ppuVar9;
    }
    _objc_release(puVar3);
    _objc_release(ppuVar6);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
LAB_107dfc774:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(param_1 + 4);
  _objc_destroyWeak(&dStack_190);
  __Unwind_Resume(param_3);
  lVar14 = param_3 + 0x20;
  _objc_loadWeakRetained(lVar14);
  func_0x00010be0ca40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar14);
  return;
}



/* Entry: 107dfc7e4; end: 107dfc80f;  */

void FUN_107dfc7e4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0ca40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107dfc810; end: 107dfc873; -[SCSpectaclesVR180VideoCompositor _pollExporterProgress:] */

void FUN_107dfc810(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c252d60();
  if (lVar1 == 2) {
    lVar1 = param_1;
    func_0x00010bf455e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c117720(*(undefined8 *)(param_1 + 8));
    func_0x00010bef16a0(lVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 107dfc874; end: 107dfca4b; -[SCSpectaclesVR180VideoCompositor _exporterFinished] */

void FUN_107dfc874(undefined *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    return;
  }
  func_0x00010c252d60();
  if (lVar1 == 3) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c0ef100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar3 = PTR__OBJC_CLASS___AVAsset_1126aff38;
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0ef100(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0b9e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      puVar4 = puVar3;
      func_0x00010c279200();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      _objc_release(puVar4);
      puVar4 = puVar3;
      func_0x00010c279200(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      _objc_release(puVar4);
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0ef100(uVar2);
      _objc_retainAutoreleasedReturnValue();
      FUN_107dfadc8();
      _objc_release(uVar2);
      puVar4 = param_1;
      func_0x00010bf455e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0ef100(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef1680(puVar4);
      _objc_release(uVar2);
      goto LAB_107dfca04;
    }
  }
  puVar3 = param_1;
  func_0x00010bf455e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = *(undefined **)(param_1 + 8);
  func_0x00010bf987e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef1660(puVar3);
LAB_107dfca04:
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x18));
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107dfca4c; end: 107dfca67; -[SCSpectaclesVR180VideoCompositor _errorWithCode:] */

void FUN_107dfca4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSError_1126ae858,PTR_s_errorWithDomain_code_userInfo__1125c3e38,
             &PTR____CFConstantStringClassReference_110ebfaf8,param_3,0);
  return;
}



/* Entry: 107dfca68; end: 107dfca7f; -[SCSpectaclesVR180VideoCompositor compositingDelegate] */

void FUN_107dfca68(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107dfca80; end: 107dfca8b; -[SCSpectaclesVR180VideoCompositor setCompositingDelegate:] */

void FUN_107dfca80(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 107dfca8c; end: 107dfcacf; -[SCSpectaclesVR180VideoCompositor .cxx_destruct] */

void FUN_107dfca8c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107dfcad0; end: 107dfcbeb;  */

void FUN_107dfcad0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  char *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  puStack_90 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x4810000000;
  pcStack_70 = "";
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_107dfcf78;
  puStack_98 = &UNK_110a0d578;
  puStack_80 = puStack_90;
  FUN_107dfcbec(param_2,param_3,param_4,&puStack_b0,param_5);
  if ((param_5 == (long *)0x0) || (*param_5 == 0)) {
    uVar1 = puStack_80[4];
    uVar3 = puStack_80[7];
    uVar2 = puStack_80[6];
    param_1[1] = puStack_80[5];
    *param_1 = uVar1;
    param_1[3] = uVar3;
    param_1[2] = uVar2;
    param_1[4] = puStack_80[8];
  }
  else {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  __Block_object_dispose(&uStack_88,8);
  _objc_release(param_2);
  return;
}



/* Entry: 107dfcbec; end: 107dfcf77;  */

void FUN_107dfcbec(long param_1,long param_2,long param_3,long param_4,long *param_5)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  undefined **ppuVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined **ppuVar13;
  long lVar14;
  ulong uVar15;
  uint uStack_94;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  long lStack_70;
  undefined **ppuStack_68;
  
  _objc_retain();
  _objc_retain(param_4);
  lVar3 = param_1;
  func_0x00010c08fa60();
  if (0 < param_3) {
    lVar7 = 0;
    uVar10 = 0;
    do {
      puVar1 = (uint *)(param_2 + lVar7 * 0x10);
      uStack_94 = *puVar1;
      lVar6 = *(long *)(puVar1 + 2);
      _objc_retain(param_1);
      if (uVar10 < lVar3 + uVar10) {
        lVar8 = 0;
        uVar15 = uVar10;
        do {
          ppuStack_68 = (undefined **)0x0;
          _objc_retain(param_1);
          uStack_90 = uStack_90 & 0xffffffff00000000;
          lVar14 = param_1;
          func_0x00010b292308(param_1,uVar15,4,&uStack_90,&ppuStack_68);
          uVar2 = ((uint)uStack_90 & 0xff00ff00) >> 8 | ((uint)uStack_90 & 0xff00ff) << 8;
          uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
          if ((int)lVar14 == 0) {
            uVar2 = 0;
          }
          uVar11 = (ulong)uVar2;
          if (ppuStack_68 == (undefined **)0x0) {
            uStack_90 = uStack_90 & 0xffffffff00000000;
            lVar14 = param_1;
            func_0x00010b292308(param_1,uVar15 + 4,4,&uStack_90,&ppuStack_68);
            uVar9 = ((uint)uStack_90 & 0xff00ff00) >> 8 | ((uint)uStack_90 & 0xff00ff) << 8;
            uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
            if ((int)lVar14 == 0) {
              uVar9 = 0;
            }
            if (ppuStack_68 != (undefined **)0x0) goto LAB_107dfcd00;
            uVar5 = uVar15 + 8;
            if (uVar2 == 0) {
              lVar14 = param_1;
              func_0x00010c08fa60();
              uVar11 = lVar14 - uVar15;
            }
            else if (uVar2 == 1) {
              uStack_90 = 0;
              lVar14 = param_1;
              func_0x00010b292308(param_1,uVar5,8,&uStack_90,&ppuStack_68);
              if (ppuStack_68 != (undefined **)0x0) goto LAB_107dfcd00;
              uVar11 = (uStack_90 & 0xff00ff00ff00ff00) >> 8 | (uStack_90 & 0xff00ff00ff00ff) << 8;
              uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
              uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
              if ((int)lVar14 == 0) {
                uVar11 = 0;
              }
              uVar5 = uVar15 + 0x10;
            }
            uVar12 = uVar5 + 0x10;
            if (uVar9 != 0x75756964) {
              uVar12 = uVar5;
            }
            lVar14 = uVar11 - (uVar12 - uVar15);
            if (uVar11 < uVar12 - uVar15) {
              ppuVar13 = &PTR____CFConstantStringClassReference_110ebfb18;
              func_0x00010b291824();
              _objc_retainAutoreleasedReturnValue();
              ppuVar4 = ppuVar13;
              _objc_autorelease();
              uVar9 = 0;
              uVar15 = 0;
              uVar11 = 0;
              uVar12 = 0;
              lVar14 = 0;
              ppuStack_68 = ppuVar4;
            }
            else {
              ppuVar13 = (undefined **)0x0;
            }
          }
          else {
LAB_107dfcd00:
            uVar9 = 0;
            uVar15 = 0;
            uVar11 = 0;
            uVar12 = 0;
            lVar14 = 0;
            ppuVar13 = ppuStack_68;
          }
          _objc_release(param_1);
          _objc_retain(ppuVar13);
          if (ppuVar13 != (undefined **)0x0) {
            _objc_release(ppuVar13);
            break;
          }
          uVar5 = uVar11;
          _NSIntersectionRange(uVar15,uVar11,uVar10,lVar3);
          if (uVar5 == 0) {
            if (param_5 == (long *)0x0) goto LAB_107dfced0;
            ppuVar13 = &PTR____CFConstantStringClassReference_110ebfb38;
            func_0x00010b291824();
            _objc_retainAutoreleasedReturnValue();
            goto LAB_107dfce50;
          }
          if (uVar9 == uStack_94) {
            if (lVar8 == lVar6) {
              _objc_release(param_1);
              if (param_5 == (long *)0x0) goto LAB_107dfcef0;
              goto LAB_107dfce78;
            }
            lVar8 = lVar8 + 1;
          }
          uVar15 = uVar11 + uVar15;
        } while (uVar15 < lVar3 + uVar10);
      }
      if (param_5 == (long *)0x0) {
LAB_107dfced0:
        _objc_release(param_1);
        lVar14 = 0;
        uVar12 = 0;
        uVar11 = 0;
        uVar15 = 0;
        uStack_94 = 0;
LAB_107dfcef0:
        uStack_90 = (ulong)uStack_94;
        uStack_88 = uVar15;
        uStack_80 = uVar11;
        uStack_78 = uVar12;
        lStack_70 = lVar14;
        (**(code **)(param_4 + 0x10))(param_4,&uStack_90,0);
        uVar10 = uVar12;
        lVar3 = lVar14;
      }
      else {
        ppuVar13 = &PTR____CFConstantStringClassReference_110ebfb58;
        func_0x00010b291840(&PTR____CFConstantStringClassReference_110ebfb58,2);
        _objc_retainAutoreleasedReturnValue();
LAB_107dfce50:
        _objc_autorelease();
        *param_5 = (long)ppuVar13;
        _objc_release(param_1);
        lVar14 = 0;
        uVar12 = 0;
        uVar11 = 0;
        uVar15 = 0;
        uStack_94 = 0;
LAB_107dfce78:
        if (*param_5 != 0) break;
        uStack_90 = (ulong)uStack_94;
        uStack_88 = uVar15;
        uStack_80 = uVar11;
        uStack_78 = uVar12;
        lStack_70 = lVar14;
        (**(code **)(param_4 + 0x10))(param_4,&uStack_90,param_5);
        uVar10 = uVar12;
        lVar3 = lVar14;
        if (*param_5 != 0) break;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != param_3);
  }
  _objc_release(param_4);
  _objc_release(param_1);
  return;
}



/* Entry: 107dfcf78; end: 107dfcf93;  */

void FUN_107dfcf78(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = param_2[1];
  uVar2 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  *(undefined8 *)(lVar1 + 0x40) = param_2[4];
  *(undefined8 *)(lVar1 + 0x28) = uVar3;
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  *(undefined8 *)(lVar1 + 0x38) = uVar5;
  *(undefined8 *)(lVar1 + 0x30) = uVar4;
  return;
}



/* Entry: 107dfcf94; end: 107dfd1fb;  */

void FUN_107dfcf94(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long *param_5)

{
  long lVar1;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain();
  _objc_retain(param_4);
  FUN_107dfcad0(auStack_68,param_1,param_2,param_3,param_5);
  if ((param_5 == (long *)0x0) || (*param_5 == 0)) {
    func_0x00010b292244(param_1,param_4,uStack_50,lStack_48,param_5);
    if ((param_5 == (long *)0x0) || (*param_5 == 0)) {
      lVar1 = param_4;
      func_0x00010c08fa60(param_4);
      func_0x000107dfd058(param_1,param_2,param_3,lVar1 - lStack_48,param_5);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107dfd1fc; end: 107dfd373;  */

void FUN_107dfd1fc(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c08fa60();
  puVar3 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  uVar1 = 0x10;
  if (uVar2 >> 0x20 == 0) {
    uVar1 = 8;
  }
  func_0x00010c08fa60(param_2);
  func_0x00010bf64b80(puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c08fa60(param_2);
  func_0x000107dfd2b4(puVar3,param_1,uVar2);
  uVar2 = param_2;
  func_0x00010c08fa60(param_2);
  func_0x00010b292244(puVar3,param_2,uVar1,uVar2,0);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107dfd374; end: 107dfd4ab;  */

void FUN_107dfd374(undefined8 param_1,undefined1 param_2,uint param_3,long param_4)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 uStack_55;
  uint uStack_54;
  
  _objc_retain(param_4);
  lVar3 = param_4;
  func_0x00010c08fa60();
  puVar4 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  uVar1 = 0x10;
  if (0xfffffffeffffffff < lVar3 - 0xfffffffcU) {
    uVar1 = 8;
  }
  func_0x00010c08fa60(param_4);
  func_0x00010bf64b80(puVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_4;
  func_0x00010c08fa60(param_4);
  func_0x000107dfd2b4(puVar4,param_1,lVar3 + 4);
  _objc_retain(puVar4);
  uStack_55 = param_2;
  func_0x00010b2923ac(puVar4,uVar1,1,&uStack_55,0);
  uVar2 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8;
  uStack_54 = (uVar2 >> 0x10 | uVar2 << 0x10) >> 8;
  func_0x00010b2923ac(puVar4,uVar1 | 1,3,&uStack_54,0);
  _objc_release(puVar4);
  lVar3 = param_4;
  func_0x00010c08fa60(param_4);
  func_0x00010b292244(puVar4,param_4,uVar1 | 4,lVar3,0);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107dfd4ac; end: 107dfd587;  */

void FUN_107dfd4ac(long param_1,long param_2,long *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uStack_48;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = *(long *)(param_1 + 0x28);
  lVar8 = *(long *)(param_2 + 8);
  lVar3 = *(long *)(param_2 + 0x18);
  lVar5 = *(long *)(param_2 + 0x20);
  _objc_retain(uVar2);
  if (lVar4 != 0) {
    uStack_48 = uStack_48 & 0xffffffff00000000;
    uVar7 = uVar2;
    func_0x00010b292308(uVar2,lVar8,4,&uStack_48,param_3);
    uVar6 = ((uint)uStack_48 & 0xff00ff00) >> 8 | ((uint)uStack_48 & 0xff00ff) << 8;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
    if ((int)uVar7 == 0) {
      uVar6 = 0;
    }
    if (((param_3 == (long *)0x0) || (*param_3 == 0)) && (uVar6 != 0)) {
      uVar1 = lVar4 + lVar5 + (lVar3 - lVar8);
      if (uVar6 == 1) {
        uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        uStack_48 = uVar1 >> 0x20 | uVar1 << 0x20;
        lVar8 = lVar8 + 8;
        uVar7 = 8;
      }
      else {
        uVar6 = ((uint)uVar1 & 0xff00ff00) >> 8 | ((uint)uVar1 & 0xff00ff) << 8;
        uStack_48 = CONCAT44(uStack_48._4_4_,uVar6 >> 0x10 | uVar6 << 0x10);
        uVar7 = 4;
      }
      func_0x00010b2923ac(uVar2,lVar8,uVar7,&uStack_48,param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107dfd588; end: 107dfd603; -[SCStreamingMP4Sample initWithTrackId:dataRange:decodeTime:compositionTime:duration:timescale:] */

void FUN_107dfd588(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126fb438;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    *(undefined4 *)((long)puVar1 + 8) = param_3;
    *(undefined4 *)((long)puVar1 + 0xc) = param_6;
    *(undefined4 *)((long)puVar1 + 0x10) = param_7;
    *(undefined4 *)((long)puVar1 + 0x14) = param_8;
    *(undefined4 *)((long)puVar1 + 0x18) = param_9;
  }
  return;
}



/* Entry: 107dfd604; end: 107dfd627; -[SCStreamingMP4Sample copyWithZone:] */

undefined8 FUN_107dfd604(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107dfd628; end: 107dfd69f; -[SCStreamingMP4Sample hash] */

ulong * FUN_107dfd628(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_50;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = (ulong)*(uint *)(param_1 + 8);
  uStack_40 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = *(ulong *)(param_1 + 0xc) & 0xffffffff;
  uStack_30 = *(ulong *)(param_1 + 0xc) >> 0x20;
  uStack_28 = *(ulong *)(param_1 + 0x14) & 0xffffffff;
  uStack_20 = *(ulong *)(param_1 + 0x14) >> 0x20;
  func_0x000100505190(&uStack_50,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (ulong *)param_3) {
    puVar3 = (undefined1 *)0x1;
  }
  else {
    puVar3 = (undefined1 *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar3 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if (((((ulong)puVar2 & 1) == 0) ||
          (((*(int *)((long)puVar1 + 8) != *(int *)(param_3 + 8) ||
            (*(int *)((long)puVar1 + 0xc) != *(int *)(param_3 + 0xc))) ||
           (*(int *)((long)puVar1 + 0x10) != *(int *)(param_3 + 0x10))))) ||
         ((*(int *)((long)puVar1 + 0x14) != *(int *)(param_3 + 0x14) ||
          (*(int *)((long)puVar1 + 0x18) != *(int *)(param_3 + 0x18))))) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)
                 (ulong)(*(long *)((long)puVar1 + 0x20) == *(long *)(param_3 + 0x20) &&
                        *(long *)((long)puVar1 + 0x28) == *(long *)(param_3 + 0x28));
      }
    }
  }
  _objc_release(param_3);
  return (ulong *)puVar3;
}



/* Entry: 107dfd6a0; end: 107dfd77b; -[SCStreamingMP4Sample isEqual:] */

bool FUN_107dfd6a0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((((uVar3 & 1) == 0) ||
          (((*(int *)(param_1 + 8) != *(int *)(param_3 + 8) ||
            (*(int *)(param_1 + 0xc) != *(int *)(param_3 + 0xc))) ||
           (*(int *)(param_1 + 0x10) != *(int *)(param_3 + 0x10))))) ||
         ((*(int *)(param_1 + 0x14) != *(int *)(param_3 + 0x14) ||
          (*(int *)(param_1 + 0x18) != *(int *)(param_3 + 0x18))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
                *(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107dfd77c; end: 107dfd783; -[SCStreamingMP4Sample trackId] */

undefined4 FUN_107dfd77c(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 107dfd784; end: 107dfd78f; -[SCStreamingMP4Sample dataRange] */

undefined1  [16] FUN_107dfd784(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x20);
}



/* Entry: 107dfd790; end: 107dfd797; -[SCStreamingMP4Sample decodeTime] */

undefined4 FUN_107dfd790(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 107dfd798; end: 107dfd79f; -[SCStreamingMP4Sample compositionTime] */

undefined4 FUN_107dfd798(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 107dfd7a0; end: 107dfd7a7; -[SCStreamingMP4Sample duration] */

undefined4 FUN_107dfd7a0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 107dfd7a8; end: 107dfd7af; -[SCStreamingMP4Sample timescale] */

undefined4 FUN_107dfd7a8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 107dfd7b0; end: 107dfd837; -[SCStreamingMP4Segment initWithTracks:sequenceNumber:] */

undefined1 *
FUN_107dfd7b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fb440;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107dfd838; end: 107dfd85b; -[SCStreamingMP4Segment copyWithZone:] */

undefined8 FUN_107dfd838(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107dfd85c; end: 107dfd8c7; -[SCStreamingMP4Segment hash] */

undefined8 * FUN_107dfd85c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(uint *)(param_1 + 8);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107dfd94c;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(int *)(puVar2 + 1) != *(int *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_107dfd94c;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_107dfd94c;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_107dfd94c:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 107dfd8c8; end: 107dfd967; -[SCStreamingMP4Segment isEqual:] */

long FUN_107dfd8c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107dfd94c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(int *)(param_1 + 8) != *(int *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_107dfd94c;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_107dfd94c;
    }
  }
  lVar3 = 1;
LAB_107dfd94c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107dfd968; end: 107dfd96f; -[SCStreamingMP4Segment tracks] */

undefined8 FUN_107dfd968(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107dfd970; end: 107dfd977; -[SCStreamingMP4Segment sequenceNumber] */

undefined4 FUN_107dfd970(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 107dfd978; end: 107dfd983; -[SCStreamingMP4Segment .cxx_destruct] */

void FUN_107dfd978(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107dfd984; end: 107dfda1f; -[SCStreamingMP4Track initWithTrackId:type:timescale:samples:] */

undefined1 *
FUN_107dfd984(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fb448;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined4 *)((long)puVar1 + 8) = param_3;
    *(undefined4 *)((long)puVar1 + 0xc) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 107dfda20; end: 107dfda43; -[SCStreamingMP4Track copyWithZone:] */

undefined8 FUN_107dfda20(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107dfda44; end: 107dfdab7; -[SCStreamingMP4Track hash] */

ulong * FUN_107dfda44(long param_1,undefined8 param_2,ulong *param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uStack_38;
  long lStack_30;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  lStack_30 = -lVar1;
  if (-1 < lVar1) {
    lStack_30 = lVar1;
  }
  uStack_38 = (ulong)*(uint *)(param_1 + 8);
  uStack_28 = (ulong)*(uint *)(param_1 + 0xc);
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_20 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 != param_3) {
    puVar5 = (ulong *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_107dfdb5c;
    puVar5 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar4 & 1) == 0) ||
       ((((int)puVar3[1] != (int)param_3[1] || (puVar3[2] != param_3[2])) ||
        (*(int *)((long)puVar3 + 0xc) != *(int *)((long)param_3 + 0xc))))) {
      puVar5 = (ulong *)0x0;
      goto LAB_107dfdb5c;
    }
    puVar5 = (ulong *)puVar3[3];
    if (puVar5 != (ulong *)param_3[3]) {
      func_0x00010c071ae0();
      goto LAB_107dfdb5c;
    }
  }
  puVar5 = (ulong *)0x1;
LAB_107dfdb5c:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 107dfdab8; end: 107dfdb77; -[SCStreamingMP4Track isEqual:] */

long FUN_107dfdab8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107dfdb5c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       (((*(int *)(param_1 + 8) != *(int *)(param_3 + 8) ||
         (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) ||
        (*(int *)(param_1 + 0xc) != *(int *)(param_3 + 0xc))))) {
      lVar3 = 0;
      goto LAB_107dfdb5c;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != *(long *)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_107dfdb5c;
    }
  }
  lVar3 = 1;
LAB_107dfdb5c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107dfdb78; end: 107dfdb7f; -[SCStreamingMP4Track trackId] */

undefined4 FUN_107dfdb78(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 107dfdb80; end: 107dfdb87; -[SCStreamingMP4Track type] */

undefined8 FUN_107dfdb80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107dfdb88; end: 107dfdb8f; -[SCStreamingMP4Track timescale] */

undefined4 FUN_107dfdb88(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 107dfdb90; end: 107dfdb97; -[SCStreamingMP4Track samples] */

undefined8 FUN_107dfdb90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107dfdb98; end: 107dfdba3; -[SCStreamingMP4Track .cxx_destruct] */

void FUN_107dfdb98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 107dfdba4; end: 107dfde4f;  */

void FUN_107dfdba4(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uStack_1b4;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined **ppuStack_198;
  undefined4 uStack_190;
  undefined4 uStack_180;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  long *plStack_130;
  undefined1 uStack_121;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  undefined2 uStack_106;
  undefined1 *puStack_e8;
  undefined ***pppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126d7ee8);
  if (param_1 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,param_1);
  }
  puVar2 = &uStack_121;
  FUN_107dfe460();
  uStack_190 = 0xf;
  uStack_180 = 0x100;
  _objc_retain(param_2);
  ppuStack_198 = &PTR_DAT_110862760;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  plStack_138 = (long *)0x0;
  uStack_140 = 0;
  plStack_130 = (long *)0x0;
  uStack_106 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_118 = 10;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_DAT_110862700;
  uStack_d0 = 0;
  uStack_d8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  plStack_b8 = (long *)0x0;
  puStack_1b0 = (undefined8 *)0x0;
  puStack_1a8 = (undefined8 *)0x0;
  uStack_1a0 = 0;
  uStack_1b4 = 0;
  puVar3 = &uStack_b0;
  uStack_168 = param_2;
  puStack_e8 = puVar2;
  pppuStack_e0 = &ppuStack_198;
  func_0x0001000e77a0(puVar3,&ppuStack_120,&puStack_1b0,&uStack_1b4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (puStack_1b0 != (undefined8 *)0x0) {
    puStack_1a8 = puStack_1b0;
    __ZdlPv();
  }
  plVar1 = plStack_b8;
  ppuStack_120 = &PTR_DAT_110862700;
  plStack_b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1b0 = &uStack_d8;
  func_0x000100105004(&puStack_1b0);
  plVar1 = plStack_130;
  ppuStack_198 = &PTR_DAT_110862760;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_138;
  plStack_138 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1b0 = &uStack_150;
  func_0x000100105004(&puStack_1b0);
  _objc_release(uStack_168);
  func_0x0001000e76e0(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107dfde50; end: 107dfdeaf;  */

long FUN_107dfde50(long param_1)

{
  long lVar1;
  
  FUN_107dfdba4();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c14b140(param_1);
  }
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 107dfdeb0; end: 107dfdf87;  */

void FUN_107dfdeb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126d7ee8;
  _objc_alloc(PTR_PTR_1126d7ee8);
  func_0x00010c047d20();
  puVar2 = puVar1;
  FUN_107dfeac8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107dfdf88; end: 107dfe01f; -[SCMemoriesMashupUtilsSaveData initWithSnapId:saveStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107dfdf88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fb450;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276fee4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276fee4) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11276fee8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107dfe020; end: 107dfe043; -[SCMemoriesMashupUtilsSaveData copyWithZone:] */

undefined8 FUN_107dfe020(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107dfe044; end: 107dfe0bf; -[SCMemoriesMashupUtilsSaveData hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_107dfe044(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276fee4);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + _DAT_11276fee8);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107dfe154;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       (*(char *)((long)puVar2 + (long)_DAT_11276fee8) !=
        *(char *)((long)param_3 + (long)_DAT_11276fee8))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_107dfe154;
    }
    puVar4 = *(undefined8 **)((long)puVar2 + (long)_DAT_11276fee4);
    if (puVar4 != *(undefined8 **)((long)param_3 + (long)_DAT_11276fee4)) {
      func_0x00010c071ae0();
      goto LAB_107dfe154;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_107dfe154:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 107dfe0c0; end: 107dfe16f; -[SCMemoriesMashupUtilsSaveData isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107dfe0c0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107dfe154;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       (*(char *)(param_1 + (long)_DAT_11276fee8) != *(char *)(param_3 + (long)_DAT_11276fee8))) {
      lVar3 = 0;
      goto LAB_107dfe154;
    }
    lVar3 = *(long *)(param_1 + (long)_DAT_11276fee4);
    if (lVar3 != *(long *)(param_3 + (long)_DAT_11276fee4)) {
      func_0x00010c071ae0();
      goto LAB_107dfe154;
    }
  }
  lVar3 = 1;
LAB_107dfe154:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107dfe170; end: 107dfe17f; -[SCMemoriesMashupUtilsSaveData snapId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107dfe170(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fee4);
}



/* Entry: 107dfe180; end: 107dfe18f; -[SCMemoriesMashupUtilsSaveData saveStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107dfe180(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276fee8);
}



/* Entry: 107dfe190; end: 107dfe1a3; -[SCMemoriesMashupUtilsSaveData .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dfe190(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276fee4,0);
  return;
}



/* Entry: 107dfe1a4; end: 107dfe273; -[SCMemoriesMashupUtilsSnapLevelFailureData initWithSnapIdWithErrorCode:failureCount:collectionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107dfe1a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fb458;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276feec);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276feec) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + (long)_DAT_11276fef0) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276fef4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276fef4) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107dfe274; end: 107dfe297; -[SCMemoriesMashupUtilsSnapLevelFailureData copyWithZone:] */

undefined8 FUN_107dfe274(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107dfe298; end: 107dfe31f; -[SCMemoriesMashupUtilsSnapLevelFailureData hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_107dfe298(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276feec);
  func_0x00010bfde980();
  uStack_38 = (ulong)*(uint *)(param_1 + _DAT_11276fef0);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276fef4);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_107dfe3c8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107dfe3d4;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (*(int *)((long)puVar3 + (long)_DAT_11276fef0) == *(int *)(param_3 + _DAT_11276fef0))) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_11276feec);
      if ((lVar5 == *(long *)(param_3 + _DAT_11276feec)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
         ) {
        puVar6 = *(undefined1 **)((long)puVar3 + (long)_DAT_11276fef4);
        if (puVar6 != *(undefined1 **)(param_3 + _DAT_11276fef4)) {
          func_0x00010c071ae0();
          goto LAB_107dfe3d4;
        }
        goto LAB_107dfe3c8;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_107dfe3d4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 107dfe320; end: 107dfe3ef; -[SCMemoriesMashupUtilsSnapLevelFailureData isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107dfe320(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107dfe3c8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107dfe3d4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (*(int *)(param_1 + (long)_DAT_11276fef0) == *(int *)(param_3 + (long)_DAT_11276fef0))) {
      lVar3 = *(long *)(param_1 + (long)_DAT_11276feec);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_11276feec)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_11276fef4);
        if (lVar3 != *(long *)(param_3 + (long)_DAT_11276fef4)) {
          func_0x00010c071ae0();
          goto LAB_107dfe3d4;
        }
        goto LAB_107dfe3c8;
      }
    }
    lVar3 = 0;
  }
LAB_107dfe3d4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107dfe3f0; end: 107dfe3ff; -[SCMemoriesMashupUtilsSnapLevelFailureData snapIdWithErrorCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107dfe3f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276feec);
}



/* Entry: 107dfe400; end: 107dfe40f; -[SCMemoriesMashupUtilsSnapLevelFailureData failureCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_107dfe400(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11276fef0);
}



/* Entry: 107dfe410; end: 107dfe41f; -[SCMemoriesMashupUtilsSnapLevelFailureData collectionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107dfe410(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fef4);
}



/* Entry: 107dfe420; end: 107dfe45f; -[SCMemoriesMashupUtilsSnapLevelFailureData .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dfe420(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276fef4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276feec,0);
  return;
}



/* Entry: 107dfe460; end: 107dfe4c3;  */

undefined ** FUN_107dfe460(void)

{
  int iVar1;
  
  if ((bRam0000000113824758 & 1) == 0) {
    iVar1 = 0x13824758;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_113248920,0x100000000);
      ___cxa_guard_release(0x113824758);
    }
  }
  return &PTR_PTR_113248920;
}



/* Entry: 107dfe4c4; end: 107dfe54b;  */

void FUN_107dfe4c4(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107dfe54c; end: 107dfe5d7;  */

void FUN_107dfe54c(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c241220(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107dfe5d8; end: 107dfe5e3; +[SCMemoriesMashupUtilsSaveData table] */

undefined * FUN_107dfe5d8(void)

{
  return &UNK_10f45e05e;
}



/* Entry: 107dfe5e4; end: 107dfe6db; +[SCMemoriesMashupUtilsSaveData immutableObjectParse:bufferSize:] */

void FUN_107dfe5e4(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  bool bVar3;
  undefined *puVar4;
  ushort uVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar4 = PTR_PTR_1126d7ee8;
  _objc_alloc(PTR_PTR_1126d7ee8);
  lVar6 = (long)*piVar1;
  uVar5 = *(ushort *)((long)piVar1 - lVar6);
  if (uVar5 < 5) {
    puVar8 = (undefined *)0x0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)piVar1 - lVar6))[2];
    if (uVar7 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar7);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = (long)*piVar1;
      uVar5 = *(ushort *)((long)piVar1 - lVar6);
    }
    if ((6 < uVar5) && (uVar7 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar6)), uVar7 != 0)) {
      bVar3 = *(char *)((long)piVar1 + uVar7) != '\0';
      goto LAB_107dfe69c;
    }
  }
  bVar3 = false;
LAB_107dfe69c:
  func_0x00010c047d20(puVar4,param_2,puVar8,bVar3);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107dfe6dc; end: 107dfe6ff; +[SCMemoriesMashupUtilsSaveData objectClassFunctionPointer] */

undefined1  [16] FUN_107dfe6dc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x107dfe6f8;
  auVar1._0_8_ = 0x107dfe6f0;
  return auVar1;
}



/* Entry: 107dfe700; end: 107dfe7a3;  */

undefined1 * FUN_107dfe700(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  _objc_retain(param_3);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_38 = PTR_PTR_1126fb460;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_3;
      _objc_release(uVar2);
      *(undefined1 *)((long)plVar1 + 0x14) = param_4;
    }
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 107dfe7a4; end: 107dfeac7;  */

void FUN_107dfe7a4(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar5 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar5 < 0) {
      puVar5 = param_1;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar5 != (undefined *)0x0) {
        puVar5 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar5;
        func_0x00010bf636c0();
        _objc_release(puVar5);
        func_0x0001001b9e08(puVar1,&UNK_10f45e07c);
        puVar5 = (undefined *)0x0;
        if (puVar1 == (undefined *)0x0) goto LAB_107dfea34;
        puVar5 = param_1;
        func_0x00010c241220(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        puVar2 = puVar5;
        _objc_retainAutorelease(puVar5);
        func_0x00010bdc3520();
        _sqlite3_bind_text(puVar1,1,puVar2,0xffffffff,0xffffffffffffffff);
        _objc_release(puVar5);
        _objc_release(puVar5);
        puVar5 = puVar1;
        _sqlite3_step();
        if ((int)puVar5 == 100) {
          puVar2 = puVar1;
          _sqlite3_column_int64(puVar1,0);
          puVar5 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126d7ee8);
          _sqlite3_column_blob(puVar1,1);
          _sqlite3_column_bytes(puVar1,1);
          puVar3 = puVar5;
          func_0x00010c0dfea0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_1);
          _objc_release(puVar5);
          _sqlite3_reset(puVar1);
          if (puVar3 == (undefined *)0x0) goto LAB_107dfea2c;
          puVar5 = PTR_PTR_1126d7ef0;
          _objc_alloc(PTR_PTR_1126d7ef0);
          puVar1 = puVar3;
          func_0x00010c241220(puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010c14b140(puVar3);
          FUN_107dfe700(puVar5,puVar2,puVar1,puVar4);
          param_1 = puVar3;
          goto LAB_107dfe880;
        }
      }
    }
    else {
      puVar2 = param_1;
      func_0x00010c1422e0(param_1);
      puVar5 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126d7ee8);
      puVar3 = puVar5;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar5);
      if (puVar3 != (undefined *)0x0) {
        puVar5 = PTR_PTR_1126d7ef0;
        _objc_alloc(PTR_PTR_1126d7ef0);
        puVar1 = puVar3;
        func_0x00010c241220(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c14b140(puVar3);
        FUN_107dfe700(puVar5,puVar2,puVar1,puVar4);
        param_1 = puVar3;
LAB_107dfe880:
        _objc_release(puVar1);
        goto LAB_107dfea34;
      }
LAB_107dfea2c:
      param_1 = (undefined *)0x0;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_107dfea34:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107dfeac8; end: 107dfec8b;  */

void FUN_107dfeac8(undefined *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126d7ef0;
  _objc_retain(param_1);
  _objc_opt_self(puVar1);
  puVar1 = param_1;
  FUN_107dfe7a4();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar4 = PTR_PTR_1126d7ef0;
    _objc_retain(param_1);
    _objc_opt_self(puVar4);
    puVar4 = PTR_PTR_1126d7ef0;
    if (param_1 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_1;
      func_0x00010c241220(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010c14b140(param_1);
      FUN_107dfe700(puVar4,0xffffffffffffffff,puVar2,puVar3);
      _objc_release(puVar2);
    }
    *(undefined4 *)(puVar4 + 0x10) = 1;
    _objc_release(param_1);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    puVar4 = param_1;
    func_0x00010c241220(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar4);
    puVar4 = param_1;
    func_0x00010c14b140();
    puVar1[0x14] = (char)puVar4;
    _objc_retain(puVar1);
    puVar4 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}


