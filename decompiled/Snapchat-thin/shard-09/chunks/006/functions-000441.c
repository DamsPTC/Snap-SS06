/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106fc9178; end: 106fc91b7; -[SCSpectaclesRpcResponse removeAllAncsNotificationRulesResponse] */

void FUN_106fc9178(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c0cc9c0();
  if ((int)uVar1 == 200) {
    func_0x00010c13b720(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fc91b8; end: 106fc91f7; -[SCSpectaclesRpcResponse getPeerBondStatusResponse] */

void FUN_106fc91b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c0cc9c0();
  if ((int)uVar1 == 0xcc) {
    func_0x00010c13b720(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fc91f8; end: 106fc9237; -[SCSpectaclesRpcResponse getAncsActiveStatusResponse] */

void FUN_106fc91f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c0cc9c0();
  if ((int)uVar1 == 0xcd) {
    func_0x00010c13b720(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fc9238; end: 106fc9277; -[SCSpectaclesRpcResponse enableHummingbirdResponse] */

void FUN_106fc9238(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c0cc9c0();
  if ((int)uVar1 == 0xce) {
    func_0x00010c13b720(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fc9278; end: 106fc92b7; -[SCSpectaclesRpcResponse disableHummingbirdResponse] */

void FUN_106fc9278(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c0cc9c0();
  if ((int)uVar1 == 0xcf) {
    func_0x00010c13b720(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fc92b8; end: 106fc92f7; -[SCSpectaclesRpcResponse getHummingbirdSessionIdResponse] */

void FUN_106fc92b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c0cc9c0();
  if ((int)uVar1 == 0xd0) {
    func_0x00010c13b720(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fc92f8; end: 106fc9317; +[SCSpectaclesRpcSchema rpcNameFromMethodIndex:] */

undefined * FUN_106fc92f8(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if (param_3 < 0xd1) {
    return (&PTR_PTR_110986cd8)[param_3];
  }
  return (undefined *)0x0;
}



/* Entry: 106fc9318; end: 106fc94d7; +[SCSpectaclesRpcSchema responseTypeFromMethodIndex:] */

void FUN_106fc9318(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR_PTR_1126d3d18;
  switch(param_3) {
  case 0:
  case 0x1f:
    break;
  case 1:
    ppuVar1 = &PTR_PTR_1126d3d20;
    break;
  case 2:
  case 3:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xf:
  case 0x15:
  case 0x16:
  case 0x31:
  case 0x38:
  case 0x48:
  case 0x4a:
  case 0x4b:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x60:
  case 0x6c:
  case 0x86:
  case 0x88:
  case 0x8b:
  case 0x9b:
  case 0xad:
  case 0xb1:
  case 0xb2:
  case 0xb3:
  case 0xbb:
  case 0xbe:
  case 0xc1:
  case 0xc2:
  case 0xc4:
  case 0xc5:
  case 0xc6:
  case 200:
  case 0xcb:
  case 0xce:
  case 0xcf:
    ppuVar1 = &PTR_PTR_1126d3ae0;
    break;
  default:
    goto LAB_106fc9378;
  case 0xd:
    ppuVar1 = &PTR_PTR_1126d3d28;
    break;
  case 0x10:
    ppuVar1 = &PTR_PTR_1126d3d30;
    break;
  case 0x11:
    ppuVar1 = &PTR_PTR_1126d3b10;
    break;
  case 0x12:
    ppuVar1 = &PTR_PTR_1126d3d38;
    break;
  case 0x17:
    ppuVar1 = &PTR_PTR_1126d3d40;
    break;
  case 0x1c:
    ppuVar1 = &PTR_PTR_1126d3d48;
    break;
  case 0x20:
    ppuVar1 = &PTR_PTR_1126d3d50;
    break;
  case 0x25:
    ppuVar1 = &PTR_PTR_1126d3d58;
    break;
  case 0x27:
    ppuVar1 = &PTR_PTR_1126d3d60;
    break;
  case 0x2a:
    ppuVar1 = &PTR_PTR_1126d3d68;
    break;
  case 0x3a:
  case 0xd0:
    ppuVar1 = &PTR_PTR_1126d3d70;
    break;
  case 0x45:
  case 0x8e:
    ppuVar1 = &PTR_PTR_1126d3d78;
    break;
  case 0x49:
    ppuVar1 = &PTR_PTR_1126d3ae8;
    break;
  case 0x50:
    ppuVar1 = &PTR_PTR_1126d3b38;
    break;
  case 0x52:
    ppuVar1 = &PTR_PTR_1126d3d80;
    break;
  case 0x56:
    ppuVar1 = &PTR_PTR_1126d3d88;
    break;
  case 0x61:
  case 0x62:
    ppuVar1 = &PTR_PTR_1126d3d90;
    break;
  case 0x66:
    ppuVar1 = &PTR_PTR_1126d3d98;
    break;
  case 0x6a:
    ppuVar1 = &PTR_PTR_1126d3db8;
    break;
  case 0x71:
    ppuVar1 = &PTR_PTR_1126d3b60;
    break;
  case 0x73:
  case 0x79:
  case 0x7b:
  case 0x7c:
  case 0x7e:
  case 0x80:
  case 0x83:
  case 0xbd:
  case 0xcc:
  case 0xcd:
    ppuVar1 = &PTR_PTR_1126d3da0;
    break;
  case 0x74:
    ppuVar1 = &PTR_PTR_1126d3b40;
    break;
  case 0x7d:
    ppuVar1 = &PTR_PTR_1126d3b50;
    break;
  case 0x7f:
    ppuVar1 = &PTR_PTR_1126d3db0;
    break;
  case 0x82:
    ppuVar1 = &PTR_PTR_1126d3da8;
    break;
  case 0x94:
  case 0x96:
    ppuVar1 = &PTR_PTR_1126d3dc0;
    break;
  case 0xa3:
    ppuVar1 = &PTR_PTR_1126d3dd0;
    break;
  case 0xac:
    ppuVar1 = &PTR_PTR_1126d3dc8;
    break;
  case 0xc3:
    ppuVar1 = &PTR_PTR_1126d3dd8;
  }
  _objc_opt_class(*ppuVar1);
  _objc_retainAutoreleasedReturnValue();
LAB_106fc9378:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fc94d8; end: 106fc955b; -[SCSpectaclesRpcInvocation initWithMethodIndex:argument:] */

undefined1 *
FUN_106fc94d8(undefined8 param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f81d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined2 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106fc955c; end: 106fc9617; -[SCSpectaclesRpcInvocation dataWithRequestId:] */

void FUN_106fc955c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 uStack_31;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  uStack_31 = param_3;
  func_0x00010bf63640(PTR__OBJC_CLASS___NSMutableData_1126b4958);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06a40();
  func_0x00010bf06a40(puVar1,param_2,&uStack_31,1);
  func_0x00010bf09da0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ae0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(param_1);
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106fc9618; end: 106fc961f; -[SCSpectaclesRpcInvocation methodIndex] */

undefined2 FUN_106fc9618(long param_1)

{
  return *(undefined2 *)(param_1 + 8);
}



/* Entry: 106fc9620; end: 106fc9627; -[SCSpectaclesRpcInvocation argument] */

undefined8 FUN_106fc9620(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106fc9628; end: 106fc9633; -[SCSpectaclesRpcInvocation .cxx_destruct] */

void FUN_106fc9628(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106fc9634; end: 106fc97a7; -[SCSpectaclesRpcResponse initWithData:] */

undefined8 *** FUN_106fc9634(undefined8 ***param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 ***pppuVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 **ppuStack_50;
  undefined *puStack_48;
  
  puVar6 = &uStack_60;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c08fa60();
  if (uVar1 < 4) {
    pppuVar2 = param_1;
    pppuVar5 = (undefined8 ***)0x0;
    goto LAB_106fc977c;
  }
  puStack_48 = PTR_PTR_1126f81d8;
  pppuVar2 = &ppuStack_50;
  ppuStack_50 = param_1;
  _objc_msgSendSuper2(pppuVar2,PTR_s_init_1125d9248);
  if (pppuVar2 != (undefined8 ***)0x0) {
    func_0x00010bfc3360(param_3);
    func_0x00010bfc3360(param_3);
    func_0x00010bfc3360(param_3);
    func_0x00010c08fa60(param_3);
    uVar1 = param_3;
    func_0x00010c25eac0(param_3);
    _objc_retainAutoreleasedReturnValue();
    if (*(char *)(pppuVar2 + 1) == '\0') {
      puVar3 = PTR_PTR_1126d3de0;
      func_0x00010c13bd40();
      if (puVar3 != (undefined *)0x0) {
        puVar6 = &uStack_58;
        lVar8 = 0x10;
        goto LAB_106fc9730;
      }
    }
    else {
      lVar8 = 0x18;
      puVar3 = PTR_PTR_1126d3de8;
LAB_106fc9730:
      _objc_alloc();
      *puVar6 = 0;
      func_0x00010c008360();
      uVar7 = *puVar6;
      _objc_retain(uVar7);
      uVar4 = *(undefined8 *)((long)pppuVar2 + lVar8);
      *(undefined **)((long)pppuVar2 + lVar8) = puVar3;
      _objc_release(uVar4);
      _objc_release(uVar7);
    }
    _objc_release(uVar1);
  }
  _objc_retain(pppuVar2);
  pppuVar5 = pppuVar2;
LAB_106fc977c:
  _objc_release(param_3);
  _objc_release(pppuVar2);
  return pppuVar5;
}



/* Entry: 106fc97a8; end: 106fc97f3; -[SCSpectaclesRpcResponse isValid] */

bool FUN_106fc97a8(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c252d60();
  if ((int)lVar2 == 0) {
    func_0x00010c13b720(param_1);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = param_1 != 0;
    _objc_release();
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 106fc97f4; end: 106fc97fb; -[SCSpectaclesRpcResponse methodIndex] */

undefined2 FUN_106fc97f4(long param_1)

{
  return *(undefined2 *)(param_1 + 10);
}



/* Entry: 106fc97fc; end: 106fc9803; -[SCSpectaclesRpcResponse status] */

undefined1 FUN_106fc97fc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106fc9804; end: 106fc980b; -[SCSpectaclesRpcResponse response] */

undefined8 FUN_106fc9804(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106fc980c; end: 106fc9813; -[SCSpectaclesRpcResponse error] */

undefined8 FUN_106fc980c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106fc9814; end: 106fc981b; -[SCSpectaclesRpcResponse requestId] */

undefined1 FUN_106fc9814(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106fc981c; end: 106fc984b; -[SCSpectaclesRpcResponse .cxx_destruct] */

void FUN_106fc981c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106fc984c; end: 106fc9a3f; +[SCSpectaclesRpcSchema requestTypeFromMethodIndex:] */

void FUN_106fc984c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR_PTR_1126d3ae0;
  switch(param_3) {
  case 0:
  case 1:
  case 10:
  case 0xd:
  case 0x11:
  case 0x12:
  case 0x16:
  case 0x17:
  case 0x1f:
  case 0x25:
  case 0x27:
  case 0x3a:
  case 0x45:
  case 0x48:
  case 0x49:
  case 0x4b:
  case 0x52:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x60:
  case 0x61:
  case 0x66:
  case 0x6a:
  case 0x6c:
  case 0x7b:
  case 0x7d:
  case 0x7f:
  case 0x80:
  case 0x82:
  case 0x88:
  case 0x8b:
  case 0x94:
  case 0x96:
  case 0x9b:
  case 0xa3:
  case 0xac:
  case 0xbd:
  case 0xc3:
  case 200:
  case 0xcc:
  case 0xcd:
  case 0xcf:
  case 0xd0:
    break;
  case 2:
    ppuVar1 = &PTR_PTR_1126d3b10;
    break;
  case 3:
  case 0x31:
  case 0x86:
  case 0xbe:
  case 0xc1:
  case 0xc5:
    ppuVar1 = &PTR_PTR_1126d3b08;
    break;
  default:
    goto LAB_106fc9898;
  case 5:
    ppuVar1 = &PTR_PTR_1126d3df0;
    break;
  case 6:
    ppuVar1 = &PTR_PTR_1126d3b18;
    break;
  case 7:
    ppuVar1 = &PTR_PTR_1126d3df8;
    break;
  case 8:
    ppuVar1 = &PTR_PTR_1126d3e00;
    break;
  case 9:
    ppuVar1 = &PTR_PTR_1126d3e08;
    break;
  case 0xf:
    ppuVar1 = &PTR_PTR_1126d3b00;
    break;
  case 0x10:
    ppuVar1 = &PTR_PTR_1126d3af8;
    break;
  case 0x15:
    ppuVar1 = &PTR_PTR_1126d3ae8;
    break;
  case 0x1c:
    ppuVar1 = &PTR_PTR_1126d3e10;
    break;
  case 0x20:
    ppuVar1 = &PTR_PTR_1126d3e18;
    break;
  case 0x2a:
    ppuVar1 = &PTR_PTR_1126d3af0;
    break;
  case 0x38:
    ppuVar1 = &PTR_PTR_1126d3b28;
    break;
  case 0x4a:
    ppuVar1 = &PTR_PTR_1126d3ad0;
    break;
  case 0x50:
    ppuVar1 = &PTR_PTR_1126d3b38;
    break;
  case 0x62:
    ppuVar1 = &PTR_PTR_1126d3b20;
    break;
  case 0x71:
    ppuVar1 = &PTR_PTR_1126d3b60;
    break;
  case 0x73:
    ppuVar1 = &PTR_PTR_1126d3b30;
    break;
  case 0x74:
    ppuVar1 = &PTR_PTR_1126d3b40;
    break;
  case 0x79:
    ppuVar1 = &PTR_PTR_1126d3e20;
    break;
  case 0x7c:
    ppuVar1 = &PTR_PTR_1126d3b58;
    break;
  case 0x7e:
    ppuVar1 = &PTR_PTR_1126d3b50;
    break;
  case 0x83:
    ppuVar1 = &PTR_PTR_1126d3b48;
    break;
  case 0x8e:
    ppuVar1 = &PTR_PTR_1126d3e28;
    break;
  case 0xad:
    ppuVar1 = &PTR_PTR_1126d3dc8;
    break;
  case 0xb1:
    ppuVar1 = &PTR_PTR_1126d3e38;
    break;
  case 0xb2:
    ppuVar1 = &PTR_PTR_1126d3e40;
    break;
  case 0xb3:
    ppuVar1 = &PTR_PTR_1126d3e48;
    break;
  case 0xbb:
    ppuVar1 = &PTR_PTR_1126d3e30;
    break;
  case 0xc2:
    ppuVar1 = &PTR_PTR_1126d3e50;
    break;
  case 0xc4:
    ppuVar1 = &PTR_PTR_1126d3e58;
    break;
  case 0xc6:
    ppuVar1 = &PTR_PTR_1126d3e60;
    break;
  case 0xcb:
    ppuVar1 = &PTR_PTR_1126d3dc0;
    break;
  case 0xce:
    ppuVar1 = &PTR_PTR_1126d3d70;
  }
  _objc_opt_class(*ppuVar1);
  _objc_retainAutoreleasedReturnValue();
LAB_106fc9898:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fc9a40; end: 106fc9aa7; +[MLBDoubleValue descriptor] */

void FUN_106fc9a40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9b48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b56cf0,
                        &PTR____CFConstantStringClassReference_110e951b8,&PTR_DAT_1131a6f70,
                        &PTR_s_value_1131a6f88,1,0x10,0x1c);
    puRam00000001136c9b48 = puVar1;
  }
  return;
}



/* Entry: 106fc9aa8; end: 106fc9b0f; +[MLBFloatValue descriptor] */

void FUN_106fc9aa8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9b50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b56d40,
                        &PTR____CFConstantStringClassReference_110e951d8,&PTR_DAT_1131a6f70,
                        &PTR_s_value_1131a6fa8,1,8,0x1c);
    puRam00000001136c9b50 = puVar1;
  }
  return;
}



/* Entry: 106fc9b10; end: 106fc9b77; +[MLBInt64Value descriptor] */

void FUN_106fc9b10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9b58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b56d90,
                        &PTR____CFConstantStringClassReference_110e951f8,&PTR_DAT_1131a6f70,
                        &PTR_s_value_1131a6fc8,1,0x10,0x1c);
    puRam00000001136c9b58 = puVar1;
  }
  return;
}



/* Entry: 106fc9b78; end: 106fc9bdf; +[MLBUInt64Value descriptor] */

void FUN_106fc9b78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9b60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b56de0,
                        &PTR____CFConstantStringClassReference_110e95218,&PTR_DAT_1131a6f70,
                        &PTR_s_value_1131a6fe8,1,0x10,0x1c);
    puRam00000001136c9b60 = puVar1;
  }
  return;
}



/* Entry: 106fc9be0; end: 106fc9c47; +[MLBInt32Value descriptor] */

void FUN_106fc9be0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9b68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b56e30,
                        &PTR____CFConstantStringClassReference_110e95238,&PTR_DAT_1131a6f70,
                        &PTR_s_value_1131a7008,1,8,0x1c);
    puRam00000001136c9b68 = puVar1;
  }
  return;
}



/* Entry: 106fc9c48; end: 106fc9caf; +[MLBUInt32Value descriptor] */

void FUN_106fc9c48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9b70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b56e80,
                        &PTR____CFConstantStringClassReference_110e95258,&PTR_DAT_1131a6f70,
                        &PTR_s_value_1131a7028,1,8,0x1c);
    puRam00000001136c9b70 = puVar1;
  }
  return;
}



/* Entry: 106fc9cb0; end: 106fc9d17; +[MLBBoolValue descriptor] */

void FUN_106fc9cb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9b78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b56ed0,
                        &PTR____CFConstantStringClassReference_110e917f8,&PTR_DAT_1131a6f70,
                        &PTR_s_value_1131a7048,1,4,0x1c);
    puRam00000001136c9b78 = puVar1;
  }
  return;
}



/* Entry: 106fc9d18; end: 106fc9d7f; +[MLBStringValue descriptor] */

void FUN_106fc9d18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9b80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b56f20,
                        &PTR____CFConstantStringClassReference_110e95278,&PTR_DAT_1131a6f70,
                        &PTR_s_value_1131a7068,1,0x10,0x1c);
    puRam00000001136c9b80 = puVar1;
  }
  return;
}



