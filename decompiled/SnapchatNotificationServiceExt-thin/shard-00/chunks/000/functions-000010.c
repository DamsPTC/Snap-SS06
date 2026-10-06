/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100042e74; end: 100042e8f;  */

void FUN_100042e74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100042e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(long *)(param_1 + 0x20) != 0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100042e90; end: 100042ecf;  */

void FUN_100042e90(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),7);
                    /* WARNING: Could not recover jumptable at 0x00010006baac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_1000a0570)(param_1 + 0x30,param_2 + 0x30);
  return;
}



/* Entry: 100042ed0; end: 100042fe7; -[SCNotifExtIncomingFriendsSyncGRPCService _readSyncTokenFromSharedFile] */

void FUN_100042ed0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010006f460();
  if (iVar2 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1000d1da0;
    _objc_alloc();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x0001000724e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010006ffa0();
    _objc_release(uVar4);
    func_0x000100073560(puVar3);
    puVar5 = puVar3;
    func_0x00010006eb40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1000d2108;
    _objc_opt_class(PTR_PTR_1000d2108);
    puVar6 = puVar5;
    _objc_opt_isKindOfClass(puVar5,puVar7);
    puVar1 = puVar5;
    if (((ulong)puVar6 & 1) == 0) {
      puVar1 = (undefined *)0x0;
    }
    _objc_retain(puVar1);
    _objc_release(puVar5);
    puVar7 = (undefined *)0x0;
    if (puVar1 != (undefined *)0x0) {
      _objc_retain(puVar5);
      puVar7 = puVar5;
    }
    _objc_release(puVar1);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar7);
  return;
}



/* Entry: 100042fe8; end: 10004324f; -[SCNotifExtIncomingFriendsSyncGRPCService _saveIncomingFriendsResponse:] */

/* WARNING: Removing unreachable block (ram,0x000100043050) */

void FUN_100042fe8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_1000a0110;
  lVar8 = param_1;
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_1000d1db0;
    func_0x00010006dd60();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = 0;
    _objc_retain(0);
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x000100074800();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      puVar3 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
      _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
      func_0x00010006e500(lVar2);
      func_0x000100071f60();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x000100073ec0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
      func_0x00010006ecc0(PTR__OBJC_CLASS___NSDictionary_1000d1d40);
      _objc_retainAutoreleasedReturnValue();
      func_0x000100070720(puVar3);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      func_0x00010006ff00(*(undefined8 *)(param_1 + 0x28));
      _objc_release(puVar3);
    }
    _objc_release(lVar2);
    _objc_release(puVar1);
    _objc_release(0);
  }
  if (*(long *)PTR____stack_chk_guard_1000a0110 != lVar7) {
    ___stack_chk_fail();
    _objc_storeStrong(lVar8 + 0x28,0);
    _objc_storeStrong(lVar8 + 0x18,0);
    _objc_storeStrong(lVar8 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_1000a0600)(lVar8 + 8,0);
    return;
  }
  return;
}



/* Entry: 100043250; end: 100043297; -[SCNotifExtIncomingFriendsSyncGRPCService .cxx_destruct] */

void FUN_100043250(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100043298; end: 10004330b; -[SCNotifExtFriendingNotificationBadgeMetricsHelper initWithGrapheneExtensionLogger:] */

undefined1 * FUN_100043298(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000d25c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10004330c; end: 10004331f; -[SCNotifExtFriendingNotificationBadgeMetricsHelper logNotificationReceived:isSDN:] */

void FUN_10004330c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010006cf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)
            (param_1,PTR_s__logToGrapheneWithMetricName_and_1000cfbc8,
             &PTR____CFConstantStringClassReference_1000a5e28,param_3,param_4);
  return;
}



/* Entry: 100043320; end: 100043333; -[SCNotifExtFriendingNotificationBadgeMetricsHelper logAppBadgeNotification:] */

void FUN_100043320(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010006cf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)
            (param_1,PTR_s__logToGrapheneWithMetricName_and_1000cfbc8,
             &PTR____CFConstantStringClassReference_1000a5e48,param_3,0);
  return;
}



/* Entry: 100043334; end: 1000434d7; -[SCNotifExtFriendingNotificationBadgeMetricsHelper _logToGrapheneWithMetricName:andType:isSDN:] */

void FUN_100043334(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  long lStack_60;
  long lStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) != 0) {
    lVar1 = param_1;
    func_0x00010006c3e0(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      ppuStack_78 = &PTR____CFConstantStringClassReference_1000a5e68;
      lVar2 = param_1;
      func_0x00010006e880();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_70 = &PTR____CFConstantStringClassReference_1000a5e88;
      ppuStack_68 = &PTR____CFConstantStringClassReference_1000a5ea8;
      ppuStack_50 = &PTR____CFConstantStringClassReference_1000a43e8;
      if (param_5 == 0) {
        ppuStack_50 = &PTR____CFConstantStringClassReference_1000a4408;
      }
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
      lStack_60 = lVar2;
      lStack_58 = lVar1;
      func_0x00010006ecc0(PTR__OBJC_CLASS___NSDictionary_1000d1d40,param_2,&lStack_60,&ppuStack_78,3
                         );
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      puVar4 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
      _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8);
      func_0x000100070720();
      func_0x00010006ff00(*(undefined8 *)(param_1 + 8),param_2,puVar4,1);
      puVar5 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
      _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8);
      func_0x000100070720();
      func_0x00010006ff00(*(undefined8 *)(param_1 + 8),param_2,puVar5,1);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSSet_1000d2058;
  func_0x0001000738e0(PTR__OBJC_CLASS___NSSet_1000d2058,param_2,
                      &PTR____CFConstantStringClassReference_1000a5f08);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSLocale_1000d2110;
  func_0x00010006e960(PTR__OBJC_CLASS___NSLocale_1000d2110);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar6;
  func_0x000100072040();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar7;
  func_0x000100074540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar7);
  puVar4 = puVar3;
  func_0x00010006e6e0(puVar3,param_2,ppuVar8);
  ppuVar7 = ppuVar8;
  if ((int)puVar4 == 0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_1000a6068;
  }
  _objc_retain(ppuVar7);
  _objc_release(ppuVar8);
  _objc_release(ppuVar6);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(ppuVar7);
  return;
}



/* Entry: 1000434d8; end: 100043613; -[SCNotifExtFriendingNotificationBadgeMetricsHelper countryCode] */

void FUN_1000434d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSSet_1000d2058;
  func_0x0001000738e0(PTR__OBJC_CLASS___NSSet_1000d2058,param_2,
                      &PTR____CFConstantStringClassReference_1000a5f08);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSLocale_1000d2110;
  func_0x00010006e960(PTR__OBJC_CLASS___NSLocale_1000d2110);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x000100072040();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x000100074540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  puVar5 = puVar1;
  func_0x00010006e6e0(puVar1,param_2,ppuVar4);
  ppuVar3 = ppuVar4;
  if ((int)puVar5 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_1000a6068;
  }
  _objc_retain(ppuVar3);
  _objc_release(ppuVar4);
  _objc_release(ppuVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(ppuVar3);
  return;
}



/* Entry: 100043614; end: 100043727; -[SCNotifExtFriendingNotificationBadgeMetricsHelper _convertTypeToBadgeSource:] */

