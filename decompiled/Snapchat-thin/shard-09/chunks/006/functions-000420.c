/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106f9a5d0; end: 106f9a5ff; -[SCSpectaclesMalibuRpcResponseMessage genericResponseData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f9a5d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761d04);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f9a600; end: 106f9a60f; -[SCSpectaclesMalibuRpcResponseMessage rpcResponse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f9a600(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112761d04);
}



/* Entry: 106f9a610; end: 106f9a623; -[SCSpectaclesMalibuRpcResponseMessage .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f9a610(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112761d04,0);
  return;
}



/* Entry: 106f9a624; end: 106f9a62b; -[SCSpectaclesNewportPeripheral rpcInvocationsFromRequest:] */

void FUN_106f9a624(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d97f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_newportRpcInvocations_112614010);
  return;
}



/* Entry: 106f9a62c; end: 106f9a703; -[SCSpectaclesPendingRequestMessage initWithRequest:sentDate:responseBlock:] */

undefined1 *
FUN_106f9a62c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f8130;
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



/* Entry: 106f9a704; end: 106f9a727; -[SCSpectaclesPendingRequestMessage copyWithZone:] */

undefined8 FUN_106f9a704(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106f9a728; end: 106f9a72f; -[SCSpectaclesPendingRequestMessage request] */

undefined8 FUN_106f9a728(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106f9a730; end: 106f9a737; -[SCSpectaclesPendingRequestMessage sentDate] */

undefined8 FUN_106f9a730(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106f9a738; end: 106f9a73f; -[SCSpectaclesPendingRequestMessage responseBlock] */

undefined8 FUN_106f9a738(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106f9a740; end: 106f9a77b; -[SCSpectaclesPendingRequestMessage .cxx_destruct] */

void FUN_106f9a740(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f9a77c; end: 106f9a79b;  */

void FUN_106f9a77c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c126fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_registerRequestEncoder_protocol__112627610,param_3,
             &PTR____CFConstantStringClassReference_110e90098,param_2);
  return;
}



/* Entry: 106f9a79c; end: 106f9a867; -[SCSpectaclesGenericRequestMessage initWithType:parameter:context:] */

undefined1 *
FUN_106f9a79c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f8138;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f9a868; end: 106f9a88b; -[SCSpectaclesGenericRequestMessage copyWithZone:] */

undefined8 FUN_106f9a868(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106f9a88c; end: 106f9a90b; -[SCSpectaclesGenericRequestMessage hash] */

undefined8 * FUN_106f9a88c(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_106f9a9a4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106f9a9b0;
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
            goto LAB_106f9a9b0;
          }
          goto LAB_106f9a9a4;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106f9a9b0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106f9a90c; end: 106f9a9cb; -[SCSpectaclesGenericRequestMessage isEqual:] */

long FUN_106f9a90c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106f9a9a4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106f9a9b0;
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
            goto LAB_106f9a9b0;
          }
          goto LAB_106f9a9a4;
        }
      }
    }
    lVar3 = 0;
  }
LAB_106f9a9b0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106f9a9cc; end: 106f9a9d3; -[SCSpectaclesGenericRequestMessage type] */

undefined8 FUN_106f9a9cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106f9a9d4; end: 106f9a9db; -[SCSpectaclesGenericRequestMessage parameter] */

undefined8 FUN_106f9a9d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106f9a9dc; end: 106f9a9e3; -[SCSpectaclesGenericRequestMessage context] */

undefined8 FUN_106f9a9dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106f9a9e4; end: 106f9aa1f; -[SCSpectaclesGenericRequestMessage .cxx_destruct] */

void FUN_106f9a9e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f9aa20; end: 106f9aafb; -[SCSpectaclesGenericResponseMessage initWithStatus:type:payload:request:] */

undefined1 *
FUN_106f9aa20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f8140;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106f9aafc; end: 106f9ab1f; -[SCSpectaclesGenericResponseMessage copyWithZone:] */

undefined8 FUN_106f9aafc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106f9ab20; end: 106f9aba3; -[SCSpectaclesGenericResponseMessage hash] */

