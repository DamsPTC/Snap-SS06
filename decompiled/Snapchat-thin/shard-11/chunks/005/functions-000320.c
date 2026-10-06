/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108614c88; end: 108614d3f; -[SCTCKLocationServices isUserInValidLocation] */

uint FUN_108614c88(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  if (lVar1 == 0) {
    uVar4 = 1;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar3 == 0) {
      uVar4 = 1;
    }
    else {
      uVar4 = 0x10ee6a38;
      func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110ee6a38,param_2,lVar3);
      uVar4 = uVar4 ^ 1;
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  return uVar4;
}



/* Entry: 108614d40; end: 108614d47; -[SCTCKLocationServices .cxx_destruct] */

void FUN_108614d40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 108614d48; end: 108614d9b;  */

undefined * FUN_108614d48(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126da328;
  func_0x00010c22ba80();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = (undefined *)0x1;
  }
  else {
    puVar2 = puVar1;
    func_0x00010c082700(puVar1);
  }
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 108614d9c; end: 1086150d3; -[SCTCallEndDialog initWithIsGroupConversation:displayName:dismissHandler:] */

undefined8 *
FUN_108614d9c(undefined8 param_1,undefined8 param_2,int param_3,undefined **param_4,
             undefined8 param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_4);
  if (param_3 == 0) {
    ppuVar1 = param_4;
    func_0x00010bf44740();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuVar1 = &PTR____CFConstantStringClassReference_110ee6a98;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ee6a98,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
  else {
    ppuVar2 = param_4;
    func_0x00010c08fa60();
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110ee6a78;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ee6a78,0);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108614ed4;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110ee6a58;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ee6a58,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar2);
LAB_108614ed4:
  _objc_release(param_4);
  _objc_retain(param_5);
  puVar4 = PTR_PTR_1126aed70;
  ppuVar2 = &PTR____CFConstantStringClassReference_110ee6ab8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ee6ab8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1086150d4;
  puStack_98 = &UNK_11084e500;
  _objc_retain(param_5);
  uStack_90 = param_5;
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  puVar5 = PTR_PTR_1126aed70;
  ppuVar2 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_d8 = puVar6;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x1086150e4;
  puStack_c0 = &UNK_11084e500;
  uStack_b8 = param_5;
  _objc_retain(param_5);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar4;
  puStack_80 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uStack_b8);
  _objc_release(puVar4);
  _objc_release(uStack_90);
  _objc_release(param_5);
  puStack_e0 = PTR_PTR_1126fd228;
  puVar7 = &uStack_e8;
  uStack_e8 = param_1;
  _objc_msgSendSuper2(puVar7,PTR_s_initWithTitle_dialogText_actions_1125f25b8,ppuVar3,0,puVar6);
  _objc_release(puVar6);
  _objc_release(ppuVar3);
  if (puVar7 != (undefined8 *)0x0) {
    func_0x00010c211b40(puVar7);
  }
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar7;
  }
  ___stack_chk_fail();
  puVar7 = (undefined8 *)param_4[4];
                    /* WARNING: Could not recover jumptable at 0x0001086150e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)puVar7[2])(puVar7,1);
  return puVar7;
}



/* Entry: 1086150d4; end: 1086150f3;  */

void FUN_1086150d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086150e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1);
  return;
}



/* Entry: 1086150f4; end: 10861519b; -[SCTalkUIConversationMetadata isGroupConversation] */

