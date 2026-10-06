/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107e4fda8; end: 107e4ffc3; -[SCTimelineSnapStateHandler didChangeTrackingCaption:atIndex:] */

void FUN_107e4fda8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0xd8);
  func_0x00010bf308c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0xd8);
    func_0x00010bf308c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = puVar1;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_107e4ffc4;
    puStack_60 = &UNK_110a0f5b0;
    _objc_retain(param_3);
    lVar2 = lVar3;
    lStack_58 = param_3;
    func_0x00010bfece40(lVar3,param_2,&puStack_78);
    _objc_release(lVar3);
    _objc_release(lStack_58);
    if (lVar2 != 0x7fffffffffffffff) {
      lVar2 = param_3;
      func_0x00010c252440(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = *(long *)(param_1 + 0xd8);
      func_0x00010bf308c0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d04c0();
      goto LAB_107e4ff94;
    }
  }
  func_0x00010be4f2a0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf308c0();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x107e4fffc;
  puStack_88 = &UNK_110a0f5b0;
  _objc_retain(param_3);
  lVar3 = lVar2;
  lStack_80 = param_3;
  func_0x00010bfece40(lVar2,param_2,&puStack_a0);
  _objc_release(lVar2);
  if (lVar3 == 0x7fffffffffffffff) {
    lVar2 = param_1;
    func_0x00010bf308c0(param_1);
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
    lVar3 = param_1;
    func_0x00010bf308c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d04c0();
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  lVar3 = lStack_80;
LAB_107e4ff94:
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e4ffc4; end: 107e50033;  */

bool FUN_107e4ffc4(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c280560(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c280560(lVar1);
  return param_2 == lVar1;
}



/* Entry: 107e50034; end: 107e500e3; -[SCTimelineSnapStateHandler didChangeAutoCaptionsState:] */

void FUN_107e50034(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107e500e4;
  puStack_40 = &UNK_110a0f580;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be24100(param_1,param_2,1);
  uVar2 = param_1;
  func_0x00010be4f340(param_1,param_2,1);
  func_0x00010bed74a0(param_1,param_2,&puStack_58,uVar1,uVar2);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107e500e4; end: 107e500ef;  */

void FUN_107e500e4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16cc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setAutoCaptions__112638d40,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e500f0; end: 107e5028f; -[SCTimelineSnapStateHandler didChangeStaticStickerView:] */

void FUN_107e500f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c253880();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010010fab4();
  uVar1 = uVar2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  lVar4 = *(long *)(param_1 + 0xd8);
  if (lVar4 != 0) {
    func_0x00010c2553e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    func_0x00010bf04920(lVar4);
    _objc_release(lVar4);
    func_0x00010c27dd80(uVar1);
    func_0x00010bfee0e0(uVar1);
    func_0x00010be442c0();
    _objc_release(param_3);
  }
  _objc_retain(uVar1);
  _objc_retain(param_3);
  func_0x00010be4f340(param_1);
  func_0x00010bed74a0(param_1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 107e50290; end: 107e502c7;  */

bool FUN_107e50290(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c280560(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c280560(lVar1);
  return param_2 == lVar1;
}



/* Entry: 107e502c8; end: 107e5050f;  */

void FUN_107e502c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c2553e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar7);
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
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = uVar5;
    func_0x00010c262ca0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c255080(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c720(uVar1);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e50510; end: 107e508db; -[SCTimelineSnapStateHandler didUpdateMetadataOfStickerView:atIndex:] */

void FUN_107e50510(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  lVar6 = *(long *)(param_1 + 0xd8);
  if (lVar6 == 0) {
    lVar4 = *(long *)(param_1 + 0xd0);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c2553e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    lVar3 = lVar6;
    func_0x00010bfece40();
    _objc_release(lVar6);
    lVar6 = param_3;
    func_0x00010c262ca0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    lVar5 = param_3;
    func_0x00010c255080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    if (lVar5 != 0) {
      lVar6 = lVar4;
      func_0x00010c2553e0(lVar4);
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0x7fffffffffffffff) {
        func_0x00010c14c720();
      }
      else {
        func_0x00010c1d04c0();
      }
      _objc_release(lVar6);
    }
    _objc_release(lVar5);
    _objc_release(param_3);
    goto LAB_107e5084c;
  }
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_107e508dc;
  uStack_60 = 0x107e508ec;
  _objc_retain(lVar6);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x2020000000;
  lStack_58 = lVar6;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar3 = lVar6;
  func_0x00010bfece40();
  _objc_release(lVar6);
  lStack_88 = lVar3;
  if (puStack_98[3] == 0x7fffffffffffffff) {
    lVar6 = *(long *)(param_1 + 0xd0);
    _objc_retain(param_3);
    func_0x00010bf97e80(lVar6);
    _objc_release(param_3);
    if (puStack_98[3] != 0x7fffffffffffffff) goto LAB_107e5066c;
  }
  else {
LAB_107e5066c:
    lVar3 = param_3;
    func_0x00010c262ca0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    lVar6 = param_3;
    func_0x00010c255080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (lVar6 != 0) {
      uVar2 = puStack_78[5];
      func_0x00010c2553e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d04c0();
      _objc_release(uVar2);
    }
    _objc_release(lVar6);
  }
  lVar3 = puStack_78[5];
  if ((lVar3 == *(long *)(param_1 + 0xd8)) && (puStack_98[3] != 0x7fffffffffffffff)) {
    func_0x00010c2553e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c081660();
    bVar1 = true;
  }
  else {
    bVar1 = false;
    lVar3 = param_1;
  }
  func_0x00010c1b1860(param_3);
  if (bVar1) {
    _objc_release(lVar6);
    _objc_release(lVar3);
  }
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_80,8);
  lVar4 = lStack_58;
LAB_107e5084c:
  _objc_release(lVar4);
  _objc_release(param_3);
  return;
}



/* Entry: 107e508dc; end: 107e508f3;  */

void FUN_107e508dc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107e508f4; end: 107e5092b;  */

bool FUN_107e508f4(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c280560(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c280560(lVar1);
  return param_2 == lVar1;
}



/* Entry: 107e5092c; end: 107e50a27;  */

void FUN_107e5092c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar1 = uVar2;
  func_0x00010bfece40();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar1;
  _objc_release(uVar2);
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) != 0x7fffffffffffffff) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = param_2;
    _objc_release(uVar2);
    *param_4 = 1;
  }
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e50a28; end: 107e50a97;  */

bool FUN_107e50a28(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c280560(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c280560(lVar1);
  return param_2 == lVar1;
}



/* Entry: 107e50a98; end: 107e50bd7; -[SCTimelineSnapStateHandler drawingView:addedStroke:] */

void FUN_107e50a98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
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
  uStack_50 = 0x107e50b6c;
  puStack_48 = &UNK_110a0f6d0;
  uStack_40 = param_4;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010be24100(param_1,param_2,0);
  uVar2 = param_1;
  func_0x00010be4f340(param_1,param_2,0);
  func_0x00010bed74a0(param_1,param_2,&puStack_60,uVar1,uVar2);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 107e50bd8; end: 107e50cab; -[SCTimelineSnapStateHandler drawingView:removedStroke:] */

void FUN_107e50bd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0xd8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010bf8a020();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf4b900();
    _objc_release(lVar1);
  }
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107e50cac;
  puStack_40 = &UNK_110a0f580;
  uStack_38 = param_4;
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be4f340(param_1,param_2,0);
  func_0x00010bed74a0(param_1,param_2,&puStack_58,lVar2,lVar1);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 107e50cac; end: 107e50ce7;  */

void FUN_107e50cac(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf8a020(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e50ce8; end: 107e50d7b; -[SCTimelineSnapStateHandler updateAvailableFiltersWithState:] */

void FUN_107e50ce8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0xd8) != 0) {
    func_0x00010c2839e0(*(long *)(param_1 + 0xd8),param_2,param_3);
  }
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107e50d7c;
  puStack_30 = &UNK_110a0f580;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bed2f60(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 107e50d7c; end: 107e50d87;  */

void FUN_107e50d7c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2839f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_updateAvailableFiltersWithState__11267e8a0,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e50d88; end: 107e50d8f; -[SCTimelineSnapStateHandler setOverlaySize:] */

void FUN_107e50d88(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x10) = param_1;
  *(undefined8 *)(param_3 + 0x18) = param_2;
  return;
}



/* Entry: 107e50d90; end: 107e51327; -[SCTimelineSnapStateHandler didChangeFiltersState:] */

void FUN_107e50d90(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  ulong uStack_68;
  
  _objc_retain(param_3);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107e51328;
  puStack_70 = &UNK_110a0f580;
  _objc_retain(param_3);
  lVar1 = param_1;
  uStack_68 = param_3;
  func_0x00010be24100(param_1,param_2,6);
  lVar2 = param_1;
  func_0x00010be4f340(param_1,param_2,6);
  func_0x00010bed74a0(param_1,param_2,&puStack_88,lVar1,lVar2);
  lVar1 = param_1 + 0xf0;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf926c0();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) goto LAB_107e512f8;
  puVar3 = PTR_PTR_1126bcd28;
  _objc_opt_new(PTR_PTR_1126bcd28);
  uVar18 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar4 = uVar18;
  func_0x00010c070a20();
  if ((uVar4 & 1) == 0) {
    _objc_release(uVar18);
LAB_107e50f10:
    lVar1 = param_1 + 0xf0;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c277f40();
    _objc_release(lVar1);
    if ((int)lVar2 != -1) {
      puVar8 = PTR_PTR_1126bcd38;
      _objc_opt_new(PTR_PTR_1126bcd38);
      func_0x00010c218fc0();
LAB_107e50f50:
      puVar6 = puVar3;
      func_0x00010c066480(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      _objc_release(puVar6);
      _objc_release(puVar8);
    }
  }
  else {
    uVar4 = param_1 + 0xe8;
    _objc_loadWeakRetained();
    uVar5 = uVar4;
    func_0x00010bf8c7a0();
    _objc_release(uVar4);
    _objc_release(uVar18);
    if (uVar5 == 0x7fffffffffffffff) goto LAB_107e50f10;
    uVar18 = param_1 + 0xf0;
    _objc_loadWeakRetained();
    uVar4 = uVar18;
    func_0x00010c09dea0();
    _objc_release(uVar18);
    if (uVar5 < uVar4) {
      puVar8 = PTR_PTR_1126bcd38;
      _objc_opt_new(PTR_PTR_1126bcd38);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c282760();
      func_0x00010c2190e0(puVar8,param_2,puVar7);
      _objc_release(puVar6);
      goto LAB_107e50f50;
    }
  }
  lVar1 = param_1 + 0xf0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c12dfc0();
  _objc_release(lVar1);
  uVar18 = param_3;
  func_0x00010c27e680();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar18;
  func_0x00010bf529e0();
  _objc_release(uVar18);
  if (uVar4 != 0) {
    uVar18 = param_1 + 0xf0;
    _objc_loadWeakRetained();
    uVar4 = uVar18;
    func_0x00010c0c2880();
    _objc_release(uVar18);
    uVar18 = param_3;
    func_0x00010c27e680();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar18;
    func_0x00010bf529e0();
    _objc_release(uVar18);
    if (uVar5 != 0) {
      uVar18 = 0;
      uVar19 = (uint)uVar4;
      do {
        uVar19 = uVar19 + 1;
        uVar17 = (ulong)uVar19;
        puVar8 = PTR_PTR_1126b37c8;
        func_0x00010c0cb140();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126b37d8;
        func_0x00010c0cb140();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_3;
        func_0x00010c27e680(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar5;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010c0b4ca0();
        func_0x00010c1a99c0(puVar6,param_2,uVar10);
        _objc_release(uVar9);
        _objc_release(uVar5);
        func_0x00010c1ba8a0(puVar8,param_2,puVar6);
        puVar7 = PTR_PTR_1126b37c0;
        _objc_opt_new(PTR_PTR_1126b37c0);
        func_0x00010c1bcc80();
        puVar11 = PTR_PTR_1126b0cb8;
        _objc_opt_new(PTR_PTR_1126b0cb8);
        func_0x00010c196600();
        puVar12 = PTR_PTR_1126b0cc0;
        _objc_opt_new(PTR_PTR_1126b0cc0);
        func_0x00010c1b5d40();
        uVar4 = uVar4 + 1;
        if (uVar18 == 0) {
          func_0x00010c1863a0(puVar3,param_2,puVar12);
          puVar16 = PTR_PTR_1126beb00;
          func_0x00010bf0a160(PTR_PTR_1126beb00,param_2,uVar17);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d7060(puVar3,param_2,puVar16);
          uVar17 = uVar4;
        }
        else {
          puVar13 = PTR_PTR_1126bcd28;
          _objc_opt_new();
          func_0x00010c1863a0();
          puVar16 = PTR_PTR_1126beb00;
          func_0x00010bf0a160(PTR_PTR_1126beb00,param_2,uVar17);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d7060(puVar13,param_2,puVar16);
          _objc_release(puVar16);
          puVar16 = PTR_PTR_1126bcd38;
          _objc_opt_new(PTR_PTR_1126bcd38);
          puVar14 = puVar3;
          func_0x00010c0eee00(puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar14;
          func_0x00010c296de0();
          func_0x00010c1ea740(puVar16,param_2,puVar15);
          _objc_release(puVar14);
          puVar14 = puVar13;
          func_0x00010c066480(puVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120();
          _objc_release(puVar14);
          _objc_release(puVar3);
          puVar3 = puVar13;
        }
        _objc_release(puVar16);
        puVar16 = PTR_PTR_1126bce90;
        _objc_opt_new(PTR_PTR_1126bce90);
        func_0x00010c185920();
        func_0x00010c211840(puVar16,param_2,uVar17);
        puVar13 = PTR_PTR_1126bce98;
        _objc_opt_new(PTR_PTR_1126bce98);
        puVar14 = puVar13;
        func_0x00010bfa2d60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120();
        _objc_release(puVar14);
        func_0x00010c1857c0(puVar3,param_2,puVar13);
        lVar1 = param_1 + 0xf0;
        _objc_loadWeakRetained(lVar1);
        func_0x00010befae60();
        _objc_release(lVar1);
        _objc_release(puVar13);
        _objc_release(puVar16);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar8);
        uVar18 = uVar18 + 1;
        uVar5 = param_3;
        func_0x00010c27e680();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar5;
        func_0x00010bf529e0();
        _objc_release(uVar5);
      } while (uVar18 < uVar9);
    }
  }
  _objc_release(puVar3);
LAB_107e512f8:
  _objc_release(uStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 107e51328; end: 107e51373;  */

void FUN_107e51328(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf51e00(uVar1);
  func_0x00010c19c960(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e51374; end: 107e514ab; -[SCTimelineSnapStateHandler didChangeVenueFilterView:] */

void FUN_107e51374(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x107e51424;
  puStack_40 = &UNK_110a0f580;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be24100(param_1,param_2,6);
  uVar2 = param_1;
  func_0x00010be4f340(param_1,param_2,6);
  func_0x00010bed74a0(param_1,param_2,&puStack_58,uVar1,uVar2);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107e514ac; end: 107e515e3; -[SCTimelineSnapStateHandler didChangeCroppingState:isInitialState:] */

void FUN_107e514ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x107e51564;
  puStack_48 = &UNK_110a0f700;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be24100(param_1,param_2,7);
  uVar2 = param_1;
  func_0x00010be4f340(param_1,param_2,7);
  func_0x00010bed74a0(param_1,param_2,&puStack_60,uVar1,uVar2);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 107e515e4; end: 107e516eb; -[SCTimelineSnapStateHandler didChangeAudioFilter:audioEnabled:] */

void FUN_107e515e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x107e5169c;
  puStack_48 = &UNK_110a0f700;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be24100(param_1,param_2,4);
  uVar2 = param_1;
  func_0x00010be4f340(param_1,param_2,4);
  func_0x00010bed74a0(param_1,param_2,&puStack_60,uVar1,uVar2);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 107e516ec; end: 107e5179b; -[SCTimelineSnapStateHandler didChangeAttachmentURL:] */

void FUN_107e516ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107e5179c;
  puStack_40 = &UNK_110a0f580;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be24100(param_1,param_2,3);
  uVar2 = param_1;
  func_0x00010be4f340(param_1,param_2,3);
  func_0x00010bed74a0(param_1,param_2,&puStack_58,uVar1,uVar2);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107e5179c; end: 107e517a7;  */

void FUN_107e5179c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16b3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setAttachmentURL__112638708,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e517a8; end: 107e51857; -[SCTimelineSnapStateHandler didChangeGenericAssets:] */

void FUN_107e517a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107e51858;
  puStack_40 = &UNK_110a0f580;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be24100(param_1,param_2,8);
  uVar2 = param_1;
  func_0x00010be4f340(param_1,param_2,8);
  func_0x00010bed74a0(param_1,param_2,&puStack_58,uVar1,uVar2);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107e51858; end: 107e51863;  */

void FUN_107e51858(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a2ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setGenericAssets__1126464c8,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e51864; end: 107e51913; -[SCTimelineSnapStateHandler didChangeMusicSelection:] */

void FUN_107e51864(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107e51914;
  puStack_48 = &UNK_110a0f6d0;
  uStack_40 = param_3;
  uStack_38 = param_1;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be24100(param_1,param_2,5);
  uVar2 = param_1;
  func_0x00010be4f340(param_1,param_2,5);
  func_0x00010bed74a0(param_1,param_2,&puStack_60,uVar1,uVar2);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 107e51914; end: 107e51ac7;  */

void FUN_107e51914(long param_1,long param_2,undefined1 *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
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
  lVar1 = param_2;
  func_0x00010c0d36c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_release();
  if (lVar1 != lVar3) {
    if (*(long *)(param_1 + 0x20) == 0) {
      param_3 = (undefined1 *)0x0;
    }
    else {
      func_0x00010bf73000(*(undefined8 *)(param_1 + 0x28));
      param_3 = *(undefined1 **)(param_1 + 0x20);
    }
    func_0x00010c1ca160(param_2);
    if (*(long *)(param_1 + 0x20) == 0) {
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
      lVar3 = lVar1;
      func_0x00010bf51e00();
      _objc_release(lVar1);
      lVar1 = lVar3;
      func_0x00010bf52a60();
      if (lVar1 != 0) {
        lVar5 = *plStack_110;
        do {
          lVar6 = 0;
          do {
            if (*plStack_110 != lVar5) {
              _objc_enumerationMutation(lVar3);
            }
            puVar4 = *(undefined8 **)(lStack_118 + lVar6 * 8);
            puVar2 = (undefined1 *)puVar4;
            func_0x00010bfee000();
            if (puVar2 == (undefined1 *)0xb) {
              lVar1 = param_2;
              func_0x00010c2553e0(param_2);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c12d360();
              _objc_release(lVar1);
              goto LAB_107e51a80;
            }
            lVar6 = lVar6 + 1;
          } while (lVar1 != lVar6);
          lVar1 = lVar3;
          puVar4 = &uStack_120;
          func_0x00010bf52a60();
        } while (lVar1 != 0);
      }
LAB_107e51a80:
      _objc_release(lVar3);
      param_3 = (undefined1 *)puVar4;
    }
  }
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_retain(param_3);
    _objc_retain(param_3);
    func_0x00010bed2f60(param_2);
    _objc_release(param_3);
    _objc_release(param_3);
    return;
  }
  return;
}



/* Entry: 107e51ac8; end: 107e51b4b; -[SCTimelineSnapStateHandler didChangeBaseMediaMusicSelection:] */

void FUN_107e51ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107e51b4c;
  puStack_30 = &UNK_110a0f580;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bed2f60(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 107e51b4c; end: 107e51b57;  */

void FUN_107e51b4c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setBaseMediaMusicSelection__112639710,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e51b58; end: 107e51c4f; -[SCTimelineSnapStateHandler didChangeVoiceoverAudio:] */

void FUN_107e51b58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010be24100(param_1);
  func_0x00010be4f340(param_1);
  func_0x00010bed74a0(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107e51c50; end: 107e51ccb;  */

void FUN_107e51c50(long param_1,undefined8 param_2)

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



/* Entry: 107e51ccc; end: 107e51dc3; -[SCTimelineSnapStateHandler didChangeMixedAudioTracks:] */

void FUN_107e51ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010be24100(param_1);
  func_0x00010be4f340(param_1);
  func_0x00010bed74a0(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107e51dc4; end: 107e51e23;  */

void FUN_107e51dc4(long param_1,undefined8 param_2)

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



/* Entry: 107e51e24; end: 107e51f1b; -[SCTimelineSnapStateHandler didChangeMixedBaseAudioVolume:] */

void FUN_107e51e24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010be24100(param_1);
  func_0x00010be4f340(param_1);
  func_0x00010bed74a0(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107e51f1c; end: 107e51f7b;  */

void FUN_107e51f1c(long param_1,undefined8 param_2)

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



/* Entry: 107e51f7c; end: 107e52073; -[SCTimelineSnapStateHandler didChangeTextToSpeechAudioAsset:] */

void FUN_107e51f7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010be24100(param_1);
  func_0x00010be4f340(param_1);
  func_0x00010bed74a0(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107e52074; end: 107e520d3;  */

void FUN_107e52074(long param_1,undefined8 param_2)

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



/* Entry: 107e520d4; end: 107e52157; -[SCTimelineSnapStateHandler didChangeLiveCameraLensConfiguration:] */

void FUN_107e520d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107e52158;
  puStack_30 = &UNK_110a0f580;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bed2f60(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 107e52158; end: 107e52163;  */

void FUN_107e52158(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1be390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setLiveCameraLensConfiguration__11264d308,*(undefined8 *)(param_1 + 0x20)
            );
  return;
}



/* Entry: 107e52164; end: 107e521e7; -[SCTimelineSnapStateHandler didChangePreviewLensConfiguration:] */

void FUN_107e52164(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107e521e8;
  puStack_30 = &UNK_110a0f580;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bed2f60(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 107e521e8; end: 107e521f3;  */

void FUN_107e521e8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e1e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setPreviewLensConfiguration__1126561b8,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e521f4; end: 107e522f3; -[SCTimelineSnapStateHandler statesContainAudioVisualEdits] */

uint FUN_107e521f4(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  uint uVar9;
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
  undefined1 auStack_280 [128];
  undefined1 auStack_200 [128];
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
  
  puVar6 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar8 = *(long *)(param_1 + 0xd0);
  _objc_retain(lVar8);
  lVar1 = lVar8;
  func_0x00010bf52a60();
  uVar9 = 0;
  if (lVar1 != 0) {
    lVar10 = *plStack_100;
    do {
      lVar11 = 0;
      do {
        if (*plStack_100 != lVar10) {
          _objc_enumerationMutation(lVar8);
        }
        uVar2 = *(ulong *)(lStack_108 + lVar11 * 8);
        func_0x00010bfd4520();
        if ((uVar2 & 1) != 0) {
          uVar9 = 1;
          goto LAB_107e522b4;
        }
        lVar11 = lVar11 + 1;
      } while (lVar1 != lVar11);
      lVar1 = lVar8;
      puVar6 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    uVar9 = 0;
  }
LAB_107e522b4:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return uVar9;
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
  lVar8 = *(long *)(lVar8 + 0xd0);
  _objc_retain(lVar8);
  puVar7 = &uStack_2c0;
  lVar1 = lVar8;
  func_0x00010bf52a60(lVar8,param_2,puVar7,auStack_200,0x10);
  if (lVar1 != 0) {
    lVar10 = *plStack_2b0;
    do {
      lVar11 = 0;
      do {
        if (*plStack_2b0 != lVar10) {
          _objc_enumerationMutation(lVar8);
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
        puVar7 = &uStack_300;
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
                 (func_0x00010bfee000(), (undefined8 *)puVar12 == puVar6)) {
                _objc_release(lVar3);
                uVar9 = 1;
                goto LAB_107e52474;
              }
              lVar14 = lVar14 + 1;
            } while (lVar4 != lVar14);
            lVar4 = lVar3;
            puVar7 = &uStack_300;
            func_0x00010bf52a60(lVar3,param_2,&uStack_300,auStack_280,0x10);
          } while (lVar4 != 0);
        }
        _objc_release(lVar3);
        lVar11 = lVar11 + 1;
      } while (lVar11 != lVar1);
      puVar7 = &uStack_2c0;
      lVar1 = lVar8;
      func_0x00010bf52a60(lVar8,param_2,puVar7,auStack_200,0x10);
    } while (lVar1 != 0);
  }
  uVar9 = 0;
LAB_107e52474:
  _objc_release(lVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_180) {
    return uVar9;
  }
  ___stack_chk_fail();
  return (uint)(puVar7 < (undefined8 *)0xc) & 0xf78U >> (ulong)((uint)puVar7 & 0x1f);
}



/* Entry: 107e522f4; end: 107e524bb; -[SCTimelineSnapStateHandler statesContainInfoStickerOfType:] */

uint FUN_107e522f4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
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
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
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
  lVar6 = *(long *)(param_1 + 0xd0);
  _objc_retain(lVar6);
  puVar5 = &uStack_1b0;
  lVar1 = lVar6;
  func_0x00010bf52a60(lVar6,param_2,puVar5,auStack_f0,0x10);
  if (lVar1 != 0) {
    lVar9 = *plStack_1a0;
    do {
      lVar10 = 0;
      do {
        if (*plStack_1a0 != lVar9) {
          _objc_enumerationMutation(lVar6);
        }
        lVar2 = *(long *)(lStack_1a8 + lVar10 * 8);
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
        puVar5 = &uStack_1f0;
        func_0x00010bf52a60();
        if (lVar3 != 0) {
          lVar11 = *plStack_1e0;
          do {
            lVar12 = 0;
            do {
              if (*plStack_1e0 != lVar11) {
                _objc_enumerationMutation(lVar2);
              }
              lVar8 = *(long *)(lStack_1e8 + lVar12 * 8);
              lVar4 = lVar8;
              func_0x00010c27dd80();
              if ((lVar4 == 6) && (func_0x00010bfee000(), lVar8 == param_3)) {
                _objc_release(lVar2);
                uVar7 = 1;
                goto LAB_107e52474;
              }
              lVar12 = lVar12 + 1;
            } while (lVar3 != lVar12);
            lVar3 = lVar2;
            puVar5 = &uStack_1f0;
            func_0x00010bf52a60(lVar2,param_2,&uStack_1f0,auStack_170,0x10);
          } while (lVar3 != 0);
        }
        _objc_release(lVar2);
        lVar10 = lVar10 + 1;
      } while (lVar10 != lVar1);
      puVar5 = &uStack_1b0;
      lVar1 = lVar6;
      func_0x00010bf52a60(lVar6,param_2,puVar5,auStack_f0,0x10);
    } while (lVar1 != 0);
  }
  uVar7 = 0;
LAB_107e52474:
  _objc_release(lVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return uVar7;
  }
  ___stack_chk_fail();
  return (uint)(puVar5 < (undefined8 *)0xc) & 0xf78U >> (ulong)((uint)puVar5 & 0x1f);
}



/* Entry: 107e524bc; end: 107e524d3; -[SCTimelineSnapStateHandler _globalOnlyEditingOfType:] */

uint FUN_107e524bc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (uint)(param_3 < 0xc) & 0xf78U >> (ulong)((uint)param_3 & 0x1f);
}



/* Entry: 107e524d4; end: 107e524f3; -[SCTimelineSnapStateHandler _isStickerGlobalOnlyWithType:infoStickerType:] */

uint FUN_107e524d4(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if (param_4 < 0xf) {
    uVar1 = 0x4c00 >> (ulong)((uint)param_4 & 0x1f);
  }
  uVar2 = 0;
  if (param_3 == 6) {
    uVar2 = uVar1;
  }
  return uVar2 & 1;
}



/* Entry: 107e524f4; end: 107e52503; -[SCTimelineSnapStateHandler _localOverrideEditingOfType:] */

bool FUN_107e524f4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (param_3 & 0xfffffffffffffffe) == 6;
}



/* Entry: 107e52504; end: 107e525bf; -[SCTimelineSnapStateHandler _updateEditingStateWithBlock:globalOnlyEditing:localOverrideEditing:] */

void FUN_107e52504(long param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0xd8) == 0) {
    lVar2 = 0;
LAB_107e525a4:
    func_0x00010bedf6e0(param_1,param_2,param_3,lVar2);
  }
  else {
    if (param_4 == 0) {
      lVar1 = param_1 + 0xe8;
      _objc_loadWeakRetained();
      lVar2 = lVar1;
      func_0x00010bf8c7a0();
      _objc_release(lVar1);
      if (lVar2 != 0x7fffffffffffffff) goto LAB_107e525a4;
      if (param_5 != 0) {
        func_0x00010bed2f60(param_1,param_2,param_3);
        goto LAB_107e525a8;
      }
    }
    func_0x00010bed8e00(param_1,param_2,param_3);
  }
LAB_107e525a8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e525c0; end: 107e52637; -[SCTimelineSnapStateHandler _updateSelectedLocalStateWithBlock:atIndex:] */

void FUN_107e525c0(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0xd0);
  func_0x00010bf529e0();
  if (param_4 < uVar1) {
    uVar2 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010c0dfd40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e52638; end: 107e5264f; -[SCTimelineSnapStateHandler _updateGlobalStateWithBlock:] */

void FUN_107e52638(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + 0xd8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107e52648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  }
  return;
}



/* Entry: 107e52650; end: 107e526d7; -[SCTimelineSnapStateHandler _updateAllSegmentsWithBlock:] */

void FUN_107e52650(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0xd0);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar4 = 0;
    do {
      uVar2 = *(undefined8 *)(param_1 + 0xd0);
      func_0x00010c0dfd40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_3 + 0x10))(param_3,uVar2);
      _objc_release(uVar2);
      uVar4 = uVar4 + 1;
      uVar3 = *(ulong *)(param_1 + 0xd0);
      func_0x00010bf529e0();
    } while (uVar4 < uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e526d8; end: 107e5271f; +[SCTimelineSnapStateHandler overlayAndVideoTrackedImagesForOverlayState:overlaySize:outputSize:durationMs:useOutputSizeForStaticOverlay:spectaclesTranscodingConfig:userSession:previewCameraSourceOverlayService:multiSnapDrawingCache:videoPlaybackSpeed:targetTrajectoryFactory:stickerInjector:ctpItemViewService:overlayGenerationType:disposableBag:completion:] */

void FUN_107e526d8(void)

{
  func_0x00010c0ef540(PTR_PTR_1126bf728);
  return;
}



/* Entry: 107e52720; end: 107e5272b; +[SCTimelineSnapStateHandler containsTrackedImagesForOverlayState:] */

void FUN_107e52720(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4bb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126bf728,PTR_s_containsTrackedImagesForOverlayS_1125b0888);
  return;
}



/* Entry: 107e5272c; end: 107e528bb; -[SCTimelineSnapStateHandler _iterateStatesWithTimeRanges:dataProcessBlock:] */

void FUN_107e5272c(long param_1,undefined8 param_2,ulong param_3,long param_4)

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
      uVar1 = *(ulong *)(param_1 + 0xd0);
      func_0x00010bf529e0();
      if (uVar1 <= uVar5) break;
      uVar1 = param_3;
      func_0x00010bf529e0();
      for (; uVar4 < uVar1; uVar4 = uVar4 + 1) {
        uVar1 = *(ulong *)(param_1 + 0xd0);
        func_0x00010bf529e0();
        if (uVar5 + 1 != uVar1) {
          lVar2 = *(long *)(param_1 + 0xd0);
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



/* Entry: 107e528bc; end: 107e52993; -[SCTimelineSnapStateHandler overlayAndVideoTrackedImagesForIndex:outputSize:useOutputSizeForStaticOverlay:useImageCacheForStaticOverlay:multiSnapDrawingCache:overlayGenerationType:completion:] */

void FUN_107e528bc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_3 + 0xd8);
  _objc_retain(param_10);
  _objc_retain(param_8);
  lVar1 = param_3;
  if (lVar2 == 0) {
    func_0x00010be4f2a0(param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c13afa0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010be1b880(param_1,param_2,param_3,param_4,lVar1,param_6,param_7,param_8,param_9,param_10
                     );
  _objc_release(param_10);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107e52994; end: 107e52a8b; -[SCTimelineSnapStateHandler globalOverlaysForThumbnailWithOutputSize:useOutputSizeForStaticOverlay:multiSnapDrawingCache:completion:] */

void FUN_107e52994(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_3 + 0xd8);
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_3 + 0xd0);
    _objc_retain(param_7);
    _objc_retain(param_6);
    func_0x00010bfb1920(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be1b880(param_1,param_2,param_3,param_4,uVar2,param_5,1,param_6,0,param_7);
    _objc_release(param_7);
  }
  else {
    _objc_retain(param_7);
    _objc_retain(param_6);
    func_0x00010be1b880(param_1,param_2,param_3,param_4,lVar1,param_5,1,param_6,0,param_7);
    uVar2 = param_6;
    param_6 = param_7;
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107e52a8c; end: 107e52b6b; -[SCTimelineSnapStateHandler gallerySnapOverlaysWithTimeRanges:] */

void FUN_107e52a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_58 = FUN_107e52b6c;
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



/* Entry: 107e52b6c; end: 107e52d33;  */

void FUN_107e52b6c(long param_1,undefined8 param_2)

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
  func_0x0001080836ac(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(long *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(lVar2 + 0x28);
  func_0x00010c2946e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010bf85f80(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar3;
  func_0x000108087e10(*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18),uVar3,uVar6,uVar9,
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88),0);
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



/* Entry: 107e52d34; end: 107e52f33; -[SCTimelineSnapStateHandler globalOverlayForGalleryWithCompletion:] */

void FUN_107e52d34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0xd8);
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0xd0);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bf51e00();
    _objc_release(lVar2);
  }
  else {
    func_0x00010bf51e00();
  }
  func_0x00010becf500(param_1);
  lVar2 = lVar1;
  func_0x0001080836ac();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c2946e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar9;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf85f80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x000108087e10(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),lVar2,uVar4,
                      uVar7,*(undefined8 *)(param_1 + 0x88),0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar9);
  _objc_release(uVar3);
  _objc_release(lVar2);
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(lVar8);
  _objc_retain(param_3);
  _objc_retain(lVar1);
  func_0x00010c0f7fc0(uVar9);
  _objc_release(lVar8);
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(lVar8);
  _objc_release(param_3);
  _objc_release(lVar1);
  return;
}



/* Entry: 107e52f34; end: 107e52fe7;  */

void FUN_107e52f34(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107e52fe8;
  puStack_50 = &UNK_1108e6520;
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  lStack_48 = lVar1;
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar4;
  _objc_retain(uVar3);
  uStack_40 = uVar3;
  func_0x00010be1b880(*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),lVar1,param_2,
                      uVar2,0,0,0,2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  return;
}



/* Entry: 107e52fe8; end: 107e53127;  */

void FUN_107e52fe8(long param_1,long param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126d4dc8;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = 0;
  if (param_2 != 0) {
    _objc_retain(param_2);
    _objc_alloc();
    func_0x00010c01c380();
    _objc_release(param_2);
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x38);
    func_0x00010c0ef840();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_5 = 1;
    lVar5 = lVar3;
    param_4 = puVar4;
    func_0x00010c0ef8a0(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar6);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar7 = lVar5;
  func_0x00010bfbd860();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(uVar6);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  _objc_retain(puVar4);
  func_0x00010be46300(lVar5);
  uVar8 = *(undefined8 *)(lVar5 + 0x48);
  _objc_retain(lVar7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(puVar4);
  _objc_retain(puVar1);
  _objc_retain(uVar6);
  func_0x00010c0f7fc0(uVar8);
  _objc_release(lVar7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(lVar7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(uVar6);
  return;
}



/* Entry: 107e53128; end: 107e5331f; -[SCTimelineSnapStateHandler overlaysForGalleryWithTimeRanges:multiSnapDrawingCache:completion:] */

void FUN_107e53128(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_1;
  func_0x00010bfbd860(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar5 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0(puVar3,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_107e53320;
  puStack_90 = &UNK_110a0f760;
  _objc_retain(puVar3);
  puStack_88 = puVar3;
  _objc_retain(puVar4);
  puStack_80 = puVar4;
  lStack_78 = param_1;
  func_0x00010be46300(param_1,param_2,param_3,&puStack_a8);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  puStack_100 = puVar1;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_107e53464;
  puStack_e8 = &UNK_110866970;
  uStack_e0 = param_3;
  puStack_d8 = puVar3;
  lStack_d0 = param_1;
  puStack_c8 = puVar4;
  uStack_c0 = param_4;
  lStack_b8 = lVar2;
  uStack_b0 = param_5;
  _objc_retain(lVar2);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(puVar4);
  _objc_retain(puVar3);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar5,param_2,&puStack_100);
  _objc_release(lStack_b8);
  _objc_release(uStack_b0);
  _objc_release(uStack_c0);
  _objc_release(puStack_c8);
  _objc_release(puStack_d8);
  _objc_release(uStack_e0);
  _objc_release(puStack_80);
  _objc_release(puStack_88);
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 107e53320; end: 107e53463;  */

void FUN_107e53320(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar3);
  _objc_release(puVar1);
  lVar4 = *(long *)(param_1 + 0x28);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (lVar4 != 0) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x30);
  lVar6 = *(long *)(lVar4 + 0xd8);
  if (lVar6 == 0) {
    func_0x00010be4f2a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bf51e00();
    lVar5 = lVar4;
  }
  else {
    func_0x00010c13afa0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = 0;
    lVar2 = lVar4;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar3);
  _objc_release(puVar1);
  if (lVar6 == 0) {
    _objc_release(lVar2);
    lVar2 = lVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107e53464; end: 107e536d7;  */

void FUN_107e53464(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar10);
  lVar2 = lVar10;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  if (lVar2 != 0) {
    lVar13 = -1;
    do {
      lVar11 = 0;
      lVar14 = lVar13;
      do {
        if (lRam0000000000000000 != lVar9) {
          _objc_enumerationMutation(lVar10);
        }
        lVar13 = *(long *)(lVar11 * 8);
        func_0x00010c067fc0();
        if (lVar14 == lVar13) {
          puVar3 = puVar1;
          func_0x00010c089820(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
        }
        else {
          puVar3 = (undefined *)0x0;
          _dispatch_semaphore_create();
          uVar12 = *(undefined8 *)(param_1 + 0x30);
          uVar4 = *(undefined8 *)(param_1 + 0x38);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar14 = *(long *)(param_1 + 0x30);
          _objc_retain(puVar1);
          uVar5 = *(undefined8 *)(lVar14 + 0x10);
          uVar15 = *(undefined8 *)(lVar14 + 0x18);
          _objc_retain(puVar3);
          func_0x00010be1b880(uVar5,uVar15,uVar12);
          _objc_release(uVar4);
          _dispatch_semaphore_wait(puVar3,0xffffffffffffffff);
          _objc_release(puVar3);
          _objc_release(puVar1);
        }
        _objc_release(puVar3);
        lVar11 = lVar11 + 1;
        lVar14 = lVar13;
      } while (lVar2 != lVar11);
      lVar2 = lVar10;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar10);
  puVar3 = puVar1;
  (**(code **)(*(long *)(param_1 + 0x50) + 0x10))
            (*(long *)(param_1 + 0x50),puVar1,*(undefined8 *)(param_1 + 0x48));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar3);
  if (puVar3 == (undefined *)0x0) {
    uVar12 = *(undefined8 *)(puVar1 + 0x28);
    puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar12);
  }
  else {
    puVar7 = PTR_PTR_1126d4dc8;
    _objc_alloc();
    func_0x00010c01c380();
    uVar5 = *(undefined8 *)(*(long *)(puVar1 + 0x20) + 0x38);
    func_0x00010c0ef840(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar12;
    func_0x00010c0ef8a0(0x3ff0000000000000,uVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(uVar12);
    _objc_release(uVar5);
    func_0x00010befa120(*(undefined8 *)(puVar1 + 0x28));
    _objc_release(uVar4);
  }
  _objc_release(puVar7);
  _dispatch_semaphore_signal(*(undefined8 *)(puVar1 + 0x30));
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf8c8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107e536d8; end: 107e5384f;  */

void FUN_107e536d8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_2 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar6);
  }
  else {
    puVar4 = PTR_PTR_1126d4dc8;
    _objc_alloc();
    func_0x00010c01c380();
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
    func_0x00010c0ef840(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c0ef8a0(0x3ff0000000000000,uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(uVar6);
    _objc_release(uVar1);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
    _objc_release(uVar3);
  }
  _objc_release(puVar4);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x30));
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf8c8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107e53850; end: 107e53857; -[SCTimelineSnapStateHandler sendingStatesForTimeRanges:] */

void FUN_107e53850(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8c8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_editingStatesForTimeRanges_withG_1125c0bd8,param_3,1);
  return;
}



/* Entry: 107e53858; end: 107e5385f; -[SCTimelineSnapStateHandler savingStatesForTimeRanges:] */

void FUN_107e53858(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8c8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_editingStatesForTimeRanges_withG_1125c0bd8,param_3,0);
  return;
}



/* Entry: 107e53860; end: 107e5396b; -[SCTimelineSnapStateHandler configureEphemeralMedias:configuration:timeRanges:multiSnapDrawingCache:] */

void FUN_107e53860(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107e5396c;
  puStack_70 = &UNK_110a0f7c0;
  uStack_68 = param_1;
  uStack_60 = param_3;
  uStack_58 = param_5;
  uStack_50 = param_6;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010be46300(param_1,param_2,param_5,&puStack_88);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 107e5396c; end: 107e53bbb;  */

void FUN_107e5396c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf8c840(uVar1,param_2,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0dfd40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = *(long *)(param_1 + 0x30);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x00010bdc1120(&uStack_80,lVar3);
  }
  func_0x00010bf46e40(uVar8);
  _objc_release(lVar3);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  uVar8 = uVar2;
  func_0x00010bf42a00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf429e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed99e0(uVar9);
  _objc_release(uVar4);
  _objc_release(uVar8);
  uVar8 = uVar2;
  func_0x00010bf42a00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(param_1 + 0x40);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x00010c27c900(&uStack_80,lVar3);
  }
  lVar6 = *(long *)(param_1 + 0x40);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010c26f620(&uStack_b0,lVar7);
  }
  _CMTimeRangeEqual(&uStack_80,&uStack_b0);
  func_0x00010c2bbc80(uVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(lVar5);
  _objc_release(uVar8);
  uVar8 = uVar2;
  func_0x00010bf42a00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b4260();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 107e53bbc; end: 107e541bb; -[SCTimelineSnapStateHandler configureEphemeralMedia:withEditingState:index:timeRange:multiSnapDrawingCache:] */

void FUN_107e53bbc(long param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 param_5,
                  double *param_6,undefined8 param_7)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
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
  func_0x00010bde5a00(param_1,param_2,uVar2,param_4,param_5,param_7,&dStack_a0);
  _objc_release(param_7);
  _objc_release(uVar2);
  lVar8 = param_4;
  func_0x00010bf308c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar8;
  func_0x00010c0b8620();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  func_0x00010c0d3c80();
  _objc_release(lVar7);
  _objc_release(lVar8);
  lVar8 = param_4;
  func_0x00010c2553e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar8;
  func_0x000108ec30bc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(lVar3,param_2,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar8);
  lVar8 = lVar3;
  func_0x00010bf529e0();
  if (lVar8 != 0) {
    lVar8 = lVar3;
    func_0x000108e225bc(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c178ac0(param_3,param_2,lVar8);
    _objc_release(lVar8);
  }
  lVar8 = param_4;
  func_0x00010bf308c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar8;
  func_0x00010bf529e0();
  _objc_release(lVar8);
  if (lVar7 != 0) {
    lVar8 = param_4;
    func_0x00010bf308c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar8;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar7;
    func_0x0001084111c8();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0c3fe0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20cce0();
    _objc_release(uVar2);
    _objc_release(lVar4);
    _objc_release(lVar7);
    _objc_release(lVar8);
  }
  puVar5 = PTR_PTR_1126c4538;
  lVar8 = param_4;
  func_0x00010c2553e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c293d80(puVar5,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  lVar8 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar8);
  lVar7 = param_4;
  func_0x00010bf308c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar8;
  func_0x00010c293d60(lVar8,param_2,lVar7,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar8);
  uVar2 = param_3;
  func_0x00010841fa68(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar4;
  func_0x00010c0e00e0(lVar4,param_2,&PTR____CFConstantStringClassReference_110efb6b8);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar4;
  func_0x00010c0e00e0(lVar4,param_2,&PTR____CFConstantStringClassReference_110efb698);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c0e00e0(lVar4,param_2,&PTR____CFConstantStringClassReference_110efb6d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c6a40(uVar2,param_2,lVar8,lVar7,lVar6,0);
  _objc_release(lVar6);
  _objc_release(lVar7);
  _objc_release(lVar8);
  _objc_release(uVar2);
  lVar8 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar8);
  lVar7 = param_4;
  func_0x00010bf308c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar8;
  func_0x00010bf00540(lVar8,param_2,lVar7,puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ce7e0(param_3,param_2,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar7);
  _objc_release(lVar8);
  lVar8 = param_4;
  func_0x00010bef0d20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 == 0) {
    lVar7 = *(long *)(param_1 + 0xd8);
    func_0x00010bef0d20(lVar7);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar8);
    lVar7 = lVar8;
  }
  _objc_release(lVar8);
  uVar2 = param_3;
  func_0x00010841fa68(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ca160();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010841fa68(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_4;
  func_0x00010c2553e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar8;
  func_0x00010808d58c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ca2e0(uVar2,param_2,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar8);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010841fa68(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16bea0();
  _objc_release(uVar2);
  _objc_release(lVar7);
  _objc_release(lVar4);
  _objc_release(puVar5);
  _objc_release(lVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107e541bc; end: 107e541c3;  */

void FUN_107e541bc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_text_1126787e8);
  return;
}



/* Entry: 107e541c4; end: 107e5488f; -[SCTimelineSnapStateHandler _configureSnapVideoFilter:forState:index:multiSnapDrawingCache:timeRange:] */

void FUN_107e541c4(long param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined8 param_5,
                  ulong param_6,undefined8 *param_7)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  double dVar16;
  ulong uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 auStack_160 [32];
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126affe8;
  func_0x00010c09e180();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_4;
  func_0x00010bfaee40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010bf69ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar8);
  if (uVar2 != 0) {
    uVar8 = param_4;
    func_0x00010bfaee40(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar8;
    func_0x00010bf69ac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bb2a0(param_3);
    _objc_release(uVar2);
    _objc_release(uVar8);
  }
  func_0x00010c1d77e0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),param_3);
  func_0x00010bf0f0e0(param_4);
  func_0x00010c16bc20(param_3);
  uVar8 = param_4;
  func_0x00010bf0f140();
  _objc_retainAutoreleasedReturnValue();
  if (uVar8 == 0) {
    func_0x00010c16c440(param_3);
  }
  else {
    puVar3 = PTR_PTR_1126d7d50;
    _objc_alloc(PTR_PTR_1126d7d50);
    uVar2 = param_4;
    func_0x00010bf0f140(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b057030(puVar3,uVar2);
    func_0x00010c16c440(param_3);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  _objc_release(uVar8);
  uVar8 = param_4;
  func_0x00010c2a0420(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19c2e0(param_3);
  _objc_release(uVar8);
  func_0x00010c29aae0(param_4);
  func_0x00010c221cc0(param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uVar8 = param_4;
  func_0x00010bfaee40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010c27e680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  uVar8 = uVar2;
  func_0x00010bf52a60();
  if (uVar8 != 0) {
    lVar14 = *plStack_130;
    do {
      uVar15 = 0;
      do {
        if (*plStack_130 != lVar14) {
          _objc_enumerationMutation(uVar2);
        }
        puVar4 = PTR_PTR_1126c4798;
        _objc_alloc(PTR_PTR_1126c4798);
        func_0x00010c0131a0();
        func_0x00010befa120(puVar3);
        _objc_release(puVar4);
        uVar15 = uVar15 + 1;
      } while (uVar8 != uVar15);
      uVar8 = uVar2;
      func_0x00010bf52a60();
    } while (uVar8 != 0);
  }
  _objc_release(uVar2);
  func_0x00010c21b160(param_3);
  uVar8 = param_4;
  func_0x00010c0d36c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c2a09a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_4;
  func_0x00010c27d220(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010c0cece0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_4;
  func_0x00010c0ced00(param_4);
  _objc_retainAutoreleasedReturnValue();
  uStack_178 = param_7[1];
  uStack_180 = *param_7;
  uStack_170 = param_7[2];
  uVar12 = 0;
  func_0x000108453a1c(auStack_160,uVar8,uVar2,uVar15,0,uVar6,uVar11,&uStack_180);
  _objc_release(uVar11);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar15);
  _objc_release(uVar2);
  _objc_release(uVar8);
  func_0x00010c1c8720(param_3);
  func_0x00010c16f280(param_3);
  func_0x00010c16bf80(param_3);
  func_0x00010c16bfa0(param_3);
  uVar7 = *(undefined8 *)(param_1 + 200);
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar7;
  func_0x00010bf926c0();
  _objc_release(uVar7);
  if ((int)uVar13 == 0) {
    uStack_188 = param_4;
    func_0x00010bf5c9c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar8 = *(ulong *)(param_1 + 200);
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    uStack_188 = uVar8;
    FUN_107ffcb24();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
  }
  dVar16 = 0.0;
  uVar8 = uStack_188;
  if (uStack_188 != 0) {
    func_0x00010c186260(param_3);
    func_0x00010c186240(0x7ff0000000000000,param_3);
    if (*(double *)(param_1 + 0x10) != 0.0) {
      if (*(double *)(param_1 + 0x18) == 0.0) {
        dVar16 = INFINITY;
      }
      else {
        dVar16 = *(double *)(param_1 + 0x10) / *(double *)(param_1 + 0x18);
      }
    }
  }
  func_0x00010c222080(dVar16,param_3);
  if ((*(long *)(param_1 + 0xd8) == 0) ||
     (lVar14 = param_1, func_0x00010bfd7ee0(), (int)lVar14 == 0)) {
    uVar15 = param_3;
    func_0x00010bef6760();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b1350;
    _objc_opt_class(PTR_PTR_1126b1350);
    uVar5 = uVar15;
    _objc_opt_isKindOfClass(uVar15,puVar4);
    uVar2 = uVar15;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar15);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    if (uVar2 != 0) {
      uVar13 = *(undefined8 *)(param_1 + 0x20);
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c2946e0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010bf60aa0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(ulong *)(param_1 + 0x28);
      func_0x00010bf85f80();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar11;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar8;
      func_0x00010bf60aa0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_4;
      uVar12 = uVar5;
      func_0x000108084048(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),param_4,
                          uVar13,uVar10,uVar5,*(undefined8 *)(param_1 + 0x88));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0a120(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c98e0(uVar15);
      _objc_release(puVar4);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar8);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar7);
      uVar8 = param_6;
      func_0x00010c1c9780(uVar15);
    }
    _objc_release(uVar2);
  }
  else {
    uVar8 = param_3;
    uVar12 = param_6;
    func_0x00010bde5a60(param_1);
  }
  _objc_release(uStack_188);
  func_0x00010715c0ec(auStack_160);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010715c0ec(auStack_160);
  __Unwind_Resume();
  _objc_retain(uVar8);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar13 = *(undefined8 *)(param_3 + 0xd0);
  _objc_retain(uVar12);
  func_0x00010bf529e0(uVar13);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_3 + 0xd0);
  _objc_retain();
  _objc_retain(uVar8);
  func_0x00010bf97e80(uVar13);
  uVar15 = uVar8;
  func_0x00010bef6760();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1350;
  _objc_opt_class(PTR_PTR_1126b1350);
  uVar5 = uVar15;
  _objc_opt_isKindOfClass(uVar15,puVar3);
  uVar2 = uVar15;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar15);
  func_0x00010c1c98e0(uVar2);
  func_0x00010c1c9780(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar12);
  _objc_release(puVar1);
  _objc_release(uVar8);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 107e54890; end: 107e549df; -[SCTimelineSnapStateHandler _configureSnapVideoFilterForClipEditing:multiSnapDrawingCache:] */

void FUN_107e54890(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar6 = *(undefined8 *)(param_1 + 0xd0);
  _objc_retain(param_4);
  func_0x00010bf529e0(uVar6);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0xd0);
  _objc_retain();
  _objc_retain(param_3);
  func_0x00010bf97e80(uVar6);
  uVar3 = param_3;
  func_0x00010bef6760();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b1350;
  _objc_opt_class(PTR_PTR_1126b1350);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  func_0x00010c1c98e0(uVar1);
  func_0x00010c1c9780(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e549e0; end: 107e54e1f;  */

void FUN_107e549e0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  long lStack_138;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c13afa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010becf500(*(undefined8 *)(param_1 + 0x20));
  lVar2 = lVar1;
  func_0x00010bfaee40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010c091860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010bfaee40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) {
    lVar7 = lVar2;
    func_0x00010bf69ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar7 == 0) {
      lStack_138 = 0;
      goto LAB_107e54adc;
    }
    lVar2 = lVar1;
    func_0x00010bfaee40();
    _objc_retainAutoreleasedReturnValue();
    lStack_138 = lVar2;
    func_0x00010bf69ac0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lStack_138 = lVar2;
    func_0x00010c091860();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
LAB_107e54adc:
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  lVar2 = lVar1;
  func_0x00010bfaee40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c27e680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(lVar4);
      }
      puVar5 = PTR_PTR_1126c4798;
      _objc_alloc(PTR_PTR_1126c4798);
      func_0x00010c0131a0();
      func_0x00010befa120(puVar3);
      _objc_release(puVar5);
      lVar17 = lVar17 + 1;
    } while (lVar2 != lVar17);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  func_0x00010c21b160(*(undefined8 *)(param_1 + 0x28));
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 200);
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar6;
  func_0x00010bf926c0();
  _objc_release(uVar6);
  if ((int)uVar16 == 0) {
    lVar2 = lVar1;
    func_0x00010bf5c9c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 200);
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126affe8;
    func_0x00010c09e180(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar7;
    FUN_107ffcb24(lVar7,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(lVar7);
  }
  uVar16 = *(undefined8 *)(param_1 + 0x28);
  lVar7 = lVar1;
  func_0x00010c2a0420(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29aae0(lVar1);
  uVar13 = 0;
  lVar17 = lVar2;
  func_0x00010bf46d60(uVar16);
  _objc_release(lVar7);
  uVar15 = *(undefined8 *)(param_1 + 0x30);
  lVar7 = *(long *)(param_1 + 0x20);
  uVar16 = *(undefined8 *)(lVar7 + 0x20);
  uVar6 = *(undefined8 *)(lVar7 + 0x28);
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010bf85f80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(lVar7 + 0x10);
  uVar21 = *(undefined8 *)(lVar7 + 0x18);
  lVar7 = lVar1;
  func_0x000108084048(uVar18,uVar21,lVar1,uVar16,uVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar7;
  func_0x00010befa120(uVar15);
  _objc_release(lVar7);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(lVar2);
  _objc_release(puVar3);
  _objc_release(lStack_138);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar4);
  uVar16 = *(undefined8 *)(lVar1 + 0x20);
  uVar6 = *(undefined8 *)(lVar1 + 0x28);
  _objc_retain(uVar13);
  _objc_retain(lVar17);
  func_0x00010c2946e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar1 + 0x28);
  func_0x00010bf85f80(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  dVar19 = *(double *)(lVar1 + 0x10);
  lVar7 = lVar4;
  func_0x000108084048(dVar19,*(undefined8 *)(lVar1 + 0x18),lVar4,uVar16,uVar9,uVar12,
                      *(undefined8 *)(lVar1 + 0x88));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar6);
  lVar2 = lVar1 + 0xf0;
  _objc_loadWeakRetained(lVar2);
  lVar14 = lVar2;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108020980();
  dVar20 = dVar19;
  _objc_release(lVar14);
  _objc_release(lVar2);
  if (dVar19 < 0.0) {
    lVar2 = lVar1 + 0xf0;
    _objc_loadWeakRetained(lVar2);
    lVar14 = lVar2;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080207d4();
    _objc_release(lVar14);
    _objc_release(lVar2);
    dVar19 = dVar20;
  }
  puVar3 = PTR_PTR_1126bf728;
  dVar19 = dVar19 * 1000.0;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(dVar19,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29aae0(lVar4);
  func_0x00010c0ef540(*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),uVar18,uVar21,
                      dVar19,puVar3);
  _objc_release(uVar13);
  _objc_release(lVar17);
  _objc_release(puVar5);
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 107e54e20; end: 107e550b7; -[SCTimelineSnapStateHandler _generateOverlaysWithEditingState:outputSize:useOutputSizeForStaticOverlay:useImageCacheForStaticOverlay:multiSnapDrawingCache:overlayGenerationType:completion:] */

void FUN_107e54e20(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

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
  long lVar10;
  long lVar11;
  undefined *puVar12;
  double dVar13;
  double dVar14;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  uVar3 = *(undefined8 *)(param_3 + 0x28);
  _objc_retain(param_10);
  _objc_retain(param_8);
  func_0x00010c2946e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010bf85f80(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  dVar13 = *(double *)(param_3 + 0x10);
  uVar9 = param_5;
  func_0x000108084048(dVar13,*(undefined8 *)(param_3 + 0x18),param_5,uVar1,uVar5,uVar8,
                      *(undefined8 *)(param_3 + 0x88));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  lVar10 = param_3 + 0xf0;
  _objc_loadWeakRetained(lVar10);
  lVar11 = lVar10;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108020980();
  dVar14 = dVar13;
  _objc_release(lVar11);
  _objc_release(lVar10);
  if (dVar13 < 0.0) {
    lVar10 = param_3 + 0xf0;
    _objc_loadWeakRetained(lVar10);
    lVar11 = lVar10;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080207d4();
    _objc_release(lVar11);
    _objc_release(lVar10);
    dVar13 = dVar14;
  }
  puVar2 = PTR_PTR_1126bf728;
  dVar13 = dVar13 * 1000.0;
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(dVar13,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29aae0(param_5);
  func_0x00010c0ef540(*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18),param_1,
                      param_2,dVar13,puVar2);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(puVar12);
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107e550b8; end: 107e55423; -[SCTimelineSnapStateHandler _updateIndividualEditingLoggingParamsBuilder:from:] */

void FUN_107e550b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bf037a0(param_4);
  func_0x00010c2a83a0(param_3,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010bf03500(param_4);
  func_0x00010c2a8360(param_3,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c2a8340(param_4);
  func_0x00010c2bcf00(param_3,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010bf89ea0(param_4);
  func_0x00010c2aca40(param_3,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010bf5c920(param_4);
  func_0x00010c2ab6a0(param_3,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010bf2fba0(param_4);
  func_0x00010c2a9fa0(param_3,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010bf93ae0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ad240(param_3,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bfadd80(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ade40(param_3,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bfadfa0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2adf40(param_3,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bfc11a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aed60(param_3,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bfae8c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ae1a0(param_3,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf30820(param_4);
  func_0x00010c2aa100(param_3,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c253c00(param_4);
  func_0x00010c2ba100(param_3,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c2551a0(param_4);
  func_0x00010c2ba260(param_3,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010bfae160(param_4);
  func_0x00010c2adfa0(param_3,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010bfae340(param_4);
  func_0x00010c2ae060(param_3,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010bfadfc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2adf60(param_3,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bfae520(param_4);
  func_0x00010c2ae140(param_3,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010bfae500(param_4);
  func_0x00010c2ae120(param_3,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c243700(param_4);
  func_0x00010c2b9800(param_3,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c2a8860(param_4);
  func_0x00010c2bcf20(param_3,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010bf0f140(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a8c40(param_3,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bfae3c0(param_4);
  _objc_release(param_4);
  func_0x00010c2ae0c0(param_3,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bc6e0(param_3,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e55424; end: 107e554e3; -[SCTimelineSnapStateHandler hasIndividualCreativeTools] */

bool FUN_107e55424(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  bool bVar6;
  
  uVar1 = *(ulong *)(param_1 + 0xd0);
  func_0x00010bf529e0();
  if (uVar1 < 2) {
    bVar6 = false;
  }
  else {
    uVar1 = 0;
    do {
      lVar2 = *(long *)(param_1 + 0xd0);
      func_0x00010bf529e0();
      uVar5 = lVar2 - 1;
      bVar6 = uVar1 <= uVar5 && uVar5 != uVar1;
      if (uVar1 > uVar5 || uVar5 == uVar1) {
        return bVar6;
      }
      uVar3 = *(undefined8 *)(param_1 + 0xd0);
      func_0x00010c0dfd40(uVar3,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0xd0);
      uVar1 = uVar1 + 1;
      func_0x00010c0dfd40(uVar4,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_1;
      func_0x00010be33f40(param_1,param_2,uVar3,uVar4);
      _objc_release(uVar4);
      _objc_release(uVar3);
    } while ((uVar5 & 1) != 0);
  }
  return bVar6;
}



/* Entry: 107e554e4; end: 107e5595b; -[SCTimelineSnapStateHandler _hasIdenticalCreativeToolsInState:toState:] */

ulong FUN_107e554e4(float param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010bf308c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010bf308c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c071b60();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar6 == 0) goto LAB_107e5592c;
  uVar1 = param_4;
  func_0x00010bfaee40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010bfaee40(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c071ae0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar6 == 0) goto LAB_107e5592c;
  uVar1 = param_4;
  func_0x00010bf8a020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010bf8a020(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c071b60();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar6 == 0) goto LAB_107e5592c;
  uVar1 = param_4;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c2553e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c071b60();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar6 == 0) goto LAB_107e5592c;
  uVar1 = param_4;
  func_0x00010bf0d660();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010bf0d660();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0 && uVar2 == 0) {
    _objc_release(0);
    _objc_release(0);
  }
  else {
    uVar6 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar6 == 0) goto LAB_107e5592c;
  }
  uVar6 = param_4;
  func_0x00010bf0f0e0();
  uVar1 = param_5;
  func_0x00010bf0f0e0();
  if ((int)uVar6 != (int)uVar1) {
LAB_107e556cc:
    uVar6 = 0;
    goto LAB_107e5592c;
  }
  uVar1 = param_4;
  func_0x00010bf0f140();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010bf0f140();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0 && uVar2 == 0) {
    _objc_release(0);
    _objc_release(0);
  }
  else {
    uVar6 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar6 == 0) goto LAB_107e5592c;
  }
  uVar1 = param_4;
  func_0x00010c0d36c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c0d36c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010bd86de8(uVar1,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar6 == 0) goto LAB_107e5592c;
  uVar1 = param_4;
  func_0x00010c2a09a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c2a09a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010bd86de8(uVar1,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar6 == 0) goto LAB_107e5592c;
  uVar1 = param_4;
  func_0x00010bf5c9c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010bf5c9c0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == uVar2) {
    _objc_release(uVar2);
    _objc_release(uVar1);
LAB_107e55894:
    uVar1 = param_4;
    func_0x00010c0cece0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_5;
    func_0x00010c0cece0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010bd86de8(uVar1,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar6 == 0) goto LAB_107e5592c;
    uVar1 = param_4;
    func_0x00010c0ced00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    uVar2 = param_5;
    fVar7 = param_1;
    func_0x00010c0ced00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    uVar6 = (ulong)(param_1 == fVar7);
  }
  else {
    uVar3 = param_5;
    func_0x00010bf5c9c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 0;
    if (uVar3 != 0) {
      uVar6 = param_4;
      func_0x00010bf5c9c0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_5;
      func_0x00010bf5c9c0(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar6;
      func_0x00010c072080();
      _objc_release(uVar4);
      _objc_release(uVar6);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((int)uVar5 == 0) goto LAB_107e556cc;
      goto LAB_107e55894;
    }
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
LAB_107e5592c:
  _objc_release(param_5);
  _objc_release(param_4);
  return uVar6;
}



/* Entry: 107e5595c; end: 107e55a97; -[SCTimelineSnapStateHandler _localStateWithSegment:timelineConfiguration:inoutNextStickerUniqueId:atIndex:] */

void FUN_107e5595c(undefined *param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c280560(param_3);
  lVar2 = param_4;
  func_0x00010bfcb200(param_4,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  if (lVar2 == 0) {
    param_1 = PTR_PTR_1126c4908;
    _objc_alloc(PTR_PTR_1126c4908);
    if (param_3 == 0) {
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x00010c27c900(&uStack_70,param_3);
    }
    uStack_98 = uStack_68;
    uStack_a0 = uStack_70;
    uStack_90 = uStack_60;
    func_0x00010c0522a0(param_1,param_2,&uStack_a0);
  }
  else {
    if (param_3 == 0) {
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      func_0x00010c27c900(&uStack_70,param_3);
      func_0x00010bf4d840(&uStack_a0,param_3);
    }
    func_0x00010be4f3e0(param_1,param_2,&uStack_70,&uStack_a0,lVar2,param_5,param_6);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107e55a98; end: 107e565b3; -[SCTimelineSnapStateHandler _localStateWithTrimmedTimeRange:contentTimeRange:memoriesImportSnapDoc:inoutNextStickerUniqueId:atIndex:] */

undefined *
FUN_107e55a98(long param_1,undefined *param_2,long *param_3,long *param_4,undefined *param_5,
             long *param_6)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  undefined *puVar20;
  undefined *puVar21;
  long lStack_300;
  undefined8 uStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_288;
  long lStack_80;
  undefined4 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  lStack_80 = *param_3;
  uStack_78 = (undefined4)param_3[1];
  uVar1 = *(uint *)((long)param_3 + 0xc);
  if ((uVar1 & 1) == 0) {
    puVar18 = (undefined *)0x0;
    goto LAB_107e5656c;
  }
  lVar15 = param_3[2];
  puVar18 = PTR_PTR_1126c4908;
  _objc_alloc();
  lStack_300 = lStack_80;
  uStack_2f8 = CONCAT44(uVar1,uStack_78);
  lStack_2f0 = lVar15;
  func_0x00010c0522a0();
  if ((param_5 == (undefined *)0x0) || (param_6 == (long *)0x0)) {
    _objc_retain(puVar18);
  }
  else {
    puVar2 = PTR_PTR_1126b0018;
    _objc_alloc();
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c047840();
    _objc_release(uVar3);
    puVar4 = *(undefined **)(param_1 + 0xa0);
    func_0x00010bf8cb40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126affe8;
    func_0x00010c09e180(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
    lStack_288 = 0;
    puVar6 = puVar2;
    func_0x00010c13e8e0();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lStack_288;
    _objc_retain(lStack_288);
    if ((lVar15 == 0) && (puVar6 != (undefined *)0x0)) {
      puVar7 = PTR_PTR_1126bcdd8;
      _objc_alloc();
      func_0x00010c0206e0();
      if (puVar7 == (undefined *)0x0) goto LAB_107e55d88;
      puVar16 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      lVar19 = param_1 + 0xf0;
      _objc_loadWeakRetained();
      lVar14 = lVar19;
      func_0x00010bf926c0();
      _objc_release(lVar19);
      if ((int)lVar14 == 0) {
        puVar8 = puVar7;
        FUN_107ff8a10();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x000109200044();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar16);
        _objc_release(puVar8);
        puVar16 = puVar9;
        func_0x00010bf529e0();
        if (-1 < (long)(puVar16 + -1)) {
          do {
            puVar16 = puVar16 + -1;
            puVar8 = puVar9;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            puVar21 = puVar8;
            func_0x00010c081660();
            if ((int)puVar21 != 0) {
              puVar21 = puVar8;
              func_0x00010c2790e0(puVar8);
              _objc_retainAutoreleasedReturnValue();
              uStack_2f8 = param_4[1];
              lStack_300 = *param_4;
              lStack_2e8 = param_4[3];
              lStack_2f0 = param_4[2];
              lStack_2d8 = param_4[5];
              lStack_2e0 = param_4[4];
              lVar19 = param_1;
              func_0x00010bed0080(param_1);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar21);
              func_0x00010c219440(puVar8);
              _objc_release(lVar19);
            }
            _objc_release(puVar8);
          } while (0 < (long)puVar16);
        }
      }
      else {
        puVar8 = PTR_PTR_1126affe8;
        func_0x00010bfccec0(PTR_PTR_1126affe8);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar4;
        func_0x00010c0ff580();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        uStack_2a8 = 0;
        uStack_2b0 = 0;
        uStack_298 = 0;
        uStack_2a0 = 0;
        uStack_2c8 = 0;
        uStack_2d0 = 0;
        uStack_2b8 = 0;
        plStack_2c0 = (long *)0x0;
        _objc_retain(puVar9);
        puVar8 = puVar9;
        func_0x00010bf52a60();
        if (puVar8 != (undefined *)0x0) {
          lVar19 = *plStack_2c0;
          do {
            puVar21 = (undefined *)0x0;
            do {
              if (*plStack_2c0 != lVar19) {
                _objc_enumerationMutation(puVar9);
              }
              puVar20 = puVar4;
              func_0x00010c0ff640(puVar4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1dd680();
              lVar14 = param_1 + 0xf0;
              _objc_loadWeakRetained(lVar14);
              func_0x00010befa9a0();
              _objc_unsafeClaimAutoreleasedReturnValue();
              _objc_release(lVar14);
              _objc_release(puVar20);
              puVar21 = puVar21 + 1;
            } while (puVar8 != puVar21);
            puVar8 = puVar9;
            func_0x00010bf52a60();
          } while (puVar8 != (undefined *)0x0);
        }
        _objc_release(puVar9);
        _objc_release(puVar9);
        puVar9 = puVar16;
      }
      func_0x00010c178c80(puVar18);
      puVar16 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      lVar19 = param_1 + 0xf0;
      _objc_loadWeakRetained();
      lVar14 = lVar19;
      func_0x00010bf926c0();
      _objc_release(lVar19);
      if ((int)lVar14 == 0) {
        puVar21 = puVar7;
        func_0x00010c2553e0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar21;
        func_0x00010bf52a60();
        lVar19 = lRam0000000000000000;
        while (puVar8 != (undefined *)0x0) {
          puVar20 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar19) {
              _objc_enumerationMutation(puVar21);
            }
            puVar17 = *(undefined **)((long)puVar20 * 8);
            uVar13 = *(undefined8 *)(param_1 + 0x88);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar13;
            func_0x00010c06f740();
            _objc_release(uVar13);
            if ((int)uVar3 == 0) {
              lVar14 = *param_6;
              *param_6 = lVar14 + 1;
              func_0x00010914e1b4(puVar17,lVar14,0);
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              puVar10 = *(undefined **)(param_1 + 0x88);
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              puVar11 = puVar7;
              func_0x00010bfaebe0(puVar7);
              _objc_retainAutoreleasedReturnValue();
              puVar12 = puVar11;
              func_0x00010bfedce0();
              _objc_retainAutoreleasedReturnValue();
              *param_6 = *param_6 + 1;
              puVar17 = puVar10;
              func_0x00010c255020();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar12);
              _objc_release(puVar11);
              _objc_release(puVar10);
            }
            puVar11 = puVar17;
            func_0x00010c081660();
            puVar12 = puVar17;
            if ((int)puVar11 != 0) {
              puVar11 = puVar17;
              func_0x00010c2790e0(puVar17);
              _objc_retainAutoreleasedReturnValue();
              uStack_2f8 = param_4[1];
              lStack_300 = *param_4;
              lStack_2e8 = param_4[3];
              lStack_2f0 = param_4[2];
              lStack_2d8 = param_4[5];
              lStack_2e0 = param_4[4];
              lVar14 = param_1;
              func_0x00010bed0080(param_1);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar11);
              puVar11 = PTR_PTR_1126d4dd0;
              func_0x00010c255040(PTR_PTR_1126d4dd0);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c2bbb60();
              _objc_unsafeClaimAutoreleasedReturnValue();
              puVar12 = puVar11;
              func_0x00010bf21f60(puVar11);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar17);
              _objc_release(puVar11);
              _objc_release(lVar14);
            }
            func_0x00010befa120(puVar16);
            _objc_release(puVar12);
            puVar20 = puVar20 + 1;
          } while (puVar8 != puVar20);
          puVar8 = puVar21;
          func_0x00010bf52a60();
        }
      }
      else {
        puVar8 = PTR_PTR_1126affe8;
        func_0x00010bfccec0(PTR_PTR_1126affe8);
        _objc_retainAutoreleasedReturnValue();
        puVar21 = puVar4;
        func_0x00010c0ff580();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        _objc_retain(puVar21);
        puVar8 = puVar21;
        func_0x00010bf52a60();
        lVar19 = lRam0000000000000000;
        while (puVar8 != (undefined *)0x0) {
          puVar20 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar19) {
              _objc_enumerationMutation(puVar21);
            }
            puVar17 = puVar4;
            func_0x00010c0ff640(puVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1dd680();
            lVar14 = param_1 + 0xf0;
            _objc_loadWeakRetained(lVar14);
            func_0x00010befa9a0();
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(lVar14);
            _objc_release(puVar17);
            puVar20 = puVar20 + 1;
          } while (puVar8 != puVar20);
          puVar8 = puVar21;
          func_0x00010bf52a60();
        }
        _objc_release(puVar21);
      }
      _objc_release(puVar21);
      func_0x00010c20bc80(puVar18);
      puVar8 = PTR_PTR_1126affe8;
      func_0x00010bfccec0(PTR_PTR_1126affe8);
      _objc_retainAutoreleasedReturnValue();
      puVar21 = puVar4;
      func_0x00010bf8a040();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar21;
      func_0x00010c0d3c80();
      _objc_release(puVar21);
      _objc_release(puVar8);
      puVar8 = puVar18;
      func_0x00010bf8a020();
      _objc_retainAutoreleasedReturnValue();
      puVar21 = puVar8;
      func_0x00010bf529e0();
      _objc_release(puVar8);
      if (puVar21 == (undefined *)0x0) {
        lVar19 = param_1;
        func_0x00010c0c2080();
        lStack_300 = lVar19 + 1;
        puVar8 = puVar7;
        FUN_107ff8ca8(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),puVar7,
                      &lStack_300);
        _objc_retainAutoreleasedReturnValue();
        puVar21 = puVar8;
        func_0x00010bf8a020();
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puVar21;
        func_0x000109200044();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c191a20(puVar18);
        _objc_release(puVar17);
        _objc_release(puVar21);
        func_0x00010c23ef60(puVar8);
        func_0x00010c1919c0(puVar18);
        _objc_release(puVar8);
      }
      lVar19 = param_1 + 0xf0;
      _objc_loadWeakRetained();
      lVar14 = lVar19;
      func_0x00010bf926c0();
      _objc_release(lVar19);
      if ((int)lVar14 == 0) {
        func_0x00010c191a20(puVar18);
      }
      else {
        _objc_retain(puVar20);
        puVar8 = puVar20;
        func_0x00010bf52a60();
        lVar19 = lRam0000000000000000;
        while (puVar8 != (undefined *)0x0) {
          puVar21 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar19) {
              _objc_enumerationMutation(puVar20);
            }
            lVar14 = param_1 + 0xf0;
            _objc_loadWeakRetained(lVar14);
            func_0x00010bef7e20();
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(lVar14);
            puVar21 = puVar21 + 1;
          } while (puVar8 != puVar21);
          puVar8 = puVar20;
          func_0x00010bf52a60();
        }
        _objc_release(puVar20);
      }
      uVar13 = *(undefined8 *)(param_1 + 200);
      func_0x00010c240000();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar13;
      func_0x00010bf926c0();
      _objc_release(uVar13);
      if ((int)uVar3 == 0) {
        func_0x00010c0c2640(PTR_PTR_1126bf720);
        func_0x000109200028();
        puVar8 = param_5;
        param_2 = puVar7;
        FUN_107ff9770(param_5,puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar21 = puVar8;
        func_0x00010c130740();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c186260(puVar18);
      }
      else {
        puVar21 = PTR_PTR_1126affe8;
        func_0x00010c09e180(PTR_PTR_1126affe8);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar4;
        FUN_107ffcb24(puVar4,puVar21);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar21);
        puVar21 = *(undefined **)(param_1 + 200);
        func_0x00010c240000(puVar21);
        _objc_retainAutoreleasedReturnValue();
        param_2 = puVar5;
        FUN_107ffcd08();
      }
      _objc_release(puVar21);
      _objc_release(puVar8);
      _objc_retain(puVar18);
      _objc_release(puVar20);
      _objc_release(puVar16);
      _objc_release(puVar9);
      _objc_release(puVar7);
    }
    else {
LAB_107e55d88:
      _objc_retain(puVar18);
    }
    _objc_release(puVar6);
    _objc_release(lVar15);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(puVar18);
LAB_107e5656c:
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar18);
    return puVar18;
  }
  ___stack_chk_fail();
  func_0x00010bf5cc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar18;
  func_0x00010c0cc820();
  _objc_release(puVar18);
  _objc_release(param_2);
  return (undefined *)(ulong)((int)puVar2 == 2);
}



/* Entry: 107e565b4; end: 107e565bb;  */

bool FUN_107e565b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf5cc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cc820();
  _objc_release(uVar1);
  _objc_release(param_2);
  return (int)uVar2 == 2;
}



/* Entry: 107e565bc; end: 107e56643;  */

undefined8 FUN_107e565bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf5cc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar3;
  func_0x00010c06f700(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar3);
  return uVar2;
}



/* Entry: 107e56644; end: 107e567af; -[SCTimelineSnapStateHandler _moveTrackingEditsFromLocalState:toGlobalState:] */

void FUN_107e56644(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c2553e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d500();
    _objc_release(lVar1);
    uVar3 = param_4;
    func_0x00010c2553e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160();
    _objc_release(uVar3);
  }
  lVar1 = param_3;
  func_0x00010bf308c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar4;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010bf308c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d500();
    _objc_release(lVar1);
    uVar3 = param_4;
    func_0x00010bf308c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160();
    _objc_release(uVar3);
  }
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e567b0; end: 107e567bf;  */

void FUN_107e567b0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c081670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_isTracking_1125fdfa8);
  return;
}



/* Entry: 107e567c0; end: 107e56be3; -[SCTimelineSnapStateHandler _trimImportTrajectory:importContentTimeRange:] */

void FUN_107e567c0(undefined8 param_1,undefined8 param_2,undefined *param_3,double *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  double *pdVar4;
  undefined8 uVar5;
  double dVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  double dVar10;
  double dVar11;
  double dStack_1a0;
  double dStack_198;
  double dStack_190;
  double dStack_180;
  double dStack_178;
  double dStack_170;
  double dStack_160;
  double dStack_158;
  double dStack_150;
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
  _objc_retain(param_3);
  if (((((*(byte *)((long)param_4 + 0xc) & 1) == 0) || ((*(byte *)((long)param_4 + 0x24) & 1) == 0))
      || (param_4[5] != 0.0)) || ((long)param_4[3] < 0)) {
    _objc_retain(param_3);
    puVar2 = param_3;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    dVar6 = 0.0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    _objc_retain(param_3);
    puVar2 = param_3;
    func_0x00010bf52a60();
    if (puVar2 != (undefined *)0x0) {
      lVar8 = *plStack_130;
      do {
        puVar9 = (undefined *)0x0;
        do {
          if (*plStack_130 != lVar8) {
            _objc_enumerationMutation(param_3);
          }
          lVar7 = *(long *)(lStack_138 + (long)puVar9 * 8);
          if (lVar7 == 0) {
            dStack_180 = 0.0;
            dStack_178 = 0.0;
            dStack_170 = 0.0;
          }
          else {
            func_0x00010c26f000(&dStack_180,lVar7);
          }
          dStack_198 = param_4[1];
          dStack_1a0 = *param_4;
          dStack_190 = param_4[2];
          _CMTimeAdd(&dStack_160,&dStack_180,&dStack_1a0);
          puVar3 = PTR_PTR_1126bb2a8;
          _objc_alloc(PTR_PTR_1126bb2a8);
          func_0x00010c27a460(lVar7);
          _objc_retainAutoreleasedReturnValue();
          dStack_178 = dStack_158;
          dStack_180 = dStack_160;
          dStack_170 = dStack_150;
          dVar6 = dStack_160;
          func_0x00010c052280(puVar3);
          _objc_release(lVar7);
          func_0x00010befa120(puVar1);
          _objc_release(puVar3);
          puVar9 = puVar9 + 1;
        } while (puVar2 != puVar9);
        puVar2 = param_3;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release(param_3);
    puVar2 = puVar1;
    func_0x00010bfb1920(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    func_0x00010c27a460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    dVar10 = dVar6;
    _objc_release(puVar9);
    _objc_release(puVar2);
    if (dVar6 != 0.0) {
      puVar2 = puVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 == (undefined *)0x0) {
        dStack_180 = 0.0;
        dStack_178 = 0.0;
        dStack_170 = 0.0;
      }
      else {
        func_0x00010c26f000(&dStack_180,puVar2);
      }
      dStack_190 = 0.0;
      dStack_198 = 2.12199580578724e-314;
      dStack_1a0 = 4.94065645841247e-324;
      _CMTimeSubtract(&dStack_160,&dStack_180,&dStack_1a0);
      _objc_release(puVar2);
      dStack_178 = dStack_158;
      dStack_180 = dStack_160;
      dStack_170 = dStack_150;
      dVar11 = *(double *)(PTR__kCMTimeZero_110348670 + 8);
      dVar10 = *(double *)PTR__kCMTimeZero_110348670;
      dVar6 = *(double *)(PTR__kCMTimeZero_110348670 + 0x10);
      pdVar4 = &dStack_180;
      dStack_1a0 = dVar10;
      dStack_198 = dVar11;
      dStack_190 = dVar6;
      _CMTimeCompare(pdVar4,&dStack_1a0);
      if ((int)pdVar4 < 1) {
        dStack_160 = dVar10;
        dStack_158 = dVar11;
        dStack_150 = dVar6;
      }
      dStack_178 = dStack_158;
      dStack_180 = dStack_160;
      dStack_170 = dStack_150;
      uVar5 = param_1;
      dVar10 = dStack_160;
      func_0x00010be36000();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066b00(puVar1);
      _objc_release(uVar5);
    }
    puVar2 = puVar1;
    func_0x00010c089820(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    func_0x00010c27a460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    _objc_release(puVar9);
    _objc_release(puVar2);
    if (dVar10 != 0.0) {
      puVar2 = puVar1;
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 == (undefined *)0x0) {
        dStack_180 = 0.0;
        dStack_178 = 0.0;
        dStack_170 = 0.0;
      }
      else {
        func_0x00010c26f000(&dStack_180,puVar2);
      }
      dStack_190 = 0.0;
      dStack_198 = 2.12199580578724e-314;
      dStack_1a0 = 4.94065645841247e-324;
      _CMTimeAdd(&dStack_160,&dStack_180,&dStack_1a0);
      _objc_release(puVar2);
      dStack_178 = dStack_158;
      dStack_180 = dStack_160;
      dStack_170 = dStack_150;
      func_0x00010be36000();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1);
      _objc_release(param_1);
    }
    puVar9 = puVar1;
    func_0x00010bf529e0();
    puVar2 = (undefined *)0x0;
    if (puVar9 != (undefined *)0x0) {
      puVar2 = puVar1;
    }
    _objc_retain(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126b2700;
    _objc_alloc(PTR_PTR_1126b2700);
    func_0x00010c055500(*(undefined8 *)PTR__CGPointZero_110347540,
                        *(undefined8 *)(PTR__CGPointZero_110347540 + 8),0,0);
    puVar2 = PTR_PTR_1126bb2a8;
    _objc_alloc(PTR_PTR_1126bb2a8);
    func_0x00010c052280();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107e56be4; end: 107e56c67; -[SCTimelineSnapStateHandler _hidingTransformAtTime:] */

void FUN_107e56be4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b2700;
  _objc_alloc(PTR_PTR_1126b2700);
  func_0x00010c055500(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8),0,0);
  puVar2 = PTR_PTR_1126bb2a8;
  _objc_alloc(PTR_PTR_1126bb2a8);
  func_0x00010c052280();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107e56c68; end: 107e56ccb; -[SCTimelineSnapStateHandler timelineConfiguration:didAddSegment:] */

void FUN_107e56c68(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c1581e0(param_3);
  func_0x00010be27480(param_1,param_2,param_3,param_4,lVar1 + -1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e56ccc; end: 107e56d8f; -[SCTimelineSnapStateHandler timelineConfiguration:didAddSegments:] */

void FUN_107e56ccc(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c1581e0(param_3);
  uVar2 = param_4;
  func_0x00010bf529e0(param_4);
  uVar4 = param_4;
  func_0x00010bf529e0();
  if (uVar4 != 0) {
    uVar4 = 0;
    do {
      uVar3 = param_4;
      func_0x00010c0dfd40(param_4,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be27480(param_1,param_2,param_3,uVar3,(lVar1 - uVar2) + uVar4);
      _objc_release(uVar3);
      uVar4 = uVar4 + 1;
      uVar3 = param_4;
      func_0x00010bf529e0();
    } while (uVar4 < uVar3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e56d90; end: 107e56f5b; -[SCTimelineSnapStateHandler timelineConfiguration:didDeleteSegment:atIndex:] */

void FUN_107e56d90(long param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (-1 < (long)param_5) {
    uVar1 = *(ulong *)(param_1 + 0xd0);
    func_0x00010bf529e0();
    if (param_5 < uVar1) {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                          *(undefined8 *)(param_1 + 0xd0));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d3c0();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0xd0);
      *(undefined **)(param_1 + 0xd0) = puVar3;
      _objc_release(uVar6);
      lVar4 = *(long *)(param_1 + 0xd0);
      func_0x00010bf529e0();
      lVar5 = param_3;
      func_0x00010c1581e0();
      if (lVar4 == lVar5) {
        uVar6 = *(undefined8 *)(param_1 + 0xd0);
        puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_50 = 0xc2000000;
        uStack_48 = 0x107e56ea4;
        puStack_40 = &UNK_110a0f8e0;
        _objc_retain(param_3);
        lStack_38 = param_3;
        func_0x00010bf97e80(uVar6,param_2,&puStack_58);
        _objc_release(lStack_38);
      }
      _objc_release(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e56f5c; end: 107e570e7; -[SCTimelineSnapStateHandler timelineConfiguration:didMoveSegment:atIndex:toDestinationIndex:] */

void FUN_107e56f5c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5,
                  ulong param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_5 != param_6) {
    uVar1 = *(ulong *)(param_1 + 0xd0);
    func_0x00010bf529e0();
    if (param_5 < uVar1) {
      uVar1 = *(ulong *)(param_1 + 0xd0);
      func_0x00010bf529e0();
      if (param_6 < uVar1) {
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                            *(undefined8 *)(param_1 + 0xd0));
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c0dfd20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d3c0(puVar2,param_2,param_5);
        func_0x00010c066b00(puVar2,param_2,puVar3,param_6);
        puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,puVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(param_1 + 0xd0);
        *(undefined **)(param_1 + 0xd0) = puVar4;
        _objc_release(uVar7);
        lVar5 = *(long *)(param_1 + 0xd0);
        func_0x00010bf529e0();
        lVar6 = param_3;
        func_0x00010c1581e0();
        if (lVar5 == lVar6) {
          uVar7 = *(undefined8 *)(param_1 + 0xd0);
          puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_70 = 0xc2000000;
          pcStack_68 = FUN_107e570e8;
          puStack_60 = &UNK_110a0f8e0;
          _objc_retain(param_3);
          lStack_58 = param_3;
          func_0x00010bf97e80(uVar7,param_2,&puStack_78);
          func_0x00010be524a0(param_1,param_2,param_4);
          _objc_release(lStack_58);
        }
        _objc_release(puVar3);
        _objc_release(puVar2);
      }
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e570e8; end: 107e5719f;  */

void FUN_107e570e8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x00010c27c900(&uStack_60,lVar2);
  }
  func_0x00010c214c20(param_2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 107e571a0; end: 107e57247; -[SCTimelineSnapStateHandler _logDirectSegmentReorderWithSegment:] */

void FUN_107e571a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf311e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c243320();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c243400(param_3);
  _objc_release(param_3);
  func_0x00010c0a4f60(uVar4,param_2,uVar1,lVar2,uVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e57248; end: 107e57277; -[SCTimelineSnapStateHandler timelineConfigurationDidEnterReorderMode:] */

void FUN_107e57248(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107e57278; end: 107e57287; -[SCTimelineSnapStateHandler timelineConfigurationDidExitReorderMode:] */

void FUN_107e57278(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e57288; end: 107e57327; -[SCTimelineSnapStateHandler timelineConfigurationDidRestoreToInitialState:] */

void FUN_107e57288(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x60);
  if (lVar1 != 0) {
    func_0x00010c0d3c80();
    uVar2 = *(undefined8 *)(param_1 + 0xd0);
    *(long *)(param_1 + 0xd0) = lVar1;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0xd0);
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_107e57328;
    puStack_30 = &UNK_110a0f8e0;
    _objc_retain(param_3);
    uStack_28 = param_3;
    func_0x00010bf97e80(uVar2,param_2,&puStack_48);
    _objc_release(uStack_28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e57328; end: 107e573df;  */

void FUN_107e57328(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x00010c27c900(&uStack_60,lVar2);
  }
  func_0x00010c214c20(param_2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 107e573e0; end: 107e573e3; -[SCTimelineSnapStateHandler timelineConfiguration:didUpdateSegmentTrim:atIndex:] */

void FUN_107e573e0(void)

{
  return;
}



/* Entry: 107e573e4; end: 107e573e7; -[SCTimelineSnapStateHandler timelineConfigurationWillDeleteAllSegments:] */

void FUN_107e573e4(void)

{
  return;
}



/* Entry: 107e573e8; end: 107e573eb; -[SCTimelineSnapStateHandler timelineConfigurationDidDeleteAllSegments:] */

void FUN_107e573e8(void)

{
  return;
}


