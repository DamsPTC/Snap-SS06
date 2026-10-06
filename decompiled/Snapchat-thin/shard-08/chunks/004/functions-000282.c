/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1060e71d0; end: 1060e71db;  */

bool FUN_1060e71d0(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 1060e71dc; end: 1060e7257;  */

undefined * FUN_1060e71dc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c2e68 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e3e138,
                        &UNK_10ddd4010,&UNK_10ddd406c,10,FUN_1060e7258,0);
    do {
      if (puRam00000001136c2e68 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c2e68;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c2e68,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c2e68 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c2e68;
}



/* Entry: 1060e7258; end: 1060e7263;  */

bool FUN_1060e7258(uint param_1)

{
  return param_1 < 10;
}



/* Entry: 1060e7264; end: 1060e72cb; +[SCPaymentsPaymentDetail descriptor] */

void FUN_1060e7264(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2e70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac6650,
                        &PTR____CFConstantStringClassReference_110e3e158,
                        &PTR_s_snapchat_payments_commerce_order_11313ded0,&PTR_DAT_11313dee8,0xf,
                        0x70,0x1c);
    puRam00000001136c2e70 = puVar1;
  }
  return;
}



/* Entry: 1060e72cc; end: 1060e7333; +[SCPaymentsDiscountDetail descriptor] */

void FUN_1060e72cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2e78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac66f0,
                        &PTR____CFConstantStringClassReference_110e3e178,
                        &PTR_s_snapchat_payments_commerce_order_11313e0c8,&PTR_DAT_11313e0e0,5,0x28,
                        0x1c);
    puRam00000001136c2e78 = puVar1;
  }
  return;
}



/* Entry: 1060e7334; end: 1060e74cf; -[BTAuthenticationInsight initWithJSON:] */

undefined1 * FUN_1060e7334(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126efa30;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar2 == (undefined8 *)0x0) goto LAB_1060e7484;
  ppuVar4 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010bf0a9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(ppuVar4);
  if (ppuVar5 == (undefined **)0x0) {
    ppuVar4 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010bf0a9e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(ppuVar4);
    if (ppuVar5 != (undefined **)0x0) goto LAB_1060e7400;
    iVar1 = 0;
    func_0x00010c0720c0();
    ppuVar4 = (undefined **)0x0;
    ppuVar5 = (undefined **)0x0;
    if (iVar1 != 0) goto LAB_1060e7444;
  }
  else {
LAB_1060e7400:
    ppuVar5 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar5;
    func_0x00010bf0a9e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    ppuVar5 = ppuVar4;
    func_0x00010c0720c0();
    if (((ulong)ppuVar5 & 1) == 0) {
      if (ppuVar4 == (undefined **)0x0) {
        ppuVar5 = (undefined **)0x0;
        goto LAB_1060e7478;
      }
    }
    else {
LAB_1060e7444:
      _objc_release(ppuVar4);
      ppuVar4 = &PTR____CFConstantStringClassReference_110e3e1f8;
    }
    ppuVar5 = ppuVar4;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
  }
LAB_1060e7478:
  uVar3 = *(undefined8 *)((long)puVar2 + 8);
  *(undefined ***)((long)puVar2 + 8) = ppuVar5;
  _objc_release(uVar3);
LAB_1060e7484:
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 1060e74d0; end: 1060e74d7; -[BTAuthenticationInsight regulationEnvironment] */

undefined8 FUN_1060e74d0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1060e74d8; end: 1060e74df; -[BTAuthenticationInsight setRegulationEnvironment:] */

void FUN_1060e74d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060e74e0; end: 1060e74eb; -[BTAuthenticationInsight .cxx_destruct] */

void FUN_1060e74e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060e74ec; end: 1060e74f7; -[BTCard init] */

void FUN_1060e74ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c033790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithParameters__1125ea7e0,PTR____NSDictionary0__struct_11034ab58);
  return;
}



/* Entry: 1060e74f8; end: 1060e7a17; -[BTCard initWithParameters:] */

undefined1 * FUN_1060e74f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126efa38;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = param_3;
    func_0x00010c0d3c80();
    uVar6 = *(undefined8 *)((long)puVar1 + 0xa0);
    *(long *)((long)puVar1 + 0xa0) = lVar2;
    _objc_release(uVar6);
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x10);
    *(long *)((long)puVar1 + 0x10) = lVar2;
    _objc_release(uVar6);
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf44740();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010bf529e0();
    if (lVar2 == 2) {
      lVar2 = lVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)puVar1 + 0x18);
      *(long *)((long)puVar1 + 0x18) = lVar2;
      _objc_release(uVar6);
      lVar2 = lVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)puVar1 + 0x20);
      *(long *)((long)puVar1 + 0x20) = lVar2;
      _objc_release(uVar6);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x30);
    *(long *)((long)puVar1 + 0x30) = lVar4;
    _objc_release(uVar6);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x28);
    *(long *)((long)puVar1 + 0x28) = lVar2;
    _objc_release(uVar6);
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x58);
    *(long *)((long)puVar1 + 0x58) = lVar4;
    _objc_release(uVar6);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x60);
    *(long *)((long)puVar1 + 0x60) = lVar4;
    _objc_release(uVar6);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x68);
    *(long *)((long)puVar1 + 0x68) = lVar4;
    _objc_release(uVar6);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x70);
    *(long *)((long)puVar1 + 0x70) = lVar4;
    _objc_release(uVar6);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x78);
    *(long *)((long)puVar1 + 0x78) = lVar4;
    _objc_release(uVar6);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x80);
    *(long *)((long)puVar1 + 0x80) = lVar4;
    _objc_release(uVar6);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x88);
    *(long *)((long)puVar1 + 0x88) = lVar4;
    _objc_release(uVar6);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x90);
    *(long *)((long)puVar1 + 0x90) = lVar4;
    _objc_release(uVar6);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x38);
    *(long *)((long)puVar1 + 0x38) = lVar2;
    _objc_release(uVar6);
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x40);
    *(long *)((long)puVar1 + 0x40) = lVar4;
    _objc_release(uVar6);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x48);
    *(long *)((long)puVar1 + 0x48) = lVar4;
    _objc_release(uVar6);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x50);
    *(long *)((long)puVar1 + 0x50) = lVar4;
    _objc_release(uVar6);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + 8) = (char)lVar5;
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1060e7a18; end: 1060e7aff; -[BTCard initWithNumber:expirationMonth:expirationYear:cvv:] */

