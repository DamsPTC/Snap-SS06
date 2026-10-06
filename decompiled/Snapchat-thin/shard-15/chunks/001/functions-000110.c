/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b88ed4c; end: 10b88f063;  */

long * FUN_10b88ed4c(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                    long param_7,long param_8,long param_9,long param_10,long param_11,long param_12
                    ,long param_13,long param_14,long param_15,long param_16,long param_17,
                    undefined1 param_18,undefined4 param_19,long param_20,undefined4 param_21,
                    undefined4 param_22,long param_23,undefined4 param_24)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_20);
  plVar1 = (long *)0x0;
  if (param_2 != 0) {
    puStack_80 = PTR_PTR_11270b958;
    plVar1 = &lStack_88;
    lStack_88 = param_2;
    _objc_msgSendSuper2(plVar1,PTR_s_init_1125d9248);
    if (plVar1 != (long *)0x0) {
      lVar2 = param_3;
      func_0x00010bf51e00();
      lVar3 = plVar1[2];
      plVar1[2] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_4;
      func_0x00010bf51e00();
      lVar3 = plVar1[3];
      plVar1[3] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_5;
      func_0x00010bf51e00();
      lVar3 = plVar1[4];
      plVar1[4] = lVar2;
      _objc_release(lVar3);
      plVar1[5] = param_6;
      plVar1[6] = param_7;
      lVar2 = param_8;
      func_0x00010bf51e00();
      lVar3 = plVar1[7];
      plVar1[7] = lVar2;
      _objc_release(lVar3);
      plVar1[8] = param_9;
      plVar1[9] = param_10;
      plVar1[10] = param_11;
      plVar1[0xb] = param_1;
      lVar2 = param_12;
      func_0x00010bf51e00();
      lVar3 = plVar1[0xc];
      plVar1[0xc] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_13;
      func_0x00010bf51e00();
      lVar3 = plVar1[0xd];
      plVar1[0xd] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_14;
      func_0x00010bf51e00();
      lVar3 = plVar1[0xe];
      plVar1[0xe] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_15;
      func_0x00010bf51e00();
      lVar3 = plVar1[0xf];
      plVar1[0xf] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_16;
      func_0x00010bf51e00();
      lVar3 = plVar1[0x10];
      plVar1[0x10] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_17;
      func_0x00010bf51e00();
      lVar3 = plVar1[0x11];
      plVar1[0x11] = lVar2;
      _objc_release(lVar3);
      *(undefined1 *)(plVar1 + 1) = param_18;
      lVar2 = param_20;
      func_0x00010bf51e00();
      lVar3 = plVar1[0x12];
      plVar1[0x12] = lVar2;
      _objc_release(lVar3);
      *(undefined1 *)((long)plVar1 + 9) = (undefined1)param_21;
      *(undefined1 *)((long)plVar1 + 10) = param_21._1_1_;
      plVar1[0x13] = param_23;
      *(undefined1 *)((long)plVar1 + 0xb) = (undefined1)param_24;
      *(undefined1 *)((long)plVar1 + 0xc) = param_24._1_1_;
    }
  }
  _objc_release(param_20);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return plVar1;
}



/* Entry: 10b88f064; end: 10b88f087; -[SCAdWebviewConfig copyWithZone:] */

