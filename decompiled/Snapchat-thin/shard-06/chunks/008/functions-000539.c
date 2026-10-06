/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104e5454c; end: 104e5460f; -[SCMyStoriesSaver _onSaveImageToCameraRollWithStoryId:snapComponentId:savingLoggerSessionId:storySnap:error:saveUpdateSubject:] */

void FUN_104e5454c(long param_1)

{
  undefined8 uVar1;
  undefined8 in_x4;
  long in_x6;
  
  _objc_retain(in_x6);
  _objc_retain(in_x4);
  func_0x00010be6b360(0xbff0000000000000,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010795e04c(in_x4,in_x6 == 0,in_x6,uVar1);
  _objc_release(in_x6);
  _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e54610; end: 104e5478b; -[SCMyStoriesSaver _onExportVideoWithUrl:error:storyId:snapComponentId:savingLoggerSessionId:storySnap:showOutOfSpacePrompt:saveUpdateSubject:] */

void FUN_104e54610(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_11);
  if (param_4 == 0) {
    func_0x00010be69140(param_1);
  }
  else {
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_104e5478c;
    puStack_90 = &UNK_110853a60;
    uStack_88 = param_1;
    _objc_retain(param_4);
    lStack_80 = param_4;
    _objc_retain(param_5);
    uStack_78 = param_5;
    _objc_retain(param_6);
    uStack_70 = param_6;
    _objc_retain(param_7);
    uStack_58 = param_9;
    uStack_68 = param_7;
    _objc_retain(param_11);
    uStack_60 = param_11;
    func_0x000100162d98("APPSTORE",&puStack_a8);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    _objc_release(lStack_80);
  }
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104e5478c; end: 104e547a3;  */

void FUN_104e5478c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be69130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onExportVideoFailureWithError_s_112577de8,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
             *(undefined1 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x48));
  return;
}



/* Entry: 104e547a4; end: 104e54983; -[SCMyStoriesSaver _onExportVideoSuccessWithUrl:storyId:snapComponentId:savingLoggerSessionId:storySnap:saveUpdateSubject:] */

void FUN_104e547a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126b1348;
  func_0x00010c22b6a0(PTR_PTR_1126b1348);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010c14af80(puVar1);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104e54984; end: 104e54acf;  */

void FUN_104e54984(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104e54ad0;
  puStack_78 = &UNK_110853a90;
  _objc_copyWeak(auStack_38,param_1 + 0x50);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_70 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = uVar2;
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_60 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_58 = uVar2;
  _objc_retain(uVar1);
  uStack_50 = uVar1;
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_48 = param_2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_90);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104e54ad0; end: 104e54b1b;  */

void FUN_104e54ad0(long param_1)

