/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10792b384; end: 10792b38b; -[SCNMapSdkResourceRequesterResource priority] */

undefined8 FUN_10792b384(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10792b3c4; end: 10792b3cb; -[SCNMapSdkResourceRequesterResource minimumUpdateInterval] */

undefined8 FUN_10792b3c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10792b478; end: 10792b4cf; -[SCNMapSdkResourceRequesterResourceRequester initWithCpp:] */

undefined1 * FUN_10792b478(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f8e88;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x0001072a5e2c((undefined1 *)((long)puVar1 + 0x18),param_3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10792b8e8; end: 10792b94f;  */

void FUN_10792b8e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10792bdec; end: 10792be8b;  */

void FUN_10792bdec(undefined4 *param_1,long param_2)

{
  undefined4 auStack_60 [2];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  if (param_2 == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  else {
    func_0x00010792a98c(auStack_60,param_2);
    *param_1 = auStack_60[0];
    *(undefined8 *)(param_1 + 4) = uStack_50;
    *(undefined8 *)(param_1 + 2) = uStack_58;
    *(undefined8 *)(param_1 + 6) = uStack_48;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    *(undefined8 *)(param_1 + 10) = uStack_38;
    *(undefined8 *)(param_1 + 8) = uStack_40;
    *(undefined1 *)(param_1 + 0xc) = 1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_58);
  }
  func_0x00010792bfa4();
  return;
}



/* Entry: 10792c164; end: 10792c16b; -[SCNMapSdkResourceRequesterResponse notModified] */

undefined1 FUN_10792c164(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10792c1e0; end: 10792c2cb;  */

void FUN_10792c1e0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c28fa40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(&uStack_58);
  uVar2 = param_2;
  func_0x00010c0fcbe0();
  uVar3 = param_2;
  func_0x00010c2be880();
  uVar4 = param_2;
  func_0x00010c2beba0();
  func_0x00010c2bef20();
  param_1[1] = uStack_50;
  *param_1 = uStack_58;
  param_1[2] = uStack_48;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_58 = 0;
  *(char *)(param_1 + 3) = (char)uVar2;
  *(int *)((long)param_1 + 0x1c) = (int)uVar3;
  *(int *)(param_1 + 4) = (int)uVar4;
  *(char *)((long)param_1 + 0x24) = (char)param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_58);
  _objc_release(uVar1);
  func_0x00010792c2cc();
  return;
}



/* Entry: 10792c3cc; end: 10792c3d7; -[SCNMapSdkResourceRequesterTileData .cxx_destruct] */

void FUN_10792c3cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10792c5fc; end: 10792c63b;  */

void FUN_10792c5fc(void)

{
  func_0x00010792c7b8();
  return;
}



/* Entry: 10792c878; end: 10792c8f7; -[SCNBitmojiFetcherBitmojiUriParser initWithCpp:] */

undefined1 * FUN_10792c878(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar4 = &uStack_40;
  puStack_38 = PTR_PTR_1126f8eb0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar4 != (undefined8 *)0x0) {
    uVar6 = param_3[1];
    uVar5 = *param_3;
    if (param_3[1] != 0) {
      plVar1 = (long *)(param_3[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_28 = *(undefined8 *)((long)puVar4 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar4 + 0x18);
    *(undefined8 *)((long)puVar4 + 0x20) = uVar6;
    *(undefined8 *)((long)puVar4 + 0x18) = uVar5;
    func_0x00010792ca9c(&uStack_30);
  }
  return (undefined1 *)puVar4;
}



/* Entry: 10792cd2c; end: 10792cd6f; -[SCNBitmojiFetcherCallback .cxx_construct] */

undefined8 * FUN_10792cd2c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010792ce7c();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10792d3b8; end: 10792d3db;  */

void FUN_10792d3b8(undefined8 param_1)

{
  undefined1 uStack_11;
  
  func_0x00010792d4ec(&uStack_11,param_1);
  return;
}



/* Entry: 10792d5a4; end: 10792d5b7;  */

void FUN_10792d5a4(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10792d6fc; end: 10792d79f; -[SCNMapCommonAuthContext initWithHeaders:] */

undefined1 * FUN_10792d6fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f8ec0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10792d9e8; end: 10792da3b; -[SCNMapCommonAuthContextFetchedCallback .cxx_destruct] */

void FUN_10792d9e8(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1109ebe68;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x000104bff90c((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 10792ddb4; end: 10792ddc7;  */

void FUN_10792ddb4(void)

{
  func_0x00010792df1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10792df64; end: 10792dfcf;  */

long FUN_10792df64(long param_1)

{
  char cVar1;
  bool bVar2;
  
  if (lRam0000000113726b68 == 0) {
    func_0x000107930ad8();
    func_0x000107930ad0();
    do {
      if (lRam0000000113726b68 != 0) {
        func_0x000107930ab8();
        return lRam0000000113726b68;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113726b68,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        lRam0000000113726b68 = param_1;
      }
    } while (cVar1 != '\0');
  }
  return lRam0000000113726b68;
}



/* Entry: 10792e12c; end: 10792e193;  */

long FUN_10792e12c(long param_1)

{
  char cVar1;
  bool bVar2;
  
  if (lRam0000000113726b88 == 0) {
    func_0x000107930ad8();
    func_0x000107930a8c();
    do {
      if (lRam0000000113726b88 != 0) {
        func_0x000107930ab8();
        return lRam0000000113726b88;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113726b88,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        lRam0000000113726b88 = param_1;
      }
    } while (cVar1 != '\0');
  }
  return lRam0000000113726b88;
}



/* Entry: 10792e2ec; end: 10792e357;  */

long FUN_10792e2ec(long param_1)

{
  char cVar1;
  bool bVar2;
  
  if (lRam0000000113726ba8 == 0) {
    func_0x000107930ad8();
    func_0x000107930ad0();
    do {
      if (lRam0000000113726ba8 != 0) {
        func_0x000107930ab8();
        return lRam0000000113726ba8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113726ba8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        lRam0000000113726ba8 = param_1;
      }
    } while (cVar1 != '\0');
  }
  return lRam0000000113726ba8;
}



/* Entry: 10792e4bc; end: 10792e4ff; +[SMSdkPoint2d descriptor] */

void FUN_10792e4bc(void)

{
  long lVar1;
  
  if (lRam0000000113726bc8 == 0) {
    lVar1 = lRam0000000113726bc8;
    func_0x000107930980();
    func_0x000107930af8();
    lRam0000000113726bc8 = lVar1;
  }
  return;
}



/* Entry: 10792e6f4; end: 10792e73f; +[SMSdkCameraViewport descriptor] */

void FUN_10792e6f4(void)

{
  long lVar1;
  
  if (lRam0000000113726c08 == 0) {
    lVar1 = lRam0000000113726c08;
    func_0x0001079309f4();
    func_0x000107930a10();
    func_0x000107930a44();
    lRam0000000113726c08 = lVar1;
  }
  return;
}



/* Entry: 10792e9a4; end: 10792e9ef; +[SMSdkFeature_Property_Value_KeyValuePair descriptor] */

long FUN_10792e9a4(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726c48;
  if (lRam0000000113726c48 == 0) {
    func_0x000107930980();
    func_0x000107930a20();
    func_0x000107930a70();
  }
  lRam0000000113726c48 = lVar1;
  return lVar1;
}



/* Entry: 10792ec18; end: 10792ec5b; +[SMSdkPlaceInfo descriptor] */

void FUN_10792ec18(void)

{
  long lVar1;
  
  if (lRam0000000113726c88 == 0) {
    lVar1 = lRam0000000113726c88;
    func_0x000107930980();
    func_0x000107930a04();
    lRam0000000113726c88 = lVar1;
  }
  return;
}



/* Entry: 10792eea8; end: 10792ef17; +[SMSdkWorldEffectSet_EffectVariant descriptor] */

long FUN_10792eea8(long param_1)

{
  if (lRam0000000113726cc8 == 0) {
    func_0x0001079309f4();
    func_0x000107930a10();
    func_0x000107930ac0();
    func_0x00010c2289e0();
    func_0x000107930ae4();
    lRam0000000113726cc8 = param_1;
  }
  return lRam0000000113726cc8;
}



/* Entry: 10792f194; end: 10792f1d7; +[SMSdkFriendFeedUpdate descriptor] */

void FUN_10792f194(void)

{
  long lVar1;
  
  if (lRam0000000113726d08 == 0) {
    lVar1 = lRam0000000113726d08;
    func_0x000107930980();
    func_0x000107930a04();
    lRam0000000113726d08 = lVar1;
  }
  return;
}



/* Entry: 10792f3dc; end: 10792f427; +[SMSdkMapBestFriendScore descriptor] */

long FUN_10792f3dc(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726d48;
  if (lRam0000000113726d48 == 0) {
    func_0x000107930980();
    func_0x000107930a2c();
    func_0x000107930b24();
  }
  lRam0000000113726d48 = lVar1;
  return lVar1;
}



/* Entry: 10792f630; end: 10792f687; +[SMSdkLocationSharingPreferences_LiveLocationSharingSettings descriptor] */

long FUN_10792f630(long param_1)

{
  if (lRam0000000113726d88 == 0) {
    func_0x000107930980();
    func_0x000107930a2c();
    func_0x00010c228780();
    lRam0000000113726d88 = param_1;
  }
  return lRam0000000113726d88;
}



/* Entry: 10792f8c0; end: 10792f917; +[SMSdkFriendInfo_Birthday descriptor] */

long FUN_10792f8c0(long param_1)

{
  if (lRam0000000113726dc8 == 0) {
    func_0x000107930980();
    func_0x000107930af8();
    func_0x00010c228780();
    lRam0000000113726dc8 = param_1;
  }
  return lRam0000000113726dc8;
}



/* Entry: 10792fb58; end: 10792fba3; +[SMSdkMapSdkSessionInitializationParams_MapInstanceInfo descriptor] */

long FUN_10792fb58(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726e08;
  if (lRam0000000113726e08 == 0) {
    func_0x000107930980();
    func_0x000107930a2c();
    func_0x000107930b34();
  }
  lRam0000000113726e08 = lVar1;
  return lVar1;
}



/* Entry: 10792fde0; end: 10792fe37; +[SMSdkTriggerParams_State descriptor] */

long FUN_10792fde0(long param_1)

{
  if (lRam0000000113726e48 == 0) {
    func_0x000107930980();
    func_0x000107930a20();
    func_0x00010c228780();
    lRam0000000113726e48 = param_1;
  }
  return lRam0000000113726e48;
}



/* Entry: 1079300ac; end: 107930117; +[SMSdkMapBrowsingContext descriptor] */

long FUN_1079300ac(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726e88;
  if (lRam0000000113726e88 == 0) {
    func_0x0001079309f4();
    func_0x00010bf00dc0();
    func_0x0001079309b4();
  }
  lRam0000000113726e88 = lVar1;
  return lVar1;
}



/* Entry: 107930358; end: 1079303a3; +[SMSdkMapBrowsingContext_HomeSettingsBrowsingContext descriptor] */

long FUN_107930358(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726ec8;
  if (lRam0000000113726ec8 == 0) {
    func_0x000107930980();
    func_0x000107930a04();
    func_0x0001079309d8();
  }
  lRam0000000113726ec8 = lVar1;
  return lVar1;
}



/* Entry: 1079305cc; end: 107930627; +[SMSdkEnableInspectorRequest_InspectorServer descriptor] */

long FUN_1079305cc(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726f08;
  if (lRam0000000113726f08 == 0) {
    func_0x0001079309f4();
    func_0x000107930a10();
    func_0x000107930b0c();
    func_0x000107930b4c();
  }
  lRam0000000113726f08 = lVar1;
  return lVar1;
}



/* Entry: 107930878; end: 1079308d3; +[SMSdkViewportInfo_Locality descriptor] */

long FUN_107930878(long param_1)

{
  if (lRam0000000113726f48 == 0) {
    func_0x000107930980();
    func_0x000107930a20();
    func_0x00010c2289e0();
    func_0x000107930aa0();
    lRam0000000113726f48 = param_1;
  }
  return lRam0000000113726f48;
}



/* Entry: 107930bc4; end: 107930c47;  */

long * FUN_107930bc4(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar1 = param_2;
  if (*(int *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x0001001a5994(param_3,*(int *)(param_1 + 0x10),param_2);
  }
  plVar2 = plVar1;
  if (*(int *)(param_1 + 0x14) != 0) {
    plVar2 = param_3;
    func_0x00010598f43c(param_3,*(int *)(param_1 + 0x14),plVar1);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*param_3 - (long)plVar2 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)plVar2) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        lVar3 = (long)plVar2 + (long)iVar7;
        plVar2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar2 + (long)iVar6);
    }
    _memcpy(plVar2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)plVar2 + (long)(int)uVar4);
  }
  return plVar2;
}



/* Entry: 107930e04; end: 107930fb3;  */

long * FUN_107930e04(long *param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  
  lVar4 = param_1[3];
  plVar2 = param_1;
  for (iVar7 = 0; (int)lVar4 != iVar7; iVar7 = iVar7 + 1) {
    uVar5 = param_1[2];
    puVar1 = (ulong *)(param_1 + 2);
    if ((uVar5 & 1) != 0) {
      puVar1 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
    }
    plVar2 = (long *)0x1;
    func_0x000100601864(1,*puVar1,*(undefined4 *)(*puVar1 + 0x18),param_2,param_3);
    param_2 = plVar2;
  }
  plVar3 = plVar2;
  if ((int)param_1[5] != 0) {
    func_0x000107931190();
    plVar3 = (long *)0x10;
    func_0x0001001a59d0(0x10,plVar2);
    func_0x000107931184();
    param_2 = plVar3;
  }
  if (*(char *)((long)param_1 + 0x2c) == '\x01') {
    func_0x000107931190();
    param_2 = (long *)0x18;
    func_0x0001001a59d0(0x18,plVar3);
    func_0x000107931184();
  }
  if ((param_1[1] & 1U) != 0) {
    uVar6 = param_1[1] & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar4 = *(long *)(uVar6 + 8);
      uVar5 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar4 = uVar6 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar5) {
      while( true ) {
        iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar7 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar7 - iVar8);
        if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        lVar4 = (long)param_2 + (long)iVar8;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar4);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar7);
    }
    _memcpy(param_2,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar5);
  }
  return param_2;
}



/* Entry: 107931118; end: 10793116b;  */

void FUN_107931118(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x38);
  }
  *puVar1 = &PTR_DAT_1109ebff0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  *(undefined4 *)(puVar1 + 6) = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  *(undefined1 *)((long)puVar1 + 0x2c) = 0;
  return;
}



