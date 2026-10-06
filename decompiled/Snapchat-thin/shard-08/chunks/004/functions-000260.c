/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106079d08; end: 106079deb; +[SCAuthDeleteClientsResponse descriptor] */

void FUN_106079d08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2d58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac2820,
                        &PTR____CFConstantStringClassReference_110e3bbf8,&PTR_DAT_11313b600,0,0,4,
                        0x1c);
    puRam00000001136c2d58 = puVar1;
  }
  return;
}



/* Entry: 106079dec; end: 106079df7;  */

bool FUN_106079dec(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 106079df8; end: 106079e73;  */

undefined * FUN_106079df8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c2d68 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e3bc38,
                        &UNK_10ddd3bb8,&UNK_10ddd3bf4,3,FUN_106079e74,0);
    do {
      if (puRam00000001136c2d68 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c2d68;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c2d68,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c2d68 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c2d68;
}



/* Entry: 106079e74; end: 106079e7f;  */

bool FUN_106079e74(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106079e80; end: 106079efb; +[SCAuthClient descriptor] */

undefined * FUN_106079e80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2d70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac28c0,
                        &PTR____CFConstantStringClassReference_110e3bc58,&PTR_DAT_11313b878,
                        &PTR_DAT_11313b970,7,0x38,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c2d70 = puVar1;
  }
  return puRam00000001136c2d70;
}



/* Entry: 106079efc; end: 106079f63; +[SCAuthScope descriptor] */

void FUN_106079efc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2d78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac2910,
                        &PTR____CFConstantStringClassReference_110dcde78,&PTR_DAT_11313b878,
                        &PTR_DAT_11313b8f0,4,0x20,0x1c);
    puRam00000001136c2d78 = puVar1;
  }
  return;
}



/* Entry: 106079f64; end: 106079fcb; +[SCAuthErrorResponse descriptor] */

void FUN_106079f64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2d80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac2960,
                        &PTR____CFConstantStringClassReference_110df75b8,&PTR_DAT_11313b878,
                        &PTR_s_error_11313b890,3,0x20,0x1c);
    puRam00000001136c2d80 = puVar1;
  }
  return;
}



/* Entry: 106079fcc; end: 10607a033; +[SCAuthAuthorizationRequest descriptor] */

void FUN_106079fcc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2d88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac2a00,
                        &PTR____CFConstantStringClassReference_110e3bc78,&PTR_DAT_11313ba50,
                        &PTR_DAT_11313bce8,7,0x40,0x1c);
    puRam00000001136c2d88 = puVar1;
  }
  return;
}



/* Entry: 10607a034; end: 10607a0af; +[SCAuthAuthorizationResponse descriptor] */

undefined * FUN_10607a034(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2d90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac2a50,
                        &PTR____CFConstantStringClassReference_110e3bc98,&PTR_DAT_11313ba50,
                        &PTR_DAT_11313bc28,6,0x30,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c2d90 = puVar1;
  }
  return puRam00000001136c2d90;
}



/* Entry: 10607a0b0; end: 10607a117; +[SCAuthApprovalRequest descriptor] */

void FUN_10607a0b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2d98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac2aa0,
                        &PTR____CFConstantStringClassReference_110e3bcb8,&PTR_DAT_11313ba50,
                        &PTR_DAT_11313ba88,2,0x18,0x1c);
    puRam00000001136c2d98 = puVar1;
  }
  return;
}



/* Entry: 10607a118; end: 10607a17f; +[SCAuthApprovalResponse descriptor] */

void FUN_10607a118(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2da0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac2af0,
                        &PTR____CFConstantStringClassReference_110e3bcd8,&PTR_DAT_11313ba50,
                        &PTR_DAT_11313bac8,3,0x20,0x1c);
    puRam00000001136c2da0 = puVar1;
  }
  return;
}



/* Entry: 10607a180; end: 10607a1e7; +[SCAuthDenialRequest descriptor] */

void FUN_10607a180(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2da8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac2b40,
                        &PTR____CFConstantStringClassReference_110e3bcf8,&PTR_DAT_11313ba50,
                        &PTR_DAT_11313ba68,1,0x10,0x1c);
    puRam00000001136c2da8 = puVar1;
  }
  return;
}



/* Entry: 10607a1e8; end: 10607a24f; +[SCAuthDenialResponse descriptor] */

void FUN_10607a1e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2db0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac2b90,
                        &PTR____CFConstantStringClassReference_110e3bd18,&PTR_DAT_11313ba50,0,0,4,
                        0x1c);
    puRam00000001136c2db0 = puVar1;
  }
  return;
}



/* Entry: 10607a250; end: 10607a2b7; +[SCAuthTokenRequest descriptor] */

void FUN_10607a250(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2db8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac2be0,
                        &PTR____CFConstantStringClassReference_110e3bd38,&PTR_DAT_11313ba50,
                        &PTR_DAT_11313bdc8,7,0x40,0x1c);
    puRam00000001136c2db8 = puVar1;
  }
  return;
}



/* Entry: 10607a2b8; end: 10607a31f; +[SCAuthTokenResponse descriptor] */

void FUN_10607a2b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2dc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac2c30,
                        &PTR____CFConstantStringClassReference_110e3bd58,&PTR_DAT_11313ba50,
                        &PTR_s_accessToken_11313bb88,5,0x28,0x1c);
    puRam00000001136c2dc0 = puVar1;
  }
  return;
}



/* Entry: 10607a320; end: 10607a387; +[SCAuthRevocationRequest descriptor] */

void FUN_10607a320(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2dc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac2c80,
                        &PTR____CFConstantStringClassReference_110e3bd78,&PTR_DAT_11313ba50,
                        &PTR_DAT_11313bb28,3,0x20,0x1c);
    puRam00000001136c2dc8 = puVar1;
  }
  return;
}



/* Entry: 10607a388; end: 10607a3ef; +[SCAuthListClientsRequest descriptor] */

void FUN_10607a388(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2dd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac2d20,
                        &PTR____CFConstantStringClassReference_110e3bd98,&PTR_DAT_11313bea8,
                        &PTR_s_userId_11313bee0,2,0x18,0x1c);
    puRam00000001136c2dd0 = puVar1;
  }
  return;
}



/* Entry: 10607a3f0; end: 10607a457; +[SCAuthListClientsResponse descriptor] */

void FUN_10607a3f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2dd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac2d70,
                        &PTR____CFConstantStringClassReference_110e3bdb8,&PTR_DAT_11313bea8,
                        &PTR_DAT_11313bec0,1,0x10,0x1c);
    puRam00000001136c2dd8 = puVar1;
  }
  return;
}



/* Entry: 10607a458; end: 10607a4bf; +[SCAuthRevokeClientsRequest descriptor] */

