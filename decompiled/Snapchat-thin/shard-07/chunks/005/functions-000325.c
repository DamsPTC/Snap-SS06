/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1055e9574; end: 1055e960f; -[SCGtqRemoveUnlockNetworkPersistanceRequest encodeWithCoder:] */

void FUN_1055e9574(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110def7b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110def7d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110def7f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110def818);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110def838);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055e9610; end: 1055e969f; -[SCGtqRemoveUnlockNetworkPersistanceRequest hash] */

undefined8 * FUN_1055e9610(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1055e9760:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1055e976c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
            if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_1055e976c;
            }
            goto LAB_1055e9760;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1055e976c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1055e96a0; end: 1055e9787; -[SCGtqRemoveUnlockNetworkPersistanceRequest isEqual:] */

long FUN_1055e96a0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1055e9760:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1055e976c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_1055e976c;
            }
            goto LAB_1055e9760;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1055e976c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1055e9788; end: 1055e978f; -[SCGtqRemoveUnlockNetworkPersistanceRequest gtqRequest] */

undefined8 FUN_1055e9788(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1055e9790; end: 1055e9797; -[SCGtqRemoveUnlockNetworkPersistanceRequest host] */

undefined8 FUN_1055e9790(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1055e9798; end: 1055e979f; -[SCGtqRemoveUnlockNetworkPersistanceRequest path] */

undefined8 FUN_1055e9798(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1055e97a0; end: 1055e97a7; -[SCGtqRemoveUnlockNetworkPersistanceRequest additionalHttpHeaders] */

undefined8 FUN_1055e97a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1055e97a8; end: 1055e97af; -[SCGtqRemoveUnlockNetworkPersistanceRequest useGzipRequestCompression] */

undefined1 FUN_1055e97a8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1055e97b0; end: 1055e9873; -[SCGtqRemoveUnlockNetworkPersistanceRequest .cxx_destruct] */

void FUN_1055e97b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1055e9874; end: 1055e987f;  */

bool FUN_1055e9874(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 1055e9880; end: 1055e98fb;  */

undefined * FUN_1055e9880(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bcf80 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110def878,
                        &UNK_10ddb3fe8,&UNK_10ddb4110,0x17,FUN_1055e98fc,0);
    do {
      if (puRam00000001136bcf80 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bcf80;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bcf80,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bcf80 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bcf80;
}



/* Entry: 1055e98fc; end: 1055e9907;  */

bool FUN_1055e98fc(uint param_1)

{
  return param_1 < 0x17;
}



/* Entry: 1055e9908; end: 1055e996f; +[SCLensLensIdentifier descriptor] */

void FUN_1055e9908(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcf88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4e9c0,
                        &PTR____CFConstantStringClassReference_110def898,
                        &PTR_s_snapchat_lenses_1130e9b88,&PTR_s_lensId_1130e9bc0,2,0x18,0x1c);
    puRam00000001136bcf88 = puVar1;
  }
  return;
}



/* Entry: 1055e9970; end: 1055e99d7; +[SCLensLensHydrationContext descriptor] */

void FUN_1055e9970(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcf90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4ea10,
                        &PTR____CFConstantStringClassReference_110def8b8,
                        &PTR_s_snapchat_lenses_1130e9b88,&PTR_DAT_1130e9ba0,1,0x10,0x1c);
    puRam00000001136bcf90 = puVar1;
  }
  return;
}



/* Entry: 1055e99d8; end: 1055e9a3f; +[SCLensLensesByIdsRequest descriptor] */

void FUN_1055e99d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcf98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4ea60,
                        &PTR____CFConstantStringClassReference_110def8d8,
                        &PTR_s_snapchat_lenses_1130e9b88,&PTR_DAT_1130e9c60,7,0x38,0x1c);
    puRam00000001136bcf98 = puVar1;
  }
  return;
}



/* Entry: 1055e9a40; end: 1055e9b23; +[SCLensLensesByIdsResponse descriptor] */

void FUN_1055e9a40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcfa0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4eab0,
                        &PTR____CFConstantStringClassReference_110def8f8,
                        &PTR_s_snapchat_lenses_1130e9b88,&PTR_DAT_1130e9c00,3,0x20,0x1c);
    puRam00000001136bcfa0 = puVar1;
  }
  return;
}



/* Entry: 1055e9b24; end: 1055e9b3b;  */

bool FUN_1055e9b24(uint param_1)

{
  return param_1 < 4 || param_1 == 500;
}



/* Entry: 1055e9b3c; end: 1055e9bb7;  */