undefined8 FUN_10b88f064(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b88f088; end: 10b88f1cf; -[SCAdWebviewConfig hash] */

undefined8 * FUN_10b88f088(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  double dVar8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  long lStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_e0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_e0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_d8 = uVar2;
  func_0x00010bfde980();
  uStack_c8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  uStack_c0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x30));
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_d0 = uVar1;
  func_0x00010bfde980();
  uStack_a0 = *(undefined8 *)(param_1 + 0x50);
  uVar5 = ~*(ulong *)(param_1 + 0x58) + *(ulong *)(param_1 + 0x58) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_b0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x40));
  uStack_a8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x48));
  uStack_98 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_98 = uStack_98 ^ uStack_98 >> 0x16;
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  uStack_b8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uStack_90 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uStack_60 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uStack_50 = (ulong)*(byte *)(param_1 + 9);
  uStack_48 = (ulong)*(byte *)(param_1 + 10);
  lVar6 = *(long *)(param_1 + 0x98);
  lStack_40 = -lVar6;
  if (-1 < lVar6) {
    lStack_40 = lVar6;
  }
  uStack_38 = (ulong)*(byte *)(param_1 + 0xb);
  uStack_30 = (ulong)*(byte *)(param_1 + 0xc);
  uStack_58 = uVar1;
  func_0x000107c3191c(&uStack_e0,0x17);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b88f410:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b88f41c;
    puVar7 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if (((((ulong)puVar4 & 1) != 0) &&
        ((((*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28) &&
           (*(long *)((long)puVar3 + 0x30) == *(long *)(param_3 + 0x30))) &&
          (*(long *)((long)puVar3 + 0x40) == *(long *)(param_3 + 0x40))) &&
         ((*(long *)((long)puVar3 + 0x48) == *(long *)(param_3 + 0x48) &&
          (*(long *)((long)puVar3 + 0x50) == *(long *)(param_3 + 0x50))))))) &&
       ((*(char *)((long)puVar3 + 8) == param_3[8] &&
        (((*(char *)((long)puVar3 + 9) == param_3[9] &&
          (*(char *)((long)puVar3 + 10) == param_3[10])) &&
         ((*(long *)((long)puVar3 + 0x98) == *(long *)(param_3 + 0x98) &&
          ((*(char *)((long)puVar3 + 0xb) == param_3[0xb] &&
           (*(char *)((long)puVar3 + 0xc) == param_3[0xc])))))))))) {
      dVar8 = ABS(*(double *)((long)puVar3 + 0x58) - *(double *)(param_3 + 0x58));
      if (((((dVar8 < 2.2250738585072014e-308) ||
            (dVar8 < ABS(*(double *)((long)puVar3 + 0x58) + *(double *)(param_3 + 0x58)) *
                     2.220446049250313e-16)) &&
           ((((lVar6 = *(long *)((long)puVar3 + 0x10), lVar6 == *(long *)(param_3 + 0x10) ||
              (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
             (((lVar6 = *(long *)((long)puVar3 + 0x18), lVar6 == *(long *)(param_3 + 0x18) ||
               (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
              ((lVar6 = *(long *)((long)puVar3 + 0x20), lVar6 == *(long *)(param_3 + 0x20) ||
               (func_0x00010c071ae0(), (int)lVar6 != 0)))))) &&
            ((((lVar6 = *(long *)((long)puVar3 + 0x38), lVar6 == *(long *)(param_3 + 0x38) ||
               (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
              (((lVar6 = *(long *)((long)puVar3 + 0x60), lVar6 == *(long *)(param_3 + 0x60) ||
                (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
               ((lVar6 = *(long *)((long)puVar3 + 0x68), lVar6 == *(long *)(param_3 + 0x68) ||
                (func_0x00010c071ae0(), (int)lVar6 != 0)))))) &&
             ((lVar6 = *(long *)((long)puVar3 + 0x70), lVar6 == *(long *)(param_3 + 0x70) ||
              (func_0x00010c071ae0(), (int)lVar6 != 0)))))))) &&
          ((lVar6 = *(long *)((long)puVar3 + 0x78), lVar6 == *(long *)(param_3 + 0x78) ||
           (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
         (((lVar6 = *(long *)((long)puVar3 + 0x80), lVar6 == *(long *)(param_3 + 0x80) ||
           (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
          ((lVar6 = *(long *)((long)puVar3 + 0x88), lVar6 == *(long *)(param_3 + 0x88) ||
           (func_0x00010c071ae0(), (int)lVar6 != 0)))))) {
        puVar7 = *(undefined1 **)((long)puVar3 + 0x90);
        if (puVar7 != *(undefined1 **)(param_3 + 0x90)) {
          func_0x00010c071ae0();
          goto LAB_10b88f41c;
        }
        goto LAB_10b88f410;
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_10b88f41c:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 10b88f1d0; end: 10b88f437; -[SCAdWebviewConfig isEqual:] */

long FUN_10b88f1d0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b88f410:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b88f41c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        ((((*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28) &&
           (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) &&
          (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))) &&
         ((*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48) &&
          (*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50))))))) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (((*(char *)(param_1 + 9) == *(char *)(param_3 + 9) &&
          (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
         ((*(long *)(param_1 + 0x98) == *(long *)(param_3 + 0x98) &&
          ((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
           (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))))))))))) {
      dVar4 = ABS(*(double *)(param_1 + 0x58) - *(double *)(param_3 + 0x58));
      if (((((dVar4 < 2.2250738585072014e-308) ||
            (dVar4 < ABS(*(double *)(param_1 + 0x58) + *(double *)(param_3 + 0x58)) *
                     2.220446049250313e-16)) &&
           ((((lVar3 = *(long *)(param_1 + 0x10), lVar3 == *(long *)(param_3 + 0x10) ||
              (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
             (((lVar3 = *(long *)(param_1 + 0x18), lVar3 == *(long *)(param_3 + 0x18) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
              ((lVar3 = *(long *)(param_1 + 0x20), lVar3 == *(long *)(param_3 + 0x20) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)))))) &&
            ((((lVar3 = *(long *)(param_1 + 0x38), lVar3 == *(long *)(param_3 + 0x38) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
              (((lVar3 = *(long *)(param_1 + 0x60), lVar3 == *(long *)(param_3 + 0x60) ||
                (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
               ((lVar3 = *(long *)(param_1 + 0x68), lVar3 == *(long *)(param_3 + 0x68) ||
                (func_0x00010c071ae0(), (int)lVar3 != 0)))))) &&
             ((lVar3 = *(long *)(param_1 + 0x70), lVar3 == *(long *)(param_3 + 0x70) ||
              (func_0x00010c071ae0(), (int)lVar3 != 0)))))))) &&
          ((lVar3 = *(long *)(param_1 + 0x78), lVar3 == *(long *)(param_3 + 0x78) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
         (((lVar3 = *(long *)(param_1 + 0x80), lVar3 == *(long *)(param_3 + 0x80) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
          ((lVar3 = *(long *)(param_1 + 0x88), lVar3 == *(long *)(param_3 + 0x88) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)))))) {
        lVar3 = *(long *)(param_1 + 0x90);
        if (lVar3 != *(long *)(param_3 + 0x90)) {
          func_0x00010c071ae0();
          goto LAB_10b88f41c;
        }
        goto LAB_10b88f410;
      }
    }
    lVar3 = 0;
  }
LAB_10b88f41c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b88f438; end: 10b88f4d3; -[SCAdWebviewConfig .cxx_destruct] */

void FUN_10b88f438(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b88f4d4; end: 10b88f547; -[SCSafeBrowsingServices initWithSafeBrowsingAPI:] */

undefined1 * FUN_10b88f4d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270b960;
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



/* Entry: 10b88f548; end: 10b88f54f; -[SCSafeBrowsingServices composerSafeBrowsingAPI] */

undefined8 FUN_10b88f548(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b88f550; end: 10b88f57f; -[SCSafeBrowsingServices .cxx_destruct] */

void FUN_10b88f550(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b88f580; end: 10b88f58f; -[SCCSafeBrowsingURLType__Enum init] */

void FUN_10b88f580(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithEnumCases_count__1125e1b50,0x1133faa40,5);
  return;
}



/* Entry: 10b88f590; end: 10b88f687; +[SCAdsWebviewDynamicScriptConfig descriptor] */

undefined * FUN_10b88f590(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fcc88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cec2e0,
                        &PTR____CFConstantStringClassReference_110f9d698,
                        &PTR_s_snapchat_ads_abconfig_1133faa68,&PTR_DAT_1133faa80,4,0x10,0x1c);
    func_0x00010c2289e0();
    puRam00000001137fcc88 = puVar1;
  }
  return puRam00000001137fcc88;
}



/* Entry: 10b88f688; end: 10b88f693;  */

bool FUN_10b88f688(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b88f694; end: 10b88f6fb; +[SCAdsWebViewUrl3pParameterUpdate descriptor] */

void FUN_10b88f694(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fcc98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cec380,
                        &PTR____CFConstantStringClassReference_110f9d6d8,&PTR_DAT_1133fab00,
                        &PTR_s_domain_1133fab18,2,0x18,0x1c);
    puRam00000001137fcc98 = puVar1;
  }
  return;
}



/* Entry: 10b88f6fc; end: 10b88f777; +[SCAdsWebViewUrl3pParameterUpdate_UrlParameterMetadata descriptor] */

undefined * FUN_10b88f6fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fcca0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cec3d0,
                        &PTR____CFConstantStringClassReference_110f9d6f8,&PTR_DAT_1133fab00,
                        &PTR_DAT_1133fab58,3,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137fcca0 = puVar1;
  }
  return puRam00000001137fcca0;
}



/* Entry: 10b88f778; end: 10b88f7df; +[SCAdsWebViewUrlParameter descriptor] */

void FUN_10b88f778(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fcca8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cec470,
                        &PTR____CFConstantStringClassReference_110f9d718,&PTR_DAT_1133fabb8,
                        &PTR_DAT_1133fabd0,2,0x18,0x1c);
    puRam00000001137fcca8 = puVar1;
  }
  return;
}



/* Entry: 10b88f7e0; end: 10b88f85b; +[SCAdsWebViewUrlParameter_WebViewUrlParameterCheckPattern descriptor] */

undefined * FUN_10b88f7e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fccb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cec4c0,
                        &PTR____CFConstantStringClassReference_110f9d738,&PTR_DAT_1133fabb8,
                        &PTR_s_keysArray_1133fac10,3,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001137fccb0 = puVar1;
  }
  return puRam00000001137fccb0;
}



/* Entry: 10b88f85c; end: 10b88fa6b;  */

long * FUN_10b88f85c(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                    long param_7,long param_8,long param_9,long param_10,long param_11,long param_12
                    ,long param_13,long param_14,long param_15,long param_16,long param_17)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_11);
  _objc_retain(param_17);
  plVar1 = (long *)0x0;
  if (param_2 != 0) {
    puStack_78 = PTR_PTR_11270b968;
    plVar1 = &lStack_80;
    lStack_80 = param_2;
    _objc_msgSendSuper2(plVar1,PTR_s_init_1125d9248);
    if (plVar1 != (long *)0x0) {
      lVar2 = param_3;
      func_0x00010bf51e00();
      lVar3 = plVar1[1];
      plVar1[1] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_4;
      func_0x00010bf51e00();
      lVar3 = plVar1[2];
      plVar1[2] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_5;
      func_0x00010bf51e00();
      lVar3 = plVar1[3];
      plVar1[3] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_6;
      func_0x00010bf51e00();
      lVar3 = plVar1[4];
      plVar1[4] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_7;
      func_0x00010bf51e00();
      lVar3 = plVar1[5];
      plVar1[5] = lVar2;
      _objc_release(lVar3);
      plVar1[6] = param_8;
      plVar1[7] = param_9;
      plVar1[8] = param_10;
      lVar2 = param_11;
      func_0x00010bf51e00();
      lVar3 = plVar1[9];
      plVar1[9] = lVar2;
      _objc_release(lVar3);
      plVar1[10] = param_12;
      plVar1[0xb] = param_13;
      plVar1[0xc] = param_14;
      plVar1[0xd] = param_15;
      plVar1[0xe] = param_16;
      plVar1[0xf] = param_1;
      lVar2 = param_17;
      func_0x00010bf51e00();
      lVar3 = plVar1[0x10];
      plVar1[0x10] = lVar2;
      _objc_release(lVar3);
    }
  }
  _objc_release(param_17);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return plVar1;
}



/* Entry: 10b88fa6c; end: 10b88fa8f; -[SQLAdTrackCommon copyWithZone:] */

undefined8 FUN_10b88fa6c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b88fa90; end: 10b88fb8b; -[SQLAdTrackCommon hash] */

undefined8 * FUN_10b88fa90(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  double dVar8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_a8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_a0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_98 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uStack_80 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x30));
  uStack_78 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x38));
  lVar5 = *(long *)(param_1 + 0x40);
  uStack_68 = *(undefined8 *)(param_1 + 0x48);
  lStack_70 = -lVar5;
  if (-1 < lVar5) {
    lStack_70 = lVar5;
  }
  uStack_88 = uVar1;
  func_0x00010bfde980();
  uStack_48 = *(undefined8 *)(param_1 + 0x68);
  uStack_50 = *(undefined8 *)(param_1 + 0x60);
  uStack_60 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x50));
  uStack_58 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x58));
  uStack_40 = *(undefined8 *)(param_1 + 0x70);
  uVar6 = ~*(ulong *)(param_1 + 0x78) + *(ulong *)(param_1 + 0x78) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_38 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010bfde980();
  puVar3 = &uStack_a8;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar3,0x10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b88fd3c:
    puVar7 = (undefined8 *)0x1;
  }
  else {
    puVar7 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b88fd48;
    puVar7 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((((ulong)puVar4 & 1) != 0) &&
         ((((puVar3[6] == param_3[6] && (puVar3[7] == param_3[7])) && (puVar3[8] == param_3[8])) &&
          ((puVar3[10] == param_3[10] && (puVar3[0xb] == param_3[0xb])))))) &&
        (puVar3[0xc] == param_3[0xc])) &&
       ((puVar3[0xd] == param_3[0xd] && (puVar3[0xe] == param_3[0xe])))) {
      dVar8 = ABS((double)puVar3[0xf] - (double)param_3[0xf]);
      if (((((dVar8 < 2.2250738585072014e-308) ||
            (dVar8 < ABS((double)puVar3[0xf] + (double)param_3[0xf]) * 2.220446049250313e-16)) &&
           (((lVar5 = puVar3[1], lVar5 == param_3[1] || (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
            ((lVar5 = puVar3[2], lVar5 == param_3[2] || (func_0x00010c071ae0(), (int)lVar5 != 0)))))
           ) && (((lVar5 = puVar3[3], lVar5 == param_3[3] ||
                  (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
                 ((lVar5 = puVar3[4], lVar5 == param_3[4] ||
                  (func_0x00010c071ae0(), (int)lVar5 != 0)))))) &&
         (((lVar5 = puVar3[5], lVar5 == param_3[5] || (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
          ((lVar5 = puVar3[9], lVar5 == param_3[9] || (func_0x00010c071ae0(), (int)lVar5 != 0))))))
      {
        puVar7 = (undefined8 *)puVar3[0x10];
        if (puVar7 != (undefined8 *)param_3[0x10]) {
          func_0x00010c071ae0();
          goto LAB_10b88fd48;
        }
        goto LAB_10b88fd3c;
      }
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_10b88fd48:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 10b88fb8c; end: 10b88fd63; -[SQLAdTrackCommon isEqual:] */

long FUN_10b88fb8c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b88fd3c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b88fd48;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30) &&
            (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))) &&
           (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))) &&
          ((*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50) &&
           (*(long *)(param_1 + 0x58) == *(long *)(param_3 + 0x58))))))) &&
        (*(long *)(param_1 + 0x60) == *(long *)(param_3 + 0x60))) &&
       ((*(long *)(param_1 + 0x68) == *(long *)(param_3 + 0x68) &&
        (*(long *)(param_1 + 0x70) == *(long *)(param_3 + 0x70))))) {
      dVar4 = ABS(*(double *)(param_1 + 0x78) - *(double *)(param_3 + 0x78));
      if (((((dVar4 < 2.2250738585072014e-308) ||
            (dVar4 < ABS(*(double *)(param_1 + 0x78) + *(double *)(param_3 + 0x78)) *
                     2.220446049250313e-16)) &&
           (((lVar3 = *(long *)(param_1 + 8), lVar3 == *(long *)(param_3 + 8) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
            ((lVar3 = *(long *)(param_1 + 0x10), lVar3 == *(long *)(param_3 + 0x10) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)))))) &&
          (((lVar3 = *(long *)(param_1 + 0x18), lVar3 == *(long *)(param_3 + 0x18) ||
            (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
           ((lVar3 = *(long *)(param_1 + 0x20), lVar3 == *(long *)(param_3 + 0x20) ||
            (func_0x00010c071ae0(), (int)lVar3 != 0)))))) &&
         (((lVar3 = *(long *)(param_1 + 0x28), lVar3 == *(long *)(param_3 + 0x28) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
          ((lVar3 = *(long *)(param_1 + 0x48), lVar3 == *(long *)(param_3 + 0x48) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)))))) {
        lVar3 = *(long *)(param_1 + 0x80);
        if (lVar3 != *(long *)(param_3 + 0x80)) {
          func_0x00010c071ae0();
          goto LAB_10b88fd48;
        }
        goto LAB_10b88fd3c;
      }
    }
    lVar3 = 0;
  }
LAB_10b88fd48:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b88fd64; end: 10b88fe2b;  */

undefined8 FUN_10b88fd64(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  return uVar1;
}



/* Entry: 10b88fe2c; end: 10b88fe97; -[SQLAdTrackCommon .cxx_destruct] */

void FUN_10b88fe2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b88fe98; end: 10b88ffc7;  */

long * FUN_10b88fe98(long param_1,long param_2,long param_3,long param_4,long param_5,
                    undefined1 param_6,undefined1 param_7,undefined1 param_8,undefined1 param_9,
                    undefined4 param_10,long param_11,long param_12,long param_13)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_12);
  _objc_retain(param_13);
  plVar1 = (long *)0x0;
  if (param_1 != 0) {
    puStack_68 = PTR_PTR_11270b970;
    plVar1 = &lStack_70;
    lStack_70 = param_1;
    _objc_msgSendSuper2(plVar1,PTR_s_init_1125d9248);
    if (plVar1 != (long *)0x0) {
      lVar2 = param_2;
      func_0x00010bf51e00();
      lVar3 = plVar1[2];
      plVar1[2] = lVar2;
      _objc_release(lVar3);
      plVar1[3] = param_3;
      plVar1[4] = param_4;
      *(undefined1 *)(plVar1 + 1) = param_6;
      *(undefined1 *)((long)plVar1 + 9) = param_7;
      *(undefined1 *)((long)plVar1 + 10) = param_8;
      *(undefined1 *)((long)plVar1 + 0xb) = param_9;
      plVar1[5] = param_5;
      plVar1[6] = param_11;
      lVar2 = param_12;
      func_0x00010bf51e00();
      lVar3 = plVar1[7];
      plVar1[7] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_13;
      func_0x00010bf51e00();
      lVar3 = plVar1[8];
      plVar1[8] = lVar2;
      _objc_release(lVar3);
    }
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_2);
  return plVar1;
}



