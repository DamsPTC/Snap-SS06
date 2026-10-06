/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1090b99b0; end: 1090b9fbb; -[SCNeoPlayerObjC _transitionIfNecessaryWithNewState:] */

void FUN_1090b99b0(float param_1,undefined1 *param_2,undefined8 param_3,long *param_4)

{
  float fVar1;
  undefined *puVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [24];
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined **ppuStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_68 [8];
  
  func_0x00010bf0ae00(*(undefined8 *)(param_2 + 0xb8));
  _objc_initWeak(auStack_68,param_2);
  lVar9 = *(long *)(param_2 + 0x70);
  lVar12 = *param_4;
  fVar1 = *(float *)(param_2 + 0x94);
  func_0x00010c11fdc0(*(undefined8 *)(param_2 + 8));
  bVar3 = false;
  if ((lVar9 == lVar12) && (bVar3 = false, !NAN(param_1) && !NAN(fVar1))) {
    bVar3 = param_1 == fVar1;
  }
  if (bVar3) goto LAB_1090b9e7c;
  puVar6 = (undefined1 *)(ulong)(uint)fVar1;
  if ((lVar9 != lVar12) && (puVar5 = *(undefined1 **)(param_2 + 0x78), puVar5 != (undefined1 *)0x0))
  {
    func_0x00010c067d80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf99fe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090b7b7c(lVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090b7b7c(*param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a7040(puVar6);
    func_0x0001090bc40c();
    func_0x0001090bc414();
    func_0x0001090bc3b8();
    func_0x0001090bc3a0();
    puVar6 = puVar5;
    if (param_4[1] != 0) {
      puVar6 = *(undefined1 **)(param_2 + 0x78);
      func_0x00010c067d80(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2778c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0bfe0();
      func_0x0001090bc3b8();
      func_0x0001090bc3a0();
    }
  }
  lVar8 = *param_4;
  *(long *)(param_2 + 0x70) = lVar8;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  switch(lVar8) {
  case 0:
    func_0x0001090bc500(*(undefined8 *)(param_2 + 8));
    param_2[0x81] = 0;
  default:
    if (lVar9 == lVar12) goto LAB_1090b9e7c;
    goto LAB_1090b9cd8;
  case 1:
    func_0x00010c1e7640(*(undefined4 *)(param_2 + 0x94),*(undefined8 *)(param_2 + 8));
    param_2[0x81] = 1;
    param_2[0x84] = 0;
    if (lVar9 == lVar12) goto LAB_1090b9e7c;
    puStack_90 = puVar2;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1090b9fbc;
    puStack_78 = &UNK_110876b10;
    func_0x0001090bc368(&puStack_90);
    func_0x0001090bc4ec();
    break;
  case 2:
    func_0x0001090bc500(*(undefined8 *)(param_2 + 8));
    if (lVar9 == lVar12) goto LAB_1090b9e7c;
    puStack_b8 = puVar2;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1090ba040;
    puStack_a0 = &UNK_110876b10;
    func_0x0001090bc368(&puStack_b8);
    func_0x0001090bc4ec();
    break;
  case 3:
    func_0x0001090bc500(*(undefined8 *)(param_2 + 8));
    if (lVar9 == lVar12) goto LAB_1090b9e7c;
    if ((((*(char *)((long)param_4 + 0x11) == '\x01') && (bVar3 = param_2[0x83] == '\x01', bVar3))
        && (func_0x0001090bc658(param_2 + 0x6c), bVar3)) &&
       ((0.0 < *(float *)(param_2 + 0x94) && ((param_2[0x84] & 1) == 0)))) {
      param_2[0x84] = 1;
      puVar6 = param_2;
      func_0x00010be599e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc3520();
      func_0x0001090bc3a0();
      func_0x00010be93820(param_2);
    }
    puStack_e0 = puVar2;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_1090ba098;
    puStack_c8 = &UNK_110876b10;
    func_0x0001090bc368(&puStack_e0);
    func_0x0001090bc4ec();
    break;
  case 4:
    func_0x0001090bc500(*(undefined8 *)(param_2 + 8));
    if (lVar9 == lVar12) goto LAB_1090b9e7c;
    ppuVar10 = *(undefined ***)(param_2 + 0x88);
    if (ppuVar10 == (undefined **)0x0) {
      ppuVar10 = &PTR____CFConstantStringClassReference_110f21078;
      FUN_109096480(&PTR____CFConstantStringClassReference_110f21078,0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(ppuVar10);
    }
    puStack_110 = puVar2;
    uStack_108 = 0xc2000000;
    pcStack_100 = FUN_1090ba11c;
    puStack_f8 = &UNK_110896d48;
    puVar6 = auStack_e8;
    _objc_copyWeak(puVar6,auStack_68);
    ppuStack_f0 = ppuVar10;
    _objc_retain(ppuVar10);
    func_0x0001090bc4ec();
    func_0x000107c27d8c();
    _objc_release(ppuStack_f0);
    func_0x0001090bc3b8();
    goto code_r0x0001090b9cd0;
  case 5:
    func_0x0001090bc500(*(undefined8 *)(param_2 + 8));
    if (lVar9 == lVar12) goto LAB_1090b9e7c;
    puStack_138 = puVar2;
    uStack_130 = 0xc2000000;
    pcStack_128 = FUN_1090ba1b0;
    puStack_120 = &UNK_110876b10;
    func_0x0001090bc368(&puStack_138);
    func_0x0001090bc4ec();
  }
  func_0x000107c27d8c();
code_r0x0001090b9cd0:
  _objc_destroyWeak(puVar6);
LAB_1090b9cd8:
  if (*(long *)(param_2 + 0x78) != 0) {
    func_0x00010c067d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2778c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf941e0();
    func_0x0001090bc3b8();
    func_0x0001090bc3a0();
    uVar11 = *(undefined8 *)(param_2 + 0x70);
    uVar7 = *(undefined8 *)(param_2 + 0x78);
    func_0x00010c067d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2778c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090b7b7c(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf17b80();
    *(undefined8 *)(param_2 + 0x60) = uVar7;
    func_0x0001090bc414();
    func_0x0001090bc3b8();
    func_0x0001090bc3a0();
    if (*param_4 == 3) {
      func_0x00010c067d80(*(undefined8 *)(param_2 + 0x78));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1003c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec6c0();
      func_0x0001090bc3a0();
      func_0x0001090bc3a8();
      uVar4 = (undefined4)*(undefined8 *)(param_2 + 0x78);
      func_0x00010c067d80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1003c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf18c40();
      *(undefined4 *)(param_2 + 0x68) = uVar4;
      func_0x0001090bc3a0();
      func_0x0001090bc3a8();
    }
    else if (lVar9 == 3) {
      func_0x00010c067d80(*(undefined8 *)(param_2 + 0x78));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1003c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf95880();
      func_0x0001090bc3a0();
      func_0x0001090bc3a8();
      *(undefined4 *)(param_2 + 0x68) = 0;
    }
  }
  _objc_copyWeak(auStack_158,auStack_68);
  FUN_1090bc260(auStack_150,param_4);
  func_0x0001090bc4ec();
  func_0x000107c27d8c();
  func_0x0001090bc590();
  func_0x0001090bc4dc();
LAB_1090b9e7c:
  _objc_destroyWeak(auStack_68);
  func_0x0001090bc23c(param_4);
  return;
}



/* Entry: 1090b9fbc; end: 1090ba03f;  */

void FUN_1090b9fbc(long param_1)

{
  ulong unaff_x21;
  
  func_0x0001090bc3c0();
  if (param_1 != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_respondsToSelector();
    func_0x0001090bc35c();
    if ((unaff_x21 & 1) != 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001090bc630();
      func_0x00010c100a00();
      func_0x0001090bc398();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090ba040; end: 1090ba097;  */

void FUN_1090ba040(long param_1)

{
  func_0x0001090bc3c0();
  if (param_1 != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090bc630();
    func_0x00010c100940();
    func_0x0001090bc398();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090ba098; end: 1090ba11b;  */

void FUN_1090ba098(long param_1)

{
  ulong unaff_x21;
  
  func_0x0001090bc3c0();
  if (param_1 != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_respondsToSelector();
    func_0x0001090bc35c();
    if ((unaff_x21 & 1) != 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001090bc630();
      func_0x00010c1009e0();
      func_0x0001090bc398();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090ba11c; end: 1090ba1af;  */

void FUN_1090ba11c(ulong param_1)

{
  ulong uVar1;
  
  func_0x0001090bc558();
  if (param_1 != 0) {
    uVar1 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_respondsToSelector();
    func_0x0001090bc3a8();
    if ((uVar1 & 1) != 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c100800();
      func_0x0001090bc3a8();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090ba1b0; end: 1090ba24b;  */

void FUN_1090ba1b0(long param_1)

{
  undefined1 in_NG;
  ulong unaff_x21;
  
  func_0x0001090bc3c0();
  if (param_1 != 0) {
    func_0x0001090bc758();
    func_0x0001090bc63c();
    if ((bool)in_NG) {
      *(undefined1 *)(param_1 + 0x91) = 1;
    }
    else {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_respondsToSelector();
      func_0x0001090bc35c();
      if ((unaff_x21 & 1) != 0) {
        func_0x00010bf6b020(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x0001090bc630();
        func_0x00010c100960();
        func_0x0001090bc398();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090ba24c; end: 1090ba2df;  */

void FUN_1090ba24c(ulong param_1)

{
  ulong uVar1;
  
  func_0x0001090bc384();
  if (param_1 != 0) {
    uVar1 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_respondsToSelector();
    func_0x0001090bc3a8();
    if ((uVar1 & 1) != 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c100820();
      func_0x0001090bc3a8();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090ba2e0; end: 1090ba33b;  */

undefined8 * FUN_1090ba2e0(long param_1,long param_2)

{
  undefined8 uVar1;
  
  _objc_copyWeak(param_1 + 0x20,param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  func_0x0001090bc4d4();
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(param_2 + 0x38);
  return (undefined8 *)(param_1 + 0x28);
}



/* Entry: 1090ba33c; end: 1090ba43f; -[SCNeoPlayerObjC seekToTime:toleranceBefore:toleranceAfter:] */

void FUN_1090ba33c(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_a0 [8];
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  plVar1 = (long *)(param_1 + 0x30);
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  _objc_initWeak(auStack_48,param_1);
  func_0x0001090bc434();
  uVar5 = *(undefined8 *)(param_1 + 0xb8);
  _objc_copyWeak(auStack_a0,auStack_48);
  uStack_88 = param_3[1];
  uStack_90 = *param_3;
  uStack_80 = param_3[2];
  uStack_70 = param_4[1];
  uStack_78 = *param_4;
  uStack_68 = param_4[2];
  uStack_58 = param_5[1];
  uStack_60 = *param_5;
  uStack_50 = param_5[2];
  lStack_98 = lVar4 + 1;
  func_0x00010bf850c0(uVar5);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1090ba440; end: 1090ba4c7;  */

void FUN_1090ba440(long param_1)

{
  long unaff_x20;
  
  func_0x0001090bc384();
  if ((param_1 != 0) &&
     (func_0x00010be01ee0(param_1), *(long *)(param_1 + 0x30) == *(long *)(unaff_x20 + 0x28))) {
    func_0x0001090bc5a0();
  }
  func_0x0001090bc390();
  return;
}



/* Entry: 1090ba4c8; end: 1090ba807; -[SCNeoPlayerObjC _doSeekToTime:toleranceBefore:toleranceAfter:isLooping:] */

void FUN_1090ba4c8(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,ulong param_6)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *extraout_x8;
  long lVar4;
  undefined1 auStack_148 [24];
  long lStack_130;
  undefined *puStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined2 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf0ae00(*(undefined8 *)(param_1 + 0xb8));
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uStack_88 = param_3[1];
  uVar2 = *param_3;
  uStack_80 = param_3[2];
  uStack_90 = uVar2;
  _CMTimeGetSeconds(&uStack_90);
  uStack_110 = uVar2;
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067d80(*(undefined8 *)(param_1 + 0x78));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2778c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17b80();
  func_0x0001090bc620();
  func_0x0001090bc398();
  lVar4 = *(long *)(param_1 + 0x10);
  func_0x0001090bc510();
  if (lVar4 == 0) {
    func_0x00010c067d80(*(undefined8 *)(param_1 + 0x78));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2778c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090bc694();
    func_0x0001090bc414();
    func_0x0001090bc3a0();
  }
  else {
    func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x48));
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = 0;
    _objc_release(uVar2);
    *(undefined1 *)(param_1 + 0x90) = 0;
    if ((param_6 & 1) == 0) {
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_98 = 0;
      func_0x00010becf040(param_1);
    }
    uStack_b8 = param_3[1];
    uStack_c0 = *param_3;
    uStack_b0 = param_3[2];
    uStack_d8 = param_4[1];
    uStack_e0 = *param_4;
    uStack_d0 = param_4[2];
    uStack_f8 = param_5[1];
    uStack_100 = *param_5;
    uStack_f0 = param_5[2];
    func_0x00010c1572c0(&uStack_90,lVar4);
    uStack_78 = uStack_90;
    uStack_70 = (undefined4)uStack_88;
    if ((uStack_88 & 0x100000000) == 0) {
      func_0x0001090bc5bc();
      uStack_78 = *extraout_x8;
      uStack_70 = *(undefined4 *)(extraout_x8 + 1);
    }
    uStack_d8 = param_3[1];
    uStack_e0 = *param_3;
    uStack_d0 = param_3[2];
    uStack_f8 = param_4[1];
    uStack_100 = *param_4;
    uStack_f0 = param_4[2];
    _CMTimeSubtract(&uStack_c0,&uStack_e0,&uStack_100);
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    uStack_d0 = uStack_80;
    uStack_f8 = uStack_b8;
    uStack_100 = uStack_c0;
    uStack_f0 = uStack_b0;
    puVar3 = &uStack_e0;
    _CMTimeCompare(puVar3,&uStack_100);
    if ((int)puVar3 < 0) {
      uStack_78 = uStack_c0;
      uStack_70 = (undefined4)uStack_b8;
    }
    func_0x00010c2a6b00(*(undefined8 *)(param_1 + 0x50));
    func_0x0001090bc4a4(*(undefined8 *)(param_1 + 8));
    func_0x00010c157260();
    func_0x0001090bc4a4(*(undefined8 *)(param_1 + 0x18));
    func_0x00010c157100();
    func_0x0001090bc4a4(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c157100();
    func_0x00010be0a100(param_1);
    if ((param_6 & 1) == 0) {
      func_0x0001090bc6ec();
    }
    func_0x00010c067d80(*(undefined8 *)(param_1 + 0x78));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2778c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090bc694();
    func_0x0001090bc414();
    func_0x0001090bc3a0();
  }
  func_0x0001090bc398();
  func_0x0001090bc390();
  func_0x0001090bc794(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001090bc414();
    func_0x0001090bc3a0();
    func_0x0001090bc398();
    func_0x0001090bc390();
    func_0x0001090bc478();
    pcStack_118 = FUN_1090ba808;
    lStack_130 = lVar4;
    puStack_128 = puVar1;
    puStack_120 = &stack0xfffffffffffffff0;
    func_0x00010bf60480(auStack_148);
    func_0x0001090bc5bc();
    func_0x0001090bc5a0();
    return;
  }
  return;
}



/* Entry: 1090ba808; end: 1090ba853; -[SCNeoPlayerObjC _flushAndReset] */

void FUN_1090ba808(void)

{
  undefined1 auStack_38 [24];
  
  func_0x00010bf60480(auStack_38);
  func_0x0001090bc5bc();
  func_0x0001090bc5a0();
  return;
}



/* Entry: 1090ba854; end: 1090ba897; -[SCNeoPlayerObjC error] */

void FUN_1090ba854(long param_1)

{
  FUN_1090b7ce4(*(undefined8 *)(param_1 + 0xd8));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090bc2c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1090ba898; end: 1090ba90f; -[SCNeoPlayerObjC currentTime] */

void FUN_1090ba898(undefined8 *param_1,long param_2)

{
  undefined1 auStack_70 [32];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010c26fdc0(*(undefined8 *)(param_2 + 8));
  _CMTimebaseGetTime(&uStack_50);
  func_0x0001090bc3c8();
  _CMTimeMaximum(&uStack_38,&uStack_50,auStack_70);
  uStack_48 = uStack_30;
  uStack_50 = uStack_38;
  uStack_40 = uStack_28;
  if (*(long *)(param_2 + 0x48) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    func_0x00010c1282a0(param_1);
  }
  return;
}



/* Entry: 1090ba910; end: 1090baa0b; -[SCNeoPlayerObjC setCurrentItem:] */

void FUN_1090ba910(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  func_0x0001090bc494();
  if (*(long *)(param_1 + 0xd8) != param_3) {
    func_0x00010be92ce0(param_1);
    func_0x0001090bc424();
    uVar1 = *(undefined8 *)(param_1 + 0xd8);
    *(long *)(param_1 + 0xd8) = param_3;
    _objc_release(uVar1);
    lVar2 = param_3;
    FUN_1090b7ce4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99fe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf792a0();
    func_0x0001090bc3b8();
    func_0x0001090bc3a0();
    lVar3 = lVar2;
    func_0x00010c27f860();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      func_0x00010beb1860(param_1,param_2,lVar3,lVar2);
    }
    func_0x0001090bc3a0();
    func_0x0001090bc398();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1090baa0c; end: 1090baa97; -[SCNeoPlayerObjC setAudioSampleBufferProcessor:] */

void FUN_1090baa0c(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001090bc2d0();
  if (*(long *)(unaff_x20 + 0xe8) != unaff_x19) {
    func_0x0001090bc424();
    uVar1 = *(undefined8 *)(unaff_x20 + 0xe8);
    *(long *)(unaff_x20 + 0xe8) = unaff_x19;
    _objc_release(uVar1);
    func_0x0001090bc440();
    func_0x0001090bc3f8();
    func_0x0001090bc320(FUN_1090baa98,0xc2000000);
    func_0x0001090bc424();
    func_0x0001090bc44c();
    func_0x0001090bc49c();
    func_0x0001090bc530();
    func_0x0001090bc42c();
  }
  func_0x0001090bc390();
  return;
}



/* Entry: 1090baa98; end: 1090baad7;  */

void FUN_1090baa98(long param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x0001090bc558();
  if (param_1 != 0) {
    func_0x00010c1e3a20(*(undefined8 *)(param_1 + 0x18),param_2,*(undefined8 *)(unaff_x20 + 0x20));
    func_0x00010be180e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090baad8; end: 1090bab63; -[SCNeoPlayerObjC setVideoSampleBufferProcessor:] */

void FUN_1090baad8(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001090bc2d0();
  if (*(long *)(unaff_x20 + 0xe0) != unaff_x19) {
    func_0x0001090bc424();
    uVar1 = *(undefined8 *)(unaff_x20 + 0xe0);
    *(long *)(unaff_x20 + 0xe0) = unaff_x19;
    _objc_release(uVar1);
    func_0x0001090bc440();
    func_0x0001090bc3f8();
    func_0x0001090bc320(FUN_1090bab64,0xc2000000);
    func_0x0001090bc424();
    func_0x0001090bc44c();
    func_0x0001090bc49c();
    func_0x0001090bc530();
    func_0x0001090bc42c();
  }
  func_0x0001090bc390();
  return;
}



/* Entry: 1090bab64; end: 1090baba3;  */

void FUN_1090bab64(long param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x0001090bc558();
  if (param_1 != 0) {
    func_0x00010c1e3a20(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(unaff_x20 + 0x20));
    func_0x00010be180e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090baba4; end: 1090bac7f; -[SCNeoPlayerObjC _prepareSampleBufferProviderForLoopingIfNeeded] */

void FUN_1090baba4(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 *extraout_x8;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001090bc658(param_1 + 0x6e);
  if ((bool)in_ZR) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010bf78e20();
    if (iVar1 != 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
      func_0x00010bf78ea0();
      if (iVar1 != 0) {
        if (*(long *)(param_1 + 0x50) == 0) {
          uStack_38 = 0;
          uStack_30 = 0;
          uStack_28 = 0;
        }
        else {
          func_0x00010bf95780(&uStack_38);
        }
        uStack_48 = uStack_30;
        uStack_50 = uStack_38;
        uStack_40 = uStack_28;
        func_0x00010bf77de0(*(undefined8 *)(param_1 + 0x48),param_2,&uStack_50);
        func_0x0001090bc5bc(*(undefined8 *)(param_1 + 0x10));
        uStack_88 = extraout_x8[1];
        uStack_90 = *extraout_x8;
        uStack_80 = extraout_x8[2];
        uStack_70 = uStack_90;
        uStack_68 = uStack_88;
        uStack_60 = uStack_80;
        uStack_50 = uStack_90;
        uStack_48 = uStack_88;
        uStack_40 = uStack_80;
        func_0x00010c1572c0(auStack_a8);
        func_0x00010c109620(*(undefined8 *)(param_1 + 0x18));
        func_0x00010c109620(*(undefined8 *)(param_1 + 0x20));
        func_0x00010be64d60(param_1);
        func_0x00010be0a100(param_1);
      }
    }
  }
  return;
}



/* Entry: 1090bac80; end: 1090bad6f; -[SCNeoPlayerObjC _enqueueBuffer:toProcessingPipeline:] */

void FUN_1090bac80(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x0001090bc494();
  func_0x0001090bc510();
  if (*(long *)(param_1 + 0x48) == 0) {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
  }
  else {
    func_0x00010c26f540(&uStack_58);
  }
  func_0x00010c0c6540(param_3,param_2,&uStack_58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c149720();
  func_0x0001090bc580();
  func_0x0001090bc3b8();
  if (param_3 == 0) {
    func_0x00010be690a0(param_1,param_2,0);
  }
  else {
    func_0x00010bf963c0(param_4,param_2,param_3);
    _CFRelease(param_3);
  }
  func_0x0001090bc3a0();
  func_0x0001090bc398();
  func_0x0001090bc390();
  return;
}



/* Entry: 1090bad70; end: 1090badb7; -[SCNeoPlayerObjC _enqueueBuffers] */

void FUN_1090bad70(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x00010bf926c0();
  if (iVar1 != 0) {
    func_0x00010be0a0c0(param_1);
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bf926c0();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be0a310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__enqueueVideoBuffers_112560260);
    return;
  }
  return;
}



/* Entry: 1090badb8; end: 1090baf8f; -[SCNeoPlayerObjC _enqueueAudioBuffers] */

void FUN_1090badb8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lStack_58;
  
  do {
    iVar3 = (int)*(undefined8 *)(param_1 + 0x18);
    func_0x00010bf2c940();
    if (iVar3 == 0) break;
    iVar3 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010bfd9700();
    if (iVar3 == 0) break;
    lVar4 = *(long *)(param_1 + 0x10);
    lStack_58 = 0;
    func_0x00010bf6df60(lVar4,param_2,&lStack_58);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lStack_58;
    func_0x0001090bc424();
    if (lVar4 == 0) {
      if ((lVar2 != 0) && (*(long *)(param_1 + 0x78) != 0)) {
        func_0x00010c067d80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99fe0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf756c0();
        func_0x0001090bc414();
        func_0x0001090bc3b8();
      }
    }
    else {
      func_0x0001090bc678();
      func_0x0001090bc66c();
      func_0x00010bf10180(*(undefined8 *)(param_1 + 0x50));
      _objc_retainAutoreleasedReturnValue();
      func_0x0001090bc3e4();
      func_0x0001090bc760();
      func_0x0001090bc6b0();
      func_0x0001090bc3b8();
      func_0x00010c067d80(*(undefined8 *)(param_1 + 0x78));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2778c0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x0001090bc3e4();
      FUN_1090c1c24();
      func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f21098);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001090bc564();
      func_0x0001090bc40c();
      func_0x0001090bc414();
      func_0x0001090bc3b8();
      func_0x0001090bc6c8();
    }
    func_0x0001090bc398();
    func_0x0001090bc390();
  } while (lVar4 != 0);
  iVar3 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010bf78e20();
  if (iVar3 != 0) {
    func_0x00010bf10180(*(undefined8 *)(param_1 + 0x50));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf78e60();
    func_0x0001090bc390();
    func_0x00010be790c0(param_1);
  }
  func_0x0001090bc6ec();
  return;
}



/* Entry: 1090baf90; end: 1090bb16f; -[SCNeoPlayerObjC _enqueueVideoBuffers] */

void FUN_1090baf90(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lStack_58;
  
  do {
    iVar3 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010bf2c940();
    if (iVar3 == 0) break;
    iVar3 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010bfd9760();
    if (iVar3 == 0) break;
    lVar4 = *(long *)(param_1 + 0x10);
    lStack_58 = 0;
    func_0x00010bf6dfe0(lVar4,param_2,&lStack_58);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lStack_58;
    func_0x0001090bc424();
    if (lVar4 == 0) {
      if ((lVar2 != 0) && (*(long *)(param_1 + 0x78) != 0)) {
        func_0x00010c067d80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99fe0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf75740();
        func_0x0001090bc414();
        func_0x0001090bc3b8();
      }
    }
    else {
      func_0x0001090bc678();
      func_0x0001090bc66c();
      func_0x00010c29b840(*(undefined8 *)(param_1 + 0x50));
      _objc_retainAutoreleasedReturnValue();
      func_0x0001090bc3e4();
      func_0x0001090bc760();
      func_0x0001090bc6b0();
      func_0x0001090bc3b8();
      func_0x00010c067d80(*(undefined8 *)(param_1 + 0x78));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2778c0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x0001090bc3e4();
      FUN_1090c1c24();
      func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f210b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001090bc564();
      func_0x0001090bc40c();
      func_0x0001090bc414();
      func_0x0001090bc3b8();
      func_0x0001090bc6c8();
    }
    func_0x0001090bc398();
    func_0x0001090bc390();
  } while (lVar4 != 0);
  iVar3 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010bf78ea0();
  if (iVar3 != 0) {
    func_0x00010c29b840(*(undefined8 *)(param_1 + 0x50));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf78e60();
    func_0x0001090bc390();
    func_0x00010c0dd160(*(undefined8 *)(param_1 + 0x20));
    func_0x00010be790c0(param_1);
  }
  func_0x0001090bc6ec();
  return;
}



/* Entry: 1090bb170; end: 1090bb17b; -[SCNeoPlayerObjC sampleBufferProvider:didFailWithError:] */

void FUN_1090bb170(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be690d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__onError_deferrable__112577dd0,param_4,1);
  return;
}



/* Entry: 1090bb17c; end: 1090bb7e7; -[SCNeoPlayerObjC sampleBufferProviderDidLoadTrackInfos:] */

void FUN_1090bb17c(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined1 in_ZR;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_160 [48];
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001090bc494();
  *(undefined1 *)(param_1 + 0x80) = 1;
  uVar9 = param_3;
  func_0x00010c277fa0();
  _objc_retainAutoreleasedReturnValue();
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain();
  uVar10 = uVar9;
  func_0x00010bf52a60();
  if (uVar10 == 0) {
    func_0x0001090bc508();
    bVar1 = false;
    uVar12 = 0;
  }
  else {
    uVar13 = 0;
    uVar12 = 0;
    lVar15 = *plStack_120;
    do {
      uVar11 = 0;
      do {
        if (*plStack_120 != lVar15) {
          _objc_enumerationMutation(uVar9);
        }
        uVar14 = *(ulong *)(lStack_128 + uVar11 * 8);
        uVar7 = *(undefined8 *)(param_1 + 0x78);
        func_0x00010c067d80(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99fe0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c277e80(uVar14);
        func_0x00010c27dd80(uVar14);
        func_0x00010bf77bc0(uVar7);
        func_0x0001090bc5c8();
        func_0x0001090bc390();
        uVar8 = uVar14;
        func_0x00010c27dd80();
        uVar2 = uVar14;
        uVar3 = uVar12;
        uVar4 = uVar13;
        if (((uVar8 == 1) || (uVar2 = uVar13, uVar3 = uVar14, uVar4 = uVar12, uVar8 == 2)) &&
           (uVar4 == 0)) {
          _objc_retain(uVar14);
          uVar12 = uVar3;
          uVar13 = uVar2;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar10);
      uVar10 = uVar9;
      func_0x00010bf52a60();
    } while (uVar10 != 0);
    func_0x0001090bc508();
    in_ZR = uVar12 == 0;
    bVar1 = !(bool)in_ZR;
    if (uVar12 != 0) {
      func_0x00010c277e80(uVar12);
    }
    if (uVar13 != 0) {
      func_0x00010c277e80(uVar13);
    }
  }
  func_0x00010bf60480(auStack_160,param_1);
  func_0x00010c222100(param_3);
  if (bVar1) {
    uVar9 = *(ulong *)(param_1 + 0x38);
    func_0x00010c24ca00();
    if (-1 < (long)uVar9) {
      func_0x0001090bc6e4();
      uVar10 = *(ulong *)(param_1 + 0x38);
      func_0x00010c24ca00();
      if (uVar10 < uVar9) {
        uVar7 = *(undefined8 *)(param_1 + 0x20);
        func_0x0001090bc6e4();
        func_0x00010c19f620(uVar7);
      }
    }
    func_0x00010c0c4ba0(auStack_160,uVar12);
    _CMTimeGetSeconds(auStack_160);
    func_0x0001090bc6e4();
    _objc_alloc();
    uVar9 = uVar12;
    func_0x00010bf3efc0();
    FUN_109096370();
    _objc_retainAutoreleasedReturnValue();
    in_ZR = uVar9 == 0;
    func_0x0001090bc6dc();
    func_0x0001090bc6d4();
    func_0x00010bfb6f20(uVar12);
    func_0x00010c029400();
    func_0x0001090bc620();
    func_0x00010c067d80(*(undefined8 *)(param_1 + 0x78));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1003c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c222120();
    func_0x0001090bc40c();
    func_0x0001090bc390();
    uVar7 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c067d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2778c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c0c4bc0();
    func_0x00010bf3efc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a5040();
    func_0x00010bfe0640();
    func_0x00010bf137e0();
    func_0x00010c25d9e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0bfe0(uVar7);
    func_0x0001090bc40c();
    func_0x0001090bc390();
    func_0x0001090bc588();
    func_0x0001090bc49c();
    func_0x0001090bc5c8();
  }
  *(bool *)(param_1 + 0x6d) = bVar1;
  func_0x00010c16bc20(*(undefined8 *)(param_1 + 8));
  lVar15 = *(long *)(param_1 + 8);
  func_0x00010c221600();
  if (((bVar1) && (func_0x0001090bc6dc(), lVar15 != 0)) && (func_0x0001090bc6d4(), lVar15 != 0)) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    func_0x00010c106f40(auStack_160,uVar12);
    func_0x0001090bc6dc();
    uVar9 = uVar12;
    func_0x0001090bc6d4();
    func_0x00010c222200((double)uVar12,(double)uVar9,uVar7);
  }
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1007e0();
  func_0x0001090bc390();
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010c067d80(*(undefined8 *)(param_1 + 0x78));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1adca0(uVar7);
  func_0x0001090bc390();
  func_0x00010c29b840(*(undefined8 *)(param_1 + 0x50));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  func_0x0001090bc390();
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf10180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  func_0x0001090bc390();
  func_0x00010c195460(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c195460(*(undefined8 *)(param_1 + 0x18));
  *(undefined1 *)(param_1 + 0x80) = 1;
  func_0x00010be0a100();
  iVar6 = (int)param_1;
  func_0x0001090bc508();
  func_0x0001090bc3a0();
  func_0x0001090bc3a8();
  func_0x0001090bc590();
  func_0x0001090bc794(uStack_70);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001090bc40c();
    func_0x0001090bc390();
    func_0x0001090bc588();
    func_0x0001090bc49c();
    func_0x0001090bc5c8();
    func_0x0001090bc508();
    func_0x0001090bc3a0();
    func_0x0001090bc3a8();
    func_0x0001090bc590();
    func_0x0001090bc68c();
    func_0x0001090bc64c();
    func_0x00010bf0f0e0();
    if (iVar6 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010be0a0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar7,PTR_s__enqueueAudioBuffers_1125601d0);
    return;
  }
  return;
}



/* Entry: 1090bb7e8; end: 1090bb817; -[SCNeoPlayerObjC sampleBufferProviderHasNewAudioBuffer:] */

void FUN_1090bb7e8(int param_1)

{
  func_0x0001090bc64c();
  func_0x00010bf0f0e0();
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be0a0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
  return;
}



/* Entry: 1090bb818; end: 1090bb847; -[SCNeoPlayerObjC sampleBufferProviderHasNewVideoBuffer:] */

void FUN_1090bb818(int param_1)

{
  func_0x0001090bc64c();
  func_0x00010c299ec0();
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be0a310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
  return;
}



/* Entry: 1090bb848; end: 1090bb84b; -[SCNeoPlayerObjC sampleBufferProvider:loadedTimeRangesDidChange:] */

void FUN_1090bb848(void)

{
  return;
}



/* Entry: 1090bb84c; end: 1090bb8cb; -[SCNeoPlayerObjC sampleBufferProvider:didLoadDataSize:withLatency:] */

void FUN_1090bb84c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_2);
  func_0x0001090bc434();
  func_0x0001090bc4f8(auStack_50);
  uStack_48 = param_5;
  uStack_40 = param_1;
  func_0x0001090bc310();
  func_0x0001090bc4dc();
  func_0x0001090bc42c();
  return;
}



/* Entry: 1090bb8cc; end: 1090bb963;  */

void FUN_1090bb8cc(ulong param_1)

{
  ulong uVar1;
  long unaff_x20;
  
  func_0x0001090bc384();
  if (param_1 != 0) {
    uVar1 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_respondsToSelector();
    func_0x0001090bc3a8();
    if ((uVar1 & 1) != 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1007a0(*(undefined8 *)(unaff_x20 + 0x30));
      func_0x0001090bc3a8();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090bb964; end: 1090bb9d7; -[SCNeoPlayerObjC stateNeedsUpdate] */

void FUN_1090bb964(long param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  pbVar1 = (byte *)(param_1 + 0x58);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((bVar2 & 1) == 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_1090bb9d8;
    puStack_20 = &UNK_11087bb00;
    lStack_18 = param_1;
    func_0x00010bf850e0(*(undefined8 *)(param_1 + 0xb8),param_2,&puStack_38);
  }
  return;
}



/* Entry: 1090bb9d8; end: 1090bb9eb;  */

void FUN_1090bb9d8(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bee0990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateState_112595c08);
  return;
}



/* Entry: 1090bb9ec; end: 1090bb9f3; -[SCNeoPlayerObjC playerOutput:didFailWithError:] */

void FUN_1090bb9ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be690b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__onError__112577dc8,param_4);
  return;
}



/* Entry: 1090bb9f4; end: 1090bba13; -[SCNeoPlayerObjC playerOutputDidEnqueueSampleBuffer:] */

void FUN_1090bb9f4(long param_1,undefined8 param_2,long param_3)

{
  if ((param_3 == 2) && (0 < *(int *)(param_1 + 0xb0))) {
    *(int *)(param_1 + 0xb0) = 0;
  }
  return;
}



/* Entry: 1090bba14; end: 1090bba93; -[SCNeoPlayerObjC playerOutputDidRevealFirstFrame] */

void FUN_1090bba14(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_respondsToSelector();
  func_0x0001090bc390();
  if ((uVar1 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1009a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1090bba94; end: 1090bba9b; -[SCNeoPlayerObjC playerOutputFirstFrameRevealHandoffEnabled] */

void FUN_1090bba94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf903f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_enableFirstFrameRevealHandoff_1125c1aa0);
  return;
}



/* Entry: 1090bba9c; end: 1090bbb8b; -[SCNeoPlayerObjC sampleBufferProcessingPipeline:didFailWithError:] */

void FUN_1090bba9c(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  int unaff_w19;
  long unaff_x21;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001090bc468();
  FUN_10909689c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  if (unaff_w19 != 0) {
    piVar1 = (int *)(unaff_x21 + 0xb0);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar5 = *(ulong *)(unaff_x21 + 0x38);
    func_0x00010c069c80();
    if ((ulong)(long)(iVar2 + 1) <= uVar5) {
      func_0x00010c26fdc0(*(undefined8 *)(unaff_x21 + 8));
      _CMTimebaseGetTime(&uStack_48);
      func_0x0001090bc500(*(undefined8 *)(unaff_x21 + 8));
      uStack_58 = uStack_40;
      uStack_60 = uStack_48;
      uStack_50 = uStack_38;
      func_0x0001090bc744(auStack_78);
      func_0x0001090bc3c8();
      func_0x00010c1572c0();
      goto LAB_1090bbb58;
    }
  }
  func_0x00010be690a0();
LAB_1090bbb58:
  func_0x0001090bc398();
  func_0x0001090bc390();
  return;
}



/* Entry: 1090bbb8c; end: 1090bbb9f; -[SCNeoPlayerObjC sampleBufferProcessingPipelineIsReadyForMoreBuffers:] */

void FUN_1090bbb8c(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != *(long *)(param_1 + 0x20)) {
                    /* WARNING: Could not recover jumptable at 0x00010be0a0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__enqueueAudioBuffers_1125601d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be0a310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__enqueueVideoBuffers_112560260);
  return;
}



/* Entry: 1090bbba0; end: 1090bbba7; -[SCNeoPlayerObjC setSubtitlesEnabled:] */

void FUN_1090bbba0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xa0),PTR_s_setEnabled__112642f38);
  return;
}



/* Entry: 1090bbba8; end: 1090bbbb7; -[SCNeoPlayerObjC areSubtitlesEnabled] */

void FUN_1090bbba8(long param_1)

{
  if (*(long *)(param_1 + 0xa0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c071810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_1 + 0xa0),PTR_s_isEnabled_1125fa010);
    return;
  }
  return;
}



/* Entry: 1090bbbb8; end: 1090bbbbf; -[SCNeoPlayerObjC refreshSubtitleState] */

void FUN_1090bbbb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c138710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xa0),PTR_s_resetCueState_11262bbe0);
  return;
}



/* Entry: 1090bbbc0; end: 1090bbc3f; -[SCNeoPlayerObjC subtitleManager:didActivateSubtitle:atTime:] */

void FUN_1090bbbc0(void)

{
  func_0x0001090bc468();
  func_0x00010c260e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c100760();
  func_0x0001090bc398();
  func_0x0001090bc390();
  return;
}



/* Entry: 1090bbc40; end: 1090bbc7b; -[SCNeoPlayerObjC subtitleManagerDidDeactivateSubtitle:] */

void FUN_1090bbc40(undefined8 param_1)

{
  func_0x00010c260e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1008e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090bbc7c; end: 1090bbcd3; -[SCNeoPlayerObjC subtitleManager:didFailWithError:] */

void FUN_1090bbc7c(void)

{
  func_0x0001090bc468();
  func_0x00010c260e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c100780();
  func_0x0001090bc398();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1090bbcd4; end: 1090bbd1b; -[SCNeoPlayerObjC subtitleManagerDidLoadSubtitles:withCount:] */

void FUN_1090bbcd4(undefined8 param_1)

{
  func_0x00010c260e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1007c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090bbd1c; end: 1090bbe07; -[SCNeoPlayerObjC createSubtitleTimer] */

void FUN_1090bbd1c(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126dd568;
  _objc_alloc(PTR_PTR_1126dd568);
  func_0x00010c26fdc0(*(undefined8 *)(param_1 + 8));
  if (*(long *)(param_1 + 0x38) == 0) {
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
  }
  else {
    func_0x00010c261020(&uStack_50);
  }
  func_0x00010c11de00(*(undefined8 *)(param_1 + 0xb8));
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090bc434();
  func_0x0001090bc774(FUN_1090bbe08,0xc2000000);
  func_0x0001090bc4f8(auStack_58);
  func_0x00010c0526a0(puVar1);
  func_0x0001090bc714();
  func_0x0001090bc3a8();
  func_0x0001090bc42c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1090bbe08; end: 1090bbe33;  */

void FUN_1090bbe08(undefined8 param_1)

{
  func_0x0001090bc3c0();
  func_0x00010be6bc00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090bbe34; end: 1090bbea3; -[SCNeoPlayerObjC setSubtitlesUrl:] */

void FUN_1090bbe34(void)

{
  func_0x0001090bc2d0();
  func_0x0001090bc440();
  func_0x0001090bc3f8();
  func_0x0001090bc320(FUN_1090bbea4,0xc2000000);
  func_0x0001090bc424();
  func_0x0001090bc44c();
  func_0x0001090bc49c();
  func_0x0001090bc390();
  func_0x0001090bc530();
  func_0x0001090bc42c();
  return;
}



/* Entry: 1090bbea4; end: 1090bc11f;  */

void FUN_1090bbea4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0xa0) != 0) {
      lVar2 = *(long *)(lVar1 + 0x38);
      func_0x00010c261080();
      if (lVar2 == 0) {
        func_0x00010c069d00(*(undefined8 *)(lVar1 + 0xa8));
        func_0x0001090bc6bc();
      }
      func_0x00010c137fe0(*(undefined8 *)(lVar1 + 0xa0));
      func_0x0001090bc6f4();
      func_0x00010c067d80(*(undefined8 *)(lVar1 + 0x78));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99fe0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7d900();
      func_0x0001090bc3b8();
      func_0x0001090bc3a0();
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      func_0x00010c28a940(*(undefined8 *)(lVar1 + 0x78));
      func_0x00010c067d80(*(undefined8 *)(lVar1 + 0x78));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2778c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001090bc6a8();
      func_0x0001090bc3b8();
      func_0x0001090bc3a0();
      puVar3 = PTR_PTR_1126dd588;
      _objc_alloc();
      func_0x00010c0f5800(*(undefined8 *)(param_1 + 0x20));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067d80(*(undefined8 *)(lVar1 + 0x78));
      _objc_retainAutoreleasedReturnValue();
      func_0x0001090bc788();
      func_0x00010c04f2e0();
      uVar5 = *(undefined8 *)(lVar1 + 0xa0);
      *(undefined **)(lVar1 + 0xa0) = puVar3;
      func_0x0001090bc4bc(uVar5);
      func_0x0001090bc3a0();
      func_0x0001090bc3a8();
      func_0x0001090bc578(*(undefined8 *)(lVar1 + 0xa0));
      lVar2 = *(long *)(lVar1 + 0x38);
      func_0x00010c261080();
      if (lVar2 == 1) {
        func_0x00010c21c680(*(undefined8 *)(lVar1 + 0xa0),param_2,1);
        uVar6 = *(undefined8 *)(lVar1 + 0xa0);
        uVar5 = *(undefined8 *)(lVar1 + 8);
        func_0x00010c26fdc0(uVar5);
        uVar4 = *(undefined8 *)(lVar1 + 0xb8);
        func_0x00010c11de00(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0c940(uVar6,param_2,uVar5,uVar4);
      }
      else {
        func_0x00010c21c680(*(undefined8 *)(lVar1 + 0xa0),param_2,0);
        lVar2 = lVar1;
        func_0x00010bf59480();
        _objc_retainAutoreleasedReturnValue();
        *(long *)(lVar1 + 0xa8) = lVar2;
      }
      func_0x0001090bc3a8();
      func_0x00010c067d80(*(undefined8 *)(lVar1 + 0x78));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99fe0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf79820();
      func_0x0001090bc3a0();
      func_0x0001090bc3a8();
      func_0x00010c067d80(*(undefined8 *)(lVar1 + 0x78));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2778c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf941e0();
      func_0x0001090bc3a0();
      func_0x0001090bc3a8();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1090bc120; end: 1090bc137; -[SCNeoPlayerObjC delegate] */

void FUN_1090bc120(long param_1)

{
  _objc_loadWeakRetained(param_1 + 200);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1090bc138; end: 1090bc143; -[SCNeoPlayerObjC setDelegate:] */

void FUN_1090bc138(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 200,param_3);
  return;
}



/* Entry: 1090bc144; end: 1090bc15b; -[SCNeoPlayerObjC subtitleDelegate] */

void FUN_1090bc144(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1090bc15c; end: 1090bc167; -[SCNeoPlayerObjC setSubtitleDelegate:] */

void FUN_1090bc15c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xd0,param_3);
  return;
}



/* Entry: 1090bc168; end: 1090bc16f; -[SCNeoPlayerObjC playerItemFactory] */

undefined8 FUN_1090bc168(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 1090bc170; end: 1090bc177; -[SCNeoPlayerObjC currentItem] */

undefined8 FUN_1090bc170(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 1090bc178; end: 1090bc17f; -[SCNeoPlayerObjC videoSampleBufferProcessor] */

undefined8 FUN_1090bc178(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 1090bc180; end: 1090bc187; -[SCNeoPlayerObjC audioSampleBufferProcessor] */

undefined8 FUN_1090bc180(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 1090bc188; end: 1090bc25f; -[SCNeoPlayerObjC .cxx_destruct] */

void FUN_1090bc188(long param_1)

{
  func_0x0001090bc41c(param_1 + 0xe8);
  func_0x0001090bc41c(param_1 + 0xe0);
  func_0x0001090bc41c(param_1 + 0xd8);
  _objc_destroyWeak(param_1 + 0xd0);
  _objc_destroyWeak(param_1 + 200);
  func_0x0001090bc41c(param_1 + 0xc0);
  func_0x0001090bc41c(param_1 + 0xb8);
  func_0x0001090bc41c(param_1 + 0xa8);
  func_0x0001090bc41c(param_1 + 0xa0);
  func_0x0001090bc41c(param_1 + 0x88);
  func_0x0001090bc41c(param_1 + 0x78);
  func_0x0001090bc41c(param_1 + 0x50);
  func_0x0001090bc41c(param_1 + 0x48);
  func_0x0001090bc41c(param_1 + 0x40);
  func_0x0001090bc41c(param_1 + 0x38);
  func_0x0001090bc41c(param_1 + 0x20);
  func_0x0001090bc41c(param_1 + 0x18);
  func_0x0001090bc41c(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090bc260; end: 1090bc2a3;  */

undefined8 * FUN_1090bc260(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  func_0x0001090bc4d4();
  param_1[1] = uVar1;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  return param_1;
}



/* Entry: 1090bc2a4; end: 1090bc7a7;  */

void FUN_1090bc2a4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x29;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined *puStack0000000000000018;
  
  puStack0000000000000018 = &UNK_110876b10;
  uStack0000000000000008 = param_2;
  uStack0000000000000010 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(&stack0x00000020,unaff_x29 + -0x18);
  return;
}



/* Entry: 1090bc7a8; end: 1090bc807;  */

void FUN_1090bc7a8(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010bf53a00();
  ppuVar1 = &PTR_PTR_1126dd598;
  if ((int)uVar2 == 0) {
    ppuVar1 = &PTR_PTR_1126dd5a0;
  }
  puVar3 = *ppuVar1;
  _objc_alloc(puVar3);
  func_0x00010c001640();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1090bc808; end: 1090bc91b; -[SCNeoPlayerSingleMediaSampleBufferProvider initWithMediaDataManager:mediaDataManagerSourceIndex:instruments:shouldParseSPSReorderDepth:mediaQueue:delegate:] */

undefined1 *
FUN_1090bc808(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_60;
  func_0x0001090bd6b0();
  func_0x0001090bd65c();
  func_0x0001090bd6a8();
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1127005f8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x0001090bd6a8();
    uVar3 = *(undefined8 *)((long)puVar2 + 0x68);
    *(undefined8 *)((long)puVar2 + 0x68) = param_7;
    _objc_release(uVar3);
    func_0x0001090bd65c();
    uVar3 = *(undefined8 *)((long)puVar2 + 0x10);
    *(undefined8 *)((long)puVar2 + 0x10) = param_5;
    _objc_release(uVar3);
    _objc_storeWeak((undefined1 *)((long)puVar2 + 8),param_8);
    func_0x0001090bd6a0();
    uVar3 = *(undefined8 *)((long)puVar2 + 0x28);
    *(undefined8 *)((long)puVar2 + 0x28) = param_3;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar2 + 0x70) = param_4;
    func_0x00010c18b620(param_3);
    puVar1 = PTR__kCMTimeZero_110348670;
    uVar3 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    *(undefined8 *)((long)puVar2 + 0x54) = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    *(undefined8 *)((long)puVar2 + 0x4c) = uVar3;
    *(undefined8 *)((long)puVar2 + 0x5c) = *(undefined8 *)(puVar1 + 0x10);
    *(undefined1 *)((long)puVar2 + 0x41) = 1;
    *(undefined1 *)((long)puVar2 + 100) = param_6;
  }
  func_0x0001090bd70c();
  func_0x0001090bd680();
  func_0x0001090bd688();
  func_0x0001090bd644();
  return (undefined1 *)puVar2;
}



/* Entry: 1090bc91c; end: 1090bc96b; -[SCNeoPlayerSingleMediaSampleBufferProvider dealloc] */

void FUN_1090bc91c(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c18b620(*(undefined8 *)(param_1 + 0x28),param_2,0,*(undefined8 *)(param_1 + 0x70));
  puStack_28 = PTR_PTR_1127005f8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1090bc96c; end: 1090bcac3; -[SCNeoPlayerSingleMediaSampleBufferProvider initializeDemuxerWithMediaInfoResolver:blockAllocatorPool:] */

void FUN_1090bc96c(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x0001090bd6b0();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  func_0x00010c2778c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17b80();
  func_0x0001090bd6fc();
  if (param_3 == (undefined *)0x0) {
    param_3 = PTR_PTR_1126dd4f0;
    _objc_alloc(PTR_PTR_1126dd4f0);
    puVar1 = PTR_PTR_1126dd478;
    func_0x00010c22bee0(PTR_PTR_1126dd478);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e700(param_3,param_2,puVar1,0,*(undefined8 *)(param_1 + 0x10),
                        *(undefined1 *)(param_1 + 100));
    func_0x0001090bd6fc();
  }
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010bf21ca0(lVar2,param_2,*(undefined8 *)(param_1 + 0x70));
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126dd5a8;
  _objc_alloc();
  func_0x00010bff9820();
  func_0x0001090bd70c();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar1;
  _objc_release(uVar3);
  func_0x00010c089aa0();
  if (lVar2 == 0) {
    func_0x00010bed8a60(param_1,param_2,1);
  }
  else {
    func_0x00010be807e0(param_1);
  }
  func_0x0001090bd6e8();
  func_0x00010c2778c0(*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  func_0x0001090bd644();
  func_0x0001090bd6fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1090bcac4; end: 1090bcaff; -[SCNeoPlayerSingleMediaSampleBufferProvider _updateMediaDataManagerLoadMode] */

void FUN_1090bcac4(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x19;
  
  func_0x0001090bd6f0();
  iVar1 = (int)param_1;
  if (((param_1 & 1) == 0) && (func_0x0001090bd704(), iVar1 == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1be790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x19 + 0x28),PTR_s_setLoadMode_forSourceIndex__11264d408,uVar2,
             *(undefined8 *)(unaff_x19 + 0x70));
  return;
}



/* Entry: 1090bcb00; end: 1090bcb2f; -[SCNeoPlayerSingleMediaSampleBufferProvider trackInfos] */

void FUN_1090bcb00(void)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x0001090bd698();
  func_0x0001090bd654();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  func_0x0001090bd65c();
  func_0x0001090bd64c();
  func_0x0001090bd644();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1090bcb30; end: 1090bcb5b; -[SCNeoPlayerSingleMediaSampleBufferProvider loadedTrackInfos] */

undefined1 FUN_1090bcb30(void)

{
  undefined1 uVar1;
  long unaff_x19;
  
  func_0x0001090bd698();
  func_0x0001090bd654();
  uVar1 = *(undefined1 *)(unaff_x19 + 0x40);
  func_0x0001090bd64c();
  func_0x0001090bd644();
  return uVar1;
}



/* Entry: 1090bcb5c; end: 1090bcb8b; -[SCNeoPlayerSingleMediaSampleBufferProvider loadedTimeRanges] */

void FUN_1090bcb5c(void)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x0001090bd698();
  func_0x0001090bd654();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x20);
  func_0x0001090bd65c();
  func_0x0001090bd64c();
  func_0x0001090bd644();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1090bcb8c; end: 1090bcbbb; -[SCNeoPlayerSingleMediaSampleBufferProvider error] */

void FUN_1090bcb8c(void)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x0001090bd698();
  func_0x0001090bd654();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x38);
  func_0x0001090bd65c();
  func_0x0001090bd64c();
  func_0x0001090bd644();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1090bcbbc; end: 1090bcc57; -[SCNeoPlayerSingleMediaSampleBufferProvider setVideoTrackId:audioTrackId:currentTime:] */

void FUN_1090bcbbc(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  long unaff_x19;
  
  func_0x0001090bd638();
  if (*(int *)(unaff_x19 + 0x44) == param_3) {
    if (*(int *)(unaff_x19 + 0x48) == param_4) {
      return;
    }
  }
  else {
    *(int *)(unaff_x19 + 0x44) = param_3;
    if (*(int *)(unaff_x19 + 0x48) == param_4) goto LAB_1090bcc14;
  }
  *(int *)(unaff_x19 + 0x48) = param_4;
LAB_1090bcc14:
  func_0x0001090bd6e8();
  func_0x00010bf99fe0(*(undefined8 *)(unaff_x19 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7df80();
  func_0x0001090bd70c();
  func_0x00010bed6520();
                    /* WARNING: Could not recover jumptable at 0x00010bed65f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1090bcc58; end: 1090bcd13; -[SCNeoPlayerSingleMediaSampleBufferProvider _onError:] */

void FUN_1090bcc58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001090bd6b0();
  func_0x0001090bd65c();
  _objc_sync_enter(param_1);
  if (*(long *)(param_1 + 0x38) == 0) {
    func_0x0001090bd6a0();
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = param_3;
    _objc_release(uVar1);
    _objc_sync_exit(param_1);
    func_0x0001090bd688();
    func_0x00010bedb460(param_1);
    func_0x00010bf99fe0(*(undefined8 *)(param_1 + 0x10));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf75720();
    func_0x0001090bd680();
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c149640();
    func_0x0001090bd680();
  }
  else {
    _objc_sync_exit(param_1);
    func_0x0001090bd688();
    func_0x00010bedb460(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1090bcd14; end: 1090bcd9f; -[SCNeoPlayerSingleMediaSampleBufferProvider _didLoadTrackInfos] */

void FUN_1090bcd14(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bed6520();
  *(undefined1 *)(param_1 + 0x41) = 0;
  func_0x0001090bd6a0();
  func_0x0001090bd654();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c277fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  _objc_release(uVar2);
  *(undefined1 *)(param_1 + 0x40) = 1;
  func_0x0001090bd64c();
  func_0x0001090bd644();
  func_0x0001090bd6e8();
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1496a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090bcda0; end: 1090bce3b; -[SCNeoPlayerSingleMediaSampleBufferProvider _updateLoadedTimeRanges] */

void FUN_1090bcda0(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  
  func_0x0001090bd698();
  func_0x0001090bd654();
  lVar1 = *(long *)(unaff_x19 + 0x30);
  func_0x00010c09ca60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == *(long *)(unaff_x19 + 0x20)) {
    func_0x0001090bd64c();
  }
  else {
    func_0x0001090bd65c();
    uVar2 = *(undefined8 *)(unaff_x19 + 0x20);
    *(long *)(unaff_x19 + 0x20) = lVar1;
    _objc_release(uVar2);
    func_0x0001090bd64c();
    func_0x0001090bd644();
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c149680();
  }
  func_0x0001090bd644();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1090bce3c; end: 1090bcfb3; -[SCNeoPlayerSingleMediaSampleBufferProvider _updateDuration] */

void FUN_1090bce3c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
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
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_e8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_f0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_e0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uVar1 = *(ulong *)(param_1 + 0x30);
  func_0x00010c277fa0();
  _objc_retainAutoreleasedReturnValue();
  iVar3 = (int)&uStack_130;
  uVar2 = uVar1;
  func_0x00010bf52a60();
  if (uVar2 != 0) {
    lVar5 = *plStack_120;
    do {
      uVar6 = 0;
      do {
        if (*plStack_120 != lVar5) {
          _objc_enumerationMutation(uVar1);
        }
        lVar4 = *(long *)(param_1 + 0x30);
        func_0x00010c277e80(*(undefined8 *)(lStack_128 + uVar6 * 8));
        if (lVar4 == 0) {
          uStack_148 = 0;
          uStack_140 = 0;
          uStack_138 = 0;
        }
        else {
          func_0x00010bf8b240(&uStack_148,lVar4);
        }
        uStack_158 = uStack_e8;
        uStack_160 = uStack_f0;
        uStack_150 = uStack_e0;
        _CMTimeMaximum(&uStack_f0,&uStack_160,&uStack_148);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar2);
      iVar3 = (int)&uStack_130;
      uVar2 = uVar1;
      func_0x00010bf52a60();
    } while (uVar2 != 0);
  }
  lVar5 = 0;
  func_0x0001090bd688();
  func_0x0001090bd6a0();
  func_0x0001090bd654();
  *(undefined8 *)(param_1 + 0x54) = uStack_e8;
  *(undefined8 *)(param_1 + 0x4c) = uStack_f0;
  *(undefined8 *)(param_1 + 0x5c) = uStack_e0;
  func_0x0001090bd64c();
  func_0x0001090bd644();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if ((*(char *)(lVar5 + 0x41) == '\x01') && (lVar4 = lVar5, func_0x0001090bd704(), (int)lVar4 != 0)
     ) {
    func_0x00010bdfe8c0(lVar5);
  }
  if (iVar3 != 0) {
    func_0x00010bed7360(lVar5);
    func_0x0001090bd6e0();
    func_0x00010bed6520(lVar5);
  }
  if ((*(byte *)(lVar5 + 0x41) & 1) == 0) {
    func_0x00010bedad00(lVar5);
  }
  if (*(int *)(lVar5 + 0x44) != 0) {
    iVar3 = (int)*(undefined8 *)(lVar5 + 0x30);
    func_0x00010bfd9720();
    if (iVar3 != 0) {
      func_0x00010bf6b020(lVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1496e0();
      func_0x0001090bd688();
    }
  }
  if (*(int *)(lVar5 + 0x48) != 0) {
    iVar3 = (int)*(undefined8 *)(lVar5 + 0x30);
    func_0x00010bfd9720();
    if (iVar3 != 0) {
      func_0x00010bf6b020(lVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1496c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar5);
      return;
    }
  }
  return;
}



/* Entry: 1090bcfb4; end: 1090bd087; -[SCNeoPlayerSingleMediaSampleBufferProvider _updateFromDemuxerWithParsed:] */

void FUN_1090bcfb4(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  
  if ((*(char *)(param_1 + 0x41) == '\x01') &&
     (lVar2 = param_1, func_0x0001090bd704(), (int)lVar2 != 0)) {
    func_0x00010bdfe8c0(param_1);
  }
  if (param_3 != 0) {
    func_0x00010bed7360(param_1);
    func_0x0001090bd6e0();
    func_0x00010bed6520(param_1);
  }
  if ((*(byte *)(param_1 + 0x41) & 1) == 0) {
    func_0x00010bedad00(param_1);
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
    func_0x00010bfd9720();
    if (iVar1 != 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1496e0();
      func_0x0001090bd688();
    }
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
    func_0x00010bfd9720();
    if (iVar1 != 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1496c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 1090bd088; end: 1090bd107; -[SCNeoPlayerSingleMediaSampleBufferProvider _processBuffer] */

void FUN_1090bd088(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c1379a0();
  if ((int)uVar2 != 0) {
    uVar3 = *(ulong *)(param_1 + 0x30);
    uStack_38 = 0;
    func_0x00010c0f3f00(uVar3,param_2,&uStack_38);
    uVar1 = uStack_38;
    func_0x0001090bd6a8();
    if ((uVar3 & 1) == 0) {
      func_0x00010be690a0(param_1,param_2,uVar1);
      func_0x0001090bd680();
      return;
    }
    func_0x0001090bd680();
  }
  func_0x00010bed8a60(param_1,param_2,uVar2);
  return;
}



/* Entry: 1090bd108; end: 1090bd227; -[SCNeoPlayerSingleMediaSampleBufferProvider seekToTime:toleranceBefore:toleranceAfter:] */

void FUN_1090bd108(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  
  func_0x00010bf0ae00(*(undefined8 *)(param_2 + 0x68));
  if (*(int *)(param_2 + 0x44) == 0) {
    if (*(int *)(param_2 + 0x48) != 0) {
      if (*(long *)(param_2 + 0x30) != 0) {
        func_0x0001090bd66c();
        func_0x0001090bd620(*(undefined8 *)(param_6 + 0x10));
      }
      func_0x0001090bd714();
    }
  }
  else {
    if (*(long *)(param_2 + 0x30) != 0) {
      func_0x0001090bd66c();
      func_0x0001090bd620(*(undefined8 *)(param_6 + 0x10));
    }
    func_0x0001090bd714();
    if (*(int *)(param_2 + 0x48) != 0) {
      func_0x0001090bd66c(*(undefined8 *)(param_2 + 0x30));
      func_0x0001090bd620();
    }
  }
  func_0x00010bed65e0(param_2);
  uVar1 = *param_4;
  param_1[1] = param_4[1];
  *param_1 = uVar1;
  param_1[2] = param_4[2];
  return;
}



/* Entry: 1090bd228; end: 1090bd25b; -[SCNeoPlayerSingleMediaSampleBufferProvider hasNextAudioSampleBuffer] */

undefined8 FUN_1090bd228(void)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001090bd638();
  if (*(int *)(unaff_x19 + 0x48) != 0) {
    uVar1 = *(undefined8 *)(unaff_x19 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bfd9730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_hasNextSampleBufferForTrackId__1125d3f88);
    return uVar1;
  }
  return 0;
}



/* Entry: 1090bd25c; end: 1090bd2b3; -[SCNeoPlayerSingleMediaSampleBufferProvider _updateCurrentBitrate] */

void FUN_1090bd25c(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x48) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x30);
    func_0x00010bf1c840(lVar1);
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    lVar2 = *(long *)(param_1 + 0x30);
    func_0x00010bf1c840(lVar2);
    lVar1 = lVar2 + lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c212290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_setTargetBitrate_forSourceIndex__1126622c8,lVar1,
             *(undefined8 *)(param_1 + 0x70));
  return;
}



/* Entry: 1090bd2b4; end: 1090bd37f; -[SCNeoPlayerSingleMediaSampleBufferProvider _updateCurrentMediaByteOffset] */

void FUN_1090bd2b4(ulong param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x19;
  
  func_0x0001090bd6f0();
  if (((int)param_1 != 0) && (func_0x0001090bd704(), (param_1 & 1) != 0)) {
    iVar1 = *(int *)(unaff_x19 + 0x44);
    if (*(int *)(unaff_x19 + 0x48) == 0) {
      if (iVar1 == 0) {
        return;
      }
      uVar6 = *(ulong *)(unaff_x19 + 0x30);
      func_0x00010bf21d00(uVar6);
      uVar8 = uVar6 + param_2;
    }
    else {
      uVar3 = *(ulong *)(unaff_x19 + 0x30);
      func_0x00010bf21d00();
      uVar6 = uVar3;
      if (iVar1 == 0) {
        uVar8 = uVar3 + param_2;
      }
      else {
        uVar4 = *(ulong *)(unaff_x19 + 0x30);
        lVar7 = param_2;
        func_0x00010bf21d00();
        if (uVar4 <= uVar3) {
          uVar6 = uVar4;
        }
        uVar8 = uVar3 + param_2;
        if (uVar3 + param_2 <= uVar4 + lVar7) {
          uVar8 = uVar4 + lVar7;
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010c187650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(unaff_x19 + 0x28),PTR_s_setCurrentMediaByteRangeStart_by_11263f7b0,
               uVar6,uVar8,*(undefined8 *)(unaff_x19 + 0x70));
    return;
  }
  uVar2 = *(undefined8 *)(unaff_x19 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x19 + 0x30);
  func_0x00010bf21d20(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010c187630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar2,PTR_s_setCurrentMediaByteOffset_forSou_11263f7a8,uVar5,
             *(undefined8 *)(unaff_x19 + 0x70));
  return;
}



/* Entry: 1090bd380; end: 1090bd3cb; -[SCNeoPlayerSingleMediaSampleBufferProvider dequeueNextAudioSampleBufferWithError:] */

void FUN_1090bd380(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001090bd638();
  if (*(int *)(unaff_x19 + 0x48) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x19 + 0x30);
    func_0x00010bf6dfa0(uVar1,param_2,*(int *)(unaff_x19 + 0x48),param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090bd6e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1090bd3cc; end: 1090bd3f3; -[SCNeoPlayerSingleMediaSampleBufferProvider didReachEndOfAudioTrack] */

undefined8 FUN_1090bd3cc(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x41) & 1) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bf78e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_didReachEndOfStreamForTrackId__1125bbd48);
    return uVar1;
  }
  return 1;
}



/* Entry: 1090bd3f4; end: 1090bd427; -[SCNeoPlayerSingleMediaSampleBufferProvider hasNextVideoSampleBuffer] */

undefined8 FUN_1090bd3f4(void)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001090bd638();
  if (*(int *)(unaff_x19 + 0x44) != 0) {
    uVar1 = *(undefined8 *)(unaff_x19 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bfd9730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_hasNextSampleBufferForTrackId__1125d3f88);
    return uVar1;
  }
  return 0;
}



/* Entry: 1090bd428; end: 1090bd473; -[SCNeoPlayerSingleMediaSampleBufferProvider dequeueNextVideoSampleBufferWithError:] */

void FUN_1090bd428(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001090bd638();
  if (*(int *)(unaff_x19 + 0x44) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x19 + 0x30);
    func_0x00010bf6dfa0(uVar1,param_2,*(int *)(unaff_x19 + 0x44),param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090bd6e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1090bd474; end: 1090bd49b; -[SCNeoPlayerSingleMediaSampleBufferProvider didReachEndOfVideoTrack] */

undefined8 FUN_1090bd474(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x41) & 1) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bf78e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_didReachEndOfStreamForTrackId__1125bbd48);
    return uVar1;
  }
  return 1;
}



/* Entry: 1090bd49c; end: 1090bd4b3; -[SCNeoPlayerSingleMediaSampleBufferProvider computeMediaDataManagerMetrics] */

void FUN_1090bd49c(undefined8 *param_1,long param_2)

{
  if (*(long *)(param_2 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf45910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_2 + 0x28),PTR_s_computeMetrics_1125aefe8)
    ;
    return;
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 1090bd4b4; end: 1090bd4ef; -[SCNeoPlayerSingleMediaSampleBufferProvider timebase] */

undefined8 FUN_1090bd4b4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf99fe0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26fdc0();
  func_0x0001090bd644();
  return uVar1;
}



/* Entry: 1090bd4f0; end: 1090bd52b; -[SCNeoPlayerSingleMediaSampleBufferProvider duration] */

void FUN_1090bd4f0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  func_0x0001090bd654();
  uVar1 = *(undefined8 *)(param_2 + 0x4c);
  param_1[1] = *(undefined8 *)(param_2 + 0x54);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x5c);
  func_0x0001090bd64c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1090bd52c; end: 1090bd543; -[SCNeoPlayerSingleMediaSampleBufferProvider delegate] */

void FUN_1090bd52c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1090bd544; end: 1090bd54f; -[SCNeoPlayerSingleMediaSampleBufferProvider setDelegate:] */

void FUN_1090bd544(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 1090bd550; end: 1090bd557; -[SCNeoPlayerSingleMediaSampleBufferProvider mediaDataManager:didFailToLoadWithError:forSourceIndex:] */

void FUN_1090bd550(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be690b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__onError__112577dc8,param_4);
  return;
}



/* Entry: 1090bd558; end: 1090bd5bb; -[SCNeoPlayerSingleMediaSampleBufferProvider mediaDataManager:didUpdateBufferAtByteOffset:forSourceIndex:loadLatency:loadSize:] */

void FUN_1090bd558(undefined8 param_1,long param_2)

{
  func_0x00010bf0ae00(*(undefined8 *)(param_2 + 0x68));
  func_0x00010be807e0(param_2);
  param_2 = param_2 + 8;
  _objc_loadWeakRetained(param_2);
  func_0x00010c149660(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1090bd5bc; end: 1090bd5bf; -[SCNeoPlayerSingleMediaSampleBufferProvider mediaDataManager:didReachEndforSourceIndex:] */

void FUN_1090bd5bc(void)

{
  return;
}



/* Entry: 1090bd5c0; end: 1090bd5c7; -[SCNeoPlayerSingleMediaSampleBufferProvider mediaDataManagerSourceIndex] */

undefined8 FUN_1090bd5c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1090bd5c8; end: 1090bd61f; -[SCNeoPlayerSingleMediaSampleBufferProvider .cxx_destruct] */

void FUN_1090bd5c8(long param_1)

{
  func_0x0001090bd664(param_1 + 0x68);
  func_0x0001090bd664(param_1 + 0x38);
  func_0x0001090bd664(param_1 + 0x30);
  func_0x0001090bd664(param_1 + 0x28);
  func_0x0001090bd664(param_1 + 0x20);
  func_0x0001090bd664(param_1 + 0x18);
  func_0x0001090bd664(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1090bd620; end: 1090bd727;  */

void FUN_1090bd620(undefined8 param_1,undefined8 param_2)

{
  long unaff_x29;
  undefined8 uStack0000000000000010;
  
  uStack0000000000000010 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010c157330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (unaff_x29 + -0x48,param_2,PTR_s_seekToTime_toleranceBefore_toler_1126336e8,
             &stack0x00000040,&stack0x00000020);
  return;
}



/* Entry: 1090bd728; end: 1090bd877; -[SCNeoPlayerSubtitleManager initWithSubtitlesPath:instruments:] */

undefined1 *
FUN_1090bd728(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_48 [8];
  
  func_0x0001090bf030();
  func_0x0001090bf020();
  puVar1 = &stack0xffffffffffffffc0;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(puVar1 + 8);
    *(undefined8 *)(puVar1 + 8) = param_3;
    _objc_release(uVar2);
    func_0x0001090bf020();
    uVar2 = *(undefined8 *)(puVar1 + 0x40);
    *(undefined8 *)(puVar1 + 0x40) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__kCMTimeZero_110348670;
    uVar2 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    *(undefined8 *)(puVar1 + 0x20) = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    *(undefined8 *)(puVar1 + 0x18) = uVar2;
    *(undefined8 *)(puVar1 + 0x28) = *(undefined8 *)(puVar3 + 0x10);
    puVar1[0x30] = 0;
    uVar2 = 0;
    _dispatch_queue_attr_make_with_qos_class(0,0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = &UNK_10f54f4ce;
    _dispatch_queue_create(&UNK_10f54f4ce,uVar2);
    uVar2 = *(undefined8 *)(puVar1 + 0x38);
    *(undefined **)(puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    func_0x0001090bef4c();
    _dispatch_queue_set_specific(*(undefined8 *)(puVar1 + 0x38),&UNK_10f54f4fe,&UNK_10f54f4fe,0);
    FUN_1090be8b8(auStack_48);
    FUN_1090bd878(puVar1 + 0x10,auStack_48);
    FUN_1090beb08(auStack_48);
    *(undefined8 *)(puVar1 + 0x48) = 0;
    func_0x00010c09c3c0(puVar1);
  }
  func_0x0001090beed0();
  func_0x0001090beed8();
  return puVar1;
}



/* Entry: 1090bd878; end: 1090bd8b3;  */

undefined8 * FUN_1090bd878(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    uVar2 = *param_2;
    *param_2 = 0;
    uVar1 = *param_1;
    *param_1 = uVar2;
    FUN_1090beb30(uVar1);
  }
  return param_1;
}



/* Entry: 1090bd8b4; end: 1090bd94b; -[SCNeoPlayerSubtitleManager attachToTimebase:queue:] */

void FUN_1090bd8b4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_4);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x0001090bef78();
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1090bd94c;
    puStack_50 = &UNK_110896ea8;
    lStack_48 = param_1;
    lStack_38 = param_3;
    _objc_retain(param_4);
    uStack_40 = param_4;
    func_0x000107c27d8c(uVar1,auStack_68);
    _objc_release(uStack_40);
  }
  func_0x0001090beed8();
  return;
}