undefined * FUN_1055e9b3c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bcfb0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110def938,
                        &UNK_10ddb41b0,&UNK_10ddb47c4,0x4b,FUN_1055e9bb8,0);
    do {
      if (puRam00000001136bcfb0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bcfb0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bcfb0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bcfb0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bcfb0;
}



/* Entry: 1055e9bb8; end: 1055e9c27;  */

undefined8 FUN_1055e9bb8(uint param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if ((int)param_1 < 500) {
    if (param_1 < 0x25) {
      return uVar1;
    }
  }
  else if ((int)param_1 < 1000) {
    if ((param_1 - 500 < 0x1d) || (param_1 == 900)) {
      return uVar1;
    }
  }
  else {
    if (param_1 - 1000 < 3) {
      return uVar1;
    }
    if ((param_1 - 3000 < 4) && (param_1 - 3000 != 1)) {
      return uVar1;
    }
    if (param_1 - 2000 < 2) {
      return uVar1;
    }
  }
  return 0;
}



/* Entry: 1055e9c28; end: 1055e9ca3;  */

undefined * FUN_1055e9c28(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bcfb8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110def958,
                        &UNK_10ddb48f0,&UNK_10ddb4b7c,0x32,FUN_1055e9ca4,0);
    do {
      if (puRam00000001136bcfb8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bcfb8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bcfb8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bcfb8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bcfb8;
}



/* Entry: 1055e9ca4; end: 1055e9caf;  */

bool FUN_1055e9ca4(uint param_1)

{
  return param_1 < 0x32;
}



/* Entry: 1055e9cb0; end: 1055e9d2b;  */

undefined * FUN_1055e9cb0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bcfc0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110def978,
                        &UNK_10ddb4c44,&UNK_10ddb4efc,0x2d,FUN_1055e9d2c,0);
    do {
      if (puRam00000001136bcfc0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bcfc0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bcfc0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bcfc0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bcfc0;
}



/* Entry: 1055e9d2c; end: 1055e9d37;  */

bool FUN_1055e9d2c(uint param_1)

{
  return param_1 < 0x2d;
}



/* Entry: 1055e9d38; end: 1055e9dc7;  */

undefined * FUN_1055e9d38(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bcfc8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110def998,
                        &UNK_10ddb4fb0,&UNK_10ddb5240,0x20,FUN_1055e9dc8,0,&UNK_10ddb52c0);
    do {
      if (puRam00000001136bcfc8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bcfc8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bcfc8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bcfc8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bcfc8;
}



/* Entry: 1055e9dc8; end: 1055e9dd3;  */

bool FUN_1055e9dc8(uint param_1)

{
  return param_1 < 0x20;
}



/* Entry: 1055e9dd4; end: 1055e9e4f;  */

undefined * FUN_1055e9dd4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bcfd0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110def9b8,
                        &UNK_10ddb52c7,&UNK_10ddb52e8,5,FUN_1055e9e50,0);
    do {
      if (puRam00000001136bcfd0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bcfd0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bcfd0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bcfd0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bcfd0;
}



/* Entry: 1055e9e50; end: 1055e9e5b;  */

bool FUN_1055e9e50(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 1055e9e5c; end: 1055e9ec3; +[SCDHObjectKey descriptor] */

void FUN_1055e9e5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcfd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4eb50,
                        &PTR____CFConstantStringClassReference_110def9d8,&PTR_DAT_1130e9d50,
                        &PTR_s_kind_1130e9da8,2,0x10,0x1c);
    puRam00000001136bcfd8 = puVar1;
  }
  return;
}



/* Entry: 1055e9ec4; end: 1055e9f2b; +[SCDHDatasetKey descriptor] */

void FUN_1055e9ec4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcfe0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4eba0,
                        &PTR____CFConstantStringClassReference_110def9f8,&PTR_DAT_1130e9d50,
                        &PTR_DAT_1130e9de8,2,0x10,0x1c);
    puRam00000001136bcfe0 = puVar1;
  }
  return;
}



/* Entry: 1055e9f2c; end: 1055e9f93; +[SCDHDomainObject descriptor] */

void FUN_1055e9f2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcfe8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4ebf0,
                        &PTR____CFConstantStringClassReference_110defa18,&PTR_DAT_1130e9d50,
                        &PTR_s_kind_1130ea0e8,4,0x20,0x1c);
    puRam00000001136bcfe8 = puVar1;
  }
  return;
}



/* Entry: 1055e9f94; end: 1055e9ffb; +[SCDHObjectMetadata descriptor] */

void FUN_1055e9f94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcff0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4ec40,
                        &PTR____CFConstantStringClassReference_110defa38,&PTR_DAT_1130e9d50,
                        &PTR_DAT_1130ea568,10,0x48,0x1c);
    puRam00000001136bcff0 = puVar1;
  }
  return;
}



/* Entry: 1055e9ffc; end: 1055ea063; +[SCDHDataset descriptor] */

void FUN_1055e9ffc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcff8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4ec90,
                        &PTR____CFConstantStringClassReference_110defa58,&PTR_DAT_1130e9d50,
                        &PTR_DAT_1130ea028,3,0x18,0x1c);
    puRam00000001136bcff8 = puVar1;
  }
  return;
}



/* Entry: 1055ea064; end: 1055ea0cb; +[SCDHDatasetReference descriptor] */

void FUN_1055ea064(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd000 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4ece0,
                        &PTR____CFConstantStringClassReference_110defa78,&PTR_DAT_1130e9d50,
                        &PTR_DAT_1130e9e28,2,0xc,0x1c);
    puRam00000001136bd000 = puVar1;
  }
  return;
}