/* Entry: 106fc9d80; end: 106fc9e63; +[MLBBytesValue descriptor] */

void FUN_106fc9d80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9b88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b56f70,
                        &PTR____CFConstantStringClassReference_110e95298,&PTR_DAT_1131a6f70,
                        &PTR_s_value_1131a7088,1,0x10,0x1c);
    puRam00000001136c9b88 = puVar1;
  }
  return;
}



/* Entry: 106fc9e64; end: 106fc9e6f;  */

bool FUN_106fc9e64(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 106fc9e70; end: 106fc9eeb;  */

undefined * FUN_106fc9e70(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c9b98 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e952d8,
                        &UNK_10de1de40,&UNK_10de1de74,4,FUN_106fc9eec,2);
    do {
      if (puRam00000001136c9b98 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c9b98;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c9b98,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c9b98 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c9b98;
}



/* Entry: 106fc9eec; end: 106fc9ef7;  */

bool FUN_106fc9eec(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 106fc9ef8; end: 106fc9f73;  */

undefined * FUN_106fc9ef8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c9ba0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e952f8,
                        &UNK_10de1de84,&UNK_10de1de94,3,FUN_106fc9f74,2);
    do {
      if (puRam00000001136c9ba0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c9ba0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c9ba0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c9ba0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c9ba0;
}



/* Entry: 106fc9f74; end: 106fc9f7f;  */

bool FUN_106fc9f74(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106fc9f80; end: 106fc9ffb;  */

undefined * FUN_106fc9f80(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c9ba8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e95318,
                        &UNK_10de1dea0,&UNK_10de1dec0,3,FUN_106fc9ffc,2);
    do {
      if (puRam00000001136c9ba8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c9ba8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c9ba8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c9ba8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c9ba8;
}



/* Entry: 106fc9ffc; end: 106fca007;  */

bool FUN_106fc9ffc(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106fca008; end: 106fca097;  */

undefined * FUN_106fca008(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c9bb0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e95338,
                        &UNK_10de1decc,&UNK_10de1deec,3,FUN_106fca098,2,&UNK_10de1def8);
    do {
      if (puRam00000001136c9bb0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c9bb0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c9bb0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c9bb0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c9bb0;
}



/* Entry: 106fca098; end: 106fca0a3;  */

bool FUN_106fca098(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106fca0a4; end: 106fca11f;  */

undefined * FUN_106fca0a4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c9bb8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e95358,
                        &UNK_10de1df03,&UNK_10de1e008,0x16,FUN_106fca120,2);
    do {
      if (puRam00000001136c9bb8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c9bb8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c9bb8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c9bb8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c9bb8;
}



/* Entry: 106fca120; end: 106fca14b;  */

bool FUN_106fca120(uint param_1)

{
  if ((param_1 < 0x14) && (param_1 != 0xd)) {
    return true;
  }
  return param_1 - 200 < 3;
}



/* Entry: 106fca14c; end: 106fca1c7;  */

undefined * FUN_106fca14c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c9bc0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e95378,
                        &UNK_10de1e060,&UNK_10de1e070,3,FUN_106fca1c8,2);
    do {
      if (puRam00000001136c9bc0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c9bc0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c9bc0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c9bc0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c9bc0;
}



/* Entry: 106fca1c8; end: 106fca1d3;  */

bool FUN_106fca1c8(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106fca1d4; end: 106fca24f;  */

undefined * FUN_106fca1d4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c9bc8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e95398,
                        &UNK_10de1e07c,&UNK_10de1e0c4,6,FUN_106fca250,2);
    do {
      if (puRam00000001136c9bc8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c9bc8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c9bc8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c9bc8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c9bc8;
}



/* Entry: 106fca250; end: 106fca25b;  */

bool FUN_106fca250(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 106fca25c; end: 106fca2d7;  */

undefined * FUN_106fca25c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c9bd0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e953b8,
                        &UNK_10de1e0dc,&UNK_10de1e108,4,FUN_106fca2d8,2);
    do {
      if (puRam00000001136c9bd0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c9bd0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c9bd0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c9bd0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c9bd0;
}



/* Entry: 106fca2d8; end: 106fca2e3;  */

bool FUN_106fca2d8(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 106fca2e4; end: 106fca35f;  */

undefined * FUN_106fca2e4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c9bd8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e953d8,
                        &UNK_10de1e118,&UNK_10de1e124,2,FUN_106fca360,2);
    do {
      if (puRam00000001136c9bd8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c9bd8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c9bd8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c9bd8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c9bd8;
}



/* Entry: 106fca360; end: 106fca36b;  */

bool FUN_106fca360(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 106fca36c; end: 106fca3e7;  */

undefined * FUN_106fca36c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c9be0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e953f8,
                        &UNK_10de1e12c,&UNK_10de1e140,2,FUN_106fca3e8,2);
    do {
      if (puRam00000001136c9be0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c9be0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c9be0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c9be0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c9be0;
}



/* Entry: 106fca3e8; end: 106fca3f3;  */

bool FUN_106fca3e8(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 106fca3f4; end: 106fca46f;  */

undefined * FUN_106fca3f4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c9be8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e95418,
                        &UNK_10de1e148,&UNK_10de1e174,3,FUN_106fca470,2);
    do {
      if (puRam00000001136c9be8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c9be8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c9be8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c9be8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c9be8;
}



/* Entry: 106fca470; end: 106fca47b;  */

bool FUN_106fca470(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106fca47c; end: 106fca4f7;  */

undefined * FUN_106fca47c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c9bf0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e95438,
                        &UNK_10de1e180,&UNK_10de1e208,10,FUN_106fca4f8,2);
    do {
      if (puRam00000001136c9bf0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c9bf0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c9bf0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c9bf0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c9bf0;
}



/* Entry: 106fca4f8; end: 106fca503;  */

bool FUN_106fca4f8(uint param_1)

{
  return param_1 < 10;
}



/* Entry: 106fca504; end: 106fca593;  */

undefined * FUN_106fca504(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c9bf8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e95458,
                        &UNK_10de1e230,&UNK_10de1e368,0xc,FUN_106fca594,2,&UNK_10de1e398);
    do {
      if (puRam00000001136c9bf8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c9bf8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c9bf8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c9bf8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c9bf8;
}



/* Entry: 106fca594; end: 106fca59f;  */

bool FUN_106fca594(uint param_1)

{
  return param_1 < 0xc;
}



/* Entry: 106fca5a0; end: 106fca607; +[MLBBoardIdResponse descriptor] */

void FUN_106fca5a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9c00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b57010,
                        &PTR____CFConstantStringClassReference_110e90cd8,&PTR_DAT_1131a70a8,
                        &PTR_DAT_1131a76a0,3,0x10,0x1c);
    puRam00000001136c9c00 = puVar1;
  }
  return;
}



/* Entry: 106fca608; end: 106fca66f; +[MLBAmbaBootType descriptor] */

void FUN_106fca608(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9c08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b57060,
                        &PTR____CFConstantStringClassReference_110e95478,&PTR_DAT_1131a70a8,
                        &PTR_DAT_1131a70c0,1,8,0x1c);
    puRam00000001136c9c08 = puVar1;
  }
  return;
}



/* Entry: 106fca670; end: 106fca6d7; +[MLBBleName descriptor] */

void FUN_106fca670(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9c10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b570b0,
                        &PTR____CFConstantStringClassReference_110e90c78,&PTR_DAT_1131a70a8,
                        &PTR_DAT_1131a70e0,1,0x10,0x1c);
    puRam00000001136c9c10 = puVar1;
  }
  return;
}



/* Entry: 106fca6d8; end: 106fca73f; +[MLBDfuRequest descriptor] */

void FUN_106fca6d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9c18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b57100,
                        &PTR____CFConstantStringClassReference_110e95498,&PTR_DAT_1131a70a8,
                        &PTR_DAT_1131a7100,1,8,0x1c);
    puRam00000001136c9c18 = puVar1;
  }
  return;
}



/* Entry: 106fca740; end: 106fca7a7; +[MLBSingleLedConf descriptor] */

void FUN_106fca740(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9c20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b57150,
                        &PTR____CFConstantStringClassReference_110e954b8,&PTR_DAT_1131a70a8,
                        &PTR_DAT_1131a7940,4,0x14,0x1c);
    puRam00000001136c9c20 = puVar1;
  }
  return;
}



/* Entry: 106fca7a8; end: 106fca80f; +[MLBAllLedsConf descriptor] */

void FUN_106fca7a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9c28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b571a0,
                        &PTR____CFConstantStringClassReference_110e954d8,&PTR_DAT_1131a70a8,
                        &PTR_DAT_1131a7320,2,0xc,0x1c);
    puRam00000001136c9c28 = puVar1;
  }
  return;
}