void FUN_100043614(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x000100071100(param_3,param_2,&PTR____CFConstantStringClassReference_1000a6088);
  if (((ulong)ppuVar1 & 1) == 0) {
    ppuVar1 = param_3;
    func_0x000100071100(param_3,param_2,&PTR____CFConstantStringClassReference_1000a60a8);
    if (((ulong)ppuVar1 & 1) == 0) {
      ppuVar1 = param_3;
      func_0x000100071100(param_3,param_2,&PTR____CFConstantStringClassReference_1000a62a8);
      if (((ulong)ppuVar1 & 1) == 0) {
        ppuVar1 = param_3;
        func_0x000100071100(param_3,param_2,&PTR____CFConstantStringClassReference_1000a62c8);
        if (((ulong)ppuVar1 & 1) == 0) {
          ppuVar1 = param_3;
          func_0x000100071100(param_3,param_2,&PTR____CFConstantStringClassReference_1000a6108);
          if (((ulong)ppuVar1 & 1) == 0) {
            ppuVar1 = param_3;
            func_0x000100071100(param_3,param_2,&PTR____CFConstantStringClassReference_1000a6128);
            if (((ulong)ppuVar1 & 1) == 0) {
              _objc_retain(param_3);
              ppuVar1 = param_3;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_1000a6128;
            }
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_1000a6108;
          }
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_1000a60e8;
        }
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_1000a60c8;
      }
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_1000a60a8;
    }
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_1000a6088;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(ppuVar1);
  return;
}



/* Entry: 100043728; end: 100043733; -[SCNotifExtFriendingNotificationBadgeMetricsHelper .cxx_destruct] */

void FUN_100043728(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100043734; end: 100043ceb;  */

undefined8 *** FUN_100043734(undefined8 ***param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 ***pppuVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  undefined8 ***pppuVar7;
  undefined **ppuVar8;
  undefined8 **ppuStack_350;
  undefined *puStack_348;
  undefined8 uStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_228;
  undefined8 **ppuStack_220;
  undefined8 **ppuStack_218;
  undefined8 **ppuStack_210;
  code *pcStack_208;
  undefined **ppuStack_200;
  long lStack_1f8;
  undefined8 **ppuStack_1d0;
  undefined8 uStack_1c8;
  undefined **ppuStack_1c0;
  long lStack_1b8;
  undefined8 **ppuStack_190;
  undefined8 uStack_188;
  undefined **ppuStack_180;
  long lStack_178;
  undefined8 **ppuStack_150;
  undefined8 uStack_148;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  long lStack_118;
  undefined8 **ppuStack_f0;
  undefined8 uStack_e8;
  undefined **ppuStack_e0;
  long lStack_d8;
  undefined1 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain();
  pppuVar7 = param_1;
  func_0x0001000713a0();
  if (pppuVar7 == (undefined8 ***)0x0) {
    pppuVar7 = (undefined8 ***)0x0;
  }
  else {
    ppuStack_40 = &PTR____CFConstantStringClassReference_1000a62c8;
    puVar2 = PTR__OBJC_CLASS___NSArray_1000d1d38;
    func_0x00010006de40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar7 = param_1;
    _SCNotifExtTypeContainedIn(param_1,puVar2);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_38) {
    return pppuVar7;
  }
  ___stack_chk_fail();
  uStack_48 = 0x1000437f8;
  lStack_78 = *(long *)PTR____stack_chk_guard_1000a0110;
  puStack_50 = &stack0xfffffffffffffff0;
  _objc_retain();
  pppuVar7 = param_1;
  func_0x0001000713a0();
  if (pppuVar7 == (undefined8 ***)0x0) {
    pppuVar7 = (undefined8 ***)0x0;
  }
  else {
    ppuStack_a0 = &PTR____CFConstantStringClassReference_1000a62c8;
    ppuStack_98 = &PTR____CFConstantStringClassReference_1000a62a8;
    ppuStack_90 = &PTR____CFConstantStringClassReference_1000a6148;
    ppuStack_88 = &PTR____CFConstantStringClassReference_1000a6088;
    ppuStack_80 = &PTR____CFConstantStringClassReference_1000a60a8;
    puVar2 = PTR__OBJC_CLASS___NSArray_1000d1d38;
    func_0x00010006de40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar7 = param_1;
    _SCNotifExtTypeContainedIn(param_1,puVar2);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_78) {
    return pppuVar7;
  }
  ___stack_chk_fail();
  uStack_a8 = 0x1000438f0;
  lStack_d8 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_b0 = &puStack_50;
  _objc_retain();
  pppuVar7 = param_1;
  func_0x0001000713a0();
  if (pppuVar7 == (undefined8 ***)0x0) {
    pppuVar7 = (undefined8 ***)0x0;
  }
  else {
    ppuStack_e0 = &PTR____CFConstantStringClassReference_1000a62c8;
    puVar2 = PTR__OBJC_CLASS___NSArray_1000d1d38;
    func_0x00010006de40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar7 = param_1;
    _SCNotifExtTypeContainedIn(param_1,puVar2);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_d8) {
    return pppuVar7;
  }
  ___stack_chk_fail();
  uStack_e8 = 0x1000439b4;
  lStack_118 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_f0 = &ppuStack_b0;
  _objc_retain();
  pppuVar7 = param_1;
  func_0x0001000713a0();
  if (pppuVar7 == (undefined8 ***)0x0) {
    pppuVar7 = (undefined8 ***)0x0;
  }
  else {
    ppuStack_138 = &PTR____CFConstantStringClassReference_1000a6088;
    ppuStack_130 = &PTR____CFConstantStringClassReference_1000a60a8;
    ppuStack_128 = &PTR____CFConstantStringClassReference_1000a6108;
    ppuStack_120 = &PTR____CFConstantStringClassReference_1000a6128;
    puVar2 = PTR__OBJC_CLASS___NSArray_1000d1d38;
    func_0x00010006de40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar7 = param_1;
    _SCNotifExtTypeContainedIn(param_1,puVar2);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_118) {
    return pppuVar7;
  }
  ___stack_chk_fail();
  uStack_148 = 0x100043aa0;
  lStack_178 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_150 = &ppuStack_f0;
  _objc_retain();
  pppuVar7 = param_1;
  func_0x0001000713a0();
  if (pppuVar7 == (undefined8 ***)0x0) {
    pppuVar7 = (undefined8 ***)0x0;
  }
  else {
    ppuStack_180 = &PTR____CFConstantStringClassReference_1000a6088;
    puVar2 = PTR__OBJC_CLASS___NSArray_1000d1d38;
    func_0x00010006de40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar7 = param_1;
    _SCNotifExtTypeContainedIn(param_1,puVar2);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_178) {
    return pppuVar7;
  }
  ___stack_chk_fail();
  uStack_188 = 0x100043b64;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_190 = &ppuStack_150;
  _objc_retain();
  pppuVar7 = param_1;
  func_0x0001000713a0();
  if (pppuVar7 == (undefined8 ***)0x0) {
    pppuVar7 = (undefined8 ***)0x0;
  }
  else {
    ppuStack_1c0 = &PTR____CFConstantStringClassReference_1000a60a8;
    puVar2 = PTR__OBJC_CLASS___NSArray_1000d1d38;
    func_0x00010006de40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar7 = param_1;
    _SCNotifExtTypeContainedIn(param_1,puVar2);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_1b8) {
    return pppuVar7;
  }
  ___stack_chk_fail();
  uStack_1c8 = 0x100043c28;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_1d0 = &ppuStack_190;
  _objc_retain();
  pppuVar7 = param_1;
  func_0x0001000713a0();
  if (pppuVar7 == (undefined8 ***)0x0) {
    pppuVar7 = (undefined8 ***)0x0;
  }
  else {
    ppuStack_200 = &PTR____CFConstantStringClassReference_1000a6108;
    puVar2 = PTR__OBJC_CLASS___NSArray_1000d1d38;
    func_0x00010006de40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar7 = param_1;
    _SCNotifExtTypeContainedIn(param_1,puVar2);
    _objc_release(puVar2);
  }
  pppuVar3 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_1f8) {
    return pppuVar7;
  }
  ___stack_chk_fail();
  ppuVar5 = (undefined8 **)&uStack_2f0;
  pcStack_208 = FUN_100043cec;
  lStack_228 = *(long *)PTR____stack_chk_guard_1000a0110;
  puStack_2e8 = (undefined8 *)0x0;
  uStack_2f0 = (undefined8 *)0x0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  ppuStack_220 = pppuVar7;
  ppuStack_218 = param_1;
  ppuStack_210 = &ppuStack_1d0;
  func_0x000100074080();
  _objc_retainAutoreleasedReturnValue();
  pppuVar7 = pppuVar3;
  func_0x00010006e860();
  if (pppuVar7 == (undefined8 ***)0x0) {
    _objc_release(pppuVar3);
    ppuVar8 = &PTR____CFConstantStringClassReference_1000a6088;
    pppuVar3 = (undefined8 ***)ppuVar8;
    _objc_retain();
  }
  else {
    iVar1 = (int)*puStack_2e8;
    func_0x0001000743a0();
    ppuVar8 = &PTR_PTR_1000a2d50;
    if (iVar1 != 2) {
      ppuVar8 = &PTR_PTR_1000a2d48;
    }
    ppuVar8 = (undefined **)*ppuVar8;
    _objc_retain(ppuVar8);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_228) {
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(ppuVar8);
    return (undefined8 ***)ppuVar8;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar5);
  puStack_348 = PTR_PTR_1000d25c8;
  pppuVar7 = &ppuStack_350;
  ppuStack_350 = pppuVar3;
  _objc_msgSendSuper2(pppuVar7,PTR_s_init_1000d07d0);
  if (pppuVar7 != (undefined8 ***)0x0) {
    _objc_retain(ppuVar5);
    ppuVar4 = pppuVar7[1];
    pppuVar7[1] = ppuVar5;
    _objc_release(ppuVar4);
    ppuVar4 = (undefined8 **)PTR__OBJC_CLASS___SCLazy_1000d1d48;
    _objc_retain(ppuVar5);
    func_0x00010006dfc0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = pppuVar7[6];
    pppuVar7[6] = ppuVar4;
    _objc_release(ppuVar6);
    ppuVar4 = ppuVar5;
    func_0x00010006e640();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = pppuVar7[2];
    pppuVar7[2] = ppuVar4;
    _objc_release(ppuVar6);
    ppuVar4 = (undefined8 **)PTR__OBJC_CLASS___SCLazy_1000d1d48;
    _objc_retain(ppuVar5);
    func_0x00010006dfc0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = pppuVar7[3];
    pppuVar7[3] = ppuVar4;
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    _objc_release(ppuVar5);
  }
  _objc_release(ppuVar5);
  return pppuVar7;
}



/* Entry: 100043cec; end: 100043dc3;  */

undefined *** FUN_100043cec(undefined **param_1)

{
  int iVar1;
  undefined ***pppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_28;
  
  ppuVar3 = (undefined **)&uStack_f0;
  lStack_28 = *(long *)PTR____stack_chk_guard_1000a0110;
  puStack_e8 = (undefined8 *)0x0;
  uStack_f0 = (undefined *)0x0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  func_0x000100074080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = param_1;
  func_0x00010006e860();
  if (ppuVar5 == (undefined **)0x0) {
    _objc_release(param_1);
    ppuVar5 = &PTR____CFConstantStringClassReference_1000a6088;
    param_1 = ppuVar5;
    _objc_retain();
  }
  else {
    iVar1 = (int)*puStack_e8;
    func_0x0001000743a0();
    ppuVar5 = &PTR_PTR_1000a2d50;
    if (iVar1 != 2) {
      ppuVar5 = &PTR_PTR_1000a2d48;
    }
    ppuVar5 = (undefined **)*ppuVar5;
    _objc_retain(ppuVar5);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(ppuVar5);
    return (undefined ***)ppuVar5;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar3);
  puStack_148 = PTR_PTR_1000d25c8;
  pppuVar2 = &ppuStack_150;
  ppuStack_150 = param_1;
  _objc_msgSendSuper2(pppuVar2,PTR_s_init_1000d07d0);
  if (pppuVar2 != (undefined ***)0x0) {
    _objc_retain(ppuVar3);
    ppuVar5 = pppuVar2[1];
    pppuVar2[1] = ppuVar3;
    _objc_release(ppuVar5);
    ppuVar5 = (undefined **)PTR__OBJC_CLASS___SCLazy_1000d1d48;
    _objc_retain(ppuVar3);
    func_0x00010006dfc0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = pppuVar2[6];
    pppuVar2[6] = ppuVar5;
    _objc_release(ppuVar4);
    ppuVar5 = ppuVar3;
    func_0x00010006e640();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = pppuVar2[2];
    pppuVar2[2] = ppuVar5;
    _objc_release(ppuVar4);
    ppuVar5 = (undefined **)PTR__OBJC_CLASS___SCLazy_1000d1d48;
    _objc_retain(ppuVar3);
    func_0x00010006dfc0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = pppuVar2[3];
    pppuVar2[3] = ppuVar5;
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(ppuVar3);
  }
  _objc_release(ppuVar3);
  return pppuVar2;
}



/* Entry: 100043dc4; end: 100043f33; -[SCNotifExtFriendingNotificationModifier initWithProcessingScope:] */

undefined8 * FUN_100043dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  puStack_58 = PTR_PTR_1000d25c8;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___SCLazy_1000d1d48;
    _objc_retain(param_3);
    func_0x00010006dfc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010006e640();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___SCLazy_1000d1d48;
    _objc_retain(param_3);
    func_0x00010006dfc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_release(param_3);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 100043f34; end: 100043f93;  */

void FUN_100043f34(void)

{
  _objc_alloc(PTR_PTR_1000d1ea0);
  func_0x0001000707c0();
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
  return;
}



/* Entry: 100043f94; end: 1000442d7; -[SCNotifExtFriendingNotificationModifier didReceiveNotificationRequest:withModifierCallback:suppressionEnabled:] */

void FUN_100043f94(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x000100071be0();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  *(ulong *)(param_1 + 0x20) = uVar5;
  _objc_release(uVar6);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x000100071be0();
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar6;
  _objc_release(uVar7);
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = uVar1;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = 
  PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
  func_0x0001000743a0(
                     PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                     );
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar5);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010006d6e0();
  if ((int)uVar1 == 0) {
    uVar1 = param_1;
    func_0x00010006d5a0();
    if ((((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010006d580(), (uVar1 & 1) == 0)) &&
       (uVar1 = param_1, func_0x00010006d5c0(), (int)uVar1 == 0)) {
      uVar1 = uVar4;
      func_0x0001000438f0();
      if ((((uVar1 & 1) != 0) || (uVar1 = uVar4, func_0x0001000439b4(), (uVar1 & 1) != 0)) ||
         (uVar1 = uVar4, func_0x000100043c28(), (int)uVar1 != 0)) {
        func_0x0001000720a0(param_4);
      }
      goto LAB_10004427c;
    }
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    func_0x000100074180(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    func_0x00010006d9e0(uVar6);
    _objc_release(uVar6);
  }
  else {
    _SCNotifExtModifyContentForCommNotif
              (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
    uVar5 = *(ulong *)(param_1 + 8);
    func_0x00010006e640();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x000100073aa0();
    if ((int)uVar1 == 0) {
      _objc_release(uVar5);
    }
    else {
      _SCNotifExtPhoneSupportsLeftImageOnCommNotif();
      _objc_release(uVar5);
      if ((uVar1 & 1) == 0) {
        uVar6 = *(undefined8 *)(param_1 + 0x18);
        func_0x000100074180(uVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_4);
        func_0x00010006d9e0(uVar6);
        _objc_release(uVar6);
        goto LAB_100044278;
      }
    }
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    func_0x000100074180(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    func_0x00010006ef80(uVar6);
    _objc_release(uVar6);
  }
LAB_100044278:
  _objc_release(param_4);
LAB_10004427c:
  _objc_release(uVar4);
  _objc_release(param_4);
  return;
}



/* Entry: 1000442d8; end: 100044477;  */

void FUN_1000442d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000100071f00(PTR__OBJC_CLASS___NSNumber_1000d1bf0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x000100074180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010006ef80(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 100044478; end: 1000444b7;  */

void FUN_100044478(long param_1,undefined8 param_2)

{
  func_0x000100071f00(PTR__OBJC_CLASS___NSNumber_1000d1bf0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
                    /* WARNING: Could not recover jumptable at 0x0001000720b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onSuccess__1000d1020,
             *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20));
  return;
}



/* Entry: 1000444b8; end: 1000444eb; -[SCNotifExtFriendingNotificationModifier bestAttemptContent] */

void FUN_1000444b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000100073800(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar1);
  return;
}



/* Entry: 1000444ec; end: 100044523; -[SCNotifExtFriendingNotificationModifier _shouldAddAvatarForIncomingFriendNotification:] */

void FUN_1000444ec(long param_1,undefined8 param_2,int param_3)

{
  func_0x0001000438f0();
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100073ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_1000a0598)
              (*(undefined8 *)(param_1 + 0x10),PTR_s_showBitmojiEnabled_1000d16a0);
    return;
  }
  return;
}



/* Entry: 100044524; end: 10004455b; -[SCNotifExtFriendingNotificationModifier _shouldAddAvatarForFriendCampaignNotification:] */

void FUN_100044524(long param_1,undefined8 param_2,int param_3)

{
  func_0x0001000439b4();
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100073ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_1000a0598)
              (*(undefined8 *)(param_1 + 0x10),PTR_s_showBitmojiEnabled_1000d16a0);
    return;
  }
  return;
}



/* Entry: 10004455c; end: 100044593; -[SCNotifExtFriendingNotificationModifier _shouldAddAvatarForPendingFriendRequestReminder:] */

void FUN_10004455c(long param_1,undefined8 param_2,int param_3)

{
  func_0x000100043c28();
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100073ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_1000a0598)
              (*(undefined8 *)(param_1 + 0x10),PTR_s_showBitmojiEnabled_1000d16a0);
    return;
  }
  return;
}



/* Entry: 100044594; end: 10004465f; -[SCNotifExtFriendingNotificationModifier _shouldSendCommunicationNotification:] */

uint FUN_100044594(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x000100074640(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x000100074180();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010006e360();
  _objc_release(uVar2);
  _objc_release(uVar6);
  uVar2 = param_3;
  FUN_100043734(param_3);
  uVar6 = param_3;
  func_0x000100043aa0(param_3);
  uVar4 = param_3;
  func_0x000100043b64(param_3);
  uVar5 = param_3;
  func_0x000100043c28(param_3);
  _objc_release(param_3);
  uVar1 = (uint)param_3;
  _SCNotifExtPhoneSupportsCommNotif();
  return uVar1 & ((uint)uVar2 | (uint)uVar6 | (uint)uVar4 | (uint)uVar5) & (uint)uVar3;
}



/* Entry: 100044660; end: 1000446bf; -[SCNotifExtFriendingNotificationModifier .cxx_destruct] */

void FUN_100044660(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 1000446c0; end: 10004485b; -[SCNotifExtFriendingNotificationModifierProvider initWithProcessingScope:notificationCenter:] */

undefined1 *
FUN_1000446c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1000d25d0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000100074680();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x0001000745e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar5;
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1000d2120;
    _objc_alloc();
    uVar2 = param_3;
    func_0x00010006f5e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100070e60();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar5);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    func_0x00010006f900();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1000d20d0;
    _objc_alloc();
    func_0x000100070400();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1000d2128;
    _objc_alloc();
    func_0x000100070de0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10004485c; end: 1000449f3; -[SCNotifExtFriendingNotificationModifierProvider initWithProcessingScope:] */

undefined1 * FUN_10004485c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1000d25d0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000100074680();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x0001000745e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar5;
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UNUserNotificationCenter_1000d2130;
    func_0x00010006e980();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1000d2120;
    _objc_alloc();
    uVar2 = param_3;
    func_0x00010006f5e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100070e60();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar5);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    func_0x00010006f900();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1000d20d0;
    _objc_alloc();
    func_0x000100070400();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1000d2128;
    _objc_alloc();
    func_0x000100070de0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000449f4; end: 100044a43; +[SCNotifExtFriendingNotificationModifierProvider ShouldPushTypeRequireFetchingFriendInfo:] */

ulong FUN_1000449f4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x0001000437f8();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x0001000439b4(param_3);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 100044a44; end: 100044a73; -[SCNotifExtFriendingNotificationModifierProvider getModifier:] */

void FUN_100044a44(void)

{
  _objc_alloc(PTR_PTR_1000d2138);
  func_0x0001000707c0();
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
  return;
}



/* Entry: 100044a74; end: 100044c3f; -[SCNotifExtFriendingNotificationModifierProvider getSDNTaskHandlers:] */

void FUN_100044a74(long param_1,undefined8 param_2,undefined **param_3,int param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuVar6 = param_3;
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010006f360();
  if ((int)ppuVar1 == 0xb) {
    param_4 = 1;
    func_0x0001000716e0(*(undefined8 *)(param_1 + 0x28),param_2,
                        &PTR____CFConstantStringClassReference_1000a6168);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x000100074120();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x000100074180();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar8;
    func_0x00010006e360();
    _objc_release(uVar8);
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      ppuVar6 = (undefined **)0x1;
      func_0x000100071f00(PTR__OBJC_CLASS___NSNumber_1000d1bf0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      goto LAB_100044bb0;
    }
    puVar4 = PTR_PTR_1000d2148;
    _objc_alloc();
    func_0x0001000707e0();
    ppuVar6 = &puStack_58;
    puStack_58 = puVar4;
  }
  else {
    if ((int)ppuVar1 != 7) {
LAB_100044bb0:
      puVar9 = (undefined *)0x0;
      goto LAB_100044c00;
    }
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    ppuVar6 = param_3;
    func_0x00010006f5c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar6;
    FUN_100043cec();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001000716e0(uVar8,param_2,ppuVar1,1);
    _objc_release(ppuVar1);
    _objc_release(ppuVar6);
    puVar4 = PTR_PTR_1000d2140;
    _objc_alloc();
    func_0x000100070b20();
    ppuVar6 = &puStack_50;
    puStack_50 = puVar4;
  }
  param_4 = 1;
  puVar9 = PTR__OBJC_CLASS___NSArray_1000d1d38;
  func_0x00010006de40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
LAB_100044c00:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 != lStack_48) {
    ___stack_chk_fail();
    lStack_a8 = *(long *)PTR____stack_chk_guard_1000a0110;
    _objc_retain(ppuVar6);
    puVar5 = param_3[2];
    func_0x000100074120();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x000100074180();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar4;
    func_0x00010006e360();
    _objc_release(puVar4);
    _objc_release(puVar5);
    if ((int)puVar9 == 0) {
      func_0x0001000716e0(param_3[5],param_2,ppuVar6,0);
      puVar4 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
      _objc_alloc();
      ppuStack_b8 = &PTR____CFConstantStringClassReference_1000a41a8;
      puVar9 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
      ppuStack_b0 = ppuVar6;
      func_0x00010006ecc0(PTR__OBJC_CLASS___NSDictionary_1000d1d40,param_2,&ppuStack_b0,&ppuStack_b8
                          ,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x000100070720(puVar4,param_2,&PTR____CFConstantStringClassReference_1000a5d88,
                          &PTR____CFConstantStringClassReference_1000a4888,puVar9);
      _objc_release(puVar9);
      func_0x00010006ff00(param_3[4],param_2,puVar4,1);
      puVar9 = PTR__OBJC_CLASS___NSMutableArray_1000d1c48;
      _objc_opt_new();
      func_0x00010006c0c0(param_3,param_2,puVar9,ppuVar6);
      func_0x00010006c160(param_3,param_2,puVar9,ppuVar6);
      ppuVar1 = ppuVar6;
      func_0x00010006c120(param_3,param_2,puVar9);
      param_4 = (int)ppuVar1;
      puVar5 = PTR_PTR_1000d2150;
      _objc_alloc();
      func_0x000100070040();
      puVar7 = puVar5;
      func_0x00010006dae0(puVar9,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    else {
      puVar7 = (undefined *)0x1;
      func_0x000100071f00(PTR__OBJC_CLASS___NSNumber_1000d1bf0,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar9 = (undefined *)0x0;
    }
    _objc_release(ppuVar6);
    if (*(long *)PTR____stack_chk_guard_1000a0110 != lStack_a8) {
      ___stack_chk_fail();
      _objc_retain(puVar7);
      func_0x0001000438f0();
      if (param_4 != 0) {
        func_0x00010006c0a0(ppuVar6,param_2,puVar7);
      }
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_1000a05d0)(puVar7);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar9);
  return;
}



/* Entry: 100044c40; end: 100044e1f; -[SCNotifExtFriendingNotificationModifierProvider getTaskHandlers:] */

void FUN_100044c40(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000100074120();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100074180();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010006e360();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 == 0) {
    func_0x0001000716e0(*(undefined8 *)(param_1 + 0x28),param_2,param_3,0);
    puVar4 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
    _objc_alloc();
    ppuStack_58 = &PTR____CFConstantStringClassReference_1000a41a8;
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
    uStack_50 = param_3;
    func_0x00010006ecc0(PTR__OBJC_CLASS___NSDictionary_1000d1d40,param_2,&uStack_50,&ppuStack_58,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100070720(puVar4,param_2,&PTR____CFConstantStringClassReference_1000a5d88,
                        &PTR____CFConstantStringClassReference_1000a4888,puVar7);
    _objc_release(puVar7);
    func_0x00010006ff00(*(undefined8 *)(param_1 + 0x20),param_2,puVar4,1);
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1000d1c48;
    _objc_opt_new();
    func_0x00010006c0c0(param_1,param_2,puVar7,param_3);
    func_0x00010006c160(param_1,param_2,puVar7,param_3);
    uVar2 = param_3;
    func_0x00010006c120(param_1,param_2,puVar7);
    param_4 = (int)uVar2;
    puVar5 = PTR_PTR_1000d2150;
    _objc_alloc();
    func_0x000100070040();
    puVar6 = puVar5;
    func_0x00010006dae0(puVar7,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  else {
    puVar6 = (undefined *)0x1;
    func_0x000100071f00(PTR__OBJC_CLASS___NSNumber_1000d1bf0,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar7 = (undefined *)0x0;
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar7);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  func_0x0001000438f0();
  if (param_4 != 0) {
    func_0x00010006c0a0(param_3,param_2,puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(puVar6);
  return;
}



/* Entry: 100044e20; end: 100044e6f; -[SCNotifExtFriendingNotificationModifierProvider _addFetchTaskHandlerToHandlersIfNecessary:ofType:] */

void FUN_100044e20(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  _objc_retain(param_3);
  func_0x0001000438f0();
  if (param_4 != 0) {
    func_0x00010006c0a0(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_3);
  return;
}



/* Entry: 100044e70; end: 100044ed3; -[SCNotifExtFriendingNotificationModifierProvider _addFetchTaskHandlerToHandlers:] */

void FUN_100044e70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1000d2158;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x0001000707c0();
  func_0x00010006dae0(param_3,param_2,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(puVar1);
  return;
}



/* Entry: 100044ed4; end: 100044f3f; -[SCNotifExtFriendingNotificationModifierProvider _addReliablePinningTaskHandlerToHandlersIfNecessary:ofType:] */

void FUN_100044ed4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x000100043aa0();
  if (((uVar1 & 1) != 0) || (uVar1 = param_4, func_0x000100043b64(), (int)uVar1 != 0)) {
    func_0x00010006c140(param_1,param_2,param_3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_3);
  return;
}



/* Entry: 100044f40; end: 100044fa3; -[SCNotifExtFriendingNotificationModifierProvider _addReliablePinningTaskHandlerToHandlers:] */

void FUN_100044f40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1000d2160;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x000100070b20();
  func_0x00010006dae0(param_3,param_2,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(puVar1);
  return;
}



/* Entry: 100044fa4; end: 100045037; -[SCNotifExtFriendingNotificationModifierProvider _addPendingReminderTaskHandlerToHandlersIfNecessary:ofType:] */

void FUN_100044fa4(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x000100043c28();
  if (param_4 != 0) {
    puVar1 = PTR_PTR_1000d2168;
    _objc_alloc(PTR_PTR_1000d2168);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010006f5e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001000703a0(puVar1,param_2,uVar2);
    func_0x00010006dae0(param_3,param_2,puVar1);
    _objc_release(puVar1);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_3);
  return;
}



/* Entry: 100045038; end: 100045133; -[SCNotifExtFriendingNotificationModifierProvider getBadgeCountProviders] */

void FUN_100045038(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_1000a0110;
  puVar1 = PTR_PTR_1000d2170;
  _objc_alloc();
  func_0x000100070ac0();
  puVar2 = PTR_PTR_1000d2178;
  _objc_alloc();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010006f5e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100070420();
  _objc_release(uVar3);
  puVar4 = PTR__OBJC_CLASS___NSArray_1000d1d38;
  func_0x00010006de40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + 0x38,0);
  _objc_storeStrong(puVar1 + 0x30,0);
  _objc_storeStrong(puVar1 + 0x28,0);
  _objc_storeStrong(puVar1 + 0x20,0);
  _objc_storeStrong(puVar1 + 0x18,0);
  _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(puVar1 + 8,0);
  return;
}



/* Entry: 100045134; end: 10004519f; -[SCNotifExtFriendingNotificationModifierProvider .cxx_destruct] */

void FUN_100045134(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 1000451a0; end: 10004524f; -[SCNotifExtAddFriendButtonBadgeNotInMainRepository initWithUserId:] */

undefined8 FUN_1000451a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___SCExtensionSharedFile_1000d1d98;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x000100070000();
  puVar2 = PTR__OBJC_CLASS___SCExtensionSharedFile_1000d1d98;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionSharedFile_1000d1d98);
  func_0x000100070000();
  _objc_release(param_3);
  func_0x000100070380(param_1,param_2,puVar1,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 100045250; end: 1000452f7; -[SCNotifExtAddFriendButtonBadgeNotInMainRepository initWithExtensionSharedFile:deprecatedSharedFile:] */

undefined1 *
FUN_100045250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1000d25d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x20) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000452f8; end: 1000455cf; -[SCNotifExtAddFriendButtonBadgeNotInMainRepository updateFriendingCampaignNotificationsBadgeInfoForType:] */

void FUN_1000452f8(undefined **param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x0001000439b4();
  if ((int)uVar2 != 0) {
    _os_unfair_lock_lock(param_1 + 4);
    iVar1 = (int)param_1[2];
    func_0x00010006f460();
    if (iVar1 == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1000d1da8;
      func_0x00010006ec80(PTR__OBJC_CLASS___NSMutableDictionary_1000d1da8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1000d1da0;
      _objc_alloc();
      puVar4 = param_1[2];
      func_0x0001000724e0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010006ffa0();
      _objc_release(puVar4);
      func_0x000100073560(puVar3);
      puVar5 = puVar3;
      func_0x00010006eb40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1000d1da8;
      _objc_opt_class(PTR__OBJC_CLASS___NSMutableDictionary_1000d1da8);
      puVar6 = puVar5;
      _objc_opt_isKindOfClass(puVar5,puVar4);
      puVar4 = puVar5;
      if (((ulong)puVar6 & 1) == 0) {
        puVar4 = (undefined *)0x0;
      }
      _objc_retain(puVar4);
      _objc_release(puVar5);
      _objc_release(puVar3);
    }
    ppuVar7 = param_1;
    func_0x00010006d1a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    ppuVar8 = ppuVar7;
    func_0x000100072060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar8 == (undefined **)0x0) {
      func_0x000100073360(ppuVar7);
    }
    else {
      ppuVar8 = ppuVar7;
      func_0x000100072060();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1000d1bf0);
      ppuVar9 = ppuVar8;
      _objc_opt_isKindOfClass(ppuVar8,puVar4);
      if (((ulong)ppuVar9 & 1) == 0) {
        ppuVar9 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1000abeb0;
      }
      else {
        ppuVar9 = ppuVar7;
        func_0x000100072060(ppuVar7);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(ppuVar8);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
      func_0x000100071000(ppuVar9);
      func_0x000100071f40(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x000100073360(ppuVar7);
      _objc_release(puVar4);
      _objc_release(ppuVar9);
    }
    _objc_retain(ppuVar7);
    puVar4 = param_1[3];
    param_1[3] = (undefined *)ppuVar7;
    _objc_release(puVar4);
    puVar4 = param_1[2];
    _objc_retain(ppuVar7);
    func_0x000100071b60(puVar4);
    _objc_retain(0);
    _objc_release(ppuVar7);
    _objc_release(0);
    _objc_release(ppuVar7);
    _os_unfair_lock_unlock(param_1 + 4);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1000455d0; end: 1000455eb;  */

void FUN_1000455d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006dd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)
            (PTR__OBJC_CLASS___NSKeyedArchiver_1000d1db0,
             PTR_s_archivedDataWithRootObject_requi_1000cff50,*(undefined8 *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 1000455ec; end: 1000457ff; -[SCNotifExtAddFriendButtonBadgeNotInMainRepository _migrateDeprecatedSharedFileIfNeeded:] */

void FUN_1000455ec(long param_1,undefined8 param_2,undefined **param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010006f460();
  if (iVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1000d1da0;
    _objc_alloc();
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x0001000724e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010006ffa0();
    _objc_release(uVar3);
    func_0x000100073560(puVar2);
    puVar4 = puVar2;
    func_0x00010006eb40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_1000d1d68;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1000d1d68);
    puVar6 = puVar4;
    _objc_opt_isKindOfClass(puVar4,puVar5);
    puVar5 = puVar4;
    if (((ulong)puVar6 & 1) == 0) {
      puVar5 = (undefined *)0x0;
    }
    _objc_retain(puVar5);
    _objc_release(puVar4);
    puVar4 = puVar5;
    func_0x000100071100();
    _objc_release(puVar5);
    if ((int)puVar4 != 0) {
      ppuVar7 = param_3;
      func_0x000100072060();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (ppuVar7 == (undefined **)0x0) {
        func_0x000100073360(param_3);
      }
      else {
        ppuVar7 = param_3;
        func_0x000100072060();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1000d1bf0);
        ppuVar8 = ppuVar7;
        _objc_opt_isKindOfClass(ppuVar7,puVar5);
        if (((ulong)ppuVar8 & 1) == 0) {
          ppuVar8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1000abeb0;
        }
        else {
          ppuVar8 = param_3;
          func_0x000100072060(param_3);
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(ppuVar7);
        puVar5 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
        func_0x000100071000(ppuVar8);
        func_0x000100071f40(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x000100073360(param_3);
        _objc_release(puVar5);
        _objc_release(ppuVar8);
      }
    }
    func_0x00010006ec40(*(undefined8 *)(param_1 + 8));
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(param_3);
  return;
}



/* Entry: 100045800; end: 10004583b; -[SCNotifExtAddFriendButtonBadgeNotInMainRepository .cxx_destruct] */

void FUN_100045800(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 10004583c; end: 1000458af; -[SCNotifExtAddFriendsButtonBadgeTaskHandler initWithAddFriendsButtonBadgeNotInMainRepository:] */

undefined1 * FUN_10004583c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000d25e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000458b0; end: 10004597b; -[SCNotifExtAddFriendsButtonBadgeTaskHandler didReceiveNotificationRequest:withCompletionHandler:] */

void FUN_1000458b0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  func_0x00010006e720(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = 
  PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
  func_0x0001000743a0(
                     PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                     );
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x000100072060(uVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  func_0x000100074520(*(undefined8 *)(param_1 + 8),param_2,uVar3);
  (**(code **)(param_4 + 0x10))(param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(uVar3);
  return;
}



/* Entry: 10004597c; end: 100045987; -[SCNotifExtAddFriendsButtonBadgeTaskHandler .cxx_destruct] */

void FUN_10004597c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100045988; end: 100045a37; -[SCNotifExtFriendsFetchTaskHandler initWithProcessingScope:] */

undefined8 FUN_100045988(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000100074680(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010006f5e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010006f900(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x000100070f20(param_1,param_2,uVar1,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 100045a38; end: 100045b2f; -[SCNotifExtFriendsFetchTaskHandler initWithUserSession:friendingUserDefaults:grapheneExtensionLogger:] */

undefined1 *
FUN_100045a38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

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
  puStack_48 = PTR_PTR_1000d25e8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    func_0x0001000711c0(param_4);
    puVar3 = PTR_PTR_1000d2180;
    _objc_alloc();
    func_0x000100070f40();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100045b30; end: 100045c47; -[SCNotifExtFriendsFetchTaskHandler didReceiveNotificationRequest:withCompletionHandler:] */

void FUN_100045b30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = 0x15;
  _dispatch_get_global_queue(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  func_0x0001000740e0(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 100045c48; end: 100045ccb;  */

void FUN_100045c48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
  _objc_retain(param_3);
  func_0x000100071f00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  func_0x00010006cd40();
  _objc_release(param_3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x000100045cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 100045ccc; end: 100045d03;  */

void FUN_100045ccc(long param_1,long param_2)

{
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),7);
                    /* WARNING: Could not recover jumptable at 0x00010006baac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_1000a0570)(param_1 + 0x28,param_2 + 0x28);
  return;
}



/* Entry: 100045d04; end: 100045e6f; -[SCNotifExtFriendsFetchTaskHandler _logIncomingFriendGrpcResponse:error:] */

void FUN_100045d04(long param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
  if (param_3 == 0) {
    func_0x00010006e500(param_4);
    func_0x000100071f60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x000100073ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
    func_0x00010006ecc0(PTR__OBJC_CLASS___NSDictionary_1000d1d40);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100070720(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else {
    func_0x000100070720(puVar1);
  }
  func_0x00010006ff00(*(undefined8 *)(param_1 + 0x10));
  _objc_release(puVar1);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_4 + 0x18,0);
  _objc_storeStrong(param_4 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_4 + 8,0);
  return;
}



/* Entry: 100045e70; end: 100045eab; -[SCNotifExtFriendsFetchTaskHandler .cxx_destruct] */

void FUN_100045e70(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100045eac; end: 100045fd7; -[SCNotifExtSDNFriendAddTaskHandler initWithProcessingScope:addFriendsButtonBadgeNotInMainRepository:] */

undefined1 *
FUN_100045eac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1000d25f0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010006f900();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar4);
    uVar2 = param_3;
    func_0x00010006f5e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001000711c0();
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1000d2180;
    _objc_alloc();
    uVar2 = param_3;
    func_0x000100074680(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100070f40();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100045fd8; end: 100046083; -[SCNotifExtSDNFriendAddTaskHandler handleNotification:notificationType:notificationId:completion:] */

void FUN_100045fd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x00010006f340();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010006f360();
  _objc_release(param_3);
  if ((int)uVar1 == 0xb) {
    func_0x00010006d900(param_1);
    func_0x00010006d7a0(param_1);
  }
  else {
    (**(code **)(param_6 + 0x10))(param_6,0);
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_4);
  return;
}



/* Entry: 100046084; end: 10004608f; -[SCNotifExtSDNFriendAddTaskHandler identifier] */

undefined ** FUN_100046084(void)

{
  return &PTR____CFConstantStringClassReference_1000a6168;
}



/* Entry: 100046090; end: 100046097; -[SCNotifExtSDNFriendAddTaskHandler _updateBadgeForPushType:] */

void FUN_100046090(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100074530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)
            (*(undefined8 *)(param_1 + 8),PTR_s_updateFriendingCampaignNotificat_1000d1940);
  return;
}



/* Entry: 100046098; end: 100046193; -[SCNotifExtSDNFriendAddTaskHandler _syncIncomingFriendsWithCompletion:] */

void FUN_100046098(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = 0x15;
  _dispatch_get_global_queue(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x0001000740e0(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 100046194; end: 10004621b;  */

void FUN_100046194(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
  _objc_retain(param_3);
  func_0x000100071f00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  func_0x00010006cd40();
  _objc_release(param_3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x000100046218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2);
  return;
}



/* Entry: 10004621c; end: 100046387; -[SCNotifExtSDNFriendAddTaskHandler _logIncomingFriendGrpcResponse:error:] */

void FUN_10004621c(long param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
  if (param_3 == 0) {
    func_0x00010006e500(param_4);
    func_0x000100071f60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x000100073ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
    func_0x00010006ecc0(PTR__OBJC_CLASS___NSDictionary_1000d1d40);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100070720(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else {
    func_0x000100070720(puVar1);
  }
  func_0x00010006ff00(*(undefined8 *)(param_1 + 0x18));
  _objc_release(puVar1);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_4 + 0x18,0);
  _objc_storeStrong(param_4 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_4 + 8,0);
  return;
}



/* Entry: 100046388; end: 1000463c3; -[SCNotifExtSDNFriendAddTaskHandler .cxx_destruct] */

void FUN_100046388(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 1000463c4; end: 1000464a3; -[SCNotifExtFriendSuggestionInExtensionRepository initWithUserId:friendingUserDefaults:] */

undefined1 *
FUN_1000463c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1000d25f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___SCExtensionSharedFile_1000d1d98;
    _objc_alloc();
    func_0x000100070000();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    func_0x00010006c8c0(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000464a4; end: 100046513; -[SCNotifExtFriendSuggestionInExtensionRepository initWithUserId:friendingUserDefaults:extensionSharedFile:] */

long FUN_1000464a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  func_0x000100070e60(param_1,param_2,param_3,param_4);
  if (param_1 != 0) {
    _objc_retain(param_5);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = param_5;
    _objc_release(uVar1);
  }
  _objc_release(param_5);
  return param_1;
}



/* Entry: 100046514; end: 100046617; -[SCNotifExtFriendSuggestionInExtensionRepository _initializeDataFromSharedFile] */

void FUN_100046514(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1000d1c48;
  func_0x00010006dd80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
  _objc_release(uVar5);
  puVar2 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1000d1da0;
  _objc_alloc();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x0001000724e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010006ffa0();
  _objc_release(uVar5);
  func_0x000100073560(puVar2);
  puVar3 = puVar2;
  func_0x00010006eb40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1000d1d38;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1000d1d38);
  puVar4 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar1);
  puVar1 = puVar3;
  if (((ulong)puVar4 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar3);
  func_0x00010006db00(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar1);
  func_0x00010006e840(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(puVar2);
  return;
}



/* Entry: 100046618; end: 1000466e3; -[SCNotifExtFriendSuggestionInExtensionRepository addSuggestedFriends:] */

void FUN_100046618(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  func_0x00010006e840(param_3);
  func_0x00010006e840(*(undefined8 *)(param_1 + 0x20));
  func_0x00010006db00(*(undefined8 *)(param_1 + 0x20),param_2,param_3);
  _objc_release(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010006e800();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = 0;
  puStack_48 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1000466e4;
  puStack_30 = &UNK_1000a1fb8;
  uStack_28 = uVar1;
  _objc_retain();
  func_0x000100071b60(uVar2,param_2,&puStack_48,&uStack_50);
  uVar2 = uStack_50;
  _objc_retain(uStack_50);
  _objc_release(uStack_28);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 1000466e4; end: 1000466ff;  */

void FUN_1000466e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006dd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)
            (PTR__OBJC_CLASS___NSKeyedArchiver_1000d1db0,
             PTR_s_archivedDataWithRootObject_requi_1000cff50,*(undefined8 *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 100046700; end: 100046717; -[SCNotifExtFriendSuggestionInExtensionRepository unhandledSuggestedFriendsByMainApp] */

void FUN_100046700(long param_1)

{
  func_0x00010006e800(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
  return;
}



/* Entry: 100046718; end: 1000467cf; -[SCNotifExtFriendSuggestionInExtensionRepository writeIntoLegacyBadgeNumberOrStructuredBadgeInfoWithType:userId:] */

void FUN_100046718(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x000100043aa0();
  if (((((uVar2 & 1) != 0) || (uVar2 = param_3, func_0x000100043b64(), (int)uVar2 != 0)) &&
      (uVar2 = param_4,
      func_0x000100071100(param_4,param_2,&PTR____CFConstantStringClassReference_1000a5148),
      (uVar2 & 1) == 0)) &&
     (uVar2 = param_4,
     func_0x000100071100(param_4,param_2,&PTR____CFConstantStringClassReference_1000a64a8),
     (uVar2 & 1) == 0)) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x000100073f20();
    if (iVar1 == 0) {
      func_0x00010006c860(param_1);
    }
    else {
      func_0x00010006c200(param_1,param_2,param_4,param_3);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_3);
  return;
}



/* Entry: 1000467d0; end: 10004692b; -[SCNotifExtFriendSuggestionInExtensionRepository _appendUserIdToStructuredBadgeInfo:type:] */

void FUN_1000467d0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x0001000713a0();
  if ((lVar1 != 0) && (lVar1 = param_4, func_0x0001000713a0(), lVar1 != 0)) {
    puVar2 = *(undefined **)(param_1 + 0x10);
    func_0x0001000744e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x000100071be0();
    if (puVar3 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1000d1da8;
      func_0x00010006ec80();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar3);
      puVar4 = puVar3;
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = puVar4;
    func_0x000100072060(puVar4,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x000100071be0();
    if (puVar2 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSMutableSet_1000d1db8;
      func_0x0001000729e0(PTR__OBJC_CLASS___NSMutableSet_1000d1db8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar2);
      puVar5 = puVar2;
    }
    _objc_release(puVar2);
    _objc_release(puVar3);
    func_0x00010006dae0(puVar5,param_2,param_3);
    func_0x000100073360(puVar4,param_2,puVar5,param_4);
    func_0x0001000737c0(*(undefined8 *)(param_1 + 0x10),param_2,puVar4);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_3);
  return;
}



/* Entry: 10004692c; end: 100046977; -[SCNotifExtFriendSuggestionInExtensionRepository _incrementBadgeNumberOnLegacyPath] */

void FUN_10004692c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x0001000744c0(lVar1);
  func_0x0001000737a0(*(undefined8 *)(param_1 + 0x10),param_2,lVar1 + 1);
  func_0x000100071fa0(PTR__OBJC_CLASS___NSNumber_1000d1bf0,param_2,lVar1 + 1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)();
  return;
}



/* Entry: 100046978; end: 1000469bf; -[SCNotifExtFriendSuggestionInExtensionRepository .cxx_destruct] */

void FUN_100046978(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 1000469c0; end: 100046a63; -[SCNotifExtNonSDNFriendSuggestionTaskHandler initWithReliablePinningRepository:grapheneExtensionLogger:] */

undefined1 *
FUN_1000469c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1000d2600;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100046a64; end: 100046d07; -[SCNotifExtNonSDNFriendSuggestionTaskHandler didReceiveNotificationRequest:withCompletionHandler:] */

/* WARNING: Removing unreachable block (ram,0x000100046c44) */

void FUN_100046a64(long param_1,undefined8 param_2,undefined **param_3,long param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  
  lVar11 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010006e720(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  ppuVar1 = param_3;
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  ppuVar3 = ppuVar2;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = (undefined **)PTR_PTR_1000d2188;
  func_0x00010006bee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  func_0x00010006e840(ppuVar4);
  _objc_retain(ppuVar4);
  ppuVar1 = ppuVar4;
  func_0x00010006e860();
  lVar12 = lRam0000000000000000;
  while (ppuVar1 != (undefined **)0x0) {
    ppuVar13 = (undefined **)0x0;
    do {
      if (lRam0000000000000000 != lVar12) {
        _objc_enumerationMutation(ppuVar4);
      }
      uVar5 = *(undefined8 *)((long)ppuVar13 * 8);
      uVar14 = *(undefined8 *)(param_1 + 8);
      func_0x0001000745e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000100074820(uVar14);
      _objc_release(uVar5);
      ppuVar13 = (undefined **)((long)ppuVar13 + 1);
    } while (ppuVar1 != ppuVar13);
    ppuVar1 = ppuVar4;
    func_0x00010006e860();
  }
  _objc_release(ppuVar4);
  ppuVar1 = ppuVar4;
  func_0x00010006e840();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_1000a61e8;
    ppuVar13 = ppuVar3;
    func_0x00010006cac0(param_1);
  }
  else {
    func_0x00010006e840(ppuVar4);
    ppuVar1 = ppuVar3;
    func_0x00010006cda0(param_1);
    ppuVar13 = ppuVar4;
    func_0x00010006db60(*(undefined8 *)(param_1 + 8));
  }
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
  _objc_release(ppuVar4);
  _objc_release(0);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lVar12 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(ppuVar1);
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  func_0x00010006ff00(param_3[2]);
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  func_0x00010006ecc0(PTR__OBJC_CLASS___NSDictionary_1000d1d40);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  puVar10 = puVar9;
  func_0x00010006ff00(param_3[2]);
  _objc_release(ppuVar1);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lVar12 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(ppuVar13);
  _objc_retain(puVar10);
  func_0x00010006ecc0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8);
  func_0x000100070720();
  func_0x00010006ff00(*(undefined8 *)(puVar6 + 0x10));
  _objc_release(ppuVar13);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar7);
  if (*(long *)PTR____stack_chk_guard_1000a0110 != lVar12) {
    ___stack_chk_fail();
    _objc_storeStrong(puVar7 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_1000a0600)(puVar7 + 8,0);
    return;
  }
  return;
}



/* Entry: 100046d08; end: 100046e97; -[SCNotifExtNonSDNFriendSuggestionTaskHandler _logParsedNotificationSnapchattersCount:forPushType:] */

void FUN_100046d08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lVar6 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_4);
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  func_0x00010006ff00(*(undefined8 *)(param_1 + 0x10));
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  func_0x00010006ecc0(PTR__OBJC_CLASS___NSDictionary_1000d1d40);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  puVar5 = puVar4;
  func_0x00010006ff00(*(undefined8 *)(param_1 + 0x10));
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lVar6 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_3);
  _objc_retain(puVar5);
  func_0x00010006ecc0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8);
  func_0x000100070720();
  func_0x00010006ff00(*(undefined8 *)(puVar1 + 0x10));
  _objc_release(param_3);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(puVar2 + 8,0);
  return;
}



/* Entry: 100046e98; end: 100046fab; -[SCNotifExtNonSDNFriendSuggestionTaskHandler _logErrorWithPushType:errorType:] */

void FUN_100046e98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lVar3 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010006ecc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8);
  func_0x000100070720();
  func_0x00010006ff00(*(undefined8 *)(param_1 + 0x10));
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(puVar1 + 8,0);
  return;
}



/* Entry: 100046fac; end: 100046fdb; -[SCNotifExtNonSDNFriendSuggestionTaskHandler .cxx_destruct] */

void FUN_100046fac(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100046fdc; end: 10004707f; -[SCNotifExtSDNFriendSuggestionTaskHandler initWithReliablePinningRepository:grapheneExtensionLogger:] */

undefined1 *
FUN_100046fdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1000d2608;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100047080; end: 10004738b; -[SCNotifExtSDNFriendSuggestionTaskHandler handleNotification:notificationType:notificationId:completion:] */

/* WARNING: Removing unreachable block (ram,0x0001000472d0) */

undefined **
FUN_100047080(long param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
             undefined8 param_5,long param_6)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  
  lVar9 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuVar11 = param_3;
  ppuVar3 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  ppuVar10 = param_3;
  func_0x00010006f340();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar10;
  func_0x00010006f360();
  _objc_release(ppuVar10);
  if ((int)ppuVar2 == 7) {
    ppuVar3 = param_3;
    func_0x00010006f340();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar3;
    func_0x00010006f5c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(ppuVar3);
    ppuVar10 = (undefined **)PTR_PTR_1000d2190;
    if (ppuVar11 == (undefined **)0x0) {
      ppuVar10 = (undefined **)0x0;
    }
    else {
      ppuVar3 = param_3;
      func_0x00010006f340();
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar3;
      func_0x00010006f5c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010006be80();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      _objc_release(ppuVar11);
      _objc_release(ppuVar3);
    }
    _objc_retain(ppuVar10);
    ppuVar3 = ppuVar10;
    func_0x00010006e860();
    lVar1 = lRam0000000000000000;
    while (ppuVar3 != (undefined **)0x0) {
      ppuVar11 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(ppuVar10);
        }
        uVar4 = *(undefined8 *)((long)ppuVar11 * 8);
        uVar12 = *(undefined8 *)(param_1 + 8);
        func_0x0001000745e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x000100074820(uVar12);
        _objc_release(uVar4);
        ppuVar11 = (undefined **)((long)ppuVar11 + 1);
      } while (ppuVar3 != ppuVar11);
      ppuVar3 = ppuVar10;
      func_0x00010006e860();
    }
    _objc_release(ppuVar10);
    ppuVar2 = ppuVar10;
    func_0x00010006e840();
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_1000a61e8;
      ppuVar11 = param_4;
      func_0x00010006cac0(param_1);
    }
    else {
      func_0x00010006e840(ppuVar10);
      func_0x00010006e840(ppuVar10);
      ppuVar3 = param_4;
      func_0x00010006cda0(param_1);
      ppuVar11 = ppuVar10;
      func_0x00010006db60(*(undefined8 *)(param_1 + 8));
    }
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6,ppuVar2 != (undefined **)0x0);
    }
    _objc_release(0);
    _objc_release(ppuVar10);
  }
  else {
    (**(code **)(param_6 + 0x10))(param_6,0);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar9) {
    return param_3;
  }
  ___stack_chk_fail();
  ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lVar9 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(ppuVar3);
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  func_0x00010006ff00(param_3[2]);
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  func_0x00010006ecc0(PTR__OBJC_CLASS___NSDictionary_1000d1d40);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  puVar8 = puVar7;
  func_0x00010006ff00(param_3[2]);
  _objc_release(ppuVar3);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar9) {
    return ppuVar10;
  }
  ___stack_chk_fail();
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lVar9 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(ppuVar11);
  _objc_retain(puVar8);
  func_0x00010006ecc0(ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8);
  func_0x000100070720();
  func_0x00010006ff00(ppuVar10[2]);
  _objc_release(ppuVar11);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(ppuVar3);
  if (*(long *)PTR____stack_chk_guard_1000a0110 != lVar9) {
    ___stack_chk_fail();
    return &PTR____CFConstantStringClassReference_1000a6268;
  }
  return ppuVar3;
}



/* Entry: 10004738c; end: 100047517; -[SCNotifExtSDNFriendSuggestionTaskHandler _logParsedNotificationSnapchattersCount:forPushType:] */

undefined ** FUN_10004738c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined **ppuStack_e0;
  long lStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lStack_68 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_88 = &PTR____CFConstantStringClassReference_1000a4ac8;
  ppuStack_80 = &PTR____CFConstantStringClassReference_1000a56e8;
  ppuStack_70 = &PTR____CFConstantStringClassReference_1000a6208;
  uStack_b0 = param_3;
  uStack_78 = param_4;
  _objc_retain(param_4);
  func_0x00010006ecc0(ppuVar1,param_2,&uStack_78,&ppuStack_88,2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  func_0x00010006ff00(*(undefined8 *)(param_1 + 0x10),param_2,puVar2,1);
  ppuStack_a8 = &PTR____CFConstantStringClassReference_1000a4ac8;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_1000a56e8;
  ppuStack_90 = &PTR____CFConstantStringClassReference_1000a6248;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  uStack_98 = param_4;
  func_0x00010006ecc0(PTR__OBJC_CLASS___NSDictionary_1000d1d40,param_2,&uStack_98,&ppuStack_a8,2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  puVar7 = puVar4;
  uVar8 = uStack_b0;
  func_0x00010006ff00(*(undefined8 *)(param_1 + 0x10));
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  ppuVar5 = ppuVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_68) {
    return ppuVar5;
  }
  ___stack_chk_fail();
  ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  ppuStack_d0 = &PTR_s_objectForInfoDictionaryKey__1000d1000;
  pcStack_b8 = FUN_100047518;
  lStack_f8 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_118 = &PTR____CFConstantStringClassReference_1000a4ac8;
  ppuStack_110 = &PTR____CFConstantStringClassReference_1000a56e8;
  puStack_108 = puVar7;
  uStack_100 = uVar8;
  puStack_f0 = puVar4;
  puStack_e8 = puVar2;
  ppuStack_e0 = ppuVar1;
  lStack_d8 = param_1;
  uStack_c8 = param_4;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain(uVar8);
  _objc_retain(puVar7);
  func_0x00010006ecc0(ppuVar6,param_2,&puStack_108,&ppuStack_118,2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8);
  func_0x000100070720();
  func_0x00010006ff00(ppuVar5[2],param_2,puVar2,1);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_release(ppuVar6);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_f8) {
    return ppuVar6;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_1000a6268;
}



/* Entry: 100047518; end: 100047627; -[SCNotifExtSDNFriendSuggestionTaskHandler _logErrorWithPushType:errorType:] */

undefined ** FUN_100047518(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lStack_48 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_68 = &PTR____CFConstantStringClassReference_1000a4ac8;
  ppuStack_60 = &PTR____CFConstantStringClassReference_1000a56e8;
  uStack_58 = param_3;
  uStack_50 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010006ecc0(ppuVar1,param_2,&uStack_58,&ppuStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8);
  func_0x000100070720();
  func_0x00010006ff00(*(undefined8 *)(param_1 + 0x10),param_2,puVar2,1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_48) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_1000a6268;
}



/* Entry: 100047628; end: 100047633; -[SCNotifExtSDNFriendSuggestionTaskHandler identifier] */

undefined ** FUN_100047628(void)

{
  return &PTR____CFConstantStringClassReference_1000a6268;
}



/* Entry: 100047634; end: 100047663; -[SCNotifExtSDNFriendSuggestionTaskHandler .cxx_destruct] */

void FUN_100047634(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100047664; end: 1000476d7; -[SCNotifExtPendingFriendReminderTaskHandler initWithFriendingUserDefaults:] */

undefined1 * FUN_100047664(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000d2610;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000476d8; end: 10004778f; -[SCNotifExtPendingFriendReminderTaskHandler didReceiveNotificationRequest:withCompletionHandler:] */

void FUN_1000476d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  func_0x00010006e720(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = param_1;
  func_0x00010006d3e0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010006e840();
  lVar3 = lVar2;
  func_0x00010006e840();
  if (lVar3 != 0) {
    func_0x0001000733e0(*(undefined8 *)(param_1 + 8),param_2,lVar2);
  }
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
  _objc_release(lVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_4);
  return;
}



/* Entry: 100047790; end: 1000479b3; -[SCNotifExtPendingFriendReminderTaskHandler _reminderUserIdsFromUserInfo:] */

void FUN_100047790(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_1000a0110;
  func_0x000100072060(param_3,param_2,&PTR____CFConstantStringClassReference_1000a6288);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1000d1d68;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1000d1d68);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  puVar2 = PTR____NSArray0__struct_1000a0070;
  if ((uVar3 & 1) != 0) {
    uVar3 = param_3;
    func_0x00010006ea00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR____NSArray0__struct_1000a0070;
    if (uVar3 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_1000d1df8;
      func_0x00010006bec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      puVar2 = PTR__OBJC_CLASS___NSArray_1000d1d38;
      _objc_opt_class(PTR__OBJC_CLASS___NSArray_1000d1d38);
      puVar5 = puVar4;
      _objc_opt_isKindOfClass(puVar4,puVar2);
      puVar2 = PTR____NSArray0__struct_1000a0070;
      if (((ulong)puVar5 & 1) != 0) {
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_1000d1c48;
        func_0x00010006dd80(PTR__OBJC_CLASS___NSMutableArray_1000d1c48);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar4);
        puVar5 = puVar4;
        func_0x00010006e860();
        lVar1 = lRam0000000000000000;
        while (puVar5 != (undefined *)0x0) {
          puVar9 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(puVar4);
            }
            uVar8 = *(ulong *)((long)puVar9 * 8);
            puVar6 = PTR__OBJC_CLASS___NSString_1000d1d68;
            _objc_opt_class(PTR__OBJC_CLASS___NSString_1000d1d68);
            _objc_opt_isKindOfClass(uVar8,puVar6);
            if ((uVar8 & 1) != 0) {
              func_0x00010006dae0(puVar2);
            }
            puVar9 = puVar9 + 1;
          } while (puVar5 != puVar9);
          puVar5 = puVar4;
          func_0x00010006e860();
        }
        _objc_release(puVar4);
      }
      _objc_release(puVar4);
      _objc_release(0);
    }
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_1000a0110 != lVar7) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_1000a0600)(param_3 + 8,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar2);
  return;
}



/* Entry: 1000479b4; end: 1000479bf; -[SCNotifExtPendingFriendReminderTaskHandler .cxx_destruct] */

void FUN_1000479b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 1000479c0; end: 100047a3b;  */

undefined * FUN_1000479c0(undefined8 param_1,undefined ***param_2)

{
  undefined *puVar1;
  undefined ***pppuVar2;
  undefined *puVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined *puVar8;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_28 = &PTR____CFConstantStringClassReference_1000a6088;
  ppuStack_20 = &PTR____CFConstantStringClassReference_1000a60a8;
  pppuVar6 = &ppuStack_28;
  puVar8 = (undefined *)0x2;
  puVar1 = PTR__OBJC_CLASS___NSArray_1000d1d38;
  func_0x00010006de40();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(param_2);
  pppuVar2 = param_2;
  func_0x00010006e840();
  if (((puVar1 != (undefined *)0x0) && (pppuVar6 != (undefined ***)0x0)) &&
     (pppuVar2 != (undefined ***)0x0)) {
    puVar3 = PTR__OBJC_CLASS___NSPredicate_1000d2198;
    func_0x000100072220(PTR__OBJC_CLASS___NSPredicate_1000d2198);
    _objc_retainAutoreleasedReturnValue();
    pppuVar2 = param_2;
    func_0x00010006f4e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    pppuVar4 = pppuVar2;
    func_0x000100073c00();
    _objc_retainAutoreleasedReturnValue();
    pppuVar5 = pppuVar4;
    func_0x00010006e840();
    if (pppuVar5 <= pppuVar6) {
      pppuVar6 = pppuVar5;
    }
    pppuVar5 = pppuVar4;
    func_0x00010006e840();
    if (pppuVar6 < pppuVar5) {
      func_0x00010006e840(pppuVar4);
      pppuVar6 = pppuVar4;
      func_0x000100073f60(pppuVar4);
      _objc_retainAutoreleasedReturnValue();
      pppuVar5 = pppuVar6;
      _SCMapArray();
      func_0x0001000725c0(puVar1);
      pppuVar7 = pppuVar5;
      func_0x00010006e840(pppuVar5);
      puVar8 = puVar8 + -(long)pppuVar7;
      _objc_release(pppuVar5);
      _objc_release(pppuVar6);
    }
    _objc_release(pppuVar4);
    _objc_release(pppuVar2);
  }
  _objc_release(param_2);
  _objc_release(puVar1);
  return puVar8;
}



/* Entry: 100047a3c; end: 100047b93;  */

long FUN_100047a3c(long param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010006e840();
  if (((param_1 != 0) && (param_3 != 0)) && (uVar1 != 0)) {
    puVar2 = PTR__OBJC_CLASS___NSPredicate_1000d2198;
    func_0x000100072220(PTR__OBJC_CLASS___NSPredicate_1000d2198);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010006f4e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar3 = uVar1;
    func_0x000100073c00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010006e840();
    if (uVar4 <= param_3) {
      param_3 = uVar4;
    }
    uVar4 = uVar3;
    func_0x00010006e840();
    if (param_3 < uVar4) {
      func_0x00010006e840(uVar3);
      uVar4 = uVar3;
      func_0x000100073f60(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      _SCMapArray();
      func_0x0001000725c0(param_1);
      uVar6 = uVar5;
      func_0x00010006e840(uVar5);
      param_4 = param_4 - uVar6;
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return param_4;
}



/* Entry: 100047b94; end: 100047cfb;  */

ulong FUN_100047b94(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  func_0x0001000726a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  puVar4 = PTR__OBJC_CLASS___NSString_1000d1d68;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1000d1d68);
  uVar2 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  FUN_1000479c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010006e6e0();
  _objc_release(uVar1);
  _objc_release(uVar3);
  return uVar2;
}



/* Entry: 100047cfc; end: 100047d43;  */

void FUN_100047cfc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001000726a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010006fda0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar1);
  return;
}



/* Entry: 100047d44; end: 100047f17;  */

void FUN_100047d44(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain();
  _objc_retain(param_2);
  lVar4 = param_1;
  func_0x00010006e840();
  puVar3 = PTR__OBJC_CLASS___NSError_1000d21a8;
  if (lVar4 == 0) {
    uStack_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_1000a0030;
    ppuStack_50 = &PTR____CFConstantStringClassReference_1000a6608;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
    func_0x00010006ecc0(PTR__OBJC_CLASS___NSDictionary_1000d1d40);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010006f2a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_3 = (long)puVar3;
    _objc_release(puVar2);
    lVar4 = 0;
  }
  else {
    uStack_88 = 0;
    uStack_78 = 0x3032000000;
    pcStack_70 = FUN_100047f18;
    uStack_68 = 0x100047f28;
    uStack_60 = 0;
    puStack_b8 = PTR___NSConcreteStackBlock_1000a00f0;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_100047f30;
    puStack_a0 = &UNK_1000a2e00;
    puStack_80 = &uStack_88;
    _objc_retain(param_2);
    lVar4 = param_1;
    uStack_98 = param_2;
    puStack_90 = &uStack_88;
    _SCMapArray(param_1,&puStack_b8);
    lVar1 = puStack_80[5];
    if (lVar1 != 0) {
      _objc_retainAutorelease();
      *param_3 = lVar1;
    }
    _objc_release(uStack_98);
    __Block_object_dispose(&uStack_88,8);
    _objc_release(uStack_60);
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(lVar4);
    return;
  }
  ___stack_chk_fail();
  lVar4 = 8;
  __Block_object_dispose(&uStack_88);
  __Unwind_Resume();
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = 0;
  return;
}



/* Entry: 100047f18; end: 100047f2f;  */

void FUN_100047f18(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 100047f30; end: 100048893;  */

undefined ** FUN_100047f30(long param_1,undefined **param_2,undefined **param_3,undefined **param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined ***pppuVar6;
  undefined **unaff_x21;
  undefined *puVar7;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  ulong uVar11;
  undefined *unaff_x28;
  undefined **ppuVar12;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined **ppuStack_2b0;
  undefined *puStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined1 **ppuStack_290;
  code *pcStack_288;
  undefined **ppuStack_278;
  undefined8 uStack_270;
  undefined **ppuStack_268;
  undefined8 uStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined *puStack_180;
  long lStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined *puStack_150;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  undefined **ppuStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_1000a0110;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar10 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  puVar7 = *(undefined **)(lVar10 + 0x28);
  _objc_retain(param_2);
  _objc_retain(uVar1);
  if (param_2 == (undefined **)0x0) {
    ppuVar8 = (undefined **)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNull_1000d21a0;
    _objc_opt_class(PTR__OBJC_CLASS___NSNull_1000d21a0);
    ppuVar8 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    if (((ulong)ppuVar8 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSNull_1000d21a0;
      func_0x000100071ec0(PTR__OBJC_CLASS___NSNull_1000d21a0);
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = param_2;
      func_0x0001000710e0();
      _objc_release(puVar2);
      if ((int)unaff_x23 != 0) goto LAB_100047fd0;
      ppuVar8 = param_2;
      func_0x000100072060();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_1000d1d68;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1000d1d68);
      ppuVar3 = ppuVar8;
      _objc_opt_isKindOfClass(ppuVar8,puVar2);
      unaff_x21 = ppuVar8;
      if (((ulong)ppuVar3 & 1) == 0) {
        unaff_x21 = (undefined **)0x0;
      }
      _objc_retain(unaff_x21);
      _objc_release(ppuVar8);
      ppuVar8 = param_2;
      func_0x000100072060();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_1000d1d68;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1000d1d68);
      ppuVar3 = ppuVar8;
      _objc_opt_isKindOfClass(ppuVar8,puVar2);
      unaff_x23 = ppuVar8;
      if (((ulong)ppuVar3 & 1) == 0) {
        unaff_x23 = (undefined **)0x0;
      }
      _objc_retain(unaff_x23);
      _objc_release(ppuVar8);
      unaff_x25 = param_2;
      func_0x000100072060();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_1000d1d68;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1000d1d68);
      ppuVar8 = unaff_x25;
      _objc_opt_isKindOfClass(unaff_x25,puVar2);
      unaff_x24 = unaff_x25;
      if (((ulong)ppuVar8 & 1) == 0) {
        unaff_x24 = (undefined **)0x0;
      }
      _objc_retain(unaff_x24);
      _objc_release(unaff_x25);
      ppuVar8 = unaff_x21;
      func_0x0001000713a0();
      if (ppuVar8 == (undefined **)0x0) {
        uStack_80 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_1000a0030;
        ppuStack_78 = &PTR____CFConstantStringClassReference_1000a6508;
LAB_1000481b4:
        puVar7 = PTR__OBJC_CLASS___NSError_1000d21a8;
        unaff_x28 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
        func_0x00010006ecc0();
        _objc_retainAutoreleasedReturnValue();
        param_3 = &PTR____CFConstantStringClassReference_1000a64c8;
        param_4 = (undefined **)0x0;
        func_0x00010006f2a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        ppuVar8 = (undefined **)0x0;
      }
      else {
        ppuVar8 = unaff_x21;
        func_0x000100071100();
        if ((((ulong)ppuVar8 & 1) != 0) ||
           (ppuVar8 = unaff_x21, func_0x000100071100(), (int)ppuVar8 != 0)) {
          uStack_80 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_1000a0030;
          ppuStack_78 = &PTR____CFConstantStringClassReference_1000a6528;
          goto LAB_1000481b4;
        }
        ppuVar8 = unaff_x23;
        func_0x0001000713a0();
        puVar2 = PTR__OBJC_CLASS___NSError_1000d21a8;
        if (ppuVar8 == (undefined **)0x0) {
          uStack_80 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_1000a0030;
          ppuStack_78 = &PTR____CFConstantStringClassReference_1000a6548;
          puVar7 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
          func_0x00010006ecc0(PTR__OBJC_CLASS___NSDictionary_1000d1d40);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010006f2a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          _objc_release(puVar7);
          puVar7 = puVar2;
        }
        ppuStack_d0 = unaff_x24;
        ppuStack_98 = unaff_x23;
        func_0x0001000713a0();
        puVar2 = PTR__OBJC_CLASS___NSError_1000d21a8;
        if (unaff_x24 == (undefined **)0x0) {
          uStack_90 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_1000a0030;
          ppuStack_88 = &PTR____CFConstantStringClassReference_1000a6568;
          puVar7 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
          func_0x00010006ecc0(PTR__OBJC_CLASS___NSDictionary_1000d1d40);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010006f2a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          _objc_release(puVar7);
          puVar7 = puVar2;
        }
        ppuVar3 = param_2;
        func_0x000100072060();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_1000d1d68;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1000d1d68);
        ppuVar4 = ppuVar3;
        _objc_opt_isKindOfClass(ppuVar3,puVar2);
        ppuVar8 = ppuVar3;
        if (((ulong)ppuVar4 & 1) == 0) {
          ppuVar8 = (undefined **)0x0;
        }
        _objc_retain(ppuVar8);
        _objc_release(ppuVar3);
        ppuVar4 = param_2;
        func_0x000100072060();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_1000d1d68;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1000d1d68);
        ppuVar5 = ppuVar4;
        _objc_opt_isKindOfClass(ppuVar4,puVar2);
        ppuVar3 = ppuVar4;
        if (((ulong)ppuVar5 & 1) == 0) {
          ppuVar3 = (undefined **)0x0;
        }
        _objc_retain(ppuVar3);
        _objc_release(ppuVar4);
        ppuVar5 = param_2;
        func_0x000100072060();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_1000d1d68;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1000d1d68);
        ppuVar9 = ppuVar5;
        _objc_opt_isKindOfClass(ppuVar5,puVar2);
        ppuVar4 = ppuVar5;
        if (((ulong)ppuVar9 & 1) == 0) {
          ppuVar4 = (undefined **)0x0;
        }
        _objc_retain(ppuVar4);
        _objc_release(ppuVar5);
        ppuVar9 = param_2;
        func_0x000100072060();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_1000d1d68;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1000d1d68);
        ppuVar12 = ppuVar9;
        _objc_opt_isKindOfClass(ppuVar9,puVar2);
        ppuVar5 = ppuVar9;
        if (((ulong)ppuVar12 & 1) == 0) {
          ppuVar5 = (undefined **)0x0;
        }
        _objc_retain(ppuVar5);
        _objc_release(ppuVar9);
        ppuVar9 = ppuVar8;
        func_0x0001000713a0();
        ppuStack_a0 = (undefined **)0x0;
        if (ppuVar9 != (undefined **)0x0) {
          ppuStack_a0 = ppuVar8;
        }
        _objc_retain();
        _objc_release(ppuVar8);
        ppuVar8 = ppuVar3;
        func_0x0001000713a0();
        ppuStack_a8 = (undefined **)0x0;
        if (ppuVar8 != (undefined **)0x0) {
          ppuStack_a8 = ppuVar3;
        }
        _objc_retain();
        _objc_release(ppuVar3);
        ppuVar8 = ppuVar4;
        func_0x0001000713a0();
        ppuStack_b0 = (undefined **)0x0;
        if (ppuVar8 != (undefined **)0x0) {
          ppuStack_b0 = ppuVar4;
        }
        _objc_retain();
        _objc_release(ppuVar4);
        ppuVar8 = ppuVar5;
        func_0x0001000713a0();
        ppuStack_b8 = (undefined **)0x0;
        if (ppuVar8 != (undefined **)0x0) {
          ppuStack_b8 = ppuVar5;
        }
        _objc_retain();
        _objc_release(ppuVar5);
        ppuVar3 = param_2;
        func_0x000100072060();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_1000d1d68;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1000d1d68);
        ppuVar4 = ppuVar3;
        _objc_opt_isKindOfClass(ppuVar3,puVar2);
        ppuVar8 = ppuVar3;
        if (((ulong)ppuVar4 & 1) == 0) {
          ppuVar8 = (undefined **)0x0;
        }
        _objc_retain(ppuVar8);
        _objc_release(ppuVar3);
        ppuVar4 = param_2;
        func_0x000100072060();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_1000d1d68;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1000d1d68);
        ppuVar5 = ppuVar4;
        _objc_opt_isKindOfClass(ppuVar4,puVar2);
        ppuVar3 = ppuVar4;
        if (((ulong)ppuVar5 & 1) == 0) {
          ppuVar3 = (undefined **)0x0;
        }
        _objc_retain(ppuVar3);
        _objc_release(ppuVar4);
        ppuVar5 = param_2;
        func_0x000100072060();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_1000d1d68;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1000d1d68);
        ppuVar9 = ppuVar5;
        _objc_opt_isKindOfClass(ppuVar5,puVar2);
        ppuVar4 = ppuVar5;
        if (((ulong)ppuVar9 & 1) == 0) {
          ppuVar4 = (undefined **)0x0;
        }
        _objc_retain(ppuVar4);
        _objc_release(ppuVar5);
        ppuVar5 = ppuVar8;
        func_0x0001000713a0();
        ppuStack_c0 = (undefined **)0x0;
        if (ppuVar5 != (undefined **)0x0) {
          ppuStack_c0 = ppuVar8;
        }
        _objc_retain();
        _objc_release(ppuVar8);
        ppuVar8 = ppuVar3;
        func_0x0001000713a0();
        ppuStack_d8 = (undefined **)0x0;
        if (ppuVar8 != (undefined **)0x0) {
          ppuStack_d8 = ppuVar3;
        }
        _objc_retain();
        _objc_release(ppuVar3);
        ppuVar8 = ppuVar4;
        func_0x0001000713a0();
        ppuStack_e0 = (undefined **)0x0;
        if (ppuVar8 != (undefined **)0x0) {
          ppuStack_e0 = ppuVar4;
        }
        _objc_retain();
        _objc_release(ppuVar4);
        ppuVar3 = param_2;
        func_0x000100072060();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_1000d1d68;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1000d1d68);
        ppuVar4 = ppuVar3;
        _objc_opt_isKindOfClass(ppuVar3,puVar2);
        ppuVar8 = ppuVar3;
        if (((ulong)ppuVar4 & 1) == 0) {
          ppuVar8 = (undefined **)0x0;
        }
        _objc_retain(ppuVar8);
        _objc_release(ppuVar3);
        ppuVar4 = param_2;
        func_0x000100072060();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_1000d1d68;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1000d1d68);
        ppuVar5 = ppuVar4;
        _objc_opt_isKindOfClass(ppuVar4,puVar2);
        ppuVar3 = ppuVar4;
        if (((ulong)ppuVar5 & 1) == 0) {
          ppuVar3 = (undefined **)0x0;
        }
        _objc_retain(ppuVar3);
        _objc_release(ppuVar4);
        unaff_x28 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
        func_0x000100071040(ppuVar8);
        _objc_release(ppuVar8);
        func_0x000100071f40();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
        func_0x000100071040(ppuVar3);
        _objc_release(ppuVar3);
        func_0x000100071f40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = (undefined **)PTR_PTR_1000d21b0;
        puStack_c8 = puVar2;
        _objc_alloc();
        _objc_retain(uVar1);
        uVar11 = 0;
        func_0x000100071100();
        if ((uVar11 & 1) == 0) {
          func_0x000100071100(&PTR____CFConstantStringClassReference_1000a60a8);
        }
        _objc_release(uVar1);
        puVar2 = PTR__OBJC_CLASS___NSDate_1000d1bb8;
        _objc_opt_new();
        puStack_e8 = puVar2;
        func_0x000100074240();
        unaff_x24 = ppuStack_d0;
        unaff_x25 = ppuStack_d8;
        ppuVar3 = ppuStack_e0;
        ppuStack_f8 = ppuStack_e0;
        ppuStack_108 = ppuStack_c0;
        ppuStack_100 = ppuStack_d8;
        ppuStack_118 = ppuStack_b8;
        puStack_110 = puStack_c8;
        ppuStack_120 = ppuStack_b0;
        param_3 = unaff_x21;
        param_4 = ppuStack_98;
        puStack_f0 = unaff_x28;
        func_0x000100070e80();
        _objc_release(ppuVar3);
        _objc_release(unaff_x25);
        _objc_release(ppuStack_c0);
        _objc_release(ppuStack_b8);
        _objc_release(ppuStack_b0);
        _objc_release(ppuStack_a8);
        _objc_release(ppuStack_a0);
        unaff_x23 = ppuStack_98;
        _objc_release(puStack_e8);
        _objc_release(puStack_c8);
      }
      _objc_release(unaff_x28);
      _objc_release(unaff_x24);
      _objc_release(unaff_x23);
    }
    else {
LAB_100047fd0:
      puVar7 = PTR__OBJC_CLASS___NSError_1000d21a8;
      uStack_80 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_1000a0030;
      ppuStack_78 = &PTR____CFConstantStringClassReference_1000a64e8;
      unaff_x21 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1000d1d40;
      func_0x00010006ecc0();
      _objc_retainAutoreleasedReturnValue();
      param_3 = &PTR____CFConstantStringClassReference_1000a64c8;
      param_4 = (undefined **)0x0;
      func_0x00010006f2a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      ppuVar8 = (undefined **)0x0;
    }
    _objc_release(unaff_x21);
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_retain(puVar7);
  ppuVar3 = *(undefined ***)(lVar10 + 0x28);
  *(undefined **)(lVar10 + 0x28) = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_128 = FUN_100048894;
  lStack_190 = *(long *)PTR____stack_chk_guard_1000a0110;
  puStack_180 = unaff_x28;
  lStack_178 = lVar10;
  ppuStack_170 = ppuVar8;
  ppuStack_168 = unaff_x25;
  ppuStack_160 = unaff_x24;
  ppuStack_158 = unaff_x23;
  puStack_150 = puVar7;
  ppuStack_148 = unaff_x21;
  uStack_140 = uVar1;
  ppuStack_138 = param_2;
  puStack_130 = &stack0xfffffffffffffff0;
  if (param_3 == (undefined **)0x0) {
    ppuVar4 = (undefined **)0x0;
    ppuVar8 = (undefined **)0x0;
  }
  else {
    _objc_retain(param_3);
    ppuVar8 = param_3;
    func_0x000100072060();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSString_1000d1d68;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1000d1d68);
    ppuVar3 = ppuVar8;
    _objc_opt_isKindOfClass(ppuVar8,puVar7);
    param_2 = ppuVar8;
    if (((ulong)ppuVar3 & 1) == 0) {
      param_2 = (undefined **)0x0;
    }
    _objc_retain(param_2);
    _objc_release(ppuVar8);
    ppuVar8 = param_3;
    func_0x000100072060();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1000d1d38;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1000d1d38);
    ppuVar4 = ppuVar8;
    _objc_opt_isKindOfClass(ppuVar8,puVar7);
    ppuVar3 = ppuVar8;
    if (((ulong)ppuVar4 & 1) == 0) {
      ppuVar3 = (undefined **)0x0;
    }
    _objc_retain(ppuVar3);
    _objc_release(ppuVar8);
    ppuVar8 = param_3;
    func_0x000100072060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar7 = PTR__OBJC_CLASS___NSString_1000d1d68;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1000d1d68);
    ppuVar4 = ppuVar8;
    _objc_opt_isKindOfClass(ppuVar8,puVar7);
    ppuVar5 = ppuVar8;
    if (((ulong)ppuVar4 & 1) == 0) {
      ppuVar5 = (undefined **)0x0;
    }
    _objc_retain(ppuVar5);
    _objc_release(ppuVar8);
    ppuVar8 = ppuVar3;
    func_0x00010006e840();
    if (ppuVar8 == (undefined **)0x0) {
      ppuVar8 = param_2;
      func_0x0001000713a0();
      puVar7 = PTR__OBJC_CLASS___NSError_1000d21a8;
      if (ppuVar8 == (undefined **)0x0) {
        uStack_270 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_1000a0030;
        ppuStack_268 = &PTR____CFConstantStringClassReference_1000a61e8;
        puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
        func_0x00010006ecc0(PTR__OBJC_CLASS___NSDictionary_1000d1d40);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = &PTR____CFConstantStringClassReference_1000a64c8;
        func_0x00010006f2a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *param_4 = puVar7;
        _objc_release(puVar2);
        ppuVar8 = (undefined **)0x0;
      }
      else {
        _objc_retain(ppuVar5);
        _objc_retain(param_2);
        ppuVar8 = param_2;
        func_0x0001000713a0();
        puVar7 = PTR__OBJC_CLASS___NSError_1000d21a8;
        if (ppuVar8 == (undefined **)0x0) {
          uStack_1d0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_1000a0030;
          ppuStack_250 = &PTR____CFConstantStringClassReference_1000a6588;
          ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1000d1d40;
          func_0x00010006ecc0(PTR__OBJC_CLASS___NSDictionary_1000d1d40);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010006f2a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          ppuVar9 = (undefined **)0x0;
          *param_4 = puVar7;
        }
        else {
          ppuVar8 = param_2;
          func_0x00010006ea00();
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = ppuVar8;
          func_0x0001000713a0();
          puVar7 = PTR__OBJC_CLASS___NSError_1000d21a8;
          if (ppuVar4 == (undefined **)0x0) {
            uStack_1d0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_1000a0030;
            ppuStack_250 = &PTR____CFConstantStringClassReference_1000a65a8;
            ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1000d1d40;
            func_0x00010006ecc0(PTR__OBJC_CLASS___NSDictionary_1000d1d40);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010006f2a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_autorelease();
            ppuVar9 = (undefined **)0x0;
            *param_4 = puVar7;
          }
          else {
            ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSJSONSerialization_1000d1df8;
            func_0x00010006bec0();
            _objc_retainAutoreleasedReturnValue();
            if (*param_4 == (undefined *)0x0) {
              puVar7 = PTR__OBJC_CLASS___NSArray_1000d1d38;
              _objc_opt_class(PTR__OBJC_CLASS___NSArray_1000d1d38);
              ppuVar9 = ppuVar4;
              _objc_opt_isKindOfClass(ppuVar4,puVar7);
              ppuVar12 = ppuVar4;
              if (((ulong)ppuVar9 & 1) == 0) {
                ppuVar12 = (undefined **)0x0;
              }
              _objc_retain(ppuVar12);
              if (ppuVar12 == (undefined **)0x0) {
LAB_100048ce4:
                puVar7 = PTR__OBJC_CLASS___NSError_1000d21a8;
                uStack_1d0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_1000a0030;
                ppuStack_250 = &PTR____CFConstantStringClassReference_1000a65c8;
                puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
                func_0x00010006ecc0(PTR__OBJC_CLASS___NSDictionary_1000d1d40);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010006f2a0();
                _objc_retainAutoreleasedReturnValue();
                _objc_autorelease();
                *param_4 = puVar7;
                _objc_release(puVar2);
                ppuVar9 = (undefined **)0x0;
              }
              else {
                puVar7 = PTR__OBJC_CLASS___NSArray_1000d1d38;
                _objc_opt_class(PTR__OBJC_CLASS___NSArray_1000d1d38);
                ppuVar9 = ppuVar4;
                _objc_opt_isKindOfClass(ppuVar4,puVar7);
                if (((ulong)ppuVar9 & 1) == 0) goto LAB_100048ce4;
                in_b0 = 0;
                in_register_00005001 = 0;
                in_register_00005002 = 0;
                in_register_00005003 = 0;
                in_register_00005004 = 0;
                in_register_00005005 = 0;
                in_register_00005006 = 0;
                in_register_00005007 = 0;
                uStack_1a8 = 0;
                uStack_1b0 = 0;
                uStack_198 = 0;
                uStack_1a0 = 0;
                lStack_1c8 = 0;
                uStack_1d0 = 0;
                uStack_1b8 = 0;
                plStack_1c0 = (long *)0x0;
                ppuStack_278 = ppuVar12;
                _objc_retain(ppuVar4);
                ppuVar9 = ppuVar4;
                func_0x00010006e860();
                if (ppuVar9 != (undefined **)0x0) {
                  lVar10 = *plStack_1c0;
                  do {
                    ppuVar12 = (undefined **)0x0;
                    do {
                      if (*plStack_1c0 != lVar10) {
                        _objc_enumerationMutation(ppuVar4);
                      }
                      uVar11 = *(ulong *)(lStack_1c8 + (long)ppuVar12 * 8);
                      puVar7 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
                      _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1000d1d40);
                      _objc_opt_isKindOfClass(uVar11,puVar7);
                      puVar7 = PTR__OBJC_CLASS___NSError_1000d21a8;
                      if ((uVar11 & 1) == 0) {
                        uStack_260 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_1000a0030;
                        ppuStack_258 = &PTR____CFConstantStringClassReference_1000a65e8;
                        puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
                        func_0x00010006ecc0(PTR__OBJC_CLASS___NSDictionary_1000d1d40);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010006f2a0();
                        _objc_retainAutoreleasedReturnValue();
                        _objc_autorelease();
                        *param_4 = puVar7;
                        _objc_release(puVar2);
                        _objc_release(ppuVar4);
                        ppuVar9 = (undefined **)0x0;
                        ppuVar12 = ppuStack_278;
                        goto LAB_100048de8;
                      }
                      ppuVar12 = (undefined **)((long)ppuVar12 + 1);
                    } while (ppuVar9 != ppuVar12);
                    ppuVar9 = ppuVar4;
                    func_0x00010006e860();
                  } while (ppuVar9 != (undefined **)0x0);
                }
                _objc_release(ppuVar4);
                _objc_retain(ppuVar4);
                ppuVar12 = ppuStack_278;
                ppuVar9 = ppuStack_278;
              }
LAB_100048de8:
              _objc_release(ppuVar12);
            }
            else {
              ppuVar9 = (undefined **)0x0;
            }
          }
          _objc_release(ppuVar4);
        }
        _objc_release(ppuVar8);
        _objc_release(param_2);
        ppuVar8 = ppuVar9;
        func_0x00010006e840();
        puVar7 = PTR__OBJC_CLASS___NSError_1000d21a8;
        if ((ppuVar8 == (undefined **)0x0) && (*param_4 == (undefined *)0x0)) {
          uStack_1d0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_1000a0030;
          ppuStack_250 = &PTR____CFConstantStringClassReference_1000a6628;
          puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
          func_0x00010006ecc0(PTR__OBJC_CLASS___NSDictionary_1000d1d40);
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = &PTR____CFConstantStringClassReference_1000a64c8;
          func_0x00010006f2a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *param_4 = puVar7;
          _objc_release(puVar2);
          ppuVar8 = (undefined **)0x0;
        }
        else {
          ppuVar8 = ppuVar9;
          FUN_100047d44(ppuVar9,ppuVar5);
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = param_4;
        }
        _objc_release(ppuVar9);
        _objc_release(ppuVar5);
      }
    }
    else {
      ppuVar8 = ppuVar3;
      FUN_100047d44(ppuVar3,ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = param_4;
    }
    _objc_release(ppuVar5);
    _objc_release(ppuVar3);
    ppuVar3 = param_2;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_1000a0110 != lStack_190) {
    ___stack_chk_fail();
    pppuVar6 = &ppuStack_2b0;
    pcStack_288 = FUN_100048f20;
    ppuStack_2a0 = ppuVar8;
    ppuStack_298 = param_2;
    ppuStack_290 = &puStack_130;
    _objc_retain(ppuVar4);
    puStack_2a8 = PTR_PTR_1000d2618;
    ppuStack_2b0 = ppuVar3;
    _objc_msgSendSuper2(&ppuStack_2b0,PTR_s_init_1000d07d0);
    if (pppuVar6 != (undefined ***)0x0) {
      ppuVar8 = ppuVar4;
      func_0x00010006eb40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = (undefined *)pppuVar6[1];
      pppuVar6[1] = ppuVar8;
      _objc_release(puVar7);
      ppuVar8 = ppuVar4;
      func_0x00010006eb40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = (undefined *)pppuVar6[2];
      pppuVar6[2] = ppuVar8;
      _objc_release(puVar7);
      ppuVar8 = ppuVar4;
      func_0x00010006eb40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = (undefined *)pppuVar6[3];
      pppuVar6[3] = ppuVar8;
      _objc_release(puVar7);
      ppuVar8 = ppuVar4;
      func_0x00010006eb20();
      pppuVar6[4] = ppuVar8;
      ppuVar8 = ppuVar4;
      func_0x00010006eb40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = (undefined *)pppuVar6[5];
      pppuVar6[5] = ppuVar8;
      _objc_release(puVar7);
      ppuVar8 = ppuVar4;
      func_0x00010006eb40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = (undefined *)pppuVar6[6];
      pppuVar6[6] = ppuVar8;
      _objc_release(puVar7);
      ppuVar8 = ppuVar4;
      func_0x00010006eb40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = (undefined *)pppuVar6[7];
      pppuVar6[7] = ppuVar8;
      _objc_release(puVar7);
      ppuVar8 = ppuVar4;
      func_0x00010006eb40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = (undefined *)pppuVar6[8];
      pppuVar6[8] = ppuVar8;
      _objc_release(puVar7);
      ppuVar8 = ppuVar4;
      func_0x00010006eb40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = (undefined *)pppuVar6[9];
      pppuVar6[9] = ppuVar8;
      _objc_release(puVar7);
      ppuVar8 = ppuVar4;
      func_0x00010006eb40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = (undefined *)pppuVar6[10];
      pppuVar6[10] = ppuVar8;
      _objc_release(puVar7);
      ppuVar8 = ppuVar4;
      func_0x00010006eb40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = (undefined *)pppuVar6[0xb];
      pppuVar6[0xb] = ppuVar8;
      _objc_release(puVar7);
      ppuVar8 = ppuVar4;
      func_0x00010006eb40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = (undefined *)pppuVar6[0xc];
      pppuVar6[0xc] = ppuVar8;
      _objc_release(puVar7);
      ppuVar8 = ppuVar4;
      func_0x00010006eb40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = (undefined *)pppuVar6[0xd];
      pppuVar6[0xd] = ppuVar8;
      _objc_release(puVar7);
      func_0x00010006eb00(ppuVar4);
      pppuVar6[0xe] =
           (undefined **)
           CONCAT17(in_register_00005007,
                    CONCAT16(in_register_00005006,
                             CONCAT15(in_register_00005005,
                                      CONCAT14(in_register_00005004,
                                               CONCAT13(in_register_00005003,
                                                        CONCAT12(in_register_00005002,
                                                                 CONCAT11(in_register_00005001,in_b0
                                                                         )))))));
    }
    _objc_release(ppuVar4);
    return (undefined **)pppuVar6;
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(ppuVar8);
  return ppuVar8;
}



/* Entry: 100048894; end: 100048f1f; +[SCFriendingNotificationSnapchatterHelper SCExtractNotificationSnapchattersFromNotificationPayload:error:] */

undefined1 *
FUN_100048894(undefined *param_1,undefined8 param_2,undefined *param_3,undefined **param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *unaff_x19;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined8 uStack_b0;
  long lStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_1000a0110;
  if (param_3 == (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
    ppuVar8 = (undefined **)0x0;
    goto LAB_100048e60;
  }
  _objc_retain(param_3);
  puVar10 = param_3;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1000d1d68;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1000d1d68);
  puVar2 = puVar10;
  _objc_opt_isKindOfClass(puVar10,puVar1);
  unaff_x19 = puVar10;
  if (((ulong)puVar2 & 1) == 0) {
    unaff_x19 = (undefined *)0x0;
  }
  _objc_retain(unaff_x19);
  _objc_release(puVar10);
  puVar10 = param_3;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1000d1d38;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1000d1d38);
  puVar2 = puVar10;
  _objc_opt_isKindOfClass(puVar10,puVar1);
  puVar1 = puVar10;
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar10);
  puVar10 = param_3;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1000d1d68;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1000d1d68);
  puVar3 = puVar10;
  _objc_opt_isKindOfClass(puVar10,puVar2);
  puVar2 = puVar10;
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release(puVar10);
  puVar10 = puVar1;
  func_0x00010006e840();
  if (puVar10 == (undefined *)0x0) {
    puVar3 = unaff_x19;
    func_0x0001000713a0();
    puVar10 = PTR__OBJC_CLASS___NSError_1000d21a8;
    if (puVar3 == (undefined *)0x0) {
      uStack_150 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_1000a0030;
      ppuStack_148 = &PTR____CFConstantStringClassReference_1000a61e8;
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
      func_0x00010006ecc0(PTR__OBJC_CLASS___NSDictionary_1000d1d40);
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = &PTR____CFConstantStringClassReference_1000a64c8;
      func_0x00010006f2a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_4 = puVar10;
      _objc_release(puVar3);
      puVar10 = (undefined *)0x0;
    }
    else {
      _objc_retain(puVar2);
      _objc_retain(unaff_x19);
      puVar3 = unaff_x19;
      func_0x0001000713a0();
      puVar10 = PTR__OBJC_CLASS___NSError_1000d21a8;
      if (puVar3 == (undefined *)0x0) {
        uStack_b0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_1000a0030;
        ppuStack_130 = &PTR____CFConstantStringClassReference_1000a6588;
        puVar3 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
        func_0x00010006ecc0(PTR__OBJC_CLASS___NSDictionary_1000d1d40);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010006f2a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        puVar12 = (undefined *)0x0;
        *param_4 = puVar10;
      }
      else {
        puVar3 = unaff_x19;
        func_0x00010006ea00();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar3;
        func_0x0001000713a0();
        puVar10 = PTR__OBJC_CLASS___NSError_1000d21a8;
        if (puVar12 == (undefined *)0x0) {
          uStack_b0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_1000a0030;
          ppuStack_130 = &PTR____CFConstantStringClassReference_1000a65a8;
          puVar4 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
          func_0x00010006ecc0(PTR__OBJC_CLASS___NSDictionary_1000d1d40);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010006f2a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          puVar12 = (undefined *)0x0;
          *param_4 = puVar10;
        }
        else {
          puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_1000d1df8;
          func_0x00010006bec0();
          _objc_retainAutoreleasedReturnValue();
          if (*param_4 == (undefined *)0x0) {
            puVar10 = PTR__OBJC_CLASS___NSArray_1000d1d38;
            _objc_opt_class(PTR__OBJC_CLASS___NSArray_1000d1d38);
            puVar12 = puVar4;
            _objc_opt_isKindOfClass(puVar4,puVar10);
            puVar10 = puVar4;
            if (((ulong)puVar12 & 1) == 0) {
              puVar10 = (undefined *)0x0;
            }
            _objc_retain(puVar10);
            if (puVar10 == (undefined *)0x0) {
LAB_100048ce4:
              puVar12 = PTR__OBJC_CLASS___NSError_1000d21a8;
              uStack_b0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_1000a0030;
              ppuStack_130 = &PTR____CFConstantStringClassReference_1000a65c8;
              puVar5 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
              func_0x00010006ecc0(PTR__OBJC_CLASS___NSDictionary_1000d1d40);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010006f2a0();
              _objc_retainAutoreleasedReturnValue();
              _objc_autorelease();
              *param_4 = puVar12;
              _objc_release(puVar5);
              puVar12 = (undefined *)0x0;
            }
            else {
              puVar12 = PTR__OBJC_CLASS___NSArray_1000d1d38;
              _objc_opt_class(PTR__OBJC_CLASS___NSArray_1000d1d38);
              puVar5 = puVar4;
              _objc_opt_isKindOfClass(puVar4,puVar12);
              if (((ulong)puVar5 & 1) == 0) goto LAB_100048ce4;
              in_b0 = 0;
              in_register_00005001 = 0;
              in_register_00005002 = 0;
              in_register_00005003 = 0;
              in_register_00005004 = 0;
              in_register_00005005 = 0;
              in_register_00005006 = 0;
              in_register_00005007 = 0;
              uStack_88 = 0;
              uStack_90 = 0;
              uStack_78 = 0;
              uStack_80 = 0;
              lStack_a8 = 0;
              uStack_b0 = 0;
              uStack_98 = 0;
              plStack_a0 = (long *)0x0;
              puStack_158 = puVar10;
              _objc_retain(puVar4);
              puVar10 = puVar4;
              func_0x00010006e860();
              if (puVar10 != (undefined *)0x0) {
                lVar11 = *plStack_a0;
                do {
                  puVar12 = (undefined *)0x0;
                  do {
                    if (*plStack_a0 != lVar11) {
                      _objc_enumerationMutation(puVar4);
                    }
                    uVar13 = *(ulong *)(lStack_a8 + (long)puVar12 * 8);
                    puVar5 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
                    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1000d1d40);
                    _objc_opt_isKindOfClass(uVar13,puVar5);
                    puVar5 = PTR__OBJC_CLASS___NSError_1000d21a8;
                    if ((uVar13 & 1) == 0) {
                      uStack_140 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_1000a0030;
                      ppuStack_138 = &PTR____CFConstantStringClassReference_1000a65e8;
                      puVar10 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
                      func_0x00010006ecc0(PTR__OBJC_CLASS___NSDictionary_1000d1d40);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010006f2a0();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_autorelease();
                      *param_4 = puVar5;
                      _objc_release(puVar10);
                      _objc_release(puVar4);
                      puVar12 = (undefined *)0x0;
                      puVar10 = puStack_158;
                      goto LAB_100048de8;
                    }
                    puVar12 = puVar12 + 1;
                  } while (puVar10 != puVar12);
                  puVar10 = puVar4;
                  func_0x00010006e860();
                } while (puVar10 != (undefined *)0x0);
              }
              _objc_release(puVar4);
              _objc_retain(puVar4);
              puVar10 = puStack_158;
              puVar12 = puStack_158;
            }
LAB_100048de8:
            _objc_release(puVar10);
          }
          else {
            puVar12 = (undefined *)0x0;
          }
        }
        _objc_release(puVar4);
      }
      _objc_release(puVar3);
      _objc_release(unaff_x19);
      puVar3 = puVar12;
      func_0x00010006e840();
      puVar10 = PTR__OBJC_CLASS___NSError_1000d21a8;
      if ((puVar3 == (undefined *)0x0) && (*param_4 == (undefined *)0x0)) {
        uStack_b0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_1000a0030;
        ppuStack_130 = &PTR____CFConstantStringClassReference_1000a6628;
        puVar3 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
        func_0x00010006ecc0(PTR__OBJC_CLASS___NSDictionary_1000d1d40);
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = &PTR____CFConstantStringClassReference_1000a64c8;
        func_0x00010006f2a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *param_4 = puVar10;
        _objc_release(puVar3);
        puVar10 = (undefined *)0x0;
      }
      else {
        puVar10 = puVar12;
        FUN_100047d44(puVar12,puVar2);
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = param_4;
      }
      _objc_release(puVar12);
      _objc_release(puVar2);
    }
  }
  else {
    puVar10 = puVar1;
    FUN_100047d44(puVar1,puVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = param_4;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  param_1 = unaff_x19;
  _objc_release();
LAB_100048e60:
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar10);
    return puVar10;
  }
  ___stack_chk_fail();
  ppuVar6 = &puStack_190;
  pcStack_168 = FUN_100048f20;
  puStack_180 = puVar10;
  puStack_178 = unaff_x19;
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar8);
  puStack_188 = PTR_PTR_1000d2618;
  puStack_190 = param_1;
  _objc_msgSendSuper2(&puStack_190,PTR_s_init_1000d07d0);
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar7 = ppuVar8;
    func_0x00010006eb40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)ppuVar6 + 8);
    *(undefined ***)((long)ppuVar6 + 8) = ppuVar7;
    _objc_release(uVar9);
    ppuVar7 = ppuVar8;
    func_0x00010006eb40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)ppuVar6 + 0x10);
    *(undefined ***)((long)ppuVar6 + 0x10) = ppuVar7;
    _objc_release(uVar9);
    ppuVar7 = ppuVar8;
    func_0x00010006eb40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)ppuVar6 + 0x18);
    *(undefined ***)((long)ppuVar6 + 0x18) = ppuVar7;
    _objc_release(uVar9);
    ppuVar7 = ppuVar8;
    func_0x00010006eb20();
    *(undefined ***)((long)ppuVar6 + 0x20) = ppuVar7;
    ppuVar7 = ppuVar8;
    func_0x00010006eb40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)ppuVar6 + 0x28);
    *(undefined ***)((long)ppuVar6 + 0x28) = ppuVar7;
    _objc_release(uVar9);
    ppuVar7 = ppuVar8;
    func_0x00010006eb40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)ppuVar6 + 0x30);
    *(undefined ***)((long)ppuVar6 + 0x30) = ppuVar7;
    _objc_release(uVar9);
    ppuVar7 = ppuVar8;
    func_0x00010006eb40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)ppuVar6 + 0x38);
    *(undefined ***)((long)ppuVar6 + 0x38) = ppuVar7;
    _objc_release(uVar9);
    ppuVar7 = ppuVar8;
    func_0x00010006eb40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)ppuVar6 + 0x40);
    *(undefined ***)((long)ppuVar6 + 0x40) = ppuVar7;
    _objc_release(uVar9);
    ppuVar7 = ppuVar8;
    func_0x00010006eb40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)ppuVar6 + 0x48);
    *(undefined ***)((long)ppuVar6 + 0x48) = ppuVar7;
    _objc_release(uVar9);
    ppuVar7 = ppuVar8;
    func_0x00010006eb40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)ppuVar6 + 0x50);
    *(undefined ***)((long)ppuVar6 + 0x50) = ppuVar7;
    _objc_release(uVar9);
    ppuVar7 = ppuVar8;
    func_0x00010006eb40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)ppuVar6 + 0x58);
    *(undefined ***)((long)ppuVar6 + 0x58) = ppuVar7;
    _objc_release(uVar9);
    ppuVar7 = ppuVar8;
    func_0x00010006eb40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)ppuVar6 + 0x60);
    *(undefined ***)((long)ppuVar6 + 0x60) = ppuVar7;
    _objc_release(uVar9);
    ppuVar7 = ppuVar8;
    func_0x00010006eb40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)ppuVar6 + 0x68);
    *(undefined ***)((long)ppuVar6 + 0x68) = ppuVar7;
    _objc_release(uVar9);
    func_0x00010006eb00(ppuVar8);
    *(ulong *)((long)ppuVar6 + 0x70) =
         CONCAT17(in_register_00005007,
                  CONCAT16(in_register_00005006,
                           CONCAT15(in_register_00005005,
                                    CONCAT14(in_register_00005004,
                                             CONCAT13(in_register_00005003,
                                                      CONCAT12(in_register_00005002,
                                                               CONCAT11(in_register_00005001,in_b0))
                                                     )))));
  }
  _objc_release(ppuVar8);
  return (undefined1 *)ppuVar6;
}