/* Entry: 1055ea0cc; end: 1055ea133; +[SCDHDatasetMetadata descriptor] */

void FUN_1055ea0cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd008 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4ed30,
                        &PTR____CFConstantStringClassReference_110defa98,&PTR_DAT_1130e9d50,
                        &PTR_DAT_1130ea6a8,0xb,0x48,0x1c);
    puRam00000001136bd008 = puVar1;
  }
  return;
}



/* Entry: 1055ea134; end: 1055ea19b; +[SCDHTrackingData descriptor] */

void FUN_1055ea134(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd010 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4ed80,
                        &PTR____CFConstantStringClassReference_110defab8,&PTR_DAT_1130e9d50,
                        &PTR_DAT_1130ea168,4,0x28,0x1c);
    puRam00000001136bd010 = puVar1;
  }
  return;
}



/* Entry: 1055ea19c; end: 1055ea203; +[SCDHAuthority descriptor] */

void FUN_1055ea19c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd018 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4edd0,
                        &PTR____CFConstantStringClassReference_110defad8,&PTR_DAT_1130e9d50,
                        &PTR_s_service_1130ea1e8,4,0x20,0x1c);
    puRam00000001136bd018 = puVar1;
  }
  return;
}



/* Entry: 1055ea204; end: 1055ea26b; +[SCDHAuditRecord descriptor] */

void FUN_1055ea204(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd020 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4ee20,
                        &PTR____CFConstantStringClassReference_110defaf8,&PTR_DAT_1130e9d50,
                        &PTR_s_snapshot_1130e9e68,2,0x18,0x1c);
    puRam00000001136bd020 = puVar1;
  }
  return;
}



/* Entry: 1055ea26c; end: 1055ea2d3; +[SCDHObjectDiff descriptor] */

void FUN_1055ea26c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd028 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4ee70,
                        &PTR____CFConstantStringClassReference_110defb18,&PTR_DAT_1130e9d50,
                        &PTR_DAT_1130e9d68,1,0x10,0x1c);
    puRam00000001136bd028 = puVar1;
  }
  return;
}



/* Entry: 1055ea2d4; end: 1055ea33b; +[SCDHFieldDiff descriptor] */

void FUN_1055ea2d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd030 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4eec0,
                        &PTR____CFConstantStringClassReference_110defb38,&PTR_DAT_1130e9d50,
                        &PTR_DAT_1130ea088,3,0x20,0x1c);
    puRam00000001136bd030 = puVar1;
  }
  return;
}



/* Entry: 1055ea33c; end: 1055ea3c7; +[SCDHDatasetParameter descriptor] */

undefined * FUN_1055ea33c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd038 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4f0a0,
                        &PTR____CFConstantStringClassReference_110defb58,&PTR_DAT_1130e9d50,
                        &PTR_DAT_1130ea468,8,0x38,0x1c);
    func_0x00010c229040();
    puRam00000001136bd038 = puVar1;
  }
  return puRam00000001136bd038;
}



/* Entry: 1055ea3c8; end: 1055ea44b; +[SCDHDatasetParameter_StringList descriptor] */

undefined * FUN_1055ea3c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd040 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4f0c8,
                        &PTR____CFConstantStringClassReference_110defb78,&PTR_DAT_1130e9d50,
                        &PTR_s_valuesArray_1130e9d88,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136bd040 = puVar1;
  }
  return puRam00000001136bd040;
}



/* Entry: 1055ea44c; end: 1055ea4b3; +[SCDHSearchOptions descriptor] */

void FUN_1055ea44c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd048 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4f0f0,
                        &PTR____CFConstantStringClassReference_110defb98,&PTR_DAT_1130e9d50,
                        &PTR_s_limit_1130ea388,7,0x30,0x1c);
    puRam00000001136bd048 = puVar1;
  }
  return;
}



/* Entry: 1055ea4b4; end: 1055ea537; +[SCDHSearchOptions_SortField descriptor] */

undefined * FUN_1055ea4b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd050 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4f118,
                        &PTR____CFConstantStringClassReference_110defbb8,&PTR_DAT_1130e9d50,
                        &PTR_DAT_1130e9ea8,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136bd050 = puVar1;
  }
  return puRam00000001136bd050;
}



/* Entry: 1055ea538; end: 1055ea5bb; +[SCDHSearchOptions_Bool descriptor] */

undefined * FUN_1055ea538(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd058 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4f140,
                        &PTR____CFConstantStringClassReference_110defbd8,&PTR_DAT_1130e9d50,
                        &PTR_DAT_1130ea268,4,0x28,0x1c);
    func_0x00010c228780();
    puRam00000001136bd058 = puVar1;
  }
  return puRam00000001136bd058;
}



/* Entry: 1055ea5bc; end: 1055ea657; +[SCDHSearchOptions_Clause descriptor] */

