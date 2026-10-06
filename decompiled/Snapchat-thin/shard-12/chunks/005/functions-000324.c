/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109173778; end: 109173783; -[CTPSearchResultSection .cxx_destruct] */

void FUN_109173778(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 109173784; end: 1091738cb; -[CTPSearchStateWrapper initWithState:text:query:results:error:debugHTML:] */

undefined1 *
FUN_109173784(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1127009e0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1091738cc; end: 1091738ef; -[CTPSearchStateWrapper copyWithZone:] */

undefined8 FUN_1091738cc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1091738f0; end: 10917398b; -[CTPSearchStateWrapper hash] */

undefined8 * FUN_1091738f0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_109173a64:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_109173a70;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[1] == param_3[1])) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = (undefined8 *)puVar3[6];
              if (puVar6 != (undefined8 *)param_3[6]) {
                func_0x00010c071ae0();
                goto LAB_109173a70;
              }
              goto LAB_109173a64;
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_109173a70:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10917398c; end: 109173a8b; -[CTPSearchStateWrapper isEqual:] */

long FUN_10917398c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_109173a64:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_109173a70;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_109173a70;
              }
              goto LAB_109173a64;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_109173a70:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 109173a8c; end: 109173a93; -[CTPSearchStateWrapper state] */

undefined8 FUN_109173a8c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109173a94; end: 109173a9b; -[CTPSearchStateWrapper text] */

undefined8 FUN_109173a94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109173a9c; end: 109173aa3; -[CTPSearchStateWrapper query] */

undefined8 FUN_109173a9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109173aa4; end: 109173aab; -[CTPSearchStateWrapper results] */

undefined8 FUN_109173aa4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 109173aac; end: 109173ab3; -[CTPSearchStateWrapper error] */

undefined8 FUN_109173aac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 109173ab4; end: 109173abb; -[CTPSearchStateWrapper debugHTML] */

undefined8 FUN_109173ab4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 109173abc; end: 109173b0f; -[CTPSearchStateWrapper .cxx_destruct] */

void FUN_109173abc(long param_1)

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



/* Entry: 109173b10; end: 109173bbb; -[SCVideoTrackedImage initWithFullSizeImage:] */

undefined8 FUN_109173b10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b2700;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c055500(0x3fe0000000000000,0x3fe0000000000000,0x3ff0000000000000,0);
  puVar2 = PTR_PTR_1126c41f8;
  func_0x00010c252d00(PTR_PTR_1126c41f8,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02fc00(0x3ff0000000000000,0x3ff0000000000000,param_1,param_2,param_3,puVar2);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 109173bbc; end: 109173c2f; -[SCVideoTrackingBounceState initWithBounceState:] */

undefined1 * FUN_109173bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127009e8;
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



/* Entry: 109173c30; end: 109173c37; -[SCVideoTrackingBounceState bounceAsset] */

void FUN_109173c30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf207d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_bounceAsset_1125a5b98);
  return;
}



/* Entry: 109173c38; end: 109173c7b; -[SCVideoTrackingBounceState timestampOfOriginalVideoForBounceVideoTimestamp:] */