long FUN_1060e7a18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c033780(param_1,param_2,PTR____NSDictionary0__struct_11034ab58);
  if (param_1 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = param_3;
    _objc_release(uVar1);
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = param_4;
    _objc_release(uVar1);
    _objc_retain(param_5);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = param_5;
    _objc_release(uVar1);
    _objc_retain(param_6);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = param_6;
    _objc_release(uVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1060e7b00; end: 1060e824f; -[BTCard parameters] */

void FUN_1060e7b00(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = param_1;
  func_0x00010c0d3d60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d3c80();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c0de940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010c0de940(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar2);
    _objc_release(uVar1);
  }
  uVar1 = param_1;
  func_0x00010bf9c7c0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar3 = param_1;
    func_0x00010bf9c900();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar1);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (uVar3 != 0) {
      uVar1 = param_1;
      func_0x00010bf9c7c0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x00010bf9c900();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25d9e0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar2);
      _objc_release(puVar4);
      _objc_release(uVar3);
      _objc_release(uVar1);
    }
  }
  uVar1 = param_1;
  func_0x00010bf63100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bf63100(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar2);
    _objc_release(uVar1);
  }
  uVar1 = param_1;
  func_0x00010bf321e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bf321e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar2);
    _objc_release(uVar1);
  }
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar1 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar5);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    uVar1 = uVar2;
    func_0x00010c0e00e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar4);
    _objc_release(uVar1);
  }
  uVar1 = param_1;
  func_0x00010bfb18a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bfb18a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(uVar1);
  }
  uVar1 = param_1;
  func_0x00010c089720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010c089720(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(uVar1);
  }
  uVar1 = param_1;
  func_0x00010bf43360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bf43360(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(uVar1);
  }
  uVar1 = param_1;
  func_0x00010c105600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010c105600(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(uVar1);
  }
  uVar1 = param_1;
  func_0x00010c25ca80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010c25ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(uVar1);
  }
  uVar1 = param_1;
  func_0x00010bf9da80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bf9da80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(uVar1);
  }
  uVar1 = param_1;
  func_0x00010c09e300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010c09e300(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(uVar1);
  }
  uVar1 = param_1;
  func_0x00010c125a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010c125a80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(uVar1);
  }
  uVar1 = param_1;
  func_0x00010bf53680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bf53680(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(uVar1);
  }
  uVar1 = param_1;
  func_0x00010bf532a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bf532a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(uVar1);
  }
  uVar1 = param_1;
  func_0x00010bf532c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bf532c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(uVar1);
  }
  uVar1 = param_1;
  func_0x00010bf533a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bf533a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(uVar1);
  }
  puVar5 = puVar4;
  func_0x00010bf529e0();
  if (puVar5 != (undefined *)0x0) {
    puVar5 = puVar4;
    func_0x00010bf51e00(puVar4);
    func_0x00010c1d0640(uVar2);
    _objc_release(puVar5);
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  uVar1 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar6);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    uVar1 = uVar2;
    func_0x00010c0e00e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar5);
    _objc_release(uVar1);
  }
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c235760(param_1);
  func_0x00010c0df6e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar5);
  _objc_release(puVar6);
  puVar6 = puVar5;
  func_0x00010bf51e00(puVar5);
  func_0x00010c1d0640(uVar2);
  _objc_release(puVar6);
  uVar1 = uVar2;
  func_0x00010bf51e00(uVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1060e8250; end: 1060e8b33; -[BTCard graphQLParameters] */

void FUN_1060e8250(long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined **ppuVar12;
  long lVar13;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  func_0x00010c1d0640(puVar3);
  lVar5 = param_1;
  func_0x00010c0de940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = param_1;
    func_0x00010c0de940(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(lVar5);
  }
  lVar5 = param_1;
  func_0x00010bf9c7c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = param_1;
    func_0x00010bf9c7c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(lVar5);
  }
  lVar5 = param_1;
  func_0x00010bf9c900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = param_1;
    func_0x00010bf9c900(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(lVar5);
  }
  lVar5 = param_1;
  func_0x00010bf63100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = param_1;
    func_0x00010bf63100(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(lVar5);
  }
  lVar5 = param_1;
  func_0x00010bf321e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = param_1;
    func_0x00010bf321e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(lVar5);
  }
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar7 = puVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  puVar9 = puVar7;
  _objc_opt_isKindOfClass(puVar7,puVar8);
  _objc_release(puVar7);
  if (((ulong)puVar9 & 1) != 0) {
    puVar7 = puVar4;
    func_0x00010c0e00e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar6);
    _objc_release(puVar7);
  }
  lVar5 = param_1;
  func_0x00010bfb18a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = param_1;
    func_0x00010bfb18a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar6);
    _objc_release(lVar5);
  }
  lVar5 = param_1;
  func_0x00010c089720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = param_1;
    func_0x00010c089720(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar6);
    _objc_release(lVar5);
  }
  lVar5 = param_1;
  func_0x00010bf43360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = param_1;
    func_0x00010bf43360(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar6);
    _objc_release(lVar5);
  }
  lVar5 = param_1;
  func_0x00010c105600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = param_1;
    func_0x00010c105600(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar6);
    _objc_release(lVar5);
  }
  lVar5 = param_1;
  func_0x00010c25ca80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = param_1;
    func_0x00010c25ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar6);
    _objc_release(lVar5);
  }
  lVar5 = param_1;
  func_0x00010bf9da80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = param_1;
    func_0x00010bf9da80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar6);
    _objc_release(lVar5);
  }
  lVar5 = param_1;
  func_0x00010c09e300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = param_1;
    func_0x00010c09e300(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar6);
    _objc_release(lVar5);
  }
  lVar5 = param_1;
  func_0x00010c125a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = param_1;
    func_0x00010c125a80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar6);
    _objc_release(lVar5);
  }
  lVar5 = param_1;
  func_0x00010bf53680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = param_1;
    func_0x00010bf53680(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar6);
    _objc_release(lVar5);
  }
  lVar5 = param_1;
  func_0x00010bf532a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = param_1;
    func_0x00010bf532a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar6);
    _objc_release(lVar5);
  }
  lVar5 = param_1;
  func_0x00010bf532c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = param_1;
    func_0x00010bf532c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar6);
    _objc_release(lVar5);
  }
  lVar5 = param_1;
  func_0x00010bf533a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = param_1;
    func_0x00010bf533a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar6);
    _objc_release(lVar5);
  }
  puVar7 = puVar6;
  func_0x00010bf529e0();
  if (puVar7 != (undefined *)0x0) {
    puVar7 = puVar6;
    func_0x00010bf51e00(puVar6);
    func_0x00010c1d0640(puVar4);
    _objc_release(puVar7);
  }
  puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar8 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  puVar10 = puVar8;
  _objc_opt_isKindOfClass(puVar8,puVar9);
  _objc_release(puVar8);
  if (((ulong)puVar10 & 1) != 0) {
    puVar8 = puVar3;
    func_0x00010c0e00e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar7);
    _objc_release(puVar8);
  }
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c235760(param_1);
  func_0x00010c0df6e0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar7);
  _objc_release(puVar8);
  puVar8 = puVar7;
  func_0x00010bf51e00(puVar7);
  func_0x00010c1d0640(puVar3);
  _objc_release(puVar8);
  puVar8 = puVar3;
  func_0x00010bf51e00();
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c0d3c80();
  _objc_release(puVar9);
  _objc_release(puVar8);
  lVar5 = param_1;
  func_0x00010bf10c40();
  if ((int)lVar5 != 0) {
    lVar5 = param_1;
    func_0x00010c0caaa0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      func_0x00010c1d0640(puVar10);
    }
    else {
      lVar11 = param_1;
      func_0x00010c0caaa0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar10);
      _objc_release(puVar8);
      _objc_release(lVar11);
    }
    _objc_release(lVar5);
  }
  func_0x00010bf31f80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release();
  iVar2 = (int)puVar3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    ppuVar12 = &PTR____CFConstantStringClassReference_110e3e638;
    func_0x00010c0d3c80(&PTR____CFConstantStringClassReference_110e3e638);
    iVar1 = iVar2;
    func_0x00010bf10c40();
    if (iVar1 != 0) {
      func_0x00010bf070e0(ppuVar12);
    }
    func_0x00010bf070e0(ppuVar12);
    func_0x00010bf10c40();
    if (iVar2 != 0) {
      func_0x00010bf070e0(ppuVar12);
    }
    func_0x00010bf070e0(ppuVar12);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar12);
  return;
}