undefined8 * FUN_106f9ab20(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106f9ac4c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106f9ac58;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[1] == param_3[1])) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[4];
          if (puVar6 != (undefined8 *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_106f9ac58;
          }
          goto LAB_106f9ac4c;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106f9ac58:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106f9aba4; end: 106f9ac73; -[SCSpectaclesGenericResponseMessage isEqual:] */

long FUN_106f9aba4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106f9ac4c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106f9ac58;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_106f9ac58;
          }
          goto LAB_106f9ac4c;
        }
      }
    }
    lVar3 = 0;
  }
LAB_106f9ac58:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106f9ac74; end: 106f9ac7b; -[SCSpectaclesGenericResponseMessage status] */

undefined8 FUN_106f9ac74(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106f9ac7c; end: 106f9ac83; -[SCSpectaclesGenericResponseMessage type] */

undefined8 FUN_106f9ac7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106f9ac84; end: 106f9ac8b; -[SCSpectaclesGenericResponseMessage payload] */

undefined8 FUN_106f9ac84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106f9ac8c; end: 106f9ac93; -[SCSpectaclesGenericResponseMessage request] */

undefined8 FUN_106f9ac8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106f9ac94; end: 106f9ad4b; -[SCSpectaclesGenericResponseMessage .cxx_destruct] */

void FUN_106f9ac94(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106f9ad4c; end: 106f9ad57;  */

bool FUN_106f9ad4c(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 106f9ad58; end: 106f9ade3; +[CHRPBSpectaclesPushMessage descriptor] */

undefined * FUN_106f9ad58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c86d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4c750,
                        &PTR____CFConstantStringClassReference_110e90138,&PTR_DAT_113196820,
                        &PTR_DAT_113196878,8,0x40,0x1c);
    func_0x00010c229040();
    puRam00000001136c86d8 = puVar1;
  }
  return puRam00000001136c86d8;
}



/* Entry: 106f9ade4; end: 106f9ae5f; +[CHRPBSpectaclesPushMessage_InvalidatedRequest descriptor] */

undefined * FUN_106f9ade4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c86e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4c7a0,
                        &PTR____CFConstantStringClassReference_110e90158,&PTR_DAT_113196820,
                        &PTR_s_requestId_113196838,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136c86e0 = puVar1;
  }
  return puRam00000001136c86e0;
}



/* Entry: 106f9ae60; end: 106f9aeeb; +[CHRPBCheeriosEventPb descriptor] */

undefined * FUN_106f9ae60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c86e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4c840,
                        &PTR____CFConstantStringClassReference_110e90178,&PTR_DAT_113196980,
                        &PTR_DAT_113196998,10,0x58,0x1c);
    func_0x00010c229040();
    puRam00000001136c86e8 = puVar1;
  }
  return puRam00000001136c86e8;
}



/* Entry: 106f9aeec; end: 106f9af67;  */