undefined1 FUN_1086150f4(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10861519c;
  puStack_50 = &UNK_110847658;
  puStack_38 = puStack_48;
  func_0x00010c0be200(param_1,param_2,&puStack_68,&PTR___NSConcreteGlobalBlock_110a5b720);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 10861519c; end: 1086151b3;  */

void FUN_10861519c(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1086151b4; end: 10861527f; -[SCTalkUIConversationMetadata remoteUserId] */

void FUN_1086151b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
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
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_108615280;
  uStack_30 = 0x108615290;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10861529c;
  puStack_60 = &UNK_110842b58;
  puStack_48 = puStack_58;
  func_0x00010c0be200(param_1,param_2,&PTR___NSConcreteGlobalBlock_110a5b740,&puStack_78);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108615280; end: 10861529b;  */

void FUN_108615280(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10861529c; end: 1086152d3;  */

void FUN_10861529c(long param_1,undefined8 param_2)

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



/* Entry: 1086152d4; end: 1086153d3;  */

undefined1 * FUN_1086152d4(undefined8 param_1,double param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  float fVar11;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126da878;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_58 = puVar2;
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 1;
  puVar9 = puVar4;
  func_0x00010c055a40();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar5 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  ppuVar6 = &puStack_a0;
  pcStack_68 = FUN_1086153d4;
  puStack_90 = puVar4;
  puStack_88 = puVar3;
  puStack_80 = puVar2;
  puStack_78 = puVar1;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  puStack_98 = PTR_PTR_1126fd230;
  puStack_a0 = puVar5;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_init_1125d9248);
  if (ppuVar6 != (undefined **)0x0) {
    *(undefined8 *)((long)ppuVar6 + 8) = uVar8;
    puVar1 = puVar9;
    func_0x00010bf529e0();
    *(undefined **)((long)ppuVar6 + 0x10) = puVar1;
    lVar7 = (long)puVar1 << 3;
    _malloc();
    *(long *)((long)ppuVar6 + 0x18) = lVar7;
    if (puVar1 != (undefined *)0x0) {
      uVar10 = 0;
      do {
        fVar11 = SUB84(param_2,0);
        puVar1 = puVar9;
        func_0x00010c0dfd40(puVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c80();
        param_2 = (double)fVar11;
        *(double *)(*(long *)((long)ppuVar6 + 0x18) + uVar10 * 8) = param_2;
        _objc_release(puVar1);
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(ulong *)((long)ppuVar6 + 0x10));
    }
  }
  _objc_release(puVar9);
  return (undefined1 *)ppuVar6;
}



/* Entry: 1086153d4; end: 1086154a7; -[SCTDimensions initWithType:dimensions:] */

undefined1 *
FUN_1086153d4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  float fVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fd230;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    lVar2 = param_5;
    func_0x00010bf529e0();
    *(long *)((long)puVar1 + 0x10) = lVar2;
    lVar3 = lVar2 << 3;
    _malloc();
    *(long *)((long)puVar1 + 0x18) = lVar3;
    if (lVar2 != 0) {
      uVar4 = 0;
      do {
        fVar5 = SUB84(param_1,0);
        lVar2 = param_5;
        func_0x00010c0dfd40(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c80();
        param_1 = (double)fVar5;
        *(double *)(*(long *)((long)puVar1 + 0x18) + uVar4 * 8) = param_1;
        _objc_release(lVar2);
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(ulong *)((long)puVar1 + 0x10));
    }
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 1086154a8; end: 1086154ef; -[SCTDimensions dealloc] */

void FUN_1086154a8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _free(*(undefined8 *)(param_1 + 0x18));
  puStack_28 = PTR_PTR_1126fd230;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1086154f0; end: 10861553f; -[SCTDimensions of] */

void FUN_1086154f0(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108615540;
  puStack_20 = &UNK_110a5b780;
  uStack_18 = param_1;
  _objc_retainBlock(&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108615540; end: 1086155bb;  */

void FUN_108615540(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_1086155bc;
  puStack_30 = &UNK_110a5b760;
  uStack_28 = param_1;
  func_0x00010be619a0(*(undefined8 *)(param_2 + 0x20),param_3,&puStack_48);
  *(undefined8 *)(*(long *)(param_2 + 0x20) + 8) = 1;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1086155bc; end: 1086155d3;  */

double FUN_1086155bc(double param_1,long param_2)

{
  return (param_1 * *(double *)(param_2 + 0x20)) / 100.0;
}



/* Entry: 1086155d4; end: 10861562b; -[SCTDimensions ofScreenWidth] */

void FUN_1086155d4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c0e17a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be9bca0(param_1);
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10861562c; end: 108615687; -[SCTDimensions ofScreenHeight] */

void FUN_10861562c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_3;
  func_0x00010c0e17a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be9bca0(param_3);
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))(param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 108615688; end: 1086156d7; -[SCTDimensions percentOf] */

void FUN_108615688(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1086156d8;
  puStack_20 = &UNK_110a5b780;
  uStack_18 = param_1;
  _objc_retainBlock(&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1086156d8; end: 10861574f;  */

void FUN_1086156d8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_108615750;
  puStack_30 = &UNK_110a5b760;
  uStack_28 = param_1;
  func_0x00010be619a0(*(undefined8 *)(param_2 + 0x20),param_3,&puStack_48);
  *(undefined8 *)(*(long *)(param_2 + 0x20) + 8) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108615750; end: 108615767;  */

double FUN_108615750(double param_1,long param_2)

{
  return (param_1 / *(double *)(param_2 + 0x20)) * 100.0;
}



/* Entry: 108615768; end: 1086157bf; -[SCTDimensions percentOfIPhone7Width] */

void FUN_108615768(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c0f7d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36740(param_1);
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1086157c0; end: 10861581b; -[SCTDimensions percentOfIPhone7Height] */

void FUN_1086157c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_3;
  func_0x00010c0f7d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36740(param_3);
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))(param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10861581c; end: 10861586b; -[SCTDimensions updateFirst] */

void FUN_10861581c(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10861586c;
  puStack_20 = &UNK_110a5b780;
  uStack_18 = param_1;
  _objc_retainBlock(&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10861586c; end: 10861589f;  */

void FUN_10861586c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  **(undefined8 **)(*(long *)(param_2 + 0x20) + 0x18) = param_1;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1086158a0; end: 1086158ab; -[SCTDimensions first] */

undefined8 FUN_1086158a0(long param_1)

{
  return **(undefined8 **)(param_1 + 0x18);
}



/* Entry: 1086158ac; end: 1086158af; -[SCTDimensions f] */

void FUN_1086158ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb0d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_first_1125c9d08);
  return;
}



/* Entry: 1086158b0; end: 1086158bf; -[SCTDimensions last] */

undefined8 FUN_1086158b0(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 0x18) + *(long *)(param_1 + 0x10) * 8 + -8);
}



/* Entry: 1086158c0; end: 1086158c3; -[SCTDimensions l] */

void FUN_1086158c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c088170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_last_1125ffa68);
  return;
}



/* Entry: 1086158c4; end: 1086158e3; -[SCTDimensions min] */

void FUN_1086158c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be88050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x7ff0000000000000,param_1,PTR_s__reduce_func__11257f9b0,
             &PTR___NSConcreteGlobalBlock_110a5b7d0);
  return;
}



/* Entry: 1086158e4; end: 108615903; -[SCTDimensions max] */

void FUN_1086158e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be88050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0xfff0000000000000,param_1,PTR_s__reduce_func__11257f9b0,
             &PTR___NSConcreteGlobalBlock_110a5b7f0);
  return;
}



/* Entry: 108615904; end: 108615953; -[SCTDimensions progress] */