/* Entry: 1060e8b34; end: 1060e8bbb; -[BTCard cardTokenizationGraphQLMutation] */

void FUN_1060e8b34(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110e3e638;
  func_0x00010c0d3c80(&PTR____CFConstantStringClassReference_110e3e638);
  iVar1 = param_1;
  func_0x00010bf10c40();
  if (iVar1 != 0) {
    func_0x00010bf070e0(ppuVar2,param_2,&PTR____CFConstantStringClassReference_110e3e658);
  }
  func_0x00010bf070e0(ppuVar2,param_2,&PTR____CFConstantStringClassReference_110e3e678);
  func_0x00010bf10c40();
  if (param_1 != 0) {
    func_0x00010bf070e0(ppuVar2,param_2,&PTR____CFConstantStringClassReference_110e3e698);
  }
  func_0x00010bf070e0(ppuVar2,param_2,&PTR____CFConstantStringClassReference_110e3e6b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1060e8bbc; end: 1060e8bc3; -[BTCard number] */

undefined8 FUN_1060e8bbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1060e8bc4; end: 1060e8bcb; -[BTCard setNumber:] */

void FUN_1060e8bc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060e8bcc; end: 1060e8bd3; -[BTCard expirationMonth] */

undefined8 FUN_1060e8bcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1060e8bd4; end: 1060e8bdb; -[BTCard setExpirationMonth:] */

void FUN_1060e8bd4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060e8bdc; end: 1060e8be3; -[BTCard expirationYear] */

undefined8 FUN_1060e8bdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1060e8be4; end: 1060e8beb; -[BTCard setExpirationYear:] */

void FUN_1060e8be4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060e8bec; end: 1060e8bf3; -[BTCard cvv] */

undefined8 FUN_1060e8bec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1060e8bf4; end: 1060e8bfb; -[BTCard setCvv:] */

void FUN_1060e8bf4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060e8bfc; end: 1060e8c03; -[BTCard postalCode] */

undefined8 FUN_1060e8bfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1060e8c04; end: 1060e8c0b; -[BTCard setPostalCode:] */

void FUN_1060e8c04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060e8c0c; end: 1060e8c13; -[BTCard cardholderName] */

undefined8 FUN_1060e8c0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1060e8c14; end: 1060e8c1b; -[BTCard setCardholderName:] */

void FUN_1060e8c14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060e8c1c; end: 1060e8c23; -[BTCard firstName] */

undefined8 FUN_1060e8c1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1060e8c24; end: 1060e8c2b; -[BTCard setFirstName:] */

void FUN_1060e8c24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060e8c2c; end: 1060e8c33; -[BTCard lastName] */

undefined8 FUN_1060e8c2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1060e8c34; end: 1060e8c3b; -[BTCard setLastName:] */

void FUN_1060e8c34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060e8c3c; end: 1060e8c43; -[BTCard company] */

undefined8 FUN_1060e8c3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1060e8c44; end: 1060e8c4b; -[BTCard setCompany:] */

void FUN_1060e8c44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060e8c4c; end: 1060e8c53; -[BTCard streetAddress] */

undefined8 FUN_1060e8c4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1060e8c54; end: 1060e8c5b; -[BTCard setStreetAddress:] */

void FUN_1060e8c54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060e8c5c; end: 1060e8c63; -[BTCard extendedAddress] */

undefined8 FUN_1060e8c5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1060e8c64; end: 1060e8c6b; -[BTCard setExtendedAddress:] */

void FUN_1060e8c64(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060e8c6c; end: 1060e8c73; -[BTCard locality] */

undefined8 FUN_1060e8c6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1060e8c74; end: 1060e8c7b; -[BTCard setLocality:] */

void FUN_1060e8c74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060e8c7c; end: 1060e8c83; -[BTCard region] */

undefined8 FUN_1060e8c7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1060e8c84; end: 1060e8c8b; -[BTCard setRegion:] */

void FUN_1060e8c84(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060e8c8c; end: 1060e8c93; -[BTCard countryName] */

undefined8 FUN_1060e8c8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 1060e8c94; end: 1060e8c9b; -[BTCard setCountryName:] */

void FUN_1060e8c94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060e8c9c; end: 1060e8ca3; -[BTCard countryCodeAlpha2] */

undefined8 FUN_1060e8c9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 1060e8ca4; end: 1060e8cab; -[BTCard setCountryCodeAlpha2:] */

void FUN_1060e8ca4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060e8cac; end: 1060e8cb3; -[BTCard countryCodeAlpha3] */

undefined8 FUN_1060e8cac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 1060e8cb4; end: 1060e8cbb; -[BTCard setCountryCodeAlpha3:] */

void FUN_1060e8cb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060e8cbc; end: 1060e8cc3; -[BTCard countryCodeNumeric] */

undefined8 FUN_1060e8cbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 1060e8cc4; end: 1060e8ccb; -[BTCard setCountryCodeNumeric:] */

void FUN_1060e8cc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060e8ccc; end: 1060e8cd3; -[BTCard shouldValidate] */

undefined1 FUN_1060e8ccc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1060e8cd4; end: 1060e8cdb; -[BTCard setShouldValidate:] */

void FUN_1060e8cd4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 1060e8cdc; end: 1060e8ce3; -[BTCard authenticationInsightRequested] */

undefined1 FUN_1060e8cdc(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1060e8ce4; end: 1060e8ceb; -[BTCard setAuthenticationInsightRequested:] */

void FUN_1060e8ce4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 1060e8cec; end: 1060e8cf3; -[BTCard merchantAccountId] */

undefined8 FUN_1060e8cec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 1060e8cf4; end: 1060e8cfb; -[BTCard setMerchantAccountId:] */

void FUN_1060e8cf4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060e8cfc; end: 1060e8d03; -[BTCard mutableParameters] */

undefined8 FUN_1060e8cfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 1060e8d04; end: 1060e8d33; -[BTCard setMutableParameters:] */

void FUN_1060e8d04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060e8d34; end: 1060e8e2f; -[BTCard .cxx_destruct] */

void FUN_1060e8d34(long param_1)

{
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1060e8e30; end: 1060e8edb;  */

void FUN_1060e8e30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126be458;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010bfefbc0();
  _objc_release(param_2);
  puVar2 = PTR_PTR_1126be470;
  _objc_alloc(PTR_PTR_1126be470);
  func_0x00010c033780();
  _objc_release(param_3);
  func_0x00010c273380(puVar1);
  _objc_release(param_4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060e8edc; end: 1060e8eeb;  */

void FUN_1060e8edc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf31e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c7f90,PTR_s_cardNonceWithJSON__1125aa140,param_2);
  return;
}



/* Entry: 1060e8eec; end: 1060e8f7f; -[BTCardClient initWithAPIClient:] */

undefined1 * FUN_1060e8eec(undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined1 **ppuVar1;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  ppuVar1 = &puStack_40;
  _objc_retain(param_3);
  if (param_3 == 0) {
    ppuVar1 = (undefined1 **)0x0;
  }
  else {
    puStack_38 = PTR_PTR_1126efa40;
    puStack_40 = param_1;
    _objc_msgSendSuper2(&puStack_40,PTR_s_init_1125d9248);
    if (ppuVar1 != (undefined1 **)0x0) {
      func_0x00010c168660(ppuVar1);
    }
    _objc_retain(ppuVar1);
    param_1 = (undefined1 *)ppuVar1;
  }
  _objc_release(param_3);
  _objc_release(param_1);
  return (undefined1 *)ppuVar1;
}



/* Entry: 1060e8f80; end: 1060e8f97; -[BTCardClient init] */

undefined8 FUN_1060e8f80(void)

{
  _objc_release();
  return 0;
}



/* Entry: 1060e8f98; end: 1060e9017; -[BTCardClient tokenizeCard:completion:] */

void FUN_1060e8f98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7f98;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bffcb20();
  _objc_release(param_3);
  func_0x00010c2733a0(param_1,param_2,puVar1,0,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060e9018; end: 1060e9937; -[BTCardClient tokenizeCard:options:completion:] */

void FUN_1060e9018(long param_1,undefined *param_2,long param_3,undefined *param_4,
                  undefined **param_5)

{
  int iVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar15 = param_1;
  func_0x00010bf04b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar15 == 0) {
    uStack_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_50 = &PTR____CFConstantStringClassReference_110e3e758;
    puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = (undefined *)0x1;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    param_2 = (undefined *)0x0;
    ppuVar13 = ppuVar2;
    (*(code *)param_5[2])(param_5);
  }
  else {
    lVar15 = param_1;
    func_0x00010bf04b40();
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    uStack_88 = 0x1060e91f4;
    puStack_80 = &UNK_11090e470;
    _objc_retain(param_5);
    lStack_78 = param_1;
    ppuStack_60 = param_5;
    _objc_retain(param_3);
    lStack_70 = param_3;
    _objc_retain(param_4);
    ppuVar13 = &puStack_98;
    puStack_68 = param_4;
    func_0x00010bfa9140(lVar15);
    _objc_release(lVar15);
    _objc_release(puStack_68);
    _objc_release(lStack_70);
    ppuVar2 = ppuStack_60;
  }
  _objc_release(ppuVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = param_2;
  _objc_retain(param_2);
  if (ppuVar13 != (undefined **)0x0) {
    puVar12 = (undefined *)0x0;
    (**(code **)(*(long *)(param_3 + 0x38) + 0x10))(*(long *)(param_3 + 0x38),0,ppuVar13);
    goto LAB_1060e932c;
  }
  iVar1 = (int)*(undefined8 *)(param_3 + 0x20);
  func_0x00010c074800();
  if (iVar1 == 0) {
LAB_1060e9278:
    puVar8 = *(undefined **)(param_3 + 0x20);
    func_0x00010bf3cac0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010bf04b40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_3 + 0x38);
    _objc_retain(uVar10);
    _objc_retain(param_2);
    puVar14 = puVar8;
    func_0x00010bdc1e20(uVar4);
    _objc_release(uVar4);
    _objc_release(param_2);
LAB_1060e9320:
    _objc_release(uVar10);
  }
  else {
    lVar3 = *(long *)(param_3 + 0x28);
    func_0x00010bf965c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) goto LAB_1060e9278;
    uVar5 = *(ulong *)(param_3 + 0x28);
    func_0x00010bf31960();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf10c40();
    if ((uVar6 & 1) == 0) {
      _objc_release(uVar5);
LAB_1060e944c:
      puVar14 = *(undefined **)(param_3 + 0x28);
      func_0x00010bf31960();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar14;
      func_0x00010bfcddc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar14);
      uVar4 = *(undefined8 *)(param_3 + 0x20);
      func_0x00010bf04b40();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_3 + 0x38);
      _objc_retain(uVar10);
      _objc_retain(param_2);
      puVar14 = puVar8;
      func_0x00010bdc1e40(uVar4);
      _objc_release(uVar4);
      _objc_release(param_2);
      goto LAB_1060e9320;
    }
    lVar7 = *(long *)(param_3 + 0x28);
    func_0x00010bf31960();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar7;
    func_0x00010c0caaa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar7);
    _objc_release(uVar5);
    puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (lVar3 != 0) goto LAB_1060e944c;
    puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = (undefined *)0x1;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    puVar12 = (undefined *)0x0;
    (**(code **)(*(long *)(param_3 + 0x38) + 0x10))(*(long *)(param_3 + 0x38),0,puVar8);
  }
  _objc_release(puVar8);
LAB_1060e932c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar14);
  if (puVar14 == (undefined *)0x0) {
    func_0x00010c0e00e0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar12;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    puVar12 = PTR_PTR_1126c7f90;
    func_0x00010bf31e40();
    _objc_retainAutoreleasedReturnValue();
    if (puVar12 != (undefined *)0x0) {
      iVar1 = (int)*(undefined8 *)(param_2 + 0x20);
      func_0x00010c079c40();
      if (iVar1 != 0) {
        iVar1 = (int)*(undefined8 *)(param_2 + 0x28);
        func_0x00010bf3fbc0();
        if (iVar1 != 0) {
          uVar10 = *(undefined8 *)(param_2 + 0x20);
          puVar11 = puVar12;
          func_0x00010c0db0e0(puVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf3fbe0(uVar10);
          _objc_release(puVar11);
        }
      }
    }
    lVar15 = *(long *)(param_2 + 0x30);
    puVar11 = puVar8;
    func_0x00010bf0a680(puVar8);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar15 + 0x10))(lVar15,puVar12,puVar11);
    _objc_release(puVar11);
  }
  else {
    puVar12 = puVar14;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar12;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    _objc_retain(puVar14);
    puVar9 = puVar8;
    func_0x00010c252ee0();
    puVar11 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar12 = puVar14;
    if (puVar9 == (undefined *)0x1a6) {
      uVar10 = *(undefined8 *)(param_2 + 0x20);
      _objc_opt_class(uVar10);
      func_0x00010c292820(puVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c296ba0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240(puVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar14);
      _objc_release(uVar10);
      _objc_release(puVar12);
      puVar12 = puVar11;
    }
    (**(code **)(*(long *)(param_2 + 0x30) + 0x10))(*(long *)(param_2 + 0x30),0,puVar12);
  }
  _objc_release(puVar12);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar14);
  return;
}