/* Entry: 106fca810; end: 106fca877; +[MLBAnimRequest descriptor] */

void FUN_106fca810(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9c30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b571f0,
                        &PTR____CFConstantStringClassReference_110e954f8,&PTR_DAT_1131a70a8,
                        &PTR_DAT_1131a7120,1,8,0x1c);
    puRam00000001136c9c30 = puVar1;
  }
  return;
}



/* Entry: 106fca878; end: 106fca8df; +[MLBAmbaUartConf descriptor] */

void FUN_106fca878(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9c38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b57240,
                        &PTR____CFConstantStringClassReference_110e95518,&PTR_DAT_1131a70a8,
                        &PTR_DAT_1131a7140,1,4,0x1c);
    puRam00000001136c9c38 = puVar1;
  }
  return;
}



/* Entry: 106fca8e0; end: 106fca947; +[MLBAmbaShellCommandConf descriptor] */

void FUN_106fca8e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9c40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b57290,
                        &PTR____CFConstantStringClassReference_110e95538,&PTR_DAT_1131a70a8,
                        &PTR_DAT_1131a7160,1,0x10,0x1c);
    puRam00000001136c9c40 = puVar1;
  }
  return;
}



/* Entry: 106fca948; end: 106fca9af; +[MLBRfSwitchRequest descriptor] */