/* Entry: 10b88ffc8; end: 10b88ffeb; -[SQLAdLifecycleEvent copyWithZone:] */

undefined8 FUN_10b88ffc8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b88ffec; end: 10b8900bb; -[SQLAdLifecycleEvent hash] */

undefined8 * FUN_10b88ffec(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  ushort uVar9;
  undefined4 uVar10;
  ulong uVar11;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  ulong uVar12;
  
  puVar5 = &uStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lVar7 = *(long *)(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x30);
  lStack_68 = -lVar7;
  if (-1 < lVar7) {
    lStack_68 = lVar7;
  }
  uStack_78 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_70 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uVar10 = *(undefined4 *)(param_1 + 8);
  uVar11 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar10 >> 0x18),
                                           (uint6)(byte)((uint)uVar10 >> 0x10) << 0x20) >> 0x10),
                           (ushort)(byte)uVar10) & 0xffffffffffffff01;
  uVar2 = (uint)CONCAT12((char)((uint)uVar10 >> 8),(short)uVar11);
  uVar12 = CONCAT44((int)(uVar11 >> 0x20),uVar2) & 0xffffffffff01ffff;
  uVar11 = CONCAT26((short)(uVar12 >> 0x30),CONCAT24((short)(uVar11 >> 0x20),(int)uVar12)) &
           0xff01ff01ffffffff;
  uVar9 = (ushort)(uVar11 >> 0x30);
  uStack_60 = (ulong)uVar2 & 0xff;
  uStack_58 = uVar11 >> 0x10 & 0xff;
  uStack_50 = (ulong)CONCAT24(uVar9,(uint)(ushort)(uVar11 >> 0x20)) & 0xffffffff;
  uStack_48 = (ulong)uVar9;
  lStack_40 = -lVar1;
  if (-1 < lVar1) {
    lStack_40 = lVar1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uStack_80 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uStack_38 = uVar4;
  func_0x00010bfde980();
  uStack_30 = uVar3;
  func_0x000107c3191c(&uStack_80,0xb);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == (undefined8 *)param_3) {
LAB_10b8901d4:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b8901e0;
    puVar8 = (undefined1 *)puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((((ulong)puVar6 & 1) != 0) &&
         ((((*(long *)((long)puVar5 + 0x18) == *(long *)(param_3 + 0x18) &&
            (*(long *)((long)puVar5 + 0x20) == *(long *)(param_3 + 0x20))) &&
           (*(long *)((long)puVar5 + 0x28) == *(long *)(param_3 + 0x28))) &&
          ((*(char *)((long)puVar5 + 8) == param_3[8] && (*(char *)((long)puVar5 + 9) == param_3[9])
           ))))) && (*(char *)((long)puVar5 + 10) == param_3[10])) &&
       ((*(char *)((long)puVar5 + 0xb) == param_3[0xb] &&
        (*(long *)((long)puVar5 + 0x30) == *(long *)(param_3 + 0x30))))) {
      lVar7 = *(long *)((long)puVar5 + 0x10);
      if ((lVar7 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar7 != 0)) {
        lVar7 = *(long *)((long)puVar5 + 0x38);
        if ((lVar7 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar7 != 0)) {
          puVar8 = *(undefined1 **)((long)puVar5 + 0x40);
          if (puVar8 != *(undefined1 **)(param_3 + 0x40)) {
            func_0x00010c071ae0();
            goto LAB_10b8901e0;
          }
          goto LAB_10b8901d4;
        }
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_10b8901e0:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 10b8900bc; end: 10b8901fb; -[SQLAdLifecycleEvent isEqual:] */

long FUN_10b8900bc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b8901d4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b8901e0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
            (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
           (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
          ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
           (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))))) &&
        (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
       ((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
        (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x38);
        if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x40);
          if (lVar3 != *(long *)(param_3 + 0x40)) {
            func_0x00010c071ae0();
            goto LAB_10b8901e0;
          }
          goto LAB_10b8901d4;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b8901e0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b8901fc; end: 10b8902a3;  */

undefined8 FUN_10b8901fc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
  }
  return uVar1;
}



