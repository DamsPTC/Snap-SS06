/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1008a4624; end: 1008a465b;  */

undefined1 * FUN_1008a4624(void)

{
  return &stack0x00000018;
}



/* Entry: 1008a465c; end: 1008a470b;  */

long FUN_1008a465c(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  ulong uVar2;
  ulong extraout_x8;
  ulong unaff_x20;
  long *plVar3;
  ulong uVar4;
  ulong unaff_x23;
  ulong uVar5;
  
  uVar4 = param_1[1];
  if ((uVar4 != 0) && (plVar1 = param_1 + 3, *plVar1 != 0)) {
    func_0x000100896fd0();
    FUN_100897088();
    if ((bool)in_ZR) {
      uVar5 = unaff_x20 & unaff_x23;
    }
    else {
      uVar5 = unaff_x20;
      if (uVar4 <= unaff_x20) {
        uVar5 = 0;
        if (uVar4 != 0) {
          uVar5 = unaff_x20 / uVar4;
        }
        uVar5 = unaff_x20 - uVar5 * uVar4;
      }
    }
    plVar3 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        uVar2 = plVar3[1];
        if (uVar2 != unaff_x20) break;
        func_0x000100897098();
        if ((int)plVar1 != 0) {
          return (long)plVar3;
        }
      }
      if ((uVar4 & unaff_x23) == 0) {
        uVar2 = uVar2 & unaff_x23;
      }
      else if (uVar4 <= uVar2) {
        func_0x000107c39744();
        uVar2 = extraout_x8;
      }
    } while (uVar2 == uVar5);
  }
  return 0;
}



/* Entry: 1008a470c; end: 1008a473f;  */

long * FUN_1008a470c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c30094(param_1);
    func_0x000107c60e14(*param_1);
  }
  return param_1;
}



/* Entry: 1008a4740; end: 1008a475b;  */

long FUN_1008a4740(void)

{
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0x40) == '\x01') {
    func_0x000107c60ca0(unaff_x20 + 0x18);
  }
  return unaff_x20 + 0x10;
}



/* Entry: 1008a475c; end: 1008a47ef;  */

undefined8 * FUN_1008a475c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cefdc8;
  FUN_1001148fc(param_1 + 0x52);
  FUN_1008a47f0(param_1 + 0x4f);
  FUN_1008a4854(param_1 + 0x4c);
  func_0x00010028adfc(param_1 + 0x3f);
  FUN_1001ba7c0(param_1 + 0x39);
  FUN_100898a30(param_1 + 0x33);
  FUN_10067c884(param_1 + 0x2d);
  func_0x00010067c8a8(param_1 + 0x2b);
  func_0x00010067c8cc(param_1 + 0x29);
  FUN_1001148fc(param_1 + 0x25);
  func_0x000100680738(param_1 + 0x18);
  FUN_1005ae430(param_1 + 0xc);
  func_0x00010067c8f0(param_1 + 1);
  return param_1;
}



/* Entry: 1008a47f0; end: 1008a483f;  */

long * FUN_1008a47f0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    for (lVar1 = param_1[1]; lVar1 != lVar2; lVar1 = lVar1 + -0x30) {
      func_0x000107c397d8();
    }
    param_1[1] = lVar2;
    func_0x000107c60e14(*param_1);
  }
  return param_1;
}



/* Entry: 1008a4840; end: 1008a4853;  */

void FUN_1008a4840(void)

{
  return;
}



/* Entry: 1008a4854; end: 1008a48bb;  */

long * FUN_1008a4854(long *param_1)

{
  if (*param_1 != 0) {
    func_0x0001008a484c(param_1);
    func_0x000107c60e14(*param_1);
  }
  return param_1;
}



/* Entry: 1008a48bc; end: 1008a48c7;  */

void FUN_1008a48bc(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100786b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}



/* Entry: 1008a48c8; end: 1008a48cf;  */

long FUN_1008a48c8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  func_0x000107c6110c();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110ced188;
    func_0x000107c61174(lVar4);
    FUN_1005f2030(lVar1,&ppuStack_38,lVar4);
    func_0x000107c61170(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  func_0x000107c61170(uVar3);
  func_0x0001005f2294(lVar1);
  func_0x000107c61108(lVar2);
  return lVar1;
}



/* Entry: 1008a48d0; end: 1008a4963;  */

long FUN_1008a48d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  func_0x000107c6110c();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110ced188;
    func_0x000107c61174(lVar3);
    FUN_1005f2030(param_1,&ppuStack_38,lVar3);
    func_0x000107c61170(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  func_0x000107c61170(uVar2);
  func_0x0001005f2294(param_1);
  func_0x000107c61108(lVar1);
  return param_1;
}



/* Entry: 1008a4964; end: 1008a499f; -[SCUploadDataProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001008a497c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008a4980) */

void FUN_1008a4964(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 1008a49a0; end: 1008a49ab; -[SCUploadInMemoryDataProvider .cxx_destruct] */

void FUN_1008a49a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1008a49ac; end: 1008a49cf; -[SCDataProvider .cxx_destruct] */

void FUN_1008a49ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1008a49d0; end: 1008a4a1f;  */

undefined8 * FUN_1008a49d0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cd2c60;
  func_0x00010067c8a8(param_1 + 0x13);
  func_0x0001008a5bfc(param_1[0xe]);
  func_0x0001008a5bfc(param_1[8]);
  func_0x0001008a5bfc(param_1[2]);
  return param_1;
}



/* Entry: 1008a4a20; end: 1008a4a2f;  */

void FUN_1008a4a20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001008a4a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1008a4a30; end: 1008a4a9b;  */

undefined8 * FUN_1008a4a30(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cd2660;
  FUN_100554470(param_1 + 0x1c);
  FUN_1005cae2c(param_1 + 0x10);
  func_0x00010067c8cc(param_1 + 0xd);
  (**(code **)param_1[8])();
  func_0x00010067c8a8(param_1 + 5);
  func_0x00010067c8f0(param_1 + 3);
  FUN_10067cd10(param_1 + 1);
  return param_1;
}



/* Entry: 1008a4a9c; end: 1008a4aa3;  */

long FUN_1008a4a9c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  func_0x000107c6110c();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110cece78;
    func_0x000107c61174(lVar4);
    FUN_1005f2030(lVar1,&ppuStack_38,lVar4);
    func_0x000107c61170(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  func_0x000107c61170(uVar3);
  func_0x0001005f2294(lVar1);
  func_0x000107c61108(lVar2);
  return lVar1;
}



/* Entry: 1008a4aa4; end: 1008a4b37;  */

long FUN_1008a4aa4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  func_0x000107c6110c();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110cece78;
    func_0x000107c61174(lVar3);
    FUN_1005f2030(param_1,&ppuStack_38,lVar3);
    func_0x000107c61170(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  func_0x000107c61170(uVar2);
  func_0x0001005f2294(param_1);
  func_0x000107c61108(lVar1);
  return param_1;
}



/* Entry: 1008a4b38; end: 1008a4bd3; -[SCHTTPRequestCallback .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001008a4b50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a4b68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a4b80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a4b94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a4bb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008a4b98) */
/* WARNING: Removing unreachable block (ram,0x0001008a4b84) */
/* WARNING: Removing unreachable block (ram,0x0001008a4b6c) */
/* WARNING: Removing unreachable block (ram,0x0001008a4b54) */
/* WARNING: Removing unreachable block (ram,0x0001008a4bb4) */

void FUN_1008a4b38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x70,0);
  return;
}



/* Entry: 1008a4bd4; end: 1008a4c0f; -[SCNNetworkTypesRequestResponseInfo .cxx_destruct] */

void FUN_1008a4bd4(long param_1)

