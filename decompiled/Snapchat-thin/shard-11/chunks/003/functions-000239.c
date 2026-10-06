/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10845a8e8; end: 10845a9d7;  */

void FUN_10845a8e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010c08fa60(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c1cea80(*(undefined8 *)(param_1 + 0x20));
  uVar1 = 0x19;
  func_0x000107c312b8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10845a9d8;
  puStack_60 = &UNK_110875f70;
  uStack_58 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = uVar2;
  _objc_retain(uVar3);
  uStack_38 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar3;
  _objc_retain(uVar2);
  uStack_48 = uVar2;
  func_0x000107c27d8c(uVar1,&puStack_78);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_40);
  _objc_release(uStack_50);
  return;
}



/* Entry: 10845a9d8; end: 10845ab6f;  */

void FUN_10845a9d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10845ab70;
  puStack_78 = &UNK_110845188;
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  uStack_70 = uVar7;
  uStack_68 = uVar8;
  _objc_retain(uVar6);
  uStack_58 = *(undefined8 *)(param_1 + 0x40);
  ppuVar3 = &puStack_90;
  uStack_60 = uVar6;
  _objc_retainBlock(ppuVar3);
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_10845ace0;
  puStack_b8 = &UNK_110845188;
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  uStack_b0 = uVar7;
  uStack_a8 = uVar8;
  _objc_retain(uVar6);
  uStack_98 = *(undefined8 *)(param_1 + 0x40);
  ppuVar4 = &puStack_d0;
  uStack_a0 = uVar6;
  _objc_retainBlock(ppuVar4);
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010be44460();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  if (iVar2 == 0) {
    uVar8 = uVar6;
    func_0x00010c0833a0(uVar6);
    func_0x00010c14a360(uVar6,param_2,uVar7,(uint)uVar8 ^ 1,ppuVar4,ppuVar3);
  }
  else {
    uVar8 = uVar6;
    func_0x00010bf26760(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar8;
    func_0x00010c0777a0();
    func_0x00010be98e40(uVar6,param_2,uVar7,uVar5,ppuVar4,ppuVar3);
    _objc_release(uVar8);
  }
  _objc_release(ppuVar4);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(ppuVar3);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  return;
}



/* Entry: 10845ab70; end: 10845ac0f;  */

void FUN_10845ab70(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10845ac10;
  puStack_48 = &UNK_110845188;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar2;
  uStack_38 = uVar3;
  _objc_retain(uVar1);
  uStack_28 = *(undefined8 *)(param_1 + 0x38);
  uStack_30 = uVar1;
  func_0x000107c312d0("APPSTORE",&puStack_60);
  _objc_release(uStack_30);
  _objc_release(uStack_38);
  return;
}



/* Entry: 10845ac10; end: 10845acdf;  */

void FUN_10845ac10(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  double dVar4;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = 0;
  }
  else {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x22) = 0;
    uVar1 = *(ulong *)(param_1 + 0x20);
  }
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf6b020(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa8500();
    _objc_release(uVar3);
  }
  dVar4 = 0.0;
  func_0x00010c1e4680(0,*(undefined8 *)(param_1 + 0x20));
  if (*(long *)(param_1 + 0x30) != 0) {
    _CACurrentMediaTime();
                    /* WARNING: Could not recover jumptable at 0x00010845accc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
              (dVar4 - *(double *)(param_1 + 0x38),*(long *)(param_1 + 0x30),1,0);
    return;
  }
  return;
}



/* Entry: 10845ace0; end: 10845ad7f;  */

void FUN_10845ace0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10845ad80;
  puStack_48 = &UNK_110845188;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar2;
  uStack_38 = uVar3;
  _objc_retain(uVar1);
  uStack_28 = *(undefined8 *)(param_1 + 0x38);
  uStack_30 = uVar1;
  func_0x000107c312d0("APPSTORE",&puStack_60);
  _objc_release(uStack_30);
  _objc_release(uStack_38);
  return;
}



/* Entry: 10845ad80; end: 10845ae93;  */

void FUN_10845ad80(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = 0;
  }
  else {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x22) = 0;
    uVar1 = *(ulong *)(param_1 + 0x20);
  }
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar2 & 1) == 0) {
    uVar2 = uVar1;
    _objc_opt_respondsToSelector(uVar1,PTR_s_fetchMediaDidSucceedForMedia__1125c7af0);
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) goto LAB_10845ae44;
    uVar1 = *(ulong *)(param_1 + 0x20);
    func_0x00010bf6b020(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa8520();
  }
  else {
    func_0x00010bfa8540(uVar1);
  }
  _objc_release(uVar1);