void FUN_108615904(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108615954;
  puStack_20 = &UNK_110a5b810;
  uStack_18 = param_1;
  _objc_retainBlock(&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108615954; end: 1086159ab;  */

double FUN_108615954(double param_1,long param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = param_1;
  func_0x00010bfb0d80(*(undefined8 *)(param_2 + 0x20));
  dVar2 = dVar1;
  func_0x00010c088160(*(undefined8 *)(param_2 + 0x20));
  dVar3 = dVar2;
  func_0x00010bfb0d80(*(undefined8 *)(param_2 + 0x20));
  return dVar1 + param_1 * (dVar2 - dVar3);
}



/* Entry: 1086159ac; end: 1086159ff; -[SCTDimensions _screenSize] */

undefined1  [16]
FUN_1086159ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _objc_release(puVar1);
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = param_3;
  return auVar2;
}



/* Entry: 108615a00; end: 108615a13; -[SCTDimensions _iPhone7ScreenSize] */

undefined1  [16] FUN_108615a00(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x4094d80000000000;
  auVar1._0_8_ = 0x4087700000000000;
  return auVar1;
}



/* Entry: 108615a14; end: 108615a6b; -[SCTDimensions _reduce:func:] */

void FUN_108615a14(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    uVar1 = 0;
    do {
      (**(code **)(param_4 + 0x10))
                (param_1,*(undefined8 *)(*(long *)(param_2 + 0x18) + uVar1 * 8),param_4);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ulong *)(param_2 + 0x10));
  }
  return;
}



/* Entry: 108615a6c; end: 108615b37; -[SCTDimensions _mutateAll:] */

void FUN_108615a6c(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar3 = 0;
    lVar2 = *(long *)(param_1 + 0x18);
    do {
      uVar4 = *(undefined8 *)(lVar2 + uVar3 * 8);
      (**(code **)(param_3 + 0x10))(param_3,uVar3);
      uVar1 = *(ulong *)(param_1 + 0x10);
      lVar2 = *(long *)(param_1 + 0x18);
      *(undefined8 *)(lVar2 + uVar3 * 8) = uVar4;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return;
}



/* Entry: 108615b38; end: 108615df7; +[SCTExceptionCatcher runCatchingExceptionClasses:block:error:] */

undefined ** FUN_108615b38(undefined8 param_1,undefined8 param_2,undefined **param_3,long param_4)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  int iVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  (**(code **)(param_4 + 0x10))(param_4);
  ppuVar10 = (undefined **)0x1;
LAB_108615b94:
  iVar9 = (int)param_2;
  _objc_release(param_4);
  ppuVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return ppuVar10;
  }
  ___stack_chk_fail();
  if ((iVar9 == 0) || (iVar9 != 1)) {
    __Unwind_Resume();
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(ppuVar7);
    _objc_opt_class();
    ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar10;
    func_0x00010c142740();
    _objc_release(ppuVar7);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
      return ppuVar2;
    }
    ___stack_chk_fail();
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(ppuVar3);
    _objc_opt_class();
    ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar7;
    func_0x00010c142740();
    _objc_release(ppuVar3);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
      return ppuVar10;
    }
    ___stack_chk_fail();
    _objc_retain(ppuVar2);
    if (ppuVar7 != (undefined **)0x0) {
      _objc_retain(ppuVar2);
      puVar8 = ppuVar7[1];
      ppuVar7[1] = (undefined *)ppuVar2;
      _objc_release(puVar8);
    }
    _objc_release(ppuVar2);
    return ppuVar7;
  }
  _objc_begin_catch();
  _objc_retain();
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  ppuVar3 = param_3;
  ppuVar7 = &puStack_130;
  func_0x00010bf52a60();
  if (ppuVar3 != (undefined **)0x0) {
    lVar11 = *plStack_120;
    do {
      ppuVar12 = (undefined **)0x0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(param_3);
        }
        param_2 = *(undefined8 *)(lStack_128 + (long)ppuVar12 * 8);
        ppuVar4 = ppuVar2;
        _objc_opt_isKindOfClass();
        if (((ulong)ppuVar4 & 1) != 0) {
          _objc_release(param_3);
          if (ppuVar10 != (undefined **)0x0) {
            puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
            func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
            _objc_retainAutoreleasedReturnValue();
            ppuVar7 = ppuVar2;
            func_0x00010c121ea0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar8);
            _objc_release(ppuVar7);
            ppuVar7 = ppuVar2;
            func_0x00010c0d4f60(ppuVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar8);
            _objc_release(ppuVar7);
            ppuVar3 = ppuVar2;
            func_0x00010b965d18();
            _objc_retainAutoreleasedReturnValue();
            if (ppuVar3 != (undefined **)0x0) {
              func_0x00010c1d0640(puVar8);
            }
            puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
            puVar5 = puVar8;
            func_0x00010bf51e00(puVar8);
            ppuVar7 = &PTR____CFConstantStringClassReference_110ee6ad8;
            func_0x00010bf99240();
            _objc_retainAutoreleasedReturnValue();
            _objc_autorelease();
            *ppuVar10 = puVar6;
            _objc_release(puVar5);
            _objc_release(ppuVar3);
            _objc_release(puVar8);
          }
          _objc_release(ppuVar2);
          _objc_end_catch();
          ppuVar10 = (undefined **)0x0;
          goto LAB_108615b94;
        }
        ppuVar12 = (undefined **)((long)ppuVar12 + 1);
      } while (ppuVar3 != ppuVar12);
      ppuVar3 = param_3;
      ppuVar7 = &puStack_130;
      func_0x00010bf52a60();
    } while (ppuVar3 != (undefined **)0x0);
  }
  _objc_release(param_3);
  _objc_exception_rethrow();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108615ca4);
  (*pcVar1)();
}