{
  FUN_1008a4c10(param_1 + 0x20);
  FUN_1008a4c10(param_1 + 0x18);
  FUN_1008a4c10(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1008a4c10; end: 1008a4c17;  */

void FUN_1008a4c10(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 1008a4c18; end: 1008a4c47; -[SCNNetworkTypesDebugInfo .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001008a4c30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008a4c34) */

void FUN_1008a4c18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,0);
  return;
}



/* Entry: 1008a4c48; end: 1008a4cb3; -[SCDownloadRequest cleanUp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008a4c48(long param_1)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + _DAT_11278db20) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c415e0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    func_0x000107c61180();
    func_0x000107c4ff50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1008a4cb4; end: 1008a4ccf;  */

void FUN_1008a4cb4(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_100100fec(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1008a4cd0; end: 1008a4d47; -[SCBackgroundTaskWrapper _reportEndToTrackerWhenGroupBackgroundTaskEnabled:] */

void FUN_1008a4cd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x000107c5addc();
  if ((int)lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x000107c61180();
    func_0x000107c419e8(uVar3,param_2,puVar2,param_3,&PTR___NSConcreteGlobalBlock_1108760d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 1008a4d48; end: 1008a4d5f;  */

void FUN_1008a4d48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001008a4d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x40) + 0x10))
            (*(long *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 1008a4d60; end: 1008a4e47;  */

/* WARNING: Possible PIC construction at 0x0001008a4dc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a4df8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a4e28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008a4dfc) */
/* WARNING: Removing unreachable block (ram,0x0001008a4e08) */
/* WARNING: Removing unreachable block (ram,0x0001008a4e18) */
/* WARNING: Removing unreachable block (ram,0x0001008a4e0c) */
/* WARNING: Removing unreachable block (ram,0x0001008a4e20) */
/* WARNING: Removing unreachable block (ram,0x0001008a4dc8) */
/* WARNING: Removing unreachable block (ram,0x0001008a4e2c) */

void FUN_1008a4d60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x28);
  func_0x000107c4e4a0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1008a4e48; end: 1008a4e73; -[SCAPISessionTaskBackgroundWrapper .cxx_destruct] */

void FUN_1008a4e48(long param_1)

{
  func_0x000107c61120(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1008a4e74; end: 1008a4ebf; -[SCNNetworkTypesUrlResponseInfo .cxx_destruct] */

void FUN_1008a4e74(long param_1)

{
  FUN_1008a4ec0(param_1 + 0x38);
  FUN_1008a4ec0(param_1 + 0x30);
  FUN_1008a4ec0(param_1 + 0x28);
  FUN_1008a4ec0(param_1 + 0x20);
  FUN_1008a4ec0(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1008a4ec0; end: 1008a4ec7;  */

void FUN_1008a4ec0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 1008a4ec8; end: 1008a4f03; -[SCRequest payloadSize] */

undefined8 FUN_1008a4ec8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c4537c();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c50400();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1008a4f04; end: 1008a4f0b; -[SCRequest info] */

undefined8 FUN_1008a4f04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x118);
}



/* Entry: 1008a4f0c; end: 1008a4f17; -[SCNNetworkTypesUrlRequestInfo .cxx_destruct] */

void FUN_1008a4f0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 1008a4f18; end: 1008a4f1f; -[SCCustomStoriesNetworkRequester _logNetworkMetricsWithPath:requestSource:success:requestSize:responseSize:] */

void FUN_1008a4f18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b0db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_logStoriesNetworkRequestWithEndp_112609d78);
  return;
}



/* Entry: 1008a4f20; end: 1008a5107; -[SCStoriesGrapheneMetricsEmitter logStoriesNetworkRequestWithEndpoint:source:success:requestSize:responseSize:] */

/* WARNING: Possible PIC construction at 0x0001008a502c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a5050: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a50c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a50d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a50e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008a50d4) */
/* WARNING: Removing unreachable block (ram,0x0001008a50c4) */
/* WARNING: Removing unreachable block (ram,0x0001008a5054) */
/* WARNING: Removing unreachable block (ram,0x0001008a5030) */
/* WARNING: Removing unreachable block (ram,0x0001008a50e4) */

void FUN_1008a4f20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c51804(puVar1,param_2,&PTR____CFConstantStringClassReference_110e1d2f8);
  func_0x000107c61180();
  func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db9f38);
  func_0x000107c61180();
  func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db9f38);
  func_0x000107c61180();
  func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e1d858);
  func_0x000107c61180();
  func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db9f38);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1008a5108; end: 1008a517f; -[SCRequestSuccessFailureTask dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008a5108(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x000107c4fe7c(*(undefined8 *)(param_1 + _DAT_11278dd3c));
  func_0x000107c4fe7c(*(undefined8 *)(param_1 + _DAT_11278dd40));
  func_0x000107c4fe7c(*(undefined8 *)(param_1 + _DAT_11278dd44));
  func_0x000107c4fe7c(*(undefined8 *)(param_1 + _DAT_11278dd48));
  puStack_28 = PTR_PTR_112705ff0;
  lStack_30 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1008a5180; end: 1008a5317;  */

/* WARNING: Possible PIC construction at 0x0001008a520c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a5284: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a52c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a53a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a541c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a545c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a553c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a55b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a55f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a56d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a5744: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a5784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a582c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008a5788) */
/* WARNING: Removing unreachable block (ram,0x0001008a57c0) */
/* WARNING: Removing unreachable block (ram,0x0001008a57d0) */
/* WARNING: Removing unreachable block (ram,0x0001008a5748) */
/* WARNING: Removing unreachable block (ram,0x0001008a5778) */
/* WARNING: Removing unreachable block (ram,0x0001008a5760) */
/* WARNING: Removing unreachable block (ram,0x0001008a56d4) */
/* WARNING: Removing unreachable block (ram,0x0001008a5738) */
/* WARNING: Removing unreachable block (ram,0x0001008a55f4) */
/* WARNING: Removing unreachable block (ram,0x0001008a562c) */
/* WARNING: Removing unreachable block (ram,0x0001008a563c) */
/* WARNING: Removing unreachable block (ram,0x0001008a5684) */
/* WARNING: Removing unreachable block (ram,0x0001008a5740) */
/* WARNING: Removing unreachable block (ram,0x0001008a56a0) */
/* WARNING: Removing unreachable block (ram,0x0001008a56c4) */
/* WARNING: Removing unreachable block (ram,0x0001008a56b0) */
/* WARNING: Removing unreachable block (ram,0x0001008a56cc) */
/* WARNING: Removing unreachable block (ram,0x0001008a55b4) */
/* WARNING: Removing unreachable block (ram,0x0001008a55e4) */
/* WARNING: Removing unreachable block (ram,0x0001008a55cc) */
/* WARNING: Removing unreachable block (ram,0x0001008a5540) */
/* WARNING: Removing unreachable block (ram,0x0001008a55a4) */
/* WARNING: Removing unreachable block (ram,0x0001008a5460) */
/* WARNING: Removing unreachable block (ram,0x0001008a5498) */
/* WARNING: Removing unreachable block (ram,0x0001008a54a8) */
/* WARNING: Removing unreachable block (ram,0x0001008a54f0) */
/* WARNING: Removing unreachable block (ram,0x0001008a55ac) */
/* WARNING: Removing unreachable block (ram,0x0001008a550c) */
/* WARNING: Removing unreachable block (ram,0x0001008a5530) */
/* WARNING: Removing unreachable block (ram,0x0001008a551c) */
/* WARNING: Removing unreachable block (ram,0x0001008a5538) */
/* WARNING: Removing unreachable block (ram,0x0001008a5420) */
/* WARNING: Removing unreachable block (ram,0x0001008a5450) */
/* WARNING: Removing unreachable block (ram,0x0001008a5438) */
/* WARNING: Removing unreachable block (ram,0x0001008a53a8) */
/* WARNING: Removing unreachable block (ram,0x0001008a5410) */
/* WARNING: Removing unreachable block (ram,0x0001008a52c8) */
/* WARNING: Removing unreachable block (ram,0x0001008a5300) */
/* WARNING: Removing unreachable block (ram,0x0001008a5310) */
/* WARNING: Removing unreachable block (ram,0x0001008a5358) */
/* WARNING: Removing unreachable block (ram,0x0001008a5418) */
/* WARNING: Removing unreachable block (ram,0x0001008a5374) */
/* WARNING: Removing unreachable block (ram,0x0001008a5398) */
/* WARNING: Removing unreachable block (ram,0x0001008a5384) */
/* WARNING: Removing unreachable block (ram,0x0001008a53a0) */
/* WARNING: Removing unreachable block (ram,0x0001008a5288) */
/* WARNING: Removing unreachable block (ram,0x0001008a52b8) */
/* WARNING: Removing unreachable block (ram,0x0001008a52a0) */
/* WARNING: Removing unreachable block (ram,0x0001008a5210) */
/* WARNING: Removing unreachable block (ram,0x0001008a5278) */
/* WARNING: Removing unreachable block (ram,0x0001008a5830) */

void FUN_1008a5180(long param_1,long param_2)

{
  long *plVar1;
  
  func_0x000107c61174(param_2);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110a03998);
    if (((int)plVar1 != 0) && (func_0x000107c61174(param_2), param_2 != 0)) {
      func_0x000107c61178(param_2);
      func_0x000107c3ac4c();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1008a5318; end: 1008a54af;  */

/* WARNING: Possible PIC construction at 0x0001008a53a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a541c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a545c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a553c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a55b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a55f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a56d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a5744: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a5784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a582c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008a5788) */
/* WARNING: Removing unreachable block (ram,0x0001008a57c0) */
/* WARNING: Removing unreachable block (ram,0x0001008a57d0) */
/* WARNING: Removing unreachable block (ram,0x0001008a5748) */
/* WARNING: Removing unreachable block (ram,0x0001008a5778) */
/* WARNING: Removing unreachable block (ram,0x0001008a5760) */
/* WARNING: Removing unreachable block (ram,0x0001008a56d4) */
/* WARNING: Removing unreachable block (ram,0x0001008a5738) */
/* WARNING: Removing unreachable block (ram,0x0001008a55f4) */
/* WARNING: Removing unreachable block (ram,0x0001008a562c) */
/* WARNING: Removing unreachable block (ram,0x0001008a563c) */
/* WARNING: Removing unreachable block (ram,0x0001008a5684) */
/* WARNING: Removing unreachable block (ram,0x0001008a5740) */
/* WARNING: Removing unreachable block (ram,0x0001008a56a0) */
/* WARNING: Removing unreachable block (ram,0x0001008a56c4) */
/* WARNING: Removing unreachable block (ram,0x0001008a56b0) */
/* WARNING: Removing unreachable block (ram,0x0001008a56cc) */
/* WARNING: Removing unreachable block (ram,0x0001008a55b4) */
/* WARNING: Removing unreachable block (ram,0x0001008a55e4) */
/* WARNING: Removing unreachable block (ram,0x0001008a55cc) */
/* WARNING: Removing unreachable block (ram,0x0001008a5540) */
/* WARNING: Removing unreachable block (ram,0x0001008a55a4) */
/* WARNING: Removing unreachable block (ram,0x0001008a5460) */
/* WARNING: Removing unreachable block (ram,0x0001008a5498) */
/* WARNING: Removing unreachable block (ram,0x0001008a54a8) */
/* WARNING: Removing unreachable block (ram,0x0001008a54f0) */
/* WARNING: Removing unreachable block (ram,0x0001008a55ac) */
/* WARNING: Removing unreachable block (ram,0x0001008a550c) */
/* WARNING: Removing unreachable block (ram,0x0001008a5530) */
/* WARNING: Removing unreachable block (ram,0x0001008a551c) */
/* WARNING: Removing unreachable block (ram,0x0001008a5538) */
/* WARNING: Removing unreachable block (ram,0x0001008a5420) */
/* WARNING: Removing unreachable block (ram,0x0001008a5450) */
/* WARNING: Removing unreachable block (ram,0x0001008a5438) */
/* WARNING: Removing unreachable block (ram,0x0001008a53a8) */
/* WARNING: Removing unreachable block (ram,0x0001008a5410) */
/* WARNING: Removing unreachable block (ram,0x0001008a5830) */

void FUN_1008a5318(long param_1,long param_2)

{
  long *plVar1;
  
  func_0x000107c61174(param_2);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110a039e8);
    if (((int)plVar1 != 0) && (func_0x000107c61174(param_2), param_2 != 0)) {
      func_0x000107c61178(param_2);
      func_0x000107c3ac4c();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1008a54b0; end: 1008a5643;  */

/* WARNING: Possible PIC construction at 0x0001008a553c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a55b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a55f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a56d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a5744: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a5784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a582c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008a5788) */
/* WARNING: Removing unreachable block (ram,0x0001008a57c0) */
/* WARNING: Removing unreachable block (ram,0x0001008a57d0) */
/* WARNING: Removing unreachable block (ram,0x0001008a5748) */
/* WARNING: Removing unreachable block (ram,0x0001008a5778) */
/* WARNING: Removing unreachable block (ram,0x0001008a5760) */
/* WARNING: Removing unreachable block (ram,0x0001008a56d4) */
/* WARNING: Removing unreachable block (ram,0x0001008a5738) */
/* WARNING: Removing unreachable block (ram,0x0001008a55f4) */
/* WARNING: Removing unreachable block (ram,0x0001008a562c) */
/* WARNING: Removing unreachable block (ram,0x0001008a563c) */
/* WARNING: Removing unreachable block (ram,0x0001008a5684) */
/* WARNING: Removing unreachable block (ram,0x0001008a5740) */
/* WARNING: Removing unreachable block (ram,0x0001008a56a0) */
/* WARNING: Removing unreachable block (ram,0x0001008a56c4) */
/* WARNING: Removing unreachable block (ram,0x0001008a56b0) */
/* WARNING: Removing unreachable block (ram,0x0001008a56cc) */
/* WARNING: Removing unreachable block (ram,0x0001008a55b4) */
/* WARNING: Removing unreachable block (ram,0x0001008a55e4) */
/* WARNING: Removing unreachable block (ram,0x0001008a55cc) */
/* WARNING: Removing unreachable block (ram,0x0001008a5540) */
/* WARNING: Removing unreachable block (ram,0x0001008a55a4) */
/* WARNING: Removing unreachable block (ram,0x0001008a5830) */

void FUN_1008a54b0(long param_1,long param_2)

{
  long *plVar1;
  
  func_0x000107c61174(param_2);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110a03858);
    if (((int)plVar1 != 0) && (func_0x000107c61174(param_2), param_2 != 0)) {
      func_0x000107c61178(param_2);
      func_0x000107c3ac4c();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1008a5644; end: 1008a57d7;  */

/* WARNING: Possible PIC construction at 0x0001008a56d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a5744: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a5784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a582c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008a5788) */
/* WARNING: Removing unreachable block (ram,0x0001008a57c0) */
/* WARNING: Removing unreachable block (ram,0x0001008a57d0) */
/* WARNING: Removing unreachable block (ram,0x0001008a5748) */
/* WARNING: Removing unreachable block (ram,0x0001008a5778) */
/* WARNING: Removing unreachable block (ram,0x0001008a5760) */
/* WARNING: Removing unreachable block (ram,0x0001008a56d4) */
/* WARNING: Removing unreachable block (ram,0x0001008a5738) */
/* WARNING: Removing unreachable block (ram,0x0001008a5830) */

void FUN_1008a5644(long param_1,long param_2)

{
  long *plVar1;
  
  func_0x000107c61174(param_2);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110a03a38);
    if (((int)plVar1 != 0) && (func_0x000107c61174(param_2), param_2 != 0)) {
      func_0x000107c61178(param_2);
      func_0x000107c3ac4c();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1008a57d8; end: 1008a584b;  */

/* WARNING: Possible PIC construction at 0x0001008a582c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008a5830) */

void FUN_1008a57d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x28);
  func_0x000107c3b900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1008a584c; end: 1008a5997; -[SCCustomStoriesDataSyncer _handleFetchedSyncCustomStoriesResponse:publicationIds:error:completion:] */

void FUN_1008a584c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  if ((param_3 == 0) || (param_5 != 0)) {
    func_0x000107c3b924(param_1);
  }
  else {
    func_0x000107c61144(auStack_48,param_1);
    func_0x000107c6111c(auStack_50,auStack_48);
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_6);
    func_0x000107c3b920(param_1);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_4);
    func_0x000107c61120(auStack_50);
    func_0x000107c61120(auStack_48);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008a5998; end: 1008a5b13; -[SCCustomStoriesDataSyncer _handleSuccessSyncCustomStoriesResponse:completion:] */

void FUN_1008a5998(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126b1270;
  func_0x000107c502e8(PTR_PTR_1126b1270);
  func_0x000107c61180();
  uVar3 = uVar1;
  func_0x000107c3ebc4();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61144(auStack_48,param_1);
  func_0x000107c6111c(auStack_58,auStack_48);
  func_0x000107c61174(param_3);
  uStack_50 = 0;
  uStack_4f = (undefined1)uVar3;
  func_0x000107c61174(param_4);
  func_0x000107c3b694(param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  func_0x000107c5c734(uVar3);
  func_0x000107c61180();
  func_0x000107c518d8();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_58);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008a5b14; end: 1008a5b93; -[SCRequestSuccessFailureTask .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001008a5b38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a5b58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a5b78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008a5b5c) */
/* WARNING: Removing unreachable block (ram,0x0001008a5b3c) */
/* WARNING: Removing unreachable block (ram,0x0001008a5b7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008a5b14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278dd4c,0);
  return;
}



/* Entry: 1008a5b94; end: 1008a5bf3; -[SCRequestTask .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001008a5bb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a5bdc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008a5bb8) */
/* WARNING: Removing unreachable block (ram,0x0001008a5be0) */

void FUN_1008a5b94(long param_1)

{
  func_0x000107c61120(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x68,0);
  return;
}



/* Entry: 1008a5bf4; end: 1008a5c17;  */

void FUN_1008a5bf4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1008a5c18; end: 1008a5cab;  */

long FUN_1008a5c18(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  func_0x000107c6110c();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110cecd40;
    func_0x000107c61174(lVar3);
    FUN_1005f2030(param_1,&ppuStack_38,lVar3);
    func_0x000107c61170(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  func_0x000107c61170(uVar2);
  func_0x0001005f2294(param_1);
  func_0x000107c61108(lVar1);
  return param_1;
}



/* Entry: 1008a5cac; end: 1008a5cb3;  */

void FUN_1008a5cac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1008a5cb4; end: 1008a5ccf; +[SCDiscoverFeedUIConfigKeys repostBundleStoryEnabled] */

void FUN_1008a5cb4(void)

{
  if (lRam00000001135e8978 != -1) {
    func_0x000107c61568(0x1135e8978,FUN_1008a6020);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113812438);
  return;
}



/* Entry: 1008a5cd0; end: 1008a5d13;  */

void FUN_1008a5cd0(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  if (*param_3 == -1) {
    uVar1 = *param_4;
  }
  else {
    func_0x000107c61568(param_3,param_5);
    uVar1 = *param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uVar1);
  return;
}



/* Entry: 1008a5d14; end: 1008a5d1b;  */

undefined8 ** FUN_1008a5d14(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  undefined8 **ppuVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined ***pppuVar9;
  undefined8 extraout_x8;
  ulong uVar10;
  undefined8 uVar11;
  code *extraout_x8_00;
  code *extraout_x8_01;
  int extraout_w10;
  long unaff_x19;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined **ppuStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [16];
  undefined8 *puStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_68;
  
  ppuVar5 = *(undefined8 ***)(param_1 + 0x10);
  func_0x000100689a14();
  uStack_68 = extraout_x8;
  if ((((ulong)ppuVar5[0x24] & 0xfffffffe) != 2) ||
     (uVar4 = 0, *(char *)(unaff_x19 + 0x124) == '\x01')) {
    puStack_d0 = (undefined8 *)0x0;
    puStack_c8 = (undefined8 *)0x0;
    uStack_c0 = 0;
    plVar6 = *(long **)(unaff_x19 + 0x130);
    pppuVar9 = (undefined ***)0x1;
    (**(code **)(*plVar6 + 0x38))();
    plVar6 = plVar6 + 2;
    while (puVar3 = puStack_c8, plVar6 = (long *)*plVar6, puVar12 = puStack_d0,
          plVar6 != (long *)0x0) {
      if ((*(byte *)(plVar6 + 5) & 1) == 0) {
        *(undefined1 *)(plVar6 + 5) = 1;
        lVar7 = 0x1f8;
        if (*(char *)(plVar6[3] + 0x240) == '\0') {
          lVar7 = 0x1b0;
        }
        lVar7 = plVar6[3] + lVar7;
        func_0x000107c30174();
        lVar13 = plVar6[6];
        lVar8 = lVar7;
        FUN_10054f908();
        uVar10 = (lVar13 + lVar7) - lVar8;
        ppuStack_a0 = (undefined **)plVar6[2];
        ppuStack_98 = (undefined **)(uVar10 & ((long)uVar10 >> 0x3f ^ 0xffffffffffffffffU));
        pppuVar9 = &ppuStack_a0;
        func_0x0001086ddcdc(&puStack_d0);
      }
    }
    for (; param_2 = (int)pppuVar9, puVar12 != puVar3; puVar12 = puVar12 + 2) {
      uVar11 = *puVar12;
      uStack_e8 = *(undefined8 *)(unaff_x19 + 0x10);
      uStack_f0 = *(undefined8 *)(unaff_x19 + 8);
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        do {
          FUN_10067ccb0();
        } while (extraout_w10 != 0);
      }
      FUN_10089ca94(auStack_b8);
      uVar2 = uStack_e8;
      uVar1 = uStack_f0;
      puStack_a8[1] = 0;
      puStack_a8[2] = 0;
      *puStack_a8 = &PTR_DAT_1108789a8;
      ppuStack_a0 = (undefined **)&UNK_10b2d8fb0;
      ppuStack_98 = &PTR_DAT_110cd27c8;
      uStack_f0 = 0;
      uStack_e8 = 0;
      puStack_a8[3] = &PTR_FUN_110878a10;
      puStack_a8[4] = &UNK_10b2d8fb0;
      puStack_a8[5] = &PTR_DAT_110cd27c8;
      puStack_a8[6] = uVar11;
      puStack_a8[8] = uVar2;
      puStack_a8[7] = uVar1;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_90 = uVar11;
      func_0x00010066a0a4(&uStack_88);
      puStack_d8 = puStack_a8;
      puStack_a8 = (undefined8 *)0x0;
      ppuStack_e0 = (undefined **)(puStack_d8 + 3);
      FUN_10067db54(auStack_b8);
      func_0x00010066a0a4(&uStack_f0);
      ppuStack_98 = (undefined **)puStack_d8;
      ppuStack_a0 = ppuStack_e0;
      ppuStack_e0 = (undefined **)0x0;
      puStack_d8 = (undefined8 *)0x0;
      func_0x000107c357c8(*(undefined8 *)(unaff_x19 + 0x38));
      pppuVar9 = &ppuStack_a0;
      (*extraout_x8_00)();
      FUN_100576684(&ppuStack_a0);
      FUN_10068f378(&ppuStack_e0);
    }
    uVar4 = puStack_d0 == puStack_c8;
    if (!(bool)uVar4) {
      func_0x000107c2c6c8();
      uStack_90 = 0;
      uStack_88 = 0;
      ppuStack_a0 = &PTR_DAT_110cd23f0;
      ppuStack_98 = (undefined **)0x0;
      uStack_80 = uStack_80 & 0xffffffff00000000;
      func_0x00010067cdbc(uRam000000011383a460);
      param_2 = (int)&ppuStack_a0;
      (*extraout_x8_01)();
      func_0x000107c2c610(&ppuStack_a0);
    }
    ppuVar5 = &puStack_d0;
    FUN_1008a5fe8(ppuVar5);
  }
  func_0x00010068e834(uStack_68);
  if (!(bool)uVar4) {
    func_0x000107c60e78();
    func_0x000107c2c610(&ppuStack_a0);
    ppuVar5 = &puStack_d0;
    FUN_1008a5fe8(ppuVar5);
    func_0x000107c35748();
    lVar7 = 0x18;
    if (param_2 != 0) {
      lVar7 = 0x40;
    }
    return (undefined8 **)((long)ppuVar5 + lVar7);
  }
  return ppuVar5;
}



/* Entry: 1008a5d1c; end: 1008a5fb7;  */

undefined8 ** FUN_1008a5d1c(undefined8 **param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 **ppuVar8;
  undefined ***pppuVar9;
  undefined8 extraout_x8;
  ulong uVar10;
  undefined8 uVar11;
  code *extraout_x8_00;
  code *extraout_x8_01;
  int extraout_w10;
  long unaff_x19;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined **ppuStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [16];
  undefined8 *puStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_68;
  
  func_0x000100689a14();
  uStack_68 = extraout_x8;
  if ((((ulong)param_1[0x24] & 0xfffffffe) != 2) ||
     (uVar4 = 0, *(char *)(unaff_x19 + 0x124) == '\x01')) {
    puStack_d0 = (undefined8 *)0x0;
    puStack_c8 = (undefined8 *)0x0;
    uStack_c0 = 0;
    plVar5 = *(long **)(unaff_x19 + 0x130);
    pppuVar9 = (undefined ***)0x1;
    (**(code **)(*plVar5 + 0x38))();
    plVar5 = plVar5 + 2;
    while (puVar3 = puStack_c8, plVar5 = (long *)*plVar5, puVar12 = puStack_d0,
          plVar5 != (long *)0x0) {
      if ((*(byte *)(plVar5 + 5) & 1) == 0) {
        *(undefined1 *)(plVar5 + 5) = 1;
        lVar6 = 0x1f8;
        if (*(char *)(plVar5[3] + 0x240) == '\0') {
          lVar6 = 0x1b0;
        }
        lVar6 = plVar5[3] + lVar6;
        func_0x000107c30174();
        lVar13 = plVar5[6];
        lVar7 = lVar6;
        FUN_10054f908();
        uVar10 = (lVar13 + lVar6) - lVar7;
        ppuStack_a0 = (undefined **)plVar5[2];
        ppuStack_98 = (undefined **)(uVar10 & ((long)uVar10 >> 0x3f ^ 0xffffffffffffffffU));
        pppuVar9 = &ppuStack_a0;
        func_0x0001086ddcdc(&puStack_d0);
      }
    }
    for (; param_2 = (int)pppuVar9, puVar12 != puVar3; puVar12 = puVar12 + 2) {
      uVar11 = *puVar12;
      uStack_e8 = *(undefined8 *)(unaff_x19 + 0x10);
      uStack_f0 = *(undefined8 *)(unaff_x19 + 8);
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        do {
          FUN_10067ccb0();
        } while (extraout_w10 != 0);
      }
      FUN_10089ca94(auStack_b8);
      uVar2 = uStack_e8;
      uVar1 = uStack_f0;
      puStack_a8[1] = 0;
      puStack_a8[2] = 0;
      *puStack_a8 = &PTR_DAT_1108789a8;
      ppuStack_a0 = (undefined **)&UNK_10b2d8fb0;
      ppuStack_98 = &PTR_DAT_110cd27c8;
      uStack_f0 = 0;
      uStack_e8 = 0;
      puStack_a8[3] = &PTR_FUN_110878a10;
      puStack_a8[4] = &UNK_10b2d8fb0;
      puStack_a8[5] = &PTR_DAT_110cd27c8;
      puStack_a8[6] = uVar11;
      puStack_a8[8] = uVar2;
      puStack_a8[7] = uVar1;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_90 = uVar11;
      func_0x00010066a0a4(&uStack_88);
      puStack_d8 = puStack_a8;
      puStack_a8 = (undefined8 *)0x0;
      ppuStack_e0 = (undefined **)(puStack_d8 + 3);
      FUN_10067db54(auStack_b8);
      func_0x00010066a0a4(&uStack_f0);
      ppuStack_98 = (undefined **)puStack_d8;
      ppuStack_a0 = ppuStack_e0;
      ppuStack_e0 = (undefined **)0x0;
      puStack_d8 = (undefined8 *)0x0;
      func_0x000107c357c8(*(undefined8 *)(unaff_x19 + 0x38));
      pppuVar9 = &ppuStack_a0;
      (*extraout_x8_00)();
      FUN_100576684(&ppuStack_a0);
      FUN_10068f378(&ppuStack_e0);
    }
    uVar4 = puStack_d0 == puStack_c8;
    if (!(bool)uVar4) {
      func_0x000107c2c6c8();
      uStack_90 = 0;
      uStack_88 = 0;
      ppuStack_a0 = &PTR_DAT_110cd23f0;
      ppuStack_98 = (undefined **)0x0;
      uStack_80 = uStack_80 & 0xffffffff00000000;
      func_0x00010067cdbc(uRam000000011383a460);
      param_2 = (int)&ppuStack_a0;
      (*extraout_x8_01)();
      func_0x000107c2c610(&ppuStack_a0);
    }
    param_1 = &puStack_d0;
    FUN_1008a5fe8(param_1);
  }
  func_0x00010068e834(uStack_68);
  if (!(bool)uVar4) {
    func_0x000107c60e78();
    func_0x000107c2c610(&ppuStack_a0);
    ppuVar8 = &puStack_d0;
    FUN_1008a5fe8(ppuVar8);
    func_0x000107c35748();
    lVar6 = 0x18;
    if (param_2 != 0) {
      lVar6 = 0x40;
    }
    return (undefined8 **)((long)ppuVar8 + lVar6);
  }
  return param_1;
}



/* Entry: 1008a5fb8; end: 1008a5fe7;  */

long FUN_1008a5fb8(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = 0x18;
  if (param_2 != 0) {
    lVar1 = 0x40;
  }
  return param_1 + lVar1;
}



/* Entry: 1008a5fe8; end: 1008a601b;  */

undefined8 FUN_1008a5fe8(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x0001008a5fd0(&uStack_28);
  return param_1;
}



/* Entry: 1008a601c; end: 1008a601f;  */

void FUN_1008a601c(void)

{
  return;
}



/* Entry: 1008a6020; end: 1008a606f;  */

void FUN_1008a6020(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  func_0x000107c610f8();
  uVar1 = 0xd000000000000023;
  func_0x000100442ccc(0xd000000000000023,0x800000010f1ce010,0);
  uRam0000000113812438 = uVar1;
  return;
}



/* Entry: 1008a6070; end: 1008a6137; -[SCCustomStoriesDataSyncer _fetchBlockedSnapchatterIdsWithCompletion:] */

void FUN_1008a6070(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c4f7c0(uVar2);
  func_0x000107c61180();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1008aae4c;
  puStack_40 = &UNK_11084e3a0;
  uStack_38 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c3eb28(uVar1,param_2,uVar2,&puStack_58);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008a6138; end: 1008a6193;  */

void FUN_1008a6138(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bb600;
  func_0x000107c610f4(PTR_PTR_1126bb600);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  func_0x000107c48868(puVar1,param_2,uVar2);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1008a6194; end: 1008a62af; -[SCSnapchattersBlockedSnapchatterProvider initWithSnapchattersFetchedResultObserverRepository:] */

undefined1 * FUN_1008a6194(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  puStack_48 = PTR_PTR_1126fdc50;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar6 = param_3;
    func_0x000107c3eb24();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar6;
    func_0x000107c61170(uVar5);
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c45454();
    uVar6 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar6);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1008a62b0; end: 1008a62b7; -[SCSnapchattersFetchedResultObserverRepositoryV1 blockedSnapchattersObserver] */

void FUN_1008a62b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x38),PTR_s_target_112678178);
  return;
}



/* Entry: 1008a62b8; end: 1008a62ef;  */

void FUN_1008a62b8(void)

{
  func_0x000107c610f4(PTR_PTR_1126db0a8);
  func_0x000107c46638();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008a62f0; end: 1008a640b; -[SCSnapchattersFetchedResultObserver initWithDocObjectContext:fetchBlock:] */

undefined8 *
FUN_1008a62f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  uVar1 = 0x11;
  FUN_1000819a8(0x11,0);
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x000107c419ac();
  func_0x000107c61180();
  uVar5 = param_3;
  uVar6 = uVar1;
  uVar7 = param_4;
  puVar8 = puVar2;
  func_0x000107c46660();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return param_1;
  }
  func_0x000107c60e78();
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar8);
  puStack_b8 = PTR_PTR_1126fdd00;
  puVar3 = &uStack_c0;
  uStack_c0 = uVar1;
  func_0x000107c61154(puVar3,PTR_s_init_1125d9248);
  puVar2 = PTR_PTR_1126ae720;
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c61174(uVar7);
    func_0x000107c61174(uVar5);
    func_0x000107c3e4fc(puVar2);
    func_0x000107c61180();
    puVar4 = PTR_PTR_1126c0ab0;
    func_0x000107c43338();
    func_0x000107c61180();
    uVar1 = puVar3[1];
    puVar3[1] = puVar4;
    func_0x000107c61170(uVar1);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar7);
  }
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  return puVar3;
}