/* Entry: 1060e9938; end: 1060e9b5b; +[BTCardClient validationErrorUserInfo:] */

void FUN_1060e9938(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0d3c80(param_3);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e3fb58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = lVar2;
  func_0x00010bf0a640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = lVar2;
    func_0x00010bf0a640(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(lVar1,param_2,lVar3,&PTR____CFConstantStringClassReference_110e3f778);
    _objc_release(lVar3);
    lVar3 = lVar2;
    func_0x00010c0e00e0(lVar2,param_2,&PTR____CFConstantStringClassReference_110e3e7f8);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf0a540();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = lVar2;
    func_0x00010c0e00e0(lVar2,param_2,&PTR____CFConstantStringClassReference_110daeeb8);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010bf0a9e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    if (lVar6 != 0) {
      func_0x00010c1d0640(lVar1,param_2,lVar6,
                          *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568);
    }
    lVar3 = lVar5;
    func_0x00010c0e00e0(lVar5,param_2,&PTR____CFConstantStringClassReference_110e3e7f8);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    if (lVar7 != 0) {
      func_0x00010c1d0640(lVar1,param_2,lVar7,
                          *(undefined8 *)PTR__NSLocalizedFailureReasonErrorKey_110345570);
    }
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
  }
  lVar3 = lVar1;
  func_0x00010bf51e00(lVar1);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1060e9b5c; end: 1060e9fe7; -[BTCardClient clientAPIParametersForCard:options:] */

undefined *
FUN_1060e9b5c(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar13 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar1 = param_3;
  func_0x00010bf31960();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0f3840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (puVar2 != (undefined *)0x0) {
    puVar1 = param_3;
    func_0x00010bf31960(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0f3840();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0d3c80();
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = param_3;
    func_0x00010bf965c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar1 != (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      puVar2 = param_3;
      func_0x00010bf965c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110dbf6f8);
      _objc_release(puVar2);
      puVar2 = param_3;
      func_0x00010c23efc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar2 != (undefined *)0x0) {
        puVar2 = param_3;
        func_0x00010c23efc0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110e3e818);
        _objc_release(puVar2);
      }
      puVar2 = puVar3;
      func_0x00010c0e00e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110dcf298);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c0d3c80();
      func_0x00010c1d0640(puVar3,param_2,puVar4,&PTR____CFConstantStringClassReference_110dcf298);
      _objc_release(puVar4);
      _objc_release(puVar2);
      puVar2 = puVar3;
      func_0x00010c0e00e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110dcf298);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640();
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
    puVar1 = puVar3;
    func_0x00010bf51e00(puVar3);
    func_0x00010c1d0640(puVar13,param_2,puVar1,&PTR____CFConstantStringClassReference_110e3e858);
    _objc_release(puVar1);
    _objc_release(puVar3);
  }
  ppuStack_98 = &PTR____CFConstantStringClassReference_110dae8d8;
  uVar5 = param_1;
  func_0x00010bf04b40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c247c20();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_90 = &PTR____CFConstantStringClassReference_110e3e878;
  uVar8 = param_1;
  uStack_80 = uVar7;
  func_0x00010bf04b40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c068040();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_88 = &PTR____CFConstantStringClassReference_110e18538;
  uStack_78 = uVar10;
  func_0x00010bf04b40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_70 = uVar12;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_80,&ppuStack_98,3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c1d0640(puVar13,param_2,puVar1,&PTR____CFConstantStringClassReference_110e3e898);
  _objc_release(puVar1);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(param_1);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  if (param_4 != (undefined *)0x0) {
    puVar2 = param_4;
    func_0x00010c1d0640(puVar13,param_2,param_4,&PTR____CFConstantStringClassReference_110dcf298);
  }
  puVar1 = param_3;
  func_0x00010bf31960();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf10c40();
  _objc_release(puVar1);
  if ((int)puVar3 != 0) {
    func_0x00010c1d0640(puVar13,param_2,PTR____kCFBooleanTrue_11034ab68,
                        &PTR____CFConstantStringClassReference_110e3e8b8);
    puVar1 = param_3;
    func_0x00010bf31960();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c0caaa0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010c1d0640(puVar13,param_2,puVar3,&PTR____CFConstantStringClassReference_110e3e578);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  puVar1 = puVar13;
  func_0x00010bf51e00();
  _objc_release(puVar13);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010c085d00();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar13;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar13);
  _objc_release(puVar2);
  if (puVar3 == (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = puVar3;
    func_0x00010bf4b900(puVar3,param_2,&PTR____CFConstantStringClassReference_110e3e6f8);
  }
  _objc_release(puVar3);
  return puVar13;
}



