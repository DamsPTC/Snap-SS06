/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1005a0bd4; end: 1005a0ca3;  */

void FUN_1005a0bd4(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x000107c610f4();
  func_0x000107c48ff8();
  if (puVar1 == (undefined *)0x0) {
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c4435c(puVar1,param_2,auStack_48);
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x000107c412e4(PTR__OBJC_CLASS___NSData_1126ae778,param_2,auStack_48,0x10);
    func_0x000107c61180();
    param_1 = puVar2;
    func_0x000107c3e68c();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    func_0x000107c60e78();
    func_0x000107c5172c();
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x000107c4adac();
    param_1 = puVar1;
    if (puVar2 != (undefined *)0x0) {
      func_0x000107c5c184(puVar1,param_2,&PTR____CFConstantStringClassReference_110db9ab8,
                          &PTR____CFConstantStringClassReference_110daafd8);
      func_0x000107c61180();
      func_0x000107c61170(puVar1);
    }
    func_0x000107c61174(param_1);
    func_0x000107c61170(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1005a0ca4; end: 1005a0db3;  */

void FUN_1005a0ca4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c5172c();
  func_0x000107c61180();
  lVar1 = param_1;
  func_0x000107c4adac();
  lVar2 = param_1;
  if (lVar1 != 0) {
    func_0x000107c5c184(param_1,param_2,&PTR____CFConstantStringClassReference_110db9ab8,
                        &PTR____CFConstantStringClassReference_110daafd8);
    func_0x000107c61180();
    func_0x000107c61170(param_1);
  }
  func_0x000107c61174(lVar2);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1005a0db4; end: 1005a0dbb;  */

void FUN_1005a0db4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf15db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_base64EncodedStringWithOptions__1125a3110,1);
  return;
}



/* Entry: 1005a0dbc; end: 1005a0dc3; -[SCRequest setTaskId:] */

void FUN_1005a0dbc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1005a0dc4; end: 1005a0dcb; -[SCRequest authenticated] */

undefined1 FUN_1005a0dc4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1d);
}



/* Entry: 1005a0dcc; end: 1005a0dff; -[SCRequestTaskLogger initWithNetworkTraceFile:] */

void FUN_1005a0dcc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112706000;
  uStack_20 = param_1;
  func_0x000107c61154(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1005a0e00; end: 1005a114f; -[SCDownloadRequest initializeURLRequestWithAuthenticator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005a0e00(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  puStack_68 = PTR_PTR_112705fa0;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_initializeURLRequestWithAuthenti_1125f6ce0,param_3);
  lVar10 = (long)_DAT_11278db18;
  if (*(long *)(param_1 + lVar10) == 0) {
    uVar8 = param_1;
    func_0x000107c4a048();
    if ((uVar8 & 1) == 0) {
      uVar8 = param_1;
      func_0x000107c40060(param_1);
      func_0x000107c61180();
    }
    else {
      uVar8 = 0;
    }
    puVar2 = PTR_PTR_1126bc0e8;
    uVar1 = param_1;
    if (*(char *)(param_1 + (long)_DAT_11278db0c) == '\x01') {
      func_0x000107c5d720(param_1);
      func_0x000107c61180();
      func_0x000107c4ce5c(param_1);
      func_0x000107c3ac38();
      func_0x000107c61180();
    }
    else {
      func_0x000107c5d720(param_1);
      func_0x000107c61180();
      func_0x000107c4ce5c(param_1);
      func_0x000107c3ac34();
      func_0x000107c61180();
    }
    uVar7 = *(undefined8 *)(param_1 + lVar10);
    *(undefined **)(param_1 + lVar10) = puVar2;
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar1);
    func_0x000107c3acc4(param_1);
    lVar9 = (long)_DAT_11278db10;
    uVar1 = param_1;
    func_0x000107c3bbc0(*(undefined8 *)(param_1 + lVar9));
    if ((int)uVar1 != 0) {
      func_0x000107c59da8(*(undefined8 *)(param_1 + lVar9),*(undefined8 *)(param_1 + lVar10));
    }
    uVar1 = param_1;
    func_0x000107c3fbd0();
    func_0x000107c61180();
    func_0x000107c61170();
    uVar7 = *(undefined8 *)(param_1 + lVar10);
    if (uVar1 == 0) {
      func_0x000107c3abfc();
      func_0x000107c61180();
      uVar3 = uVar7;
      func_0x000107c44f08();
      func_0x000107c61180();
      func_0x000107c61170(uVar7);
      puVar2 = PTR_PTR_1126dfea8;
      func_0x000107c5a9bc(PTR_PTR_1126dfea8);
      func_0x000107c61180();
      uVar7 = *(undefined8 *)(param_1 + lVar10);
      func_0x000107c3abfc(uVar7);
      func_0x000107c61180();
      puVar4 = puVar2;
      func_0x000107c5d4b8(puVar2);
      func_0x000107c61180();
      func_0x000107c5a120(*(undefined8 *)(param_1 + lVar10));
      func_0x000107c61170(puVar4);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(puVar2);
      uVar5 = *(ulong *)(param_1 + lVar10);
      func_0x000107c3abfc();
      func_0x000107c61180();
      uVar1 = uVar5;
      func_0x000107c44f08();
      func_0x000107c61180();
      uVar6 = uVar1;
      func_0x000107c49d0c();
      func_0x000107c61170(uVar1);
      func_0x000107c61170(uVar5);
      if ((uVar6 & 1) == 0) {
        puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0);
        func_0x000107c61180();
        func_0x000107c570b8(param_1);
        func_0x000107c61170(puVar2);
      }
      func_0x000107c61170(uVar3);
    }
    else {
      func_0x000107c5d810(param_1);
    }
    func_0x0001005a7fa0(*(undefined8 *)(param_1 + lVar10));
    func_0x000107c5467c(param_1);
    func_0x000107c49d3c(param_1);
    func_0x000107c55640(param_1);
    func_0x000107c61170(uVar8);
  }
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1005a1150; end: 1005a11b7; -[SCRequest initializeURLRequestWithAuthenticator:] */

/* WARNING: Possible PIC construction at 0x0001005a1170: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005a1174) */
/* WARNING: Removing unreachable block (ram,0x0001005a11ac) */
/* WARNING: Removing unreachable block (ram,0x0001005a1178) */

void FUN_1005a1150(void)

{
  func_0x000107c3fbd0();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1005a11b8; end: 1005a11bf; -[SCRequest clientSBConfig] */

undefined8 FUN_1005a11b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x120);
}



/* Entry: 1005a11c0; end: 1005a11c7; -[SCRequest compressionConfig] */

undefined8 FUN_1005a11c0(long param_1)

{
  return *(undefined8 *)(param_1 + 400);
}



/* Entry: 1005a11c8; end: 1005a11cf; -[SCRequest uploadData] */

undefined8 FUN_1005a11c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1a0);
}



/* Entry: 1005a11d0; end: 1005a11d7; -[SCRequest method] */

undefined8 FUN_1005a11d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 1005a11d8; end: 1005a152b; +[SCAPI URLRequestWithURL:parameters:uploadData:additionalHTTPHeaders:method:compressionConfig:authenticator:] */