void FUN_106fca948(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9c48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b572e0,
                        &PTR____CFConstantStringClassReference_110e95558,&PTR_DAT_1131a70a8,
                        &PTR_DAT_1131a7180,1,8,0x1c);
    puRam00000001136c9c48 = puVar1;
  }
  return;
}



/* Entry: 106fca9b0; end: 106fcaa17; +[MLBRealTimeMessage descriptor] */

void FUN_106fca9b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9c50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b57330,
                        &PTR____CFConstantStringClassReference_110e90d58,&PTR_DAT_1131a70a8,
                        &PTR_DAT_1131a7360,2,0x10,0x1c);
    puRam00000001136c9c50 = puVar1;
  }
  return;
}



/* Entry: 106fcaa18; end: 106fcaa7f; +[MLBSerialNumberRequest descriptor] */

void FUN_106fcaa18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9c58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b57380,
                        &PTR____CFConstantStringClassReference_110e95578,&PTR_DAT_1131a70a8,
                        &PTR_s_clearCache_1131a71a0,1,4,0x1c);
    puRam00000001136c9c58 = puVar1;
  }
  return;
}



/* Entry: 106fcaa80; end: 106fcaae7; +[MLBSerialNumberResponse descriptor] */

void FUN_106fcaa80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9c60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b573d0,
                        &PTR____CFConstantStringClassReference_110e95598,&PTR_DAT_1131a70a8,
                        &PTR_s_serialNumber_1131a73a0,2,0x18,0x1c);
    puRam00000001136c9c60 = puVar1;
  }
  return;
}



