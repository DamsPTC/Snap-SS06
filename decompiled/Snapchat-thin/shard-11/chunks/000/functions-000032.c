/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10807f088; end: 10807f10b; -[SCMultiSnapStateHandlerImpl didChangeStaticCaption:] */

void FUN_10807f088(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10807f10c;
  puStack_30 = &UNK_110a0f580;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bedf700(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10807f10c; end: 10807f28b;  */

void FUN_10807f10c(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf308c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar6);
  uVar3 = uVar1;
  func_0x00010bfaea20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf308c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360();
  _objc_release(uVar1);
  uVar3 = *(ulong *)(param_1 + 0x20);
  func_0x00010c26ba60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf6ce80();
  if ((uVar1 & 1) == 0) {
    puVar4 = PTR_PTR_1126c4438;
    func_0x00010bf301e0();
    _objc_release(uVar3);
    if ((int)puVar4 == 0) goto LAB_10807f260;
    uVar3 = param_2;
    func_0x00010bf308c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c252440(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar3);
    _objc_release(uVar5);
  }
  _objc_release(uVar3);
LAB_10807f260:
  _objc_release(uVar2);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10807f28c; end: 10807f2c3;  */

bool FUN_10807f28c(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c280560(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c280560(lVar1);
  return param_2 == lVar1;
}



/* Entry: 10807f2c4; end: 10807f41b; -[SCMultiSnapStateHandlerImpl didChangeTrackingCaption:atIndex:] */

void FUN_10807f2c4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x88);
  func_0x00010c0dfd40(lVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf308c0();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10807f41c;
  puStack_50 = &UNK_110a0f5b0;
  lStack_48 = param_3;
  _objc_retain(param_3);
  lVar3 = lVar2;
  func_0x00010bfece40(lVar2,param_2,&puStack_68);
  _objc_release(lVar2);
  if (lVar3 == 0x7fffffffffffffff) {
    lVar2 = lVar1;
    func_0x00010bf308c0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c252440(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(lVar2,param_2,lVar3);
  }
  else {
    lVar2 = param_3;
    func_0x00010c252440(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf308c0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d04c0();
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10807f41c; end: 10807f453;  */

bool FUN_10807f41c(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c280560(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c280560(lVar1);
  return param_2 == lVar1;
}



/* Entry: 10807f454; end: 10807f4d7; -[SCMultiSnapStateHandlerImpl didChangeAutoCaptionsState:] */

void FUN_10807f454(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10807f4d8;
  puStack_30 = &UNK_110a0f580;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bedf700(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10807f4d8; end: 10807f4e3;  */

void FUN_10807f4d8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16cc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setAutoCaptions__112638d40,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10807f4e4; end: 10807f567; -[SCMultiSnapStateHandlerImpl didChangeStaticStickerView:] */

void FUN_10807f4e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10807f568;
  puStack_30 = &UNK_110a0f580;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bedf700(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10807f568; end: 10807f6db;  */

void FUN_10807f568(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c2553e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar5);
  uVar2 = uVar1;
  func_0x00010bfaea20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c2553e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360();
  _objc_release(uVar1);
  uVar4 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf6ce80();
  if ((uVar4 & 1) == 0) {
    uVar1 = param_2;
    func_0x00010c2553e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = uVar6;
    func_0x00010c262ca0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c255080(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c720(uVar1);
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(uVar3);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10807f6dc; end: 10807f713;  */

bool FUN_10807f6dc(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c280560(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c280560(lVar1);
  return param_2 == lVar1;
}



/* Entry: 10807f714; end: 10807f85f; -[SCMultiSnapStateHandlerImpl didUpdateMetadataOfStickerView:atIndex:] */

void FUN_10807f714(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x88);
  func_0x00010c0dfd40(lVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10807f860;
  puStack_50 = &UNK_110a0f670;
  _objc_retain(param_3);
  lVar3 = lVar2;
  lStack_48 = param_3;
  func_0x00010bfece40(lVar2,param_2,&puStack_68);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c262ca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  lVar4 = param_3;
  func_0x00010c255080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar4 != 0) {
    lVar2 = lVar1;
    func_0x00010c2553e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0x7fffffffffffffff) {
      func_0x00010c14c720();
    }
    else {
      func_0x00010c1d04c0();
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar4);
  _objc_release(lStack_48);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10807f860; end: 10807f897;  */

bool FUN_10807f860(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c280560(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c280560(lVar1);
  return param_2 == lVar1;
}



/* Entry: 10807f898; end: 10807f91b; -[SCMultiSnapStateHandlerImpl didChangeAttachmentURL:] */

void FUN_10807f898(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10807f91c;
  puStack_30 = &UNK_110a0f580;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bedf700(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10807f91c; end: 10807f927;  */

void FUN_10807f91c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16b3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setAttachmentURL__112638708,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10807f928; end: 10807f9ab; -[SCMultiSnapStateHandlerImpl updateAvailableFiltersWithState:] */

void FUN_10807f928(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10807f9ac;
  puStack_30 = &UNK_110a0f580;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bed2f60(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10807f9ac; end: 10807f9b7;  */

void FUN_10807f9ac(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2839f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_updateAvailableFiltersWithState__11267e8a0,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10807f9b8; end: 10807f9bf; -[SCMultiSnapStateHandlerImpl setOverlaySize:] */

void FUN_10807f9b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x10) = param_1;
  *(undefined8 *)(param_3 + 0x18) = param_2;
  return;
}



/* Entry: 10807f9c0; end: 10807fa8f; -[SCMultiSnapStateHandlerImpl didChangeFiltersState:] */

void FUN_10807f9c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10807fa44;
  puStack_30 = &UNK_110a0f580;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bedf700(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10807fa90; end: 10807fb13; -[SCMultiSnapStateHandlerImpl didChangeVenueFilterView:] */

void FUN_10807fa90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10807fb14;
  puStack_30 = &UNK_110a0f580;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bedf700(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10807fb14; end: 10807fb9b;  */

void FUN_10807fb14(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c297ce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf51e00();
  uVar2 = param_2;
  func_0x00010bfaee40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c220880(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10807fb9c; end: 10807fcaf; -[SCMultiSnapStateHandlerImpl didChangeCroppingState:isInitialState:] */

void FUN_10807fb9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x10807fc30;
  puStack_48 = &UNK_110a0f700;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x00010bedf700(param_1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 10807fcb0; end: 10807fd33; -[SCMultiSnapStateHandlerImpl didChangeGenericAssets:] */

void FUN_10807fcb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10807fd34;
  puStack_30 = &UNK_110a0f580;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bedf700(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10807fd34; end: 10807fd3f;  */

void FUN_10807fd34(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a2ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setGenericAssets__1126464c8,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10807fd40; end: 10807fe5b; -[SCMultiSnapStateHandlerImpl drawingView:addedStroke:] */

void FUN_10807fd40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x10807fdf0;
  puStack_48 = &UNK_110a0f6d0;
  uStack_40 = param_4;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bedf700(param_1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 10807fe5c; end: 10807ff1b; -[SCMultiSnapStateHandlerImpl drawingView:removedStroke:] */

void FUN_10807fe5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10807fee0;
  puStack_30 = &UNK_110a0f580;
  uStack_28 = param_4;
  _objc_retain(param_4);
  func_0x00010bedf700(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_4);
  return;
}



/* Entry: 10807ff1c; end: 10807ff23; -[SCMultiSnapStateHandlerImpl drawingStrokeHistoryForDrawItemSelected:clipsStateEditingType:forSegmentIndex:] */

undefined8 FUN_10807ff1c(void)

{
  return 0;
}



/* Entry: 10807ff24; end: 108080007; -[SCMultiSnapStateHandlerImpl didChangeAudioFilter:audioEnabled:] */

void FUN_10807ff24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x10807ffb8;
  puStack_48 = &UNK_110a0f700;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x00010bedf700(param_1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 108080008; end: 10808008b; -[SCMultiSnapStateHandlerImpl didChangeMusicSelection:] */

void FUN_108080008(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10808008c;
  puStack_38 = &UNK_110a0f6d0;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bedf700(param_1,param_2,&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10808008c; end: 10808020b;  */

void FUN_10808008c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  func_0x00010bf73000(*(undefined8 *)(param_1 + 0x20));
  puVar3 = *(undefined1 **)(param_1 + 0x28);
  func_0x00010c1ca160(param_2);
  if (*(long *)(param_1 + 0x28) == 0) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    lVar1 = param_2;
    func_0x00010c2553e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf51e00();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar5 = *plStack_110;
      do {
        lVar6 = 0;
        do {
          if (*plStack_110 != lVar5) {
            _objc_enumerationMutation(lVar2);
          }
          puVar4 = *(undefined8 **)(lStack_118 + lVar6 * 8);
          puVar3 = (undefined1 *)puVar4;
          func_0x00010bfee000();
          if (puVar3 == (undefined1 *)0xb) {
            lVar1 = param_2;
            func_0x00010c2553e0(param_2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12d360();
            _objc_release(lVar1);
            goto LAB_1080801c4;
          }
          lVar6 = lVar6 + 1;
        } while (lVar1 != lVar6);
        lVar1 = lVar2;
        puVar4 = &uStack_120;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
LAB_1080801c4:
    _objc_release(lVar2);
    puVar3 = (undefined1 *)puVar4;
  }
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_retain(puVar3);
    _objc_retain(puVar3);
    func_0x00010bed2f60(param_2);
    _objc_release(puVar3);
    _objc_release(puVar3);
    return;
  }
  return;
}



/* Entry: 10808020c; end: 10808028f; -[SCMultiSnapStateHandlerImpl didChangeBaseMediaMusicSelection:] */

void FUN_10808020c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_108080290;
  puStack_30 = &UNK_110a0f580;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bed2f60(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 108080290; end: 10808029b;  */

void FUN_108080290(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setBaseMediaMusicSelection__112639710,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10808029c; end: 10808036f; -[SCMultiSnapStateHandlerImpl didChangeVoiceoverAudio:] */

void FUN_10808029c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bedf700(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108080370; end: 1080803eb;  */

void FUN_108080370(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf73000();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000108454a7c(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2240c0(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1080803ec; end: 1080804bf; -[SCMultiSnapStateHandlerImpl didChangeMixedAudioTracks:] */

void FUN_1080803ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bed2f60(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1080804c0; end: 10808051f;  */

void FUN_1080804c0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf73000();
  _objc_release(param_1);
  func_0x00010c1c8720(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108080520; end: 1080805f3; -[SCMultiSnapStateHandlerImpl didChangeMixedBaseAudioVolume:] */

void FUN_108080520(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bed2f60(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1080805f4; end: 108080653;  */

void FUN_1080805f4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf73000();
  _objc_release(param_1);
  func_0x00010c1c8740(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108080654; end: 108080727; -[SCMultiSnapStateHandlerImpl didChangeTextToSpeechAudioAsset:] */

void FUN_108080654(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bedf700(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108080728; end: 108080787;  */

void FUN_108080728(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf73000();
  _objc_release(param_1);
  func_0x00010c21a9e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108080788; end: 10808080b; -[SCMultiSnapStateHandlerImpl didChangeLiveCameraLensConfiguration:] */

void FUN_108080788(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10808080c;
  puStack_30 = &UNK_110a0f580;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bed2f60(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10808080c; end: 108080817;  */

void FUN_10808080c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1be390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setLiveCameraLensConfiguration__11264d308,*(undefined8 *)(param_1 + 0x20)
            );
  return;
}



/* Entry: 108080818; end: 10808089b; -[SCMultiSnapStateHandlerImpl didChangePreviewLensConfiguration:] */

void FUN_108080818(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10808089c;
  puStack_30 = &UNK_110a0f580;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bed2f60(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10808089c; end: 1080808a7;  */

void FUN_10808089c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e1e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setPreviewLensConfiguration__1126561b8,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1080808a8; end: 1080809a7; -[SCMultiSnapStateHandlerImpl statesContainAudioVisualEdits] */

undefined8 * FUN_1080808a8(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_300;
  long lStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long lStack_180;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar9 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar7 = *(long *)(param_1 + 0x88);
  _objc_retain(lVar7);
  lVar1 = lVar7;
  func_0x00010bf52a60();
  puVar8 = (undefined8 *)0x0;
  if (lVar1 != 0) {
    lVar10 = *plStack_100;
    do {
      lVar11 = 0;
      do {
        if (*plStack_100 != lVar10) {
          _objc_enumerationMutation(lVar7);
        }
        uVar2 = *(ulong *)(lStack_108 + lVar11 * 8);
        func_0x00010bfd4520();
        if ((uVar2 & 1) != 0) {
          puVar8 = (undefined8 *)0x1;
          goto LAB_108080968;
        }
        lVar11 = lVar11 + 1;
      } while (lVar1 != lVar11);
      lVar1 = lVar7;
      puVar9 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    puVar8 = (undefined8 *)0x0;
  }
LAB_108080968:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar8;
  }
  ___stack_chk_fail();
  lStack_180 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  plStack_2b0 = (long *)0x0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  lVar7 = *(long *)(lVar7 + 0x88);
  _objc_retain(lVar7);
  puVar8 = &uStack_2c0;
  lVar1 = lVar7;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar10 = *plStack_2b0;
    do {
      lVar11 = 0;
      do {
        if (*plStack_2b0 != lVar10) {
          _objc_enumerationMutation(lVar7);
        }
        lVar3 = *(long *)(lStack_2b8 + lVar11 * 8);
        lStack_2f8 = 0;
        uStack_300 = 0;
        uStack_2e8 = 0;
        plStack_2f0 = (long *)0x0;
        uStack_2d8 = 0;
        uStack_2e0 = 0;
        uStack_2c8 = 0;
        uStack_2d0 = 0;
        func_0x00010c2553e0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        puVar8 = &uStack_300;
        func_0x00010bf52a60();
        if (lVar4 != 0) {
          lVar13 = *plStack_2f0;
          do {
            lVar14 = 0;
            do {
              if (*plStack_2f0 != lVar13) {
                _objc_enumerationMutation(lVar3);
              }
              puVar12 = *(undefined1 **)(lStack_2f8 + lVar14 * 8);
              puVar5 = puVar12;
              func_0x00010c27dd80();
              if ((puVar5 == (undefined1 *)0x6) &&
                 (func_0x00010bfee000(), (undefined8 *)puVar12 == puVar9)) {
                _objc_release(lVar3);
                puVar9 = (undefined8 *)0x1;
                goto LAB_108080b28;
              }
              lVar14 = lVar14 + 1;
            } while (lVar4 != lVar14);
            lVar4 = lVar3;
            puVar8 = &uStack_300;
            func_0x00010bf52a60();
          } while (lVar4 != 0);
        }
        _objc_release(lVar3);
        lVar11 = lVar11 + 1;
      } while (lVar11 != lVar1);
      puVar8 = &uStack_2c0;
      lVar1 = lVar7;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  puVar9 = (undefined8 *)0x0;
LAB_108080b28:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_180) {
    return puVar9;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  lVar1 = lVar7 + 8;
  _objc_loadWeakRetained();
  lVar10 = lVar1;
  func_0x00010bf8c7a0();
  _objc_release(lVar1);
  if (lVar10 != 0x7fffffffffffffff) {
    uVar6 = *(undefined8 *)(lVar7 + 0x88);
    func_0x00010c0dfd40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)puVar8[2])(puVar8,uVar6);
    _objc_release(uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return puVar8;
}



/* Entry: 1080809a8; end: 108080b6f; -[SCMultiSnapStateHandlerImpl statesContainInfoStickerOfType:] */

undefined8 * FUN_1080809a8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar7 = *(long *)(param_1 + 0x88);
  _objc_retain(lVar7);
  puVar6 = &uStack_1b0;
  lVar1 = lVar7;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar10 = *plStack_1a0;
    do {
      lVar11 = 0;
      do {
        if (*plStack_1a0 != lVar10) {
          _objc_enumerationMutation(lVar7);
        }
        lVar2 = *(long *)(lStack_1a8 + lVar11 * 8);
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        func_0x00010c2553e0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        puVar6 = &uStack_1f0;
        func_0x00010bf52a60();
        if (lVar3 != 0) {
          lVar12 = *plStack_1e0;
          do {
            lVar13 = 0;
            do {
              if (*plStack_1e0 != lVar12) {
                _objc_enumerationMutation(lVar2);
              }
              lVar9 = *(long *)(lStack_1e8 + lVar13 * 8);
              lVar4 = lVar9;
              func_0x00010c27dd80();
              if ((lVar4 == 6) && (func_0x00010bfee000(), lVar9 == param_3)) {
                _objc_release(lVar2);
                puVar8 = (undefined8 *)0x1;
                goto LAB_108080b28;
              }
              lVar13 = lVar13 + 1;
            } while (lVar3 != lVar13);
            lVar3 = lVar2;
            puVar6 = &uStack_1f0;
            func_0x00010bf52a60();
          } while (lVar3 != 0);
        }
        _objc_release(lVar2);
        lVar11 = lVar11 + 1;
      } while (lVar11 != lVar1);
      puVar6 = &uStack_1b0;
      lVar1 = lVar7;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  puVar8 = (undefined8 *)0x0;
LAB_108080b28:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar8;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  lVar1 = lVar7 + 8;
  _objc_loadWeakRetained();
  lVar10 = lVar1;
  func_0x00010bf8c7a0();
  _objc_release(lVar1);
  if (lVar10 != 0x7fffffffffffffff) {
    uVar5 = *(undefined8 *)(lVar7 + 0x88);
    func_0x00010c0dfd40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)puVar6[2])(puVar6,uVar5);
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return puVar6;
}



/* Entry: 108080b70; end: 108080bfb; -[SCMultiSnapStateHandlerImpl _updateSelectedSegmentsWithBlock:] */

void FUN_108080b70(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf8c7a0();
  _objc_release(lVar1);
  if (lVar2 != 0x7fffffffffffffff) {
    uVar3 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c0dfd40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,uVar3);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108080bfc; end: 108080c83; -[SCMultiSnapStateHandlerImpl _updateAllSegmentsWithBlock:] */

void FUN_108080bfc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x88);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar4 = 0;
    do {
      uVar2 = *(undefined8 *)(param_1 + 0x88);
      func_0x00010c0dfd40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_3 + 0x10))(param_3,uVar2);
      _objc_release(uVar2);
      uVar4 = uVar4 + 1;
      uVar3 = *(ulong *)(param_1 + 0x88);
      func_0x00010bf529e0();
    } while (uVar4 < uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108080c84; end: 108080ccb; +[SCMultiSnapStateHandlerImpl overlayAndVideoTrackedImagesForOverlayState:overlaySize:outputSize:durationMs:useOutputSizeForStaticOverlay:spectaclesTranscodingConfig:userSession:previewCameraSourceOverlayService:multiSnapDrawingCache:videoPlaybackSpeed:targetTrajectoryFactory:stickerInjector:ctpItemViewService:overlayGenerationType:disposableBag:completion:] */

void FUN_108080c84(void)

{
  func_0x00010c0ef540(PTR_PTR_1126bf728);
  return;
}



/* Entry: 108080ccc; end: 108080cd7; +[SCMultiSnapStateHandlerImpl containsTrackedImagesForOverlayState:] */

void FUN_108080ccc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4bb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126bf728,PTR_s_containsTrackedImagesForOverlayS_1125b0888);
  return;
}



/* Entry: 108080cd8; end: 108080e67; -[SCMultiSnapStateHandlerImpl _iterateStatesWithTimeRanges:dataProcessBlock:] */

void FUN_108080cd8(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar4 = param_3;
  func_0x00010bf529e0();
  if (uVar4 != 0) {
    uVar4 = 0;
    uVar5 = 0;
    do {
      uVar1 = *(ulong *)(param_1 + 0x88);
      func_0x00010bf529e0();
      if (uVar1 <= uVar5) break;
      uVar1 = param_3;
      func_0x00010bf529e0();
      for (; uVar4 < uVar1; uVar4 = uVar4 + 1) {
        uVar1 = *(ulong *)(param_1 + 0x88);
        func_0x00010bf529e0();
        if (uVar5 + 1 != uVar1) {
          lVar2 = *(long *)(param_1 + 0x88);
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          if (lVar2 == 0) {
            uStack_78 = 0;
            uStack_70 = 0;
            uStack_68 = 0;
          }
          else {
            func_0x00010c26f040(&uStack_78,lVar2);
          }
          uVar1 = param_3;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          if (uVar1 == 0) {
            uStack_98 = 0;
            uStack_a0 = 0;
            uStack_88 = 0;
            uStack_90 = 0;
            uStack_a8 = 0;
            uStack_b0 = 0;
          }
          else {
            func_0x00010bdc1120(&uStack_b0,uVar1);
          }
          uStack_c8 = uStack_a8;
          uStack_d0 = uStack_b0;
          uStack_c0 = uStack_a0;
          puVar3 = &uStack_78;
          _CMTimeCompare(puVar3,&uStack_d0);
          _objc_release(uVar1);
          _objc_release(lVar2);
          if ((int)puVar3 < 1) break;
        }
        (**(code **)(param_4 + 0x10))(param_4,uVar5,uVar4);
        uVar1 = param_3;
        func_0x00010bf529e0();
      }
      uVar1 = param_3;
      func_0x00010bf529e0();
      uVar5 = uVar5 + 1;
    } while (uVar4 < uVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108080e68; end: 108080f2b; -[SCMultiSnapStateHandlerImpl overlayAndVideoTrackedImagesForIndex:outputSize:useOutputSizeForStaticOverlay:useImageCacheForStaticOverlay:multiSnapDrawingCache:overlayGenerationType:completion:] */

void FUN_108080e68(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 0x88);
  _objc_retain(param_10);
  _objc_retain(param_8);
  func_0x00010c0dfd40(uVar1,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6eaa0(param_1,param_2,param_3,param_4,uVar1,param_6,param_7,param_8,param_9,param_10
                     );
  _objc_release(param_10);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108080f2c; end: 10808111f; -[SCMultiSnapStateHandlerImpl _overlayAndVideoTrackedImagesForState:outputSize:useOutputSizeForStaticOverlay:useImageCacheForStaticOverlay:multiSnapDrawingCache:overlayGenerationType:completion:] */

void FUN_108080f2c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar9 = *(undefined8 *)(param_3 + 0x20);
  uVar10 = *(undefined8 *)(param_3 + 0x30);
  _objc_retain(param_10);
  _objc_retain(param_8);
  _objc_retain(param_5);
  func_0x00010c2946e0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_3 + 0x30);
  func_0x00010bf85f80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_3 + 0x10);
  uVar6 = param_5;
  FUN_108084048(uVar11,*(undefined8 *)(param_3 + 0x18),param_5,uVar9,uVar2,uVar5,
                *(undefined8 *)(param_3 + 0x58));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar10);
  lVar7 = param_3;
  _objc_opt_class(param_3);
  lVar8 = param_3;
  func_0x00010be1ebc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29aae0(param_5);
  _objc_release(param_5);
  func_0x00010c0ef560(*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18),param_1,
                      param_2,uVar11,lVar7);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 108081120; end: 10808130f; -[SCMultiSnapStateHandlerImpl _getDurationMsFromTimeRanges] */

void FUN_108081120(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long lVar6;
  double dVar7;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  double dStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  double dStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar5 = &uStack_170;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x80);
  func_0x00010bf529e0();
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x80);
    func_0x00010bf529e0();
    if (lVar1 == 1) {
      param_1 = *(long *)(param_1 + 0x80);
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if (param_1 == 0) {
        dStack_f8 = 0.0;
        uStack_100 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
      }
      else {
        func_0x00010bdc1120(&uStack_110,param_1);
      }
      _objc_release(param_1);
      uStack_128 = uStack_f0;
      dStack_130 = dStack_f8;
      uStack_120 = uStack_e8;
      dVar7 = dStack_f8;
      _CMTimeGetSeconds(&dStack_130);
      unaff_x21 = (ulong)dVar7;
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    }
    else {
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      lStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      plStack_160 = (long *)0x0;
      param_1 = *(long *)(param_1 + 0x80);
      _objc_retain(param_1);
      lVar1 = param_1;
      func_0x00010bf52a60();
      if (lVar1 == 0) {
        unaff_x21 = 0;
      }
      else {
        unaff_x21 = 0;
        unaff_x22 = *plStack_160;
        do {
          lVar6 = 0;
          do {
            if (*plStack_160 != unaff_x22) {
              _objc_enumerationMutation(param_1);
            }
            if (*(long *)(lStack_168 + lVar6 * 8) == 0) {
              dStack_f8 = 0.0;
              uStack_100 = 0;
              uStack_e8 = 0;
              uStack_f0 = 0;
              uStack_108 = 0;
              uStack_110 = 0;
            }
            else {
              func_0x00010bdc1120(&uStack_110);
            }
            uStack_128 = uStack_f0;
            dStack_130 = dStack_f8;
            uStack_120 = uStack_e8;
            dVar7 = dStack_f8;
            _CMTimeGetSeconds(&dStack_130);
            unaff_x21 = (ulong)(dVar7 + (double)unaff_x21);
            lVar6 = lVar6 + 1;
          } while (lVar1 != lVar6);
          lVar1 = param_1;
          puVar5 = &uStack_170;
          func_0x00010bf52a60();
        } while (lVar1 != 0);
        unaff_x20 = 0;
      }
      _objc_release(param_1);
      param_3 = (undefined1 *)puVar5;
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    }
    PTR__OBJC_CLASS___NSNumber_1126ae570 = puVar2;
    if (unaff_x21 == 0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      func_0x00010c0df720((double)unaff_x21 * 1000.0);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_178 = FUN_108081310;
    lStack_1a0 = unaff_x22;
    uStack_198 = unaff_x21;
    uStack_190 = unaff_x20;
    lStack_188 = param_1;
    puStack_180 = &stack0xfffffffffffffff0;
    _objc_retain(param_3);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puVar3 = param_3;
    func_0x00010bf529e0(param_3);
    func_0x00010bf0a0e0(puVar4,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1d0 = 0xc2000000;
    pcStack_1c8 = FUN_1080813f0;
    puStack_1c0 = &UNK_110a0f760;
    puStack_1b8 = puVar2;
    puStack_1b0 = param_3;
    puStack_1a8 = puVar4;
    _objc_retain();
    _objc_retain(param_3);
    func_0x00010be46300(puVar2,param_2,param_3,&puStack_1d8);
    func_0x00010bf51e00(puVar4);
    _objc_release(puStack_1a8);
    _objc_release(puStack_1b0);
    _objc_release(puVar4);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108081310; end: 1080813ef; -[SCMultiSnapStateHandlerImpl gallerySnapOverlaysWithTimeRanges:] */

void FUN_108081310(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar1 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1080813f0;
  puStack_50 = &UNK_110a0f760;
  uStack_48 = param_1;
  uStack_40 = param_3;
  puStack_38 = puVar2;
  _objc_retain();
  _objc_retain(param_3);
  func_0x00010be46300(param_1,param_2,param_3,&puStack_68);
  puVar3 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puStack_38);
  _objc_release(uStack_40);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1080813f0; end: 1080815b7;  */

void FUN_1080813f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf8c880(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010bdc1120(&uStack_90,lVar2);
  }
  func_0x00010c214c20(uVar1);
  _objc_release(lVar2);
  uVar3 = uVar1;
  FUN_1080836ac(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(long *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(lVar2 + 0x30);
  func_0x00010c2946e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010bf85f80(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar3;
  FUN_108087e10(*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18),uVar3,uVar6,uVar9,
                *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58),0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  return;
}



/* Entry: 1080815b8; end: 1080817ff; -[SCMultiSnapStateHandlerImpl gallerySnapshotForTimeRanges:] */

void FUN_1080815b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfbd860(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar2 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  uStack_68 = 0x1080816f4;
  puStack_60 = &UNK_110a0f760;
  puStack_58 = puVar3;
  puStack_50 = puVar4;
  uStack_48 = param_1;
  _objc_retain();
  _objc_retain(puVar3);
  func_0x00010be46300(param_1,param_2,param_3,&puStack_78);
  _objc_release(param_3);
  puVar5 = PTR_PTR_1126d90e0;
  _objc_alloc(PTR_PTR_1126d90e0);
  func_0x00010c017220();
  _objc_release(puStack_50);
  _objc_release(puStack_58);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108081800; end: 10808187f; -[SCMultiSnapStateHandlerImpl overlaysForGalleryWithTimeRanges:multiSnapDrawingCache:completion:] */

void FUN_108081800(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bfbd9e0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0efec0(param_1,param_2,uVar1,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108081880; end: 1080819e3; -[SCMultiSnapStateHandlerImpl overlaysForGalleryWithSnapshot:multiSnapDrawingCache:completion:] */

void FUN_108081880(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfbd820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0ece00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c2529a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1080819e4;
  puStack_88 = &UNK_110866740;
  uStack_80 = uVar2;
  lStack_78 = param_1;
  uStack_70 = uVar3;
  uStack_68 = param_4;
  uStack_60 = uVar1;
  uStack_58 = param_5;
  _objc_retain(uVar1);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(uVar3);
  _objc_retain(uVar2);
  func_0x00010c0f7fc0(uVar4,param_2,&puStack_a0);
  _objc_release(uStack_60);
  _objc_release(uStack_58);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_80);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 1080819e4; end: 108081c57;  */

void FUN_1080819e4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar12);
  lVar2 = lVar12;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  if (lVar2 != 0) {
    lVar15 = -1;
    do {
      lVar13 = 0;
      lVar16 = lVar15;
      do {
        if (lRam0000000000000000 != lVar11) {
          _objc_enumerationMutation(lVar12);
        }
        lVar15 = *(long *)(lVar13 * 8);
        func_0x00010c067fc0();
        if (lVar16 == lVar15) {
          puVar3 = puVar1;
          func_0x00010c089820(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
        }
        else {
          puVar3 = (undefined *)0x0;
          _dispatch_semaphore_create();
          uVar14 = *(undefined8 *)(param_1 + 0x28);
          uVar4 = *(undefined8 *)(param_1 + 0x30);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar16 = *(long *)(param_1 + 0x28);
          _objc_retain(puVar1);
          uVar17 = *(undefined8 *)(lVar16 + 0x10);
          uVar18 = *(undefined8 *)(lVar16 + 0x18);
          _objc_retain(puVar3);
          func_0x00010be6eaa0(uVar17,uVar18,uVar14);
          _objc_release(uVar4);
          _dispatch_semaphore_wait(puVar3,0xffffffffffffffff);
          _objc_release(puVar3);
          _objc_release(puVar1);
        }
        _objc_release(puVar3);
        lVar13 = lVar13 + 1;
        lVar16 = lVar15;
      } while (lVar2 != lVar13);
      lVar2 = lVar12;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar12);
  puVar3 = puVar1;
  (**(code **)(*(long *)(param_1 + 0x48) + 0x10))
            (*(long *)(param_1 + 0x48),puVar1,*(undefined8 *)(param_1 + 0x40));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar3);
  if (puVar3 == (undefined *)0x0) {
    uVar14 = *(undefined8 *)(puVar1 + 0x28);
    puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar9;
    func_0x00010befa120(uVar14);
  }
  else {
    puVar9 = PTR_PTR_1126d4dc8;
    _objc_alloc();
    func_0x00010c01c380();
    puVar5 = *(undefined **)(*(long *)(puVar1 + 0x20) + 0x38);
    func_0x00010c0ef840();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010c0ef8a0(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar6 = puVar8;
    func_0x00010befa120(*(undefined8 *)(puVar1 + 0x28));
    _objc_release(puVar8);
  }
  _objc_release(puVar9);
  _dispatch_semaphore_signal(*(undefined8 *)(puVar1 + 0x30));
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000108081de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar6 + 0x10))(puVar6,0,0);
  return;
}



/* Entry: 108081c58; end: 108081dcf;  */

void FUN_108081c58(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_2 == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    func_0x00010befa120(uVar7);
  }
  else {
    puVar5 = PTR_PTR_1126d4dc8;
    _objc_alloc();
    func_0x00010c01c380();
    puVar1 = *(undefined **)(*(long *)(param_1 + 0x20) + 0x38);
    func_0x00010c0ef840();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c0ef8a0(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar2 = puVar4;
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
    _objc_release(puVar4);
  }
  _objc_release(puVar5);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x30));
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000108081de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar2 + 0x10))(puVar2,0,0);
  return;
}



/* Entry: 108081dd0; end: 108081de3; -[SCMultiSnapStateHandlerImpl globalOverlayForGalleryWithCompletion:] */

void FUN_108081dd0(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000108081de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3,0,0);
  return;
}



/* Entry: 108081de4; end: 108081f7b; -[SCMultiSnapStateHandlerImpl sendingStatesForTimeRanges:] */

void FUN_108081de4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar1 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x108081ec4;
  puStack_50 = &UNK_110a0f760;
  uStack_48 = param_1;
  uStack_40 = param_3;
  puStack_38 = puVar2;
  _objc_retain();
  _objc_retain(param_3);
  func_0x00010be46300(param_1,param_2,param_3,&puStack_68);
  puVar3 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puStack_38);
  _objc_release(uStack_40);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108081f7c; end: 108081f7f; -[SCMultiSnapStateHandlerImpl savingStatesForTimeRanges:] */

void FUN_108081f7c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15e0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_sendingStatesForTimeRanges__112635250);
  return;
}



/* Entry: 108081f80; end: 108081fbf; -[SCMultiSnapStateHandlerImpl editingStateToSaveAtIndex:] */

void FUN_108081f80(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c0dfd40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf51e00();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108081fc0; end: 108081fff; -[SCMultiSnapStateHandlerImpl editingStateAtIndex:withGlobalAndLocalStateResolved:] */

void FUN_108081fc0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c0dfd40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf51e00();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108082000; end: 10808203f; -[SCMultiSnapStateHandlerImpl resolvedClipEditingStateAtIndex:] */

void FUN_108082000(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c0dfd40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf51e00();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108082040; end: 10808207f; -[SCMultiSnapStateHandlerImpl hasEditsAtIndex:] */

undefined8 FUN_108082040(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c0dfd40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd68c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 108082080; end: 108082087; -[SCMultiSnapStateHandlerImpl hasEditAtClipIndex:editType:uniqueId:] */

undefined8 FUN_108082080(void)

{
  return 0;
}



/* Entry: 108082088; end: 10808208b; -[SCMultiSnapStateHandlerImpl moveEditToGlobalAtClipIndex:editType:uniqueId:] */

void FUN_108082088(void)

{
  return;
}



/* Entry: 10808208c; end: 10808208f; -[SCMultiSnapStateHandlerImpl restoreEditingStatesFromGalleryWithGlobalState:localStates:] */

void FUN_10808208c(void)

{
  return;
}



/* Entry: 108082090; end: 108082203; -[SCMultiSnapStateHandlerImpl configureEphemeralMedias:configuration:timeRanges:multiSnapDrawingCache:] */

void FUN_108082090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  char *pcStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_70 = &uStack_78;
  uStack_78 = 0;
  uStack_68 = 0x3810000000;
  pcStack_60 = "";
  uStack_50 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_58 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_48 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010be46300(param_1);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_5);
  __Block_object_dispose(&uStack_78,8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108082204; end: 10808257b;  */

void FUN_108082204(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf8c880(lVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2a09a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = lVar1;
    func_0x00010c2a09a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = *(long *)(*(long *)(param_1 + 0x48) + 8);
    uStack_88 = *(undefined8 *)(lVar7 + 0x28);
    uStack_90 = *(undefined8 *)(lVar7 + 0x20);
    uStack_80 = *(undefined8 *)(lVar7 + 0x30);
    lVar7 = lVar2;
    FUN_108454af4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2240c0(lVar1);
    _objc_release(lVar7);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010bdc1120(&uStack_90,lVar2);
  }
  uStack_d8 = uStack_70;
  uStack_e0 = uStack_78;
  uStack_d0 = uStack_68;
  _objc_release(lVar2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  uStack_88 = *(undefined8 *)(lVar2 + 0x28);
  uStack_90 = *(undefined8 *)(lVar2 + 0x20);
  uStack_80 = *(undefined8 *)(lVar2 + 0x30);
  _CMTimeAdd(&uStack_a8,&uStack_90,&uStack_e0);
  lVar2 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  *(undefined8 *)(lVar2 + 0x28) = uStack_a0;
  *(undefined8 *)(lVar2 + 0x20) = uStack_a8;
  *(undefined8 *)(lVar2 + 0x30) = uStack_98;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0dfd40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010bdc1120(&uStack_90,lVar2);
  }
  _objc_release(lVar2);
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  func_0x00010bf46e40(*(undefined8 *)(param_1 + 0x20));
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = uVar3;
  func_0x00010bf42a00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf429e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  func_0x00010bed9a00(uVar8);
  _objc_release(lVar2);
  _objc_release(uVar4);
  uVar4 = uVar3;
  func_0x00010bf42a00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(param_1 + 0x40);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar7;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
  }
  else {
    func_0x00010c27c900(&uStack_e0,lVar2);
  }
  lVar5 = *(long *)(param_1 + 0x40);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
  }
  else {
    func_0x00010c26f620(&uStack_110,lVar6);
  }
  _CMTimeRangeEqual(&uStack_e0,&uStack_110);
  func_0x00010c2bbc80(uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar7);
  _objc_release(uVar4);
  uVar4 = uVar3;
  func_0x00010bf42a00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b4260();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar1);
  return;
}



/* Entry: 10808257c; end: 108082b47; -[SCMultiSnapStateHandlerImpl configureEphemeralMedia:withEditingState:index:timeRange:multiSnapDrawingCache:] */

void FUN_10808257c(long param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 param_5,
                  double *param_6,undefined8 param_7)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  dStack_98 = param_6[1];
  dVar9 = *param_6;
  dStack_90 = param_6[2];
  dStack_a0 = dVar9;
  _objc_retain(param_7);
  func_0x00010c214c20(param_4,param_2,&dStack_a0);
  uVar2 = param_3;
  func_0x00010c27dd80();
  if ((0x1a < uVar2) || ((1L << (uVar2 & 0x3f) & 0x7e7fc60U) == 0)) {
    lVar8 = param_4;
    func_0x00010bf0f0e0();
    uVar1 = 1;
    if ((int)lVar8 == 0) {
      uVar1 = 2;
    }
    func_0x00010c21acc0(param_3,param_2,uVar1);
  }
  lVar8 = param_4;
  func_0x00010bf0d660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar8 != 0) {
    lVar8 = param_4;
    func_0x00010bf0d660(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b3c0(param_3,param_2,lVar8);
    _objc_release(lVar8);
    lVar8 = param_4;
    func_0x00010bf0d660(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0c3fe0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b3c0();
    _objc_release(uVar2);
    _objc_release(lVar8);
  }
  func_0x00010c29aae0(param_4);
  if (dVar9 != 1.0) {
    dStack_98 = param_6[4];
    dVar10 = param_6[3];
    dStack_90 = param_6[5];
    dStack_a0 = dVar10;
    _CMTimeGetSeconds(&dStack_a0);
    dVar9 = dVar10;
    func_0x00010c29aae0(param_4);
    dVar11 = -dVar9;
    if (0.0 <= dVar9) {
      dVar11 = dVar9;
    }
    func_0x00010c214bc0(dVar10 / dVar11,param_3);
  }
  uVar2 = param_3;
  func_0x00010c29a0c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  dStack_98 = param_6[1];
  dStack_a0 = *param_6;
  dStack_88 = param_6[3];
  dStack_90 = param_6[2];
  dStack_78 = param_6[5];
  dStack_80 = param_6[4];
  func_0x00010bde5a40(param_1,param_2,uVar2,param_4,param_7,&dStack_a0);
  _objc_release(param_7);
  _objc_release(uVar2);
  lVar8 = param_4;
  func_0x00010bf308c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar8;
  func_0x00010c0b8620();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0d3c80();
  _objc_release(lVar3);
  _objc_release(lVar8);
  lVar8 = param_4;
  func_0x00010c2553e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar8;
  func_0x000108ec30bc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(lVar4,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar8);
  lVar8 = lVar4;
  func_0x00010bf529e0();
  if (lVar8 != 0) {
    lVar8 = lVar4;
    func_0x000108e225bc(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c178ac0(param_3,param_2,lVar8);
    _objc_release(lVar8);
  }
  lVar8 = param_4;
  func_0x00010bf308c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar8;
  func_0x00010bf529e0();
  _objc_release(lVar8);
  if (lVar3 != 0) {
    lVar8 = param_4;
    func_0x00010bf308c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar8;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    FUN_1084111c8();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0c3fe0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20cce0();
    _objc_release(uVar2);
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(lVar8);
  }
  puVar6 = PTR_PTR_1126c4538;
  lVar8 = param_4;
  func_0x00010c2553e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c293d80(puVar6,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  lVar8 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar8);
  lVar3 = param_4;
  func_0x00010bf308c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar8;
  func_0x00010c293d60(lVar8,param_2,lVar3,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar8);
  uVar2 = param_3;
  FUN_10841fa68(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar5;
  func_0x00010c0e00e0(lVar5,param_2,&PTR____CFConstantStringClassReference_110efb6b8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010c0e00e0(lVar5,param_2,&PTR____CFConstantStringClassReference_110efb698);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010c0e00e0(lVar5,param_2,&PTR____CFConstantStringClassReference_110efb6d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c6a40(uVar2,param_2,lVar8,lVar3,lVar7,0);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar8);
  _objc_release(uVar2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  lVar8 = param_4;
  func_0x00010bf308c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf00540(param_1,param_2,lVar8,puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ce7e0(param_3,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar8);
  _objc_release(param_1);
  uVar2 = param_3;
  FUN_10841fa68(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_4;
  func_0x00010bef0d20(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ca160(uVar2,param_2,lVar8);
  _objc_release(lVar8);
  _objc_release(uVar2);
  uVar2 = param_3;
  FUN_10841fa68(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_4;
  func_0x00010c2553e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar8;
  FUN_10808d58c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ca2e0(uVar2,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar8);
  _objc_release(uVar2);
  uVar2 = param_3;
  FUN_10841fa68(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16bea0();
  _objc_release(uVar2);
  _objc_release(lVar5);
  _objc_release(puVar6);
  _objc_release(lVar4);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108082b48; end: 108082b4f;  */

void FUN_108082b48(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_text_1126787e8);
  return;
}



/* Entry: 108082b50; end: 10808303f; -[SCMultiSnapStateHandlerImpl _configureSnapVideoFilter:forState:multiSnapDrawingCache:timeRange:] */

void FUN_108082b50(long param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  double dVar18;
  undefined1 auStack_90 [32];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_4;
  func_0x00010bfaee40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf69ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = param_4;
    func_0x00010bfaee40(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf69ac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bb2a0(param_3);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  func_0x00010c1d77e0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),param_3);
  func_0x00010bf0f0e0(param_4);
  func_0x00010c16bc20(param_3);
  lVar2 = param_4;
  func_0x00010bf0f140();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    func_0x00010c16c440(param_3);
  }
  else {
    puVar4 = PTR_PTR_1126d7d50;
    _objc_alloc(PTR_PTR_1126d7d50);
    lVar3 = param_4;
    func_0x00010bf0f140(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b057030(puVar4,lVar3);
    func_0x00010c16c440(param_3);
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010c2a0420(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19c2e0(param_3);
  _objc_release(lVar2);
  func_0x00010c29aae0(param_4);
  func_0x00010c221cc0(param_3);
  lVar2 = param_4;
  func_0x00010c0d36c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_4;
  func_0x00010c2a09a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_4;
  func_0x00010c27d220(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_4;
  func_0x00010c0cece0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_4;
  func_0x00010c0ced00(param_4);
  _objc_retainAutoreleasedReturnValue();
  FUN_108453a1c(auStack_90,lVar2,lVar3,lVar5,0,lVar7,lVar8,PTR__kCMTimeZero_110348670);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c1c8720(param_3);
  func_0x00010c16f280(param_3);
  func_0x00010c16bf80(param_3);
  func_0x00010c16bfa0(param_3);
  lVar2 = param_4;
  func_0x00010bf5c9c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  dVar18 = 0.0;
  if (lVar2 != 0) {
    lVar2 = param_4;
    func_0x00010bf5c9c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c186260(param_3);
    _objc_release(lVar2);
    func_0x00010c186240(0x7ff0000000000000,param_3);
    if (*(double *)(param_1 + 0x10) != 0.0) {
      if (*(double *)(param_1 + 0x18) == 0.0) {
        dVar18 = INFINITY;
      }
      else {
        dVar18 = *(double *)(param_1 + 0x10) / *(double *)(param_1 + 0x18);
      }
    }
  }
  func_0x00010c222080(dVar18,param_3);
  uVar9 = param_3;
  func_0x00010bef6760();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b1350;
  _objc_opt_class(PTR_PTR_1126b1350);
  uVar10 = uVar9;
  _objc_opt_isKindOfClass(uVar9,puVar4);
  uVar1 = uVar9;
  if ((uVar10 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar9);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  if (uVar1 != 0) {
    uVar17 = *(undefined8 *)(param_1 + 0x20);
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c2946e0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010bf60aa0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf85f80(uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    FUN_108084048(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),param_4,uVar17,
                  uVar13,uVar16,*(undefined8 *)(param_1 + 0x58));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a120(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c98e0(uVar9);
    _objc_release(puVar4);
    _objc_release(lVar2);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    func_0x00010c1c9780(uVar9);
  }
  _objc_release(uVar1);
  func_0x00010715c0ec(auStack_90);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108083040; end: 1080830d7; -[SCMultiSnapStateHandlerImpl _updateIndividualEditingLoggingParamsBuilder:timeRange:from:] */

void FUN_108083040(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + 0x68);
    func_0x00010c240960();
    if ((uVar1 & 1) == 0) {
      uVar1 = *(ulong *)(param_1 + 0x68);
      func_0x00010c240940();
      if ((uVar1 & 1) == 0) {
        uStack_58 = param_4[1];
        uStack_60 = *param_4;
        uStack_48 = param_4[3];
        uStack_50 = param_4[2];
        uStack_38 = param_4[5];
        uStack_40 = param_4[4];
        func_0x00010c286840(param_3,param_2,param_5,&uStack_60);
      }
    }
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1080830d8; end: 10808318b; -[SCMultiSnapStateHandlerImpl hasIndividualCreativeTools] */

bool FUN_1080830d8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = 0;
  do {
    uVar6 = uVar1;
    lVar2 = *(long *)(param_1 + 0x88);
    func_0x00010bf529e0();
    if (lVar2 - 1U <= uVar6) break;
    uVar3 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c0dfd40(uVar3,param_2,uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c0dfd40(uVar4,param_2,uVar6 + 1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010be33f40(param_1,param_2,uVar3,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar1 = uVar6 + 1;
  } while ((uVar5 & 1) != 0);
  return uVar6 < lVar2 - 1U;
}



/* Entry: 10808318c; end: 108083497; -[SCMultiSnapStateHandlerImpl _hasIdenticalCreativeToolsInState:toState:] */

long FUN_10808318c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf308c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010bf308c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c071b60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar3 != 0) {
    lVar1 = param_3;
    func_0x00010bfaee40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010bfaee40(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c071ae0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar3 != 0) {
      lVar1 = param_3;
      func_0x00010bf8a020();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_4;
      func_0x00010bf8a020(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c071b60();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if ((int)lVar3 != 0) {
        lVar1 = param_3;
        func_0x00010c2553e0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_4;
        func_0x00010c2553e0(param_4);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar1;
        func_0x00010c071b60();
        _objc_release(lVar2);
        _objc_release(lVar1);
        if ((int)lVar3 != 0) {
          lVar1 = param_3;
          func_0x00010bf0d660();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = param_4;
          func_0x00010bf0d660();
          _objc_retainAutoreleasedReturnValue();
          if (lVar1 == 0 && lVar2 == 0) {
            _objc_release(0);
            _objc_release(0);
          }
          else {
            lVar3 = lVar1;
            func_0x00010c0720c0();
            _objc_release(lVar2);
            _objc_release(lVar1);
            if ((int)lVar3 == 0) goto LAB_10808346c;
          }
          lVar1 = param_3;
          func_0x00010bf0f0e0();
          lVar2 = param_4;
          func_0x00010bf0f0e0();
          if ((int)lVar1 == (int)lVar2) {
            lVar1 = param_3;
            func_0x00010bf0f140();
            _objc_retainAutoreleasedReturnValue();
            lVar2 = param_4;
            func_0x00010bf0f140();
            _objc_retainAutoreleasedReturnValue();
            if (lVar1 == 0 && lVar2 == 0) {
              _objc_release(0);
              _objc_release(0);
            }
            else {
              lVar3 = lVar1;
              func_0x00010c0720c0();
              _objc_release(lVar2);
              _objc_release(lVar1);
              if ((int)lVar3 == 0) goto LAB_10808346c;
            }
            lVar1 = param_3;
            func_0x00010c0d36c0();
            _objc_retainAutoreleasedReturnValue();
            lVar2 = param_4;
            func_0x00010c0d36c0(param_4);
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar1;
            func_0x00010bd86de8(lVar1,lVar2);
            _objc_release(lVar2);
            _objc_release(lVar1);
            if ((int)lVar3 != 0) {
              lVar1 = param_3;
              func_0x00010c2a09a0(param_3);
              _objc_retainAutoreleasedReturnValue();
              lVar2 = param_4;
              func_0x00010c2a09a0(param_4);
              _objc_retainAutoreleasedReturnValue();
              lVar3 = lVar1;
              func_0x00010bd86de8(lVar1,lVar2);
              _objc_release(lVar2);
              _objc_release(lVar1);
              goto LAB_108083470;
            }
          }
        }
      }
    }
  }
LAB_10808346c:
  lVar3 = 0;
LAB_108083470:
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108083498; end: 10808350f; -[SCMultiSnapStateHandlerImpl didDeleteSegmentAtIndex:] */

void FUN_108083498(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      *(undefined8 *)(param_1 + 0x88));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3c0();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  *(undefined **)(param_1 + 0x88) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108083510; end: 1080835d7; -[SCMultiSnapStateHandlerImpl didFinishTouchWithTarget:] */

void FUN_108083510(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ba960;
  _objc_opt_class(PTR_PTR_1126ba960);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  puVar1 = PTR_DAT_1126a51c0;
  if ((uVar2 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = param_3;
    func_0x00010010fab4(param_3,puVar1);
    _objc_release(param_3);
    if ((param_3 == 0) || ((int)uVar2 == 0)) {
      puVar1 = PTR_PTR_1126c3c80;
      _objc_opt_class(PTR_PTR_1126c3c80);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar1);
      if ((uVar2 & 1) != 0) {
        func_0x00010bf73820(param_1);
      }
    }
    else {
      func_0x00010bf736c0(param_1);
    }
  }
  else {
    func_0x00010bf736e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1080835d8; end: 1080835df; -[SCMultiSnapStateHandlerImpl localStates] */

undefined8 FUN_1080835d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 1080835e0; end: 1080835e7; -[SCMultiSnapStateHandlerImpl globalState] */

undefined8 FUN_1080835e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 1080835e8; end: 1080836ab; -[SCMultiSnapStateHandlerImpl .cxx_destruct] */

void FUN_1080835e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1080836ac; end: 1080839db;  */

void FUN_1080836ac(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126d4db8;
  _objc_opt_new(PTR_PTR_1126d4db8);
  uVar2 = param_1;
  FUN_1080839dc(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20bd80(puVar1);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bfaee40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19c960(puVar1);
  _objc_release(uVar2);
  uVar2 = param_1;
  FUN_108083c88(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16cd00(puVar1);
  _objc_release(uVar2);
  uVar2 = param_1;
  FUN_108083dfc(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c178ce0(puVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126c3d88;
  _objc_alloc(PTR_PTR_1126c3d88);
  uVar2 = param_1;
  func_0x00010bf8a020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf89f60(param_1);
  func_0x00010c00e5c0(puVar3);
  func_0x00010c1919a0(puVar1);
  _objc_release(puVar3);
  _objc_release(uVar2);
  func_0x00010bf0f0e0(param_1);
  func_0x00010c16bc20(puVar1);
  uVar2 = param_1;
  func_0x00010bf0f140(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16bca0(puVar1);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf0d660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2039e0(puVar1);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf5c9c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c063d20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c072080();
  if ((int)uVar5 == 0) {
    uVar5 = param_1;
    func_0x00010bf5c9c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c186260(puVar1);
    _objc_release(uVar5);
  }
  else {
    func_0x00010c186260(puVar1);
  }
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c0d36c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ca160(puVar1);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf16100(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16f3c0(puVar1);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c09a760(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1be3a0(puVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c1115c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e1ea0(puVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1080839dc; end: 108083c87;  */

void FUN_1080839dc(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *unaff_x22;
  ulong uVar8;
  long lVar9;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = param_1;
  func_0x00010c07c760();
  if ((int)puVar1 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    puVar2 = param_1;
    puStack_168 = puVar1;
    func_0x00010c2553e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010bf52a60();
    if (puVar1 != (undefined *)0x0) {
      lVar9 = *plStack_120;
      do {
        unaff_x22 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(puVar2);
          }
          uVar8 = *(ulong *)(lStack_128 + (long)unaff_x22 * 8);
          uVar3 = uVar8;
          func_0x00010c263180();
          if ((uVar3 == 0) || (uVar3 = uVar8, func_0x00010c263180(), (uVar3 & (ulong)param_2) != 0))
          {
            uVar3 = uVar8;
            func_0x00010c081660();
            if ((int)uVar3 != 0) {
              if (param_1 == (undefined *)0x0) {
                uStack_148 = 0;
                uStack_140 = 0;
                uStack_138 = 0;
              }
              else {
                func_0x00010c26f040(&uStack_148,param_1);
              }
              uStack_158 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
              uStack_160 = *(undefined8 *)PTR__kCMTimeZero_110348670;
              uStack_150 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
              puVar4 = &uStack_148;
              _CMTimeCompare(puVar4,&uStack_160);
              if ((int)puVar4 != 0) {
                func_0x00010c2790e0(uVar8);
                _objc_retainAutoreleasedReturnValue();
                if (param_1 == (undefined *)0x0) {
                  uStack_148 = 0;
                  uStack_140 = 0;
                  uStack_138 = 0;
                }
                else {
                  func_0x00010c26f040(&uStack_148,param_1);
                }
                uVar3 = uVar8;
                func_0x000108cfa1e0(uVar8,&uStack_148);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar8);
                puVar5 = PTR_PTR_1126d4dd0;
                func_0x00010c255040(PTR_PTR_1126d4dd0);
                _objc_retainAutoreleasedReturnValue();
                puVar6 = puVar5;
                func_0x00010c2bbb60();
                _objc_retainAutoreleasedReturnValue();
                puVar7 = puVar6;
                func_0x00010bf21f60();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar6);
                _objc_release(puVar5);
                func_0x00010befa120(puStack_168);
                _objc_release(puVar7);
                _objc_release(uVar3);
                goto LAB_108083bf8;
              }
            }
            func_0x00010befa120(puStack_168);
          }
LAB_108083bf8:
          unaff_x22 = unaff_x22 + 1;
        } while (puVar1 != unaff_x22);
        puVar1 = puVar2;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined *)0x0);
    }
    _objc_release(puVar2);
    param_2 = puStack_168;
    puVar1 = puStack_168;
    func_0x00010bf51e00();
    _objc_release(param_2);
  }
  else {
    puVar1 = param_1;
    func_0x00010c2553e0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_178 = FUN_108083c88;
    puStack_1a0 = unaff_x22;
    puStack_198 = param_2;
    puStack_190 = puVar1;
    puStack_188 = param_1;
    puStack_180 = &stack0xfffffffffffffff0;
    _objc_retain();
    puVar5 = puVar2;
    func_0x00010bf11400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar1 = (undefined *)0x0;
    if (puVar5 != (undefined *)0x0) {
      puVar5 = puVar2;
      func_0x00010c07c760();
      puVar1 = puVar2;
      if ((int)puVar5 == 0) {
        if (puVar2 == (undefined *)0x0) {
          uStack_1b8 = 0;
          uStack_1b0 = 0;
          uStack_1a8 = 0;
        }
        else {
          func_0x00010c26f040(&uStack_1b8,puVar2);
        }
        uStack_1c8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
        uStack_1d0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
        uStack_1c0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
        puVar4 = &uStack_1b8;
        _CMTimeCompare(puVar4,&uStack_1d0);
        func_0x00010bf11400(puVar2);
        _objc_retainAutoreleasedReturnValue();
        if ((int)puVar4 != 0) {
          puVar5 = puVar1;
          func_0x00010c0fb820(puVar1);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(puVar2);
          puVar6 = puVar5;
          func_0x00010c0b8600(puVar5);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          _objc_release(puVar1);
          puVar1 = PTR_PTR_1126bced0;
          _objc_alloc(PTR_PTR_1126bced0);
          func_0x00010c035e80();
          _objc_release(puVar6);
          _objc_release(puVar2);
        }
      }
      else {
        func_0x00010bf11400(puVar2);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108083c88; end: 108083dfb;  */

void FUN_108083c88(undefined *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010bf11400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = (undefined *)0x0;
  if (puVar1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c07c760();
    puVar3 = param_1;
    if ((int)puVar1 == 0) {
      if (param_1 == (undefined *)0x0) {
        uStack_48 = 0;
        uStack_40 = 0;
        uStack_38 = 0;
      }
      else {
        func_0x00010c26f040(&uStack_48,param_1);
      }
      uStack_58 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      uStack_60 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uStack_50 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      puVar2 = &uStack_48;
      _CMTimeCompare(puVar2,&uStack_60);
      func_0x00010bf11400(param_1);
      _objc_retainAutoreleasedReturnValue();
      if ((int)puVar2 != 0) {
        puVar1 = puVar3;
        func_0x00010c0fb820(puVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_1);
        puVar4 = puVar1;
        func_0x00010c0b8600(puVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        _objc_release(puVar3);
        puVar3 = PTR_PTR_1126bced0;
        _objc_alloc(PTR_PTR_1126bced0);
        func_0x00010c035e80();
        _objc_release(puVar4);
        _objc_release(param_1);
      }
    }
    else {
      func_0x00010bf11400(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108083dfc; end: 108084047;  */

undefined *
FUN_108083dfc(double param_1,double param_2,undefined *param_3,undefined8 param_4,
             undefined8 *param_5,undefined1 *param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  double dVar22;
  double dVar23;
  double dStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
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
  _objc_retain();
  puVar19 = param_3;
  func_0x00010c07c760();
  if ((int)puVar19 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0.0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    puVar2 = param_3;
    func_0x00010bf308c0();
    _objc_retainAutoreleasedReturnValue();
    param_5 = &uStack_130;
    param_6 = auStack_f0;
    param_7 = 0x10;
    puVar3 = puVar2;
    func_0x00010bf52a60();
    puVar19 = PTR__kCMTimeZero_110348670;
    if (puVar3 != (undefined *)0x0) {
      lVar21 = *plStack_120;
      do {
        puVar17 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar21) {
            _objc_enumerationMutation(puVar2);
          }
          uVar16 = *(undefined8 *)(lStack_128 + (long)puVar17 * 8);
          uVar9 = uVar16;
          func_0x00010c081660();
          if ((int)uVar9 == 0) {
LAB_108083f5c:
            func_0x00010befa120(puVar1);
          }
          else {
            if (param_3 == (undefined *)0x0) {
              uStack_148 = 0;
              uStack_140 = 0;
              uStack_138 = 0;
            }
            else {
              func_0x00010c26f040(&uStack_148,param_3);
            }
            uStack_158 = *(undefined8 *)(puVar19 + 8);
            param_1 = *(double *)puVar19;
            uStack_150 = *(undefined8 *)(puVar19 + 0x10);
            puVar4 = &uStack_148;
            dStack_160 = param_1;
            _CMTimeCompare(puVar4,&dStack_160);
            if ((int)puVar4 == 0) goto LAB_108083f5c;
            uVar9 = uVar16;
            func_0x00010bf52240();
            func_0x00010c2790e0();
            _objc_retainAutoreleasedReturnValue();
            if (param_3 == (undefined *)0x0) {
              uStack_148 = 0;
              uStack_140 = 0;
              uStack_138 = 0;
            }
            else {
              func_0x00010c26f040(&uStack_148,param_3);
            }
            uVar5 = uVar16;
            func_0x000108cfa1e0(uVar16,&uStack_148);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c219440(uVar9);
            _objc_release(uVar5);
            _objc_release(uVar16);
            func_0x00010befa120(puVar1);
            _objc_release(uVar9);
          }
          puVar17 = puVar17 + 1;
        } while (puVar3 != puVar17);
        param_5 = &uStack_130;
        param_6 = auStack_f0;
        param_7 = 0x10;
        puVar3 = puVar2;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined *)0x0);
    }
    _objc_release(puVar2);
    puVar19 = puVar1;
    func_0x00010bf51e00();
    _objc_release(puVar1);
  }
  else {
    puVar19 = param_3;
    func_0x00010bf308c0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    dVar23 = param_2;
    _objc_retain();
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_7);
    puVar1 = PTR_PTR_1126d90e8;
    _objc_opt_new();
    puVar2 = param_3;
    FUN_1080839dc(param_3,1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar2);
    puVar19 = puVar2;
    func_0x00010bf52a60();
    lVar21 = lRam0000000000000000;
    while (puVar19 != (undefined *)0x0) {
      puVar17 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar21) {
          _objc_enumerationMutation(puVar2);
        }
        lVar14 = *(long *)((long)puVar17 * 8);
        lVar6 = param_7;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar15 = lVar6;
        func_0x00010c06f760();
        _objc_release(lVar6);
        if ((int)lVar15 == 0) {
          FUN_10808a784(lVar14);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          lVar6 = param_7;
          func_0x00010c269d40(param_7);
          _objc_retainAutoreleasedReturnValue();
          lVar14 = lVar6;
          func_0x00010c2465a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar6);
        }
        func_0x00010c14c720(puVar3);
        _objc_release(lVar14);
        puVar17 = puVar17 + 1;
      } while (puVar19 != puVar17);
      puVar19 = puVar2;
      func_0x00010bf52a60();
    }
    _objc_release(puVar2);
    func_0x00010c20bc80(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar19 = param_3;
    func_0x00010bfaee40();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar19;
    func_0x00010c23ec00();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = (undefined *)0x0;
    puVar7 = puVar13;
    FUN_1080875a8();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c0d3c80();
    _objc_release(puVar7);
    _objc_release(puVar13);
    _objc_release(puVar19);
    _objc_retain(puVar2);
    puVar19 = puVar2;
    func_0x00010bf52a60();
    lVar21 = lRam0000000000000000;
    while (puVar19 != (undefined *)0x0) {
      puVar13 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar21) {
          _objc_enumerationMutation(puVar2);
        }
        lVar15 = *(long *)((long)puVar13 * 8);
        lVar6 = lVar15;
        func_0x00010c0846e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar6 != 0) {
          lVar6 = param_7;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0846e0(lVar15);
          _objc_retainAutoreleasedReturnValue();
          lVar14 = lVar6;
          func_0x00010c246520();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar15);
          _objc_release(lVar6);
          if (lVar14 != 0) {
            _objc_retain(lVar14);
            puVar7 = puVar8;
            func_0x00010bfece40();
            if (puVar7 == (undefined *)0x7fffffffffffffff) {
              func_0x00010befa120(puVar8);
            }
            _objc_release(lVar14);
          }
          _objc_release(lVar14);
        }
        puVar13 = puVar13 + 1;
      } while (puVar19 != puVar13);
      puVar19 = puVar2;
      func_0x00010bf52a60();
    }
    _objc_release(puVar2);
    func_0x00010c1ac440(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    dVar22 = 0.0;
    puVar7 = param_3;
    FUN_108083dfc();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar7;
    func_0x00010bf52a60();
    lVar21 = lRam0000000000000000;
    while (puVar19 != (undefined *)0x0) {
      puVar18 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar21) {
          _objc_enumerationMutation(puVar7);
        }
        uVar9 = *(undefined8 *)((long)puVar18 * 8);
        func_0x000108e258d0(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14c720(puVar13);
        _objc_release(uVar9);
        puVar18 = puVar18 + 1;
      } while (puVar19 != puVar18);
      puVar19 = puVar7;
      func_0x00010bf52a60();
    }
    _objc_release(puVar7);
    func_0x00010c178c80(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar19 = param_3;
    func_0x00010bf8a020();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar19;
    func_0x00010bf529e0();
    _objc_release(puVar19);
    if (puVar7 != (undefined *)0x0) {
      puVar19 = param_3;
      func_0x00010bf8a020(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120();
      dVar23 = param_2 * (1.0 / dVar22);
      puVar18 = puVar19;
      func_0x000108cff3bc(param_1 * (1.0 / dVar22),dVar23,puVar19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c191a20(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar18);
      _objc_release(puVar7);
      _objc_release(puVar19);
      puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = param_3;
      func_0x00010bf8a020();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar18;
      func_0x00010bf52a60();
      lVar21 = lRam0000000000000000;
      while (puVar19 != (undefined *)0x0) {
        puVar20 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar21) {
            _objc_enumerationMutation(puVar18);
          }
          puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c280560(*(undefined8 *)((long)puVar20 * 8));
          func_0x00010c0df780(puVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar7);
          _objc_release(puVar10);
          puVar20 = puVar20 + 1;
        } while (puVar19 != puVar20);
        puVar19 = puVar18;
        func_0x00010bf52a60();
      }
      _objc_release(puVar18);
      func_0x00010c191a00(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar7);
    }
    puVar19 = param_3;
    func_0x00010bfaee40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar19;
    func_0x00010bfc1460();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar7;
    func_0x00010bf529e0();
    _objc_release(puVar7);
    _objc_release(puVar19);
    if (puVar18 != (undefined *)0x0) {
      puVar19 = param_3;
      func_0x00010bfaee40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar19;
      func_0x00010bfc1460();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = param_3;
      func_0x00010bfaee40(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar18;
      func_0x00010bf4e4e0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar7;
      puVar17 = puVar20;
      FUN_108089244(puVar7,puVar20,0,param_5,param_6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar20);
      _objc_release(puVar18);
      _objc_release(puVar7);
      _objc_release(puVar19);
      func_0x00010c1a2c80(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar7 = puVar10;
      func_0x00010bf529e0();
      puVar19 = param_3;
      func_0x00010bfaee40();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar19;
      func_0x00010bfc1460();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar18;
      func_0x00010bf529e0();
      _objc_release(puVar18);
      _objc_release(puVar19);
      puVar19 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      if (puVar7 != puVar20) {
        puVar7 = param_3;
        func_0x00010bfaee40(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar18 = puVar7;
        func_0x00010bfc1460();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c225c20(puVar19);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar18);
        _objc_release(puVar7);
        puVar7 = PTR__OBJC_CLASS___NSSet_1126ae870;
        func_0x00010c225c20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0ce860(puVar19);
        _objc_release(puVar7);
        _objc_release(puVar19);
      }
      _objc_release(puVar10);
    }
    puVar19 = param_3;
    func_0x00010bfaee40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar19;
    func_0x00010c082fa0();
    _objc_release(puVar19);
    if ((int)puVar7 != 0) {
      puVar19 = param_3;
      func_0x00010bfaee40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar19;
      func_0x00010c297ce0();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar7;
      FUN_1080870f0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220800(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar18);
      _objc_release(puVar7);
      _objc_release(puVar19);
    }
    puVar19 = param_3;
    func_0x00010bfaee40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar19;
    func_0x00010c25bfa0();
    _objc_release(puVar19);
    if ((int)puVar7 != 0) {
      puVar7 = PTR_PTR_1126d90f0;
      _objc_alloc(PTR_PTR_1126d90f0);
      puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar18 = param_3;
      func_0x00010bfaee40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25be80();
      func_0x00010c0df780(puVar19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e440(puVar7);
      func_0x00010c20e320(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar19);
      _objc_release(puVar18);
    }
    puVar19 = param_3;
    func_0x00010bf11400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar19 != (undefined *)0x0) {
      puVar19 = param_3;
      FUN_108083c88();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar19;
      func_0x00010c0fb820();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar7;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar19);
      dVar22 = 0.0;
      puVar19 = param_3;
      func_0x00010bf11400();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar19;
      func_0x00010c0fb820();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar7;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar20;
      func_0x00010c27a600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar20);
      _objc_release(puVar7);
      _objc_release(puVar19);
      puVar7 = puVar10;
      func_0x00010bf52a60();
      lVar21 = lRam0000000000000000;
      puVar19 = (undefined *)0x0;
      if (puVar7 != (undefined *)0x0) {
        do {
          puVar19 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar21) {
              _objc_enumerationMutation(puVar10);
            }
            uVar9 = *(undefined8 *)((long)puVar19 * 8);
            func_0x00010c27a460();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c14e120();
            if (2.220446049250313e-16 < dVar22) {
              puVar11 = PTR_PTR_1126c3fe0;
              _objc_alloc(PTR_PTR_1126c3fe0);
              puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c27ada0(uVar9);
              func_0x00010c0df720(puVar19);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c27ada0(uVar9);
              func_0x00010c0df720(dVar23,puVar7);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c063600(puVar11);
              _objc_release(puVar7);
              _objc_release(puVar19);
              puVar19 = PTR_PTR_1126c3fe8;
              _objc_alloc();
              puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c14e120(uVar9);
              func_0x00010c0df720(puVar7);
              _objc_retainAutoreleasedReturnValue();
              puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c141a80(uVar9);
              func_0x00010c0df720(puVar20);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c055500(puVar19);
              _objc_release(puVar20);
              _objc_release(puVar7);
              _objc_release(puVar11);
              _objc_release(uVar9);
              goto LAB_108084c14;
            }
            _objc_release(uVar9);
            puVar19 = puVar19 + 1;
          } while (puVar7 != puVar19);
          puVar7 = puVar10;
          func_0x00010bf52a60();
        } while (puVar7 != (undefined *)0x0);
        puVar19 = (undefined *)0x0;
      }
LAB_108084c14:
      _objc_release(puVar10);
      puVar7 = PTR_PTR_1126d9100;
      _objc_alloc();
      func_0x00010c0553a0();
      func_0x00010c16cc80(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar19);
      _objc_release(puVar18);
    }
    puVar19 = puVar1;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    _objc_release(puVar8);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
      ___stack_chk_fail();
      func_0x00010c27dd80(puVar17);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_3 + 0x20);
      func_0x00010c27dd80(uVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar17;
      func_0x00010c0720c0(puVar17);
      _objc_release(uVar9);
      _objc_release(puVar17);
      return puVar19;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
  return puVar19;
}



/* Entry: 108084048; end: 108084d07;  */

undefined *
FUN_108084048(double param_1,double param_2,undefined *param_3,undefined8 param_4,undefined8 param_5
             ,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  double dVar19;
  double dVar20;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar20 = param_2;
  _objc_retain();
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar2 = PTR_PTR_1126d90e8;
  _objc_opt_new();
  puVar3 = param_3;
  FUN_1080839dc(param_3,1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar3);
  puVar17 = puVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar17 != (undefined *)0x0) {
    puVar15 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar3);
      }
      lVar13 = *(long *)((long)puVar15 * 8);
      lVar5 = param_7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar5;
      func_0x00010c06f760();
      _objc_release(lVar5);
      if ((int)lVar14 == 0) {
        FUN_10808a784(lVar13);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        lVar5 = param_7;
        func_0x00010c269d40(param_7);
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar5;
        func_0x00010c2465a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
      }
      func_0x00010c14c720(puVar4);
      _objc_release(lVar13);
      puVar15 = puVar15 + 1;
    } while (puVar17 != puVar15);
    puVar17 = puVar3;
    func_0x00010bf52a60();
  }
  _objc_release(puVar3);
  func_0x00010c20bc80(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar17 = param_3;
  func_0x00010bfaee40();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar17;
  func_0x00010c23ec00();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = (undefined *)0x0;
  puVar6 = puVar12;
  FUN_1080875a8();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c0d3c80();
  _objc_release(puVar6);
  _objc_release(puVar12);
  _objc_release(puVar17);
  _objc_retain(puVar3);
  puVar17 = puVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar17 != (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar3);
      }
      lVar14 = *(long *)((long)puVar12 * 8);
      lVar5 = lVar14;
      func_0x00010c0846e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar5 != 0) {
        lVar5 = param_7;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0846e0(lVar14);
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar5;
        func_0x00010c246520();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar14);
        _objc_release(lVar5);
        if (lVar13 != 0) {
          _objc_retain(lVar13);
          puVar6 = puVar7;
          func_0x00010bfece40();
          if (puVar6 == (undefined *)0x7fffffffffffffff) {
            func_0x00010befa120(puVar7);
          }
          _objc_release(lVar13);
        }
        _objc_release(lVar13);
      }
      puVar12 = puVar12 + 1;
    } while (puVar17 != puVar12);
    puVar17 = puVar3;
    func_0x00010bf52a60();
  }
  _objc_release(puVar3);
  func_0x00010c1ac440(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  dVar19 = 0.0;
  puVar6 = param_3;
  FUN_108083dfc();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar17 != (undefined *)0x0) {
    puVar16 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar6);
      }
      uVar8 = *(undefined8 *)((long)puVar16 * 8);
      func_0x000108e258d0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14c720(puVar12);
      _objc_release(uVar8);
      puVar16 = puVar16 + 1;
    } while (puVar17 != puVar16);
    puVar17 = puVar6;
    func_0x00010bf52a60();
  }
  _objc_release(puVar6);
  func_0x00010c178c80(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar17 = param_3;
  func_0x00010bf8a020();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar17;
  func_0x00010bf529e0();
  _objc_release(puVar17);
  if (puVar6 != (undefined *)0x0) {
    puVar17 = param_3;
    func_0x00010bf8a020(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    dVar20 = param_2 * (1.0 / dVar19);
    puVar16 = puVar17;
    func_0x000108cff3bc(param_1 * (1.0 / dVar19),dVar20,puVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c191a20(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar16);
    _objc_release(puVar6);
    _objc_release(puVar17);
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = param_3;
    func_0x00010bf8a020();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar17 != (undefined *)0x0) {
      puVar18 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar16);
        }
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c280560(*(undefined8 *)((long)puVar18 * 8));
        func_0x00010c0df780(puVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar6);
        _objc_release(puVar9);
        puVar18 = puVar18 + 1;
      } while (puVar17 != puVar18);
      puVar17 = puVar16;
      func_0x00010bf52a60();
    }
    _objc_release(puVar16);
    func_0x00010c191a00(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
  puVar17 = param_3;
  func_0x00010bfaee40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar17;
  func_0x00010bfc1460();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar6;
  func_0x00010bf529e0();
  _objc_release(puVar6);
  _objc_release(puVar17);
  if (puVar16 != (undefined *)0x0) {
    puVar17 = param_3;
    func_0x00010bfaee40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar17;
    func_0x00010bfc1460();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = param_3;
    func_0x00010bfaee40(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar16;
    func_0x00010bf4e4e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    puVar15 = puVar18;
    FUN_108089244(puVar6,puVar18,0,param_5,param_6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar18);
    _objc_release(puVar16);
    _objc_release(puVar6);
    _objc_release(puVar17);
    func_0x00010c1a2c80(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar6 = puVar9;
    func_0x00010bf529e0();
    puVar17 = param_3;
    func_0x00010bfaee40();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar17;
    func_0x00010bfc1460();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar16;
    func_0x00010bf529e0();
    _objc_release(puVar16);
    _objc_release(puVar17);
    puVar17 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    if (puVar6 != puVar18) {
      puVar6 = param_3;
      func_0x00010bfaee40(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar6;
      func_0x00010bfc1460();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c225c20(puVar17);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar16);
      _objc_release(puVar6);
      puVar6 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c225c20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ce860(puVar17);
      _objc_release(puVar6);
      _objc_release(puVar17);
    }
    _objc_release(puVar9);
  }
  puVar17 = param_3;
  func_0x00010bfaee40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar17;
  func_0x00010c082fa0();
  _objc_release(puVar17);
  if ((int)puVar6 != 0) {
    puVar17 = param_3;
    func_0x00010bfaee40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar17;
    func_0x00010c297ce0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar6;
    FUN_1080870f0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220800(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar16);
    _objc_release(puVar6);
    _objc_release(puVar17);
  }
  puVar17 = param_3;
  func_0x00010bfaee40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar17;
  func_0x00010c25bfa0();
  _objc_release(puVar17);
  if ((int)puVar6 != 0) {
    puVar6 = PTR_PTR_1126d90f0;
    _objc_alloc(PTR_PTR_1126d90f0);
    puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar16 = param_3;
    func_0x00010bfaee40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25be80();
    func_0x00010c0df780(puVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e440(puVar6);
    func_0x00010c20e320(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar17);
    _objc_release(puVar16);
  }
  puVar17 = param_3;
  func_0x00010bf11400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar17 != (undefined *)0x0) {
    puVar17 = param_3;
    FUN_108083c88();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar17;
    func_0x00010c0fb820();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar6;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar17);
    dVar19 = 0.0;
    puVar17 = param_3;
    func_0x00010bf11400();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar17;
    func_0x00010c0fb820();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar18;
    func_0x00010c27a600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar18);
    _objc_release(puVar6);
    _objc_release(puVar17);
    puVar6 = puVar9;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    puVar17 = (undefined *)0x0;
    if (puVar6 != (undefined *)0x0) {
      do {
        puVar17 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar9);
          }
          uVar8 = *(undefined8 *)((long)puVar17 * 8);
          func_0x00010c27a460();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14e120();
          if (2.220446049250313e-16 < dVar19) {
            puVar10 = PTR_PTR_1126c3fe0;
            _objc_alloc(PTR_PTR_1126c3fe0);
            puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c27ada0(uVar8);
            func_0x00010c0df720(puVar17);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c27ada0(uVar8);
            func_0x00010c0df720(dVar20,puVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c063600(puVar10);
            _objc_release(puVar6);
            _objc_release(puVar17);
            puVar17 = PTR_PTR_1126c3fe8;
            _objc_alloc();
            puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c14e120(uVar8);
            func_0x00010c0df720(puVar6);
            _objc_retainAutoreleasedReturnValue();
            puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c141a80(uVar8);
            func_0x00010c0df720(puVar18);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c055500(puVar17);
            _objc_release(puVar18);
            _objc_release(puVar6);
            _objc_release(puVar10);
            _objc_release(uVar8);
            goto LAB_108084c14;
          }
          _objc_release(uVar8);
          puVar17 = puVar17 + 1;
        } while (puVar6 != puVar17);
        puVar6 = puVar9;
        func_0x00010bf52a60();
      } while (puVar6 != (undefined *)0x0);
      puVar17 = (undefined *)0x0;
    }
LAB_108084c14:
    _objc_release(puVar9);
    puVar6 = PTR_PTR_1126d9100;
    _objc_alloc();
    func_0x00010c0553a0();
    func_0x00010c16cc80(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar17);
    _objc_release(puVar16);
  }
  puVar17 = puVar2;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
    return puVar17;
  }
  ___stack_chk_fail();
  func_0x00010c27dd80(puVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c27dd80(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar15;
  func_0x00010c0720c0(puVar15);
  _objc_release(uVar8);
  _objc_release(puVar15);
  return puVar17;
}



/* Entry: 108084d08; end: 108084d77;  */

undefined8 FUN_108084d08(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c27dd80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c27dd80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 108084d78; end: 108084fe7;  */

void FUN_108084d78(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c27a600();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  lVar3 = lVar1;
  if (lVar2 == 3) {
    lVar2 = lVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
    }
    else {
      func_0x00010c26f000(&uStack_68,lVar2);
    }
    _CMTimeGetSeconds(&uStack_68);
    uVar8 = param_1;
    _objc_release(lVar2);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
LAB_108084ec4:
    if (lVar3 == 0) {
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
    }
    else {
      func_0x00010c26f000(&uStack_68,lVar3);
    }
    _CMTimeGetSeconds(&uStack_68);
  }
  else {
    lVar2 = lVar1;
    func_0x00010bf529e0();
    if (lVar2 == 2) {
      lVar2 = lVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
      }
      else {
        func_0x00010c26f000(&uStack_68,lVar2);
      }
      _CMTimeGetSeconds(&uStack_68);
      uVar8 = param_1;
      _objc_release(lVar2);
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108084ec4;
    }
    lVar2 = lVar1;
    func_0x00010bf529e0();
    uVar8 = 0xbff0000000000000;
    uVar7 = 0xbff0000000000000;
    if (lVar2 != 1) goto LAB_108084ef8;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
    }
    else {
      func_0x00010c26f000(&uStack_68,lVar3);
    }
    _CMTimeGetSeconds(&uStack_68);
    uVar8 = 0;
  }
  _objc_release(lVar3);
  uVar7 = param_1;
LAB_108084ef8:
  puVar4 = PTR_PTR_1126d90f8;
  _objc_alloc(PTR_PTR_1126d90f8);
  lVar2 = param_3;
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c155420(uVar7,PTR_PTR_1126afec0);
  func_0x00010c0df720(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c155420(uVar8,PTR_PTR_1126afec0);
  func_0x00010c0df720(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051620(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108084fe8; end: 1080850cf;  */

void FUN_108084fe8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_PTR_1126bcec8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c26b700(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c27a600(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  if (*(long *)(param_1 + 0x20) == 0) {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
  }
  else {
    func_0x00010c26f040(&uStack_58);
  }
  uVar4 = uVar3;
  func_0x000108cfa1e0(uVar3,&uStack_58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051760(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1080850d0; end: 108085143; -[SCMultiSnapUCOFilterConfigurator initWithLocalStates:] */

undefined1 * FUN_1080850d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc488;
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



/* Entry: 108085144; end: 1080852b3; -[SCMultiSnapUCOFilterConfigurator configureEphemeralMedias:configuration:timeRanges:multiSnapDrawingCache:] */

void FUN_108085144(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  char *pcStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_70 = &uStack_78;
  uStack_78 = 0;
  uStack_68 = 0x3810000000;
  pcStack_60 = "";
  uStack_50 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_58 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_48 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010be46300(param_1);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_5);
  __Block_object_dispose(&uStack_78,8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1080852b4; end: 10808559b;  */

void FUN_1080852b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar7 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x00010bdc1120(&uStack_80,lVar7);
  }
  uStack_c8 = uStack_60;
  uStack_d0 = uStack_68;
  uStack_c0 = uStack_58;
  _objc_release(lVar7);
  lVar7 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  uStack_78 = *(undefined8 *)(lVar7 + 0x28);
  uStack_80 = *(undefined8 *)(lVar7 + 0x20);
  uStack_70 = *(undefined8 *)(lVar7 + 0x30);
  _CMTimeAdd(&uStack_98,&uStack_80,&uStack_d0);
  lVar7 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  *(undefined8 *)(lVar7 + 0x28) = uStack_90;
  *(undefined8 *)(lVar7 + 0x20) = uStack_98;
  *(undefined8 *)(lVar7 + 0x30) = uStack_88;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0dfd40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(param_1 + 0x20);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x00010bdc1120(&uStack_80,lVar7);
  }
  _objc_release(lVar7);
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  func_0x00010bde5000(*(undefined8 *)(param_1 + 0x30));
  uVar2 = uVar1;
  func_0x00010bf42a00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf429e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  func_0x00010c286840(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bf42a00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x40);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar4;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) {
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
  }
  else {
    func_0x00010c27c900(&uStack_d0,lVar7);
  }
  lVar5 = *(long *)(param_1 + 0x40);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
  }
  else {
    func_0x00010c26f620(&uStack_100,lVar6);
  }
  _CMTimeRangeEqual(&uStack_d0,&uStack_100);
  func_0x00010c2bbc80(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar7);
  _objc_release(lVar4);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bf42a00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b4260();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 10808559c; end: 10808574f; -[SCMultiSnapUCOFilterConfigurator _iterateStatesWithTimeRanges:dataProcessBlock:] */

void FUN_10808559c(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar5 = param_3;
  func_0x00010bf529e0();
  if (uVar5 != 0) {
    uVar5 = 0;
    uVar6 = 0;
    do {
      uVar1 = *(ulong *)(param_1 + 8);
      func_0x00010bf529e0();
      if (uVar1 <= uVar6) break;
      uVar1 = param_3;
      func_0x00010bf529e0();
      for (; uVar5 < uVar1; uVar5 = uVar5 + 1) {
        uVar1 = *(ulong *)(param_1 + 8);
        func_0x00010bf529e0();
        if (uVar6 + 1 != uVar1) {
          lVar2 = *(long *)(param_1 + 8);
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          if (lVar2 == 0) {
            uStack_78 = 0;
            uStack_70 = 0;
            uStack_68 = 0;
          }
          else {
            func_0x00010c26f040(&uStack_78,lVar2);
          }
          uVar1 = param_3;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          if (uVar1 == 0) {
            uStack_98 = 0;
            uStack_a0 = 0;
            uStack_88 = 0;
            uStack_90 = 0;
            uStack_a8 = 0;
            uStack_b0 = 0;
          }
          else {
            func_0x00010bdc1120(&uStack_b0,uVar1);
          }
          uStack_c8 = uStack_a8;
          uStack_d0 = uStack_b0;
          uStack_c0 = uStack_a0;
          puVar3 = &uStack_78;
          _CMTimeCompare(puVar3,&uStack_d0);
          _objc_release(uVar1);
          _objc_release(lVar2);
          if ((int)puVar3 < 1) break;
        }
        uVar4 = *(undefined8 *)(param_1 + 8);
        func_0x00010c0dfd40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(param_4 + 0x10))(param_4,uVar4,uVar6,uVar5);
        _objc_release(uVar4);
        uVar1 = param_3;
        func_0x00010bf529e0();
      }
      uVar1 = param_3;
      func_0x00010bf529e0();
      uVar6 = uVar6 + 1;
    } while (uVar5 < uVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108085750; end: 1080858db; -[SCMultiSnapUCOFilterConfigurator _configureEphemeralMedia:withEditingState:index:timeRange:multiSnapDrawingCache:] */

void FUN_108085750(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_58 = param_6[1];
  uStack_60 = *param_6;
  uStack_50 = param_6[2];
  _objc_retain(param_7);
  func_0x00010c214c20(param_4,param_2,&uStack_60);
  uVar2 = param_3;
  func_0x00010c27dd80();
  if ((0x1a < uVar2) || ((1L << (uVar2 & 0x3f) & 0x7e7fc60U) == 0)) {
    lVar3 = param_4;
    func_0x00010bf0f0e0();
    uVar1 = 1;
    if ((int)lVar3 == 0) {
      uVar1 = 2;
    }
    func_0x00010c21acc0(param_3,param_2,uVar1);
  }
  lVar3 = param_4;
  func_0x00010bf0d660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = param_4;
    func_0x00010bf0d660(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b3c0(param_3,param_2,lVar3);
    _objc_release(lVar3);
    lVar3 = param_4;
    func_0x00010bf0d660(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0c3fe0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b3c0();
    _objc_release(uVar2);
    _objc_release(lVar3);
  }
  uVar2 = param_3;
  func_0x00010c29a0c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde5a20(param_1,param_2,uVar2,param_4,param_7);
  _objc_release(param_7);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1080858dc; end: 108085a3b; -[SCMultiSnapUCOFilterConfigurator _configureSnapVideoFilter:forState:multiSnapDrawingCache:] */

void FUN_1080858dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bfaee40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf69ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_4;
    func_0x00010bfaee40(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf69ac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bb2a0(param_3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  func_0x00010bf0f0e0(param_4);
  func_0x00010c16bc20(param_3);
  lVar1 = param_4;
  func_0x00010bf0f140();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010c16c440(param_3);
  }
  else {
    puVar3 = PTR_PTR_1126d7d50;
    _objc_alloc(PTR_PTR_1126d7d50);
    lVar2 = param_4;
    func_0x00010bf0f140(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b057030(puVar3,lVar2);
    func_0x00010c16c440(param_3);
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  func_0x00010c222080(0,param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108085a3c; end: 108085a47; -[SCMultiSnapUCOFilterConfigurator .cxx_destruct] */

void FUN_108085a3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108085a48; end: 108085abb; -[SCPreviewFeatureAutoCaptionsServices initWithAutoCaptions:] */

undefined1 * FUN_108085a48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc490;
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



/* Entry: 108085abc; end: 108085ac3; -[SCPreviewFeatureAutoCaptionsServices autoCaptions] */

undefined8 FUN_108085abc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


