/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104d3ff88; end: 104d3ffab; -[SCServerDrivenTermsOfUsePageAction copyWithZone:] */

undefined8 FUN_104d3ff88(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104d3ffac; end: 104d4000b; -[SCServerDrivenTermsOfUsePageAction hash] */

void FUN_104d3ffac(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126e3fa0;
  puStack_60 = puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d4000c; end: 104d4004f; -[SCServerDrivenTermsOfUsePageAction internalInit] */

void FUN_104d4000c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e3fa0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d40050; end: 104d400ef; -[SCServerDrivenTermsOfUsePageAction isEqual:] */

long FUN_104d40050(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104d400d4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_104d400d4;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_104d400d4;
    }
  }
  lVar3 = 1;
LAB_104d400d4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104d400f0; end: 104d4019b; -[SCServerDrivenTermsOfUsePageAction matchAccept:remindMeLater:selectLink:] */

void FUN_104d400f0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  code *pcVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5,*(undefined8 *)(param_1 + 0x10));
    }
  }
  else {
    if (lVar1 == 1) {
      if (param_4 == 0) goto LAB_104d40178;
      pcVar2 = *(code **)(param_4 + 0x10);
      lVar1 = param_4;
    }
    else {
      if ((lVar1 != 0) || (param_3 == 0)) goto LAB_104d40178;
      pcVar2 = *(code **)(param_3 + 0x10);
      lVar1 = param_3;
    }
    (*pcVar2)(lVar1);
  }
LAB_104d40178:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d4019c; end: 104d401a7; -[SCServerDrivenTermsOfUsePageAction .cxx_destruct] */

void FUN_104d4019c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104d401a8; end: 104d4025b; -[SCServerDrivenTermsOfUseViewModel initWithShouldDisplayRemindButton:htmlString:attributedString:] */

undefined1 *
FUN_104d401a8(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e3fa8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
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
  return (undefined1 *)puVar1;
}



/* Entry: 104d4025c; end: 104d4027f; -[SCServerDrivenTermsOfUseViewModel copyWithZone:] */

undefined8 FUN_104d4025c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104d40280; end: 104d402fb; -[SCServerDrivenTermsOfUseViewModel hash] */

ulong * FUN_104d40280(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (ulong *)param_3) {
LAB_104d4038c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_104d40398;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_104d40398;
        }
        goto LAB_104d4038c;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_104d40398:
  _objc_release(param_3);
  return (ulong *)puVar6;
}



/* Entry: 104d402fc; end: 104d403b3; -[SCServerDrivenTermsOfUseViewModel isEqual:] */

long FUN_104d402fc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104d4038c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104d40398;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_104d40398;
        }
        goto LAB_104d4038c;
      }
    }
    lVar3 = 0;
  }
LAB_104d40398:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104d403b4; end: 104d403bb; -[SCServerDrivenTermsOfUseViewModel shouldDisplayRemindButton] */

undefined1 FUN_104d403b4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104d403bc; end: 104d403c3; -[SCServerDrivenTermsOfUseViewModel htmlString] */

undefined8 FUN_104d403bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104d403c4; end: 104d403cb; -[SCServerDrivenTermsOfUseViewModel attributedString] */

undefined8 FUN_104d403c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104d403cc; end: 104d403fb; -[SCServerDrivenTermsOfUseViewModel .cxx_destruct] */

void FUN_104d403cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104d403fc; end: 104d4046f; -[SCGrapheneTermsOfUseFeatureMetric2 init] */

undefined1 * FUN_104d403fc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e3fb0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104d40470; end: 104d405e3;  */

void FUN_104d40470(double param_1,long param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  long *plVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar3 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "\x01";
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_11084c2e0,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    FUN_104d40470(pcVar2,pcVar1,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar1);
  return;
}



/* Entry: 104d405e4; end: 104d4064f;  */