/* Entry: 106fcaae8; end: 106fcab4f; +[MLBBleAddress descriptor] */

void FUN_106fcaae8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9c68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b57420,
                        &PTR____CFConstantStringClassReference_110e955b8,&PTR_DAT_1131a70a8,
                        &PTR_DAT_1131a7700,3,0x18,0x1c);
    puRam00000001136c9c68 = puVar1;
  }
  return;
}



/* Entry: 106fcab50; end: 106fcabb7; +[MLBFactoryBitsMessage descriptor] */

void FUN_106fcab50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9c70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b57470,
                        &PTR____CFConstantStringClassReference_110e955d8,&PTR_DAT_1131a70a8,
                        &PTR_DAT_1131a71c0,1,8,0x1c);
    puRam00000001136c9c70 = puVar1;
  }
  return;
}



/* Entry: 106fcabb8; end: 106fcac1f; +[MLBWifiStartApRequest descriptor] */

void FUN_106fcabb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9c78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b574c0,
                        &PTR____CFConstantStringClassReference_110e955f8,&PTR_DAT_1131a70a8,
                        &PTR_DAT_1131a71e0,1,0x10,0x1c);
    puRam00000001136c9c78 = puVar1;
  }
  return;
}



/* Entry: 106fcac20; end: 106fcac87; +[MLBQcaTemperatureResponse descriptor] */

