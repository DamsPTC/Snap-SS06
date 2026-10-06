/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107038610; end: 10703867f; -[SCMediaImportEditorViewController _bringTrimmerElementsToFront] */

/* WARNING: Possible PIC construction at 0x00010703863c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107038640) */
/* WARNING: Removing unreachable block (ram,0x000107038670) */
/* WARNING: Removing unreachable block (ram,0x00010703865c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107038610(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf21310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112762fdc),PTR_s_bringSubviewToFront__1125a5e68,
             *(undefined8 *)(param_1 + _DAT_112763000));
  return;
}



/* Entry: 107038680; end: 1070387a7; -[SCMediaImportEditorViewController _setupSCPlayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107038680(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = (long)_DAT_112762fec;
  if (*(long *)(param_1 + lVar5) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126bf660;
  _objc_alloc_init();
  lVar6 = (long)_DAT_112763008;
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar2);
  lVar4 = (long)_DAT_112762fcc;
  puVar1 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
  func_0x00010c100be0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_11276302c;
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x000109127510(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2213a0(*(undefined8 *)(param_1 + lVar7));
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126c9e68;
  _objc_alloc();
  func_0x00010c037120();
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c100c60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_112763018;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = uVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c1dda50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar4),PTR_s_setPlayer__1126550b8,
             *(undefined8 *)(param_1 + lVar5));
  return;
}



/* Entry: 1070387a8; end: 1070388eb; -[SCMediaImportEditorViewController _setupNGSMEPlayerWithNGSMESnap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070387a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (long)_DAT_112762ff0;
  if (*(long *)(param_1 + lVar4) != 0) {
    return;
  }
  lVar5 = (long)_DAT_112762fb4;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c101140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = uVar1;
  _objc_release(uVar2);
  _objc_release(uVar3);
  func_0x00010c2009a0(*(undefined8 *)(param_1 + lVar4));
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c101080(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_112763004;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = uVar1;
  _objc_release(uVar2);
  _objc_release(uVar3);
  func_0x00010c2218a0(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c1ddc80(*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010c10a190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar4),PTR_s_prepareToPlay_112620280);
  return;
}



/* Entry: 1070388ec; end: 107038dbb; -[SCMediaImportEditorViewController _updateConfigWithImportMediaContent:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070388ec(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined1 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined1 auStack_210 [24];
  long lStack_1f8;
  undefined1 auStack_1e0 [40];
  long lStack_1b8;
  undefined1 auStack_1b0 [36];
  byte bStack_18c;
  undefined1 auStack_180 [12];
  byte bStack_174;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 == 0) || (param_4 != 0)) {
    lVar10 = param_4;
    func_0x00010bf3ec40();
    uStack_98 = *(ulong *)(PTR__kCMTimeRangeInvalid_110348660 + 8);
    uStack_a0 = *(undefined8 *)PTR__kCMTimeRangeInvalid_110348660;
    uStack_88 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x18);
    uStack_90 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x10);
    if (lVar10 == -999) {
      uStack_78 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x28);
      uStack_80 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x20);
      func_0x00010bde3480(param_1,param_2,0,1,&uStack_a0,param_4);
      goto LAB_107038d6c;
    }
    uStack_78 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x28);
    uStack_80 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x20);
    func_0x00010bde3480(param_1,param_2,0,0,&uStack_a0,param_4);
  }
  lVar10 = param_3;
  FUN_107034520();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + _DAT_112762fc8);
  *(long *)(param_1 + _DAT_112762fc8) = lVar10;
  _objc_release(uVar8);
  lVar10 = param_3;
  FUN_10703465c();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + _DAT_112762fcc);
  *(long *)(param_1 + _DAT_112762fcc) = lVar10;
  _objc_release(uVar8);
  lVar10 = param_3;
  FUN_107034780();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + _DAT_112762fd0);
  *(long *)(param_1 + _DAT_112762fd0) = lVar10;
  _objc_release(uVar8);
  lVar10 = (long)_DAT_112762fb0;
  if (*(long *)(param_1 + lVar10) == 0) {
    uStack_b8 = 0;
    uStack_b0 = 0;
    puVar9 = &uStack_a0;
    uStack_a8 = 0;
LAB_107038ae8:
    puVar9[3] = 0;
    puVar9[2] = 0;
    puVar9[5] = 0;
    puVar9[4] = 0;
    puVar9[1] = 0;
    *puVar9 = 0;
LAB_107038af4:
    puVar3 = PTR_PTR_1126cbfe0;
    uVar4 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010c26fea0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010bf89380(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010c27c9e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010bf89360(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010c28fd80(uVar8);
    uVar1 = (undefined1)*(undefined8 *)(param_1 + lVar10);
    func_0x00010c070a40();
    func_0x00010bf46440(*(undefined8 *)(param_1 + _DAT_112762fc4),puVar3,param_2,param_3,uVar4,uVar5
                        ,uVar6,uVar7,uVar8,uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0c20c0(&uStack_b8);
    if ((uStack_b0 & 0x100000000) == 0) {
      if (*(long *)(param_1 + lVar10) == 0) {
        puVar9 = &uStack_a0;
        goto LAB_107038ae8;
      }
      func_0x00010bf4d840(&uStack_a0);
      lVar2 = *(long *)(param_1 + lVar10);
      if ((uStack_98 & 0x100000000) != 0) {
        puVar9 = &uStack_f0;
        if (lVar2 == 0) goto LAB_107038ae8;
        func_0x00010bf4d840();
        lVar2 = *(long *)(param_1 + lVar10);
        if ((uStack_d0 & 0x100000000) != 0) {
          if (lVar2 == 0) {
            uStack_108 = 0;
            uStack_110 = 0;
            lStack_f8 = 0;
            uStack_100 = 0;
            uStack_118 = 0;
            uStack_120 = 0;
LAB_107038bac:
            lStack_138 = 0;
            uStack_140 = 0;
            uStack_128 = 0;
            uStack_130 = 0;
            uStack_148 = 0;
            uStack_150 = 0;
            goto LAB_107038bb8;
          }
          func_0x00010bf4d840(&uStack_120);
          lVar2 = *(long *)(param_1 + lVar10);
          if (lStack_f8 == 0) {
            if (lVar2 == 0) goto LAB_107038bac;
            func_0x00010bf4d840(&uStack_150);
            if (-1 < lStack_138) goto LAB_107038bb8;
            lVar2 = *(long *)(param_1 + lVar10);
          }
        }
      }
      if (((((lVar2 != 0) && (func_0x00010c0645c0(auStack_180), (bStack_174 & 1) != 0)) &&
           (*(long *)(param_1 + lVar10) != 0)) &&
          (func_0x00010c0645c0(auStack_1b0), (bStack_18c & 1) != 0)) &&
         ((*(long *)(param_1 + lVar10) == 0 ||
          ((func_0x00010c0645c0(auStack_1e0), lStack_1b8 == 0 &&
           ((*(long *)(param_1 + lVar10) == 0 || (func_0x00010c0645c0(auStack_210), -1 < lStack_1f8)
            ))))))) goto LAB_107038bb8;
      goto LAB_107038af4;
    }
LAB_107038bb8:
    puVar3 = PTR_PTR_1126c6728;
    _objc_alloc();
    uVar4 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010c26fea0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010bf89380(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010c27c9e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010bf89360(uVar7);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)(param_1 + lVar10) == 0) {
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_110 = 0;
LAB_107038c6c:
      uStack_150 = 0;
      uStack_148 = 0;
      uStack_140 = 0;
LAB_107038c74:
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
LAB_107038c80:
      uVar8 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
    }
    else {
      func_0x00010c0c20c0(&uStack_120);
      if (*(long *)(param_1 + lVar10) == 0) goto LAB_107038c6c;
      func_0x00010c0cd680(&uStack_150);
      if (*(long *)(param_1 + lVar10) == 0) goto LAB_107038c74;
      func_0x00010bf4d840(&uStack_a0);
      if (*(long *)(param_1 + lVar10) == 0) goto LAB_107038c80;
      func_0x00010c0645c0(&uStack_f0);
      uVar8 = *(undefined8 *)(param_1 + lVar10);
    }
    func_0x00010c158660();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = (undefined1)*(undefined8 *)(param_1 + lVar10);
    func_0x00010c28fd80();
    func_0x00010c070a40();
    func_0x00010c01d360(puVar3,param_2,param_3,uVar4,uVar5,uVar6,uVar7,&uStack_120,&uStack_150,
                        &uStack_a0,&uStack_f0,uVar8,uVar1);
    _objc_release(uVar8);
  }
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  if (puVar3 == (undefined *)0x0) {
    uStack_98 = *(ulong *)(PTR__kCMTimeRangeInvalid_110348660 + 8);
    uStack_a0 = *(undefined8 *)PTR__kCMTimeRangeInvalid_110348660;
    uStack_88 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x18);
    uStack_90 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x10);
    uStack_78 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x28);
    uStack_80 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x20);
    func_0x00010bde3480(param_1,param_2,0,0,&uStack_a0,0);
  }
  else {
    func_0x00010c180820(param_1,param_2,puVar3);
  }
  _objc_release(puVar3);
LAB_107038d6c:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107038dbc; end: 107038e7b; -[SCMediaImportEditorViewController _updateCurrentTrimmedTimeRange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107038dbc(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + _DAT_112763024) == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x00010c27c900(&uStack_60);
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112762fe4);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  puVar1[3] = uStack_48;
  puVar1[2] = uStack_50;
  puVar1[5] = uStack_38;
  puVar1[4] = uStack_40;
  puVar2 = (undefined8 *)(param_1 + _DAT_112763030);
  uStack_58 = puVar1[1];
  uStack_60 = *puVar1;
  uStack_48 = puVar1[3];
  uStack_50 = puVar1[2];
  uStack_38 = puVar1[5];
  uStack_40 = puVar1[4];
  _CMTimeRangeGetEnd(&uStack_78,&uStack_60);
  puVar2[1] = uStack_70;
  *puVar2 = uStack_78;
  puVar2[2] = uStack_68;
  puVar2 = (undefined8 *)(param_1 + _DAT_112763034);
  uVar3 = puVar1[2];
  uVar4 = *puVar1;
  puVar2[1] = puVar1[1];
  *puVar2 = uVar4;
  puVar2[2] = uVar3;
  return;
}



/* Entry: 107038e7c; end: 10703905b; -[SCMediaImportEditorViewController _updateForTrimmingMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107038e7c(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar5 = (long)_DAT_112762fb0;
  iVar2 = (int)*(undefined8 *)(param_1 + lVar5);
  func_0x00010bf4c460();
  if ((iVar2 != 0) && (*(long *)(param_1 + _DAT_112762ff4) == 0)) {
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c158660();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_112763014);
    *(undefined8 *)(param_1 + _DAT_112763014) = uVar3;
    _objc_release(uVar4);
    puVar1 = (undefined8 *)(param_1 + _DAT_112763028);
    if (*(long *)(param_1 + lVar5) == 0) {
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
    }
    else {
      func_0x00010c0c20c0(&uStack_60);
    }
    puVar1[1] = uStack_58;
    *puVar1 = uStack_60;
    puVar1[2] = uStack_50;
    puVar1 = (undefined8 *)(param_1 + _DAT_112762fc0);
    if (*(long *)(param_1 + lVar5) == 0) {
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
    }
    else {
      func_0x00010c0cd680(&uStack_60);
    }
    puVar1[1] = uStack_58;
    *puVar1 = uStack_60;
    puVar1[2] = uStack_50;
    puVar1 = (undefined8 *)(param_1 + _DAT_112762ff8);
    if (*(long *)(param_1 + lVar5) == 0) {
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
    }
    else {
      func_0x00010bf4d840(&uStack_60);
    }
    puVar1[1] = uStack_58;
    *puVar1 = uStack_60;
    puVar1[3] = uStack_48;
    puVar1[2] = uStack_50;
    puVar1[5] = uStack_38;
    puVar1[4] = uStack_40;
    puVar1 = (undefined8 *)(param_1 + _DAT_112762fe4);
    if (*(long *)(param_1 + lVar5) == 0) {
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
    }
    else {
      func_0x00010c0645c0(&uStack_60);
    }
    puVar1[1] = uStack_58;
    *puVar1 = uStack_60;
    puVar1[3] = uStack_48;
    puVar1[2] = uStack_50;
    puVar1[5] = uStack_38;
    puVar1[4] = uStack_40;
    _objc_initWeak(&uStack_60,param_1);
    _objc_copyWeak(auStack_68,&uStack_60);
    func_0x00010beb0d40(param_1);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(&uStack_60);
  }
  return;
}



/* Entry: 10703905c; end: 1070390df;  */