void FUN_1005a11d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_8);
  uVar1 = param_1;
  func_0x000107c3af64(param_1);
  func_0x000107c61180();
  func_0x000107c61174(param_5);
  if (param_5 == (undefined *)0x0) {
    func_0x000107c61170(0);
LAB_1005a12cc:
    puVar2 = PTR_PTR_1126b8240;
    func_0x000107c5a9d0(PTR_PTR_1126b8240);
    func_0x000107c61180();
    puVar3 = PTR_PTR_1126bc0e8;
    func_0x000107c5c1b0(PTR_PTR_1126bc0e8);
    func_0x000107c61180();
    puVar5 = puVar2;
    func_0x000107c50458(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
LAB_1005a1418:
    func_0x000107c61170(puVar2);
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x000107c61158(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    puVar2 = param_5;
    func_0x000107c6115c(param_5,puVar5);
    puVar5 = param_5;
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x000107c61158(PTR__OBJC_CLASS___NSData_1126ae778);
      puVar3 = param_5;
      func_0x000107c6115c(param_5,puVar2);
      if (((ulong)puVar3 & 1) != 0) {
        func_0x000107c4adac();
        goto LAB_1005a12bc;
      }
      func_0x000107c61170(param_5);
    }
    else {
      func_0x000107c40808();
LAB_1005a12bc:
      func_0x000107c61170(param_5);
      if (puVar5 == (undefined *)0x0) goto LAB_1005a12cc;
    }
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x000107c61158(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    puVar2 = param_5;
    func_0x000107c6115c(param_5,puVar5);
    if (((ulong)puVar2 & 1) != 0) {
      puVar2 = PTR_PTR_1126b8240;
      func_0x000107c5a9d0(PTR_PTR_1126b8240);
      func_0x000107c61180();
      puVar3 = PTR_PTR_1126bc0e8;
      func_0x000107c5c1b0(PTR_PTR_1126bc0e8);
      func_0x000107c61180();
      uVar4 = param_3;
      func_0x000107c3ceb0(param_3);
      func_0x000107c61180();
      func_0x000107c61174(param_5);
      puVar5 = puVar2;
      func_0x000107c4d1d4(puVar2);
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar2);
      puVar2 = param_5;
      goto LAB_1005a1418;
    }
    puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x000107c61158(PTR__OBJC_CLASS___NSData_1126ae778);
    puVar2 = param_5;
    func_0x000107c6115c(param_5,puVar5);
    if (((ulong)puVar2 & 1) == 0) {
      puVar5 = (undefined *)0x0;
      goto LAB_1005a1440;
    }
    puVar2 = PTR_PTR_1126b8240;
    func_0x000107c5a9d0(PTR_PTR_1126b8240);
    func_0x000107c61180();
    puVar3 = PTR_PTR_1126bc0e8;
    func_0x000107c5c1b0(PTR_PTR_1126bc0e8);
    func_0x000107c61180();
    puVar5 = puVar2;
    func_0x000107c50458(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c54fac(puVar5);
  }
  func_0x000107c3cc98(param_1);
  if (param_8 != 0) {
    func_0x000107c3b0d8(param_1);
  }
LAB_1005a1440:
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1005a152c; end: 1005a1617; +[SCAPI _buildRequestParamForEndpoint:parameters:authenticator:] */

void FUN_1005a152c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  if (param_5 == 0) {
    param_1 = param_4;
    func_0x000107c40794(param_4);
  }
  else {
    func_0x000107c4e328(param_1,param_2,param_4,param_3,param_5);
    func_0x000107c61180();
  }
  puVar1 = PTR_PTR_1126dfff8;
  func_0x000107c4406c(PTR_PTR_1126dfff8,param_2,param_3);
  func_0x000107c61180();
  if (puVar1 != (undefined *)0x0) {
    func_0x000107c56bd8(param_1,param_2,puVar1,&PTR____CFConstantStringClassReference_110f60958);
  }
  uVar2 = param_1;
  func_0x000107c40794(param_1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1005a1618; end: 1005a1707; +[SCServerSideFeatures_DEPRECATED getFeaturesForRequestWithEndpoint:] */

void FUN_1005a1618(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x000107c61174(param_3);
  if (lRam00000001137f4960 != -1) {
    FUN_10002a2fc(0x1137f4960,&PTR___NSConcreteGlobalBlock_110cd1718);
  }
  lVar1 = lRam00000001137f4958;
  func_0x000107c4d9c0();
  func_0x000107c61180();
  func_0x000107c61170();
  puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  puVar3 = (undefined *)0x0;
  if (lVar1 != 0) {
    lVar1 = lRam00000001137f4958;
    func_0x000107c4d9c0(lRam00000001137f4958);
    func_0x000107c61180();
    func_0x000107c41300(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c610f4(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c46368();
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1005a1708; end: 1005a171f;  */

void FUN_1005a1708(void)

{
  undefined8 uVar1;
  
  uVar1 = ppuRam00000001137f4958;
  ppuRam00000001137f4958 = &PTR__OBJC_CLASS___NSConstantDictionary_111175648;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1005a1720; end: 1005a17b3; -[SIGNavigationBarButtonItem setView:] */

void FUN_1005a1720(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1005a17b4;
  puStack_40 = &UNK_110d62ca0;
  lStack_38 = param_1;
  func_0x000107c437dc(param_1,param_2,&puStack_58);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1005a17b4; end: 1005a1803;  */

void FUN_1005a17b4(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  func_0x000107c61174(param_2);
  uVar1 = param_2;
  func_0x000107c61164(param_2,PTR_s_navigationBarButtonItem_didChang_112613350);
  if ((uVar1 & 1) != 0) {
    func_0x000107c4d4f8(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1005a1804; end: 1005a1807; -[SIGNavigationBarButton navigationBarButtonItem:didChangeView:] */

void FUN_1005a1804(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed4630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateButtonViewIfNeeded_112592b30);
  return;
}



/* Entry: 1005a1808; end: 1005a187f; -[SIGNavigationBarButton _updateButtonViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005a1808(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_112794fe4);
  lVar1 = *(long *)(param_1 + _DAT_112794fc4);
  func_0x000107c5de64();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar2 != lVar1) {
    lVar1 = param_1;
    func_0x000107c4a3b4(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bee1270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__updateStyleForCurrentStateWithO_112595e40,lVar1);
    return;
  }
  return;
}



/* Entry: 1005a1880; end: 1005a1a7f; -[SIGNavigationBarButton _updateStyleForCurrentStateWithOldSelectedValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005a1880(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  
  lVar2 = param_1;
  func_0x000107c4a3b4();
  lVar8 = (long)_DAT_112794fe4;
  lVar9 = *(long *)(param_1 + lVar8);
  lVar7 = (long)_DAT_112794fc4;
  lVar3 = *(long *)(param_1 + lVar7);
  func_0x000107c5de64();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar9 == lVar3) {
    if (param_3 == (int)lVar2) goto LAB_1005a1974;
    iVar1 = (int)*(undefined8 *)(param_1 + lVar7);
    func_0x000107c5ae3c();
    if ((iVar1 == 0) || (*(double *)(param_1 + _DAT_112794fcc) == 24.0)) goto LAB_1005a1974;
  }
  else {
    lVar2 = param_1;
    func_0x000107c5c3b0(param_1);
    func_0x000107c61180();
    func_0x000107c45340();
    func_0x000107c61170(lVar2);
    func_0x000107c4ff34(*(undefined8 *)(param_1 + lVar8));
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    func_0x000107c5de64();
    func_0x000107c61180();
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    *(undefined8 *)(param_1 + lVar8) = uVar4;
    func_0x000107c61170(uVar6);
    func_0x000107c49778(param_1);
  }
  func_0x000107c3ac90(param_1);
LAB_1005a1974:
  lVar2 = param_1;
  func_0x000107c4a3b4();
  dVar10 = 0.0;
  if ((int)lVar2 != 0) {
    uVar5 = *(ulong *)(param_1 + lVar7);
    func_0x000107c5ae3c(0,uVar5);
    dVar10 = (double)(uVar5 & 0xffffffff);
  }
  func_0x000107c526c0(dVar10,*(undefined8 *)(param_1 + _DAT_112794fe0));
  uVar4 = *(undefined8 *)(param_1 + lVar8);
  lVar2 = param_1;
  func_0x000107c4e1d8(param_1);
  func_0x000107c61180();
  func_0x000107c58de0(uVar4);
  func_0x000107c61170(lVar2);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112794ff4);
  lVar2 = param_1;
  func_0x000107c4e1d8(param_1);
  func_0x000107c61180();
  func_0x000107c58de0(uVar4);
  func_0x000107c61170(lVar2);
  lVar3 = (long)_DAT_112794ff8;
  uVar4 = *(undefined8 *)(param_1 + lVar3);
  lVar2 = param_1;
  func_0x000107c3ae7c(param_1);
  func_0x000107c61180();
  func_0x000107c59e10(uVar4);
  func_0x000107c61170(lVar2);
  uVar6 = *(undefined8 *)(param_1 + lVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  func_0x000107c3de9c(uVar4);
  func_0x000107c61180();
  func_0x000107c55258(uVar6);
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010c28b210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateTitleLabelStyleIfNeeded_1126806a8);
  return;
}



/* Entry: 1005a1a80; end: 1005a1a9f; +[SCAPI stringForMethod:] */

undefined * FUN_1005a1a80(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 5) {
    return (&PTR_PTR_110ccc4e0)[param_3];
  }
  return (undefined *)0x0;
}



/* Entry: 1005a1aa0; end: 1005a1cdf; -[SCAPIClient requestWithMethod:url:parameters:authenticated:] */

void FUN_1005a1aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar2 = &uStack_70;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  uVar1 = param_4;
  func_0x000107c3ceb0(param_4);
  func_0x000107c61180();
  puStack_68 = PTR_PTR_112706080;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_requestWithMethod_path_parameter_11262b650,param_3,uVar1,
                      param_5);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  FUN_10011df08();
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126bd000;
  if (param_6 == 0) goto LAB_1005a1c8c;
  puVar3 = (undefined1 *)puVar2;
  func_0x000107c3abfc(puVar2);
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c44f08();
  func_0x000107c61180();
  func_0x000107c4a034();
  puVar7 = PTR_PTR_1126bd000;
  if ((int)puVar5 == 0) {
    puVar6 = (undefined1 *)puVar2;
    func_0x000107c3abfc(puVar2);
    func_0x000107c61180();
    func_0x000107c4a35c();
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    if ((int)puVar7 != 0) goto LAB_1005a1bec;
  }
  else {
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
LAB_1005a1bec:
    uVar8 = param_5;
    func_0x000107c4d2d4(param_5);
    func_0x000107c56bd8();
    func_0x000107c56bd8(uVar8);
    func_0x000107c56bd8(uVar8);
    uVar9 = uVar8;
    func_0x000107c40794(uVar8);
    func_0x000107c61170(param_5);
    func_0x000107c61170(uVar8);
    param_5 = uVar9;
  }
  uVar8 = param_4;
  func_0x000107c4e430(param_4);
  func_0x000107c61180();
  func_0x000107c3e45c(param_1);
  func_0x000107c61170(uVar8);
LAB_1005a1c8c:
  func_0x000107c5a498(puVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1005a1ce0; end: 1005a1fdb; -[AFHTTPClient requestWithMethod:path:parameters:] */

void FUN_1005a1ce0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined **param_4,
                  long param_5)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_4 != (undefined **)0x0) {
    ppuVar1 = param_4;
  }
  uVar2 = param_1;
  func_0x000107c3e6ac(param_1);
  func_0x000107c61180();
  func_0x000107c3ac44(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSMutableURLRequest_1126aedd8;
  func_0x000107c610f4(PTR__OBJC_CLASS___NSMutableURLRequest_1126aedd8);
  func_0x000107c48fbc();
  func_0x000107c52f10();
  func_0x000107c54fb0(puVar4);
  uVar2 = param_1;
  func_0x000107c415a8(param_1);
  func_0x000107c61180();
  func_0x000107c52628(puVar4);
  func_0x000107c61170(uVar2);
  if (param_5 != 0) {
    uVar5 = param_3;
    func_0x000107c49d0c();
    if ((((uVar5 & 1) == 0) && (uVar5 = param_3, func_0x000107c49d0c(), (uVar5 & 1) == 0)) &&
       (uVar5 = param_3, func_0x000107c49d0c(), (int)uVar5 == 0)) {
      uVar2 = param_1;
      func_0x000107c5c1a0();
      func_0x000107c60844();
      func_0x000107c60840();
      func_0x000107c61180();
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x000107c61180();
      func_0x000107c5a498(puVar4);
      func_0x000107c61170(puVar8);
      uVar9 = param_1;
      func_0x000107c5c1a0(param_1);
      lVar10 = param_5;
      FUN_100b409b0(param_5,uVar9);
      func_0x000107c61180();
      func_0x000107c5c1a0(param_1);
      lVar11 = lVar10;
      func_0x000107c412d4(lVar10);
      func_0x000107c61180();
      func_0x000107c54fac(puVar4);
      func_0x000107c61170(lVar11);
      func_0x000107c61170(lVar10);
      func_0x000107c61170(uVar2);
    }
    else {
      puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
      puVar6 = puVar3;
      func_0x000107c3ceb0(puVar3);
      func_0x000107c61180();
      func_0x000107c4f890();
      func_0x000107c5c1a0(param_1);
      lVar10 = param_5;
      FUN_100b409b0(param_5,param_1);
      func_0x000107c61180();
      puVar7 = puVar6;
      func_0x000107c5c164(puVar6);
      func_0x000107c61180();
      func_0x000107c3ac40(puVar8);
      func_0x000107c61180();
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(lVar10);
      func_0x000107c61170(puVar6);
      func_0x000107c5a120(puVar4);
      puVar3 = puVar8;
    }
  }
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(ppuVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1005a1fdc; end: 1005a1fe3; -[AFHTTPClient baseURL] */

undefined8 FUN_1005a1fdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1005a1fe4; end: 1005a2063; +[SCAPI _updateRequest:withAdditionalHeaders:] */

/* WARNING: Possible PIC construction at 0x0001005a204c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005a2050) */

void FUN_1005a1fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1005a2064;
  puStack_30 = &UNK_110882060;
  uStack_28 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c429c4(param_4,param_2,&puStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uStack_28);
  return;
}



/* Entry: 1005a2064; end: 1005a20ff;  */

/* WARNING: Possible PIC construction at 0x0001005a20e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005a20ec) */

void FUN_1005a2064(long param_1,ulong param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c61158(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar2 = param_2;
  func_0x000107c6115c(param_2,puVar1);
  if (((uVar2 & 1) != 0) && (func_0x000107c4adac(), param_2 != 0)) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c61158(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar2 = param_3;
    func_0x000107c6115c(param_3,puVar1);
    if ((param_3 != 0) && ((uVar2 & 1) != 0)) {
      func_0x000107c5a498(*(undefined8 *)(param_1 + 0x20));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1005a2100; end: 1005a226f; -[SCDownloadRequest _addAdditionalHeadersIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1005a2100(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
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
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = param_1;
  func_0x000107c3e698();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c3db60();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = lVar2;
  func_0x000107c4080c(lVar2,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar1 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          func_0x000107c61128(lVar2);
        }
        uVar5 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        uVar6 = *(undefined8 *)(param_1 + _DAT_11278db18);
        lVar3 = param_1;
        func_0x000107c3e698(param_1);
        func_0x000107c61180();
        lVar4 = lVar3;
        func_0x000107c4d9e8();
        func_0x000107c61180();
        func_0x000107c5a498(uVar6,param_2,lVar4,uVar5);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar3);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar2;
      func_0x000107c4080c(lVar2,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar1 != 0);
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return lVar2;
  }
  func_0x000107c60e78();
  return *(long *)(lVar2 + 0x198);
}



/* Entry: 1005a2270; end: 1005a2277; -[SCRequest baseHeaders] */

undefined8 FUN_1005a2270(long param_1)

{
  return *(undefined8 *)(param_1 + 0x198);
}



/* Entry: 1005a2278; end: 1005a2297; -[SCDownloadRequest _isValidTimeoutInterval:] */

bool FUN_1005a2278(double param_1)

{
  return param_1 <= 60.0 && 6.0 <= param_1;
}



/* Entry: 1005a2298; end: 1005a240f; -[SCRequestRouting updateHostnameIfNeccessary:] */

void FUN_1005a2298(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c3ceb0();
  func_0x000107c61180();
  func_0x000107c61170();
  lVar6 = param_3;
  if (lVar1 == 0) {
    func_0x000107c61174(param_3);
    goto LAB_1005a23ec;
  }
  puVar2 = PTR_PTR_1126b8240;
  func_0x000107c5a9d0();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c49c04();
  if ((int)puVar3 == 0) {
LAB_1005a2370:
    lVar1 = param_3;
    FUN_1005a2474(param_3,*(undefined8 *)(param_1 + 8));
    func_0x000107c61180();
    if (lVar1 == 0) {
      lVar5 = *(long *)(param_1 + 0x20);
      func_0x000107c5d4b4();
      func_0x000107c61180();
      if (lVar5 != 0) {
        lVar6 = lVar5;
      }
      func_0x000107c61174(lVar6);
      func_0x000107c61170(lVar5);
    }
    else {
      func_0x000107c61174(lVar1);
      lVar6 = lVar1;
    }
    func_0x000107c61170(lVar1);
  }
  else {
    lVar1 = param_3;
    func_0x000107c44f08();
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c41568(puVar2);
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c44f08();
    func_0x000107c61180();
    lVar5 = lVar1;
    func_0x000107c49d0c();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar1);
    if ((int)lVar5 == 0) goto LAB_1005a2370;
    func_0x000107c61174(param_3);
  }
  func_0x000107c61170(puVar2);
LAB_1005a23ec:
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 1005a2410; end: 1005a241f; -[SIGNavigationBarButton overrideTintColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1005a2410(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112795000);
}



/* Entry: 1005a2420; end: 1005a2473; -[SCAPIClient isCustomEndpoint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1005a2420(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278df50);
  func_0x000107c3ceb0(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c49d0c();
  func_0x000107c61170(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 1005a2474; end: 1005a25bf;  */

void FUN_1005a2474(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  func_0x000107c61174();
  puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x000107c61174(param_2);
  uVar1 = param_1;
  func_0x000107c4e430(param_1);
  func_0x000107c61180();
  uVar2 = param_2;
  func_0x000107c4d9c0(param_2);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x000107c3ac40();
  func_0x000107c61180();
  puVar3 = puVar5;
  func_0x000107c44f08();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  if (puVar3 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar1 = param_1;
    func_0x000107c3ceb0(param_1);
    func_0x000107c61180();
    uVar2 = param_1;
    func_0x000107c44f08(param_1);
    func_0x000107c61180();
    uVar4 = uVar1;
    func_0x000107c5c184(uVar1);
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
    puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x000107c3ac40(PTR__OBJC_CLASS___NSURL_1126ae598);
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
  }
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1005a25c0; end: 1005a26df; -[SCCDNSelectionManager updateHostnameForUrl:] */

void FUN_1005a25c0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c3ceb0();
  func_0x000107c61180();
  func_0x000107c61170();
  lVar5 = param_3;
  if (lVar1 == 0) {
    func_0x000107c61174(param_3);
  }
  else {
    lVar1 = param_3;
    func_0x000107c3ceb0();
    func_0x000107c61180();
    lVar2 = param_1;
    func_0x000107c44374(param_1,param_2,lVar1);
    func_0x000107c61180();
    if (lVar2 == 0) {
      lVar3 = param_1;
      func_0x000107c4c470();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61174(param_3);
      }
      else {
        lVar4 = param_1;
        func_0x000107c3b018(param_1);
        lVar5 = lVar3;
        func_0x000107c44278(lVar3,param_2,param_3,lVar4);
        func_0x000107c61180();
        func_0x000107c5a284(param_1,param_2,lVar1,lVar5);
      }
      func_0x000107c61170(lVar3);
    }
    else {
      func_0x000107c61174(lVar2);
      lVar5 = lVar2;
    }
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 1005a26e0; end: 1005a272f; -[SCCDNSelectionManager getUrlFromCache:] */

void FUN_1005a26e0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x000107c43f40();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000107c4d9c0(uVar2,param_2,lVar1);
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1005a2730; end: 1005a27af; -[SCCDNSelectionManager getCacheKeyForUrlString:] */

void FUN_1005a2730(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c3b018();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f607d8;
  if (param_1 != 0x37e30d) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f607f8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f607b8;
  if (param_1 != 0x37af15) {
    ppuVar2 = ppuVar1;
  }
  func_0x000107c5c170(ppuVar2,param_2,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1005a27b0; end: 1005a2813; -[SCCDNSelectionManager _cdnRoutingRuleReachability] */

undefined8 FUN_1005a27b0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126dfd80;
  func_0x000107c4023c();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c40244();
  func_0x000107c61170(puVar1);
  if (puVar2 + -1 < (undefined *)0x4) {
    uVar3 = *(undefined8 *)(&UNK_10e56fbf0 + (long)(puVar2 + -1) * 8);
  }
  else {
    uVar3 = 0x179ec;
  }
  return uVar3;
}



/* Entry: 1005a2814; end: 1005a2873; -[SIGNavigationBarButtonImageView setSelected:overrideTintColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005a2814(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_4);
  *(undefined1 *)(param_1 + _DAT_112795038) = param_3;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112795040);
  *(undefined8 *)(param_1 + _DAT_112795040) = param_4;
  func_0x000107c61170(uVar1);
  func_0x000107c3c36c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be940f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetTintColor_1125829d8);
  return;
}



/* Entry: 1005a2874; end: 1005a292b; -[SIGNavigationBarButtonImageView _resetImage] */

/* WARNING: Possible PIC construction at 0x0001005a290c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005a2910) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005a2874(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x000107c3c77c();
  lVar2 = *(long *)(param_1 + _DAT_112795018);
  if ((int)lVar1 == 0) {
    if (lVar2 == 0) {
      return;
    }
    if ((*(byte *)(param_1 + _DAT_112795038) & 1) == 0) {
      lVar2 = *(long *)(param_1 + _DAT_112795014);
    }
  }
  else {
    if ((lVar2 == 0) || ((*(byte *)(param_1 + _DAT_112795038) & 1) == 0)) {
      lVar2 = *(long *)(param_1 + _DAT_112795014);
    }
    func_0x000107c45154(lVar2);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setImage__1126481e8,lVar2);
  return;
}



/* Entry: 1005a292c; end: 1005a296b; -[SIGNavigationBarButtonImageView _shouldOverrideColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1005a292c(long param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if (*(long *)(param_1 + _DAT_112795040) != 0) {
    if ((*(byte *)(param_1 + _DAT_112795058) & 1) == 0) {
      bVar1 = *(byte *)(param_1 + _DAT_11279505c) ^ 1;
    }
    else {
      bVar1 = 0;
    }
  }
  return bVar1 & 1;
}



/* Entry: 1005a296c; end: 1005a2a43; -[SIGNavigationBarButtonImageView _resetTintColor] */

/* WARNING: Possible PIC construction at 0x0001005a2a30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005a2a34) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005a296c(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = param_1;
  func_0x000107c3c77c();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if ((int)puVar2 != 0) {
    puVar2 = *(undefined **)(param_1 + _DAT_112795040);
    goto code_r0x000107c59e10;
  }
  if (param_1[_DAT_11279505c] == '\x01') {
    if ((param_1[_DAT_112795038] & 1) == 0) goto LAB_1005a2a14;
  }
  else {
    if (param_1[_DAT_112795038] == 0) {
      puVar2 = *(undefined **)(param_1 + _DAT_112795050);
      if (puVar2 != (undefined *)0x0) goto code_r0x000107c59e10;
LAB_1005a2a14:
      puVar2 = param_1;
      func_0x000107c3b820(param_1);
      func_0x000107c61180();
      goto code_r0x000107c59e10;
    }
    puVar2 = *(undefined **)(param_1 + _DAT_112795054);
    if (puVar2 != (undefined *)0x0) goto code_r0x000107c59e10;
  }
  func_0x000107c44e8c(param_1);
  func_0x000107c5af88(puVar1);
  func_0x000107c61180();
  puVar2 = puVar1;
code_r0x000107c59e10:
                    /* WARNING: Could not recover jumptable at 0x00010c216170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setTintColor__112663280,puVar2);
  return;
}



/* Entry: 1005a2a44; end: 1005a2aab; -[SIGNavigationBarButtonImageView _getDefaultTintColor] */

void FUN_1005a2a44(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x000107c3b824();
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c49820(param_1);
    func_0x000107c5af88(puVar2,param_2,lVar1);
    func_0x000107c61180();
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1005a2aac; end: 1005a2b13; -[SIGNavigationBarButtonImageView _getDefaultTintColorNumber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005a2aac(long param_1,undefined8 param_2)

{
  ulong uVar1;
  char cVar2;
  undefined *puVar3;
  ulong uVar4;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = *(ulong *)(param_1 + _DAT_11279501c);
  if (uVar4 != 0) {
    cVar2 = *(char *)(param_1 + _DAT_11279503c);
    func_0x000107c49820(uVar4);
    uVar1 = uVar4 | 0xffffffff80000000;
    if (cVar2 == '\0') {
      uVar1 = uVar4;
    }
    func_0x000107c4d960(puVar3,param_2,uVar1);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1005a2b14; end: 1005a2b1b; -[SCCDNSelectionManager mappedCofConfig] */

undefined8 FUN_1005a2b14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1005a2b1c; end: 1005a2c73; -[SCMappedCdnClientConfig getRoutedUrl:withReachability:] */

void FUN_1005a2b1c(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  func_0x000107c61174(param_3);
  puVar1 = param_3;
  func_0x000107c3ceb0(param_3);
  func_0x000107c61180();
  lVar2 = *(long *)(param_1 + 8);
  func_0x000107c40808();
  if (0 < lVar2) {
    lVar7 = 0;
    do {
      lVar3 = *(long *)(param_1 + 8);
      func_0x000107c4d9a4();
      func_0x000107c61180();
      lVar4 = lVar3;
      func_0x000107c44274();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar4 != 0) {
        puVar5 = param_3;
        func_0x000107c44f08(param_3);
        func_0x000107c61180();
        func_0x000107c4f890(puVar1);
        func_0x000107c61170(puVar5);
        puVar5 = puVar1;
        func_0x000107c5c180(puVar1);
        func_0x000107c61180();
        puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
        func_0x000107c3ac40(PTR__OBJC_CLASS___NSURL_1126ae598);
        func_0x000107c61180();
        func_0x000107c61170(puVar5);
        func_0x000107c61170(lVar4);
        goto LAB_1005a2c48;
      }
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
  }
  func_0x000107c61174(param_3);
  puVar6 = param_3;
LAB_1005a2c48:
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1005a2c74; end: 1005a2dcf; -[SCMappedRoutingDefinition getRoutedHost:withReachability:] */

void FUN_1005a2c74(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  func_0x000107c61174(param_3);
  if (*(long *)(param_1 + 0x10) == 0) {
    func_0x000107c4544c(param_1);
  }
  uVar1 = 0x179ec;
  FUN_1001a4848(0x179ec);
  func_0x000107c61180();
  lVar2 = *(long *)(param_1 + 8);
  func_0x000107c40808();
  if (0 < lVar2) {
    lVar7 = 0;
    do {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      func_0x000107c4d9a4(uVar3,param_2,lVar7);
      func_0x000107c61180();
      uVar4 = uVar3;
      func_0x000107c42a90();
      func_0x000107c61170(uVar3);
      if ((int)uVar4 != 0) {
        if ((param_4 == 0x37e30d) || (param_4 == 0x37af15)) {
          lVar5 = param_4;
          FUN_1001a4848(param_4);
          func_0x000107c61180();
          lVar6 = *(long *)(param_1 + 0x18);
          func_0x000107c4d9c0(lVar6,param_2,lVar5);
          func_0x000107c61180();
          func_0x000107c61170(lVar5);
        }
        else {
          lVar6 = *(long *)(param_1 + 0x18);
          func_0x000107c4d9c0(lVar6,param_2,uVar1);
          func_0x000107c61180();
        }
        if (lVar6 != 0) goto LAB_1005a2d98;
      }
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
  }
  lVar6 = 0;
LAB_1005a2d98:
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 1005a2dd0; end: 1005a2f3f; -[SCMappedRoutingDefinition initPredicates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005a2dd0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c40808(uVar1);
  func_0x000107c3e170(puVar4,param_2,uVar1);
  func_0x000107c61180();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar6 = *(long *)(param_1 + 8);
  func_0x000107c61174(lVar6);
  lVar3 = lVar6;
  func_0x000107c4080c(lVar6,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar3 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          func_0x000107c61128(lVar6);
        }
        puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
        func_0x000107c4ec60(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                            &PTR____CFConstantStringClassReference_110db3198);
        func_0x000107c61180();
        func_0x000107c3d798(puVar4,param_2,puVar2);
        func_0x000107c61170(puVar2);
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = lVar6;
      func_0x000107c4080c(lVar6,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar3 != 0);
  }
  func_0x000107c61170(lVar6);
  lVar3 = *(long *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar4;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  lVar6 = (long)_DAT_112794fc4;
  puVar4 = *(undefined **)(lVar3 + lVar6);
  func_0x000107c3de98();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
    puVar5 = *(undefined **)(lVar3 + lVar6);
    func_0x000107c3deac();
    func_0x000107c61180();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    if (puVar5 == (undefined *)0x0) {
      uVar1 = *(undefined8 *)(lVar3 + lVar6);
      func_0x000107c3e61c(uVar1);
      func_0x000107c5af88(puVar2,param_2,uVar1);
      func_0x000107c61180();
    }
    else {
      func_0x000107c61174(puVar5);
      puVar2 = puVar5;
    }
    func_0x000107c61170(puVar5);
  }
  else {
    func_0x000107c61174(puVar4);
    puVar2 = puVar4;
  }
  func_0x000107c61170(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1005a2f40; end: 1005a2fff; -[SIGNavigationBarButton _badgeColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005a2f40(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112794fc4;
  puVar1 = *(undefined **)(param_1 + lVar5);
  func_0x000107c3de98();
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = *(undefined **)(param_1 + lVar5);
    func_0x000107c3deac();
    func_0x000107c61180();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    if (puVar2 == (undefined *)0x0) {
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      func_0x000107c3e61c(uVar3);
      func_0x000107c5af88(puVar4,param_2,uVar3);
      func_0x000107c61180();
    }
    else {
      func_0x000107c61174(puVar2);
      puVar4 = puVar2;
    }
    func_0x000107c61170(puVar2);
  }
  else {
    func_0x000107c61174(puVar1);
    puVar4 = puVar1;
  }
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1005a3000; end: 1005a3007; -[SIGNavigationBarButtonItem appThemeBadgeColor] */

undefined8 FUN_1005a3000(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1005a3008; end: 1005a300f; -[SIGNavigationBarButtonItem appThemeHighlightColor] */

undefined8 FUN_1005a3008(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1005a3010; end: 1005a3017; -[SIGNavigationBarButtonItem badgeColor] */

undefined8 FUN_1005a3010(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1005a3018; end: 1005a301f; -[SIGNavigationBarButtonItem appThemeBadgeImage] */

undefined8 FUN_1005a3018(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1005a3020; end: 1005a30d3; -[SIGNavigationBarButton updateTitleLabelStyleIfNeeded] */

/* WARNING: Possible PIC construction at 0x0001005a30bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005a30c0) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005a3020(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112794fe8;
  if (*(long *)(param_1 + lVar4) != 0) {
    lVar1 = param_1;
    func_0x000107c4a3b4();
    func_0x000107c526c0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar4));
    lVar3 = *(long *)(param_1 + _DAT_112795000);
    if (lVar3 == 0) {
      lVar3 = param_1;
      if ((int)lVar1 == 0) {
        func_0x000107c3b438(param_1);
        func_0x000107c61180();
      }
      else {
        func_0x000107c3b984();
        func_0x000107c61180();
      }
      uVar2 = *(undefined8 *)(param_1 + lVar4);
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + lVar4);
    }
                    /* WARNING: Could not recover jumptable at 0x00010c213190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_setTextColor__112662688,lVar3);
    return;
  }
  return;
}



/* Entry: 1005a30d4; end: 1005a3177; -[SIGNavigationBarButton _defaultLabelColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005a30d4(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112794fc4;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
  func_0x000107c44e80();
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + lVar5);
    func_0x000107c3dea8();
    func_0x000107c61180();
    if (lVar2 != 0) {
      puVar3 = *(undefined **)(param_1 + lVar5);
      func_0x000107c3dea8(puVar3);
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      goto LAB_1005a3164;
    }
  }
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  uVar4 = *(undefined8 *)(param_1 + _DAT_112794fe4);
  func_0x000107c415bc(uVar4);
  func_0x000107c5af88(puVar3,param_2,uVar4);
  func_0x000107c61180();
LAB_1005a3164:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1005a3178; end: 1005a317f; -[SIGNavigationBarButtonItem highlightLabelWithAppThemeColor] */

undefined1 FUN_1005a3178(long param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}



/* Entry: 1005a3180; end: 1005a31cb; -[SIGNavigationBarButtonImageView defaultLabelColor] */

long FUN_1005a3180(long param_1)

{
  long lVar1;
  
  func_0x000107c3b824();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar1 = 0xd5;
  }
  else {
    lVar1 = param_1;
    func_0x000107c49820(param_1);
  }
  func_0x000107c61170(param_1);
  return lVar1;
}



/* Entry: 1005a31cc; end: 1005a31d3; -[SIGNavigationBarButtonItem setHighlightLabelWithAppThemeColor:] */

void FUN_1005a31cc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x14) = param_3;
  return;
}



/* Entry: 1005a31d4; end: 1005a3267; -[SIGNavigationBarButtonItem setTitle:] */

void FUN_1005a31d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1005a3268;
  puStack_40 = &UNK_110d62ca0;
  lStack_38 = param_1;
  func_0x000107c437dc(param_1,param_2,&puStack_58);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1005a3268; end: 1005a32b7;  */

void FUN_1005a3268(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  func_0x000107c61174(param_2);
  uVar1 = param_2;
  func_0x000107c61164(param_2,PTR_s_navigationBarButtonItem_didChang_112613340);
  if ((uVar1 & 1) != 0) {
    func_0x000107c4d4f4(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1005a32b8; end: 1005a32bb; -[SIGNavigationBarView navigationBarButtonItem:didChangeTitle:] */

void FUN_1005a32b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd84f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__calculateCaretViewVisibility_112553ad8);
  return;
}



/* Entry: 1005a32bc; end: 1005a331b; -[SIGNavigationBarButton navigationBarButtonItem:didChangeTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005a32bc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112794fc4);
  func_0x000107c5cab0(uVar1);
  func_0x000107c61180();
  func_0x000107c59c6c(*(undefined8 *)(param_1 + _DAT_112794fe8));
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc48d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__activateAllConstraints_11254ebd0);
  return;
}



/* Entry: 1005a331c; end: 1005a3377;  */

void FUN_1005a331c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c4e78;
  func_0x000107c3e394(PTR_PTR_1126c4e78);
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  func_0x000107c610f4(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  func_0x000107c48af8();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1005a3378; end: 1005a3523; +[SIGTypography attributesWithStyle:modifiers:alignment:lineBreakMode:scaleForAccessibility:maximumFontSize:compatibleWithTraitCollection:] */

void FUN_1005a3378(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 ***param_9)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar1 = param_9;
  func_0x000107c61174();
  FUN_10052bbec();
  func_0x000107c61180();
  pppuVar2 = pppuVar1;
  func_0x000107c43788(param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_9);
  puVar3 = PTR__OBJC_CLASS___NSParagraphStyle_1126af948;
  func_0x000107c415f0();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c4d2d4();
  func_0x000107c61170(puVar3);
  func_0x000107c52610(puVar4,param_3,param_6);
  func_0x000107c55f80(puVar4,param_3,param_7);
  ppuVar7 = (undefined **)&ppuStack_78;
  uVar8 = 0;
  uVar9 = 2;
  pppuVar5 = (undefined8 ***)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_78 = pppuVar2;
  puStack_70 = puVar4;
  func_0x000107c419ac();
  func_0x000107c61180();
  pppuVar6 = pppuVar5;
  func_0x000107c4d2d4();
  func_0x000107c61170(pppuVar5);
  if ((param_5 & 1) != 0) {
    uVar8 = *(ulong *)PTR__NSStrikethroughStyleAttributeName_110345838;
    ppuVar7 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110da800;
    func_0x000107c56bd8(pppuVar6);
  }
  pppuVar5 = pppuVar6;
  func_0x000107c40794();
  func_0x000107c61170(pppuVar6);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(pppuVar2);
  func_0x000107c61170(pppuVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) goto LAB_107c61110;
  func_0x000107c60e78();
  func_0x000107c61174(uVar9);
  if ((uVar8 & 1) == 0) {
    func_0x000107c43780(pppuVar1,param_3,ppuVar7);
    func_0x000107c61180();
    pppuVar5 = pppuVar1;
    goto LAB_1005a3774;
  }
  puVar3 = PTR_PTR_1126c4e78;
  func_0x000107c5c234(PTR_PTR_1126c4e78,param_3,ppuVar7);
  func_0x000107c61180();
  switch(ppuVar7) {
  case (undefined **)0x0:
    func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520,param_3,
                        *(undefined8 *)PTR__NSInvalidArgumentException_11034aa50,
                        &PTR____CFConstantStringClassReference_110f97658);
  case (undefined **)0x1:
    uVar10 = 0x4041000000000000;
    break;
  case (undefined **)0x2:
    uVar10 = 0x403c000000000000;
    break;
  case (undefined **)0x3:
    uVar10 = 0x4036000000000000;
    break;
  case (undefined **)0x4:
    uVar10 = 0x4034000000000000;
    break;
  case (undefined **)0x5:
  case (undefined **)0xc:
    uVar10 = 0x4032000000000000;
    break;
  case (undefined **)0x6:
  case (undefined **)0x15:
    uVar10 = 0x402c000000000000;
    goto code_r0x0001005a3750;
  case (undefined **)0x7:
  case (undefined **)0xf:
  case (undefined **)0x12:
    uVar10 = 0x402c000000000000;
    break;
  case (undefined **)0x8:
    uVar10 = 0x4033000000000000;
    goto code_r0x0001005a3728;
  case (undefined **)0x9:
  case (undefined **)0x1b:
    uVar10 = 0x4030000000000000;
    goto code_r0x0001005a3728;
  case (undefined **)0xa:
  case (undefined **)0x1c:
    uVar10 = 0x402a000000000000;
    goto code_r0x0001005a3728;
  case (undefined **)0xb:
  case (undefined **)0x10:
  case (undefined **)0x1d:
    uVar10 = 0x4028000000000000;
    goto code_r0x0001005a3728;
  case (undefined **)0xd:
  case (undefined **)0x14:
    uVar10 = 0x4030000000000000;
    goto code_r0x0001005a3750;
  case (undefined **)0xe:
  case (undefined **)0x16:
    uVar10 = 0x4030000000000000;
    break;
  case (undefined **)0x11:
  case (undefined **)0x18:
    uVar10 = 0x4028000000000000;
    break;
  case (undefined **)0x13:
  case (undefined **)0x22:
    uVar10 = 0x4024000000000000;
    break;
  case (undefined **)0x17:
    uVar10 = 0x4028000000000000;
    goto code_r0x0001005a3750;
  case (undefined **)0x19:
  case (undefined **)0x21:
    uVar10 = 0x4024000000000000;
code_r0x0001005a3750:
    ppuVar7 = (undefined **)PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x000107c4ca9c(uVar10,param_1,PTR__OBJC_CLASS___UIFont_1126aec38,param_3,puVar3,uVar9);
    func_0x000107c61180();
    goto LAB_1005a376c;
  case (undefined **)0x1a:
    uVar10 = 0x4031000000000000;
    goto code_r0x0001005a3728;
  case (undefined **)0x1e:
    uVar10 = 0x4022000000000000;
    goto code_r0x0001005a3728;
  case (undefined **)0x1f:
    uVar10 = 0x4031000000000000;
    break;
  case (undefined **)0x20:
    uVar10 = 0x402e000000000000;
code_r0x0001005a3728:
    ppuVar7 = (undefined **)PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x000107c3eb94(uVar10,param_1,PTR__OBJC_CLASS___UIFont_1126aec38,param_3,puVar3,uVar9);
    func_0x000107c61180();
  default:
    goto LAB_1005a376c;
  }
  ppuVar7 = (undefined **)PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c417a0(uVar10,param_1,PTR__OBJC_CLASS___UIFont_1126aec38,param_3,puVar3,uVar9);
  func_0x000107c61180();
LAB_1005a376c:
  func_0x000107c61170(puVar3);
  pppuVar5 = (undefined8 ***)ppuVar7;
LAB_1005a3774:
  func_0x000107c61170(uVar9);
LAB_107c61110:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar5);
  return;
}



/* Entry: 1005a3524; end: 1005a3797; -[SIGStylesBase fontForStyle:scaleForAccessibility:maximumFontSize:compatibleWithTraitCollection:] */

void FUN_1005a3524(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined *param_4,
                  ulong param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_6);
  if ((param_5 & 1) == 0) {
    func_0x000107c43780(param_2,param_3,param_4);
    func_0x000107c61180();
    goto LAB_1005a3774;
  }
  puVar1 = PTR_PTR_1126c4e78;
  func_0x000107c5c234(PTR_PTR_1126c4e78,param_3,param_4);
  func_0x000107c61180();
  switch(param_4) {
  case (undefined *)0x0:
    func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520,param_3,
                        *(undefined8 *)PTR__NSInvalidArgumentException_11034aa50,
                        &PTR____CFConstantStringClassReference_110f97658);
  case (undefined *)0x1:
    uVar2 = 0x4041000000000000;
    break;
  case (undefined *)0x2:
    uVar2 = 0x403c000000000000;
    break;
  case (undefined *)0x3:
    uVar2 = 0x4036000000000000;
    break;
  case (undefined *)0x4:
    uVar2 = 0x4034000000000000;
    break;
  case (undefined *)0x5:
  case (undefined *)0xc:
    uVar2 = 0x4032000000000000;
    break;
  case (undefined *)0x6:
  case (undefined *)0x15:
    uVar2 = 0x402c000000000000;
    goto code_r0x0001005a3750;
  case (undefined *)0x7:
  case (undefined *)0xf:
  case (undefined *)0x12:
    uVar2 = 0x402c000000000000;
    break;
  case (undefined *)0x8:
    uVar2 = 0x4033000000000000;
    goto code_r0x0001005a3728;
  case (undefined *)0x9:
  case (undefined *)0x1b:
    uVar2 = 0x4030000000000000;
    goto code_r0x0001005a3728;
  case (undefined *)0xa:
  case (undefined *)0x1c:
    uVar2 = 0x402a000000000000;
    goto code_r0x0001005a3728;
  case (undefined *)0xb:
  case (undefined *)0x10:
  case (undefined *)0x1d:
    uVar2 = 0x4028000000000000;
    goto code_r0x0001005a3728;
  case (undefined *)0xd:
  case (undefined *)0x14:
    uVar2 = 0x4030000000000000;
    goto code_r0x0001005a3750;
  case (undefined *)0xe:
  case (undefined *)0x16:
    uVar2 = 0x4030000000000000;
    break;
  case (undefined *)0x11:
  case (undefined *)0x18:
    uVar2 = 0x4028000000000000;
    break;
  case (undefined *)0x13:
  case (undefined *)0x22:
    uVar2 = 0x4024000000000000;
    break;
  case (undefined *)0x17:
    uVar2 = 0x4028000000000000;
    goto code_r0x0001005a3750;
  case (undefined *)0x19:
  case (undefined *)0x21:
    uVar2 = 0x4024000000000000;
code_r0x0001005a3750:
    param_4 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x000107c4ca9c(uVar2,param_1,PTR__OBJC_CLASS___UIFont_1126aec38,param_3,puVar1,param_6);
    func_0x000107c61180();
    goto LAB_1005a376c;
  case (undefined *)0x1a:
    uVar2 = 0x4031000000000000;
    goto code_r0x0001005a3728;
  case (undefined *)0x1e:
    uVar2 = 0x4022000000000000;
    goto code_r0x0001005a3728;
  case (undefined *)0x1f:
    uVar2 = 0x4031000000000000;
    break;
  case (undefined *)0x20:
    uVar2 = 0x402e000000000000;
code_r0x0001005a3728:
    param_4 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x000107c3eb94(uVar2,param_1,PTR__OBJC_CLASS___UIFont_1126aec38,param_3,puVar1,param_6);
    func_0x000107c61180();
  default:
    goto LAB_1005a376c;
  }
  param_4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c417a0(uVar2,param_1,PTR__OBJC_CLASS___UIFont_1126aec38,param_3,puVar1,param_6);
  func_0x000107c61180();
LAB_1005a376c:
  func_0x000107c61170(puVar1);
  param_2 = param_4;
LAB_1005a3774:
  func_0x000107c61170(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1005a3798; end: 1005a395f; -[SIGStylesBase fontForStyle:] */

void FUN_1005a3798(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  switch(param_3) {
  case 0:
    func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        *(undefined8 *)PTR__NSInvalidArgumentException_11034aa50,
                        &PTR____CFConstantStringClassReference_110f97658);
  case 1:
    uVar1 = 0x4041000000000000;
    break;
  case 2:
    uVar1 = 0x403c000000000000;
    break;
  case 3:
    uVar1 = 0x4036000000000000;
    break;
  case 4:
    uVar1 = 0x4034000000000000;
    break;
  case 5:
  case 0xc:
    uVar1 = 0x4032000000000000;
    break;
  case 6:
  case 0x15:
    uVar1 = 0x402c000000000000;
    goto code_r0x0001005a3948;
  case 7:
  case 0xf:
  case 0x12:
    uVar1 = 0x402c000000000000;
    break;
  case 8:
    uVar1 = 0x4033000000000000;
    goto code_r0x0001005a3910;
  case 9:
    uVar1 = 0x4030000000000000;
    goto code_r0x0001005a3910;
  case 10:
    uVar1 = 0x402a000000000000;
    goto code_r0x0001005a3910;
  case 0xb:
  case 0x10:
    uVar1 = 0x4028000000000000;
    goto code_r0x0001005a3910;
  case 0xd:
  case 0x14:
    uVar1 = 0x4030000000000000;
    goto code_r0x0001005a3948;
  case 0xe:
  case 0x16:
  case 0x1a:
  case 0x1b:
    uVar1 = 0x4030000000000000;
    break;
  case 0x11:
  case 0x18:
  case 0x1d:
    uVar1 = 0x4028000000000000;
    break;
  case 0x13:
  case 0x22:
    uVar1 = 0x4024000000000000;
    break;
  case 0x17:
    uVar1 = 0x4028000000000000;
    goto code_r0x0001005a3948;
  case 0x19:
  case 0x21:
    uVar1 = 0x4024000000000000;
code_r0x0001005a3948:
    func_0x000107c4ca94(uVar1,PTR__OBJC_CLASS___UIFont_1126aec38);
    func_0x000107c61180();
    goto LAB_107c61110;
  case 0x1c:
    uVar1 = 0x402a000000000000;
    break;
  case 0x1e:
    uVar1 = 0x4022000000000000;
    goto code_r0x0001005a3910;
  case 0x1f:
    uVar1 = 0x4031000000000000;
    break;
  case 0x20:
    uVar1 = 0x402e000000000000;
code_r0x0001005a3910:
    func_0x000107c3eb8c(uVar1,PTR__OBJC_CLASS___UIFont_1126aec38);
    func_0x000107c61180();
  default:
    goto LAB_107c61110;
  }
  func_0x000107c4179c(uVar1,PTR__OBJC_CLASS___UIFont_1126aec38);
  func_0x000107c61180();
LAB_107c61110:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1005a3960; end: 1005a398f;  */

void FUN_1005a3960(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6d6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,0,param_2,PTR_s_demiBoldAvenirNextFontOfSize_for_1125b8f60,
             *(undefined8 *)PTR__UIFontTextStyleBody_110345bd8,0,0);
  return;
}



/* Entry: 1005a3990; end: 1005a3c43;  */

void FUN_1005a3990(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  int iVar2;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined **ppuVar8;
  undefined1 *puVar9;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uVar3;
  
  ppuVar8 = &puStack_a0;
  func_0x000107c61174();
  func_0x000107c61174(param_5);
  uVar3 = param_6;
  func_0x000107c61174();
  iVar2 = (int)uVar3;
  func_0x000107c60b90();
  if (iVar2 != 0) {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_6);
    func_0x000107c61174(param_3);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
  }
  puVar4 = PTR_PTR_1126e1948;
  if (param_4 == 0) {
    func_0x000107c4a8d8(param_1,PTR_PTR_1126e1948);
    func_0x000107c61180();
  }
  else {
    func_0x000107c4a8d4();
    func_0x000107c61180();
  }
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1005a3db4;
  puStack_88 = &UNK_110d660f8;
  func_0x000107c61174(param_3);
  uStack_80 = param_3;
  uStack_78 = param_1;
  func_0x000107c61174(puVar4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(&puStack_a0);
  if (lRam00000001137fbf68 != -1) {
    FUN_10002a2fc(0x1137fbf68,&PTR___NSConcreteGlobalBlock_110d66128);
  }
  puVar5 = puVar4;
  func_0x000107c5181c(puVar4);
  puVar6 = puVar4;
  func_0x000107c5c224(puVar4);
  func_0x000107c61180();
  puVar1 = puRam00000001137fbf60;
  func_0x000107c61174(puRam00000001137fbf60);
  func_0x000107c611a4(puVar1);
  puVar7 = puRam00000001137fbf60;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  if (puVar7 == (undefined1 *)0x0) {
    (*pcStack_90)();
    func_0x000107c61180();
    if (ppuVar8 != (undefined **)0x0) {
      func_0x000107c56bd8(puRam00000001137fbf60);
    }
    func_0x000107c611a8(puVar1);
    func_0x000107c61170(puVar1);
    puVar9 = (undefined1 *)ppuVar8;
    FUN_1005a4334(param_2,ppuVar8,puVar5,puVar6,param_6);
    func_0x000107c61180();
  }
  else {
    puVar9 = puVar7;
    FUN_1005a4334(param_2,puVar7,puVar5,puVar6,param_6);
    func_0x000107c61180();
    func_0x000107c611a8(puVar1);
    func_0x000107c61170(puVar1);
    ppuVar8 = (undefined **)puVar7;
  }
  func_0x000107c61170(puVar6);
  func_0x000107c61170(ppuVar8);
  func_0x000107c61170(&puStack_a0);
  func_0x000107c61170(param_6);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uStack_80);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1005a3c44; end: 1005a3caf; +[SCFontCacheKey keyForUnscaledFontWithName:pointSize:] */

void FUN_1005a3c44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1948;
  func_0x000107c61174(param_4);
  func_0x000107c610f4(puVar1);
  func_0x000107c478ec(param_1);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1005a3cb0; end: 1005a3d6f; -[SCFontCacheKey initWithName:pointSize:scalable:style:] */

undefined1 *
FUN_1005a3cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_11270b7f8;
  uStack_50 = param_2;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined1 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1005a3d70; end: 1005a3da3;  */

void FUN_1005a3d70(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c41988();
  func_0x000107c61180();
  uVar1 = puRam00000001137fbf60;
  puRam00000001137fbf60 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1005a3da4; end: 1005a3dab; -[SCFontCacheKey scalable] */

undefined1 FUN_1005a3da4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 1005a3dac; end: 1005a3db3; -[SCFontCacheKey style] */

undefined8 FUN_1005a3dac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1005a3db4; end: 1005a42a7;  */

undefined * FUN_1005a3db4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = *(long *)(param_1 + 0x20);
  uVar17 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61174(lVar13);
  puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x000107c4ecac();
  func_0x000107c61180();
  func_0x000107c61174();
  puVar9 = puVar2;
  func_0x000107c4080c();
  lVar10 = lRam0000000000000000;
  do {
    if (puVar9 == (undefined *)0x0) {
      func_0x000107c61170(puVar2);
      puVar9 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x000107c43794(uVar17,PTR__OBJC_CLASS___UIFont_1126aec38);
      func_0x000107c61180();
LAB_1005a4254:
      func_0x000107c61170(puVar2);
      func_0x000107c61170();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
        return puVar9;
      }
      func_0x000107c60e78();
      puVar9 = *(undefined **)(lVar13 + 8);
      func_0x000107c44c3c(puVar9);
      if (*(char *)(lVar13 + 0x18) == '\x01') {
        lVar10 = *(long *)(lVar13 + 0x20);
        func_0x000107c44c3c(lVar10);
        puVar9 = (undefined *)
                 ((long)(*(double *)(lVar13 + 0x10) +
                        (double)(ulong)((lVar10 + (long)puVar9 * 0x25) * 0x25)) | 0x8000000000000000
                 );
      }
      return puVar9;
    }
    puVar12 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar10) {
        func_0x000107c61128(puVar2);
      }
      iVar1 = (int)*(undefined8 *)((long)puVar12 * 8);
      func_0x000107c44a40();
      if (iVar1 != 0) {
        puVar12 = PTR__OBJC_CLASS___UIFont_1126aec38;
        func_0x000107c43794(uVar17);
        func_0x000107c61180();
        puVar3 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
        func_0x000107c610fc();
        puVar4 = puVar12;
        func_0x000107c43778();
        func_0x000107c61180();
        puVar9 = puVar4;
        func_0x000107c43774();
        func_0x000107c61180();
        puVar5 = puVar9;
        func_0x000107c4d9e8();
        func_0x000107c61180();
        func_0x000107c61170(puVar9);
        func_0x000107c61174(puVar5);
        puVar9 = puVar5;
        func_0x000107c4080c();
        lVar10 = lRam0000000000000000;
        while (puVar9 != (undefined *)0x0) {
          puVar14 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar10) {
              func_0x000107c61128(puVar5);
            }
            uVar15 = *(ulong *)((long)puVar14 * 8);
            func_0x000107c43774();
            func_0x000107c61180();
            uVar6 = uVar15;
            func_0x000107c4d9e8();
            func_0x000107c61180();
            uVar7 = uVar6;
            func_0x000107c4040c();
            func_0x000107c61170(uVar6);
            func_0x000107c61170(uVar15);
            if ((uVar7 & 1) == 0) {
              func_0x000107c3d798(puVar3);
            }
            puVar14 = puVar14 + 1;
          } while (puVar9 != puVar14);
          puVar9 = puVar5;
          func_0x000107c4080c();
        }
        func_0x000107c61170(puVar5);
        puVar9 = PTR__OBJC_CLASS___NSLocale_1126af788;
        func_0x000107c4ecac(PTR__OBJC_CLASS___NSLocale_1126af788);
        func_0x000107c61180();
        puVar14 = puVar12;
        func_0x000107c60a78(puVar12,puVar9);
        func_0x000107c61170(puVar9);
        func_0x000107c61174(puVar14);
        puVar9 = puVar14;
        func_0x000107c4080c();
        lVar10 = lRam0000000000000000;
        while (puVar9 != (undefined *)0x0) {
          puVar16 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar10) {
              func_0x000107c61128(puVar14);
            }
            uVar15 = *(ulong *)((long)puVar16 * 8);
            func_0x000107c43774();
            func_0x000107c61180();
            uVar6 = uVar15;
            func_0x000107c4d9e8();
            func_0x000107c61180();
            uVar7 = uVar6;
            func_0x000107c4040c();
            func_0x000107c61170(uVar6);
            func_0x000107c61170(uVar15);
            if ((uVar7 & 1) == 0) {
              func_0x000107c3d798(puVar3);
            }
            puVar16 = puVar16 + 1;
          } while (puVar9 != puVar16);
          puVar9 = puVar14;
          func_0x000107c4080c();
        }
        func_0x000107c61170(puVar14);
        puVar9 = puVar4;
        func_0x000107c43774();
        func_0x000107c61180();
        puVar16 = puVar9;
        func_0x000107c4d2d4();
        func_0x000107c61170(puVar9);
        puVar9 = puVar3;
        func_0x000107c3e15c(puVar3);
        func_0x000107c61180();
        func_0x000107c56bd8(puVar16);
        func_0x000107c61170(puVar9);
        puVar8 = PTR__OBJC_CLASS___UIFontDescriptor_1126bb390;
        func_0x000107c610f4();
        func_0x000107c46980();
        puVar9 = PTR__OBJC_CLASS___UIFont_1126aec38;
        func_0x000107c4eaec(puVar12);
        func_0x000107c43790(puVar9);
        func_0x000107c61180();
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar16);
        func_0x000107c61170(puVar14);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puVar12);
        func_0x000107c61170(puVar2);
        goto LAB_1005a4254;
      }
      puVar12 = puVar12 + 1;
    } while (puVar9 != puVar12);
    puVar9 = puVar2;
    func_0x000107c4080c();
  } while( true );
}



/* Entry: 1005a42a8; end: 1005a430f; -[SCFontCacheKey hash] */

ulong FUN_1005a42a8(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x000107c44c3c(uVar1);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x000107c44c3c(lVar2);
    uVar1 = (long)(*(double *)(param_1 + 0x10) + (double)((lVar2 + uVar1 * 0x25) * 0x25)) |
            0x8000000000000000;
  }
  return uVar1;
}



/* Entry: 1005a4310; end: 1005a4333; -[SCFontCacheKey copyWithZone:] */

undefined8 FUN_1005a4310(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 1005a4334; end: 1005a441b;  */

void FUN_1005a4334(double param_1,undefined *param_2,int param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c61174();
  func_0x000107c61174(param_5);
  puVar2 = param_2;
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIFontMetrics_1126d9278;
    func_0x000107c4ce88(PTR__OBJC_CLASS___UIFontMetrics_1126d9278);
    func_0x000107c61180();
    puVar2 = puVar1;
    if (param_1 <= 0.0) {
      if (param_5 == 0) {
        func_0x000107c51840();
        func_0x000107c61180();
      }
      else {
        func_0x000107c51844();
        func_0x000107c61180();
      }
    }
    else if (param_5 == 0) {
      func_0x000107c51848(param_1);
      func_0x000107c61180();
    }
    else {
      func_0x000107c5184c();
      func_0x000107c61180();
    }
    func_0x000107c61170(param_2);
    func_0x000107c61170(puVar1);
  }
  func_0x000107c61170(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1005a441c; end: 1005a45a3;  */

void FUN_1005a441c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar1 = param_1;
  func_0x000107c4adac();
  if (lVar1 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    lVar1 = param_1;
    func_0x000107c4d2d4();
    func_0x000107c3e780();
    uVar3 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
    lVar2 = param_1;
    func_0x000107c4adac(param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    uStack_60 = 0x1005a450c;
    puStack_58 = &UNK_110d660c8;
    lStack_50 = lVar1;
    uStack_48 = param_3;
    func_0x000107c61174(lVar1);
    func_0x000107c429b4(param_1,param_2,uVar3,0,lVar2,0,&puStack_70);
    func_0x000107c4280c(lVar1);
    param_1 = lVar1;
    func_0x000107c40794(lVar1);
    func_0x000107c61170(lStack_50);
    func_0x000107c61170(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1005a45a4; end: 1005a45d7; -[SIGNavigationBarButtonItem setTarget:action:] */

void FUN_1005a45a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c611a0(param_1 + 0x78,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = param_4;
  *(undefined8 *)(param_1 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1005a45d8; end: 1005a467f; -[SCCapriIconConfig .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001005a45f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005a45f4) */

void FUN_1005a45d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 1005a4680; end: 1005a4ddb; -[SCFriendsFeedNavigationServiceImpl initWithTabItemUiContainer:swipeViewContainer:navigationLogger:userInfoServices:appLifecycleManager:parentController:swipeViewParentDelegate:startChatDelegate:friendsFeedScopeServices:friendsFeedScopeExposer:purgeBehavior:preloadDelayInMilliseconds:pageLoadMetricManager:circumstanceEngine:appStartExperimentReader:messagingExperimentService:appGroupUserDefaults:tabPresentationInterceptor:featureStartupEventBus:barStyle:preferences:deckTransitionObservable:simpleSnapchatExperimentConfigProvider:storiesConfigProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1005a4680(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined4 param_18,undefined4 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,long param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_20);
  func_0x000107c61174(param_25);
  func_0x000107c61174(param_26);
  func_0x000107c61174(param_27);
  puStack_a0 = PTR_PTR_1126f3598;
  puVar2 = &uStack_a8;
  uStack_a8 = param_1;
  func_0x000107c61154(puVar2,PTR_s_initWithTabItemUiContainer_swipe_112531d88,param_3,param_4,
                      param_12,param_7,param_13,param_14,param_16,param_17,param_21,param_22,param_6
                      ,param_23,param_24);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x000107c611a0((long)puVar2 + (long)_DAT_11275142c,param_5);
    func_0x000107c611a0((long)puVar2 + (long)_DAT_112751430,param_8);
    func_0x000107c611a0((long)puVar2 + (long)_DAT_112751434,param_9);
    func_0x000107c611a0((long)puVar2 + (long)_DAT_112751438,param_10);
    lVar11 = (long)_DAT_11275143c;
    func_0x000107c61174(param_11);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar11);
    *(undefined8 *)((long)puVar2 + lVar11) = param_11;
    func_0x000107c61170(uVar3);
    lVar11 = (long)_DAT_112751440;
    func_0x000107c61174(param_12);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar11);
    *(undefined8 *)((long)puVar2 + lVar11) = param_12;
    func_0x000107c61170(uVar3);
    lVar11 = (long)_DAT_112751444;
    func_0x000107c61174(param_15);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar11);
    *(undefined8 *)((long)puVar2 + lVar11) = param_15;
    func_0x000107c61170(uVar3);
    lVar11 = (long)_DAT_112751448;
    func_0x000107c61174(param_16);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar11);
    *(undefined8 *)((long)puVar2 + lVar11) = param_16;
    func_0x000107c61170(uVar3);
    lVar11 = (long)_DAT_11275144c;
    func_0x000107c61174(param_17);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar11);
    *(undefined8 *)((long)puVar2 + lVar11) = param_17;
    func_0x000107c61170(uVar3);
    *(long *)((long)puVar2 + (long)_DAT_112751450) = param_23;
    func_0x000107c611a0((long)puVar2 + (long)_DAT_112751454,param_3);
    uVar3 = param_3;
    func_0x000107c4d4bc();
    func_0x000107c61180();
    uVar9 = *(undefined8 *)((long)puVar2 + (long)_DAT_112751458);
    *(undefined8 *)((long)puVar2 + (long)_DAT_112751458) = uVar3;
    func_0x000107c61170(uVar9);
    lVar11 = (long)_DAT_11275145c;
    func_0x000107c61174(param_25);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar11);
    *(undefined8 *)((long)puVar2 + lVar11) = param_25;
    func_0x000107c61170(uVar3);
    lVar11 = (long)_DAT_112751460;
    func_0x000107c61174(param_26);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar11);
    *(undefined8 *)((long)puVar2 + lVar11) = param_26;
    func_0x000107c61170(uVar3);
    lVar11 = (long)_DAT_112751464;
    func_0x000107c61174(param_27);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar11);
    *(undefined8 *)((long)puVar2 + lVar11) = param_27;
    func_0x000107c61170(uVar3);
    puVar10 = PTR_PTR_1126ba610;
    func_0x000107c610f4();
    func_0x000107c49308();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112751468);
    *(undefined **)((long)puVar2 + (long)_DAT_112751468) = puVar10;
    func_0x000107c61170(uVar3);
    puVar10 = PTR_PTR_1126ae810;
    func_0x000107c610fc();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11275146c);
    *(undefined **)((long)puVar2 + (long)_DAT_11275146c) = puVar10;
    func_0x000107c61170(uVar3);
    uVar3 = param_3;
    func_0x000107c4d500();
    func_0x000107c61180();
    lVar11 = (long)_DAT_112751470;
    uVar9 = *(undefined8 *)((long)puVar2 + lVar11);
    *(undefined8 *)((long)puVar2 + lVar11) = uVar3;
    func_0x000107c61170(uVar9);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar11);
    func_0x000107c520f4(uVar3);
    func_0x0001005a52c0();
    func_0x000107c61180();
    func_0x000107c520fc(*(undefined8 *)((long)puVar2 + lVar11));
    func_0x000107c61170(uVar3);
    puVar4 = puVar2;
    func_0x000107c3c80c();
    puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61180();
    uVar3 = param_3;
    func_0x000107c4d4bc(param_3);
    func_0x000107c61180();
    func_0x000107c52b50();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar10);
    if (param_23 != 1 && ((ulong)puVar4 & 1) == 0) {
      puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c61180();
    }
    else {
      puVar10 = (undefined *)0x0;
    }
    uVar3 = param_3;
    func_0x000107c4d4bc(param_3);
    func_0x000107c61180();
    func_0x000107c59ecc();
    func_0x000107c61170(uVar3);
    if (param_23 != 1 && ((ulong)puVar4 & 1) == 0) {
      func_0x000107c61170(puVar10);
    }
    uVar3 = param_3;
    func_0x000107c4d4bc(param_3);
    func_0x000107c61180();
    uVar9 = uVar3;
    func_0x000107c5cf3c();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    puVar10 = PTR_PTR_1126ce598;
    func_0x000107c61158(PTR_PTR_1126ce598);
    func_0x000107c6115c(uVar9,puVar10);
    func_0x000107c61170(uVar9);
    uVar3 = param_3;
    func_0x000107c4d4bc(param_3);
    func_0x000107c61180();
    func_0x000107c591f8();
    func_0x000107c61170(uVar3);
    uVar3 = param_4;
    func_0x000107c437a8();
    func_0x000107c61180();
    iVar1 = (int)*(undefined8 *)((long)puVar2 + (long)_DAT_112751474);
    *(undefined8 *)((long)puVar2 + (long)_DAT_112751474) = uVar3;
    func_0x000107c61170();
    FUN_100456ca0();
    uVar3 = 0x3ff8000000000000;
    if (iVar1 == 0) {
      uVar3 = 0x3ff0000000000000;
    }
    ppuVar5 = &PTR____CFConstantStringClassReference_110e60ab8;
    FUN_10059c4fc(uVar3,&PTR____CFConstantStringClassReference_110e60ab8,
                  &PTR____CFConstantStringClassReference_110e60ad8,0x7e,0x77,param_23);
    func_0x000107c61180();
    puVar10 = PTR_PTR_1126c56e0;
    func_0x000107c610f4();
    ppuVar6 = ppuVar5;
    func_0x000107c415ac(ppuVar5);
    func_0x000107c61180();
    ppuVar7 = ppuVar5;
    func_0x000107c44e78(ppuVar5);
    func_0x000107c61180();
    func_0x000107c41578(ppuVar5);
    func_0x000107c44e70(ppuVar5);
    func_0x000107c44e70(ppuVar5);
    func_0x000107c3e624(ppuVar5);
    uVar9 = uVar3;
    func_0x000107c3e628(ppuVar5);
    ppuVar8 = ppuVar5;
    uVar12 = uVar9;
    func_0x000107c3e650();
    iVar1 = (int)ppuVar8;
    FUN_100456ca0();
    uVar13 = 0x3ff8000000000000;
    if (iVar1 == 0) {
      uVar13 = 0x3ff0000000000000;
    }
    func_0x000107c46db8(uVar3,uVar9,uVar12,uVar13,puVar10);
    func_0x000107c5a568(*(undefined8 *)((long)puVar2 + lVar11));
    func_0x000107c61170(puVar10);
    func_0x000107c61170(ppuVar7);
    func_0x000107c61170(ppuVar6);
    func_0x000107c55148(*(undefined8 *)((long)puVar2 + lVar11));
    puVar4 = puVar2;
    func_0x000107c3b990(puVar2);
    func_0x000107c61180();
    func_0x000107c59e18(*(undefined8 *)((long)puVar2 + lVar11));
    func_0x000107c61170(puVar4);
    func_0x000107c591cc(*(undefined8 *)((long)puVar2 + lVar11));
    func_0x000107c59c0c(*(undefined8 *)((long)puVar2 + lVar11));
    func_0x000107c3c004(puVar2);
    func_0x000107c61170(ppuVar5);
  }
  func_0x000107c61170(param_27);
  func_0x000107c61170(param_26);
  func_0x000107c61170(param_25);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar2;
}



/* Entry: 1005a4ddc; end: 1005a4de3; +[SCAttributedSHUTask navigationServicePreload] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005a4ddc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309bb98) = 1;
  *(undefined8 *)(lVar1 + _DAT_11309bba0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1005a4de4; end: 1005a4e3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005a4de4(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309bb98) = param_3;
  *(undefined8 *)(lVar1 + _DAT_11309bba0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1005a4e40; end: 1005a50db; +[SCAttributedTask shu:] */

void FUN_1005a4e40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x0001005a4e78();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1005a50dc; end: 1005a50e3; +[SCSnapTaskPriority userInitiated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005a50dc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_113096e78) = 3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1005a50e4; end: 1005a520f; -[SCIdleMonitorV1 waitUntilStartCompleteButBlockSwipeForAttributedTask:priority:callbackQueue:block:] */

void FUN_1005a50e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puVar1 = PTR_PTR_1126e02e8;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c5ae20(puVar1,param_2,param_3);
  if ((int)puVar1 == 0) {
    puVar1 = PTR_PTR_1126e02e8;
    func_0x000107c44064(PTR_PTR_1126e02e8,param_2,param_3);
    func_0x000107c61180();
    func_0x000107c5e088(param_1,param_2,puVar1,param_5,param_6);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_5);
    param_1 = 0;
  }
  else {
    puVar1 = PTR_PTR_1126ae970;
    func_0x000107c5d9b8(PTR_PTR_1126ae970);
    func_0x000107c61180();
    func_0x000107c3c4b8(param_1,param_2,param_3,puVar1,param_4,param_5,param_6);
    func_0x000107c61180();
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_5);
  }
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1005a5210; end: 1005a5293;  */

undefined4 FUN_1005a5210(void)

{
  if (lRam00000001137fc0b8 != -1) {
    FUN_10002a2fc(0x1137fc0b8,&PTR___NSConcreteGlobalBlock_110d66458);
  }
  return uRam00000001137fc028;
}



/* Entry: 1005a5294; end: 1005a52af; -[SCIdleMonitorV1 waitUntilStartCompleteButBlockSwipeForTag:callbackQueue:block:] */

void FUN_1005a5294(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010beea5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__waitUntilStartCompleteWithQueue_112598318,
             *(undefined8 *)(param_1 + 0x30),3,param_3,param_4,param_5,0);
  return;
}



/* Entry: 1005a52b0; end: 1005a52d7; -[SCAttributedSHUTask .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005a52b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11309bba0));
  return;
}



/* Entry: 1005a52d8; end: 1005a5303; -[SCFriendsFeedNavigationServiceImpl _shouldUseShorterFooterForBarStyle:] */

uint FUN_1005a52d8(uint param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  
  FUN_10052a7e0();
  uVar1 = 0;
  if (param_3 == 1) {
    uVar1 = param_1 ^ 1;
  }
  return uVar1;
}



/* Entry: 1005a5304; end: 1005a53af; -[SCSwipeViewContainerViewController footerItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005a5304(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_DAT_1126a5648;
  uVar3 = *(ulong *)(param_1 + _DAT_112776b2c);
  if (uVar3 == 0) {
    uVar4 = *(ulong *)(param_1 + _DAT_112776b18);
    func_0x000107c61174(uVar4);
    uVar3 = uVar4;
    FUN_10010fab4(uVar4,puVar2);
    uVar1 = uVar4;
    if ((int)uVar3 == 0) {
      uVar1 = 0;
    }
    func_0x000107c61174(uVar1);
    func_0x000107c61170(uVar4);
    uVar4 = uVar1;
    func_0x000107c61164(uVar1,PTR_s_footerItem_1125caa78);
    uVar3 = 0;
    if ((uVar4 & 1) != 0) {
      uVar3 = uVar1;
      func_0x000107c437a8(uVar1);
      func_0x000107c61180();
    }
    func_0x000107c61170(uVar1);
  }
  else {
    func_0x000107c61174(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1005a53b0; end: 1005a54e3; -[SCBlizzardFile initWithEventCount:creationTimeMillis:fileName:fileBytes:highestPriority:region:dedupeId:isFrame:isSpectrum:isCompressed:logQueueName:eagerUploadId:] */

undefined8 *
FUN_1005a53b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  puStack_68 = PTR_PTR_1126f4b58;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = param_3;
    puVar1[7] = param_4;
    func_0x000107c61174(param_5);
    uVar2 = puVar1[8];
    puVar1[8] = param_5;
    func_0x000107c61170(uVar2);
    puVar1[3] = param_6;
    puVar1[4] = param_7;
    puVar1[5] = param_8;
    puVar1[6] = param_9;
    *(undefined1 *)(puVar1 + 1) = (undefined1)param_10;
    *(undefined1 *)((long)puVar1 + 9) = param_10._1_1_;
    *(undefined1 *)((long)puVar1 + 10) = param_10._2_1_;
    func_0x000107c61174(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0xb) = 0;
  }
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_5);
  return puVar1;
}