{
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6b380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e54b1c; end: 104e54c3b; -[SCMyStoriesSaver _onSaveVideoToCameraRollWithUrl:storyId:snapComponentId:savingLoggerSessionId:storySnap:error:saveUpdateSubject:] */

void FUN_104e54b1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b0010;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c299e20(puVar1);
  func_0x00010be6b360(param_1);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010795e04c(param_6,param_8 == 0,param_8,uVar2);
  _objc_release(param_8);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104e54c3c; end: 104e54d0b; -[SCMyStoriesSaver _onExportVideoFailureWithError:storyId:snapComponentId:savingLoggerSessionId:showOutOfSpacePrompt:saveUpdateSubject:] */

void FUN_104e54c3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b1340;
  if ((param_7 & 1) == 0) {
    _objc_retain(param_8);
    func_0x00010c14a620(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(param_8);
    _objc_release(param_8);
    _objc_release(puVar1);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010795e04c(param_6,0,param_3,uVar2);
  _objc_release(uVar2);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e54d0c; end: 104e54e03; -[SCMyStoriesSaver _onSaveToCameraRollCompleteWithStoryId:snapComponentId:storySnap:error:isVideo:videoDuration:saveUpdateSubject:] */

void FUN_104e54d0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126b1340;
  if (param_6 == 0) {
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010be90200(param_1,param_2,param_5);
  }
  else {
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010c14a620(puVar1,param_2,param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(param_8,param_2,puVar1);
    _objc_release(puVar1);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfafb80();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_8);
  return;
}



/* Entry: 104e54e04; end: 104e551af; -[SCMyStoriesSaver _onSaveCompleteWithStoryId:snapComponentId:storySnap:saveSuccess:saveToCameraRoll:saveToMemories:showOutOfSpacePrompt:saveUpdateSubject:] */

void FUN_104e54e04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,int param_6,uint param_7,undefined8 param_8,char param_9,
                  undefined4 param_10,undefined8 param_11)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_11);
  if (param_6 == 0) goto LAB_104e55118;
  puVar2 = PTR_PTR_1126b1360;
  _objc_opt_new();
  lVar3 = param_5;
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar4 = param_5;
    func_0x00010bf3cf60(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ba680(puVar2,param_2,lVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
  }
  else {
    func_0x00010c2ba680(puVar2,param_2,lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(lVar3);
  lVar3 = param_5;
  func_0x00010bf5bbc0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b5900(puVar2,param_2,lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  func_0x00010c2b7800(puVar2,param_2,param_8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar3 = param_5;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c27dd80();
  func_0x0001084f2c4c();
  uVar1 = lVar4 + 1;
  if (uVar1 < 0x1c) {
    if ((1L << (uVar1 & 0x3f) & 0xd8de0fdU) == 0) {
      if (uVar1 == 8) {
        uVar6 = 5;
      }
      else {
        if (uVar1 != 10) goto LAB_104e551a8;
        uVar6 = 0xe;
      }
    }
    else {
      uVar6 = 1;
      if ((lVar4 + 1U < 0x1c) && ((1L << (lVar4 + 1U & 0x3f) & 0xb4b5dbbU) != 0)) {
        if (lVar4 < 0x1a) {
          uVar6 = *(undefined8 *)(&UNK_10dd8d2e0 + lVar4 * 8);
        }
        else {
          uVar6 = 0;
        }
      }
    }
  }
  else {
LAB_104e551a8:
    uVar6 = 2;
  }
  func_0x00010c2b3b00(puVar2,param_2,uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = param_5;
  func_0x00010bf0e700(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x000108532db8();
  func_0x00010c2ba700(puVar2,param_2,lVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = param_5;
  func_0x00010bf0e700(param_5);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104e551b0;
  puStack_78 = &UNK_110853af0;
  _objc_retain(puVar2);
  puStack_70 = puVar2;
  _objc_retain(param_5);
  lStack_68 = param_5;
  func_0x00010c0c1340(lVar3,param_2,0,&puStack_90,0,0,0,0);
  _objc_release(lVar3);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  puVar5 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b1180(uVar6,param_2,puVar5);
  _objc_release(puVar5);
  if ((param_7 & 1) == 0) {
    func_0x00010be90200(param_1,param_2,param_5);
  }
  puVar5 = PTR_PTR_1126b1340;
  func_0x00010c14b3c0(PTR_PTR_1126b1340,param_2,param_8,param_7,1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_11,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(lStack_68);
  _objc_release(puStack_70);
  _objc_release(puVar2);
LAB_104e55118:
  if (param_9 != '\0') {
    func_0x000107d9f7c8();
  }
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfafb80();
  _objc_release(uVar6);
  _objc_release(param_11);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e551b0; end: 104e55237;  */

void FUN_104e551b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c259cc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b6440(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf0e700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001085332dc();
  func_0x00010c2ba720(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e55238; end: 104e5539f; -[SCMyStoriesSaver _reportSaveIfNecessaryForStorySnap:] */

void FUN_104e55238(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf5bbc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0();
  _objc_release(lVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c2923e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x000107cd24e0(param_3,2,uVar4,*(undefined8 *)(param_1 + 0x68),
                        *(undefined8 *)(param_1 + 0x60));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    if (lVar2 != 0) {
      lVar5 = param_3;
      func_0x00010bf0e700(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf0a600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      lVar5 = lVar6;
      func_0x00010c259cc0(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27dd80(lVar6);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14af20();
      _objc_release(uVar4);
      _objc_release(lVar5);
      _objc_release(lVar6);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e553a0; end: 104e5549b; -[SCMyStoriesSaver .cxx_destruct] */

void FUN_104e553a0(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e5549c; end: 104e5566b; -[SCSaveStoryEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e5549c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_1127148b4;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar4;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112714830);
  *(long *)(param_1 + _DAT_112714830) = lVar1;
  _objc_release(uVar3);
  _objc_release(lVar4);
  lVar4 = param_1 + _DAT_112714834;
  _objc_loadWeakRetained(lVar4);
  lVar1 = lVar4;
  func_0x00010c0d4b00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be61c60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112714838);
  *(long *)(param_1 + _DAT_112714838) = lVar2;
  _objc_release(uVar3);
  _objc_release(lVar1);
  _objc_release(lVar4);
  _objc_initWeak(auStack_48,param_1);
  lVar4 = param_1 + _DAT_11271483c;
  _objc_loadWeakRetained(lVar4);
  lVar1 = lVar4;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112714840;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104e5566c;
  puStack_58 = &UNK_110849200;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x000107e003a4(lVar1,lVar2,&puStack_70);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(lVar1);
  _objc_release(lVar4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 104e5566c; end: 104e556a7;  */

void FUN_104e5566c(long param_1,int param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  if (param_2 == 0) {
    func_0x00010bebc120();
  }
  else {
    func_0x00010be68e00();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e556a8; end: 104e55887; -[SCSaveStoryEntryPoint _onDiskSpaceCheckPassed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e556a8(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010bf10fa0();
  if (puVar1 != (undefined *)0x2) {
    puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010bf10fa0();
    if (puVar1 != (undefined *)0x1) {
      lVar7 = (long)_DAT_11271483c;
      lVar4 = param_1 + lVar7;
      _objc_loadWeakRetained();
      lVar5 = lVar4;
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      lVar4 = param_1 + lVar7;
      _objc_loadWeakRetained(lVar4);
      lVar6 = lVar4;
      func_0x00010c259cc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      lVar7 = param_1 + lVar7;
      _objc_loadWeakRetained();
      lVar4 = lVar7;
      func_0x00010c242520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      lVar7 = lVar5;
      func_0x00010c08fa60();
      if ((lVar7 == 0) && (lVar7 = lVar4, func_0x00010bf529e0(), lVar7 != 1)) {
        func_0x00010bed0440(param_1);
      }
      else {
        func_0x00010be999c0(param_1);
      }
      _objc_release(lVar4);
      _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar5);
      return;
    }
  }
  lVar4 = param_1 + _DAT_112714844;
  _objc_loadWeakRetained(lVar4);
  lVar7 = lVar4;
  func_0x00010c0fb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110db74f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db74f8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110db7518;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db7518,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1184e0(lVar5);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(lVar5);
  _objc_release(lVar7);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bebc130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__signalScopeWillComplete_11258c9f0);
  return;
}



/* Entry: 104e55888; end: 104e55ca7; -[SCSaveStoryEntryPoint _myStoriesSaverWithMyStoriesCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e55888(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
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
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  
  lVar32 = (long)_DAT_112714848;
  _objc_retain(param_3);
  lVar32 = param_1 + lVar32;
  _objc_loadWeakRetained();
  lVar1 = lVar32;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar32);
  lVar32 = param_1 + _DAT_11271484c;
  _objc_loadWeakRetained();
  lVar2 = lVar32;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar32);
  puVar4 = PTR_PTR_1126b1368;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112714830);
  _objc_retain();
  _objc_alloc();
  lVar32 = param_1 + _DAT_112714850;
  _objc_loadWeakRetained();
  lVar5 = lVar32;
  func_0x00010bfbdac0();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = (long)_DAT_112714854;
  lVar6 = param_1 + lVar33;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c2587e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_112714858;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1 + lVar33;
  _objc_loadWeakRetained();
  lVar10 = lVar33;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_11271485c;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010bf145c0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_112714860;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010bef1320();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_112714864;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_112714868;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_11271486c;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010bfcdf20();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_112714870;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + _DAT_112714874;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010c25a5a0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + _DAT_112714840;
  _objc_loadWeakRetained();
  lVar26 = lVar25;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + _DAT_112714878;
  _objc_loadWeakRetained();
  lVar28 = lVar27;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1 + _DAT_11271487c;
  _objc_loadWeakRetained();
  lVar30 = lVar29;
  func_0x00010c2a29c0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112714880;
  _objc_loadWeakRetained();
  lVar31 = param_1;
  func_0x00010bfbe800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05da60(puVar4,param_2,lVar1,lVar5,param_3,lVar7,lVar2,lVar9,uVar3,lVar10,lVar12,
                      lVar14,lVar16,lVar18,lVar20,lVar22,lVar24,lVar26,lVar28,lVar30,lVar31);
  _objc_release(uVar3);
  _objc_release(param_3);
  _objc_release(lVar31);
  _objc_release(param_1);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar33);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar32);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104e55ca8; end: 104e55ff7; -[SCSaveStoryEntryPoint _saveSingleSnapWithClientId:storyId:snapPlaybackInfosOverride:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e55ca8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar7 = param_1 + _DAT_112714870;
  _objc_loadWeakRetained();
  lVar2 = lVar7;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar7);
  lVar7 = lVar3;
  func_0x00010bfb1820();
  if ((int)lVar7 != 0) {
    lVar7 = param_1 + _DAT_11271483c;
    _objc_loadWeakRetained(lVar7);
    lVar2 = lVar7;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108df9694();
    _objc_release(lVar2);
    _objc_release(lVar7);
  }
  uVar8 = param_4;
  func_0x00010c0720c0();
  lVar7 = param_5;
  func_0x00010bf529e0();
  puVar4 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  if (lVar7 == 0) {
    lVar7 = 0;
  }
  else {
    _objc_retain(param_3);
    func_0x00010c1063a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_5;
    func_0x00010bfaea40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(puVar4);
    _objc_release(param_3);
  }
  puVar4 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112714884);
  *(undefined **)(param_1 + _DAT_112714884) = puVar4;
  _objc_release(uVar6);
  lVar2 = param_1 + _DAT_11271483c;
  _objc_loadWeakRetained();
  lVar5 = lVar2;
  func_0x00010c07eb00();
  _objc_release(lVar2);
  if ((int)lVar5 == 0) {
    iVar1 = 0;
    if (lVar7 != 0) {
      iVar1 = (int)uVar8;
    }
    uVar8 = *(undefined8 *)(param_1 + _DAT_112714838);
    if (iVar1 == 1) {
      func_0x00010c14ab00();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c14b2a0(uVar8);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + _DAT_112714838);
    lVar2 = param_5;
    func_0x00010bfb1920(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14aee0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_retain(param_3);
  _objc_retain(lVar7);
  uVar6 = uVar8;
  func_0x00010c25ff60(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar6);
  _objc_release(param_3);
  _objc_release(lVar7);
  _objc_release(param_3);
  _objc_release(lVar7);
  _objc_release(uVar8);
  _objc_release(lVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104e55ff8; end: 104e55ffb;  */

void FUN_104e55ff8(void)

{
  return;
}



/* Entry: 104e55ffc; end: 104e5609f;  */

undefined8 FUN_104e55ffc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf3cf60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 104e560a0; end: 104e56173; -[SCSaveStoryEntryPoint _onOurStoriesSaveUpdate:clientId:] */

void FUN_104e560a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104e56174;
  puStack_40 = &UNK_110853ba0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x104e56188;
  puStack_68 = &UNK_110853bd0;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_104e561a0;
  puStack_98 = &UNK_1108420a0;
  uStack_90 = param_1;
  uStack_88 = param_4;
  uStack_60 = param_1;
  uStack_38 = param_1;
  _objc_retain(param_4);
  func_0x00010c0bfb00(param_3,param_2,&puStack_58,&puStack_80,&puStack_b0);
  _objc_release(uStack_88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104e56174; end: 104e5619f;  */

void FUN_104e56174(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6a2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onMyStoriesSaveBeganWithSavingT_112578250,
             param_2,param_3,param_4);
  return;
}



/* Entry: 104e561a0; end: 104e562fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e561a0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x20) + (long)_DAT_1127148b0;
    _objc_loadWeakRetained(lVar5);
  }
  lVar1 = lVar5;
  func_0x00010c23cd60(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar5);
  lVar5 = lVar2;
  func_0x00010c23cd80(lVar2,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112714838);
  func_0x00010c14ab00(uVar3,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar1);
  _objc_release(lVar2);
  return;
}



/* Entry: 104e562fc; end: 104e56307;  */

void FUN_104e562fc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6a330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onMyStoriesSaveUpdate__112578268,param_2);
  return;
}



/* Entry: 104e56308; end: 104e5652b; -[SCSaveStoryEntryPoint _trySaveEntireStoryWithStoryId:snapPlaybackInfosOverride:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e56308(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112714838);
  func_0x00010c07d280();
  if (iVar1 == 0) {
    lVar2 = param_1 + _DAT_112714888;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c258880();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c14a4a0();
    if ((int)lVar5 == 0) {
      uVar6 = param_1 + _DAT_11271483c;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      func_0x00010c07eb00();
      _objc_release(uVar6);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      if ((uVar7 & 1) == 0) {
        _objc_initWeak(auStack_68,param_1);
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0xc2000000;
        pcStack_90 = FUN_104e5652c;
        puStack_88 = &UNK_110848218;
        _objc_copyWeak(auStack_70,auStack_68);
        _objc_retain(param_3);
        uStack_80 = param_3;
        _objc_retain(param_4);
        uStack_78 = param_4;
        _objc_copyWeak(auStack_a8,auStack_68);
        func_0x00010be04d40(param_1);
        _objc_destroyWeak(auStack_a8);
        _objc_release(uStack_78);
        _objc_release(uStack_80);
        _objc_destroyWeak(auStack_70);
        _objc_destroyWeak(auStack_68);
        goto LAB_104e564d8;
      }
    }
    else {
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    func_0x00010be98f80(param_1);
  }
  else {
    func_0x00010bebc120(param_1);
  }
LAB_104e564d8:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104e5652c; end: 104e5658b;  */

void FUN_104e5652c(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be98f80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e5658c; end: 104e569eb; -[SCSaveStoryEntryPoint _displaySaveEntireStoryOnboardingWithConfirmationHandler:dismissalHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e5658c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  long lVar13;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110db6ad8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db6ad8,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_104e569ec;
  puStack_a8 = &UNK_11084e500;
  _objc_retain(param_3);
  lStack_a0 = param_3;
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_initWeak(auStack_c8,param_1);
  puVar3 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110db7558;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db7558,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_d0,auStack_c8);
  _objc_retain(param_3);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar4 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  ppuVar5 = &PTR____CFConstantStringClassReference_110db7598;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db7598,0);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_112714870;
  _objc_loadWeakRetained();
  lVar6 = lVar13;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar13);
  lVar13 = lVar7;
  func_0x000108e00d3c();
  lVar6 = lVar7;
  func_0x000108e00cf8();
  uVar12 = (uint)lVar13;
  ppuVar1 = ppuVar5;
  if (((uVar12 | (uint)lVar6) & 1) != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db75b8;
    if ((uVar12 & (uint)lVar6) == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110db75d8;
    }
    if (uVar12 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110db7598;
    }
    func_0x00010bcbeaa8(ppuVar1,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
  }
  puVar8 = PTR_PTR_1126aed78;
  _objc_alloc();
  ppuVar5 = &PTR____CFConstantStringClassReference_110db75f8;
  uVar10 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db75f8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_98 = puVar2;
  puStack_90 = puVar3;
  puStack_88 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  lVar13 = (long)_DAT_11271488c;
  uVar11 = *(undefined8 *)(param_1 + lVar13);
  *(undefined **)(param_1 + lVar13) = puVar8;
  _objc_release(uVar11);
  _objc_release(puVar9);
  _objc_release(ppuVar5);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar13));
  param_1 = param_1 + _DAT_11271483c;
  _objc_loadWeakRetained(param_1);
  lVar13 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar13);
  _objc_release(param_1);
  _objc_release(lVar7);
  _objc_release(ppuVar1);
  _objc_release(puVar4);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_c8);
  _objc_release(puVar2);
  _objc_release(lStack_a0);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_c8);
  __Unwind_Resume();
  uVar11 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(uVar11);
  func_0x00010bf84b00(uVar10);
  _objc_release(uVar11);
  return;
}



/* Entry: 104e569ec; end: 104e56a63;  */

void FUN_104e569ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf84b00(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 104e56a64; end: 104e56a6f;  */

void FUN_104e56a64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104e56a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 104e56a70; end: 104e56b1b;  */

void FUN_104e56a70(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be5d7a0();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  func_0x00010bf84b00(param_2);
  _objc_release(param_2);
  _objc_release(uVar2);
  return;
}



/* Entry: 104e56b1c; end: 104e56b27;  */

void FUN_104e56b1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104e56b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 104e56b28; end: 104e56b9f;  */

void FUN_104e56b28(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf84b00(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 104e56ba0; end: 104e56bab;  */

void FUN_104e56ba0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104e56ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 104e56bac; end: 104e56cef; -[SCSaveStoryEntryPoint _saveEntireStoryWithStoryId:snapPlaybackInfosOverride:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e56bac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae810;
  _objc_retain(param_3);
  _objc_opt_new();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112714884);
  *(undefined **)(param_1 + _DAT_112714884) = puVar1;
  _objc_release(uVar5);
  lVar2 = param_1 + _DAT_11271483c;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c07eb00();
  _objc_release(lVar2);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112714838);
  if ((int)lVar3 == 0) {
    func_0x00010c14b380(uVar5,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c14a480();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104e56cf0;
  puStack_60 = &UNK_110853c00;
  uVar4 = uVar5;
  lStack_58 = param_1;
  func_0x00010c25ff60(uVar5,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(param_4);
  return;
}



/* Entry: 104e56cf0; end: 104e56cfb;  */

void FUN_104e56cf0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6a330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onMyStoriesSaveUpdate__112578268,param_2);
  return;
}



/* Entry: 104e56cfc; end: 104e56cff; -[SCSaveStoryEntryPoint dialogDidDismiss:] */

void FUN_104e56cfc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bebc130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__signalScopeWillComplete_11258c9f0);
  return;
}



/* Entry: 104e56d00; end: 104e56d9b; -[SCSaveStoryEntryPoint _onMyStoriesSaveUpdate:] */

void FUN_104e56d00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104e56d9c;
  puStack_20 = &UNK_110853ba0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x104e56db0;
  puStack_48 = &UNK_110853bd0;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x104e56dc8;
  puStack_70 = &UNK_110849810;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bfb00(param_3,param_2,&puStack_38,&puStack_60,&puStack_88);
  return;
}



/* Entry: 104e56d9c; end: 104e56dd3;  */

void FUN_104e56d9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6a2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onMyStoriesSaveBeganWithSavingT_112578250,
             param_2,param_3,param_4);
  return;
}



/* Entry: 104e56dd4; end: 104e56ff3; -[SCSaveStoryEntryPoint _onMyStoriesSaveBeganWithSavingToMemories:savingToCameraRoll:savingIndividualSnap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e56dd4(undefined **param_1,undefined8 param_2,undefined **param_3,uint param_4,
                  uint param_5,undefined **param_6)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = param_3;
  uVar14 = param_4;
  if ((param_5 & 1) == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db7618;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db7618,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar1 = param_1;
    func_0x000108f5887c();
    _objc_retainAutoreleasedReturnValue();
  }
  if ((((ulong)param_3 & 1) != 0) || (param_4 != 0)) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110db7638;
    if (((uint)param_3 & param_4) == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110db7658;
    }
    if (param_4 == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110db7678;
    }
    func_0x00010bcbeaa8(ppuVar2,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111184260;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b1370;
    func_0x00010c25d500();
    _objc_retainAutoreleasedReturnValue();
    param_5 = 4;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(ppuVar3);
    ppuVar6 = (undefined **)PTR_PTR_1126b1370;
    _objc_alloc();
    uVar14 = 2;
    func_0x00010c030320();
    lVar7 = (long)param_1 + (long)_DAT_112714890;
    _objc_loadWeakRetained();
    lVar8 = lVar7;
    func_0x00010c0dc6e0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar6;
    func_0x00010befa0a0();
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(ppuVar6);
    _objc_release(puVar5);
    _objc_release(ppuVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = param_6;
  ppuVar6 = ppuVar3;
  _objc_retain();
  if (param_5 == 0) {
    ppuVar10 = param_6;
    func_0x00010c08fa60();
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (ppuVar10 == (undefined **)0x0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110db76b8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db76b8,0);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104e570c8;
    }
    ppuVar10 = &PTR____CFConstantStringClassReference_110db7698;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db7698,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar10;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar10);
    if (((ulong)ppuVar3 & 1) == 0) goto LAB_104e570d0;
LAB_104e570d4:
    ppuVar10 = &PTR____CFConstantStringClassReference_110db76d8;
    if (((uint)ppuVar3 & uVar14) == 0) {
      ppuVar10 = &PTR____CFConstantStringClassReference_110db76f8;
    }
    if (uVar14 == 0) {
      ppuVar10 = &PTR____CFConstantStringClassReference_110db7718;
    }
    func_0x00010bcbeaa8(ppuVar10,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111184270;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b1370;
    func_0x00010c25d500();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(ppuVar6);
    ppuVar11 = (undefined **)PTR_PTR_1126b1370;
    _objc_alloc();
    func_0x00010c030320();
    lVar7 = (long)ppuVar1 + (long)_DAT_112714890;
    _objc_loadWeakRetained();
    lVar8 = lVar7;
    func_0x00010c0dc6e0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar11;
    func_0x00010befa0a0();
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    if ((uint)ppuVar3 != 0) {
      lVar7 = (long)ppuVar1 + (long)_DAT_112714894;
      _objc_loadWeakRetained();
      ppuVar3 = (undefined **)((long)ppuVar1 + (long)_DAT_11271483c);
      _objc_loadWeakRetained();
      ppuVar12 = ppuVar3;
      func_0x00010c27ece0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar12;
      func_0x00010bf381c0(lVar7);
      _objc_release(ppuVar12);
      _objc_release(ppuVar3);
      _objc_release(lVar7);
    }
    func_0x00010bebc120(ppuVar1);
    _objc_release(ppuVar11);
    _objc_release(puVar5);
    _objc_release(ppuVar10);
  }
  else {
    func_0x000108f58894();
    _objc_retainAutoreleasedReturnValue();
LAB_104e570c8:
    if (((ulong)ppuVar3 & 1) != 0) goto LAB_104e570d4;
LAB_104e570d0:
    if (uVar14 != 0) goto LAB_104e570d4;
  }
  _objc_release(ppuVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar6);
  ppuVar3 = ppuVar6;
  func_0x000107ffa0b8();
  if ((int)ppuVar3 == 0) {
    if ((ppuVar6 == (undefined **)0x0) ||
       (ppuVar3 = ppuVar6, func_0x000108dde528(), (int)ppuVar3 == 0)) goto LAB_104e573f4;
    lVar7 = (long)param_6 + (long)_DAT_11271483c;
    _objc_loadWeakRetained(lVar7);
    lVar8 = lVar7;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108df8680();
  }
  else {
    lVar7 = (long)param_6 + (long)_DAT_11271483c;
    _objc_loadWeakRetained(lVar7);
    lVar8 = lVar7;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = (long)param_6 + (long)_DAT_112714898;
    _objc_loadWeakRetained(lVar9);
    lVar13 = lVar9;
    func_0x00010c0c7e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107e001b8(lVar8);
    _objc_release(lVar13);
    _objc_release(lVar9);
  }
  _objc_release(lVar8);
  _objc_release(lVar7);
LAB_104e573f4:
  ppuVar3 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111184270;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b1370;
  func_0x00010c25d500();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db7738;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db7738,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  puVar4 = PTR_PTR_1126b1370;
  _objc_alloc();
  func_0x00010c030320();
  lVar7 = (long)param_6 + (long)_DAT_112714890;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010c0dc6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa0a0();
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  func_0x00010bebc120(param_6);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(ppuVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
    ___stack_chk_fail();
    lVar15 = (long)ppuVar6 + (long)_DAT_112714888;
    _objc_loadWeakRetained(lVar15);
    lVar7 = lVar15;
    func_0x00010c258880();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f58c0();
    _objc_release(lVar8);
    _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar15);
    return;
  }
  return;
}



/* Entry: 104e56ff4; end: 104e572ff; -[SCSaveStoryEntryPoint _onMyStoriesSaveSucceededWithSavedToMemories:savedToCameraRoll:savedIndividualSnap:storyDisplayName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e56ff4(long param_1,undefined8 param_2,undefined **param_3,uint param_4,int param_5,
                  undefined **param_6)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  long lVar13;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = param_6;
  ppuVar3 = param_3;
  _objc_retain();
  if (param_5 == 0) {
    ppuVar2 = param_6;
    func_0x00010c08fa60();
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110db76b8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db76b8,0);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104e570c8;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110db7698;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db7698,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    if (((ulong)param_3 & 1) == 0) goto LAB_104e570d0;
LAB_104e570d4:
    ppuVar2 = &PTR____CFConstantStringClassReference_110db76d8;
    if (((uint)param_3 & param_4) == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110db76f8;
    }
    if (param_4 == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110db7718;
    }
    func_0x00010bcbeaa8(ppuVar2,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111184270;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b1370;
    func_0x00010c25d500();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(ppuVar3);
    ppuVar6 = (undefined **)PTR_PTR_1126b1370;
    _objc_alloc();
    func_0x00010c030320();
    lVar7 = param_1 + _DAT_112714890;
    _objc_loadWeakRetained();
    lVar8 = lVar7;
    func_0x00010c0dc6e0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar6;
    func_0x00010befa0a0();
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    if ((uint)param_3 != 0) {
      lVar7 = param_1 + _DAT_112714894;
      _objc_loadWeakRetained();
      ppuVar10 = (undefined **)(param_1 + _DAT_11271483c);
      _objc_loadWeakRetained();
      ppuVar11 = ppuVar10;
      func_0x00010c27ece0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar11;
      func_0x00010bf381c0(lVar7);
      _objc_release(ppuVar11);
      _objc_release(ppuVar10);
      _objc_release(lVar7);
    }
    func_0x00010bebc120(param_1);
    _objc_release(ppuVar6);
    _objc_release(puVar5);
    _objc_release(ppuVar2);
  }
  else {
    func_0x000108f58894();
    _objc_retainAutoreleasedReturnValue();
LAB_104e570c8:
    if (((ulong)param_3 & 1) != 0) goto LAB_104e570d4;
LAB_104e570d0:
    if (param_4 != 0) goto LAB_104e570d4;
  }
  _objc_release(ppuVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar3);
  ppuVar1 = ppuVar3;
  func_0x000107ffa0b8();
  if ((int)ppuVar1 == 0) {
    if ((ppuVar3 == (undefined **)0x0) ||
       (ppuVar1 = ppuVar3, func_0x000108dde528(), (int)ppuVar1 == 0)) goto LAB_104e573f4;
    lVar7 = (long)param_6 + (long)_DAT_11271483c;
    _objc_loadWeakRetained(lVar7);
    lVar8 = lVar7;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108df8680();
  }
  else {
    lVar7 = (long)param_6 + (long)_DAT_11271483c;
    _objc_loadWeakRetained(lVar7);
    lVar8 = lVar7;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = (long)param_6 + (long)_DAT_112714898;
    _objc_loadWeakRetained(lVar9);
    lVar12 = lVar9;
    func_0x00010c0c7e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107e001b8(lVar8);
    _objc_release(lVar12);
    _objc_release(lVar9);
  }
  _objc_release(lVar8);
  _objc_release(lVar7);
LAB_104e573f4:
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111184270;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b1370;
  func_0x00010c25d500();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110db7738;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db7738,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(puVar4);
  _objc_release(ppuVar1);
  puVar4 = PTR_PTR_1126b1370;
  _objc_alloc();
  func_0x00010c030320();
  lVar7 = (long)param_6 + (long)_DAT_112714890;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010c0dc6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa0a0();
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  func_0x00010bebc120(param_6);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(ppuVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    lVar13 = (long)ppuVar3 + (long)_DAT_112714888;
    _objc_loadWeakRetained(lVar13);
    lVar7 = lVar13;
    func_0x00010c258880();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f58c0();
    _objc_release(lVar8);
    _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar13);
    return;
  }
  return;
}



/* Entry: 104e57300; end: 104e5757f; -[SCSaveStoryEntryPoint _onMyStoriesSaveFailed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e57300(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x000107ffa0b8();
  if ((int)lVar1 == 0) {
    if ((param_3 == 0) || (lVar1 = param_3, func_0x000108dde528(), (int)lVar1 == 0))
    goto LAB_104e573f4;
    lVar1 = param_1 + _DAT_11271483c;
    _objc_loadWeakRetained(lVar1);
    lVar4 = lVar1;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108df8680();
  }
  else {
    lVar1 = param_1 + _DAT_11271483c;
    _objc_loadWeakRetained(lVar1);
    lVar4 = lVar1;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + _DAT_112714898;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c0c7e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107e001b8(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar4);
  _objc_release(lVar1);
LAB_104e573f4:
  ppuVar5 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111184270;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b1370;
  func_0x00010c25d500();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &PTR____CFConstantStringClassReference_110db7738;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db7738,0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar7);
  _objc_release(puVar6);
  _objc_release(ppuVar5);
  puVar6 = PTR_PTR_1126b1370;
  _objc_alloc();
  func_0x00010c030320();
  lVar1 = param_1 + _DAT_112714890;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar1;
  func_0x00010c0dc6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa0a0();
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar1);
  func_0x00010bebc120(param_1);
  _objc_release(puVar6);
  _objc_release(puVar8);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  param_3 = param_3 + _DAT_112714888;
  _objc_loadWeakRetained(param_3);
  lVar1 = param_3;
  func_0x00010c258880();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f58c0();
  _objc_release(lVar9);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e57580; end: 104e575ef; -[SCSaveStoryEntryPoint _markSaveEntireStoryOnboardingComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e57580(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_112714888;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c258880();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f58c0();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e575f0; end: 104e57663; -[SCSaveStoryEntryPoint _signalScopeWillComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e575f0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11271483c;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf73f40(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e57664; end: 104e5782b; -[SCSaveStoryEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e57664(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112714894);
  _objc_destroyWeak(param_1 + _DAT_112714840);
  _objc_destroyWeak(param_1 + _DAT_112714878);
  _objc_destroyWeak(param_1 + _DAT_1127148b4);
  _objc_destroyWeak(param_1 + _DAT_112714880);
  _objc_destroyWeak(param_1 + _DAT_11271487c);
  _objc_destroyWeak(param_1 + _DAT_1127148b0);
  _objc_destroyWeak(param_1 + _DAT_112714888);
  _objc_destroyWeak(param_1 + _DAT_112714844);
  _objc_destroyWeak(param_1 + _DAT_112714898);
  _objc_destroyWeak(param_1 + _DAT_112714890);
  _objc_destroyWeak(param_1 + _DAT_1127148ac);
  _objc_destroyWeak(param_1 + _DAT_112714848);
  _objc_destroyWeak(param_1 + _DAT_11271486c);
  _objc_destroyWeak(param_1 + _DAT_112714868);
  _objc_destroyWeak(param_1 + _DAT_112714864);
  _objc_destroyWeak(param_1 + _DAT_112714860);
  _objc_destroyWeak(param_1 + _DAT_112714874);
  _objc_destroyWeak(param_1 + _DAT_1127148a8);
  _objc_destroyWeak(param_1 + _DAT_1127148a4);
  _objc_destroyWeak(param_1 + _DAT_1127148a0);
  _objc_destroyWeak(param_1 + _DAT_11271489c);
  _objc_destroyWeak(param_1 + _DAT_11271485c);
  _objc_destroyWeak(param_1 + _DAT_112714858);
  _objc_destroyWeak(param_1 + _DAT_11271484c);
  _objc_destroyWeak(param_1 + _DAT_112714854);
  _objc_destroyWeak(param_1 + _DAT_112714834);
  _objc_destroyWeak(param_1 + _DAT_112714850);
  _objc_destroyWeak(param_1 + _DAT_112714870);
  _objc_destroyWeak(param_1 + _DAT_11271483c);
  _objc_storeStrong(param_1 + _DAT_112714838,0);
  _objc_storeStrong(param_1 + _DAT_112714830,0);
  _objc_storeStrong(param_1 + _DAT_112714884,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271488c,0);
  return;
}



/* Entry: 104e5782c; end: 104e579d3; -[SCRepostExternalMediaProvider initWithShareableMediaItemsProviding:contentDelivery:contentModel:bufferedContentFetcher:temporaryFileWriter:snapVideoFilterFactory:previewURLVideoProvider:] */

undefined1 *
FUN_104e5782c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e4808;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104e579d4; end: 104e57a43; -[SCRepostExternalMediaProvider getImageData] */

void FUN_104e579d4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c22b600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x0001065efadc(lVar2,*(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104e57a44; end: 104e5820f; -[SCRepostExternalMediaProvider getVideoData] */

void FUN_104e57a44(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  long lStack_2a0;
  long lStack_298;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined **ppuStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puStack_138 = &uStack_140;
  uStack_140 = 0;
  uStack_130 = 0x3032000000;
  pcStack_128 = FUN_104e58210;
  uStack_120 = 0x104e58220;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puStack_168 = &uStack_170;
  uStack_170 = 0;
  uStack_160 = 0x3032000000;
  pcStack_158 = FUN_104e58210;
  uStack_150 = 0x104e58220;
  uStack_148 = 0;
  lVar6 = param_1 + 8;
  puStack_118 = puVar2;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c22b620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97e80();
  _objc_release(lVar7);
  _objc_release(lVar6);
  uVar3 = puStack_138[5];
  func_0x00010bf51e00(uVar3);
  uVar4 = uVar3;
  func_0x0001065efadc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x0001065f0140(puVar2,uVar4,uVar16,uVar3,*(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar2);
  lVar6 = *(long *)(param_1 + 0x18);
  func_0x00010bf4d380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar7 = *(long *)(param_1 + 0x18);
  if (lVar6 != 0) {
    func_0x00010bf4d380();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain();
    _objc_retain(puVar1);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(puVar1);
    _objc_release(lVar7);
    _objc_release(lVar7);
    goto LAB_104e57c5c;
  }
  func_0x00010bf4bee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR_PTR_1126b1378;
  if (lVar7 == 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar9 = param_1;
    func_0x00010c22b620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_retain(lVar9);
    lVar6 = lVar9;
    func_0x00010bf52a60();
    lVar7 = lRam0000000000000000;
    while (lVar6 != 0) {
      lVar18 = 0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(lVar9);
        }
        uVar17 = *(ulong *)(lVar18 * 8);
        uVar8 = uVar17;
        func_0x00010c0c6c20();
        if (uVar8 == 1) {
          uVar8 = uVar17;
          func_0x00010c29bb40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (uVar8 == 0) {
            func_0x00010c2991a0();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
            _objc_opt_class(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
            uVar14 = uVar17;
            _objc_opt_isKindOfClass(uVar17,puVar2);
            uVar8 = uVar17;
            if ((uVar14 & 1) == 0) {
              uVar8 = 0;
            }
            _objc_retain(uVar8);
            _objc_release(uVar17);
            uVar17 = uVar8;
            func_0x00010bdc2b80();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar8);
          }
          else {
            func_0x00010c29bb40();
            _objc_retainAutoreleasedReturnValue();
          }
          _objc_release(lVar9);
          if (uVar17 == 0) goto LAB_104e58118;
          func_0x00010bf43d60(puVar1);
          goto LAB_104e581a0;
        }
        lVar18 = lVar18 + 1;
      } while (lVar6 != lVar18);
      lVar6 = lVar9;
      func_0x00010bf52a60();
    }
    _objc_release(lVar9);
LAB_104e58118:
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    uStack_110 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_108 = &PTR____CFConstantStringClassReference_110db7798;
    puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    func_0x00010bf43ca0(puVar1);
    _objc_release(puVar2);
    uVar17 = 0;
LAB_104e581a0:
    _objc_release(lVar9);
    _objc_release(uVar17);
    goto LAB_104e57c5c;
  }
  lVar6 = puStack_168[5];
  if (lVar6 != 0) {
    _objc_retain(puVar1);
    func_0x00010c297260(lVar6);
    _objc_release(puVar1);
    goto LAB_104e57c5c;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf4bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c46a0();
  puVar15 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  func_0x00010c291560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  _objc_release(uVar3);
  lVar9 = *(long *)(param_1 + 0x18);
  func_0x00010bf4bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar9;
  func_0x00010bf93ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c08fa60();
  if (lVar7 == 0) {
LAB_104e57fb4:
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf4bee0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 != 0) goto LAB_104e57fcc;
  }
  else {
    lStack_298 = *(long *)(param_1 + 0x18);
    func_0x00010bf4bf00();
    _objc_retainAutoreleasedReturnValue();
    lStack_2a0 = lStack_298;
    func_0x00010bf93de0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lStack_2a0;
    func_0x00010c08fa60();
    if (lVar18 == 0) goto LAB_104e57fb4;
    uVar10 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf4bee0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf4bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar11;
    func_0x00010bf93ec0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf4bf00(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010bf93de0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar10;
    func_0x00010c2ad2a0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar16);
    _objc_release(uVar11);
    _objc_release(uVar10);
LAB_104e57fcc:
    _objc_release(lStack_2a0);
    _objc_release(lStack_298);
  }
  _objc_release(lVar6);
  _objc_release(lVar9);
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar10;
  func_0x00010bfa6dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar16;
  func_0x00010bf49960();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  func_0x00010c26d0c0(uVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar13);
  _objc_release(uVar16);
  _objc_release(uVar10);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(puVar2);
LAB_104e57c5c:
  _objc_release(uVar4);
  __Block_object_dispose(&uStack_170,8);
  _objc_release(uStack_148);
  __Block_object_dispose(&uStack_140,8);
  _objc_release(puStack_118);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_170,8);
  lVar6 = 8;
  __Block_object_dispose(&uStack_140);
  __Unwind_Resume();
  *(undefined8 *)(puVar1 + 0x28) = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x28) = 0;
  return;
}



/* Entry: 104e58210; end: 104e58227;  */

void FUN_104e58210(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104e58228; end: 104e5831b;  */

void FUN_104e58228(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0c6c20();
  puVar2 = PTR_PTR_1126ae558;
  if ((param_3 == 0) || (lVar1 != 0)) {
    lVar1 = param_2;
    func_0x00010c0c6c20();
    if (lVar1 != 1) goto LAB_104e58308;
    lVar1 = param_2;
    func_0x00010c29bb60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) goto LAB_104e58308;
    lVar1 = param_2;
    func_0x00010c29bb60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    lVar4 = *(long *)(lVar3 + 0x28);
    *(long *)(lVar3 + 0x28) = lVar1;
  }
  else {
    uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
    lVar4 = param_2;
    func_0x00010bfe6ac0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9ca0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar5);
    _objc_release(puVar2);
  }
  _objc_release(lVar4);
LAB_104e58308:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104e5831c; end: 104e5832b;  */

void FUN_104e5831c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be06210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__downloadStreamingVideoWithConte_11255f220,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 104e5832c; end: 104e5837b;  */

void FUN_104e5832c(long param_1,long param_2)

{
  undefined *puVar1;
  
  if (param_2 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010becb1a0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 104e5837c; end: 104e583eb;  */

undefined8 FUN_104e5837c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfc1d60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c13ca20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010becb1a0(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return 0;
}



/* Entry: 104e583ec; end: 104e584d7; -[SCRepostExternalMediaProvider _downloadStreamingVideoWithContentResult:fileURLPromise:] */

void FUN_104e583ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104e584d8;
  puStack_58 = &UNK_110853cf0;
  uStack_50 = param_4;
  lStack_48 = param_1;
  _objc_retain(param_4);
  func_0x00010c13e420(uVar2,param_2,param_3,uVar1,&puStack_70);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uStack_50);
  _objc_release(param_4);
  return;
}



/* Entry: 104e584d8; end: 104e58527;  */

void FUN_104e584d8(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if ((param_3 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010becb1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s__temporarySaveVideoData_fileURLP_112590610,
               param_2,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_opt_new(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x00010bf43ca0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e58528; end: 104e5866f; -[SCRepostExternalMediaProvider _temporarySaveVideoData:fileURLPromise:] */

void FUN_104e58528(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_48;
  
  _objc_retain(param_4);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = uVar5;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110db77b8);
  _objc_retainAutoreleasedReturnValue();
  lStack_48 = 0;
  uVar4 = uVar5;
  func_0x00010c2bda80(uVar5,param_2,param_3,puVar3,0xc,&lStack_48,param_7,param_8,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar1 = lStack_48;
  _objc_retain(lStack_48);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar5);
  if (lVar1 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
    func_0x00010bfee820();
    func_0x00010bf43d60(param_4,param_2,puVar3);
    _objc_release(puVar3);
  }
  else {
    func_0x00010bf43ca0(param_4,param_2,lVar1);
  }
  _objc_release(uVar4);
  _objc_release(lVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 104e58670; end: 104e586e3; -[SCRepostExternalMediaProvider .cxx_destruct] */

void FUN_104e58670(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104e586e4; end: 104e58b8b; -[SCStoriesRepostMentionScopeImplEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e586e4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
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
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uStack_a8;
  
  if (param_1 == 0) {
    _objc_retain();
    uStack_a8 = 0;
    lVar17 = 0;
  }
  else {
    uStack_a8 = *(undefined8 *)(param_1 + _DAT_1127148e4);
    _objc_retain();
    lVar17 = param_1 + _DAT_1127148e8;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar17;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar17);
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_1127148ec;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar17;
  func_0x00010c110fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar17);
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_1127148f0;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar17;
  func_0x00010c0c4e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar17);
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_1127148f4;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar17;
  func_0x00010bf36240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar17);
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_1127148f8;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar17;
  func_0x00010c112160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar17);
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_1127148fc;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar17;
  func_0x00010c243b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar17);
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_112714900;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar17;
  func_0x00010c22c380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar17);
  lVar17 = param_1;
  FUN_104e58b8c();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar17;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar17);
  lVar17 = param_1;
  FUN_104e58b8c();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar17;
  func_0x00010c244620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar17);
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_112714908;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar17;
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar17);
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_11271490c;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar17;
  func_0x00010bf21e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar17);
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_112714910;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar17;
  func_0x00010c26b280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar17);
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_112714918;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar17;
  func_0x00010c2932e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar17);
  puVar14 = PTR_PTR_1126b1380;
  _objc_alloc();
  if (param_1 == 0) {
    lVar15 = (long)_DAT_1127148d8;
    _objc_loadWeakRetained(lVar15);
    lVar17 = 0;
    lVar19 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_1127148e0;
    _objc_loadWeakRetained(lVar17);
    lVar15 = param_1 + _DAT_1127148d8;
    _objc_loadWeakRetained(lVar15);
    lVar19 = param_1 + _DAT_112714914;
    _objc_loadWeakRetained();
  }
  func_0x00010c041e40(puVar14,param_2,lVar17,uStack_a8,lVar15,lVar1,lVar2,lVar3,lVar4,lVar5,lVar6,
                      lVar7,lVar8,lVar9,lVar10,lVar11,lVar12,lVar19,lVar13);
  lVar18 = (long)_DAT_1127148dc;
  uVar16 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar14;
  _objc_release(uVar16);
  _objc_release(lVar19);
  _objc_release(lVar15);
  _objc_release(lVar17);
  func_0x00010bf17a60(*(undefined8 *)(param_1 + lVar18));
  _objc_release(uStack_a8);
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
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e58b8c; end: 104e58baf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e58b8c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112714904);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e58bb0; end: 104e58c07; -[SCStoriesRepostMentionScopeImplEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e58bb0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf940a0(*(undefined8 *)(param_1 + _DAT_1127148dc));
  puStack_28 = PTR_PTR_1126e4810;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e58c08; end: 104e58cfb; -[SCStoriesRepostMentionScopeImplEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e58c08(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127148d8);
  _objc_destroyWeak(param_1 + _DAT_112714918);
  _objc_destroyWeak(param_1 + _DAT_112714914);
  _objc_destroyWeak(param_1 + _DAT_112714910);
  _objc_destroyWeak(param_1 + _DAT_11271490c);
  _objc_destroyWeak(param_1 + _DAT_112714908);
  _objc_destroyWeak(param_1 + _DAT_112714904);
  _objc_destroyWeak(param_1 + _DAT_112714900);
  _objc_destroyWeak(param_1 + _DAT_1127148fc);
  _objc_destroyWeak(param_1 + _DAT_1127148f8);
  _objc_destroyWeak(param_1 + _DAT_1127148f4);
  _objc_destroyWeak(param_1 + _DAT_1127148f0);
  _objc_destroyWeak(param_1 + _DAT_1127148ec);
  _objc_destroyWeak(param_1 + _DAT_1127148e8);
  _objc_storeStrong(param_1 + _DAT_1127148e4,0);
  _objc_destroyWeak(param_1 + _DAT_1127148e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127148dc,0);
  return;
}



/* Entry: 104e58cfc; end: 104e590af; -[SCStoriesRepostMentionWorkflow initWithScope:previewScopeExposer:previewScopeBuilderServices:circumstanceEngine:previewFilterDataProviderFactory:chatMediaFetcher:chatContentDelivery:previewURLVideoProvider:snapVideoFilterFactory:sharedStorySnapManager:snapchatterDataFetcher:snapchatterPublicInfoFetcher:contentDelivery:bufferedContentFetcher:temporaryFileWriter:snapDocEditorServices:userProfileIdProvider:] */

undefined8 *
FUN_104e58cfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  puStack_70 = PTR_PTR_1126e4818;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[2];
    puVar1[2] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
  }
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
  return puVar1;
}



