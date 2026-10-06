/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106b13b74; end: 106b13da3;  */

undefined1 * FUN_106b13b74(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  int iStack_9c;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iStack_9c = param_2;
  _objc_retain(param_3);
  _objc_opt_self(param_1);
  puVar1 = PTR_PTR_1126ae748;
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110dbeff8;
  puVar3 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c106d20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = puVar5;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_80 = &PTR____CFConstantStringClassReference_110e2d8f8;
  puVar7 = PTR_PTR_1126b0380;
  puStack_78 = puVar6;
  func_0x00010c291260();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar7;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c560();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010bef7f60(puVar2);
  _objc_release(param_3);
  if (iStack_9c != 0) {
    ppuStack_98 = &PTR____CFConstantStringClassReference_110dadcb8;
    ppuStack_90 = &PTR____CFConstantStringClassReference_110deb938;
    ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar2);
    _objc_release(ppuVar11);
  }
  puVar6 = puVar2;
  func_0x00010bef9140(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  ppuVar9 = &puStack_e0;
  pcStack_b8 = FUN_106b13da4;
  ppuStack_d0 = ppuVar11;
  puStack_c8 = puVar1;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  puStack_d8 = PTR_PTR_1126f4f30;
  puStack_e0 = puVar2;
  _objc_msgSendSuper2(&puStack_e0,PTR_s_init_1125d9248);
  if (ppuVar9 != (undefined **)0x0) {
    _objc_retain(puVar6);
    uVar10 = *(undefined8 *)((long)ppuVar9 + 8);
    *(undefined **)((long)ppuVar9 + 8) = puVar6;
    _objc_release(uVar10);
  }
  _objc_release(puVar6);
  return (undefined1 *)ppuVar9;
}



/* Entry: 106b13da4; end: 106b13e17; -[UNIMapContentFilter initWithUnifiedGrpcService:] */

undefined1 * FUN_106b13da4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f4f30;
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



/* Entry: 106b13e18; end: 106b13efb; -[UNIMapContentFilter getFilterInfoWithRequest:callOptionsBuilder:handler:] */

void FUN_106b13e18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126d0888;
  _objc_opt_class(PTR_PTR_1126d0888);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e732b8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106b13efc; end: 106b13fdf; -[UNIMapContentFilter getFilterObjByIdWithRequest:callOptionsBuilder:handler:] */

void FUN_106b13efc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126d0890;
  _objc_opt_class(PTR_PTR_1126d0890);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e732d8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106b13fe0; end: 106b140c3; -[UNIMapContentFilter unTakedownSnapWithRequest:callOptionsBuilder:handler:] */

void FUN_106b13fe0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126d0898;
  _objc_opt_class(PTR_PTR_1126d0898);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e732f8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106b140c4; end: 106b141a7; -[UNIMapContentFilter takedownSnapWithRequest:callOptionsBuilder:handler:] */

void FUN_106b140c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126d08a0;
  _objc_opt_class(PTR_PTR_1126d08a0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e73318,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106b141a8; end: 106b1428b; -[UNIMapContentFilter banUserFromMapWithRequest:callOptionsBuilder:handler:] */

void FUN_106b141a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126d08a8;
  _objc_opt_class(PTR_PTR_1126d08a8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e73338,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106b1428c; end: 106b1436f; -[UNIMapContentFilter reportPlaceSnapWithRequest:callOptionsBuilder:handler:] */

void FUN_106b1428c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126d08b0;
  _objc_opt_class(PTR_PTR_1126d08b0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e73358,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106b14370; end: 106b1437b; -[UNIMapContentFilter .cxx_destruct] */

void FUN_106b14370(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b1437c; end: 106b143f7;  */

undefined * FUN_106b1437c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c6840 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e73378,
                        &UNK_10dde5aa8,&UNK_10dde5ae0,4,FUN_106b143f8,0);
    do {
      if (puRam00000001136c6840 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c6840;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c6840,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c6840 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c6840;
}



/* Entry: 106b143f8; end: 106b14403;  */

bool FUN_106b143f8(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 106b14404; end: 106b1446b; +[TakedownSnapRequest descriptor] */

void FUN_106b14404(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6848 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b16830,
                        &PTR____CFConstantStringClassReference_110e73398,&PTR_DAT_113171dc8,
                        &PTR_DAT_113171de0,1,0x10,0x1c);
    puRam00000001136c6848 = puVar1;
  }
  return;
}



/* Entry: 106b1446c; end: 106b144d3; +[TakedownSnapResponse descriptor] */

void FUN_106b1446c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6850 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b16880,
                        &PTR____CFConstantStringClassReference_110e733b8,&PTR_DAT_113171dc8,0,0,4,
                        0x1c);
    puRam00000001136c6850 = puVar1;
  }
  return;
}



/* Entry: 106b144d4; end: 106b1453b; +[BanUserFromMapRequest descriptor] */

void FUN_106b144d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6858 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b168d0,
                        &PTR____CFConstantStringClassReference_110e733d8,&PTR_DAT_113171dc8,
                        &PTR_s_userId_113172140,6,0x28,0x1c);
    puRam00000001136c6858 = puVar1;
  }
  return;
}



/* Entry: 106b1453c; end: 106b145a3; +[BanUserFromMapResponse descriptor] */

void FUN_106b1453c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6860 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b16920,
                        &PTR____CFConstantStringClassReference_110e733f8,&PTR_DAT_113171dc8,
                        &PTR_DAT_113171e20,2,0x10,0x1c);
    puRam00000001136c6860 = puVar1;
  }
  return;
}



/* Entry: 106b145a4; end: 106b1460b; +[UnTakedownSnapRequest descriptor] */

void FUN_106b145a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6868 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b16970,
                        &PTR____CFConstantStringClassReference_110e73418,&PTR_DAT_113171dc8,
                        &PTR_s_snapId_113171e60,2,0x18,0x1c);
    puRam00000001136c6868 = puVar1;
  }
  return;
}