/* Entry: 108615df8; end: 108615ebf; +[SCTExceptionCatcher runBlock:error:] */

undefined * FUN_108615df8(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_opt_class();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  puVar6 = puVar2;
  func_0x00010c142740();
  _objc_release(param_3);
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar4 = PTR_PTR_1126da880;
  pcStack_48 = FUN_108615ec0;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_70 = puVar2;
  puStack_68 = param_1;
  uStack_60 = param_3;
  puStack_58 = puVar1;
  puStack_50 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_80,1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c142740();
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  if (puVar1 != (undefined *)0x0) {
    _objc_retain(puVar2);
    uVar5 = *(undefined8 *)(puVar1 + 8);
    *(undefined **)(puVar1 + 8) = puVar2;
    _objc_release(uVar5);
  }
  _objc_release(puVar2);
  return puVar1;
}



/* Entry: 108615ec0; end: 108615f87; +[SCTExceptionCatcher runValdiBlock:error:] */

undefined * FUN_108615ec0(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR_PTR_1126da880;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_opt_class();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c142740();
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    _objc_retain(puVar1);
    uVar3 = *(undefined8 *)(puVar2 + 8);
    *(undefined **)(puVar2 + 8) = puVar1;
    _objc_release(uVar3);
  }
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 108615f88; end: 108615fd3; -[SCTGrapheneLogger initWithGrapheneRegistry:] */