undefined * FUN_106f9aeec(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c86f0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e90198,
                        &UNK_10de19754,&UNK_10de19760,2,FUN_106f9af68,2);
    do {
      if (puRam00000001136c86f0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c86f0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c86f0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c86f0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c86f0;
}



/* Entry: 106f9af68; end: 106f9af77;  */

bool FUN_106f9af68(int param_1)

{
  return param_1 - 1U < 2;
}



/* Entry: 106f9af78; end: 106f9b007;  */

undefined * FUN_106f9af78(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c86f8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e901b8,
                        &UNK_10de19768,&UNK_10de197b8,5,FUN_106f9b008,2,&UNK_10de197cc);
    do {
      if (puRam00000001136c86f8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c86f8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c86f8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c86f8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c86f8;
}



/* Entry: 106f9b008; end: 106f9b017;  */

bool FUN_106f9b008(int param_1)

{
  return param_1 - 1U < 5;
}



/* Entry: 106f9b018; end: 106f9b093;  */

undefined * FUN_106f9b018(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8700 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e901d8,
                        &UNK_10de197e3,&UNK_10de19840,5,FUN_106f9b094,2);
    do {
      if (puRam00000001136c8700 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8700;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8700,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8700 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8700;
}



/* Entry: 106f9b094; end: 106f9b0a3;  */

bool FUN_106f9b094(int param_1)

{
  return param_1 - 1U < 5;
}



/* Entry: 106f9b0a4; end: 106f9b11f;  */

undefined * FUN_106f9b0a4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8708 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e901f8,
                        &UNK_10de19854,&UNK_10de1986c,2,FUN_106f9b120,2);
    do {
      if (puRam00000001136c8708 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8708;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8708,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8708 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8708;
}



/* Entry: 106f9b120; end: 106f9b12f;  */

bool FUN_106f9b120(int param_1)

{
  return param_1 - 1U < 2;
}



/* Entry: 106f9b130; end: 106f9b1ab;  */

undefined * FUN_106f9b130(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8710 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e90218,
                        &UNK_10de19874,&UNK_10de1989c,3,FUN_106f9b1ac,2);
    do {
      if (puRam00000001136c8710 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8710;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8710,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8710 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8710;
}



/* Entry: 106f9b1ac; end: 106f9b1bb;  */

bool FUN_106f9b1ac(int param_1)

{
  return param_1 - 1U < 3;
}



/* Entry: 106f9b1bc; end: 106f9b223; +[VLKRange descriptor] */

void FUN_106f9b1bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8718 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4c8e0,
                        &PTR____CFConstantStringClassReference_110defc58,0x113196ad8,
                        &PTR_s_start_113196af0,2,0xc,0x1c);
    puRam00000001136c8718 = puVar1;
  }
  return;
}



/* Entry: 106f9b224; end: 106f9b29f; +[VLKFirmwareUpdateUploadRequest descriptor] */

undefined * FUN_106f9b224(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8720 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4c930,
                        &PTR____CFConstantStringClassReference_110e90238,0x113196ad8,0x113196e58,4,
                        0x18,0x1d);
    func_0x00010c2289e0();
    puRam00000001136c8720 = puVar1;
  }
  return puRam00000001136c8720;
}



/* Entry: 106f9b2a0; end: 106f9b31b; +[VLKAuthRequest descriptor] */

undefined * FUN_106f9b2a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8728 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4c980,
                        &PTR____CFConstantStringClassReference_110e90258,0x113196ad8,0x113196d60,3,
                        0x18,0x1d);
    func_0x00010c2289e0();
    puRam00000001136c8728 = puVar1;
  }
  return puRam00000001136c8728;
}



/* Entry: 106f9b31c; end: 106f9b397; +[VLKAuthResponse descriptor] */

undefined * FUN_106f9b31c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8730 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4c9d0,
                        &PTR____CFConstantStringClassReference_110e90278,0x113196ad8,
                        &PTR_DAT_113196b30,2,0x18,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c8730 = puVar1;
  }
  return puRam00000001136c8730;
}



/* Entry: 106f9b398; end: 106f9b3ff; +[VLKMediaMetadata descriptor] */

void FUN_106f9b398(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8738 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4ca20,
                        &PTR____CFConstantStringClassReference_110e90298,0x113196ad8,
                        &PTR_DAT_113196b70,2,0x10,0x1c);
    puRam00000001136c8738 = puVar1;
  }
  return;
}



/* Entry: 106f9b400; end: 106f9b47b; +[VLKMediaFileTransferRequest descriptor] */

undefined * FUN_106f9b400(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8740 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4ca70,
                        &PTR____CFConstantStringClassReference_110e902b8,0x113196ad8,
                        &PTR_DAT_113196d00,3,0x18,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c8740 = puVar1;
  }
  return puRam00000001136c8740;
}



/* Entry: 106f9b47c; end: 106f9b4f7; +[VLKMediaFileDeletionLogicRequest descriptor] */

undefined * FUN_106f9b47c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8748 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4cac0,
                        &PTR____CFConstantStringClassReference_110e902d8,0x113196ad8,
                        &PTR_s_uuid_113196bb0,2,0x10,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c8748 = puVar1;
  }
  return puRam00000001136c8748;
}



/* Entry: 106f9b4f8; end: 106f9b573; +[VLKMediaRequest descriptor] */