LAB_10845ae44:
  dVar3 = 1.0;
  func_0x00010c1e4680(0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20));
  if (*(long *)(param_1 + 0x30) != 0) {
    _CACurrentMediaTime();
                    /* WARNING: Could not recover jumptable at 0x00010845ae80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
              (dVar3 - *(double *)(param_1 + 0x38),*(long *)(param_1 + 0x30),1,0);
    return;
  }
  return;
}



/* Entry: 10845ae94; end: 10845ae9f;  */

void FUN_10845ae94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010845ae9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10845aea0; end: 10845af8f; -[Media _fetchMediaFailureCallbackWithCachedMediaId:downloadStartTime:completion:] */

void FUN_10845aea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_2);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10845af90;
  puStack_70 = &UNK_110a195a0;
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_68 = param_4;
  uStack_60 = param_5;
  uStack_50 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_4);
  ppuVar1 = &puStack_88;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10845af90; end: 10845b0fb;  */

void FUN_10845af90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c0720c0();
    if (iVar1 != 0) {
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_10845b0fc;
      puStack_90 = &UNK_110948760;
      lStack_88 = lVar2;
      _objc_retain(param_2);
      uStack_80 = param_2;
      _objc_retain(param_3);
      uStack_78 = param_3;
      _objc_retain(param_4);
      uStack_70 = param_4;
      _objc_retain(lVar3);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      lStack_68 = lVar3;
      _objc_retain(uVar4);
      uStack_58 = *(undefined8 *)(param_1 + 0x38);
      uStack_60 = uVar4;
      func_0x000107c312d0("APPSTORE",&puStack_a8);
      _objc_release(uStack_60);
      _objc_release(lStack_68);
      _objc_release(uStack_70);
      _objc_release(uStack_78);
      _objc_release(uStack_80);
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10845b0fc; end: 10845b1d7;  */

void FUN_10845b0fc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  double dVar4;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = 0;
  }
  else {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x22) = 0;
    uVar1 = *(ulong *)(param_1 + 0x20);
  }
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if ((uVar2 & 1) == 0) {
    func_0x00010bfa8560(uVar3);
  }
  else {
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa8740();
    _objc_release(uVar3);
  }
  dVar4 = 0.0;
  func_0x00010c1e4680(0,*(undefined8 *)(param_1 + 0x20));
  if (*(long *)(param_1 + 0x48) != 0) {
    _CACurrentMediaTime();
                    /* WARNING: Could not recover jumptable at 0x00010845b1c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x48) + 0x10))
              (dVar4 - *(double *)(param_1 + 0x50),*(long *)(param_1 + 0x48),0,
               *(undefined8 *)(param_1 + 0x38));
    return;
  }
  return;
}



/* Entry: 10845b1d8; end: 10845b3a3; -[Media fetchMediaFailureHelper:error:] */

void FUN_10845b1d8(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c252ee0();
  uVar3 = param_1;
  if (lVar1 == 0x19a) {
    uVar4 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    _objc_opt_respondsToSelector();
    _objc_release(uVar4);
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar2 & 1) == 0) goto LAB_10845b33c;
    func_0x00010bfa86a0(uVar3);
  }
  else {
    lVar1 = param_3;
    func_0x00010c252ee0();
    if (lVar1 == 0x194) {
      uVar4 = param_1;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      _objc_opt_respondsToSelector();
      _objc_release(uVar4);
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      if ((uVar2 & 1) != 0) {
        func_0x00010bfa8700(uVar3);
        goto LAB_10845b37c;
      }
    }
    else {
      lVar1 = param_3;
      func_0x00010c252ee0();
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 400) {
        uVar4 = uVar3;
        _objc_opt_respondsToSelector(uVar3,PTR_s_fetchMediaBadRequestForMedia__1125c7ad0);
        _objc_release(uVar3);
        uVar3 = param_1;
        func_0x00010bf6b020();
        _objc_retainAutoreleasedReturnValue();
        if ((uVar4 & 1) != 0) {
          func_0x00010bfa84a0(uVar3);
          goto LAB_10845b37c;
        }
      }
    }
LAB_10845b33c:
    uVar4 = uVar3;
    _objc_opt_respondsToSelector(uVar3,PTR_s_fetchMediaDidFailForMedia_error__1125c7ae8);
    _objc_release(uVar3);
    if ((uVar4 & 1) == 0) goto LAB_10845b384;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa8500();
    uVar3 = param_1;
  }
LAB_10845b37c:
  _objc_release(uVar3);
LAB_10845b384:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10845b3a4; end: 10845b54f; -[Media _fetchMediaInBackgroundQueueWithUserInitiated:withDownloadStartTime:userSession:completion:] */

