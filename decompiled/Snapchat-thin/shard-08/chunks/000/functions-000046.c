/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105c76154; end: 105c761cb;  */

void FUN_105c76154(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108e1fe8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105c761cc; end: 105c76243;  */

void FUN_105c761cc(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108e2038,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105c76244; end: 105c762bb;  */

void FUN_105c76244(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108e2088,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105c762bc; end: 105c76333;  */

void FUN_105c762bc(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108e20d8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105c76334; end: 105c763ab;  */

void FUN_105c76334(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108e2128,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105c763ac; end: 105c7651f;  */

void FUN_105c763ac(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long **pplVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined8 *unaff_x22;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  undefined1 auStack_168 [24];
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  long alStack_f0 [3];
  long *plStack_d8;
  long **applStack_d0 [2];
  char cStack_b9;
  long lStack_b8;
  undefined1 *puStack_b0;
  long *plStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar5 = param_4;
  _objc_retain(param_3);
  plVar9 = (long *)0x0;
  if (param_2 != 0) {
    plVar9 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f339ad7;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_1108e2178;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108e2178,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = puVar6;
    param_5 = param_4;
    unaff_x22 = &uStack_80;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = puVar6;
      param_5 = param_4;
      unaff_x22 = &uStack_80;
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  puVar3 = puVar2;
  __Unwind_Resume();
  plVar7 = alStack_f0;
  pcStack_88 = FUN_105c76520;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar4 = (long **)0x0;
  puVar6 = puVar5;
  puStack_b0 = (undefined1 *)unaff_x22;
  plStack_a8 = plVar9;
  puStack_a0 = puVar2;
  puStack_98 = param_3;
  puStack_90 = &stack0xfffffffffffffff0;
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    puVar2 = &UNK_10f339c42;
    if ((int)puVar1 == 0) {
      puVar2 = &UNK_10f339c47;
    }
    func_0x00010002b838(applStack_d0,puVar2);
    alStack_f0[0] = 0;
    alStack_f0[1] = 0;
    alStack_f0[2] = 0;
    func_0x00010007e1e8(alStack_f0,applStack_d0,&lStack_b8,1);
    puVar1 = &UNK_1108e21c8;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108e21c8,alStack_f0,puVar5);
    pplVar4 = &plStack_d8;
    plStack_d8 = alStack_f0;
    func_0x00010007e5dc();
    puVar6 = plVar7;
    param_5 = puVar5;
    plVar9 = alStack_f0;
    if (cStack_b9 < '\0') {
      pplVar4 = applStack_d0[0];
      __ZdlPv();
      puVar6 = plVar7;
      param_5 = puVar5;
      plVar9 = alStack_f0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  plStack_d8 = plVar9;
  func_0x00010007e5dc(&plStack_d8);
  if (cStack_b9 < '\0') {
    __ZdlPv(applStack_d0[0]);
  }
  __Unwind_Resume();
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar1;
  puVar5 = puVar6;
  _objc_retain(puVar1);
  if (pplVar4 != (long **)0x0) {
    plVar9 = pplVar4[1];
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f339ad7;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_168,puVar2);
    puVar2 = &UNK_10f339c42;
    if ((int)puVar6 == 0) {
      puVar2 = &UNK_10f339c47;
    }
    func_0x00010002b838(auStack_150,puVar2);
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_178 = 0;
    func_0x00010007e1e8(&uStack_188,auStack_168,&lStack_138,2);
    puVar2 = &UNK_1108e2218;
    puVar5 = &uStack_188;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108e2218,puVar5,param_5);
    puStack_170 = &uStack_188;
    func_0x00010007e5dc(&puStack_170);
    lVar8 = 0;
    do {
      if ((&cStack_139)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_150 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    FUN_105c76638(puVar3,puVar2,puVar5,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105c76520; end: 105c76637;  */

void FUN_105c76520(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined1 **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 *unaff_x21;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined1 auStack_e8 [24];
  undefined8 auStack_d0 [2];
  char cStack_b9;
  long lStack_b8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  puVar4 = &uStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined1 **)0x0;
  puVar5 = param_4;
  if (param_2 != 0) {
    plVar6 = *(long **)(param_2 + 8);
    puVar2 = &UNK_10f339c42;
    if ((int)param_3 == 0) {
      puVar2 = &UNK_10f339c47;
    }
    func_0x00010002b838(appuStack_50,puVar2);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    param_3 = &UNK_1108e21c8;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_1108e21c8,&uStack_70,param_4);
    ppuVar1 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    puVar5 = puVar4;
    param_5 = param_4;
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar1 = appuStack_50[0];
      __ZdlPv();
      puVar5 = puVar4;
      param_5 = param_4;
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  puVar4 = puVar5;
  _objc_retain(param_3);
  if (ppuVar1 != (undefined1 **)0x0) {
    plVar6 = (long *)ppuVar1[1];
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar2 = &UNK_10f339ad7;
    }
    else {
      puVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_e8,puVar2);
    puVar2 = &UNK_10f339c42;
    if ((int)puVar5 == 0) {
      puVar2 = &UNK_10f339c47;
    }
    func_0x00010002b838(auStack_d0,puVar2);
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    func_0x00010007e1e8(&uStack_108,auStack_e8,&lStack_b8,2);
    puVar2 = &UNK_1108e2218;
    puVar4 = &uStack_108;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_1108e2218,puVar4,param_5);
    puStack_f0 = &uStack_108;
    func_0x00010007e5dc(&puStack_f0);
    lVar7 = 0;
    do {
      if ((&cStack_b9)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_d0 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
  }
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    FUN_105c76638(puVar3,puVar2,puVar4,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105c76638; end: 105c7681f;  */

void FUN_105c76638(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [24];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar3 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar5 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f339ad7;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_78,puVar1);
    puVar1 = &UNK_10f339c42;
    if ((int)param_4 == 0) {
      puVar1 = &UNK_10f339c47;
    }
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_1108e2218;
    puVar3 = &uStack_98;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_1108e2218,puVar3,param_5);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar4 = 0;
    do {
      if ((&cStack_49)[lVar4] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar4));
      }
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != -0x30);
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    FUN_105c76638(puVar2,puVar1,puVar3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c76820; end: 105c7689b;  */

void FUN_105c76820(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  if (param_2 != 0) {
    FUN_105c76638(param_2,param_3,param_4,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c7689c; end: 105c76913;  */

void FUN_105c7689c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108e2268,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105c76914; end: 105c7698b; -[SCCreateMediaLinkRequest initWithSnapIds:] */

undefined1 * FUN_105c76914(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eca20;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c7698c; end: 105c769af; -[SCCreateMediaLinkRequest copyWithZone:] */

undefined8 FUN_105c7698c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105c769b0; end: 105c769b7; -[SCCreateMediaLinkRequest hash] */

void FUN_105c769b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 105c769b8; end: 105c76a47; -[SCCreateMediaLinkRequest isEqual:] */

long FUN_105c769b8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105c76a2c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_105c76a2c;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_105c76a2c;
    }
  }
  lVar3 = 1;
LAB_105c76a2c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105c76a48; end: 105c76a4f; -[SCCreateMediaLinkRequest snapIds] */

undefined8 FUN_105c76a48(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105c76a50; end: 105c76a5b; -[SCCreateMediaLinkRequest .cxx_destruct] */

void FUN_105c76a50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c76a5c; end: 105c76b33; -[SCCreateMediaLinkResponse initWithMediaLinkUrl:missingSnapInfos:linkId:] */

undefined1 *
FUN_105c76a5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126eca28;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c76b34; end: 105c76b57; -[SCCreateMediaLinkResponse copyWithZone:] */

undefined8 FUN_105c76b34(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105c76b58; end: 105c76bd7; -[SCCreateMediaLinkResponse hash] */

undefined8 * FUN_105c76b58(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_105c76c70:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105c76c7c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_105c76c7c;
          }
          goto LAB_105c76c70;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105c76c7c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105c76bd8; end: 105c76c97; -[SCCreateMediaLinkResponse isEqual:] */

long FUN_105c76bd8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105c76c70:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105c76c7c;
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
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_105c76c7c;
          }
          goto LAB_105c76c70;
        }
      }
    }
    lVar3 = 0;
  }
LAB_105c76c7c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105c76c98; end: 105c76c9f; -[SCCreateMediaLinkResponse mediaLinkUrl] */

undefined8 FUN_105c76c98(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105c76ca0; end: 105c76ca7; -[SCCreateMediaLinkResponse missingSnapInfos] */

undefined8 FUN_105c76ca0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105c76ca8; end: 105c76caf; -[SCCreateMediaLinkResponse linkId] */

undefined8 FUN_105c76ca8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105c76cb0; end: 105c76ceb; -[SCCreateMediaLinkResponse .cxx_destruct] */

void FUN_105c76cb0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c76cec; end: 105c76d9b; -[SCMemoriesMissingMedia initWithCoder:] */

undefined1 * FUN_105c76cec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eca30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
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



/* Entry: 105c76d9c; end: 105c76e47; -[SCMemoriesMissingMedia initWithExternalLinkSendingMedia:missingSnapInfo:] */

undefined1 *
FUN_105c76d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126eca30;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c76e48; end: 105c76e6b; -[SCMemoriesMissingMedia copyWithZone:] */

undefined8 FUN_105c76e48(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105c76e6c; end: 105c76ecb; -[SCMemoriesMissingMedia encodeWithCoder:] */

void FUN_105c76e6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e25ef8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e25f18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c76ecc; end: 105c76f3f; -[SCMemoriesMissingMedia hash] */

undefined8 * FUN_105c76ecc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_105c76fc0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105c76fcc;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_105c76fcc;
        }
        goto LAB_105c76fc0;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_105c76fcc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 105c76f40; end: 105c76fe7; -[SCMemoriesMissingMedia isEqual:] */

long FUN_105c76f40(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105c76fc0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105c76fcc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_105c76fcc;
        }
        goto LAB_105c76fc0;
      }
    }
    lVar3 = 0;
  }
LAB_105c76fcc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105c76fe8; end: 105c76fef; -[SCMemoriesMissingMedia externalLinkSendingMedia] */

undefined8 FUN_105c76fe8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105c76ff0; end: 105c76ff7; -[SCMemoriesMissingMedia missingSnapInfo] */

undefined8 FUN_105c76ff0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105c76ff8; end: 105c77027; -[SCMemoriesMissingMedia .cxx_destruct] */

void FUN_105c76ff8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c77028; end: 105c770d7; -[SCBackgroundMediaLinkUpdateInput initWithCoder:] */

undefined1 * FUN_105c77028(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eca38;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
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



/* Entry: 105c770d8; end: 105c77183; -[SCBackgroundMediaLinkUpdateInput initWithMemoriesMissingMedia:linkId:] */

undefined1 *
FUN_105c770d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126eca38;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c77184; end: 105c771a7; -[SCBackgroundMediaLinkUpdateInput copyWithZone:] */

undefined8 FUN_105c77184(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105c771a8; end: 105c77207; -[SCBackgroundMediaLinkUpdateInput encodeWithCoder:] */

void FUN_105c771a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e25f38);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e25f58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c77208; end: 105c7727b; -[SCBackgroundMediaLinkUpdateInput hash] */

undefined8 * FUN_105c77208(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_105c772fc:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105c77308;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_105c77308;
        }
        goto LAB_105c772fc;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_105c77308:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 105c7727c; end: 105c77323; -[SCBackgroundMediaLinkUpdateInput isEqual:] */

long FUN_105c7727c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105c772fc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105c77308;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_105c77308;
        }
        goto LAB_105c772fc;
      }
    }
    lVar3 = 0;
  }
LAB_105c77308:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105c77324; end: 105c7732b; -[SCBackgroundMediaLinkUpdateInput memoriesMissingMedia] */

undefined8 FUN_105c77324(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105c7732c; end: 105c77333; -[SCBackgroundMediaLinkUpdateInput linkId] */

undefined8 FUN_105c7732c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105c77334; end: 105c77363; -[SCBackgroundMediaLinkUpdateInput .cxx_destruct] */

void FUN_105c77334(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c77364; end: 105c773df; +[CreateMediaLinkRequest descriptor] */

undefined * FUN_105c77364(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c21f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a979e0,
                        &PTR____CFConstantStringClassReference_110e25f78,
                        &PTR_s_snapchat_memories_113125c30,&PTR_DAT_113125ca8,6,0x20,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c21f8 = puVar1;
  }
  return puRam00000001136c21f8;
}



/* Entry: 105c773e0; end: 105c7745b; +[CreateMediaLinkResponse descriptor] */

undefined * FUN_105c773e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2200 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a97a30,
                        &PTR____CFConstantStringClassReference_110e25f98,
                        &PTR_s_snapchat_memories_113125c30,&PTR_DAT_113125d68,6,0x30,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c2200 = puVar1;
  }
  return puRam00000001136c2200;
}



/* Entry: 105c7745c; end: 105c774d7; +[MissingSnapInfo descriptor] */

undefined * FUN_105c7745c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2208 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a97a80,
                        &PTR____CFConstantStringClassReference_110e25fb8,
                        &PTR_s_snapchat_memories_113125c30,&PTR_DAT_113125c48,3,8,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c2208 = puVar1;
  }
  return puRam00000001136c2208;
}