undefined * FUN_1055ea5bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd060 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4f168,
                        &PTR____CFConstantStringClassReference_110defbf8,&PTR_DAT_1130e9d50,
                        &PTR_DAT_1130ea2e8,5,0x30,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112a4f0f0);
    puRam00000001136bd060 = puVar1;
  }
  return puRam00000001136bd060;
}



/* Entry: 1055ea658; end: 1055ea6db; +[SCDHSearchOptions_Term descriptor] */

undefined * FUN_1055ea658(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd068 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4f190,
                        &PTR____CFConstantStringClassReference_110defc18,&PTR_DAT_1130e9d50,
                        &PTR_DAT_1130e9ee8,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136bd068 = puVar1;
  }
  return puRam00000001136bd068;
}



/* Entry: 1055ea6dc; end: 1055ea75f; +[SCDHSearchOptions_Terms descriptor] */

undefined * FUN_1055ea6dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd070 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4f1b8,
                        &PTR____CFConstantStringClassReference_110defc38,&PTR_DAT_1130e9d50,
                        &PTR_DAT_1130e9f28,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136bd070 = puVar1;
  }
  return puRam00000001136bd070;
}



/* Entry: 1055ea760; end: 1055ea7e3; +[SCDHSearchOptions_Range descriptor] */

undefined * FUN_1055ea760(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd078 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4f1e0,
                        &PTR____CFConstantStringClassReference_110defc58,&PTR_DAT_1130e9d50,
                        &PTR_DAT_1130e9f68,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136bd078 = puVar1;
  }
  return puRam00000001136bd078;
}



/* Entry: 1055ea7e4; end: 1055ea867; +[SCDHSearchOptions_Wildcard descriptor] */

undefined * FUN_1055ea7e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd080 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4f208,
                        &PTR____CFConstantStringClassReference_110defc78,&PTR_DAT_1130e9d50,
                        &PTR_DAT_1130e9fa8,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136bd080 = puVar1;
  }
  return puRam00000001136bd080;
}



/* Entry: 1055ea868; end: 1055ea8eb; +[SCDHSearchOptions_RangeValue descriptor] */

undefined * FUN_1055ea868(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd088 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4f230,
                        &PTR____CFConstantStringClassReference_110defc98,&PTR_DAT_1130e9d50,
                        &PTR_DAT_1130e9fe8,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136bd088 = puVar1;
  }
  return puRam00000001136bd088;
}



/* Entry: 1055ea8ec; end: 1055ea953; +[SCGetUnlocksResponse descriptor] */

void FUN_1055ea8ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd090 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4f2d0,
                        &PTR____CFConstantStringClassReference_110defcb8,&PTR_DAT_1130ea810,
                        &PTR_DAT_1130ea828,3,0x20,0x1c);
    puRam00000001136bd090 = puVar1;
  }
  return;
}



/* Entry: 1055ea954; end: 1055ea9cf; +[SCGetUnlocksResponse_GroupedUnlocks descriptor] */

undefined * FUN_1055ea954(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd098 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4f320,
                        &PTR____CFConstantStringClassReference_110defcd8,&PTR_DAT_1130ea810,
                        &PTR_s_group_1130ea888,3,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001136bd098 = puVar1;
  }
  return puRam00000001136bd098;
}



/* Entry: 1055ea9d0; end: 1055eaa5b; +[SCUnlockMetaResponse descriptor] */

undefined * FUN_1055ea9d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd0a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4f370,
                        &PTR____CFConstantStringClassReference_110defcf8,&PTR_DAT_1130ea810,
                        &PTR_s_id_p_1130ea8e8,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136bd0a0 = puVar1;
  }
  return puRam00000001136bd0a0;
}



/* Entry: 1055eaa5c; end: 1055eaae7; +[SCMetadataResponse descriptor] */

undefined * FUN_1055eaa5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd0a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4f410,
                        &PTR____CFConstantStringClassReference_110defd18,&PTR_DAT_1130ea950,
                        &PTR_DAT_1130ea968,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136bd0a8 = puVar1;
  }
  return puRam00000001136bd0a8;
}



/* Entry: 1055eaae8; end: 1055eab73; +[SCUnlockResponse descriptor] */

undefined * FUN_1055eaae8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd0b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4f4b0,
                        &PTR____CFConstantStringClassReference_110defd38,&PTR_DAT_1130ea9d0,
                        &PTR_DAT_1130ea9e8,4,0x28,0x1c);
    func_0x00010c229040();
    puRam00000001136bd0b0 = puVar1;
  }
  return puRam00000001136bd0b0;
}



/* Entry: 1055eab74; end: 1055eabef; +[SCLGGeofilterResponse descriptor] */

undefined * FUN_1055eab74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd0b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4f550,
                        &PTR____CFConstantStringClassReference_110defd58,&PTR_DAT_1130eaa68,
                        &PTR_DAT_1130eb080,0x45,0x1c8,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bd0b8 = puVar1;
  }
  return puRam00000001136bd0b8;
}



/* Entry: 1055eabf0; end: 1055eac6b; +[SCLGGeofilterResponse_Tooltip descriptor] */