long FUN_108615f88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (param_1 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 108615fd4; end: 108616043; -[SCTGrapheneLogger logWithMetric:] */

void FUN_108615fd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bef99e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108616044; end: 108616277; -[SCTGrapheneLogger logAudioSessionUpdateError:] */

void FUN_108616044(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cf810;
  func_0x00010be0ae20(PTR_PTR_1126cf810,param_2,param_3,
                      &PTR____CFConstantStringClassReference_110dcf5f8);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR_PTR_1126cf818;
    func_0x00010bf0ff20(PTR_PTR_1126cf818);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010c0b35a0(param_1,param_2,puVar3);
    _objc_release(puVar3);
  }
  puVar2 = PTR_PTR_1126cf810;
  func_0x00010be0ae20(PTR_PTR_1126cf810,param_2,param_3,
                      &PTR____CFConstantStringClassReference_110dcf698);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 != (undefined *)0x0) {
    puVar3 = PTR_PTR_1126cf818;
    func_0x00010bf0ff20(PTR_PTR_1126cf818);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010c0b35a0(param_1,param_2,puVar4);
    _objc_release(puVar4);
  }
  puVar3 = PTR_PTR_1126cf810;
  func_0x00010be0ae20(PTR_PTR_1126cf810,param_2,param_3,
                      &PTR____CFConstantStringClassReference_110dcf6b8);
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 != (undefined *)0x0) {
    puVar4 = PTR_PTR_1126cf818;
    func_0x00010bf0ff20(PTR_PTR_1126cf818);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010c0b35a0(param_1,param_2,puVar5);
    _objc_release(puVar5);
  }
  puVar4 = PTR_PTR_1126cf810;
  func_0x00010be0ae20(PTR_PTR_1126cf810,param_2,param_3,
                      &PTR____CFConstantStringClassReference_110dcf678);
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 != (undefined *)0x0) {
    puVar5 = PTR_PTR_1126cf818;
    func_0x00010bf0ff20(PTR_PTR_1126cf818);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    func_0x00010c0b35a0(param_1,param_2,puVar6);
    _objc_release(puVar6);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108616278; end: 108616327; -[SCTGrapheneLogger logCXRequestTransactionError:] */

void FUN_108616278(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126cf818;
  _objc_retain(param_3);
  func_0x00010bf28920(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cf810;
  func_0x00010be0ae60(PTR_PTR_1126cf810,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110ee6b38,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c0b35a0(param_1,param_2,puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 108616328; end: 108616473; -[SCTGrapheneLogger logVideoCameraFrameHasFrame:withDelay:] */

void FUN_108616328(long param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  
  if (param_3 == 0) {
    puVar4 = PTR_PTR_1126cf818;
    func_0x00010c2993a0(PTR_PTR_1126cf818);
    _objc_retainAutoreleasedReturnValue();
    if (param_4 < 0x1389) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110ee6c18;
    }
    else {
      ppuVar6 = &PTR____CFConstantStringClassReference_110ee6c38;
    }
    puVar5 = puVar4;
    func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110ee6bd8,ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010c0b35a0(param_1,param_2,puVar5);
  }
  else {
    puVar4 = PTR_PTR_1126cf818;
    func_0x00010c2993a0(PTR_PTR_1126cf818);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar4;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010c0b35a0(param_1,param_2,puVar1);
    puVar5 = PTR_PTR_1126cf818;
    func_0x00010c299360(PTR_PTR_1126cf818);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bef99e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9180();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 108616474; end: 1086164eb; -[SCTGrapheneLogger logWithMetric:durationMs:] */

void FUN_108616474(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bef99e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1086164ec; end: 108616523; +[SCTGrapheneLogger _errorCodeToBeLoggedForCxRequestTransactionError:] */

undefined ** FUN_1086164ec(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf3ec40();
  if (param_3 < 9) {
    ppuVar1 = (undefined **)(&PTR_PTR_110a5b840)[param_3];
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ee6d98;
  }
  return ppuVar1;
}



/* Entry: 108616524; end: 1086167d7; +[SCTGrapheneLogger _errorCodeForAudioSessionUpdateError:errorType:] */

undefined ** FUN_108616524(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  
  _objc_retain(param_4);
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  if (lVar2 == 0) {
    ppuVar5 = (undefined **)0x0;
    goto LAB_10861661c;
  }
  lVar3 = lVar2;
  func_0x00010c0e00e0(lVar2,param_2,&PTR____CFConstantStringClassReference_110db0dd8);
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110ee6db8;
  }
  else {
    lVar4 = lVar3;
    func_0x00010c067ec0();
    iVar1 = (int)lVar4;
    if (iVar1 < 0x21726563) {
      if (iVar1 < 0x21636174) {
        if (iVar1 == -0x32) {
          ppuVar5 = &PTR____CFConstantStringClassReference_110ee6ed8;
        }
        else if (iVar1 == 0) {
          ppuVar5 = &PTR____CFConstantStringClassReference_110dea818;
        }
        else {
          if (iVar1 != 0x21616374) goto LAB_1086167c0;
          ppuVar5 = &PTR____CFConstantStringClassReference_110ee6df8;
        }
      }
      else if (iVar1 < 0x21706c61) {
        if (iVar1 == 0x21636174) {
          ppuVar5 = &PTR____CFConstantStringClassReference_110ee6e18;
        }
        else {
          if (iVar1 != 0x21696e74) goto LAB_1086167c0;
          ppuVar5 = &PTR____CFConstantStringClassReference_110ee6e38;
        }
      }
      else if (iVar1 == 0x21706c61) {
        ppuVar5 = &PTR____CFConstantStringClassReference_110ee6e98;
      }
      else {
        if (iVar1 != 0x21707269) goto LAB_1086167c0;
        ppuVar5 = &PTR____CFConstantStringClassReference_110ee6ef8;
      }
    }
    else if (iVar1 < 0x696e6163) {
      if (iVar1 < 0x21736573) {
        if (iVar1 == 0x21726563) {
          ppuVar5 = &PTR____CFConstantStringClassReference_110ee6eb8;
        }
        else if (iVar1 == 0x21726573) {
          ppuVar5 = &PTR____CFConstantStringClassReference_110ee6f18;
        }
        else {
LAB_1086167c0:
          ppuVar5 = &PTR____CFConstantStringClassReference_110ee6d98;
        }
      }
      else if (iVar1 == 0x21736573) {
        ppuVar5 = &PTR____CFConstantStringClassReference_110ee6f58;
      }
      else {
        if (iVar1 != 0x656e743f) goto LAB_1086167c0;
        ppuVar5 = &PTR____CFConstantStringClassReference_110ee6e58;
      }
    }
    else if (iVar1 < 0x73697269) {
      if (iVar1 == 0x696e6163) {
        ppuVar5 = &PTR____CFConstantStringClassReference_110ee6f78;
      }
      else {
        if (iVar1 != 0x6d737276) goto LAB_1086167c0;
        ppuVar5 = &PTR____CFConstantStringClassReference_110ee6dd8;
      }
    }
    else if (iVar1 == 0x73697269) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110ee6e78;
    }
    else {
      if (iVar1 != 0x77686174) goto LAB_1086167c0;
      ppuVar5 = &PTR____CFConstantStringClassReference_110ee6f38;
    }
  }
  _objc_release(lVar3);
LAB_10861661c:
  _objc_release(lVar2);
  return ppuVar5;
}



/* Entry: 1086167d8; end: 1086167e3; -[SCTGrapheneLogger .cxx_destruct] */

void FUN_1086167d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1086167e4; end: 10861697b; -[SCGrapheneAddLiveMetric withDimensionsIsGroup:callIntent:] */

void FUN_1086167e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_10861697c;
  uStack_40 = 0x10861698c;
  uStack_38 = 0;
  func_0x00010c0bf2c0(param_4);
  func_0x00010c2ac460(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10861697c; end: 108616a03;  */

void FUN_10861697c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108616a04; end: 108616a67; -[SCTLogger init] */

undefined1 * FUN_108616a04(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fd238;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108616a68; end: 108616a97; -[SCTLogger prs] */

long FUN_108616a68(long param_1,undefined8 param_2)

{
  func_0x00010befa120(*(undefined8 *)(param_1 + 8),param_2,
                      &PTR____CFConstantStringClassReference_110ee6fd8);
  return param_1;
}



/* Entry: 108616a98; end: 108616ac7; -[SCTLogger cll] */

long FUN_108616a98(long param_1,undefined8 param_2)

{
  func_0x00010befa120(*(undefined8 *)(param_1 + 8),param_2,
                      &PTR____CFConstantStringClassReference_110ee6ff8);
  return param_1;
}



/* Entry: 108616ac8; end: 108616af7; -[SCTLogger nav] */

long FUN_108616ac8(long param_1,undefined8 param_2)

{
  func_0x00010befa120(*(undefined8 *)(param_1 + 8),param_2,
                      &PTR____CFConstantStringClassReference_110ee7018);
  return param_1;
}



/* Entry: 108616af8; end: 108616b27; -[SCTLogger av] */

long FUN_108616af8(long param_1,undefined8 param_2)

{
  func_0x00010befa120(*(undefined8 *)(param_1 + 8),param_2,
                      &PTR____CFConstantStringClassReference_110ee7038);
  return param_1;
}



/* Entry: 108616b28; end: 108616b57; -[SCTLogger cor] */

long FUN_108616b28(long param_1,undefined8 param_2)

{
  func_0x00010befa120(*(undefined8 *)(param_1 + 8),param_2,
                      &PTR____CFConstantStringClassReference_110ee7058);
  return param_1;
}



/* Entry: 108616b58; end: 108616b87; -[SCTLogger lua] */

long FUN_108616b58(long param_1,undefined8 param_2)

{
  func_0x00010befa120(*(undefined8 *)(param_1 + 8),param_2,
                      &PTR____CFConstantStringClassReference_110ee7078);
  return param_1;
}



/* Entry: 108616b88; end: 108616bb7; -[SCTLogger rua] */

long FUN_108616b88(long param_1,undefined8 param_2)

{
  func_0x00010befa120(*(undefined8 *)(param_1 + 8),param_2,
                      &PTR____CFConstantStringClassReference_110ee7098);
  return param_1;
}



/* Entry: 108616bb8; end: 108616c5b; -[SCTLogger tags] */

void FUN_108616bb8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    func_0x00010c246be0(*(undefined8 *)(param_1 + 8),param_2,PTR_s_compare__1125ae690);
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf446e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110ee70b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(ppuVar3,param_2,&PTR____CFConstantStringClassReference_110e15a38);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 108616c5c; end: 108616c67; -[SCTLogger .cxx_destruct] */

void FUN_108616c5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108616c68; end: 108616d07;  */

bool FUN_108616c68(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___AVAudioSession_1126b6de8;
  func_0x00010c22ba80(PTR__OBJC_CLASS___AVAudioSession_1126b6de8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c1238e0();
  _objc_release(puVar1);
  return puVar2 == (undefined *)0x67726e74;
}



/* Entry: 108616d08; end: 108616e87;  */

void FUN_108616d08(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  
  puVar2 = PTR_PTR_1126af180;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam000000011372c4e0 & 1) == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ee70d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ee70d8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef320();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(ppuVar1);
    bRam000000011372c4e0 = 1;
    puVar2 = PTR_PTR_1126af178;
    func_0x00010c22b900();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110ee70f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ee70f8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110ee7118;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ee7118,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c235c40(puVar2);
    _objc_release(ppuVar4);
    _objc_release(ppuVar1);
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108616e88; end: 108616f0b;  */

void FUN_108616e88(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108616f0c; end: 108616f17;  */

void FUN_108616f0c(void)

{
  uRam000000011372c4e0 = 0;
  return;
}



/* Entry: 108616f18; end: 108616f9f;  */

void FUN_108616f18(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bfce860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar2 = param_1;
    func_0x00010bf0a2c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar1 = 0;
    if (lVar2 != 0) {
      lVar1 = param_1;
      func_0x00010bf0a2c0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    lVar1 = param_1;
    func_0x00010bfce860();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108616fa0; end: 108616fab; -[SCTSingleTaskPerformer initWithTask:] */

void FUN_108616fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c050e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithTask_processingQueue__1125f1d88,param_3,
             PTR___dispatch_main_q_11034be20);
  return;
}



/* Entry: 108616fac; end: 1086170a3; -[SCTSingleTaskPerformer initWithTask:processingQueue:] */

undefined1 *
FUN_108616fac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fd240;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1086170a4; end: 10861714b; -[SCTSingleTaskPerformer performOrSchedule] */

void FUN_1086170a4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10861714c; end: 10861719f;  */

void FUN_10861714c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (((*(byte *)(param_1 + 0x1a) & 1) == 0) && (*(char *)(param_1 + 0x18) != '\x01')) {
      func_0x00010be98120(param_1);
    }
    else {
      *(undefined1 *)(param_1 + 0x19) = 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1086171a0; end: 10861729f; -[SCTSingleTaskPerformer pauseWithCompletion:] */

void FUN_1086171a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(uVar1);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1086172a0; end: 108617333;  */

void FUN_1086172a0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_108617320;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    *(undefined1 *)(lVar1 + 0x1a) = 1;
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 == 0) goto LAB_108617320;
    if (*(char *)(lVar1 + 0x18) == '\x01') {
      uVar3 = *(undefined8 *)(lVar1 + 0x28);
      _objc_retainBlock(lVar2);
      func_0x00010befa120(uVar3);
      _objc_release(lVar2);
      goto LAB_108617320;
    }
    uVar3 = *(undefined8 *)(lVar1 + 0x10);
  }
  func_0x000107c27d8c(uVar3);
LAB_108617320:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108617334; end: 1086173db; -[SCTSingleTaskPerformer resume] */

void FUN_108617334(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1086173dc; end: 108617427;  */

void FUN_1086173dc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((param_1 != 0) && (*(undefined1 *)(param_1 + 0x1a) = 0, (*(byte *)(param_1 + 0x18) & 1) == 0)
      ) && (*(char *)(param_1 + 0x19) == '\x01')) {
    func_0x00010be98120(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108617428; end: 1086175d3; -[SCTSingleTaskPerformer _runTask] */

void FUN_108617428(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined **ppuStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined **ppuStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if ((lVar4 != 0) && (*(long *)(param_1 + 8) != 0)) {
    *(undefined2 *)(param_1 + 0x18) = 1;
    _objc_retain(lVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1086175d4;
    puStack_88 = &UNK_110841f80;
    uStack_80 = uVar5;
    lStack_78 = lVar4;
    _objc_retain(lVar4);
    _objc_retain(uVar5);
    ppuVar2 = &puStack_a0;
    _objc_retainBlock();
    _objc_initWeak(auStack_a8,param_1);
    puStack_d8 = puVar1;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_1086176d4;
    puStack_c0 = &UNK_110848708;
    _objc_copyWeak(auStack_b0,auStack_a8);
    ppuStack_b8 = ppuVar2;
    _objc_retain(ppuVar2);
    ppuVar3 = &puStack_d8;
    _objc_retainBlock();
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    puStack_108 = puVar1;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_108617814;
    puStack_f0 = &UNK_110848708;
    _objc_copyWeak(auStack_e0,auStack_a8);
    ppuStack_e8 = ppuVar3;
    _objc_retain(ppuVar3);
    func_0x000107c27d8c(uVar6,&puStack_108);
    _objc_release(ppuStack_e8);
    _objc_release(ppuVar3);
    _objc_destroyWeak(auStack_e0);
    _objc_release(ppuStack_b8);
    _objc_release(ppuVar2);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_a8);
    _objc_release(lStack_78);
    _objc_release(uStack_80);
    _objc_release(uVar5);
    _objc_release(lVar4);
  }
  return;
}



/* Entry: 1086175d4; end: 1086176d3;  */

void FUN_1086175d4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 unaff_x21;
  undefined8 uVar4;
  long unaff_x22;
  long lVar5;
  undefined1 auStack_148 [8];
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar2);
  lVar1 = lVar2;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    unaff_x22 = *plStack_100;
    do {
      lVar5 = 0;
      do {
        if (*plStack_100 != unaff_x22) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x000107c27d8c(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(lStack_108 + lVar5 * 8))
        ;
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = lVar2;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar1 != 0);
  }
  _objc_release(lVar2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c12adc0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_1086176d4;
  lVar5 = lVar1 + 0x28;
  lStack_140 = unaff_x22;
  uStack_138 = unaff_x21;
  lStack_130 = lVar2;
  lStack_128 = param_1;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_loadWeakRetained();
  if (lVar5 == 0) {
    (**(code **)(*(long *)(lVar1 + 0x20) + 0x10))();
  }
  else {
    uVar4 = *(undefined8 *)(lVar5 + 8);
    _objc_copyWeak(auStack_148,lVar1 + 0x28);
    uVar3 = *(undefined8 *)(lVar1 + 0x20);
    _objc_retain(uVar3);
    func_0x00010c0f7fc0(uVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_148);
  }
  _objc_release(lVar5);
  return;
}



/* Entry: 1086176d4; end: 1086177a7;  */

void FUN_1086176d4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + 8);
    _objc_copyWeak(auStack_38,param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1086177a8; end: 108617813;  */

void FUN_1086177a8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
  else {
    *(undefined1 *)(lVar1 + 0x18) = 0;
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    if (((*(byte *)(lVar1 + 0x1a) & 1) == 0) && (*(char *)(lVar1 + 0x19) == '\x01')) {
      func_0x00010be98120(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108617814; end: 108617887;  */

void FUN_108617814(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x20);
  }
  _objc_retainBlock();
  if (lVar2 == 0) {
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
  }
  else {
    (**(code **)(lVar2 + 0x10))(lVar2,*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108617888; end: 1086178cf; -[SCTSingleTaskPerformer .cxx_destruct] */

void FUN_108617888(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1086178d0; end: 1086179b3;  */

void FUN_1086178d0(long param_1,long param_2)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010c0d9ba0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    if (param_2 != 0) {
      (**(code **)(param_2 + 0x10))(param_2);
    }
  }
  else {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1086179b4;
    puStack_48 = &UNK_11084aaa8;
    _objc_retain(param_1);
    lStack_40 = param_1;
    _objc_retain(param_2);
    lStack_38 = param_2;
    (**(code **)(lVar1 + 0x10))(lVar1,&puStack_60);
    _objc_release(lStack_38);
    _objc_release(lStack_40);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 1086179b4; end: 1086179bf;  */

void FUN_1086179b4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  _objc_retain();
  _objc_retain(lVar2);
  lVar3 = lVar1;
  func_0x00010c0d9ba0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2);
    }
  }
  else {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1086179b4;
    puStack_48 = &UNK_11084aaa8;
    _objc_retain(lVar1);
    lStack_40 = lVar1;
    _objc_retain(lVar2);
    lStack_38 = lVar2;
    (**(code **)(lVar3 + 0x10))(lVar3,&puStack_60);
    _objc_release(lStack_38);
    _objc_release(lStack_40);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 1086179c0; end: 108617a0f;  */

void FUN_1086179c0(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c0dfe00(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_1086178d0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108617a10; end: 108617abb;  */

void FUN_108617a10(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  _objc_retain();
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108617abc;
  puStack_48 = &UNK_1109101a8;
  uStack_40 = param_1;
  uStack_38 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_retainBlock(&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108617abc; end: 108617acb;  */

void FUN_108617abc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  long lStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_80;
  
  lVar5 = *(long *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(uVar1);
  lVar3 = param_2;
  _objc_retain();
  if (param_2 == 0) {
    lVar3 = lVar5;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(lVar5);
        }
        (**(code **)(*(long *)(lVar8 * 8) + 0x10))(*(long *)(lVar8 * 8),0);
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = lVar5;
      func_0x00010bf52a60();
    }
  }
  else {
    _dispatch_group_create();
    lStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    plStack_1b0 = (long *)0x0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    _objc_retain(lVar5);
    lVar4 = lVar5;
    func_0x00010bf52a60();
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar4 != 0) {
      lVar8 = *plStack_1b0;
      do {
        lVar6 = 0;
        do {
          if (*plStack_1b0 != lVar8) {
            _objc_enumerationMutation(lVar5);
          }
          lVar7 = *(long *)(lStack_1b8 + lVar6 * 8);
          _dispatch_group_enter(lVar3);
          puStack_1e8 = puVar2;
          uStack_1e0 = 0xc2000000;
          pcStack_1d8 = FUN_108617d4c;
          puStack_1d0 = &UNK_110842e18;
          _objc_retain(lVar3);
          lStack_1c8 = lVar3;
          (**(code **)(lVar7 + 0x10))(lVar7,&puStack_1e8);
          _objc_release(lStack_1c8);
          lVar6 = lVar6 + 1;
        } while (lVar4 != lVar6);
        lVar4 = lVar5;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
    _objc_release(lVar5);
    puStack_210 = puVar2;
    uStack_208 = 0xc2000000;
    uStack_200 = 0x108617d54;
    puStack_1f8 = &UNK_110849530;
    _objc_retain(param_2);
    lStack_1f0 = param_2;
    func_0x000100bc0718(lVar3,uVar1,&puStack_210);
    _objc_release(lStack_1f0);
    _objc_release(lVar3);
  }
  _objc_release(param_2);
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(lVar5 + 0x20));
  return;
}



/* Entry: 108617acc; end: 108617d4b;  */

void FUN_108617acc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  long lStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  lVar2 = param_3;
  _objc_retain();
  if (param_3 == 0) {
    lVar2 = param_1;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(param_1);
        }
        (**(code **)(*(long *)(lVar6 * 8) + 0x10))(*(long *)(lVar6 * 8),0);
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = param_1;
      func_0x00010bf52a60();
    }
  }
  else {
    _dispatch_group_create();
    lStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    plStack_1b0 = (long *)0x0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    _objc_retain(param_1);
    lVar3 = param_1;
    func_0x00010bf52a60();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar3 != 0) {
      lVar6 = *plStack_1b0;
      do {
        lVar4 = 0;
        do {
          if (*plStack_1b0 != lVar6) {
            _objc_enumerationMutation(param_1);
          }
          lVar5 = *(long *)(lStack_1b8 + lVar4 * 8);
          _dispatch_group_enter(lVar2);
          puStack_1e8 = puVar1;
          uStack_1e0 = 0xc2000000;
          pcStack_1d8 = FUN_108617d4c;
          puStack_1d0 = &UNK_110842e18;
          _objc_retain(lVar2);
          lStack_1c8 = lVar2;
          (**(code **)(lVar5 + 0x10))(lVar5,&puStack_1e8);
          _objc_release(lStack_1c8);
          lVar4 = lVar4 + 1;
        } while (lVar3 != lVar4);
        lVar3 = param_1;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(param_1);
    puStack_210 = puVar1;
    uStack_208 = 0xc2000000;
    uStack_200 = 0x108617d54;
    puStack_1f8 = &UNK_110849530;
    _objc_retain(param_3);
    lStack_1f0 = param_3;
    func_0x000100bc0718(lVar2,param_2,&puStack_210);
    _objc_release(lStack_1f0);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108617d4c; end: 108617d67;  */

void FUN_108617d4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108617d68; end: 108617dd3; -[SCWeakContainer initWithValue:] */

undefined1 * FUN_108617d68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fd248;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108617dd4; end: 108617deb; -[SCWeakContainer value] */

void FUN_108617dd4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108617dec; end: 108617df3; -[SCWeakContainer .cxx_destruct] */

void FUN_108617dec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 108617df4; end: 108617e5b; -[SCWeakTokenSet init] */

undefined1 * FUN_108617df4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fd250;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108617e5c; end: 108617f07; -[SCWeakTokenSet addToken:] */

void FUN_108617e5c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126da888;
  _objc_alloc(PTR_PTR_1126da888);
  func_0x00010c060400();
  uVar2 = param_1;
  func_0x00010bf4bb20(param_1,param_2,param_3);
  if ((uVar2 & 1) == 0) {
    _os_unfair_lock_lock(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf09f60(uVar3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar3;
    _objc_release(uVar4);
    _os_unfair_lock_unlock(param_1 + 0x10);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108617f08; end: 10861800f; -[SCWeakTokenSet removeToken:] */

undefined1 FUN_108617f08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x10);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar3;
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_50,8);
  _os_unfair_lock_unlock(param_1 + 0x10);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 108618010; end: 1086180ab;  */

bool FUN_108618010(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c071ae0();
  _objc_release(lVar2);
  if ((int)lVar3 == 0) {
    lVar2 = param_2;
    func_0x00010c296d80(param_2);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 != 0;
    _objc_release();
  }
  else {
    bVar1 = false;
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 1086180ac; end: 10861817f; -[SCWeakTokenSet containsToken:] */

bool FUN_1086180ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x10);
  func_0x00010be84a20(param_1);
  lVar1 = *(long *)(param_1 + 8);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_108618180;
  puStack_40 = &UNK_110a5b918;
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x00010bfb2040(lVar1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uStack_38);
  _os_unfair_lock_unlock(param_1 + 0x10);
  _objc_release(param_3);
  return lVar1 != 0;
}



/* Entry: 108618180; end: 1086181c7;  */

undefined8 FUN_108618180(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c296d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c071ae0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1086181c8; end: 10861822f; -[SCWeakTokenSet allTokens] */

void FUN_1086181c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x10);
  func_0x00010be84a20(param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf43280(uVar1,param_2,&PTR___NSConcreteGlobalBlock_110a5b968);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108618230; end: 108618237;  */

void FUN_108618230(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c296d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_value_112683588);
  return;
}



/* Entry: 108618238; end: 1086182b7; -[SCWeakTokenSet _purgeNils] */

void FUN_108618238(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _os_unfair_lock_assert_owner(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfaea20(uVar1,param_2,&PTR___NSConcreteGlobalBlock_110a5b9a8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1086182b8; end: 1086182c3; -[SCWeakTokenSet .cxx_destruct] */

void FUN_1086182b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