/* Entry: 106b1460c; end: 106b14673; +[UnTakedownSnapResponse descriptor] */

void FUN_106b1460c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6870 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b169c0,
                        &PTR____CFConstantStringClassReference_110e73438,&PTR_DAT_113171dc8,0,0,4,
                        0x1c);
    puRam00000001136c6870 = puVar1;
  }
  return;
}



/* Entry: 106b14674; end: 106b146ef; +[GetFilterObjByIdRequest descriptor] */

undefined * FUN_106b14674(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6878 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b16a10,
                        &PTR____CFConstantStringClassReference_110e73458,&PTR_DAT_113171dc8,
                        &PTR_s_snapId_113171f60,3,0x18,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c6878 = puVar1;
  }
  return puRam00000001136c6878;
}



/* Entry: 106b146f0; end: 106b14757; +[GetFilterObjByIdResponse descriptor] */

void FUN_106b146f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6880 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b16a60,
                        &PTR____CFConstantStringClassReference_110e73478,&PTR_DAT_113171dc8,
                        &PTR_DAT_113171e00,1,0x10,0x1c);
    puRam00000001136c6880 = puVar1;
  }
  return;
}



/* Entry: 106b14758; end: 106b147bf; +[GetFilterInfoRequest descriptor] */

void FUN_106b14758(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6888 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b16ab0,
                        &PTR____CFConstantStringClassReference_110e73498,&PTR_DAT_113171dc8,
                        &PTR_DAT_113171fc0,3,0x18,0x1c);
    puRam00000001136c6888 = puVar1;
  }
  return;
}



/* Entry: 106b147c0; end: 106b1483b; +[ABConfigs descriptor] */

undefined * FUN_106b147c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6890 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b16b00,
                        &PTR____CFConstantStringClassReference_110e734b8,&PTR_DAT_113171dc8,
                        &PTR_s_userId_113172200,6,0x20,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c6890 = puVar1;
  }
  return puRam00000001136c6890;
}



/* Entry: 106b1483c; end: 106b148a3; +[GetFilterInfoResponse descriptor] */

void FUN_106b1483c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6898 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b16b50,
                        &PTR____CFConstantStringClassReference_110e734d8,&PTR_DAT_113171dc8,
                        &PTR_DAT_113171ea0,2,0x18,0x1c);
    puRam00000001136c6898 = puVar1;
  }
  return;
}



/* Entry: 106b148a4; end: 106b1491f; +[GetFilterInfoResponse_ABTuple descriptor] */

undefined * FUN_106b148a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c68a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b16ba0,
                        &PTR____CFConstantStringClassReference_110e734f8,&PTR_DAT_113171dc8,
                        &PTR_DAT_113171ee0,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136c68a0 = puVar1;
  }
  return puRam00000001136c68a0;
}



/* Entry: 106b14920; end: 106b14987; +[DetectorInfo descriptor] */

void FUN_106b14920(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c68a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b16bf0,
                        &PTR____CFConstantStringClassReference_110e73518,&PTR_DAT_113171dc8,
                        &PTR_s_snapId_1131720a0,5,0x20,0x1c);
    puRam00000001136c68a8 = puVar1;
  }
  return;
}



/* Entry: 106b14988; end: 106b149ef; +[FilterInfo descriptor] */

void FUN_106b14988(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c68b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b16c40,
                        &PTR____CFConstantStringClassReference_110e73538,&PTR_DAT_113171dc8,
                        &PTR_s_snapId_113172020,4,0x18,0x1c);
    puRam00000001136c68b0 = puVar1;
  }
  return;
}



/* Entry: 106b149f0; end: 106b14a57; +[ReportPlaceSnapRequest descriptor] */

void FUN_106b149f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c68b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b16c90,
                        &PTR____CFConstantStringClassReference_110e73558,&PTR_DAT_113171dc8,
                        &PTR_s_snapId_113171f20,2,0x10,0x1c);
    puRam00000001136c68b8 = puVar1;
  }
  return;
}



/* Entry: 106b14a58; end: 106b14b4f; +[ReportPlaceSnapResponse descriptor] */

void FUN_106b14a58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c68c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b16ce0,
                        &PTR____CFConstantStringClassReference_110e73578,&PTR_DAT_113171dc8,0,0,4,
                        0x1c);
    puRam00000001136c68c0 = puVar1;
  }
  return;
}



/* Entry: 106b14b50; end: 106b14beb;  */

undefined8 FUN_106b14b50(int param_1)

{
  if (param_1 < 400) {
    if (param_1 < 200) {
      if ((0xf < param_1 - 100U) && (param_1 != 0)) {
        return 0;
      }
    }
    else if ((9 < param_1 - 300U) && (param_1 != 200)) {
      return 0;
    }
  }
  else if (param_1 < 0x259) {
    if (((0x12 < param_1 - 400U) || (param_1 - 400U == 6)) && (2 < param_1 - 500U)) {
      return 0;
    }
  }
  else if (((7 < param_1 - 0x259U) && (7 < param_1 - 700U)) && (param_1 != 800)) {
    return 0;
  }
  return 1;
}



/* Entry: 106b14bec; end: 106b14c67;  */

undefined * FUN_106b14bec(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c68d0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e735b8,
                        &UNK_10dde6096,&UNK_10dde630c,0x19,FUN_106b14c68,0);
    do {
      if (puRam00000001136c68d0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c68d0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c68d0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c68d0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c68d0;
}



/* Entry: 106b14c68; end: 106b14cc3;  */

undefined8 FUN_106b14c68(int param_1)

{
  if (param_1 < 300) {
    if (((6 < param_1 - 100U) && (3 < param_1 - 200U)) && (param_1 != 0)) {
      return 0;
    }
  }
  else if (((9 < param_1 - 400U) && (1 < param_1 - 0x1f5U)) && (param_1 != 300)) {
    return 0;
  }
  return 1;
}



/* Entry: 106b14cc4; end: 106b14d2b; +[RequestFilterMessage descriptor] */

void FUN_106b14cc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c68d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b16d80,
                        &PTR____CFConstantStringClassReference_110e735d8,&PTR_DAT_1131722c0,
                        &PTR_s_snapId_1131722d8,9,0x38,0x1c);
    puRam00000001136c68d8 = puVar1;
  }
  return;
}