undefined * FUN_1055eabf0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd0c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4f5a0,
                        &PTR____CFConstantStringClassReference_110defd78,&PTR_DAT_1130eaa68,
                        &PTR_s_message_1130eab00,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136bd0c0 = puVar1;
  }
  return puRam00000001136bd0c0;
}



/* Entry: 1055eac6c; end: 1055eace7; +[SCLGGeofilterResponse_ScannableData descriptor] */

undefined * FUN_1055eac6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd0c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4f5f0,
                        &PTR____CFConstantStringClassReference_110defd98,&PTR_DAT_1130eaa68,
                        &PTR_s_data_p_1130eaa80,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136bd0c8 = puVar1;
  }
  return puRam00000001136bd0c8;
}



/* Entry: 1055eace8; end: 1055ead63; +[SCLGGeofilterResponse_GeofilterMusicTrackMetadata descriptor] */

undefined * FUN_1055eace8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd0d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4f640,
                        &PTR____CFConstantStringClassReference_110defdb8,&PTR_DAT_1130eaa68,
                        &PTR_s_trackId_1130eab40,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136bd0d0 = puVar1;
  }
  return puRam00000001136bd0d0;
}



/* Entry: 1055ead64; end: 1055eaddf; +[SCLGGeofilterResponse_CarouselGroup descriptor] */

undefined * FUN_1055ead64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd0d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4f690,
                        &PTR____CFConstantStringClassReference_110defdd8,&PTR_DAT_1130eaa68,
                        &PTR_DAT_1130eab80,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136bd0d8 = puVar1;
  }
  return puRam00000001136bd0d8;
}



/* Entry: 1055eade0; end: 1055eae6b; +[SCLGGeofilterResponse_Audio descriptor] */

undefined * FUN_1055eade0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd0e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4f6e0,
                        &PTR____CFConstantStringClassReference_110defdf8,&PTR_DAT_1130eaa68,
                        &PTR_s_URL_1130eabc0,2,0x10,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112a4f550);
    puRam00000001136bd0e0 = puVar1;
  }
  return puRam00000001136bd0e0;
}



/* Entry: 1055eae6c; end: 1055eaee7; +[SCLGGeofilterResponse_AutoStacking descriptor] */

undefined * FUN_1055eae6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd0e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4f730,
                        &PTR____CFConstantStringClassReference_110defe18,&PTR_DAT_1130eaa68,
                        &PTR_DAT_1130eaaa0,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136bd0e8 = puVar1;
  }
  return puRam00000001136bd0e8;
}



/* Entry: 1055eaee8; end: 1055eaf63; +[SCLGGeofilterResponse_GeofilterPrompt descriptor] */

undefined * FUN_1055eaee8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd0f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4f780,
                        &PTR____CFConstantStringClassReference_110defe38,&PTR_DAT_1130eaa68,
                        &PTR_s_text_1130ead80,5,0x30,0x1c);
    func_0x00010c228780();
    puRam00000001136bd0f0 = puVar1;
  }
  return puRam00000001136bd0f0;
}



/* Entry: 1055eaf64; end: 1055eafdf; +[SCLGGeofilterResponse_UnlockableContext descriptor] */

undefined * FUN_1055eaf64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd0f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4f7d0,
                        &PTR____CFConstantStringClassReference_110defe58,&PTR_DAT_1130eaa68,
                        &PTR_DAT_1130eaec0,7,0x40,0x1c);
    func_0x00010c228780();
    puRam00000001136bd0f8 = puVar1;
  }
  return puRam00000001136bd0f8;
}



/* Entry: 1055eafe0; end: 1055eb05b; +[SCLGGeofilterResponse_SponsoredSlugStyle descriptor] */

undefined * FUN_1055eafe0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd100 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4f988,
                        &PTR____CFConstantStringClassReference_110defe78,&PTR_DAT_1130eaa68,
                        &PTR_s_font_1130eae20,5,0x30,0x1c);
    func_0x00010c228780();
    puRam00000001136bd100 = puVar1;
  }
  return puRam00000001136bd100;
}



/* Entry: 1055eb05c; end: 1055eb0df; +[SCLGGeofilterResponse_SponsoredSlugStyle_StrPoint descriptor] */

undefined * FUN_1055eb05c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd108 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4f9b0,
                        &PTR____CFConstantStringClassReference_110defe98,&PTR_DAT_1130eaa68,
                        &PTR_DAT_1130eac00,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136bd108 = puVar1;
  }
  return puRam00000001136bd108;
}



/* Entry: 1055eb0e0; end: 1055eb15b; +[SCLGGeofilterResponse_DebugInfo descriptor] */

undefined * FUN_1055eb0e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd110 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4f9d8,
                        &PTR____CFConstantStringClassReference_110defeb8,&PTR_DAT_1130eaa68,
                        &PTR_DAT_1130eaac0,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136bd110 = puVar1;
  }
  return puRam00000001136bd110;
}