/* Entry: 1060e9fe8; end: 1060ea09f; -[BTCardClient isGraphQLEnabledForCardTokenization:] */

long FUN_1060e9fe8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c085d00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(param_3);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x00010bf4b900(lVar2,param_2,&PTR____CFConstantStringClassReference_110e3e6f8);
  }
  _objc_release(lVar2);
  return lVar3;
}



/* Entry: 1060ea0a0; end: 1060ea0cf; +[BTCardClient setPayPalDataCollectorClassString:] */

void FUN_1060ea0a0(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_11313e180;
  PTR_PTR_11313e180 = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060ea0d0; end: 1060ea0db; +[BTCardClient setPayPalDataCollectorClass:] */

void FUN_1060ea0d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uRam00000001136c2e80 = param_3;
  return;
}



/* Entry: 1060ea0dc; end: 1060ea12b; -[BTCardClient isPayPalDataCollectorAvailable] */

uint FUN_1060ea0dc(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  puVar2 = PTR_PTR_11313e180;
  _NSClassFromString();
  ppuVar3 = &PTR____CFConstantStringClassReference_110e3e8f8;
  _NSSelectorFromString(&PTR____CFConstantStringClassReference_110e3e8f8);
  if (puVar2 == (undefined *)0x0) {
    uVar1 = 0;
  }
  else {
    _objc_opt_respondsToSelector(puVar2,ppuVar3);
    uVar1 = (uint)puVar2;
  }
  return uVar1 & 1;
}