void FUN_104d405e4(double param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (param_2 != 0) {
    FUN_104d40470(param_2,param_3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d40650; end: 104d411a7; -[SCPreRegistrationVerificationEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d40650(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined *puVar22;
  long lVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  long lVar29;
  long lVar30;
  undefined8 uVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  puVar1 = PTR_PTR_1126aee18;
  _objc_alloc();
  if (param_1 == 0) {
    lVar32 = 0;
  }
  else {
    lVar32 = param_1 + _DAT_112711adc;
    _objc_loadWeakRetained(lVar32);
  }
  lVar2 = lVar32;
  func_0x00010c2970e0(lVar32);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffeee0();
  _objc_release(lVar2);
  _objc_release(lVar32);
  if (param_1 == 0) {
    lVar32 = 0;
  }
  else {
    lVar32 = param_1 + _DAT_112711ad0;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar32;
  func_0x000105407ab4(lVar32,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar32);
  puVar3 = PTR_PTR_1126afb98;
  _objc_alloc();
  lVar4 = param_1;
  FUN_104d411a8();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = lVar4;
  func_0x00010bfe5f40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x000104d411cc();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf10d00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x000104d411f0();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = lVar7;
  func_0x00010c127ba0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126af568;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf71140();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x000104d41214();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = lVar10;
  func_0x00010bf70040();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x000104d41238();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf32dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x000104d41238();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1;
  func_0x000104d4125c();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar29;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x000104d41280();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010bf1cd40();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x000104d412a4();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x00010c127c00();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_1 + _DAT_112711a70;
  lVar20 = lVar32;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010c119b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058f20();
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar29);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar30);
  _objc_release(lVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(lVar34);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar33);
  _objc_release(lVar4);
  puVar8 = PTR_PTR_1126afba0;
  _objc_alloc();
  lVar4 = param_1;
  FUN_104d411a8();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = lVar4;
  func_0x00010bfe5f40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x000104d411cc();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf10d00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x000104d411f0();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = lVar7;
  func_0x00010c127ba0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126af568;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar9;
  func_0x00010bf71140();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x000104d41214();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = lVar10;
  func_0x00010bf70040();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x000104d41238();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf32dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x000104d41238();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar29 = 0;
  }
  else {
    lVar29 = param_1 + _DAT_112711abc;
    _objc_loadWeakRetained();
  }
  lVar15 = lVar29;
  func_0x00010c105dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x000104d4125c();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x000104d41280();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x00010bf1cd40();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1;
  func_0x000104d412a4();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010c127c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_loadWeakRetained();
  lVar23 = lVar32;
  func_0x00010c119b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058f40();
  _objc_release(lVar23);
  _objc_release(lVar32);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar29);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar30);
  _objc_release(lVar10);
  _objc_release(puVar22);
  _objc_release(puVar9);
  _objc_release(lVar34);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar33);
  _objc_release(lVar4);
  _objc_initWeak(auStack_70,param_1);
  puVar9 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR_PTR_1126afba8;
  _objc_alloc();
  lVar33 = (long)_DAT_112711a74;
  lVar32 = param_1 + lVar33;
  _objc_loadWeakRetained(lVar32);
  lVar5 = lVar32;
  func_0x00010c127c00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112711a78;
  _objc_loadWeakRetained(lVar4);
  lVar6 = lVar4;
  func_0x00010c089460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03dca0();
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar5);
  _objc_release(lVar32);
  puVar24 = PTR_PTR_1126afbb0;
  _objc_alloc();
  lVar32 = param_1 + _DAT_112711a7c;
  _objc_loadWeakRetained(lVar32);
  lVar4 = lVar32;
  func_0x00010c23c580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060900();
  _objc_release(lVar4);
  _objc_release(lVar32);
  puVar25 = PTR_PTR_1126afbb8;
  _objc_alloc();
  lVar30 = (long)_DAT_112711a80;
  lVar32 = param_1 + lVar30;
  _objc_loadWeakRetained();
  lVar11 = lVar32;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1 + lVar33;
  _objc_loadWeakRetained();
  lVar12 = lVar33;
  func_0x00010c127c00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112711acc;
  _objc_loadWeakRetained();
  lVar13 = lVar4;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112711a8c;
  _objc_loadWeakRetained();
  lVar6 = param_1 + _DAT_112711a94;
  _objc_loadWeakRetained();
  lVar7 = param_1 + _DAT_112711a9c;
  _objc_loadWeakRetained();
  lVar34 = param_1 + _DAT_112711aa0;
  _objc_loadWeakRetained();
  lVar14 = lVar34;
  func_0x00010c0d2660();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_112711aa4;
  _objc_loadWeakRetained();
  lVar29 = lVar10;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c056b20();
  _objc_release(lVar29);
  _objc_release(lVar10);
  _objc_release(lVar14);
  _objc_release(lVar34);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar13);
  _objc_release(lVar4);
  _objc_release(lVar12);
  _objc_release(lVar33);
  _objc_release(lVar11);
  _objc_release(lVar32);
  puVar26 = PTR_PTR_1126afbc0;
  _objc_alloc();
  func_0x00010beb64a0(param_1);
  func_0x00010c046200();
  puVar28 = PTR_PTR_1126afbc8;
  _objc_alloc();
  lVar30 = param_1 + lVar30;
  _objc_loadWeakRetained();
  func_0x00010c298360();
  puVar27 = PTR_PTR_1126af958;
  func_0x00010bfbad80();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_1 + _DAT_112711aa8;
  _objc_loadWeakRetained();
  lVar7 = lVar32;
  func_0x00010c13d740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112711aac;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c124ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1 + _DAT_112711ab0;
  _objc_loadWeakRetained();
  lVar6 = lVar33;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040820();
  lVar34 = (long)_DAT_112711ab4;
  uVar31 = *(undefined8 *)(param_1 + lVar34);
  *(undefined **)(param_1 + lVar34) = puVar28;
  _objc_release(uVar31);
  _objc_release(lVar6);
  _objc_release(lVar33);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar7);
  _objc_release(lVar32);
  _objc_release(puVar27);
  _objc_release(lVar30);
  func_0x00010bf192c0(*(undefined8 *)(param_1 + lVar34));
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar22);
  _objc_release(puVar9);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar8);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 104d411a8; end: 104d412c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d411a8(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112711ad4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d412c8; end: 104d412cf;  */

void FUN_104d412c8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x000107c3ac50(PTR__OBJC_CLASS___NSUUID_1126b0270);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c3ac54();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d412d0; end: 104d4130f;  */

void FUN_104d412d0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5b2c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104d41310; end: 104d414ab; -[SCPreRegistrationVerificationEntryPoint userVerificationFinishedWithResult:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d41310(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_104d414ac;
  uStack_40 = 0x104d414bc;
  uStack_38 = 0;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_104d414ac;
  uStack_70 = 0x104d414bc;
  uStack_68 = 0;
  func_0x00010c0bf380(param_3);
  param_1 = param_1 + _DAT_112711a80;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c105f20();
  _objc_release(lVar1);
  _objc_release(param_1);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104d414ac; end: 104d414c3;  */

void FUN_104d414ac(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104d414c4; end: 104d41533;  */

void FUN_104d414c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d41534; end: 104d415a7;  */

void FUN_104d41534(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d415a8; end: 104d415ab;  */

void FUN_104d415a8(void)

{
  return;
}



/* Entry: 104d415ac; end: 104d415f7; -[SCPreRegistrationVerificationEntryPoint userVerificationExited] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d415ac(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112711a80;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c105ee0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d415f8; end: 104d415fb; -[SCPreRegistrationVerificationEntryPoint userVerificationExitedToLogInWithEmail:] */

void FUN_104d415f8(void)

{
  return;
}



/* Entry: 104d415fc; end: 104d415ff; -[SCPreRegistrationVerificationEntryPoint userVerificationExitedToLogInWithPhoneNumber:] */

void FUN_104d415fc(void)

{
  return;
}



/* Entry: 104d41600; end: 104d4166f; -[SCPreRegistrationVerificationEntryPoint userVerificationFinishedWithBootstrapData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d41600(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112711a80;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c105f00();
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d41670; end: 104d41677; -[SCPreRegistrationVerificationEntryPoint _shouldShowPrivacyPolicyOnFirstScreen] */

undefined8 FUN_104d41670(void)

{
  return 1;
}



/* Entry: 104d41678; end: 104d41753; -[SCPreRegistrationVerificationEntryPoint _magicCodeVerificationService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d41678(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126afbd0;
  _objc_alloc(PTR_PTR_1126afbd0);
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_112711ac0;
    _objc_loadWeakRetained(lVar5);
  }
  lVar2 = lVar5;
  func_0x00010c08d700(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = 0;
  if (param_1 != 0) {
    lVar3 = param_1 + _DAT_112711ae4;
    _objc_loadWeakRetained(lVar3);
  }
  lVar4 = lVar3;
  func_0x00010c0b4020(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c027a20(puVar1,param_2,lVar2,lVar4,&PTR___NSConcreteGlobalBlock_11084c430);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d41754; end: 104d41757;  */

void FUN_104d41754(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x000107c3ac50(PTR__OBJC_CLASS___NSUUID_1126b0270);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c3ac54();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d41758; end: 104d418ff; -[SCPreRegistrationVerificationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d41758(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112711a9c);
  _objc_storeStrong(param_1 + _DAT_112711a98,0);
  _objc_storeStrong(param_1 + _DAT_112711a90,0);
  _objc_storeStrong(param_1 + _DAT_112711a84,0);
  _objc_storeStrong(param_1 + _DAT_112711a88,0);
  _objc_destroyWeak(param_1 + _DAT_112711a70);
  _objc_destroyWeak(param_1 + _DAT_112711ae8);
  _objc_destroyWeak(param_1 + _DAT_112711aa8);
  _objc_destroyWeak(param_1 + _DAT_112711ae4);
  _objc_destroyWeak(param_1 + _DAT_112711ae0);
  _objc_destroyWeak(param_1 + _DAT_112711adc);
  _objc_destroyWeak(param_1 + _DAT_112711ad8);
  _objc_destroyWeak(param_1 + _DAT_112711ad4);
  _objc_destroyWeak(param_1 + _DAT_112711ad0);
  _objc_destroyWeak(param_1 + _DAT_112711acc);
  _objc_destroyWeak(param_1 + _DAT_112711ac8);
  _objc_destroyWeak(param_1 + _DAT_112711ac4);
  _objc_destroyWeak(param_1 + _DAT_112711a8c);
  _objc_destroyWeak(param_1 + _DAT_112711a94);
  _objc_destroyWeak(param_1 + _DAT_112711aa0);
  _objc_destroyWeak(param_1 + _DAT_112711a74);
  _objc_destroyWeak(param_1 + _DAT_112711aac);
  _objc_destroyWeak(param_1 + _DAT_112711ac0);
  _objc_destroyWeak(param_1 + _DAT_112711a78);
  _objc_destroyWeak(param_1 + _DAT_112711abc);
  _objc_destroyWeak(param_1 + _DAT_112711aa4);
  _objc_destroyWeak(param_1 + _DAT_112711ab8);
  _objc_destroyWeak(param_1 + _DAT_112711a7c);
  _objc_destroyWeak(param_1 + _DAT_112711a80);
  _objc_destroyWeak(param_1 + _DAT_112711ab0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112711ab4,0);
  return;
}



/* Entry: 104d41900; end: 104d41fab; -[SCUserVerificationEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d41900(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  
  puVar1 = PTR_PTR_1126afbd8;
  _objc_alloc();
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_112711b40;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar17;
  func_0x00010bf1cd40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar24 = 0;
  }
  else {
    lVar24 = param_1 + _DAT_112711b3c;
    _objc_loadWeakRetained(lVar24);
  }
  lVar3 = lVar24;
  func_0x00010c0f98e0(lVar24);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_112711b38;
    _objc_loadWeakRetained(lVar18);
  }
  lVar4 = lVar18;
  func_0x00010bfcfa00(lVar18);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar25 = 0;
  }
  else {
    lVar25 = param_1 + _DAT_112711aec;
    _objc_loadWeakRetained(lVar25);
  }
  lVar5 = lVar25;
  func_0x00010c127c00(lVar25);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_112711b48;
    _objc_loadWeakRetained(lVar19);
  }
  lVar6 = lVar19;
  func_0x00010c0d7c20(lVar19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfff100(puVar1,param_2,lVar2,lVar3,lVar4,lVar5,lVar6,
                      &PTR___NSConcreteGlobalBlock_11084c450);
  _objc_release(lVar6);
  _objc_release(lVar19);
  _objc_release(lVar5);
  _objc_release(lVar25);
  _objc_release(lVar4);
  _objc_release(lVar18);
  _objc_release(lVar3);
  _objc_release(lVar24);
  _objc_release(lVar2);
  _objc_release(lVar17);
  lVar6 = param_1;
  func_0x00010be217a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126afba8;
  _objc_alloc();
  lVar18 = (long)_DAT_112711aec;
  lVar17 = param_1 + lVar18;
  _objc_loadWeakRetained(lVar17);
  lVar4 = lVar17;
  func_0x00010c127c00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_112711af0;
  _objc_loadWeakRetained(lVar2);
  lVar25 = lVar2;
  func_0x00010bf10b80();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + _DAT_112711af4;
  _objc_loadWeakRetained(lVar24);
  lVar5 = lVar24;
  func_0x00010c089460();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = (long)_DAT_112711af8;
  lVar3 = param_1 + lVar19;
  _objc_loadWeakRetained(lVar3);
  lVar8 = lVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03dca0(puVar7,param_2,lVar4,lVar25,lVar5,lVar8,1);
  _objc_release(lVar8);
  _objc_release(lVar3);
  _objc_release(lVar5);
  _objc_release(lVar24);
  _objc_release(lVar25);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar17);
  puVar9 = PTR_PTR_1126afbe0;
  _objc_alloc();
  lVar17 = param_1 + _DAT_112711afc;
  _objc_loadWeakRetained(lVar17);
  lVar2 = lVar17;
  func_0x00010c23c580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060900(puVar9,param_2,puVar7,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar17);
  puVar10 = PTR_PTR_1126afbb8;
  _objc_alloc();
  lVar17 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar8 = lVar17;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + _DAT_112711b00);
  lVar18 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar11 = lVar18;
  func_0x00010c127c00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_112711b04;
  _objc_loadWeakRetained();
  lVar12 = lVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + _DAT_112711b08);
  lVar24 = param_1 + _DAT_112711b0c;
  _objc_loadWeakRetained();
  uVar23 = *(undefined8 *)(param_1 + _DAT_112711b10);
  lVar3 = param_1 + _DAT_112711b14;
  _objc_loadWeakRetained();
  uVar22 = *(undefined8 *)(param_1 + _DAT_112711b18);
  lVar4 = param_1 + _DAT_112711b1c;
  _objc_loadWeakRetained();
  lVar25 = param_1 + _DAT_112711b20;
  _objc_loadWeakRetained();
  lVar13 = lVar25;
  func_0x00010c0d2660();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112711b24;
  _objc_loadWeakRetained();
  lVar14 = lVar5;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c056b20(puVar10,param_2,lVar8,puVar1,lVar6,puVar9,uVar20,lVar11,lVar12,uVar21,lVar24,
                      uVar23,lVar3,uVar22,lVar4,1);
  _objc_release(lVar14);
  _objc_release(lVar5);
  _objc_release(lVar13);
  _objc_release(lVar25);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar24);
  _objc_release(lVar12);
  _objc_release(lVar2);
  _objc_release(lVar11);
  _objc_release(lVar18);
  _objc_release(lVar8);
  _objc_release(lVar17);
  puVar15 = PTR_PTR_1126afbe8;
  _objc_opt_new();
  puVar16 = PTR_PTR_1126afbc8;
  _objc_alloc();
  lVar17 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar4 = lVar17;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar25 = lVar2;
  func_0x00010c298360();
  lVar19 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar5 = lVar19;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + _DAT_112711b28;
  _objc_loadWeakRetained();
  lVar8 = lVar24;
  func_0x00010c13d740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_112711b2c;
  _objc_loadWeakRetained();
  lVar11 = lVar3;
  func_0x00010c124ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_112711b30;
  _objc_loadWeakRetained();
  lVar12 = lVar18;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040820(puVar16,param_2,puVar10,lVar4,lVar25,lVar5,puVar15,lVar8,0,lVar11,lVar12,
                      puVar9);
  lVar25 = (long)_DAT_112711b34;
  uVar20 = *(undefined8 *)(param_1 + lVar25);
  *(undefined **)(param_1 + lVar25) = puVar16;
  _objc_release(uVar20);
  _objc_release(lVar12);
  _objc_release(lVar18);
  _objc_release(lVar11);
  _objc_release(lVar3);
  _objc_release(lVar8);
  _objc_release(lVar24);
  _objc_release(lVar5);
  _objc_release(lVar19);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar17);
  func_0x00010bf192c0(*(undefined8 *)(param_1 + lVar25));
  _objc_release(puVar15);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d41fac; end: 104d41faf;  */

undefined ** FUN_104d41fac(void)

{
  return &PTR____CFConstantStringClassReference_110dadbd8;
}



/* Entry: 104d41fb0; end: 104d42257; -[SCUserVerificationEntryPoint _getPhoneService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d41fb0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  lVar1 = param_1 + _DAT_112711b38;
  _objc_loadWeakRetained();
  lVar2 = param_1 + _DAT_112711b3c;
  _objc_loadWeakRetained(lVar2);
  lVar3 = param_1 + _DAT_112711b04;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x000105400e90(lVar1,lVar2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126afbf0;
  _objc_alloc(PTR_PTR_1126afbf0);
  _objc_retain(&PTR___NSConcreteGlobalBlock_1108864c8);
  lVar1 = param_1 + _DAT_112711b40;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010bf1cd40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_112711b44;
  _objc_loadWeakRetained(lVar2);
  lVar7 = lVar2;
  func_0x00010bfe5f40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_112711b48;
  _objc_loadWeakRetained(lVar3);
  lVar8 = lVar3;
  func_0x00010c0d7c20();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112711aec;
  _objc_loadWeakRetained(param_1);
  lVar9 = param_1;
  func_0x00010c127c00();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019600(puVar6);
  _objc_release(puVar10);
  _objc_destroyWeak(auStack_70);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(lVar8);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_release(&PTR___NSConcreteGlobalBlock_1108864c8);
  _objc_release(lVar5);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104d42258; end: 104d42297;  */

void FUN_104d42258(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be738e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104d42298; end: 104d42353; -[SCUserVerificationEntryPoint _phoneServiceLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d42298(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126afbf8;
  _objc_alloc(PTR_PTR_1126afbf8);
  lVar2 = param_1 + _DAT_112711b4c;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c292f40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112711af8;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04fe40(puVar1,param_2,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d42354; end: 104d424bf; -[SCUserVerificationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d42354(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112711b1c);
  _objc_storeStrong(param_1 + _DAT_112711b18,0);
  _objc_storeStrong(param_1 + _DAT_112711b00,0);
  _objc_storeStrong(param_1 + _DAT_112711b10,0);
  _objc_destroyWeak(param_1 + _DAT_112711b48);
  _objc_destroyWeak(param_1 + _DAT_112711b24);
  _objc_destroyWeak(param_1 + _DAT_112711b44);
  _objc_destroyWeak(param_1 + _DAT_112711b28);
  _objc_storeStrong(param_1 + _DAT_112711b08,0);
  _objc_destroyWeak(param_1 + _DAT_112711b3c);
  _objc_destroyWeak(param_1 + _DAT_112711b4c);
  _objc_destroyWeak(param_1 + _DAT_112711b40);
  _objc_destroyWeak(param_1 + _DAT_112711b0c);
  _objc_destroyWeak(param_1 + _DAT_112711b14);
  _objc_destroyWeak(param_1 + _DAT_112711b20);
  _objc_destroyWeak(param_1 + _DAT_112711b04);
  _objc_destroyWeak(param_1 + _DAT_112711aec);
  _objc_destroyWeak(param_1 + _DAT_112711b2c);
  _objc_destroyWeak(param_1 + _DAT_112711af4);
  _objc_destroyWeak(param_1 + _DAT_112711afc);
  _objc_destroyWeak(param_1 + _DAT_112711af0);
  _objc_destroyWeak(param_1 + _DAT_112711af8);
  _objc_destroyWeak(param_1 + _DAT_112711b38);
  _objc_destroyWeak(param_1 + _DAT_112711b50);
  _objc_destroyWeak(param_1 + _DAT_112711b30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112711b34,0);
  return;
}



/* Entry: 104d424c0; end: 104d42523; -[SCPreferences unverifiedUser] */

void FUN_104d424c0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110db0938);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afc00;
  _objc_opt_class(PTR_PTR_1126afc00);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d42524; end: 104d4252f; -[SCPreferences setUnverifiedUser:] */

void FUN_104d42524(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110db0938);
  return;
}



/* Entry: 104d42530; end: 104d42893; -[SCUserVerificationNavRouter initWithUIContainer:emailService:phoneService:userVerificationEventLogger:webBrowsingScopeExposer:registrationLogger:circumstanceEngine:phoneCodeScopeExposer:phoneCodeScopeServices:countryCodePickerScopeExposer:countryCodePickerScopeServices:codeVerificationScopeExposer:ngoCodeVerificationScopeServices:shouldShowSwitchToVoiceOption:multiSourceCountryProvider:currentPageTracker:] */

undefined8 *
FUN_104d42530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined1 param_16,
             undefined4 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
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
  _objc_retain(param_15);
  _objc_retain(param_18);
  _objc_retain(param_19);
  puStack_70 = PTR_PTR_1126e3fb8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_19;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126afc08;
    _objc_opt_new();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    func_0x00010bf0c980(param_3);
    uVar4 = puVar1[1];
    _objc_retain(uVar4);
    uVar2 = puVar1[2];
    puVar1[2] = uVar4;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x18) = param_16;
    _objc_retain(param_8);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_19);
  _objc_release(param_18);
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
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104d42894; end: 104d4296f; -[SCUserVerificationNavRouter showEmailPageWithEmail:viewConfig:delegate:] */

void FUN_104d42894(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104d42970;
  puStack_58 = &UNK_11084c4a0;
  uStack_50 = param_1;
  uStack_48 = param_3;
  uStack_40 = param_5;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 104d42970; end: 104d42a9b;  */

void FUN_104d42970(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126af728;
  _objc_alloc(PTR_PTR_1126af728);
  func_0x00010c03dbc0();
  puVar2 = PTR_PTR_1126afc10;
  _objc_alloc(PTR_PTR_1126afc10);
  func_0x00010c00f2e0();
  puVar3 = PTR_PTR_1126aec60;
  _objc_alloc();
  func_0x00010bff9c80();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x28) = puVar3;
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126afc18;
  _objc_alloc(PTR_PTR_1126afc18);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c150e00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0425a0(puVar3);
  _objc_release(uVar4);
  _objc_storeWeak(*(long *)(param_1 + 0x20) + 200,puVar3);
  func_0x00010bf6f440(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
  func_0x00010bf0c980(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d42a9c; end: 104d42b77; -[SCUserVerificationNavRouter showPhoneEntryPageWithRegistrationPhoneNumber:viewConfig:delegate:] */

void FUN_104d42a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104d42b78;
  puStack_58 = &UNK_11084c4a0;
  uStack_50 = param_1;
  uStack_48 = param_3;
  uStack_40 = param_5;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 104d42b78; end: 104d42dd3;  */

void FUN_104d42b78(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126af728;
  _objc_alloc();
  func_0x00010c03dbc0();
  puVar2 = PTR_PTR_1126af348;
  _objc_alloc();
  func_0x00010c05a560();
  puVar3 = PTR_PTR_1126af2d0;
  _objc_alloc(PTR_PTR_1126af2d0);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0faf60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126af2e0;
  func_0x00010c2940c0(PTR_PTR_1126af2e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c035a00(puVar3);
  _objc_release(puVar5);
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126afc20;
  _objc_alloc(PTR_PTR_1126afc20);
  func_0x00010c035980();
  puVar6 = PTR_PTR_1126aec60;
  _objc_alloc();
  func_0x00010bff9c80();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x38) = puVar6;
  _objc_release(uVar4);
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  func_0x00010bef76a0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126afc28;
  _objc_alloc(PTR_PTR_1126afc28);
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  func_0x00010c150e00(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010c150e00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be738c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05f5c0(puVar6);
  _objc_release(uVar9);
  _objc_release(uVar4);
  _objc_release(uVar8);
  _objc_storeWeak(*(long *)(param_1 + 0x20) + 0xd0,puVar6);
  func_0x00010bf6f440(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
  func_0x00010bf0c980(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
  _objc_release(puVar6);
  _objc_release(uVar7);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d42dd4; end: 104d42eaf; -[SCUserVerificationNavRouter showPhoneVerifyPageWithRegistrationPhoneNumber:viewConfig:delegate:] */

void FUN_104d42dd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104d42eb0;
  puStack_58 = &UNK_11084c4a0;
  uStack_50 = param_3;
  uStack_48 = param_1;
  uStack_40 = param_5;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 104d42eb0; end: 104d42ff3;  */

void FUN_104d42eb0(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  
  puVar3 = PTR_PTR_1126afc30;
  _objc_alloc(PTR_PTR_1126afc30);
  func_0x00010c035940();
  puVar4 = PTR_PTR_1126aead8;
  _objc_alloc();
  lVar5 = *(long *)(param_1 + 0x28) + 0xd0;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c038f40(puVar4,param_2,lVar5,1);
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
  *(undefined **)(*(long *)(param_1 + 0x28) + 0x18) = puVar4;
  _objc_release(uVar8);
  _objc_release(lVar5);
  uVar2 = (uint)*(undefined8 *)(param_1 + 0x38);
  func_0x00010c0ec860();
  ppuVar6 = *(undefined ***)(param_1 + 0x20);
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x88);
  func_0x00010c0faf60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar6;
  func_0x00010c0cf3c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar7 != (undefined **)0x0) {
    ppuVar1 = ppuVar7;
  }
  func_0x00010bf23560(uVar8,param_2,ppuVar1,0,puVar3,*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18),
                      *(undefined1 *)(*(long *)(param_1 + 0x28) + 0xc0),(byte)(uVar2 >> 2) & 1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  func_0x00010bf9d620(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x80),param_2,uVar8);
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 104d42ff4; end: 104d4304b; -[SCUserVerificationNavRouter removePhoneVerifyPage] */

void FUN_104d42ff4(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104d4304c;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 104d4304c; end: 104d4308b;  */

void FUN_104d4304c(long param_1,undefined8 param_2)

{
  func_0x00010bf6f440(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),param_2,0);
  func_0x00010c12e1c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104d4308c; end: 104d43167; -[SCUserVerificationNavRouter showNGOCodeVerificationPage:service:delegate:] */

void FUN_104d4308c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104d43168;
  puStack_58 = &UNK_11084c4a0;
  uStack_50 = param_3;
  uStack_48 = param_1;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_50);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d43168; end: 104d432c3;  */

void FUN_104d43168(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_b8 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_104d432c4;
  uStack_30 = 0x104d432d4;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104d432dc;
  puStack_68 = &UNK_11084a578;
  uStack_c0 = *(undefined8 *)(param_1 + 0x28);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x104d43318;
  puStack_98 = &UNK_11084a578;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x104d43354;
  puStack_c8 = &UNK_11084a578;
  uStack_90 = uStack_c0;
  puStack_88 = puStack_b8;
  uStack_60 = uStack_c0;
  puStack_58 = puStack_b8;
  puStack_48 = puStack_b8;
  func_0x00010c0bd9e0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_80,&puStack_b0,&puStack_e0);
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc();
  func_0x00010c038f40();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
  *(undefined **)(*(long *)(param_1 + 0x28) + 0x18) = puVar1;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xa0);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xa8);
  func_0x00010bf24120(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(uVar3);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  return;
}



/* Entry: 104d432c4; end: 104d432db;  */

void FUN_104d432c4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104d432dc; end: 104d4338f;  */

void FUN_104d432dc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x20) + 200;
  _objc_loadWeakRetained();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104d43390; end: 104d4340b; -[SCUserVerificationNavRouter removeNGOCodeVerificationPage] */

void FUN_104d43390(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x104d433e8;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 104d4340c; end: 104d434ff; -[SCUserVerificationNavRouter showExitConfirmationWithDelegate:] */

void FUN_104d4340c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x104d43494;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 104d43500; end: 104d4353f; -[SCUserVerificationNavRouter dismissExitConfirmationIfVisible] */

void FUN_104d43500(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf830c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d43540; end: 104d435c7; -[SCUserVerificationNavRouter showCountryCodePickerWithDelegate:] */

void FUN_104d43540(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104d435c8;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 104d435c8; end: 104d4364b;  */

void FUN_104d435c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98);
  func_0x00010bf23d40(uVar2,param_2,puVar1,*(undefined8 *)(param_1 + 0x28),1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x90),param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d4364c; end: 104d436c7; -[SCUserVerificationNavRouter removeCountryCodePicker] */

void FUN_104d4364c(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x104d436a4;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 104d436c8; end: 104d4377f; -[SCUserVerificationNavRouter showWebBrowserWithUrl:browsingDelegate:] */

void FUN_104d436c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104d43780;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d43780; end: 104d4378f;  */

void FUN_104d43780(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bebbcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__showWebBrowserWithUrl_browsingD_11258c8d8,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 104d43790; end: 104d4380b; -[SCUserVerificationNavRouter dismissWebBrowser] */

void FUN_104d43790(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x104d437e8;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 104d4380c; end: 104d439c7; -[SCUserVerificationNavRouter _showWebBrowserWithUrl:browsingDelegate:] */

void FUN_104d4380c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae630;
  _objc_retain(param_4);
  func_0x00010bfe6000(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2b9b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new(PTR_PTR_1126ae560);
  puVar3 = puVar1;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104d439c8;
  puStack_60 = &UNK_110842308;
  uVar4 = param_3;
  uStack_58 = param_3;
  _objc_retain(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(puVar3,param_2,&puStack_78,uVar4);
  _objc_release(uVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  puVar5 = PTR_PTR_1126ae638;
  _objc_opt_new(PTR_PTR_1126ae638);
  puVar6 = puVar5;
  func_0x00010bf22ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar5);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0xb0),param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(puVar2);
  return;
}



/* Entry: 104d439c8; end: 104d439df;  */

void FUN_104d439c8(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c09c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_2,PTR_s_loadURL__112604b58,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 104d439e0; end: 104d43c3f; -[SCUserVerificationNavRouter _exitConfirmationAlertWithDelegate:] */

void FUN_104d439e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = auStack_80;
  _objc_initWeak(puVar1,param_3);
  puVar2 = PTR_PTR_1126af180;
  func_0x000108b9a8ac();
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104d43c40;
  puStack_90 = &UNK_110848a18;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126af180;
  func_0x000108b9a924();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar5 = PTR_PTR_1126af4d8;
  FUN_104d49644();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar2;
  puStack_70 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010beff880(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume(param_3);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010bf741e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d43c40; end: 104d43c6b;  */

void FUN_104d43c40(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf741e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d43c6c; end: 104d43c7b;  */

void FUN_104d43c6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf464b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126af4b0,PTR_s_configWithStyle__1125af2d0,1);
  return;
}



/* Entry: 104d43c7c; end: 104d43ca7;  */

void FUN_104d43c7c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf74d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d43ca8; end: 104d43cbf; -[SCUserVerificationNavRouter _shouldEnablePhoneHint] */

void FUN_104d43ca8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x78),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110db0958,0,0);
  return;
}



/* Entry: 104d43cc0; end: 104d43d43; -[SCUserVerificationNavRouter _phonePageCopy] */

void FUN_104d43cc0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(ulong *)(param_1 + 0xb8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c083f00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    func_0x000104d4dffc();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000104d4e014();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d43d44; end: 104d43e8b; -[SCUserVerificationNavRouter .cxx_destruct] */

void FUN_104d43d44(long param_1)

{
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_destroyWeak(param_1 + 0xd0);
  _objc_destroyWeak(param_1 + 200);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
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
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d43e8c; end: 104d43f5b; -[SCNGORegistrationMagicCodeVerificationService initWithLoginService:loginLogger:networkRequestIdProvider:] */

undefined1 *
FUN_104d43e8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e3fc0;
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
    uVar2 = param_5;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d43f5c; end: 104d43f8b; -[SCNGORegistrationMagicCodeVerificationService setChannel:] */

void FUN_104d43f5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d43f8c; end: 104d43fbb; -[SCNGORegistrationMagicCodeVerificationService setMagicCodeAdaptor:] */

void FUN_104d43f8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d43fbc; end: 104d44103; -[SCNGORegistrationMagicCodeVerificationService requestCodeResendWithSuccessBlock:failureBlock:] */

void FUN_104d43fbc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be075a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c1605e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf6d1e0(uVar4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104d44104;
  puStack_50 = &UNK_11084c4f0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104d44118;
  puStack_78 = &UNK_11084c520;
  uStack_70 = param_4;
  uStack_48 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c137e80(uVar1,param_2,lVar2,uVar3,uVar4,1,&puStack_68,&puStack_90);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_release(uStack_70);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d44104; end: 104d44117;  */

void FUN_104d44104(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104d44110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 104d44118; end: 104d441af;  */

void FUN_104d44118(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126af128;
  if (param_3 == 0) {
    if (lVar2 == 0) goto LAB_104d4419c;
    func_0x00010c282380(PTR_PTR_1126af128);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (lVar2 == 0) goto LAB_104d4419c;
    func_0x00010c13fb20(PTR_PTR_1126af128);
    _objc_retainAutoreleasedReturnValue();
  }
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
  _objc_release(puVar1);
LAB_104d4419c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d441b0; end: 104d44443; -[SCNGORegistrationMagicCodeVerificationService verifyCodeWithCode:isAutofill:successBlock:failureBlock:] */

void FUN_104d441b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = *(long *)(param_1 + 0x18);
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5acc0(param_1);
  lVar3 = param_1;
  func_0x00010be075a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a9c40(uVar2);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_initWeak(auStack_80,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be075a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c1605e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf6d1e0(uVar5);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_104d44444;
  puStack_a0 = &UNK_1108483d8;
  _objc_copyWeak(auStack_88,auStack_80);
  lStack_98 = lVar1;
  _objc_retain(param_5);
  uStack_90 = param_5;
  _objc_copyWeak(auStack_c0,auStack_80);
  _objc_retain(param_6);
  func_0x00010c0a8780(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_c0);
  _objc_release(uStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 104d44444; end: 104d444eb;  */

void FUN_104d44444(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee8540();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d444ec; end: 104d446b3; -[SCNGORegistrationMagicCodeVerificationService _verifyCodeSuccess:networkRequestId:successBlock:] */

void FUN_104d444ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_5);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5acc0(param_1);
  lVar1 = param_1;
  func_0x00010be075a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcfaa0(param_3);
  func_0x00010c119500(param_3);
  func_0x00010c0a9c00(uVar6);
  _objc_release(param_4);
  _objc_release(lVar1);
  _objc_release(uVar6);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5acc0(param_1);
  func_0x00010be075a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf1faa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a9d60(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(param_1);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126af130;
  _objc_alloc(PTR_PTR_1126af130);
  func_0x00010c03fb60();
  _objc_release(param_3);
  if (param_5 != 0) {
    (**(code **)(param_5 + 0x10))(param_5,puVar5);
  }
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 104d446b4; end: 104d44a57; -[SCNGORegistrationMagicCodeVerificationService _verifyCodeFailure:networkRequestId:failureBlock:] */

void FUN_104d446b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_104d44a58;
  uStack_70 = 0x104d44a68;
  uStack_68 = 0;
  uVar1 = param_3;
  func_0x00010c0b3f80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bd200();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5acc0(param_1);
  lVar2 = param_1;
  func_0x00010be075a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcfaa0(param_3);
  func_0x00010c119500(param_3);
  func_0x00010c0a9c00(uVar1);
  _objc_release(lVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5acc0();
  func_0x00010be075a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106b78380();
  func_0x00010bfcfaa0();
  func_0x00010c119500();
  func_0x00010c0a9c80(uVar1);
  _objc_release(param_1);
  _objc_release(uVar1);
  if (param_5 != 0) {
    (**(code **)(param_5 + 0x10))(param_5,puStack_88[5]);
  }
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d44a58; end: 104d44a6f;  */

void FUN_104d44a58(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104d44a70; end: 104d44e5f;  */

void FUN_104d44a70(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af138;
  func_0x00010c13fb20(PTR_PTR_1126af138,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104d44e60; end: 104d44f57; -[SCNGORegistrationMagicCodeVerificationService _emailOrPhone] */

void FUN_104d44e60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_a8 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_104d44a58;
  uStack_30 = 0x104d44a68;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104d44f58;
  puStack_60 = &UNK_110842b58;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x104d44f90;
  puStack_88 = &UNK_110842b58;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x104d44fc8;
  puStack_b0 = &UNK_110842b58;
  puStack_80 = puStack_a8;
  puStack_58 = puStack_a8;
  puStack_48 = puStack_a8;
  func_0x00010c0bd9e0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_78,&puStack_a0,&puStack_c8);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d44f58; end: 104d44fff;  */

void FUN_104d44f58(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d45000; end: 104d450d7; -[SCNGORegistrationMagicCodeVerificationService _loginSource] */

undefined8 FUN_104d45000(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_98 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0xffffffffffffffff;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104d450d8;
  puStack_50 = &UNK_110842b58;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x104d450ec;
  puStack_78 = &UNK_110842b58;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x104d45100;
  puStack_a0 = &UNK_110842b58;
  puStack_70 = puStack_98;
  puStack_48 = puStack_98;
  puStack_38 = puStack_98;
  func_0x00010c0bd9e0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_68,&puStack_90,&puStack_b8);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 104d450d8; end: 104d45113;  */

void FUN_104d450d8(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 3;
  return;
}



/* Entry: 104d45114; end: 104d45167; -[SCNGORegistrationMagicCodeVerificationService .cxx_destruct] */

void FUN_104d45114(long param_1)

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



/* Entry: 104d45168; end: 104d4525b; -[SCPhoneRegistrationPhoneCodeVerifier initWithPhoneNumber:authenticatedPhoneService:logger:delegate:] */

undefined1 *
FUN_104d45168(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e3fc8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_6);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d4525c; end: 104d4543b; -[SCPhoneRegistrationPhoneCodeVerifier verifyPhoneCode:wasAutofilled:completion:] */

void FUN_104d4525c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 uStack_80;
  undefined1 auStack_78 [8];
  
  ppuVar4 = &puStack_e0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c0ac380(*(undefined8 *)(param_1 + 0x20));
  _objc_initWeak(auStack_78,param_1);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_104d4543c;
  puStack_98 = &UNK_11084c550;
  _objc_copyWeak(auStack_88,auStack_78);
  uStack_80 = param_4;
  _objc_retain(param_5);
  ppuVar3 = &puStack_b0;
  uStack_90 = param_5;
  _objc_retainBlock(ppuVar3);
  puStack_e0 = puVar2;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x104d454cc;
  puStack_c8 = &UNK_11084c580;
  _objc_copyWeak(auStack_b8,auStack_78);
  _objc_retain(param_5);
  uStack_c0 = param_5;
  _objc_retainBlock(&puStack_e0);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0fb300(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf10980(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c298a60(uVar1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(ppuVar4);
  _objc_release(uStack_c0);
  _objc_destroyWeak(auStack_b8);
  _objc_release(ppuVar3);
  _objc_release(uStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 104d4543c; end: 104d45557;  */

void FUN_104d4543c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be73ac0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d45558; end: 104d45623; -[SCPhoneRegistrationPhoneCodeVerifier _phoneVerificationSucceeded:phoneVerifyToken:authSessionPayload:wasAutofilled:completion:] */

void FUN_104d45558(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0ac3a0(uVar1);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0fb280();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  (**(code **)(param_7 + 0x10))(param_7,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 104d45624; end: 104d456ab; -[SCPhoneRegistrationPhoneCodeVerifier _phoneVerificationFailed:connectionFailure:retryable:completion:] */

void FUN_104d45624(long param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
                  long param_6)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010c0ac360(uVar1);
  uVar1 = 1;
  if (param_4 != 0) {
    uVar1 = 2;
  }
  if (param_5 == 0) {
    uVar1 = 3;
  }
  (**(code **)(param_6 + 0x10))(param_6,uVar1,param_3);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d456ac; end: 104d4588f; -[SCPhoneRegistrationPhoneCodeVerifier requestPhoneCodeWithDeliveryMechanism:completion:] */

void FUN_104d456ac(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_4);
  func_0x00010c0ae380(*(undefined8 *)(param_1 + 0x20));
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_104d45890;
  puStack_80 = &UNK_11084c5b0;
  _objc_retain(param_4);
  ppuVar3 = &puStack_98;
  uStack_78 = param_4;
  _objc_retainBlock();
  puStack_c0 = puVar2;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x104d458a0;
  puStack_a8 = &UNK_11084c5e0;
  uStack_a0 = param_4;
  _objc_retain(param_4);
  ppuVar4 = &puStack_c0;
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0faf60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0cf3c0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0faf60(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c0fafc0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0fb300(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf10980(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2886e0(uVar1,param_2,uVar6,uVar8,uVar9,uVar10,param_3 == 1,0,1);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(ppuVar4);
  _objc_release(uStack_a0);
  _objc_release(ppuVar3);
  _objc_release(uStack_78);
  _objc_release(param_4);
  return;
}



/* Entry: 104d45890; end: 104d458af;  */

void FUN_104d45890(long param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000104d4589c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2 ^ 1);
  return;
}



/* Entry: 104d458b0; end: 104d458b7; -[SCPhoneRegistrationPhoneCodeVerifier didAutoFillVerificationCode] */

void FUN_104d458b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b2f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_logVerificationCodeAutoFill_11260a5f0);
  return;
}



/* Entry: 104d458b8; end: 104d458fb; -[SCPhoneRegistrationPhoneCodeVerifier .cxx_destruct] */

void FUN_104d458b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d458fc; end: 104d4592f; -[SCPreRegistrationVerificationEventLogger initWithVerificationFeatureLogger:signupTransitionLogger:] */

void FUN_104d458fc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e3fd0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithVerificationFeatureLogge_1125f5c50);
  return;
}


