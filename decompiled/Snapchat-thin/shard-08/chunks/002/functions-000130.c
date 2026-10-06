/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105e3fa9c; end: 105e3fb4f;  */

void FUN_105e3fa9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b5650;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c15a7a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c247520(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c043e20(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e3fb50; end: 105e3fe3f;  */

void FUN_105e3fb50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  _objc_retain();
  uVar1 = param_6;
  _objc_retain();
  uVar11 = 0;
  if (((int)param_3 != 0) && (param_7 != 0)) {
    FUN_105e3fe40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar1;
  }
  puVar2 = PTR_PTR_1126b53f0;
  func_0x00010c159140(PTR_PTR_1126b53f0,uVar11,param_3,0,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c23cf00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  FUN_105e3f560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_6;
  func_0x000108f3aaa8(param_6,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b52c0;
  _objc_alloc();
  func_0x00010bfcf7e0();
  func_0x00010bf34120();
  uVar5 = param_2;
  func_0x00010bf33820();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010c08ddc0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010c279320();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  func_0x00010c0b4d20();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_2;
  func_0x00010bfecc60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c107020(param_2);
  uVar12 = param_1;
  func_0x00010bf01b40(param_2);
  uVar13 = uVar12;
  func_0x00010c06ef40();
  uVar10 = param_2;
  func_0x00010bf13d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c229f80();
  func_0x00010bf20580();
  func_0x00010c239300();
  func_0x00010c0b4e80(param_2);
  uVar14 = uVar13;
  func_0x00010bf52600(param_2);
  func_0x00010c271760();
  func_0x00010c0192e0(param_1,uVar12,uVar13,uVar14);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar11);
  _objc_release(param_6);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105e3fe40; end: 105e3fe93;  */

void FUN_105e3fe40(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c2330 != -1) {
    func_0x00010002a2fc(0x1136c2330,&PTR___NSConcreteGlobalBlock_1108ec890);
  }
  uVar1 = uRam00000001136c2328;
  _objc_retain(uRam00000001136c2328);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e3fe94; end: 105e4014f;  */

void FUN_105e3fe94(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar1 = param_2;
  _objc_retain();
  uVar11 = 0;
  if (((int)param_3 != 0) && (param_4 != 0)) {
    FUN_105e3fe40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar1;
  }
  puVar2 = PTR_PTR_1126b53f0;
  func_0x00010c159140(PTR_PTR_1126b53f0,uVar11,param_3,0,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c23cf00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  FUN_105e3f560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b52c0;
  _objc_alloc();
  func_0x00010bfcf7e0();
  func_0x00010bf9e0a0();
  func_0x00010bf34120();
  uVar1 = param_2;
  func_0x00010bf33820();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c08ddc0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010c0cd300();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010c279320();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  func_0x00010c0b4d20();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_2;
  func_0x00010bfecc60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c107020(param_2);
  uVar12 = param_1;
  func_0x00010bf01b40(param_2);
  uVar13 = uVar12;
  func_0x00010c06ef40();
  uVar10 = param_2;
  func_0x00010bf13d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c229f80();
  func_0x00010bf20580();
  func_0x00010c239300();
  func_0x00010c0b4e80(param_2);
  uVar14 = uVar13;
  func_0x00010bf52600(param_2);
  func_0x00010c271760();
  func_0x00010c0192e0(param_1,uVar12,uVar13,uVar14);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar11);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105e40150; end: 105e4059b;  */

void FUN_105e40150(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,int param_9,
                  undefined1 param_10,undefined4 param_11,undefined8 param_12,undefined1 param_13)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_stack_ffffffffffffff20;
  undefined *puStack_90;
  
  uVar13 = param_1;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_6);
  uVar1 = param_2;
  func_0x00010c23cf00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_105e3f560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if ((int)param_7 == 0) {
    puVar9 = (undefined *)0x0;
    puStack_90 = (undefined *)0x0;
    uVar11 = 0x48;
  }
  else {
    puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR_PTR_1126bd8e0;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = 0x3fe0000000000000;
    func_0x00010bff9340(0x3fe0000000000000,0);
    _objc_release();
    if ((lRam00000001138466f0 == 2) ||
       ((lRam00000001138466f0 == 0 && (func_0x00010099c714(), puVar3 == (undefined *)0x3)))) {
      uVar11 = 0x48;
    }
    else if (param_8 - 1U < 3) {
      uVar11 = *(undefined8 *)(&UNK_10ddd10c8 + (param_8 - 1U) * 8);
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      puVar9 = puVar3;
    }
    else {
      uVar11 = 0x48;
    }
  }
  uVar10 = (undefined1)param_6;
  func_0x00010bf1f440();
  uVar4 = param_3;
  func_0x000108f389fc(param_3,param_7,puVar9,uVar11,2,0,0,param_12,
                      CONCAT71(CONCAT61((int6)((ulong)in_stack_ffffffffffffff20 >> 0x10),uVar10),
                               param_13));
  _objc_retainAutoreleasedReturnValue();
  if ((int)param_4 == 0) {
    uVar1 = param_2;
    func_0x00010c23cf00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126b5658;
    _objc_opt_class(PTR_PTR_1126b5658);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar3);
    uVar1 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar5);
    uVar5 = uVar1;
    func_0x00010c15a7c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar5);
    uVar11 = 0;
  }
  else {
    uVar11 = param_3;
    func_0x000108f3b000(param_3,param_10,1,0);
    _objc_retainAutoreleasedReturnValue();
  }
  if (param_9 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = param_3;
    func_0x000108f4242c();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR_PTR_1126c51a0;
  _objc_alloc();
  uVar1 = param_2;
  func_0x00010c2711a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c260dc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x000108f3c4d4(param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010c0b4d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01b40(param_2);
  uVar8 = param_2;
  func_0x00010bf33820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff62e0(uVar13,param_1);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(puVar9);
  _objc_release(puStack_90);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105e4059c; end: 105e4063f;  */

void FUN_105e4059c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  _objc_alloc();
  func_0x00010c0469e0(0x4038000000000000,0x4038000000000000);
  puVar3 = puVar2;
  func_0x00010bfe91c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c2328;
  puRam00000001136c2328 = puVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105e40640; end: 105e40727;  */

void FUN_105e40640(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x00010bdc1000(param_2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bbe0();
  _objc_release(puVar1);
  _CGContextFillEllipseInRect
            (0,0,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x20),param_2);
  puVar1 = PTR_PTR_1126b0c40;
  func_0x00010bfe8d40(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x28),
                      PTR_PTR_1126b0c40);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bfe97c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf89920(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e40728; end: 105e4078b; -[SCCreatorsSendToGrapheneLogger init] */

undefined1 * FUN_105e40728(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ed470;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c51d0;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105e4078c; end: 105e407cb; -[SCCreatorsSendToGrapheneLogger logSpotlightShareAnonymousToggle:] */

void FUN_105e4078c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010beb1a80();
  _objc_retainAutoreleasedReturnValue();
  FUN_105e40928(uVar1,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e407cc; end: 105e4080b; -[SCCreatorsSendToGrapheneLogger logSnapMapShareAnonymousToggle:] */

void FUN_105e407cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010beb1a80();
  _objc_retainAutoreleasedReturnValue();
  FUN_105e40a9c(uVar1,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e4080c; end: 105e40867; -[SCCreatorsSendToGrapheneLogger logSideBySideSelectionStoriesWithCount:] */

void FUN_105e4080c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dcfe58);
  _objc_retainAutoreleasedReturnValue();
  FUN_105e40c10(uVar2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e40868; end: 105e4088b; -[SCCreatorsSendToGrapheneLogger logSideBySideSelectionMissingType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *** FUN_105e40868(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_130 [48];
  undefined8 **ppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pppuVar3 = (undefined8 ***)&PTR____CFConstantStringClassReference_110ddea98;
  if (param_3 != 0) {
    pppuVar3 = (undefined8 ***)&PTR____CFConstantStringClassReference_110e2c118;
  }
  lVar1 = *(long *)(param_1 + 8);
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(pppuVar3);
  if (lVar1 != 0) {
    plVar6 = *(long **)(lVar1 + 8);
    _objc_retain(pppuVar3);
    if (pppuVar3 == (undefined8 ***)0x0) {
      pppuVar2 = (undefined8 ***)&UNK_10f342d57;
    }
    else {
      pppuVar2 = pppuVar3;
      _objc_retainAutorelease(pppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pppuVar3);
    func_0x00010002b838(auStack_60,pppuVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_1108ec9c0,&uStack_80,1);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pppuVar2 = pppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(pppuVar3);
  _objc_release(pppuVar3);
  __Unwind_Resume();
  puStack_f8 = PTR_PTR_1126ed480;
  pppuVar3 = &ppuStack_100;
  ppuStack_100 = pppuVar2;
  _objc_msgSendSuper2(pppuVar3,PTR_s_initWithFrame__1125e2948);
  if (pppuVar3 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar3;
    func_0x00010bf4dce0(pppuVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d4c0();
    _objc_release(pppuVar2);
    func_0x00010c17d4c0(pppuVar3);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(pppuVar3);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar7 = (long)_DAT_112737d34;
    uVar5 = *(undefined8 *)((long)pppuVar3 + lVar7);
    *(undefined **)((long)pppuVar3 + lVar7) = puVar4;
    _objc_release(uVar5);
    func_0x00010c219b60(*(undefined8 *)((long)pppuVar3 + lVar7));
    pppuVar2 = pppuVar3;
    func_0x00010bf4dce0(pppuVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(pppuVar2);
    puVar4 = PTR_PTR_1126b52f0;
    _objc_opt_new();
    lVar1 = (long)_DAT_112737d38;
    uVar5 = *(undefined8 *)((long)pppuVar3 + lVar1);
    *(undefined **)((long)pppuVar3 + lVar1) = puVar4;
    _objc_release(uVar5);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar5 = *(undefined8 *)((long)pppuVar3 + lVar1);
    func_0x00010c22a660(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(uVar5);
    _objc_release(puVar4);
    func_0x00010c219b60(*(undefined8 *)((long)pppuVar3 + lVar1));
    func_0x00010befbb60(*(undefined8 *)((long)pppuVar3 + lVar7));
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)pppuVar3 + (long)_DAT_112737d3c);
    *(undefined **)((long)pppuVar3 + (long)_DAT_112737d3c) = puVar4;
    _objc_release(uVar5);
    func_0x00010c160fc0(pppuVar3);
    puVar4 = PTR_PTR_1126aea58;
    _objc_alloc();
    uVar8 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
    lVar1 = (long)_DAT_112737d40;
    uVar5 = *(undefined8 *)((long)pppuVar3 + lVar1);
    *(undefined **)((long)pppuVar3 + lVar1) = puVar4;
    _objc_release(uVar5);
    func_0x00010c219b60(*(undefined8 *)((long)pppuVar3 + lVar1));
    func_0x00010c21ad00(*(undefined8 *)((long)pppuVar3 + lVar1));
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)pppuVar3 + lVar1));
    _objc_release(puVar4);
    func_0x00010c1cfce0(*(undefined8 *)((long)pppuVar3 + lVar1));
    func_0x00010befbb60(*(undefined8 *)((long)pppuVar3 + lVar7));
    puVar4 = PTR__OBJC_CLASS___UISwitch_1126b0680;
    _objc_alloc();
    func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
    lVar1 = (long)_DAT_112737d44;
    uVar5 = *(undefined8 *)((long)pppuVar3 + lVar1);
    *(undefined **)((long)pppuVar3 + lVar1) = puVar4;
    _objc_release(uVar5);
    func_0x00010c219b60(*(undefined8 *)((long)pppuVar3 + lVar1));
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4000(*(undefined8 *)((long)pppuVar3 + lVar1));
    _objc_release(puVar4);
    _CGAffineTransformMakeScale(auStack_130,0x3fe999999999999a,0x3fe999999999999a);
    func_0x00010c219960(*(undefined8 *)((long)pppuVar3 + lVar1));
    func_0x00010befbd60(*(undefined8 *)((long)pppuVar3 + lVar1));
    func_0x00010befbb60(*(undefined8 *)((long)pppuVar3 + lVar7));
    func_0x00010beabce0(pppuVar3);
  }
  return pppuVar3;
}



/* Entry: 105e4088c; end: 105e408a7; -[SCCreatorsSendToGrapheneLogger _shareAnonymousStringFromValue:] */

undefined ** FUN_105e4088c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc8958;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dc8978;
  }
  return ppuVar1;
}



/* Entry: 105e408a8; end: 105e408b3; -[SCCreatorsSendToGrapheneLogger .cxx_destruct] */

void FUN_105e408a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e408b4; end: 105e40927; -[SCGrapheneCreatorsSendToMetric2 init] */

undefined1 * FUN_105e408b4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ed478;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105e40928; end: 105e40a9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ***** FUN_105e40928(long param_1,undefined8 *****param_2,undefined1 *param_3)

{
  undefined8 *****pppppuVar1;
  undefined8 *****pppppuVar2;
  undefined *puVar3;
  undefined8 *****pppppuVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 ****ppppuVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_2b0 [48];
  undefined8 ****ppppuStack_280;
  undefined *puStack_278;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *****)0x0) {
      pppppuVar1 = (undefined8 *****)&UNK_10f342d57;
    }
    else {
      pppppuVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pppppuVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pppppuVar1 = (undefined8 *****)&UNK_1108ec8d0;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108ec8d0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  pppppuVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar6 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar4 = pppppuVar1;
  puVar7 = puVar5;
  _objc_retain(pppppuVar1);
  if (pppppuVar2 != (undefined8 *****)0x0) {
    ppppuVar10 = pppppuVar2[1];
    _objc_retain(pppppuVar1);
    if (pppppuVar1 == (undefined8 *****)0x0) {
      pppppuVar2 = (undefined8 *****)&UNK_10f342d57;
    }
    else {
      pppppuVar2 = pppppuVar1;
      _objc_retainAutorelease(pppppuVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar1);
    func_0x00010002b838(auStack_e0,pppppuVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    pppppuVar4 = (undefined8 *****)&UNK_1108ec920;
    (*(code *)(*ppppuVar10)[3])(ppppuVar10,&UNK_1108ec920,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar7 = (undefined1 *)puVar6;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar7 = (undefined1 *)puVar6;
    }
  }
  pppppuVar2 = pppppuVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pppppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(pppppuVar1);
  _objc_release(pppppuVar1);
  __Unwind_Resume();
  puVar6 = &uStack_180;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar1 = pppppuVar4;
  puVar5 = puVar7;
  _objc_retain(pppppuVar4);
  if (pppppuVar2 != (undefined8 *****)0x0) {
    ppppuVar10 = pppppuVar2[1];
    pppppuVar1 = (undefined8 *****)&UNK_1108ec970;
    (*(code *)(*ppppuVar10)[5])();
    if ((int)ppppuVar10 != 0) {
      ppppuVar10 = pppppuVar2[1];
      _objc_retain(pppppuVar4);
      if (pppppuVar4 == (undefined8 *****)0x0) {
        pppppuVar1 = (undefined8 *****)&UNK_10f342d57;
      }
      else {
        pppppuVar1 = pppppuVar4;
        _objc_retainAutorelease(pppppuVar4);
        func_0x00010bdc3520();
      }
      _objc_release(pppppuVar4);
      func_0x00010002b838(auStack_160,pppppuVar1);
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_170 = 0;
      func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
      pppppuVar1 = (undefined8 *****)&UNK_1108ec970;
      (*(code *)(*ppppuVar10)[3])(ppppuVar10,&UNK_1108ec970,&uStack_180,(long)puVar7 * 10);
      puStack_168 = (undefined1 *)&uStack_180;
      func_0x00010007e5dc(&puStack_168);
      puVar5 = (undefined1 *)puVar6;
      if (cStack_149 < '\0') {
        __ZdlPv(auStack_160[0]);
        puVar5 = (undefined1 *)puVar6;
      }
    }
  }
  pppppuVar2 = pppppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return pppppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(pppppuVar4);
  _objc_release(pppppuVar4);
  __Unwind_Resume();
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(pppppuVar1);
  if (pppppuVar2 != (undefined8 *****)0x0) {
    ppppuVar10 = pppppuVar2[1];
    _objc_retain(pppppuVar1);
    if (pppppuVar1 == (undefined8 *****)0x0) {
      pppppuVar2 = (undefined8 *****)&UNK_10f342d57;
    }
    else {
      pppppuVar2 = pppppuVar1;
      _objc_retainAutorelease(pppppuVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar1);
    func_0x00010002b838(auStack_1e0,pppppuVar2);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
    (*(code *)(*ppppuVar10)[3])(ppppuVar10,&UNK_1108ec9c0,&uStack_200,puVar5);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
    }
  }
  pppppuVar2 = pppppuVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return pppppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(pppppuVar1);
  _objc_release(pppppuVar1);
  __Unwind_Resume();
  puStack_278 = PTR_PTR_1126ed480;
  pppppuVar1 = &ppppuStack_280;
  ppppuStack_280 = pppppuVar2;
  _objc_msgSendSuper2(pppppuVar1,PTR_s_initWithFrame__1125e2948);
  if (pppppuVar1 != (undefined8 *****)0x0) {
    pppppuVar2 = pppppuVar1;
    func_0x00010bf4dce0(pppppuVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d4c0();
    _objc_release(pppppuVar2);
    func_0x00010c17d4c0(pppppuVar1);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(pppppuVar1);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar11 = (long)_DAT_112737d34;
    uVar8 = *(undefined8 *)((long)pppppuVar1 + lVar11);
    *(undefined **)((long)pppppuVar1 + lVar11) = puVar3;
    _objc_release(uVar8);
    func_0x00010c219b60(*(undefined8 *)((long)pppppuVar1 + lVar11));
    pppppuVar2 = pppppuVar1;
    func_0x00010bf4dce0(pppppuVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(pppppuVar2);
    puVar3 = PTR_PTR_1126b52f0;
    _objc_opt_new();
    lVar12 = (long)_DAT_112737d38;
    uVar8 = *(undefined8 *)((long)pppppuVar1 + lVar12);
    *(undefined **)((long)pppppuVar1 + lVar12) = puVar3;
    _objc_release(uVar8);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar8 = *(undefined8 *)((long)pppppuVar1 + lVar12);
    func_0x00010c22a660(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(uVar8);
    _objc_release(puVar3);
    func_0x00010c219b60(*(undefined8 *)((long)pppppuVar1 + lVar12));
    func_0x00010befbb60(*(undefined8 *)((long)pppppuVar1 + lVar11));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)pppppuVar1 + (long)_DAT_112737d3c);
    *(undefined **)((long)pppppuVar1 + (long)_DAT_112737d3c) = puVar3;
    _objc_release(uVar8);
    func_0x00010c160fc0(pppppuVar1);
    puVar3 = PTR_PTR_1126aea58;
    _objc_alloc();
    uVar13 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar14 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar15 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar16 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar13,uVar14,uVar15,uVar16);
    lVar12 = (long)_DAT_112737d40;
    uVar8 = *(undefined8 *)((long)pppppuVar1 + lVar12);
    *(undefined **)((long)pppppuVar1 + lVar12) = puVar3;
    _objc_release(uVar8);
    func_0x00010c219b60(*(undefined8 *)((long)pppppuVar1 + lVar12));
    func_0x00010c21ad00(*(undefined8 *)((long)pppppuVar1 + lVar12));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)pppppuVar1 + lVar12));
    _objc_release(puVar3);
    func_0x00010c1cfce0(*(undefined8 *)((long)pppppuVar1 + lVar12));
    func_0x00010befbb60(*(undefined8 *)((long)pppppuVar1 + lVar11));
    puVar3 = PTR__OBJC_CLASS___UISwitch_1126b0680;
    _objc_alloc();
    func_0x00010c013de0(uVar13,uVar14,uVar15,uVar16);
    lVar12 = (long)_DAT_112737d44;
    uVar8 = *(undefined8 *)((long)pppppuVar1 + lVar12);
    *(undefined **)((long)pppppuVar1 + lVar12) = puVar3;
    _objc_release(uVar8);
    func_0x00010c219b60(*(undefined8 *)((long)pppppuVar1 + lVar12));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4000(*(undefined8 *)((long)pppppuVar1 + lVar12));
    _objc_release(puVar3);
    _CGAffineTransformMakeScale(auStack_2b0,0x3fe999999999999a,0x3fe999999999999a);
    func_0x00010c219960(*(undefined8 *)((long)pppppuVar1 + lVar12));
    func_0x00010befbd60(*(undefined8 *)((long)pppppuVar1 + lVar12));
    func_0x00010befbb60(*(undefined8 *)((long)pppppuVar1 + lVar11));
    func_0x00010beabce0(pppppuVar1);
  }
  return pppppuVar1;
}



/* Entry: 105e40a9c; end: 105e40c0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ***** FUN_105e40a9c(long param_1,undefined8 *****param_2,undefined1 *param_3)

{
  undefined8 *****pppppuVar1;
  undefined8 *****pppppuVar2;
  undefined8 ****ppppuVar3;
  undefined *puVar4;
  undefined8 *****pppppuVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_230 [48];
  undefined8 ****ppppuStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar1 = param_2;
  puVar6 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *****)0x0) {
      pppppuVar1 = (undefined8 *****)&UNK_10f342d57;
    }
    else {
      pppppuVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pppppuVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pppppuVar1 = (undefined8 *****)&UNK_1108ec920;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108ec920,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar6 = (undefined1 *)puVar7;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar6 = (undefined1 *)puVar7;
    }
  }
  pppppuVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar7 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar5 = pppppuVar1;
  puVar8 = puVar6;
  _objc_retain(pppppuVar1);
  if (pppppuVar2 != (undefined8 *****)0x0) {
    ppppuVar3 = pppppuVar2[1];
    pppppuVar5 = (undefined8 *****)&UNK_1108ec970;
    (*(code *)(*ppppuVar3)[5])();
    if ((int)ppppuVar3 != 0) {
      ppppuVar3 = pppppuVar2[1];
      _objc_retain(pppppuVar1);
      if (pppppuVar1 == (undefined8 *****)0x0) {
        pppppuVar2 = (undefined8 *****)&UNK_10f342d57;
      }
      else {
        pppppuVar2 = pppppuVar1;
        _objc_retainAutorelease(pppppuVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pppppuVar1);
      func_0x00010002b838(auStack_e0,pppppuVar2);
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
      pppppuVar5 = (undefined8 *****)&UNK_1108ec970;
      (*(code *)(*ppppuVar3)[3])(ppppuVar3,&UNK_1108ec970,&uStack_100,(long)puVar6 * 10);
      puStack_e8 = (undefined1 *)&uStack_100;
      func_0x00010007e5dc(&puStack_e8);
      puVar8 = (undefined1 *)puVar7;
      if (cStack_c9 < '\0') {
        __ZdlPv(auStack_e0[0]);
        puVar8 = (undefined1 *)puVar7;
      }
    }
  }
  pppppuVar2 = pppppuVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pppppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(pppppuVar1);
  _objc_release(pppppuVar1);
  __Unwind_Resume();
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(pppppuVar5);
  if (pppppuVar2 != (undefined8 *****)0x0) {
    ppppuVar3 = pppppuVar2[1];
    _objc_retain(pppppuVar5);
    if (pppppuVar5 == (undefined8 *****)0x0) {
      pppppuVar1 = (undefined8 *****)&UNK_10f342d57;
    }
    else {
      pppppuVar1 = pppppuVar5;
      _objc_retainAutorelease(pppppuVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar5);
    func_0x00010002b838(auStack_160,pppppuVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    (*(code *)(*ppppuVar3)[3])(ppppuVar3,&UNK_1108ec9c0,&uStack_180,puVar8);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
    }
  }
  pppppuVar1 = pppppuVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return pppppuVar1;
  }
  ___stack_chk_fail();
  _objc_release(pppppuVar5);
  _objc_release(pppppuVar5);
  __Unwind_Resume();
  puStack_1f8 = PTR_PTR_1126ed480;
  pppppuVar2 = &ppppuStack_200;
  ppppuStack_200 = pppppuVar1;
  _objc_msgSendSuper2(pppppuVar2,PTR_s_initWithFrame__1125e2948);
  if (pppppuVar2 != (undefined8 *****)0x0) {
    pppppuVar1 = pppppuVar2;
    func_0x00010bf4dce0(pppppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d4c0();
    _objc_release(pppppuVar1);
    func_0x00010c17d4c0(pppppuVar2);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(pppppuVar2);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar11 = (long)_DAT_112737d34;
    uVar9 = *(undefined8 *)((long)pppppuVar2 + lVar11);
    *(undefined **)((long)pppppuVar2 + lVar11) = puVar4;
    _objc_release(uVar9);
    func_0x00010c219b60(*(undefined8 *)((long)pppppuVar2 + lVar11));
    pppppuVar1 = pppppuVar2;
    func_0x00010bf4dce0(pppppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(pppppuVar1);
    puVar4 = PTR_PTR_1126b52f0;
    _objc_opt_new();
    lVar12 = (long)_DAT_112737d38;
    uVar9 = *(undefined8 *)((long)pppppuVar2 + lVar12);
    *(undefined **)((long)pppppuVar2 + lVar12) = puVar4;
    _objc_release(uVar9);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar9 = *(undefined8 *)((long)pppppuVar2 + lVar12);
    func_0x00010c22a660(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(uVar9);
    _objc_release(puVar4);
    func_0x00010c219b60(*(undefined8 *)((long)pppppuVar2 + lVar12));
    func_0x00010befbb60(*(undefined8 *)((long)pppppuVar2 + lVar11));
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)pppppuVar2 + (long)_DAT_112737d3c);
    *(undefined **)((long)pppppuVar2 + (long)_DAT_112737d3c) = puVar4;
    _objc_release(uVar9);
    func_0x00010c160fc0(pppppuVar2);
    puVar4 = PTR_PTR_1126aea58;
    _objc_alloc();
    uVar13 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar14 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar15 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar16 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar13,uVar14,uVar15,uVar16);
    lVar12 = (long)_DAT_112737d40;
    uVar9 = *(undefined8 *)((long)pppppuVar2 + lVar12);
    *(undefined **)((long)pppppuVar2 + lVar12) = puVar4;
    _objc_release(uVar9);
    func_0x00010c219b60(*(undefined8 *)((long)pppppuVar2 + lVar12));
    func_0x00010c21ad00(*(undefined8 *)((long)pppppuVar2 + lVar12));
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)pppppuVar2 + lVar12));
    _objc_release(puVar4);
    func_0x00010c1cfce0(*(undefined8 *)((long)pppppuVar2 + lVar12));
    func_0x00010befbb60(*(undefined8 *)((long)pppppuVar2 + lVar11));
    puVar4 = PTR__OBJC_CLASS___UISwitch_1126b0680;
    _objc_alloc();
    func_0x00010c013de0(uVar13,uVar14,uVar15,uVar16);
    lVar12 = (long)_DAT_112737d44;
    uVar9 = *(undefined8 *)((long)pppppuVar2 + lVar12);
    *(undefined **)((long)pppppuVar2 + lVar12) = puVar4;
    _objc_release(uVar9);
    func_0x00010c219b60(*(undefined8 *)((long)pppppuVar2 + lVar12));
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4000(*(undefined8 *)((long)pppppuVar2 + lVar12));
    _objc_release(puVar4);
    _CGAffineTransformMakeScale(auStack_230,0x3fe999999999999a,0x3fe999999999999a);
    func_0x00010c219960(*(undefined8 *)((long)pppppuVar2 + lVar12));
    func_0x00010befbd60(*(undefined8 *)((long)pppppuVar2 + lVar12));
    func_0x00010befbb60(*(undefined8 *)((long)pppppuVar2 + lVar11));
    func_0x00010beabce0(pppppuVar2);
  }
  return pppppuVar2;
}



/* Entry: 105e40c10; end: 105e40da7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ***** FUN_105e40c10(long param_1,undefined8 *****param_2,undefined1 *param_3)

{
  long *plVar1;
  undefined8 *****pppppuVar2;
  undefined8 *****pppppuVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 ****ppppuVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_1b0 [48];
  undefined8 ****ppppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar2 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    pppppuVar2 = (undefined8 *****)&UNK_1108ec970;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      _objc_retain(param_2);
      if (param_2 == (undefined8 *****)0x0) {
        pppppuVar2 = (undefined8 *****)&UNK_10f342d57;
      }
      else {
        pppppuVar2 = param_2;
        _objc_retainAutorelease(param_2);
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      func_0x00010002b838(auStack_60,pppppuVar2);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
      pppppuVar2 = (undefined8 *****)&UNK_1108ec970;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1108ec970,&uStack_80,(long)param_3 * 10);
      puStack_68 = (undefined1 *)&uStack_80;
      func_0x00010007e5dc(&puStack_68);
      puVar5 = (undefined1 *)puVar6;
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
        puVar5 = (undefined1 *)puVar6;
      }
    }
  }
  pppppuVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppppuVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(pppppuVar2);
  if (pppppuVar3 != (undefined8 *****)0x0) {
    ppppuVar8 = pppppuVar3[1];
    _objc_retain(pppppuVar2);
    if (pppppuVar2 == (undefined8 *****)0x0) {
      pppppuVar3 = (undefined8 *****)&UNK_10f342d57;
    }
    else {
      pppppuVar3 = pppppuVar2;
      _objc_retainAutorelease(pppppuVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar2);
    func_0x00010002b838(auStack_e0,pppppuVar3);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    (*(code *)(*ppppuVar8)[3])(ppppuVar8,&UNK_1108ec9c0,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  pppppuVar3 = pppppuVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pppppuVar3;
  }
  ___stack_chk_fail();
  _objc_release(pppppuVar2);
  _objc_release(pppppuVar2);
  __Unwind_Resume();
  puStack_178 = PTR_PTR_1126ed480;
  pppppuVar2 = &ppppuStack_180;
  ppppuStack_180 = pppppuVar3;
  _objc_msgSendSuper2(pppppuVar2,PTR_s_initWithFrame__1125e2948);
  if (pppppuVar2 != (undefined8 *****)0x0) {
    pppppuVar3 = pppppuVar2;
    func_0x00010bf4dce0(pppppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d4c0();
    _objc_release(pppppuVar3);
    func_0x00010c17d4c0(pppppuVar2);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(pppppuVar2);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar9 = (long)_DAT_112737d34;
    uVar7 = *(undefined8 *)((long)pppppuVar2 + lVar9);
    *(undefined **)((long)pppppuVar2 + lVar9) = puVar4;
    _objc_release(uVar7);
    func_0x00010c219b60(*(undefined8 *)((long)pppppuVar2 + lVar9));
    pppppuVar3 = pppppuVar2;
    func_0x00010bf4dce0(pppppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(pppppuVar3);
    puVar4 = PTR_PTR_1126b52f0;
    _objc_opt_new();
    lVar10 = (long)_DAT_112737d38;
    uVar7 = *(undefined8 *)((long)pppppuVar2 + lVar10);
    *(undefined **)((long)pppppuVar2 + lVar10) = puVar4;
    _objc_release(uVar7);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar7 = *(undefined8 *)((long)pppppuVar2 + lVar10);
    func_0x00010c22a660(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(uVar7);
    _objc_release(puVar4);
    func_0x00010c219b60(*(undefined8 *)((long)pppppuVar2 + lVar10));
    func_0x00010befbb60(*(undefined8 *)((long)pppppuVar2 + lVar9));
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)pppppuVar2 + (long)_DAT_112737d3c);
    *(undefined **)((long)pppppuVar2 + (long)_DAT_112737d3c) = puVar4;
    _objc_release(uVar7);
    func_0x00010c160fc0(pppppuVar2);
    puVar4 = PTR_PTR_1126aea58;
    _objc_alloc();
    uVar11 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar12 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar13 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar14 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar11,uVar12,uVar13,uVar14);
    lVar10 = (long)_DAT_112737d40;
    uVar7 = *(undefined8 *)((long)pppppuVar2 + lVar10);
    *(undefined **)((long)pppppuVar2 + lVar10) = puVar4;
    _objc_release(uVar7);
    func_0x00010c219b60(*(undefined8 *)((long)pppppuVar2 + lVar10));
    func_0x00010c21ad00(*(undefined8 *)((long)pppppuVar2 + lVar10));
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)pppppuVar2 + lVar10));
    _objc_release(puVar4);
    func_0x00010c1cfce0(*(undefined8 *)((long)pppppuVar2 + lVar10));
    func_0x00010befbb60(*(undefined8 *)((long)pppppuVar2 + lVar9));
    puVar4 = PTR__OBJC_CLASS___UISwitch_1126b0680;
    _objc_alloc();
    func_0x00010c013de0(uVar11,uVar12,uVar13,uVar14);
    lVar10 = (long)_DAT_112737d44;
    uVar7 = *(undefined8 *)((long)pppppuVar2 + lVar10);
    *(undefined **)((long)pppppuVar2 + lVar10) = puVar4;
    _objc_release(uVar7);
    func_0x00010c219b60(*(undefined8 *)((long)pppppuVar2 + lVar10));
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4000(*(undefined8 *)((long)pppppuVar2 + lVar10));
    _objc_release(puVar4);
    _CGAffineTransformMakeScale(auStack_1b0,0x3fe999999999999a,0x3fe999999999999a);
    func_0x00010c219960(*(undefined8 *)((long)pppppuVar2 + lVar10));
    func_0x00010befbd60(*(undefined8 *)((long)pppppuVar2 + lVar10));
    func_0x00010befbb60(*(undefined8 *)((long)pppppuVar2 + lVar9));
    func_0x00010beabce0(pppppuVar2);
  }
  return pppppuVar2;
}



/* Entry: 105e40da8; end: 105e40f1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *** FUN_105e40da8(long param_1,undefined8 ***param_2,undefined8 param_3)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_130 [48];
  undefined8 **ppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 ***)0x0) {
      pppuVar1 = (undefined8 ***)&UNK_10f342d57;
    }
    else {
      pppuVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pppuVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_1108ec9c0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pppuVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppuVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puStack_f8 = PTR_PTR_1126ed480;
  pppuVar2 = &ppuStack_100;
  ppuStack_100 = pppuVar1;
  _objc_msgSendSuper2(pppuVar2,PTR_s_initWithFrame__1125e2948);
  if (pppuVar2 != (undefined8 ***)0x0) {
    pppuVar1 = pppuVar2;
    func_0x00010bf4dce0(pppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d4c0();
    _objc_release(pppuVar1);
    func_0x00010c17d4c0(pppuVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(pppuVar2);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar6 = (long)_DAT_112737d34;
    uVar4 = *(undefined8 *)((long)pppuVar2 + lVar6);
    *(undefined **)((long)pppuVar2 + lVar6) = puVar3;
    _objc_release(uVar4);
    func_0x00010c219b60(*(undefined8 *)((long)pppuVar2 + lVar6));
    pppuVar1 = pppuVar2;
    func_0x00010bf4dce0(pppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(pppuVar1);
    puVar3 = PTR_PTR_1126b52f0;
    _objc_opt_new();
    lVar7 = (long)_DAT_112737d38;
    uVar4 = *(undefined8 *)((long)pppuVar2 + lVar7);
    *(undefined **)((long)pppuVar2 + lVar7) = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar4 = *(undefined8 *)((long)pppuVar2 + lVar7);
    func_0x00010c22a660(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(uVar4);
    _objc_release(puVar3);
    func_0x00010c219b60(*(undefined8 *)((long)pppuVar2 + lVar7));
    func_0x00010befbb60(*(undefined8 *)((long)pppuVar2 + lVar6));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)pppuVar2 + (long)_DAT_112737d3c);
    *(undefined **)((long)pppuVar2 + (long)_DAT_112737d3c) = puVar3;
    _objc_release(uVar4);
    func_0x00010c160fc0(pppuVar2);
    puVar3 = PTR_PTR_1126aea58;
    _objc_alloc();
    uVar8 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
    lVar7 = (long)_DAT_112737d40;
    uVar4 = *(undefined8 *)((long)pppuVar2 + lVar7);
    *(undefined **)((long)pppuVar2 + lVar7) = puVar3;
    _objc_release(uVar4);
    func_0x00010c219b60(*(undefined8 *)((long)pppuVar2 + lVar7));
    func_0x00010c21ad00(*(undefined8 *)((long)pppuVar2 + lVar7));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)pppuVar2 + lVar7));
    _objc_release(puVar3);
    func_0x00010c1cfce0(*(undefined8 *)((long)pppuVar2 + lVar7));
    func_0x00010befbb60(*(undefined8 *)((long)pppuVar2 + lVar6));
    puVar3 = PTR__OBJC_CLASS___UISwitch_1126b0680;
    _objc_alloc();
    func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
    lVar7 = (long)_DAT_112737d44;
    uVar4 = *(undefined8 *)((long)pppuVar2 + lVar7);
    *(undefined **)((long)pppuVar2 + lVar7) = puVar3;
    _objc_release(uVar4);
    func_0x00010c219b60(*(undefined8 *)((long)pppuVar2 + lVar7));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4000(*(undefined8 *)((long)pppuVar2 + lVar7));
    _objc_release(puVar3);
    _CGAffineTransformMakeScale(auStack_130,0x3fe999999999999a,0x3fe999999999999a);
    func_0x00010c219960(*(undefined8 *)((long)pppuVar2 + lVar7));
    func_0x00010befbd60(*(undefined8 *)((long)pppuVar2 + lVar7));
    func_0x00010befbb60(*(undefined8 *)((long)pppuVar2 + lVar6));
    func_0x00010beabce0(pppuVar2);
  }
  return pppuVar2;
}



/* Entry: 105e40f1c; end: 105e4126b; -[SCSendToCreatorsConfigurableViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_105e40f1c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_b0 [48];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126ed480;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d4c0();
    _objc_release(puVar2);
    func_0x00010c17d4c0(puVar1);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar5 = (long)_DAT_112737d34;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar3;
    _objc_release(uVar4);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    puVar3 = PTR_PTR_1126b52f0;
    _objc_opt_new();
    lVar6 = (long)_DAT_112737d38;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c22a660(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(uVar4);
    _objc_release(puVar3);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112737d3c);
    *(undefined **)((long)puVar1 + (long)_DAT_112737d3c) = puVar3;
    _objc_release(uVar4);
    func_0x00010c160fc0(puVar1);
    puVar3 = PTR_PTR_1126aea58;
    _objc_alloc();
    uVar7 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar7,uVar8,uVar9,uVar10);
    lVar6 = (long)_DAT_112737d40;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar3;
    _objc_release(uVar4);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar6));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar3);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = PTR__OBJC_CLASS___UISwitch_1126b0680;
    _objc_alloc();
    func_0x00010c013de0(uVar7,uVar8,uVar9,uVar10);
    lVar6 = (long)_DAT_112737d44;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar3;
    _objc_release(uVar4);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar6));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4000(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar3);
    _CGAffineTransformMakeScale(auStack_b0,0x3fe999999999999a,0x3fe999999999999a);
    func_0x00010c219960(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010beabce0(puVar1);
  }
  return puVar1;
}



/* Entry: 105e4126c; end: 105e418ff; -[SCSendToCreatorsConfigurableViewCell _setupContraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4126c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined *puVar47;
  undefined *puVar48;
  ulong uVar49;
  ulong uVar50;
  long lVar51;
  long lVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  long lVar55;
  long lVar56;
  
  lVar51 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar52 = (long)_DAT_112737d48;
  if (*(long *)(param_1 + lVar52) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  }
  lVar55 = (long)_DAT_112737d34;
  uVar2 = *(undefined8 *)(param_1 + lVar55);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar54 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar55);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar55);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar55);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar13;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar56 = (long)_DAT_112737d38;
  uVar17 = *(undefined8 *)(param_1 + lVar56);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar55);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar17;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + lVar56);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar55);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + lVar56);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + lVar55);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar23;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_1 + lVar56);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(param_1 + lVar55);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar26;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar56 = (long)_DAT_112737d40;
  uVar29 = *(undefined8 *)(param_1 + lVar56);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = *(undefined8 *)(param_1 + lVar55);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar29;
  func_0x00010bf493c0(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar32 = *(undefined8 *)(param_1 + lVar56);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = *(undefined8 *)(param_1 + lVar55);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar32;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = *(undefined8 *)(param_1 + lVar56);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = *(undefined8 *)(param_1 + lVar55);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = uVar35;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = *(undefined8 *)(param_1 + lVar56);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar56 = (long)_DAT_112737d44;
  uVar39 = *(undefined8 *)(param_1 + lVar56);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar40 = uVar38;
  func_0x00010bf493c0(0xc028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar41 = *(undefined8 *)(param_1 + lVar56);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar42 = *(undefined8 *)(param_1 + lVar55);
  func_0x00010c2793a0(uVar42);
  _objc_retainAutoreleasedReturnValue();
  uVar43 = uVar41;
  func_0x00010bf493c0(0xc028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar44 = *(undefined8 *)(param_1 + lVar56);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar45 = *(undefined8 *)(param_1 + lVar55);
  func_0x00010bf348e0(uVar45);
  _objc_retainAutoreleasedReturnValue();
  uVar46 = uVar44;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar47 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar53 = *(undefined8 *)(param_1 + lVar52);
  *(undefined **)(param_1 + lVar52) = puVar47;
  _objc_release(uVar53);
  _objc_release(uVar46);
  _objc_release(uVar45);
  _objc_release(uVar44);
  _objc_release(uVar43);
  _objc_release(uVar42);
  _objc_release(uVar41);
  _objc_release(uVar40);
  _objc_release(uVar39);
  _objc_release(uVar38);
  _objc_release(uVar37);
  _objc_release(uVar36);
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar54);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  uVar50 = *(ulong *)(param_1 + lVar52);
  puVar47 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x00010beef8c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar51) {
    ___stack_chk_fail();
    _objc_retain(uVar50);
    if (uVar50 != 0) {
      puVar48 = PTR_PTR_1126b52c8;
      _objc_opt_class(PTR_PTR_1126b52c8);
      uVar49 = uVar50;
      _objc_opt_isKindOfClass(uVar50,puVar48);
      uVar1 = uVar50;
      if ((uVar49 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      lVar51 = (long)_DAT_112737d4c;
      uVar49 = uVar1;
      FUN_105e423bc(uVar1,*(undefined8 *)(puVar47 + lVar51));
      if ((uVar49 & 1) == 0) {
        uVar49 = uVar1;
        func_0x00010bf51e00();
        uVar54 = *(undefined8 *)(puVar47 + lVar51);
        *(ulong *)(puVar47 + lVar51) = uVar49;
        _objc_release(uVar54);
        uVar49 = uVar1;
        func_0x00010c26b700(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c212f20(*(undefined8 *)(puVar47 + _DAT_112737d40));
        _objc_release(uVar49);
        func_0x00010bf6a860(uVar1);
        lVar51 = (long)_DAT_112737d44;
        func_0x00010c1d1360(*(undefined8 *)(puVar47 + lVar51));
        func_0x00010c070a80(uVar1);
        func_0x00010c195460(*(undefined8 *)(puVar47 + lVar51));
        uVar49 = uVar1;
        func_0x00010c265500(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c160fc0(*(undefined8 *)(puVar47 + lVar51));
        _objc_release(uVar49);
        uVar49 = uVar1;
        func_0x00010beecec0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c160fc0(puVar47);
        _objc_release(uVar49);
        uVar49 = uVar1;
        func_0x00010c272960();
        _objc_retainAutoreleasedReturnValue();
        uVar54 = *(undefined8 *)(puVar47 + _DAT_112737d50);
        *(ulong *)(puVar47 + _DAT_112737d50) = uVar49;
        _objc_release(uVar54);
        uVar49 = uVar1;
        func_0x00010bfbbf20();
        puVar47[_DAT_112737d54] = (char)uVar49;
        uVar49 = uVar1;
        func_0x00010c076140();
        if ((int)uVar49 != 0) {
          func_0x00010c1ee980(puVar47);
        }
        func_0x00010c1fce20(puVar47);
        func_0x00010beabce0(puVar47);
        func_0x00010c1cbe20(puVar47);
      }
      _objc_release(uVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar50);
    return;
  }
  return;
}



/* Entry: 105e41900; end: 105e41ac3; -[SCSendToCreatorsConfigurableViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e41900(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puVar2 = PTR_PTR_1126b52c8;
    _objc_opt_class(PTR_PTR_1126b52c8);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    lVar5 = (long)_DAT_112737d4c;
    uVar3 = uVar1;
    FUN_105e423bc(uVar1,*(undefined8 *)(param_1 + lVar5));
    if ((uVar3 & 1) == 0) {
      uVar3 = uVar1;
      func_0x00010bf51e00();
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      *(ulong *)(param_1 + lVar5) = uVar3;
      _objc_release(uVar4);
      uVar3 = uVar1;
      func_0x00010c26b700(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112737d40));
      _objc_release(uVar3);
      func_0x00010bf6a860(uVar1);
      lVar5 = (long)_DAT_112737d44;
      func_0x00010c1d1360(*(undefined8 *)(param_1 + lVar5));
      func_0x00010c070a80(uVar1);
      func_0x00010c195460(*(undefined8 *)(param_1 + lVar5));
      uVar3 = uVar1;
      func_0x00010c265500(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar5));
      _objc_release(uVar3);
      uVar3 = uVar1;
      func_0x00010beecec0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c160fc0(param_1);
      _objc_release(uVar3);
      uVar3 = uVar1;
      func_0x00010c272960();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + _DAT_112737d50);
      *(ulong *)(param_1 + _DAT_112737d50) = uVar3;
      _objc_release(uVar4);
      uVar3 = uVar1;
      func_0x00010bfbbf20();
      *(char *)(param_1 + _DAT_112737d54) = (char)uVar3;
      uVar3 = uVar1;
      func_0x00010c076140();
      if ((int)uVar3 != 0) {
        func_0x00010c1ee980(param_1);
      }
      func_0x00010c1fce20(param_1);
      func_0x00010beabce0(param_1);
      func_0x00010c1cbe20(param_1);
    }
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e41ac4; end: 105e41acf; +[SCSendToCreatorsConfigurableViewCell sizeWithViewModel:constrainedToSize:] */

void FUN_105e41ac4(void)

{
  return;
}



/* Entry: 105e41ad0; end: 105e41b07; -[SCSendToCreatorsConfigurableViewCell setRoundedCorners:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e41ad0(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf20c00(*(undefined8 *)(param_1 + _DAT_112737d38));
                    /* WARNING: Could not recover jumptable at 0x00010bea6e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setRoundedCorners_roundedRect__112587540,param_3);
  return;
}



/* Entry: 105e41b08; end: 105e41c3b; -[SCSendToCreatorsConfigurableViewCell _setRoundedCorners:roundedRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e41b08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,long param_7)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar2 = (long)_DAT_112737d58;
  lVar6 = (long)_DAT_112737d5c;
  if (*(long *)(param_5 + lVar2) == param_7) {
    puVar1 = (undefined8 *)(param_5 + lVar6);
    uVar3 = param_5;
    _CGRectEqualToRect(param_1,param_2,param_3,param_4,*puVar1,puVar1[1],puVar1[2],puVar1[3]);
    if ((uVar3 & 1) != 0) {
      return;
    }
  }
  puVar1 = (undefined8 *)(param_5 + lVar6);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  *(long *)(param_5 + lVar2) = param_7;
  puVar4 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  lVar6 = (long)_DAT_112737d38;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar6));
  func_0x00010bf199e0(puVar4,param_6,*(undefined8 *)(param_5 + lVar2));
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  uVar5 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010c22a660(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105e41c3c; end: 105e41ce3; -[SCSendToCreatorsConfigurableViewCell setSeparatorMask:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e41c3c(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112737d60;
  if (*(ulong *)(param_1 + lVar1) != param_3) {
    *(ulong *)(param_1 + lVar1) = param_3;
    if ((param_3 & 1) != 0) {
      func_0x00010be3a920(param_1);
    }
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112737d64));
    if ((*(byte *)(param_1 + lVar1) >> 1 & 1) != 0) {
      func_0x00010be39620(param_1);
    }
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112737d68));
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
    return;
  }
  return;
}



/* Entry: 105e41ce4; end: 105e41d6b; -[SCSendToCreatorsConfigurableViewCell setSeparatorColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e41ce4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112737d3c;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = param_3;
    _objc_release(uVar2);
    func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_112737d64),param_2,
                        *(undefined8 *)(param_1 + lVar3));
    func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_112737d68),param_2,
                        *(undefined8 *)(param_1 + lVar3));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e41d6c; end: 105e41def; -[SCSendToCreatorsConfigurableViewCell _initTopSeparatorIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e41d6c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112737d64;
  if (*(long *)(param_1 + lVar3) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112737d34),PTR_s_addSubview__11259c880,
             *(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 105e41df0; end: 105e41e73; -[SCSendToCreatorsConfigurableViewCell _initBottomSeparatorIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e41df0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112737d68;
  if (*(long *)(param_1 + lVar3) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112737d34),PTR_s_addSubview__11259c880,
             *(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 105e41e74; end: 105e41ee3; -[SCSendToCreatorsConfigurableViewCell applyLayoutAttributes:] */

void FUN_105e41e74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_applyLayoutAttributes__112527ed0;
  puStack_38 = PTR_PTR_1126ed480;
  uStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  func_0x000108fdaa20(param_1,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 105e41ee4; end: 105e41f57; -[SCSendToCreatorsConfigurableViewCell _toggleSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e41ee4(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112737d50;
  if (*(long *)(param_1 + lVar3) != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112737d44);
    func_0x00010c071800();
    if (iVar1 != 0) {
      lVar3 = *(long *)(param_1 + lVar3);
      uVar2 = param_3;
      func_0x00010c079040(param_3);
      (**(code **)(lVar3 + 0x10))(lVar3,uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e41f58; end: 105e4225b; -[SCSendToCreatorsConfigurableViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e41f58(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  long lStack_a0;
  undefined *puStack_98;
  
  puStack_98 = PTR_PTR_1126ed480;
  lStack_a0 = param_5;
  _objc_msgSendSuper2(&lStack_a0,PTR_s_layoutSubviews_112600e60);
  lVar6 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar15 = param_1;
  dVar16 = param_2;
  dVar14 = param_3;
  dVar17 = param_4;
  _objc_release(lVar6);
  lVar6 = (long)_DAT_112737d60;
  uVar5 = (uint)*(ulong *)(param_5 + lVar6);
  dVar9 = 0.0;
  if ((*(ulong *)(param_5 + lVar6) & 1) != 0) {
    func_0x00010b816670();
    uVar5 = (uint)*(undefined8 *)(param_5 + lVar6);
    dVar9 = dVar15;
  }
  param_3 = param_3 + -32.0;
  dVar15 = param_3;
  dVar10 = 0.0;
  if ((uVar5 >> 1 & 1) != 0) {
    func_0x00010b816670();
    dVar10 = dVar15;
  }
  lVar1 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar15 = dVar15 + 0.0;
  dVar16 = dVar9 + dVar16;
  dVar17 = dVar17 - (dVar9 + dVar10);
  _objc_release(lVar1);
  lVar8 = (long)_DAT_112737d34;
  func_0x00010c19f0e0(dVar15,dVar16,dVar14,dVar17,*(undefined8 *)(param_5 + lVar8));
  lVar7 = (long)_DAT_112737d38;
  uVar2 = *(undefined8 *)(param_5 + lVar7);
  func_0x00010c22a660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar2);
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar7));
  func_0x00010bea6e60(param_5);
  lVar1 = param_5;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(param_5 + lVar8);
  _objc_release();
  _objc_release(lVar3);
  _objc_release(lVar1);
  if (lVar4 != lVar8) {
    lVar1 = param_5;
    func_0x00010bf4dce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15cda0();
    _objc_release(lVar1);
  }
  func_0x000108fe9e04(0,0x3ff0000000000000,0x4018000000000000,0x3faeb851eb851eb8,
                      *(undefined8 *)(param_5 + lVar7));
  uVar5 = (uint)*(ulong *)(param_5 + lVar6);
  if ((*(ulong *)(param_5 + lVar6) & 1) != 0) {
    dVar9 = dVar15;
    _CGRectGetMinX(dVar15,dVar16,dVar14,dVar17);
    dVar10 = dVar15;
    _CGRectGetMinY(dVar15,dVar16,dVar14,dVar17);
    dVar11 = dVar10;
    func_0x00010b816670();
    dVar12 = dVar15;
    _CGRectGetWidth(dVar15,dVar16,dVar14,dVar17);
    dVar13 = dVar12;
    func_0x00010b816670();
    func_0x00010b816528(dVar9,dVar10 - dVar11,dVar12,dVar13);
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_112737d64));
    uVar5 = (uint)*(undefined8 *)(param_5 + lVar6);
  }
  if ((uVar5 >> 1 & 1) != 0) {
    dVar9 = dVar15;
    _CGRectGetMinX(dVar15,dVar16,dVar14,dVar17);
    _CGRectGetMaxY(dVar15,dVar16,dVar14,dVar17);
    func_0x00010b816528(dVar9,dVar15 + -1.0,param_3,0x3ff0000000000000);
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_112737d68));
  }
  return;
}



/* Entry: 105e4225c; end: 105e4226b; -[SCSendToCreatorsConfigurableViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105e4225c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112737d6c);
}



/* Entry: 105e4226c; end: 105e422ab; -[SCSendToCreatorsConfigurableViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e4226c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112737d6c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e422ac; end: 105e422bb; -[SCSendToCreatorsConfigurableViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105e422ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112737d4c);
}



/* Entry: 105e422bc; end: 105e422cb; -[SCSendToCreatorsConfigurableViewCell roundedCorners] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105e422bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112737d58);
}



/* Entry: 105e422cc; end: 105e422db; -[SCSendToCreatorsConfigurableViewCell separatorMask] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105e422cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112737d60);
}



/* Entry: 105e422dc; end: 105e422eb; -[SCSendToCreatorsConfigurableViewCell separatorColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105e422dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112737d3c);
}



/* Entry: 105e422ec; end: 105e423bb; -[SCSendToCreatorsConfigurableViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e422ec(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112737d3c,0);
  _objc_storeStrong(param_1 + _DAT_112737d4c,0);
  _objc_storeStrong(param_1 + _DAT_112737d6c,0);
  _objc_storeStrong(param_1 + _DAT_112737d50,0);
  _objc_storeStrong(param_1 + _DAT_112737d48,0);
  _objc_storeStrong(param_1 + _DAT_112737d44,0);
  _objc_storeStrong(param_1 + _DAT_112737d40,0);
  _objc_storeStrong(param_1 + _DAT_112737d68,0);
  _objc_storeStrong(param_1 + _DAT_112737d64,0);
  _objc_storeStrong(param_1 + _DAT_112737d38,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112737d34,0);
  return;
}



/* Entry: 105e423bc; end: 105e4256b;  */

uint FUN_105e423bc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar9 = 0;
  if ((param_1 == 0) || (param_2 == 0)) goto LAB_105e4251c;
  lVar1 = param_1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010c26b700(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0720c0();
  if ((int)lVar3 == 0) {
    uVar9 = 0;
  }
  else {
    lVar3 = param_1;
    func_0x00010beecec0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010beecec0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c0720c0();
    if ((int)lVar5 == 0) {
      uVar9 = 0;
    }
    else {
      lVar5 = param_1;
      func_0x00010c265500();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_2;
      func_0x00010c265500(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar5;
      func_0x00010c0720c0();
      if ((int)lVar7 == 0) {
LAB_105e424d8:
        uVar9 = 0;
      }
      else {
        lVar7 = param_1;
        func_0x00010bf6a860();
        lVar8 = param_2;
        func_0x00010bf6a860();
        if ((int)lVar7 != (int)lVar8) goto LAB_105e424d8;
        lVar7 = param_1;
        func_0x00010c070a80();
        lVar8 = param_2;
        func_0x00010c070a80();
        if ((int)lVar7 != (int)lVar8) goto LAB_105e424d8;
        lVar7 = param_1;
        func_0x00010c076140(param_1);
        lVar8 = param_2;
        func_0x00010c076140(param_2);
        uVar9 = (uint)lVar7 ^ (uint)lVar8 ^ 1;
      }
      _objc_release(lVar6);
      _objc_release(lVar5);
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
LAB_105e4251c:
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar9;
}



/* Entry: 105e4256c; end: 105e426a7; -[SCSendToCreatorsConfigurableViewCellViewModel initWithText:accessibilityIdentifier:switchAccessibilityIdentifier:defaultToggleValue:isDisabled:toggleHandler:isLastRow:fullyRoundedCorners:] */

undefined1 *
FUN_105e4256c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
             undefined4 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126ed488;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
    uVar2 = param_8;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 10) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 0xb) = param_9._1_1_;
  }
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e426a8; end: 105e426cb; -[SCSendToCreatorsConfigurableViewCellViewModel copyWithZone:] */

undefined8 FUN_105e426a8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105e426cc; end: 105e426d3; -[SCSendToCreatorsConfigurableViewCellViewModel text] */

undefined8 FUN_105e426cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105e426d4; end: 105e426db; -[SCSendToCreatorsConfigurableViewCellViewModel accessibilityIdentifier] */

undefined8 FUN_105e426d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105e426dc; end: 105e426e3; -[SCSendToCreatorsConfigurableViewCellViewModel switchAccessibilityIdentifier] */

undefined8 FUN_105e426dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105e426e4; end: 105e426eb; -[SCSendToCreatorsConfigurableViewCellViewModel defaultToggleValue] */

undefined1 FUN_105e426e4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105e426ec; end: 105e426f3; -[SCSendToCreatorsConfigurableViewCellViewModel isDisabled] */

undefined1 FUN_105e426ec(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 105e426f4; end: 105e426fb; -[SCSendToCreatorsConfigurableViewCellViewModel toggleHandler] */

undefined8 FUN_105e426f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105e426fc; end: 105e42703; -[SCSendToCreatorsConfigurableViewCellViewModel isLastRow] */

undefined1 FUN_105e426fc(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 105e42704; end: 105e4270b; -[SCSendToCreatorsConfigurableViewCellViewModel fullyRoundedCorners] */

undefined1 FUN_105e42704(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 105e4270c; end: 105e42753; -[SCSendToCreatorsConfigurableViewCellViewModel .cxx_destruct] */

void FUN_105e4270c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105e42754; end: 105e427db; -[SCSendToPlaceTagCarouselDataModel initWithIsLastRow:isFullScreenEnabled:] */

undefined1 *
FUN_105e42754(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ed490;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e427dc; end: 105e427ff; -[SCSendToPlaceTagCarouselDataModel copyWithZone:] */

undefined8 FUN_105e427dc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105e42800; end: 105e4286b; -[SCSendToPlaceTagCarouselDataModel hash] */

undefined8 * FUN_105e42800(long param_1,undefined8 param_2,undefined8 *param_3)

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
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
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
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105e428f0;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(char *)(puVar2 + 1) != *(char *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_105e428f0;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_105e428f0;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_105e428f0:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 105e4286c; end: 105e4290b; -[SCSendToPlaceTagCarouselDataModel isEqual:] */

long FUN_105e4286c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105e428f0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_105e428f0;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_105e428f0;
    }
  }
  lVar3 = 1;
LAB_105e428f0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105e4290c; end: 105e42913; -[SCSendToPlaceTagCarouselDataModel isLastRow] */

undefined8 FUN_105e4290c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105e42914; end: 105e4291b; -[SCSendToPlaceTagCarouselDataModel isFullScreenEnabled] */

undefined1 FUN_105e42914(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105e4291c; end: 105e42927; -[SCSendToPlaceTagCarouselDataModel .cxx_destruct] */

void FUN_105e4291c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105e42928; end: 105e42933; +[SCSelectionLastSnapSectionDataProvider announcerIdentifier] */

undefined ** FUN_105e42928(void)

{
  return &PTR____CFConstantStringClassReference_110e2c158;
}



/* Entry: 105e42934; end: 105e4293b; -[SCSelectionLastSnapSectionDataProvider addListener:] */

void FUN_105e42934(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 105e4293c; end: 105e42943; -[SCSelectionLastSnapSectionDataProvider removeListener:] */

void FUN_105e4293c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105e42944; end: 105e42bcb; -[SCSelectionLastSnapSectionDataProvider initWithDataSource:sectionIdentifier:selectionTracker:isCondensed:sendToExperimentConfiguration:sendToUIConfiguration:renderingTracker:] */

undefined8 *
FUN_105e42944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126ed498;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined2 *)(puVar1 + 4) = 0x100;
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar5 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar5);
    uVar5 = puVar1[2];
    puVar1[2] = &PTR____CFConstantStringClassReference_110e2c138;
    _objc_release(uVar5);
    _objc_retain(param_5);
    uVar5 = puVar1[8];
    puVar1[8] = param_5;
    _objc_release(uVar5);
    _objc_retain(param_3);
    uVar5 = puVar1[7];
    puVar1[7] = param_3;
    _objc_release(uVar5);
    _objc_retain(param_4);
    uVar5 = puVar1[9];
    puVar1[9] = param_4;
    _objc_release(uVar5);
    *(undefined1 *)(puVar1 + 0xd) = param_6;
    puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    _objc_opt_new();
    uVar5 = puVar1[0xb];
    puVar1[0xb] = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = puVar1[10];
    puVar1[10] = puVar2;
    _objc_release(uVar5);
    puVar4 = PTR_PTR_1126ae6b8;
    puVar3 = PTR_PTR_1126b5628;
    _objc_alloc(PTR_PTR_1126b5628);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _CACurrentMediaTime();
    func_0x00010c0df720(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c043280(puVar3);
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0xe];
    puVar1[0xe] = puVar4;
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_retain(param_7);
    uVar5 = puVar1[0xf];
    puVar1[0xf] = param_7;
    _objc_release(uVar5);
    _objc_retain(param_8);
    uVar5 = puVar1[0x10];
    puVar1[0x10] = param_8;
    _objc_release(uVar5);
    _objc_retain(param_9);
    uVar5 = puVar1[0x11];
    puVar1[0x11] = param_9;
    _objc_release(uVar5);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105e42bcc; end: 105e42c3f; -[SCSelectionLastSnapSectionDataProvider setUpdateQueuePerformer:] */

void FUN_105e42bcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21b4a0(*(undefined8 *)(param_1 + 0x58),param_2,uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e42c40; end: 105e42d57; -[SCSelectionLastSnapSectionDataProvider setUp] */

void FUN_105e42c40(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  *(undefined1 *)(param_1 + 0x21) = 1;
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf6d420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105e42d58; end: 105e42d83;  */

void FUN_105e42d58(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed4f80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e42d84; end: 105e42d8b; -[SCSelectionLastSnapSectionDataProvider tearDown] */

void FUN_105e42d84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x50),PTR_s_disposeAll_1125bf508)
  ;
  return;
}



/* Entry: 105e42d8c; end: 105e42e73; -[SCSelectionLastSnapSectionDataProvider setSectionDataModel:] */

void FUN_105e42d8c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b5240;
  _objc_opt_class(PTR_PTR_1126b5240);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR_PTR_1126b5240;
  _objc_alloc();
  uVar3 = uVar1;
  func_0x00010c11d080(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c155ea0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c043240();
  uVar5 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined **)(param_1 + 0xa0) = puVar2;
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010bed4f80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e42e74; end: 105e42e7b; -[SCSelectionLastSnapSectionDataProvider dataLoadingStatus] */

undefined8 FUN_105e42e74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 105e42e7c; end: 105e42e83; -[SCSelectionLastSnapSectionDataProvider numberOfItemsInSection:] */

void FUN_105e42e7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_count_1125b2420);
  return;
}



/* Entry: 105e42e84; end: 105e42eab; -[SCSelectionLastSnapSectionDataProvider containerCellViewModels] */

void FUN_105e42e84(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e42eac; end: 105e42ec3; -[SCSelectionLastSnapSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_105e42eac(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e42ec4; end: 105e42f3f; -[SCSelectionLastSnapSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_105e42ec4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_a0;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    *(undefined8 *)(puVar1 + 0x60) = 1;
    if (*(long *)(puVar1 + 0x28) == 0) {
      uVar2 = *(undefined8 *)(puVar1 + 0x38);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar2;
      func_0x00010c089fe0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(puVar1 + 0x28);
      *(undefined8 *)(puVar1 + 0x28) = uVar13;
      _objc_release(uVar12);
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(puVar1 + 0x38);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar2;
      func_0x00010c08a120();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(puVar1 + 0x30);
      *(undefined8 *)(puVar1 + 0x30) = uVar13;
      _objc_release(uVar12);
      _objc_release(uVar2);
    }
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lVar4 = *(long *)(puVar1 + 0x28);
    func_0x00010bf51e00();
    lStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    plStack_1d0 = (long *)0x0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    _objc_retain();
    lVar11 = lVar4;
    func_0x00010bf52a60();
    if (lVar11 != 0) {
      lVar18 = *plStack_1d0;
      do {
        puVar7 = PTR_s_recipient_1126264c0;
        lVar14 = 0;
        do {
          if (*plStack_1d0 != lVar18) {
            _objc_enumerationMutation(lVar4);
          }
          uVar16 = *(ulong *)(lStack_1d8 + lVar14 * 8);
          uVar5 = uVar16;
          _objc_opt_respondsToSelector(uVar16,puVar7);
          if ((uVar5 & 1) != 0) {
            uVar5 = uVar16;
            func_0x00010c122a80();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar5;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(uVar5);
            if (uVar6 != 0) {
              func_0x00010c122a80(uVar16);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar16;
              func_0x00010bfe5ec0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar3);
              _objc_release(uVar5);
              _objc_release(uVar16);
            }
          }
          lVar14 = lVar14 + 1;
        } while (lVar11 != lVar14);
        lVar11 = lVar4;
        func_0x00010bf52a60();
      } while (lVar11 != 0);
    }
    _objc_release(lVar4);
    lVar14 = *(long *)(puVar1 + 0x40);
    puVar7 = puVar3;
    func_0x00010bf51e00(puVar3);
    func_0x00010c15aa20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    lStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    plStack_210 = (long *)0x0;
    lVar11 = lVar14;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = &uStack_220;
    lVar18 = lVar11;
    func_0x00010bf52a60();
    if (lVar18 != 0) {
      lVar15 = *plStack_210;
      do {
        lVar19 = 0;
        do {
          if (*plStack_210 != lVar15) {
            _objc_enumerationMutation(lVar11);
          }
          puVar10 = *(undefined8 **)(lStack_218 + lVar19 * 8);
          lVar8 = lVar14;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar8;
          func_0x00010bf1f3c0();
          _objc_release(lVar8);
          if ((int)lVar9 == 0) {
            puVar17 = (undefined8 *)0x0;
            goto LAB_105e4321c;
          }
          lVar19 = lVar19 + 1;
        } while (lVar18 != lVar19);
        puVar10 = &uStack_220;
        lVar18 = lVar11;
        func_0x00010bf52a60();
      } while (lVar18 != 0);
    }
    puVar17 = (undefined8 *)0x1;
LAB_105e4321c:
    _objc_release(lVar11);
    if (((uint)(byte)puVar1[0x20] == (uint)puVar17) && ((puVar1[0x21] & 1) == 0)) {
      *(undefined8 *)(puVar1 + 0x60) = 2;
    }
    else {
      puVar1[0x21] = 0;
      puVar1[0x20] = (char)puVar17;
      func_0x00010bea29a0(puVar1);
      puVar10 = puVar17;
    }
    _objc_release(lVar14);
    _objc_release(lVar4);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
      return;
    }
    ___stack_chk_fail();
    lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar11 = *(long *)(puVar3 + 0x48);
    FUN_105e43938(lVar11,*(undefined8 *)(puVar3 + 0x30),*(undefined8 *)(puVar3 + 0x28),puVar10,
                  puVar3[0x68],1);
    _objc_retainAutoreleasedReturnValue();
    if (lVar11 != 0) {
      puVar7 = PTR_PTR_1126aea98;
      _objc_alloc();
      func_0x00010bffd260();
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(puVar3 + 0x18);
      *(undefined **)(puVar3 + 0x18) = puVar1;
      _objc_release(uVar13);
      *(undefined8 *)(puVar3 + 0x60) = 2;
      puVar1 = puVar3 + 0x90;
      _objc_loadWeakRetained(puVar1);
      func_0x00010c155aa0();
      _objc_release(puVar1);
      func_0x00010bf790c0(*(undefined8 *)(puVar3 + 0x88));
      _objc_release(puVar7);
    }
    _objc_release(lVar11);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
      return;
    }
    ___stack_chk_fail();
    _objc_loadWeakRetained(lVar11 + 0x90);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e42f40; end: 105e432ab; -[SCSelectionLastSnapSectionDataProvider _updateCellSelectedState] */

void FUN_105e42f40(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(param_1 + 0x60) = 1;
  if (*(long *)(param_1 + 0x28) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar1;
    func_0x00010c089fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar13;
    _objc_release(uVar12);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar1;
    func_0x00010c08a120();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = uVar13;
    _objc_release(uVar12);
    _objc_release(uVar1);
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar3 = *(long *)(param_1 + 0x28);
  func_0x00010bf51e00();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain();
  lVar9 = lVar3;
  func_0x00010bf52a60();
  if (lVar9 != 0) {
    lVar18 = *plStack_1a0;
    do {
      puVar6 = PTR_s_recipient_1126264c0;
      lVar14 = 0;
      do {
        if (*plStack_1a0 != lVar18) {
          _objc_enumerationMutation(lVar3);
        }
        uVar16 = *(ulong *)(lStack_1a8 + lVar14 * 8);
        uVar4 = uVar16;
        _objc_opt_respondsToSelector(uVar16,puVar6);
        if ((uVar4 & 1) != 0) {
          uVar4 = uVar16;
          func_0x00010c122a80();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(uVar4);
          if (uVar5 != 0) {
            func_0x00010c122a80(uVar16);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar16;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar2);
            _objc_release(uVar4);
            _objc_release(uVar16);
          }
        }
        lVar14 = lVar14 + 1;
      } while (lVar9 != lVar14);
      lVar9 = lVar3;
      func_0x00010bf52a60();
    } while (lVar9 != 0);
  }
  _objc_release(lVar3);
  lVar14 = *(long *)(param_1 + 0x40);
  puVar6 = puVar2;
  func_0x00010bf51e00(puVar2);
  func_0x00010c15aa20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  lVar9 = lVar14;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = &uStack_1f0;
  lVar18 = lVar9;
  func_0x00010bf52a60();
  if (lVar18 != 0) {
    lVar15 = *plStack_1e0;
    do {
      lVar19 = 0;
      do {
        if (*plStack_1e0 != lVar15) {
          _objc_enumerationMutation(lVar9);
        }
        puVar11 = *(undefined8 **)(lStack_1e8 + lVar19 * 8);
        lVar7 = lVar14;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010bf1f3c0();
        _objc_release(lVar7);
        if ((int)lVar8 == 0) {
          puVar17 = (undefined8 *)0x0;
          goto LAB_105e4321c;
        }
        lVar19 = lVar19 + 1;
      } while (lVar18 != lVar19);
      puVar11 = &uStack_1f0;
      lVar18 = lVar9;
      func_0x00010bf52a60();
    } while (lVar18 != 0);
  }
  puVar17 = (undefined8 *)0x1;
LAB_105e4321c:
  _objc_release(lVar9);
  if (((uint)*(byte *)(param_1 + 0x20) == (uint)puVar17) && ((*(byte *)(param_1 + 0x21) & 1) == 0))
  {
    *(undefined8 *)(param_1 + 0x60) = 2;
  }
  else {
    *(undefined1 *)(param_1 + 0x21) = 0;
    *(char *)(param_1 + 0x20) = (char)puVar17;
    func_0x00010bea29a0(param_1);
    puVar11 = puVar17;
  }
  _objc_release(lVar14);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)(puVar2 + 0x48);
  FUN_105e43938(lVar9,*(undefined8 *)(puVar2 + 0x30),*(undefined8 *)(puVar2 + 0x28),puVar11,
                puVar2[0x68],1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar9 != 0) {
    puVar10 = PTR_PTR_1126aea98;
    _objc_alloc();
    func_0x00010bffd260();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(puVar2 + 0x18);
    *(undefined **)(puVar2 + 0x18) = puVar6;
    _objc_release(uVar13);
    *(undefined8 *)(puVar2 + 0x60) = 2;
    puVar6 = puVar2 + 0x90;
    _objc_loadWeakRetained(puVar6);
    func_0x00010c155aa0();
    _objc_release(puVar6);
    func_0x00010bf790c0(*(undefined8 *)(puVar2 + 0x88));
    _objc_release(puVar10);
  }
  _objc_release(lVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained(lVar9 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e432ac; end: 105e433bb; -[SCSelectionLastSnapSectionDataProvider _setCellIsSelected:] */

void FUN_105e432ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x48);
  FUN_105e43938(lVar1,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28),param_3,
                *(undefined1 *)(param_1 + 0x68),1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126aea98;
    _objc_alloc();
    func_0x00010bffd260();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar3;
    _objc_release(uVar6);
    *(undefined8 *)(param_1 + 0x60) = 2;
    lVar4 = param_1 + 0x90;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c155aa0();
    _objc_release(lVar4);
    func_0x00010bf790c0(*(undefined8 *)(param_1 + 0x88));
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained(lVar1 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e433bc; end: 105e433d3; -[SCSelectionLastSnapSectionDataProvider dataProviderDelegate] */

void FUN_105e433bc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e433d4; end: 105e433df; -[SCSelectionLastSnapSectionDataProvider setDataProviderDelegate:] */

void FUN_105e433d4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x90,param_3);
  return;
}



/* Entry: 105e433e0; end: 105e433e7; -[SCSelectionLastSnapSectionDataProvider updateQueuePerformer] */

undefined8 FUN_105e433e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 105e433e8; end: 105e433ef; -[SCSelectionLastSnapSectionDataProvider sectionDataModel] */

undefined8 FUN_105e433e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 105e433f0; end: 105e433f7; -[SCSelectionLastSnapSectionDataProvider sectionDataTrackerObservable] */

undefined8 FUN_105e433f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 105e433f8; end: 105e434d7; -[SCSelectionLastSnapSectionDataProvider .cxx_destruct] */

void FUN_105e433f8(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_destroyWeak(param_1 + 0x90);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e434d8; end: 105e43653; -[SCSendToLastSnapSectionCreator initWithSectionIdentifiers:dataSource:selectionTracker:actionHandler:sendToExperimentConfiguration:sendToUIConfiguration:renderingTracker:] */

undefined1 *
FUN_105e434d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126ed4a0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e43654; end: 105e437af; -[SCSendToLastSnapSectionCreator sectionForDescriptor:] */

void FUN_105e43654(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c089fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 == 0) {
    param_1 = 0;
  }
  else {
    uVar5 = param_3;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b1700;
    _objc_opt_class(PTR_PTR_1126b1700);
    uVar7 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar6);
    uVar1 = uVar5;
    if ((uVar7 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar5);
    uVar5 = uVar1;
    func_0x00010bf4c1e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar6 = PTR_PTR_1126b5240;
    _objc_opt_class(PTR_PTR_1126b5240);
    uVar7 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar6);
    uVar1 = uVar5;
    if ((uVar7 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar5);
    uVar5 = param_3;
    func_0x00010bfe5ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be47120(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar5);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105e437b0; end: 105e438cb; -[SCSendToLastSnapSectionCreator _lastSnapSectionForIdentifier:withSectionDataModel:] */

void FUN_105e437b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  func_0x00010c155ea0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b5398;
  _objc_alloc(PTR_PTR_1126b5398);
  func_0x00010c01a160();
  puVar2 = PTR_PTR_1126c51d8;
  _objc_alloc(PTR_PTR_1126c51d8);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = param_4;
  func_0x00010c06ef40(param_4);
  func_0x00010c0090e0(puVar2,param_2,uVar5,param_3,uVar6,uVar3,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  puVar4 = PTR_PTR_1126b1108;
  _objc_alloc(PTR_PTR_1126b1108);
  func_0x00010c04f820();
  func_0x00010c1f9240();
  func_0x00010c161980(puVar4,param_2,*(undefined8 *)(param_1 + 0x18));
  func_0x00010bf79c60(*(undefined8 *)(param_1 + 0x38),param_2,param_3);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105e438cc; end: 105e43937; -[SCSendToLastSnapSectionCreator .cxx_destruct] */

void FUN_105e438cc(long param_1)

{
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



/* Entry: 105e43938; end: 105e43e67;  */

void FUN_105e43938(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    _objc_release(param_3);
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = PTR_PTR_1126b3558;
    _objc_alloc(PTR_PTR_1126b3558);
    func_0x00010c03d4e0();
    puVar3 = PTR_PTR_1126b3560;
    _objc_alloc();
    func_0x00010c01bce0();
    puVar4 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x00010c0ecd20(PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    lVar2 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        lVar15 = *(long *)(lVar13 * 8);
        lVar5 = lVar15;
        func_0x00010c122a80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar5 != 0) {
          func_0x00010c122a80(lVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar4);
          _objc_release(lVar15);
        }
        lVar13 = lVar13 + 1;
      } while (lVar2 != lVar13);
      lVar2 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    puVar6 = PTR_PTR_1126b3568;
    _objc_alloc();
    func_0x00010c03d400();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar14);
    _objc_release(param_3);
    if (puVar6 == (undefined *)0x0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar14 = PTR_PTR_1126b52c0;
      _objc_alloc();
      puVar7 = PTR_PTR_1126b53f0;
      func_0x00010c159140(PTR_PTR_1126b53f0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bfe9720();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126b53d8;
      _objc_alloc(PTR_PTR_1126b53d8);
      puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01c3c0(puVar3);
      _objc_release(puVar8);
      puVar8 = PTR_PTR_1126b53d0;
      func_0x00010bfe98c0(PTR_PTR_1126b53d0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar4);
      puVar4 = PTR_PTR_1126b53e8;
      puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_retain(param_2);
      _objc_alloc(puVar3);
      ppuVar9 = &PTR____CFConstantStringClassReference_110e2c1b8;
      uVar11 = 0;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2c1b8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e820(puVar3);
      func_0x00010bf0e6e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      _objc_release(puVar3);
      _objc_release(ppuVar9);
      _objc_retain(param_1);
      lVar2 = param_3;
      func_0x00010c0b8600(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b5658;
      _objc_alloc(PTR_PTR_1126b5658);
      func_0x00010c043e40();
      puVar10 = PTR_PTR_1126b02a8;
      _objc_alloc();
      func_0x00010c01b460();
      _objc_release(puVar3);
      _objc_release(lVar2);
      _objc_release(param_1);
      puVar3 = PTR_PTR_1126b5678;
      _objc_alloc();
      func_0x00010c043e00();
      func_0x00010c0192e0(0x7fefffffffffffff,0x3ff0000000000000,0x3fd3333333333333,0,puVar14);
      _objc_release(puVar3);
      _objc_release(puVar10);
      _objc_release(puVar4);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    puVar14 = PTR_PTR_1126b5650;
    _objc_retain(uVar11);
    _objc_alloc(puVar14);
    func_0x00010c043e20();
    _objc_release(uVar11);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 105e43e68; end: 105e43ed3;  */

void FUN_105e43e68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b5650;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c043e20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e43ed4; end: 105e43ed7; +[SCCSendToSuggestionsComponentDeleteExpiredSuggestions modulePath] */

undefined ** FUN_105e43ed4(void)

{
  return &PTR____CFConstantStringClassReference_110e2c218;
}



/* Entry: 105e43ed8; end: 105e43edb; +[SCCSendToSuggestionsComponentDeleteExpiredSuggestions asyncStrictMode] */

undefined8 FUN_105e43ed8(void)

{
  return 0;
}



/* Entry: 105e43edc; end: 105e43f2f; -[SCCSendToSuggestionsComponentDeleteExpiredSuggestions deleteExpiredSuggestionsWithCofStore:] */

void FUN_105e43edc(void)

{
  long unaff_x20;
  
  func_0x000105e4463c();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(unaff_x20 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105e445c4();
  func_0x000105e44624();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
  return;
}



/* Entry: 105e43f30; end: 105e4404b; +[SCCSendToSuggestionsComponentDeleteExpiredSuggestions invokeWithJSRuntimeProvider:cofStore:completionHandler:] */

void FUN_105e43f30(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_4);
  func_0x000105e44634();
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105e445e0();
  func_0x000105e44634();
  func_0x000105e4461c();
  _objc_retain(param_3);
  func_0x000105e44668();
  _objc_release(param_5);
  func_0x000105e44660();
  func_0x000105e44614();
  func_0x000105e44624();
  func_0x000105e445c4();
  func_0x000105e445d8();
  return;
}



/* Entry: 105e4404c; end: 105e44067; +[SCCSendToSuggestionsComponentDeleteExpiredSuggestions valdiMarshallableObjectDescriptor] */

void FUN_105e4404c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108eca80;
  param_1[1] = &PTR_s_SCComposerCOFStoring_1108ecab0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 105e44068; end: 105e4406b; +[SCCSendToSuggestionsComponentDeleteSuggestionsWithSource modulePath] */

undefined ** FUN_105e44068(void)

{
  return &PTR____CFConstantStringClassReference_110e2c218;
}



/* Entry: 105e4406c; end: 105e4406f; +[SCCSendToSuggestionsComponentDeleteSuggestionsWithSource asyncStrictMode] */

undefined8 FUN_105e4406c(void)

{
  return 0;
}



/* Entry: 105e44070; end: 105e440bb; -[SCCSendToSuggestionsComponentDeleteSuggestionsWithSource deleteSuggestionsWithSourceWithSource:] */

void FUN_105e44070(long param_1)

{
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105e44624();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105e440bc; end: 105e441c3; +[SCCSendToSuggestionsComponentDeleteSuggestionsWithSource invokeWithJSRuntimeProvider:source:completionHandler:] */

void FUN_105e440bc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105e445e0();
  func_0x000105e4461c();
  _objc_retain(param_3);
  func_0x000105e44668();
  func_0x000105e44660();
  func_0x000105e44614();
  func_0x000105e445c4();
  func_0x000105e445d8();
  return;
}



/* Entry: 105e441c4; end: 105e441f7; +[SCCSendToSuggestionsComponentDeleteSuggestionsWithSource valdiMarshallableObjectDescriptor] */

void FUN_105e441c4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108ecb20;
  param_1[1] = &PTR_DAT_1108ecb50;
  param_1[2] = &PTR_DAT_1108ecaf0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 105e441f8; end: 105e4425b;  */

void FUN_105e441f8(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  func_0x000105e445e0();
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105e4455c;
  puStack_30 = &UNK_1108ecc00;
  uStack_28 = param_1;
  func_0x000105e4461c();
  puVar1 = auStack_48;
  _objc_retainBlock(puVar1);
  func_0x000105e44614();
  func_0x000105e445c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e4425c; end: 105e4425f; +[SCCSendToSuggestionsComponentInsertSuggestions modulePath] */

undefined ** FUN_105e4425c(void)

{
  return &PTR____CFConstantStringClassReference_110e2c218;
}



/* Entry: 105e44260; end: 105e44263; +[SCCSendToSuggestionsComponentInsertSuggestions asyncStrictMode] */

undefined8 FUN_105e44260(void)

{
  return 0;
}



/* Entry: 105e44264; end: 105e442cb; -[SCCSendToSuggestionsComponentInsertSuggestions insertSuggestionsWithUserIds:source:] */

void FUN_105e44264(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105e44624();
  func_0x000105e445d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}