/* Entry: 1079312e0; end: 107931323;  */

long FUN_1079312e0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = 5;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = lVar1 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x18) = (int)lVar1;
  return lVar1;
}



/* Entry: 107931434; end: 1079314a3;  */

long * FUN_107931434(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001079466d4();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010794668c();
    func_0x000107947164();
    func_0x00010794708c();
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x00010794668c();
    func_0x000107947154();
    func_0x00010794708c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000107946ab4();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 1079315c4; end: 1079315c7;  */

undefined8 FUN_1079315c4(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 1079317dc; end: 10793180f;  */

undefined8 FUN_1079317dc(undefined8 param_1)

{
  func_0x0001079473d8();
  func_0x000107931768();
  return param_1;
}



/* Entry: 1079319a0; end: 1079319cb;  */

long FUN_1079319a0(long param_1)

{
  func_0x000107946a94();
  FUN_107943724(param_1 + 0x10);
  return param_1;
}



/* Entry: 107931adc; end: 107931b0b;  */

void FUN_107931adc(ulong *param_1)

{
  long unaff_x20;
  
  func_0x0001079464dc();
  func_0x000107931b0c();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001079466c4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 107931d04; end: 107931d07;  */

void FUN_107931d04(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x0001079465bc();
  if ((unaff_x22 & 1) != 0) {
    func_0x000107946d18();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto code_r0x000107931db4;
  func_0x000107947068();
  if (!(bool)in_ZR) {
    if (unaff_w24 != 0) {
      param_1 = unaff_x21;
      func_0x000107931b1c();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 2) {
    if (unaff_w24 == 2) {
      func_0x0001079467c4();
      func_0x00010794736c();
      FUN_107931adc();
      goto code_r0x000107931db4;
    }
    func_0x000107946bdc();
    func_0x000107944dfc();
  }
  else {
    if (iVar1 != 1) goto code_r0x000107931db4;
    if (unaff_w24 == 1) {
      func_0x0001079467c4();
      func_0x000107931364();
      goto code_r0x000107931db4;
    }
    func_0x000107946bdc();
    FUN_107944dcc();
  }
  unaff_x21[2] = (ulong)param_1;
code_r0x000107931db4:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010794672c();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 107931ebc; end: 107931f0b;  */

void FUN_107931ebc(void)

{
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x000107946280();
  while (unaff_x22 != 0) {
    func_0x000107931f0c(*unaff_x21);
    func_0x000107946ff0();
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
  }
  func_0x000107946cb0();
  return;
}



/* Entry: 107931fb0; end: 10793202b;  */

undefined ** FUN_107931fb0(void)

{
  return &PTR_DAT_1109ee520;
}



/* Entry: 107932198; end: 107932203;  */

void FUN_107932198(long param_1)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  
  func_0x00010794678c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x0001001a5744();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x000107931f0c(*(undefined8 *)(unaff_x19 + 0x20));
    func_0x000107946ad4();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
  }
  func_0x000107946dc4();
  return;
}



/* Entry: 107932458; end: 107932463;  */

undefined ** FUN_107932458(void)

{
  return &PTR_DAT_1109ee5d0;
}



/* Entry: 1079326fc; end: 107932727;  */

undefined8 FUN_1079326fc(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107932728(param_1);
  return param_1;
}



/* Entry: 107932998; end: 10793299b;  */

void FUN_107932998(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_2 + 0x1c) = uVar1;
  return;
}



/* Entry: 107932ae0; end: 107932b4b;  */

void FUN_107932ae0(long param_1)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  
  func_0x00010794678c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x0001001a5744();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x000107931f0c(*(undefined8 *)(unaff_x19 + 0x20));
    func_0x000107946ad4();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
  }
  func_0x000107946dc4();
  return;
}



/* Entry: 107932d5c; end: 107932d5f;  */

undefined8 FUN_107932d5c(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107932d0c(param_1);
  return param_1;
}



/* Entry: 107933170; end: 10793320f;  */

void FUN_107933170(long param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x8_03;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010068f438();
  func_0x000107932d80();
  func_0x000107946c18();
  func_0x0001079465bc();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000107946d18();
  }
  puVar1 = (ulong *)(unaff_x21 + 0x18);
  lVar2 = unaff_x20 + 0x18;
  func_0x000107933160();
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x30));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x30);
    func_0x0001001a53d4();
  }
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x38));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x38);
    func_0x0001001a53d4();
  }
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x40));
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x40);
    func_0x0001001a53d4();
  }
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x48));
  lVar3 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x48);
    func_0x0001001a53d4();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x50);
    if (puVar1 == (ulong *)0x0) {
      func_0x000107944f6c();
      *(ulong **)(unaff_x21 + 0x50) = unaff_x22;
      puVar1 = unaff_x22;
    }
    else {
      func_0x000107931d08();
    }
  }
  func_0x000107946584();
  if ((extraout_x8_03 & 1) != 0) {
    func_0x00010794672c();
    if ((*puVar1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 107933360; end: 107933393;  */

void FUN_107933360(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010794673c();
  func_0x000107933324();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 1079337a0; end: 1079337a3;  */

undefined8 FUN_1079337a0(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946c3c();
  func_0x000107946c10();
  return param_1;
}



/* Entry: 1079339a8; end: 1079339bb;  */

void FUN_1079339a8(void)

{
  func_0x000107933978();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107933b2c; end: 107933b5f;  */

void FUN_107933b2c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined **)(param_1 + 0x40) = &DAT_11383d918;
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}



/* Entry: 107933dcc; end: 107933ebf;  */

long FUN_107933dcc(long param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  func_0x00010794656c();
  while (unaff_x22 != 0) {
    func_0x000107946340();
    func_0x000107946974();
  }
  lVar2 = 0;
  lVar1 = 0;
  for (lVar3 = (long)*(int *)(unaff_x19 + 0x28); lVar3 != 0; lVar3 = lVar3 + -1) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(*(long *)(unaff_x19 + 0x30) + (lVar2 >> 0x1e))) * -9
                    + 0x280U >> 6) + lVar1;
    lVar2 = lVar2 + 0x100000000;
  }
  lVar2 = lVar1 + unaff_x20;
  if (lVar1 != 0) {
    lVar2 = lVar2 + (ulong)((int)LZCOUNT((long)(int)lVar1) * -9 + 0x280U >> 6) + 1;
  }
  *(int *)(unaff_x19 + 0x38) = (int)lVar1;
  func_0x000107946af8(*(undefined8 *)(unaff_x19 + 0x40));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x0001001a5744();
    func_0x000107946ad4();
  }
  if (*(int *)(unaff_x19 + 0x48) != 0) {
    func_0x000107946e08((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x48)) * -9 + 0x280);
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(unaff_x19 + 0x4c) = (int)lVar2;
  return lVar2;
}



