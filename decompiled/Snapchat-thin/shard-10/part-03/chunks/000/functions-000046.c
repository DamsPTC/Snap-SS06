/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107dc6d34; end: 107dc6d3b; -[SCOperaImageLayer isOverlay] */

undefined1 FUN_107dc6d34(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107dc6d3c; end: 107dc6d43; -[SCOperaImageLayer isUserInteractionDisabled] */

undefined1 FUN_107dc6d3c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 107dc6d44; end: 107dc6d4b; -[SCOperaImageLayer isEligibleForAsyncDecoding] */

undefined1 FUN_107dc6d44(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 107dc6d4c; end: 107dc6d53; -[SCOperaImageLayer resetStopwatchOnUnpauseForAttachment] */

undefined1 FUN_107dc6d4c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 107dc6d54; end: 107dc6d5f; -[SCOperaImageLayer .cxx_destruct] */

void FUN_107dc6d54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 107dc6d60; end: 107dc6dab; +[SCOperaInteractionButtonsLayer layerWithPage:] */

void FUN_107dc6d60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6970;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107dc6dac; end: 107dc6f6f; -[SCOperaInteractionButtonsLayer initWithPage:] */

undefined1 * FUN_107dc6dac(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126fb1a8;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + 8) = (char)uVar3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + 9) = (char)uVar3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + 10) = (char)uVar3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + 0xb) = (char)uVar3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + 0xc) = (char)uVar3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + 0xd) = (char)uVar3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    *(double *)((long)puVar1 + 0x10) = (double)param_1;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107dc6f70; end: 107dc6f77; -[SCOperaInteractionButtonsLayer type] */

undefined8 FUN_107dc6f70(void)

{
  return 0x1a;
}



/* Entry: 107dc6f78; end: 107dc7097; -[SCOperaInteractionButtonsLayer isEqual:] */

bool FUN_107dc6f78(double param_1,undefined *param_2,undefined8 param_3,undefined *param_4)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  
  _objc_retain(param_4);
  puVar3 = param_4;
  _objc_opt_class();
  puVar4 = PTR_PTR_1126d6970;
  _objc_opt_class();
  if (puVar3 == puVar4) {
    if (param_2 == param_4) {
      bVar2 = true;
    }
    else {
      _objc_retain(param_4);
      bVar1 = param_2[9];
      puVar3 = param_4;
      func_0x00010c2372c0();
      if (((((uint)bVar1 == (uint)puVar3) &&
           (bVar1 = param_2[10], puVar3 = param_4, func_0x00010c239c80(),
           (uint)bVar1 == (uint)puVar3)) &&
          (bVar1 = param_2[8], puVar3 = param_4, func_0x00010c236620(), (uint)bVar1 == (uint)puVar3)
          ) && (((bVar1 = param_2[0xb], puVar3 = param_4, func_0x00010c236360(),
                 (uint)bVar1 == (uint)puVar3 &&
                 (bVar1 = param_2[0xc], puVar3 = param_4, func_0x00010c237740(),
                 (uint)bVar1 == (uint)puVar3)) &&
                (bVar1 = param_2[0xd], puVar3 = param_4, func_0x00010c072ac0(),
                (uint)bVar1 == (uint)puVar3)))) {
        dVar5 = *(double *)(param_2 + 0x10);
        func_0x00010bfa0f80(param_4);
        bVar2 = dVar5 == param_1;
      }
      else {
        bVar2 = false;
      }
      _objc_release(param_4);
    }
  }
  else {
    bVar2 = false;
  }
  _objc_release(param_4);
  return bVar2;
}



/* Entry: 107dc7098; end: 107dc709f; -[SCOperaInteractionButtonsLayer showCameraButton] */

undefined1 FUN_107dc7098(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107dc70a0; end: 107dc70a7; -[SCOperaInteractionButtonsLayer showEditButton] */

undefined1 FUN_107dc70a0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107dc70a8; end: 107dc70af; -[SCOperaInteractionButtonsLayer showSendButton] */

undefined1 FUN_107dc70a8(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 107dc70b0; end: 107dc70b7; -[SCOperaInteractionButtonsLayer showBoomboxButton] */

undefined1 FUN_107dc70b0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 107dc70b8; end: 107dc70bf; -[SCOperaInteractionButtonsLayer showFavoriteButton] */

undefined1 FUN_107dc70b8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 107dc70c0; end: 107dc70c7; -[SCOperaInteractionButtonsLayer isFavorited] */

undefined1 FUN_107dc70c0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 107dc70c8; end: 107dc70cf; -[SCOperaInteractionButtonsLayer favoriteButtonTopOffset] */

undefined8 FUN_107dc70c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107dc70d0; end: 107dc70d7; -[SCOperaInteractionButtonsLayer showQuickPostStoryButton] */

undefined1 FUN_107dc70d0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 107dc70d8; end: 107dc7123; +[SCOperaLeftTapLayer layerWithPage:] */

void FUN_107dc70d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6940;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107dc7124; end: 107dc7157; -[SCOperaLeftTapLayer initWithPage:] */

void FUN_107dc7124(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126fb1b0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 107dc7158; end: 107dc715f; -[SCOperaLeftTapLayer type] */

undefined8 FUN_107dc7158(void)

{
  return 0xf;
}



/* Entry: 107dc7160; end: 107dc7197; -[SCOperaLeftTapLayer isEqual:] */

bool FUN_107dc7160(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  
  _objc_opt_class(param_3);
  puVar1 = PTR_PTR_1126d6940;
  _objc_opt_class(PTR_PTR_1126d6940);
  return param_3 == puVar1;
}



/* Entry: 107dc7198; end: 107dc71e3; +[SCOperaLoadingLayer layerWithPage:] */

void FUN_107dc7198(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6920;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107dc71e4; end: 107dc7557; -[SCOperaLoadingLayer initWithPage:] */

undefined1 * FUN_107dc71e4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR_PTR_1126fb1b8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c067fc0();
    *(ulong *)((long)puVar1 + 0x10) = uVar3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x20);
    *(ulong *)((long)puVar1 + 0x20) = uVar3;
    _objc_release(uVar6);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x18);
    *(ulong *)((long)puVar1 + 0x18) = uVar3;
    _objc_release(uVar6);
    _objc_release(uVar2);
    uVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar2 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    *(char *)((long)puVar1 + 8) = (char)uVar3;
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x28);
    *(ulong *)((long)puVar1 + 0x28) = uVar3;
    _objc_release(uVar6);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x30);
    *(ulong *)((long)puVar1 + 0x30) = uVar3;
    _objc_release(uVar6);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x38);
    *(ulong *)((long)puVar1 + 0x38) = uVar3;
    _objc_release(uVar6);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == 0) {
      *(undefined8 *)((long)puVar1 + 0x48) = 0;
    }
    else {
      uVar3 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c067fc0();
      *(ulong *)((long)puVar1 + 0x48) = uVar5;
      _objc_release(uVar3);
    }
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + 9) = (char)uVar3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x50);
    *(ulong *)((long)puVar1 + 0x50) = uVar2;
    _objc_release(uVar6);
    if ((*(long *)((long)puVar1 + 0x48) != 0) && (*(long *)((long)puVar1 + 0x50) == 0)) {
      *(undefined8 *)((long)puVar1 + 0x48) = 0;
    }
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == 0) {
      *(undefined8 *)((long)puVar1 + 0x40) = 0;
    }
    else {
      uVar3 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c067fc0();
      *(ulong *)((long)puVar1 + 0x40) = uVar5;
      _objc_release(uVar3);
    }
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107dc7558; end: 107dc755f; -[SCOperaLoadingLayer type] */

undefined8 FUN_107dc7558(void)

{
  return 7;
}



/* Entry: 107dc7560; end: 107dc7567; -[SCOperaLoadingLayer layerContentType] */

undefined8 FUN_107dc7560(void)

{
  return 2;
}



/* Entry: 107dc7568; end: 107dc78c3; -[SCOperaLoadingLayer isEqual:] */

