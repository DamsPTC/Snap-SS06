/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b690078; end: 10b690187; -[SCSpectaclesLookupTable isEqual:] */

long FUN_10b690078(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b690160:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b69016c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        lVar4 = 0;
        if ((*(double *)(param_1 + 0x28) != *(double *)(param_3 + 0x28)) ||
           (*(double *)(param_1 + 0x30) != *(double *)(param_3 + 0x30))) goto LAB_10b69016c;
        lVar4 = *(long *)(param_1 + 0x18);
        if ((lVar4 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
          lVar4 = *(long *)(param_1 + 0x20);
          if (lVar4 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10b69016c;
          }
          goto LAB_10b690160;
        }
      }
    }
    lVar4 = 0;
  }
LAB_10b69016c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b690188; end: 10b69018f; -[SCSpectaclesLookupTable camera] */

undefined8 FUN_10b690188(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b690190; end: 10b690197; -[SCSpectaclesLookupTable fieldOfView] */

undefined8 FUN_10b690190(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b690198; end: 10b69019f; -[SCSpectaclesLookupTable data] */

undefined8 FUN_10b690198(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b6901a0; end: 10b6901a7; -[SCSpectaclesLookupTable alignment] */

undefined8 FUN_10b6901a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b6901a8; end: 10b6901af; -[SCSpectaclesLookupTable size] */

undefined1  [16] FUN_10b6901a8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x28);
}



/* Entry: 10b6901b0; end: 10b6901df; -[SCSpectaclesLookupTable .cxx_destruct] */

void FUN_10b6901b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b6901e0; end: 10b69027b; -[SCSpectaclesStabilizationFrame initWithCoder:] */

undefined1 *
FUN_10b6901e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_112709bd8;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf66da0(param_4);
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b69027c; end: 10b690303; -[SCSpectaclesStabilizationFrame initWithTimestamp:stabilization:] */

undefined1 *
FUN_10b69027c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112709bd8;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b690304; end: 10b690327; -[SCSpectaclesStabilizationFrame copyWithZone:] */

undefined8 FUN_10b690304(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b690328; end: 10b690387; -[SCSpectaclesStabilizationFrame encodeWithCoder:] */

void FUN_10b690328(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92e80(uVar1,param_3,param_2,&PTR____CFConstantStringClassReference_110e9f2d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f6d878);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b690388; end: 10b690407; -[SCSpectaclesStabilizationFrame hash] */

ulong * FUN_10b690388(long param_1,undefined8 param_2,ulong *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  double dVar7;
  double dVar8;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_28 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  func_0x00010bfde980();
  puVar3 = &uStack_28;
  uStack_20 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b6904a4:
    puVar6 = (ulong *)0x1;
  }
  else {
    puVar6 = (ulong *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_10b6904b0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      dVar8 = ABS((double)puVar3[1] - (double)param_3[1]);
      dVar7 = ABS((double)puVar3[1] + (double)param_3[1]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
        bVar1 = dVar8 < dVar7;
      }
      if (bVar1) {
        puVar6 = (ulong *)puVar3[2];
        if (puVar6 != (ulong *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10b6904b0;
        }
        goto LAB_10b6904a4;
      }
    }
    puVar6 = (ulong *)0x0;
  }
LAB_10b6904b0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b690408; end: 10b6904cb; -[SCSpectaclesStabilizationFrame isEqual:] */

long FUN_10b690408(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b6904a4:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b6904b0;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar6 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8));
      dVar5 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10b6904b0;
        }
        goto LAB_10b6904a4;
      }
    }
    lVar4 = 0;
  }
LAB_10b6904b0:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b6904cc; end: 10b6904d3; -[SCSpectaclesStabilizationFrame timestamp] */

undefined8 FUN_10b6904cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6904d4; end: 10b6904db; -[SCSpectaclesStabilizationFrame stabilization] */

undefined8 FUN_10b6904d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6904dc; end: 10b6904e7; -[SCSpectaclesStabilizationFrame .cxx_destruct] */

void FUN_10b6904dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b6904e8; end: 10b6905bf; -[SCSpectaclesVideoTranscodingConfiguration initWithCoder:] */

undefined1 * FUN_10b6904e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112709be0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 10) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xb) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6905c0; end: 10b690667; -[SCSpectaclesVideoTranscodingConfiguration initWithIsStereo:isCircular:isRotational:hasPrebakedPadding:videoCircleConfig:] */

undefined1 *
FUN_10b6905c0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_112709be0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined1 *)((long)puVar1 + 10) = param_5;
    *(undefined1 *)((long)puVar1 + 0xb) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 10b690668; end: 10b69068b; -[SCSpectaclesVideoTranscodingConfiguration copyWithZone:] */

undefined8 FUN_10b690668(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b69068c; end: 10b690727; -[SCSpectaclesVideoTranscodingConfiguration encodeWithCoder:] */

void FUN_10b69068c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92da0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f6d898);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110f6d8b8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 10),
                      &PTR____CFConstantStringClassReference_110f6d8d8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xb),
                      &PTR____CFConstantStringClassReference_110f6d8f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f6d918);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b690728; end: 10b6907ab; -[SCSpectaclesVideoTranscodingConfiguration hash] */

ulong * FUN_10b690728(long param_1,undefined8 param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ushort uVar6;
  undefined4 uVar7;
  ulong uVar8;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  ulong uVar9;
  
  puVar3 = &uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *(undefined4 *)(param_1 + 8);
  uVar8 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar7 >> 0x18),
                                          (uint6)(byte)((uint)uVar7 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar7) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar7 >> 8),(short)uVar8);
  uVar9 = CONCAT44((int)(uVar8 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar8 = CONCAT26((short)(uVar9 >> 0x30),CONCAT24((short)(uVar8 >> 0x20),(int)uVar9)) &
          0xff01ff01ffffffff;
  uVar6 = (ushort)(uVar8 >> 0x30);
  uStack_40 = (ulong)uVar1 & 0xff;
  uStack_38 = uVar8 >> 0x10 & 0xff;
  uStack_30 = (ulong)CONCAT24(uVar6,(uint)(ushort)(uVar8 >> 0x20)) & 0xffffffff;
  uStack_28 = (ulong)uVar6;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_20 = uVar2;
  func_0x000107c3191c(&uStack_40,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 != (ulong *)param_3) {
    puVar5 = (undefined1 *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b690860;
    puVar5 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if (((((ulong)puVar4 & 1) == 0) ||
        (((*(char *)((long)puVar3 + 8) != param_3[8] || (*(char *)((long)puVar3 + 9) != param_3[9]))
         || (*(char *)((long)puVar3 + 10) != param_3[10])))) ||
       (*(char *)((long)puVar3 + 0xb) != param_3[0xb])) {
      puVar5 = (undefined1 *)0x0;
      goto LAB_10b690860;
    }
    puVar5 = *(undefined1 **)((long)puVar3 + 0x10);
    if (puVar5 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b690860;
    }
  }
  puVar5 = (undefined1 *)0x1;
LAB_10b690860:
  _objc_release(param_3);
  return (ulong *)puVar5;
}



/* Entry: 10b6907ac; end: 10b69087b; -[SCSpectaclesVideoTranscodingConfiguration isEqual:] */

long FUN_10b6907ac(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b690860;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) == 0) ||
        (((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
          (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))) ||
         (*(char *)(param_1 + 10) != *(char *)(param_3 + 10))))) ||
       (*(char *)(param_1 + 0xb) != *(char *)(param_3 + 0xb))) {
      lVar3 = 0;
      goto LAB_10b690860;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b690860;
    }
  }
  lVar3 = 1;