/* Entry: 1060ea12c; end: 1060ea517; -[BTCardClient collectRiskData:configuration:] */

void FUN_1060ea12c(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined **ppuVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uStack_118;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010bf51e00();
  uStack_118 = param_3;
  if ((param_3 != 0) && (uVar2 = param_3, func_0x00010c08fa60(), 0x20 < uVar2)) {
    func_0x00010c260c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
  uVar3 = param_4;
  func_0x00010c085d00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf0a9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c0d3c80();
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar2 = param_1;
  func_0x00010bf04b40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010bf3d5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar2);
  if (uVar8 != 0) {
    uVar2 = param_1;
    func_0x00010bf04b40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010bf3d5c0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bf10f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar2);
    uVar8 = uVar9;
    func_0x00010bf44740();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar8;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (uVar2 != 0) {
      uVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(uVar8);
        }
        uVar14 = *(ulong *)(uVar13 * 8);
        uVar10 = uVar14;
        func_0x00010bfda7c0();
        if ((int)uVar10 != 0) {
          func_0x00010bf44740();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar14;
          func_0x00010bf529e0();
          if (1 < uVar10) {
            uVar10 = uVar14;
            func_0x00010c089820(uVar14);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar7);
            _objc_release(uVar10);
          }
          _objc_release(uVar14);
        }
        uVar13 = uVar13 + 1;
      } while (uVar2 != uVar13);
      uVar2 = uVar8;
      func_0x00010bf52a60();
    }
    _objc_release(uVar8);
    _objc_release(uVar9);
  }
  func_0x00010bfc86c0();
  ppuVar11 = &PTR____CFConstantStringClassReference_110e3e8f8;
  _NSSelectorFromString(&PTR____CFConstantStringClassReference_110e3e8f8);
  if ((param_1 != 0) &&
     (uVar2 = param_1, _objc_opt_respondsToSelector(param_1,ppuVar11),
     puVar6 = PTR__OBJC_CLASS___NSInvocation_1126b71d0, (uVar2 & 1) != 0)) {
    func_0x00010c0cca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06abc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010c1fbb60(puVar6);
    func_0x00010c2121a0(puVar6);
    func_0x00010c16a2c0(puVar6);
    func_0x00010c16a2c0(puVar6);
    func_0x00010c06abe0(puVar6);
    _objc_release(puVar6);
  }
  _objc_release(puVar7);
  _objc_release(uStack_118);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = puRam00000001136c2e80;
  if (puRam00000001136c2e80 == (undefined *)0x0) {
    puVar6 = PTR_PTR_11313e180;
    _NSClassFromString(PTR_PTR_11313e180);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puRam00000001136c2e80);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1060ea518; end: 1060ea563; -[BTCardClient getPPDataCollectorClass] */