/* Entry: 1008a640c; end: 1008a6567; -[SCSnapchattersFetchedResultObserver initWithDocObjectContext:observationQueue:fetchBlock:mappers:] */

undefined8 *
FUN_1008a640c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1126fdd00;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  puVar2 = PTR_PTR_1126ae720;
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc(puVar2);
    func_0x000107c61180();
    puVar3 = PTR_PTR_1126c0ab0;
    func_0x000107c43338();
    func_0x000107c61180();
    uVar4 = puVar1[1];
    puVar1[1] = puVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_5);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1008a6568; end: 1008a6587;  */

void FUN_1008a6568(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1ed30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boldAvenirNextFontOfSize_forText_1125a54f0,param_3,1,param_4);
  return;
}



/* Entry: 1008a6588; end: 1008a658f; -[SCCameraToolbarItemImpl isShowingWidget] */

undefined1 FUN_1008a6588(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 1008a6590; end: 1008a677b; -[SCCameraToolbarButtonImpl lableView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1008a6590(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long unaff_x19;
  long lVar18;
  long lVar19;
  long unaff_x21;
  undefined8 unaff_x22;
  long lVar20;
  undefined8 unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined8 unaff_x27;
  long lVar21;
  undefined *unaff_x28;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = (long)_DAT_112742a34;
  lVar18 = *(long *)(param_2 + lVar20);
  if (lVar18 == 0) {
    puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f4();
    func_0x000107c469a4(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar16 = *(undefined8 *)(param_2 + lVar20);
    *(undefined **)(param_2 + lVar20) = puVar6;
    func_0x000107c61170(uVar16);
    func_0x000107c3d89c(param_2,param_3,*(undefined8 *)(param_2 + lVar20));
    func_0x000107c5a050(*(undefined8 *)(param_2 + lVar20),param_3,0);
    puStack_80 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar16 = *(undefined8 *)(param_2 + lVar20);
    func_0x000107c50890();
    func_0x000107c61180();
    unaff_x21 = param_2;
    func_0x000107c4ace0();
    func_0x000107c61180();
    param_1 = -8.0;
    unaff_x22 = uVar16;
    func_0x000107c40284(uVar16,param_3,unaff_x21);
    func_0x000107c61180();
    unaff_x24 = *(undefined8 *)(param_2 + lVar20);
    uStack_78 = unaff_x22;
    func_0x000107c3f764();
    func_0x000107c61180();
    unaff_x25 = param_2;
    func_0x000107c45130();
    func_0x000107c61180();
    unaff_x26 = unaff_x25;
    func_0x000107c3f764();
    func_0x000107c61180();
    unaff_x27 = unaff_x24;
    func_0x000107c40280(unaff_x24,param_3,unaff_x26);
    func_0x000107c61180();
    unaff_x28 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = unaff_x27;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_78,2);
    func_0x000107c61180();
    func_0x000107c3d048(puStack_80,param_3,unaff_x28);
    func_0x000107c61170(unaff_x28);
    func_0x000107c61170(unaff_x27);
    func_0x000107c61170(unaff_x26);
    func_0x000107c61170(unaff_x25);
    func_0x000107c61170(unaff_x24);
    func_0x000107c61170(unaff_x22);
    func_0x000107c61170(unaff_x21);
    func_0x000107c61170(uVar16);
    lVar18 = *(long *)(param_2 + lVar20);
    unaff_x19 = param_2;
  }
  lVar1 = lVar18;
  func_0x000107c61174();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar18);
    return lVar18;
  }
  func_0x000107c60e78();
  pcStack_88 = FUN_1008a677c;
  lStack_f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = (long)_DAT_112742a04;
  puStack_e0 = unaff_x28;
  uStack_d8 = unaff_x27;
  lStack_d0 = unaff_x26;
  lStack_c8 = unaff_x25;
  uStack_c0 = unaff_x24;
  lStack_b8 = lVar20;
  uStack_b0 = unaff_x22;
  lStack_a8 = unaff_x21;
  lStack_a0 = lVar18;
  lStack_98 = unaff_x19;
  puStack_90 = &stack0xfffffffffffffff0;
  if ((*(long *)(lVar1 + lVar19) == 0) && (*(long *)(lVar1 + _DAT_112742a30) == 0))
  goto LAB_1008a6e7c;
  lVar18 = (long)_DAT_112742a38;
  if (*(long *)(lVar1 + lVar18) != 0) {
    func_0x000107c413a0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    uVar16 = *(undefined8 *)(lVar1 + lVar18);
    *(undefined8 *)(lVar1 + lVar18) = 0;
    func_0x000107c61170(uVar16);
  }
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c3e15c();
  func_0x000107c61180();
  uVar16 = *(undefined8 *)(lVar1 + lVar18);
  *(undefined **)(lVar1 + lVar18) = puVar6;
  func_0x000107c61170(uVar16);
  func_0x000107c3dc40(*(undefined8 *)(lVar1 + lVar19));
  if (param_1 <= 0.0) {
LAB_1008a6acc:
    lVar20 = *(long *)(lVar1 + lVar19);
    if (lVar20 != 0) {
      uVar12 = *(undefined8 *)(lVar1 + lVar18);
      func_0x000107c4ace0();
      func_0x000107c61180();
      lVar21 = (long)_DAT_112742a34;
      uVar5 = *(undefined8 *)(lVar1 + lVar21);
      func_0x000107c4ace0();
      func_0x000107c61180();
      lVar2 = lVar20;
      func_0x000107c402a4(lVar20,param_3,uVar5);
      func_0x000107c61180();
      uVar14 = *(undefined8 *)(lVar1 + lVar19);
      lStack_148 = lVar2;
      func_0x000107c50890();
      func_0x000107c61180();
      uVar15 = *(undefined8 *)(lVar1 + lVar21);
      func_0x000107c50890();
      func_0x000107c61180();
      uVar16 = uVar14;
      func_0x000107c40280(uVar14,param_3,uVar15);
      func_0x000107c61180();
      uVar7 = *(undefined8 *)(lVar1 + lVar19);
      uStack_140 = uVar16;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      uVar9 = *(undefined8 *)(lVar1 + lVar21);
      func_0x000107c5cbe4(uVar9);
      func_0x000107c61180();
      uVar3 = uVar7;
      func_0x000107c40280(uVar7,param_3,uVar9);
      func_0x000107c61180();
      uVar10 = *(undefined8 *)(lVar1 + lVar19);
      uStack_138 = uVar3;
      func_0x000107c3ec1c();
      func_0x000107c61180();
      uVar11 = *(undefined8 *)(lVar1 + lVar21);
      func_0x000107c3ec1c(uVar11);
      func_0x000107c61180();
      uVar4 = uVar10;
      func_0x000107c40280(uVar10,param_3,uVar11);
      func_0x000107c61180();
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_130 = uVar4;
      func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&lStack_148,4);
      func_0x000107c61180();
      func_0x000107c3d7a0(uVar12,param_3,puVar6);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar11);
      func_0x000107c61170(uVar10);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar9);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar16);
      func_0x000107c61170(uVar15);
      func_0x000107c61170(uVar14);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(lVar20);
    }
    lVar20 = (long)_DAT_112742a30;
    lVar2 = *(long *)(lVar1 + lVar20);
    if (lVar2 != 0) {
      uVar14 = *(undefined8 *)(lVar1 + lVar18);
      func_0x000107c4ace0();
      func_0x000107c61180();
      lVar19 = (long)_DAT_112742a34;
      uVar3 = *(undefined8 *)(lVar1 + lVar19);
      func_0x000107c4ace0(uVar3);
      func_0x000107c61180();
      lVar18 = lVar2;
      func_0x000107c402a4(lVar2,param_3,uVar3);
      func_0x000107c61180();
      uStack_170 = *(undefined8 *)(lVar1 + lVar20);
      lStack_168 = lVar18;
      func_0x000107c50890();
      func_0x000107c61180();
      uStack_178 = *(undefined8 *)(lVar1 + lVar19);
      func_0x000107c50890();
      func_0x000107c61180();
      uStack_180 = uStack_170;
      func_0x000107c40280(uStack_170,param_3,uStack_178);
      func_0x000107c61180();
      uStack_188 = *(undefined8 *)(lVar1 + lVar20);
      uStack_160 = uStack_180;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      uStack_190 = *(undefined8 *)(lVar1 + lVar19);
      func_0x000107c5cbe4();
      func_0x000107c61180();
      uStack_198 = uStack_188;
      func_0x000107c40280(uStack_188,param_3,uStack_190);
      func_0x000107c61180();
      uVar4 = *(undefined8 *)(lVar1 + lVar20);
      uStack_158 = uStack_198;
      func_0x000107c3ec1c();
      func_0x000107c61180();
      uVar5 = *(undefined8 *)(lVar1 + lVar19);
      func_0x000107c3ec1c(uVar5);
      func_0x000107c61180();
      uVar16 = uVar4;
      func_0x000107c40280(uVar4,param_3,uVar5);
      func_0x000107c61180();
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_150 = uVar16;
      func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&lStack_168,4);
      func_0x000107c61180();
      func_0x000107c3d7a0(uVar14,param_3,puVar6);
      goto LAB_1008a6de8;
    }
  }
  else {
    lVar20 = (long)_DAT_112742a30;
    func_0x000107c3dc40(*(undefined8 *)(lVar1 + lVar20));
    if (param_1 <= 0.0) goto LAB_1008a6acc;
    uVar17 = *(undefined8 *)(lVar1 + lVar18);
    lVar2 = *(long *)(lVar1 + lVar19);
    func_0x000107c4ace0();
    func_0x000107c61180();
    lVar21 = (long)_DAT_112742a34;
    uVar3 = *(undefined8 *)(lVar1 + lVar21);
    func_0x000107c4ace0();
    func_0x000107c61180();
    lVar18 = lVar2;
    func_0x000107c402a4(lVar2,param_3,uVar3);
    func_0x000107c61180();
    uStack_170 = *(undefined8 *)(lVar1 + lVar19);
    lStack_128 = lVar18;
    func_0x000107c50890();
    func_0x000107c61180();
    uStack_178 = *(undefined8 *)(lVar1 + lVar21);
    func_0x000107c50890();
    func_0x000107c61180();
    uStack_180 = uStack_170;
    func_0x000107c40280(uStack_170,param_3,uStack_178);
    func_0x000107c61180();
    uStack_188 = *(undefined8 *)(lVar1 + lVar19);
    uStack_120 = uStack_180;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    uStack_190 = *(undefined8 *)(lVar1 + lVar21);
    func_0x000107c5cbe4();
    func_0x000107c61180();
    uStack_198 = uStack_188;
    func_0x000107c40280(uStack_188,param_3,uStack_190);
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(lVar1 + lVar20);
    uStack_118 = uStack_198;
    func_0x000107c4ace0();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(lVar1 + lVar21);
    func_0x000107c4ace0(uVar5);
    func_0x000107c61180();
    uVar16 = uVar4;
    func_0x000107c402a4(uVar4,param_3,uVar5);
    func_0x000107c61180();
    puVar6 = *(undefined **)(lVar1 + lVar20);
    uStack_110 = uVar16;
    func_0x000107c50890();
    func_0x000107c61180();
    uVar7 = *(undefined8 *)(lVar1 + lVar21);
    func_0x000107c50890();
    func_0x000107c61180();
    puVar8 = puVar6;
    func_0x000107c40280(puVar6,param_3,uVar7);
    func_0x000107c61180();
    uVar9 = *(undefined8 *)(lVar1 + lVar20);
    puStack_108 = puVar8;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    uVar10 = *(undefined8 *)(lVar1 + lVar19);
    func_0x000107c3ec1c();
    func_0x000107c61180();
    uVar14 = uVar9;
    func_0x000107c40284(0x4008000000000000,uVar9,param_3,uVar10);
    func_0x000107c61180();
    uVar11 = *(undefined8 *)(lVar1 + lVar20);
    uStack_100 = uVar14;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    uVar12 = *(undefined8 *)(lVar1 + lVar21);
    func_0x000107c3ec1c(uVar12);
    func_0x000107c61180();
    uVar15 = uVar11;
    func_0x000107c40280(uVar11,param_3,uVar12);
    func_0x000107c61180();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_f8 = uVar15;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&lStack_128,7);
    func_0x000107c61180();
    func_0x000107c3d7a0(uVar17,param_3,puVar13);
    func_0x000107c61170(puVar13);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(uVar7);