void FUN_10703905c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bde7d60();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bec1080();
    _objc_release(lVar1);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be0a900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1070390e0; end: 107039137; -[SCMediaImportEditorViewController _updateUsingConfig] */

void FUN_1070390e0(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107039138;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 107039138; end: 10703915f;  */

void FUN_107039138(long param_1)

{
  func_0x00010beac2e0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bed85f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateForTrimmingMode_112593b20);
  return;
}



/* Entry: 107039160; end: 107039203; -[SCMediaImportEditorViewController _userDidUpdateTrimmedDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107039160(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = PTR_PTR_1126c87b0;
  uStack_48 = param_3[1];
  uStack_50 = *param_3;
  uStack_40 = param_3[2];
  _CMTimeGetSeconds(&uStack_50);
  func_0x00010bfb61a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112763020),param_2,puVar1);
  _objc_release(puVar1);
  uStack_48 = param_3[1];
  uStack_50 = *param_3;
  uStack_40 = param_3[2];
  func_0x00010c286f40(*(undefined8 *)(param_1 + _DAT_112763010),param_2,&uStack_50);
  return;
}



/* Entry: 107039204; end: 107039277; -[SCMediaImportEditorViewController _startPlaybackIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107039204(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bde7d60();
  if ((int)lVar1 != 0) {
    if (*(long *)(param_1 + _DAT_112762fec) == 0) {
      if (*(long *)(param_1 + _DAT_112762ff0) != 0) {
        func_0x00010c2504a0();
      }
    }
    else {
      func_0x00010c1e7640(0x3f800000);
    }
    if (*(long *)(param_1 + _DAT_11276301c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c174a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(long *)(param_1 + _DAT_11276301c),PTR_s_setButtonState__11263acb0,1);
      return;
    }
  }
  return;
}



/* Entry: 107039278; end: 107039397; -[SCMediaImportEditorViewController _enterTrimmerState:] */