undefined * FUN_106f9b4f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8750 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4cb10,
                        &PTR____CFConstantStringClassReference_110e902f8,0x113196ad8,0x113196ef8,4,
                        0x20,0x1d);
    func_0x00010c2289e0();
    puRam00000001136c8750 = puVar1;
  }
  return puRam00000001136c8750;
}



/* Entry: 106f9b574; end: 106f9b5ef; +[VLKMediaResponse descriptor] */

undefined * FUN_106f9b574(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8758 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4cb60,
                        &PTR____CFConstantStringClassReference_110e90318,0x113196ad8,
                        &PTR_DAT_113196dd8,4,0x20,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c8758 = puVar1;
  }
  return puRam00000001136c8758;
}



/* Entry: 106f9b5f0; end: 106f9b657; +[VLKLogFileMetadata descriptor] */

void FUN_106f9b5f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8760 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4cbb0,
                        &PTR____CFConstantStringClassReference_110e90338,0x113196ad8,
                        &PTR_DAT_113196bf0,2,0x10,0x1c);
    puRam00000001136c8760 = puVar1;
  }
  return;
}



/* Entry: 106f9b658; end: 106f9b6bf; +[VLKLogFileTransferRequest descriptor] */

void FUN_106f9b658(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8768 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4cc00,
                        &PTR____CFConstantStringClassReference_110e90358,0x113196ad8,
                        &PTR_DAT_113196c30,2,0x18,0x1c);
    puRam00000001136c8768 = puVar1;
  }
  return;
}



/* Entry: 106f9b6c0; end: 106f9b73b; +[VLKLogRequest descriptor] */

undefined * FUN_106f9b6c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8770 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4cc50,
                        &PTR____CFConstantStringClassReference_110e90378,0x113196ad8,0x113196cb0,2,
                        0x10,0x1d);
    func_0x00010c2289e0();
    puRam00000001136c8770 = puVar1;
  }
  return puRam00000001136c8770;
}



/* Entry: 106f9b73c; end: 106f9b7b7; +[VLKLogResponse descriptor] */

undefined * FUN_106f9b73c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8778 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4cca0,
                        &PTR____CFConstantStringClassReference_110e90398,0x113196ad8,
                        &PTR_DAT_113196c70,2,0x18,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c8778 = puVar1;
  }
  return puRam00000001136c8778;
}



/* Entry: 106f9b7b8; end: 106f9b833; +[VLKAmbaRequest descriptor] */

undefined * FUN_106f9b7b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8780 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4ccf0,
                        &PTR____CFConstantStringClassReference_110e903b8,0x113196ad8,
                        &PTR_DAT_113196f98,5,0x28,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c8780 = puVar1;
  }
  return puRam00000001136c8780;
}



/* Entry: 106f9b834; end: 106f9b92b; +[VLKAmbaResponse descriptor] */

undefined * FUN_106f9b834(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8788 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4cd40,
                        &PTR____CFConstantStringClassReference_110e903d8,0x113196ad8,0x113197038,5,
                        0x28,0x1d);
    func_0x00010c2289e0();
    puRam00000001136c8788 = puVar1;
  }
  return puRam00000001136c8788;
}



/* Entry: 106f9b92c; end: 106f9b937;  */

bool FUN_106f9b92c(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 106f9b938; end: 106f9b9b3;  */

undefined * FUN_106f9b938(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8798 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e90418,
                        &UNK_10de19a24,&UNK_10de19ab4,9,FUN_106f9b9b4,2);
    do {
      if (puRam00000001136c8798 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8798;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8798,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8798 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8798;
}



/* Entry: 106f9b9b4; end: 106f9b9c3;  */

bool FUN_106f9b9b4(int param_1)

{
  return param_1 - 1U < 9;
}



/* Entry: 106f9b9c4; end: 106f9ba3f;  */

undefined * FUN_106f9b9c4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c87a0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e90438,
                        &UNK_10de19ad8,&UNK_10de19b08,4,FUN_106f9ba40,2);
    do {
      if (puRam00000001136c87a0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c87a0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c87a0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c87a0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c87a0;
}



/* Entry: 106f9ba40; end: 106f9ba4f;  */

bool FUN_106f9ba40(int param_1)

{
  return param_1 - 1U < 4;
}



/* Entry: 106f9ba50; end: 106f9bacb; +[VLKEncryptionSetupMessage descriptor] */

undefined * FUN_106f9ba50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c87a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4cde0,
                        &PTR____CFConstantStringClassReference_110e90458,0x113197100,0x113197138,2,
                        0x10,0x1d);
    func_0x00010c2289e0();
    puRam00000001136c87a8 = puVar1;
  }
  return puRam00000001136c87a8;
}