void FUN_106fcac20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9c80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b57510,
                        &PTR____CFConstantStringClassReference_110e95618,&PTR_DAT_1131a70a8,
                        &PTR_DAT_1131a7200,1,8,0x1c);
    puRam00000001136c9c80 = puVar1;
  }
  return;
}



/* Entry: 106fcac88; end: 106fcacef; +[MLBGpioReadRequest descriptor] */

void FUN_106fcac88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9c88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b57560,
                        &PTR____CFConstantStringClassReference_110e95638,&PTR_DAT_1131a70a8,
                        &PTR_DAT_1131a7220,1,8,0x1c);
    puRam00000001136c9c88 = puVar1;
  }
  return;
}



/* Entry: 106fcacf0; end: 106fcad57; +[MLBGpioSetRequest descriptor] */

void FUN_106fcacf0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9c90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b575b0,
                        &PTR____CFConstantStringClassReference_110e95658,&PTR_DAT_1131a70a8,
                        &PTR_DAT_1131a73e0,2,0xc,0x1c);
    puRam00000001136c9c90 = puVar1;
  }
  return;
}



/* Entry: 106fcad58; end: 106fcadbf; +[MLBAdcReadRequest descriptor] */

void FUN_106fcad58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9c98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b57600,
                        &PTR____CFConstantStringClassReference_110e95678,&PTR_DAT_1131a70a8,
                        &PTR_DAT_1131a7240,1,8,0x1c);
    puRam00000001136c9c98 = puVar1;
  }
  return;
}