LAB_1008a6de8:
    func_0x000107c61170(puVar6);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uStack_198);
    func_0x000107c61170(uStack_190);
    func_0x000107c61170(uStack_188);
    func_0x000107c61170(uStack_180);
    func_0x000107c61170(uStack_178);
    func_0x000107c61170(uStack_170);
    func_0x000107c61170(lVar18);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(lVar2);
  }
  puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c4a958();
  func_0x000107c61180();
  func_0x000107c3d048(puVar6,param_3,lVar1);
  func_0x000107c61170();
LAB_1008a6e7c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f0) {
    return lVar1;
  }
  func_0x000107c60e78();
  return *(long *)(lVar1 + _DAT_112742a38);
}



/* Entry: 1008a677c; end: 1008a6eb7; -[SCCameraToolbarButtonImpl _layoutTitleLabelWithNewBadgeView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1008a677c(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = (long)_DAT_112742a04;
  if ((*(long *)(param_2 + lVar17) == 0) && (*(long *)(param_2 + _DAT_112742a30) == 0))
  goto LAB_1008a6e7c;
  lVar18 = (long)_DAT_112742a38;
  if (*(long *)(param_2 + lVar18) != 0) {
    func_0x000107c413a0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    uVar1 = *(undefined8 *)(param_2 + lVar18);
    *(undefined8 *)(param_2 + lVar18) = 0;
    func_0x000107c61170(uVar1);
  }
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c3e15c();
  func_0x000107c61180();
  uVar1 = *(undefined8 *)(param_2 + lVar18);
  *(undefined **)(param_2 + lVar18) = puVar6;
  func_0x000107c61170(uVar1);
  func_0x000107c3dc40(*(undefined8 *)(param_2 + lVar17));
  if (param_1 <= 0.0) {
LAB_1008a6acc:
    lVar19 = *(long *)(param_2 + lVar17);
    if (lVar19 != 0) {
      uVar12 = *(undefined8 *)(param_2 + lVar18);
      func_0x000107c4ace0();
      func_0x000107c61180();
      lVar20 = (long)_DAT_112742a34;
      uVar5 = *(undefined8 *)(param_2 + lVar20);
      func_0x000107c4ace0();
      func_0x000107c61180();
      lVar2 = lVar19;
      func_0x000107c402a4(lVar19,param_3,uVar5);
      func_0x000107c61180();
      uVar14 = *(undefined8 *)(param_2 + lVar17);
      lStack_c8 = lVar2;
      func_0x000107c50890();
      func_0x000107c61180();
      uVar15 = *(undefined8 *)(param_2 + lVar20);
      func_0x000107c50890();
      func_0x000107c61180();
      uVar1 = uVar14;
      func_0x000107c40280(uVar14,param_3,uVar15);
      func_0x000107c61180();
      uVar7 = *(undefined8 *)(param_2 + lVar17);
      uStack_c0 = uVar1;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      uVar9 = *(undefined8 *)(param_2 + lVar20);
      func_0x000107c5cbe4(uVar9);
      func_0x000107c61180();
      uVar3 = uVar7;
      func_0x000107c40280(uVar7,param_3,uVar9);
      func_0x000107c61180();
      uVar10 = *(undefined8 *)(param_2 + lVar17);
      uStack_b8 = uVar3;
      func_0x000107c3ec1c();
      func_0x000107c61180();
      uVar11 = *(undefined8 *)(param_2 + lVar20);
      func_0x000107c3ec1c(uVar11);
      func_0x000107c61180();
      uVar4 = uVar10;
      func_0x000107c40280(uVar10,param_3,uVar11);
      func_0x000107c61180();
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_b0 = uVar4;
      func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&lStack_c8,4);
      func_0x000107c61180();
      func_0x000107c3d7a0(uVar12,param_3,puVar6);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar11);
      func_0x000107c61170(uVar10);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar9);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar1);
      func_0x000107c61170(uVar15);
      func_0x000107c61170(uVar14);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(lVar19);
    }
    lVar17 = (long)_DAT_112742a30;
    lVar2 = *(long *)(param_2 + lVar17);
    if (lVar2 != 0) {
      uVar14 = *(undefined8 *)(param_2 + lVar18);
      func_0x000107c4ace0();
      func_0x000107c61180();
      lVar19 = (long)_DAT_112742a34;
      uVar3 = *(undefined8 *)(param_2 + lVar19);
      func_0x000107c4ace0(uVar3);
      func_0x000107c61180();
      lVar18 = lVar2;
      func_0x000107c402a4(lVar2,param_3,uVar3);
      func_0x000107c61180();
      uStack_f0 = *(undefined8 *)(param_2 + lVar17);
      lStack_e8 = lVar18;
      func_0x000107c50890();
      func_0x000107c61180();
      uStack_f8 = *(undefined8 *)(param_2 + lVar19);
      func_0x000107c50890();
      func_0x000107c61180();
      uStack_100 = uStack_f0;
      func_0x000107c40280(uStack_f0,param_3,uStack_f8);
      func_0x000107c61180();
      uStack_108 = *(undefined8 *)(param_2 + lVar17);
      uStack_e0 = uStack_100;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      uStack_110 = *(undefined8 *)(param_2 + lVar19);
      func_0x000107c5cbe4();
      func_0x000107c61180();
      uStack_118 = uStack_108;
      func_0x000107c40280(uStack_108,param_3,uStack_110);
      func_0x000107c61180();
      uVar4 = *(undefined8 *)(param_2 + lVar17);
      uStack_d8 = uStack_118;
      func_0x000107c3ec1c();
      func_0x000107c61180();
      uVar5 = *(undefined8 *)(param_2 + lVar19);
      func_0x000107c3ec1c(uVar5);
      func_0x000107c61180();
      uVar1 = uVar4;
      func_0x000107c40280(uVar4,param_3,uVar5);
      func_0x000107c61180();
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_d0 = uVar1;
      func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&lStack_e8,4);
      func_0x000107c61180();
      func_0x000107c3d7a0(uVar14,param_3,puVar6);
      goto LAB_1008a6de8;
    }
  }
  else {
    lVar19 = (long)_DAT_112742a30;
    func_0x000107c3dc40(*(undefined8 *)(param_2 + lVar19));
    if (param_1 <= 0.0) goto LAB_1008a6acc;
    uVar16 = *(undefined8 *)(param_2 + lVar18);
    lVar2 = *(long *)(param_2 + lVar17);
    func_0x000107c4ace0();
    func_0x000107c61180();
    lVar20 = (long)_DAT_112742a34;
    uVar3 = *(undefined8 *)(param_2 + lVar20);
    func_0x000107c4ace0();
    func_0x000107c61180();
    lVar18 = lVar2;
    func_0x000107c402a4(lVar2,param_3,uVar3);
    func_0x000107c61180();
    uStack_f0 = *(undefined8 *)(param_2 + lVar17);
    lStack_a8 = lVar18;
    func_0x000107c50890();
    func_0x000107c61180();
    uStack_f8 = *(undefined8 *)(param_2 + lVar20);
    func_0x000107c50890();
    func_0x000107c61180();
    uStack_100 = uStack_f0;
    func_0x000107c40280(uStack_f0,param_3,uStack_f8);
    func_0x000107c61180();
    uStack_108 = *(undefined8 *)(param_2 + lVar17);
    uStack_a0 = uStack_100;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    uStack_110 = *(undefined8 *)(param_2 + lVar20);
    func_0x000107c5cbe4();
    func_0x000107c61180();
    uStack_118 = uStack_108;
    func_0x000107c40280(uStack_108,param_3,uStack_110);
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(param_2 + lVar19);
    uStack_98 = uStack_118;
    func_0x000107c4ace0();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(param_2 + lVar20);
    func_0x000107c4ace0(uVar5);
    func_0x000107c61180();
    uVar1 = uVar4;
    func_0x000107c402a4(uVar4,param_3,uVar5);
    func_0x000107c61180();
    puVar6 = *(undefined **)(param_2 + lVar19);
    uStack_90 = uVar1;
    func_0x000107c50890();
    func_0x000107c61180();
    uVar7 = *(undefined8 *)(param_2 + lVar20);
    func_0x000107c50890();
    func_0x000107c61180();
    puVar8 = puVar6;
    func_0x000107c40280(puVar6,param_3,uVar7);
    func_0x000107c61180();
    uVar9 = *(undefined8 *)(param_2 + lVar19);
    puStack_88 = puVar8;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    uVar10 = *(undefined8 *)(param_2 + lVar17);
    func_0x000107c3ec1c();
    func_0x000107c61180();
    uVar14 = uVar9;
    func_0x000107c40284(0x4008000000000000,uVar9,param_3,uVar10);
    func_0x000107c61180();
    uVar11 = *(undefined8 *)(param_2 + lVar19);
    uStack_80 = uVar14;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    uVar12 = *(undefined8 *)(param_2 + lVar20);
    func_0x000107c3ec1c(uVar12);
    func_0x000107c61180();
    uVar15 = uVar11;
    func_0x000107c40280(uVar11,param_3,uVar12);
    func_0x000107c61180();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_78 = uVar15;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&lStack_a8,7);
    func_0x000107c61180();
    func_0x000107c3d7a0(uVar16,param_3,puVar13);
    func_0x000107c61170(puVar13);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(uVar7);
LAB_1008a6de8:
    func_0x000107c61170(puVar6);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uStack_118);
    func_0x000107c61170(uStack_110);
    func_0x000107c61170(uStack_108);
    func_0x000107c61170(uStack_100);
    func_0x000107c61170(uStack_f8);
    func_0x000107c61170(uStack_f0);
    func_0x000107c61170(lVar18);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(lVar2);
  }
  puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c4a958();
  func_0x000107c61180();
  func_0x000107c3d048(puVar6,param_3,param_2);
  func_0x000107c61170();
LAB_1008a6e7c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_2;
  }
  func_0x000107c60e78();
  return *(long *)(param_2 + _DAT_112742a38);
}



/* Entry: 1008a6eb8; end: 1008a6ec7; -[SCCameraToolbarButtonImpl labelsConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1008a6eb8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112742a38);
}



/* Entry: 1008a6ec8; end: 1008a6f1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008a6ec8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112742b7c);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d94c(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 0x28));
  func_0x000107c61180();
  func_0x000107c4d664(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1008a6f20; end: 1008a6fd3; -[SCFeatureMusicImpl configureWithCameraToolbar:] */