/* Entry: 1005a54e4; end: 1005a5723;  */

void FUN_1005a54e4(undefined8 param_1,long param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  int *piVar5;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined1 auStack_90 [72];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x0001004b62b4(&uStack_48,0);
  FUN_100460de4(auStack_90);
  uStack_98 = 0;
  if (param_2 < 8) {
    if (param_2 != 1) {
      if (param_2 != 2) {
LAB_1005a553c:
        func_0x000104a6e964(&UNK_10f48d1b8,
                            "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/cfstream_handle.cc"
                            ,0x5c);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1005a5558);
        (*pcVar4)();
      }
      goto LAB_1005a5568;
    }
    param_3 = param_3 + 8;
  }
  else {
    if (param_2 == 8) {
      func_0x000107c607d8(param_1);
      func_0x000104abac74(&uStack_a8,
                          "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/cfstream_handle.cc"
                          ,0x53,param_1,"read error");
      func_0x000104abaa50(&uStack_a0,&uStack_a8,3,0xe);
      uVar3 = uStack_a0;
      if (uStack_a0 != 0) {
        uStack_a0 = 0x36;
        uStack_98 = uVar3;
      }
      if ((uStack_a8 & 1) != 0) {
        FUN_10084dad0();
      }
      func_0x000107c607f0(param_1);
      uStack_b0 = uVar3;
      if ((uVar3 & 1) != 0) {
        piVar5 = (int *)(uVar3 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar2) {
            *piVar5 = *piVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      func_0x000104abe838(param_3 + 8,&uStack_b0);
      if ((uStack_b0 & 1) != 0) {
        FUN_10084dad0();
      }
      uStack_b8 = uVar3;
      if ((uVar3 & 1) != 0) {
        piVar5 = (int *)(uVar3 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar2) {
            *piVar5 = *piVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      func_0x000104abe838(param_3 + 0x18,&uStack_b8);
      if ((uStack_b8 & 1) != 0) {
        FUN_10084dad0();
      }
      uStack_c0 = uVar3;
      if ((uVar3 & 1) != 0) {
        piVar5 = (int *)(uVar3 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar2) {
            *piVar5 = *piVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      func_0x000104abe838(param_3 + 0x10,&uStack_c0);
      if ((uStack_c0 & 1) != 0) {
        FUN_10084dad0();
      }
      if ((uVar3 & 1) != 0) {
        FUN_10084dad0(uVar3);
      }
      goto LAB_1005a5578;
    }
    if (param_2 != 0x10) goto LAB_1005a553c;
LAB_1005a5568:
    param_3 = param_3 + 0x10;
  }
  FUN_1005a5724(param_3);
LAB_1005a5578:
  FUN_100467a48(auStack_90);
  FUN_1004b6ddc(&uStack_48);
  return;
}



/* Entry: 1005a5724; end: 1005a57c7;  */

void FUN_1005a5724(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uStack_30;
  undefined1 uStack_21;
  
  do {
    uVar3 = *param_1;
    if (uVar3 != 0) {
      if ((uVar3 != 2) && ((uVar3 & 1) == 0)) {
        do {
          if (*param_1 != uVar3) {
            ClearExclusiveLocal();
            return;
          }
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar2) {
            *param_1 = 0;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        uStack_30 = 0;
        FUN_1004bd7e8(&uStack_21,uVar3,&uStack_30);
        if ((uStack_30 & 1) != 0) {
          FUN_10084dad0();
        }
      }
      return;
    }
    while (*param_1 == 0) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = 2;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        return;
      }
    }
    ClearExclusiveLocal();
  } while( true );
}



/* Entry: 1005a57c8; end: 1005a595f;  */

/* WARNING: Possible PIC construction at 0x0001005a5f34: Changing call to branch */

void FUN_1005a57c8(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uStack_50;
  ulong uStack_48;
  
  FUN_100460448();
  FUN_1005a5960(param_1 + 0x60);
  uVar9 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  iVar3 = *(int *)(param_1 + 0xf0) + -1;
  *(int *)(param_1 + 0xf0) = iVar3;
  if (iVar3 == 0) {
    func_0x000100466b80(param_1);
    FUN_1005a5ea4(*(undefined8 *)(param_1 + 0x58),"",0,0);
    func_0x000107c607f0(*(undefined8 *)(param_1 + 0x48));
    func_0x000107c607f0(*(undefined8 *)(param_1 + 0x50));
    FUN_1005a5f48(param_1);
    if (*(char *)(param_1 + 0x10f) < '\0') {
      param_1 = *(long *)(param_1 + 0xf8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  if (*param_2 != 0) goto LAB_1005a58b8;
  puVar10 = *(undefined8 **)(param_1 + 0xe8);
  lVar4 = *(long *)(param_1 + 0x48);
  func_0x000107c607d8();
  if (lVar4 == 0) {
    lVar4 = *(long *)(param_1 + 0x50);
    func_0x000107c60870();
    if (lVar4 != 0) goto LAB_1005a5838;
  }
  else {
LAB_1005a5838:
    func_0x000104abac74(&uStack_48,
                        "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_client_cfstream.cc"
                        ,0x7d,lVar4,"connect() error");
    uVar5 = *param_2;
    if (uStack_48 == uVar5) {
LAB_1005a5880:
      if ((uVar5 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    else {
      *param_2 = uStack_48;
      uStack_48 = 0x36;
      if ((uVar5 & 1) != 0) {
        FUN_10084dad0();
        uVar5 = uStack_48;
        goto LAB_1005a5880;
      }
    }
    func_0x000107c607f0(lVar4);
  }
  if (*param_2 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    plVar7 = (long *)(param_1 + 0xf8);
    if (*(char *)(param_1 + 0x10f) < '\0') {
      plVar7 = (long *)*plVar7;
    }
    FUN_1005a5a60(uVar6,*(undefined8 *)(param_1 + 0x50),plVar7,*(undefined8 *)(param_1 + 0x58));
    *puVar10 = uVar6;
  }
LAB_1005a58b8:
  func_0x000100466b80(param_1);
  uStack_50 = *param_2;
  if ((uStack_50 & 1) != 0) {
    piVar8 = (int *)(uStack_50 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar2) {
        *piVar8 = *piVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_1004bd7e8(&uStack_48,uVar9,&uStack_50);
  if ((uStack_50 & 1) != 0) {
    FUN_10084dad0();
  }
  return;
}



/* Entry: 1005a5960; end: 1005a596f;  */

void FUN_1005a5960(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001005a596c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lRam0000000113815c30 + 8))();
  return;
}



/* Entry: 1005a5970; end: 1005a5a5f;  */

void FUN_1005a5970(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uStack_40;
  undefined1 uStack_31;
  
  lVar1 = lRam00000001136a2180;
  if (cRam00000001136a2110 != '\0') {
    uVar3 = param_1 >> 4 ^ param_1 >> 9 ^ param_1 >> 0xe;
    uVar2 = 0;
    if (uRam00000001136a2188 != 0) {
      uVar2 = uVar3 / uRam00000001136a2188;
    }
    lVar5 = uVar3 - uVar2 * uRam00000001136a2188;
    lVar4 = lRam00000001136a2180 + lVar5 * 0xd8;
    FUN_100460448(lVar4);
    if (*(char *)(param_1 + 0xc) != '\0') {
      uStack_40 = 4;
      FUN_1004bd7e8(&uStack_31,*(undefined8 *)(param_1 + 0x20),&uStack_40);
      if ((uStack_40 & 1) != 0) {
        FUN_10084dad0();
      }
      *(undefined1 *)(param_1 + 0xc) = 0;
      if (*(int *)(param_1 + 8) == -1) {
        lVar1 = *(long *)(param_1 + 0x10);
        *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_1 + 0x18);
        *(long *)(*(long *)(param_1 + 0x18) + 0x10) = lVar1;
      }
      else {
        func_0x000104ac84e4(lVar1 + lVar5 * 0xd8 + 0x90,param_1);
      }
    }
    func_0x000100466b80(lVar4);
  }
  return;
}



/* Entry: 1005a5a60; end: 1005a5c57;  */

long * FUN_1005a5a60(long param_1,long param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_120 [32];
  long alStack_100 [4];
  int iStack_e0;
  undefined1 auStack_dc [128];
  undefined4 uStack_5c;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = (long *)0xb8;
  func_0x000107c60e20();
  plVar3[0x14] = 0;
  plVar3[0x13] = 0;
  plVar3[0x16] = 0;
  plVar3[0x15] = 0;
  plVar3[0x12] = 0;
  plVar3[0x11] = 0;
  *plVar3 = (long)&PTR_FUN_1107c5500;
  FUN_100480ed8(plVar3 + 1,1);
  plVar3[2] = param_1;
  plVar3[3] = param_2;
  func_0x000107c607f4(param_1);
  func_0x000107c607f4(param_2);
  plVar3[4] = param_4;
  FUN_1005a5c58(param_4,"",0,0);
  func_0x000107c60c64(plVar3 + 0x11,param_3);
  uStack_5c = 0x80;
  lVar4 = plVar3[2];
  func_0x000107c607dc(lVar4,*(undefined8 *)PTR__kCFStreamPropertySocketNativeHandle_11034abf8);
  func_0x000107c6077c();
  if (lVar4 != 0) {
    func_0x000107c607f0(lVar4);
  }
  FUN_10047ad90(alStack_100);
  func_0x000107c61018(iStack_e0,auStack_dc,&uStack_5c);
  if (-1 < iStack_e0) {
    FUN_1004d4034(auStack_120,auStack_dc);
    FUN_1005a5c60(alStack_100,auStack_120);
    func_0x00010047c7d4(auStack_120);
    if (alStack_100[0] == 0) {
      plVar5 = alStack_100;
      FUN_1004d5530(plVar5);
      func_0x000107c60ca4(plVar3 + 0x14,plVar5);
      goto LAB_1005a5bb8;
    }
  }
  func_0x000107c60c64(plVar3 + 0x14,"");
LAB_1005a5bb8:
  plVar3[8] = 0;
  plVar3[7] = 0;
  plVar3[6] = 0;
  plVar3[5] = 0;
  plVar3[10] = (long)FUN_10070ee24;
  plVar3[0xb] = (long)plVar3;
  plVar3[0xc] = 0;
  plVar3[0xe] = (long)FUN_1005a7630;
  plVar3[0xf] = (long)plVar3;
  plVar3[0x10] = 0;
  plVar5 = alStack_100;
  func_0x00010047c7d4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return plVar3;
  }
  func_0x000107c60e78();
  func_0x00010047c7d4(auStack_120);
  func_0x00010047c7d4(alStack_100);
  func_0x000107c60bd8();
  plVar5 = plVar5 + 5;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return plVar5;
}



/* Entry: 1005a5c58; end: 1005a5c5f;  */

void FUN_1005a5c58(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  plVar1 = (long *)(param_1 + 0x28);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}



/* Entry: 1005a5c60; end: 1005a5ca7;  */

long * FUN_1005a5c60(long *param_1,long *param_2)

{
  if (param_1 != param_2) {
    if (*param_2 == 0) {
      FUN_1005a5ca8(param_1,param_2 + 1);
    }
    else {
      func_0x000104aba6f8(param_1);
    }
  }
  return param_1;
}