/* Entry: 100048f20; end: 100049187; -[SCFriendingNotificationSnapchatter initWithCoder:] */

undefined1 *
FUN_100048f20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_1000d2618;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010006eb40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010006eb40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010006eb40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010006eb20();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    uVar2 = param_4;
    func_0x00010006eb40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010006eb40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010006eb40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010006eb40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010006eb40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010006eb40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010006eb40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010006eb40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010006eb40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = uVar2;
    _objc_release(uVar3);
    func_0x00010006eb00(param_4);
    *(undefined8 *)((long)puVar1 + 0x70) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 100049188; end: 100049433; -[SCFriendingNotificationSnapchatter initWithUserId:mutableName:displayName:notificationType:bitmojiAvatarId:bitmojiSelfieId:bitmojiSceneId:bitmojiBackgroundId:isFromMyContact:suggestReason:abbreviatedSuggestReason:suggestedToken:isViewed:processingTimestamp:] */

undefined8 *
FUN_100049188(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain();
  puStack_78 = PTR_PTR_1000d2618;
  puVar1 = &uStack_80;
  uStack_80 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010006e800();
    uVar3 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010006e800();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010006e800();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    puVar1[4] = param_7;
    uVar2 = param_8;
    func_0x00010006e800();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010006e800();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010006e800();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010006e800();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010006e800();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010006e800();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010006e800();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_15;
    func_0x00010006e800();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_16;
    func_0x00010006e800();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar3);
    puVar1[0xe] = param_1;
  }
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 100049434; end: 100049457; -[SCFriendingNotificationSnapchatter copyWithZone:] */