/* WARNING: Possible PIC construction at 0x00010703933c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107039378: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107039340) */
/* WARNING: Removing unreachable block (ram,0x00010703937c) */
/* WARNING: Removing unreachable block (ram,0x00010bfe25e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107039278(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar3 = param_1;
  func_0x00010bde7d60();
  if (((int)lVar3 != 0) && (param_3 != *(long *)(param_1 + _DAT_112763038))) {
    *(long *)(param_1 + _DAT_112763038) = param_3;
    if (param_3 < 3) {
      if (param_3 == 1) {
code_r0x00010be70e60:
                    /* WARNING: Could not recover jumptable at 0x00010be70e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__pausePlayer_112579d38);
        return;
      }
      if (param_3 == 2) {
        puVar1 = (undefined8 *)(param_1 + _DAT_112763034);
        puVar2 = (undefined8 *)(param_1 + _DAT_112762fe4);
        uVar4 = puVar2[2];
        uVar5 = *puVar2;
        puVar1[1] = puVar2[1];
        *puVar1 = uVar5;
        puVar1[2] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bec1090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startPlaybackIfNecessary_11258ddc8);
        return;
      }
    }
    else if ((param_3 == 3) || (param_3 == 4)) goto code_r0x00010be70e60;
  }
  return;
}



/* Entry: 107039398; end: 1070396db; -[SCMediaImportEditorViewController _handleDisplayLinkCallback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107039398(long param_1)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  long lVar5;
  double dVar6;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  
  lVar5 = param_1;
  func_0x00010bde7d60();
  if ((int)lVar5 == 0) {
    return;
  }
  if (*(long *)(param_1 + _DAT_112762fec) == 0) {
    dStack_50 = 0.0;
    dStack_48 = 0.0;
    dStack_40 = 0.0;
  }
  else {
    func_0x00010bf60480(&dStack_50);
  }
  if (*(long *)(param_1 + _DAT_112762ff0) != 0) {
    func_0x00010bf60480(&dStack_70);
    dStack_48 = dStack_68;
    dStack_50 = dStack_70;
    dStack_40 = dStack_60;
  }
  lVar5 = param_1;
  func_0x00010bde7ce0();
  if ((int)lVar5 != 0) {
    if ((*(byte *)(param_1 + _DAT_11276303c) & 1) != 0) {
      return;
    }
    if (*(long *)(param_1 + _DAT_112763038) != 2) {
      return;
    }
    lVar5 = (long)_DAT_112763040;
    if (*(long *)(param_1 + lVar5) != 0) {
      pdVar3 = (double *)(param_1 + _DAT_112763044);
      dStack_88 = dStack_48;
      dStack_90 = dStack_50;
      dStack_80 = dStack_40;
      dStack_a8 = pdVar3[1];
      dVar4 = *pdVar3;
      dStack_a0 = pdVar3[2];
      dStack_b0 = dVar4;
      _CMTimeSubtract(&dStack_70,&dStack_90,&dStack_b0);
      _CMTimeGetSeconds(&dStack_70);
      if (dVar4 < 0.0) {
        *(undefined8 *)(param_1 + lVar5) = 2;
        return;
      }
      if ((dVar4 == 0.0) && (*(long *)(param_1 + lVar5) == 1)) {
        return;
      }
      *(undefined8 *)(param_1 + lVar5) = 0;
    }
  }
  pdVar1 = (double *)(param_1 + _DAT_112763030);
  dStack_68 = dStack_48;
  dStack_70 = dStack_50;
  dStack_60 = dStack_40;
  dStack_88 = pdVar1[1];
  dStack_90 = *pdVar1;
  dStack_80 = pdVar1[2];
  pdVar3 = &dStack_70;
  _CMTimeCompare(pdVar3,&dStack_90);
  if ((int)pdVar3 < 0) {
    pdVar2 = (double *)(param_1 + _DAT_112762fe4);
    dStack_68 = dStack_48;
    dStack_70 = dStack_50;
    dStack_60 = dStack_40;
    dStack_88 = pdVar2[1];
    dStack_90 = *pdVar2;
    dStack_80 = pdVar2[2];
    pdVar3 = &dStack_70;
    _CMTimeCompare(pdVar3,&dStack_90);
    if ((int)pdVar3 < 1) {
      dStack_48 = pdVar2[1];
      dStack_50 = *pdVar2;
      dStack_40 = pdVar2[2];
      dVar4 = *pdVar2;
      dStack_c8 = pdVar2[2];
      dStack_d0 = pdVar2[1];
    }
    else {
      func_0x00010bf8b160(*(undefined8 *)(param_1 + _DAT_11276304c));
      _CMTimeMakeWithSeconds(&dStack_70,600);
      dStack_a8 = dStack_48;
      dStack_b0 = dStack_50;
      dStack_a0 = dStack_40;
      dStack_c8 = dStack_68;
      dStack_d0 = dStack_70;
      dStack_c0 = dStack_60;
      _CMTimeAdd(&dStack_90,&dStack_b0,&dStack_d0);
      dVar4 = dStack_90;
      dStack_c8 = dStack_80;
      dStack_d0 = dStack_88;
      dStack_a8 = pdVar1[1];
      dStack_b0 = *pdVar1;
      dStack_a0 = pdVar1[2];
      pdVar3 = &dStack_90;
      _CMTimeCompare(pdVar3,&dStack_b0);
      if (-1 < (int)pdVar3) {
        dStack_c8 = pdVar1[2];
        dStack_d0 = pdVar1[1];
        dVar4 = (double)((long)*pdVar1 + -1);
      }
    }
    lVar5 = param_1;
    func_0x00010bde7ce0();
    if ((int)lVar5 != 0) {
      pdVar3 = (double *)(param_1 + _DAT_112763048);
      dStack_68 = pdVar3[1];
      dStack_70 = *pdVar3;
      dStack_60 = pdVar3[2];
      dStack_88 = pdVar2[1];
      dStack_90 = *pdVar2;
      dStack_80 = pdVar2[2];
      pdVar3 = &dStack_70;
      _CMTimeCompare(pdVar3,&dStack_90);
      if (0 < (int)pdVar3) {
        dStack_60 = dStack_c8;
        dStack_68 = dStack_d0;
        dStack_88 = pdVar2[1];
        dStack_90 = *pdVar2;
        dStack_80 = pdVar2[2];
        pdVar3 = &dStack_70;
        dStack_70 = dVar4;
        _CMTimeCompare(pdVar3,&dStack_90);
        if ((int)pdVar3 == 0) {
          func_0x00010bfe25e0(*(undefined8 *)(param_1 + _DAT_112763024));
        }
      }
    }
    dStack_60 = dStack_c8;
    dStack_68 = dStack_d0;
    dStack_70 = dVar4;
    func_0x00010c288960(*(undefined8 *)(param_1 + _DAT_112763024));
    pdVar3 = (double *)(param_1 + _DAT_112763048);
    *pdVar3 = dVar4;
    pdVar3[2] = dStack_c8;
    pdVar3[1] = dStack_d0;
  }
  else {
    func_0x00010be0a900(param_1);
    pdVar3 = (double *)(param_1 + _DAT_112763048);
    dVar4 = pdVar1[2];
    dVar6 = *pdVar1;
    pdVar3[1] = pdVar1[1];
    *pdVar3 = dVar6;
    pdVar3[2] = dVar4;
  }
  return;
}



/* Entry: 1070396dc; end: 1070397b7; -[SCMediaImportEditorViewController _handleSeekCompletion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070396dc(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = param_1;
  func_0x00010bde7d60();
  if ((int)lVar3 != 0) {
    *(undefined1 *)(param_1 + _DAT_11276303c) = 0;
    puVar1 = (undefined8 *)(param_1 + _DAT_112763050);
    if ((*(byte *)((long)puVar1 + 0xc) & 1) == 0) {
      if (*(long *)(param_1 + _DAT_112763038) - 3U < 2) {
        *(undefined8 *)(param_1 + _DAT_112763040) = 1;
      }
      else if (*(long *)(param_1 + _DAT_112763038) == 1) {
        *(undefined8 *)(param_1 + _DAT_112763040) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be0a910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__enterTrimmerState__1125603e0,2);
        return;
      }
    }
    else {
      func_0x00010be91840(param_1);
      puVar2 = PTR__kCMTimeInvalid_110348648;
      uVar4 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
      puVar1[1] = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
      *puVar1 = uVar4;
      puVar1[2] = *(undefined8 *)(puVar2 + 0x10);
    }
  }
  return;
}



/* Entry: 1070397b8; end: 10703982f; -[SCMediaImportEditorViewController _pausePlayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070397b8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bde7d60();
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bde7ce0();
    if ((int)lVar1 == 0) {
      func_0x00010c0f5fe0(*(undefined8 *)(param_1 + _DAT_112762ff0));
    }
    else {
      func_0x00010c1e7640(0,*(undefined8 *)(param_1 + _DAT_112762fec));
    }
    if (*(long *)(param_1 + _DAT_11276301c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c174a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(long *)(param_1 + _DAT_11276301c),PTR_s_setButtonState__11263acb0,0);
      return;
    }
  }
  return;
}



/* Entry: 107039830; end: 107039a33; -[SCMediaImportEditorViewController _requestSeekToTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107039830(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  lVar1 = param_1;
  func_0x00010bde7d60();
  if (((int)lVar1 != 0) && ((*(byte *)((long)param_3 + 0xc) & 1) != 0)) {
    if (*(char *)(param_1 + _DAT_11276303c) == '\x01') {
      puVar2 = (undefined8 *)(param_1 + _DAT_112763050);
      uVar3 = param_3[2];
      uVar4 = *param_3;
      puVar2[1] = param_3[1];
      *puVar2 = uVar4;
      puVar2[2] = uVar3;
    }
    else {
      *(undefined1 *)(param_1 + _DAT_11276303c) = 1;
      puVar2 = (undefined8 *)(param_1 + _DAT_112763044);
      uVar3 = param_3[2];
      uVar4 = *param_3;
      puVar2[1] = param_3[1];
      *puVar2 = uVar4;
      puVar2[2] = uVar3;
      lVar1 = param_1;
      func_0x00010bde7ce0();
      if ((int)lVar1 == 0) {
        _objc_initWeak(&uStack_a0,param_1);
        uVar3 = *(undefined8 *)(param_1 + _DAT_112762ff0);
        _objc_copyWeak(auStack_c8,&uStack_a0);
        uStack_78 = puVar2[1];
        uStack_80 = *puVar2;
        uStack_70 = puVar2[2];
        func_0x00010c157280(uVar3);
        _objc_destroyWeak(auStack_c8);
        puVar2 = &uStack_a0;
      }
      else {
        _objc_initWeak(&uStack_38,param_1);
        uVar3 = *(undefined8 *)(param_1 + _DAT_112762fec);
        puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_58 = 0xc2000000;
        pcStack_50 = FUN_107039a34;
        puStack_48 = &UNK_110849200;
        _objc_copyWeak(auStack_40,&uStack_38);
        uStack_78 = puVar2[1];
        uStack_80 = *puVar2;
        uStack_70 = puVar2[2];
        uStack_b8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
        uStack_c0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
        uStack_b0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
        uStack_a0 = uStack_c0;
        uStack_98 = uStack_b8;
        uStack_90 = uStack_b0;
        func_0x00010c157300(uVar3);
        _objc_destroyWeak(auStack_40);
        puVar2 = &uStack_38;
      }
      _objc_destroyWeak(puVar2);
    }
  }
  return;
}



/* Entry: 107039a34; end: 107039a8b;  */