void FUN_10607a458(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2de0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac2dc0,
                        &PTR____CFConstantStringClassReference_110e3bdd8,&PTR_DAT_11313bea8,
                        &PTR_s_userId_11313bf20,2,0x18,0x1c);
    puRam00000001136c2de0 = puVar1;
  }
  return;
}



/* Entry: 10607a4c0; end: 10607a527; +[SCAuthRevokeClientsResponse descriptor] */

void FUN_10607a4c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2de8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac2e10,
                        &PTR____CFConstantStringClassReference_110e3bdf8,&PTR_DAT_11313bea8,0,0,4,
                        0x1c);
    puRam00000001136c2de8 = puVar1;
  }
  return;
}



/* Entry: 10607a528; end: 10607a58f; +[SCAuthUpdateClientScopesRequest descriptor] */

void FUN_10607a528(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2df0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac2e60,
                        &PTR____CFConstantStringClassReference_110e3be18,&PTR_DAT_11313bea8,
                        &PTR_s_userId_11313bf60,3,0x20,0x1c);
    puRam00000001136c2df0 = puVar1;
  }
  return;
}



/* Entry: 10607a590; end: 10607a5f7; +[SCAuthUpdateClientScopesResponse descriptor] */

void FUN_10607a590(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2df8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac2eb0,
                        &PTR____CFConstantStringClassReference_110e3be38,&PTR_DAT_11313bea8,0,0,4,
                        0x1c);
    puRam00000001136c2df8 = puVar1;
  }
  return;
}



/* Entry: 10607a5f8; end: 10607a66b; -[SCGrapheneSpotlightTileMetric2 init] */

undefined1 * FUN_10607a5f8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ef640;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10607a66c; end: 10607a853;  */

undefined1 **
FUN_10607a66c(long param_1,undefined1 **param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  undefined1 ***pppuVar4;
  int iVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined1 **ppuVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined1 **ppuStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  undefined1 **ppuStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 *puStack_f8;
  undefined1 **appuStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  undefined8 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 **ppuStack_c0;
  undefined1 **ppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [24];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = param_2;
  puVar7 = param_3;
  _objc_retain(param_2);
  iVar5 = (int)ppuVar9;
  puVar11 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined1 **)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,pcVar1);
    pcVar1 = "true";
    if ((int)param_3 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar6 = &UNK_110909f90;
    param_3 = &uStack_98;
    puVar7 = &uStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110909f90,puVar7,param_4);
    puStack_80 = param_3;
    func_0x00010007e5dc(&puStack_80);
    lVar8 = 0;
    puVar11 = (undefined8 *)auStack_78;
    do {
      if ((&cStack_49)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar8));
      }
      iVar5 = (int)puVar6;
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  ppuVar9 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar9;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  ppuVar2 = ppuVar9;
  __Unwind_Resume();
  pcStack_a8 = FUN_10607a854;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = (undefined1 **)0x0;
  puStack_d0 = param_3;
  puStack_c8 = (undefined1 *)puVar11;
  ppuStack_c0 = ppuVar9;
  ppuStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  if (ppuVar2 != (undefined1 **)0x0) {
    ppuVar9 = (undefined1 **)ppuVar2[1];
    pcVar1 = "true";
    if (iVar5 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_f0,pcVar1);
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    func_0x00010007e1e8(&uStack_110,appuStack_f0,&lStack_d8,1);
    (**(code **)(*ppuVar9 + 0x18))(ppuVar9,&UNK_110909fe0,&uStack_110,puVar7);
    ppuVar3 = &puStack_f8;
    puStack_f8 = (undefined1 *)&uStack_110;
    func_0x00010007e5dc();
    puVar11 = &uStack_110;
    if (cStack_d9 < '\0') {
      ppuVar3 = appuStack_f0[0];
      __ZdlPv();
      puVar11 = &uStack_110;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  puStack_f8 = (undefined1 *)puVar11;
  func_0x00010007e5dc(&puStack_f8);
  if (cStack_d9 < '\0') {
    __ZdlPv(appuStack_f0[0]);
  }
  ppuVar2 = ppuVar3;
  __Unwind_Resume();
  pppuVar4 = &ppuStack_140;
  pcStack_118 = FUN_10607a96c;
  puStack_138 = PTR_PTR_1126ef648;
  ppuStack_140 = ppuVar2;
  ppuStack_130 = ppuVar9;
  ppuStack_128 = ppuVar3;
  ppuStack_120 = &puStack_b0;
  _objc_msgSendSuper2(&ppuStack_140,PTR_s_init_1125d9248);
  if (pppuVar4 != (undefined1 ***)0x0) {
    ppuVar9 = (undefined1 **)pppuVar4;
    (*(code *)PTR_DAT_113403208)();
    pppuVar4[1] = ppuVar9;
  }
  return (undefined1 **)pppuVar4;
}



/* Entry: 10607a854; end: 10607a96b;  */

undefined1 ** FUN_10607a854(long param_1,int param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  undefined1 ***pppuVar4;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  long *plStack_90;
  undefined1 **ppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  if (param_1 != 0) {
    unaff_x20 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if (param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar1);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    (**(code **)(*unaff_x20 + 0x18))(unaff_x20,&UNK_110909fe0,&uStack_70,param_3);
    ppuVar2 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar2 = appuStack_50[0];
      __ZdlPv();
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  ppuVar3 = ppuVar2;
  __Unwind_Resume();
  pppuVar4 = &ppuStack_a0;
  pcStack_78 = FUN_10607a96c;
  puStack_98 = PTR_PTR_1126ef648;
  ppuStack_a0 = ppuVar3;
  plStack_90 = unaff_x20;
  ppuStack_88 = ppuVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&ppuStack_a0,PTR_s_init_1125d9248);
  if (pppuVar4 != (undefined1 ***)0x0) {
    ppuVar2 = (undefined1 **)pppuVar4;
    (*(code *)PTR_DAT_113403208)();
    pppuVar4[1] = ppuVar2;
  }
  return (undefined1 **)pppuVar4;
}



/* Entry: 10607a96c; end: 10607a9df; -[SCGrapheneContentShareUpsellMetric2 init] */

undefined1 * FUN_10607a96c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ef648;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10607a9e0; end: 10607ac0f;  */

/* WARNING: Removing unreachable block (ram,0x00010607b0c8) */

void FUN_10607a9e0(long param_1,char *param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [3];
  undefined1 auStack_1c8 [24];
  undefined8 auStack_1b0 [2];
  char cStack_199;
  long lStack_198;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar6 = param_3;
  pcVar4 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar11 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar6 = acStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar9 = 0;
    puVar11 = auStack_78;
    pcVar4 = param_4;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_10607ac10;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  pcVar7 = pcVar6;
  pcVar8 = pcVar4;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar11;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar6);
  if (pcVar3 != (char *)0x0) {
    plVar10 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,pcVar2);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar2 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_100,pcVar2);
    acStack_138[0] = '\0';
    acStack_138[1] = '\0';
    acStack_138[2] = '\0';
    acStack_138[3] = '\0';
    acStack_138[4] = '\0';
    acStack_138[5] = '\0';
    acStack_138[6] = '\0';
    acStack_138[7] = '\0';
    acStack_138[8] = '\0';
    acStack_138[9] = '\0';
    acStack_138[10] = '\0';
    acStack_138[0xb] = '\0';
    acStack_138[0xc] = '\0';
    acStack_138[0xd] = '\0';
    acStack_138[0xe] = '\0';
    acStack_138[0xf] = '\0';
    acStack_138[0x10] = '\0';
    acStack_138[0x11] = '\0';
    acStack_138[0x12] = '\0';
    acStack_138[0x13] = '\0';
    acStack_138[0x14] = '\0';
    acStack_138[0x15] = '\0';
    acStack_138[0x16] = '\0';
    acStack_138[0x17] = '\0';
    func_0x00010007e1e8(acStack_138,auStack_118,&lStack_e8,2);
    pcVar5 = "";
    pcVar7 = acStack_138;
    (**(code **)(*plVar10 + 0x18))(plVar10);
    pcStack_120 = acStack_138;
    func_0x00010007e5dc(&pcStack_120);
    lVar9 = 0;
    pcVar8 = pcVar4;
    do {
      if ((&cStack_e9)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(pcVar6);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
    ___stack_chk_fail();
    _objc_release(pcVar6);
    if (cStack_101 < '\0') {
      __ZdlPv(auStack_118[0]);
    }
    _objc_release(pcVar6);
    _objc_release(pcVar1);
    __Unwind_Resume();
    lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(pcVar5);
    _objc_retain(pcVar7);
    _objc_retain(pcVar8);
    if (pcVar4 != (char *)0x0) {
      plVar10 = *(long **)(pcVar4 + 8);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar5;
        _objc_retainAutorelease(pcVar5);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar5);
      func_0x00010002b838(auStack_1e0,pcVar1);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar7);
        pcVar1 = pcVar7;
        func_0x00010bdc3520(pcVar7);
      }
      _objc_release(pcVar7);
      func_0x00010002b838(auStack_1c8,pcVar1);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar8);
        pcVar1 = pcVar8;
        func_0x00010bdc3520(pcVar8);
      }
      _objc_release(pcVar8);
      func_0x00010002b838(auStack_1b0,pcVar1);
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_198,3);
      (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11090a100,&uStack_200,param_5);
      puStack_1e8 = (undefined1 *)&uStack_200;
      func_0x00010007e5dc(&puStack_1e8);
      lVar9 = 0;
      do {
        if ((&cStack_199)[lVar9] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1b0 + lVar9));
        }
        lVar9 = lVar9 + -0x18;
        unaff_x24 = &uStack_200;
      } while (lVar9 != -0x48);
    }
    _objc_release(pcVar8);
    _objc_release(pcVar7);
    pcVar1 = pcVar5;
    _objc_release(pcVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
      ___stack_chk_fail();
      _objc_release(pcVar8);
      do {
        unaff_x24 = unaff_x24 + -3;
      } while (unaff_x24 != auStack_1e0);
      _objc_release(pcVar8);
      _objc_release(pcVar7);
      _objc_release(pcVar5);
      __Unwind_Resume(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)();
      return;
    }
    return;
  }
  return;
}