/* Entry: 1055eb15c; end: 1055eb1df; +[SCLGGeofilterResponse_DebugInfo_ScheduledLensesDebugInfo descriptor] */

undefined * FUN_1055eb15c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd118 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4fa00,
                        &PTR____CFConstantStringClassReference_110defed8,&PTR_DAT_1130eaa68,
                        &PTR_DAT_1130eaae0,1,4,0x1c);
    func_0x00010c228780();
    puRam00000001136bd118 = puVar1;
  }
  return puRam00000001136bd118;
}



/* Entry: 1055eb1e0; end: 1055eb25b; +[SCLGGeofilterResponse_DynamicContentSetting descriptor] */

undefined * FUN_1055eb1e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd120 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4f8c0,
                        &PTR____CFConstantStringClassReference_110defef8,&PTR_DAT_1130eaa68,
                        &PTR_DAT_1130eafa0,7,0x30,0x1c);
    func_0x00010c228780();
    puRam00000001136bd120 = puVar1;
  }
  return puRam00000001136bd120;
}



/* Entry: 1055eb25c; end: 1055eb2d7; +[SCLGGeofilterResponse_DynamicContextProperties descriptor] */

undefined * FUN_1055eb25c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd128 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4fa28,
                        &PTR____CFConstantStringClassReference_110deff18,&PTR_DAT_1130eaa68,
                        &PTR_DAT_1130eac40,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136bd128 = puVar1;
  }
  return puRam00000001136bd128;
}



/* Entry: 1055eb2d8; end: 1055eb35b; +[SCLGGeofilterResponse_DynamicContextProperties_TimeComponent descriptor] */

undefined * FUN_1055eb2d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd130 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4fa50,
                        &PTR____CFConstantStringClassReference_110deff38,&PTR_DAT_1130eaa68,
                        &PTR_DAT_1130eacc0,3,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001136bd130 = puVar1;
  }
  return puRam00000001136bd130;
}



/* Entry: 1055eb35c; end: 1055eb3d7; +[SCLGGeofilterResponse_GeofilterImageMetadata descriptor] */

undefined * FUN_1055eb35c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd138 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4fa78,
                        &PTR____CFConstantStringClassReference_110deff58,&PTR_DAT_1130eaa68,
                        &PTR_DAT_1130ead20,3,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001136bd138 = puVar1;
  }
  return puRam00000001136bd138;
}



/* Entry: 1055eb3d8; end: 1055eb45b; +[SCLGGeofilterResponse_GeofilterImageMetadata_Size descriptor] */

undefined * FUN_1055eb3d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd140 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4faa0,
                        &PTR____CFConstantStringClassReference_110deff78,&PTR_DAT_1130eaa68,
                        &PTR_s_width_1130eac80,2,0xc,0x1c);
    func_0x00010c228780();
    puRam00000001136bd140 = puVar1;
  }
  return puRam00000001136bd140;
}



/* Entry: 1055eb45c; end: 1055eb4c3; +[SCLGGeofilterMarkup descriptor] */

void FUN_1055eb45c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd148 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4fb40,
                        &PTR____CFConstantStringClassReference_110deff98,&PTR_DAT_1130eb920,
                        &PTR_DAT_1130ebb38,7,0x40,0x1c);
    puRam00000001136bd148 = puVar1;
  }
  return;
}



/* Entry: 1055eb4c4; end: 1055eb53f; +[SCLGGeofilterMarkup_LocalDateTimeInterval descriptor] */

undefined * FUN_1055eb4c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd150 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4fb90,
                        &PTR____CFConstantStringClassReference_110deffb8,&PTR_DAT_1130eb920,
                        &PTR_s_start_1130eb938,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136bd150 = puVar1;
  }
  return puRam00000001136bd150;
}



/* Entry: 1055eb540; end: 1055eb5bb; +[SCLGGeofilterMarkup_GeofilterLayoutParameters descriptor] */

undefined * FUN_1055eb540(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd158 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4fbe0,
                        &PTR____CFConstantStringClassReference_110deffd8,&PTR_DAT_1130eb920,
                        &PTR_DAT_1130eba78,6,0x1c,0x1c);
    func_0x00010c228780();
    puRam00000001136bd158 = puVar1;
  }
  return puRam00000001136bd158;
}



/* Entry: 1055eb5bc; end: 1055eb637; +[SCLGGeofilterMarkup_CompanionCreativeProperties descriptor] */

undefined * FUN_1055eb5bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd160 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4fc58,
                        &PTR____CFConstantStringClassReference_110defff8,&PTR_DAT_1130eb920,
                        &PTR_DAT_1130eb978,4,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136bd160 = puVar1;
  }
  return puRam00000001136bd160;
}



/* Entry: 1055eb638; end: 1055eb6bb; +[SCLGGeofilterMarkup_CompanionCreativeProperties_RatingStickerProperties descriptor] */

undefined * FUN_1055eb638(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd168 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4fc80,
                        &PTR____CFConstantStringClassReference_110df0018,&PTR_DAT_1130eb920,
                        &PTR_DAT_1130eb9f8,4,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001136bd168 = puVar1;
  }
  return puRam00000001136bd168;
}



