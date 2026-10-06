/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1090988ec; end: 109098a1b;  */

void FUN_1090988ec(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 in_x6;
  long lVar3;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [40];
  
  lVar3 = param_1[0x16];
  uVar1 = *(uint *)(param_1 + 0x17);
  _objc_retain(in_x6);
  func_0x000109099c8c(auStack_88,lVar3 + (ulong)uVar1);
  func_0x000109099c8c(auStack_a0,*param_1);
  func_0x000109099c8c(auStack_b8,*(undefined4 *)((long)param_1 + 0xbc));
  func_0x000109099c8c(auStack_d0,param_3 - (param_1[0x16] + (ulong)*(uint *)(param_1 + 0x17)));
  puVar2 = PTR_PTR_1126dd3a0;
  _objc_alloc(PTR_PTR_1126dd3a0);
  func_0x00010c0389c0();
  func_0x000109099c14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 109098a1c; end: 109098fd7; -[SCNeoMP4StreamParser _processBoxMovieWithBoxSize:overallBufferOffset:buffer:error:instruments:] */

/* WARNING: Removing unreachable block (ram,0x000109098de0) */

undefined *
FUN_109098a1c(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6,undefined8 param_7)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 extraout_x8;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined *puStack_1f8;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined4 uStack_184;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  int iStack_e4;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_70;
  
  func_0x000109099c1c();
  uStack_70 = extraout_x8;
  _objc_retain(param_5);
  _objc_retain(param_7);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_109106ce8(uVar2,param_1 + 0x28);
  if ((int)uVar2 == 0) {
    param_1[0x58] = 1;
    func_0x000109099d24();
    func_0x00010c04e940();
    uVar7 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = uVar2;
    func_0x000109099ca4(uVar7);
    func_0x00010bf96660(*(undefined8 *)(param_1 + 0x60));
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c25eac0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    func_0x000109099ca4(uVar7);
    uVar10 = 0;
    *(undefined8 *)(param_1 + 0x18) = param_4;
    do {
      in_ZR = uVar10 == *(uint *)(param_1 + 0x28);
      if (*(uint *)(param_1 + 0x28) <= uVar10) {
        puVar11 = (undefined *)0x0;
        break;
      }
      lVar3 = *(long *)(param_1 + 0x60);
      func_0x00010bf07340();
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      FUN_109106d40(uVar2,uVar10,lVar3);
      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if ((int)uVar2 != 0) {
        func_0x00010c0df820();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0df880();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0df820();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0df880();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c08fa60(*(undefined8 *)(param_1 + 8));
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25d9e0(puVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        func_0x000109099cf0();
        func_0x000109099c40();
        func_0x000109099cac();
        func_0x000109099c14();
        func_0x00010bdf85e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        FUN_109097d10(puVar11,uVar2,param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        func_0x000109099c34();
        param_1 = puVar11;
        goto LAB_109098e7c;
      }
      lVar4 = lVar3;
      FUN_109098fd8();
      func_0x000109097518(&uStack_180,lVar3);
      uStack_184 = 0;
      in_ZR = lVar4 - 1U == 1;
      if (lVar4 - 1U < 2) {
        _bzero(&uStack_130,0xc0);
        puVar12 = (undefined8 *)0x0;
        uVar8 = 0;
LAB_109098b98:
        in_ZR = uVar8 == *(uint *)(lVar3 + 0x24);
        if (uVar8 < *(uint *)(lVar3 + 0x24)) {
          uVar2 = *(undefined8 *)(param_1 + 0x20);
          uVar8 = uVar8 + 1;
          FUN_109106e38(uVar2,uVar10,uVar8,&uStack_130);
          if ((int)uVar2 == 0) {
            if (puVar12 != (undefined8 *)0x0) {
              _CFRelease(puVar12);
            }
            if (lVar4 != 1) goto code_r0x000109098bd4;
            if (iStack_e4 == 0) {
              iStack_e4 = *(int *)(lVar3 + 8);
            }
            lStack_1c8 = 0;
            puVar12 = &uStack_130;
            FUN_10909759c(puVar12,lVar3 + 0x1e,&lStack_1c8,param_7);
            lVar9 = lStack_1c8;
            _objc_retain(lStack_1c8);
            if (lVar9 != 0) {
              func_0x00010bf6b020(param_1);
              _objc_retainAutoreleasedReturnValue();
              func_0x000109099c94();
              func_0x000109099c48();
            }
            goto LAB_109098cb4;
          }
          func_0x00010bdf85e0(param_1);
          _objc_retainAutoreleasedReturnValue();
          ppuVar5 = &PTR____CFConstantStringClassReference_110f1ff98;
          FUN_109097d10(&PTR____CFConstantStringClassReference_110f1ff98,uVar2,param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *param_6 = ppuVar5;
          goto LAB_109098e7c;
        }
      }
      else {
        puVar12 = (undefined8 *)0x0;
      }
      func_0x000109097514(lVar3 + 0x1e);
      func_0x000109097514(lVar3 + 0x1a);
      _CMTimeMake(&uStack_1c0,*(undefined8 *)(lVar3 + 0x10),*(undefined4 *)(lVar3 + 8));
      puVar11 = PTR_PTR_1126dd350;
      _objc_alloc(PTR_PTR_1126dd350);
      uStack_148 = uStack_1b8;
      uStack_150 = uStack_1c0;
      uStack_140 = uStack_1b0;
      uStack_128 = uStack_178;
      uStack_130 = uStack_180;
      uStack_118 = uStack_168;
      uStack_120 = uStack_170;
      uStack_108 = uStack_158;
      uStack_110 = uStack_160;
      func_0x00010c055be0(0);
      if (puVar12 != (undefined8 *)0x0) {
        _CFRelease(puVar12);
      }
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c6a60();
      func_0x000109099c48();
      func_0x00010c277e80(puVar11);
      puVar6 = param_1;
      func_0x00010be704a0();
      _objc_retain(0);
      puVar11 = puVar6;
      if (puVar6 == (undefined *)0x0) {
        puVar11 = puStack_1f8;
      }
      func_0x000109099cac();
      func_0x000109099c84();
      uVar10 = uVar10 + 1;
      puStack_1f8 = puVar11;
    } while (puVar6 == (undefined *)0x0);
  }
  else {
    func_0x00010bdf85e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = &PTR____CFConstantStringClassReference_110f1ff58;
    FUN_109097d10(&PTR____CFConstantStringClassReference_110f1ff58,uVar2,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_6 = ppuVar5;
LAB_109098e7c:
    _objc_release(param_1);
    puVar11 = (undefined *)0x3;
  }
  _objc_release();
  iVar1 = (int)param_7;
  func_0x000109099c2c();
  func_0x000109099bf0(uStack_70);
  if ((bool)in_ZR) {
    return puVar11;
  }
  ___stack_chk_fail();
  iVar1 = iVar1 + 0x1a;
  func_0x000109097514();
  puVar11 = (undefined *)0x2;
  if (iVar1 != 0x76696465) {
    puVar11 = (undefined *)(ulong)(iVar1 == 0x736f756e);
  }
  return puVar11;
code_r0x000109098bd4:
  puVar12 = (undefined8 *)0x0;
  if (lVar4 == 2) {
    lStack_190 = 0;
    uStack_1b8 = uStack_178;
    uStack_1c0 = uStack_180;
    uStack_1a8 = uStack_168;
    uStack_1b0 = uStack_170;
    uStack_198 = uStack_158;
    uStack_1a0 = uStack_160;
    puVar12 = &uStack_130;
    FUN_109097770(puVar12,lVar3 + 0x1e,&uStack_1c0,&lStack_190);
    lVar9 = lStack_190;
    _objc_retain(lStack_190);
    if (lVar9 != 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x000109099c94();
      func_0x000109099c48();
    }
    if (param_1[0x68] == '\x01') {
      FUN_1091098e4(uStack_120,uStack_128,uStack_b4,uStack_b0,&uStack_184);
    }
LAB_109098cb4:
    _objc_release(lVar9);
  }
  goto LAB_109098b98;
}



/* Entry: 109098fd8; end: 109099013;  */

undefined1 FUN_109098fd8(int param_1)

{
  undefined1 uVar1;
  
  param_1 = param_1 + 0x1a;
  func_0x000109097514();
  uVar1 = 2;
  if (param_1 != 0x76696465) {
    uVar1 = param_1 == 0x736f756e;
  }
  return uVar1;
}



/* Entry: 109099014; end: 10909917b; -[SCNeoMP4StreamParser _processBoxMovieFragmentWithOverallBufferOffset:buffer:error:] */

/* WARNING: Removing unreachable block (ram,0x0001090990ec) */

long FUN_109099014(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  char cVar1;
  ulong uVar2;
  undefined **ppuVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_4);
  if (*(char *)(param_1 + 0x58) == '\x01') {
    uVar4 = 0;
    do {
      uVar2 = *(ulong *)(param_1 + 0x60);
      func_0x00010c23d0a0();
      if (uVar2 <= uVar4) {
        lVar5 = 0;
        break;
      }
      func_0x00010c25de40();
      cVar1 = *(char *)(param_1 + 0x59);
      FUN_109098fd8();
      lVar5 = param_1;
      if (cVar1 == '\x01') {
        func_0x00010be704a0();
      }
      else {
        func_0x00010be704a0();
        _objc_retain(0);
        _objc_release(0);
      }
      uVar4 = uVar4 + 1;
    } while (lVar5 == 0);
  }
  else {
    ppuVar3 = &PTR____CFConstantStringClassReference_110f1ffb8;
    FUN_109096480(&PTR____CFConstantStringClassReference_110f1ffb8,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_5 = ppuVar3;
    lVar5 = 4;
  }
  func_0x000109099c14();
  return lVar5;
}



/* Entry: 10909917c; end: 1090992a3; -[SCNeoMP4StreamParser _processSegmentIndexWithOverallBufferOffset:error:] */

long FUN_10909917c(ulong param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  uint uVar1;
  uint *puVar2;
  undefined1 in_ZR;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 extraout_x8;
  long lVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  uint auStack_dc [33];
  undefined8 uStack_58;
  
  uVar3 = param_1;
  func_0x000109099c1c();
  auStack_dc[0] = 0;
  lVar6 = *(long *)(uVar3 + 0x20);
  uVar3 = *(ulong *)(lVar6 + 0x20);
  uStack_58 = extraout_x8;
  FUN_109097e34(uVar3,*(undefined8 *)(lVar6 + 8),param_3 + (ulong)*(uint *)(lVar6 + 4),auStack_dc);
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 == 0) {
    lVar6 = 3;
  }
  else {
    *(undefined1 *)(param_1 + 0x59) = 1;
    uVar4 = uVar3;
    func_0x000109099c70();
    lVar6 = lRam0000000000000000;
    while (uVar4 != 0) {
      uVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar6) {
          _objc_enumerationMutation(uVar3);
        }
        uVar5 = param_1;
        func_0x00010bf6b020();
        _objc_retainAutoreleasedReturnValue();
        param_4 = (ulong)auStack_dc[0];
        func_0x00010c0c6a40();
        func_0x000109099c84();
        uVar9 = uVar9 + 1;
        in_ZR = uVar9 == uVar4;
      } while (uVar9 < uVar4);
      func_0x000109099c70();
      uVar4 = uVar5;
    }
    lVar6 = 0;
  }
  lVar8 = 0;
  func_0x000109099c2c();
  func_0x000109099bf0(uStack_58);
  if ((bool)in_ZR) {
    return lVar6;
  }
  ___stack_chk_fail();
  _objc_retain(param_4);
  func_0x000109099d10();
  if (*(uint **)(lVar8 + 0x20) == (uint *)0x0) {
    lVar8 = 3;
  }
  else {
    uVar1 = **(uint **)(lVar8 + 0x20);
    uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
    lVar6 = 4;
    puVar2 = (uint *)&UNK_10dfb2d60;
    do {
      puVar7 = puVar2;
      lVar6 = lVar6 + -1;
      if (lVar6 == 0) {
        func_0x00010bf99fe0(param_6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf77c60();
        goto LAB_1090993ac;
      }
      puVar2 = puVar7 + 4;
    } while (*puVar7 != (uVar1 >> 0x10 | uVar1 << 0x10));
    lVar6 = *(long *)(puVar7 + 2);
    func_0x00010bf99fe0(param_6);
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 == 3) {
      func_0x000109099c04();
      func_0x000109099c40();
      func_0x00010be82220(lVar8);
    }
    else if (lVar6 == 2) {
      func_0x000109099c04();
      func_0x000109099c40();
      func_0x00010be80780(lVar8);
    }
    else if (lVar6 == 1) {
      func_0x000109099c04();
      func_0x000109099c40();
      func_0x00010be807a0(lVar8);
    }
    else {
      func_0x000109099c04();
LAB_1090993ac:
      _objc_release(param_6);
      lVar8 = 0;
    }
  }
  func_0x000109099c2c();
  func_0x000109099c14();
  return lVar8;
}



/* Entry: 1090992a4; end: 10909943b; -[SCNeoMP4StreamParser _processBoxWithSize:overallBufferOffset:buffer:instruments:error:] */

long FUN_1090992a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  long lVar4;
  uint *puVar5;
  
  _objc_retain(param_5);
  func_0x000109099d10();
  if (*(uint **)(param_1 + 0x20) == (uint *)0x0) {
    param_1 = 3;
  }
  else {
    uVar1 = **(uint **)(param_1 + 0x20);
    uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
    lVar4 = 4;
    puVar2 = (uint *)&UNK_10dfb2d60;
    do {
      puVar5 = puVar2;
      lVar4 = lVar4 + -1;
      if (lVar4 == 0) {
        func_0x00010bf99fe0(param_6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf77c60();
        goto LAB_1090993ac;
      }
      puVar2 = puVar5 + 4;
    } while (*puVar5 != (uVar1 >> 0x10 | uVar1 << 0x10));
    lVar4 = *(long *)(puVar5 + 2);
    uVar3 = param_6;
    func_0x00010bf99fe0(param_6);
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 3) {
      func_0x000109099c04();
      func_0x000109099c40();
      func_0x00010be82220(param_1,param_2,param_4,param_7);
    }
    else if (lVar4 == 2) {
      func_0x000109099c04();
      func_0x000109099c40();
      func_0x00010be80780(param_1,param_2,param_4,param_5,param_7);
    }
    else if (lVar4 == 1) {
      func_0x000109099c04();
      func_0x000109099c40();
      func_0x00010be807a0(param_1,param_2,param_3,param_4,param_5,param_7,param_6);
    }
    else {
      func_0x000109099c04();
      param_6 = uVar3;
LAB_1090993ac:
      _objc_release(param_6);
      param_1 = 0;
    }
  }
  func_0x000109099c2c();
  func_0x000109099c14();
  return param_1;
}