undefined8 FUN_100049434(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 100049458; end: 1000495a7; -[SCFriendingNotificationSnapchatter encodeWithCoder:] */

void FUN_100049458(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x0001000727e0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_1000a6648);
  func_0x0001000727e0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_1000a6668);
  func_0x0001000727e0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_1000a6688);
  func_0x00010006f200(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_1000a66a8);
  func_0x0001000727e0(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_1000a66c8);
  func_0x0001000727e0(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_1000a66e8);
  func_0x0001000727e0(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_1000a6708);
  func_0x0001000727e0(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_1000a6728);
  func_0x0001000727e0(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_1000a6748);
  func_0x0001000727e0(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_1000a6768);
  func_0x0001000727e0(param_3,param_2,*(undefined8 *)(param_1 + 0x58),
                      &PTR____CFConstantStringClassReference_1000a6788);
  func_0x0001000727e0(param_3,param_2,*(undefined8 *)(param_1 + 0x60),
                      &PTR____CFConstantStringClassReference_1000a67a8);
  func_0x0001000727e0(param_3,param_2,*(undefined8 *)(param_1 + 0x68),
                      &PTR____CFConstantStringClassReference_1000a67c8);
  func_0x00010006f1e0(*(undefined8 *)(param_1 + 0x70),param_3,param_2,
                      &PTR____CFConstantStringClassReference_1000a67e8);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_3);
  return;
}