/* Entry: 1055eb6bc; end: 1055eb723; +[SCLGGeofilterDisplayParameters descriptor] */

void FUN_1055eb6bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd170 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4fd20,
                        &PTR____CFConstantStringClassReference_110df0038,&PTR_DAT_1130ebc18,
                        &PTR_DAT_1130ebc90,0x10,0x70,0x1c);
    puRam00000001136bd170 = puVar1;
  }
  return;
}



/* Entry: 1055eb724; end: 1055eb79f; +[SCLGGeofilterDisplayParameters_TextShadowParameters descriptor] */

undefined * FUN_1055eb724(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd178 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4fd70,
                        &PTR____CFConstantStringClassReference_110df0058,&PTR_DAT_1130ebc18,
                        &PTR_DAT_1130ebc30,3,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136bd178 = puVar1;
  }
  return puRam00000001136bd178;
}



/* Entry: 1055eb7a0; end: 1055eb807; +[SCLGIntegerPoint descriptor] */

void FUN_1055eb7a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd180 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4fe10,
                        &PTR____CFConstantStringClassReference_110df0078,&PTR_DAT_1130ebe90,
                        &PTR_DAT_1130ebea8,2,0xc,0x1c);
    puRam00000001136bd180 = puVar1;
  }
  return;
}



/* Entry: 1055eb808; end: 1055eb86f; +[SCLGSponsoredSlugPosAndText descriptor] */

void FUN_1055eb808(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd188 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4feb0,
                        &PTR____CFConstantStringClassReference_110df0098,&PTR_DAT_1130ebee8,
                        &PTR_DAT_1130ebf80,0xb,0x58,0x1c);
    puRam00000001136bd188 = puVar1;
  }
  return;
}



/* Entry: 1055eb870; end: 1055eb8eb; +[SCLGSponsoredSlugPosAndText_StrRect descriptor] */

undefined * FUN_1055eb870(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd190 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4ff00,
                        &PTR____CFConstantStringClassReference_110df00b8,&PTR_DAT_1130ebee8,
                        &PTR_DAT_1130ebf00,4,0x28,0x1c);
    func_0x00010c228780();
    puRam00000001136bd190 = puVar1;
  }
  return puRam00000001136bd190;
}



/* Entry: 1055eb8ec; end: 1055eb967; +[SCLGStickerPack descriptor] */

undefined * FUN_1055eb8ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd198 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4ffa0,
                        &PTR____CFConstantStringClassReference_110df00d8,&PTR_DAT_1130ec0e0,
                        &PTR_DAT_1130ec158,0x14,0x90,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bd198 = puVar1;
  }
  return puRam00000001136bd198;
}



/* Entry: 1055eb968; end: 1055eb9e3; +[SCLGStickerPack_StickerPackContextualMetadata descriptor] */

undefined * FUN_1055eb968(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd1a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a4fff0,
                        &PTR____CFConstantStringClassReference_110df00f8,&PTR_DAT_1130ec0e0,
                        &PTR_DAT_1130ec0f8,3,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136bd1a0 = puVar1;
  }
  return puRam00000001136bd1a0;
}



/* Entry: 1055eb9e4; end: 1055eba4b; +[SCLGGeofence descriptor] */

void FUN_1055eb9e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd1a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a50090,
                        &PTR____CFConstantStringClassReference_110df0118,&PTR_DAT_1130ec3d8,
                        &PTR_s_id_p_1130ec3f0,2,0x18,0x1c);
    puRam00000001136bd1a8 = puVar1;
  }
  return;
}



/* Entry: 1055eba4c; end: 1055ebac7; +[SCLGGeofence_Coordinate descriptor] */

undefined * FUN_1055eba4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd1b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a500e0,
                        &PTR____CFConstantStringClassReference_110df0138,&PTR_DAT_1130ec3d8,
                        &PTR_s_lat_1130ec430,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136bd1b0 = puVar1;
  }
  return puRam00000001136bd1b0;
}



/* Entry: 1055ebac8; end: 1055ebb43; +[SCLGUnlockableTrackInfo descriptor] */

undefined * FUN_1055ebac8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd1b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a50180,
                        &PTR____CFConstantStringClassReference_110df0158,&PTR_DAT_1130ec470,
                        &PTR_DAT_1130ec488,0xe,0x70,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bd1b8 = puVar1;
  }
  return puRam00000001136bd1b8;
}



/* Entry: 1055ebb44; end: 1055ebbab; +[SCLGArSegmentationFilter descriptor] */

void FUN_1055ebb44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd1c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a50220,
                        &PTR____CFConstantStringClassReference_110df0178,&PTR_DAT_1130ec648,
                        &PTR_DAT_1130ec660,3,0x18,0x1c);
    puRam00000001136bd1c0 = puVar1;
  }
  return;
}



/* Entry: 1055ebbac; end: 1055ebc37; +[SCLGArSegmentationFilter_ContextFilterSkyItem descriptor] */

