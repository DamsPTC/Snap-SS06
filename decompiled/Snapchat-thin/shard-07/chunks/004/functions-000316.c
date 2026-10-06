/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1055c4104; end: 1055c41d7; +[SCLPAttachmentMapper _videoAttachmentFromLPVideoAttachment:] */

void FUN_1055c4104(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126bb7e8;
  puVar4 = (undefined *)0x0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    lVar2 = param_3;
    func_0x00010c29a460(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c29a900(param_3);
    func_0x00010bebdee0(param_1,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c29bb40(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c060e60(puVar1,param_2,lVar2,param_1,lVar3);
    _objc_release(lVar3);
    _objc_release(param_1);
    _objc_release(lVar2);
    puVar4 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1055c41d8; end: 1055c4207; +[SCLPAttachmentMapper _sojuVideoPlatformFromLPVideoPlatform:] */

void FUN_1055c41d8(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 *puVar1;
  
  if (param_3 < 3) {
    puVar1 = (undefined8 *)(&PTR_DAT_11089bfe0)[param_3];
  }
  else {
    puVar1 = (undefined8 *)&UNK_10e5d7b20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithInteger__1126157f8,*puVar1);
  return;
}



/* Entry: 1055c4208; end: 1055c44fb; +[SCLPAttachmentMapper _sojuCTATextFromLPCTAText:] */

void FUN_1055c4208(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  switch(param_3) {
  case 1:
    ppuVar1 = &PTR_PTR_110d5ab38;
    break;
  case 2:
    ppuVar1 = &PTR_PTR_110d5ab40;
    break;
  case 3:
    ppuVar1 = &PTR_PTR_110d5ab48;
    break;
  case 4:
    ppuVar1 = &PTR_PTR_110d5ab50;
    break;
  case 5:
    ppuVar1 = &PTR_PTR_110d5ab58;
    break;
  case 6:
    ppuVar1 = &PTR_PTR_110d5ab60;
    break;
  case 7:
    ppuVar1 = &PTR_PTR_110d5ab68;
    break;
  case 8:
    ppuVar1 = &PTR_PTR_110d5ab70;
    break;
  case 9:
    ppuVar1 = &PTR_PTR_110d5ab78;
    break;
  case 10:
    ppuVar1 = &PTR_PTR_110d5ab80;
    break;
  case 0xb:
    ppuVar1 = &PTR_PTR_110d5ab88;
    break;
  case 0xc:
    ppuVar1 = &PTR_PTR_110d5ab90;
    break;
  case 0xd:
    ppuVar1 = &PTR_PTR_110d5ab98;
    break;
  case 0xe:
    ppuVar1 = &PTR_PTR_110d5aba0;
    break;
  case 0xf:
    ppuVar1 = &PTR_PTR_110d5aba8;
    break;
  case 0x10:
    ppuVar1 = &PTR_PTR_110d5abb0;
    break;
  case 0x11:
    ppuVar1 = &PTR_PTR_110d5abb8;
    break;
  case 0x12:
    ppuVar1 = &PTR_PTR_110d5abc0;
    break;
  case 0x13:
    ppuVar1 = &PTR_PTR_110d5abc8;
    break;
  case 0x14:
    ppuVar1 = &PTR_PTR_110d5abd0;
    break;
  case 0x15:
    ppuVar1 = &PTR_PTR_110d5abd8;
    break;
  case 0x16:
    ppuVar1 = &PTR_PTR_110d5abe0;
    break;
  case 0x17:
    ppuVar1 = &PTR_PTR_110d5abe8;
    break;
  case 0x18:
    ppuVar1 = &PTR_PTR_110d5abf0;
    break;
  case 0x19:
    ppuVar1 = &PTR_PTR_110d5abf8;
    break;
  case 0x1a:
    ppuVar1 = &PTR_PTR_110d5ac00;
    break;
  case 0x1b:
    ppuVar1 = &PTR_PTR_110d5ac08;
    break;
  case 0x1c:
    ppuVar1 = &PTR_PTR_110d5ac10;
    break;
  case 0x1d:
    ppuVar1 = &PTR_PTR_110d5ac18;
    break;
  case 0x1e:
    ppuVar1 = &PTR_PTR_110d5ac20;
    break;
  case 0x1f:
    ppuVar1 = &PTR_PTR_110d5ac28;
    break;
  case 0x20:
    ppuVar1 = &PTR_PTR_110d5ac30;
    break;
  case 0x21:
    ppuVar1 = &PTR_PTR_110d5ac38;
    break;
  case 0x22:
    ppuVar1 = &PTR_PTR_110d5ac40;
    break;
  case 0x23:
    ppuVar1 = &PTR_PTR_110d5ac48;
    break;
  case 0x24:
    ppuVar1 = &PTR_PTR_110d5ac50;
    break;
  case 0x25:
    ppuVar1 = &PTR_PTR_110d5ac58;
    break;
  case 0x26:
    ppuVar1 = &PTR_PTR_110d5ac60;
    break;
  case 0x27:
    ppuVar1 = &PTR_PTR_110d5ac68;
    break;
  case 0x28:
    ppuVar1 = &PTR_PTR_110d5ac70;
    break;
  case 0x29:
    ppuVar1 = &PTR_PTR_110d5ac78;
    break;
  case 0x2a:
    ppuVar1 = &PTR_PTR_110d5ac80;
    break;
  case 0x2b:
    ppuVar1 = &PTR_PTR_110d5ac88;
    break;
  case 0x2c:
    ppuVar1 = &PTR_PTR_110d5ac90;
    break;
  case 0x2d:
    ppuVar1 = &PTR_PTR_110d5ac98;
    break;
  case 0x2e:
    ppuVar1 = &PTR_PTR_110d5aca0;
    break;
  case 0x2f:
    ppuVar1 = &PTR_PTR_110d5aca8;
    break;
  case 0x30:
    ppuVar1 = &PTR_PTR_110d5acb0;
    break;
  case 0x31:
    ppuVar1 = &PTR_PTR_110d5acb8;
    break;
  case 0x32:
    ppuVar1 = &PTR_PTR_110d5acc0;
    break;
  case 0x33:
    ppuVar1 = &PTR_PTR_110d5acc8;
    break;
  case 0x34:
    ppuVar1 = &PTR_PTR_110d5acd0;
    break;
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
    ppuVar1 = &PTR_PTR_110d5ab30;
    break;
  case 0x3c:
    ppuVar1 = &PTR_PTR_110d5acd8;
    break;
  default:
    ppuVar1 = &PTR_PTR_110d5ace0;
    if (param_3 != -0x4524111) {
      ppuVar1 = &PTR_PTR_110d5ab30;
    }
  }
  puVar2 = *ppuVar1;
  _objc_retain(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055c44fc; end: 1055c45b3; +[SCLPAttachmentMapper _webViewAttachmentFromLPWebViewAttachment:] */

void FUN_1055c44fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126bb7f0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c2a4460(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = param_3;
  func_0x00010c22dfc0(param_3);
  _objc_release(param_3);
  func_0x00010c0df6e0(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c062fa0(puVar1,param_2,uVar2,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055c45b4; end: 1055c4693; +[SCLPAttachmentMapper _appInstallAttachmentFromLPAppInstallAttachment:] */

void FUN_1055c45b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126bb7f8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010bf05ba0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c06aee0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf02a80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf052c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bff3520(puVar1,param_2,uVar2,uVar3,uVar4,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055c4694; end: 1055c48b7; +[SCLPAttachmentMapper _deepLinkAttachmentFromLPDeepLinkAttachment:] */

void FUN_1055c4694(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar1 = PTR_PTR_1126bb800;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c28f280(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = param_3;
  func_0x00010bfeb020(param_3);
  func_0x00010c0df6e0(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf06520();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bfeaf20();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c06aec0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar7 = param_3;
  func_0x00010c06aee0(param_3);
  func_0x00010c0df7c0(puVar8,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010bf02a60();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010bf02ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c269100(param_3);
  uVar11 = param_1;
  func_0x00010bebde80(param_1,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010bf68360();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010bf67dc0(param_3);
  _objc_release(param_3);
  func_0x00010bebdd60(param_1,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c059e40(puVar1,param_2,uVar2,puVar4,uVar3,uVar5,uVar6,puVar8,uVar7,uVar9,uVar11,uVar10
                      ,param_1);
  _objc_release(param_1);
  _objc_release(uVar10);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(puVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(puVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055c48b8; end: 1055c4907; +[SCLPAttachmentMapper _sojuTapLinkActionTextFromLPTapLinkActionText:] */

void FUN_1055c48b8(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  ppuVar1 = &PTR_PTR_110d5ace8;
  if (param_3 != 1) {
    ppuVar1 = &PTR_PTR_110d5acf8;
  }
  ppuVar2 = &PTR_PTR_110d5acf0;
  if (param_3 != 2) {
    ppuVar2 = ppuVar1;
  }
  puVar3 = *ppuVar2;
  _objc_retain(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1055c4908; end: 1055c4953; +[SCLPAttachmentMapper _sojuDeepLinkFallbackTypeFromLPDeepLinkFallbackType:] */

void FUN_1055c4908(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  if (param_3 - 1U < 3) {
    ppuVar1 = (undefined **)(&PTR_PTR_11089bff8)[param_3 - 1U];
  }
  else {
    ppuVar1 = &PTR_PTR_110d5ad18;
  }
  puVar2 = *ppuVar1;
  _objc_retain(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055c4954; end: 1055c4a3b; +[SCLPCarouselPositionMapper carouselPositionFromLPCarouselPosition:] */

void FUN_1055c4954(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c23b600(param_3);
  uVar2 = param_1;
  func_0x00010bddbc60(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bddbc40(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bb7d8;
  _objc_alloc(PTR_PTR_1126bb7d8);
  uVar4 = param_3;
  func_0x00010beec7c0(param_3);
  uVar5 = param_3;
  func_0x00010c113c80(param_3);
  _objc_release(param_3);
  func_0x00010bfefca0(puVar3,param_2,(long)((int)uVar4 + -1),(long)(int)uVar5,(int)uVar1 == 1,uVar2,
                      param_1);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1055c4a3c; end: 1055c4af7; +[SCLPCarouselPositionMapper _carouselGroupFromCarouselPosition:] */

void FUN_1055c4a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126bb808;
  puVar3 = (undefined *)0x0;
  if (param_4 != 0) {
    _objc_retain(param_4);
    _objc_alloc(puVar1);
    lVar2 = param_4;
    func_0x00010bf327c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf32a40(param_4);
    _objc_release(param_4);
    func_0x00010c0df740(param_1,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0191e0(puVar1,param_3,lVar2,puVar3);
    _objc_release(puVar3);
    _objc_release(lVar2);
    puVar3 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1055c4af8; end: 1055c4b73; +[SCLPCarouselPositionMapper _carouselGlobalScoreListFromCarouselPosition:] */

void FUN_1055c4af8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010bf32720(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010bf32700();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf43280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1055c4b74; end: 1055c4beb;  */

void FUN_1055c4b74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bb810;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bf32b00(param_3);
  func_0x00010bfcd100(param_3);
  _objc_release(param_3);
  func_0x00010bffcd60(param_1,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055c4bec; end: 1055c4ccb; +[SCLPConnectedLensInfoMapper connectedLensInfoFromLPConnectedLensInfo:] */

void FUN_1055c4bec(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010bfd4280(), (int)lVar1 == 0)) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf05300(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfe2ee0();
    lVar3 = lVar1;
    func_0x00010c0b5940(lVar1);
    func_0x000100c4a928(lVar2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126bb818;
    _objc_alloc(PTR_PTR_1126bb818);
    lVar3 = lVar2;
    func_0x00010c0b5ac0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff3380(puVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1055c4ccc; end: 1055c4e17; +[SCLPCustomizationBodyMapper customizationBodyFromSCLPCustomizationInfo:] */

void FUN_1055c4ccc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010bfd6180(), (int)lVar1 == 0)) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf62c60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    puVar3 = (undefined *)0x0;
    if (lVar2 != 0) {
      lVar1 = param_3;
      func_0x00010bf62d20(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bec5860(param_1,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      lVar1 = param_3;
      func_0x00010c111ee0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c08fa60();
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = param_3;
        func_0x00010c111ee0(param_3);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(lVar1);
      puVar3 = PTR_PTR_1126bb820;
      _objc_alloc(PTR_PTR_1126bb820);
      lVar1 = param_3;
      func_0x00010bf62c60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c008120(puVar3,param_2,param_1,lVar1,lVar2);
      _objc_release(lVar1);
      _objc_release(lVar2);
      _objc_release(param_1);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1055c4e18; end: 1055c4e83; +[SCLPCustomizationBodyMapper _stringFromUUID:] */

void FUN_1055c4e18(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bfe2ee0(param_3);
    lVar2 = param_3;
    func_0x00010c0b5940(param_3);
    _objc_release(param_3);
    func_0x000100c4a928(lVar1,lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055c4e84; end: 1055c4f17; +[SCLPCustomizationInfoMapper customizationMetadataFromSCLPCustomizationInfo:] */

void FUN_1055c4e84(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126bb828;
  puVar3 = (undefined *)0x0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    lVar2 = param_3;
    func_0x00010bf62dc0(param_3);
    puVar3 = PTR_PTR_1126bb830;
    func_0x00010bf62ca0(PTR_PTR_1126bb830,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c055f00(puVar1,param_2,(long)(int)lVar2,puVar3);
    _objc_release(puVar3);
    puVar3 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1055c4f18; end: 1055c4fbb; +[SCLPHintMapper hintIdFromLPHint:] */

void FUN_1055c4f18(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfe3760();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010bfe3760(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0;
    func_0x00010c071ae0(&PTR____CFConstantStringClassReference_110deda38,param_2,lVar2);
    _objc_release(lVar2);
    if ((uVar3 & 1) == 0) {
      _objc_retain(lVar1);
      lVar2 = lVar1;
      goto LAB_1055c4f98;
    }
  }
  lVar2 = 0;
LAB_1055c4f98:
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1055c4fbc; end: 1055c5117; +[SCLPHintMapper hintTranslationFromLPHint:] */

void FUN_1055c4fbc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010befd080();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_3;
    func_0x00010befd060(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    lVar1 = param_3;
    func_0x00010befd080(param_3);
    func_0x00010bf71fe0(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c124d20(lVar3,param_2,&PTR___NSConcreteGlobalBlock_11089c070,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(lVar3);
    lVar3 = lVar1;
    func_0x00010bf51e00(lVar1);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1055c5118; end: 1055c51e3; -[SCLPLensAssetMapper lensAssetsFromLPLensAssets:lensId:] */

void FUN_1055c5118(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1055c51e4;
    puStack_48 = &UNK_11089c090;
    uStack_40 = param_1;
    _objc_retain(param_4);
    lVar1 = param_3;
    uStack_38 = param_4;
    func_0x00010c0b8620(param_3,param_2,&puStack_60,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1055c51e4; end: 1055c51f3;  */

void FUN_1055c51e4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08ff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_lensAssetFromLPLensAsset_lensId__1126019d8,
             param_2,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1055c51f4; end: 1055c53d7; -[SCLPLensAssetMapper lensAssetFromLPLensAsset:lensId:] */

void FUN_1055c51f4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_4);
    lVar1 = param_1;
    func_0x00010be36c20(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c257220(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c27dd80(param_3);
    lVar4 = param_1;
    func_0x00010bec3ca0(param_1,param_2,lVar2,lVar1,param_4,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(lVar2);
    lVar2 = lVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
    if (lVar3 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      lVar5 = lVar2;
      func_0x00010c28f340(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar7,param_2,lVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
    }
    _objc_release(lVar3);
    puVar6 = PTR_PTR_1126bb838;
    _objc_alloc(PTR_PTR_1126bb838);
    lVar3 = param_3;
    func_0x00010c27dd80(param_3);
    lVar5 = param_1;
    func_0x00010bdcfa00(param_1,param_2,lVar3);
    lVar3 = param_3;
    func_0x00010c136b80(param_3);
    func_0x00010be91ac0(param_1,param_2,lVar3);
    func_0x00010c01bca0(puVar6,param_2,lVar1,puVar7,0,0,lVar5,param_1,1,0,0,0,0,0,0,0,lVar4);
    _objc_release(puVar7);
    _objc_release(lVar2);
    _objc_release(lVar4);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1055c53d8; end: 1055c547f; -[SCLPLensAssetMapper _identifierForLPAsset:] */

void FUN_1055c53d8(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bfe5dc0();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (((int)puVar1 == 3) || ((int)puVar1 != 2)) {
    puVar1 = param_3;
    func_0x00010c25d620(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = param_3;
    func_0x00010c067e60(param_3);
    func_0x00010c0df7c0(puVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055c5480; end: 1055c54a3; -[SCLPLensAssetMapper _assetTypeFromLPAssetType:] */

undefined8 FUN_1055c5480(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 - 1U < 8) {
    return *(undefined8 *)(&UNK_10ddb3638 + (ulong)(param_3 - 1U) * 8);
  }
  return 0;
}



/* Entry: 1055c54a4; end: 1055c54fb; -[SCLPLensAssetMapper _assetLogStringForAssetId:assetType:] */

void FUN_1055c54a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010c14d520(PTR__OBJC_CLASS___NSError_1126ae858,param_2,param_3,0,
                      &PTR____CFConstantStringClassReference_110daf6b8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c09e4e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055c54fc; end: 1055c551f; -[SCLPLensAssetMapper _requestTimingFromLPRequestTiming:] */

undefined8 FUN_1055c54fc(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 - 1U < 3) {
    return *(undefined8 *)(&UNK_10ddb3678 + (ulong)(param_3 - 1U) * 8);
  }
  return 0;
}



/* Entry: 1055c5520; end: 1055c55a7; -[SCLPLensAssetMapper _storageOptionsFromLPStorageOptions:assetId:lensId:assetType:] */

void FUN_1055c5520(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c0b8620(param_3,param_2,&PTR___NSConcreteGlobalBlock_11089c0e0,0);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    lVar3 = 0;
    if (lVar2 != 0) {
      lVar3 = lVar1;
    }
    _objc_retain(lVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1055c55a8; end: 1055c568f;  */

void FUN_1055c55a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfb5800();
  if ((int)uVar1 == 1) {
    puVar5 = PTR_PTR_1126bb840;
    _objc_alloc(PTR_PTR_1126bb840);
    uVar1 = param_2;
    func_0x00010bfad160(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010bf38a80(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf64c80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c271dc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c056340(puVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    puVar5 = (undefined *)0x0;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1055c5690; end: 1055c57ef; +[SCLPLensCreatorMapper communityLensDataWithLPLensCreator:] */

void FUN_1055c5690(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126bb848;
  puVar7 = (undefined *)0x0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    lVar2 = param_3;
    func_0x00010bfe5ea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bec5860(param_1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c242880(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec5860(param_1,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010bf65de0(param_3);
    lVar6 = param_3;
    func_0x00010c0e1aa0(param_3);
    func_0x00010c05bdc0(puVar1,param_2,uVar3,0,0,param_1,lVar5,lVar6);
    _objc_release(param_1);
    _objc_release(lVar4);
    _objc_release(uVar3);
    _objc_release(lVar2);
    puVar7 = PTR_PTR_1126bb850;
    _objc_alloc(PTR_PTR_1126bb850);
    lVar2 = param_3;
    func_0x00010bf85d80(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c0235c0(puVar7,param_2,puVar1,lVar2,0);
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1055c57f0; end: 1055c5873; +[SCLPLensCreatorMapper _stringFromUUID:] */

void FUN_1055c57f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bfe2ee0(param_3);
    lVar2 = param_3;
    func_0x00010c0b5940(param_3);
    _objc_release(param_3);
    func_0x000100c4a928(lVar1,lVar2);
    _objc_retainAutoreleasedReturnValue();
    param_3 = lVar1;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1055c5874; end: 1055c594f; +[SCLPLensDescriptorMapper lensDescriptorsFromLPLensDescriptors:] */

void FUN_1055c5874(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf529e0(param_3);
    func_0x00010bf0a0e0(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1055c5950;
    puStack_48 = &UNK_11089c100;
    puStack_40 = puVar2;
    uStack_38 = param_1;
    _objc_retain();
    func_0x00010bf980c0(param_3,param_2,&puStack_60);
    puVar3 = puVar2;
    func_0x00010bf51e00(puVar2);
    _objc_release(puStack_40);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1055c5950; end: 1055c598f;  */

void FUN_1055c5950(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c092740(uVar2,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1055c5990; end: 1055c59b3; +[SCLPLensDescriptorMapper lensDescriptorFromLPLensDescriptor:] */

undefined ** FUN_1055c5990(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  if (param_3 - 1U < 0x6a) {
    lVar1 = *(long *)(&UNK_10ddb3690 + (ulong)(param_3 - 1U) * 8);
  }
  else {
    lVar1 = 0;
  }
  if (lVar1 - 1U < 0x6a) {
    return (undefined **)(&PTR_PTR_110d5ad28)[lVar1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110de39b8;
}



/* Entry: 1055c59b4; end: 1055c5a57; +[SCLPLensPlusFreemiumInfoMapper freemiumInfoFromLPFreemiumInfo:] */

void FUN_1055c59b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126bb858;
  puVar5 = (undefined *)0x0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    lVar2 = param_3;
    func_0x00010bfceb20(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c099040(param_3);
    lVar4 = param_3;
    func_0x00010c155400(param_3);
    _objc_release(param_3);
    func_0x00010c018e40(puVar1,param_2,lVar2,lVar3,lVar4);
    _objc_release(lVar2);
    puVar5 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1055c5a58; end: 1055c5b2f; +[SCLPLensPlusTierConfigMapper lensPlusTierConfigFromLPLensPlusTierConfig:] */

void FUN_1055c5a58(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bfd7460();
    puVar3 = PTR_PTR_1126bb860;
    if ((int)lVar1 == 0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      lVar1 = param_3;
      func_0x00010bfb7600(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb7620(puVar3,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
    }
    puVar4 = PTR_PTR_1126bb868;
    _objc_alloc(PTR_PTR_1126bb868);
    lVar1 = param_3;
    func_0x00010c280e00(param_3);
    lVar2 = param_3;
    func_0x00010bf61400(param_3);
    func_0x00010c0590c0(puVar4,param_2,lVar1,lVar2,puVar3);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1055c5b30; end: 1055c5bef; +[SCLPLensPreviewMapper lensPreviewFromPreview:] */

void FUN_1055c5b30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126bb870;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c111300(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c1112e0(param_3);
  uVar4 = param_3;
  func_0x00010c1112c0(param_3);
  uVar5 = param_3;
  func_0x00010c26e1e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c05a440(puVar1,param_2,uVar2,(long)(int)uVar3,(long)(int)uVar4,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055c5bf0; end: 1055c5c8b; +[SCLPMusicTrackMetadataMapper musicTrackMetadatasFromLPMusicTrackMetadatas:] */

void FUN_1055c5bf0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc0000000;
    pcStack_38 = FUN_1055c5c8c;
    puStack_30 = &UNK_11089c130;
    lVar1 = param_3;
    uStack_28 = param_1;
    func_0x00010c0b8620(param_3,param_2,&puStack_48,0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1055c5c8c; end: 1055c5c97;  */

void FUN_1055c5c8c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d3af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_musicTrackMetadataFromLPMusicTra_1126128d0,
             param_2);
  return;
}



/* Entry: 1055c5c98; end: 1055c5d93; +[SCLPMusicTrackMetadataMapper musicTrackMetadataFromLPMusicTrackMetadata:] */

void FUN_1055c5c98(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar3 = (undefined *)0x0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bf4d360(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126bb878;
    _objc_alloc(PTR_PTR_1126bb878);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar4 = param_3;
    func_0x00010c277e80(param_3);
    func_0x00010c0df880(puVar5,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c290120(param_3);
    _objc_release(param_3);
    func_0x00010c054bc0(puVar3,param_2,puVar6,lVar2,lVar4);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1055c5d94; end: 1055c5e37; +[SCLPRemoteApiInfoMapper remoteApiInfoFromLPRemoteApiInfo:] */

void FUN_1055c5d94(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126bb880;
  puVar3 = (undefined *)0x0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    lVar2 = param_3;
    func_0x00010c129de0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c225c20(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03df00(puVar1,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(lVar2);
    puVar3 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1055c5e38; end: 1055c5e83; -[SCLPSponsoredInfoMapper initWithConfig:] */

long FUN_1055c5e38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (param_1 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1055c5e84; end: 1055c5faf; -[SCLPSponsoredInfoMapper sponsoredSlugFromSponsoredInfo:] */

void FUN_1055c5e84(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010c24a140(), (int)lVar1 == 0)) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c26f0e0();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar1 < 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c26f0e0(uVar2);
      func_0x00010c0df780(puVar4,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar3 = PTR_PTR_1126bb888;
    _objc_alloc(PTR_PTR_1126bb888);
    lVar1 = param_3;
    func_0x00010c23ea80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c062080(puVar3,param_2,0,0,0,0,0,lVar1,0,0,puVar4,0,0);
    _objc_release(lVar1);
    puVar5 = PTR_PTR_1126bb890;
    _objc_alloc(PTR_PTR_1126bb890);
    func_0x00010c04eb60();
    _objc_release(puVar3);
    _objc_release(puVar4);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1055c5fb0; end: 1055c5fbb; -[SCLPSponsoredInfoMapper .cxx_destruct] */

void FUN_1055c5fb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055c5fbc; end: 1055c6517; +[SCLPTrackingInfoMapper unlockableTrackInfoFromTrackingInfo:] */

void FUN_1055c5fbc(undefined8 param_1,undefined8 param_2,long param_3)

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
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  long lVar22;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar21 = (undefined *)0x0;
  }
  else {
    lVar22 = param_3;
    func_0x00010c11ffa0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar22;
    func_0x00010c08fa60();
    _objc_release(lVar22);
    lVar22 = param_3;
    if (lVar1 == 0) {
      func_0x00010c11ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar22;
      func_0x00010bf8ee60();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c11ffa0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar22;
      func_0x00010bf15da0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar22);
    lVar22 = param_3;
    func_0x00010c11fa60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar22;
    func_0x00010c08fa60();
    _objc_release(lVar22);
    lVar22 = param_3;
    if (lVar2 == 0) {
      func_0x00010c11fa40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar22;
      func_0x00010bf8ee60();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c11fa60();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar22;
      func_0x00010bf15da0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar22);
    lVar22 = param_3;
    func_0x00010c23d7c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar22;
    func_0x00010c08fa60();
    _objc_release(lVar22);
    if (lVar3 == 0) {
      lVar22 = 0;
    }
    else {
      lVar3 = param_3;
      func_0x00010c23d7c0();
      _objc_retainAutoreleasedReturnValue();
      lVar22 = lVar3;
      func_0x00010bf15da0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
    }
    lVar3 = param_3;
    func_0x00010bf93cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    lVar3 = param_3;
    if (lVar4 == 0) {
      func_0x00010bf93ca0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf8ee60();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf93cc0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf15da0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010c0fcb00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010b70473c();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010bf5ac40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010b70473c();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010bef4d20();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010b70473c();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar5;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar3);
    puVar21 = PTR_PTR_1126bb898;
    _objc_alloc();
    lVar3 = param_3;
    func_0x00010bef4d80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bf8ee60();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1;
    func_0x00010bf8ee60();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar10 = param_3;
    func_0x00010c23e500(param_3);
    func_0x00010c0df6e0(puVar11,param_2,lVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_3;
    func_0x00010bf93c40();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar10;
    func_0x00010bf8ee60();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_3;
    func_0x00010bef5f80();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010bf8ee60();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_3;
    func_0x00010c11fae0();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar15;
    func_0x00010bf8ee60();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar2;
    func_0x00010bf8ee60();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar4;
    func_0x00010bf8ee60();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = param_3;
    func_0x00010bef2c20();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar19;
    func_0x00010c08fa60();
    if (lVar20 == 0) {
      func_0x00010bff1ec0(puVar21,param_2,lVar5,lVar9,puVar11,lVar12,lVar14,lVar16,lVar17,lVar18,0,0
                          ,0,lVar22,0,lVar8,lVar6,lVar7);
    }
    else {
      lVar20 = param_3;
      func_0x00010bef2c20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff1ec0(puVar21,param_2,lVar5,lVar9,puVar11,lVar12,lVar14,lVar16,lVar17,lVar18,0,0
                          ,0,lVar22,lVar20,lVar8,lVar6,lVar7);
      _objc_release(lVar20);
    }
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar10);
    _objc_release(puVar11);
    _objc_release(lVar9);
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar22);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar21);
  return;
}



/* Entry: 1055c6518; end: 1055c66df; +[SCLPTrackingInfoMapper lensMetadataTrackingInfoFromTrackingInfo:] */

void FUN_1055c6518(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bb770;
  func_0x00010c2813e0(PTR_PTR_1126bb770,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bfdc380();
  if ((int)lVar2 == 0) {
    uVar7 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c241660(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bebcd20(param_1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_1;
    func_0x00010bf8ee60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010bf92c20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  lVar2 = param_3;
  if (lVar3 == 0) {
    func_0x00010bf92c00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf8ee60();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf92c20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf15da0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126bb8a0;
  _objc_alloc(PTR_PTR_1126bb8a0);
  lVar2 = param_3;
  func_0x00010c11f700(param_3);
  lVar5 = param_3;
  func_0x00010c26a320(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf8ee60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c054d20(puVar4,param_2,puVar1,uVar7,lVar3,lVar2,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(uVar7);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1055c66e0; end: 1055c678f; +[SCLPTrackingInfoMapper _snapInfoStringFromSnapInfo:] */

void FUN_1055c66e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x00010bf63640(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010bf15d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1055c6790; end: 1055c67f7;  */

void FUN_1055c6790(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf58540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1055c67f8; end: 1055c6843; -[SCLensMetadataRepositoryEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055c67f8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127262c4,0);
  _objc_storeStrong(param_1 + _DAT_1127262c0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127262bc);
  return;
}



/* Entry: 1055c6844; end: 1055c68b7; -[SCLensMetadataRepositoryFactory initWithLensMetadataProviders:] */

undefined1 * FUN_1055c6844(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e92c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055c68b8; end: 1055c6913; -[SCLensMetadataRepositoryFactory createRepository] */

void FUN_1055c68b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bb8b0;
  func_0x00010bdcf3a0(PTR_PTR_1126bb8b0,param_2,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf26a0(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1055c6914; end: 1055c6adf; -[SCLensMetadataRepositoryFactory createRepositoryWithAdditionalLensMetadataProviders:] */

void FUN_1055c6914(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    func_0x00010bf58540(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puVar3 = PTR_PTR_1126bb8b0;
    func_0x00010bdcf3a0(PTR_PTR_1126bb8b0,param_2,*(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x1055c6a50;
    puStack_48 = &UNK_1108599d8;
    puStack_40 = puVar2;
    _objc_retain(param_3);
    lStack_38 = param_3;
    _objc_retain(puVar2);
    func_0x00010c297260(puVar3,param_2,&puStack_60,0);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010bfbc3e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdf26a0(param_1,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(lStack_38);
    _objc_release(puStack_40);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1055c6ae0; end: 1055c6b37; -[SCLensMetadataRepositoryFactory createRepositoryWithLensMetadataProviders:] */

void FUN_1055c6ae0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf26a0(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1055c6b38; end: 1055c6bff; -[SCLensMetadataRepositoryFactory _createRepositoryWithLensMetadataProviders:] */

void FUN_1055c6b38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae720;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1055c6bd0;
  puStack_30 = &UNK_11089c1c0;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055c6c00; end: 1055c6d07; +[SCLensMetadataRepositoryFactory _arrayProvidersFromSetProviders:] */

void FUN_1055c6c00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_opt_new();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1055c6cb4;
  puStack_30 = &UNK_11089c1f0;
  puStack_28 = puVar1;
  _objc_retain();
  func_0x00010c297260(param_3,param_2,&puStack_48,0);
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_28);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055c6d08; end: 1055c6d13; -[SCLensMetadataRepositoryFactory .cxx_destruct] */

void FUN_1055c6d08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055c6d14; end: 1055c6d87; -[SCLensMetadataRepository initWithLensMetadataProviders:] */

undefined1 * FUN_1055c6d14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e92d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055c6d88; end: 1055c6fb3; -[SCLensMetadataRepository lensMetadataWithIdentifier:] */

void FUN_1055c6d88(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  puVar3 = PTR_PTR_1126ae558;
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126bb8c0;
    func_0x00010be4b760(PTR_PTR_1126bb8c0,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(puVar3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126ae560;
    _objc_opt_new();
    func_0x00010c095340(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x1055c6ec4;
    puStack_48 = &UNK_1108599d8;
    puStack_40 = puVar2;
    _objc_retain(param_3);
    lStack_38 = param_3;
    _objc_retain(puVar2);
    func_0x00010c297260(param_1,param_2,&puStack_60,0);
    _objc_release(param_1);
    puVar3 = puVar2;
    func_0x00010bfbc3e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_38);
    _objc_release(puStack_40);
  }
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1055c6fb4; end: 1055c6ffb;  */

undefined8 FUN_1055c6fb4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1055c6ffc; end: 1055c709f; -[SCLensMetadataRepository lensMetadatas] */

void FUN_1055c6ffc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 8);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1055c70a0;
  puStack_30 = &UNK_11085c638;
  puStack_28 = puVar1;
  _objc_retain();
  func_0x00010c297260(uVar3,param_2,&puStack_48,0);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_28);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055c70a0; end: 1055c71bb;  */

void FUN_1055c70a0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126bb8c0;
    func_0x00010be0b380(PTR_PTR_1126bb8c0,param_2,2,&PTR____CFConstantStringClassReference_110deda78
                        ,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  func_0x00010c0b8620(param_2,param_2,&PTR___NSConcreteGlobalBlock_11089c240,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ae558;
  func_0x00010beffb40(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  func_0x00010c297260(puVar1);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 1055c71bc; end: 1055c72af;  */

void FUN_1055c71bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c269d40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c095340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1055c72b0; end: 1055c7323; +[SCLensMetadataRepository _lensNotFoundErrorWithLensId:] */

void FUN_1055c72b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110deda98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0b380(param_1,param_2,0,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1055c7324; end: 1055c7397; +[SCLensMetadataRepository _lensNotValidErrorWithLensId:] */

void FUN_1055c7324(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dedab8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0b380(param_1,param_2,1,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1055c7398; end: 1055c73b3; +[SCLensMetadataRepository _errorWithStatusCode:description:underlyingError:] */

void FUN_1055c7398(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSError_1126ae858,PTR_s_errorWithDomain_description_code_1125c3e48,
             &PTR____CFConstantStringClassReference_110deda58,param_4,param_3,param_5);
  return;
}



/* Entry: 1055c73b4; end: 1055c73bf; -[SCLensMetadataRepository .cxx_destruct] */

void FUN_1055c73b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055c73c0; end: 1055c746b; -[SCLensBitmojiUserSettings bitmojiSelfieId] */

void FUN_1055c73c0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c15ade0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110dd70d8;
    _objc_retain(&PTR____CFConstantStringClassReference_110dd70d8);
  }
  else {
    ppuVar4 = *(undefined ***)(param_1 + 0x10);
    func_0x00010c269d40(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010c15ade0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 1055c746c; end: 1055c749b; -[SCLensBitmojiUserSettings .cxx_destruct] */

void FUN_1055c746c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055c749c; end: 1055c74db; -[SCLensStudioUserSettings isLensStudioLinked] */

bool FUN_1055c749c(long param_1)

{
  long lVar1;
  
  func_0x00010c097000();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c08fa60();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 1055c74dc; end: 1055c755b; -[SCLensStudioUserSettings lensStudioId] */

void FUN_1055c74dc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1055c755c; end: 1055c75cb; -[SCLensStudioUserSettings updateLensStudioId:] */

void FUN_1055c755c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(uVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055c75cc; end: 1055c75fb; -[SCLensStudioUserSettings .cxx_destruct] */

void FUN_1055c75cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055c75fc; end: 1055c762f; -[SCLensUserProvider resetLastLensActivationDate] */

void FUN_1055c75fc(undefined8 param_1)

{
  func_0x00010c097c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b8060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1055c7630; end: 1055c766b; -[SCLensUserProvider .cxx_destruct] */

void FUN_1055c7630(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055c766c; end: 1055c76e3; -[SCLensUserProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055c766c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127262ec,0);
  _objc_destroyWeak(param_1 + _DAT_112726304);
  _objc_destroyWeak(param_1 + _DAT_112726300);
  _objc_destroyWeak(param_1 + _DAT_1127262fc);
  _objc_destroyWeak(param_1 + _DAT_1127262f8);
  _objc_destroyWeak(param_1 + _DAT_1127262f4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127262f0);
  return;
}



/* Entry: 1055c76e4; end: 1055c7767;  */

void FUN_1055c76e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new(PTR_PTR_1126ae820);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c06b760();
  func_0x00010c0df6e0(puVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055c7768; end: 1055c7823; -[SCLensUserSettings setLastLensesActivationDate:] */

void FUN_1055c7768(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(param_3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c06b760(param_1);
  func_0x00010c0df6e0(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1055c7824; end: 1055c786b; -[SCLensUserSettings isActiveLensesUserUpdates] */

void FUN_1055c7824(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1055c786c; end: 1055c78cb; -[SCLensUserSettings isNewUser] */

undefined8 FUN_1055c786c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c078a60();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 1055c78cc; end: 1055c78d3; -[SCLensUserSettings userId] */

void FUN_1055c78cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_userId_112682320);
  return;
}



/* Entry: 1055c78d4; end: 1055c791b; -[SCLensUserSettings usernameDisplayOnly] */

void FUN_1055c78d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1055c791c; end: 1055c796f; -[SCLensUserSettings .cxx_destruct] */

void FUN_1055c791c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055c7970; end: 1055c797b; -[SCAdaptiveContentFetchingServices .cxx_destruct] */

void FUN_1055c7970(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055c797c; end: 1055c7a1f; -[SCACFRemoteAsset initWithContentFetchConfig:externalFetcherId:] */

undefined1 *
FUN_1055c797c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e9300;
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



/* Entry: 1055c7a20; end: 1055c7a43; -[SCACFRemoteAsset copyWithZone:] */

undefined8 FUN_1055c7a20(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1055c7a44; end: 1055c7ab7; -[SCACFRemoteAsset hash] */

undefined8 * FUN_1055c7a44(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1055c7b38:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1055c7b44;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_1055c7b44;
        }
        goto LAB_1055c7b38;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1055c7b44:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1055c7ab8; end: 1055c7b5f; -[SCACFRemoteAsset isEqual:] */

long FUN_1055c7ab8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1055c7b38:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1055c7b44;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_1055c7b44;
        }
        goto LAB_1055c7b38;
      }
    }
    lVar3 = 0;
  }
LAB_1055c7b44:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1055c7b60; end: 1055c7b67; -[SCACFRemoteAsset contentFetchConfig] */

undefined8 FUN_1055c7b60(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1055c7b68; end: 1055c7b6f; -[SCACFRemoteAsset externalFetcherId] */

undefined8 FUN_1055c7b68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1055c7b70; end: 1055c7b9f; -[SCACFRemoteAsset .cxx_destruct] */

void FUN_1055c7b70(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055c7ba0; end: 1055c7c4b; -[SCACFItem initWithItemId:remoteAssetList:] */

undefined1 *
FUN_1055c7ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e9308;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055c7c4c; end: 1055c7c6f; -[SCACFItem copyWithZone:] */

undefined8 FUN_1055c7c4c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1055c7c70; end: 1055c7ce3; -[SCACFItem hash] */

undefined8 * FUN_1055c7c70(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1055c7d64:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1055c7d70;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_1055c7d70;
        }
        goto LAB_1055c7d64;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1055c7d70:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1055c7ce4; end: 1055c7d8b; -[SCACFItem isEqual:] */

long FUN_1055c7ce4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1055c7d64:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1055c7d70;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_1055c7d70;
        }
        goto LAB_1055c7d64;
      }
    }
    lVar3 = 0;
  }
LAB_1055c7d70:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1055c7d8c; end: 1055c7d93; -[SCACFItem itemId] */

undefined8 FUN_1055c7d8c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1055c7d94; end: 1055c7d9b; -[SCACFItem remoteAssetList] */

undefined8 FUN_1055c7d94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1055c7d9c; end: 1055c7dcb; -[SCACFItem .cxx_destruct] */

void FUN_1055c7d9c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055c7dcc; end: 1055c801f; -[SCLensCrashLoggerFactory initWithBlizzardLogger:crashLogger:appInsightsMetadataStorage:userPreferences:grapheneRegistry:lensSwipeIdObservable:snapSourceObservable:errorReporter:studySettings:appStartExperimentReader:] */

undefined8 *
FUN_1055c7dcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_1126e9310;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[4];
    puVar1[4] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[1];
    puVar1[1] = param_7;
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
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    uVar2 = param_11;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
  }
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



/* Entry: 1055c8020; end: 1055c8027;  */

void FUN_1055c8020(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c092010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_lensCrashLoggerConfig_112602210);
  return;
}



/* Entry: 1055c8028; end: 1055c811f; -[SCLensCrashLoggerFactory createLogger] */

void FUN_1055c8028(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  
  puVar5 = PTR_PTR_1126bb8f0;
  _objc_alloc(PTR_PTR_1126bb8f0);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  lVar6 = param_1;
  func_0x00010bdec8c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff86a0(puVar5,param_2,uVar4,uVar1,uVar3,uVar2,0,lVar6,*(undefined8 *)(param_1 + 0x50)
                     );
  _objc_release(lVar6);
  lVar6 = *(long *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    puVar7 = PTR_PTR_1126bb8f8;
    _objc_alloc(PTR_PTR_1126bb8f8);
    func_0x00010c023560();
  }
  _objc_release(lVar6);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1055c8120; end: 1055c8227; -[SCLensCrashLoggerFactory userInteractedLogger] */

void FUN_1055c8120(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  puVar5 = PTR_PTR_1126bb8f0;
  _objc_alloc(PTR_PTR_1126bb8f0);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  lVar6 = param_1;
  func_0x00010bdec8c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff86a0(puVar5,param_2,uVar4,uVar1,uVar3,uVar2,uVar8,lVar6,
                      *(undefined8 *)(param_1 + 0x50));
  _objc_release(lVar6);
  func_0x00010c229600(puVar5,param_2,*(undefined8 *)(param_1 + 0x38));
  lVar6 = *(long *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    puVar7 = PTR_PTR_1126bb8f8;
    _objc_alloc(PTR_PTR_1126bb8f8);
    func_0x00010c023560();
  }
  _objc_release(lVar6);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1055c8228; end: 1055c835f; -[SCLensCrashLoggerFactory createLoggerWithCrashedLensIdsObservable:] */

void FUN_1055c8228(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  lVar5 = param_1;
  func_0x00010bdf5da0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126bb8f0;
  _objc_alloc(PTR_PTR_1126bb8f0);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  lVar7 = param_1;
  func_0x00010bdec8c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c006600(puVar6,param_2,param_3,lVar5,uVar4,uVar1,uVar3,uVar2,0,lVar7,
                      *(undefined8 *)(param_1 + 0x50));
  _objc_release(lVar7);
  lVar7 = *(long *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) {
    _objc_retain(puVar6);
    puVar8 = puVar6;
  }
  else {
    puVar8 = PTR_PTR_1126bb8f8;
    _objc_alloc(PTR_PTR_1126bb8f8);
    func_0x00010c023560();
  }
  _objc_release(lVar7);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}