/* Entry: 10b8902a4; end: 10b8902df; -[SQLAdLifecycleEvent .cxx_destruct] */

void FUN_10b8902a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b8902e0; end: 10b8903af;  */

undefined1 *
FUN_10b8902e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_2);
  _objc_retain(param_4);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_48 = PTR_PTR_11270b978;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x10);
      *(undefined8 *)((long)plVar1 + 0x10) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x18) = param_3;
      uVar2 = param_4;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = uVar2;
      _objc_release(uVar3);
      *(undefined1 *)((long)plVar1 + 8) = param_5;
      *(undefined1 *)((long)plVar1 + 9) = param_6;
    }
  }
  _objc_release(param_4);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 10b8903b0; end: 10b8903d3; -[SQLAdDeeplinkEvent copyWithZone:] */

undefined8 FUN_10b8903b0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b8903d4; end: 10b89045f; -[SQLAdDeeplinkEvent hash] */

undefined8 * FUN_10b8903d4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x18);
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  lStack_48 = -lVar4;
  if (-1 < lVar4) {
    lStack_48 = lVar4;
  }
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == (undefined8 *)param_3) {
LAB_10b890510:
    puVar5 = (undefined1 *)0x1;
  }
  else {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b89051c;
    puVar5 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) != 0) &&
       (((*(long *)((long)puVar2 + 0x18) == *(long *)(param_3 + 0x18) &&
         (*(char *)((long)puVar2 + 8) == param_3[8])) && (*(char *)((long)puVar2 + 9) == param_3[9])
        ))) {
      lVar4 = *(long *)((long)puVar2 + 0x10);
      if ((lVar4 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        puVar5 = *(undefined1 **)((long)puVar2 + 0x20);
        if (puVar5 != *(undefined1 **)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10b89051c;
        }
        goto LAB_10b890510;
      }
    }
    puVar5 = (undefined1 *)0x0;
  }
LAB_10b89051c:
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 10b890460; end: 10b890537; -[SQLAdDeeplinkEvent isEqual:] */

long FUN_10b890460(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b890510:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b89051c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
         (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10b89051c;
        }
        goto LAB_10b890510;
      }
    }
    lVar3 = 0;
  }
LAB_10b89051c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b890538; end: 10b89057f;  */

undefined8 FUN_10b890538(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
  }
  return uVar1;
}



/* Entry: 10b890580; end: 10b8905af; -[SQLAdDeeplinkEvent .cxx_destruct] */

void FUN_10b890580(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b8905b0; end: 10b89067f;  */

undefined1 *
FUN_10b8905b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_2);
  _objc_retain(param_4);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_48 = PTR_PTR_11270b980;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x10);
      *(undefined8 *)((long)plVar1 + 0x10) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x18) = param_3;
      uVar2 = param_4;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = uVar2;
      _objc_release(uVar3);
      *(undefined1 *)((long)plVar1 + 8) = param_5;
      *(undefined1 *)((long)plVar1 + 9) = param_6;
    }
  }
  _objc_release(param_4);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 10b890680; end: 10b8906a3; -[SQLAdAppInstallEvent copyWithZone:] */

undefined8 FUN_10b890680(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b8906a4; end: 10b89072f; -[SQLAdAppInstallEvent hash] */

undefined8 * FUN_10b8906a4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x18);
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  lStack_48 = -lVar4;
  if (-1 < lVar4) {
    lStack_48 = lVar4;
  }
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == (undefined8 *)param_3) {
LAB_10b8907e0:
    puVar5 = (undefined1 *)0x1;
  }
  else {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b8907ec;
    puVar5 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) != 0) &&
       (((*(long *)((long)puVar2 + 0x18) == *(long *)(param_3 + 0x18) &&
         (*(char *)((long)puVar2 + 8) == param_3[8])) && (*(char *)((long)puVar2 + 9) == param_3[9])
        ))) {
      lVar4 = *(long *)((long)puVar2 + 0x10);
      if ((lVar4 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        puVar5 = *(undefined1 **)((long)puVar2 + 0x20);
        if (puVar5 != *(undefined1 **)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10b8907ec;
        }
        goto LAB_10b8907e0;
      }
    }
    puVar5 = (undefined1 *)0x0;
  }
LAB_10b8907ec:
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 10b890730; end: 10b890807; -[SQLAdAppInstallEvent isEqual:] */

long FUN_10b890730(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b8907e0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b8907ec;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
         (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10b8907ec;
        }
        goto LAB_10b8907e0;
      }
    }
    lVar3 = 0;
  }
LAB_10b8907ec:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b890808; end: 10b89084f;  */

undefined8 FUN_10b890808(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
  }
  return uVar1;
}



/* Entry: 10b890850; end: 10b89087f; -[SQLAdAppInstallEvent .cxx_destruct] */

void FUN_10b890850(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b890880; end: 10b89090b;  */

undefined1 * FUN_10b890880(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  _objc_retain(param_2);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_38 = PTR_PTR_11270b988;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x10) = param_3;
    }
  }
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 10b89090c; end: 10b89092f; -[SQLAdAdToMessageEvent copyWithZone:] */

undefined8 FUN_10b89090c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b890930; end: 10b8909a3; -[SQLAdAdToMessageEvent hash] */

undefined8 * FUN_10b890930(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x10);
  lStack_30 = -lVar4;
  if (-1 < lVar4) {
    lStack_30 = lVar4;
  }
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar5 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b890a28;
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar5 = (undefined8 *)0x0;
      goto LAB_10b890a28;
    }
    puVar5 = (undefined8 *)puVar2[1];
    if (puVar5 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_10b890a28;
    }
  }
  puVar5 = (undefined8 *)0x1;
LAB_10b890a28:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 10b8909a4; end: 10b890a43; -[SQLAdAdToMessageEvent isEqual:] */

long FUN_10b8909a4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b890a28;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_10b890a28;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b890a28;
    }
  }
  lVar3 = 1;
LAB_10b890a28:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b890a44; end: 10b890a4f; -[SQLAdAdToMessageEvent .cxx_destruct] */

void FUN_10b890a44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b890a50; end: 10b890bc7;  */