bool FUN_107dc7568(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  _objc_retain(param_3);
  puVar3 = param_3;
  _objc_opt_class();
  puVar4 = PTR_PTR_1126d6920;
  _objc_opt_class();
  if (puVar3 != puVar4) {
    bVar2 = false;
    goto LAB_107dc789c;
  }
  if (param_1 == param_3) {
    bVar2 = true;
    goto LAB_107dc789c;
  }
  _objc_retain(param_3);
  puVar4 = *(undefined **)(param_1 + 0x10);
  puVar3 = param_3;
  func_0x00010c09d3c0();
  if (puVar4 == puVar3) {
    puVar4 = *(undefined **)(param_1 + 0x18);
    puVar3 = param_3;
    func_0x00010bf14100();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar4);
    _objc_retain(puVar3);
    if (puVar4 == puVar3) {
      _objc_release(puVar3);
      _objc_release(puVar4);
LAB_107dc7660:
      puVar5 = *(undefined **)(param_1 + 0x20);
      puVar4 = param_3;
      func_0x00010c260ca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar5);
      _objc_retain(puVar4);
      if (puVar5 == puVar4) {
        _objc_release(puVar4);
        _objc_release(puVar5);
LAB_107dc76d0:
        puVar6 = *(undefined **)(param_1 + 0x28);
        puVar5 = param_3;
        func_0x00010bf98c20();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar6);
        _objc_retain(puVar5);
        if (puVar6 == puVar5) {
          _objc_release(puVar5);
          _objc_release(puVar6);
LAB_107dc7740:
          puVar7 = *(undefined **)(param_1 + 0x30);
          puVar6 = param_3;
          func_0x00010bf98fe0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(puVar7);
          _objc_retain(puVar6);
          if (puVar7 == puVar6) {
            _objc_release(puVar6);
            _objc_release(puVar7);
LAB_107dc77b0:
            uVar8 = *(undefined8 *)(param_1 + 0x38);
            puVar7 = param_3;
            func_0x00010bf98900(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bd86de8(uVar8,puVar7);
            if ((((int)uVar8 != 0) &&
                (puVar9 = *(undefined **)(param_1 + 0x48), puVar10 = param_3, func_0x00010c09cca0(),
                puVar9 == puVar10)) &&
               (bVar1 = param_1[9], puVar10 = param_3, func_0x00010bf920a0(),
               (uint)bVar1 == (uint)puVar10)) {
              uVar8 = *(undefined8 *)(param_1 + 0x50);
              puVar10 = param_3;
              func_0x00010c117a00(param_3);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bd86de8(uVar8,puVar10);
              if (((int)uVar8 == 0) ||
                 (puVar11 = *(undefined **)(param_1 + 0x40), puVar9 = param_3, func_0x00010bf140e0()
                 , puVar11 != puVar9)) goto LAB_107dc7860;
              bVar1 = param_1[8];
              puVar9 = param_3;
              func_0x00010bf802e0(param_3);
              bVar2 = (uint)bVar1 == (uint)puVar9;
              goto LAB_107dc7864;
            }
            bVar2 = false;
          }
          else {
            if (puVar6 != (undefined *)0x0) {
              puVar10 = puVar7;
              func_0x00010c071ae0();
              _objc_release(puVar6);
              _objc_release(puVar7);
              if ((int)puVar10 == 0) goto LAB_107dc7798;
              goto LAB_107dc77b0;
            }
            puVar10 = (undefined *)0x0;
LAB_107dc7860:
            bVar2 = false;
LAB_107dc7864:
            _objc_release(puVar10);
          }
          _objc_release(puVar7);
        }
        else {
          if (puVar5 != (undefined *)0x0) {
            puVar7 = puVar6;
            func_0x00010c071ae0();
            _objc_release(puVar5);
            _objc_release(puVar6);
            if ((int)puVar7 == 0) goto LAB_107dc7728;
            goto LAB_107dc7740;
          }
LAB_107dc7798:
          bVar2 = false;
        }
        _objc_release(puVar6);
      }
      else {
        if (puVar4 != (undefined *)0x0) {
          puVar6 = puVar5;
          func_0x00010c071ae0();
          _objc_release(puVar4);
          _objc_release(puVar5);
          if ((int)puVar6 == 0) goto LAB_107dc76b8;
          goto LAB_107dc76d0;
        }
LAB_107dc7728:
        bVar2 = false;
      }
      _objc_release(puVar5);
LAB_107dc7884:
      _objc_release(puVar4);
    }
    else {
      if (puVar3 == (undefined *)0x0) {
LAB_107dc76b8:
        bVar2 = false;
        goto LAB_107dc7884;
      }
      puVar5 = puVar4;
      func_0x00010c071ae0();
      _objc_release(puVar3);
      _objc_release(puVar4);
      if ((int)puVar5 != 0) goto LAB_107dc7660;
      bVar2 = false;
    }
    _objc_release(puVar3);
  }
  else {
    bVar2 = false;
  }
  _objc_release(param_3);
LAB_107dc789c:
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 107dc78c4; end: 107dc78cb; -[SCOperaLoadingLayer loadingState] */

undefined8 FUN_107dc78c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107dc78cc; end: 107dc78d3; -[SCOperaLoadingLayer backgroundImageKey] */

undefined8 FUN_107dc78cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107dc78d4; end: 107dc78db; -[SCOperaLoadingLayer disableLoadingBackgroundBlurredEffectView] */

undefined1 FUN_107dc78d4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107dc78dc; end: 107dc78e3; -[SCOperaLoadingLayer subtext] */

undefined8 FUN_107dc78dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107dc78e4; end: 107dc78eb; -[SCOperaLoadingLayer errorHeaderText] */

undefined8 FUN_107dc78e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107dc78ec; end: 107dc78f3; -[SCOperaLoadingLayer errorSubText] */

undefined8 FUN_107dc78ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107dc78f4; end: 107dc78fb; -[SCOperaLoadingLayer errorButtonText] */

undefined8 FUN_107dc78f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107dc78fc; end: 107dc7903; -[SCOperaLoadingLayer enableTappingNext] */