/* WARNING: Possible PIC construction at 0x0001008a6f58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a6f94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a6fb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008a6f98) */
/* WARNING: Removing unreachable block (ram,0x0001008a6f5c) */
/* WARNING: Removing unreachable block (ram,0x0001008a6f64) */
/* WARNING: Removing unreachable block (ram,0x0001008a6fb4) */
/* WARNING: Removing unreachable block (ram,0x0001008a6fbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008a6f20(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61148(param_1 + _DAT_11273ec04);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1008a6fd4; end: 1008a72cf; -[SCFeatureMusicImpl _createToolbarItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008a6fd4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  puVar1 = PTR_PTR_1126c7918;
  func_0x000107c610f4(PTR_PTR_1126c7918);
  func_0x000107c47fa4();
  func_0x000107c56ad8();
  puVar2 = puVar1;
  func_0x000107c58df0(puVar1);
  func_0x0001008a72d8();
  func_0x000107c61180();
  func_0x000107c56ae0(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c4d754(puVar1);
  func_0x000107c61180();
  func_0x000107c58e18(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c520f4(puVar1);
  puVar2 = puVar1;
  func_0x000107c4d754(puVar1);
  func_0x000107c61180();
  func_0x000107c520fc(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c52108(puVar1);
  func_0x000107c5210c(puVar1);
  func_0x000107c530e8(puVar1);
  func_0x000107c5a5cc(puVar1);
  func_0x000107c61144(auStack_78,param_1);
  puVar2 = puVar1;
  func_0x000107c3f3b0(puVar1);
  func_0x000107c61180();
  puVar3 = puVar2;
  FUN_100078e94();
  func_0x000107c61180();
  puVar4 = puVar2;
  func_0x000107c4da88(puVar2);
  func_0x000107c61180();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  puStack_90 = &UNK_1060b64ac;
  puStack_88 = &UNK_11090ba70;
  func_0x000107c6111c(auStack_80,auStack_78);
  puVar5 = puVar4;
  func_0x000107c5c320(puVar4);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c41a70(puVar1);
  func_0x000107c61180();
  puVar3 = puVar2;
  FUN_100078e94();
  func_0x000107c61180();
  puVar4 = puVar2;
  func_0x000107c4da88(puVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_a8,auStack_78);
  puVar5 = puVar4;
  func_0x000107c5c320(puVar4);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_a8);
  func_0x000107c61120(auStack_80);
  func_0x000107c61120(auStack_78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1008a72d0; end: 1008a72ef; -[SCCameraToolbarItemImpl setSelectedImageName:] */