LAB_10b690860:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b69087c; end: 10b690883; -[SCSpectaclesVideoTranscodingConfiguration isStereo] */

undefined1 FUN_10b69087c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b690884; end: 10b69088b; -[SCSpectaclesVideoTranscodingConfiguration isCircular] */

undefined1 FUN_10b690884(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b69088c; end: 10b690893; -[SCSpectaclesVideoTranscodingConfiguration isRotational] */

undefined1 FUN_10b69088c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b690894; end: 10b69089b; -[SCSpectaclesVideoTranscodingConfiguration hasPrebakedPadding] */

undefined1 FUN_10b690894(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10b69089c; end: 10b6908a3; -[SCSpectaclesVideoTranscodingConfiguration videoCircleConfig] */

undefined8 FUN_10b69089c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6908a4; end: 10b6908af; -[SCSpectaclesVideoTranscodingConfiguration .cxx_destruct] */

void FUN_10b6908a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b6908b0; end: 10b69090b;  */

undefined1  [16]
FUN_10b6908b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_1;
  _CGRectGetMidX();
  _CGRectGetMidY(param_1,param_2,param_3,param_4);
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Entry: 10b69090c; end: 10b69097b;  */

void FUN_10b69090c(void)

{
  return;
}



/* Entry: 10b69097c; end: 10b690a2b;  */

double FUN_10b69097c(double param_1,undefined8 param_2,double param_3,double param_4,double param_5)

{
  double dVar1;
  double dVar2;
  
  dVar1 = param_1;
  _CGRectGetMidX();
  _CGRectGetMidY(param_1,param_2,param_3,param_4);
  dVar2 = 0.0;
  if (((param_5 != 0.0) && (dVar2 = param_3, param_5 != INFINITY)) &&
     (dVar2 = param_5 * param_4, param_3 <= param_5 * param_4)) {
    dVar2 = param_3;
  }
  return dVar1 - dVar2 * 0.5;
}



/* Entry: 10b690a2c; end: 10b690acb;  */

double FUN_10b690a2c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    double param_5)

{
  double dVar1;
  
  dVar1 = param_1;
  _CGRectGetMinX();
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  return param_5 * dVar1;
}



/* Entry: 10b690acc; end: 10b690c87;  */

undefined1  [16] FUN_10b690acc(double param_1,double param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = (long)param_1;
  auVar1._8_8_ = (long)param_2;
  return auVar1;
}



/* Entry: 10b690c88; end: 10b690f97;  */

long FUN_10b690c88(double param_1,double param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  char *pcVar18;
  char *pcVar19;
  int iVar20;
  long lVar21;
  int iVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  char *pcVar27;
  char *pcStack_a0;
  long lStack_78;
  
  uVar9 = param_3;
  _CGColorSpaceCreateDeviceRGB();
  iVar20 = (int)param_1;
  iVar22 = (int)param_2;
  lVar21 = (long)(iVar20 << 2);
  lVar10 = 0;
  _CGBitmapContextCreate(0,(long)iVar20,(long)iVar22,8,lVar21,uVar9,0x2002);
  _CGContextClearRect(0,0,(double)iVar20,(double)iVar22);
  _CGContextDrawImage(0,0,(double)iVar20,(double)iVar22,lVar10,param_3);
  lStack_78 = lVar10;
  _CGBitmapContextGetData();
  if (0 < iVar22) {
    uVar17 = 0;
    pcStack_a0 = (char *)(lStack_78 + 3);
    iVar11 = 0;
    do {
      iVar2 = iVar11 + 4;
      iVar14 = iVar2;
      if (iVar22 <= iVar2) {
        iVar14 = iVar22;
      }
      if (0 < iVar20) {
        lVar26 = 0;
        uVar25 = 0;
        uVar4 = iVar14 - iVar11;
        iVar11 = 4;
        lVar12 = 0;
        pcVar27 = pcStack_a0;
        do {
          lVar3 = (long)iVar20;
          if ((long)iVar11 <= (long)iVar20) {
            lVar3 = (long)iVar11;
          }
          lVar3 = lVar3 + lVar26;
          if (lVar3 < 2) {
            lVar3 = 1;
          }
          iVar15 = (int)(lVar12 + 4);
          iVar14 = iVar20;
          if (iVar15 <= iVar20) {
            iVar14 = iVar15;
          }
          if (0 < (int)uVar4) {
            bVar7 = false;
            bVar8 = false;
            iVar15 = 0;
            uVar23 = (ulong)(uint)((int)uVar25 << 4);
            iVar5 = iVar14 - (int)lVar12;
            lVar13 = lStack_78 + lVar12 * 4;
            pcVar18 = pcVar27;
            do {
              if (iVar5 < 1) {
                bVar6 = (bool)(bVar8 & bVar7);
              }
              else {
                pcVar19 = pcVar18;
                lVar16 = 1;
                do {
                  bVar8 = (bool)(bVar8 | *pcVar19 != '\0');
                  bVar7 = (bool)(*pcVar19 != -1 | bVar7);
                  bVar6 = (bool)(bVar8 & bVar7);
                  if (bVar6) break;
                  bVar1 = lVar16 < iVar5;
                  pcVar19 = pcVar19 + 4;
                  lVar16 = lVar16 + 1;
                } while (bVar1);
              }
              if (bVar6) break;
              iVar15 = iVar15 + 1;
              pcVar18 = pcVar18 + lVar21;
            } while (iVar15 < (int)uVar4);
            if (bVar8) {
              if (bVar7) {
                uVar24 = 0;
                do {
                  if (0 < iVar5) {
                    _bzero(lStack_78 + uVar23,(ulong)(uint)(iVar14 + (int)uVar25 * -4) << 2);
                  }
                  uVar24 = uVar24 + 1;
                  uVar23 = uVar23 + lVar21;
                } while (uVar24 < uVar4);
              }
              else {
                iVar14 = 0;
                do {
                  if (0 < iVar5) {
                    lVar16 = 0;
                    do {
                      *(undefined4 *)(lVar13 + lVar16 * 4) = 0xff000000;
                      lVar16 = lVar16 + 1;
                    } while (lVar3 != lVar16);
                  }
                  lVar13 = lVar13 + lVar21;
                  iVar14 = iVar14 + 1;
                } while (iVar14 < (int)uVar4);
              }
            }
          }
          uVar25 = uVar25 + 1;
          iVar11 = iVar11 + 4;
          lVar26 = lVar26 + -4;
          pcVar27 = pcVar27 + 0x10;
          lVar12 = lVar12 + 4;
        } while (uVar25 != (iVar20 - 1U >> 2) + 1);
      }
      lStack_78 = lStack_78 + (iVar20 << 4);
      uVar17 = uVar17 + 1;
      pcStack_a0 = pcStack_a0 + (iVar20 << 4);
      iVar11 = iVar2;
    } while (uVar17 != (iVar22 - 1U >> 2) + 1);
  }
  _CGColorSpaceRelease(uVar9);
  lVar21 = lVar10;
  _CGBitmapContextCreateImage(lVar10);
  _CGContextRelease(lVar10);
  return lVar21;
}



/* Entry: 10b690f98; end: 10b69119b;  */

void FUN_10b690f98(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR__CGAffineTransformIdentity_110347008;
  uVar7 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uVar6 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar3 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar2 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  param_1[1] = uVar7;
  *param_1 = uVar6;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar5 = *(undefined8 *)(puVar1 + 0x28);
  uVar4 = *(undefined8 *)(puVar1 + 0x20);
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  if (param_4 < 4) {
    if (param_4 == 1) {
LAB_10b69105c:
      uStack_60 = uVar6;
      uStack_58 = uVar7;
      uStack_50 = uVar2;
      uStack_48 = uVar3;
      uStack_40 = uVar4;
      uStack_38 = uVar5;
      _CGAffineTransformTranslate(param_1,param_2,param_3,&uStack_60);
      uStack_88 = param_1[1];
      uStack_90 = *param_1;
      uStack_78 = param_1[3];
      uStack_80 = param_1[2];
      uStack_68 = param_1[5];
      uStack_70 = param_1[4];
      uVar2 = 0x400921fb54442d18;
    }
    else {
      if (param_4 == 2) goto LAB_10b691094;
      if (param_4 != 3) {
        return;
      }
LAB_10b691024:
      uStack_60 = uVar6;
      uStack_58 = uVar7;
      uStack_50 = uVar2;
      uStack_48 = uVar3;
      uStack_40 = uVar4;
      uStack_38 = uVar5;
      _CGAffineTransformTranslate(param_1,0,param_3,&uStack_60);
      uStack_88 = param_1[1];
      uStack_90 = *param_1;
      uStack_78 = param_1[3];
      uStack_80 = param_1[2];
      uStack_68 = param_1[5];
      uStack_70 = param_1[4];
      uVar2 = 0xbff921fb54442d18;
    }
LAB_10b6910c8:
    _CGAffineTransformRotate(&uStack_60,uVar2,&uStack_90);
    param_1[1] = uStack_58;
    *param_1 = uStack_60;
    param_1[3] = uStack_48;
    param_1[2] = uStack_50;
    param_1[5] = uStack_38;
    param_1[4] = uStack_40;
    if (param_4 - 6U < 2) {
      uStack_88 = param_1[1];
      uStack_90 = *param_1;
      uStack_78 = param_1[3];
      uStack_80 = param_1[2];
      uStack_68 = param_1[5];
      uStack_70 = param_1[4];
      goto LAB_10b691140;
    }
    if (1 < param_4 - 4U) {
      return;
    }
  }
  else {
    if (5 < param_4) {
      if (param_4 != 6) {
        if (param_4 != 7) {
          return;
        }
        goto LAB_10b691024;
      }
LAB_10b691094:
      uStack_60 = uVar6;
      uStack_58 = uVar7;
      uStack_50 = uVar2;
      uStack_48 = uVar3;
      uStack_40 = uVar4;
      uStack_38 = uVar5;
      _CGAffineTransformTranslate(param_1,param_2,0,&uStack_60);
      uStack_88 = param_1[1];
      uStack_90 = *param_1;
      uStack_78 = param_1[3];
      uStack_80 = param_1[2];
      uStack_68 = param_1[5];
      uStack_70 = param_1[4];
      uVar2 = 0x3ff921fb54442d18;
      goto LAB_10b6910c8;
    }
    if (param_4 != 4) {
      if (param_4 != 5) {
        return;
      }
      goto LAB_10b69105c;
    }
  }
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  param_3 = param_2;
LAB_10b691140:
  _CGAffineTransformTranslate(&uStack_60,param_3,0,&uStack_90);
  param_1[1] = uStack_58;
  *param_1 = uStack_60;
  param_1[3] = uStack_48;
  param_1[2] = uStack_50;
  param_1[5] = uStack_38;
  param_1[4] = uStack_40;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  _CGAffineTransformScale(&uStack_60,0xbff0000000000000,0x3ff0000000000000,&uStack_90);
  param_1[1] = uStack_58;
  *param_1 = uStack_60;
  param_1[3] = uStack_48;
  param_1[2] = uStack_50;
  param_1[5] = uStack_38;
  param_1[4] = uStack_40;
  return;
}



/* Entry: 10b69119c; end: 10b691283;  */

void FUN_10b69119c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR__CGAffineTransformIdentity_110347008;
  if (param_4 == 3) {
    _CGAffineTransformMakeTranslation(&uStack_50,param_3,0);
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    uStack_68 = uStack_38;
    uStack_70 = uStack_40;
    uStack_58 = uStack_28;
    uStack_60 = uStack_30;
    uVar2 = 0x3ff921fb54442d18;
  }
  else if (param_4 == 2) {
    _CGAffineTransformMakeTranslation(&uStack_50,0);
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    uStack_68 = uStack_38;
    uStack_70 = uStack_40;
    uStack_58 = uStack_28;
    uStack_60 = uStack_30;
    uVar2 = 0xbff921fb54442d18;
  }
  else {
    if (param_4 != 1) {
      uVar2 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uVar3 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      param_1[1] = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      *param_1 = uVar2;
      param_1[3] = uVar4;
      param_1[2] = uVar3;
      uVar2 = *(undefined8 *)(puVar1 + 0x20);
      param_1[5] = *(undefined8 *)(puVar1 + 0x28);
      param_1[4] = uVar2;
      return;
    }
    _CGAffineTransformMakeTranslation(&uStack_50,param_2,param_3);
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    uStack_68 = uStack_38;
    uStack_70 = uStack_40;
    uStack_58 = uStack_28;
    uStack_60 = uStack_30;
    uVar2 = 0x400921fb54442d18;
  }
  _CGAffineTransformRotate(param_1,uVar2,&uStack_80);
  return;
}