void FUN_107039a34(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2fb80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107039a8c; end: 107039b33; -[SCMediaImportEditorViewController _setupDisplayLink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107039a8c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = param_1;
  func_0x00010bde7d60();
  if (((int)lVar3 != 0) && (lVar3 = (long)_DAT_11276304c, *(long *)(param_1 + lVar3) == 0)) {
    puVar1 = PTR__OBJC_CLASS___CADisplayLink_1126b94a8;
    func_0x00010bf85b60(PTR__OBJC_CLASS___CADisplayLink_1126b94a8,param_2,param_1,
                        PTR_s__handleDisplayLinkCallback__112537158);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar1;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    puVar1 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
    func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc2c0(uVar2,param_2,puVar1,*(undefined8 *)PTR__NSRunLoopCommonModes_11034aaa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 107039b34; end: 107039b7b; -[SCMediaImportEditorViewController _teardownDisplayLink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107039b34(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010bde7d60();
  if ((int)lVar2 != 0) {
    lVar2 = (long)_DAT_11276304c;
    func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 107039b7c; end: 107039b83; -[SCMediaImportEditorViewController pageViewName] */

undefined8 FUN_107039b7c(void)

{
  return 0x86;
}



/* Entry: 107039b84; end: 107039bf3; -[SCMediaImportEditorViewController snapSegmentExpandedCell:didChangeEndTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107039b84(long param_1,undefined8 param_2)

{
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010be0a900(param_1,param_2,3);
  if (*(long *)(param_1 + _DAT_112763024) == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x00010bf39c20(&uStack_50);
  }
  uStack_68 = uStack_30;
  uStack_70 = uStack_38;
  uStack_60 = uStack_28;
  func_0x00010bee6bc0(param_1,param_2,&uStack_70);
  return;
}



/* Entry: 107039bf4; end: 107039c63; -[SCMediaImportEditorViewController snapSegmentExpandedCell:didChangeStartTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107039bf4(long param_1,undefined8 param_2)

{
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010be0a900(param_1,param_2,3);
  if (*(long *)(param_1 + _DAT_112763024) == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x00010bf39c20(&uStack_50);
  }
  uStack_68 = uStack_30;
  uStack_70 = uStack_38;
  uStack_60 = uStack_28;
  func_0x00010bee6bc0(param_1,param_2,&uStack_70);
  return;
}



/* Entry: 107039c64; end: 107039cf3; -[SCMediaImportEditorViewController snapSegmentExpandedCell:didSeekToTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107039c64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  lVar2 = param_1;
  func_0x00010bde7d60();
  if ((int)lVar2 != 0) {
    uVar3 = *(ulong *)(param_1 + _DAT_112763024);
    func_0x00010c081920();
    if ((uVar3 & 1) == 0) {
      puVar1 = (undefined8 *)(param_1 + _DAT_112763034);
      uVar4 = param_4[2];
      uVar5 = *param_4;
      puVar1[1] = param_4[1];
      *puVar1 = uVar5;
      puVar1[2] = uVar4;
      uVar4 = 4;
    }
    else {
      uVar4 = 3;
    }
    func_0x00010be0a900(param_1,param_2,uVar4);
    uStack_38 = param_4[1];
    uStack_40 = *param_4;
    uStack_30 = param_4[2];
    func_0x00010be91840(param_1,param_2,&uStack_40);
  }
  return;
}



/* Entry: 107039cf4; end: 107039d3b; -[SCMediaImportEditorViewController snapSegmentExpandedCell:didTrimSegmentToRange:] */

void FUN_107039cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x00010bed6840();
  uStack_38 = *(undefined8 *)(param_4 + 0x20);
  uStack_40 = *(undefined8 *)(param_4 + 0x18);
  uStack_30 = *(undefined8 *)(param_4 + 0x28);
  func_0x00010bee6bc0(param_1,param_2,&uStack_40);
  return;
}



/* Entry: 107039d3c; end: 107039d73; -[SCMediaImportEditorViewController snapSegmentExpandedCellFinishedSeeking:] */

void FUN_107039d3c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bde7d60();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be0a910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__enterTrimmerState__1125603e0,1);
    return;
  }
  return;
}



/* Entry: 107039d74; end: 107039d7b; -[SCMediaImportEditorViewController snapSegmentExpandedCellShouldHandleTouch:] */

undefined8 FUN_107039d74(void)

{
  return 1;
}



/* Entry: 107039d7c; end: 107039d83; -[SCMediaImportEditorViewController snapSegmentExpandedCellShouldShowDeleteButton:] */

undefined8 FUN_107039d7c(void)

{
  return 0;
}



/* Entry: 107039d84; end: 107039d87; -[SCMediaImportEditorViewController snapSegmentExpandedCellDidPressDelete:] */

void FUN_107039d84(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be00c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didTapCancel_11255dca8);
  return;
}



/* Entry: 107039d88; end: 107039d8b; -[SCMediaImportEditorViewController snapSegmentExpandedCell:didChangeSelectedTimeRange:] */

void FUN_107039d88(void)

{
  return;
}



/* Entry: 107039d8c; end: 107039d8f; -[SCMediaImportEditorViewController snapSegmentExpandedCell:didChangeSelectedTimeSlice:] */

void FUN_107039d8c(void)

{
  return;
}



/* Entry: 107039d90; end: 107039de7; -[SCMediaImportEditorViewController didTapOnThumbnailsActionView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107039d90(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11276301c);
  func_0x00010bf60240();
  if (lVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010be70e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__pausePlayer_112579d38);
    return;
  }
  if (lVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bec1090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startPlaybackIfNecessary_11258ddc8);
    return;
  }
  return;
}



/* Entry: 107039de8; end: 107039fc7; -[SCMediaImportEditorViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107039de8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112762fbc,0);
  _objc_storeStrong(param_1 + _DAT_112763004,0);
  _objc_storeStrong(param_1 + _DAT_112762ff0,0);
  _objc_storeStrong(param_1 + _DAT_112762fb4,0);
  _objc_storeStrong(param_1 + _DAT_112762fd0,0);
  _objc_storeStrong(param_1 + _DAT_11276304c,0);
  _objc_storeStrong(param_1 + _DAT_112763018,0);
  _objc_storeStrong(param_1 + _DAT_112762fec,0);
  _objc_storeStrong(param_1 + _DAT_11276302c,0);
  _objc_storeStrong(param_1 + _DAT_112762fd4,0);
  _objc_storeStrong(param_1 + _DAT_112762fd8,0);
  _objc_storeStrong(param_1 + _DAT_112763010,0);
  _objc_storeStrong(param_1 + _DAT_11276301c,0);
  _objc_storeStrong(param_1 + _DAT_112762ff4,0);
  _objc_storeStrong(param_1 + _DAT_112763024,0);
  _objc_storeStrong(param_1 + _DAT_112763020,0);
  _objc_storeStrong(param_1 + _DAT_11276300c,0);
  _objc_storeStrong(param_1 + _DAT_112762fe8,0);
  _objc_storeStrong(param_1 + _DAT_112763000,0);
  _objc_storeStrong(param_1 + _DAT_112762fe0,0);
  _objc_storeStrong(param_1 + _DAT_112763008,0);
  _objc_storeStrong(param_1 + _DAT_112762fdc,0);
  _objc_storeStrong(param_1 + _DAT_112762fc8,0);
  _objc_storeStrong(param_1 + _DAT_112762ffc,0);
  _objc_storeStrong(param_1 + _DAT_112762fb8,0);
  _objc_storeStrong(param_1 + _DAT_112763014,0);
  _objc_storeStrong(param_1 + _DAT_112762fcc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112762fb0,0);
  return;
}



/* Entry: 107039fc8; end: 10703a027;  */

void FUN_107039fc8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e43a78;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e43a78,
                      &PTR____CFConstantStringClassReference_110e98f38,0);
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



/* Entry: 10703a028; end: 10703a08b; +[SCMediaImportEditorMediaContent imageFutureWithImageFuture:] */

void FUN_10703a028(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b00f0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10703a08c; end: 10703a0f7; +[SCMediaImportEditorMediaContent imageWithImage:] */

void FUN_10703a08c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b00f0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10703a0f8; end: 10703a163; +[SCMediaImportEditorMediaContent snapDocFutureWithSnapDocFuture:] */

void FUN_10703a0f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b00f0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10703a164; end: 10703a1cf; +[SCMediaImportEditorMediaContent snapDocWithSnapDoc:] */

void FUN_10703a164(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b00f0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10703a1d0; end: 10703a23b; +[SCMediaImportEditorMediaContent videoFutureWithVideoAVAssetFuture:] */

void FUN_10703a1d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b00f0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10703a23c; end: 10703a2a7; +[SCMediaImportEditorMediaContent videoWithVideoAVAsset:] */

void FUN_10703a23c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b00f0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10703a2a8; end: 10703a4b7; -[SCMediaImportEditorMediaContent initWithCoder:] */

undefined8 * FUN_10703a2a8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong unaff_x21;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined **ppuStack_58;
  ulong uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_60 = PTR_PTR_1126f8550;
  puVar1 = &uStack_68;
  uStack_68 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    unaff_x21 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = unaff_x21;
    func_0x00010c0720c0();
    if ((uVar2 & 1) == 0) {
      uVar2 = unaff_x21;
      func_0x00010c0720c0();
      if ((uVar2 & 1) == 0) {
        uVar2 = unaff_x21;
        func_0x00010c0720c0();
        if ((uVar2 & 1) == 0) {
          uVar2 = unaff_x21;
          func_0x00010c0720c0();
          if ((uVar2 & 1) == 0) {
            uVar2 = unaff_x21;
            func_0x00010c0720c0();
            if ((uVar2 & 1) == 0) {
              uVar2 = unaff_x21;
              func_0x00010c0720c0();
              if ((uVar2 & 1) == 0) goto LAB_10703a444;
              uVar5 = 5;
              lVar6 = 0x38;
              goto LAB_10703a35c;
            }
            uVar5 = 4;
          }
          else {
            uVar5 = 3;
          }
        }
        else {
          uVar5 = 2;
        }
      }
      else {
        uVar5 = 1;
        lVar6 = 0x18;
LAB_10703a35c:
        uVar2 = param_3;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
        *(ulong *)((long)puVar1 + lVar6) = uVar2;
        _objc_release(uVar4);
      }
    }
    else {
      uVar5 = 0;
    }
    puVar1[1] = uVar5;
    _objc_release(unaff_x21);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
LAB_10703a444:
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSException_1126af520;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110db7158;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_50 = unaff_x21;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar3);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 10703a4b8; end: 10703a4db; -[SCMediaImportEditorMediaContent copyWithZone:] */

undefined8 FUN_10703a4b8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10703a4dc; end: 10703a5bb; -[SCMediaImportEditorMediaContent encodeWithCoder:] */

void FUN_10703a4dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 3) {
    if (lVar2 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e98fb8;
    }
    else if (lVar2 == 1) {
      func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                          &PTR____CFConstantStringClassReference_110e892b8);
      ppuVar1 = &PTR____CFConstantStringClassReference_110dc6f98;
    }
    else {
      if (lVar2 != 2) goto LAB_10703a5ac;
      ppuVar1 = &PTR____CFConstantStringClassReference_110e98fd8;
    }
  }
  else if (lVar2 == 3) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dc6fd8;
  }
  else if (lVar2 == 4) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e98ff8;
  }
  else {
    if (lVar2 != 5) goto LAB_10703a5ac;
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                        &PTR____CFConstantStringClassReference_110e99038);
    ppuVar1 = &PTR____CFConstantStringClassReference_110e99018;
  }
  func_0x00010c14cb00(param_3,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110db7018);