void FUN_1008a72d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1008a72f0; end: 1008a733f; -[SCCameraToolbarItemImpl canChangeSelectedEvent] */

void FUN_1008a72f0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x48);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ae820;
    func_0x000107c610fc();
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar1;
    func_0x000107c61170(uVar2);
    lVar3 = *(long *)(param_1 + 0x48);
  }
  func_0x000107c61174(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1008a7340; end: 1008a7497; -[SCFeatureMusicImpl _updateToolbarItemStateIfNeeded] */

/* WARNING: Possible PIC construction at 0x0001008a73c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a73e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a7400: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a742c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008a73e4) */
/* WARNING: Removing unreachable block (ram,0x0001008a73c4) */
/* WARNING: Removing unreachable block (ram,0x0001008a73c8) */
/* WARNING: Removing unreachable block (ram,0x0001008a7430) */
/* WARNING: Removing unreachable block (ram,0x0001008a7450) */
/* WARNING: Removing unreachable block (ram,0x0001008a7478) */
/* WARNING: Removing unreachable block (ram,0x0001008a7470) */
/* WARNING: Removing unreachable block (ram,0x0001008a747c) */
/* WARNING: Removing unreachable block (ram,0x0001008a7438) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008a7340(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (*(long *)(param_1 + _DAT_11273ebb4) == 0) {
    uVar2 = (uint)*(byte *)(param_1 + _DAT_11273ebec);
  }
  else {
    uVar2 = 1;
  }
  uVar1 = (uint)*(undefined8 *)(param_1 + _DAT_11273ec08);
  func_0x000107c4a3b4();
  if ((uVar2 & 1) == uVar1) {
    param_1 = param_1 + _DAT_11273ec04;
    func_0x000107c61148(param_1);
    func_0x000107c49f5c();
  }
  else {
    param_1 = param_1 + _DAT_11273ec04;
    func_0x000107c61148(param_1);
    func_0x000107c59eac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008a7498; end: 1008a754f; -[SCCameraVerticalToolbar isItemHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1008a7498(double param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  
  func_0x000107c61174(param_4);
  lVar2 = *(long *)(param_2 + (long)_DAT_112742b94);
  func_0x000107c4d9c0(lVar2,param_3,param_4);
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c3af74(param_2,param_3,param_4);
    func_0x000107c61180();
    if (((param_2 != 0) && (uVar3 = param_2, func_0x000107c49c70(), (uVar3 & 1) == 0)) &&
       (uVar3 = param_2, func_0x000107c49eac(), (uVar3 & 1) == 0)) {
      func_0x000107c3dc40(param_2);
      bVar1 = param_1 == 0.0;
      goto LAB_1008a74e4;
    }
  }
  else {
    func_0x000107c61170();
    param_2 = 0;
  }
  bVar1 = true;
LAB_1008a74e4:
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  return bVar1;
}



/* Entry: 1008a7550; end: 1008a7667; -[SCCameraVerticalToolbar _buttonForToolbarItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008a7550(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  func_0x000107c61174(param_3);
  lVar3 = (long)_DAT_112742b84;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x000107c4d9e8(lVar1,param_2,param_3);
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar4 = (long)_DAT_112742b90;
    lVar1 = *(long *)(param_1 + lVar4);
    func_0x000107c45340(lVar1,param_2,param_3);
    if (lVar1 != 0x7fffffffffffffff) {
      func_0x000107c3ad34(param_1,param_2,param_3);
      func_0x000107c4ff80(*(undefined8 *)(param_1 + lVar4),param_2,param_3);
      lVar1 = (long)_DAT_112742ba8;
      if ((*(byte *)(param_1 + lVar1) & 1) == 0) {
        *(undefined1 *)(param_1 + lVar1) = 1;
        puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_50 = 0xc2000000;
        puStack_48 = &UNK_1061e4fc4;
        puStack_40 = &UNK_110842e18;
        lStack_38 = param_1;
        func_0x000107c4e5fc(PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_58);
        *(undefined1 *)(param_1 + lVar1) = 0;
      }
    }
  }
  else {
    func_0x000107c61170();
  }
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x000107c4d9e8(uVar2,param_2,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1008a7668; end: 1008a76af;  */

long FUN_1008a7668(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c3bfbc(param_1);
  }
  func_0x000107c61170(param_1);
  return lVar1;
}