/* Entry: 107934180; end: 10793422b;  */

void FUN_107934180(ulong *param_1,long param_2,ulong *param_3)

{
  undefined1 in_ZR;
  ulong *puVar1;
  long extraout_x8;
  long lVar2;
  ulong extraout_x8_00;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x000107946614();
  puVar1 = param_3;
  if (((ulong)param_3 & 1) != 0) {
    func_0x000107946e40();
    puVar1 = unaff_x22;
  }
  func_0x0001079467d4();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if (((ulong)param_3 & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946cdc();
  }
  func_0x000107947208();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x000107946e34();
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar1;
        func_0x000107944ff4();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x00010793422c();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x0001079470a4();
      if (param_1 == (ulong *)0x0) {
        func_0x000107945040();
        *(ulong **)(unaff_x21 + 0x28) = puVar1;
        param_1 = puVar1;
      }
      else {
        func_0x000107934274();
      }
    }
  }
  func_0x000107946584();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  func_0x00010794672c();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1079343f8; end: 10793442f;  */

void FUN_1079343f8(ulong *param_1,long param_2)

{
  long unaff_x20;
  
  func_0x000107946b0c();
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107946d58();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001079466c4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 107934564; end: 10793458b;  */

undefined8 FUN_107934564(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946c3c();
  return param_1;
}



/* Entry: 1079346c4; end: 1079346c7;  */

undefined8 FUN_1079346c4(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946c3c();
  func_0x000107946c10();
  return param_1;
}



/* Entry: 107934920; end: 107934933;  */

void FUN_107934920(void)

{
  func_0x0001079348e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107934ca0; end: 107934cd3;  */

void FUN_107934ca0(void)

{
  long unaff_x19;
  
  func_0x000107946934();
  func_0x000107946c10();
  if (*(int *)(unaff_x19 + 0x34) != 0) {
    if ((*(uint *)(unaff_x19 + 0x34) & 0xfffffffe) == 100) {
      func_0x0001079470b0();
    }
    *(undefined4 *)(unaff_x19 + 0x34) = 0;
  }
  return;
}



/* Entry: 107934f60; end: 107934f63;  */

void FUN_107934f60(ulong *param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  ulong uVar5;
  
  func_0x000107946614();
  uVar5 = param_3;
  if ((param_3 & 1) != 0) {
    func_0x000107946e40();
    uVar5 = unaff_x22;
  }
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x10));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((param_3 & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x0001079470b8();
  }
  func_0x0001079467d4();
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946cdc();
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 4) = *(int *)(unaff_x20 + 0x20);
  }
  iVar2 = *(int *)(unaff_x20 + 0x34);
  if (iVar2 != 0) {
    iVar3 = *(int *)((long)unaff_x21 + 0x34);
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        param_1 = unaff_x21;
        func_0x000107934cec();
      }
      *(int *)((long)unaff_x21 + 0x34) = iVar2;
    }
    if ((iVar2 == 0x65) || (iVar2 == 100)) {
      if (iVar3 != iVar2) {
        unaff_x21[5] = (ulong)&DAT_11383d918;
      }
      puVar1 = (undefined *)(*(ulong *)(unaff_x20 + 0x28) & 0xfffffffffffffffc);
      if (*(int *)(unaff_x20 + 0x34) != iVar2) {
        puVar1 = &DAT_11383d918;
      }
      param_1 = unaff_x21 + 5;
      func_0x0001001a53d4(param_1,puVar1,uVar5);
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010794672c();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1079351b4; end: 107935247;  */

void FUN_1079351b4(void)

{
  uint uVar1;
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar2;
  
  func_0x000107946fd4();
  if (in_NG == in_OV) {
    func_0x000107947114();
  }
  if (0 < *(int *)(unaff_x19 + 0x38)) {
    func_0x0001079472b4();
  }
  if (0 < *(int *)(unaff_x19 + 0x50)) {
    func_0x0001053936e4(unaff_x19 + 0x48);
  }
  func_0x00010029b2d4(unaff_x19 + 0x60);
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000107934940(*(undefined8 *)(unaff_x19 + 0x68));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000107931420(*(undefined8 *)(unaff_x19 + 0x70));
    }
  }
  puVar2 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x98) = 0;
  *(undefined8 *)(unaff_x19 + 0x80) = 0;
  *(undefined8 *)(unaff_x19 + 0x78) = 0;
  *(undefined8 *)(unaff_x19 + 0x90) = 0;
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 107935880; end: 107935893;  */