/* Entry: 106fcadc0; end: 106fcae27; +[MLBAdcReadResponse descriptor] */

void FUN_106fcadc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9ca0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b57650,
                        &PTR____CFConstantStringClassReference_110e95698,&PTR_DAT_1131a70a8,
                        &PTR_DAT_1131a7260,1,8,0x1c);
    puRam00000001136c9ca0 = puVar1;
  }
  return;
}



/* Entry: 106fcae28; end: 106fcae8f; +[MLBImuRequest descriptor] */

void FUN_106fcae28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9ca8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b576a0,
                        &PTR____CFConstantStringClassReference_110e956b8,&PTR_DAT_1131a70a8,
                        &PTR_DAT_1131a7280,1,8,0x1c);
    puRam00000001136c9ca8 = puVar1;
  }
  return;
}



/* Entry: 106fcae90; end: 106fcaef7; +[MLBImuResponse descriptor] */

void FUN_106fcae90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9cb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b576f0,
                        &PTR____CFConstantStringClassReference_110e956d8,&PTR_DAT_1131a70a8,
                        &PTR_DAT_1131a79c0,4,0x14,0x1c);
    puRam00000001136c9cb0 = puVar1;
  }
  return;
}



/* Entry: 106fcaef8; end: 106fcaf5f; +[MLBFrameColorMessage descriptor] */

void FUN_106fcaef8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9cb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b57740,
                        &PTR____CFConstantStringClassReference_110e92518,&PTR_DAT_1131a70a8,
                        &PTR_DAT_1131a7420,2,0xc,0x1c);
    puRam00000001136c9cb8 = puVar1;
  }
  return;
}



/* Entry: 106fcaf60; end: 106fcafc7; +[MLBAlsCalib descriptor] */

void FUN_106fcaf60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9cc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b57790,
                        &PTR____CFConstantStringClassReference_110e956f8,&PTR_DAT_1131a70a8,
                        &PTR_DAT_1131a7760,3,0x10,0x1c);
    puRam00000001136c9cc0 = puVar1;
  }
  return;
}



/* Entry: 106fcafc8; end: 106fcb02f; +[MLBBatteryStatusRequest descriptor] */

void FUN_106fcafc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9cc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b577e0,
                        &PTR____CFConstantStringClassReference_110e92538,&PTR_DAT_1131a70a8,
                        &PTR_DAT_1131a77c0,3,0x10,0x1c);
    puRam00000001136c9cc8 = puVar1;
  }
  return;
}



/* Entry: 106fcb030; end: 106fcb097; +[MLBReadRequest descriptor] */

void FUN_106fcb030(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9cd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b57830,
                        &PTR____CFConstantStringClassReference_110e95718,&PTR_DAT_1131a70a8,
                        &PTR_DAT_1131a7460,2,0xc,0x1c);
    puRam00000001136c9cd0 = puVar1;
  }
  return;
}



/* Entry: 106fcb098; end: 106fcb0ff; +[MLBWriteRequest descriptor] */

void FUN_106fcb098(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9cd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b57880,
                        &PTR____CFConstantStringClassReference_110e95738,&PTR_DAT_1131a70a8,
                        &PTR_DAT_1131a7820,3,0x10,0x1c);
    puRam00000001136c9cd8 = puVar1;
  }
  return;
}



/* Entry: 106fcb100; end: 106fcb167; +[MLBRpcError descriptor] */

void FUN_106fcb100(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9ce0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b578d0,
                        &PTR____CFConstantStringClassReference_110e95758,&PTR_DAT_1131a70a8,
                        &PTR_s_errorCode_1131a7b40,5,0x28,0x1c);
    puRam00000001136c9ce0 = puVar1;
  }
  return;
}



/* Entry: 106fcb168; end: 106fcb1cf; +[MLBButtonRequest descriptor] */