/* Entry: 10909943c; end: 1090994eb; -[SCNeoMP4StreamParser _handleNeedMoreDataWithEOF:boxRange:buffer:error:] */

undefined8
FUN_10909943c(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  int iVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  _objc_retain(param_6);
  func_0x00010c08fa80();
  iVar1 = (int)param_6;
  func_0x000109099c68();
  uVar3 = 2;
  if ((param_3 != 0) && (iVar1 != 0)) {
    func_0x00010bdf85e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = &PTR____CFConstantStringClassReference_110f1ffd8;
    FUN_109097d10(&PTR____CFConstantStringClassReference_110f1ffd8,2,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_7 = ppuVar2;
    func_0x000109099c48();
    uVar3 = 3;
  }
  func_0x000109099c14();
  return uVar3;
}



/* Entry: 1090994ec; end: 1090998ab; -[SCNeoMP4StreamParser parseBuffer:bufferOffset:outParsedLength:instruments:error:] */

undefined **
FUN_1090994ec(undefined **param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
             ulong *param_5,undefined8 param_6)

{
  uint uVar1;
  ulong uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 extraout_x8;
  undefined **ppuVar8;
  undefined *puVar9;
  ulong uStack_e8;
  undefined *puStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *apuStack_a8 [8];
  undefined8 uStack_68;
  
  ppuVar5 = param_3;
  func_0x000109099c1c();
  uStack_68 = extraout_x8;
  _objc_retain(ppuVar5);
  func_0x000109099d10();
  func_0x00010bf99fe0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60(param_1[1]);
  func_0x00010c08fa60(param_1[2]);
  func_0x00010c2a6800(param_6);
  func_0x000109099c40();
  ppuVar5 = param_3;
  func_0x00010bf51e80();
  if (ppuVar5 < (undefined **)0x8) {
    func_0x000109099c68();
    uVar3 = (int)ppuVar5 == 0;
    ppuVar8 = (undefined **)0x1;
    if ((bool)uVar3) {
      ppuVar8 = (undefined **)0x2;
    }
    goto LAB_1090996c0;
  }
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  puStack_e0 = (undefined *)0x0;
  ppuVar8 = apuStack_a8;
  FUN_1091086fc(ppuVar8,ppuVar5,0,&puStack_e0);
  if ((int)ppuVar8 == 0) {
    ppuVar6 = (undefined **)(uStack_d8 + ((ulong)puStack_e0 >> 0x20));
    uVar3 = ppuVar6 == (undefined **)0x0;
    if ((CARRY8(uStack_d8,(ulong)puStack_e0 >> 0x20)) ||
       (uVar3 = ppuVar6 == (undefined **)0x7, ppuVar6 < (undefined **)0x8)) {
      func_0x000109099d3c();
      func_0x00010bdf85e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = &PTR____CFConstantStringClassReference_110f20018;
      ppuVar7 = (undefined **)0xd;
    }
    else {
      ppuVar5 = &puStack_e0;
      FUN_1090998ac();
      uVar3 = ppuVar6 == (undefined **)0x1000001;
      if ((ppuVar6 < (undefined **)0x1000001) || ((int)ppuVar5 == 0)) {
        if (((ulong)ppuVar5 & 1) == 0) {
          ppuVar8 = (undefined **)0x0;
          *param_5 = (ulong)ppuVar6;
          goto LAB_1090996c0;
        }
        ppuVar5 = param_3;
        func_0x00010c08fa80();
        ppuVar8 = ppuVar5;
        func_0x000109099c68();
        uVar3 = ppuVar6 == ppuVar5;
        if (ppuVar6 <= ppuVar5) {
          func_0x000109099c68();
          ppuVar7 = (undefined **)param_1[1];
          _objc_retain(ppuVar7);
          ppuVar5 = ppuVar7;
          func_0x00010c08fa60();
          uVar3 = ppuVar6 == ppuVar5;
          if (ppuVar5 < ppuVar6) {
            func_0x00010c1ba840(ppuVar7);
          }
          _objc_retainAutorelease(ppuVar7);
          func_0x00010c0d3c60();
          func_0x00010bf51ee0();
          if (((ulong)param_3 & 1) == 0) {
LAB_10909983c:
            func_0x000109099d30();
            ppuVar8 = param_1;
          }
          else {
            uStack_e8 = 0;
            puVar9 = param_1[4];
            _objc_retainAutorelease(ppuVar7);
            func_0x00010c0d3c60();
            FUN_109106c0c(puVar9,ppuVar7,ppuVar6,ppuVar8,param_4,&uStack_e8);
            uVar2 = uStack_e8;
            if ((int)puVar9 == 0) {
              func_0x00010be807c0();
              *param_5 = uVar2;
              ppuVar8 = param_1;
            }
            else {
              uVar3 = (int)puVar9 == 2;
              if ((bool)uVar3) goto LAB_10909983c;
              func_0x00010bdf85e0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar5 = &PTR____CFConstantStringClassReference_110f1fff8;
              FUN_109097d10(&PTR____CFConstantStringClassReference_110f1fff8,puVar9,param_1);
              _objc_retainAutoreleasedReturnValue();
              _objc_autorelease();
              func_0x000109099c34();
              param_1 = ppuVar5;
              ppuVar8 = (undefined **)0x3;
            }
          }
          func_0x000109099c40();
          ppuVar5 = param_1;
          goto LAB_1090996c0;
        }
        ppuVar5 = ppuVar8;
        if ((int)ppuVar8 == 0) {
          ppuVar8 = (undefined **)0x2;
          goto LAB_1090996c0;
        }
        uVar1 = ((uint)puStack_e0 & 0xff00ff00) >> 8 | ((uint)puStack_e0 & 0xff00ff) << 8;
        uVar3 = (uVar1 >> 0x10 | uVar1 << 0x10) == 0x6d6f6f76;
        if ((!(bool)uVar3) || (((ulong)param_1[0xb] & 1) != 0)) {
          ppuVar8 = (undefined **)0x1;
          goto LAB_1090996c0;
        }
        func_0x000109099d3c();
        func_0x00010bdf85e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = &PTR____CFConstantStringClassReference_110f20058;
        ppuVar7 = (undefined **)0x2;
      }
      else {
        func_0x000109099d3c();
        func_0x00010bdf85e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = &PTR____CFConstantStringClassReference_110f20038;
        ppuVar7 = (undefined **)0x18;
        ppuVar8 = ppuVar5;
      }
    }
  }
  else {
    uVar3 = (int)ppuVar8 == 2;
    if ((bool)uVar3) {
      func_0x000109099c68();
      func_0x000109099d30();
      ppuVar5 = param_1;
      ppuVar8 = param_1;
      goto LAB_1090996c0;
    }
    ppuVar5 = ppuVar8;
    func_0x000109099d3c();
    func_0x00010bdf85e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = &PTR____CFConstantStringClassReference_110f1fff8;
    ppuVar7 = ppuVar8;
    ppuVar8 = ppuVar5;
  }
  FUN_109097d10(ppuVar6,ppuVar7,ppuVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  func_0x000109099c34();
  ppuVar8 = (undefined **)0x3;
  ppuVar5 = ppuVar6;
LAB_1090996c0:
  iVar4 = (int)ppuVar5;
  func_0x000109099c2c();
  func_0x000109099c14();
  func_0x000109099bf0(uStack_68);
  if ((bool)uVar3) {
    return ppuVar8;
  }
  ___stack_chk_fail();
  func_0x000109097514();
  return (undefined **)
         (ulong)(((iVar4 == 0x66747970 || iVar4 == 0x6d6f6f66) || iVar4 == 0x6d6f6f76) ||
                iVar4 == 0x73696478);
}



/* Entry: 1090998ac; end: 1090998f7;  */

bool FUN_1090998ac(int param_1)

{
  func_0x000109097514();
  return ((param_1 == 0x66747970 || param_1 == 0x6d6f6f66) || param_1 == 0x6d6f6f76) ||
         param_1 == 0x73696478;
}



/* Entry: 1090998f8; end: 10909996f; -[SCNeoMP4StreamParser parseEntireBuffer:error:instruments:] */

long FUN_1090998f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lStack_48;
  
  lVar2 = 0;
  do {
    lStack_48 = 0;
    lVar1 = param_1;
    func_0x00010c0f3ec0(param_1,param_2,param_3,lVar2,&lStack_48,param_5,param_4);
    lVar2 = lStack_48 + lVar2;
  } while (lVar1 == 0);
  lVar2 = 0;
  if (lVar1 != 1) {
    lVar2 = lVar1;
  }
  return lVar2;
}



/* Entry: 109099970; end: 109099b77; -[SCNeoMP4StreamParser _debugDataDictWithBuffer:] */

void FUN_109099970(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  func_0x00010bf51ea0(param_3,param_2,0,0xc00);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c08fa60();
  if (uVar1 < 0xc01) {
    puVar2 = *(undefined **)(param_1 + 8);
    func_0x00010bf51e00();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc();
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf25f00(uVar4);
    func_0x00010bffa160(puVar2,param_2,uVar4,0xc00);
  }
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c08fa60();
  if (uVar1 < 0xc01) {
    puVar3 = *(undefined **)(param_1 + 0x10);
    func_0x00010bf51e00();
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf25f00(uVar4);
    func_0x00010bffa160(puVar3,param_2,uVar4,0xc00);
  }
  uVar1 = *(ulong *)(param_1 + 0x48);
  if (0xbff < uVar1) {
    uVar1 = 0xc00;
  }
  puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778,param_2,*(undefined8 *)(param_1 + 0x38),
                      uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(ulong *)(param_1 + 0x50);
  if (0xbff < uVar1) {
    uVar1 = 0xc00;
  }
  puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778,param_2,*(undefined8 *)(param_1 + 0x40),
                      uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  if (param_3 != 0) {
    func_0x000109099ce4(&PTR_PTR_1132c1748);
    func_0x00010c1d0640();
  }
  func_0x00010c08fa60();
  if (puVar2 != (undefined *)0x0) {
    func_0x000109099ce4(&PTR_PTR_1132c1750);
    func_0x00010c1d0640();
  }
  func_0x00010c08fa60();
  if (puVar3 != (undefined *)0x0) {
    func_0x000109099ce4(&PTR_PTR_1132c1758);
    func_0x00010c1d0640();
  }
  puVar2 = puVar5;
  func_0x00010c08fa60();
  if (puVar2 != (undefined *)0x0) {
    func_0x000109099ce4(&PTR_PTR_1132c1760);
    func_0x00010c1d0640();
  }
  func_0x00010c08fa60();
  if (puVar6 != (undefined *)0x0) {
    func_0x000109099ce4(&PTR_PTR_1132c1768);
    func_0x00010c1d0640();
  }
  puVar2 = puVar7;
  func_0x00010bf51e00(puVar7);
  _objc_release(puVar7);
  func_0x000109099c84();
  _objc_release(puVar5);
  func_0x000109099c48();
  func_0x000109099c2c();
  func_0x000109099c14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 109099b78; end: 109099b8f; -[SCNeoMP4StreamParser delegate] */

void FUN_109099b78(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109099b90; end: 109099b9b; -[SCNeoMP4StreamParser setDelegate:] */

void FUN_109099b90(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x70,param_3);
  return;
}



/* Entry: 109099b9c; end: 109099ba3; -[SCNeoMP4StreamParser shouldParseSPSReorderDepth] */

undefined1 FUN_109099b9c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x68);
}