void FUN_107935880(void)

{
  func_0x000107935848();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107935ac0; end: 107935acb;  */

undefined ** FUN_107935ac0(void)

{
  return &PTR_DAT_1109eea90;
}



/* Entry: 107935d4c; end: 107935d7f;  */

void FUN_107935d4c(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001079468f4();
  if (in_NG == in_OV) {
    func_0x000107946cbc();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 107935ec0; end: 107935edf;  */

void FUN_107935ec0(void)

{
  ulong uVar1;
  long unaff_x19;
  
  func_0x000107946934();
  func_0x000107946c10();
  uVar1 = *(ulong *)(unaff_x19 + 0x20) ^ 2;
  if ((uVar1 & 3) != 0) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    func_0x000107c60ca0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(uVar1);
  return;
}



/* Entry: 1079360b4; end: 10793613f;  */

void FUN_1079360b4(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107946430();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946bb4();
  }
  func_0x0001079467d4();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946d64();
  }
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107947144();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001079466c4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1079362c0; end: 107936503;  */

long * FUN_1079362c0(long *param_1,long *param_2,ulong param_3)

{
  undefined *puVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar9;
  long *unaff_x22;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  long *unaff_x30;
  
  func_0x000107946ffc();
  func_0x000107946984();
  func_0x000107946ac8(param_1[9]);
  if ((long)param_2 < 0) {
    param_2 = (long *)unaff_x22[1];
    if (param_2 != (long *)0x0) {
      unaff_x22 = (long *)*unaff_x22;
      goto LAB_1079362fc;
    }
  }
  else if ((int)param_2 != 0) {
LAB_1079362fc:
    unaff_x30 = (long *)&UNK_10f4386fd;
    func_0x000107946aa4();
    func_0x000107946634();
    param_1 = unaff_x22;
    unaff_x21 = unaff_x22;
  }
  uVar8 = *(uint *)(unaff_x20 + 0x10);
  puVar10 = (undefined8 *)(ulong)uVar8;
  if ((uVar8 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x58);
    param_3 = (ulong)*(uint *)(param_2 + 5);
    param_1 = (long *)0x2;
    func_0x0001079467ac();
    unaff_x21 = param_1;
  }
  if ((uVar8 >> 1 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x60);
    param_3 = (ulong)*(uint *)(param_2 + 5);
    param_1 = (long *)0x3;
    func_0x0001079467ac();
    unaff_x21 = param_1;
  }
  plVar6 = param_1;
  if (*(int *)(unaff_x20 + 0x70) != 0) {
    func_0x0001079466b8();
    plVar6 = (long *)0x25;
    func_0x0001001a59d0();
    func_0x000107947348();
    param_2 = param_1;
  }
  plVar7 = plVar6;
  if (*(int *)(unaff_x20 + 0x74) != 0) {
    func_0x0001079466b8();
    plVar7 = (long *)0x2d;
    func_0x0001001a59d0();
    func_0x000107947348();
    param_2 = plVar6;
  }
  iVar9 = *(int *)(unaff_x20 + 0x20);
  for (puVar11 = (undefined8 *)0x0; iVar9 != (int)puVar11;
      puVar11 = (undefined8 *)(ulong)((int)puVar11 + 1)) {
    func_0x0001079469f4(*(undefined8 *)(unaff_x20 + 0x18));
    param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
    plVar7 = (long *)0x7;
    func_0x0001079467ac();
    unaff_x21 = plVar7;
  }
  if ((uVar8 >> 2 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x68);
    param_3 = (ulong)*(uint *)(param_2 + 5);
    plVar7 = (long *)0x8;
    func_0x0001079467ac();
    unaff_x21 = plVar7;
  }
  uVar8 = (uint)*(byte *)(unaff_x20 + 0x78);
  cVar3 = SBORROW4(uVar8,1);
  cVar4 = (int)(uVar8 - 1) < 0;
  uVar5 = uVar8 == 1;
  plVar6 = plVar7;
  if ((bool)uVar5) {
    func_0x0001079466b8();
    plVar6 = (long *)0x48;
    func_0x0001001a59d0();
    func_0x0001079466ac();
    param_2 = plVar7;
    unaff_x21 = plVar6;
  }
  func_0x000107946ac8(*(undefined8 *)(unaff_x20 + 0x50));
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (puVar10[1] == 0) goto LAB_10793643c;
    puVar10 = (undefined8 *)*puVar10;
  }
  else if ((int)param_2 == 0) goto LAB_10793643c;
  unaff_x30 = (long *)&UNK_10f438721;
  func_0x000107946aa4(puVar10);
  param_2 = (long *)0xa;
  plVar6 = unaff_x19;
  func_0x000107946758();
  unaff_x21 = plVar6;
LAB_10793643c:
  uVar8 = *(uint *)(unaff_x20 + 0x38);
  while ((uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU)) != 0) {
    func_0x000107946378();
    puVar10 = puVar11;
    if ((long)param_2 < 0) {
      param_2 = (long *)puVar11[1];
      puVar10 = (undefined8 *)*puVar11;
    }
    func_0x000107946894(puVar10);
    cVar2 = *(char *)((long)puVar11 + 0x17);
    if ((((long)cVar2 < 0) && (func_0x000107946ea4(), !(bool)uVar5 && cVar4 == cVar3)) ||
       (func_0x00010794731c(), cVar4 != cVar3)) {
      param_2 = (long *)0xb;
      plVar6 = unaff_x19;
      func_0x00010794726c();
      unaff_x21 = plVar6;
    }
    else {
      *(undefined1 *)unaff_x21 = 0x5a;
      *(char *)((long)unaff_x21 + 1) = cVar2;
      if (*(char *)((long)puVar11 + 0x17) < '\0') {
        puVar11 = (undefined8 *)*puVar11;
      }
      plVar6 = (long *)((long)unaff_x21 + 2);
      func_0x0001079468a0();
      unaff_x21 = (long *)((long)unaff_x21 + 2 + (long)cVar2);
    }
    func_0x000107946e98();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x000107946ab4();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x000107946ee4();
  if ((long)(int)param_3 <= *plVar6 - (long)unaff_x30) {
    _memcpy(unaff_x30);
    return (long *)((long)unaff_x30 + (long)(int)param_3);
  }
  while( true ) {
    iVar12 = ((int)*plVar6 - (int)unaff_x30) + 0x10;
    iVar9 = (int)param_3;
    param_3 = (ulong)(uint)(iVar9 - iVar12);
    if (iVar9 - iVar12 == 0 || iVar9 < iVar12) break;
    func_0x00010b4d5738();
    puVar1 = (undefined *)((long)unaff_x30 + (long)iVar12);
    unaff_x30 = plVar6;
    func_0x000107c303e4(plVar6,puVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)unaff_x30 + (long)iVar9);
}



/* Entry: 1079367f8; end: 10793680b;  */

void FUN_1079367f8(void)

{
  func_0x0001079367bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1079369e4; end: 107936a0f;  */

undefined8 FUN_1079369e4(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107936a10(param_1);
  return param_1;
}



/* Entry: 107936bf0; end: 107936c8b;  */

void FUN_107936bf0(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long unaff_x19;
  
  func_0x000107946514();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x0001001a5744();
  }
  func_0x0001079468ac();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x0001001a5744();
    func_0x000107946ad4();
  }
  if (*(int *)(unaff_x19 + 0x2c) == 2) {
    func_0x000107946f30();
    func_0x0001001a5744();
  }
  else {
    if (*(int *)(unaff_x19 + 0x2c) != 1) goto LAB_107936c64;
    func_0x000107946f30();
    func_0x0001006016cc();
  }
  func_0x000107946ad4();
LAB_107936c64:
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
  }
  func_0x000107946cb0();
  return;
}