undefined * FUN_1055ebbac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd1c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a50270,
                        &PTR____CFConstantStringClassReference_110df0198,&PTR_DAT_1130ec648,
                        &PTR_s_uuid_1130ec6c0,7,0x38,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112a50220);
    puRam00000001136bd1c8 = puVar1;
  }
  return puRam00000001136bd1c8;
}



/* Entry: 1055ebc38; end: 1055ebcc3; +[SCLGArSegmentationFilter_PurikuraPatternItem descriptor] */

undefined * FUN_1055ebc38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd1d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a502c0,
                        &PTR____CFConstantStringClassReference_110df01b8,&PTR_DAT_1130ec648,
                        &PTR_s_uuid_1130ec7a0,9,0x38,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112a50220);
    puRam00000001136bd1d0 = puVar1;
  }
  return puRam00000001136bd1d0;
}



/* Entry: 1055ebcc4; end: 1055ebd2b; +[SCLGAttachment descriptor] */

void FUN_1055ebcc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd1d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a50360,
                        &PTR____CFConstantStringClassReference_110dcb6d8,&PTR_DAT_1130ec8c0,
                        &PTR_DAT_1130ec9f8,7,0x40,0x1c);
    puRam00000001136bd1d8 = puVar1;
  }
  return;
}



/* Entry: 1055ebd2c; end: 1055ebdb7; +[SCLGAttachment_AppInstallAttachment descriptor] */

undefined * FUN_1055ebd2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd1e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a503b0,
                        &PTR____CFConstantStringClassReference_110df01d8,&PTR_DAT_1130ec8c0,
                        &PTR_s_appName_1130ec978,4,0x28,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112a50360);
    puRam00000001136bd1e0 = puVar1;
  }
  return puRam00000001136bd1e0;
}



/* Entry: 1055ebdb8; end: 1055ebe43; +[SCLGAttachment_WebViewAttachment descriptor] */

undefined * FUN_1055ebdb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd1e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a50400,
                        &PTR____CFConstantStringClassReference_110df01f8,&PTR_DAT_1130ec8c0,
                        &PTR_DAT_1130ec8d8,2,0x10,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112a50360);
    puRam00000001136bd1e8 = puVar1;
  }
  return puRam00000001136bd1e8;
}



/* Entry: 1055ebe44; end: 1055ebecf; +[SCLGAttachment_RichStoryDeepLinkAttachment descriptor] */

undefined * FUN_1055ebe44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd1f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a50450,
                        &PTR____CFConstantStringClassReference_110df0218,&PTR_DAT_1130ec8c0,
                        &PTR_s_uri_1130ecad8,0xb,0x58,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112a50360);
    puRam00000001136bd1f0 = puVar1;
  }
  return puRam00000001136bd1f0;
}



/* Entry: 1055ebed0; end: 1055ebf5b; +[SCLGAttachment_LongFormVideoAttachment descriptor] */

undefined * FUN_1055ebed0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd1f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a504a0,
                        &PTR____CFConstantStringClassReference_110df0238,&PTR_DAT_1130ec8c0,
                        &PTR_DAT_1130ec918,3,0x18,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112a50360);
    puRam00000001136bd1f8 = puVar1;
  }
  return puRam00000001136bd1f8;
}



/* Entry: 1055ebf5c; end: 1055ebfc3; +[SCLGCaptionStyle descriptor] */

void FUN_1055ebf5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd200 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a50540,
                        &PTR____CFConstantStringClassReference_110df0258,&PTR_DAT_1130ecc38,
                        &PTR_DAT_1130ecc50,8,0x38,0x1c);
    puRam00000001136bd200 = puVar1;
  }
  return;
}



/* Entry: 1055ebfc4; end: 1055ec02b; +[SCLGBackgroundStyle descriptor] */

void FUN_1055ebfc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd208 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a505e0,
                        &PTR____CFConstantStringClassReference_110df0278,&PTR_DAT_1130ecd50,
                        &PTR_DAT_1130ecd68,4,0x20,0x1c);
    puRam00000001136bd208 = puVar1;
  }
  return;
}



/* Entry: 1055ec02c; end: 1055ec0a7; +[SCLGFontStyle descriptor] */

undefined * FUN_1055ec02c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd210 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a50680,
                        &PTR____CFConstantStringClassReference_110df0298,&PTR_DAT_1130ecde8,
                        &PTR_DAT_1130ece80,0x11,0x90,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bd210 = puVar1;
  }
  return puRam00000001136bd210;
}



/* Entry: 1055ec0a8; end: 1055ec123; +[SCLGFontStyle_TextPadding descriptor] */

undefined * FUN_1055ec0a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd218 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a506d0,
                        &PTR____CFConstantStringClassReference_110df02b8,&PTR_DAT_1130ecde8,
                        &PTR_s_top_1130ece00,4,0x28,0x1c);
    func_0x00010c228780();
    puRam00000001136bd218 = puVar1;
  }
  return puRam00000001136bd218;
}