LAB_10703a5ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10703a5bc; end: 10703a663; -[SCMediaImportEditorMediaContent hash] */

void FUN_10703a5bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_1126f8550;
  puStack_90 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10703a664; end: 10703a6a7; -[SCMediaImportEditorMediaContent internalInit] */

void FUN_10703a664(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f8550;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10703a6a8; end: 10703a7bf; -[SCMediaImportEditorMediaContent isEqual:] */

long FUN_10703a6a8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10703a798:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10703a7a4;
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
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if (lVar3 != *(long *)(param_3 + 0x38)) {
                  func_0x00010c071ae0();
                  goto LAB_10703a7a4;
                }
                goto LAB_10703a798;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10703a7a4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10703a7c0; end: 10703a907; -[SCMediaImportEditorMediaContent matchImageFuture:image:videoFuture:video:snapDocFuture:snapDoc:] */

void FUN_10703a7c0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 3) {
    if (lVar1 == 0) {
      if (param_3 == 0) goto LAB_10703a8c4;
      lVar2 = 0x10;
      lVar1 = param_3;
    }
    else if (lVar1 == 1) {
      if (param_4 == 0) goto LAB_10703a8c4;
      lVar2 = 0x18;
      lVar1 = param_4;
    }
    else {
      if ((lVar1 != 2) || (param_5 == 0)) goto LAB_10703a8c4;
      lVar2 = 0x20;
      lVar1 = param_5;
    }
  }
  else if (lVar1 == 3) {
    if (param_6 == 0) goto LAB_10703a8c4;
    lVar2 = 0x28;
    lVar1 = param_6;
  }
  else if (lVar1 == 4) {
    if (param_7 == 0) goto LAB_10703a8c4;
    lVar2 = 0x30;
    lVar1 = param_7;
  }
  else {
    if ((lVar1 != 5) || (param_8 == 0)) goto LAB_10703a8c4;
    lVar2 = 0x38;
    lVar1 = param_8;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_10703a8c4:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10703a908; end: 10703a967; -[SCMediaImportEditorMediaContent .cxx_destruct] */

void FUN_10703a908(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10703a968; end: 10703a973; -[SCNGSMESnapDocResolverServices .cxx_destruct] */

void FUN_10703a968(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10703a974; end: 10703ab43; -[SCCameraVolumeButtonHandler initWithAudioSession:view:] */

undefined8 *
FUN_10703a974(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR_PTR_1126f8560;
  puVar2 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = puVar2[1];
    puVar2[1] = param_3;
    _objc_release(uVar3);
    iVar1 = 2;
    func_0x000100029b9c(2,0x11,2,0);
    if (iVar1 == 0) {
      func_0x00010be2cea0(puVar2);
    }
    else {
      _objc_retain(param_4);
      uVar3 = puVar2[5];
      puVar2[5] = param_4;
      _objc_release(uVar3);
      _objc_initWeak(auStack_78,puVar2);
      puVar4 = PTR__OBJC_CLASS___AVCaptureEventInteraction_1126d4278;
      _objc_alloc();
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_10703ab44;
      puStack_88 = &UNK_110989010;
      _objc_copyWeak(auStack_80,auStack_78);
      _objc_copyWeak(auStack_a8,auStack_78);
      func_0x00010c039fc0();
      uVar3 = puVar2[4];
      puVar2[4] = puVar4;
      _objc_release(uVar3);
      func_0x00010c195460(puVar2[4]);
      _objc_destroyWeak(auStack_a8);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_78);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 10703ab44; end: 10703abd3;  */

void FUN_10703ab44(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd21a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10703abd4; end: 10703acbb; -[SCCameraVolumeButtonHandler dealloc] */

void FUN_10703abd4(long param_1)

{
  long lVar1;
  long lStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar1);
  if (lVar1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x10703ac7c;
    puStack_30 = &UNK_110842e18;
    _objc_retain(lVar1);
    lStack_28 = lVar1;
    func_0x000100162d98("APPSTORE",&puStack_48);
    _objc_release(lStack_28);
  }
  _objc_release(lVar1);
  puStack_50 = PTR_PTR_1126f8560;
  lStack_58 = param_1;
  _objc_msgSendSuper2(&lStack_58,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10703acbc; end: 10703ad0b; -[SCCameraVolumeButtonHandler handlePrimaryVolumeButtonEvent:] */

void FUN_10703acbc(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c0fa9c0();
  if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010be334b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleVolumeButtonUp_11256a6c8);
    return;
  }
  if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be33490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleVolumeButtonDown_11256a6c0);
    return;
  }
  return;
}



/* Entry: 10703ad0c; end: 10703ad5b; -[SCCameraVolumeButtonHandler handleSecondaryVolumeButtonEvent:] */

void FUN_10703ad0c(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c0fa9c0();
  if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010be334b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleVolumeButtonUp_11256a6c8);
    return;
  }
  if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be33490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleVolumeButtonDown_11256a6c0);
    return;
  }
  return;
}