/* Entry: 107936e60; end: 107936e8f;  */

void FUN_107936e60(long param_1)

{
  if ((*(uint *)(param_1 + 0x28) & 0xfffffffe) == 2) {
    func_0x000107946f1c();
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 10793716c; end: 1079371ff;  */

void FUN_10793716c(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x000107946698();
  func_0x000107946d88(&PTR_DAT_1109ed690);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  func_0x000107946b2c();
  *(undefined8 *)(unaff_x19 + 0x10) = param_1;
  lVar2 = unaff_x21 + 0x18;
  func_0x000107946ba4();
  *(long *)(unaff_x19 + 0x18) = lVar2;
  *(undefined4 *)(unaff_x19 + 0x50) = 0;
  iVar1 = *(int *)(unaff_x21 + 0x54);
  *(int *)(unaff_x19 + 0x54) = iVar1;
  uVar6 = *(undefined8 *)(unaff_x21 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x21 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x21 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x21 + 0x30);
  *(undefined1 *)(unaff_x19 + 0x40) = *(undefined1 *)(unaff_x21 + 0x40);
  *(undefined8 *)(unaff_x19 + 0x28) = uVar6;
  *(undefined8 *)(unaff_x19 + 0x20) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x38) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x30) = uVar3;
  if (iVar1 == 3) {
    func_0x0001079451cc();
  }
  else {
    if (iVar1 != 2) {
      return;
    }
    func_0x000107945114();
  }
  *(undefined8 *)(unaff_x19 + 0x48) = unaff_x20;
  return;
}