/* Entry: 109099ba4; end: 109099bab; -[SCNeoMP4StreamParser setShouldParseSPSReorderDepth:] */

void FUN_109099ba4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 109099bac; end: 109099bef; -[SCNeoMP4StreamParser .cxx_destruct] */

void FUN_109099bac(long param_1)

{
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109099bf0; end: 109099d47;  */

void FUN_109099bf0(void)

{
  return;
}



/* Entry: 109099d48; end: 109099dc3; -[SCNeoMediaAV1Codec makeDecoderWithFormatDescription:delegateQueue:instruments:maxDecodingFramesInFlight:discardStaleFramesOnFlush:] */

void FUN_109099d48(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  
  _objc_retain(in_x3);
  _objc_retain(in_x4);
  _objc_alloc(PTR_PTR_1126dd3a8);
  func_0x00010c00b4a0();
  func_0x000109099dd8();
  _objc_release(in_x3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(in_x5);
  return;
}



/* Entry: 109099dc4; end: 109099de3; -[SCNeoMediaAV1Codec supportsCodec:instruments:] */

bool FUN_109099dc4(undefined8 param_1,undefined8 param_2,int param_3)

{
  return param_3 == 0x61763031;
}



/* Entry: 109099de4; end: 109099e13;  */

void FUN_109099de4(long param_1)

{
  if (*(long *)(param_1 + 0xc0) != 0) {
    func_0x000104c21e4c(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 109099e14; end: 109099f2b; -[SCNeoMediaAV1SampleBufferDecoder initWithDelegateQueue:maxDecodingFramesInFlight:instruments:] */

undefined1 *
FUN_109099e14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x00010909ab44();
  func_0x00010909abc4();
  puStack_38 = PTR_PTR_112700418;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010909ab64();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x50) = param_4;
    func_0x00010909abc4();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_5;
    _objc_release(uVar2);
    uVar2 = 0;
    _dispatch_queue_attr_make_with_qos_class(0,0x19,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = &UNK_10f54d9dd;
    _dispatch_queue_create(&UNK_10f54d9dd,uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    func_0x00010909abcc();
    _CMBufferQueueGetCallbacksForUnsortedSampleBuffers();
    uVar4 = 0;
    _CMBufferQueueCreate(0,0,uVar2,(undefined1 *)((long)puVar1 + 0x18));
    if ((int)uVar4 != 0) {
      FUN_109096740(&PTR____CFConstantStringClassReference_110f200d8,uVar4);
    }
    puVar3 = PTR__kCMTimeZero_110348670;
    uVar2 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    *(undefined8 *)((long)puVar1 + 0x40) = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    *(undefined8 *)((long)puVar1 + 0x48) = *(undefined8 *)(puVar3 + 0x10);
  }
  func_0x00010909ab8c();
  func_0x00010909ab3c();
  return (undefined1 *)puVar1;
}



/* Entry: 109099f2c; end: 109099f2f; -[SCNeoMediaAV1SampleBufferDecoder reset] */

void FUN_109099f2c(void)

{
  return;
}



/* Entry: 109099f30; end: 109099fbb; -[SCNeoMediaAV1SampleBufferDecoder dealloc] */

void FUN_109099f30(void)

{
  long unaff_x19;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  
  func_0x00010909ab6c();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    func_0x00010909abb0();
    uStack_40 = 0xc2000000;
    puStack_38 = &UNK_10bdb234c;
    puStack_30 = &UNK_110842e18;
    func_0x000107c27da4(*(undefined8 *)(unaff_x19 + 0x10),auStack_48);
  }
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    _CFRelease();
  }
  _objc_msgSendSuper2(&stack0xffffffffffffffa8,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 109099fbc; end: 109099fe3; -[SCNeoMediaAV1SampleBufferDecoder canAcceptFormatDescription:] */

bool FUN_109099fbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _CMFormatDescriptionGetMediaSubType(param_3);
  return (int)param_3 == 0x61763031;
}



/* Entry: 109099fe4; end: 109099feb; -[SCNeoMediaAV1SampleBufferDecoder setPreferredPixelOutputFormat:] */

undefined8 FUN_109099fe4(void)

{
  return 0;
}



/* Entry: 109099fec; end: 10909a05f; -[SCNeoMediaAV1SampleBufferDecoder flush] */

void FUN_109099fec(void)

{
  undefined *puVar1;
  long unaff_x19;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  
  func_0x00010909ab6c();
  puVar1 = PTR__kCMTimeZero_110348670;
  uVar2 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x48) = *(undefined8 *)(puVar1 + 0x10);
  func_0x00010909abb0();
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10909a060;
  puStack_30 = &UNK_110842e18;
  func_0x000107c27da4(*(undefined8 *)(unaff_x19 + 0x10),auStack_48);
  return;
}



/* Entry: 10909a060; end: 10909a073;  */

void FUN_10909a060(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  
  plVar3 = *(long **)(*(long *)(param_1 + 0x20) + 0x20);
  if (plVar3 == (long *)0x0) {
    return;
  }
  func_0x000104c06fa4(plVar3 + 0x14);
  if (plVar3[0x1e] != 0) {
    func_0x000104c21ed8(plVar3 + 0x1d);
  }
  if (plVar3[0x43] != 0) {
    func_0x000104c21ed8(plVar3 + 0x42);
  }
  *(undefined4 *)(plVar3 + 0x1ece) = 0;
  *(undefined4 *)(plVar3 + 0x1ed6) = 0;
  plVar6 = plVar3 + 0x1862;
  plVar9 = plVar3 + 0x19bb;
  lVar10 = 8;
  do {
    if (plVar6[1] != 0) {
      func_0x000104c21ed8(plVar6);
    }
    func_0x000104c28f7c(plVar6 + 0x25);
    func_0x000104c28f7c(plVar6 + 0x26);
    func_0x000104c06e18(plVar9);
    plVar6 = plVar6 + 0x2b;
    plVar9 = plVar9 + 3;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  plVar3[0xc] = 0;
  plVar3[9] = 0;
  func_0x000104c28f7c(plVar3 + 8);
  plVar3[0x10] = 0;
  plVar3[0xe] = 0;
  plVar3[0x12] = 0;
  *(undefined4 *)(plVar3 + 0x13) = 0;
  func_0x000104c28f7c(plVar3 + 0xf);
  func_0x000104c28f7c(plVar3 + 0xd);
  func_0x000104c28f7c(plVar3 + 0x11);
  func_0x000104c06f74(plVar3 + 0x1ed0);
  if (((int)plVar3[1] != 1) || ((int)plVar3[3] != 1)) {
    *(undefined4 *)plVar3[0x68] = 1;
    if (1 < *(uint *)(plVar3 + 3)) {
      _pthread_mutex_lock(plVar3 + 0x70);
      for (uVar7 = 0; uVar7 < *(uint *)(plVar3 + 3); uVar7 = uVar7 + 1) {
        lVar10 = plVar3[2] + uVar7 * 0x3f2c0;
        while (*(int *)(lVar10 + 0x3f298) == 0) {
          _pthread_cond_wait(lVar10 + 0x3f210,plVar3 + 0x70);
        }
      }
      lVar10 = 0x15b8;
      for (uVar7 = 0; uVar7 < *(uint *)(plVar3 + 1); uVar7 = uVar7 + 1) {
        puVar1 = (undefined8 *)(*plVar3 + lVar10);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined4 *)(puVar1 + 3) = 0;
        puVar1[2] = 0;
        puVar1[0xc] = 0;
        puVar1[0xd] = 0;
        lVar10 = lVar10 + 0x1640;
      }
      *(undefined4 *)(plVar3 + 0x7e) = 0;
      *(uint *)((long)plVar3 + 0x3f4) = *(uint *)(plVar3 + 1);
      *(undefined4 *)(plVar3 + 0x7f) = 0xffffffff;
      *(undefined4 *)((long)plVar3 + 0x3fc) = 0;
      func_0x000104c1c35c();
    }
    uVar4 = *(uint *)(plVar3 + 1);
    if (1 < uVar4) {
      uVar5 = *(uint *)(plVar3 + 0x6a);
      for (uVar8 = 0; uVar8 < uVar4; uVar8 = uVar8 + 1) {
        uVar2 = 0;
        if (uVar5 != uVar4) {
          uVar2 = uVar5;
        }
        lVar10 = *plVar3 + (ulong)uVar2 * 0x1640;
        func_0x000104c0948c(lVar10,0xffffffff);
        *(undefined4 *)(lVar10 + 0xc34) = 0;
        *(undefined4 *)(lVar10 + 0x15a4) = 0;
        if (*(long *)(plVar3[0x69] + (ulong)uVar2 * 0x128 + 8) != 0) {
          func_0x000104c21ed8();
        }
        uVar5 = uVar2 + 1;
        uVar4 = *(uint *)(plVar3 + 1);
      }
      *(undefined4 *)(plVar3 + 0x6a) = 0;
    }
    *(undefined4 *)plVar3[0x68] = 0;
  }
  return;
}



/* Entry: 10909a074; end: 10909a087; -[SCNeoMediaAV1SampleBufferDecoder seekTo:] */

void FUN_10909a074(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x48) = param_3[2];
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  return;
}



/* Entry: 10909a088; end: 10909a117; -[SCNeoMediaAV1SampleBufferDecoder _notifyError:toDelegate:] */

void FUN_10909a088(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x00010909ab44();
  func_0x00010909ab64();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010909abb0();
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10909a118;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_4;
  lStack_40 = param_1;
  uStack_38 = param_3;
  func_0x00010909abc4();
  func_0x00010909ab64();
  func_0x000107c27d8c(uVar1,auStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  func_0x00010909ab8c();
  func_0x00010909ab3c();
  return;
}



/* Entry: 10909a118; end: 10909a127;  */

void FUN_10909a118(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf67490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_decoder_didFailWithError__1125b76c8,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10909a128; end: 10909a1a7; -[SCNeoMediaAV1SampleBufferDecoder _notifySkipBuffer:] */

void FUN_10909a128(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x00010909ab44();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010909abb0();
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10909a1a8;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  lStack_38 = param_1;
  func_0x00010909ab64();
  func_0x000107c27d8c(uVar1,auStack_60);
  _objc_release(uStack_40);
  func_0x00010909ab3c();
  return;
}



/* Entry: 10909a1a8; end: 10909a1b3;  */

void FUN_10909a1a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf674f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_decoderDidSkipBuffer__1125b76e0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10909a1b4; end: 10909a52f; -[SCNeoMediaAV1SampleBufferDecoder _forwardDav1DPicture:toDelegate:flushId:] */

void FUN_10909a1b4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 extraout_x8;
  long unaff_x20;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined1 auStack_150 [8];
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  
  uVar8 = param_4;
  func_0x00010909abe8();
  uStack_58 = extraout_x8;
  _objc_retain(uVar8);
  func_0x00010c1003c0(*(undefined8 *)(unaff_x20 + 0x58));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec6c0();
  func_0x00010909abcc();
  _CMTimeMake(&uStack_110,*(undefined8 *)(param_3 + 0x48),*(undefined4 *)(param_3 + 0x58));
  uStack_e8 = uStack_108;
  uStack_f0 = uStack_110;
  uStack_e0 = uStack_100;
  uStack_68 = *(ulong *)(unaff_x20 + 0x40);
  uStack_70 = *(ulong *)(unaff_x20 + 0x38);
  uStack_60 = *(ulong *)(unaff_x20 + 0x48);
  puVar2 = &uStack_f0;
  _CMTimeCompare(puVar2,&uStack_70);
  if ((int)puVar2 < 0) {
    func_0x00010be650a0();
    goto LAB_10909a3e8;
  }
  lVar3 = 0x110;
  func_0x0001090947e0();
  _memcpy();
  in_ZR = *(int *)(lVar3 + 0x40) == 1;
  if ((bool)in_ZR) {
    in_ZR = *(int *)(lVar3 + 0x44) == 8;
    if (!(bool)in_ZR) goto LAB_10909a338;
    uStack_e0 = *(undefined8 *)(lVar3 + 0x20);
    uStack_70 = (ulong)*(int *)(*(long *)(lVar3 + 8) + 0x198);
    uStack_88 = (ulong)*(int *)(*(long *)(lVar3 + 8) + 0x19c);
    uStack_e8 = *(undefined8 *)(lVar3 + 0x18);
    uStack_f0 = *(undefined8 *)(lVar3 + 0x10);
    uStack_68 = uStack_70 >> 1;
    uStack_80 = uStack_88 >> 1;
    uStack_90 = *(undefined8 *)(lVar3 + 0x30);
    uStack_98 = *(undefined8 *)(lVar3 + 0x30);
    uStack_a0 = *(undefined8 *)(lVar3 + 0x28);
    lStack_f8 = 0;
    param_3 = *(long *)PTR__kCFAllocatorDefault_11034ab78;
    plVar11 = &lStack_f8;
    uVar10 = 0;
    puVar2 = &uStack_a0;
    uVar8 = 0x10909ab0c;
    puVar7 = &uStack_88;
    puVar6 = &uStack_70;
    lVar4 = param_3;
    lVar9 = lVar3;
    uStack_78 = uStack_80;
    uStack_60 = uStack_68;
    _CVPixelBufferCreateWithPlanarBytes();
    lVar1 = lStack_f8;
    if ((int)lVar4 != 0) {
      FUN_1090966fc(&PTR____CFConstantStringClassReference_110f201f8,lVar4);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10909a350;
    }
    if (lStack_f8 != 0) {
      _CMTimeMake(&uStack_f0,*(undefined8 *)(lVar3 + 0x50),*(undefined4 *)(lVar3 + 0x58));
      _CMTimeMake(&uStack_70,*(undefined8 *)(lVar3 + 0x48),*(undefined4 *)(lVar3 + 0x58));
      uStack_d0 = uStack_68;
      uStack_d8 = uStack_70;
      uStack_c8 = uStack_60;
      uStack_b8 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
      uStack_c0 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
      uStack_b0 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 0x10);
      uStack_70 = 0;
      uStack_88 = 0;
      lVar4 = param_3;
      _CMVideoFormatDescriptionCreateForImageBuffer(param_3,lVar1,&uStack_88);
      if (((int)lVar4 == 0) && (uStack_88 != 0)) {
        _CMSampleBufferCreateForImageBuffer
                  (param_3,lVar1,1,0,0,uStack_88,&uStack_f0,&uStack_70,puVar6,puVar7,puVar2,uVar8,
                   lVar9,uVar10,plVar11);
        _CVPixelBufferRelease(lVar1);
        if (((int)param_3 == 0) && (uStack_70 != 0)) {
          _CFRelease(uStack_88);
          param_3 = 0;
          uVar5 = uStack_70;
          goto LAB_10909a358;
        }
        FUN_1090966fc(&PTR____CFConstantStringClassReference_110f201b8,param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010909abe0();
        _CFRelease(uStack_88);
      }
      else {
        FUN_1090966fc(&PTR____CFConstantStringClassReference_110f20198,lVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010909abe0();
        _CVPixelBufferRelease(lVar1);
      }
      goto LAB_10909a354;
    }
    param_3 = 0;
    uVar5 = 0;
  }
  else {
LAB_10909a338:
    FUN_109096480(&PTR____CFConstantStringClassReference_110f201d8,0);
    _objc_retainAutoreleasedReturnValue();
LAB_10909a350:
    func_0x00010909abe0();
LAB_10909a354:
    uVar5 = 0;
  }
LAB_10909a358:
  _objc_retain(param_3);
  if (uVar5 == 0) {
    FUN_109099de4(lVar3);
    func_0x00010909ab84();
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x20 + 8);
    func_0x00010909abb0();
    uStack_148 = 0xc2000000;
    pcStack_140 = FUN_10909a530;
    puStack_138 = &UNK_110844fe0;
    func_0x00010909ab64();
    func_0x000107c27d8c(uVar8,auStack_150);
    _objc_release(param_4);
  }
  _objc_release();
  unaff_x20 = param_3;
LAB_10909a3e8:
  func_0x00010909ab3c();
  func_0x00010909abfc(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(*(long *)(unaff_x20 + 0x20) + 0x28) == *(long *)(unaff_x20 + 0x30)) {
    func_0x00010bf674a0(*(undefined8 *)(unaff_x20 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdba64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFRelease_11034a768)(*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Entry: 10909a530; end: 10909a56f;  */

void FUN_10909a530(long param_1,undefined8 param_2)

{
  if (*(long *)(*(long *)(param_1 + 0x20) + 0x28) == *(long *)(param_1 + 0x30)) {
    func_0x00010bf674a0(*(undefined8 *)(param_1 + 0x28),param_2,*(long *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x38));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdba64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFRelease_11034a768)(*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 10909a570; end: 10909a737; -[SCNeoMediaAV1SampleBufferDecoder _enqueueSampleBufferToDav1d:delegate:] */

bool FUN_10909a570(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uStack_f8;
  undefined8 uStack_e0;
  int iStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  int iStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  lVar2 = param_3;
  _CMSampleBufferGetDataBuffer();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    _CMBlockBufferGetDataPointer();
    if ((int)lVar3 == 0) {
      uStack_60 = 0;
      lStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      puVar4 = &uStack_a0;
      func_0x000104c06e58(puVar4,uStack_50,uStack_48,FUN_10909a738,lVar2);
      if ((int)puVar4 == 0) {
        _CFRetain(lVar2);
        _CMSampleBufferGetPresentationTimeStamp(&uStack_c0,param_3);
        _CMSampleBufferGetDuration(&uStack_e0,param_3);
        if (iStack_b8 != iStack_d8) {
          if (iStack_b8 < iStack_d8) {
            iStack_b8 = iStack_d8;
          }
          func_0x00010909ab4c(uStack_b0);
          uStack_c0 = uStack_f8;
          func_0x00010909ab4c(uStack_d0);
          uStack_e0 = uStack_f8;
        }
        lStack_78 = (long)iStack_b8;
        uStack_88 = uStack_c0;
        uStack_80 = uStack_e0;
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        func_0x000104c1bb14(uVar6,&uStack_a0);
        bVar1 = (int)uVar6 == 0;
        if ((int)uVar6 != 0) {
          func_0x000104c06fa4(&uStack_a0);
          FUN_109096480(&PTR____CFConstantStringClassReference_110f20138,0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010909ab84(param_1);
          func_0x00010909abcc();
        }
        goto LAB_10909a640;
      }
      ppuVar5 = &PTR____CFConstantStringClassReference_110f20118;
      FUN_109096480(&PTR____CFConstantStringClassReference_110f20118,0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar5 = &PTR____CFConstantStringClassReference_110f200f8;
      FUN_1090966fc(&PTR____CFConstantStringClassReference_110f200f8,lVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010909ab84(param_1);
    _objc_release(ppuVar5);
  }
  bVar1 = false;
LAB_10909a640:
  func_0x00010909ab3c();
  return bVar1;
}



/* Entry: 10909a738; end: 10909a73f;  */

void FUN_10909a738(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdba64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFRelease_11034a768)(param_2);
  return;
}



/* Entry: 10909a740; end: 10909a8eb; -[SCNeoMediaAV1SampleBufferDecoder _flushQueueWithDelegate:flushId:] */

void FUN_10909a740(void)

{
  undefined1 in_ZR;
  long lVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined **ppuVar4;
  undefined8 extraout_x8;
  long unaff_x20;
  long *plVar5;
  undefined8 uStack_1b0;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_48;
  
  func_0x00010909abe8();
  uStack_48 = extraout_x8;
  func_0x00010909ab44();
  plVar5 = (long *)(unaff_x20 + 0x20);
  if (*plVar5 == 0) {
    uStack_148 = 0;
    puStack_140 = &UNK_104c217c4;
    puStack_138 = &UNK_104c218b0;
    uStack_130 = 0;
    puStack_128 = &UNK_10bdb0150;
    uStack_118 = 7;
    uStack_120 = 0;
    uStack_158 = 1;
    uStack_160 = 0x200000002;
    uStack_150 = 0x7e900000000001;
    plVar3 = plVar5;
    func_0x00010bdaf87c(plVar5,&uStack_160);
    if ((int)plVar3 != 0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110f20158;
      FUN_109096480(&PTR____CFConstantStringClassReference_110f20158,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010909ab84();
LAB_10909a8bc:
      _objc_release(ppuVar4);
      goto LAB_10909a8c0;
    }
  }
  while( true ) {
    while( true ) {
      _bzero(&uStack_160,0x110);
      lVar1 = *plVar5;
      func_0x000104c1bc28(lVar1,&uStack_160);
      in_ZR = (int)lVar1 == -0x23;
      if ((bool)in_ZR) break;
      if ((int)lVar1 != 0) {
        ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25d9e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar2;
        FUN_109096480();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar2);
        func_0x00010909ab84();
        goto LAB_10909a8bc;
      }
      func_0x00010be18da0();
    }
    lVar1 = *(long *)(unaff_x20 + 0x18);
    _CMBufferQueueDequeueAndRetain();
    if (lVar1 == 0) break;
    func_0x00010be0a200();
    _CFRelease(lVar1);
  }
LAB_10909a8c0:
  func_0x00010909ab3c();
  func_0x00010909abfc(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010909ab94();
  func_0x00010909ab20(0xc2000000);
  func_0x00010909abd4();
  _objc_release(uStack_1b0);
  func_0x00010909ab8c();
  return;
}



/* Entry: 10909a8ec; end: 10909a93f; -[SCNeoMediaAV1SampleBufferDecoder endOfStream] */

void FUN_10909a8ec(void)

{
  undefined8 uStack_40;
  
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010909ab94();
  func_0x00010909ab20(0xc2000000);
  func_0x00010909abd4();
  _objc_release(uStack_40);
  func_0x00010909ab8c();
  return;
}



/* Entry: 10909a940; end: 10909a94f;  */

void FUN_10909a940(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be063f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__drainAtEOSWithDelegate_flushId__11255f298,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10909a950; end: 10909a9d3; -[SCNeoMediaAV1SampleBufferDecoder _drainAtEOSWithDelegate:flushId:] */

void FUN_10909a950(long param_1)

{
  long lVar1;
  undefined1 auStack_150 [272];
  
  func_0x00010909ab44();
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    while( true ) {
      _bzero(auStack_150,0x110);
      func_0x000104c1bc28(lVar1,auStack_150);
      if ((int)lVar1 != 0) break;
      func_0x00010be18da0(param_1);
      lVar1 = *(long *)(param_1 + 0x20);
    }
  }
  func_0x00010909ab3c();
  return;
}



/* Entry: 10909a9d4; end: 10909aa37; -[SCNeoMediaAV1SampleBufferDecoder enqueueSampleBuffer:] */

void FUN_10909a9d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  
  _CMBufferQueueEnqueue(*(undefined8 *)(param_1 + 0x18),param_3);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010909ab94();
  func_0x00010909ab20(0xc2000000);
  func_0x00010909abd4();
  _objc_release(uStack_40);
  func_0x00010909ab8c();
  return;
}



/* Entry: 10909aa38; end: 10909aa47;  */

void FUN_10909aa38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be18330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__flushQueueWithDelegate_flushId__112563a68,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10909aa48; end: 10909aa77; -[SCNeoMediaAV1SampleBufferDecoder isReadyForMoreSampleBuffer] */

bool FUN_10909aa48(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  _CMBufferQueueGetBufferCount(uVar1);
  return uVar1 < *(ulong *)(param_1 + 0x50);
}



/* Entry: 10909aa78; end: 10909aaa3; -[SCNeoMediaAV1SampleBufferDecoder setDelegate:] */

void FUN_10909aa78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010909ab44();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10909aaa4; end: 10909aac7; -[SCNeoMediaAV1SampleBufferDecoder delegate] */

void FUN_10909aaa4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010909ab64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10909aac8; end: 10909aacf; -[SCNeoMediaAV1SampleBufferDecoder status] */

undefined8 FUN_10909aac8(void)

{
  return 0;
}



/* Entry: 10909aad0; end: 10909ab0b; -[SCNeoMediaAV1SampleBufferDecoder .cxx_destruct] */

void FUN_10909aad0(long param_1)

{
  func_0x00010909abbc(param_1 + 0x58);
  func_0x00010909abbc(param_1 + 0x30);
  func_0x00010909abbc(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10909ab0c; end: 10909ac0f;  */

void FUN_10909ab0c(long param_1)

{
  if (*(long *)(param_1 + 0xc0) != 0) {
    func_0x000104c21e4c(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 10909ac10; end: 10909acab; -[SCNeoMediaAssetConfiguration initWithMinimumBufferSizeSeconds:maximumBufferSizeSeconds:bufferCleanupThreasholdSeconds:firstChunkSizeBytes:chunkSizeBytes:maxChunkSizeBytes:bufferSizeForPlaybackSeconds:bufferSizeForPlaybackAfterRebufferSeconds:disableChunkedLoads:] */

void FUN_10909ac10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined8 *puVar1;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  puStack_68 = PTR_PTR_112700420;
  uStack_70 = param_6;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
    *(undefined8 *)((long)puVar1 + 0x38) = param_10;
    *(undefined8 *)((long)puVar1 + 0x40) = param_4;
    *(undefined8 *)((long)puVar1 + 0x48) = param_5;
    *(undefined1 *)((long)puVar1 + 8) = param_11;
  }
  return;
}



/* Entry: 10909acac; end: 10909acff; +[SCNeoMediaAssetConfiguration makeTestConfigurationWithBufferSizeForPlaybackSeconds:bufferSizeForPlaybackAfterRebufferSeconds:] */

void FUN_10909acac(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc(PTR_PTR_1126dd3b0);
  func_0x00010c02c1a0(0x3ff0000000000000,0x4020000000000000,0x403e000000000000,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10909ad00; end: 10909ad07; -[SCNeoMediaAssetConfiguration minimumBufferSizeSeconds] */

undefined8 FUN_10909ad00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10909ad08; end: 10909ad0f; -[SCNeoMediaAssetConfiguration maximumBufferSizeSeconds] */

undefined8 FUN_10909ad08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10909ad10; end: 10909ad17; -[SCNeoMediaAssetConfiguration bufferCleanupThreasholdSeconds] */

undefined8 FUN_10909ad10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10909ad18; end: 10909ad1f; -[SCNeoMediaAssetConfiguration firstChunkSizeBytes] */

undefined8 FUN_10909ad18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10909ad20; end: 10909ad27; -[SCNeoMediaAssetConfiguration chunkSizeBytes] */

undefined8 FUN_10909ad20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10909ad28; end: 10909ad2f; -[SCNeoMediaAssetConfiguration maxChunkSizeBytes] */

undefined8 FUN_10909ad28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10909ad30; end: 10909ad37; -[SCNeoMediaAssetConfiguration bufferSizeForPlaybackSeconds] */

undefined8 FUN_10909ad30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10909ad38; end: 10909ad3f; -[SCNeoMediaAssetConfiguration bufferSizeForPlaybackAfterRebufferSeconds] */

undefined8 FUN_10909ad38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10909ad40; end: 10909ad47; -[SCNeoMediaAssetConfiguration disableChunkedLoads] */

undefined1 FUN_10909ad40(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10909ad48; end: 10909ad9f; -[SCNeoMediaBandwidthMetrics initWithLoadLatency:downloadedSize:] */

void FUN_10909ad48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112700428;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 10909ada0; end: 10909ada7; -[SCNeoMediaBandwidthMetrics loadLatency] */

undefined8 FUN_10909ada0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10909ada8; end: 10909adaf; -[SCNeoMediaBandwidthMetrics downloadedSize] */

undefined8 FUN_10909ada8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10909adb0; end: 10909ae37; -[SCNeoMediaBandwidthCalculator init] */

undefined1 * FUN_10909adb0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112700430;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10909ae38; end: 10909aec3; -[SCNeoMediaBandwidthCalculator addLoadLatency:forDownloadedSize:] */

void FUN_10909ae38(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  puVar1 = PTR_PTR_1126dd3b8;
  _objc_alloc(PTR_PTR_1126dd3b8);
  func_0x00010c0265c0(param_1);
  func_0x00010befa120(*(undefined8 *)(param_2 + 8),param_3,puVar1);
  while( true ) {
    uVar2 = *(ulong *)(param_2 + 8);
    func_0x00010bf529e0();
    if (uVar2 < 0x11) break;
    func_0x00010c12d3c0(*(undefined8 *)(param_2 + 8),param_3,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10909aec4; end: 10909aecb; -[SCNeoMediaBandwidthCalculator clear] */

void FUN_10909aec4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10909aecc; end: 10909b007; -[SCNeoMediaBandwidthCalculator computeBandwidth] */

void FUN_10909aecc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar9 = 0.0;
  uVar5 = *(ulong *)(param_1 + 8);
  uVar1 = uVar5;
  _objc_retain();
  func_0x00010909b014();
  lVar3 = lRam0000000000000000;
  if (uVar1 == 0) {
    func_0x00010909b028();
  }
  else {
    uVar7 = 0;
    dVar10 = 0.0;
    do {
      uVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(uVar5);
        }
        uVar6 = *(ulong *)(uVar8 * 8);
        uVar2 = uVar6;
        func_0x00010bf892e0(uVar6);
        func_0x00010c09b820();
        uVar7 = uVar2 + uVar7;
        dVar10 = dVar10 + dVar9;
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar1);
      func_0x00010909b014();
      uVar1 = uVar6;
    } while (uVar6 != 0);
    func_0x00010909b028();
    if (0.0 < dVar10) {
      lVar3 = (long)((double)uVar7 / dVar10);
      goto LAB_10909afac;
    }
  }
  lVar3 = 0;
LAB_10909afac:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail(lVar3);
  func_0x00010909b028();
  __Unwind_Resume(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar3 + 8,0);
  return;
}



/* Entry: 10909b008; end: 10909b02f; -[SCNeoMediaBandwidthCalculator .cxx_destruct] */

void FUN_10909b008(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10909b030; end: 10909b0f7; -[SCNeoMediaBuffer initWithChunkManager:] */

undefined1 * FUN_10909b030(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  long unaff_x19;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x00010909b670();
  func_0x00010909b6cc();
  puVar4 = &stack0xffffffffffffffc0;
  _objc_msgSendSuper2(puVar4,PTR_s_init_1125d9248);
  if (puVar4 != (undefined1 *)0x0) {
    func_0x00010c067b40();
    if (unaff_x19 != 0) {
      plVar1 = (long *)(unaff_x19 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10909b5b0(auStack_48,auStack_50);
    func_0x00010909b6ac();
    FUN_10909b5e4(auStack_48);
    FUN_10909b564(auStack_50);
  }
  func_0x00010909b68c();
  return puVar4;
}



/* Entry: 10909b0f8; end: 10909b133;  */

undefined8 * FUN_10909b0f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    uVar2 = *param_2;
    *param_2 = 0;
    uVar1 = *param_1;
    *param_1 = uVar2;
    FUN_10909b60c(uVar1);
  }
  return param_1;
}



/* Entry: 10909b134; end: 10909b19b; -[SCNeoMediaBuffer initWithInstance:] */

undefined8 * FUN_10909b134(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lStack_38;
  undefined8 auStack_30 [2];
  
  func_0x00010909b6cc();
  puVar4 = auStack_30;
  auStack_30[0] = param_1;
  _objc_msgSendSuper2(puVar4,PTR_s_init_1125d9248);
  if (puVar4 != (undefined8 *)0x0) {
    if (param_3 != 0) {
      plVar1 = (long *)(param_3 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lStack_38 = param_3;
    func_0x00010909b6ac();
    FUN_10909b5e4(&lStack_38);
  }
  return puVar4;
}



/* Entry: 10909b19c; end: 10909b27b; -[SCNeoMediaBuffer initWithInstruments:] */

undefined1 * FUN_10909b19c(void)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x00010909b670();
  func_0x00010909b6cc();
  puVar1 = &stack0xffffffffffffffc0;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    func_0x00010c067b40();
    func_0x0001090958b8();
    FUN_10909b630(auStack_58,auStack_48);
    FUN_10909b5b0(auStack_50,auStack_58);
    FUN_10909b0f8(puVar1 + 8,auStack_50);
    FUN_10909b5e4(auStack_50);
    FUN_10909b564(auStack_58);
    FUN_1090958e8(auStack_48);
  }
  func_0x00010909b68c();
  return puVar1;
}



/* Entry: 10909b27c; end: 10909b2ab; -[SCNeoMediaBuffer dealloc] */

void FUN_10909b27c(undefined8 param_1)

{
  undefined8 auStack_20 [2];
  
  func_0x00010909b6cc();
  auStack_20[0] = param_1;
  _objc_msgSendSuper2(auStack_20,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10909b2ac; end: 10909b2b3; -[SCNeoMediaBuffer lastPosition] */

long FUN_10909b2ac(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10);
  if (*(long *)(lVar1 + 0x70) != *(long *)(lVar1 + 0x78)) {
    FUN_1090ddbd0();
    return *(long *)(lVar1 + 0x40) + *(long *)(lVar1 + 0x30) * *(long *)(lVar1 + 0x38);
  }
  return 0;
}



/* Entry: 10909b2b4; end: 10909b2bf; -[SCNeoMediaBuffer chunkSize] */

undefined8 FUN_10909b2b4(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 8) + 0x18);
}



/* Entry: 10909b2c0; end: 10909b2cb; -[SCNeoMediaBuffer setChunkSize:] */

void FUN_10909b2c0(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  int extraout_w10;
  long lVar5;
  
  lVar3 = *(long *)(param_1 + 8);
  if (*(long *)(lVar3 + 0x18) == param_3) {
    return;
  }
  *(long *)(lVar3 + 0x18) = param_3;
  lVar3 = *(long *)(lVar3 + 0x10);
  if (*(long *)(lVar3 + 0x28) != param_3) {
    *(long *)(lVar3 + 0x28) = param_3;
    while (*(long *)(lVar3 + 0x70) != *(long *)(lVar3 + 0x78)) {
      plVar4 = (long *)(lVar3 + 0x40);
      FUN_1090dddcc();
      lVar5 = *plVar4;
      if (lVar5 != 0) {
        do {
          func_0x0001090df3f0();
        } while (extraout_w10 != 0);
      }
      func_0x0001090ddc90(lVar3,lVar5);
      plVar4 = (long *)(lVar5 + 8);
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 + -1 == 0) {
        func_0x0001090df390();
      }
    }
    return;
  }
  return;
}



/* Entry: 10909b2cc; end: 10909b313; -[SCNeoMediaBuffer appendData:] */

void FUN_10909b2cc(void)

{
  func_0x00010909b670();
  func_0x00010c089aa0();
  func_0x00010c066700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10909b314; end: 10909b36f; -[SCNeoMediaBuffer insertData:atPosition:] */

void FUN_10909b314(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10909b370;
  puStack_28 = &UNK_110ad7750;
  uStack_20 = param_1;
  uStack_18 = param_4;
  func_0x00010bf97b40(param_3,param_2,&puStack_40);
  return;
}



/* Entry: 10909b370; end: 10909b3d7;  */

void FUN_10909b370(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  undefined1 *puVar3;
  long lVar4;
  long *plVar5;
  int extraout_w10;
  long lVar6;
  undefined1 auStack_28 [16];
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001090dcea8(auStack_28,*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),param_2,param_4,
                      *(long *)(param_1 + 0x28) + param_3);
  puVar3 = auStack_28;
  func_0x0001080c6234();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    lVar4 = *(long *)(*(long *)(puVar3 + 8) + 0x10);
    while (*(long *)(lVar4 + 0x70) != *(long *)(lVar4 + 0x78)) {
      plVar5 = (long *)(lVar4 + 0x40);
      FUN_1090dddcc();
      lVar6 = *plVar5;
      if (lVar6 != 0) {
        do {
          func_0x0001090df3f0();
        } while (extraout_w10 != 0);
      }
      func_0x0001090ddc90(lVar4,lVar6);
      plVar5 = (long *)(lVar6 + 8);
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 + -1 == 0) {
        func_0x0001090df390();
      }
    }
    return;
  }
  return;
}



/* Entry: 10909b3d8; end: 10909b3df; -[SCNeoMediaBuffer clear] */

void FUN_10909b3d8(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  int extraout_w10;
  long lVar5;
  
  lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x10);
  while (*(long *)(lVar3 + 0x70) != *(long *)(lVar3 + 0x78)) {
    plVar4 = (long *)(lVar3 + 0x40);
    FUN_1090dddcc();
    lVar5 = *plVar4;
    if (lVar5 != 0) {
      do {
        func_0x0001090df3f0();
      } while (extraout_w10 != 0);
    }
    func_0x0001090ddc90(lVar3,lVar5);
    plVar4 = (long *)(lVar5 + 8);
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 + -1 == 0) {
      func_0x0001090df390();
    }
  }
  return;
}



/* Entry: 10909b3e0; end: 10909b3e7; -[SCNeoMediaBuffer setDidReachEndOfFile] */

void FUN_10909b3e0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = lVar1;
  func_0x0001090dce70();
  *(long *)(lVar1 + 0x20) = lVar2;
  *(undefined1 *)(lVar1 + 0x28) = 1;
  return;
}



/* Entry: 10909b3e8; end: 10909b3f3; -[SCNeoMediaBuffer lengthAtPosition:] */

long FUN_10909b3e8(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  undefined1 auStack_50 [16];
  long lStack_40;
  
  lVar1 = *(long *)(param_1 + 8);
  iVar5 = 0;
  uVar3 = *(ulong *)(lVar1 + 0x18);
  uVar4 = 0;
  if (uVar3 != 0) {
    uVar4 = param_3 / uVar3;
  }
  while( true ) {
    lVar2 = *(long *)(lVar1 + 0x10);
    func_0x0001090dda08(lVar2,uVar4);
    if ((lVar2 == 0) || (FUN_1090dd7cc(auStack_50), lStack_40 == 0)) break;
    iVar5 = iVar5 + (int)lStack_40;
    uVar4 = uVar4 + 1;
  }
  return (long)iVar5;
}



/* Entry: 10909b3f4; end: 10909b41b; -[SCNeoMediaBuffer isEndOfFileAtPosition:] */

bool FUN_10909b3f4(long param_1,undefined8 param_2,ulong param_3)

{
  if (*(char *)(*(long *)(param_1 + 8) + 0x28) == '\x01') {
    return *(ulong *)(*(long *)(param_1 + 8) + 0x20) <= param_3;
  }
  return false;
}



/* Entry: 10909b41c; end: 10909b42f; -[SCNeoMediaBuffer setEndOfFileAtPosition:] */

void FUN_10909b41c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  *(undefined8 *)(lVar1 + 0x20) = param_3;
  *(undefined1 *)(lVar1 + 0x28) = 1;
  return;
}



/* Entry: 10909b430; end: 10909b43f; -[SCNeoMediaBuffer containsRange:] */

/* WARNING: Possible PIC construction at 0x0001090dd2ec: Changing call to branch */

undefined8 * FUN_10909b430(long param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *puVar9;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  puVar6 = (undefined8 *)(param_4 + (long)param_3);
  puVar10 = &stack0xfffffffffffffff0;
  func_0x0001090dd76c();
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_58 = 0x1090dd43c;
  ppuStack_50 = &PTR_DAT_110a21c28;
  puVar8 = &uStack_58;
  uStack_28 = extraout_x8;
  func_0x0001090dd0f4();
  puVar3 = puVar2;
  func_0x0001090dd788(ppuStack_50);
  func_0x0001090dd734(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  uVar11 = 0x1090dd238;
  ___stack_chk_fail();
  puVar1 = auStack_60;
  puVar9 = &uStack_58;
  while( true ) {
    puVar7 = puVar6;
    puVar5 = param_3;
    *(undefined8 **)(puVar1 + -0x20) = puVar9;
    *(undefined8 **)(puVar1 + -0x18) = puVar2;
    *(undefined1 **)(puVar1 + -0x10) = puVar10;
    *(undefined8 *)(puVar1 + -8) = uVar11;
    func_0x0001090dd76c();
    *(undefined8 *)(puVar1 + -0x28) = extraout_x8_00;
    *(undefined8 **)(puVar1 + -0x68) = puVar5;
    *(undefined8 **)(puVar1 + -0x60) = puVar8;
    *(undefined8 *)(puVar1 + -0x58) = 0x1090dd588;
    *(undefined ***)(puVar1 + -0x50) = &PTR_DAT_110ad9c38;
    *(undefined1 **)(puVar1 + -0x48) = puVar1 + -0x60;
    *(undefined1 **)(puVar1 + -0x40) = puVar1 + -0x68;
    puVar8 = (undefined8 *)(puVar1 + -0x58);
    func_0x0001090dd0f4();
    puVar4 = puVar3;
    func_0x0001090dd788(*(undefined8 *)(puVar1 + -0x50));
    func_0x0001090dd734(*(undefined8 *)(puVar1 + -0x28));
    if ((bool)in_ZR) {
      return puVar3;
    }
    ___stack_chk_fail();
    *(undefined8 **)(puVar1 + -0xa0) = unaff_x22;
    *(undefined8 **)(puVar1 + -0x98) = unaff_x21;
    *(undefined1 **)(puVar1 + -0x90) = puVar1 + -0x58;
    *(undefined8 **)(puVar1 + -0x88) = puVar3;
    *(undefined1 **)(puVar1 + -0x80) = puVar1 + -0x10;
    *(undefined8 *)(puVar1 + -0x78) = 0x1090dd2b0;
    puVar10 = puVar1 + -0x80;
    puVar3 = puVar4;
    param_3 = puVar5;
    func_0x0001090dd054();
    in_ZR = puVar8 == puVar3;
    unaff_x22 = puVar8;
    if (puVar3 <= puVar8) {
      unaff_x22 = puVar3;
    }
    if (unaff_x22 == (undefined8 *)0x0) break;
    puVar6 = (undefined8 *)((long)unaff_x22 + (long)puVar5);
    func_0x0001090dd7a8();
    uVar11 = 0x1090dd2f0;
    puVar1 = puVar1 + -0xa0;
    puVar8 = puVar7;
    puVar2 = puVar7;
    puVar9 = puVar5;
    unaff_x21 = puVar4;
  }
  return (undefined8 *)0x0;
}



/* Entry: 10909b440; end: 10909b453; -[SCNeoMediaBuffer copyDataInRange:intoBuffer:] */

/* WARNING: Possible PIC construction at 0x0001090dd2ec: Changing call to branch */

undefined1 *
FUN_10909b440(long param_1,undefined8 param_2,long param_3,long param_4,undefined1 *param_5)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 extraout_x8;
  undefined1 *unaff_x19;
  long unaff_x20;
  undefined1 *unaff_x21;
  undefined1 *unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar2 = *(undefined1 **)(param_1 + 8);
  puVar1 = (undefined1 *)register0x00000008;
  puVar6 = (undefined1 *)(param_4 + param_3);
  while( true ) {
    puVar5 = puVar6;
    lVar4 = param_3;
    *(long *)(puVar1 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar1 + -8) = unaff_x30;
    func_0x0001090dd76c();
    *(undefined8 *)(puVar1 + -0x28) = extraout_x8;
    *(long *)(puVar1 + -0x68) = lVar4;
    *(undefined1 **)(puVar1 + -0x60) = param_5;
    *(undefined8 *)(puVar1 + -0x58) = 0x1090dd588;
    *(undefined ***)(puVar1 + -0x50) = &PTR_DAT_110ad9c38;
    *(undefined1 **)(puVar1 + -0x48) = puVar1 + -0x60;
    *(undefined1 **)(puVar1 + -0x40) = puVar1 + -0x68;
    puVar6 = puVar1 + -0x58;
    func_0x0001090dd0f4();
    puVar3 = puVar2;
    func_0x0001090dd788(*(undefined8 *)(puVar1 + -0x50));
    func_0x0001090dd734(*(undefined8 *)(puVar1 + -0x28));
    if ((bool)in_ZR) {
      return puVar2;
    }
    ___stack_chk_fail();
    *(undefined1 **)(puVar1 + -0xa0) = unaff_x22;
    *(undefined1 **)(puVar1 + -0x98) = unaff_x21;
    *(undefined1 **)(puVar1 + -0x90) = puVar1 + -0x58;
    *(undefined1 **)(puVar1 + -0x88) = puVar2;
    *(undefined1 **)(puVar1 + -0x80) = puVar1 + -0x10;
    *(undefined8 *)(puVar1 + -0x78) = 0x1090dd2b0;
    unaff_x29 = puVar1 + -0x80;
    puVar2 = puVar3;
    param_3 = lVar4;
    func_0x0001090dd054();
    in_ZR = puVar6 == puVar2;
    unaff_x22 = puVar6;
    if (puVar2 <= puVar6) {
      unaff_x22 = puVar2;
    }
    if (unaff_x22 == (undefined1 *)0x0) break;
    puVar6 = unaff_x22 + lVar4;
    func_0x0001090dd7a8();
    unaff_x30 = 0x1090dd2f0;
    puVar1 = puVar1 + -0xa0;
    param_5 = puVar5;
    unaff_x19 = puVar5;
    unaff_x20 = lVar4;
    unaff_x21 = puVar3;
  }
  return (undefined1 *)0x0;
}



/* Entry: 10909b454; end: 10909b467; -[SCNeoMediaBuffer copyDataAtPosition:intoBuffer:bufferLength:] */

ulong FUN_10909b454(long param_1)

{
  ulong uVar1;
  ulong in_x4;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x0001090dd054();
  if (uVar1 <= in_x4) {
    in_x4 = uVar1;
  }
  if (in_x4 != 0) {
    func_0x0001090dd7a8();
    func_0x0001090dd238();
  }
  return in_x4;
}



/* Entry: 10909b468; end: 10909b4ab; -[SCNeoMediaBuffer copyDataInRange:] */

void FUN_10909b468(void)

{
  undefined1 auStack_38 [24];
  
  func_0x00010909b694();
  func_0x0001090dd304();
  FUN_1090959f8(auStack_38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010909b664();
  return;
}



/* Entry: 10909b4ac; end: 10909b4eb; -[SCNeoMediaBuffer copyDataAtPosition:] */

void FUN_10909b4ac(void)

{
  undefined1 auStack_38 [24];
  
  func_0x00010909b694();
  func_0x0001090dd38c();
  FUN_1090959f8(auStack_38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010909b664();
  return;
}



/* Entry: 10909b4ec; end: 10909b52f; -[SCNeoMediaBuffer copyDataAtPosition:maxLength:] */

void FUN_10909b4ec(void)

{
  undefined1 auStack_38 [24];
  
  func_0x00010909b694();
  func_0x0001090dd3c8();
  FUN_1090959f8(auStack_38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010909b664();
  return;
}



/* Entry: 10909b530; end: 10909b553; -[SCNeoMediaBuffer setRetainedDataRange:] */

void FUN_10909b530(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10);
  uVar2 = *(ulong *)(*(long *)(param_1 + 8) + 0x18);
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = param_3 / uVar2;
  }
  uVar4 = 0;
  if (uVar2 != 0) {
    uVar4 = ((param_3 + param_4 + uVar2) - 1) / uVar2;
  }
  *(ulong *)(lVar1 + 0x30) = uVar3;
  *(ulong *)(lVar1 + 0x38) = uVar4;
  return;
}



/* Entry: 10909b554; end: 10909b55b; -[SCNeoMediaBuffer .cxx_destruct] */

undefined8 * FUN_10909b554(long param_1)

{
  FUN_10909b60c(*(undefined8 *)(param_1 + 8));
  return (undefined8 *)(param_1 + 8);
}



/* Entry: 10909b55c; end: 10909b563; -[SCNeoMediaBuffer .cxx_construct] */

void FUN_10909b55c(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 10909b564; end: 10909b58b;  */

undefined8 * FUN_10909b564(undefined8 *param_1)

{
  FUN_10909b58c(*param_1);
  return param_1;
}



/* Entry: 10909b58c; end: 10909b5af;  */

void FUN_10909b58c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010909b6c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10909b5b0; end: 10909b5e3;  */

void FUN_10909b5b0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x30;
  __Znwm();
  FUN_1090dcdbc();
  *param_1 = uVar1;
  return;
}



/* Entry: 10909b5e4; end: 10909b60b;  */

undefined8 * FUN_10909b5e4(undefined8 *param_1)

{
  FUN_10909b60c(*param_1);
  return param_1;
}



/* Entry: 10909b60c; end: 10909b62f;  */

void FUN_10909b60c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010909b6c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10909b630; end: 10909b663;  */

void FUN_10909b630(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x78;
  __Znwm();
  FUN_1090ddf3c();
  *param_1 = uVar1;
  return;
}



/* Entry: 10909b664; end: 10909b6d7;  */

undefined8 FUN_10909b664(undefined8 param_1)

{
  long *plVar1;
  
  plVar1 = (long *)&stack0x00000008;
  func_0x0001003adc0c();
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  return param_1;
}



/* Entry: 10909b6d8; end: 10909b767; -[SCNeoMediaBufferChunkManager initWithInstruments:] */

undefined1 * FUN_10909b6d8(void)

{
  undefined1 *puVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [16];
  
  func_0x00010909bcc0();
  func_0x00010909bce8();
  puVar1 = auStack_40;
  _objc_msgSendSuper2();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x00010c067b40();
    func_0x0001090958b8();
    FUN_10909b630(auStack_50,auStack_48);
    func_0x00010909bd24();
    FUN_10909b564(auStack_50);
    func_0x00010909bcb8();
  }
  func_0x00010909bca8();
  return puVar1;
}