void FUN_109173c38(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (*(long *)(param_2 + 8) != 0) {
    uStack_28 = param_4[1];
    uStack_30 = *param_4;
    uStack_20 = param_4[2];
    func_0x00010c270b20(*(long *)(param_2 + 8),param_3,&uStack_30);
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 109173c7c; end: 109173c87; -[SCVideoTrackingBounceState .cxx_destruct] */

void FUN_109173c7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109173c88; end: 109173e8f;  */

long FUN_109173c88(long param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x21;
  long unaff_x22;
  long lVar4;
  long lVar5;
  undefined *puStack_230;
  undefined8 uStack_228;
  code *pcStack_220;
  undefined *puStack_218;
  undefined1 *puStack_210;
  undefined1 uStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined1 *puStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
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
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar4 = param_1;
  func_0x00010bf529e0();
  if (lVar4 == 0) {
    lVar4 = 0;
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
    _objc_retain(param_1);
    lVar2 = param_1;
    func_0x00010bf52a60();
    lVar4 = 0;
    if (lVar2 != 0) {
      lVar4 = *plStack_120;
      do {
        lVar5 = 0;
        do {
          if (*plStack_120 != lVar4) {
            _objc_enumerationMutation(param_1);
          }
          unaff_x21 = *(long *)(lStack_128 + lVar5 * 8);
          unaff_x22 = unaff_x21;
          func_0x00010bf4d860();
          _objc_retainAutoreleasedReturnValue();
          if (unaff_x22 == 0) {
            uStack_148 = 0;
            uStack_150 = 0;
            uStack_138 = 0;
            uStack_140 = 0;
            uStack_158 = 0;
            uStack_160 = 0;
          }
          else {
            func_0x00010bdc1120(&uStack_160,unaff_x22);
          }
          _objc_release(unaff_x22);
          func_0x00010c27c940();
          _objc_retainAutoreleasedReturnValue();
          if (unaff_x21 == 0) {
            uStack_178 = 0;
            uStack_180 = 0;
            uStack_168 = 0;
            uStack_170 = 0;
            uStack_188 = 0;
            uStack_190 = 0;
          }
          else {
            func_0x00010bdc1120(&uStack_190,unaff_x21);
          }
          _objc_release(unaff_x21);
          uStack_1a8 = uStack_158;
          uStack_1b0 = uStack_160;
          uStack_1a0 = uStack_150;
          uStack_1c8 = uStack_188;
          uStack_1d0 = uStack_190;
          uStack_1c0 = uStack_180;
          iVar1 = (int)&uStack_1b0;
          param_2 = &uStack_1d0;
          _CMTimeCompare();
          if (iVar1 != 0) {
LAB_109173e34:
            lVar4 = 1;
            goto LAB_109173e38;
          }
          uStack_1a8 = uStack_140;
          uStack_1b0 = uStack_148;
          uStack_1a0 = uStack_138;
          uStack_1c8 = uStack_170;
          uStack_1d0 = uStack_178;
          uStack_1c0 = uStack_168;
          iVar1 = (int)&uStack_1b0;
          param_2 = &uStack_1d0;
          _CMTimeCompare();
          if (iVar1 != 0) goto LAB_109173e34;
          lVar5 = lVar5 + 1;
        } while (lVar2 != lVar5);
        lVar2 = param_1;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
      lVar4 = 0;
    }
LAB_109173e38:
    _objc_release(param_1);
  }
  lVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar4;
  }
  ___stack_chk_fail();
  pcStack_1d8 = FUN_109173e90;
  lStack_200 = unaff_x22;
  lStack_1f8 = unaff_x21;
  lStack_1f0 = lVar4;
  lStack_1e8 = param_1;
  puStack_1e0 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  else {
    _objc_retain(lVar2);
    puVar3 = (undefined1 *)param_2;
    FUN_109173c88();
    puStack_230 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_228 = 0xc2000000;
    pcStack_220 = FUN_109173f4c;
    puStack_218 = &UNK_110adeb00;
    uStack_208 = SUB81(puVar3,0);
    _objc_retain(param_2);
    lVar4 = lVar2;
    puStack_210 = (undefined1 *)param_2;
    func_0x000107c31908(lVar2,&puStack_230);
    _objc_release(lVar2);
    _objc_release(puStack_210);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return lVar4;
}



/* Entry: 109173e90; end: 109173f4b;  */

void FUN_109173e90(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    _objc_retain(param_1);
    uVar1 = param_2;
    FUN_109173c88();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_109173f4c;
    puStack_48 = &UNK_110adeb00;
    uStack_38 = (undefined1)uVar1;
    _objc_retain(param_2);
    lVar2 = param_1;
    uStack_40 = param_2;
    func_0x000107c31908(param_1,&puStack_60);
    _objc_release(param_1);
    _objc_release(uStack_40);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 109173f4c; end: 1091743c7;  */

void FUN_109173f4c(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  double *pdVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  double dStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  double dStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  double dStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  double dStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  double dStack_1a0;
  undefined8 uStack_198;
  double dStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  double dStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cVar1 = *(char *)(param_1 + 0x28);
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c26fb80(param_2);
  if (cVar1 == '\x01') {
    lVar6 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar6);
    _CMTimeMakeWithSeconds(&dStack_260,(double)lVar2 / 1000.0,600);
    uStack_118 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_120 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_110 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    dVar10 = 0.0;
    lStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    plStack_150 = (long *)0x0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    _objc_retain(lVar6);
    lVar2 = lVar6;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar8 = *plStack_150;
      do {
        lVar9 = 0;
        do {
          if (*plStack_150 != lVar8) {
            _objc_enumerationMutation(lVar6);
          }
          lVar7 = *(long *)(lStack_158 + lVar9 * 8);
          lVar3 = lVar7;
          func_0x00010bf4d860();
          _objc_retainAutoreleasedReturnValue();
          if (lVar3 == 0) {
            uStack_178 = 0;
            uStack_180 = 0;
            uStack_168 = 0;
            uStack_170 = 0;
            uStack_188 = 0;
            dStack_190 = 0.0;
          }
          else {
            func_0x00010bdc1120(&dStack_190,lVar3);
          }
          _objc_release(lVar3);
          func_0x00010c27c940();
          _objc_retainAutoreleasedReturnValue();
          if (lVar7 == 0) {
            uStack_1a8 = 0;
            uStack_1b0 = 0;
            uStack_198 = 0;
            dStack_1a0 = 0.0;
            uStack_1b8 = 0;
            dStack_1c0 = 0.0;
          }
          else {
            func_0x00010bdc1120(&dStack_1c0,lVar7);
          }
          _objc_release(lVar7);
          uStack_238 = uStack_1b8;
          dStack_240 = dStack_1c0;
          uStack_230 = uStack_1b0;
          uStack_1e8 = uStack_188;
          dStack_1f0 = dStack_190;
          uStack_1e0 = uStack_180;
          _CMTimeSubtract(&uStack_1d8,&dStack_240,&dStack_1f0);
          uStack_1e8 = uStack_258;
          dStack_1f0 = dStack_260;
          uStack_1e0 = uStack_250;
          uStack_208 = uStack_118;
          uStack_210 = uStack_120;
          uStack_200 = uStack_110;
          _CMTimeAdd(&dStack_240,&dStack_1f0,&uStack_210);
          uStack_250 = uStack_230;
          uStack_258 = uStack_238;
          dStack_260 = dStack_240;
          uStack_1e8 = uStack_238;
          dStack_1f0 = dStack_240;
          uStack_1e0 = uStack_230;
          uStack_208 = uStack_1d0;
          uStack_210 = uStack_1d8;
          uStack_200 = uStack_1c8;
          _CMTimeAdd(&dStack_240,&dStack_1f0,&uStack_210);
          uStack_1e0 = uStack_230;
          uStack_1e8 = uStack_238;
          dVar10 = dStack_240;
          uStack_250 = uStack_230;
          uStack_258 = uStack_238;
          dStack_260 = dStack_240;
          uStack_238 = uStack_1b8;
          dStack_240 = dStack_1c0;
          uStack_228 = uStack_1a8;
          uStack_230 = uStack_1b0;
          uStack_218 = uStack_198;
          dStack_220 = dStack_1a0;
          dStack_1f0 = dVar10;
          pdVar4 = &dStack_240;
          _CMTimeRangeContainsTime(pdVar4,&dStack_1f0);
          if ((int)pdVar4 != 0) goto LAB_1091741fc;
          uStack_238 = uStack_188;
          dStack_240 = dStack_190;
          uStack_228 = uStack_178;
          uStack_230 = uStack_180;
          uStack_218 = uStack_168;
          dStack_220 = (double)uStack_170;
          _CMTimeRangeGetEnd(&dStack_1f0,&dStack_240);
          uStack_238 = uStack_1b8;
          dStack_240 = dStack_1c0;
          uStack_228 = uStack_1a8;
          uStack_230 = uStack_1b0;
          uStack_218 = uStack_198;
          dStack_220 = dStack_1a0;
          dVar10 = dStack_1a0;
          _CMTimeRangeGetEnd(&uStack_210,&dStack_240);
          _CMTimeSubtract(&uStack_120,&dStack_1f0,&uStack_210);
          lVar9 = lVar9 + 1;
        } while (lVar2 != lVar9);
        lVar2 = lVar6;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
LAB_1091741fc:
    _objc_release(lVar6);
    _objc_release(lVar6);
  }
  else {
    dVar10 = (double)lVar2 / 1000.0;
    _CMTimeMakeWithSeconds(&dStack_260,dVar10,600);
  }
  lVar2 = param_2;
  func_0x00010c27a460(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010c27ada0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2beb40();
  lVar8 = param_2;
  dVar11 = dVar10;
  func_0x00010c27a460(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c27ada0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bed60();
  dVar12 = dVar11;
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar6);
  _objc_release(lVar2);
  puVar5 = PTR_PTR_1126b2700;
  _objc_alloc();
  lVar2 = param_2;
  func_0x00010c27a460(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010c14e120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  lVar8 = param_2;
  dVar13 = dVar12;
  func_0x00010c27a460(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar9 = lVar8;
  func_0x00010c141a80(lVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c055500(dVar10,dVar11,dVar12,dVar13);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_alloc(PTR_PTR_1126bb2a8);
  uStack_f8 = uStack_258;
  dStack_100 = dStack_260;
  uStack_f0 = uStack_250;
  func_0x00010c052280();
  _objc_release();
  if ((*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) &&
     (___stack_chk_fail(), puVar5 != (undefined *)0x0)) {
    func_0x000107c31908();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091743c8; end: 1091743e7;  */

void FUN_1091743c8(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c31908(param_1,&PTR___NSConcreteGlobalBlock_110adeb30);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091743e8; end: 109174613;  */

void FUN_1091743e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c3fe0;
  _objc_alloc(PTR_PTR_1126c3fe0);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar2 = param_4;
  func_0x00010c27a460(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27ada0();
  func_0x00010c0df720(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar4 = param_4;
  func_0x00010c27a460(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27ada0();
  func_0x00010c0df720(param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c063600(puVar1);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  puVar6 = PTR_PTR_1126c3fe8;
  _objc_alloc(PTR_PTR_1126c3fe8);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar2 = param_4;
  func_0x00010c27a460(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010c0df720(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar4 = param_4;
  func_0x00010c27a460(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c141a80();
  func_0x00010c0df720(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c055500(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  puVar5 = PTR_PTR_1126c3ff0;
  _objc_alloc(PTR_PTR_1126c3ff0);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_4 == 0) {
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
  }
  else {
    func_0x00010c26f000(&uStack_68,param_4);
  }
  _CMTimeGetSeconds(&uStack_68);
  func_0x00010c0df7c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052280(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 109174614; end: 10917486b;  */

void FUN_109174614(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  lVar1 = param_2;
  func_0x00010c2790e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_109173e90();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
  }
  else {
    func_0x00010c26f000(&uStack_58,lVar1);
  }
  _CMTimeGetSeconds(&uStack_58);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c081160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar3 = lVar1;
  _objc_release(lVar1);
  if (lVar1 == 0) {
    lVar3 = 0;
    func_0x00010b73c82c(param_1,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010b73c8a8();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR_PTR_1126c41f0;
  _objc_alloc(PTR_PTR_1126c41f0);
  func_0x00010c0553e0();
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10917486c; end: 1091748df; -[SCPreviewFeatureBounceServices initWithBounce:] */

undefined1 * FUN_10917486c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127009f0;
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



/* Entry: 1091748e0; end: 1091748e7; -[SCPreviewFeatureBounceServices bounce] */

undefined8 FUN_1091748e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1091748e8; end: 1091748f3; -[SCPreviewFeatureBounceServices .cxx_destruct] */

void FUN_1091748e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091748f4; end: 109174b67;  */

void FUN_1091748f4(undefined8 *param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puVar1 = PTR__CGAffineTransformIdentity_110347008;
  uVar3 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  param_1[1] = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  uVar3 = *(undefined8 *)(puVar1 + 0x20);
  param_1[5] = *(undefined8 *)(puVar1 + 0x28);
  param_1[4] = uVar3;
  uVar2 = param_2;
  func_0x00010bfe8380();
  if (uVar2 == 0) goto LAB_109174b20;
  uVar2 = param_2;
  func_0x00010bfe8380();
  if (uVar2 < 8) {
    if ((1L << (uVar2 & 0x3f) & 0x22U) == 0) {
      if ((1L << (uVar2 & 0x3f) & 0x44U) == 0) {
        if ((1L << (uVar2 & 0x3f) & 0x88U) == 0) goto LAB_109174a74;
        uStack_58 = param_1[1];
        uStack_60 = *param_1;
        uStack_48 = param_1[3];
        uStack_50 = param_1[2];
        uStack_38 = param_1[5];
        uStack_40 = param_1[4];
        func_0x00010c23d0a0(param_2);
        _CGAffineTransformTranslate(param_1,0,&uStack_60);
        uStack_88 = param_1[1];
        uStack_90 = *param_1;
        uStack_78 = param_1[3];
        uStack_80 = param_1[2];
        uStack_68 = param_1[5];
        uStack_70 = param_1[4];
        uVar3 = 0xbff921fb54442d18;
      }
      else {
        uStack_58 = param_1[1];
        uStack_60 = *param_1;
        uStack_48 = param_1[3];
        uStack_50 = param_1[2];
        uStack_38 = param_1[5];
        uStack_40 = param_1[4];
        func_0x00010c23d0a0(param_2);
        _CGAffineTransformTranslate(param_1,&uStack_60);
        uStack_88 = param_1[1];
        uStack_90 = *param_1;
        uStack_78 = param_1[3];
        uStack_80 = param_1[2];
        uStack_68 = param_1[5];
        uStack_70 = param_1[4];
        uVar3 = 0x3ff921fb54442d18;
      }
    }
    else {
      uStack_58 = param_1[1];
      uStack_60 = *param_1;
      uStack_48 = param_1[3];
      uStack_50 = param_1[2];
      uStack_38 = param_1[5];
      uVar3 = param_1[4];
      uStack_40 = uVar3;
      func_0x00010c23d0a0(param_2);
      func_0x00010c23d0a0(param_2);
      _CGAffineTransformTranslate(param_1,uVar3,&uStack_60);
      uStack_88 = param_1[1];
      uStack_90 = *param_1;
      uStack_78 = param_1[3];
      uStack_80 = param_1[2];
      uStack_68 = param_1[5];
      uStack_70 = param_1[4];
      uVar3 = 0x400921fb54442d18;
    }
    _CGAffineTransformRotate(&uStack_60,uVar3,&uStack_90);
    param_1[1] = uStack_58;
    *param_1 = uStack_60;
    param_1[3] = uStack_48;
    param_1[2] = uStack_50;
    param_1[5] = uStack_38;
    param_1[4] = uStack_40;
  }
LAB_109174a74:
  uVar2 = param_2;
  func_0x00010bfe8380();
  if (uVar2 - 6 < 2) {
    uStack_88 = param_1[1];
    uStack_90 = *param_1;
    uStack_78 = param_1[3];
    uStack_80 = param_1[2];
    uStack_68 = param_1[5];
    uStack_70 = param_1[4];
    func_0x00010c23d0a0(param_2);
  }
  else {
    if (1 < uVar2 - 4) goto LAB_109174b20;
    uStack_88 = param_1[1];
    uStack_90 = *param_1;
    uStack_78 = param_1[3];
    uStack_80 = param_1[2];
    uStack_68 = param_1[5];
    uStack_70 = param_1[4];
    func_0x00010c23d0a0(param_2);
  }
  _CGAffineTransformTranslate(&uStack_60,&uStack_90);
  param_1[1] = uStack_58;
  *param_1 = uStack_60;
  param_1[3] = uStack_48;
  param_1[2] = uStack_50;
  param_1[5] = uStack_38;
  param_1[4] = uStack_40;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  _CGAffineTransformScale(&uStack_60,0xbff0000000000000,0x3ff0000000000000,&uStack_90);
  param_1[1] = uStack_58;
  *param_1 = uStack_60;
  param_1[3] = uStack_48;
  param_1[2] = uStack_50;
  param_1[5] = uStack_38;
  param_1[4] = uStack_40;
LAB_109174b20:
  _objc_release(param_2);
  return;
}



/* Entry: 109174b68; end: 109174d03; +[SCSnapCutUtil extractCutFromInputImage:maskImage:modelFilePath:imageSizeLimit:viewWidth:performer:completion:] */

void FUN_109174b68(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,long param_6,undefined8 param_7,long param_8,long param_9)

{
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  if ((((param_4 != 0) && (param_5 != 0)) && (param_6 != 0)) && ((param_8 != 0 && (param_9 != 0))))
  {
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_109174d04;
    puStack_88 = &UNK_110adeb50;
    _objc_retain(param_4);
    lStack_80 = param_4;
    _objc_retain(param_5);
    lStack_78 = param_5;
    _objc_retain(param_9);
    lStack_68 = param_9;
    _objc_retain(param_6);
    lStack_70 = param_6;
    uStack_60 = param_7;
    uStack_58 = param_1;
    func_0x00010c0f7fc0(param_8,param_3,&puStack_a0);
    _objc_release(lStack_70);
    _objc_release(lStack_68);
    _objc_release(lStack_78);
    _objc_release(lStack_80);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 109174d04; end: 1091754fb;  */

void FUN_109174d04(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  int iStack_208;
  int iStack_204;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  int iStack_1ec;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  long lStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_158;
  int *piStack_150;
  undefined1 *puStack_148;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [4];
  uint uStack_124;
  int iStack_120;
  int iStack_11c;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f0;
  int *piStack_e8;
  undefined1 *puStack_e0;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [4];
  uint uStack_c4;
  int iStack_c0;
  int iStack_bc;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  int *piStack_88;
  undefined1 *puStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
  FUN_1091748f4(auStack_128,*(undefined8 *)(param_1 + 0x20));
  func_0x00010c271ac0(auStack_c8,puVar6);
  puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
  FUN_1091748f4(&uStack_190,*(undefined8 *)(param_1 + 0x28));
  func_0x00010c271ac0(auStack_128,puVar6);
  if (lStack_b8 != 0) {
    uVar7 = (ulong)uStack_c4;
    if ((int)uStack_c4 < 3) {
      lVar8 = (long)iStack_bc * (long)iStack_c0;
    }
    else {
      lVar8 = 1;
      piVar9 = piStack_88;
      do {
        lVar8 = lVar8 * *piVar9;
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 1;
      } while (uVar7 != 0);
    }
    if (lVar8 != 0 && lStack_118 != 0) {
      uVar7 = (ulong)uStack_124;
      if ((int)uStack_124 < 3) {
        lVar8 = (long)iStack_11c * (long)iStack_120;
      }
      else {
        lVar8 = 1;
        piVar9 = piStack_e8;
        do {
          lVar8 = lVar8 * *piVar9;
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 1;
        } while (uVar7 != 0);
      }
      if (lVar8 != 0) {
        uVar10 = *(undefined8 *)(param_1 + 0x30);
        _objc_retain(uVar10);
        uVar4 = uVar10;
        _objc_retainAutorelease(uVar10);
        func_0x00010bdc3520();
        func_0x000107c278b8(&uStack_1f0,uVar4);
        plVar5 = (long *)0xd0;
        __Znwm();
        if (uStack_1dc < 0) {
          func_0x000107c3192c(&uStack_190,CONCAT44(iStack_1ec,uStack_1f0),
                              CONCAT44(uStack_1e8._4_4_,(undefined4)uStack_1e8));
        }
        else {
          uStack_190 = CONCAT44(iStack_1ec,uStack_1f0);
          uStack_180._7_1_ = uStack_1dc._3_1_;
        }
        FUN_10919da88(plVar5,0,1,&uStack_190,0);
        if (uStack_180._7_1_ < '\0') {
          __ZdlPv(uStack_190);
        }
        if (uStack_1dc._3_1_ < '\0') {
          __ZdlPv(CONCAT44(iStack_1ec,uStack_1f0));
        }
        _objc_release(uVar10);
        uStack_190._0_4_ = 0x1010000;
        uStack_188 = auStack_128;
        uStack_180 = 0;
        uStack_1f0 = 0x2010000;
        uStack_1e0 = 0;
        uStack_1dc = 0;
        uStack_68 = NEON_rev64(CONCAT44(iStack_bc,iStack_c0),4);
        uStack_1e8 = (undefined8 *)uStack_188;
        FUN_109b0f718(0,0,&uStack_190,&uStack_1f0,&uStack_68,1);
        uStack_190._0_4_ = 0x1010000;
        uStack_188 = auStack_c8;
        uStack_180 = 0;
        uStack_1f0 = 0x2010000;
        uStack_1e0 = 0;
        uStack_1dc = 0;
        uStack_1e8 = (undefined8 *)uStack_188;
        FUN_109ac9fc8(&uStack_190,&uStack_1f0,1,0);
        uStack_190 = CONCAT44(uStack_190._4_4_,0x1010000);
        uStack_188 = auStack_128;
        uStack_180 = 0;
        uStack_1f0 = 0x2010000;
        uStack_1e0 = 0;
        uStack_1dc = 0;
        uStack_1e8 = (undefined8 *)uStack_188;
        FUN_109ac9fc8(&uStack_190,&uStack_1f0,0xb,0);
        FUN_10919c9a0(&uStack_190,plVar5,auStack_c8,auStack_c8,auStack_128);
        if (uStack_180 == 0) {
LAB_1091750f0:
          (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
                    (*(undefined8 *)PTR__CGPointZero_110347540,
                     *(undefined8 *)(PTR__CGPointZero_110347540 + 8),*(long *)(param_1 + 0x38),0);
        }
        else {
          uVar7 = (ulong)uStack_190._4_4_;
          if ((int)uStack_190._4_4_ < 3) {
            lVar8 = (long)uStack_188._4_4_ * (long)(int)uStack_188;
          }
          else {
            lVar8 = 1;
            piVar9 = piStack_150;
            do {
              lVar8 = lVar8 * *piVar9;
              uVar7 = uVar7 - 1;
              piVar9 = piVar9 + 1;
            } while (uVar7 != 0);
          }
          if (lVar8 == 0) goto LAB_1091750f0;
          lVar8 = *(long *)(param_1 + 0x40);
          if (lVar8 != 0) {
            if (uStack_188._4_4_ < (int)uStack_188) {
              if (lVar8 < (int)uStack_188) {
                dVar12 = (double)lVar8 / (double)(int)uStack_188;
                dVar11 = dVar12 * (double)uStack_188._4_4_;
LAB_10917512c:
                iStack_208 = (int)dVar11;
                iStack_204 = (int)(dVar12 * (double)(int)uStack_188);
                uStack_1f0 = 0x1010000;
                puStack_60 = &uStack_190;
                uStack_1e0 = 0;
                uStack_1dc = 0;
                uStack_68 = CONCAT44(uStack_68._4_4_,0x2010000);
                uStack_58 = 0;
                uStack_1e8 = puStack_60;
                FUN_109b0f718(0,0,&uStack_1f0,&uStack_68,&iStack_208,3);
              }
            }
            else if (lVar8 < uStack_188._4_4_) {
              dVar12 = (double)lVar8 / (double)uStack_188._4_4_;
              dVar11 = dVar12 * (double)uStack_188._4_4_;
              goto LAB_10917512c;
            }
          }
          if ((uStack_190 & 0xff8) == 0) {
            uStack_1f0 = 0x1010000;
            puStack_60 = &uStack_190;
            uStack_1e0 = 0;
            uStack_1dc = 0;
            uStack_68 = CONCAT44(uStack_68._4_4_,0x2010000);
            uStack_58 = 0;
            uStack_1e8 = puStack_60;
            FUN_109ac9fc8(&uStack_1f0,&uStack_68,9,0);
          }
          else {
            uStack_1f0 = 0x1010000;
            puStack_60 = &uStack_190;
            uStack_1e0 = 0;
            uStack_1dc = 0;
            uStack_68 = CONCAT44(uStack_68._4_4_,0x2010000);
            uStack_58 = 0;
            uStack_1e8 = puStack_60;
            FUN_109ac9fc8(&uStack_1f0,&uStack_68,5,0);
          }
          FUN_109196448(&uStack_1f0,&uStack_190);
          puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
          _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
          func_0x00010bffa160();
          if (CONCAT44(iStack_1ec,uStack_1f0) != 0) {
            uStack_1e8._0_4_ = uStack_1f0;
            __ZdlPv();
          }
          uStack_1f0 = 0x42ff0000;
          uStack_1e8._4_4_ = 0;
          uStack_1e0 = 0;
          iStack_1ec = 0;
          uStack_1e8._0_4_ = 0;
          puStack_1b0 = &uStack_1e8;
          uStack_1d4 = 0;
          uStack_1d0 = 0;
          uStack_1dc = 0;
          uStack_1d8 = 0;
          uStack_1c4 = 0;
          uStack_1cc = 0;
          uStack_1c8 = 0;
          lStack_1b8 = 0;
          uStack_1c0 = 0;
          uStack_1bc = 0;
          uStack_1a0 = 0;
          uStack_198 = 0;
          uStack_68._0_4_ = 0x1010000;
          puStack_60 = (undefined8 *)auStack_128;
          uStack_58 = 0;
          iStack_208 = 0x2010000;
          uStack_1f8 = 0;
          uStack_200 = &uStack_1f0;
          puStack_1a8 = &uStack_1a0;
          FUN_109abb418(&uStack_68,&iStack_208);
          uStack_58 = 0;
          uStack_68 = CONCAT44(uStack_68._4_4_,0x1010000);
          puStack_60 = (undefined8 *)&uStack_1f0;
          FUN_109b42928(&iStack_208,&uStack_68);
          dVar11 = (double)(iStack_208 + (int)uStack_200 / 2);
          dVar12 = dVar11 - (double)(int)uStack_188 * 0.15;
          dVar11 = dVar11 + (double)(int)uStack_188 * 0.15;
          if ((double)((int)uStack_188 / 2) <= dVar12) {
            dVar11 = dVar12;
          }
          dVar12 = (double)iStack_bc / *(double *)(param_1 + 0x48);
          (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
                    (dVar11 / dVar12,(double)(iStack_204 + uStack_200._4_4_ / 2) / dVar12,
                     *(long *)(param_1 + 0x38),puVar6);
          if (lStack_1b8 != 0) {
            piVar9 = (int *)(lStack_1b8 + 0x14);
            do {
              iVar1 = *piVar9;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
              if (bVar3) {
                *piVar9 = iVar1 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar1 + -1 == 0) {
              func_0x000109a848d4(&uStack_1f0);
            }
          }
          lStack_1b8 = 0;
          uStack_1d8 = 0;
          uStack_1d4 = 0;
          uStack_1e0 = 0;
          uStack_1dc = 0;
          uStack_1c8 = 0;
          uStack_1c4 = 0;
          uStack_1d0 = 0;
          uStack_1cc = 0;
          if (0 < iStack_1ec) {
            lVar8 = 0;
            do {
              *(undefined4 *)((long)puStack_1b0 + lVar8 * 4) = 0;
              lVar8 = lVar8 + 1;
            } while (lVar8 < iStack_1ec);
          }
          if (puStack_1a8 != &uStack_1a0 && puStack_1a8 != (undefined8 *)0x0) {
            _free(puStack_1a8[-1]);
          }
          _objc_release(puVar6);
        }
        if (lStack_158 != 0) {
          piVar9 = (int *)(lStack_158 + 0x14);
          do {
            iVar1 = *piVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar3) {
              *piVar9 = iVar1 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar1 + -1 == 0) {
            func_0x000109a848d4(&uStack_190);
          }
        }
        lStack_158 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        uStack_168 = 0;
        uStack_170 = 0;
        if (0 < (int)uStack_190._4_4_) {
          lVar8 = 0;
          do {
            piStack_150[lVar8] = 0;
            lVar8 = lVar8 + 1;
          } while (lVar8 < (int)uStack_190._4_4_);
        }
        if (puStack_148 != auStack_140 && puStack_148 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_148 + -8));
        }
        (**(code **)(*plVar5 + 0x10))(plVar5);
        goto LAB_109174e5c;
      }
    }
  }
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(undefined8 *)PTR__CGPointZero_110347540,
             *(undefined8 *)(PTR__CGPointZero_110347540 + 8),*(long *)(param_1 + 0x38),0);
LAB_109174e5c:
  if (lStack_f0 != 0) {
    piVar9 = (int *)(lStack_f0 + 0x14);
    do {
      iVar1 = *piVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar3) {
        *piVar9 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(auStack_128);
    }
  }
  lStack_f0 = 0;
  uStack_110 = 0;
  lStack_118 = 0;
  uStack_100 = 0;
  uStack_108 = 0;
  if (0 < (int)uStack_124) {
    lVar8 = 0;
    do {
      piStack_e8[lVar8] = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)uStack_124);
  }
  if (puStack_e0 != auStack_d8 && puStack_e0 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_e0 + -8));
  }
  if (lStack_90 != 0) {
    piVar9 = (int *)(lStack_90 + 0x14);
    do {
      iVar1 = *piVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar3) {
        *piVar9 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000109a848d4(auStack_c8);
    }
  }
  lStack_90 = 0;
  uStack_b0 = 0;
  lStack_b8 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  if (0 < (int)uStack_c4) {
    lVar8 = 0;
    do {
      piStack_88[lVar8] = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)uStack_c4);
  }
  if (puStack_80 != auStack_78 && puStack_80 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_80 + -8));
  }
  return;
}



/* Entry: 1091754fc; end: 10917559f; +[SCUserDisplayNameFormatter firstDisplayNameFromFullName:] */

void FUN_1091754fc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f2b098);
  if (((uVar1 & 1) == 0) &&
     (uVar1 = param_3,
     func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f2b0b8),
     (int)uVar1 == 0)) {
    uVar1 = param_3;
    func_0x00010bf44740(param_3,param_2,&PTR____CFConstantStringClassReference_110db2d98);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  else {
    _objc_retain(param_3);
    uVar2 = param_3;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1091755a0; end: 1091755a7; +[SCUserDisplayNameFormatter shortenedDisplayNameFromFullName:] */

void FUN_1091755a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22d950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_shortenedDisplayNameWithFullName_112669078,param_3,0);
  return;
}



/* Entry: 1091755a8; end: 1091758a7; +[SCUserDisplayNameFormatter shortenedDisplayNameWithFullName:preferredMethod:] */

void FUN_1091755a8(undefined *param_1,long param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c0720c0();
  puVar6 = param_3;
  if ((((ulong)puVar1 & 1) != 0) || (puVar1 = param_3, func_0x00010c0720c0(), (int)puVar1 != 0)) {
    _objc_retain(param_3);
    goto LAB_109175880;
  }
  puVar1 = param_3;
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bfaea40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar1 = puVar3;
  func_0x00010bf529e0();
  if (puVar1 < (undefined *)0x2) {
    _objc_retain(param_3);
  }
  else {
    puVar1 = puVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    if (param_4 == 2) {
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c071760();
      if ((int)puVar6 == 0) {
        _objc_retain(puVar1);
        puVar6 = puVar1;
      }
      else {
LAB_10917578c:
        puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
      }
LAB_109175868:
      _objc_release(puVar2);
    }
    else {
      if (param_4 == 1) {
        func_0x00010c089820();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar2;
        func_0x00010c11f3a0();
        puVar4 = puVar2;
        func_0x00010c08fa60();
        if (puVar6 + param_2 == puVar4) goto LAB_10917578c;
        param_1 = puVar2;
        func_0x00010c260c20();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf35920(param_1);
        puVar6 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
        func_0x00010c0989a0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar6;
        func_0x00010bf359c0();
        _objc_release(puVar6);
        puVar6 = puVar4;
        if ((int)puVar5 != 0) {
          func_0x00010c25ce40(puVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
        }
LAB_109175714:
        _objc_release(param_1);
        goto LAB_109175868;
      }
      if (param_4 == 0) {
        func_0x00010c0dfd40(puVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class();
        func_0x00010be3b100();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_109175714;
      }
      puVar6 = (undefined *)0x0;
    }
    _objc_release(puVar1);
  }
  _objc_release(puVar3);
LAB_109175880:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1091758a8; end: 1091759bf; +[SCUserDisplayNameFormatter initialsWithFullName:] */

void FUN_1091758a8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c08fa60();
  if (uVar1 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    uVar2 = param_3;
    func_0x00010bf44740(param_3,param_2,&PTR____CFConstantStringClassReference_110db2d98);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010bf529e0();
    uVar1 = uVar6;
    if (1 < uVar6) {
      uVar1 = 2;
    }
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
    _objc_retainAutoreleasedReturnValue();
    if (uVar6 != 0) {
      uVar6 = 0;
      do {
        uVar4 = uVar2;
        func_0x00010c0dfd40(uVar2,param_2,uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_1;
        _objc_opt_class(param_1);
        func_0x00010be3b100();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf070e0(ppuVar3,param_2,uVar5);
        _objc_release(uVar5);
        _objc_release(uVar4);
        uVar6 = uVar6 + 1;
      } while (uVar1 != uVar6);
    }
    _objc_release(uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1091759c0; end: 109175a2b; +[SCUserDisplayNameFormatter _initialWithNameComponent:] */

void FUN_1091759c0(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010c08fa60();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    func_0x00010c11f3a0(param_3);
    ppuVar1 = param_3;
    func_0x00010c260c20(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 109175a2c; end: 109175a6b;  */

void FUN_109175a2c(void)

{
  if (lRam00000001137317c8 != -1) {
    func_0x000107c27d9c(0x1137317c8,&PTR___NSConcreteGlobalBlock_110adeb80);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfe63b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uRam00000001137317c0,PTR_s_ifExposed_1125d72b0);
  return;
}



/* Entry: 109175a6c; end: 109175acb;  */

void FUN_109175a6c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c3121c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b88d8;
  _objc_opt_class(PTR_PTR_1126b88d8);
  uVar3 = param_1;
  func_0x00010beecc20(param_1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam00000001137317c0;
  uRam00000001137317c0 = uVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109175acc; end: 109175bcb;  */

void FUN_109175acc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_109175a2c();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 109175bcc; end: 109175c9f;  */

void FUN_109175bcc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x00010b256a70();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2937c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126dd920;
  func_0x00010c2938c0(PTR_PTR_1126dd920);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar2,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109175ca0; end: 109175ccb; +[SCGrapheneUserSessionMigrationMetric userSessionUsernameAccess] */

void FUN_109175ca0(void)

{
  _objc_alloc(PTR_PTR_1126dd920);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109175ccc; end: 109175d6b; -[SCGrapheneUserSessionMigrationMetric description] */

void FUN_109175ccc(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110f2b118;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110f2b118,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1127009f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 109175d6c; end: 109175eaf; -[SCGrapheneRegistry userSessionMigrationGraphene] */

void FUN_109175d6c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x109175df4;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001137317d8 != -1) {
    func_0x000107c27d9c(0x1137317d8,&puStack_48);
  }
  uVar1 = uRam00000001137317d0;
  _objc_retain(uRam00000001137317d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109175eb0; end: 10917602b; -[SCPreviewFilterDataProviderContextData initWithReplyParameters:friends:cameraContext:mediaTypeContext:visualContexts:lensInPreviewContext:preCaptureLensId:snapTakenTimestamp:isMultiCamera:isMusicApplied:] */

undefined8 *
FUN_109175eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined4 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_112700a00;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    puVar1[4] = param_5;
    puVar1[5] = param_6;
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 1) = (undefined1)param_11;
    *(undefined1 *)((long)puVar1 + 9) = param_11._1_1_;
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10917602c; end: 109176053; +[SCPreviewFilterDataProviderContextData defaultGalleryContextData] */

void FUN_10917602c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b38a8;
  _objc_opt_new();
  *(undefined8 *)(puVar1 + 0x28) = 1;
  puVar1[10] = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109176054; end: 109176087; +[SCPreviewFilterDataProviderContextData defaultGalleryContextDataWithMediaTypeContext:] */

void FUN_109176054(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b38a8;
  _objc_opt_new();
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  puVar1[10] = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109176088; end: 1091760ab; +[SCPreviewFilterDataProviderContextData defaultMultimediaCasesContextData] */

void FUN_109176088(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b38a8;
  _objc_opt_new();
  puVar1[0xb] = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091760ac; end: 1091760d7; +[SCPreviewFilterDataProviderContextData defaultContextDataWithMediaTypeContext:] */

void FUN_1091760ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b38a8;
  _objc_opt_new();
  *(undefined8 *)(puVar1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091760d8; end: 109176173; +[SCPreviewFilterDataProviderContextData newContextDataWithCameraContext:mediaTypeContext:lensInPreviewContext:preCaptureLensId:] */

undefined * FUN_1091760d8(void)

{
  undefined *puVar1;
  undefined8 in_x4;
  undefined8 in_x5;
  
  puVar1 = PTR_PTR_1126b38a8;
  _objc_retain(in_x5);
  _objc_retain(in_x4);
  _objc_alloc(puVar1);
  func_0x00010c03e620();
  _objc_release(in_x5);
  _objc_release(in_x4);
  return puVar1;
}



/* Entry: 109176174; end: 10917617b; -[SCPreviewFilterDataProviderContextData replyParameters] */

undefined8 FUN_109176174(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10917617c; end: 109176183; -[SCPreviewFilterDataProviderContextData friends] */

undefined8 FUN_10917617c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109176184; end: 10917618b; -[SCPreviewFilterDataProviderContextData cameraContext] */

undefined8 FUN_109176184(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10917618c; end: 109176193; -[SCPreviewFilterDataProviderContextData mediaTypeContext] */

undefined8 FUN_10917618c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 109176194; end: 10917619b; -[SCPreviewFilterDataProviderContextData visualContexts] */

undefined8 FUN_109176194(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10917619c; end: 1091761a3; -[SCPreviewFilterDataProviderContextData lensInPreviewContext] */

undefined8 FUN_10917619c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1091761a4; end: 1091761ab; -[SCPreviewFilterDataProviderContextData preCaptureLensId] */

undefined8 FUN_1091761a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1091761ac; end: 1091761b3; -[SCPreviewFilterDataProviderContextData snapTakenTimestamp] */

undefined8 FUN_1091761ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1091761b4; end: 1091761bb; -[SCPreviewFilterDataProviderContextData isMultiCamera] */

undefined1 FUN_1091761b4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1091761bc; end: 1091761c3; -[SCPreviewFilterDataProviderContextData isMusicApplied] */

undefined1 FUN_1091761bc(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1091761c4; end: 1091761cb; -[SCPreviewFilterDataProviderContextData fromGallery] */

undefined1 FUN_1091761c4(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 1091761cc; end: 1091761d3; -[SCPreviewFilterDataProviderContextData isBatchCaptureFlow] */

undefined1 FUN_1091761cc(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 1091761d4; end: 109176233; -[SCPreviewFilterDataProviderContextData .cxx_destruct] */

void FUN_1091761d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 109176234; end: 1091762a7; -[SCPreviewSnapSenderConfiguration initWithUserSession:] */

undefined1 * FUN_109176234(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112700a08;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091762a8; end: 1091762af; -[SCPreviewSnapSenderConfiguration replyParameters] */

undefined8 FUN_1091762a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1091762b0; end: 1091762df; -[SCPreviewSnapSenderConfiguration setReplyParameters:] */

void FUN_1091762b0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1091762e0; end: 1091762e7; -[SCPreviewSnapSenderConfiguration originalImage] */

undefined8 FUN_1091762e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1091762e8; end: 109176317; -[SCPreviewSnapSenderConfiguration setOriginalImage:] */

void FUN_1091762e8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 109176318; end: 10917631f; -[SCPreviewSnapSenderConfiguration fromFrontFacingCamera] */

undefined1 FUN_109176318(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 109176320; end: 109176327; -[SCPreviewSnapSenderConfiguration setFromFrontFacingCamera:] */

void FUN_109176320(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 109176328; end: 10917632f; -[SCPreviewSnapSenderConfiguration fromSnapchatGallery] */

undefined1 FUN_109176328(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 109176330; end: 109176337; -[SCPreviewSnapSenderConfiguration setFromSnapchatGallery:] */

void FUN_109176330(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 109176338; end: 10917633f; -[SCPreviewSnapSenderConfiguration fromSnapchatQuickPost] */

undefined1 FUN_109176338(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 109176340; end: 109176347; -[SCPreviewSnapSenderConfiguration setFromSnapchatQuickPost:] */

void FUN_109176340(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 109176348; end: 10917634f; -[SCPreviewSnapSenderConfiguration fromScreenshot] */

undefined1 FUN_109176348(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 109176350; end: 109176357; -[SCPreviewSnapSenderConfiguration setFromScreenshot:] */

void FUN_109176350(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb) = param_3;
  return;
}



/* Entry: 109176358; end: 10917635f; -[SCPreviewSnapSenderConfiguration fromChat] */

undefined1 FUN_109176358(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 109176360; end: 109176367; -[SCPreviewSnapSenderConfiguration setFromChat:] */

void FUN_109176360(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 109176368; end: 10917636f; -[SCPreviewSnapSenderConfiguration fromProfileSavedChatMedia] */

undefined1 FUN_109176368(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 109176370; end: 109176377; -[SCPreviewSnapSenderConfiguration setFromProfileSavedChatMedia:] */

void FUN_109176370(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xd) = param_3;
  return;
}



/* Entry: 109176378; end: 10917637f; -[SCPreviewSnapSenderConfiguration fromBitmojiOutfitShare] */

undefined1 FUN_109176378(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 109176380; end: 109176387; -[SCPreviewSnapSenderConfiguration setFromBitmojiOutfitShare:] */

void FUN_109176380(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xe) = param_3;
  return;
}



/* Entry: 109176388; end: 10917638f; -[SCPreviewSnapSenderConfiguration isOpenedFromMemoriesTabInMediaDrawer] */

undefined1 FUN_109176388(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 109176390; end: 109176397; -[SCPreviewSnapSenderConfiguration setIsOpenedFromMemoriesTabInMediaDrawer:] */

void FUN_109176390(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xf) = param_3;
  return;
}



/* Entry: 109176398; end: 10917639f; -[SCPreviewSnapSenderConfiguration isOpenedFromCameraRollTabInMediaDrawer] */

undefined1 FUN_109176398(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 1091763a0; end: 1091763a7; -[SCPreviewSnapSenderConfiguration setIsOpenedFromCameraRollTabInMediaDrawer:] */

void FUN_1091763a0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 1091763a8; end: 1091763af; -[SCPreviewSnapSenderConfiguration isMemoriesSnap] */

undefined1 FUN_1091763a8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 1091763b0; end: 1091763b7; -[SCPreviewSnapSenderConfiguration setIsMemoriesSnap:] */

void FUN_1091763b0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x11) = param_3;
  return;
}



/* Entry: 1091763b8; end: 1091763bf; -[SCPreviewSnapSenderConfiguration isCameraRollItem] */

undefined1 FUN_1091763b8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x12);
}



/* Entry: 1091763c0; end: 1091763c7; -[SCPreviewSnapSenderConfiguration setIsCameraRollItem:] */

void FUN_1091763c0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x12) = param_3;
  return;
}



/* Entry: 1091763c8; end: 1091763cf; -[SCPreviewSnapSenderConfiguration snapModeInfo] */

undefined8 FUN_1091763c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1091763d0; end: 1091763ff; -[SCPreviewSnapSenderConfiguration setSnapModeInfo:] */

void FUN_1091763d0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 109176400; end: 109176407; -[SCPreviewSnapSenderConfiguration isDerivedFromCameraRollContent] */

undefined1 FUN_109176400(long param_1)

{
  return *(undefined1 *)(param_1 + 0x13);
}



/* Entry: 109176408; end: 10917640f; -[SCPreviewSnapSenderConfiguration setDerivedFromCameraRollContent:] */

void FUN_109176408(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x13) = param_3;
  return;
}



/* Entry: 109176410; end: 109176417; -[SCPreviewSnapSenderConfiguration creationDateForGallerySnap] */

undefined8 FUN_109176410(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 109176418; end: 109176447; -[SCPreviewSnapSenderConfiguration setCreationDateForGallerySnap:] */

void FUN_109176418(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109176448; end: 10917644f; -[SCPreviewSnapSenderConfiguration creationDateForGalleryAsset] */

undefined8 FUN_109176448(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 109176450; end: 10917647f; -[SCPreviewSnapSenderConfiguration setCreationDateForGalleryAsset:] */

void FUN_109176450(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109176480; end: 109176487; -[SCPreviewSnapSenderConfiguration creationDateForScreenshot] */

undefined8 FUN_109176480(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 109176488; end: 1091764b7; -[SCPreviewSnapSenderConfiguration setCreationDateForScreenshot:] */

void FUN_109176488(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091764b8; end: 1091764bf; -[SCPreviewSnapSenderConfiguration creationDateForChat] */

undefined8 FUN_1091764b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1091764c0; end: 1091764ef; -[SCPreviewSnapSenderConfiguration setCreationDateForChat:] */

void FUN_1091764c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091764f0; end: 1091764f7; -[SCPreviewSnapSenderConfiguration creationDateForProfileSavedChatMedia] */

undefined8 FUN_1091764f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}