long * FUN_10b890a50(long param_1,long param_2,long param_3,undefined1 param_4,long param_5,
                    long param_6,long param_7,long param_8,undefined1 param_9,undefined4 param_10,
                    long param_11,long param_12)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  plVar1 = (long *)0x0;
  if (param_1 != 0) {
    puStack_68 = PTR_PTR_11270b990;
    plVar1 = &lStack_70;
    lStack_70 = param_1;
    _objc_msgSendSuper2(plVar1,PTR_s_init_1125d9248);
    if (plVar1 != (long *)0x0) {
      lVar2 = param_2;
      func_0x00010bf51e00();
      lVar3 = plVar1[2];
      plVar1[2] = lVar2;
      _objc_release(lVar3);
      plVar1[3] = param_3;
      *(undefined1 *)(plVar1 + 1) = param_4;
      lVar2 = param_5;
      func_0x00010bf51e00();
      lVar3 = plVar1[4];
      plVar1[4] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_6;
      func_0x00010bf51e00();
      lVar3 = plVar1[5];
      plVar1[5] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_7;
      func_0x00010bf51e00();
      lVar3 = plVar1[6];
      plVar1[6] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_8;
      func_0x00010bf51e00();
      lVar3 = plVar1[7];
      plVar1[7] = lVar2;
      _objc_release(lVar3);
      *(undefined1 *)((long)plVar1 + 9) = param_9;
      plVar1[8] = param_11;
      plVar1[9] = param_12;
    }
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_2);
  return plVar1;
}



/* Entry: 10b890bc8; end: 10b890beb; -[SQLAdReportEvent copyWithZone:] */

undefined8 FUN_10b890bc8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b890bec; end: 10b890cab; -[SQLAdReportEvent hash] */

undefined8 * FUN_10b890bec(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x18);
  uStack_60 = *(undefined8 *)(param_1 + 0x20);
  lStack_70 = -lVar5;
  if (-1 < lVar5) {
    lStack_70 = lVar5;
  }
  uStack_68 = (ulong)*(byte *)(param_1 + 8);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 9);
  lVar5 = *(long *)(param_1 + 0x40);
  uStack_30 = *(undefined8 *)(param_1 + 0x48);
  lStack_38 = -lVar5;
  if (-1 < lVar5) {
    lStack_38 = lVar5;
  }
  puVar3 = &uStack_78;
  uStack_48 = uVar1;
  func_0x000107c3191c(puVar3,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b890dc4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b890dd0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((((puVar3[3] == param_3[3] && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))) &&
         (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))) &&
        ((puVar3[8] == param_3[8] && (puVar3[9] == param_3[9])))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[4];
        if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[5];
          if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[6];
            if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = (undefined8 *)puVar3[7];
              if (puVar6 != (undefined8 *)param_3[7]) {
                func_0x00010c071ae0();
                goto LAB_10b890dd0;
              }
              goto LAB_10b890dc4;
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b890dd0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b890cac; end: 10b890deb; -[SQLAdReportEvent isEqual:] */

long FUN_10b890cac(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b890dc4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b890dd0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
          (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
         (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
        ((*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40) &&
         (*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48))))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if (lVar3 != *(long *)(param_3 + 0x38)) {
                func_0x00010c071ae0();
                goto LAB_10b890dd0;
              }
              goto LAB_10b890dc4;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b890dd0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b890dec; end: 10b890e6f;  */

undefined8 FUN_10b890dec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
  }
  return uVar1;
}



/* Entry: 10b890e70; end: 10b890ec3; -[SQLAdReportEvent .cxx_destruct] */

void FUN_10b890e70(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b890ec4; end: 10b890f4f;  */

undefined1 * FUN_10b890ec4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  _objc_retain(param_2);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_38 = PTR_PTR_11270b998;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x10) = param_3;
    }
  }
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 10b890f50; end: 10b890f73; -[SQLAdSubscribeEvent copyWithZone:] */

undefined8 FUN_10b890f50(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b890f74; end: 10b890fe7; -[SQLAdSubscribeEvent hash] */

undefined8 * FUN_10b890f74(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x10);
  lStack_30 = -lVar4;
  if (-1 < lVar4) {
    lStack_30 = lVar4;
  }
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar5 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b89106c;
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar5 = (undefined8 *)0x0;
      goto LAB_10b89106c;
    }
    puVar5 = (undefined8 *)puVar2[1];
    if (puVar5 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_10b89106c;
    }
  }
  puVar5 = (undefined8 *)0x1;
LAB_10b89106c:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 10b890fe8; end: 10b891087; -[SQLAdSubscribeEvent isEqual:] */

long FUN_10b890fe8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b89106c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_10b89106c;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b89106c;
    }
  }
  lVar3 = 1;
LAB_10b89106c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b891088; end: 10b891093;  */

undefined8 FUN_10b891088(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
  }
  return uVar1;
}



/* Entry: 10b891094; end: 10b89109f; -[SQLAdSubscribeEvent .cxx_destruct] */

void FUN_10b891094(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b8910a0; end: 10b89117f;  */

undefined1 *
FUN_10b8910a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_80;
  undefined *puStack_78;
  
  plVar1 = &lStack_80;
  _objc_retain(param_10);
  puVar4 = (undefined1 *)0x0;
  if (param_9 != 0) {
    puStack_78 = PTR_PTR_11270b9a0;
    lStack_80 = param_9;
    _objc_msgSendSuper2(&lStack_80,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_10;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x10) = param_11;
      *(undefined8 *)((long)plVar1 + 0x18) = param_12;
      *(undefined8 *)((long)plVar1 + 0x20) = param_1;
      *(undefined8 *)((long)plVar1 + 0x28) = param_2;
      *(undefined8 *)((long)plVar1 + 0x30) = param_3;
      *(undefined8 *)((long)plVar1 + 0x38) = param_4;
      *(undefined8 *)((long)plVar1 + 0x40) = param_5;
      *(undefined8 *)((long)plVar1 + 0x48) = param_6;
      *(undefined8 *)((long)plVar1 + 0x50) = param_7;
      *(undefined8 *)((long)plVar1 + 0x58) = param_8;
    }
  }
  _objc_release(param_10);
  return puVar4;
}



/* Entry: 10b891180; end: 10b8911a3; -[SQLAdStickersEvent copyWithZone:] */