/* Entry: 107937418; end: 107937503;  */

long FUN_107937418(long param_1)

{
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  long extraout_x9;
  long unaff_x19;
  long lVar3;
  
  func_0x000107946514();
  if (extraout_x8 < 0) {
    if (*(long *)(param_1 + 8) == 0) goto LAB_107937444;
LAB_107937430:
    func_0x0001001a5744();
    lVar3 = param_1 + 1;
  }
  else {
    if (extraout_x8 != 0) goto LAB_107937430;
LAB_107937444:
    lVar3 = 0;
  }
  func_0x0001079468ac();
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x0001001a5744();
    func_0x000107947050();
  }
  iVar1 = -9;
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    func_0x000107946714();
    iVar1 = extraout_w8;
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    func_0x000107946714();
    iVar1 = extraout_w8_00;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    func_0x000107946714();
    iVar1 = extraout_w8_01;
  }
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    lVar3 = (ulong)((int)LZCOUNT(*(long *)(unaff_x19 + 0x38)) * iVar1 + 0x2c0U >> 6) + lVar3;
  }
  lVar3 = lVar3 + (ulong)*(byte *)(unaff_x19 + 0x40) * 2;
  if (*(int *)(unaff_x19 + 0x54) == 3) {
    func_0x000107937018(*(undefined8 *)(unaff_x19 + 0x48));
  }
  else {
    if (*(int *)(unaff_x19 + 0x54) != 2) goto LAB_1079374d8;
    func_0x000107936624(*(undefined8 *)(unaff_x19 + 0x48));
  }
  func_0x000107946ad4();