/* Entry: 10703ad5c; end: 10703ae13; -[SCCameraVolumeButtonHandler startHandlingVolumeButtonEvents] */

void FUN_10703ad5c(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  uVar2 = param_1;
  func_0x00010c074ac0();
  if ((uVar2 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x1a) = 0;
    func_0x00010be936e0(param_1);
    iVar1 = 2;
    func_0x000100029b9c(2,0x11,2,0);
    if (iVar1 == 0) {
      puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c14cae0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf51e00();
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      *(undefined **)(param_1 + 0x10) = puVar5;
      _objc_release(uVar6);
      _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar3);
      return;
    }
    func_0x00010bef9440(*(undefined8 *)(param_1 + 0x28));
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  return;
}



/* Entry: 10703ae14; end: 10703ae97; -[SCCameraVolumeButtonHandler stopHandlingVolumeButtonEvents] */

void FUN_10703ae14(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar2 = param_1;
  func_0x00010c074ac0();
  if ((int)lVar2 != 0) {
    iVar1 = 2;
    func_0x000100029b9c(2,0x11,2,0);
    if (iVar1 == 0) {
      puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14ca60();
      _objc_release(puVar3);
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = 0;
      _objc_release(uVar4);
    }
    else {
      func_0x00010c12cbe0(*(undefined8 *)(param_1 + 0x28));
      *(undefined1 *)(param_1 + 0x30) = 0;
    }
    *(undefined1 *)(param_1 + 0x1a) = 0;
  }
  return;
}



/* Entry: 10703ae98; end: 10703aecf; -[SCCameraVolumeButtonHandler stopHandlingVolumeButtonEventsWhenPressingEnds] */

void FUN_10703ae98(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c074ac0();
  if (((int)lVar1 != 0) && (lVar1 = param_1, func_0x00010c07adc0(), (int)lVar1 != 0)) {
    *(undefined1 *)(param_1 + 0x1a) = 1;
  }
  return;
}



/* Entry: 10703aed0; end: 10703af1b; -[SCCameraVolumeButtonHandler isHandlingVolumeButtonEvents] */

byte FUN_10703aed0(long param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = 2;
  func_0x000100029b9c(2,0x11,2,0);
  if (iVar2 == 0) {
    bVar1 = *(long *)(param_1 + 0x10) != 0;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x30);
  }
  return bVar1 & 1;
}



/* Entry: 10703af1c; end: 10703af3f; -[SCCameraVolumeButtonHandler isPressingVolumeButton] */

byte FUN_10703af1c(long param_1)

{
  byte bVar1;
  
  if (((*(byte *)(param_1 + 0x18) & 1) == 0) && ((*(byte *)(param_1 + 0x19) & 1) == 0)) {
    bVar1 = *(byte *)(param_1 + 0x31);
  }
  else {
    bVar1 = 1;
  }
  return bVar1 & 1;
}



/* Entry: 10703af40; end: 10703af4b; -[SCCameraVolumeButtonHandler _resetPressingButtons] */

void FUN_10703af40(long param_1)

{
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  return;
}



/* Entry: 10703af4c; end: 10703b09f; -[SCCameraVolumeButtonHandler _handleNonCaptureEventHandlerCase] */

void FUN_10703af4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_s__handleButton1Down__112537160;
  puVar4 = puVar3;
  func_0x00010c14cba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240(puVar2,param_2,param_1,puVar1,puVar4,0);
  _objc_release(puVar4);
  puVar1 = PTR_s__handleButton1Up__112537168;
  puVar4 = puVar3;
  func_0x00010c14cbc0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240(puVar2,param_2,param_1,puVar1,puVar4,0);
  _objc_release(puVar4);
  puVar1 = PTR_s__handleButton2Down__112537170;
  puVar4 = puVar3;
  func_0x00010c14cbe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240(puVar2,param_2,param_1,puVar1,puVar4,0);
  _objc_release(puVar4);
  puVar1 = PTR_s__handleButton2Up__112537178;
  puVar4 = puVar3;
  func_0x00010c14cc00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240(puVar2,param_2,param_1,puVar1,puVar4,0);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10703b0a0; end: 10703b10f; -[SCCameraVolumeButtonHandler _handleButton1Down:] */

void FUN_10703b0a0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x00010c074ac0();
  if (((int)lVar1 != 0) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10703b110;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x00010bddca60(param_1,param_2,&puStack_48);
  }
  return;
}



/* Entry: 10703b110; end: 10703b11f;  */

void FUN_10703b110(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x18) = 1;
  return;
}



/* Entry: 10703b120; end: 10703b193; -[SCCameraVolumeButtonHandler _handleButton1Up:] */

void FUN_10703b120(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x00010c074ac0();
  if (((int)lVar1 != 0) && (*(char *)(param_1 + 0x18) == '\x01')) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10703b194;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x00010bddca60(param_1,param_2,&puStack_48);
  }
  return;
}



/* Entry: 10703b194; end: 10703b19f;  */

void FUN_10703b194(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x18) = 0;
  return;
}



/* Entry: 10703b1a0; end: 10703b20f; -[SCCameraVolumeButtonHandler _handleButton2Down:] */

void FUN_10703b1a0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x00010c074ac0();
  if (((int)lVar1 != 0) && ((*(byte *)(param_1 + 0x19) & 1) == 0)) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10703b210;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x00010bddca60(param_1,param_2,&puStack_48);
  }
  return;
}



/* Entry: 10703b210; end: 10703b21f;  */

void FUN_10703b210(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x19) = 1;
  return;
}



/* Entry: 10703b220; end: 10703b293; -[SCCameraVolumeButtonHandler _handleButton2Up:] */

void FUN_10703b220(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x00010c074ac0();
  if (((int)lVar1 != 0) && (*(char *)(param_1 + 0x19) == '\x01')) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10703b294;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x00010bddca60(param_1,param_2,&puStack_48);
  }
  return;
}



/* Entry: 10703b294; end: 10703b29f;  */

void FUN_10703b294(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x19) = 0;
  return;
}



/* Entry: 10703b2a0; end: 10703b30f; -[SCCameraVolumeButtonHandler _handleVolumeButtonDown] */

void FUN_10703b2a0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x00010c074ac0();
  if (((int)lVar1 != 0) && ((*(byte *)(param_1 + 0x31) & 1) == 0)) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10703b310;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x00010bddca60(param_1,param_2,&puStack_48);
  }
  return;
}



/* Entry: 10703b310; end: 10703b31f;  */

void FUN_10703b310(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x31) = 1;
  return;
}



/* Entry: 10703b320; end: 10703b393; -[SCCameraVolumeButtonHandler _handleVolumeButtonUp] */

void FUN_10703b320(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x00010c074ac0();
  if (((int)lVar1 != 0) && (*(char *)(param_1 + 0x31) == '\x01')) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10703b394;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x00010bddca60(param_1,param_2,&puStack_48);
  }
  return;
}



/* Entry: 10703b394; end: 10703b39f;  */

void FUN_10703b394(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x31) = 0;
  return;
}



/* Entry: 10703b3a0; end: 10703b46f; -[SCCameraVolumeButtonHandler _changePressingButton:] */