undefined8 FUN_10b891180(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b8911a4; end: 10b89131b; -[SQLAdStickersEvent hash] */

undefined8 * FUN_10b8911a4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  double dVar8;
  double dVar9;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar6 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_68 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_60 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_58 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_50 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uStack_78 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_70 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_48 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar6 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_40 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x50) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_38 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x58) + *(ulong *)(param_1 + 0x58) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_30 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_80 = uVar3;
  func_0x000107c3191c(&uStack_80,0xb);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_10b891558:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b89155c;
    puVar7 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((*(long *)((long)puVar4 + 0x10) == *(long *)(param_3 + 0x10) &&
        (*(long *)((long)puVar4 + 0x18) == *(long *)(param_3 + 0x18))))) {
      dVar9 = ABS(*(double *)((long)puVar4 + 0x20) - *(double *)(param_3 + 0x20));
      dVar8 = ABS(*(double *)((long)puVar4 + 0x20) + *(double *)(param_3 + 0x20)) *
              2.220446049250313e-16;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar9) && (bVar2 = false, !NAN(dVar9) && !NAN(dVar8))) {
        bVar2 = dVar9 < dVar8;
      }
      if (bVar2) {
        dVar9 = ABS(*(double *)((long)puVar4 + 0x28) - *(double *)(param_3 + 0x28));
        dVar8 = ABS(*(double *)((long)puVar4 + 0x28) + *(double *)(param_3 + 0x28)) *
                2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar9) && (bVar2 = false, !NAN(dVar9) && !NAN(dVar8))) {
          bVar2 = dVar9 < dVar8;
        }
        if (bVar2) {
          dVar9 = ABS(*(double *)((long)puVar4 + 0x30) - *(double *)(param_3 + 0x30));
          dVar8 = ABS(*(double *)((long)puVar4 + 0x30) + *(double *)(param_3 + 0x30)) *
                  2.220446049250313e-16;
          bVar2 = true;
          if ((2.2250738585072014e-308 <= dVar9) && (bVar2 = false, !NAN(dVar9) && !NAN(dVar8))) {
            bVar2 = dVar9 < dVar8;
          }
          if (bVar2) {
            dVar9 = ABS(*(double *)((long)puVar4 + 0x38) - *(double *)(param_3 + 0x38));
            dVar8 = ABS(*(double *)((long)puVar4 + 0x38) + *(double *)(param_3 + 0x38)) *
                    2.220446049250313e-16;
            bVar2 = true;
            if ((2.2250738585072014e-308 <= dVar9) && (bVar2 = false, !NAN(dVar9) && !NAN(dVar8))) {
              bVar2 = dVar9 < dVar8;
            }
            if (bVar2) {
              dVar8 = ABS(*(double *)((long)puVar4 + 0x40) - *(double *)(param_3 + 0x40));
              if ((dVar8 < 2.2250738585072014e-308) ||
                 (dVar8 < ABS(*(double *)((long)puVar4 + 0x40) + *(double *)(param_3 + 0x40)) *
                          2.220446049250313e-16)) {
                dVar8 = ABS(*(double *)((long)puVar4 + 0x48) - *(double *)(param_3 + 0x48));
                if ((dVar8 < 2.2250738585072014e-308) ||
                   (dVar8 < ABS(*(double *)((long)puVar4 + 0x48) + *(double *)(param_3 + 0x48)) *
                            2.220446049250313e-16)) {
                  dVar8 = ABS(*(double *)((long)puVar4 + 0x50) - *(double *)(param_3 + 0x50));
                  if ((dVar8 < 2.2250738585072014e-308) ||
                     (dVar8 < ABS(*(double *)((long)puVar4 + 0x50) + *(double *)(param_3 + 0x50)) *
                              2.220446049250313e-16)) {
                    dVar8 = ABS(*(double *)((long)puVar4 + 0x58) - *(double *)(param_3 + 0x58));
                    if ((dVar8 < 2.2250738585072014e-308) ||
                       (dVar8 < ABS(*(double *)((long)puVar4 + 0x58) + *(double *)(param_3 + 0x58))
                                * 2.220446049250313e-16)) {
                      puVar7 = *(undefined1 **)((long)puVar4 + 8);
                      if (puVar7 != *(undefined1 **)(param_3 + 8)) {
                        func_0x00010c071ae0();
                        goto LAB_10b89155c;
                      }
                      goto LAB_10b891558;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_10b89155c:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 10b89131c; end: 10b891577; -[SQLAdStickersEvent isEqual:] */

long FUN_10b89131c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b891558:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b89155c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
        (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
      dVar5 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
        dVar5 = ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if (bVar1) {
          dVar6 = ABS(*(double *)(param_1 + 0x30) - *(double *)(param_3 + 0x30));
          dVar5 = ABS(*(double *)(param_1 + 0x30) + *(double *)(param_3 + 0x30)) *
                  2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
            bVar1 = dVar6 < dVar5;
          }
          if (bVar1) {
            dVar6 = ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38));
            dVar5 = ABS(*(double *)(param_1 + 0x38) + *(double *)(param_3 + 0x38)) *
                    2.220446049250313e-16;
            bVar1 = true;
            if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
              bVar1 = dVar6 < dVar5;
            }
            if (bVar1) {
              dVar5 = ABS(*(double *)(param_1 + 0x40) - *(double *)(param_3 + 0x40));
              if ((dVar5 < 2.2250738585072014e-308) ||
                 (dVar5 < ABS(*(double *)(param_1 + 0x40) + *(double *)(param_3 + 0x40)) *
                          2.220446049250313e-16)) {
                dVar5 = ABS(*(double *)(param_1 + 0x48) - *(double *)(param_3 + 0x48));
                if ((dVar5 < 2.2250738585072014e-308) ||
                   (dVar5 < ABS(*(double *)(param_1 + 0x48) + *(double *)(param_3 + 0x48)) *
                            2.220446049250313e-16)) {
                  dVar5 = ABS(*(double *)(param_1 + 0x50) - *(double *)(param_3 + 0x50));
                  if ((dVar5 < 2.2250738585072014e-308) ||
                     (dVar5 < ABS(*(double *)(param_1 + 0x50) + *(double *)(param_3 + 0x50)) *
                              2.220446049250313e-16)) {
                    dVar5 = ABS(*(double *)(param_1 + 0x58) - *(double *)(param_3 + 0x58));
                    if ((dVar5 < 2.2250738585072014e-308) ||
                       (dVar5 < ABS(*(double *)(param_1 + 0x58) + *(double *)(param_3 + 0x58)) *
                                2.220446049250313e-16)) {
                      lVar4 = *(long *)(param_1 + 8);
                      if (lVar4 != *(long *)(param_3 + 8)) {
                        func_0x00010c071ae0();
                        goto LAB_10b89155c;
                      }
                      goto LAB_10b891558;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_10b89155c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b891578; end: 10b89162f;  */

undefined8 FUN_10b891578(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
  }
  return uVar1;
}



/* Entry: 10b891630; end: 10b89163b; -[SQLAdStickersEvent .cxx_destruct] */

void FUN_10b891630(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b89163c; end: 10b8916c7;  */

undefined1 * FUN_10b89163c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  _objc_retain(param_2);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_38 = PTR_PTR_11270b9a8;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x10) = param_3;
    }
  }
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 10b8916c8; end: 10b8916eb; -[SQLAdReminderEvent copyWithZone:] */

undefined8 FUN_10b8916c8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b8916ec; end: 10b89175f; -[SQLAdReminderEvent hash] */

undefined8 * FUN_10b8916ec(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x10);
  lStack_30 = -lVar4;
  if (-1 < lVar4) {
    lStack_30 = lVar4;
  }
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar5 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b8917e4;
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar5 = (undefined8 *)0x0;
      goto LAB_10b8917e4;
    }
    puVar5 = (undefined8 *)puVar2[1];
    if (puVar5 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_10b8917e4;
    }
  }
  puVar5 = (undefined8 *)0x1;
LAB_10b8917e4:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 10b891760; end: 10b8917ff; -[SQLAdReminderEvent isEqual:] */

long FUN_10b891760(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b8917e4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_10b8917e4;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b8917e4;
    }
  }
  lVar3 = 1;
LAB_10b8917e4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b891800; end: 10b89180b;  */

undefined8 FUN_10b891800(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
  }
  return uVar1;
}



/* Entry: 10b89180c; end: 10b891817; -[SQLAdReminderEvent .cxx_destruct] */

void FUN_10b89180c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b891818; end: 10b891a0f;  */

undefined1 *
FUN_10b891818(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_70;
  undefined *puStack_68;
  
  plVar1 = &lStack_70;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_68 = PTR_PTR_11270b9b0;
    lStack_70 = param_1;
    _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_3;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x10);
      *(undefined8 *)((long)plVar1 + 0x10) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_4;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_5;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_6;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_7;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x30);
      *(undefined8 *)((long)plVar1 + 0x30) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_8;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x38);
      *(undefined8 *)((long)plVar1 + 0x38) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_9;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x40);
      *(undefined8 *)((long)plVar1 + 0x40) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_10;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x48);
      *(undefined8 *)((long)plVar1 + 0x48) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 10b891a10; end: 10b891a33; -[SQLAdCaptionCtaImpressionEvent copyWithZone:] */

undefined8 FUN_10b891a10(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b891a34; end: 10b891afb; -[SQLAdCaptionCtaImpressionEvent hash] */

undefined8 * FUN_10b891a34(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b891c24:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b891c30;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x20);
            if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x28);
              if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x30);
                if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  lVar5 = *(long *)((long)puVar3 + 0x38);
                  if ((lVar5 == *(long *)(param_3 + 0x38)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = *(long *)((long)puVar3 + 0x40);
                    if ((lVar5 == *(long *)(param_3 + 0x40)) ||
                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      puVar6 = *(undefined1 **)((long)puVar3 + 0x48);
                      if (puVar6 != *(undefined1 **)(param_3 + 0x48)) {
                        func_0x00010c071ae0();
                        goto LAB_10b891c30;
                      }
                      goto LAB_10b891c24;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b891c30:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b891afc; end: 10b891c4b; -[SQLAdCaptionCtaImpressionEvent isEqual:] */

long FUN_10b891afc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b891c24:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b891c30;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x38);
                  if ((lVar3 == *(long *)(param_3 + 0x38)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x40);
                    if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x48);
                      if (lVar3 != *(long *)(param_3 + 0x48)) {
                        func_0x00010c071ae0();
                        goto LAB_10b891c30;
                      }
                      goto LAB_10b891c24;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b891c30:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b891c4c; end: 10b891cab;  */

undefined8 FUN_10b891c4c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
  }
  return uVar1;
}



/* Entry: 10b891cac; end: 10b891d2f; -[SQLAdCaptionCtaImpressionEvent .cxx_destruct] */