/* Entry: 1000495a8; end: 1000496ab; -[SCFriendingNotificationSnapchatter hash] */

undefined8 * FUN_1000495a8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  double dVar8;
  double dVar9;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
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
  
  lStack_28 = *(long *)PTR____stack_chk_guard_1000a0110;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010006fd00();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_98 = uVar2;
  func_0x00010006fd00();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_90 = uVar3;
  func_0x00010006fd00();
  lVar6 = *(long *)(param_1 + 0x20);
  uStack_78 = *(undefined8 *)(param_1 + 0x28);
  lStack_80 = -lVar6;
  if (-1 < lVar6) {
    lStack_80 = lVar6;
  }
  uStack_88 = uVar2;
  func_0x00010006fd00();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010006fd00();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_70 = uVar2;
  func_0x00010006fd00();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_68 = uVar3;
  func_0x00010006fd00();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uStack_60 = uVar2;
  func_0x00010006fd00();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_58 = uVar3;
  func_0x00010006fd00();
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  uStack_50 = uVar2;
  func_0x00010006fd00();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_48 = uVar3;
  func_0x00010006fd00();
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  uStack_40 = uVar2;
  func_0x00010006fd00();
  uStack_38 = uVar3;
  _SCHashDouble(*(undefined8 *)(param_1 + 0x70));
  puVar4 = &uStack_98;
  uStack_30 = uVar3;
  _SCRemodelHash(puVar4,0xe);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_100049860:
    puVar7 = (undefined8 *)0x1;
  }
  else {
    puVar7 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10004986c;
    puVar7 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar5 & 1) != 0) && (puVar4[4] == param_3[4])) {
      dVar9 = ABS((double)puVar4[0xe] - (double)param_3[0xe]);
      dVar8 = ABS((double)puVar4[0xe] + (double)param_3[0xe]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar9) && (bVar1 = false, !NAN(dVar9) && !NAN(dVar8))) {
        bVar1 = dVar9 < dVar8;
      }
      if ((((((bVar1) &&
             ((lVar6 = puVar4[1], lVar6 == param_3[1] || (func_0x0001000710e0(), (int)lVar6 != 0))))
            && ((lVar6 = puVar4[2], lVar6 == param_3[2] || (func_0x0001000710e0(), (int)lVar6 != 0))
               )) && ((((lVar6 = puVar4[3], lVar6 == param_3[3] ||
                        (func_0x0001000710e0(), (int)lVar6 != 0)) &&
                       ((lVar6 = puVar4[5], lVar6 == param_3[5] ||
                        (func_0x0001000710e0(), (int)lVar6 != 0)))) &&
                      ((lVar6 = puVar4[6], lVar6 == param_3[6] ||
                       (func_0x0001000710e0(), (int)lVar6 != 0)))))) &&
          ((lVar6 = puVar4[7], lVar6 == param_3[7] || (func_0x0001000710e0(), (int)lVar6 != 0)))) &&
         ((((lVar6 = puVar4[8], lVar6 == param_3[8] || (func_0x0001000710e0(), (int)lVar6 != 0)) &&
           ((lVar6 = puVar4[9], lVar6 == param_3[9] || (func_0x0001000710e0(), (int)lVar6 != 0))))
          && ((((lVar6 = puVar4[10], lVar6 == param_3[10] ||
                (func_0x0001000710e0(), (int)lVar6 != 0)) &&
               ((lVar6 = puVar4[0xb], lVar6 == param_3[0xb] ||
                (func_0x0001000710e0(), (int)lVar6 != 0)))) &&
              ((lVar6 = puVar4[0xc], lVar6 == param_3[0xc] ||
               (func_0x0001000710e0(), (int)lVar6 != 0)))))))) {
        puVar7 = (undefined8 *)puVar4[0xd];
        if (puVar7 != (undefined8 *)param_3[0xd]) {
          func_0x0001000710e0();
          goto LAB_10004986c;
        }
        goto LAB_100049860;
      }
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_10004986c:
  _objc_release(param_3);
  return puVar7;
}