/* Entry: 106f9bacc; end: 106f9bb33; +[VLKEncryptionSetupRequest descriptor] */

void FUN_106f9bacc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c87b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4ce30,
                        &PTR____CFConstantStringClassReference_110e90478,0x113197100,
                        &PTR_s_message_113197118,1,0x10,0x1c);
    puRam00000001136c87b0 = puVar1;
  }
  return;
}



/* Entry: 106f9bb34; end: 106f9bc2b; +[VLKEncryptionSetupResponse descriptor] */

undefined * FUN_106f9bb34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c87b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4ce80,
                        &PTR____CFConstantStringClassReference_110e90498,0x113197100,0x113197188,4,
                        0x20,0x1d);
    func_0x00010c2289e0();
    puRam00000001136c87b8 = puVar1;
  }
  return puRam00000001136c87b8;
}



/* Entry: 106f9bc2c; end: 106f9bc37;  */

bool FUN_106f9bc2c(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 106f9bc38; end: 106f9bcb3;  */

undefined * FUN_106f9bc38(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c87c8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e904d8,
                        &UNK_10de19ba0,&UNK_10de19bac,2,FUN_106f9bcb4,2);
    do {
      if (puRam00000001136c87c8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c87c8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c87c8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c87c8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c87c8;
}



/* Entry: 106f9bcb4; end: 106f9bcbf;  */

bool FUN_106f9bcb4(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 106f9bcc0; end: 106f9bd3b;  */

undefined * FUN_106f9bcc0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c87d0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e904f8,
                        &UNK_10de19bb4,&UNK_10de19c04,5,FUN_106f9bd3c,2);
    do {
      if (puRam00000001136c87d0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c87d0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c87d0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c87d0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c87d0;
}



/* Entry: 106f9bd3c; end: 106f9bd47;  */

bool FUN_106f9bd3c(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 106f9bd48; end: 106f9bdc3;  */

undefined * FUN_106f9bd48(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c87d8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e90518,
                        &UNK_10de19c18,&UNK_10de19c70,5,FUN_106f9bdc4,2);
    do {
      if (puRam00000001136c87d8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c87d8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c87d8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c87d8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c87d8;
}



/* Entry: 106f9bdc4; end: 106f9bdcf;  */

bool FUN_106f9bdc4(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 106f9bdd0; end: 106f9be4b;  */

undefined * FUN_106f9bdd0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c87e0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e90538,
                        &UNK_10de19c84,&UNK_10de19cd0,5,FUN_106f9be4c,2);
    do {
      if (puRam00000001136c87e0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c87e0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c87e0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c87e0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c87e0;
}



/* Entry: 106f9be4c; end: 106f9be57;  */

bool FUN_106f9be4c(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 106f9be58; end: 106f9bed3;  */

undefined * FUN_106f9be58(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c87e8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e90558,
                        &UNK_10de19ce4,&UNK_10de19cf4,1,FUN_106f9bed4,2);
    do {
      if (puRam00000001136c87e8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c87e8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c87e8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c87e8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c87e8;
}



/* Entry: 106f9bed4; end: 106f9bedf;  */

bool FUN_106f9bed4(int param_1)

{
  return param_1 == 1;
}



/* Entry: 106f9bee0; end: 106f9bf5b;  */

undefined * FUN_106f9bee0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c87f0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e90578,
                        &UNK_10de19cf8,&UNK_10de19d94,9,FUN_106f9bf5c,2);
    do {
      if (puRam00000001136c87f0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c87f0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c87f0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c87f0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c87f0;
}



/* Entry: 106f9bf5c; end: 106f9bf67;  */

bool FUN_106f9bf5c(uint param_1)

{
  return param_1 < 9;
}



/* Entry: 106f9bf68; end: 106f9bfe3;  */

undefined * FUN_106f9bf68(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c87f8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e90598,
                        &UNK_10de19db8,&UNK_10de19de0,3,FUN_106f9bfe4,2);
    do {
      if (puRam00000001136c87f8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c87f8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c87f8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c87f8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c87f8;
}



/* Entry: 106f9bfe4; end: 106f9bfef;  */

bool FUN_106f9bfe4(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106f9bff0; end: 106f9c06b;  */

undefined * FUN_106f9bff0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8800 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e905b8,
                        &UNK_10de19dec,&UNK_10de19e38,6,FUN_106f9c06c,2);
    do {
      if (puRam00000001136c8800 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8800;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8800,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8800 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8800;
}



/* Entry: 106f9c06c; end: 106f9c077;  */

bool FUN_106f9c06c(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 106f9c078; end: 106f9c0df; +[MLBRange descriptor] */

void FUN_106f9c078(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8808 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4cf20,
                        &PTR____CFConstantStringClassReference_110defc58,&PTR_DAT_113197228,
                        &PTR_s_start_1131972c0,2,0xc,0x1c);
    puRam00000001136c8808 = puVar1;
  }
  return;
}



/* Entry: 106f9c0e0; end: 106f9c147; +[MLBFirmwareUpdateUploadRequest descriptor] */

void FUN_106f9c0e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8810 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4cf70,
                        &PTR____CFConstantStringClassReference_110e90238,&PTR_DAT_113197228,
                        &PTR_DAT_1131976d8,4,0x18,0x1c);
    puRam00000001136c8810 = puVar1;
  }
  return;
}



/* Entry: 106f9c148; end: 106f9c1af; +[MLBAuthRequest descriptor] */

void FUN_106f9c148(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8818 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4cfc0,
                        &PTR____CFConstantStringClassReference_110e90258,&PTR_DAT_113197228,
                        &PTR_DAT_113197540,3,0x18,0x1c);
    puRam00000001136c8818 = puVar1;
  }
  return;
}



/* Entry: 106f9c1b0; end: 106f9c217; +[MLBAuthResponse descriptor] */

void FUN_106f9c1b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8820 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4d010,
                        &PTR____CFConstantStringClassReference_110e90278,&PTR_DAT_113197228,
                        &PTR_DAT_113197300,2,0x18,0x1c);
    puRam00000001136c8820 = puVar1;
  }
  return;
}



/* Entry: 106f9c218; end: 106f9c27f; +[MLBMediaTypeAndSize descriptor] */

void FUN_106f9c218(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8828 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4d060,
                        &PTR____CFConstantStringClassReference_110e905d8,&PTR_DAT_113197228,
                        &PTR_DAT_113197340,2,0xc,0x1c);
    puRam00000001136c8828 = puVar1;
  }
  return;
}