undefined1 FUN_107dc78fc(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107dc7904; end: 107dc790b; -[SCOperaLoadingLayer backgroundImageContentMode] */

undefined8 FUN_107dc7904(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107dc790c; end: 107dc7913; -[SCOperaLoadingLayer loadingCycleStyle] */

undefined8 FUN_107dc790c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107dc7914; end: 107dc791b; -[SCOperaLoadingLayer progressRequestId] */

undefined8 FUN_107dc7914(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107dc791c; end: 107dc797b; -[SCOperaLoadingLayer .cxx_destruct] */

void FUN_107dc791c(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 107dc797c; end: 107dc79c7; +[SCOperaOptInDoorbellLayer layerWithPage:] */

void FUN_107dc797c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6980;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107dc79c8; end: 107dc7b57; -[SCOperaOptInDoorbellLayer initWithPage:] */

undefined1 * FUN_107dc79c8(float param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR_PTR_1126fb1c0;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + 8) = (char)uVar3;
    _objc_release(uVar2);
    uVar3 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar2 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    func_0x00010bfb2c80(uVar2);
    _objc_release(uVar2);
    *(double *)((long)puVar1 + 0x10) = (double)param_1;
    uVar3 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar2 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    *(char *)((long)puVar1 + 10) = (char)uVar3;
    *(bool *)((long)puVar1 + 9) = 0.0 < *(double *)((long)puVar1 + 0x10);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107dc7b58; end: 107dc7b5f; -[SCOperaOptInDoorbellLayer type] */

undefined8 FUN_107dc7b58(void)

{
  return 0x1e;
}



/* Entry: 107dc7b60; end: 107dc7c27; -[SCOperaOptInDoorbellLayer isEqual:] */

bool FUN_107dc7b60(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar3 = param_3;
  _objc_opt_class();
  puVar4 = PTR_PTR_1126d6980;
  _objc_opt_class();
  if (puVar3 == puVar4) {
    if (param_1 == param_3) {
      bVar2 = true;
    }
    else {
      _objc_retain(param_3);
      bVar1 = param_1[8];
      puVar3 = param_3;
      func_0x00010c079460();
      if (((uint)bVar1 == (uint)puVar3) &&
         (bVar1 = param_1[9], puVar3 = param_3, func_0x00010c07b480(), (uint)bVar1 == (uint)puVar3))
      {
        bVar1 = param_1[10];
        puVar3 = param_3;
        func_0x00010bf021e0(param_3);
        bVar2 = (uint)bVar1 == (uint)puVar3;
      }
      else {
        bVar2 = false;
      }
      _objc_release(param_3);
    }
  }
  else {
    bVar2 = false;
  }
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 107dc7c28; end: 107dc7c2f; -[SCOperaOptInDoorbellLayer isOptedIn] */

undefined1 FUN_107dc7c28(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107dc7c30; end: 107dc7c37; -[SCOperaOptInDoorbellLayer isProgressBarAlignedToTop] */

undefined1 FUN_107dc7c30(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107dc7c38; end: 107dc7c3f; -[SCOperaOptInDoorbellLayer topOffsetWhenOverMediaContent] */

undefined8 FUN_107dc7c38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107dc7c40; end: 107dc7c47; -[SCOperaOptInDoorbellLayer alwaysUseTopOffset] */

undefined1 FUN_107dc7c40(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 107dc7c48; end: 107dc7c93; +[SCOperaOptOutInterstitialLayer layerWithPage:] */

void FUN_107dc7c48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6960;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107dc7c94; end: 107dc7e13; -[SCOperaOptOutInterstitialLayer initWithPage:] */

undefined1 * FUN_107dc7c94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126fb1c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar4;
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar4);
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar4);
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c2827c0();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar4;
    _objc_release(uVar2);
    if (*(long *)((long)puVar1 + 0x20) == 0) {
      *(undefined8 *)((long)puVar1 + 0x20) = 2;
    }
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar4;
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107dc7e14; end: 107dc7e1b; -[SCOperaOptOutInterstitialLayer type] */

undefined8 FUN_107dc7e14(void)

{
  return 0x18;
}



/* Entry: 107dc7e1c; end: 107dc8023; -[SCOperaOptOutInterstitialLayer isEqual:] */

undefined * FUN_107dc7e1c(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  puVar3 = param_3;
  _objc_opt_class();
  puVar1 = PTR_PTR_1126d6960;
  _objc_opt_class();
  if (puVar3 != puVar1) {
    puVar3 = (undefined *)0x0;
    goto LAB_107dc8004;
  }
  if (param_1 == param_3) {
    puVar3 = (undefined *)0x1;
    goto LAB_107dc8004;
  }
  _objc_retain(param_3);
  puVar2 = *(undefined **)(param_1 + 0x18);
  puVar1 = param_3;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar2);
  _objc_retain(puVar1);
  if (puVar2 == puVar1) {
    _objc_release(puVar1);
    _objc_release(puVar2);
LAB_107dc7eec:
    puVar2 = *(undefined **)(param_1 + 0x20);
    puVar3 = param_3;
    func_0x00010c271500();
    if (puVar2 == puVar3) {
      puVar4 = *(undefined **)(param_1 + 0x28);
      puVar2 = param_3;
      func_0x00010c113060();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar4);
      _objc_retain(puVar2);
      if (puVar4 == puVar2) {
        _objc_release(puVar2);
        _objc_release(puVar4);
LAB_107dc7f78:
        puVar5 = *(undefined **)(param_1 + 0x10);
        puVar4 = param_3;
        func_0x00010c26e600();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar5);
        _objc_retain(puVar4);
        if (puVar5 == puVar4) {
          puVar3 = (undefined *)0x1;
        }
        else if (puVar4 == (undefined *)0x0) {
          puVar3 = (undefined *)0x0;
        }
        else {
          puVar3 = puVar5;
          func_0x00010c071ae0(puVar5,param_2,puVar4);
        }
        _objc_release(puVar4);
        _objc_release(puVar5);
      }
      else {
        if (puVar2 != (undefined *)0x0) {
          puVar3 = puVar4;
          func_0x00010c071ae0(puVar4,param_2,puVar2);
          _objc_release(puVar2);
          _objc_release(puVar4);
          if ((int)puVar3 == 0) goto LAB_107dc7f58;
          goto LAB_107dc7f78;
        }
        puVar3 = (undefined *)0x0;
      }
      _objc_release(puVar4);
      goto LAB_107dc7fec;
    }
LAB_107dc7f60:
    puVar3 = (undefined *)0x0;
  }
  else {
    if (puVar1 != (undefined *)0x0) {
      puVar3 = puVar2;
      func_0x00010c071ae0(puVar2,param_2,puVar1);
      _objc_release(puVar1);
      _objc_release(puVar2);
      if ((int)puVar3 != 0) goto LAB_107dc7eec;
      goto LAB_107dc7f60;
    }
LAB_107dc7f58:
    puVar3 = (undefined *)0x0;
LAB_107dc7fec:
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
LAB_107dc8004:
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 107dc8024; end: 107dc802b; -[SCOperaOptOutInterstitialLayer thumbnailViewProvider] */

undefined8 FUN_107dc8024(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107dc802c; end: 107dc8033; -[SCOperaOptOutInterstitialLayer thumbnailViewProviderIdentifier] */

undefined8 FUN_107dc802c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107dc8034; end: 107dc803b; -[SCOperaOptOutInterstitialLayer title] */

undefined8 FUN_107dc8034(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107dc803c; end: 107dc8043; -[SCOperaOptOutInterstitialLayer titleNumberOfLines] */

undefined8 FUN_107dc803c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107dc8044; end: 107dc804b; -[SCOperaOptOutInterstitialLayer primarySubtitle] */

undefined8 FUN_107dc8044(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107dc804c; end: 107dc8093; -[SCOperaOptOutInterstitialLayer .cxx_destruct] */

void FUN_107dc804c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107dc8094; end: 107dc80df; +[SCOperaRemoteVideoLayer layerWithPage:] */

void FUN_107dc8094(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d68f0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107dc80e0; end: 107dc82c7; -[SCOperaRemoteVideoLayer initWithPage:] */

undefined1 * FUN_107dc80e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126fb1d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar4;
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + 0x10) = (char)uVar4;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + 0x11) = (char)uVar4;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar4);
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar4);
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar4);
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar4);
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107dc82c8; end: 107dc82cf; -[SCOperaRemoteVideoLayer type] */

undefined8 FUN_107dc82c8(void)

{
  return 4;
}



/* Entry: 107dc82d0; end: 107dc864f; -[SCOperaRemoteVideoLayer localURLForRemoteURL:] */

undefined8 FUN_107dc82d0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lStack_1f8;
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
  _objc_retain(param_3);
  puVar3 = param_3;
  func_0x00010c11d6a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar14 = *(long *)(param_1 + 0x30);
  _objc_retain(lVar14);
  puVar4 = &uStack_1b0;
  lStack_1f8 = lVar14;
  func_0x00010bf52a60();
  if (lStack_1f8 != 0) {
    lVar8 = *plStack_1a0;
    do {
      lVar11 = 0;
      do {
        if (*plStack_1a0 != lVar8) {
          _objc_enumerationMutation(lVar14);
        }
        puVar10 = *(undefined8 **)(lStack_1a8 + lVar11 * 8);
        puVar4 = param_3;
        func_0x00010c0f5800();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar10;
        func_0x00010c0f5800();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar4;
        func_0x00010c0720c0();
        if ((int)puVar12 == 0) {
LAB_107dc8560:
          _objc_release(puVar7);
          _objc_release(puVar4);
        }
        else {
          puVar12 = param_3;
          func_0x00010bfe4420();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar10;
          func_0x00010bfe4420(puVar10);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar12;
          func_0x00010c0720c0();
          _objc_release(puVar13);
          _objc_release(puVar12);
          _objc_release(puVar7);
          _objc_release(puVar4);
          if ((int)puVar5 != 0) {
            func_0x00010c11d6a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_retain();
            puVar12 = puVar10;
            func_0x00010bf52a60();
            lVar2 = lRam0000000000000000;
            while (puVar12 != (undefined8 *)0x0) {
              puVar13 = (undefined8 *)0x0;
              do {
                if (lRam0000000000000000 != lVar2) {
                  _objc_enumerationMutation(puVar10);
                }
                puVar4 = puVar3;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                if (puVar4 != (undefined8 *)0x0) {
                  puVar7 = puVar3;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar5 = puVar10;
                  func_0x00010c0e00e0(puVar10);
                  _objc_retainAutoreleasedReturnValue();
                  puVar6 = puVar7;
                  func_0x00010c0720c0();
                  _objc_release(puVar5);
                  _objc_release(puVar7);
                  _objc_release(puVar4);
                  puVar7 = puVar10;
                  puVar4 = puVar10;
                  if ((int)puVar6 == 0) goto LAB_107dc8560;
                }
                puVar13 = (undefined8 *)((long)puVar13 + 1);
              } while (puVar12 != puVar13);
              puVar12 = puVar10;
              func_0x00010bf52a60();
            }
            _objc_release(puVar10);
            uVar9 = *(undefined8 *)(param_1 + 8);
            puVar7 = *(undefined8 **)(param_1 + 0x30);
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar7;
            func_0x00010bdc2c60();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar7);
            _objc_release(puVar10);
            goto LAB_107dc85f8;
          }
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 != lStack_1f8);
      puVar4 = &uStack_1b0;
      lStack_1f8 = lVar14;
      func_0x00010bf52a60();
    } while (lStack_1f8 != 0);
  }
  uVar9 = 0;
LAB_107dc85f8:
  _objc_release(lVar14);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
    return uVar9;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  puVar3 = puVar4;
  _objc_opt_class();
  puVar7 = (undefined8 *)PTR_PTR_1126d68f0;
  _objc_opt_class();
  if (puVar3 != puVar7) {
    uVar9 = 0;
    goto LAB_107dc887c;
  }
  if (param_3 == puVar4) {
    uVar9 = 1;
    goto LAB_107dc887c;
  }
  _objc_retain(puVar4);
  puVar7 = (undefined8 *)param_3[3];
  puVar3 = puVar4;
  func_0x00010bfb12c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar7);
  _objc_retain(puVar3);
  if (puVar7 == puVar3) {
    _objc_release(puVar3);
    _objc_release(puVar7);
LAB_107dc8724:
    bVar1 = *(byte *)(param_3 + 2);
    puVar7 = puVar4;
    func_0x00010c075940();
    if (((uint)bVar1 == (uint)puVar7) &&
       (bVar1 = *(byte *)((long)param_3 + 0x11), puVar7 = puVar4, func_0x00010c29b140(),
       (uint)bVar1 == (uint)puVar7)) {
      puVar12 = (undefined8 *)param_3[4];
      puVar7 = puVar4;
      func_0x00010c29a460();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar12);
      _objc_retain(puVar7);
      if (puVar12 == puVar7) {
        _objc_release(puVar7);
        _objc_release(puVar12);
LAB_107dc87c4:
        uVar9 = param_3[6];
        puVar12 = puVar4;
        func_0x00010c12a560(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bd86de8(uVar9,puVar12);
        if ((int)uVar9 == 0) goto LAB_107dc8848;
        uVar9 = param_3[5];
        puVar10 = puVar4;
        func_0x00010c112dc0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bd86de8(uVar9,puVar10);
        if ((int)uVar9 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = param_3[7];
          puVar13 = puVar4;
          func_0x00010c29bb40(puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bd86de8(uVar9,puVar13);
          _objc_release(puVar13);
        }
        _objc_release(puVar10);
      }
      else {
        if (puVar7 != (undefined8 *)0x0) {
          puVar10 = puVar12;
          func_0x00010c071ae0();
          _objc_release(puVar7);
          _objc_release(puVar12);
          if ((int)puVar10 == 0) goto LAB_107dc87a4;
          goto LAB_107dc87c4;
        }
LAB_107dc8848:
        uVar9 = 0;
      }
      _objc_release(puVar12);
      goto LAB_107dc8864;
    }
LAB_107dc87ac:
    uVar9 = 0;
  }
  else {
    if (puVar3 != (undefined8 *)0x0) {
      puVar12 = puVar7;
      func_0x00010c071ae0();
      _objc_release(puVar3);
      _objc_release(puVar7);
      if ((int)puVar12 != 0) goto LAB_107dc8724;
      goto LAB_107dc87ac;
    }
LAB_107dc87a4:
    uVar9 = 0;
LAB_107dc8864:
    _objc_release(puVar7);
  }
  _objc_release(puVar3);
  _objc_release(puVar4);
LAB_107dc887c:
  _objc_release(puVar4);
  return uVar9;
}



/* Entry: 107dc8650; end: 107dc889f; -[SCOperaRemoteVideoLayer isEqual:] */

undefined8 FUN_107dc8650(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  puVar2 = param_3;
  _objc_opt_class();
  puVar5 = PTR_PTR_1126d68f0;
  _objc_opt_class();
  if (puVar2 != puVar5) {
    uVar6 = 0;
    goto LAB_107dc887c;
  }
  if (param_1 == param_3) {
    uVar6 = 1;
    goto LAB_107dc887c;
  }
  _objc_retain(param_3);
  puVar5 = *(undefined **)(param_1 + 0x18);
  puVar2 = param_3;
  func_0x00010bfb12c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar5);
  _objc_retain(puVar2);
  if (puVar5 == puVar2) {
    _objc_release(puVar2);
    _objc_release(puVar5);
LAB_107dc8724:
    bVar1 = param_1[0x10];
    puVar5 = param_3;
    func_0x00010c075940();
    if (((uint)bVar1 == (uint)puVar5) &&
       (bVar1 = param_1[0x11], puVar5 = param_3, func_0x00010c29b140(), (uint)bVar1 == (uint)puVar5)
       ) {
      puVar7 = *(undefined **)(param_1 + 0x20);
      puVar5 = param_3;
      func_0x00010c29a460();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar7);
      _objc_retain(puVar5);
      if (puVar7 == puVar5) {
        _objc_release(puVar5);
        _objc_release(puVar7);
LAB_107dc87c4:
        uVar6 = *(undefined8 *)(param_1 + 0x30);
        puVar7 = param_3;
        func_0x00010c12a560(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bd86de8(uVar6,puVar7);
        if ((int)uVar6 == 0) goto LAB_107dc8848;
        uVar6 = *(undefined8 *)(param_1 + 0x28);
        puVar3 = param_3;
        func_0x00010c112dc0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bd86de8(uVar6,puVar3);
        if ((int)uVar6 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined8 *)(param_1 + 0x38);
          puVar4 = param_3;
          func_0x00010c29bb40(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bd86de8(uVar6,puVar4);
          _objc_release(puVar4);
        }
        _objc_release(puVar3);
      }
      else {
        if (puVar5 != (undefined *)0x0) {
          puVar3 = puVar7;
          func_0x00010c071ae0();
          _objc_release(puVar5);
          _objc_release(puVar7);
          if ((int)puVar3 == 0) goto LAB_107dc87a4;
          goto LAB_107dc87c4;
        }
LAB_107dc8848:
        uVar6 = 0;
      }
      _objc_release(puVar7);
      goto LAB_107dc8864;
    }
LAB_107dc87ac:
    uVar6 = 0;
  }
  else {
    if (puVar2 != (undefined *)0x0) {
      puVar7 = puVar5;
      func_0x00010c071ae0();
      _objc_release(puVar2);
      _objc_release(puVar5);
      if ((int)puVar7 != 0) goto LAB_107dc8724;
      goto LAB_107dc87ac;
    }
LAB_107dc87a4:
    uVar6 = 0;
LAB_107dc8864:
    _objc_release(puVar5);
  }
  _objc_release(puVar2);
  _objc_release(param_3);
LAB_107dc887c:
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 107dc88a0; end: 107dc88a7; -[SCOperaRemoteVideoLayer firstFrameImageKey] */

undefined8 FUN_107dc88a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107dc88a8; end: 107dc88af; -[SCOperaRemoteVideoLayer isInline] */

undefined1 FUN_107dc88a8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 107dc88b0; end: 107dc88b7; -[SCOperaRemoteVideoLayer videoRotationEnabled] */

undefined1 FUN_107dc88b0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 107dc88b8; end: 107dc88bf; -[SCOperaRemoteVideoLayer videoId] */

undefined8 FUN_107dc88b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107dc88c0; end: 107dc88c7; -[SCOperaRemoteVideoLayer primaryColor] */

undefined8 FUN_107dc88c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107dc88c8; end: 107dc88cf; -[SCOperaRemoteVideoLayer remoteURLToRelativePath] */

undefined8 FUN_107dc88c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107dc88d0; end: 107dc88d7; -[SCOperaRemoteVideoLayer videoURL] */

undefined8 FUN_107dc88d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107dc88d8; end: 107dc8937; -[SCOperaRemoteVideoLayer .cxx_destruct] */

void FUN_107dc88d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107dc8938; end: 107dc89bf; +[SCOperaRemoteVideoProxy shared] */

void FUN_107dc8938(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_107dc89c0;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam0000000113727f78 != -1) {
    func_0x00010002a2fc(0x113727f78,&puStack_48);
  }
  uVar1 = uRam0000000113727f80;
  _objc_retain(uRam0000000113727f80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107dc89c0; end: 107dc89e7;  */

void FUN_107dc89c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc_init();
  uVar1 = uRam0000000113727f80;
  uRam0000000113727f80 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107dc89e8; end: 107dc8a83; -[SCOperaRemoteVideoProxy init] */

undefined1 * FUN_107dc89e8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fb1d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010c156d80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    func_0x00010c2a2b60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    func_0x00010c2295c0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107dc8a84; end: 107dc8b97; -[SCOperaRemoteVideoProxy setupServer] */

void FUN_107dc8a84(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = PTR_PTR_1126c0018;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar1;
  _objc_release(uVar2);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107dc8b98;
  puStack_58 = &UNK_110a0cdd0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010bef9100(uVar2);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 107dc8b98; end: 107dc8ce3;  */

void FUN_107dc8b98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar1 = param_6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c25cf40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = param_2;
    func_0x00010c0720c0();
    if (((int)uVar1 == 0) || (uVar1 = uVar2, func_0x00010c0720c0(), (int)uVar1 == 0)) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR_PTR_1126c0020;
      _objc_alloc(PTR_PTR_1126c0020);
      func_0x00010c02bcc0();
    }
    _objc_release(uVar2);
  }
  _objc_release(param_1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107dc8ce4; end: 107dc8d6b;  */

void FUN_107dc8ce4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfd2440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  (**(code **)(param_3 + 0x10))(param_3,lVar1);
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107dc8d6c; end: 107dc8ef3; -[SCOperaRemoteVideoProxy startLoopbackServer] */

void FUN_107dc8d6c(undefined *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
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
  undefined8 uStack_f0;
  undefined1 auStack_e8 [128];
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_1;
  func_0x00010bf926c0();
  if ((int)puVar2 != 0) {
    ppuStack_68 = &PTR____CFConstantStringClassReference_110ebf298;
    ppuStack_60 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ccd48;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_60,&ppuStack_68,1
                       );
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    func_0x00010c15ef80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uStack_f0 = 0;
    func_0x00010c251b80();
    uVar1 = uStack_f0;
    _objc_retain(uStack_f0);
    _objc_release(puVar3);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar5 = *(long *)(param_1 + 0x10);
    _objc_retain(lVar5);
    lVar4 = lVar5;
    func_0x00010bf52a60(lVar5,param_2,&uStack_130,auStack_e8,0x10);
    if (lVar4 != 0) {
      lVar6 = *plStack_120;
      do {
        lVar7 = 0;
        do {
          if (*plStack_120 != lVar6) {
            _objc_enumerationMutation(lVar5);
          }
          func_0x00010c12a6c0(*(undefined8 *)(lStack_128 + lVar7 * 8));
          lVar7 = lVar7 + 1;
        } while (lVar4 != lVar7);
        lVar4 = lVar5;
        func_0x00010bf52a60(lVar5,param_2,&uStack_130,auStack_e8,0x10);
      } while (lVar4 != 0);
    }
    _objc_release(lVar5);
    _objc_release(uVar1);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = puVar2;
  func_0x00010c15f520();
  if ((int)puVar3 != 0) {
    func_0x00010c15ef80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c255780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 107dc8ef4; end: 107dc8f3f; -[SCOperaRemoteVideoProxy stopLoopbackServer] */

void FUN_107dc8ef4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c15f520();
  if ((int)uVar1 != 0) {
    func_0x00010c15ef80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c255780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107dc8f40; end: 107dc8fc7; -[SCOperaRemoteVideoProxy handleRequest:] */

void FUN_107dc8f40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf27440(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010c1249e0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
    param_1 = lVar1;
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107dc8fc8; end: 107dc9183; -[SCOperaRemoteVideoProxy cachedResponseForRequest:] */

void FUN_107dc8fc8(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  lVar7 = *(long *)(param_1 + 0x20);
  puVar2 = param_1;
  func_0x00010c12a540(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09e100(lVar7,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  lVar3 = lVar7;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    uVar4 = param_3;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0f58c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0720c0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    if ((int)uVar6 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d960(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,lVar3,0,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b57e0(param_1,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = param_1;
      func_0x00010bf64920(param_1,param_2,4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      ppuVar1 = &PTR____CFConstantStringClassReference_110ebe238;
      puVar8 = PTR_PTR_1126d7de8;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64a80(PTR__OBJC_CLASS___NSData_1126ae778,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = &PTR____CFConstantStringClassReference_110ebe218;
      puVar8 = PTR_PTR_1126d7de8;
    }
    PTR_PTR_1126d7de8 = puVar8;
    if (puVar2 != (undefined *)0x0) {
      func_0x00010c13bda0(puVar8,param_2,puVar2,ppuVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      goto LAB_107dc9150;
    }
  }
  puVar8 = (undefined *)0x0;
LAB_107dc9150:
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 107dc9184; end: 107dc91cf; -[SCOperaRemoteVideoProxy redirectResponseForRequest:] */

void FUN_107dc9184(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x00010c12a540();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c0028;
  _objc_alloc(PTR_PTR_1126c0028);
  func_0x00010c03d7e0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107dc91d0; end: 107dc9347; -[SCOperaRemoteVideoProxy remoteURLForRequest:] */

void FUN_107dc91d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010bdc2b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c057bc0(puVar1,param_2,uVar2,0);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c11d080(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9200(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c1f6900(puVar1,param_2,&PTR____CFConstantStringClassReference_110dc8d78);
  uVar2 = param_3;
  func_0x00010c11d080(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c0d3c80(uVar2);
  _objc_release(uVar2);
  func_0x00010c12d3e0(uVar3,param_2,&PTR____CFConstantStringClassReference_110ebe1d8);
  func_0x00010c12d3e0(uVar3,param_2,&PTR____CFConstantStringClassReference_110ebe1f8);
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010c25d520(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e6360(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = puVar1;
  func_0x00010bdc2b80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107dc9348; end: 107dc9533; -[SCOperaRemoteVideoProxy loopbackedPlaylistString:] */

undefined8 * FUN_107dc9348(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined8 uVar11;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  long lStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  long lStack_140;
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
  uStack_138 = param_1;
  _objc_retain(param_3);
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar6 = param_3;
  lStack_140 = param_3;
  func_0x00010bf44740(param_3,param_2,&PTR____CFConstantStringClassReference_110db2db8);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = &uStack_130;
  lVar2 = lVar6;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    param_3 = *plStack_120;
    unaff_x23 = &PTR____CFConstantStringClassReference_110dc8d58;
    unaff_x24 = &PTR____CFConstantStringClassReference_110db2698;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != param_3) {
          _objc_enumerationMutation(lVar6);
        }
        uVar11 = *(undefined8 *)(lStack_128 + lVar10 * 8);
        uVar3 = uVar11;
        func_0x00010bfda7c0(uVar11,param_2,&PTR____CFConstantStringClassReference_110dc8d58);
        if ((int)uVar3 == 0) {
          _objc_retain(uVar11);
        }
        else {
          puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
          func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,uVar11);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uStack_138;
          func_0x00010c0b5800(uStack_138,param_2,puVar4);
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar3;
          func_0x00010beec820();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar3);
          _objc_release(puVar4);
        }
        uStack_150 = uVar11;
        func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110db2698);
        _objc_release(uVar11);
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      puVar9 = &uStack_130;
      lVar2 = lVar6;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar6);
  puVar5 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  lVar2 = lStack_140;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_158 = FUN_107dc9534;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_190 = unaff_x24;
  ppuStack_188 = unaff_x23;
  lStack_180 = lVar6;
  puStack_178 = puVar1;
  puStack_170 = puVar5;
  lStack_168 = param_3;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  lVar6 = lVar2;
  func_0x00010c15f520();
  if ((int)lVar6 == 0) {
LAB_107dc9720:
    _objc_retain(puVar9);
    puVar5 = puVar9;
  }
  else {
    lVar6 = *(long *)(lVar2 + 0x20);
    func_0x00010c09e100(lVar6,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 == 0) goto LAB_107dc9720;
    puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    _objc_alloc();
    func_0x00010c057bc0();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar6 = lVar2;
    func_0x00010c15ef80(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar6;
    func_0x00010c104060();
    func_0x00010c0df840(puVar4,param_2,lVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ded80(puVar1,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(lVar6);
    ppuStack_1b8 = &PTR____CFConstantStringClassReference_110ebe1d8;
    puVar5 = puVar1;
    func_0x00010bfe4420();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_1b0 = &PTR____CFConstantStringClassReference_110ebe1f8;
    uStack_1a0 = *(undefined8 *)(lVar2 + 8);
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_1a8 = puVar5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_1a8,&ppuStack_1b8,
                        2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010c25d520(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c11d080(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010c25cde0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e6360(puVar1,param_2,puVar8);
    _objc_release(puVar8);
    _objc_release(puVar5);
    func_0x00010c1f6900(puVar1,param_2,&PTR____CFConstantStringClassReference_110dc8d58);
    func_0x00010c1a9200(puVar1,param_2,&PTR____CFConstantStringClassReference_110e8b7b8);
    puVar5 = puVar1;
    func_0x00010bdc2b80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar1);
  }
  _objc_release(puVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
    ___stack_chk_fail();
    func_0x00010c15ef80();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar9;
    func_0x00010c07cd60();
    _objc_release(puVar9);
    return puVar1;
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return puVar5;
}



/* Entry: 107dc9534; end: 107dc976b; -[SCOperaRemoteVideoProxy loopbackedURLForURL:] */

undefined * FUN_107dc9534(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c15f520();
  if ((int)lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c09e100(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
      _objc_alloc();
      func_0x00010c057bc0();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar1 = param_1;
      func_0x00010c15ef80(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c104060();
      func_0x00010c0df840(puVar4,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ded80(puVar2,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(lVar1);
      ppuStack_68 = &PTR____CFConstantStringClassReference_110ebe1d8;
      puVar4 = puVar2;
      func_0x00010bfe4420();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_60 = &PTR____CFConstantStringClassReference_110ebe1f8;
      uStack_50 = *(undefined8 *)(param_1 + 8);
      puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_58 = puVar4;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_58,&ppuStack_68,
                          2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010c25d520(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c11d080(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar4;
      func_0x00010c25cde0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e6360(puVar2,param_2,puVar7);
      _objc_release(puVar7);
      _objc_release(puVar4);
      func_0x00010c1f6900(puVar2,param_2,&PTR____CFConstantStringClassReference_110dc8d58);
      func_0x00010c1a9200(puVar2,param_2,&PTR____CFConstantStringClassReference_110e8b7b8);
      puVar4 = puVar2;
      func_0x00010bdc2b80(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar2);
      goto LAB_107dc972c;
    }
  }
  _objc_retain(param_3);
  puVar4 = param_3;
LAB_107dc972c:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x00010c15ef80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_3;
  func_0x00010c07cd60();
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 107dc976c; end: 107dc97a7; -[SCOperaRemoteVideoProxy serverRunning] */

undefined8 FUN_107dc976c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c15ef80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c07cd60();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107dc97a8; end: 107dc97af; -[SCOperaRemoteVideoProxy addListener:] */

void FUN_107dc97a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_addObject__11259c1f0)
  ;
  return;
}



/* Entry: 107dc97b0; end: 107dc9927; -[SCOperaRemoteVideoProxy cachedTSFileCount] */

long FUN_107dc97b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
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
  puVar2 = PTR_PTR_1126c9cb8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c15f520();
  _objc_release();
  if ((int)puVar1 == 0) {
    lVar5 = 0;
  }
  else {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    puVar2 = *(undefined **)(param_1 + 0x20);
    func_0x00010c12a560();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010bf52a60();
    if (puVar1 == (undefined *)0x0) {
      lVar5 = 0;
    }
    else {
      lVar5 = 0;
      lVar6 = *plStack_120;
      do {
        puVar7 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar6) {
            _objc_enumerationMutation(puVar2);
          }
          uVar3 = *(ulong *)(lStack_128 + (long)puVar7 * 8);
          func_0x00010c0f58c0(uVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c0720c0();
          _objc_release(uVar3);
          lVar5 = lVar5 + (uVar4 & 0xffffffff);
          puVar7 = puVar7 + 1;
        } while (puVar1 != puVar7);
        puVar1 = puVar2;
        func_0x00010bf52a60(puVar2,param_2,&uStack_130,auStack_e8,0x10);
      } while (puVar1 != (undefined *)0x0);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    return *(long *)(puVar2 + 0x20);
  }
  return lVar5;
}



/* Entry: 107dc9928; end: 107dc992f; -[SCOperaRemoteVideoProxy layer] */

undefined8 FUN_107dc9928(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107dc9930; end: 107dc995f; -[SCOperaRemoteVideoProxy setLayer:] */

void FUN_107dc9930(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107dc9960; end: 107dc9967; -[SCOperaRemoteVideoProxy enabled] */

undefined1 FUN_107dc9960(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 107dc9968; end: 107dc996f; -[SCOperaRemoteVideoProxy setEnabled:] */

void FUN_107dc9968(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 107dc9970; end: 107dc9977; -[SCOperaRemoteVideoProxy server] */

undefined8 FUN_107dc9970(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107dc9978; end: 107dc99a7; -[SCOperaRemoteVideoProxy setServer:] */

void FUN_107dc9978(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107dc99a8; end: 107dc99ef; -[SCOperaRemoteVideoProxy .cxx_destruct] */

void FUN_107dc99a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107dc99f0; end: 107dc9a3b; +[SCOperaRemoteWebLayer layerWithPage:] */

void FUN_107dc99f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6900;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107dc9a3c; end: 107dca3bf; -[SCOperaRemoteWebLayer initWithPage:] */

undefined8 *
FUN_107dc9a3c(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined **param_4)

{
  undefined1 uVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  ppuVar2 = param_4;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR_PTR_1126fb1e0;
  puVar3 = &uStack_70;
  uStack_70 = param_2;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    ppuVar4 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = puVar3[6];
    puVar3[6] = ppuVar4;
    _objc_release(uVar23);
    ppuVar4 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = puVar3[8];
    puVar3[8] = ppuVar4;
    _objc_release(uVar23);
    ppuVar4 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = puVar3[9];
    puVar3[9] = ppuVar4;
    _objc_release(uVar23);
    ppuVar5 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar21 = (undefined **)PTR____kCFBooleanTrue_11034ab68;
    ppuVar4 = (undefined **)PTR____kCFBooleanTrue_11034ab68;
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar4 = ppuVar5;
    }
    _objc_retain(ppuVar4);
    _objc_release(ppuVar5);
    ppuVar5 = ppuVar4;
    func_0x00010bf1f3c0();
    *(char *)(puVar3 + 1) = (char)ppuVar5;
    ppuVar6 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar22 = (undefined **)PTR____kCFBooleanFalse_11034ab60;
    ppuVar5 = (undefined **)PTR____kCFBooleanFalse_11034ab60;
    if (ppuVar6 != (undefined **)0x0) {
      ppuVar5 = ppuVar6;
    }
    _objc_retain(ppuVar5);
    _objc_release(ppuVar6);
    ppuVar6 = ppuVar5;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar3 + 9) = (char)ppuVar6;
    ppuVar7 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar21;
    if (ppuVar7 != (undefined **)0x0) {
      ppuVar6 = ppuVar7;
    }
    _objc_retain(ppuVar6);
    _objc_release(ppuVar7);
    ppuVar7 = ppuVar6;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar3 + 10) = (char)ppuVar7;
    ppuVar8 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar22;
    if (ppuVar8 != (undefined **)0x0) {
      ppuVar7 = ppuVar8;
    }
    _objc_retain(ppuVar7);
    _objc_release(ppuVar8);
    ppuVar8 = ppuVar7;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar3 + 0xb) = (char)ppuVar8;
    ppuVar9 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar22;
    if (ppuVar9 != (undefined **)0x0) {
      ppuVar8 = ppuVar9;
    }
    _objc_retain(ppuVar8);
    _objc_release(ppuVar9);
    ppuVar9 = ppuVar8;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar3 + 0xc) = (char)ppuVar9;
    *(undefined1 *)((long)puVar3 + 0xf) = 0;
    ppuVar10 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar22;
    if (ppuVar10 != (undefined **)0x0) {
      ppuVar9 = ppuVar10;
    }
    _objc_retain(ppuVar9);
    _objc_release(ppuVar10);
    ppuVar10 = ppuVar9;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar3 + 0x14) = (char)ppuVar10;
    ppuVar11 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar22;
    if (ppuVar11 != (undefined **)0x0) {
      ppuVar10 = ppuVar11;
    }
    _objc_retain(ppuVar10);
    _objc_release(ppuVar11);
    ppuVar11 = ppuVar10;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar3 + 0x15) = (char)ppuVar11;
    ppuVar11 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar11 == (undefined **)0x0) {
      lVar24 = 0;
    }
    else {
      ppuVar12 = ppuVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = ppuVar12;
      func_0x00010c067ec0();
      lVar24 = (long)(int)ppuVar13;
      _objc_release(ppuVar12);
    }
    _objc_release(ppuVar11);
    if (*(char *)((long)puVar3 + 0xf) != '\0') {
      lVar24 = 1;
    }
    puVar3[7] = lVar24;
    ppuVar12 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar22;
    if (ppuVar12 != (undefined **)0x0) {
      ppuVar11 = ppuVar12;
    }
    _objc_retain(ppuVar11);
    _objc_release(ppuVar12);
    ppuVar12 = ppuVar11;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar3 + 0xd) = (char)ppuVar12;
    ppuVar13 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar22;
    if (ppuVar13 != (undefined **)0x0) {
      ppuVar12 = ppuVar13;
    }
    _objc_retain(ppuVar12);
    _objc_release(ppuVar13);
    ppuVar13 = ppuVar12;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar3 + 0xe) = (char)ppuVar13;
    ppuVar14 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar22;
    if (ppuVar14 != (undefined **)0x0) {
      ppuVar13 = ppuVar14;
    }
    _objc_retain(ppuVar13);
    _objc_release(ppuVar14);
    ppuVar14 = ppuVar13;
    func_0x00010bf1f3c0();
    *(char *)(puVar3 + 2) = (char)ppuVar14;
    *(undefined2 *)((long)puVar3 + 0x11) = 0;
    *(undefined1 *)(puVar3 + 3) = 0;
    *(undefined1 *)((long)puVar3 + 0x13) = 0;
    ppuVar15 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar22;
    if (ppuVar15 != (undefined **)0x0) {
      ppuVar14 = ppuVar15;
    }
    _objc_retain(ppuVar14);
    _objc_release(ppuVar15);
    ppuVar15 = ppuVar14;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar3 + 0x16) = (char)ppuVar15;
    *(undefined1 *)((long)puVar3 + 0x17) = 0;
    puVar16 = PTR_PTR_1126d7df0;
    _objc_alloc();
    func_0x00010c03b740();
    uVar23 = puVar3[0xb];
    puVar3[0xb] = puVar16;
    _objc_release(uVar23);
    *(undefined1 *)((long)puVar3 + 0x19) = 0;
    ppuVar17 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar15 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar17 != (undefined **)0x0) {
      ppuVar15 = ppuVar17;
    }
    _objc_retain(ppuVar15);
    uVar23 = puVar3[0xe];
    puVar3[0xe] = ppuVar15;
    _objc_release(uVar23);
    _objc_release(ppuVar17);
    _objc_storeWeak(puVar3 + 10,param_4);
    ppuVar15 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = puVar3[0xc];
    puVar3[0xc] = ppuVar15;
    _objc_release(uVar23);
    ppuVar15 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = ppuVar15;
    func_0x00010c282760();
    puVar3[0xd] = (ulong)ppuVar17 & 0xffffffff;
    _objc_release(ppuVar15);
    *(undefined1 *)((long)puVar3 + 0x1a) = 0;
    ppuVar17 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar15 = ppuVar21;
    if (ppuVar17 != (undefined **)0x0) {
      ppuVar15 = ppuVar17;
    }
    uVar1 = SUB81(ppuVar15,0);
    func_0x00010bf1f3c0();
    *(undefined1 *)((long)puVar3 + 0x1b) = uVar1;
    _objc_release(ppuVar17);
    ppuVar17 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar15 = ppuVar22;
    if (ppuVar17 != (undefined **)0x0) {
      ppuVar15 = ppuVar17;
    }
    _objc_retain(ppuVar15);
    _objc_release(ppuVar17);
    ppuVar17 = ppuVar15;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar3 + 0x1d) = (char)ppuVar17;
    ppuVar18 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = ppuVar22;
    if (ppuVar18 != (undefined **)0x0) {
      ppuVar17 = ppuVar18;
    }
    _objc_retain(ppuVar17);
    _objc_release(ppuVar18);
    ppuVar18 = ppuVar17;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar3 + 0x1e) = (char)ppuVar18;
    ppuVar18 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar18 != (undefined **)0x0) {
      ppuVar18 = ppuVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar23 = puVar3[0xf];
      puVar3[0xf] = ppuVar18;
      _objc_release(uVar23);
    }
    ppuVar19 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar18 = ppuVar21;
    if (ppuVar19 != (undefined **)0x0) {
      ppuVar18 = ppuVar19;
    }
    _objc_retain(ppuVar18);
    _objc_release(ppuVar19);
    ppuVar19 = ppuVar18;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar3 + 0x1f) = (char)ppuVar19;
    ppuVar20 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = ppuVar22;
    if (ppuVar20 != (undefined **)0x0) {
      ppuVar19 = ppuVar20;
    }
    uVar1 = SUB81(ppuVar19,0);
    func_0x00010bf1f3c0();
    *(undefined1 *)((long)puVar3 + 0x1c) = uVar1;
    _objc_release(ppuVar20);
    ppuVar19 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = puVar3[0x10];
    puVar3[0x10] = ppuVar19;
    _objc_release(uVar23);
    ppuVar19 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar19 != (undefined **)0x0) {
      ppuVar21 = ppuVar19;
    }
    _objc_retain(ppuVar21);
    _objc_release(ppuVar19);
    ppuVar19 = ppuVar21;
    func_0x00010bf1f3c0();
    _objc_release(ppuVar21);
    *(char *)((long)puVar3 + 0x22) = (char)ppuVar19;
    ppuVar21 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = ppuVar21;
    func_0x00010bf1f3c0();
    *(char *)(puVar3 + 4) = (char)ppuVar19;
    _objc_release(ppuVar21);
    ppuVar21 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = ppuVar21;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar3 + 0x21) = (char)ppuVar19;
    _objc_release(ppuVar21);
    ppuVar21 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = puVar3[0x11];
    puVar3[0x11] = ppuVar21;
    _objc_release(uVar23);
    ppuVar21 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar21 != (undefined **)0x0) {
      func_0x00010bfb2c80(ppuVar21);
      *(undefined4 *)(puVar3 + 5) = param_1;
    }
    ppuVar19 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar20 = ppuVar19;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar3 + 0x23) = (char)ppuVar20;
    _objc_release(ppuVar19);
    ppuVar19 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar19 != (undefined **)0x0) {
      ppuVar22 = ppuVar19;
    }
    uVar1 = SUB81(ppuVar22,0);
    func_0x00010bf1f3c0();
    *(undefined1 *)((long)puVar3 + 0x24) = uVar1;
    _objc_release(ppuVar19);
    ppuVar22 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = puVar3[0x12];
    puVar3[0x12] = ppuVar22;
    _objc_release(uVar23);
    _objc_release(ppuVar21);
    _objc_release(ppuVar18);
    _objc_release(ppuVar17);
    _objc_release(ppuVar15);
    _objc_release(ppuVar14);
    _objc_release(ppuVar13);
    _objc_release(ppuVar12);
    _objc_release(ppuVar11);
    _objc_release(ppuVar10);
    _objc_release(ppuVar9);
    _objc_release(ppuVar8);
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
  }
  _objc_release(ppuVar2);
  _objc_release(param_4);
  return puVar3;
}



/* Entry: 107dca3c0; end: 107dca3c7; -[SCOperaRemoteWebLayer type] */

undefined8 FUN_107dca3c0(void)

{
  return 9;
}



/* Entry: 107dca3c8; end: 107dca957; -[SCOperaRemoteWebLayer isEqual:] */

undefined8 FUN_107dca3c8(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  undefined *puVar12;
  
  _objc_retain(param_3);
  puVar2 = param_3;
  _objc_opt_class();
  puVar4 = PTR_PTR_1126d6900;
  _objc_opt_class();
  if (puVar2 != puVar4) {
    uVar7 = 0;
    goto LAB_107dca8ec;
  }
  if (param_1 == param_3) {
    uVar7 = 1;
    goto LAB_107dca8ec;
  }
  _objc_retain(param_3);
  puVar4 = *(undefined **)(param_1 + 0x30);
  puVar2 = param_3;
  func_0x00010c2a3ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar4);
  _objc_retain(puVar2);
  if (puVar4 == puVar2) {
    _objc_release(puVar2);
    _objc_release(puVar4);
LAB_107dca4a8:
    puVar5 = *(undefined **)(param_1 + 0x40);
    puVar4 = param_3;
    func_0x00010c112dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar5);
    _objc_retain(puVar4);
    if (puVar5 == puVar4) {
      _objc_release(puVar4);
      _objc_release(puVar5);
LAB_107dca518:
      puVar6 = *(undefined **)(param_1 + 0x48);
      puVar5 = param_3;
      func_0x00010c09cbc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar6);
      _objc_retain(puVar5);
      if (puVar6 == puVar5) {
        _objc_release(puVar5);
        _objc_release(puVar6);
LAB_107dca588:
        puVar8 = *(undefined **)(param_1 + 0x58);
        puVar6 = param_3;
        func_0x00010c260780();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar8);
        _objc_retain(puVar6);
        if (puVar8 == puVar6) {
          _objc_release(puVar6);
          _objc_release(puVar8);
LAB_107dca5f4:
          bVar1 = param_1[8];
          puVar8 = param_3;
          func_0x00010c239e40();
          if ((((((uint)bVar1 != (uint)puVar8) ||
                (bVar1 = param_1[9], puVar8 = param_3, func_0x00010bf015e0(),
                (uint)bVar1 != (uint)puVar8)) ||
               (bVar1 = param_1[10], puVar8 = param_3, func_0x00010c137b80(),
               (uint)bVar1 != (uint)puVar8)) ||
              (((bVar1 = param_1[0xb], puVar8 = param_3, func_0x00010bf01a60(),
                (uint)bVar1 != (uint)puVar8 ||
                (bVar1 = param_1[0xc], puVar8 = param_3, func_0x00010bf01200(),
                (uint)bVar1 != (uint)puVar8)) ||
               ((puVar9 = *(undefined **)(param_1 + 0x38), puVar8 = param_3, func_0x00010c23aac0(),
                puVar9 != puVar8 ||
                ((bVar1 = param_1[0xd], puVar8 = param_3, func_0x00010c139e00(),
                 (uint)bVar1 != (uint)puVar8 ||
                 (bVar1 = param_1[0xf], puVar8 = param_3, func_0x00010c290260(),
                 (uint)bVar1 != (uint)puVar8)))))))) ||
             (((bVar1 = param_1[0xe], puVar8 = param_3, func_0x00010bf01400(),
               (uint)bVar1 != (uint)puVar8 ||
               (((bVar1 = param_1[0x14], puVar8 = param_3, func_0x00010bf83f40(),
                 (uint)bVar1 != (uint)puVar8 ||
                 (bVar1 = param_1[0x16], puVar8 = param_3, func_0x00010bf4fe80(),
                 (uint)bVar1 != (uint)puVar8)) ||
                (bVar1 = param_1[0x11], puVar8 = param_3, func_0x00010bf013e0(),
                (uint)bVar1 != (uint)puVar8)))) ||
              (((bVar1 = param_1[0x12], puVar8 = param_3, func_0x00010bf01120(),
                (uint)bVar1 != (uint)puVar8 ||
                (bVar1 = param_1[0x17], puVar8 = param_3, func_0x00010bf01300(),
                (uint)bVar1 != (uint)puVar8)) ||
               ((bVar1 = param_1[0x18], puVar8 = param_3, func_0x00010bf80b60(),
                (uint)bVar1 != (uint)puVar8 ||
                (bVar1 = param_1[0x19], puVar8 = param_3, func_0x00010c28ff00(),
                (uint)bVar1 != (uint)puVar8)))))))) goto LAB_107dca8c0;
          uVar7 = *(undefined8 *)(param_1 + 0x70);
          puVar8 = param_3;
          func_0x00010c28f380(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bd86de8(uVar7,puVar8);
          if (((((int)uVar7 == 0) ||
               (bVar1 = param_1[0x1a], puVar9 = param_3, func_0x00010c290ea0(),
               (uint)bVar1 != (uint)puVar9)) ||
              (bVar1 = param_1[0x1b], puVar9 = param_3, func_0x00010c239620(),
              (uint)bVar1 != (uint)puVar9)) ||
             (((bVar1 = param_1[0x1d], puVar9 = param_3, func_0x00010bf01580(),
               (uint)bVar1 != (uint)puVar9 ||
               (bVar1 = param_1[0x13], puVar9 = param_3, func_0x00010c23df40(),
               (uint)bVar1 != (uint)puVar9)) ||
              (bVar1 = param_1[0x1e], puVar9 = param_3, func_0x00010bf90d80(),
              (uint)bVar1 != (uint)puVar9)))) goto LAB_107dca918;
          puVar10 = *(undefined **)(param_1 + 0x78);
          puVar9 = param_3;
          func_0x00010c0d2720();
          _objc_retainAutoreleasedReturnValue();
          if ((puVar10 == puVar9) &&
             (bVar1 = param_1[0x1f], puVar10 = param_3, func_0x00010bfe68c0(),
             (uint)bVar1 == (uint)puVar10)) {
            puVar12 = *(undefined **)(param_1 + 0x80);
            puVar10 = param_3;
            func_0x00010c0d2740();
            _objc_retainAutoreleasedReturnValue();
            if (((puVar12 == puVar10) &&
                (bVar1 = param_1[0x22], puVar12 = param_3, func_0x00010bf90240(),
                (uint)bVar1 == (uint)puVar12)) &&
               (bVar1 = param_1[0x1c], puVar12 = param_3, func_0x00010c251b40(),
               (uint)bVar1 == (uint)puVar12)) {
              iVar11 = (int)*(undefined8 *)(param_1 + 0x88);
              puVar12 = param_3;
              func_0x00010bf13d40();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bd86de8();
              if (((iVar11 == 0) ||
                  (bVar1 = param_1[0x23], puVar3 = param_3, func_0x00010c234a80(),
                  (uint)bVar1 != (uint)puVar3)) ||
                 (bVar1 = param_1[0x24], puVar3 = param_3, func_0x00010c081400(),
                 (uint)bVar1 != (uint)puVar3)) {
                uVar7 = 0;
              }
              else {
                uVar7 = *(undefined8 *)(param_1 + 0x90);
                puVar3 = param_3;
                func_0x00010befd120(param_3);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bd86de8(uVar7,puVar3);
                _objc_release(puVar3);
              }
              _objc_release(puVar12);
            }
            else {
              uVar7 = 0;
            }
            _objc_release(puVar10);
          }
          else {
            uVar7 = 0;
          }
          _objc_release(puVar9);
        }
        else {
          if (puVar6 != (undefined *)0x0) {
            puVar9 = puVar8;
            func_0x00010c071ae0();
            _objc_release(puVar6);
            _objc_release(puVar8);
            if ((int)puVar9 == 0) goto LAB_107dca8c0;
            goto LAB_107dca5f4;
          }
LAB_107dca918:
          uVar7 = 0;
        }
        _objc_release(puVar8);
      }
      else {
        if (puVar5 != (undefined *)0x0) {
          puVar8 = puVar6;
          func_0x00010c071ae0();
          _objc_release(puVar5);
          _objc_release(puVar6);
          if ((int)puVar8 == 0) goto LAB_107dca570;
          goto LAB_107dca588;
        }
LAB_107dca8c0:
        uVar7 = 0;
      }
      _objc_release(puVar6);
    }
    else {
      if (puVar4 != (undefined *)0x0) {
        puVar6 = puVar5;
        func_0x00010c071ae0();
        _objc_release(puVar4);
        _objc_release(puVar5);
        if ((int)puVar6 == 0) goto LAB_107dca500;
        goto LAB_107dca518;
      }
LAB_107dca570:
      uVar7 = 0;
    }
    _objc_release(puVar5);
LAB_107dca8d4:
    _objc_release(puVar4);
  }
  else {
    if (puVar2 == (undefined *)0x0) {
LAB_107dca500:
      uVar7 = 0;
      goto LAB_107dca8d4;
    }
    puVar5 = puVar4;
    func_0x00010c071ae0();
    _objc_release(puVar2);
    _objc_release(puVar4);
    if ((int)puVar5 != 0) goto LAB_107dca4a8;
    uVar7 = 0;
  }
  _objc_release(puVar2);
  _objc_release(param_3);
LAB_107dca8ec:
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 107dca958; end: 107dca95f; -[SCOperaRemoteWebLayer webUrl] */

undefined8 FUN_107dca958(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107dca960; end: 107dca967; -[SCOperaRemoteWebLayer showShareButton] */

undefined1 FUN_107dca960(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107dca968; end: 107dca96f; -[SCOperaRemoteWebLayer allowURLIntercept] */

undefined1 FUN_107dca968(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}