/* Entry: 106b14d2c; end: 106b14dcf; -[SCMapComposerPlaceStoryPlayerVendor initWithPageLauncher:mapStoryFetcher:] */

undefined1 *
FUN_106b14d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f4f38;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b14dd0; end: 106b14dd7; -[SCMapComposerPlaceStoryPlayerVendor makePlaceStoryPlayer] */

void FUN_106b14dd0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b75d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_makePlaceStoryPlayerWithViewCont_11260b788,0)
  ;
  return;
}



/* Entry: 106b14dd8; end: 106b14e37; -[SCMapComposerPlaceStoryPlayerVendor makePlaceStoryPlayerWithViewController:] */

void FUN_106b14dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d08c0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0394a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106b14e38; end: 106b14e97; -[SCMapComposerPlaceStoryPlayerVendor makePlaceStoryPlayerWithUIContainer:] */

void FUN_106b14e38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d08c0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0394a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106b14e98; end: 106b14ec7; -[SCMapComposerPlaceStoryPlayerVendor .cxx_destruct] */

void FUN_106b14e98(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b14ec8; end: 106b14fdf; -[SCMapComposerStoryPlayer initWithPresentingViewController:uiContainer:pageLauncher:mapStoryFetcher:] */

undefined1 *
FUN_106b14ec8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f4f40;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b14fe0; end: 106b15137; -[SCMapComposerStoryPlayer preparePlaylistForPlaceID:source:] */

void FUN_106b14fe0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar5 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar5);
  lVar1 = lVar5;
  func_0x00010c0dff20(lVar5,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b1e48;
    func_0x00010c0fd380(PTR_PTR_1126b1e48,param_2,param_3,0,0,0,0,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010794829c(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_106b15138;
    puStack_58 = &UNK_1108599d8;
    _objc_retain(lVar5);
    lStack_50 = lVar5;
    _objc_retain(param_3);
    uStack_48 = param_3;
    func_0x00010bfa9560(uVar3,param_2,puVar2,uVar4,&puStack_70);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uStack_48);
    _objc_release(lStack_50);
    _objc_release(puVar2);
  }
  _objc_release(lVar5);
  _objc_release(param_3);
  return;
}



/* Entry: 106b15138; end: 106b15157;  */

void FUN_106b15138(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_removeObjectForKey__112628f18,
               *(undefined8 *)(param_1 + 0x28));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setObject_forKey__112651b80,param_2);
  return;
}



/* Entry: 106b15158; end: 106b152f3; -[SCMapComposerStoryPlayer launchRecencyOrderedPlaybackWithPlaceId:node:analytics:providerPhotoType:] */