/* Entry: 10607ac10; end: 10607ae3f;  */

/* WARNING: Removing unreachable block (ram,0x00010607b0c8) */

void FUN_10607ac10(long param_1,char *param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  long *plVar6;
  undefined8 *unaff_x24;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined8 auStack_140 [3];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar3 = param_3;
  pcVar4 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar6 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    pcVar3 = acStack_98;
    (**(code **)(*plVar6 + 0x18))(plVar6);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar5 = 0;
    pcVar4 = param_4;
    do {
      if ((&cStack_49)[lVar5] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar5));
      }
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_3);
    if (cStack_61 < '\0') {
      __ZdlPv(auStack_78[0]);
    }
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume();
    lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(pcVar1);
    _objc_retain(pcVar3);
    _objc_retain(pcVar4);
    if (pcVar2 != (char *)0x0) {
      plVar6 = *(long **)(pcVar2 + 8);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = pcVar1;
        _objc_retainAutorelease(pcVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      func_0x00010002b838(auStack_140,pcVar2);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar3);
        pcVar2 = pcVar3;
        func_0x00010bdc3520(pcVar3);
      }
      _objc_release(pcVar3);
      func_0x00010002b838(auStack_128,pcVar2);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar4);
        pcVar2 = pcVar4;
        func_0x00010bdc3520(pcVar4);
      }
      _objc_release(pcVar4);
      func_0x00010002b838(auStack_110,pcVar2);
      uStack_160 = 0;
      uStack_158 = 0;
      uStack_150 = 0;
      func_0x00010007e1e8(&uStack_160,auStack_140,&lStack_f8,3);
      (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_11090a100,&uStack_160,param_5);
      puStack_148 = (undefined1 *)&uStack_160;
      func_0x00010007e5dc(&puStack_148);
      lVar5 = 0;
      do {
        if ((&cStack_f9)[lVar5] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar5));
        }
        lVar5 = lVar5 + -0x18;
        unaff_x24 = &uStack_160;
      } while (lVar5 != -0x48);
    }
    _objc_release(pcVar4);
    _objc_release(pcVar3);
    pcVar2 = pcVar1;
    _objc_release(pcVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
      ___stack_chk_fail();
      _objc_release(pcVar4);
      do {
        unaff_x24 = unaff_x24 + -3;
      } while (unaff_x24 != auStack_140);
      _objc_release(pcVar4);
      _objc_release(pcVar3);
      _objc_release(pcVar1);
      __Unwind_Resume(pcVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)();
      return;
    }
    return;
  }
  return;
}



/* Entry: 10607ae40; end: 10607b0ff;  */

/* WARNING: Removing unreachable block (ram,0x00010607b0c8) */

void FUN_10607ae40(long param_1,char *param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 *unaff_x24;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar3 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_11090a100,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar2 = 0;
    do {
      if ((&cStack_59)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar2 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar1 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_a0);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
  return;
}



/* Entry: 10607b100; end: 10607b10b; -[SCFeatureSettingsService hasSpotlightShareUpsellLastTimeSeenTimestampMs] */

void FUN_10607b100(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e3be58);
  return;
}