/* Entry: 106f9c280; end: 106f9c2e7; +[MLBMediaMetadata descriptor] */

void FUN_106f9c280(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8830 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4d0b0,
                        &PTR____CFConstantStringClassReference_110e90298,&PTR_DAT_113197228,
                        &PTR_s_uuid_113197380,2,0x18,0x1c);
    puRam00000001136c8830 = puVar1;
  }
  return;
}



/* Entry: 106f9c2e8; end: 106f9c34f; +[MLBMediaFileTransferRequest descriptor] */

void FUN_106f9c2e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8838 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4d100,
                        &PTR____CFConstantStringClassReference_110e902b8,&PTR_DAT_113197228,
                        &PTR_s_uuid_1131975a0,3,0x18,0x1c);
    puRam00000001136c8838 = puVar1;
  }
  return;
}



/* Entry: 106f9c350; end: 106f9c3b7; +[MLBMediaFileDeletionRequest descriptor] */

void FUN_106f9c350(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8840 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4d150,
                        &PTR____CFConstantStringClassReference_110e905f8,&PTR_DAT_113197228,
                        &PTR_s_uuid_1131973c0,2,0x10,0x1c);
    puRam00000001136c8840 = puVar1;
  }
  return;
}



/* Entry: 106f9c3b8; end: 106f9c41f; +[MLBMediaFileMarkTransferredRequest descriptor] */

