/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10496809c; end: 104968143; -[FBSDKGraphRequestConnection taskDidCompleteWithResponse:data:requestStartTime:handler:] */

void FUN_10496809c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x00010c0a0e80(param_1,param_2,param_6,param_3,param_4,param_5);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104968144; end: 104968237; -[FBSDKGraphRequestConnection _taskDidCompleteWithError:handler:] */

void FUN_104968144(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0720c0();
  if ((int)lVar2 == 0) {
    _objc_release(lVar1);
  }
  else {
    lVar2 = param_3;
    func_0x00010bf3ec40();
    _objc_release(lVar1);
    if (lVar2 == -0x4b0) {
      func_0x00010c23cd40(PTR_PTR_1126add38,param_2,&PTR____CFConstantStringClassReference_110da4eb8
                          ,&PTR____CFConstantStringClassReference_110da43b8);
    }
  }
  func_0x00010c0a0e60(param_1,param_2,param_4,param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104968238; end: 1049685d3; -[FBSDKGraphRequestConnection logRequest:bodyLength:bodyLogger:attachmentLogger:] */

void FUN_104968238(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06b700();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = param_1;
    func_0x00010c0b3760(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0b3760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b38a0();
    func_0x00010bf06ba0(uVar1,param_2,&PTR____CFConstantStringClassReference_110da43d8);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c0b3760(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bdc2b80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf06ce0(uVar1,param_2,&PTR____CFConstantStringClassReference_110e2dc38,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c0b3760(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bdc16c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf06ce0(uVar1,param_2,&PTR____CFConstantStringClassReference_11102f1b8,lVar3);
    _objc_release(lVar3);
    _objc_release(uVar1);
    lVar3 = param_3;
    func_0x00010c296ee0(param_3,param_2,&PTR____CFConstantStringClassReference_110e2d8f8);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      uVar1 = param_1;
      func_0x00010c0b3760(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf06ce0();
      _objc_release(uVar1);
    }
    lVar4 = param_3;
    func_0x00010c296ee0(param_3,param_2,&PTR____CFConstantStringClassReference_110dbea38);
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      uVar1 = param_1;
      func_0x00010c0b3760(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf06ce0();
      _objc_release(uVar1);
    }
    if (param_4 != 0) {
      uVar1 = param_1;
      func_0x00010c0b3760(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110da4438);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf06ce0(uVar1,param_2,&PTR____CFConstantStringClassReference_110da4418,puVar5);
      _objc_release(puVar5);
      _objc_release(uVar1);
    }
    if (param_5 != 0) {
      uVar1 = param_1;
      func_0x00010c0b3760(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_5;
      func_0x00010bf4df40(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf06ce0(uVar1,param_2,&PTR____CFConstantStringClassReference_110da4458,lVar6);
      _objc_release(lVar6);
      _objc_release(uVar1);
    }
    if (param_6 != 0) {
      uVar1 = param_1;
      func_0x00010c0b3760(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_6;
      func_0x00010bf4df40(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf06ce0(uVar1,param_2,&PTR____CFConstantStringClassReference_110f738b8,lVar6);
      _objc_release(lVar6);
      _objc_release(uVar1);
    }
    uVar1 = param_1;
    func_0x00010c0b3760(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf070e0();
    _objc_release(uVar1);
    func_0x00010c0b3760(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8e120();
    _objc_release(param_1);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1049685d4; end: 104968817; -[FBSDKGraphRequestConnection accessTokenWithRequest:] */

void FUN_1049685d4(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain();
  func_0x00010c11f080(param_1);
  ppuVar1 = param_3;
  func_0x00010c273280();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar2 = param_3;
    func_0x00010c0f3840();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
  }
  else {
    ppuVar3 = ppuVar1;
    _objc_retain();
  }
  _objc_release(ppuVar1);
  ppuVar1 = param_3;
  func_0x00010bfb24a0();
  if ((ppuVar3 == (undefined **)0x0) && (((uint)ppuVar1 >> 1 & 1) == 0)) {
    lVar4 = param_1;
    func_0x00010bf39c40();
    func_0x00010c227f80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf3d5c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c08fa60();
    _objc_release(lVar5);
    _objc_release(lVar4);
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (lVar6 != 0) {
      lVar4 = param_1;
      func_0x00010bf39c40();
      func_0x00010c227f80();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf05260();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_1;
      func_0x00010bf39c40();
      func_0x00010c227f80();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf3d5c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25d9e0(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110e86738);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      func_0x00010bf39c40();
      func_0x00010bf10d60();
      func_0x00010bf5e0e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010bfcdd00();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0720c0();
      _objc_release(lVar4);
      _objc_release(param_1);
      if ((int)lVar5 == 0) {
        ppuVar2 = ppuVar1;
        _objc_retain(ppuVar1);
      }
      else {
        ppuVar2 = &PTR____CFConstantStringClassReference_110da4478;
        func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110da4478,param_2,ppuVar1);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(ppuVar1);
      goto LAB_1049687e8;
    }
  }
  ppuVar2 = ppuVar3;
  _objc_retain(ppuVar3);
LAB_1049687e8:
  _objc_release(ppuVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 104968818; end: 1049688b3; -[FBSDKGraphRequestConnection registerTokenToOmitFromLog:] */

void FUN_104968818(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  func_0x00010bf39c40();
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b3980();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b900();
  _objc_release(uVar1);
  _objc_release(param_1);
  if ((uVar2 & 1) == 0) {
    func_0x00010c1271e0(PTR_PTR_1126add38,param_2,param_3,
                        &PTR____CFConstantStringClassReference_110da4498);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1049688b4; end: 1049689d7; -[FBSDKGraphRequestConnection raiseExceptionIfMissingClientToken] */

void FUN_1049688b4(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  lVar2 = param_1;
  func_0x00010bf39c40();
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf3d5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    return;
  }
  lVar2 = param_1;
  func_0x00010bf39c40();
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf05260();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf39c40();
  func_0x00010c23cd40();
  _objc_release(param_1);
  puVar4 = PTR__OBJC_CLASS___NSException_1126af520;
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_exception_throw();
  if (lRam000000011369d398 != -1) {
    func_0x00010bda8a80();
  }
  puVar7 = puVar4;
  func_0x00010bf39c40();
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar7;
  func_0x00010c291300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar5 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar5 = puVar4;
    func_0x00010bf39c40();
    func_0x00010c227f80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c291300();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  iVar1 = 2;
  func_0x000100029b9c(2,0xd,0,0);
  if (iVar1 != 0) {
    func_0x00010bf39c40();
    func_0x00010c0b6040();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfa1680();
    _objc_release(puVar4);
    if ((int)puVar5 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104968b38;
    }
  }
  puVar4 = puRam000000011369d390;
  if (puVar7 != (undefined *)0x0) {
    puVar4 = puVar7;
  }
  _objc_retain(puVar4);
LAB_104968b38:
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1049689d8; end: 104968b67; -[FBSDKGraphRequestConnection userAgent] */

void FUN_1049689d8(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  if (lRam000000011369d398 != -1) {
    func_0x00010bda8a80();
  }
  lVar2 = param_1;
  func_0x00010bf39c40();
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c291300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar3 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar2 = param_1;
    func_0x00010bf39c40();
    func_0x00010c227f80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c291300();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  iVar1 = 2;
  func_0x000100029b9c(2,0xd,0,0);
  if (iVar1 != 0) {
    func_0x00010bf39c40();
    func_0x00010c0b6040();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bfa1680();
    _objc_release(param_1);
    if ((int)lVar2 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104968b38;
    }
  }
  puVar4 = puRam000000011369d390;
  if (puVar5 != (undefined *)0x0) {
    puVar4 = puVar5;
  }
  _objc_retain(puVar4);
LAB_104968b38:
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104968b68; end: 104968bbf;  */

void FUN_104968b68(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110df1c18);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam000000011369d390;
  puRam000000011369d390 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104968bc0; end: 104968c33; -[FBSDKGraphRequestConnection URLSession:task:didSendBodyData:totalBytesSent:totalBytesExpectedToSend:] */

void FUN_104968bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c13b700();
  if ((int)uVar2 != 0) {
    func_0x00010c134fc0(uVar1,param_2,param_1,param_5,param_6,param_7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104968c34; end: 104968f6f; -[FBSDKGraphRequestConnection processorDidAttemptRecovery:didRecover:error:] */

void FUN_104968c34(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain();
  _objc_retain();
  if (param_4 == 0) {
    uVar11 = param_1;
    func_0x00010c124220(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1152a0(param_1,param_2,0,param_5,uVar11,1);
    _objc_release(uVar11);
    func_0x00010c197260(param_1,param_2,0);
    func_0x00010c1e9080(param_1,param_2,0);
  }
  else {
    uVar11 = param_1;
    func_0x00010c124220();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar11;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
    puVar2 = PTR_PTR_1126ade80;
    _objc_alloc(PTR_PTR_1126ade80);
    uVar11 = uVar1;
    func_0x00010bfcdd40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0f3840(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010bf39c40(param_1);
    func_0x00010beecd60();
    func_0x00010bf5df00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c273280();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010bdc16c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010c298be0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar1;
    func_0x00010c28fdc0();
    uVar9 = param_1;
    func_0x00010bf39c40();
    func_0x00010bfcde00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c017fa0(puVar2,param_2,uVar11,uVar3,uVar5,uVar6,uVar7,8,(char)uVar8);
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar11);
    puVar10 = PTR_PTR_1126adee0;
    _objc_alloc();
    uVar11 = param_1;
    func_0x00010c124220(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar11;
    func_0x00010bf440c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c124220(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf17040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03eba0(puVar10,param_2,puVar2,uVar3,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar11);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_104968f70;
    puStack_78 = &UNK_1107b9a18;
    uStack_70 = param_1;
    _objc_retain();
    puStack_68 = puVar10;
    func_0x00010c251a80(puVar2,param_2,&puStack_90);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puStack_68);
    _objc_release(puVar10);
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 104968f70; end: 104968fb7;  */

void FUN_104968f70(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1152a0(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104968fb8; end: 104969197; -[FBSDKGraphRequestConnection description] */

void FUN_104968fb8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010bf39c40();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c1373a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c25d9e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da44f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  func_0x00010c1373a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    bVar5 = false;
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(param_1);
        }
        uVar3 = *(undefined8 *)(lStack_128 + lVar7 * 8);
        func_0x00010c134680(uVar3);
        _objc_retainAutoreleasedReturnValue();
        if (bVar5) {
          func_0x00010bf070e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da4518);
        }
        uVar4 = uVar3;
        func_0x00010bfb6040(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf070e0(puVar2,param_2,uVar4);
        _objc_release(uVar4);
        _objc_release(uVar3);
        lVar7 = lVar7 + 1;
        bVar5 = true;
      } while (lVar1 != lVar7);
      lVar1 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(param_1);
  func_0x00010bf070e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da4538);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_loadWeakRetained(puVar2 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104969198; end: 1049691af; -[FBSDKGraphRequestConnection delegate] */

void FUN_104969198(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1049691b0; end: 1049691bb; -[FBSDKGraphRequestConnection setDelegate:] */

void FUN_1049691b0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 1049691bc; end: 1049691c3; -[FBSDKGraphRequestConnection timeout] */

undefined8 FUN_1049691bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1049691c4; end: 1049691cb; -[FBSDKGraphRequestConnection setTimeout:] */

void FUN_1049691c4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 1049691cc; end: 1049691d3; -[FBSDKGraphRequestConnection urlResponse] */

undefined8 FUN_1049691cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1049691d4; end: 1049691db; -[FBSDKGraphRequestConnection delegateQueue] */

undefined8 FUN_1049691d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1049691dc; end: 1049691e3; -[FBSDKGraphRequestConnection logger] */

undefined8 FUN_1049691dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1049691e4; end: 1049691ef; -[FBSDKGraphRequestConnection setLogger:] */

void FUN_1049691e4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 1049691f0; end: 1049691f7; -[FBSDKGraphRequestConnection requests] */

undefined8 FUN_1049691f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1049691f8; end: 104969203; -[FBSDKGraphRequestConnection setRequests:] */

void FUN_1049691f8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 104969204; end: 10496920b; -[FBSDKGraphRequestConnection state] */

undefined8 FUN_104969204(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10496920c; end: 104969213; -[FBSDKGraphRequestConnection setState:] */

void FUN_10496920c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 104969214; end: 10496921b; -[FBSDKGraphRequestConnection requestStartTime] */

undefined8 FUN_104969214(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10496921c; end: 104969223; -[FBSDKGraphRequestConnection setRequestStartTime:] */

void FUN_10496921c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 104969224; end: 10496922b; -[FBSDKGraphRequestConnection session] */

undefined8 FUN_104969224(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10496922c; end: 104969237; -[FBSDKGraphRequestConnection setSession:] */

void FUN_10496922c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 104969238; end: 10496923f; -[FBSDKGraphRequestConnection overriddenVersionPart] */

undefined8 FUN_104969238(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 104969240; end: 10496924b; -[FBSDKGraphRequestConnection setOverriddenVersionPart:] */

void FUN_104969240(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 10496924c; end: 104969253; -[FBSDKGraphRequestConnection expectingResults] */

undefined8 FUN_10496924c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 104969254; end: 10496925b; -[FBSDKGraphRequestConnection setExpectingResults:] */

void FUN_104969254(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 10496925c; end: 104969263; -[FBSDKGraphRequestConnection recoveringRequestMetadata] */

undefined8 FUN_10496925c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 104969264; end: 10496926f; -[FBSDKGraphRequestConnection setRecoveringRequestMetadata:] */

void FUN_104969264(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 104969270; end: 104969277; -[FBSDKGraphRequestConnection errorRecoveryProcessor] */

undefined8 FUN_104969270(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 104969278; end: 104969283; -[FBSDKGraphRequestConnection setErrorRecoveryProcessor:] */

void FUN_104969278(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x68,param_3);
  return;
}



/* Entry: 104969284; end: 104969303; -[FBSDKGraphRequestConnection .cxx_destruct] */

void FUN_104969284(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104969304; end: 10496931f; -[FBSDKGraphRequestConnectionFactory createGraphRequestConnection] */

void FUN_104969304(void)

{
  func_0x00010c0d8420(PTR_PTR_1126adf08);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104969320; end: 1049693ff; -[FBSDKGraphRequestDataAttachment initWithData:filename:contentType:] */

undefined1 *
FUN_104969320(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retain();
  puStack_48 = PTR_PTR_1126e33a0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_storeStrong((undefined1 *)((long)puVar2 + 0x10),param_3);
    uVar3 = param_4;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar2 + 0x18);
    *(undefined8 *)((long)puVar2 + 0x18) = uVar3;
    _objc_release(uVar4);
    uVar3 = param_5;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar2 + 8);
    *(undefined8 *)((long)puVar2 + 8) = uVar3;
    _objc_release(uVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar1);
  return (undefined1 *)puVar2;
}



/* Entry: 104969400; end: 104969407; -[FBSDKGraphRequestDataAttachment contentType] */

undefined8 FUN_104969400(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104969408; end: 10496940f; -[FBSDKGraphRequestDataAttachment data] */

undefined8 FUN_104969408(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104969410; end: 104969417; -[FBSDKGraphRequestDataAttachment filename] */

undefined8 FUN_104969410(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104969418; end: 104969453; -[FBSDKGraphRequestDataAttachment .cxx_destruct] */

void FUN_104969418(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104969454; end: 10496950b; -[FBSDKGraphRequestFactory createGraphRequestWithGraphPath:parameters:tokenString:HTTPMethod:flags:] */

void FUN_104969454(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ade80;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c017f00();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10496950c; end: 104969557; -[FBSDKGraphRequestFactory createGraphRequestWithGraphPath:] */

void FUN_10496950c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ade80;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c017e40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104969558; end: 1049695c7; -[FBSDKGraphRequestFactory createGraphRequestWithGraphPath:parameters:] */

void FUN_104969558(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ade80;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c017e60();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1049695c8; end: 104969653; -[FBSDKGraphRequestFactory createGraphRequestWithGraphPath:parameters:HTTPMethod:] */

void FUN_1049695c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ade80;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c017e80();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104969654; end: 10496971f; -[FBSDKGraphRequestFactory createGraphRequestWithGraphPath:parameters:tokenString:version:HTTPMethod:] */

void FUN_104969654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ade80;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c017fc0();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104969720; end: 104969797; -[FBSDKGraphRequestFactory createGraphRequestWithGraphPath:parameters:flags:] */

void FUN_104969720(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ade80;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c017ec0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104969798; end: 10496985f; -[FBSDKGraphRequestFactory createGraphRequestWithGraphPath:parameters:tokenString:HTTPMethod:flags:forAppEvents:] */

void FUN_104969798(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ade80;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c017f20();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104969860; end: 10496993b; -[FBSDKGraphRequestFactory createGraphRequestWithGraphPath:parameters:tokenString:version:HTTPMethod:forAppEvents:] */

void FUN_104969860(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ade80;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c017fe0();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10496993c; end: 1049699d7; -[FBSDKGraphRequestFactory createGraphRequestWithGraphPath:parameters:HTTPMethod:useAlternativeDefaultDomainPrefix:] */

void FUN_10496993c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ade80;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c017ea0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1049699d8; end: 104969aaf; -[FBSDKGraphRequestFactory createGraphRequestWithGraphPath:parameters:tokenString:HTTPMethod:flags:forAppEvents:useAlternativeDefaultDomainPrefix:] */

void FUN_1049699d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ade80;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c017f40();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104969ab0; end: 104969b77; -[FBSDKGraphRequestFactory createGraphRequestWithGraphPath:parameters:tokenString:HTTPMethod:flags:useAlternativeDefaultDomainPrefix:] */

void FUN_104969ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ade80;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c017f60();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104969b78; end: 104969c63; -[FBSDKGraphRequestFactory createGraphRequestWithGraphPath:parameters:tokenString:version:HTTPMethod:forAppEvents:useAlternativeDefaultDomainPrefix:] */

void FUN_104969b78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ade80;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c018000();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104969c64; end: 104969cdb; -[FBSDKGraphRequestFactory createGraphRequestWithGraphPath:parameters:useAlternativeDefaultDomainPrefix:] */

void FUN_104969c64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ade80;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c018020();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104969cdc; end: 104969d37; -[FBSDKGraphRequestFactory createGraphRequestWithGraphPath:useAlternativeDefaultDomainPrefix:] */

void FUN_104969cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ade80;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c018040();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104969d38; end: 104969dbf; -[FBSDKGraphRequestFactory createGraphRequestWithGraphPath:parameters:flags:useAlternativeDefaultDomainPrefix:] */

void FUN_104969d38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ade80;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c017ee0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104969dc0; end: 104969e9f; -[FBSDKGraphRequestMetadata initWithRequest:completionHandler:batchParameters:] */

undefined1 *
FUN_104969dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retain();
  puStack_48 = PTR_PTR_1126e33a8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_storeStrong((undefined1 *)((long)puVar2 + 8),param_3);
    uVar3 = param_5;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar2 + 0x18);
    *(undefined8 *)((long)puVar2 + 0x18) = uVar3;
    _objc_release(uVar4);
    uVar3 = param_4;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar2 + 0x10);
    *(undefined8 *)((long)puVar2 + 0x10) = uVar3;
    _objc_release(uVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar1);
  return (undefined1 *)puVar2;
}



/* Entry: 104969ea0; end: 104969f57; -[FBSDKGraphRequestMetadata invokeCompletionHandlerForConnection:withResults:error:] */

void FUN_104969ea0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010bf440c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010bf440c0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))();
    _objc_release(param_1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104969f58; end: 10496a05f; -[FBSDKGraphRequestMetadata description] */

void FUN_104969f58(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_1;
  func_0x00010bf39c40();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf17040();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf440c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  _objc_retainBlock();
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bfb6040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar6,param_2,&PTR____CFConstantStringClassReference_110da4558);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10496a060; end: 10496a067; -[FBSDKGraphRequestMetadata request] */

undefined8 FUN_10496a060(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10496a068; end: 10496a073; -[FBSDKGraphRequestMetadata setRequest:] */

void FUN_10496a068(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,param_3);
  return;
}



/* Entry: 10496a074; end: 10496a07b; -[FBSDKGraphRequestMetadata completionHandler] */

undefined8 FUN_10496a074(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10496a07c; end: 10496a083; -[FBSDKGraphRequestMetadata setCompletionHandler:] */

void FUN_10496a07c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10496a084; end: 10496a08b; -[FBSDKGraphRequestMetadata batchParameters] */

undefined8 FUN_10496a084(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10496a08c; end: 10496a093; -[FBSDKGraphRequestMetadata setBatchParameters:] */

void FUN_10496a08c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10496a094; end: 10496a0cf; -[FBSDKGraphRequestMetadata .cxx_destruct] */

void FUN_10496a094(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10496a0d0; end: 10496a15f; -[FBSDKGraphRequestQueue init] */

undefined1 * FUN_10496a0d0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e33b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010c0d8420();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126add38;
    _objc_alloc();
    func_0x00010c0277c0();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10496a160; end: 10496a1bb; +[FBSDKGraphRequestQueue sharedInstance] */

void FUN_10496a160(void)

{
  if (lRam000000011369d3a8 != -1) {
    func_0x00010bda8a94();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d3a0);
  return;
}



/* Entry: 10496a1bc; end: 10496a1bf; -[FBSDKGraphRequestQueue configureWithGraphRequestConnectionFactory:] */

void FUN_10496a1bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a42d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setGraphRequestConnectionFactory_112646ad0);
  return;
}



/* Entry: 10496a1c0; end: 10496a243; -[FBSDKGraphRequestQueue enqueueRequest:completion:] */

void FUN_10496a1c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126adee0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c03eba0();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bf96380(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10496a244; end: 10496a337; -[FBSDKGraphRequestQueue enqueueRequests:] */

void FUN_10496a244(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar3 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar5 = *plStack_100;
    do {
      lVar6 = 0;
      do {
        if (*plStack_100 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010bf96380(param_1,param_2,*(undefined8 *)(lStack_108 + lVar6 * 8));
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = param_3;
      puVar3 = &uStack_110;
      func_0x00010bf52a60(param_3,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  _objc_retain(param_3);
  _objc_sync_enter();
  puVar4 = (undefined1 *)puVar3;
  func_0x00010c134680(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a5860(param_3,param_2,puVar4);
  _objc_release(puVar4);
  puVar1 = PTR_PTR_1126add78;
  lVar2 = param_3;
  func_0x00010c137420(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf09f20(puVar1,param_2,lVar2,puVar3);
  _objc_release(lVar2);
  _objc_sync_exit(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10496a338; end: 10496a3fb; -[FBSDKGraphRequestQueue enqueueRequestMetadata:] */

void FUN_10496a338(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter();
  uVar2 = param_3;
  func_0x00010c134680(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a5860(param_1,param_2,uVar2);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126add78;
  uVar2 = param_1;
  func_0x00010c137420(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf09f20(puVar1,param_2,uVar2,param_3);
  _objc_release(uVar2);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10496a3fc; end: 10496a643; -[FBSDKGraphRequestQueue flush] */

void FUN_10496a3fc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
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
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_sync_enter();
  lVar1 = param_1;
  func_0x00010c137420();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010c137420();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf51e00();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c137420(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12adc0();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bfcde00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf56540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain();
    lVar1 = lVar2;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar7 = *plStack_120;
      do {
        lVar8 = 0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(lVar2);
          }
          uVar6 = *(undefined8 *)(lStack_128 + lVar8 * 8);
          uVar4 = uVar6;
          func_0x00010c134680();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf440c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befafc0(lVar3,param_2,uVar4,uVar6);
          _objc_release(uVar6);
          _objc_release(uVar4);
          lVar8 = lVar8 + 1;
        } while (lVar1 != lVar8);
        lVar1 = lVar2;
        func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_e8,0x10);
      } while (lVar1 != 0);
    }
    _objc_release(lVar2);
    param_3 = lVar2;
    func_0x00010c0a6c00(param_1);
    func_0x00010c24d960(lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_sync_exit(param_1);
  lVar1 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  __Unwind_Resume();
  _objc_retain();
  lVar2 = lVar1;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c06b700();
  _objc_release(lVar2);
  if ((int)lVar3 != 0) {
    lVar2 = lVar1;
    func_0x00010c0b3760(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf070e0();
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010c0b3760(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bdc16c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf06ce0(lVar2,param_2,&PTR____CFConstantStringClassReference_11102f1b8,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010c0b3760(lVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar3 = param_3;
    func_0x00010bfcdd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0(puVar5,param_2,&PTR____CFConstantStringClassReference_110e6dad8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf06ce0(lVar2,param_2,&PTR____CFConstantStringClassReference_110da4598,puVar5);
    _objc_release(puVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010c0b3760(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c0f3840(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar3;
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf06ce0(lVar2,param_2,&PTR____CFConstantStringClassReference_110f4fd38,lVar7);
    _objc_release(lVar7);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010c0b3760(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf070e0();
    _objc_release(lVar2);
    func_0x00010c0b3760(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8e120();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10496a644; end: 10496a84b; -[FBSDKGraphRequestQueue logEnqueueRequest:] */

void FUN_10496a644(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06b700();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = param_1;
    func_0x00010c0b3760(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf070e0();
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c0b3760(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bdc16c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf06ce0(uVar1,param_2,&PTR____CFConstantStringClassReference_11102f1b8,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c0b3760(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar2 = param_3;
    func_0x00010bfcdd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110e6dad8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf06ce0(uVar1,param_2,&PTR____CFConstantStringClassReference_110da4598,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c0b3760(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0f3840(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf06ce0(uVar1,param_2,&PTR____CFConstantStringClassReference_110f4fd38,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c0b3760(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf070e0();
    _objc_release(uVar1);
    func_0x00010c0b3760(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8e120();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10496a84c; end: 10496aba7; -[FBSDKGraphRequestQueue logFlushingRequests:] */

long FUN_10496a84c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06b700();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = param_1;
    func_0x00010c0b3760(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf070e0();
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c0b3760(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010bf06ba0(uVar1,param_2,&PTR____CFConstantStringClassReference_110da45d8);
    _objc_release(uVar1);
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    lStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    plStack_150 = (long *)0x0;
    lVar3 = param_3;
    _objc_retain();
    lStack_168 = lVar3;
    func_0x00010bf52a60();
    if (lStack_168 != 0) {
      lVar10 = *plStack_150;
      do {
        lVar11 = 0;
        do {
          if (*plStack_150 != lVar10) {
            _objc_enumerationMutation(lVar3);
          }
          uVar12 = *(undefined8 *)(lStack_158 + lVar11 * 8);
          ppuStack_120 = &PTR____CFConstantStringClassReference_11102f1b8;
          uVar1 = uVar12;
          func_0x00010c134680();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          func_0x00010bdc16c0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          ppuStack_118 = &PTR____CFConstantStringClassReference_110da4598;
          uVar4 = uVar12;
          uStack_108 = uVar2;
          func_0x00010c134680();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010bfcdd40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25d9e0(puVar6,param_2,&PTR____CFConstantStringClassReference_110e6dad8);
          _objc_retainAutoreleasedReturnValue();
          ppuStack_110 = &PTR____CFConstantStringClassReference_110f4fd38;
          puStack_100 = puVar6;
          func_0x00010c134680();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar12;
          func_0x00010c0f3840();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010bf6e340();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          uStack_f8 = uVar8;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_108,
                              &ppuStack_120,3);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar8);
          _objc_release(uVar7);
          _objc_release(uVar12);
          _objc_release(puVar6);
          _objc_release(uVar5);
          _objc_release(uVar4);
          _objc_release(uVar2);
          _objc_release(uVar1);
          uVar1 = param_1;
          func_0x00010c0b3760(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar9;
          func_0x00010bf6e340();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf06ba0(uVar1,param_2,&PTR____CFConstantStringClassReference_110db2698);
          _objc_release(puVar6);
          _objc_release(uVar1);
          _objc_release(puVar9);
          lVar11 = lVar11 + 1;
        } while (lStack_168 != lVar11);
        lStack_168 = lVar3;
        func_0x00010bf52a60(lVar3,param_2,&uStack_160,auStack_f0,0x10);
      } while (lStack_168 != 0);
    }
    _objc_release(lVar3);
    func_0x00010c0b3760(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8e120();
    _objc_release(param_1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_3;
  }
  ___stack_chk_fail();
  return *(long *)(param_3 + 8);
}



/* Entry: 10496aba8; end: 10496abaf; -[FBSDKGraphRequestQueue requestsQueue] */

undefined8 FUN_10496aba8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10496abb0; end: 10496abbb; -[FBSDKGraphRequestQueue setRequestsQueue:] */

void FUN_10496abb0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,param_3);
  return;
}



/* Entry: 10496abbc; end: 10496abc3; -[FBSDKGraphRequestQueue graphRequestConnectionFactory] */

undefined8 FUN_10496abbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10496abc4; end: 10496abcf; -[FBSDKGraphRequestQueue setGraphRequestConnectionFactory:] */

void FUN_10496abc4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 10496abd0; end: 10496abd7; -[FBSDKGraphRequestQueue logger] */

undefined8 FUN_10496abd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10496abd8; end: 10496abe3; -[FBSDKGraphRequestQueue setLogger:] */

void FUN_10496abd8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 10496abe4; end: 10496ac1f; -[FBSDKGraphRequestQueue .cxx_destruct] */

void FUN_10496abe4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10496ac20; end: 10496acb7; -[FBSDKHybridAppEventsScriptMessageHandler initWithEventLogger:loggingNotifier:] */

undefined1 *
FUN_10496ac20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e33b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar2 + 8),param_3);
    _objc_storeStrong((undefined1 *)((long)puVar2 + 0x10),param_4);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 10496acb8; end: 10496afef; -[FBSDKHybridAppEventsScriptMessageHandler userContentController:didReceiveScriptMessage:] */

void FUN_10496acb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar10 = param_4;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar10;
  func_0x00010c0720c0();
  _objc_release(lVar10);
  puVar2 = PTR_PTR_1126add78;
  if ((int)lVar1 == 0) goto LAB_10496af74;
  lVar10 = param_4;
  func_0x00010bf1e9c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71fc0(puVar2,param_2,lVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar10);
  if (puVar2 == (undefined *)0x0) goto LAB_10496af74;
  puVar3 = puVar2;
  func_0x00010c0e00e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110daee38);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar9 = puVar3;
  func_0x00010c075f00(puVar3,param_2,puVar4);
  if (((int)puVar9 != 0) &&
     (puVar9 = puVar3, func_0x00010c08fa60(), puVar4 = PTR_PTR_1126add78, puVar9 != (undefined *)0x0
     )) {
    puVar9 = puVar2;
    func_0x00010c0e00e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110de1858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d860(puVar4,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126add78;
    if (puVar4 == (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      lVar10 = 0;
    }
    else {
      puVar5 = puVar4;
      func_0x00010bf64920(puVar4,param_2,4);
      _objc_retainAutoreleasedReturnValue();
      lStack_80 = 0;
      func_0x00010bdc1900(puVar9,param_2,puVar5,1,&lStack_80);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lStack_80;
      _objc_retain();
      _objc_release(puVar5);
    }
    puVar5 = puVar2;
    func_0x00010c0e00e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da22d8);
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined *)0x0) {
      func_0x00010c0b3be0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a0ea0();
    }
    else {
      if (lVar10 == 0) {
        puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        puVar8 = puVar9;
        func_0x00010c075f00(puVar9,param_2,puVar7);
        if (((int)puVar8 == 0) || (puVar9 == (undefined *)0x0)) goto LAB_10496ae84;
        func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar9,puVar5,
                            &PTR____CFConstantStringClassReference_110da45f8);
      }
      else {
LAB_10496ae84:
        uVar6 = param_1;
        func_0x00010c0b3be0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a0ea0();
        _objc_release(uVar6);
        ppuStack_78 = &PTR____CFConstantStringClassReference_110da45f8;
        puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_70 = puVar5;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_70,
                            &ppuStack_78,1);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c0d3c80();
        _objc_release(puVar9);
        _objc_release(puVar7);
        puVar9 = puVar8;
      }
      func_0x00010bf99fe0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a8d60();
    }
    _objc_release(param_1);
    _objc_release(puVar5);
    _objc_release(lVar10);
    _objc_release(puVar9);
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
LAB_10496af74:
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained(param_4 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10496aff0; end: 10496b007; -[FBSDKHybridAppEventsScriptMessageHandler eventLogger] */

void FUN_10496aff0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10496b008; end: 10496b013; -[FBSDKHybridAppEventsScriptMessageHandler setEventLogger:] */

void FUN_10496b008(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 10496b014; end: 10496b01b; -[FBSDKHybridAppEventsScriptMessageHandler loggingNotifier] */

undefined8 FUN_10496b014(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10496b01c; end: 10496b027; -[FBSDKHybridAppEventsScriptMessageHandler setLoggingNotifier:] */

void FUN_10496b01c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 10496b028; end: 10496b053; -[FBSDKHybridAppEventsScriptMessageHandler .cxx_destruct] */

void FUN_10496b028(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10496b054; end: 10496b0af; +[FBSDKImageDownloader sharedInstance] */

void FUN_10496b054(void)

{
  if (lRam000000011369d3b8 != -1) {
    func_0x00010bda8aa8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d3b0);
  return;
}



/* Entry: 10496b0b0; end: 10496b0ff; -[FBSDKImageDownloader init] */

undefined8 FUN_10496b0b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSURLSession_1126c7fe8;
  func_0x00010c22bfa0(PTR__OBJC_CLASS___NSURLSession_1126c7fe8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045540(param_1,param_2,puVar1);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 10496b100; end: 10496b1a7; -[FBSDKImageDownloader initWithSessionProvider:] */

undefined1 * FUN_10496b100(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  uVar1 = param_3;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e33c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSURLCache_1126c7fe0;
    _objc_alloc();
    func_0x00010c02b0a0();
    uVar4 = *(undefined8 *)((long)puVar2 + 0x10);
    *(undefined **)((long)puVar2 + 0x10) = puVar3;
    _objc_release(uVar4);
    _objc_storeStrong((undefined1 *)((long)puVar2 + 8),param_3);
  }
  _objc_release(uVar1);
  return (undefined1 *)puVar2;
}



/* Entry: 10496b1a8; end: 10496b1d7; -[FBSDKImageDownloader removeAll] */

void FUN_10496b1a8(undefined8 param_1)

{
  func_0x00010c28f400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12ab80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10496b1d8; end: 10496b43f; -[FBSDKImageDownloader downloadImageWithURL:ttl:completion:] */

void FUN_10496b1d8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSURLRequest_1126aede0;
  func_0x00010c137160();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010c28f400();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf27440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar4;
  func_0x00010bf64e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010bf433a0();
  _objc_release(puVar5);
  _objc_release(lVar2);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10496b440;
  puStack_70 = &UNK_1107b9a88;
  _objc_retain();
  ppuVar7 = &puStack_88;
  uStack_68 = param_5;
  _objc_retainBlock();
  if ((lVar3 == 0) || (lVar6 == -1)) {
    func_0x00010c1602c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    _objc_retain();
    ppuVar8 = ppuVar7;
    _objc_retain();
    uVar9 = param_5;
    _objc_retain();
    lVar2 = param_2;
    func_0x00010bfa1600(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    func_0x00010bfa1740(lVar2);
    _objc_release(lVar2);
    _objc_release(uVar9);
    _objc_release(ppuVar8);
    _objc_release(puVar5);
  }
  else {
    (*(code *)ppuVar7[2])(ppuVar7,lVar3);
  }
  _objc_release(ppuVar7);
  _objc_release(uStack_68);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 10496b440; end: 10496b4bf;  */

void FUN_10496b440(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010bf63640(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe93c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10496b4c0; end: 10496b64b;  */

long FUN_10496b4c0(long param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8);
  lVar4 = param_3;
  func_0x00010c075f00();
  if (((((int)lVar4 == 0) || (lVar4 = param_3, func_0x00010c252ee0(), param_2 == 0)) ||
      (param_4 != 0)) || (lVar4 != 200)) {
    lVar4 = *(long *)(param_1 + 0x38);
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x10))(lVar4,0);
    }
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSCachedURLResponse_1126adf18;
    _objc_alloc(PTR__OBJC_CLASS___NSCachedURLResponse_1126adf18);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03fb00(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010c2575a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),puVar1);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_2;
  }
  ___stack_chk_fail();
  return *(long *)(param_2 + 8);
}



/* Entry: 10496b64c; end: 10496b653; -[FBSDKImageDownloader sessionProvider] */

undefined8 FUN_10496b64c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10496b654; end: 10496b65f; -[FBSDKImageDownloader setSessionProvider:] */

void FUN_10496b654(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,param_3);
  return;
}