void FUN_1060ea518(void)

{
  undefined *puVar1;
  
  puVar1 = puRam00000001136c2e80;
  if (puRam00000001136c2e80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_11313e180;
    _NSClassFromString(PTR_PTR_11313e180);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puRam00000001136c2e80);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1060ea564; end: 1060ea56b; -[BTCardClient apiClient] */

undefined8 FUN_1060ea564(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1060ea56c; end: 1060ea59b; -[BTCardClient setApiClient:] */

void FUN_1060ea56c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1060ea59c; end: 1060ea5a7; -[BTCardClient .cxx_destruct] */

void FUN_1060ea59c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060ea5a8; end: 1060ea91f; -[BTCardNonce initWithNonce:description:cardNetwork:lastTwo:lastFour:isDefault:cardJSON:authInsightJSON:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1060ea5a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9,long param_10)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar2 = &uStack_70;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar1 = PTR_PTR_1126c7f90;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c27dfc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR_PTR_1126efa48;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithNonce_localizedDescripti_1125e98e0,param_3,param_4,
                      puVar1,param_8);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  if (puVar2 == (undefined8 *)0x0) goto LAB_1060ea8dc;
  *(undefined8 *)((long)puVar2 + (long)_DAT_11273f4d0) = param_5;
  lVar5 = (long)_DAT_11273f4d4;
  _objc_retain(param_6);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
  *(undefined8 *)((long)puVar2 + lVar5) = param_6;
  _objc_release(uVar3);
  lVar5 = (long)_DAT_11273f4d8;
  _objc_retain(param_7);
  uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
  *(undefined8 *)((long)puVar2 + lVar5) = param_7;
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126c7fa0;
  _objc_alloc();
  lVar5 = param_9;
  func_0x00010c0e00e0(param_9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020680();
  uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11273f4dc);
  *(undefined **)((long)puVar2 + (long)_DAT_11273f4dc) = puVar1;
  _objc_release(uVar3);
  _objc_release(lVar5);
  lVar5 = param_9;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf0a9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  _objc_release(lVar5);
  lVar5 = param_9;
  if (lVar6 == 0) {
    lVar4 = param_9;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010bf0a9e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    if (lVar6 != 0) {
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar5;
      func_0x00010bf0a9e0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = *(long *)((long)puVar2 + (long)_DAT_11273f4e0);
      *(long *)((long)puVar2 + (long)_DAT_11273f4e0) = lVar4;
      goto LAB_1060ea844;
    }
  }
  else {
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar6;
    func_0x00010bf0a9e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11273f4e0);
    *(long *)((long)puVar2 + (long)_DAT_11273f4e0) = lVar4;
    _objc_release(uVar3);
LAB_1060ea844:
    _objc_release(lVar6);
    _objc_release(lVar5);
  }
  puVar1 = PTR_PTR_1126c7fa8;
  _objc_alloc();
  lVar5 = param_9;
  func_0x00010c0e00e0(param_9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020680();
  uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11273f4e4);
  *(undefined **)((long)puVar2 + (long)_DAT_11273f4e4) = puVar1;
  _objc_release(uVar3);
  _objc_release(lVar5);
  if (param_10 != 0) {
    puVar1 = PTR_PTR_1126c7fb0;
    _objc_alloc();
    func_0x00010c020680();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11273f4e8);
    *(undefined **)((long)puVar2 + (long)_DAT_11273f4e8) = puVar1;
    _objc_release(uVar3);
  }
LAB_1060ea8dc:
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  return (undefined1 *)puVar2;
}



/* Entry: 1060ea920; end: 1060ea947; +[BTCardNonce typeStringFromCardNetwork:] */

undefined ** FUN_1060ea920(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 0xe) {
    return (undefined **)(&PTR_PTR_11090e4a0)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110db54d8;
}



/* Entry: 1060ea948; end: 1060ea9df; +[BTCardNonce cardNetworkFromGatewayCardType:] */