void FUN_106f9c3b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8848 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4d1a0,
                        &PTR____CFConstantStringClassReference_110e90618,&PTR_DAT_113197228,
                        &PTR_s_uuid_113197240,1,0x10,0x1c);
    puRam00000001136c8848 = puVar1;
  }
  return;
}



/* Entry: 106f9c420; end: 106f9c487; +[MLBMediaRequest descriptor] */

void FUN_106f9c420(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8850 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4d1f0,
                        &PTR____CFConstantStringClassReference_110e902f8,&PTR_DAT_113197228,
                        &PTR_DAT_113197758,4,0x20,0x1c);
    puRam00000001136c8850 = puVar1;
  }
  return;
}



/* Entry: 106f9c488; end: 106f9c4ef; +[MLBMediaData descriptor] */

void FUN_106f9c488(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8858 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4d240,
                        &PTR____CFConstantStringClassReference_110db5498,&PTR_DAT_113197228,
                        &PTR_s_uuid_113197858,5,0x28,0x1c);
    puRam00000001136c8858 = puVar1;
  }
  return;
}



/* Entry: 106f9c4f0; end: 106f9c557; +[MLBMediaResponse descriptor] */

void FUN_106f9c4f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8860 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4d290,
                        &PTR____CFConstantStringClassReference_110e90318,&PTR_DAT_113197228,
                        &PTR_DAT_113197400,2,0x18,0x1c);
    puRam00000001136c8860 = puVar1;
  }
  return;
}



/* Entry: 106f9c558; end: 106f9c5bf; +[MLBLogFileMetadata descriptor] */

void FUN_106f9c558(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8868 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4d2e0,
                        &PTR____CFConstantStringClassReference_110e90338,&PTR_DAT_113197228,
                        &PTR_DAT_113197440,2,0x10,0x1c);
    puRam00000001136c8868 = puVar1;
  }
  return;
}



/* Entry: 106f9c5c0; end: 106f9c627; +[MLBLogFileTransferRequest descriptor] */

void FUN_106f9c5c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8870 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4d330,
                        &PTR____CFConstantStringClassReference_110e90358,&PTR_DAT_113197228,
                        &PTR_DAT_113197480,2,0x18,0x1c);
    puRam00000001136c8870 = puVar1;
  }
  return;
}



/* Entry: 106f9c628; end: 106f9c68f; +[MLBLogRequest descriptor] */

void FUN_106f9c628(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8878 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4d380,
                        &PTR____CFConstantStringClassReference_110e90378,&PTR_DAT_113197228,
                        &PTR_DAT_1131974c0,2,0x10,0x1c);
    puRam00000001136c8878 = puVar1;
  }
  return;
}



/* Entry: 106f9c690; end: 106f9c6f7; +[MLBLogData descriptor] */

void FUN_106f9c690(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8880 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4d3d0,
                        &PTR____CFConstantStringClassReference_110e90638,&PTR_DAT_113197228,
                        &PTR_DAT_1131977d8,4,0x28,0x1c);
    puRam00000001136c8880 = puVar1;
  }
  return;
}



/* Entry: 106f9c6f8; end: 106f9c75f; +[MLBLogResponse descriptor] */

void FUN_106f9c6f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8888 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4d420,
                        &PTR____CFConstantStringClassReference_110e90398,&PTR_DAT_113197228,
                        &PTR_DAT_113197600,3,0x18,0x1c);
    puRam00000001136c8888 = puVar1;
  }
  return;
}



/* Entry: 106f9c760; end: 106f9c7c7; +[MLBFirmwareUpdateUploadResponse descriptor] */

void FUN_106f9c760(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8890 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4d470,
                        &PTR____CFConstantStringClassReference_110e90658,&PTR_DAT_113197228,
                        &PTR_DAT_113197500,2,0xc,0x1c);
    puRam00000001136c8890 = puVar1;
  }
  return;
}