void FUN_10703b3a0(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c07adc0();
  (**(code **)(param_3 + 0x10))(param_3);
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010c07adc0();
  if (((uVar1 & 1) == 0) && ((uint)uVar2 != 0)) {
    lVar3 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c2a0f20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  if ((((uint)uVar1 ^ 1 | (uint)uVar2) & 1) == 0) {
    lVar3 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c2a0f40();
    _objc_release(lVar3);
    if (*(char *)(param_1 + 0x1a) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c2560d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_stopHandlingVolumeButtonEvents_112673258)
      ;
      return;
    }
  }
  return;
}



/* Entry: 10703b470; end: 10703b487; -[SCCameraVolumeButtonHandler delegate] */

void FUN_10703b470(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10703b488; end: 10703b493; -[SCCameraVolumeButtonHandler setDelegate:] */

void FUN_10703b488(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 10703b494; end: 10703b4e3; -[SCCameraVolumeButtonHandler .cxx_destruct] */

void FUN_10703b494(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10703b4e4; end: 10703b5d3; -[SCMemoriesTimelineSnapDocParser timelineConfigurationWithBlizzardLogger:usageType:segmentsEditable:tinsel:completion:] */

void FUN_10703b4e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10703b5d4;
  puStack_78 = &UNK_110989070;
  uStack_70 = param_1;
  uStack_68 = param_3;
  uStack_60 = param_6;
  uStack_58 = param_7;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_retain(param_7);
  func_0x00010c13e260(param_1,param_2,&puStack_90);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_58);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_7);
  return;
}



/* Entry: 10703b5d4; end: 10703bab3;  */

/* WARNING: Removing unreachable block (ram,0x00010703ba6c) */

void FUN_10703b5d4(long param_1,ulong param_2,ulong param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_5 == 0) {
    uVar1 = param_2;
    func_0x00010bf529e0();
    puVar12 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (uVar1 == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      _objc_opt_class(uVar5);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240(puVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      _objc_release(uVar5);
      (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0,puVar12);
    }
    else {
      puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_2;
      func_0x00010bf529e0();
      uVar15 = param_3;
      func_0x00010bf529e0();
      if (uVar15 <= uVar1) {
        uVar1 = uVar15;
      }
      if (0 < (long)uVar1) {
        uVar15 = 0;
        do {
          uVar2 = param_2;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = param_3;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c0c5180();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010c23fe00(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x000108020694(uVar4,uVar5);
          _objc_release(uVar5);
          _objc_release();
          puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
          puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x0001000f73a0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar4;
          func_0x00010011df08();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00(puVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfad300(puVar7);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar11);
          _objc_release(uVar6);
          _objc_release(uVar4);
          uVar4 = uVar2;
          func_0x00010bfc5880();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar4;
          func_0x00010c08fa60();
          _objc_release(uVar4);
          if (uVar6 == 0) {
            uVar4 = uVar2;
            func_0x00010b7f5374(uVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c14e060();
            _objc_release(uVar4);
          }
          else {
            puVar11 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
            func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar2;
            func_0x00010bfc5880(uVar2);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar7;
            func_0x00010c0f5800(puVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c099740(puVar11);
            _objc_retain(0);
            _objc_release(puVar8);
            _objc_release(uVar4);
            _objc_release(puVar11);
          }
          func_0x00010befa120(puVar12);
          _objc_release(uVar3);
          _objc_release(uVar2);
          _objc_release(puVar7);
          uVar15 = uVar15 + 1;
        } while (uVar1 != uVar15);
      }
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c13eee0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = *(undefined8 *)(param_1 + 0x20);
      uVar10 = uVar14;
      func_0x00010c13ef00(uVar14);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain(uVar5);
      func_0x00010becc0a0(uVar14);
      _objc_release(uVar10);
      _objc_release(uVar5);
      _objc_release(uVar9);
    }
    _objc_release(puVar12);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0,param_5);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010703babc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_2 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10703bab4; end: 10703babf;  */

void FUN_10703bab4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010703babc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10703bac0; end: 10703bbef; -[SCMemoriesTimelineSnapDocParser _timelineConfigurationFromAssetURLs:mediaMetadatas:timeRanges:creativeEditTags:usageType:snapSource:segmentsEditable:blizzardLogger:tinsel:completion:] */

void FUN_10703bac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  byte param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c8570;
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c05a540();
  _objc_release(param_12);
  _objc_release(param_11);
  func_0x00010c210200(puVar1,param_2,param_9 ^ 1);
  func_0x00010bdc81c0(param_1,param_2,0,param_3,param_4,param_5,param_6,param_8,puVar1,param_13);
  _objc_release(param_13);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10703bbf0; end: 10703c193; -[SCMemoriesTimelineSnapDocParser _addSegmentAtIndex:assetURLs:mediaMetadatas:timeRanges:creativeEditTags:snapSource:toTimelineConfiguration:completion:] */

void FUN_10703bbf0(undefined8 param_1,undefined8 param_2,int param_3,ulong param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  long param_10)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 uStack_180;
  int iStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  uVar3 = param_4;
  func_0x00010bf529e0();
  uVar4 = param_5;
  func_0x00010bf529e0();
  if (uVar4 <= uVar3) {
    uVar3 = uVar4;
  }
  if ((long)param_3 < (long)uVar3) {
    puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1d0 = 0xc2000000;
    pcStack_1c8 = FUN_10703c194;
    puStack_1c0 = &UNK_1109890a0;
    uStack_1b8 = param_1;
    iStack_178 = param_3;
    _objc_retain(param_4);
    uStack_1b0 = param_4;
    _objc_retain(param_5);
    uStack_1a8 = param_5;
    _objc_retain(param_6);
    uStack_1a0 = param_6;
    _objc_retain(param_7);
    uStack_198 = param_7;
    uStack_180 = param_8;
    _objc_retain(param_9);
    uStack_190 = param_9;
    _objc_retain(param_10);
    lStack_188 = param_10;
    ppuVar5 = &puStack_1d8;
    _objc_retainBlock();
    uVar3 = param_4;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_5;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_6;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    uVar9 = uVar3;
    func_0x00010c074fe0();
    puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
    if ((int)uVar9 == 0) {
      uVar10 = uVar4;
      func_0x00010befd2c0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar10;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (uVar9 != 0) {
        uVar13 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(uVar10);
          }
          uVar14 = *(undefined8 *)(uVar13 * 8);
          uVar11 = uVar14;
          func_0x00010c0ed200();
          if ((int)uVar11 == 2) {
            func_0x00010c0c5b80();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0c67c0();
            _objc_release(uVar14);
            goto LAB_10703bfbc;
          }
          uVar13 = uVar13 + 1;
        } while (uVar9 != uVar13);
        uVar9 = uVar10;
        func_0x00010bf52a60();
      }
LAB_10703bfbc:
      _objc_release(uVar10);
      func_0x00010c0c4bc0(uVar4);
      func_0x00010bdc8220(param_1);
    }
    else {
      uVar9 = uVar3;
      func_0x00010c0f5800(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14d020();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      puVar12 = PTR__OBJC_CLASS___NSError_1126ae858;
      if (puVar7 == (undefined *)0x0) {
        _objc_opt_class(param_1);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99260(puVar12);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(param_10 + 0x10))(param_10,0,puVar12);
        _objc_release(puVar12);
        _objc_release(param_1);
      }
      else {
        uVar10 = uVar4;
        func_0x00010befd2c0();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar10;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (uVar9 != 0) {
          uVar13 = 0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(uVar10);
            }
            iVar2 = (int)*(undefined8 *)(uVar13 * 8);
            func_0x00010c0ed200();
            if (iVar2 == 2) goto LAB_10703c010;
            uVar13 = uVar13 + 1;
          } while (uVar9 != uVar13);
          uVar9 = uVar10;
          func_0x00010bf52a60();
        }
LAB_10703c010:
        _objc_release(uVar10);
        func_0x00010bdc81e0(param_1);
      }
      _objc_release(puVar7);
    }
    _objc_release(uVar8);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(ppuVar5);
    _objc_release(lStack_188);
    _objc_release(uStack_190);
    _objc_release(uStack_198);
    _objc_release(uStack_1a0);
    _objc_release(uStack_1a8);
    _objc_release(uStack_1b0);
  }
  else {
    (**(code **)(param_10 + 0x10))(param_10,param_9,0);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    func_0x00010bdc81c0(*(undefined8 *)(param_4 + 0x20));
    return;
  }
  return;
}



/* Entry: 10703c194; end: 10703c1cf;  */