/* Entry: 1008a76b0; end: 1008a773f; -[SCCameraCoreFeatureProviderPluginWorkflow _nightModeEnabled] */

undefined8 FUN_1008a76b0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x000107c4ae38();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c4b2cc();
  if ((uVar3 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x1b8);
    func_0x000107c3d0dc(uVar4);
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c4a580();
    func_0x000107c61170(uVar4);
  }
  else {
    uVar5 = 1;
  }
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  return uVar5;
}



/* Entry: 1008a7740; end: 1008a7747; -[SCCameraNightModeServices activationHandler] */

undefined8 FUN_1008a7740(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1008a7748; end: 1008a7753; -[SCCameraNightModeActivationHandler isSupported] */

void FUN_1008a7748(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c078bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b7130,PTR_s_isNightModeSupported_1125fbcf8);
  return;
}



/* Entry: 1008a7754; end: 1008a77d7; +[SCManagedCaptureDeviceCapabilities isNightModeSupported] */

undefined * FUN_1008a7754(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b2930;
  func_0x000107c61168();
  puVar3 = puVar1;
  func_0x000107c40efc();
  func_0x000107c61180();
  puVar2 = puVar3;
  func_0x000107c49f50();
  func_0x000107c61170(puVar3);
  if (((ulong)puVar2 & 1) == 0) {
    func_0x000107c40efc(puVar1);
    func_0x000107c61180();
    puVar3 = puVar1;
    func_0x000107c49f4c();
    func_0x000107c61170(puVar1);
  }
  else {
    puVar3 = (undefined *)0x1;
  }
  return puVar3;
}



/* Entry: 1008a77d8; end: 1008a782f;  */

void FUN_1008a77d8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c3b2e4(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    func_0x000107c61180();
  }
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1008a7830; end: 1008a7ce3; -[SCCameraCoreFeatureProviderPluginWorkflow _createNightModeWithPublicFeatureCatalogProvider:] */

void FUN_1008a7830(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uStack_128;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  func_0x000107c61174(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4ae38();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c4b2cc();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  if ((int)uVar4 == 0) {
    puStack_f8 = PTR_PTR_1126c7b38;
    func_0x000107c610f4();
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c5de90();
    func_0x000107c61180();
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_1008a7ce4;
    puStack_d8 = &UNK_11084e7d0;
    uStack_d0 = param_3;
    func_0x000107c61174(param_3);
    ppuVar6 = &puStack_f0;
    FUN_1008a7ce4();
    func_0x000107c61180();
    uVar7 = *(undefined8 *)(param_1 + 0x78);
    func_0x000107c3f0f4();
    func_0x000107c61180();
    uVar8 = *(undefined8 *)(param_1 + 0x78);
    func_0x000107c418b8();
    func_0x000107c61180();
    uVar12 = *(undefined8 *)(param_1 + 0x78);
    func_0x000107c3f0fc(uVar12);
    func_0x000107c61180();
    uVar14 = *(undefined8 *)(param_1 + 0x28);
    func_0x000107c3f14c();
    func_0x000107c61180();
    uVar2 = uVar14;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar9 = *(ulong *)(param_1 + 0x28);
    func_0x000107c5dd3c();
    func_0x000107c61180();
    uVar10 = uVar9;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar11 = uVar10;
    func_0x000107c4d6bc();
    uVar15 = *(undefined8 *)(param_1 + 0x1b8);
    func_0x000107c3d0dc();
    func_0x000107c61180();
    uVar16 = *(undefined8 *)(param_1 + 0x28);
    func_0x000107c4ae38();
    func_0x000107c61180();
    uVar17 = uVar16;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c45734(puStack_f8,param_2,uVar3,uVar4,ppuVar6,uVar7,uVar8,uVar12,uVar2,
                        uVar11 & 0xff,uVar15,uVar17,*(undefined8 *)(param_1 + 0xf0));
    func_0x000107c61170(uVar17);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(ppuVar6);
    func_0x000107c61170(uStack_d0);
    uVar3 = param_3;
  }
  else {
    puStack_f8 = PTR_PTR_1126c7b30;
    func_0x000107c610f4();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uVar17 = *(undefined8 *)(param_1 + 0x28);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    puStack_90 = &SUB_1060abffc;
    puStack_88 = &UNK_11084e7d0;
    func_0x000107c61174(param_3);
    ppuVar6 = &puStack_a0;
    uStack_80 = param_3;
    func_0x0001060abffc();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    func_0x000107c3f0f4();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(param_1 + 0x78);
    func_0x000107c418b8();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)(param_1 + 0x1a0);
    func_0x000107c4d6b8();
    func_0x000107c61180();
    lVar5 = *(long *)(param_1 + 0x10);
    func_0x000107c3f300();
    if (lVar5 == 9) {
      uStack_128 = *(undefined8 *)(param_1 + 0x50);
    }
    else {
      uStack_128 = 0;
    }
    uVar12 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c3f300();
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    puStack_b8 = &SUB_1060ac148;
    puStack_b0 = &UNK_11084e7d0;
    uStack_a8 = param_3;
    func_0x000107c61174(param_3);
    ppuVar13 = &puStack_c8;
    func_0x0001060ac148();
    func_0x000107c61180();
    uVar19 = *(undefined8 *)(param_1 + 0x20);
    uVar18 = *(undefined8 *)(param_1 + 0x198);
    uVar21 = *(undefined8 *)(param_1 + 0xd8);
    uVar14 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c5de90();
    func_0x000107c61180();
    uVar15 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c4c168();
    func_0x000107c61180();
    uVar20 = *(undefined8 *)(param_1 + 8);
    uVar7 = param_3;
    func_0x000107c4f5c0();
    func_0x000107c61180();
    uVar8 = uVar7;
    func_0x000107c41e78();
    func_0x000107c61180();
    uVar16 = *(undefined8 *)(param_1 + 0x1b8);
    func_0x000107c3d0dc();
    func_0x000107c61180();
    func_0x000107c45ba0(puStack_f8,param_2,uVar17,ppuVar6,uVar3,uVar4,uVar2,uStack_128,uVar12,
                        ppuVar13,uVar19,uVar18,uVar21,uVar14,uVar15,uVar20,uVar8,uVar16,
                        *(undefined8 *)(param_1 + 0xf0));
    func_0x000107c61170(uVar16);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(ppuVar13);
    func_0x000107c61170(uStack_a8);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(ppuVar6);
    uVar3 = uStack_80;
    uVar4 = param_3;
  }
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_f8);
  return;
}