void FUN_10b891cac(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b891d30; end: 10b891e67;  */

undefined1 *
FUN_10b891d30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_90;
  undefined *puStack_88;
  
  plVar1 = &lStack_90;
  _objc_retain(param_7);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puVar4 = (undefined1 *)0x0;
  if (param_6 != 0) {
    puStack_88 = PTR_PTR_11270b9b8;
    lStack_90 = param_6;
    _objc_msgSendSuper2(&lStack_90,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_7;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x10) = param_8;
      *(undefined8 *)((long)plVar1 + 0x18) = param_9;
      *(undefined8 *)((long)plVar1 + 0x20) = param_10;
      *(undefined8 *)((long)plVar1 + 0x28) = param_1;
      *(undefined8 *)((long)plVar1 + 0x30) = param_2;
      *(undefined8 *)((long)plVar1 + 0x38) = param_3;
      *(undefined8 *)((long)plVar1 + 0x40) = param_4;
      *(undefined8 *)((long)plVar1 + 0x48) = param_5;
      uVar2 = param_11;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x50);
      *(undefined8 *)((long)plVar1 + 0x50) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_12;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x58);
      *(undefined8 *)((long)plVar1 + 0x58) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_7);
  return puVar4;
}



/* Entry: 10b891e68; end: 10b891e8b; -[SQLWebviewUserEvent copyWithZone:] */

undefined8 FUN_10b891e68(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b891e8c; end: 10b891fc7; -[SQLWebviewUserEvent hash] */

undefined8 * FUN_10b891e8c(long param_1,undefined8 param_2,undefined1 *param_3)

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
  double dVar10;
  double dVar11;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar5 = &uStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar7 = *(long *)(param_1 + 0x20);
  uVar8 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  lStack_68 = -lVar7;
  if (-1 < lVar7) {
    lStack_68 = lVar7;
  }
  uStack_60 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_58 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_50 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uStack_78 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_70 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_48 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar8 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_40 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  uStack_80 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  uStack_38 = uVar4;
  func_0x00010bfde980();
  uStack_30 = uVar3;
  func_0x000107c3191c(&uStack_80,0xb);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == (undefined8 *)param_3) {
LAB_10b892198:
    puVar9 = (undefined1 *)0x1;
  }
  else {
    puVar9 = (undefined1 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b8921a4;
    puVar9 = (undefined1 *)puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if ((((ulong)puVar6 & 1) != 0) &&
       (((*(long *)((long)puVar5 + 0x10) == *(long *)(param_3 + 0x10) &&
         (*(long *)((long)puVar5 + 0x18) == *(long *)(param_3 + 0x18))) &&
        (*(long *)((long)puVar5 + 0x20) == *(long *)(param_3 + 0x20))))) {
      dVar11 = ABS(*(double *)((long)puVar5 + 0x28) - *(double *)(param_3 + 0x28));
      dVar10 = ABS(*(double *)((long)puVar5 + 0x28) + *(double *)(param_3 + 0x28)) *
               2.220446049250313e-16;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10))) {
        bVar2 = dVar11 < dVar10;
      }
      if (bVar2) {
        dVar11 = ABS(*(double *)((long)puVar5 + 0x30) - *(double *)(param_3 + 0x30));
        dVar10 = ABS(*(double *)((long)puVar5 + 0x30) + *(double *)(param_3 + 0x30)) *
                 2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10))) {
          bVar2 = dVar11 < dVar10;
        }
        if (bVar2) {
          dVar11 = ABS(*(double *)((long)puVar5 + 0x38) - *(double *)(param_3 + 0x38));
          dVar10 = ABS(*(double *)((long)puVar5 + 0x38) + *(double *)(param_3 + 0x38)) *
                   2.220446049250313e-16;
          bVar2 = true;
          if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10)))
          {
            bVar2 = dVar11 < dVar10;
          }
          if (bVar2) {
            dVar10 = ABS(*(double *)((long)puVar5 + 0x40) - *(double *)(param_3 + 0x40));
            if ((dVar10 < 2.2250738585072014e-308) ||
               (dVar10 < ABS(*(double *)((long)puVar5 + 0x40) + *(double *)(param_3 + 0x40)) *
                         2.220446049250313e-16)) {
              dVar10 = ABS(*(double *)((long)puVar5 + 0x48) - *(double *)(param_3 + 0x48));
              if ((((dVar10 < 2.2250738585072014e-308) ||
                   (dVar10 < ABS(*(double *)((long)puVar5 + 0x48) + *(double *)(param_3 + 0x48)) *
                             2.220446049250313e-16)) &&
                  ((lVar7 = *(long *)((long)puVar5 + 8), lVar7 == *(long *)(param_3 + 8) ||
                   (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                 ((lVar7 = *(long *)((long)puVar5 + 0x50), lVar7 == *(long *)(param_3 + 0x50) ||
                  (func_0x00010c071ae0(), (int)lVar7 != 0)))) {
                puVar9 = *(undefined1 **)((long)puVar5 + 0x58);
                if (puVar9 != *(undefined1 **)(param_3 + 0x58)) {
                  func_0x00010c071ae0();
                  goto LAB_10b8921a4;
                }
                goto LAB_10b892198;
              }
            }
          }
        }
      }
    }
    puVar9 = (undefined1 *)0x0;
  }
LAB_10b8921a4:
  _objc_release(param_3);
  return (undefined8 *)puVar9;
}



/* Entry: 10b891fc8; end: 10b8921bf; -[SQLWebviewUserEvent isEqual:] */