LAB_1079374d8:
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
    lVar2 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(unaff_x19 + 0x50) = (int)lVar3;
  return lVar3;
}



/* Entry: 107937754; end: 1079377ab;  */

void FUN_107937754(void)

{
  uint uVar1;
  long unaff_x19;
  ulong *puVar2;
  
  func_0x000107946940();
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000107937284(*(undefined8 *)(unaff_x19 + 0x20));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010bceb764(*(undefined8 *)(unaff_x19 + 0x28));
    }
  }
  puVar2 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x30) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 107937a60; end: 107937a93;  */

void FUN_107937a60(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001079468f4();
  if (in_NG == in_OV) {
    func_0x000107946cbc();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 107937c3c; end: 107937c67;  */

undefined8 FUN_107937c3c(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107937c68(param_1);
  return param_1;
}



/* Entry: 107937f24; end: 107937f27;  */

void FUN_107937f24(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107946430();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946bb4();
  }
  func_0x0001079467d4();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946d64();
  }
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107947144();
  }
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946f48();
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x19 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x20 + 0x38);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001079466c4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1079380d4; end: 107938107;  */

void FUN_1079380d4(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001079468f4();
  if (in_NG == in_OV) {
    func_0x000107946cbc();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 107938268; end: 10793826b;  */

undefined8 FUN_107938268(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946e00();
  return param_1;
}



/* Entry: 1079383f0; end: 107938453;  */

long FUN_1079383f0(long param_1)

{
  func_0x000107946a94();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010bceba98();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010bceba98();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010bceba98();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010bceba98();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 107938714; end: 107938757;  */

long FUN_107938714(long param_1)

{
  func_0x000107946a94();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010bcebc38();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010bcebc38();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10793896c; end: 10793896f;  */

long FUN_10793896c(long param_1)

{
  func_0x000107946a94();
  func_0x000107946c10();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x0001079348e8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 107938b80; end: 107938b83;  */

long FUN_107938b80(long param_1)

{
  func_0x000107946a94();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001000681a0();
  }
  return param_1;
}



/* Entry: 107938cd4; end: 107938cfb;  */

undefined8 FUN_107938cd4(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946c3c();
  return param_1;
}



/* Entry: 107938f0c; end: 107938f37;  */

undefined8 FUN_107938f0c(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107938f38(param_1);
  return param_1;
}



/* Entry: 1079392a8; end: 1079392ab;  */

void FUN_1079392a8(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107946430();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946bb4();
  }
  func_0x0001079467d4();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946d64();
  }
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107947144();
  }
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946f48();
  }
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x30));
  lVar1 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x30);
    func_0x0001001a53d4();
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    *(long *)(unaff_x19 + 0x38) = *(long *)(unaff_x20 + 0x38);
  }
  if (*(int *)(unaff_x20 + 0x40) != 0) {
    *(int *)(unaff_x19 + 0x40) = *(int *)(unaff_x20 + 0x40);
  }
  if (*(int *)(unaff_x20 + 0x44) != 0) {
    *(int *)(unaff_x19 + 0x44) = *(int *)(unaff_x20 + 0x44);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001079466c4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10793949c; end: 1079394cf;  */

void FUN_10793949c(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001079468f4();
  if (in_NG == in_OV) {
    func_0x000107946cbc();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 107939630; end: 107939633;  */

undefined8 FUN_107939630(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946c3c();
  return param_1;
}



/* Entry: 1079399dc; end: 1079399df;  */

undefined8 FUN_1079399dc(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x00010793982c(param_1);
  return param_1;
}



/* Entry: 10793a298; end: 10793a29b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10793a298(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001079465bc();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000107946d18();
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x000107946f50();
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    func_0x000107946f80();
  }
  if (*(int *)(unaff_x20 + 0x50) != 0) {
    func_0x0001079472bc();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x60);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x00010598eb08();
        *(ulong **)(unaff_x21 + 0x60) = param_1;
      }
      else {
        func_0x00010bceb748();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x68);
      if (param_1 == (ulong *)0x0) {
        func_0x000107946eb8();
        *(ulong **)(unaff_x21 + 0x68) = param_1;
      }
      else {
        func_0x00010bcebc88();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x70);
      if (param_1 == (ulong *)0x0) {
        func_0x000107946eb8();
        *(ulong **)(unaff_x21 + 0x70) = param_1;
      }
      else {
        func_0x00010bcebc88();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x78);
      if (param_1 == (ulong *)0x0) {
        func_0x0001079472a4();
        *(ulong **)(unaff_x21 + 0x78) = param_1;
      }
      else {
        func_0x000107934bac();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x80);
      if (param_1 == (ulong *)0x0) {
        func_0x000107946eb0();
        *(ulong **)(unaff_x21 + 0x80) = param_1;
      }
      else {
        func_0x000107931364();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x88);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x000107945230();
        *(ulong **)(unaff_x21 + 0x88) = param_1;
      }
      else {
        func_0x00010793863c();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x90);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0001079452e0();
        *(ulong **)(unaff_x21 + 0x90) = param_1;
      }
      else {
        func_0x00010793692c();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x98);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x000107945330();
        *(ulong **)(unaff_x21 + 0x98) = param_1;
      }
      else {
        func_0x000107937b50();
      }
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0xa0);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x000107945360();
        *(ulong **)(unaff_x21 + 0xa0) = param_1;
      }
      else {
        func_0x0001079381cc();
      }
    }
    if ((uVar1 >> 9 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0xa8);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x000107945390();
        *(ulong **)(unaff_x21 + 0xa8) = param_1;
      }
      else {
        func_0x0001079383c4();
      }
    }
    if ((uVar1 >> 10 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0xb0);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0001079453dc();
        *(ulong **)(unaff_x21 + 0xb0) = param_1;
      }
      else {
        func_0x00010793a6b0();
      }
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0xb8);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x000107945494();
        *(ulong **)(unaff_x21 + 0xb8) = param_1;
      }
      else {
        func_0x00010793a790();
      }
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0xc0);
      if (param_1 == (ulong *)0x0) {
        func_0x000107946dec();
        *(ulong **)(unaff_x21 + 0xc0) = param_1;
      }
      else {
        func_0x00010bcebb24();
      }
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 200);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0001079454c4();
        *(ulong **)(unaff_x21 + 200) = param_1;
      }
      else {
        func_0x00010793a7d0();
      }
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0xd0);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x00010794551c();
        *(ulong **)(unaff_x21 + 0xd0) = param_1;
      }
      else {
        func_0x000107938c94();
      }
    }
    if ((uVar1 >> 0xf & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0xd8);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x00010794556c();
        *(ulong **)(unaff_x21 + 0xd8) = param_1;
      }
      else {
        func_0x00010793a7ec();
      }
    }
  }
  if ((uVar1 & 0x3f0000) != 0) {
    if ((uVar1 >> 0x10 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0xe0);
      if (param_1 == (ulong *)0x0) {
        func_0x000107946dec();
        *(ulong **)(unaff_x21 + 0xe0) = param_1;
      }
      else {
        func_0x00010bcebb24();
      }
    }
    if ((uVar1 >> 0x11 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0xe8);
      if (param_1 == (ulong *)0x0) {
        func_0x000107946dec();
        *(ulong **)(unaff_x21 + 0xe8) = param_1;
      }
      else {
        func_0x00010bcebb24();
      }
    }
    if ((uVar1 >> 0x12 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0xf0);
      if (param_1 == (ulong *)0x0) {
        func_0x000107946eb8();
        *(ulong **)(unaff_x21 + 0xf0) = param_1;
      }
      else {
        func_0x00010bcebc88();
      }
    }
    if ((uVar1 >> 0x13 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0xf8);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0001079455bc();
        *(ulong **)(unaff_x21 + 0xf8) = param_1;
      }
      else {
        func_0x00010793a81c();
      }
    }
    if ((uVar1 >> 0x14 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x100);
      if (param_1 == (ulong *)0x0) {
        func_0x000107946dec();
        *(ulong **)(unaff_x21 + 0x100) = param_1;
      }
      else {
        func_0x00010bcebb24();
      }
    }
    if ((uVar1 >> 0x15 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x108);
      if (param_1 == (ulong *)0x0) {
        func_0x00010794561c();
        *(ulong **)(unaff_x21 + 0x108) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        func_0x000107939594();
      }
    }
  }
  func_0x000107946584();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010794672c();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10793a8fc; end: 10793a8ff;  */

undefined8 FUN_10793a8fc(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 10793aa60; end: 10793aa73;  */

void FUN_10793aa60(void)

{
  func_0x00010793aa04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793abf0; end: 10793ac03;  */

void FUN_10793abf0(void)

{
  func_0x00010793abc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793adb0; end: 10793add3;  */

undefined8 FUN_10793adb0(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 10793af2c; end: 10793af53;  */

undefined8 FUN_10793af2c(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946e00();
  return param_1;
}