/* Entry: 1008a7ce4; end: 1008a7dbf;  */

void FUN_1008a7ce4(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1008a7dc0; end: 1008a7e33; -[SCCameraVerticalToolbarConfigurationImpl nightModePerformanceUpgradesEnabled] */

undefined1 FUN_1008a7dc0(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1008a7e34;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136bc6b8 != -1) {
    uStack_18 = param_1;
    FUN_10002a2fc(0x1136bc6b8,&puStack_38);
  }
  return uRam00000001136bc6b0;
}



/* Entry: 1008a7e34; end: 1008a7e73;  */

void FUN_1008a7e34(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c431fc();
  uRam00000001136bc6b0 = (undefined1)uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008a7e74; end: 1008a7e8b; -[SCCameraCircumstanceEngineImpl fetchNightModePerformanceUpgradesEnabled] */

void FUN_1008a7e74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110de4e58,0,0);
  return;
}



/* Entry: 1008a7e8c; end: 1008a8317; -[SCFeatureNightModeImpl initWithApplicationLifecycleEvents:viewControllerLifecycleEvents:cameraUserActionLogger:cameraHardwareResource:deviceCapacityAnalyzer:cameraHardwareServicesAPI:cameraModeLabelsConfig:nightModePerformanceUpgradesEnabled:nightModeActivationHandler:lensCameraModeConfig:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1008a7e8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  puStack_80 = PTR_PTR_1126eff38;
  puVar2 = &uStack_88;
  uStack_88 = param_1;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    lVar8 = (long)_DAT_112740f48;
    func_0x000107c61174(param_5);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_5;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar2 + (long)_DAT_112740f4c) = 1;
    lVar8 = (long)_DAT_112740f50;
    func_0x000107c61174(param_8);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_8;
    func_0x000107c61170(uVar3);
    lVar9 = (long)_DAT_112740f54;
    func_0x000107c61174(param_7);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar9);
    *(undefined8 *)((long)puVar2 + lVar9) = param_7;
    func_0x000107c61170(uVar3);
    uVar3 = param_6;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c40794();
    uVar7 = *(undefined8 *)((long)puVar2 + (long)_DAT_112740f58);
    *(undefined8 *)((long)puVar2 + (long)_DAT_112740f58) = uVar5;
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c611a0((long)puVar2 + (long)_DAT_112740f5c,param_9);
    *(undefined1 *)((long)puVar2 + (long)_DAT_112740f60) = param_10;
    func_0x000107c611a0((long)puVar2 + (long)_DAT_112740f64,param_12);
    uVar3 = param_6;
    func_0x000107c5c734(param_6);
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c3f630();
    func_0x000107c61180();
    func_0x000107c611a0((long)puVar2 + (long)_DAT_112740f68,uVar4);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    puVar6 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112740f6c);
    *(undefined **)((long)puVar2 + (long)_DAT_112740f6c) = puVar6;
    func_0x000107c61170(uVar3);
    puVar6 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112740f70);
    *(undefined **)((long)puVar2 + (long)_DAT_112740f70) = puVar6;
    func_0x000107c61170(uVar3);
    lVar8 = (long)_DAT_112740f74;
    func_0x000107c61174(param_6);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_6;
    func_0x000107c61170(uVar3);
    lVar8 = (long)_DAT_112740f78;
    func_0x000107c61174(param_13);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_13;
    func_0x000107c61170(uVar3);
    lVar10 = (long)_DAT_112740f7c;
    func_0x000107c61174(param_14);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar10);
    *(undefined8 *)((long)puVar2 + lVar10) = param_14;
    func_0x000107c61170(uVar3);
    iVar1 = (int)*(undefined8 *)((long)puVar2 + lVar8);
    func_0x000107c5d870();
    *(char *)((long)puVar2 + (long)_DAT_112740f80) = (char)iVar1;
    if (iVar1 != 0) {
      uVar3 = *(undefined8 *)((long)puVar2 + lVar9);
      func_0x000107c5c734(uVar3);
      func_0x000107c61180();
      func_0x000107c3d740();
      func_0x000107c61170(uVar3);
    }
    func_0x000107c5054c(puVar2);
    func_0x000107c61144(auStack_90,puVar2);
    uVar3 = param_3;
    func_0x000107c41b80(param_3);
    func_0x000107c61180();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    puStack_a8 = &UNK_10617d75c;
    puStack_a0 = &UNK_110846510;
    func_0x000107c6111c(auStack_98,auStack_90);
    uVar4 = uVar3;
    func_0x000107c5c320(uVar3);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c6111c(auStack_c0,auStack_90);
    uVar3 = param_4;
    func_0x000107c5c320(param_4);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar3);
    func_0x000107c61120(auStack_c0);
    func_0x000107c61120(auStack_98);
    func_0x000107c61120(auStack_90);
  }
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar2;
}



/* Entry: 1008a8318; end: 1008a8377; -[SCCameraLensNightModeConfigurationImpl useMovingAverageAsTrigger] */

ulong FUN_1008a8318(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = param_1;
  func_0x000107c3cb04();
  if (lVar1 - 1U < 3) {
    uVar2 = (ulong)(((uint)(lVar1 - 1U) ^ 0xffffffff) & 1);
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x10);
    func_0x000107c5c734(uVar3);
    func_0x000107c61180();
    uVar2 = uVar3;
    func_0x000107c5d874();
    func_0x000107c61170(uVar3);
  }
  return uVar2;
}



/* Entry: 1008a8378; end: 1008a8387; -[SCFeatureNightModeImpl resetMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008a8378(long param_1)

{
  *(undefined8 *)(param_1 + _DAT_112740f88) = 0;
  return;
}



/* Entry: 1008a8388; end: 1008a848b;  */

void FUN_1008a8388(long param_1,undefined8 param_2)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  func_0x000107c61174(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1008c9a18;
  puStack_60 = &UNK_110849200;
  func_0x000107c6111c(auStack_58,param_1 + 0x20);
  func_0x000107c6111c(auStack_80,param_1 + 0x20);
  func_0x000107c4c7b0(param_2);
  func_0x000107c61120(auStack_80);
  func_0x000107c61120(auStack_58);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1008a848c; end: 1008a848f;  */

void FUN_1008a848c(void)

{
  return;
}



/* Entry: 1008a8490; end: 1008a84a3; -[SCFeatureNightModeImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008a8490(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112740f84,param_3);
  return;
}



/* Entry: 1008a84a4; end: 1008a856f; -[SCFeatureNightModeImpl configureWithCameraToolbar:] */

/* WARNING: Possible PIC construction at 0x0001008a84dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a8528: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a8544: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008a852c) */
/* WARNING: Removing unreachable block (ram,0x0001008a84e0) */
/* WARNING: Removing unreachable block (ram,0x0001008a84e8) */
/* WARNING: Removing unreachable block (ram,0x0001008a8500) */
/* WARNING: Removing unreachable block (ram,0x0001008a8548) */
/* WARNING: Removing unreachable block (ram,0x0001008a8558) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008a84a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61148(param_1 + _DAT_112740f8c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1008a8570; end: 1008a85d7; -[SCFeatureNightModeImpl _isNightModeToolbarItemHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1008a8570(long param_1)

{
  uint uVar1;
  
  if (*(char *)(param_1 + _DAT_112740fa8) == '\x01') {
    uVar1 = (uint)*(byte *)(param_1 + _DAT_112740fac);
  }
  else {
    *(undefined1 *)(param_1 + _DAT_112740fa8) = 1;
    uVar1 = (uint)*(undefined8 *)(param_1 + _DAT_112740f78);
    func_0x000107c4a0e8();
    *(char *)(param_1 + _DAT_112740fac) = (char)uVar1;
  }
  return uVar1 & 1;
}



/* Entry: 1008a85d8; end: 1008a8617; -[SCCameraLensNightModeConfigurationImpl isNightModeToolbarItemHidden] */

undefined8 FUN_1008a85d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c43200();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1008a8618; end: 1008a862f; -[SCCameraCircumstanceEngineImpl fetchNightModeToolbarItemHidden] */

void FUN_1008a8618(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110de4e78,0,0);
  return;
}



/* Entry: 1008a8630; end: 1008a88bb; -[SCFeatureNightModeImpl _createToolbarItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008a8630(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar5 = (long)_DAT_112740f90;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126c7918;
    func_0x000107c610f4();
    func_0x000107c47fa4();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    func_0x000107c61170(uVar3);
    func_0x000107c56ad8(*(undefined8 *)(param_1 + lVar5));
    func_0x000107c58df0(*(undefined8 *)(param_1 + lVar5));
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x000107c520f4(uVar3);
    FUN_1008a88bc();
    func_0x000107c61180();
    func_0x000107c520fc(*(undefined8 *)(param_1 + lVar5));
    func_0x000107c61170(uVar3);
    FUN_1008a88bc();
    func_0x000107c61180();
    func_0x000107c56ae0(*(undefined8 *)(param_1 + lVar5));
    func_0x000107c61170(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x000107c4d754(uVar3);
    func_0x000107c61180();
    func_0x000107c58e18(*(undefined8 *)(param_1 + lVar5));
    func_0x000107c61170(uVar3);
    func_0x000107c530e8(*(undefined8 *)(param_1 + lVar5));
    func_0x000107c61144(auStack_68,param_1);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x000107c41a70(uVar2);
    func_0x000107c61180();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    puStack_80 = &UNK_10617da60;
    puStack_78 = &UNK_11090ba70;
    func_0x000107c6111c(auStack_70,auStack_68);
    uVar3 = uVar2;
    func_0x000107c5c320(uVar2);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x000107c3f45c(uVar2);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_98,auStack_68);
    uVar3 = uVar2;
    func_0x000107c5c320(uVar2);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    lVar4 = *(long *)(param_1 + lVar5);
    func_0x000107c61174(lVar4);
    func_0x000107c61120(auStack_98);
    func_0x000107c61120(auStack_70);
    func_0x000107c61120(auStack_68);
  }
  else {
    func_0x000107c61174(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1008a88bc; end: 1008a88d3;  */

void FUN_1008a88bc(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e43338;
  FUN_1000f5ff4(&PTR____CFConstantStringClassReference_110e43338,
                &PTR____CFConstantStringClassReference_110e61f78,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    FUN_10002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}