void FUN_10845b3a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_2;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c1350c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  _objc_opt_class(param_2);
  func_0x00010bec6540();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_2);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_10845b550;
  puStack_b0 = &UNK_1109470b8;
  _objc_copyWeak(auStack_80,auStack_68);
  uStack_a8 = uVar2;
  uStack_a0 = uVar3;
  uStack_98 = uVar1;
  uStack_90 = param_5;
  uStack_88 = param_6;
  uStack_78 = param_1;
  uStack_70 = param_4;
  _objc_retain(param_5);
  _objc_retain(uVar1);
  _objc_retain(uVar3);
  _objc_retain(param_6);
  _objc_retain(uVar2);
  func_0x000107c27d8c(uVar4,&puStack_c8);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_88);
  _objc_release(uStack_a8);
  _objc_release(param_5);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar4);
  return;
}



/* Entry: 10845b550; end: 10845bb0b;  */

void FUN_10845b550(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  uVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (uVar1 == 0) goto LAB_10845bae4;
  func_0x00010c0d7240(*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(ulong *)(param_1 + 0x20);
  _objc_opt_respondsToSelector(uVar2,PTR_s_usingD2SForMedia__112682d18);
  if ((uVar2 & 1) == 0) {
    iVar14 = 0;
  }
  else {
    iVar14 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c294bc0();
  }
  uVar2 = *(ulong *)(param_1 + 0x20);
  _objc_opt_respondsToSelector(uVar2,PTR_s_URLForMedia__11254e550);
  if ((uVar2 & 1) == 0) {
LAB_10845b650:
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_10845bb0c;
    puStack_80 = &UNK_11085b7b0;
    lVar3 = *(long *)(param_1 + 0x40);
    uStack_78 = uVar1;
    _objc_retain(lVar3);
    uStack_68 = *(undefined8 *)(param_1 + 0x50);
    lStack_70 = lVar3;
    func_0x000107c312d0("APPSTORE",&puStack_98);
    lVar3 = lStack_70;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010bdc2ec0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) goto LAB_10845b650;
    uVar2 = uVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    if ((uVar11 & 1) != 0) {
      uVar2 = uVar1;
      func_0x00010bf6b020(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7bb20();
      _objc_release(uVar2);
    }
    uVar2 = uVar1;
    func_0x00010c080f20();
    if ((uVar2 & 1) == 0) {
      uVar2 = *(ulong *)(param_1 + 0x20);
      _objc_opt_respondsToSelector(uVar2,PTR_s_requestPriorityUserInitiated__11262b2d0);
      if ((uVar2 & 1) != 0) {
        func_0x00010c1362c0();
      }
      if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
        puVar4 = PTR_PTR_1126cb2d0;
        func_0x00010c22ba80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c27b040();
        _objc_release(puVar4);
      }
    }
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    if (iVar14 != 0) {
      ppuVar5 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cfa00;
      func_0x00010bf6e340(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cfa00);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar4);
      _objc_release(ppuVar5);
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      func_0x00010c0df720(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf6e340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar4);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      uVar2 = uVar1;
      func_0x00010bf643e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = &PTR____CFConstantStringClassReference_110edbd98;
      _NSSelectorFromString(&PTR____CFConstantStringClassReference_110edbd98);
      uVar11 = uVar2;
      _objc_opt_respondsToSelector(uVar2,ppuVar5);
      if ((uVar11 & 1) != 0) {
        uVar11 = uVar2;
        func_0x00010c296f60(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar4);
        _objc_release(uVar11);
      }
      _objc_release(uVar2);
    }
    puVar7 = PTR_PTR_1126b4960;
    uVar2 = uVar1;
    func_0x00010c135a00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf58760(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar2;
    _objc_opt_respondsToSelector();
    if ((uVar11 & 1) == 0) {
LAB_10845ba08:
      _objc_release(uVar2);
    }
    else {
      uVar11 = uVar1;
      func_0x00010bf643e0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar11;
      _objc_opt_respondsToSelector();
      if ((uVar9 & 1) == 0) {
LAB_10845ba00:
        _objc_release(uVar11);
        goto LAB_10845ba08;
      }
      uVar9 = uVar1;
      func_0x00010bf643e0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      _objc_opt_respondsToSelector();
      _objc_release(uVar9);
      _objc_release(uVar11);
      _objc_release(uVar2);
      if ((uVar10 & 1) != 0) {
        uVar2 = uVar1;
        func_0x00010bf643e0();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar2;
        func_0x00010c278ee0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar2);
        if (uVar11 != 0) {
          uVar2 = *(ulong *)(param_1 + 0x20);
          _objc_opt_respondsToSelector(uVar2,PTR_s_trackingMediaTypeForMedia__11267be00);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = *(ulong *)(param_1 + 0x20);
            func_0x00010c278f60(uVar2);
            _objc_retainAutoreleasedReturnValue();
          }
          uVar11 = *(ulong *)(param_1 + 0x20);
          func_0x00010c278ee0(uVar11);
          _objc_retainAutoreleasedReturnValue();
          uVar12 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010c279140(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c278ea0(*(undefined8 *)(param_1 + 0x20));
          func_0x00010c219380(puVar7);
          _objc_release(uVar12);
          goto LAB_10845ba00;
        }
      }
    }
    uVar2 = uVar1;
    func_0x00010be127c0(*(undefined8 *)(param_1 + 0x50),uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar1;
    func_0x00010be125c0(*(undefined8 *)(param_1 + 0x50),uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e860(puVar7);
    uVar12 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c135d00(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = 0x15;
    func_0x000107c312b8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f660(uVar12);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar2);
    _objc_release(puVar7);
    _objc_release(puVar4);
  }
  _objc_release(lVar3);
LAB_10845bae4:
  _objc_release(uVar1);
  return;
}



/* Entry: 10845bb0c; end: 10845bbf3;  */

void FUN_10845bb0c(double param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  *(undefined1 *)(*(long *)(param_2 + 0x20) + 0x22) = 0;
  uVar1 = *(ulong *)(param_2 + 0x20);
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010bf6b020(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa8500();
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    _CACurrentMediaTime();
                    /* WARNING: Could not recover jumptable at 0x00010845bbe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_2 + 0x28) + 0x10))
              (param_1 - *(double *)(param_2 + 0x30),*(long *)(param_2 + 0x28),0,0);
    return;
  }
  return;
}



/* Entry: 10845bbf4; end: 10845bc33; -[Media _storyMediaCache] */

void FUN_10845bbf4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
    func_0x000108f21a74();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
    param_1 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10845bc34; end: 10845bc7f; -[Media uploadMediaId] */

void FUN_10845bc34(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c28db60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c28e200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10845bc80; end: 10845bcd3; +[Media _submitRequestQueue] */

void FUN_10845bc80(void)

{
  undefined8 uVar1;
  
  if (lRam000000011372b8f0 != -1) {
    func_0x000107c27d9c(0x11372b8f0,&PTR___NSConcreteGlobalBlock_110a493f8);
  }
  uVar1 = uRam000000011372b8e8;
  _objc_retain(uRam000000011372b8e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10845bcd4; end: 10845bd03;  */

void FUN_10845bcd4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = &UNK_10f499f8c;
  _dispatch_queue_create(&UNK_10f499f8c,0);
  uVar1 = puRam000000011372b8e8;
  puRam000000011372b8e8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10845bd04; end: 10845bf1f; -[Media storyCaptionMetadata] */

void FUN_10845bd04(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  func_0x00010c2592a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = (undefined *)0x0;
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010c2592a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c27dd80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = PTR_PTR_1126d96c8;
      _objc_opt_new(PTR_PTR_1126d96c8);
      lVar1 = param_1;
      func_0x00010c2592a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb4080();
      func_0x00010c19e5c0(puVar5);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010c2592a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf348a0();
      func_0x00010c17a840(puVar5);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010c2592a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf34900();
      func_0x00010c17a860(puVar5);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010c2592a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c141d40();
      func_0x00010c1ee7a0(puVar5);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010c2592a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c279180();
      func_0x00010c2192a0(puVar5,param_2,lVar2);
      _objc_release(lVar1);
      func_0x00010c2592a0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010c27dd80();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010b76bab0();
      _objc_release(lVar1);
      _objc_release(param_1);
      if (lVar2 < -0x2ee282b6) {
        if (lVar2 == -0x79209ddf) {
          uVar4 = 0;
        }
        else {
          if (lVar2 != -0x649ebd07) goto LAB_10845bf0c;
          uVar4 = 1;
        }
      }
      else if (lVar2 == -0x2ee282b6) {
        uVar4 = 3;
      }
      else if (lVar2 == 0) {
        uVar4 = 0xfbadbeef;
      }
      else {
        if (lVar2 != 0x38c476c7) goto LAB_10845bf0c;
        uVar4 = 2;
      }
      func_0x00010c21acc0(puVar5,param_2,uVar4);
    }
  }
LAB_10845bf0c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10845bf20; end: 10845bf37; -[Media dataSource] */

void FUN_10845bf20(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845bf38; end: 10845bf43; -[Media setDataSource:] */

void FUN_10845bf38(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 10845bf44; end: 10845bf4b; -[Media numBytes] */

undefined8 FUN_10845bf44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10845bf4c; end: 10845bf53; -[Media setNumBytes:] */

void FUN_10845bf4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 10845bf54; end: 10845bf6b; -[Media cacheInfoDataSource] */

void FUN_10845bf54(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845bf6c; end: 10845bf77; -[Media setCacheInfoDataSource:] */

void FUN_10845bf6c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 10845bf78; end: 10845bf7f; -[Media mediaDataToUpload] */

undefined8 FUN_10845bf78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10845bf80; end: 10845bf97; -[Media delegate] */

void FUN_10845bf80(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845bf98; end: 10845bfa3; -[Media setDelegate:] */

void FUN_10845bf98(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 10845bfa4; end: 10845bfab; -[Media captionScreenPosition] */

undefined8 FUN_10845bfa4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10845bfac; end: 10845bfdb; -[Media setCaptionScreenPosition:] */

void FUN_10845bfac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10845bfdc; end: 10845bfe3; -[Media captionOrientation] */

undefined8 FUN_10845bfdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10845bfe4; end: 10845c013; -[Media setCaptionOrientation:] */

void FUN_10845bfe4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10845c014; end: 10845c01b; -[Media captionText] */

undefined8 FUN_10845c014(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10845c01c; end: 10845c04b; -[Media setCaptionText:] */

void FUN_10845c01c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10845c04c; end: 10845c053; -[Media storyCaptionInfo] */

undefined8 FUN_10845c04c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10845c054; end: 10845c083; -[Media setStoryCaptionInfo:] */

void FUN_10845c054(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10845c084; end: 10845c08b; -[Media attachmentUrl] */

undefined8 FUN_10845c084(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10845c08c; end: 10845c093; -[Media setAttachmentUrl:] */

void FUN_10845c08c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10845c094; end: 10845c09b; -[Media venueId] */

undefined8 FUN_10845c094(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10845c09c; end: 10845c0a3; -[Media setVenueId:] */

void FUN_10845c09c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10845c0a4; end: 10845c0ab; -[Media overlayPresent] */

undefined1 FUN_10845c0a4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 10845c0ac; end: 10845c0b3; -[Media setOverlayPresent:] */

void FUN_10845c0ac(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10845c0b4; end: 10845c0bb; -[Media overlayDataToUpload] */

undefined8 FUN_10845c0b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10845c0bc; end: 10845c0d3; -[Media uploadDelegate] */

void FUN_10845c0bc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845c0d4; end: 10845c0df; -[Media setUploadDelegate:] */

void FUN_10845c0d4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x88,param_3);
  return;
}



/* Entry: 10845c0e0; end: 10845c0f7; -[Media imageProcessingDelegate] */

void FUN_10845c0e0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845c0f8; end: 10845c103; -[Media setImageProcessingDelegate:] */

void FUN_10845c0f8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x90,param_3);
  return;
}



/* Entry: 10845c104; end: 10845c11b; -[Media baseNoteMediaProcessingDelegate] */

void FUN_10845c104(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10845c11c; end: 10845c127; -[Media setBaseNoteMediaProcessingDelegate:] */

void FUN_10845c11c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x98,param_3);
  return;
}



/* Entry: 10845c128; end: 10845c12f; -[Media loadContext] */

undefined8 FUN_10845c128(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 10845c130; end: 10845c137; -[Media setLoadContext:] */

void FUN_10845c130(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xa0) = param_3;
  return;
}



/* Entry: 10845c138; end: 10845c13f; -[Media isThumbnail] */

undefined1 FUN_10845c138(long param_1)

{
  return *(undefined1 *)(param_1 + 0x21);
}



/* Entry: 10845c140; end: 10845c147; -[Media setIsThumbnail:] */

void FUN_10845c140(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x21) = param_3;
  return;
}



/* Entry: 10845c148; end: 10845c14f; -[Media uploadURL] */

undefined8 FUN_10845c148(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 10845c150; end: 10845c17f; -[Media setUploadURL:] */

void FUN_10845c150(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10845c180; end: 10845c187; -[Media isLoading] */

undefined1 FUN_10845c180(long param_1)

{
  return *(undefined1 *)(param_1 + 0x22);
}



/* Entry: 10845c188; end: 10845c18f; -[Media progress] */

undefined8 FUN_10845c188(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 10845c190; end: 10845c197; -[Media setProgress:] */

void FUN_10845c190(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0xb0) = param_1;
  return;
}



/* Entry: 10845c198; end: 10845c19f; -[Media mediaQualityLevel] */

undefined8 FUN_10845c198(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 10845c1a0; end: 10845c1a7; -[Media setMediaQualityLevel:] */

void FUN_10845c1a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb8) = param_3;
  return;
}



/* Entry: 10845c1a8; end: 10845c1af; -[Media legacyStoryMediaCache] */

undefined8 FUN_10845c1a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10845c1b0; end: 10845c1df; -[Media setLegacyStoryMediaCache:] */

void FUN_10845c1b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10845c1e0; end: 10845c31f; -[Media .cxx_destruct] */

void FUN_10845c1e0(long param_1)

{
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_destroyWeak(param_1 + 0x98);
  _objc_destroyWeak(param_1 + 0x90);
  _objc_destroyWeak(param_1 + 0x88);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10845c320; end: 10845c327;  */

void FUN_10845c320(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c5cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_mediaOverlayCoordinator_11260f150);
  return;
}



/* Entry: 10845c328; end: 10845c3bb; -[SCCacheAttributesItem initWithKey:persist:encrypt:] */

undefined1 * FUN_10845c328(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fc948;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1b6b40(puVar1);
    func_0x00010c1daca0(puVar1);
    func_0x00010c1958a0(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10845c3bc; end: 10845c3c3; -[SCCacheAttributesItem encrypt] */

undefined1 FUN_10845c3bc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10845c3c4; end: 10845c3cb; -[SCCacheAttributesItem setEncrypt:] */

void FUN_10845c3c4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10845c3cc; end: 10845c3d3; -[SCCacheAttributesItem persist] */

undefined1 FUN_10845c3cc(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10845c3d4; end: 10845c3db; -[SCCacheAttributesItem setPersist:] */

void FUN_10845c3d4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 10845c3dc; end: 10845c3e3; -[SCCacheAttributesItem filePath] */

undefined8 FUN_10845c3dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10845c3e4; end: 10845c3eb; -[SCCacheAttributesItem setFilePath:] */

void FUN_10845c3e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10845c3ec; end: 10845c3f3; -[SCCacheAttributesItem key] */

undefined8 FUN_10845c3ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10845c3f4; end: 10845c3fb; -[SCCacheAttributesItem setKey:] */

void FUN_10845c3f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10845c3fc; end: 10845c403; -[SCCacheAttributesItem clientEncryptionId] */

undefined8 FUN_10845c3fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10845c404; end: 10845c40b; -[SCCacheAttributesItem setClientEncryptionId:] */

void FUN_10845c404(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10845c40c; end: 10845c413; -[SCCacheAttributesItem encryptionKey] */

undefined8 FUN_10845c40c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10845c414; end: 10845c41b; -[SCCacheAttributesItem setEncryptionKey:] */

void FUN_10845c414(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10845c41c; end: 10845c423; -[SCCacheAttributesItem initializationVector] */

undefined8 FUN_10845c41c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10845c424; end: 10845c42b; -[SCCacheAttributesItem setInitializationVector:] */

void FUN_10845c424(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10845c42c; end: 10845c47f; -[SCCacheAttributesItem .cxx_destruct] */

void FUN_10845c42c(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10845c480; end: 10845c4f3; -[SCLegacyMediaFactoryImpl initWithLegacyStoryMediaCache:] */

undefined1 * FUN_10845c480(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc950;
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



/* Entry: 10845c4f4; end: 10845c52b; -[SCLegacyMediaFactoryImpl newMedia] */

undefined * FUN_10845c4f4(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d5200;
  _objc_opt_new(PTR_PTR_1126d5200);
  func_0x00010c1ba740();
  return puVar1;
}



/* Entry: 10845c52c; end: 10845c537; -[SCLegacyMediaFactoryImpl .cxx_destruct] */

void FUN_10845c52c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10845c538; end: 10845c613; +[SCMediaThumnailUtil imageWithImage:scaledToSize:] */

void FUN_10845c538(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar3 = param_1;
  dVar4 = param_2;
  _objc_retain(param_5);
  func_0x00010c23d0a0(param_5);
  dVar6 = dVar3 / param_1;
  func_0x00010c23d0a0(param_5);
  dVar7 = dVar4 / param_2;
  func_0x00010c23d0a0(param_5);
  dVar5 = (dVar4 / dVar6 - param_2) * 0.5;
  if (dVar7 < dVar6) {
    dVar5 = 0.0;
  }
  dVar8 = param_1;
  dVar4 = dVar4 / dVar6;
  dVar1 = 0.0;
  if (dVar7 < dVar6) {
    dVar8 = dVar3 / dVar7;
    dVar4 = param_2;
    dVar1 = (dVar3 / dVar7 - param_1) * 0.5;
  }
  _UIGraphicsBeginImageContext(param_1,param_2);
  uVar2 = param_5;
  func_0x00010bf89920(-dVar1,-dVar5,dVar8,dVar4,param_5);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10845c614; end: 10845c6c7;  */

void FUN_10845c614(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10845c6c8;
  puStack_50 = &UNK_110a49478;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_2;
  _objc_retain(param_3);
  _objc_retain(param_1);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10845c6c8; end: 10845c84b;  */

void FUN_10845c6c8(long param_1,undefined *param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 == (undefined *)0x0) || (param_4 == 0)) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,0,puVar2);
  }
  else {
    uVar1 = 0x15;
    func_0x000107c312b8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10845c84c;
    puStack_70 = &UNK_110855c70;
    _objc_retain(param_2);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    puStack_68 = param_2;
    _objc_retain(uVar4);
    uStack_48 = *(undefined1 *)(param_1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uStack_60 = uVar4;
    _objc_retain(uVar3);
    uStack_50 = uVar3;
    _objc_retain(param_3);
    uStack_58 = param_3;
    func_0x000107c27d8c(uVar1,&puStack_88);
    _objc_release(uVar1);
    _objc_release(uStack_58);
    _objc_release(uStack_50);
    _objc_release(uStack_60);
    puVar2 = puStack_68;
  }
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10845c84c; end: 10845c95f;  */

void FUN_10845c84c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = 0;
  func_0x00010c14e080(uVar2,param_2,*(undefined8 *)(param_1 + 0x28),0x30000001,&uStack_38);
  uVar1 = uStack_38;
  _objc_retain(uStack_38);
  if ((int)uVar2 != 0) {
    func_0x00010befb520(*(undefined8 *)(param_1 + 0x28));
  }
  if (*(char *)(param_1 + 0x40) == '\x01') {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10845c960;
    puStack_60 = &UNK_110864938;
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar3);
    uStack_40 = (undefined1)uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uStack_48 = uVar3;
    _objc_retain(uVar2);
    uStack_58 = uVar2;
    _objc_retain(uVar1);
    uStack_50 = uVar1;
    func_0x000107c312d0("APPSTORE",&puStack_78);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    _objc_release(uStack_48);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
              (*(long *)(param_1 + 0x38),uVar2,*(undefined8 *)(param_1 + 0x30),uVar1);
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 10845c960; end: 10845c977;  */

void FUN_10845c960(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010845c974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10845c978; end: 10845c9cb; +[SCUploadURLLogger shared] */

void FUN_10845c978(void)

{
  undefined8 uVar1;
  
  if (lRam000000011372b908 != -1) {
    func_0x000107c27d9c(0x11372b908,&PTR___NSConcreteGlobalBlock_110a494a8);
  }
  uVar1 = uRam000000011372b910;
  _objc_retain(uRam000000011372b910);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10845c9cc; end: 10845c9f7;  */

void FUN_10845c9cc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126d96a8;
  _objc_alloc_init();
  uVar1 = puRam000000011372b910;
  puRam000000011372b910 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10845c9f8; end: 10845ca4b; +[SCUploadURLLogger sharedSCGraphenePerformanceLogger] */

void FUN_10845c9f8(void)

{
  undefined8 uVar1;
  
  if (lRam000000011372b918 != -1) {
    func_0x000107c27d9c(0x11372b918,&PTR___NSConcreteGlobalBlock_110a494c8);
  }
  uVar1 = uRam000000011372b920;
  _objc_retain(uRam000000011372b920);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10845ca4c; end: 10845cb77;  */

void FUN_10845ca4c(undefined8 param_1,undefined8 param_2)

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
  undefined8 uVar10;
  
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b74b8;
  _objc_opt_class(PTR_PTR_1126b74b8);
  uVar3 = param_1;
  func_0x00010beecc20(param_1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar4 = uVar3;
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfcdf80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010b256a70();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c0c5a20();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar6;
  func_0x00010c0f9780(uVar6,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam000000011372b920;
  uRam000000011372b920 = uVar10;
  _objc_release(uVar1);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10845cb78; end: 10845ccd3; -[SCUploadURLLogger init] */

undefined1 * FUN_10845cb78(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126fc958;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126b74b8);
    puVar3 = puVar2;
    func_0x00010beecc20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar3;
    func_0x00010bfe63a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bfcdf80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010b256a70();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf366a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    func_0x00010c0f9780();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined1 **)((long)puVar1 + 8) = puVar9;
    _objc_release(uVar10);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10845ccd4; end: 10845cedf; -[SCUploadURLLogger uploadDidStart:mediaId:numBytes:] */

void FUN_10845ccd4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126bc530;
  _objc_retain(param_4);
  func_0x00010c243aa0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010b256a70();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0c5a20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126bc530;
  func_0x00010c243a80(PTR_PTR_1126bc530);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 - 1U < 4) {
    ppuVar5 = (undefined **)(&PTR_PTR_110a494e8)[param_3 - 1U];
  }
  else {
    ppuVar5 = &PTR____CFConstantStringClassReference_110edbe38;
  }
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110edbdd8,ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126d96a8;
  func_0x00010c22bf00(PTR_PTR_1126d96a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b1a40();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b2950;
  func_0x00010c0ef3a0(PTR_PTR_1126b2950);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar6 = *(undefined8 *)(param_1 + 8);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110edbe18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c0b1a40(uVar6,param_2,puVar4,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10845cee0; end: 10845d09b; -[SCUploadURLLogger uploadDidSucceedWithMediaId:] */

void FUN_10845cee0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126d96a8;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c22bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c287cc0(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d96a8;
  func_0x00010c22bf00(PTR_PTR_1126d96a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec4a0();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d96a8;
  func_0x00010c22bf00(PTR_PTR_1126d96a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b1a20();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar7 = *(undefined8 *)(param_1 + 8);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c287cc0(uVar7);
  _objc_release(puVar2);
  func_0x00010bfec4a0(*(undefined8 *)(param_1 + 8));
  puVar2 = puVar1;
  func_0x00010c0b1a20(*(undefined8 *)(param_1 + 8));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126d96a8;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar5);
  _objc_retain(puVar2);
  func_0x00010c22bf00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c287cc0(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126d96a8;
  func_0x00010c22bf00(PTR_PTR_1126d96a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec4a0();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126d96a8;
  func_0x00010c22bf00(PTR_PTR_1126d96a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b1a20();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar7 = *(undefined8 *)(puVar1 + 8);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c287cc0(uVar7);
  _objc_release(puVar2);
  func_0x00010bfec4a0(*(undefined8 *)(puVar1 + 8));
  func_0x00010c0b1a20(*(undefined8 *)(puVar1 + 8));
  _objc_release(puVar5);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar3 + 8,0);
  return;
}



/* Entry: 10845d09c; end: 10845d263; -[SCUploadURLLogger uploadDidFailWithMediaId:reason:] */

void FUN_10845d09c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d96a8;
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c22bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c287cc0(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d96a8;
  func_0x00010c22bf00(PTR_PTR_1126d96a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec4a0();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d96a8;
  func_0x00010c22bf00(PTR_PTR_1126d96a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b1a20();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = *(undefined8 *)(param_1 + 8);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c287cc0(uVar4);
  _objc_release(puVar2);
  func_0x00010bfec4a0(*(undefined8 *)(param_1 + 8));
  func_0x00010c0b1a20(*(undefined8 *)(param_1 + 8));
  _objc_release(param_4);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + 8,0);
  return;
}



/* Entry: 10845d264; end: 10845d26f; -[SCUploadURLLogger .cxx_destruct] */

void FUN_10845d264(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10845d270; end: 10845d3eb; -[MediaUpdateListenerAnnouncer description] */

void FUN_10845d270(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plStack_60;
  long *plStack_58;
  
  FUN_10845d3ec(&plStack_60,param_1 + 0x48);
  puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0();
  lVar5 = *plStack_60;
  if (plStack_60[1] != lVar5) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar5 = lVar5 + lVar6;
      _objc_loadWeakRetained();
      if (lVar5 != 0) {
        func_0x00010bf06ba0(puVar4);
        if (uVar7 != (plStack_60[1] - *plStack_60 >> 3) - 1U) {
          func_0x00010bf070e0(puVar4);
        }
      }
      _objc_release(lVar5);
      uVar7 = uVar7 + 1;
      lVar5 = *plStack_60;
      lVar6 = lVar6 + 8;
    } while (uVar7 < (ulong)(plStack_60[1] - lVar5 >> 3));
  }
  func_0x00010bf070e0(puVar4);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10845d3ec; end: 10845d44b;  */

void FUN_10845d3ec(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  __ZNSt3__112__get_sp_mutEPKv(param_2);
  __ZNSt3__18__sp_mut4lockEv();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar4);
  return;
}



/* Entry: 10845d44c; end: 10845d6f7; -[MediaUpdateListenerAnnouncer addListener:] */

undefined8 FUN_10845d44c(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  plVar3 = (long *)0x30;
  __Znwm();
  plVar11 = plVar3 + 1;
  *plVar11 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_110a49518;
  plVar10 = plVar3 + 3;
  *plVar10 = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  plStack_70 = plVar10;
  plStack_68 = plVar3;
  if (plVar6 == (long *)0x0) {
    _objc_initWeak(auStack_90,param_3);
    FUN_10845d6f8(plVar10,auStack_90);
    _objc_destroyWeak(auStack_90);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = plVar10;
    plStack_98 = plVar3;
    FUN_10845d838(puVar8,&plStack_a0);
    if (plStack_98 != (long *)0x0) {
      plVar3 = plStack_98 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_98;
      } while (cVar1 != '\0');
LAB_10845d600:
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    lVar5 = *plVar6;
    lVar12 = plVar6[1];
    lVar7 = lVar5;
    if (lVar5 != lVar12) {
      do {
        lVar4 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        lVar5 = lVar7;
        if (lVar4 == param_3) break;
        lVar7 = lVar7 + 8;
        lVar5 = lVar12;
      } while (lVar7 != lVar12);
      plVar6 = (long *)*puVar8;
      lVar12 = plVar6[1];
    }
    if (lVar5 != lVar12) {
      uVar9 = 0;
      goto LAB_10845d620;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_10845d6f8(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_10845d6f8(plVar10,auStack_78);
    _objc_destroyWeak(auStack_78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plVar10;
    plStack_80 = plVar3;
    FUN_10845d838(puVar8,&plStack_88);
    if (plStack_80 != (long *)0x0) {
      plVar3 = plStack_80 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_80;
      } while (cVar1 != '\0');
      goto LAB_10845d600;
    }
  }
  uVar9 = 1;
LAB_10845d620:
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  _objc_release(param_3);
  return uVar9;
}