/* Entry: 105c774d8; end: 105c776df; -[SCShortcutsDataBirthdayPluginImpl initWithSnapchatterObservableRepository:performerProvider:] */

undefined8 *
FUN_105c774d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR_PTR_1126eca40;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_105c776e0;
    puStack_90 = &UNK_1108544e0;
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(param_4);
    uStack_88 = param_4;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_b0,auStack_78);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_b0);
    _objc_release(uStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105c776e0; end: 105c77767;  */

void FUN_105c776e0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf12a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105c77768; end: 105c77783;  */

void FUN_105c77768(void)

{
  _objc_opt_new(PTR_PTR_1126ae820);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c77784; end: 105c777c7; -[SCShortcutsDataBirthdayPluginImpl dealloc] */

void FUN_105c77784(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be05220();
  puStack_28 = PTR_PTR_1126eca40;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105c777c8; end: 105c777db; -[SCShortcutsDataBirthdayPluginImpl shortcutForSource:] */

void FUN_105c777c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6ab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae6b8,PTR_s_deferred__1125b8488,&PTR___NSConcreteGlobalBlock_1108e2448);
  return;
}



/* Entry: 105c777dc; end: 105c778e3;  */

void FUN_105c777dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b1490;
  func_0x000105c7811c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c260da0(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126b1498;
  _objc_alloc(PTR_PTR_1126b1498);
  puVar3 = puVar2;
  func_0x000105c78104();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045ee0(puVar2,param_2,&PTR____CFConstantStringClassReference_110de8358,0,puVar3,
                      puVar1,0,8);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ae6b8;
  puVar4 = PTR_PTR_1126ae750;
  func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar3,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105c778e4; end: 105c77913; -[SCShortcutsDataBirthdayPluginImpl shortcutId] */

void FUN_105c778e4(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110de8358);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110de8358);
  return;
}