long FUN_10b891fc8(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b892198:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b8921a4;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       (((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
         (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
        (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
      dVar5 = ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x30) - *(double *)(param_3 + 0x30));
        dVar5 = ABS(*(double *)(param_1 + 0x30) + *(double *)(param_3 + 0x30)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if (bVar1) {
          dVar6 = ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38));
          dVar5 = ABS(*(double *)(param_1 + 0x38) + *(double *)(param_3 + 0x38)) *
                  2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
            bVar1 = dVar6 < dVar5;
          }
          if (bVar1) {
            dVar5 = ABS(*(double *)(param_1 + 0x40) - *(double *)(param_3 + 0x40));
            if ((dVar5 < 2.2250738585072014e-308) ||
               (dVar5 < ABS(*(double *)(param_1 + 0x40) + *(double *)(param_3 + 0x40)) *
                        2.220446049250313e-16)) {
              dVar5 = ABS(*(double *)(param_1 + 0x48) - *(double *)(param_3 + 0x48));
              if ((((dVar5 < 2.2250738585072014e-308) ||
                   (dVar5 < ABS(*(double *)(param_1 + 0x48) + *(double *)(param_3 + 0x48)) *
                            2.220446049250313e-16)) &&
                  ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
                   (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
                 ((lVar4 = *(long *)(param_1 + 0x50), lVar4 == *(long *)(param_3 + 0x50) ||
                  (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
                lVar4 = *(long *)(param_1 + 0x58);
                if (lVar4 != *(long *)(param_3 + 0x58)) {
                  func_0x00010c071ae0();
                  goto LAB_10b8921a4;
                }
                goto LAB_10b892198;
              }
            }
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_10b8921a4:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b8921c0; end: 10b8921e3;  */

undefined8 FUN_10b8921c0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
  }
  return uVar1;
}



/* Entry: 10b8921e4; end: 10b89221f; -[SQLWebviewUserEvent .cxx_destruct] */

void FUN_10b8921e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b892220; end: 10b89236b;  */

undefined1 *
FUN_10b892220(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_60;
  undefined *puStack_58;
  
  plVar1 = &lStack_60;
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_58 = PTR_PTR_11270b9c0;
    lStack_60 = param_1;
    _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x10) = param_3;
      uVar2 = param_4;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_5;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_6;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_7;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x30);
      *(undefined8 *)((long)plVar1 + 0x30) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 10b89236c; end: 10b89238f; -[SQLWebviewAsmEvent copyWithZone:] */

undefined8 FUN_10b89236c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b892390; end: 10b892433; -[SQLWebviewAsmEvent hash] */

undefined8 * FUN_10b892390(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x10);
  uStack_48 = *(undefined8 *)(param_1 + 0x18);
  lStack_50 = -lVar5;
  if (-1 < lVar5) {
    lStack_50 = lVar5;
  }
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b89250c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b892518;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[2] == param_3[2])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = (undefined8 *)puVar3[6];
              if (puVar6 != (undefined8 *)param_3[6]) {
                func_0x00010c071ae0();
                goto LAB_10b892518;
              }
              goto LAB_10b89250c;
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b892518:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b892434; end: 10b892533; -[SQLWebviewAsmEvent isEqual:] */

long FUN_10b892434(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b89250c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b892518;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_10b892518;
              }
              goto LAB_10b89250c;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b892518:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b892534; end: 10b892587; -[SQLWebviewAsmEvent .cxx_destruct] */

void FUN_10b892534(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b892588; end: 10b892863;  */

long * FUN_10b892588(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                    long param_7,long param_8,long param_9,long param_10,long param_11,long param_12
                    ,long param_13,long param_14,long param_15)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain();
  if (param_1 == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    puStack_68 = PTR_PTR_11270b9c8;
    plVar3 = &lStack_70;
    lStack_70 = param_1;
    _objc_msgSendSuper2(plVar3,PTR_s_init_1125d9248);
    if (plVar3 != (long *)0x0) {
      lVar1 = param_2;
      func_0x00010bf51e00();
      lVar2 = plVar3[1];
      plVar3[1] = lVar1;
      _objc_release(lVar2);
      plVar3[2] = param_3;
      lVar1 = param_4;
      func_0x00010bf51e00();
      lVar2 = plVar3[3];
      plVar3[3] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_5;
      func_0x00010bf51e00();
      lVar2 = plVar3[4];
      plVar3[4] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_6;
      func_0x00010bf51e00();
      lVar2 = plVar3[5];
      plVar3[5] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_7;
      func_0x00010bf51e00();
      lVar2 = plVar3[6];
      plVar3[6] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_8;
      func_0x00010bf51e00();
      lVar2 = plVar3[7];
      plVar3[7] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_9;
      func_0x00010bf51e00();
      lVar2 = plVar3[8];
      plVar3[8] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_10;
      func_0x00010bf51e00();
      lVar2 = plVar3[9];
      plVar3[9] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_11;
      func_0x00010bf51e00();
      lVar2 = plVar3[10];
      plVar3[10] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_12;
      func_0x00010bf51e00();
      lVar2 = plVar3[0xb];
      plVar3[0xb] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_13;
      func_0x00010bf51e00();
      lVar2 = plVar3[0xc];
      plVar3[0xc] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_14;
      func_0x00010bf51e00();
      lVar2 = plVar3[0xd];
      plVar3[0xd] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_15;
      func_0x00010bf51e00();
      lVar2 = plVar3[0xe];
      plVar3[0xe] = lVar1;
      _objc_release(lVar2);
    }
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  return plVar3;
}



/* Entry: 10b892864; end: 10b892887; -[SQLWebviewLoadingEvent copyWithZone:] */

undefined8 FUN_10b892864(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b892888; end: 10b89298b; -[SQLWebviewLoadingEvent hash] */

undefined8 * FUN_10b892888(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_98;
  long lStack_90;
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
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x10);
  uStack_88 = *(undefined8 *)(param_1 + 0x18);
  lStack_90 = -lVar5;
  if (-1 < lVar5) {
    lStack_90 = lVar5;
  }
  uStack_98 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_98;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar3,0xe);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b892b24:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b892b30;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[2] == param_3[2])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[6];
              if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = puVar3[7];
                if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  lVar5 = puVar3[8];
                  if ((lVar5 == param_3[8]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = puVar3[9];
                    if ((lVar5 == param_3[9]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = puVar3[10];
                      if ((lVar5 == param_3[10]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        lVar5 = puVar3[0xb];
                        if ((lVar5 == param_3[0xb]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                          lVar5 = puVar3[0xc];
                          if ((lVar5 == param_3[0xc]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                            lVar5 = puVar3[0xd];
                            if ((lVar5 == param_3[0xd]) || (func_0x00010c071ae0(), (int)lVar5 != 0))
                            {
                              puVar6 = (undefined8 *)puVar3[0xe];
                              if (puVar6 != (undefined8 *)param_3[0xe]) {
                                func_0x00010c071ae0();
                                goto LAB_10b892b30;
                              }
                              goto LAB_10b892b24;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b892b30:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b89298c; end: 10b892b4b; -[SQLWebviewLoadingEvent isEqual:] */

long FUN_10b89298c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b892b24:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b892b30;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x48);
                    if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x50);
                      if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x58);
                        if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x60);
                          if ((lVar3 == *(long *)(param_3 + 0x60)) ||
                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                            lVar3 = *(long *)(param_1 + 0x68);
                            if ((lVar3 == *(long *)(param_3 + 0x68)) ||
                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                              lVar3 = *(long *)(param_1 + 0x70);
                              if (lVar3 != *(long *)(param_3 + 0x70)) {
                                func_0x00010c071ae0();
                                goto LAB_10b892b30;
                              }
                              goto LAB_10b892b24;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b892b30:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b892b4c; end: 10b892bdb;  */

undefined8 FUN_10b892b4c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
  }
  return uVar1;
}



/* Entry: 10b892bdc; end: 10b892c8f; -[SQLWebviewLoadingEvent .cxx_destruct] */

void FUN_10b892bdc(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b892c90; end: 10b892e3f;  */

undefined1 *
FUN_10b892c90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_70;
  undefined *puStack_68;
  
  plVar1 = &lStack_70;
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_68 = PTR_PTR_11270b9d0;
    lStack_70 = param_1;
    _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x10) = param_3;
      uVar2 = param_4;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_5;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_6;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x30) = param_7;
      uVar2 = param_8;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x38);
      *(undefined8 *)((long)plVar1 + 0x38) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_9;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x40);
      *(undefined8 *)((long)plVar1 + 0x40) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_10;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x48);
      *(undefined8 *)((long)plVar1 + 0x48) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 10b892e40; end: 10b892e63; -[SQLWebviewNavigationEvent copyWithZone:] */

undefined8 FUN_10b892e40(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b892e64; end: 10b892f2b; -[SQLWebviewNavigationEvent hash] */

undefined8 * FUN_10b892e64(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x10);
  uStack_60 = *(undefined8 *)(param_1 + 0x18);
  lStack_68 = -lVar5;
  if (-1 < lVar5) {
    lStack_68 = lVar5;
  }
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x30);
  uStack_40 = *(undefined8 *)(param_1 + 0x38);
  lStack_48 = -lVar5;
  if (-1 < lVar5) {
    lStack_48 = lVar5;
  }
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b893044:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b893050;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10) &&
        (*(long *)((long)puVar3 + 0x30) == *(long *)(param_3 + 0x30))))) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x28);
            if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x38);
              if ((lVar5 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x40);
                if ((lVar5 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  puVar6 = *(undefined1 **)((long)puVar3 + 0x48);
                  if (puVar6 != *(undefined1 **)(param_3 + 0x48)) {
                    func_0x00010c071ae0();
                    goto LAB_10b893050;
                  }
                  goto LAB_10b893044;
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b893050:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b892f2c; end: 10b89306b; -[SQLWebviewNavigationEvent isEqual:] */

long FUN_10b892f2c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b893044:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b893050;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
        (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x40);
                if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x48);
                  if (lVar3 != *(long *)(param_3 + 0x48)) {
                    func_0x00010c071ae0();
                    goto LAB_10b893050;
                  }
                  goto LAB_10b893044;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b893050:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b89306c; end: 10b8930cb;  */

undefined8 FUN_10b89306c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
  }
  return uVar1;
}



/* Entry: 10b8930cc; end: 10b893137; -[SQLWebviewNavigationEvent .cxx_destruct] */

void FUN_10b8930cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b893138; end: 10b89325f;  */

undefined1 *
FUN_10b893138(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_60;
  undefined *puStack_58;
  
  plVar1 = &lStack_60;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_58 = PTR_PTR_11270b9d8;
    lStack_60 = param_1;
    _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x10);
      *(undefined8 *)((long)plVar1 + 0x10) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_3;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_4;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_5;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = uVar2;
      _objc_release(uVar3);
      *(undefined1 *)((long)plVar1 + 8) = param_6;
      *(undefined1 *)((long)plVar1 + 9) = param_7;
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 10b893260; end: 10b893283; -[SQLWebviewGaEvent copyWithZone:] */

undefined8 FUN_10b893260(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b893284; end: 10b89331b; -[SQLWebviewGaEvent hash] */

undefined8 * FUN_10b893284(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  puVar3 = &uStack_58;
  uStack_40 = uVar2;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b8933ec:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b8933f8;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) &&
        (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[5];
            if (puVar6 != (undefined8 *)param_3[5]) {
              func_0x00010c071ae0();
              goto LAB_10b8933f8;
            }
            goto LAB_10b8933ec;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b8933f8:
  _objc_release(param_3);
  return puVar6;
}