/* Entry: 10607b10c; end: 10607b117; -[SCFeatureSettingsService spotlightShareUpsellLastTimeSeenTimestampMsServerParam] */

undefined ** FUN_10607b10c(void)

{
  return &PTR____CFConstantStringClassReference_110e3be58;
}



/* Entry: 10607b118; end: 10607b127; -[SCFeatureSettingsService setSpotlightShareUpsellLastTimeSeenTimestampMs:] */

void FUN_10607b118(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e3be58,param_3);
  return;
}



/* Entry: 10607b128; end: 10607b12f; -[SCFeatureSettingsService SHARING_SPOTLIGHT_SHARE_UPSELL_LAST_TIME_SEEN_TIMESTAMP_MS_client_value:] */

void FUN_10607b128(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10607b130; end: 10607b137; -[SCFeatureSettingsService SHARING_SPOTLIGHT_SHARE_UPSELL_LAST_TIME_SEEN_TIMESTAMP_MS_server_value:] */

void FUN_10607b130(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10607b138; end: 10607b147; -[SCFeatureSettingsService spotlightShareUpsellLastTimeSeenTimestampMs] */

void FUN_10607b138(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e3be58,0);
  return;
}



/* Entry: 10607b148; end: 10607b153; +[SCCContentPostSendUpsellStartContentPostSendUpsellWorkflow modulePath] */

undefined ** FUN_10607b148(void)

{
  return &PTR____CFConstantStringClassReference_110e3be78;
}



/* Entry: 10607b154; end: 10607b15b; +[SCCContentPostSendUpsellStartContentPostSendUpsellWorkflow asyncStrictMode] */

undefined8 FUN_10607b154(void)

{
  return 0;
}



/* Entry: 10607b15c; end: 10607b1cb; -[SCCContentPostSendUpsellStartContentPostSendUpsellWorkflow startContentPostSendUpsellWorkflowWithProps:] */

void FUN_10607b15c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10607b1cc; end: 10607b33b; +[SCCContentPostSendUpsellStartContentPostSendUpsellWorkflow invokeWithJSRuntimeProvider:props:completionHandler:] */

void FUN_10607b1cc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10607b2b0;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(lStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10607b33c; end: 10607b35f; +[SCCContentPostSendUpsellStartContentPostSendUpsellWorkflow valdiMarshallableObjectDescriptor] */

void FUN_10607b33c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11090a1c0;
  param_1[1] = &PTR_DAT_11090a1f0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10607b360; end: 10607b383; +[SCCContentPostSendUpsellIContentPostSendUpsellPlugin valdiMarshallableObjectDescriptor] */

void FUN_10607b360(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11090a200;
  param_1[1] = &PTR_DAT_11090a278;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10607b384; end: 10607b47f; -[SCSendToListsEditScope initWithUIContainer:delegate:intent:source:listId:] */

undefined1 *
FUN_10607b384(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ef650;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10607b480; end: 10607b487; -[SCSendToListsEditScope uiContainer] */

undefined8 FUN_10607b480(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10607b488; end: 10607b49f; -[SCSendToListsEditScope delegate] */

void FUN_10607b488(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10607b4a0; end: 10607b4a7; -[SCSendToListsEditScope intent] */

undefined8 FUN_10607b4a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10607b4a8; end: 10607b4af; -[SCSendToListsEditScope source] */

undefined8 FUN_10607b4a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10607b4b0; end: 10607b4b7; -[SCSendToListsEditScope listId] */

undefined8 FUN_10607b4b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10607b4b8; end: 10607b4fb; -[SCSendToListsEditScope .cxx_destruct] */

void FUN_10607b4b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10607b4fc; end: 10607b6a7;  */

void FUN_10607b4fc(double param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  dVar8 = 0.0;
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar4 = param_2;
      func_0x00010c0e00e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar9 = dVar8 - param_1;
      _objc_release(lVar4);
      dVar8 = 0.0;
      if (0.0 <= dVar9) {
        dVar8 = dVar9;
      }
      func_0x00010c0df720(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar5);
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
    lVar3 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  puVar5 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(param_3 + 0x28) = 0;
  return;
}



/* Entry: 10607b6a8; end: 10607b6bf;  */

void FUN_10607b6a8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10607b6c0; end: 10607b767;  */

void FUN_10607b6c0(long param_1,undefined8 param_2)

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



/* Entry: 10607b768; end: 10607b9c3; -[SCShortcutsSessionLoggingServiceImpl initWithUserTrackedLogger:performerProvider:shortcutsDataFetcher:] */

undefined8 *
FUN_10607b768(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ef658;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_58,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_4);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10607b9c4; end: 10607ba0b;  */

void FUN_10607b9c4(long param_1)

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



/* Entry: 10607ba0c; end: 10607bae7; -[SCShortcutsSessionLoggingServiceImpl didBecomeUsable] */

void FUN_10607ba0c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _CACurrentMediaTime();
  _objc_initWeak(auStack_38,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10607bae8; end: 10607bb23;  */

void FUN_10607bae8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bece240(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10607bb24; end: 10607bbff; -[SCShortcutsSessionLoggingServiceImpl didCompleteFirstPaint] */

void FUN_10607bb24(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _CACurrentMediaTime();
  _objc_initWeak(auStack_38,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10607bc00; end: 10607bc3b;  */

void FUN_10607bc00(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bece240(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10607bc3c; end: 10607bd47; -[SCShortcutsSessionLoggingServiceImpl didReceiveDataModelsWithShortcuts:] */

void FUN_10607bc3c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _CACurrentMediaTime();
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  uStack_50 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 10607bd48; end: 10607bd7f;  */

void FUN_10607bd48(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdff300(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10607bd80; end: 10607be8b; -[SCShortcutsSessionLoggingServiceImpl didReceiveViewModelsWithShortcuts:] */

void FUN_10607bd80(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _CACurrentMediaTime();
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  uStack_50 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 10607be8c; end: 10607bec3;  */

void FUN_10607be8c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdffc20(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10607bec4; end: 10607bf8b; -[SCShortcutsSessionLoggingServiceImpl didScroll] */

void FUN_10607bec4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10607bf8c; end: 10607bfb7;  */

void FUN_10607bf8c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea36a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10607bfb8; end: 10607c0af; -[SCShortcutsSessionLoggingServiceImpl didTapShortcutPillWithShortcutIdentifier:] */

void FUN_10607bfb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10607c0b0; end: 10607c0e3;  */

void FUN_10607c0b0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be01280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10607c0e4; end: 10607c1eb; -[SCShortcutsSessionLoggingServiceImpl didReplayBufferedShortcutSelectionWithShortcutIdentifier:durationSec:] */

void FUN_10607c0e4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  uStack_50 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 10607c1ec; end: 10607c223;  */

void FUN_10607c1ec(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdffee0(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10607c224; end: 10607c337; -[SCShortcutsSessionLoggingServiceImpl sessionDidBeginWithSessionId:source:] */

void FUN_10607c224(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _CACurrentMediaTime();
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_48);
  _objc_retain(param_4);
  uStack_58 = param_5;
  uStack_50 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 10607c338; end: 10607c373;  */

void FUN_10607c338(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bea1640(*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10607c374; end: 10607c3ff; -[SCShortcutsSessionLoggingServiceImpl sessionDidEnd] */

void FUN_10607c374(long param_1)

{
  undefined8 uVar1;
  
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(uVar1);
  return;
}



/* Entry: 10607c400; end: 10607c40f;  */

void FUN_10607c400(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea16d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             PTR_s__sessionDidEndWithTimestamp__112585f58);
  return;
}



/* Entry: 10607c410; end: 10607c52f; -[SCShortcutsSessionLoggingServiceImpl recipientSelectionsDidChangeWithDelta:shortcutId:] */

void FUN_10607c410(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10607c530; end: 10607c563;  */

void FUN_10607c530(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be870c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10607c564; end: 10607c65b; -[SCShortcutsSessionLoggingServiceImpl didReceiveRecipientLoggingData:] */

void FUN_10607c564(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10607c65c; end: 10607c8cf;  */

void FUN_10607c65c(double param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_2 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf529e0();
    param_1 = 0.0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lVar7 = *(long *)(param_2 + 0x20);
    _objc_retain(lVar7);
    param_4 = &uStack_130;
    lVar6 = lVar7;
    func_0x00010bf52a60(lVar7,param_3,param_4,auStack_f0,0x10);
    if (lVar6 != 0) {
      lVar10 = *plStack_120;
      do {
        lVar8 = 0;
        do {
          if (*plStack_120 != lVar10) {
            _objc_enumerationMutation(lVar7);
          }
          uVar11 = *(undefined8 *)(lStack_128 + lVar8 * 8);
          puVar2 = PTR_PTR_1126c0c08;
          _objc_opt_new(PTR_PTR_1126c0c08);
          func_0x00010c206c40();
          uVar9 = uVar11;
          func_0x00010c122b80(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1e8900(puVar2,param_3,uVar9);
          _objc_release(uVar9);
          uVar9 = uVar11;
          func_0x00010c22d640(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1ffc80(puVar2,param_3,uVar9);
          _objc_release(uVar9);
          uVar9 = uVar11;
          func_0x00010c122de0(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c21acc0(puVar2,param_3,uVar9);
          _objc_release(uVar9);
          uVar12 = *(undefined8 *)(lVar1 + 0x70);
          uVar9 = uVar11;
          func_0x00010c22d640(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0(uVar12,param_3,uVar9);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar11;
          func_0x00010c122b80(uVar11);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar12;
          func_0x00010c0e00e0(uVar12,param_3,uVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c067fc0();
          func_0x00010c1e73a0(puVar2,param_3,uVar5);
          _objc_release(uVar4);
          _objc_release(uVar3);
          _objc_release(uVar12);
          _objc_release(uVar9);
          func_0x00010c07d660(uVar11);
          func_0x00010c161620(puVar2,param_3,(uint)uVar11 ^ 1);
          func_0x00010befa120(*(undefined8 *)(lVar1 + 0x68),param_3,puVar2);
          _objc_release(puVar2);
          lVar8 = lVar8 + 1;
        } while (lVar6 != lVar8);
        param_4 = &uStack_130;
        lVar6 = lVar7;
        func_0x00010bf52a60(lVar7,param_3,param_4,auStack_f0,0x10);
      } while (lVar6 != 0);
    }
    _objc_release(lVar7);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_4);
  lVar6 = *(long *)(lVar1 + 0x40);
  func_0x00010c0e00e0(lVar6,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 == 0) {
    uVar9 = *(undefined8 *)(lVar1 + 0x40);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1 * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220220(uVar9,param_3,puVar2,param_4);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10607c8d0; end: 10607c96f; -[SCShortcutsSessionLoggingServiceImpl _trackTimestamp:event:] */

void FUN_10607c8d0(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_2 + 0x40);
  func_0x00010c0e00e0(lVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x40);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1 * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220220(uVar3,param_3,puVar2,param_4);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10607c970; end: 10607c9e7; -[SCShortcutsSessionLoggingServiceImpl _sessionDidBeginWithSessionId:source:timestamp:] */

void FUN_10607c970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bece240(param_1,param_2);
  func_0x00010bea75c0(param_2);
  _objc_release(param_4);
  func_0x00010bea7c40(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010be0fd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__fetchAvailableShortcuts_1125618e8);
  return;
}



/* Entry: 10607c9e8; end: 10607c9fb; -[SCShortcutsSessionLoggingServiceImpl _setDidScroll] */

void FUN_10607c9e8(long param_1)

{
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  return;
}



/* Entry: 10607c9fc; end: 10607ca43; -[SCShortcutsSessionLoggingServiceImpl _setSessionId:] */

void FUN_10607c9fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x28) == 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = param_3;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10607ca44; end: 10607cb23; -[SCShortcutsSessionLoggingServiceImpl _resetSession] */

void FUN_10607ca44(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x20));
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined **)(param_1 + 0x58) = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined **)(param_1 + 0x70) = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined **)(param_1 + 0x78) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10607cb24; end: 10607cb37; -[SCShortcutsSessionLoggingServiceImpl _setSource:] */

void FUN_10607cb24(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 10607cb38; end: 10607cce7; -[SCShortcutsSessionLoggingServiceImpl _didReceiveDataModelsWithShortcuts:timestamp:] */

void FUN_10607cb38(double param_1,undefined1 *param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 unaff_x21;
  undefined1 *unaff_x22;
  undefined *unaff_x23;
  long unaff_x24;
  undefined **unaff_x25;
  undefined1 *unaff_x26;
  double dVar9;
  undefined1 auStack_2e8 [8];
  undefined1 *puStack_2e0;
  undefined1 auStack_2d8 [8];
  undefined1 *puStack_2d0;
  undefined **ppuStack_2c8;
  long lStack_2c0;
  undefined *puStack_2b8;
  undefined1 *puStack_2b0;
  undefined8 uStack_2a8;
  undefined1 *puStack_2a0;
  undefined1 *puStack_298;
  undefined1 **ppuStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_1b8;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_78;
  
  puVar8 = &uStack_140;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  dVar9 = 0.0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  puVar1 = param_4;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x24 = *plStack_130;
    dVar9 = 1000.0;
    unaff_x25 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    do {
      unaff_x26 = (undefined1 *)0x0;
      do {
        if (*plStack_130 != unaff_x24) {
          _objc_enumerationMutation(param_4);
        }
        unaff_x23 = *(undefined **)(lStack_138 + (long)unaff_x26 * 8);
        func_0x00010c22d640();
        _objc_retainAutoreleasedReturnValue();
        unaff_x22 = param_2;
        func_0x00010bde9220();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x23);
        puVar2 = unaff_x22;
        func_0x00010c08fa60();
        if (puVar2 != (undefined1 *)0x0) {
          unaff_x23 = *(undefined **)(param_2 + 0x48);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (unaff_x23 == (undefined *)0x0) {
            unaff_x23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            dVar9 = param_1 * 1000.0;
            func_0x00010c0df720(param_1 * 1000.0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x48));
            _objc_release(unaff_x23);
          }
        }
        _objc_release(unaff_x22);
        unaff_x26 = unaff_x26 + 1;
      } while (puVar1 != unaff_x26);
      puVar1 = param_4;
      puVar8 = &uStack_140;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_10607cce8;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  lStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  plStack_270 = (long *)0x0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  puVar1 = (undefined1 *)puVar8;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x24 = *plStack_270;
    unaff_x25 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    do {
      unaff_x26 = (undefined1 *)0x0;
      do {
        if (*plStack_270 != unaff_x24) {
          _objc_enumerationMutation(puVar8);
        }
        unaff_x23 = *(undefined **)(lStack_278 + (long)unaff_x26 * 8);
        func_0x00010c22d640();
        _objc_retainAutoreleasedReturnValue();
        unaff_x22 = param_4;
        func_0x00010bde9220();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x23);
        puVar2 = unaff_x22;
        func_0x00010c08fa60();
        if (puVar2 != (undefined1 *)0x0) {
          unaff_x23 = *(undefined **)(param_4 + 0x50);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (unaff_x23 == (undefined *)0x0) {
            unaff_x23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df720(dVar9 * 1000.0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(*(undefined8 *)(param_4 + 0x50));
            _objc_release(unaff_x23);
          }
        }
        _objc_release(unaff_x22);
        unaff_x26 = unaff_x26 + 1;
      } while (puVar1 != unaff_x26);
      puVar1 = (undefined1 *)puVar8;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  puVar1 = (undefined1 *)puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_288 = FUN_10607ce98;
  puVar2 = puVar1;
  puStack_2d0 = unaff_x26;
  ppuStack_2c8 = unaff_x25;
  lStack_2c0 = unaff_x24;
  puStack_2b8 = unaff_x23;
  puStack_2b0 = unaff_x22;
  uStack_2a8 = unaff_x21;
  puStack_2a0 = param_4;
  puStack_298 = (undefined1 *)puVar8;
  ppuStack_290 = &puStack_150;
  func_0x00010bde9480();
  func_0x00010be0fcc0(puVar1);
  uVar3 = *(undefined8 *)(puVar1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c22d840();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c268560();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(puVar1 + 0x10);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010c0e0ea0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_initWeak(auStack_2d8,puVar1);
  _objc_copyWeak(auStack_2e8,auStack_2d8);
  uVar4 = uVar7;
  puStack_2e0 = puVar2;
  func_0x00010c25ff60(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_2e8);
  _objc_destroyWeak(auStack_2d8);
  _objc_release(uVar7);
  return;
}



/* Entry: 10607cce8; end: 10607ce97; -[SCShortcutsSessionLoggingServiceImpl _didReceiveViewModelsWithShortcuts:timestamp:] */

void FUN_10607cce8(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined *unaff_x23;
  long unaff_x24;
  undefined **unaff_x25;
  long unaff_x26;
  undefined1 auStack_1a8 [8];
  long lStack_1a0;
  undefined1 auStack_198 [8];
  long lStack_190;
  undefined **ppuStack_188;
  long lStack_180;
  undefined *puStack_178;
  long lStack_170;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar1 = param_4;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    unaff_x24 = *plStack_130;
    unaff_x25 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    do {
      unaff_x26 = 0;
      do {
        if (*plStack_130 != unaff_x24) {
          _objc_enumerationMutation(param_4);
        }
        unaff_x23 = *(undefined **)(lStack_138 + unaff_x26 * 8);
        func_0x00010c22d640();
        _objc_retainAutoreleasedReturnValue();
        unaff_x22 = param_2;
        func_0x00010bde9220();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x23);
        lVar2 = unaff_x22;
        func_0x00010c08fa60();
        if (lVar2 != 0) {
          unaff_x23 = *(undefined **)(param_2 + 0x50);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (unaff_x23 == (undefined *)0x0) {
            unaff_x23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df720(param_1 * 1000.0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x50));
            _objc_release(unaff_x23);
          }
        }
        _objc_release(unaff_x22);
        unaff_x26 = unaff_x26 + 1;
      } while (lVar1 != unaff_x26);
      lVar1 = param_4;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar1 != 0);
  }
  lVar1 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_10607ce98;
  lVar2 = lVar1;
  lStack_190 = unaff_x26;
  ppuStack_188 = unaff_x25;
  lStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  lStack_170 = unaff_x22;
  uStack_168 = unaff_x21;
  lStack_160 = param_2;
  lStack_158 = param_4;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x00010bde9480();
  func_0x00010be0fcc0(lVar1);
  uVar3 = *(undefined8 *)(lVar1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c22d840();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c268560();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar1 + 0x10);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010c0e0ea0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_initWeak(auStack_198,lVar1);
  _objc_copyWeak(auStack_1a8,auStack_198);
  uVar4 = uVar7;
  lStack_1a0 = lVar2;
  func_0x00010c25ff60(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_1a8);
  _objc_destroyWeak(auStack_198);
  _objc_release(uVar7);
  return;
}



/* Entry: 10607ce98; end: 10607d01b; -[SCShortcutsSessionLoggingServiceImpl _fetchAvailableShortcuts] */

void FUN_10607ce98(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [8];
  long lStack_60;
  undefined1 auStack_58 [8];
  
  lVar1 = param_1;
  func_0x00010bde9480(param_1,param_2,*(undefined8 *)(param_1 + 0x30));
  func_0x00010be0fcc0(param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c22d840();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c268560();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c0e0ea0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_initWeak(auStack_58,param_1);
  _objc_copyWeak(auStack_68,auStack_58);
  uVar3 = uVar6;
  lStack_60 = lVar1;
  func_0x00010c25ff60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar6);
  return;
}



/* Entry: 10607d01c; end: 10607d2f7;  */

void FUN_10607d01c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lStack_178;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = param_2;
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    _objc_retain(param_2);
    lStack_178 = param_2;
    func_0x00010bf52a60();
    if (lStack_178 != 0) {
      lVar9 = *plStack_130;
      do {
        lVar10 = 0;
        do {
          if (*plStack_130 != lVar9) {
            _objc_enumerationMutation(param_2);
          }
          uVar11 = *(undefined8 *)(lStack_138 + lVar10 * 8);
          uVar2 = uVar11;
          func_0x00010c22d640(uVar11);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar1;
          func_0x00010bde9220();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar2);
          uVar4 = *(undefined8 *)(lVar1 + 0x18);
          func_0x00010c269d40(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c22d640(uVar11);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar4;
          func_0x00010c22d6a0(uVar4);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar2;
          func_0x00010c268560();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = *(undefined8 *)(lVar1 + 0x10);
          func_0x00010c269d40(uVar6);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar5;
          func_0x00010c0e0ea0(uVar5);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(uVar2);
          _objc_release(uVar11);
          _objc_release(uVar4);
          lVar8 = param_1 + 0x20;
          _objc_copyWeak(auStack_148,lVar8);
          _objc_retain(lVar3);
          uVar2 = uVar7;
          func_0x00010c25ff60(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf1a3e0();
          _objc_release(uVar2);
          _objc_release(lVar3);
          _objc_destroyWeak(auStack_148);
          _objc_release(uVar7);
          _objc_release(lVar3);
          lVar10 = lVar10 + 1;
        } while (lStack_178 != lVar10);
        lStack_178 = param_2;
        func_0x00010bf52a60();
      } while (lStack_178 != 0);
    }
    _objc_release(param_2);
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_148);
  __Unwind_Resume();
  _objc_retain(lVar8);
  param_2 = param_2 + 0x28;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    lVar1 = lVar8;
    func_0x00010c122f00(lVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be58980(param_2);
    _objc_release(lVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar8);
  return;
}



/* Entry: 10607d2f8; end: 10607d36f;  */

void FUN_10607d2f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010c122f00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be58980(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10607d370; end: 10607d55b; -[SCShortcutsSessionLoggingServiceImpl _fetchAvailableBadgesForSource:] */

void FUN_10607d370(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22d840();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c268560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c1278e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c268560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar4);
  uVar2 = uVar3;
  func_0x00010bf41860(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e0ea0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_initWeak(auStack_58,param_1);
  _objc_copyWeak(auStack_68,auStack_58);
  uVar2 = uVar4;
  uStack_60 = param_3;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar3);
  return;
}



/* Entry: 10607d55c; end: 10607d607;  */

void FUN_10607d55c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x000100817178(param_2,&PTR___NSConcreteGlobalBlock_11090a308);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10607d610;
  puStack_40 = &UNK_11090a328;
  uStack_38 = param_2;
  _objc_retain();
  uVar1 = param_3;
  func_0x0001006372a4(param_3,&puStack_58);
  _objc_release(param_3);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10607d608; end: 10607d60f;  */

void FUN_10607d608(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22d650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_shortcutId_112668fb8);
  return;
}



/* Entry: 10607d610; end: 10607d65b;  */

undefined8 FUN_10607d610(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c22d640(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar1);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 10607d65c; end: 10607d773;  */

void FUN_10607d65c(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar11 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar3 = param_2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar12 = *plStack_110;
    do {
      lVar13 = 0;
      do {
        if (*plStack_110 != lVar12) {
          _objc_enumerationMutation(param_2);
        }
        lVar4 = param_1 + 0x20;
        _objc_loadWeakRetained();
        func_0x00010be87560();
        _objc_release(lVar4);
        lVar13 = lVar13 + 1;
      } while (lVar3 != lVar13);
      lVar3 = param_2;
      puVar11 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar11);
  puVar5 = (undefined1 *)puVar11;
  func_0x00010010fab4(puVar11,PTR_DAT_1126a50a0);
  puVar1 = (undefined1 *)puVar11;
  if ((int)puVar5 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  _objc_retain(puVar1);
  puVar2 = PTR_DAT_1126a5098;
  _objc_retain(puVar11);
  puVar6 = (undefined1 *)puVar11;
  func_0x00010010fab4(puVar11,puVar2);
  puVar5 = (undefined1 *)puVar11;
  if ((int)puVar6 == 0) {
    puVar5 = (undefined1 *)0x0;
  }
  _objc_retain(puVar5);
  _objc_release(puVar11);
  if ((puVar1 != (undefined1 *)0x0 && puVar5 != (undefined1 *)0x0) &&
     (puVar6 = (undefined1 *)puVar11, func_0x00010c22e220(), (int)puVar6 != 0)) {
    puVar6 = (undefined1 *)puVar11;
    func_0x00010c22d640();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c08fa60();
    if (puVar7 != (undefined1 *)0x0) {
      lVar3 = param_2;
      func_0x00010bde9220();
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_188,param_2);
      puVar7 = (undefined1 *)puVar11;
      func_0x00010bf153c0(puVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c268560();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_2 + 0x10);
      func_0x00010c269d40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar8;
      func_0x00010c0e0ea0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_copyWeak(auStack_190,auStack_188);
      _objc_retain(lVar3);
      puVar7 = puVar10;
      func_0x00010c25ff60(puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(puVar7);
      _objc_release(lVar3);
      _objc_destroyWeak(auStack_190);
      _objc_release(puVar10);
      _objc_destroyWeak(auStack_188);
      _objc_release(lVar3);
    }
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(puVar11);
  return;
}



/* Entry: 10607d774; end: 10607d9bf; -[SCShortcutsSessionLoggingServiceImpl _recordBadgeStateForPlugin:source:] */

void FUN_10607d774(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a50a0);
  lVar1 = param_3;
  if ((int)lVar3 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  puVar2 = PTR_DAT_1126a5098;
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010010fab4(param_3,puVar2);
  lVar3 = param_3;
  if ((int)lVar4 == 0) {
    lVar3 = 0;
  }
  _objc_retain(lVar3);
  _objc_release(param_3);
  if ((lVar1 != 0 && lVar3 != 0) && (lVar4 = param_3, func_0x00010c22e220(), (int)lVar4 != 0)) {
    lVar4 = param_3;
    func_0x00010c22d640();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    if (lVar5 != 0) {
      lVar5 = param_1;
      func_0x00010bde9220();
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_68,param_1);
      lVar6 = param_3;
      func_0x00010bf153c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c268560();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar7;
      func_0x00010c0e0ea0(lVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_copyWeak(auStack_70,auStack_68);
      _objc_retain(lVar5);
      lVar6 = lVar9;
      func_0x00010c25ff60(lVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_destroyWeak(auStack_70);
      _objc_release(lVar9);
      _objc_destroyWeak(auStack_68);
      _objc_release(lVar5);
    }
    _objc_release(lVar4);
  }
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10607d9c0; end: 10607da13;  */

void FUN_10607d9c0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be87540();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10607da14; end: 10607dc47; -[SCShortcutsSessionLoggingServiceImpl _recordBadgeState:forShortcutId:] */

void FUN_10607da14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_180 = &uStack_188;
  uStack_188 = 0;
  uStack_178 = 0x3032000000;
  pcStack_170 = FUN_10607b6a8;
  uStack_168 = 0x10607b6b8;
  uStack_160 = 0;
  func_0x00010c0bf0a0(param_3);
  lVar2 = puStack_180[5];
  _objc_retain(lVar2);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    puStack_138 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_10607b6a8;
    uStack_70 = 0x10607b6b8;
    uStack_68 = 0;
    puStack_b8 = puVar1;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_10607e950;
    puStack_a0 = &UNK_110898578;
    puStack_e0 = puVar1;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x10607e974;
    puStack_c8 = &UNK_110847658;
    puStack_108 = puVar1;
    uStack_100 = 0xc2000000;
    uStack_f8 = 0x10607e990;
    puStack_f0 = &UNK_110847658;
    puStack_130 = puVar1;
    uStack_128 = 0xc2000000;
    uStack_120 = 0x10607e9ac;
    puStack_118 = &UNK_1108431e0;
    puStack_158 = puVar1;
    uStack_150 = 0xc2000000;
    uStack_148 = 0x10607e9c8;
    puStack_140 = &UNK_110847658;
    puStack_110 = puStack_138;
    puStack_e8 = puStack_138;
    puStack_c0 = puStack_138;
    puStack_98 = puStack_138;
    puStack_88 = puStack_138;
    func_0x00010c0bd180(lVar2);
    lVar3 = puStack_88[5];
    _objc_retain(lVar3);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(uStack_68);
    _objc_release(lVar2);
    if (lVar3 != 0) {
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x78));
    }
  }
  _objc_release(lVar3);
  __Block_object_dispose(&uStack_188,8);
  _objc_release(uStack_160);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10607dc48; end: 10607dc7f;  */

void FUN_10607dc48(long param_1,undefined8 param_2)

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



/* Entry: 10607dc80; end: 10607df3b; -[SCShortcutsSessionLoggingServiceImpl _logShortcutAvailableWithShortcutRecipients:shortcutId:] */

void FUN_10607dc80(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x58));
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf529e0(param_3);
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  if (lVar4 != 0) {
    do {
      lVar5 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(param_3);
        }
        uVar6 = *(undefined8 *)(lVar5 * 8);
        _objc_retain(uVar6);
        uStack_130 = 0;
        uStack_120 = 0x3032000000;
        pcStack_118 = FUN_10607b6a8;
        uStack_110 = 0x10607b6b8;
        uStack_108 = 0;
        puStack_128 = &uStack_130;
        func_0x00010c0c0000(uVar6);
        uVar7 = puStack_128[5];
        _objc_retain(uVar7);
        __Block_object_dispose(&uStack_130,8);
        _objc_release(uStack_108);
        _objc_release(uVar6);
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1);
        _objc_release(puVar2);
        _objc_release(uVar7);
        lVar5 = lVar5 + 1;
      } while (lVar4 != lVar5);
      lVar4 = param_3;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(param_3);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x70));
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_130,8);
  __Unwind_Resume();
  lVar3 = param_3;
  func_0x00010bde9220();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_3 + 0x60);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar4 == 0) {
    func_0x00010c1d0640(*(undefined8 *)(param_3 + 0x60));
  }
  else {
    uVar6 = *(undefined8 *)(param_3 + 0x60);
    func_0x00010c0e00e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    func_0x00010c0df760(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_3 + 0x60));
    _objc_release(puVar1);
    _objc_release(uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10607df3c; end: 10607e007; -[SCShortcutsSessionLoggingServiceImpl _didTapShortcutPillWithShortcutIdentifier:] */

void FUN_10607df3c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  func_0x00010bde9220();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x60);
  func_0x00010c0e00e0(lVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar2 == 0) {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x60),param_2,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c45e8,lVar1);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c0e00e0(uVar3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c067ec0();
    func_0x00010c0df760(puVar5,param_2,(int)uVar4 + 1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x60),param_2,puVar5,lVar1);
    _objc_release(puVar5);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10607e008; end: 10607e09b; -[SCShortcutsSessionLoggingServiceImpl _didReplayBufferedShortcutSelectionWithShortcutIdentifier:durationSec:] */

void FUN_10607e008(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126c7688;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e3c018;
  if (*(long *)(param_2 + 0x30) != 2) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dabe78;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110ddee38;
  if (*(long *)(param_2 + 0x30) != 1) {
    ppuVar2 = ppuVar1;
  }
  _objc_retain(ppuVar2);
  _objc_opt_new(puVar3);
  FUN_10607f09c();
  FUN_10607f384(param_1,puVar3,ppuVar2);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10607e09c; end: 10607e2e3; -[SCShortcutsSessionLoggingServiceImpl _recipientSelectionsDidChangeWithDelta:shortcutId:] */

void FUN_10607e09c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf529e0();
  uVar10 = 0;
  _objc_retain(param_3);
  lVar6 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar9 = *(undefined8 *)(lVar8 * 8);
      uVar2 = uVar9;
      func_0x000108425950(uVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126c0c08;
      _objc_opt_new(PTR_PTR_1126c0c08);
      func_0x00010c206c40();
      func_0x00010c1e8900(puVar3);
      func_0x00010c1ffc80(puVar3);
      func_0x0001084259b4(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21acc0(puVar3);
      _objc_release(uVar9);
      uVar4 = *(undefined8 *)(param_1 + 0x70);
      func_0x00010c0e00e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      func_0x00010c1e73a0(puVar3);
      _objc_release(uVar9);
      _objc_release(uVar4);
      lVar5 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      _objc_release(lVar5);
      func_0x00010c161620(puVar3);
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x68));
      _objc_release(puVar3);
      _objc_release(uVar2);
      lVar8 = lVar8 + 1;
    } while (lVar6 != lVar8);
    lVar6 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)(param_3 + 0x40);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 != 0) {
    func_0x00010bece240(uVar10,param_3);
    func_0x00010be50b80(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010be93af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__resetSession_112582858);
    return;
  }
  return;
}



/* Entry: 10607e2e4; end: 10607e35f; -[SCShortcutsSessionLoggingServiceImpl _sessionDidEndWithTimestamp:] */

void FUN_10607e2e4(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x40);
  func_0x00010c0e00e0(lVar1,param_3,&PTR____CFConstantStringClassReference_110e3bf78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010bece240(param_1,param_2);
    func_0x00010be50b80(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010be93af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__resetSession_112582858);
    return;
  }
  return;
}