void FUN_106fcb168(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9ce8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b57920,
                        &PTR____CFConstantStringClassReference_110e95778,&PTR_DAT_1131a70a8,
                        &PTR_s_durationMs_1131a74a0,2,0xc,0x1c);
    puRam00000001136c9ce8 = puVar1;
  }
  return;
}



/* Entry: 106fcb1d0; end: 106fcb237; +[MLBShipmodeRequest descriptor] */

void FUN_106fcb1d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9cf0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b57970,
                        &PTR____CFConstantStringClassReference_110e92558,&PTR_DAT_1131a70a8,
                        &PTR_DAT_1131a74e0,2,8,0x1c);
    puRam00000001136c9cf0 = puVar1;
  }
  return;
}



/* Entry: 106fcb238; end: 106fcb29f; +[MLBMediaCountsResponse descriptor] */

void FUN_106fcb238(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9cf8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b579c0,
                        &PTR____CFConstantStringClassReference_110e90c98,&PTR_DAT_1131a70a8,
                        &PTR_DAT_1131a72a0,1,0x10,0x1c);
    puRam00000001136c9cf8 = puVar1;
  }
  return;
}



/* Entry: 106fcb2a0; end: 106fcb307; +[MLBGetFirmwareUpdateHashResponse descriptor] */

void FUN_106fcb2a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9d00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b57a10,
                        &PTR____CFConstantStringClassReference_110e95798,&PTR_DAT_1131a70a8,
                        &PTR_DAT_1131a72c0,1,0x10,0x1c);
    puRam00000001136c9d00 = puVar1;
  }
  return;
}



/* Entry: 106fcb308; end: 106fcb36f; +[MLBBackgroundUpdateRequest descriptor] */

void FUN_106fcb308(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9d08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b57a60,
                        &PTR____CFConstantStringClassReference_110e957b8,&PTR_DAT_1131a70a8,
                        &PTR_DAT_1131a7a40,4,0x20,0x1c);
    puRam00000001136c9d08 = puVar1;
  }
  return;
}



/* Entry: 106fcb370; end: 106fcb3d7; +[MLBBackgroundUpdateResponse descriptor] */

void FUN_106fcb370(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9d10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b57ab0,
                        &PTR____CFConstantStringClassReference_110e957d8,&PTR_DAT_1131a70a8,
                        &PTR_DAT_1131a7ca0,7,0x28,0x1c);
    puRam00000001136c9d10 = puVar1;
  }
  return;
}



/* Entry: 106fcb3d8; end: 106fcb43f; +[MLBPowerWatchdogStatus descriptor] */

void FUN_106fcb3d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9d18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b57b00,
                        &PTR____CFConstantStringClassReference_110e957f8,&PTR_DAT_1131a70a8,
                        &PTR_s_isEnabled_1131a7520,2,8,0x1c);
    puRam00000001136c9d18 = puVar1;
  }
  return;
}



/* Entry: 106fcb440; end: 106fcb4a7; +[MLBKeyExchangeMessage descriptor] */

void FUN_106fcb440(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9d20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b57b50,
                        &PTR____CFConstantStringClassReference_110e90cf8,&PTR_DAT_1131a70a8,
                        &PTR_s_nonce_1131a7560,2,0x18,0x1c);
    puRam00000001136c9d20 = puVar1;
  }
  return;
}



/* Entry: 106fcb4a8; end: 106fcb50f; +[MLBUserAssociationMessage descriptor] */

void FUN_106fcb4a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9d28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b57ba0,
                        &PTR____CFConstantStringClassReference_110e95818,&PTR_DAT_1131a70a8,
                        &PTR_DAT_1131a72e0,1,0x10,0x1c);
    puRam00000001136c9d28 = puVar1;
  }
  return;
}



/* Entry: 106fcb510; end: 106fcb58b; +[MLBGpsUpdateRequest descriptor] */

undefined * FUN_106fcb510(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9d30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b57bf0,
                        &PTR____CFConstantStringClassReference_110e95838,&PTR_DAT_1131a70a8,
                        &PTR_s_latitude_1131a7880,3,0x10,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c9d30 = puVar1;
  }
  return puRam00000001136c9d30;
}



/* Entry: 106fcb58c; end: 106fcb5f3; +[MLBClientID descriptor] */

void FUN_106fcb58c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9d38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b57c40,
                        &PTR____CFConstantStringClassReference_110e92578,&PTR_DAT_1131a70a8,
                        &PTR_DAT_1131a75a0,2,0x10,0x1c);
    puRam00000001136c9d38 = puVar1;
  }
  return;
}



/* Entry: 106fcb5f4; end: 106fcb65b; +[MLBChargerStateResponse descriptor] */

void FUN_106fcb5f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9d40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b57c90,
                        &PTR____CFConstantStringClassReference_110e90cb8,&PTR_DAT_1131a70a8,
                        &PTR_DAT_1131a7be0,6,0x14,0x1c);
    puRam00000001136c9d40 = puVar1;
  }
  return;
}



/* Entry: 106fcb65c; end: 106fcb6c3; +[MLBAlsWeights descriptor] */

void FUN_106fcb65c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9d48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b57ce0,
                        &PTR____CFConstantStringClassReference_110e95858,&PTR_DAT_1131a70a8,
                        &PTR_DAT_1131a75e0,2,0xc,0x1c);
    puRam00000001136c9d48 = puVar1;
  }
  return;
}