undefined * FUN_1060ea948(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c7fb8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c0b5ac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c060400(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010bf0a660(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantDictionary_111174a90,0);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 1060ea9e0; end: 1060eacb3; +[BTCardNonce cardNonceWithJSON:] */

void FUN_1060ea9e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
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
  long lVar16;
  long lStack_68;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e3e8b8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf0a640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lStack_68 = 0;
  }
  else {
    lStack_68 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e3e8b8);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = param_1;
  _objc_opt_class();
  _objc_alloc();
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e3ec38);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf0a9e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dd3178);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf0a9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class();
  lVar6 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110daf578);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf0a9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf31e20(param_1,param_2,lVar8);
  lVar9 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110daf578);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bf0a9e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110daf578);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010bf0a9e0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dc3a38);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c081960();
  func_0x00010c02fb60(uVar3,param_2,lVar2,lVar5,param_1,lVar11,lVar14,lVar16,param_3,lStack_68);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lStack_68);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1060eacb4; end: 1060eafe3; +[BTCardNonce cardNonceWithGraphQLJSON:] */

void FUN_1060eacb4(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuStack_70;
  
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e3e3b8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010bf0a9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  if (ppuVar3 == (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e3e3b8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar3;
    func_0x00010bf0a9e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
  }
  ppuVar2 = ppuVar1;
  func_0x00010c08fa60();
  if (ppuVar2 == (undefined **)0x4) {
    ppuVar2 = ppuVar1;
    func_0x00010c260c00(ppuVar1,param_2,2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  ppuVar3 = ppuVar2;
  func_0x00010c08fa60();
  if (ppuVar3 == (undefined **)0x0) {
    ppuStack_70 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuStack_70 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110e3ecd8);
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar3 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e3e8b8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010bf0a640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(ppuVar3);
  if (ppuVar4 == (undefined **)0x0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    ppuVar3 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e3e8b8);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar5 = param_1;
  _objc_opt_class(param_1);
  _objc_alloc();
  ppuVar4 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e3ecf8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar4;
  func_0x00010bf0a9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_1);
  ppuVar7 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e3e3b8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar8;
  func_0x00010bf0a9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf31e20(param_1,param_2,ppuVar9);
  ppuVar10 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e3e3b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02fb60(uVar5,param_2,ppuVar6,ppuStack_70,param_1,ppuVar2,ppuVar1,0,ppuVar10,ppuVar3);
  _objc_release(ppuVar10);
  _objc_release(ppuVar9);
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuStack_70);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1060eafe4; end: 1060eaff3; -[BTCardNonce cardNetwork] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060eafe4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273f4d0);
}



/* Entry: 1060eaff4; end: 1060eb003; -[BTCardNonce lastTwo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060eaff4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273f4d4);
}



/* Entry: 1060eb004; end: 1060eb013; -[BTCardNonce lastFour] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060eb004(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273f4d8);
}



/* Entry: 1060eb014; end: 1060eb023; -[BTCardNonce bin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060eb014(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273f4e0);
}



/* Entry: 1060eb024; end: 1060eb033; -[BTCardNonce binData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060eb024(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273f4dc);
}



/* Entry: 1060eb034; end: 1060eb043; -[BTCardNonce threeDSecureInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060eb034(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273f4e4);
}



/* Entry: 1060eb044; end: 1060eb053; -[BTCardNonce authenticationInsight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060eb044(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273f4e8);
}



/* Entry: 1060eb054; end: 1060eb0d3; -[BTCardNonce .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060eb054(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273f4e8,0);
  _objc_storeStrong(param_1 + _DAT_11273f4e4,0);
  _objc_storeStrong(param_1 + _DAT_11273f4dc,0);
  _objc_storeStrong(param_1 + _DAT_11273f4e0,0);
  _objc_storeStrong(param_1 + _DAT_11273f4d8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273f4d4,0);
  return;
}



/* Entry: 1060eb0d4; end: 1060eb16f; -[BTCardRequest initWithCard:] */

undefined1 * FUN_1060eb0d4(undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 **ppuVar2;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_40;
  _objc_retain(param_3);
  if (param_3 == 0) {
    ppuVar2 = (undefined1 **)0x0;
  }
  else {
    puStack_38 = PTR_PTR_1126efa50;
    puStack_40 = param_1;
    _objc_msgSendSuper2(&puStack_40,PTR_s_init_1125d9248);
    if (ppuVar2 != (undefined1 **)0x0) {
      _objc_retain(param_3);
      uVar1 = *(undefined8 *)((long)ppuVar2 + 8);
      *(long *)((long)ppuVar2 + 8) = param_3;
      _objc_release(uVar1);
    }
    _objc_retain(ppuVar2);
    param_1 = (undefined1 *)ppuVar2;
  }
  _objc_release(param_3);
  _objc_release(param_1);
  return (undefined1 *)ppuVar2;
}



/* Entry: 1060eb170; end: 1060eb177; -[BTCardRequest card] */

undefined8 FUN_1060eb170(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1060eb178; end: 1060eb1a7; -[BTCardRequest setCard:] */

void FUN_1060eb178(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1060eb1a8; end: 1060eb1af; -[BTCardRequest mobilePhoneNumber] */

undefined8 FUN_1060eb1a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1060eb1b0; end: 1060eb1b7; -[BTCardRequest setMobilePhoneNumber:] */

void FUN_1060eb1b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060eb1b8; end: 1060eb1bf; -[BTCardRequest mobileCountryCode] */

undefined8 FUN_1060eb1b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1060eb1c0; end: 1060eb1c7; -[BTCardRequest setMobileCountryCode:] */

void FUN_1060eb1c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060eb1c8; end: 1060eb1cf; -[BTCardRequest smsCode] */

undefined8 FUN_1060eb1c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1060eb1d0; end: 1060eb1d7; -[BTCardRequest setSmsCode:] */

void FUN_1060eb1d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060eb1d8; end: 1060eb1df; -[BTCardRequest enrollmentID] */

undefined8 FUN_1060eb1d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1060eb1e0; end: 1060eb1e7; -[BTCardRequest setEnrollmentID:] */

void FUN_1060eb1e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060eb1e8; end: 1060eb23b; -[BTCardRequest .cxx_destruct] */

void FUN_1060eb1e8(long param_1)

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