void FUN_10703c194(long param_1,undefined8 param_2)

{
  func_0x00010bdc81c0(*(undefined8 *)(param_1 + 0x20),param_2,*(int *)(param_1 + 0x60) + 1,
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x50));
  return;
}



/* Entry: 10703c1d0; end: 10703c457; -[SCMemoriesTimelineSnapDocParser _addSegmentForImage:imageURL:timeRange:creativeEditTag:snapSource:toTimelineConfiguration:completion:] */

void FUN_10703c1d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9
                  )

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar1 = param_8;
  func_0x00010c0d8aa0();
  lVar2 = param_5;
  func_0x00010bf4d860();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x00010bdc1120(&uStack_80,lVar2);
  }
  uStack_98 = uStack_60;
  uStack_a0 = uStack_68;
  uStack_90 = uStack_58;
  func_0x00010c1faa00(uVar1);
  _objc_release(lVar2);
  lVar2 = param_5;
  func_0x00010bf4d860();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x00010bdc1120(&uStack_80,lVar2);
  }
  uStack_98 = uStack_78;
  uStack_a0 = uStack_80;
  uStack_90 = uStack_70;
  func_0x00010c209a60(uVar1);
  _objc_release(lVar2);
  lVar2 = param_5;
  func_0x00010c27c940();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x00010bdc1120(&uStack_80,lVar2);
  }
  func_0x00010c21a5e0(uVar1);
  _objc_release(lVar2);
  if (param_6 != 0) {
    func_0x00010c1857c0(uVar1);
  }
  puVar3 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19d080(uVar1);
  _objc_release(puVar3);
  func_0x00010c179260(uVar1);
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_10703c458;
  puStack_c0 = &UNK_11084a9e8;
  uStack_a8 = param_9;
  uStack_b8 = param_8;
  uStack_b0 = uVar1;
  _objc_retain(param_9);
  _objc_retain(uVar1);
  _objc_retain(param_8);
  func_0x000100162d98("APPSTORE",&puStack_d8);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(param_9);
  _objc_release(uVar1);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10703c458; end: 10703c497;  */

void FUN_10703c458(long param_1,undefined8 param_2)

{
  func_0x00010befb2c0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010703c488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10703c498; end: 10703c613; -[SCMemoriesTimelineSnapDocParser _addSegmentForVideoURL:toTimelineConfiguration:mediaDurationMs:timeRange:creativeEditTag:snapSource:externalMediaSource:completion:] */

void FUN_10703c498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 in_stack_00000008;
  undefined1 auStack_68 [24];
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(in_stack_00000008);
  _objc_retain(param_3);
  _CMTimeMake(auStack_68,param_5,1000);
  uVar1 = param_4;
  func_0x00010c0d9540();
  _objc_release(param_3);
  _objc_retain(in_stack_00000008);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(uVar1);
  _objc_retain(param_6);
  func_0x00010c285d60(uVar1);
  _objc_release(in_stack_00000008);
  _objc_release(param_4);
  _objc_release(param_7);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(in_stack_00000008);
  _objc_release(param_4);
  _objc_release(param_7);
  _objc_release(uVar1);
  _objc_release(param_6);
  return;
}



/* Entry: 10703c614; end: 10703c6eb;  */

void FUN_10703c614(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10703c6ec;
  puStack_50 = &UNK_110852488;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar2;
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_30 = uVar2;
  _objc_retain(uVar1);
  uStack_28 = uVar1;
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(uStack_28);
  _objc_release(uStack_30);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  return;
}



/* Entry: 10703c6ec; end: 10703c8a7;  */

void FUN_10703c6ec(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf4d860();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
    }
    else {
      func_0x00010bdc1120(&uStack_60,lVar1);
    }
    uStack_78 = uStack_58;
    uStack_80 = uStack_60;
    uStack_70 = uStack_50;
    func_0x00010c209a60(uVar3,param_2,&uStack_80);
    _objc_release(lVar1);
    lVar1 = *(long *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf4d860();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
    }
    else {
      func_0x00010bdc1120(&uStack_60,lVar1);
    }
    uStack_78 = uStack_40;
    uStack_80 = uStack_48;
    uStack_70 = uStack_38;
    func_0x00010c1faa00(uVar3,param_2,&uStack_80);
    _objc_release(lVar1);
    lVar1 = *(long *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c27c940();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
    }
    else {
      func_0x00010bdc1120(&uStack_60,lVar1);
    }
    func_0x00010c21a5e0(uVar3,param_2,&uStack_60);
    _objc_release(lVar1);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010c1857c0(*(undefined8 *)(param_1 + 0x28));
  }
  puVar2 = PTR_PTR_1126ae558;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar4;
  func_0x00010bfb6cc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9ca0(puVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19d080(uVar4,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar3);
  func_0x00010c179260(*(undefined8 *)(param_1 + 0x28),param_2,
                      &PTR____CFConstantStringClassReference_110daafd8);
  func_0x00010befb2c0(*(undefined8 *)(param_1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x28));
  if (*(long *)(param_1 + 0x40) != 0) {
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))();
  }
  return;
}



/* Entry: 10703c8a8; end: 10703c8b3; -[SCFeatureSettingsService isCameraSettingsShutterSoundOn] */

void FUN_10703c8a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e99098);
  return;
}



/* Entry: 10703c8b4; end: 10703c8bf; -[SCFeatureSettingsService cameraSettingsShutterSoundOnServerParam] */

undefined ** FUN_10703c8b4(void)

{
  return &PTR____CFConstantStringClassReference_110e99098;
}



/* Entry: 10703c8c0; end: 10703c8cf; -[SCFeatureSettingsService setCameraSettingsShutterSoundOn:] */

void FUN_10703c8c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e99098,param_3);
  return;
}



/* Entry: 10703c8d0; end: 10703c8d7; -[SCFeatureSettingsService camera_settings_shutter_sound_on_client_value:] */

undefined * FUN_10703c8d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10703c8d8; end: 10703c8df; -[SCFeatureSettingsService camera_settings_shutter_sound_on_server_value:] */

void FUN_10703c8d8(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10703c8e0; end: 10703c8ef; -[SCFeatureSettingsService cameraSettingsShutterSoundOn] */

void FUN_10703c8e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e99098,1);
  return;
}



/* Entry: 10703c8f0; end: 10703c8fb; -[SCFeatureSettingsService isCameraSettingsShutterSoundSeenPrompt] */

void FUN_10703c8f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e990b8);
  return;
}



/* Entry: 10703c8fc; end: 10703c907; -[SCFeatureSettingsService cameraSettingsShutterSoundSeenPromptServerParam] */

undefined ** FUN_10703c8fc(void)

{
  return &PTR____CFConstantStringClassReference_110e990b8;
}



/* Entry: 10703c908; end: 10703c917; -[SCFeatureSettingsService setCameraSettingsShutterSoundSeenPrompt:] */

void FUN_10703c908(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e990b8,param_3);
  return;
}



/* Entry: 10703c918; end: 10703c91f; -[SCFeatureSettingsService camera_settings_shutter_sound_seen_prompt_client_value:] */

undefined * FUN_10703c918(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10703c920; end: 10703c927; -[SCFeatureSettingsService camera_settings_shutter_sound_seen_prompt_server_value:] */

void FUN_10703c920(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10703c928; end: 10703c937; -[SCFeatureSettingsService cameraSettingsShutterSoundSeenPrompt] */

void FUN_10703c928(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e990b8,0);
  return;
}



/* Entry: 10703c938; end: 10703cab7; -[SCFeatureSettingsService setBipaAcceptedPolicyVersion:completion:] */

void FUN_10703c938(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c296ea0(param_1,param_2,0x388);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    uStack_80 = 0x10703cacc;
    puStack_78 = &UNK_11085a1b8;
    uStack_70 = param_4;
    _objc_retain(param_4);
    func_0x00010c19ab80(param_1,param_2,0x388,puVar2,puVar4,&puStack_90);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    uVar5 = uStack_70;
  }
  else {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10703cab8;
    puStack_50 = &UNK_11085a1b8;
    uStack_48 = param_4;
    _objc_retain(param_4);
    func_0x00010c1b7640(param_1,param_2,0x388,puVar2,puVar4,&puStack_68);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    uVar5 = uStack_48;
  }
  _objc_release(uVar5);
  _objc_release(param_4);
  return;
}