void FUN_106b15158(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010be187a0(param_1);
  if (param_6 == 0) {
    lVar5 = 2;
  }
  else {
    lVar5 = param_6;
    func_0x00010c067ec0();
  }
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c0dff20(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if ((lVar1 != 0) && ((int)lVar5 == 2)) {
    lVar2 = lVar1;
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      func_0x00010be84280(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106b1528c;
    }
    _objc_retain(lVar1);
    lVar2 = lVar1;
  }
  uVar3 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be71040(param_1,param_2,param_3,uVar3,param_5,lVar5,0,0,0,lVar2,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010be48a60(param_1,param_2,lVar4,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar2);
LAB_106b1528c:
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106b152f4; end: 106b15483; -[SCMapComposerStoryPlayer launchRankOrderedPlaybackWithPlaceId:node:startingSnapId:analytics:providerPhotoType:] */

void FUN_106b152f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be187a0(param_1);
  if (param_7 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_7;
    func_0x00010c067ec0(param_7);
  }
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_6;
  func_0x00010c0fd4a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110db9eb8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = param_1;
  func_0x00010be71040(param_1,param_2,param_3,uVar1,param_6,lVar4,1,puVar2,param_5,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar1);
  func_0x00010be48a60(param_1,param_2,uVar3,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106b15484; end: 106b1548f; -[SCMapComposerStoryPlayer pushToValdiMarshaller:] */

undefined8 FUN_106b15484(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df248;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  func_0x00010afa3b2c();
  return param_3;
}



/* Entry: 106b15490; end: 106b1582b; -[SCMapComposerStoryPlayer _payloadWithPlaceId:baseView:analytics:providerPhotoType:useAlternateRanking:requestId:initialSnapId:prefetchedStorySequences:transition:] */

void FUN_106b15490(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,int param_6,undefined4 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uStack_c8;
  undefined8 uStack_a8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  uStack_a8 = *(undefined **)(param_1 + 0x20);
  if (uStack_a8 == (undefined *)0x0) {
    uStack_a8 = PTR_PTR_1126aead8;
    _objc_alloc();
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010c038f40(uStack_a8,param_2,param_1,0);
    _objc_release(param_1);
  }
  else {
    _objc_retain();
  }
  puVar1 = PTR_PTR_1126d08c8;
  _objc_alloc();
  lVar2 = param_5;
  func_0x00010c247d20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bc92e28();
  _objc_release(lVar2);
  if (lVar3 < 0x27) {
    if (lVar3 == 0x1c) {
      uVar16 = 4;
      goto LAB_106b155e8;
    }
    if (lVar3 == 0x22) {
      uVar16 = 3;
      goto LAB_106b155e8;
    }
  }
  else {
    uVar16 = 2;
    if ((lVar3 == 0x6c) || (lVar3 == 0x65)) goto LAB_106b155e8;
    if (lVar3 == 0x27) {
      uVar16 = 1;
      goto LAB_106b155e8;
    }
  }
  uVar16 = 0;
LAB_106b155e8:
  _objc_retain(param_5);
  lVar2 = param_5;
  func_0x00010c0ba060();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uStack_c8 = 9;
  }
  else {
    lVar3 = param_5;
    func_0x00010c0ba060();
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = lVar3;
    func_0x00010bb020b8();
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126d08d0;
  _objc_alloc();
  lVar2 = param_5;
  func_0x00010c247d20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bc92e28();
  lVar5 = param_5;
  func_0x00010c29e220();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010baf2e4c();
  lVar7 = param_5;
  func_0x00010c0b9de0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bb01b6c();
  lVar9 = param_5;
  func_0x00010c0b97e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_5;
  func_0x00010c0b9ce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c2827c0();
  lVar12 = param_5;
  func_0x00010c0bac20();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c2827c0();
  lVar14 = param_5;
  func_0x00010c0fd4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c2827c0();
  func_0x00010c04ac80(puVar4,param_2,lVar3,lVar6,uStack_c8,lVar8,lVar9,lVar11,lVar13,lVar15);
  _objc_release(lVar14);
  _objc_release(lVar12);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar7);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(param_5);
  func_0x00010c060980(puVar1,param_2,param_3,param_6 == 1,param_6 != 0,param_7,param_8,param_9,
                      param_10,uVar16,param_11,puVar4,uStack_a8,param_4);
  _objc_release(puVar4);
  _objc_release(uStack_a8);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106b1582c; end: 106b15973; -[SCMapComposerStoryPlayer _launchWithPayload:placeId:] */

void FUN_106b1582c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b7e38;
  func_0x00010c131720();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar4);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106b15974;
  puStack_68 = &UNK_11084c4a0;
  uStack_60 = uVar4;
  uStack_58 = param_3;
  uStack_50 = param_4;
  puStack_48 = puVar1;
  _objc_retain(puVar1);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(uVar4);
  func_0x0001000d76cc("APPSTORE",&puStack_80);
  puVar2 = puVar1;
  func_0x00010bfb0d80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106b15974; end: 106b15a27;  */

void FUN_106b15974(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106b15a28;
  puStack_48 = &UNK_1109612a0;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar2;
  _objc_retain(uVar4);
  uStack_38 = uVar4;
  func_0x00010c08c080(uVar3,param_2,uVar1,&puStack_60);
  _objc_release(uVar3);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  return;
}



/* Entry: 106b15a28; end: 106b15a47;  */

void FUN_106b15a28(long param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if (param_2 != 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_next__112614028,puVar1);
  return;
}



/* Entry: 106b15a48; end: 106b15ac7; -[SCMapComposerStoryPlayer _publishPlaybackFailureAsynchronouslyForPlaceId:] */

void FUN_106b15a48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b7e38;
  func_0x00010c131720(PTR_PTR_1126b7e38,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  puVar2 = puVar1;
  func_0x00010bfb0d80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106b15ac8; end: 106b15adb; -[SCMapComposerStoryPlayer _forceDismissKeyboard] */

/* WARNING: Possible PIC construction at 0x0001000d7714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000d774c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000d779c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000d7750) */
/* WARNING: Removing unreachable block (ram,0x0001000d7718) */
/* WARNING: Removing unreachable block (ram,0x0001000d77a0) */

void FUN_106b15ac8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61174(&PTR___NSConcreteGlobalBlock_1109612d0);
  func_0x000107c4a02c();
  if ((int)puVar1 == 0) {
    func_0x0001000d77b8();
    func_0x000107c61180();
  }
  else {
    func_0x0001005855a8();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(&PTR___NSConcreteGlobalBlock_1109612d0);
  return;
}



/* Entry: 106b15adc; end: 106b15b27;  */

void FUN_106b15adc(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15b480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b15b28; end: 106b15b2f; -[SCMapComposerStoryPlayer presentingUIContainer] */

undefined8 FUN_106b15b28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106b15b30; end: 106b15b5f; -[SCMapComposerStoryPlayer setPresentingUIContainer:] */

void FUN_106b15b30(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106b15b60; end: 106b15b77; -[SCMapComposerStoryPlayer presentingViewController] */

void FUN_106b15b60(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b15b78; end: 106b15b83; -[SCMapComposerStoryPlayer setPresentingViewController:] */

void FUN_106b15b78(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 106b15b84; end: 106b15bd3; -[SCMapComposerStoryPlayer .cxx_destruct] */

void FUN_106b15b84(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b15bd4; end: 106b15c3f; -[SCMapStoriesDataProvider initWithPlaybackStorySequences:] */

undefined1 * FUN_106b15bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f4f48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1dd920(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b15c40; end: 106b15db3; -[SCMapStoriesDataProvider setPlaybackStorySequences:] */

void FUN_106b15c40(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  long lStack_150;
  long lStack_148;
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
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(long *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar3 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        uVar5 = *(undefined8 *)(lStack_128 + lVar7 * 8);
        uVar1 = uVar5;
        func_0x00010c259cc0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0560(puVar2,param_2,uVar5,uVar1);
        _objc_release(uVar1);
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar2;
  _objc_release(uVar1);
  lVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_106b15db4;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lStack_150 = param_1;
  lStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(lVar3 + 8);
  puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_170 = 0xc2000000;
  pcStack_168 = FUN_106b15e54;
  puStack_160 = &UNK_1109612f0;
  puStack_158 = puVar2;
  _objc_retain();
  func_0x00010bf97e80(uVar1,param_2,&puStack_178);
  puVar4 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puStack_158);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106b15db4; end: 106b15e53; -[SCMapStoriesDataProvider dataModels] */

void FUN_106b15db4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106b15e54;
  puStack_30 = &UNK_1109612f0;
  puStack_28 = puVar1;
  _objc_retain();
  func_0x00010bf97e80(uVar3,param_2,&puStack_48);
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puStack_28);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b15e54; end: 106b15ef3;  */

void FUN_106b15e54(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b4d28;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c259cc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c04dcc0(puVar1);
  _objc_release(uVar2);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b15ef4; end: 106b15efb; -[SCMapStoriesDataProvider customStoryPlaybackSequenceByPublicationId:clientId:] */

undefined8 FUN_106b15ef4(void)

{
  return 0;
}



/* Entry: 106b15efc; end: 106b15f03; -[SCMapStoriesDataProvider userStoryPlaybackSequenceByStoryId:clientId:] */

undefined8 FUN_106b15efc(void)

{
  return 0;
}



/* Entry: 106b15f04; end: 106b15f0b; -[SCMapStoriesDataProvider ourStoryPlaybackSequenceByOurStoryId:clientId:] */

undefined8 FUN_106b15f04(void)

{
  return 0;
}



/* Entry: 106b15f0c; end: 106b15f13; -[SCMapStoriesDataProvider topicStoryPlaybackSequenceByTopicStoryId:] */

undefined8 FUN_106b15f0c(void)

{
  return 0;
}



/* Entry: 106b15f14; end: 106b15f1b; -[SCMapStoriesDataProvider singleSnapStoryPlaybackSequenceByStoryId:] */

undefined8 FUN_106b15f14(void)

{
  return 0;
}



/* Entry: 106b15f1c; end: 106b15f23; -[SCMapStoriesDataProvider bundleStoryPlaybackSequenceByBundleStoryId:] */

undefined8 FUN_106b15f1c(void)

{
  return 0;
}



/* Entry: 106b15f24; end: 106b15f2b; -[SCMapStoriesDataProvider mapStoryPlaybackSequenceByStoryId:] */

void FUN_106b15f24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_objectForKey__1126159e0);
  return;
}



/* Entry: 106b15f2c; end: 106b15f33; -[SCMapStoriesDataProvider savedStoryPlaybackSequenceByStoryId:] */

undefined8 FUN_106b15f2c(void)

{
  return 0;
}



/* Entry: 106b15f34; end: 106b160ef; -[SCMapStoriesDataProvider storiesPlaybackMetadataForStoryIds:completion:] */

void FUN_106b15f34(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010bf529e0(param_3);
    func_0x00010bffc4a0(puVar2);
    _objc_retain(param_3);
    lVar3 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        lVar4 = *(long *)(param_1 + 0x10);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 != 0) {
          lVar5 = lVar4;
          func_0x00010c25b340(lVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar2);
          _objc_release(lVar5);
        }
        _objc_release(lVar4);
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    (**(code **)(param_4 + 0x10))(param_4,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 106b160f0; end: 106b160f3; -[SCMapStoriesDataProvider triggerPaginationByCompositeId:identifier:] */

void FUN_106b160f0(void)

{
  return;
}



/* Entry: 106b160f4; end: 106b160fb; -[SCMapStoriesDataProvider playbackStorySequences] */

undefined8 FUN_106b160f4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106b160fc; end: 106b1612b; -[SCMapStoriesDataProvider .cxx_destruct] */

void FUN_106b160fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b1612c; end: 106b16187; -[SCMapInlinePlaybackOperaPlaylistPlugin initWithOperaViewSize:shouldAutoReplay:] */

void FUN_106b1612c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f4f50;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
    *(undefined1 *)((long)puVar1 + 0x20) = param_5;
  }
  return;
}



/* Entry: 106b16188; end: 106b161f7; -[SCMapInlinePlaybackOperaPlaylistPlugin handleCommand:] */

void FUN_106b16188(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106b161f8;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106b16240;
  puStack_48 = &UNK_110842e18;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bf400(param_3,param_2,&puStack_38,&puStack_60);
  return;
}



/* Entry: 106b161f8; end: 106b1623f;  */

void FUN_106b161f8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x18;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29e000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13d1c0();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b16240; end: 106b162bf;  */

void FUN_106b16240(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x18;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29e000();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_opt_class(uVar3);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6200(lVar2,param_2,0,uVar3);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b162c0; end: 106b162c3; -[SCMapInlinePlaybackOperaPlaylistPlugin setPlaylistItemController:] */

void FUN_106b162c0(void)

{
  return;
}



/* Entry: 106b162c4; end: 106b1637f; -[SCMapInlinePlaybackOperaPlaylistPlugin setOperaControlling:] */

void FUN_106b162c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x18,param_3);
  uVar1 = param_3;
  func_0x00010c27f040(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27f020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c29e000(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c2241a0(0,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b16380; end: 106b1650f; -[SCMapInlinePlaybackOperaPlaylistPlugin updateOperaConfiguration:] */

void FUN_106b16380(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b23c0;
  func_0x00010c0ea1a0(PTR_PTR_1126b23c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a9880(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8),*(undefined8 *)(param_1 + 8),
                      *(undefined8 *)(param_1 + 0x10));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2acc20(puVar1,param_2,0xf);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b5c00(puVar1,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aba80(puVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c2ac1c0(0,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c83b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a8200(puVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126caf60;
  _objc_opt_new(PTR_PTR_1126caf60);
  func_0x00010c2b25c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf21f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b7380(puVar1,param_2,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106b16510; end: 106b1651b; -[SCMapInlinePlaybackOperaPlaylistPlugin registeredEventsForOperaSession] */

undefined * FUN_106b16510(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 106b1651c; end: 106b1651f; -[SCMapInlinePlaybackOperaPlaylistPlugin operaViewDidSendEvent:page:params:] */

void FUN_106b1651c(void)

{
  return;
}



/* Entry: 106b16520; end: 106b16523; -[SCMapInlinePlaybackOperaPlaylistPlugin extraPropertiesProvider] */

void FUN_106b16520(void)

{
  return;
}



/* Entry: 106b16524; end: 106b165e3; -[SCMapInlinePlaybackOperaPlaylistPlugin extraPropertiesForDataModel:item:baseOperaPage:completion:] */

void FUN_106b16524(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long in_x5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(in_x5);
  func_0x00010bf71e20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x00010c1d0560(puVar1);
  }
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  (**(code **)(in_x5 + 0x10))(in_x5,puVar2,0);
  _objc_release(in_x5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b165e4; end: 106b165eb; -[SCMapInlinePlaybackOperaPlaylistPlugin .cxx_destruct] */

void FUN_106b165e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x18);
  return;
}



/* Entry: 106b165ec; end: 106b165ef; -[SCMapKioskModeOperaPlugin operaViewDidSendEvent:page:params:] */

void FUN_106b165ec(void)

{
  return;
}



/* Entry: 106b165f0; end: 106b165fb; -[SCMapKioskModeOperaPlugin registeredEventsForOperaSession] */

undefined * FUN_106b165f0(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 106b165fc; end: 106b165ff; -[SCMapKioskModeOperaPlugin setPlaylistItemController:] */

void FUN_106b165fc(void)

{
  return;
}



/* Entry: 106b16600; end: 106b166a7; -[SCMapKioskModeOperaPlugin updateOperaConfiguration:] */

void FUN_106b16600(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b23c0;
  func_0x00010c0ea1a0(PTR_PTR_1126b23c0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8410);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a8200(puVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106b166a8; end: 106b16eb3; -[SCMapStoryPlaybackOperaPluginCreator initWithUserSession:storiesServices:legacyStoriesServices:storiesDebuggingServices:storiesBlizzardLoggingServices:readReceiptServices:snapchatterServices:navigationServices:playbackScope:contextOperaPluginProvider:lazyEventsController:circumstanceEngine:remixOperaPluginProvider:networkConnectivityMonitor:blizzardLogger:unlockableViewTracker:lazyDataFetcher:grapheneMetricsEmitter:grapheneRegistry:legacyStoriesTooltipsService:musicContentRestrictionServices:imageDownloader:snapchatterUserInfoProvider:externalLinkSendingService:safetyReportScopeExposer:playbackAssetRepository:saveFriendStoryOperaPluginProvider:bloopsReportScopeExposer:temporaryFileWriter:playbackMediaResolver:ourStoriesAttributionManager:notificationOSSettingsRetriever:offPlatformShareServices:discoverFeedInteractionHistoryManager:spotlightShareSender:spotlightPlatformAnalyticsCreator:contentBlocker:storiesConfigProvider:mapContentFilter:imageFetchingService:storiesUsageLogger:] */

undefined8 *
FUN_106b166a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
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
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
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
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  puStack_70 = PTR_PTR_1126f4f58;
  puVar2 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = puVar2[1];
    puVar2[1] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar2[2];
    puVar2[2] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar2[4];
    puVar2[4] = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar2[5];
    puVar2[5] = param_7;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar2[6];
    puVar2[6] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = puVar2[7];
    puVar2[7] = param_9;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar2[3];
    puVar2[3] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = puVar2[8];
    puVar2[8] = param_10;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar3 = puVar2[0xb];
    puVar2[0xb] = param_11;
    _objc_release(uVar3);
    _objc_retain(param_12);
    uVar3 = puVar2[10];
    puVar2[10] = param_12;
    _objc_release(uVar3);
    _objc_retain(param_21);
    uVar3 = puVar2[0x15];
    puVar2[0x15] = param_21;
    _objc_release(uVar3);
    puVar2[9] = 0x15;
    _objc_retain(param_23);
    uVar3 = puVar2[0x17];
    puVar2[0x17] = param_23;
    _objc_release(uVar3);
    _objc_retain(param_13);
    uVar3 = puVar2[0xc];
    puVar2[0xc] = param_13;
    _objc_release(uVar3);
    _objc_retain(param_36);
    uVar3 = puVar2[0xd];
    puVar2[0xd] = param_36;
    _objc_release(uVar3);
    _objc_retain(param_14);
    uVar3 = puVar2[0xe];
    puVar2[0xe] = param_14;
    _objc_release(uVar3);
    _objc_retain(param_15);
    uVar3 = puVar2[0xf];
    puVar2[0xf] = param_15;
    _objc_release(uVar3);
    _objc_retain(param_16);
    uVar3 = puVar2[0x10];
    puVar2[0x10] = param_16;
    _objc_release(uVar3);
    _objc_retain(param_17);
    uVar3 = puVar2[0x11];
    puVar2[0x11] = param_17;
    _objc_release(uVar3);
    _objc_retain(param_18);
    uVar3 = puVar2[0x12];
    puVar2[0x12] = param_18;
    _objc_release(uVar3);
    _objc_retain(param_19);
    uVar3 = puVar2[0x13];
    puVar2[0x13] = param_19;
    _objc_release(uVar3);
    _objc_retain(param_20);
    uVar3 = puVar2[0x14];
    puVar2[0x14] = param_20;
    _objc_release(uVar3);
    _objc_retain(param_22);
    uVar3 = puVar2[0x16];
    puVar2[0x16] = param_22;
    _objc_release(uVar3);
    _objc_retain(param_24);
    uVar3 = puVar2[0x18];
    puVar2[0x18] = param_24;
    _objc_release(uVar3);
    _objc_retain(param_25);
    uVar3 = puVar2[0x19];
    puVar2[0x19] = param_25;
    _objc_release(uVar3);
    _objc_retain(param_26);
    uVar3 = puVar2[0x1a];
    puVar2[0x1a] = param_26;
    _objc_release(uVar3);
    _objc_retain(param_27);
    uVar3 = puVar2[0x1b];
    puVar2[0x1b] = param_27;
    _objc_release(uVar3);
    _objc_retain(param_28);
    uVar3 = puVar2[0x1c];
    puVar2[0x1c] = param_28;
    _objc_release(uVar3);
    _objc_retain(param_29);
    uVar3 = puVar2[0x1d];
    puVar2[0x1d] = param_29;
    _objc_release(uVar3);
    _objc_retain(param_30);
    uVar3 = puVar2[0x1e];
    puVar2[0x1e] = param_30;
    _objc_release(uVar3);
    _objc_retain(param_31);
    uVar3 = puVar2[0x1f];
    puVar2[0x1f] = param_31;
    _objc_release(uVar3);
    _objc_retain(param_32);
    uVar3 = puVar2[0x20];
    puVar2[0x20] = param_32;
    _objc_release(uVar3);
    _objc_retain(param_35);
    uVar3 = puVar2[0x24];
    puVar2[0x24] = param_35;
    _objc_release(uVar3);
    _objc_retain(param_37);
    uVar3 = puVar2[0x25];
    puVar2[0x25] = param_37;
    _objc_release(uVar3);
    _objc_retain(param_38);
    uVar3 = puVar2[0x26];
    puVar2[0x26] = param_38;
    _objc_release(uVar3);
    uVar1 = (undefined1)puVar2[0xe];
    func_0x00010bf1f440();
    *(undefined1 *)(puVar2 + 0x23) = uVar1;
    _objc_retain(param_33);
    uVar3 = puVar2[0x21];
    puVar2[0x21] = param_33;
    _objc_release(uVar3);
    _objc_retain(param_34);
    uVar3 = puVar2[0x22];
    puVar2[0x22] = param_34;
    _objc_release(uVar3);
    _objc_retain(param_39);
    uVar3 = puVar2[0x27];
    puVar2[0x27] = param_39;
    _objc_release(uVar3);
    _objc_retain(param_40);
    uVar3 = puVar2[0x28];
    puVar2[0x28] = param_40;
    _objc_release(uVar3);
    _objc_retain(param_41);
    uVar3 = puVar2[0x29];
    puVar2[0x29] = param_41;
    _objc_release(uVar3);
    _objc_retain(param_42);
    uVar3 = puVar2[0x2a];
    puVar2[0x2a] = param_42;
    _objc_release(uVar3);
    _objc_retain(param_43);
    uVar3 = puVar2[0x2b];
    puVar2[0x2b] = param_43;
    _objc_release(uVar3);
  }
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
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
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
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
  return puVar2;
}



/* Entry: 106b16eb4; end: 106b1743b; -[SCMapStoryPlaybackOperaPluginCreator createStoriesPluginWithPlaybackDataProvider:initialClientId:] */

void FUN_106b16eb4(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined *puVar27;
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
  ulong uVar42;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c08fa60();
  puVar8 = PTR_PTR_1126c5b20;
  _objc_alloc();
  func_0x00010c04de40();
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  puVar9 = PTR_PTR_1126c5b28;
  _objc_alloc();
  uVar10 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010bf024c0();
  _objc_retainAutoreleasedReturnValue();
  uVar39 = uVar10;
  func_0x00010c0b9ce0();
  uVar11 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010bf024c0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c0bac20();
  uVar13 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010bf024c0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010c0fd4a0();
  uVar15 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010bf024c0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010c247d20();
  uVar17 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010bf024c0(uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010c0b9de0();
  uVar19 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010bf024c0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar19;
  func_0x00010c0ba060();
  uVar21 = *(ulong *)(param_2 + 0x58);
  func_0x00010bf024c0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar21;
  func_0x00010c0b97e0();
  _objc_retainAutoreleasedReturnValue();
  uVar42 = uVar22;
  func_0x00010c04e060(puVar9,param_3,(long)(param_1 * 1000.0),uVar39,uVar12,uVar14,uVar16,uVar18,
                      uVar20,0,uVar22);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar19);
  _objc_release(uVar17);
  _objc_release(uVar15);
  _objc_release(uVar13);
  _objc_release(uVar11);
  _objc_release(uVar10);
  puVar23 = PTR_PTR_1126c5b30;
  _objc_alloc();
  func_0x00010bffe1e0();
  puVar24 = PTR_PTR_1126c2d68;
  uVar39 = 0;
  if ((*(byte *)(param_2 + 0x118) & 1) == 0) {
    uVar39 = *(undefined8 *)(param_2 + 0x158);
  }
  _objc_retain(uVar39);
  _objc_alloc();
  uVar36 = *(undefined8 *)(param_2 + 8);
  uVar25 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c2587e0();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar25;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = *(undefined8 *)(param_2 + 0x40);
  puVar27 = PTR_PTR_1126c5b38;
  func_0x00010c258f40();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  uVar41 = *(undefined8 *)(param_2 + 0x68);
  uVar40 = *(undefined8 *)(param_2 + 0x60);
  uVar12 = *(undefined8 *)(param_2 + 0x128);
  uVar17 = *(undefined8 *)(param_2 + 0x130);
  uVar30 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf66500();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010bf27540();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = *(undefined8 *)(param_2 + 0x60);
  uVar14 = *(undefined8 *)(param_2 + 0x70);
  uVar19 = *(undefined8 *)(param_2 + 0x78);
  uVar16 = *(undefined8 *)(param_2 + 0x80);
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  uVar18 = *(undefined8 *)(param_2 + 0x90);
  uVar2 = *(undefined8 *)(param_2 + 0x98);
  uVar20 = *(undefined8 *)(param_2 + 0xa0);
  uVar3 = *(undefined8 *)(param_2 + 0xa8);
  uVar10 = *(undefined8 *)(param_2 + 0xb0);
  uVar4 = *(undefined8 *)(param_2 + 0xb8);
  uVar11 = *(undefined8 *)(param_2 + 0xc0);
  uVar5 = *(undefined8 *)(param_2 + 200);
  uVar13 = *(undefined8 *)(param_2 + 0xd0);
  uVar6 = *(undefined8 *)(param_2 + 0xd8);
  uVar15 = *(undefined8 *)(param_2 + 0xe0);
  uVar7 = *(undefined8 *)(param_2 + 0xe8);
  uVar35 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c258d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05e880(puVar24,param_3,uVar36,param_4,uVar26,0,uVar37,puVar9,puVar8,0,
                      uVar42 & 0xffffffffffffff00,param_5,puVar27,uVar28,uVar29,uVar40,uVar41,uVar12
                      ,uVar17,0,puVar23,&UNK_10796d390,&UNK_10796f9f4,uVar30,0,0,&UNK_10795e4a0,
                      uVar31,uVar32,uVar33,uVar39,uVar34,0,0,uVar38,uVar14,uVar19,uVar7,uVar16,uVar1
                      ,uVar18,uVar2,uVar20,uVar3,uVar10,uVar4,uVar11,uVar5,uVar6,uVar13,uVar15,0,0,0
                      ,0);
  _objc_release(uVar39);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(puVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(puVar23);
  _objc_release(puVar9);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar24);
  return;
}



/* Entry: 106b1743c; end: 106b17483; -[SCMapStoryPlaybackOperaPluginCreator createContextPlugin] */

void FUN_106b1743c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf556a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106b17484; end: 106b174db; -[SCMapStoryPlaybackOperaPluginCreator createSpotlightPlugin] */

void FUN_106b17484(void)

{
  _objc_alloc(PTR_PTR_1126cc5b0);
  func_0x00010bff71e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b174dc; end: 106b1750f; -[SCMapStoryPlaybackOperaPluginCreator createContentBlockingPlugin] */

void FUN_106b174dc(void)

{
  _objc_alloc(PTR_PTR_1126cc5c8);
  func_0x00010c002d60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b17510; end: 106b17587; -[SCMapStoryPlaybackOperaPluginCreator createMapInlinePlaybackOperaPluginForBaseView:shouldAutoReplay:] */

void FUN_106b17510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d08d8;
  _objc_retain(param_7);
  _objc_alloc(puVar1);
  func_0x00010bf20c00(param_7);
  _objc_release(param_7);
  func_0x00010c031f60(param_3,param_4,puVar1,param_6,param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b17588; end: 106b1778b; -[SCMapStoryPlaybackOperaPluginCreator createDiscoverFeedStoryLoggingPluginForMapStoryType:pageType:pageSessionId:] */

void FUN_106b17588(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  FUN_106b1c878();
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  FUN_106b1c8b8();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ce9c0;
  _objc_alloc();
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c2587e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04a7a0();
  _objc_release(param_5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar3 + 0x158,0);
  _objc_storeStrong(puVar3 + 0x150,0);
  _objc_storeStrong(puVar3 + 0x148,0);
  _objc_storeStrong(puVar3 + 0x140,0);
  _objc_storeStrong(puVar3 + 0x138,0);
  _objc_storeStrong(puVar3 + 0x130,0);
  _objc_storeStrong(puVar3 + 0x128,0);
  _objc_storeStrong(puVar3 + 0x120,0);
  _objc_storeStrong(puVar3 + 0x110,0);
  _objc_storeStrong(puVar3 + 0x108,0);
  _objc_storeStrong(puVar3 + 0x100,0);
  _objc_storeStrong(puVar3 + 0xf8,0);
  _objc_storeStrong(puVar3 + 0xf0,0);
  _objc_storeStrong(puVar3 + 0xe8,0);
  _objc_storeStrong(puVar3 + 0xe0,0);
  _objc_storeStrong(puVar3 + 0xd8,0);
  _objc_storeStrong(puVar3 + 0xd0,0);
  _objc_storeStrong(puVar3 + 200,0);
  _objc_storeStrong(puVar3 + 0xc0,0);
  _objc_storeStrong(puVar3 + 0xb8,0);
  _objc_storeStrong(puVar3 + 0xb0,0);
  _objc_storeStrong(puVar3 + 0xa8,0);
  _objc_storeStrong(puVar3 + 0xa0,0);
  _objc_storeStrong(puVar3 + 0x98,0);
  _objc_storeStrong(puVar3 + 0x90,0);
  _objc_storeStrong(puVar3 + 0x88,0);
  _objc_storeStrong(puVar3 + 0x80,0);
  _objc_storeStrong(puVar3 + 0x78,0);
  _objc_storeStrong(puVar3 + 0x70,0);
  _objc_storeStrong(puVar3 + 0x68,0);
  _objc_storeStrong(puVar3 + 0x60,0);
  _objc_storeStrong(puVar3 + 0x58,0);
  _objc_storeStrong(puVar3 + 0x50,0);
  _objc_storeStrong(puVar3 + 0x40,0);
  _objc_storeStrong(puVar3 + 0x38,0);
  _objc_storeStrong(puVar3 + 0x30,0);
  _objc_storeStrong(puVar3 + 0x28,0);
  _objc_storeStrong(puVar3 + 0x20,0);
  _objc_storeStrong(puVar3 + 0x18,0);
  _objc_storeStrong(puVar3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar3 + 8,0);
  return;
}



/* Entry: 106b1778c; end: 106b179cf; -[SCMapStoryPlaybackOperaPluginCreator .cxx_destruct] */

void FUN_106b1778c(long param_1)

{
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
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



/* Entry: 106b179d0; end: 106b17a8b; -[SCMapComposerPlaceStoryServiceProvider _composerStoryPlayerVendor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b179d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126d08e8;
  _objc_alloc(PTR_PTR_1126d08e8);
  lVar2 = param_1 + _DAT_112758418;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0f14e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11275841c;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c0b9f40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c033000(puVar1,param_2,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106b17a8c; end: 106b17acf; -[SCMapComposerPlaceStoryServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b17a8c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112758418);
  _objc_destroyWeak(param_1 + _DAT_11275841c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112758420);
  return;
}



/* Entry: 106b17ad0; end: 106b17b5b; -[SCMapStoryPlaybackViewController initWithCircumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106b17ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f4f60;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112758424;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b17b5c; end: 106b17b8f; -[SCMapStoryPlaybackViewController viewDidAppear:] */

void FUN_106b17b5c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f4f60;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_viewDidAppear__112684bd0);
  return;
}



/* Entry: 106b17b90; end: 106b17bc3; -[SCMapStoryPlaybackViewController viewWillDisappear:] */

void FUN_106b17b90(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f4f60;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_viewWillDisappear__112685438);
  return;
}



/* Entry: 106b17bc4; end: 106b17bcb; -[SCMapStoryPlaybackViewController pageViewName] */

undefined8 FUN_106b17bc4(void)

{
  return 0x93;
}