/* Entry: 104e590b0; end: 104e592db; -[SCStoriesRepostMentionWorkflow begin] */

void FUN_104e590b0(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **unaff_x23;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined1 **)(param_1 + 8);
  func_0x00010c134380();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_release();
  if (puVar1 != (undefined1 *)0x0) {
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010c134380();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    _objc_release(lVar4);
    _objc_release(lVar3);
    if (lVar5 == 0) {
      puVar2 = param_1;
      func_0x00010be7b320();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bf940b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_end_1125c29d0);
        return;
      }
      goto LAB_104e592ac;
    }
    _objc_initWeak(auStack_58,param_1);
    uVar6 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 8);
    func_0x00010c134380();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_50 = uVar8;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_104e592dc;
    puStack_68 = &UNK_1108434e0;
    param_2 = auStack_58;
    _objc_copyWeak(auStack_60,param_2);
    func_0x00010c09d7c0(uVar6);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_60);
    puVar2 = auStack_58;
    _objc_destroyWeak();
    unaff_x23 = &puStack_80;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
LAB_104e592ac:
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x23 + 0x20));
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume(puVar2);
  _objc_retain(param_2);
  puVar2 = puVar2 + 0x20;
  _objc_loadWeakRetained(puVar2);
  puVar1 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be2f0a0(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104e592dc; end: 104e5934b;  */

void FUN_104e592dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be2f0a0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e5934c; end: 104e593eb; -[SCStoriesRepostMentionWorkflow end] */

void FUN_104e5934c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c27ece0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f440();
    _objc_release(uVar2);
  }
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf6b020(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf750c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 104e593ec; end: 104e59467; -[SCStoriesRepostMentionWorkflow _handleRepostWithWithRepostedContentSnapchatter:] */

void FUN_104e593ec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    func_0x00010be7b320(param_1);
    func_0x00010bf940a0(param_1);
  }
  else {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c22b5a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010be139e0(param_1,param_2,param_3);
    }
    else {
      func_0x00010be13a00();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e59468; end: 104e5982f; -[SCStoriesRepostMentionWorkflow _fetchRepostMediaFromChatRemixWithRepostedContentSnapchatter:] */

void FUN_104e59468(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  char *pcStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  puVar4 = PTR_PTR_1126b1388;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c134380(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c294420(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c134340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar6 = PTR_PTR_1126b1388;
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c134380();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1344c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release();
  if (puVar4 == (undefined *)0x0 && puVar6 == (undefined *)0x0) {
    func_0x00010be7b320(param_1);
    func_0x00010bf940a0(param_1);
    goto LAB_104e597c0;
  }
  _dispatch_group_create();
  uStack_98 = 0;
  uStack_88 = 0x3032000000;
  pcStack_80 = FUN_104e59830;
  uStack_78 = 0x104e59840;
  uStack_70 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x3032000000;
  pcStack_b0 = FUN_104e59830;
  uStack_a8 = 0x104e59840;
  uStack_a0 = 0;
  uStack_f8 = 0;
  uStack_e8 = 0x3010000000;
  pcStack_e0 = "";
  uStack_d0 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  uStack_d8 = *(undefined8 *)PTR__CGSizeZero_110347620;
  puStack_f0 = &uStack_f8;
  puStack_90 = &uStack_98;
  _objc_initWeak(auStack_100,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (puVar4 == (undefined *)0x0) {
    if (puVar6 != (undefined *)0x0) {
      _dispatch_group_enter(uVar5);
      puStack_170 = puVar1;
      uStack_168 = 0xc2000000;
      uStack_160 = 0x104e598c0;
      puStack_158 = &UNK_110853d50;
      _objc_retain(uVar5);
      puStack_148 = &uStack_c8;
      puStack_140 = &uStack_f8;
      uStack_150 = uVar5;
      func_0x00010be2f080(param_1);
      uVar3 = uStack_150;
      goto LAB_104e59700;
    }
  }
  else {
    _dispatch_group_enter(uVar5);
    puStack_138 = puVar1;
    uStack_130 = 0xc2000000;
    pcStack_128 = FUN_104e59848;
    puStack_120 = &UNK_110853d20;
    _objc_retain(uVar5);
    uStack_118 = uVar5;
    puStack_110 = &uStack_98;
    puStack_108 = &uStack_f8;
    func_0x00010be2f060(param_1);
    uVar3 = uStack_118;
LAB_104e59700:
    _objc_release(uVar3);
  }
  puStack_1b8 = puVar1;
  uStack_1b0 = 0xc2000000;
  pcStack_1a8 = FUN_104e59938;
  puStack_1a0 = &UNK_110853d80;
  _objc_copyWeak(auStack_178,auStack_100);
  puStack_190 = &uStack_98;
  puStack_188 = &uStack_c8;
  puStack_180 = &uStack_f8;
  _objc_retain(param_3);
  uStack_198 = param_3;
  func_0x000100bc0718(uVar5,PTR___dispatch_main_q_11034be20,&puStack_1b8);
  _objc_release(uStack_198);
  _objc_destroyWeak(auStack_178);
  _objc_destroyWeak(auStack_100);
  __Block_object_dispose(&uStack_f8,8);
  __Block_object_dispose(&uStack_c8,8);
  _objc_release(uStack_a0);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(uStack_70);
  _objc_release(uVar5);
LAB_104e597c0:
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(param_3);
  return;
}



/* Entry: 104e59830; end: 104e59847;  */

void FUN_104e59830(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104e59848; end: 104e59937;  */

void FUN_104e59848(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    lVar2 = *(long *)(*(long *)(param_3 + 0x28) + 8);
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(long *)(lVar2 + 0x28) = param_4;
    _objc_release(uVar1);
    lVar2 = *(long *)(*(long *)(param_3 + 0x30) + 8);
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    *(undefined8 *)(lVar2 + 0x28) = param_2;
  }
  _dispatch_group_leave(*(undefined8 *)(param_3 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104e59938; end: 104e599ff;  */

void FUN_104e59938(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    if (lVar5 != 0 || lVar6 != 0) {
      lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 8);
      uVar3 = *(undefined8 *)(lVar2 + 8);
      func_0x00010c27ece0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(lVar2 + 8);
      uVar1 = *(undefined8 *)(lVar2 + 0x10);
      func_0x00010c134380(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be7d9c0(*(undefined8 *)(lVar7 + 0x20),*(undefined8 *)(lVar7 + 0x28),lVar2,param_2,
                          lVar5,lVar6,uVar3,uVar1,uVar4,*(undefined8 *)(param_1 + 0x20));
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104e59a00; end: 104e59aab;  */

void FUN_104e59a00(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x40,param_2 + 0x40);
  return;
}



/* Entry: 104e59aac; end: 104e59de7; -[SCStoriesRepostMentionWorkflow _fetchRepostMediaFromOperaWithRepostedContentSnapchatter:] */

void FUN_104e59aac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  char *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b1390;
  _objc_alloc(PTR_PTR_1126b1390);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c22b5a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf4cc20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045b40(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_104e59830;
  uStack_80 = 0x104e59840;
  uStack_78 = 0;
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  pcStack_b8 = FUN_104e59830;
  uStack_b0 = 0x104e59840;
  uStack_a8 = 0;
  uStack_100 = 0;
  uStack_f0 = 0x3010000000;
  pcStack_e8 = "";
  uStack_d8 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  uStack_e0 = *(undefined8 *)PTR__CGSizeZero_110347620;
  puStack_f8 = &uStack_100;
  puStack_c8 = &uStack_d0;
  puStack_98 = &uStack_a0;
  _objc_initWeak(auStack_108,param_1);
  puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_104e59de8;
  puStack_138 = &UNK_110853d80;
  _objc_copyWeak(auStack_110,auStack_108);
  puStack_128 = &uStack_a0;
  puStack_120 = &uStack_d0;
  puStack_118 = &uStack_100;
  _objc_retain(param_3);
  ppuVar4 = &puStack_150;
  uStack_130 = param_3;
  _objc_retainBlock();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c134380();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c0830a0();
  _objc_release(uVar3);
  puVar5 = puVar1;
  if ((int)uVar2 == 0) {
    func_0x00010bfc6440(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(ppuVar4);
    func_0x00010be2f060(param_1);
  }
  else {
    func_0x00010bfcc140(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(ppuVar4);
    func_0x00010be2f080(param_1);
  }
  _objc_release(ppuVar4);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  _objc_release(uStack_130);
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_108);
  __Block_object_dispose(&uStack_100,8);
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(uStack_a8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 104e59de8; end: 104e59ea7;  */

void FUN_104e59de8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    uVar3 = *(undefined8 *)(lVar2 + 8);
    func_0x00010c27ece0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar2 + 8);
    uVar1 = *(undefined8 *)(lVar2 + 0x10);
    func_0x00010c134380(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be7d9c0(*(undefined8 *)(lVar7 + 0x20),*(undefined8 *)(lVar7 + 0x28),lVar2,param_2,
                        uVar5,uVar6,uVar3,uVar1,uVar4,*(undefined8 *)(param_1 + 0x20));
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104e59ea8; end: 104e59f9f;  */

void FUN_104e59ea8(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    lVar2 = *(long *)(*(long *)(param_3 + 0x28) + 8);
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(long *)(lVar2 + 0x28) = param_4;
    _objc_release(uVar1);
    lVar2 = *(long *)(*(long *)(param_3 + 0x30) + 8);
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    *(undefined8 *)(lVar2 + 0x28) = param_2;
    (**(code **)(*(long *)(param_3 + 0x20) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104e59fa0; end: 104e5a0a3; -[SCStoriesRepostMentionWorkflow _handleRepostVideoFuture:completion:] */

void FUN_104e59fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_4;
  _objc_retain(param_4);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(param_3);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104e5a0a4; end: 104e5a1a3;  */

void FUN_104e5a0a4(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_2 == 0) || (param_3 != 0)) {
      lVar3 = param_3;
      func_0x00010bf3ec40();
      if (lVar3 == 1) {
        func_0x00010be7c660(lVar1);
      }
      else {
        func_0x00010be7b320(lVar1);
      }
      func_0x00010bf940a0(lVar1);
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
                (*(undefined8 *)PTR__CGSizeZero_110347620,
                 *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),*(long *)(param_1 + 0x20),0);
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + 0x40);
      func_0x00010c29af00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29b240(PTR_PTR_1126b0010);
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar2);
      _objc_release(uVar2);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104e5a1a4; end: 104e5a2a7; -[SCStoriesRepostMentionWorkflow _handleRepostImageFuture:completion:] */

void FUN_104e5a1a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_4;
  _objc_retain(param_4);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(param_3);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104e5a2a8; end: 104e5a393;  */

void FUN_104e5a2a8(double param_1,double param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  double dVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_4 == 0) || (param_5 != 0)) {
      lVar3 = param_5;
      func_0x00010bf3ec40();
      if (lVar3 == 1) {
        func_0x00010be7c660(lVar1);
      }
      else {
        func_0x00010be7b320(lVar1);
      }
      func_0x00010bf940a0(lVar1);
      lVar2 = *(long *)(param_3 + 0x20);
      pcVar4 = *(code **)(lVar2 + 0x10);
      param_1 = *(double *)PTR__CGSizeZero_110347620;
      param_2 = *(double *)(PTR__CGSizeZero_110347620 + 8);
      lVar3 = 0;
    }
    else {
      func_0x00010c23d0a0(param_4);
      dVar5 = param_1;
      func_0x00010c14e120(param_4);
      param_1 = param_1 * dVar5;
      param_2 = param_2 * dVar5;
      lVar2 = *(long *)(param_3 + 0x20);
      pcVar4 = *(code **)(lVar2 + 0x10);
      lVar3 = param_4;
    }
    (*pcVar4)(param_1,param_2,lVar2,lVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104e5a394; end: 104e5a397; -[SCStoriesRepostMentionWorkflow didCancelFromPreview:] */

void FUN_104e5a394(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be03190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissPreview_11255e600);
  return;
}



/* Entry: 104e5a398; end: 104e5a39b; -[SCStoriesRepostMentionWorkflow didSendSnapsAndPostToStory:storyTypes:] */

void FUN_104e5a398(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be03190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissPreview_11255e600);
  return;
}



/* Entry: 104e5a39c; end: 104e5a39f; -[SCStoriesRepostMentionWorkflow didPostStoryWithStoryTypes:] */

void FUN_104e5a39c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be03190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissPreview_11255e600);
  return;
}



/* Entry: 104e5a3a0; end: 104e5a3eb; -[SCStoriesRepostMentionWorkflow _dismissPreview] */

void FUN_104e5a3a0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf940b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_end_1125c29d0);
  return;
}



/* Entry: 104e5a3ec; end: 104e5a533; -[SCStoriesRepostMentionWorkflow _presentErrorDialog] */

void FUN_104e5a3ec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af178;
  func_0x00010c22b900();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_104e5b3e4();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000104e5b3fc();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126af180;
  ppuVar4 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af178;
  func_0x00010c22b900();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000104e5b414();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000104e5b42c();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126af180;
  ppuVar4 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c235c40(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR_PTR_1126b1010;
  _objc_retain(puVar7);
  _objc_alloc(puVar5);
  func_0x00010c02ec80();
  func_0x00010c165620();
  func_0x00010c1eb220(puVar5);
  func_0x00010c1eb2c0(puVar5);
  func_0x00010c1d86a0(puVar5);
  func_0x00010c1ee5a0(puVar5);
  func_0x00010c1eb8a0(puVar5);
  _objc_release(puVar7);
  func_0x00010bea6940(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104e5a534; end: 104e5a67b; -[SCStoriesRepostMentionWorkflow _presentMediaNotAvailableDialog] */

void FUN_104e5a534(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af178;
  func_0x00010c22b900();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000104e5b414();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000104e5b42c();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126af180;
  ppuVar4 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c235c40(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR_PTR_1126b1010;
  _objc_retain(puVar7);
  _objc_alloc(puVar5);
  func_0x00010c02ec80();
  func_0x00010c165620();
  func_0x00010c1eb220(puVar5);
  func_0x00010c1eb2c0(puVar5);
  func_0x00010c1d86a0(puVar5);
  func_0x00010c1ee5a0(puVar5);
  func_0x00010c1eb8a0(puVar5);
  _objc_release(puVar7);
  func_0x00010bea6940(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104e5a67c; end: 104e5a723; -[SCStoriesRepostMentionWorkflow _configureReplyParametersWithUserId:] */

void FUN_104e5a67c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1010;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02ec80();
  func_0x00010c165620();
  func_0x00010c1eb220(puVar1,param_2,2);
  func_0x00010c1eb2c0(puVar1,param_2,0);
  func_0x00010c1d86a0(puVar1,param_2,0x2a);
  func_0x00010c1ee5a0(puVar1,param_2,0);
  func_0x00010c1eb8a0(puVar1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010bea6940(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e5a724; end: 104e5ad63; -[SCStoriesRepostMentionWorkflow _presentPreviewWithImage:previewVideo:mediaSize:uiContainer:previewFilterDataProviderFactory:repostMetadata:repostedContentSnapchatter:] */

void FUN_104e5a724(double param_1,double param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6,long param_7,undefined8 param_8,long param_9,undefined8 param_10)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  undefined *puStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  lVar1 = *(long *)(param_3 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_3 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if (param_7 == 0) goto LAB_104e5ad10;
  puVar2 = PTR_PTR_1126afee0;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_4,
                      "-[SCStoriesRepostMentionWorkflow _presentPreviewWithImage:previewVideo:mediaSize:uiContainer:previewFilterDataProviderFactory:repostMetadata:repostedContentSnapchatter:]"
                     );
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c004180(puVar2,param_4,puVar3,*(undefined8 *)(param_3 + 0x28));
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b1398;
  _objc_alloc(PTR_PTR_1126b1398);
  lVar1 = param_9;
  func_0x00010c1343c0(param_9);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_9;
  func_0x00010c0d3a00(param_9);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_3 + 8);
  func_0x00010c22df20(uVar5);
  func_0x00010c03ea80(puVar3,param_4,lVar1,lVar4,uVar5);
  func_0x00010c1eb760(puVar2,param_4,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar4);
  _objc_release(lVar1);
  func_0x00010c1f5d60(puVar2,param_4,1);
  if (param_5 == 0) {
    if (param_6 != 0) {
      func_0x00010c221d20(puVar2,param_4,param_6);
      func_0x00010c1c5440(puVar2,param_4,1);
      func_0x00010c221ca0(puVar2,param_4,2);
      puStack_d0 = PTR_PTR_1126affc0;
      lVar1 = param_6;
      func_0x00010c2bd7e0(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29a0a0(puStack_d0,param_4,lVar1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104e5a9a4;
    }
    puStack_d0 = (undefined *)0x0;
  }
  else {
    func_0x00010c1a1640(puVar2,param_4,param_5);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_104e5ad64;
    puStack_88 = &UNK_110853e70;
    _objc_retain(param_5);
    lStack_80 = param_5;
    func_0x00010c205400(puVar2,param_4,&puStack_a0);
    func_0x00010c1c5440(puVar2,param_4,0);
    uStack_b8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_c0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_b0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    puStack_d0 = PTR_PTR_1126affc0;
    func_0x00010c27eee0(PTR_PTR_1126affc0,param_4,param_5,&uStack_c0);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lStack_80;
LAB_104e5a9a4:
    _objc_release(lVar1);
  }
  func_0x00010c1c4ca0(puVar2,param_4,0);
  func_0x00010c1c5240(puVar2);
  func_0x00010c0c6700(puVar2);
  dVar11 = 0.0;
  if (param_1 != 0.0) {
    if (param_2 == 0.0) {
      dVar11 = INFINITY;
    }
    else {
      dVar11 = param_1 / param_2;
    }
  }
  func_0x00010c1c40c0(dVar11,puVar2);
  func_0x00010c16c080(puVar2,param_4,1);
  func_0x00010c2056c0(puVar2,param_4,2);
  func_0x00010c204fa0(puVar2,param_4,0x2a);
  func_0x00010c1a1120(puVar2,param_4,0);
  puVar3 = puVar2;
  func_0x00010c243400(puVar2);
  puVar6 = puVar2;
  func_0x00010c0c6c20(puVar2);
  uVar5 = param_8;
  func_0x00010bfc58a0(param_8,param_4,puVar3,puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bee0(puVar2,param_4,uVar5);
  _objc_release(uVar5);
  lVar1 = param_9;
  func_0x00010c2923e0(param_9);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010bde57c0(param_3,param_4,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb140(puVar2,param_4,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010be4bc20(param_3,param_4,param_9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bcb40(puVar2,param_4,lVar1);
  _objc_release(lVar1);
  lVar1 = param_9;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar4 != 0) {
    puVar3 = PTR_PTR_1126b0820;
    _objc_alloc_init(PTR_PTR_1126b0820);
    lVar1 = param_9;
    func_0x00010c094540(param_9);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c2b2880(puVar3,param_4,lVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(lVar1);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b13a0;
    _objc_opt_new(PTR_PTR_1126b13a0);
    puVar6 = puVar3;
    func_0x00010c2b2620();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1be380(puVar2,param_4,puVar8);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar7);
  }
  uVar9 = *(undefined8 *)(param_3 + 0x80);
  func_0x00010bf9f4a0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar9;
  func_0x00010bf8cb20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  func_0x00010be83380(param_3,param_4,param_9,puVar2,uVar5);
  uVar9 = param_10;
  func_0x00010c294420(param_10);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_10;
  func_0x00010bf85d80(param_10);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_9;
  func_0x00010c2923e0(param_9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc76c0(param_3,param_4,uVar5,uVar9,uVar10,lVar1);
  _objc_release(lVar1);
  _objc_release(uVar10);
  _objc_release(uVar9);
  func_0x00010bf42760(puVar2);
  if (puVar2 != (undefined *)0x0) {
    uVar9 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010bf22c20(uVar9,param_4,0,puVar2,uVar5,0,param_3,0,param_7,0,0,0,0,0,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_3 + 0x18),param_4,uVar9);
    _objc_release(uVar9);
  }
  _objc_release(uVar5);
  _objc_release(puStack_d0);
  _objc_release(puVar2);
LAB_104e5ad10:
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 104e5ad64; end: 104e5ad8b;  */

void FUN_104e5ad64(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e5ad8c; end: 104e5af43; -[SCStoriesRepostMentionWorkflow _propagateLensCustomizationFromMetadata:toConfiguration:snapDocEditor:] */

void FUN_104e5ad8c(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf62d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf62d20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    puVar3 = param_4;
    func_0x00010c091b80();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      puVar5 = PTR_PTR_1126b13a8;
      _objc_opt_new();
    }
    else {
      puVar4 = param_4;
      func_0x00010c091b80();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf51e00();
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
    lVar1 = param_3;
    func_0x00010bf51e00(param_3);
    func_0x00010c189060(puVar5,param_2,lVar1);
    _objc_release(lVar1);
    func_0x00010c1bb340(param_4,param_2,puVar5);
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_104e5af44;
    puStack_60 = &UNK_110853ea0;
    _objc_retain(puVar5);
    puStack_58 = puVar5;
    func_0x00010c2849a0(param_5,param_2,&puStack_78);
    puStack_a0 = puVar3;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_104e5af50;
    puStack_88 = &UNK_11084e6e0;
    puStack_80 = puVar5;
    _objc_retain(puVar5);
    func_0x00010c28a040(param_5,param_2,&puStack_a0);
    _objc_release(puStack_80);
    _objc_release(puStack_58);
    _objc_release(puVar5);
  }
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104e5af44; end: 104e5af4f;  */

void FUN_104e5af44(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1bb350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setLensConfigInfo__11264c6f8,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104e5af50; end: 104e5af8b;  */

void FUN_104e5af50(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c08fb40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c180860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104e5af8c; end: 104e5b11f; -[SCStoriesRepostMentionWorkflow _addMentionStickerToSnapDocEditor:username:displayName:userId:] */

void FUN_104e5af8c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126b13b0;
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010c0ca620(puVar2,param_4,param_6,param_8,param_7,2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_6;
  if (param_7 != 0) {
    lVar1 = param_7;
  }
  func_0x000108e84ec4(lVar1);
  dVar5 = 36.0 / param_2;
  param_1 = param_1 * dVar5;
  param_2 = param_2 * dVar5;
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b13b8;
  param_1 = param_1 / dVar5;
  param_2 = param_2 / (dVar5 / 0.5625);
  puVar4 = PTR_PTR_1126affe8;
  func_0x00010bfccec0(PTR_PTR_1126affe8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befb980(param_1,param_2,8.0 / dVar5 + param_1 * 0.5 + 0.09999999999999998,
                      8.0 / (dVar5 / 0.5625) + param_2 * 0.5 + 0.09499999999999997,
                      0x3ff0000000000000,0,puVar3,param_4,puVar2,param_5,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 104e5b120; end: 104e5b25b; -[SCStoriesRepostMentionWorkflow _setPublicStoryDestinationForReplyParameters:] */

void FUN_104e5b120(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c134380();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07b7e0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010c134380();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c11aa40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    _objc_release(lVar4);
    _objc_release(lVar3);
    if (lVar5 == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x88);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c116a20();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 8);
      func_0x00010c134380(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c11aa40();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c1745a0(param_3,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    lVar4 = param_3;
    func_0x00010bf25140();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    _objc_release(lVar4);
    if (lVar5 != 0) {
      func_0x00010c165620(param_3,param_2,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e5b25c; end: 104e5b2ff; -[SCStoriesRepostMentionWorkflow _lensSendStepConfigWithMetadata:] */

void FUN_104e5b25c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c1188e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126b13c0;
  if (lVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c1188e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c118720(puVar3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104e5b300; end: 104e5b3e3; -[SCStoriesRepostMentionWorkflow .cxx_destruct] */

void FUN_104e5b300(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e5b3e4; end: 104e5b443;  */

void FUN_104e5b3e4(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db77d8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110db77d8,
                      &PTR____CFConstantStringClassReference_110db77f8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
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



/* Entry: 104e5b444; end: 104e5b4b7; -[SCGrapheneAllContactsDeepLinkMetric2 init] */

undefined1 * FUN_104e5b444(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e4820;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104e5b4b8; end: 104e5b52f;  */

void FUN_104e5b4b8(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110853ed0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 104e5b530; end: 104e5b5a7;  */

void FUN_104e5b530(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110853f20,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 104e5b5a8; end: 104e5b61f;  */

void FUN_104e5b5a8(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110853f70,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 104e5b620; end: 104e5b6c3; -[SCAddFriendsDeepLinkPlugin initWithNavigationDelegate:grapheneRegistry:] */

undefined1 *
FUN_104e5b620(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e4828;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104e5b6c4; end: 104e5b6d7; -[SCAddFriendsDeepLinkPlugin identifier] */

void FUN_104e5b6c4(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}