/* Entry: 105c77914; end: 105c7791b; -[SCShortcutsDataBirthdayPluginImpl shouldShowForSource:] */

undefined8 FUN_105c77914(void)

{
  return 1;
}



/* Entry: 105c7791c; end: 105c77963; -[SCShortcutsDataBirthdayPluginImpl recipientsForSource:] */

void FUN_105c7791c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105c77964; end: 105c77967; -[SCShortcutsDataBirthdayPluginImpl pauseUpdates] */

void FUN_105c77964(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be05230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__disposeObserver_11255ee28);
  return;
}



/* Entry: 105c77968; end: 105c77a43; -[SCShortcutsDataBirthdayPluginImpl resumeUpdates] */

void FUN_105c77968(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010bdd4460();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  lVar2 = lVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(long *)(param_1 + 0x20) = lVar2;
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(lVar1);
  return;
}



/* Entry: 105c77a44; end: 105c77ab3;  */

void FUN_105c77a44(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c77ab4; end: 105c77abb; -[SCShortcutsDataBirthdayPluginImpl alwaysShow] */

undefined8 FUN_105c77ab4(void)

{
  return 0;
}



/* Entry: 105c77abc; end: 105c77b47; -[SCShortcutsDataBirthdayPluginImpl badgeObservable] */

void FUN_105c77abc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126ae750;
  puVar3 = PTR_PTR_1126ae6b8;
  puVar1 = PTR_PTR_1126b14f0;
  func_0x00010c122b20(PTR_PTR_1126b14f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2468a0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105c77b48; end: 105c77b53; -[SCShortcutsDataBirthdayPluginImpl shouldBadgeForSource:] */

bool FUN_105c77b48(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 != 2;
}



/* Entry: 105c77b54; end: 105c77baf; -[SCShortcutsDataBirthdayPluginImpl _createPerformerWithPerformerProvider:] */

void FUN_105c77b54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105c77bb0; end: 105c77bdb; -[SCShortcutsDataBirthdayPluginImpl _disposeObserver] */

void FUN_105c77bb0(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c77bdc; end: 105c77cd3; -[SCShortcutsDataBirthdayPluginImpl _birthdayShortcutRecipientsObservable] */

void FUN_105c77bdc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010bdd4460();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  lVar2 = lVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(long *)(param_1 + 0x20) = lVar2;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105c77cd4; end: 105c77d43;  */

void FUN_105c77cd4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c77d44; end: 105c77e8f; -[SCShortcutsDataBirthdayPluginImpl _birthdayRecipientsObservable] */

void FUN_105c77d44(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0ee960(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar5;
  func_0x00010c0b8600(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105c77e90; end: 105c77f3f;  */

void FUN_105c77e90(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_1 != 0) {
    puVar1 = param_2;
    func_0x0001006372a4(param_2,&PTR___NSConcreteGlobalBlock_1108e2468);
    puVar2 = puVar1;
    func_0x00010c246ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = puVar2;
    func_0x000100504554(puVar2,&PTR___NSConcreteGlobalBlock_1108e24a8);
    _objc_release(puVar2);
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c77f40; end: 105c77f9f; -[SCShortcutsDataBirthdayPluginImpl .cxx_destruct] */

void FUN_105c77f40(long param_1)

{
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



/* Entry: 105c77fa0; end: 105c780ab;  */

uint FUN_105c77fa0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x000100bf119c(param_2);
  uVar2 = param_2;
  func_0x00010901e308(param_2,0);
  _objc_release(param_2);
  return (uint)uVar1 & (uint)uVar2;
}



/* Entry: 105c780ac; end: 105c78103;  */

void FUN_105c780ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b14a0;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2448a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c78104; end: 105c78133;  */

void FUN_105c78104(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e25ff8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e25ff8,
                      &PTR____CFConstantStringClassReference_110e26018,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105c78134; end: 105c78283; -[SCShortcutsDataContactBookPluginImpl initWithNonSnapchattersObservableRepository:] */

undefined8 * FUN_105c78134(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126eca48;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[4];
    puVar1[4] = param_3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_58,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105c78284; end: 105c782c3;  */

void FUN_105c78284(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bde71a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105c782c4; end: 105c782df;  */

void FUN_105c782c4(void)

{
  _objc_opt_new(PTR_PTR_1126ae820);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c782e0; end: 105c78323; -[SCShortcutsDataContactBookPluginImpl dealloc] */

void FUN_105c782e0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be05220();
  puStack_28 = PTR_PTR_1126eca48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105c78324; end: 105c78373; -[SCShortcutsDataContactBookPluginImpl recipientsForSource:] */

void FUN_105c78324(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  
  if (param_3 < 3) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    unaff_x19 = uVar1;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 105c78374; end: 105c78387; -[SCShortcutsDataContactBookPluginImpl shortcutForSource:] */

void FUN_105c78374(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6ab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae6b8,PTR_s_deferred__1125b8488,&PTR___NSConcreteGlobalBlock_1108e24e8);
  return;
}



/* Entry: 105c78388; end: 105c7846f;  */

void FUN_105c78388(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b1490;
  func_0x00010bf8c140(PTR_PTR_1126b1490);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1498;
  _objc_alloc(PTR_PTR_1126b1498);
  puVar3 = puVar2;
  FUN_105c78cc4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045ee0(puVar2,param_2,&PTR____CFConstantStringClassReference_110dbb718,0,puVar3,
                      puVar1,0,9);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ae6b8;
  puVar4 = PTR_PTR_1126ae750;
  func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar3,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105c78470; end: 105c7847f; -[SCShortcutsDataContactBookPluginImpl shouldShowForSource:] */

bool FUN_105c78470(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 - 3U < 0xfffffffffffffffe;
}



/* Entry: 105c78480; end: 105c784af; -[SCShortcutsDataContactBookPluginImpl shortcutId] */

void FUN_105c78480(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110dbb718);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110dbb718);
  return;
}



/* Entry: 105c784b0; end: 105c784b3; -[SCShortcutsDataContactBookPluginImpl pauseUpdates] */

void FUN_105c784b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be05230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__disposeObserver_11255ee28);
  return;
}



/* Entry: 105c784b4; end: 105c7858f; -[SCShortcutsDataContactBookPluginImpl resumeUpdates] */

void FUN_105c784b4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010bde7180();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  lVar2 = lVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar2;
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(lVar1);
  return;
}



/* Entry: 105c78590; end: 105c785ff;  */

void FUN_105c78590(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c78600; end: 105c78607; -[SCShortcutsDataContactBookPluginImpl alwaysShow] */

undefined8 FUN_105c78600(void)

{
  return 0;
}



/* Entry: 105c78608; end: 105c786ff; -[SCShortcutsDataContactBookPluginImpl _contactBookShortcutRecipientsObservable] */

void FUN_105c78608(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010bde7180();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  lVar2 = lVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar2;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105c78700; end: 105c7876f;  */

void FUN_105c78700(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c78770; end: 105c787bf; -[SCShortcutsDataContactBookPluginImpl _shortcutRecipientsWithContactNonSnapchatters:] */

void FUN_105c78770(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0d3c80(param_3);
  func_0x00010c246ba0();
  uVar1 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1108e2528);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105c787c0; end: 105c788ff;  */

void FUN_105c787c0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  puVar6 = PTR_PTR_1126b14a0;
  lVar1 = param_2;
  func_0x00010c0faf60(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010bfded40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar3 == 0) {
    lVar4 = param_2;
    func_0x00010c0faf60(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc2600(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf49e00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(lVar4);
  }
  else {
    func_0x00010bf49e00(puVar6);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105c78900; end: 105c78a17; -[SCShortcutsDataContactBookPluginImpl _contactBookRecipientsObservable] */

void FUN_105c78900(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf49e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c0b8600(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105c78a18; end: 105c78a7b;  */

void FUN_105c78a18(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010beb2300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105c78a7c; end: 105c78aa7; -[SCShortcutsDataContactBookPluginImpl _disposeObserver] */

void FUN_105c78a7c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c78aa8; end: 105c78aef; -[SCShortcutsDataContactBookPluginImpl .cxx_destruct] */

void FUN_105c78aa8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c78af0; end: 105c78bbf;  */

ulong FUN_105c78af0(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  FUN_105c78bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  FUN_105c78bc0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 == 0) || (uVar2 == 0)) {
    uVar4 = (ulong)(uVar2 != 0);
    uVar3 = uVar2;
    if (lVar1 != 0) {
      uVar4 = 0xffffffffffffffff;
      goto LAB_105c78b88;
    }
  }
  else {
    uVar4 = uVar2;
    func_0x00010bf433a0();
    uVar3 = uVar4;
  }
  if (uVar4 == 0) {
    FUN_105c78c24();
    uVar4 = uVar3;
  }
LAB_105c78b88:
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 105c78bc0; end: 105c78c23;  */

void FUN_105c78bc0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c089f60();
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf885a0();
  func_0x00010bf655e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105c78c24; end: 105c78cc3;  */

ulong FUN_105c78c24(undefined8 param_1,ulong param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if ((param_2 == 0) || (lVar1 == 0)) {
    uVar2 = (ulong)(lVar1 != 0);
    if (param_2 != 0) {
      uVar2 = 0xffffffffffffffff;
    }
  }
  else {
    uVar2 = param_2;
    func_0x00010c09e740(param_2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 105c78cc4; end: 105c78cdb;  */

void FUN_105c78cc4(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e26058;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e26058,
                      &PTR____CFConstantStringClassReference_110e26078,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105c78cdc; end: 105c78d7f;  */

void FUN_105c78cdc(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010901d924();
  if ((int)lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010901db40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x00010c26f320(lVar1);
      uVar2 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c07fe20(param_1);
      *(char *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + 0x18) = (char)uVar3;
      _objc_release(uVar2);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c78d80; end: 105c78ed7;  */

void FUN_105c78d80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_105c78ed8;
  uStack_50 = 0x105c78ee8;
  uStack_48 = 0;
  uVar1 = param_2;
  func_0x00010bf96da0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  _objc_retain(param_2);
  func_0x00010c0c0020(uVar1);
  _objc_release(uVar1);
  uVar1 = puStack_68[5];
  _objc_retain(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105c78ed8; end: 105c78eef;  */

void FUN_105c78ed8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105c78ef0; end: 105c790ab;  */

void FUN_105c78ef0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126b14a0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa3d00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2448a0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c790ac; end: 105c79357;  */

byte FUN_105c790ac(double param_1,long param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bfa3d00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c06f680();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010bef0c80();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x000100bec110();
      _objc_release(uVar2);
      if ((uVar3 & 1) == 0) {
        uVar7 = *(ulong *)(param_2 + 0x30);
        uVar6 = *(undefined8 *)(param_2 + 0x20);
        _objc_retain(param_3);
        _objc_retain(uVar6);
        uVar2 = param_3;
        func_0x00010bef0c80();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_3;
        func_0x000100bf377c();
        bVar1 = false;
        if (((uVar3 & 1) == 0) && (uVar2 != 0)) {
          uVar3 = param_3;
          func_0x00010bef0c80();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c07d980();
          _objc_release(uVar3);
          if ((uVar4 & 1) == 0) {
            uVar3 = param_3;
            func_0x00010bef0c80();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            func_0x00010c0891c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar3);
            if (uVar4 == 0) {
              bVar1 = false;
            }
            else {
              func_0x00010c26f380(uVar6);
              bVar1 = param_1 / 60.0 < (double)uVar7;
            }
            _objc_release(uVar4);
          }
          else {
            bVar1 = false;
          }
        }
        _objc_release(uVar2);
        _objc_release(uVar6);
        _objc_release(param_3);
        uVar6 = *(undefined8 *)(param_2 + 0x28);
        _objc_retain(param_3);
        _objc_retain(uVar6);
        puStack_68 = &uStack_70;
        uStack_70 = 0;
        uStack_60 = 0x2020000000;
        uStack_58 = 0;
        uVar2 = param_3;
        func_0x00010bf96da0(param_3);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(uVar6);
        func_0x00010c0c0020(uVar2);
        _objc_release(uVar2);
        bVar5 = *(byte *)(puStack_68 + 3);
        _objc_release(uVar6);
        __Block_object_dispose(&uStack_70,8);
        _objc_release(uVar6);
        _objc_release(param_3);
        bVar5 = bVar1 | bVar5;
        goto LAB_105c79160;
      }
    }
  }
  bVar5 = 0;
LAB_105c79160:
  _objc_release(param_3);
  return bVar5 & 1;
}