/* Entry: 10b691284; end: 10b691287;  */

undefined8 FUN_10b691284(double *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
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
  
  uVar1 = 0;
  _CGAffineTransformIsIdentity();
  if ((uVar1 & 1) == 0) {
    dVar3 = *param_1;
    dVar4 = param_1[1];
    dVar5 = param_1[4];
    dVar6 = param_1[5];
    dVar8 = param_1[2] * 0.0;
    dVar7 = dVar5 + dVar8 + dVar3 * 0.0;
    dVar10 = param_1[3] * 0.0;
    dVar9 = dVar6 + dVar10 + dVar4 * 0.0;
    dVar11 = param_1[2] + dVar3 * 0.0 + dVar5;
    dVar12 = param_1[3] + dVar4 * 0.0 + dVar6;
    if (ABS(dVar11 - dVar7) <= ABS(dVar12 - dVar9)) {
      dVar7 = (dVar5 + dVar3 + dVar8) - dVar7;
      if (dVar12 - dVar9 <= 0.0) {
        uVar2 = 5;
        if (dVar7 <= 0.0) {
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 4;
        if (0.0 <= dVar7) {
          uVar2 = 0;
        }
      }
    }
    else {
      dVar9 = (dVar6 + dVar4 + dVar10) - dVar9;
      if (dVar11 - dVar7 <= 0.0) {
        uVar2 = 7;
        if (0.0 <= dVar9) {
          uVar2 = 3;
        }
      }
      else {
        uVar2 = 6;
        if (dVar9 <= 0.0) {
          uVar2 = 2;
        }
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 10b691288; end: 10b69138b;  */

undefined8 FUN_10b691288(double *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
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
  
  uVar1 = 0;
  _CGAffineTransformIsIdentity();
  if ((uVar1 & 1) == 0) {
    dVar3 = *param_1;
    dVar4 = param_1[1];
    dVar5 = param_1[4];
    dVar6 = param_1[5];
    dVar8 = param_1[2] * 0.0;
    dVar7 = dVar5 + dVar8 + dVar3 * 0.0;
    dVar10 = param_1[3] * 0.0;
    dVar9 = dVar6 + dVar10 + dVar4 * 0.0;
    dVar11 = param_1[2] + dVar3 * 0.0 + dVar5;
    dVar12 = param_1[3] + dVar4 * 0.0 + dVar6;
    if (ABS(dVar11 - dVar7) <= ABS(dVar12 - dVar9)) {
      dVar7 = (dVar5 + dVar3 + dVar8) - dVar7;
      if (dVar12 - dVar9 <= 0.0) {
        uVar2 = 5;
        if (dVar7 <= 0.0) {
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 4;
        if (0.0 <= dVar7) {
          uVar2 = 0;
        }
      }
    }
    else {
      dVar9 = (dVar6 + dVar4 + dVar10) - dVar9;
      if (dVar11 - dVar7 <= 0.0) {
        uVar2 = 7;
        if (0.0 <= dVar9) {
          uVar2 = 3;
        }
      }
      else {
        uVar2 = 6;
        if (dVar9 <= 0.0) {
          uVar2 = 2;
        }
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 10b69138c; end: 10b691423;  */

undefined8 FUN_10b69138c(long param_1)

{
  if (param_1 - 1U < 7) {
    return *(undefined8 *)(&UNK_10e5d3c78 + (param_1 - 1U) * 8);
  }
  return 5;
}



/* Entry: 10b691424; end: 10b6914af; -[SCGraphicsRenderFormat initWithRenderFormat:size:] */

undefined1 *
FUN_10b691424(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112709be8;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6914b0; end: 10b6914d3; -[SCGraphicsRenderFormat copyWithZone:] */

undefined8 FUN_10b6914b0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6914d4; end: 10b6915bb; -[SCGraphicsRenderFormat hash] */

ulong * FUN_10b6914d4(ulong param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar5 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(ulong *)(param_2 + 8);
  func_0x00010c0e8ce0();
  uStack_50 = uVar3 & 0xffffffff;
  func_0x00010c14e120(*(undefined8 *)(param_2 + 8));
  uVar3 = ~param_1 + param_1 * 0x40000;
  uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
  uStack_48 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar4 = *(undefined8 *)(param_2 + 8);
  func_0x00010c106de0();
  uVar3 = ~*(ulong *)(param_2 + 0x10) + *(ulong *)(param_2 + 0x10) * 0x40000;
  uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
  uStack_38 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar3 = ~*(ulong *)(param_2 + 0x18) + *(ulong *)(param_2 + 0x18) * 0x40000;
  uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
  uStack_30 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_40 = uVar4;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_4);
  if (puVar5 == (ulong *)param_4) {
    puVar9 = (undefined1 *)0x1;
  }
  else {
    puVar9 = (undefined1 *)0x0;
    if ((puVar5 != (ulong *)0x0) && (param_4 != (undefined1 *)0x0)) {
      puVar9 = (undefined1 *)puVar5;
      _objc_opt_class(puVar5);
      puVar6 = param_4;
      _objc_opt_isKindOfClass(param_4,puVar9);
      if (((ulong)puVar6 & 1) != 0) {
        lVar7 = *(long *)((long)puVar5 + 8);
        func_0x00010c106de0(lVar7);
        lVar8 = *(long *)(param_4 + 8);
        func_0x00010c106de0(lVar8);
        puVar9 = (undefined1 *)0x0;
        if ((*(double *)((long)puVar5 + 0x10) != *(double *)(param_4 + 0x10)) ||
           (dVar11 = *(double *)((long)puVar5 + 0x18), dVar11 != *(double *)(param_4 + 0x18)))
        goto LAB_10b691674;
        iVar1 = (int)*(undefined8 *)((long)puVar5 + 8);
        func_0x00010c0e8ce0();
        iVar2 = (int)*(undefined8 *)(param_4 + 8);
        func_0x00010c0e8ce0();
        if (iVar1 == iVar2) {
          func_0x00010c14e120(*(undefined8 *)((long)puVar5 + 8));
          dVar12 = dVar11;
          func_0x00010c14e120(*(undefined8 *)(param_4 + 8));
          uVar10 = 0;
          if (dVar11 == dVar12) {
            uVar10 = (uint)(lVar7 == lVar8);
          }
          puVar9 = (undefined1 *)(ulong)uVar10;
          goto LAB_10b691674;
        }
      }
      puVar9 = (undefined1 *)0x0;
    }
  }
LAB_10b691674:
  _objc_release(param_4);
  return (ulong *)puVar9;
}



/* Entry: 10b6915bc; end: 10b6916b3; -[SCGraphicsRenderFormat isEqual:] */

bool FUN_10b6915bc(ulong param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  double dVar8;
  double dVar9;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar3 = param_1;
      _objc_opt_class(param_1);
      uVar4 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar3);
      if ((uVar4 & 1) != 0) {
        lVar5 = *(long *)(param_1 + 8);
        func_0x00010c106de0(lVar5);
        lVar6 = *(long *)(param_3 + 8);
        func_0x00010c106de0(lVar6);
        bVar7 = false;
        if ((*(double *)(param_1 + 0x10) != *(double *)(param_3 + 0x10)) ||
           (dVar8 = *(double *)(param_1 + 0x18), dVar8 != *(double *)(param_3 + 0x18)))
        goto LAB_10b691674;
        iVar1 = (int)*(undefined8 *)(param_1 + 8);
        func_0x00010c0e8ce0();
        iVar2 = (int)*(undefined8 *)(param_3 + 8);
        func_0x00010c0e8ce0();
        if (iVar1 == iVar2) {
          func_0x00010c14e120(*(undefined8 *)(param_1 + 8));
          dVar9 = dVar8;
          func_0x00010c14e120(*(undefined8 *)(param_3 + 8));
          bVar7 = false;
          if (dVar8 == dVar9) {
            bVar7 = lVar5 == lVar6;
          }
          goto LAB_10b691674;
        }
      }
      bVar7 = false;
    }
  }
LAB_10b691674:
  _objc_release(param_3);
  return bVar7;
}



/* Entry: 10b6916b4; end: 10b6916bb; -[SCGraphicsRenderFormat renderFormat] */

undefined8 FUN_10b6916b4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6916bc; end: 10b6916c3; -[SCGraphicsRenderFormat size] */

undefined1  [16] FUN_10b6916bc(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x10);
}



/* Entry: 10b6916c4; end: 10b6916cf; -[SCGraphicsRenderFormat .cxx_destruct] */

void FUN_10b6916c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6916d0; end: 10b691783;  */

undefined1  [16] FUN_10b6916d0(double param_1,double param_2,long param_3,int param_4)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  dVar2 = param_1;
  dVar3 = param_2;
  _objc_retain();
  if (((param_3 != 0) && (func_0x00010c23d0a0(param_3), dVar3 != 0.0)) && (param_2 != 0.0)) {
    func_0x00010c23d0a0(param_3);
    func_0x00010c23d0a0(param_3);
    dVar2 = dVar2 / dVar3;
    if (dVar2 != 0.0) {
      dVar3 = param_1 / param_2;
      bVar1 = dVar2 != dVar3 && dVar2 >= dVar3;
      if (param_4 == 0) {
        bVar1 = dVar2 < dVar3;
      }
      if (bVar1) {
        param_2 = param_1 / dVar2;
      }
      else {
        param_1 = param_2 * dVar2;
      }
    }
  }
  _objc_release(param_3);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10b691784; end: 10b6918af;  */

undefined * FUN_10b691784(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  dVar5 = param_1 * 2.0 + 1.0;
  _objc_retain(param_3);
  func_0x00010bf199e0(0,0,dVar5,dVar5,param_1,param_1,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsBeginImageContextWithOptions(dVar5,dVar5,0,0);
  func_0x00010c19bbe0(param_3);
  uVar2 = param_3;
  _objc_retainAutorelease(param_3);
  func_0x00010bdc0fe0();
  _objc_release(param_3);
  _CGColorGetAlpha(uVar2);
  puVar3 = puVar1;
  func_0x00010bfad680(0x3ff0000000000000,puVar1);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
  puVar4 = puVar3;
  func_0x00010c13a160(param_1,param_1,param_1,param_1,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  return puVar4;
}



/* Entry: 10b6918b0; end: 10b691a47;  */

undefined8
FUN_10b6918b0(double param_1,double param_2,double param_3,undefined8 param_4,long param_5,
             int param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain();
  dVar3 = param_1;
  dVar5 = param_2;
  if (param_5 == 2) {
    uVar2 = 0;
  }
  else {
    if (param_5 != 1) goto LAB_10b691928;
    uVar2 = 1;
  }
  FUN_10b6916d0(param_1,param_2,param_4,uVar2);
LAB_10b691928:
  dVar6 = (param_1 - dVar3) * 0.5;
  dVar7 = 0.0;
  if (param_6 == 0) {
    dVar7 = (param_2 - dVar5) * 0.5;
  }
  dVar4 = dVar6;
  _CGRectGetWidth(dVar6,dVar7,dVar3,dVar5);
  uVar2 = param_4;
  if ((dVar4 == 0.0) || (dVar4 = dVar6, _CGRectGetHeight(dVar6,dVar7,dVar3,dVar5), dVar4 == 0.0)) {
    _objc_retain(param_4);
  }
  else {
    _UIGraphicsBeginImageContextWithOptions(param_1,param_2,0,0);
    _UIGraphicsGetCurrentContext();
    _CGContextSetInterpolationQuality();
    if (0.0 < param_3) {
      puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
      func_0x00010bf19a00(0,0,param_1,param_2,param_3,PTR__OBJC_CLASS___UIBezierPath_1126aec18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7740();
      _objc_release(puVar1);
    }
    func_0x00010bf89920(dVar6,dVar7,dVar3,dVar5,param_4);
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    _UIGraphicsEndImageContext();
  }
  _objc_release(param_4);
  return uVar2;
}



/* Entry: 10b691a48; end: 10b691b2b;  */

undefined8 FUN_10b691a48(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  
  dVar3 = param_1;
  _objc_retain();
  func_0x00010c23d0a0(param_3);
  _UIGraphicsBeginImageContextWithOptions(0);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  dVar4 = dVar3;
  uVar5 = param_2;
  if (0.0 < param_1) {
    func_0x00010c23d0a0(param_3);
    func_0x00010c23d0a0(param_3);
    dVar4 = 0.0;
    uVar5 = 0;
    func_0x00010bf19a00(0,0,dVar3,param_2,param_1,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7740();
    _objc_release(puVar1);
  }
  func_0x00010c23d0a0(param_3);
  func_0x00010c23d0a0(param_3);
  uVar2 = param_3;
  func_0x00010bf89920(0,0,dVar4,uVar5,param_3);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10b691b2c; end: 10b691b3b;  */

void FUN_10b691b2c(void)

{
  uRam00000001137f7838 = 1;
  return;
}



/* Entry: 10b691b3c; end: 10b691bdb;  */

void FUN_10b691b3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  uVar1 = param_7;
  _objc_retain(param_7);
  FUN_10b691bdc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12fc40(param_1,param_2,param_3,param_4,param_5,param_6,uVar1,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 10b691bdc; end: 10b691c17;  */

void FUN_10b691bdc(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00;
  func_0x00010c106aa0(PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e0260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b691c18; end: 10b691c8b;  */

void FUN_10b691c18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  _objc_retain(param_5);
  func_0x00010c14e120(param_3);
  func_0x00010c12fc20(param_1,param_2,uVar1,param_3,param_4,0,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b691c8c; end: 10b691cab;  */

void FUN_10b691c8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe7cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_imageFromView_opaque_scale_drawV_1125d78f8,param_3,param_4,0,0,param_5);
  return;
}



/* Entry: 10b691cac; end: 10b691ddb;  */

void FUN_10b691cac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined1 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined1 uStack_77;
  
  _objc_retain(param_7);
  _objc_retain(param_11);
  uVar1 = param_7;
  func_0x00010bf20c00(param_7);
  FUN_10b691bdc();
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10b691ddc;
  puStack_90 = &UNK_110d58af0;
  uStack_88 = param_11;
  uStack_80 = param_7;
  uStack_78 = param_9;
  uStack_77 = param_10;
  _objc_retain(param_7);
  _objc_retain(param_11);
  func_0x000107c308c8(param_3,param_4,param_1,param_5,param_8,&puStack_a8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(param_7);
  _objc_release(param_11);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 10b691ddc; end: 10b691e77;  */

void FUN_10b691ddc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    _CGContextAddPath(param_2,lVar1);
    _CGContextClip(param_2);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x00010bf20c00(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf89cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (uVar2,PTR_s_drawViewHierarchyInRect_afterScr_1125c00e0,
               *(undefined1 *)(param_1 + 0x31));
    return;
  }
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12fc60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b691e78; end: 10b691fbb;  */

void FUN_10b691e78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe97a0(param_1,param_2,param_3,param_4,param_5,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 10b691fbc; end: 10b692007;  */

void FUN_10b691fbc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retainAutorelease(uVar1);
  func_0x00010bdc0fe0();
  _CGContextSetFillColorWithColor(param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbacf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGContextFillRect_1103471a8)
            (*(undefined8 *)PTR__CGPointZero_110347540,
             *(undefined8 *)(PTR__CGPointZero_110347540 + 8),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),param_2);
  return;
}



/* Entry: 10b692008; end: 10b69208b;  */

void FUN_10b692008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  _objc_retain(param_6);
  func_0x00010c14e120(param_3);
  func_0x00010c14e700(param_1,param_2,uVar1,param_3,param_4,0,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b69208c; end: 10b6920cb;  */

void FUN_10b69208c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c14e120();
                    /* WARNING: Could not recover jumptable at 0x00010c14e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,uVar1,param_3,PTR_s_scaledImageToSize_scale__1126313d0);
  return;
}



/* Entry: 10b6920cc; end: 10b6920d7;  */

void FUN_10b6920cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14e2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,0,0,param_3,PTR_s_scaleImageToFixedSizeWithOffsets_1126312c8);
  return;
}



/* Entry: 10b6920d8; end: 10b6921b7;  */

void FUN_10b6920d8(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  double dVar1;
  double dVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  double dStack_50;
  double dStack_48;
  
  dVar1 = param_1;
  dVar2 = param_2;
  func_0x00010c23d0a0();
  if (((dVar1 == 0.0) || (func_0x00010c23d0a0(param_5), dVar2 == 0.0)) ||
     ((func_0x00010c23d0a0(param_5), dVar1 == param_1 && (dVar2 == param_2)))) {
    _objc_retain(param_5);
  }
  else {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10b6921b8;
    puStack_70 = &UNK_110d58b20;
    uStack_68 = param_5;
    uStack_60 = param_3;
    uStack_58 = param_4;
    dStack_50 = param_1;
    dStack_48 = param_2;
    func_0x00010c12fc00(param_1,param_2,param_5,param_6,&puStack_88);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 10b6921b8; end: 10b6921cb;  */

void FUN_10b6921b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x20),PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 10b6921cc; end: 10b6922eb;  */

void FUN_10b6921cc(double param_1,double param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
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
  func_0x00010c23d0a0();
  dVar4 = param_2;
  func_0x00010c23d0a0(param_4);
  dVar7 = param_1 * dVar4;
  dVar2 = param_1;
  func_0x00010c23d0a0(param_4);
  dVar3 = dVar2;
  dVar5 = dVar4;
  func_0x00010c23d0a0(param_4);
  dStack_58 = (param_1 * dVar4) / dVar3;
  dStack_60 = param_1;
  if (dVar7 < param_2 * dVar1) {
    dStack_58 = param_2;
    dStack_60 = (param_2 * dVar2) / dVar5;
  }
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10b6922ec;
  puStack_80 = &UNK_110d58b20;
  auVar6 = NEON_fmov(0x3fe0000000000000,8);
  dStack_70 = (double)(float)(int)((param_1 - dStack_60) * auVar6._0_8_);
  dStack_68 = (double)(float)(int)((param_2 - dStack_58) * auVar6._8_8_);
  uStack_78 = param_4;
  func_0x00010c12fc20(param_1,param_2,param_3,param_4,param_5,param_6,&puStack_98);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6922ec; end: 10b6922ff;  */

void FUN_10b6922ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x20),PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 10b692300; end: 10b69237f;  */

void FUN_10b692300(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010c23d0a0();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b692380;
  puStack_50 = &UNK_110ac6d80;
  uStack_48 = param_3;
  uStack_40 = param_1;
  uStack_38 = param_2;
  func_0x00010c12fc00(param_3,param_4,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b692380; end: 10b692463;  */

void FUN_10b692380(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf897d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20),PTR_s_drawAtPoint__1125bff98);
  return;
}



/* Entry: 10b692464; end: 10b6924c7;  */

void FUN_10b692464(double param_1,double param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = param_1;
  dVar2 = param_2;
  func_0x00010c23d0a0();
  func_0x00010c23d0a0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bf5c7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((dVar1 - param_1) * 0.5,(dVar2 - param_2) * 0.5,param_1,param_2,param_3,
             PTR_s_croppedImageInRect__1125b4b90);
  return;
}



/* Entry: 10b6924c8; end: 10b6924cf;  */

void FUN_10b6924c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5c7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_croppedImageInRect_opaque__1125b4b98,0);
  return;
}



/* Entry: 10b6924d0; end: 10b69255b;  */

void FUN_10b6924d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _CGRectIntegral();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b69255c;
  puStack_50 = &UNK_110d58b20;
  uStack_48 = param_5;
  uStack_40 = param_1;
  uStack_38 = param_2;
  uStack_30 = param_3;
  uStack_28 = param_4;
  func_0x00010c12fc20(param_3,param_4,0x3ff0000000000000,param_5,param_6,param_7,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b69255c; end: 10b692573;  */

void FUN_10b69255c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf897d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (-*(double *)(param_1 + 0x28),-*(double *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20),PTR_s_drawAtPoint__1125bff98);
  return;
}



/* Entry: 10b692574; end: 10b69261f;  */

void FUN_10b692574(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _CGRectIntegral();
  uVar1 = param_1;
  func_0x00010c14e120(param_5);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10b692620;
  puStack_70 = &UNK_110d58b20;
  uStack_68 = param_5;
  uStack_60 = param_1;
  uStack_58 = param_2;
  uStack_50 = param_3;
  uStack_48 = param_4;
  func_0x00010c12fc20(param_3,param_4,uVar1,param_5,param_6,0,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b692620; end: 10b692637;  */

void FUN_10b692620(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf897d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (-*(double *)(param_1 + 0x28),-*(double *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20),PTR_s_drawAtPoint__1125bff98);
  return;
}



/* Entry: 10b692638; end: 10b692703;  */

void FUN_10b692638(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                  undefined8 param_6)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  
  fVar1 = (float)param_3;
  _hypotf(fVar1,(float)param_4);
  dVar3 = (double)fVar1;
  dVar2 = dVar3 - param_2;
  dVar4 = dVar2 * -0.5;
  func_0x00010c14e120(param_5);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10b692704;
  puStack_80 = &UNK_110d58b20;
  uStack_78 = param_5;
  dStack_70 = (dVar3 - param_1) * -0.5;
  dStack_68 = dVar4;
  dStack_60 = dVar3;
  dStack_58 = dVar3;
  func_0x00010c12fc20(param_1,param_2,dVar2,param_5,param_6,1,&puStack_98);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b692704; end: 10b692717;  */

void FUN_10b692704(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x20),PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 10b692718; end: 10b692817;  */

void FUN_10b692718(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                  undefined8 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  double dStack_60;
  double dStack_58;
  
  dVar5 = 1.0;
  if (param_3 <= 1.0) {
    dVar5 = param_3;
  }
  dVar6 = 1.0;
  if (param_4 <= 1.0) {
    dVar6 = param_4;
  }
  dVar1 = param_1;
  dVar4 = param_2;
  func_0x00010c23d0a0();
  func_0x00010c23d0a0(param_5);
  dVar6 = dVar6 * dVar4;
  dVar2 = -param_1;
  dStack_60 = -1.0;
  if (param_1 <= 1.0) {
    dStack_60 = dVar2;
  }
  func_0x00010c23d0a0(param_5);
  dStack_60 = dStack_60 * dVar2;
  dVar3 = -param_2;
  dVar2 = -1.0;
  if (param_2 <= 1.0) {
    dVar2 = dVar3;
  }
  func_0x00010c23d0a0(param_5);
  func_0x00010c14e120(param_5);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10b692818;
  puStack_70 = &UNK_110ac6d80;
  uStack_68 = param_5;
  dStack_58 = dVar2 * dVar4;
  func_0x00010c12fc20(dVar5 * dVar1,dVar6,dVar3,param_5,param_6,1,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b692818; end: 10b69282f;  */

void FUN_10b692818(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf897d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20),PTR_s_drawAtPoint__1125bff98);
  return;
}



/* Entry: 10b692830; end: 10b692917;  */

void FUN_10b692830(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  double dStack_a8;
  double dStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  
  dVar1 = param_1;
  dVar2 = param_2;
  func_0x00010c23d0a0();
  dVar3 = param_2 / dVar2;
  func_0x00010c23d0a0(param_4);
  dVar1 = param_1 / dVar1;
  dStack_88 = dVar1;
  if (dVar1 <= dVar3) {
    dStack_88 = dVar3;
  }
  func_0x00010c23d0a0(param_4);
  _CGAffineTransformMakeScale(&dStack_70,dStack_88,dStack_88);
  dStack_80 = dStack_60 * dVar2 + dStack_70 * dVar1;
  dStack_78 = dStack_58 * dVar2 + dStack_68 * dVar1;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_10b692918;
  puStack_b8 = &UNK_110d58b80;
  uStack_b0 = param_4;
  dStack_a8 = param_1;
  dStack_a0 = param_2;
  uStack_98 = param_6;
  uStack_90 = param_3;
  func_0x00010c12fc00(param_1,param_2,param_4,param_5,&puStack_d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b692918; end: 10b6929a7;  */

void FUN_10b692918(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199e0(0,0,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x40),
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18,param_2,
                      *(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7740();
  _objc_release(puVar1);
  _CGContextScaleCTM(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x48),param_2);
  auVar2 = NEON_fmov(0xbfe0000000000000,8);
                    /* WARNING: Could not recover jumptable at 0x00010bf897d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((*(double *)(param_1 + 0x50) - *(double *)(param_1 + 0x28)) * auVar2._0_8_,
             (*(double *)(param_1 + 0x58) - *(double *)(param_1 + 0x30)) * auVar2._8_8_,
             *(undefined8 *)(param_1 + 0x20),PTR_s_drawAtPoint__1125bff98);
  return;
}



/* Entry: 10b6929a8; end: 10b692a43;  */

void FUN_10b6929a8(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  
  dVar1 = param_1;
  func_0x00010c23d0a0();
  func_0x00010c23d0a0(param_3);
  dStack_60 = dVar1;
  if (param_2 <= dVar1) {
    dStack_60 = param_2;
  }
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10b692a44;
  puStack_70 = &UNK_110d58bb0;
  uStack_68 = param_3;
  dStack_58 = dStack_60;
  dStack_50 = param_1;
  dStack_48 = dVar1;
  dStack_40 = param_2;
  dStack_38 = dStack_60;
  func_0x00010c12fc00(dStack_60,dStack_60,param_3,param_4,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b692a44; end: 10b692aff;  */

void FUN_10b692a44(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199a0(0,0,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7740();
  _objc_release(puVar1);
  if (*(double *)(param_1 + 0x38) != 1.0) {
    dVar2 = 1.0 - *(double *)(param_1 + 0x38);
    _CGContextTranslateCTM
              (dVar2 * *(double *)(param_1 + 0x40) * 0.5,dVar2 * *(double *)(param_1 + 0x48) * 0.5,
               param_2);
    _CGContextScaleCTM(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x38),param_2);
  }
  auVar3 = NEON_fmov(0xbfe0000000000000,8);
                    /* WARNING: Could not recover jumptable at 0x00010bf897d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((*(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x50)) * auVar3._0_8_,
             (*(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x50)) * auVar3._8_8_,
             *(undefined8 *)(param_1 + 0x20),PTR_s_drawAtPoint__1125bff98);
  return;
}



/* Entry: 10b692b00; end: 10b692b43;  */

void FUN_10b692b00(double param_1,double param_2,undefined8 param_3)

{
  double dVar1;
  
  dVar1 = param_1;
  func_0x00010c23d0a0();
  func_0x00010c23d0a0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bf5c850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1 * dVar1,param_1 * param_2,param_3,PTR_s_croppedImageToSize__1125b4bb8);
  return;
}



/* Entry: 10b692b44; end: 10b692c73;  */

void FUN_10b692b44(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  double dStack_e8;
  undefined8 uStack_e0;
  double dStack_d8;
  double dStack_d0;
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
  
  dVar2 = param_1;
  _objc_retain(param_5);
  func_0x00010c23d0a0(param_5);
  func_0x00010c23d0a0(param_5);
  _CGAffineTransformMakeRotation(&uStack_90,(param_1 * 3.141592653589793) / 180.0);
  uStack_b8 = uStack_88;
  uStack_c0 = uStack_90;
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  dVar3 = dVar2;
  uVar4 = param_2;
  _CGRectApplyAffineTransform(0,0,&uStack_c0);
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_10b692c74;
  puStack_f8 = &UNK_110d58be0;
  uStack_f0 = param_5;
  dStack_e8 = dVar3;
  uStack_e0 = uVar4;
  dStack_d8 = param_1;
  dStack_d0 = dVar2;
  uStack_c8 = param_2;
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010c12fc00(dVar3,uVar4,param_5,param_4,&puStack_110);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_f0);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b692c74; end: 10b692d23;  */

void FUN_10b692c74(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  _CGContextTranslateCTM
            (*(double *)(param_1 + 0x28) * 0.5,*(double *)(param_1 + 0x30) * 0.5,param_2);
  _CGContextRotateCTM((*(double *)(param_1 + 0x38) * 3.141592653589793) / 180.0,param_2);
  _CGContextScaleCTM(0x3ff0000000000000,0xbff0000000000000,param_2);
  dVar2 = *(double *)(param_1 + 0x40);
  dVar3 = *(double *)(param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retainAutorelease(uVar1);
  func_0x00010bdc1020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbac94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGContextDrawImage_110347168)(dVar2 * -0.5,dVar3 * -0.5,dVar2,dVar3,param_2,uVar1);
  return;
}



/* Entry: 10b692d24; end: 10b692eb7;  */

void FUN_10b692d24(double param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (param_4 == param_5) {
    dVar2 = ABS(param_1 + -1.0);
    dVar3 = ABS(param_1 + 1.0) * 2.220446049250313e-16;
    bVar1 = true;
    if ((2.2250738585072014e-308 <= dVar2) && (bVar1 = false, !NAN(dVar2) && !NAN(dVar3))) {
      bVar1 = dVar2 < dVar3;
    }
    if (bVar1) {
      _objc_retain(param_2);
      goto LAB_10b692e98;
    }
  }
  dVar2 = 0.0;
  dVar3 = 0.0;
  if (param_4 - 1U < 7) {
    dVar3 = *(double *)(&UNK_10e5d3cb0 + (param_4 - 1U) * 8);
  }
  if (param_5 - 1U < 7) {
    dVar2 = *(double *)(&UNK_10e5d3cb0 + (param_5 - 1U) * 8);
  }
  dVar6 = dVar3 - dVar2;
  func_0x00010c23d0a0(param_2);
  func_0x00010c23d0a0(param_2);
  _CGAffineTransformMakeRotation(&uStack_80,(dVar6 * 3.141592653589793) / 180.0);
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  dVar4 = dVar2;
  dVar5 = dVar3;
  _CGRectApplyAffineTransform(0,0,&uStack_b0);
  lStack_e0 = (long)(param_1 * dVar4);
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_10b692eb8;
  puStack_f0 = &UNK_110d58bb0;
  lStack_d8 = (long)(param_1 * dVar5);
  uStack_e8 = param_2;
  dStack_d0 = dVar6;
  dStack_c8 = param_1;
  dStack_c0 = dVar2;
  dStack_b8 = dVar3;
  func_0x00010c12fc20(lStack_e0,lStack_d8,0x3ff0000000000000,param_2,param_3,0,&puStack_108);
  _objc_retainAutoreleasedReturnValue();
LAB_10b692e98:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10b692eb8; end: 10b692f37;  */

void FUN_10b692eb8(long param_1,undefined8 param_2)

{
  _CGContextTranslateCTM
            (*(double *)(param_1 + 0x28) * 0.5,*(double *)(param_1 + 0x30) * 0.5,param_2);
  _CGContextRotateCTM((*(double *)(param_1 + 0x38) * 3.141592653589793) / 180.0,param_2);
  _CGContextScaleCTM(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x40),param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(double *)(param_1 + 0x48) * -0.5,*(double *)(param_1 + 0x50) * -0.5,
             *(undefined8 *)(param_1 + 0x20),PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 10b692f38; end: 10b692fd3;  */

void FUN_10b692f38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_6);
  _objc_opt_class(param_4);
  func_0x00010bfe6ce0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 10b692fd4; end: 10b693177;  */

void FUN_10b692fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_6);
  _objc_opt_class(param_4);
  func_0x00010bfe6d00(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 10b693178; end: 10b6932bf;  */

void FUN_10b693178(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_108 = *(undefined8 *)(param_1 + 0x30);
  uStack_110 = *(undefined8 *)(param_1 + 0x28);
  uStack_f8 = *(undefined8 *)(param_1 + 0x40);
  uStack_100 = *(undefined8 *)(param_1 + 0x38);
  uStack_e8 = *(undefined8 *)(param_1 + 0x50);
  uStack_f0 = *(undefined8 *)(param_1 + 0x48);
  _CGContextConcatCTM(param_2,&uStack_110);
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar4);
  lVar3 = lVar4;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar4);
      }
      uVar5 = *(undefined8 *)(lVar6 * 8);
      cVar1 = *(char *)(param_1 + 0x68);
      func_0x00010c23d0a0(uVar5);
      if (cVar1 == '\x01') {
        func_0x00010b6923a0();
      }
      else {
        func_0x000107c308cc();
      }
      func_0x00010bf89920(uVar5);
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c12fc20();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6932c0; end: 10b693323;  */

void FUN_10b6932c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_10b693324;
  puStack_30 = &UNK_110d58c40;
  uStack_28 = param_1;
  uStack_20 = param_2;
  uStack_18 = param_3;
  func_0x00010c12fc20(param_1,param_2,0x3ff0000000000000,param_4,param_5,0,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b693324; end: 10b6933ff;  */

void FUN_10b693324(long param_1)

{
  undefined *puVar1;
  double dVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bbe0();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199c0(0,0,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad4a0();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bbe0();
  _objc_release(puVar1);
  dVar2 = *(double *)(param_1 + 0x30);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199a0((*(double *)(param_1 + 0x20) - dVar2) * 0.5,
                      (*(double *)(param_1 + 0x28) - dVar2) * 0.5,dVar2,dVar2,
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad680(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b693400; end: 10b69348f;  */

void FUN_10b693400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x00010c23d0a0();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10b693490;
  puStack_68 = &UNK_110d58be0;
  uStack_50 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
  uStack_58 = *(undefined8 *)PTR__CGPointZero_110347540;
  uStack_60 = param_3;
  uStack_48 = uVar1;
  uStack_40 = param_2;
  uStack_38 = param_1;
  func_0x00010c12fc00(param_3,param_4,&puStack_80);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b693490; end: 10b6934ab;  */

void FUN_10b693490(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf89950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x20),
             PTR_s_drawInRect_blendMode_alpha__1125bfff8,2);
  return;
}



/* Entry: 10b6934ac; end: 10b69359b;  */

void FUN_10b6934ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  if (param_5 == 0) {
    _objc_retain(param_3);
  }
  else {
    func_0x00010c23d0a0();
    uVar1 = param_1;
    func_0x00010c14e120(param_3);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_10b69359c;
    puStack_78 = &UNK_110d58c60;
    _objc_retain(param_5);
    uStack_58 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
    uStack_60 = *(undefined8 *)PTR__CGPointZero_110347540;
    lStack_70 = param_5;
    uStack_68 = param_3;
    uStack_50 = param_1;
    uStack_48 = param_2;
    func_0x00010c12fc20(param_1,param_2,uVar1,param_3,param_4,1,&puStack_90);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_70);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b69359c; end: 10b69362b;  */

void FUN_10b69359c(long param_1)

{
  func_0x00010c1607a0(*(undefined8 *)(param_1 + 0x20));
  _UIRectFill(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
              *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
             *(undefined8 *)(param_1 + 0x28),PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 10b69362c; end: 10b6936eb;  */

void FUN_10b69362c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10b6936ec;
  puStack_68 = &UNK_110d58c60;
  uStack_48 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
  uStack_50 = *(undefined8 *)PTR__CGPointZero_110347540;
  uStack_60 = param_3;
  uStack_58 = param_5;
  uStack_40 = param_1;
  uStack_38 = param_2;
  _objc_retain(param_5);
  func_0x00010c12fc00(param_1,param_2,param_3,param_4,&puStack_80);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_58);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b6936ec; end: 10b69372b;  */

void FUN_10b6936ec(long param_1)

{
  func_0x00010bf89920(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x20));
  func_0x00010c19bbe0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbc8e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__UIRectFillUsingBlendMode_110345d68)
            (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),0x14);
  return;
}



/* Entry: 10b69372c; end: 10b693793;  */

void FUN_10b69372c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10b693794;
  puStack_58 = &UNK_110d58b80;
  uStack_50 = param_7;
  uStack_48 = param_1;
  uStack_40 = param_2;
  uStack_38 = param_9;
  uStack_30 = param_3;
  uStack_28 = param_4;
  uStack_20 = param_5;
  uStack_18 = param_6;
  func_0x00010c12fc00(param_7,param_8,&puStack_70);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b693794; end: 10b693867;  */

void FUN_10b693794(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  _CGContextSetFillColorWithColor(param_2,puVar2);
  _objc_release(puVar1);
  _CGContextFillRect(0,0,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),param_2);
  if (*(long *)(param_1 + 0x38) == 4) {
    _CGContextRotateCTM(0xbff921fb54442d18,param_2);
    dVar3 = -*(double *)(param_1 + 0x30);
    dVar4 = 0.0;
  }
  else {
    if (*(long *)(param_1 + 0x38) != 3) goto LAB_10b69384c;
    _CGContextRotateCTM(0x3ff921fb54442d18,param_2);
    dVar4 = -*(double *)(param_1 + 0x28);
    dVar3 = 0.0;
  }
  _CGContextTranslateCTM(dVar3,dVar4,param_2);
LAB_10b69384c:
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
             *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
             *(undefined8 *)(param_1 + 0x20),PTR_s_drawInRect__1125bfff0);
  return;
}


