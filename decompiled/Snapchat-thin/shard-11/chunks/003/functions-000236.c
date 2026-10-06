/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10844fdd0; end: 10844fdff; -[SCMultiSnapIndividualEditingState activeMusicSelection] */

void FUN_10844fdd0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x88);
  }
  _objc_retain(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10844fe00; end: 10844fedb; -[SCMultiSnapIndividualEditingState hasAudioVisualEdits] */

bool FUN_10844fe00(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010bf529e0();
  if ((lVar2 == 0) && (*(long *)(param_1 + 0x18) == 0)) {
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      lVar2 = *(long *)(param_1 + 0x48);
      func_0x00010bf529e0();
      if (((lVar2 == 0) && (*(long *)(param_1 + 0x40) == 0)) && (*(char *)(param_1 + 9) == '\x01'))
      {
        uVar3 = *(ulong *)(param_1 + 0x30);
        func_0x00010bf04980();
        if ((uVar3 & 1) == 0) {
          lVar2 = *(long *)(param_1 + 0x30);
          func_0x00010c091860();
          _objc_retainAutoreleasedReturnValue();
          if (((lVar2 == 0) &&
              ((lVar4 = *(long *)(param_1 + 0x58), lVar4 == 0 ||
               (func_0x00010c072080(lVar4,param_2,*(undefined8 *)(param_1 + 0x60)), (int)lVar4 != 0)
               ))) && ((*(long *)(param_1 + 0x80) == 0 &&
                       (((*(long *)(param_1 + 0x20) == 0 && (*(long *)(param_1 + 0x78) == 0)) &&
                        (*(long *)(param_1 + 0x70) == 0)))))) {
            bVar1 = *(long *)(param_1 + 0xa0) != 0;
          }
          else {
            bVar1 = true;
          }
          _objc_release(lVar2);
          return bVar1;
        }
      }
    }
  }
  return true;
}



/* Entry: 10844fedc; end: 10844ff23; -[SCMultiSnapIndividualEditingState hasEdits] */

bool FUN_10844fedc(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = param_1;
  func_0x00010bfd4520();
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x38);
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      lVar2 = *(long *)(param_1 + 0x68);
      func_0x00010bf529e0(lVar2);
      return lVar2 != 0;
    }
  }
  return true;
}



/* Entry: 10844ff24; end: 108450403; -[SCMultiSnapIndividualEditingState isEquivalentTo:] */

long FUN_10844ff24(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  long lVar20;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar20 = 0;
    goto LAB_1084503d8;
  }
  uVar15 = *(undefined8 *)(param_1 + 0x10);
  lVar2 = param_3;
  func_0x00010bf308c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108451380(uVar15,lVar2);
  if ((int)uVar15 == 0) {
    lVar20 = 0;
  }
  else {
    uVar15 = *(undefined8 *)(param_1 + 0x28);
    lVar3 = param_3;
    func_0x00010c2553e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10845177c(uVar15,lVar3);
    if ((int)uVar15 == 0) {
      lVar20 = 0;
    }
    else {
      uVar15 = *(undefined8 *)(param_1 + 0x58);
      lVar4 = param_3;
      func_0x00010bf5c9c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      FUN_108451804(uVar15,lVar4);
      if ((int)uVar15 == 0) {
        lVar20 = 0;
      }
      else {
        lVar16 = *(long *)(param_1 + 0x18);
        lVar5 = param_3;
        func_0x00010bf11400();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(lVar16);
        _objc_retain(lVar5);
        if (lVar16 == lVar5) {
          _objc_release(lVar5);
          _objc_release(lVar16);
LAB_108450060:
          lVar17 = *(long *)(param_1 + 0x30);
          lVar16 = param_3;
          func_0x00010bfaee40();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(lVar17);
          _objc_retain(lVar16);
          if (lVar17 == lVar16) {
            _objc_release(lVar16);
            _objc_release(lVar17);
LAB_1084500d0:
            lVar18 = *(long *)(param_1 + 0x48);
            lVar17 = param_3;
            func_0x00010bf8a020();
            _objc_retainAutoreleasedReturnValue();
            _objc_retain(lVar18);
            _objc_retain(lVar17);
            if (lVar18 == 0 && lVar17 == 0) {
              _objc_release(0);
              _objc_release(0);
LAB_108450110:
              uVar15 = *(undefined8 *)(param_1 + 0x40);
              lVar18 = param_3;
              func_0x00010bf0f140(param_3);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bd86e5c(uVar15,lVar18);
              if (((int)uVar15 != 0) &&
                 (bVar1 = *(byte *)(param_1 + 9), lVar20 = param_3, func_0x00010bf0f0e0(),
                 (uint)bVar1 == (uint)lVar20)) {
                iVar19 = (int)*(undefined8 *)(param_1 + 0x68);
                lVar6 = param_3;
                func_0x00010bfc0e60();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bd86ed0();
                if (iVar19 == 0) {
                  lVar20 = 0;
                }
                else {
                  iVar19 = (int)*(undefined8 *)(param_1 + 0x80);
                  lVar7 = param_3;
                  func_0x00010c0d36c0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bd86de8();
                  if (iVar19 == 0) {
                    lVar20 = 0;
                  }
                  else {
                    iVar19 = (int)*(undefined8 *)(param_1 + 0x88);
                    lVar8 = param_3;
                    func_0x00010bf16100();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bd86de8();
                    if (iVar19 == 0) {
                      lVar20 = 0;
                    }
                    else {
                      iVar19 = (int)*(undefined8 *)(param_1 + 0x20);
                      lVar9 = param_3;
                      func_0x00010c2a09a0();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010bd86de8();
                      if (iVar19 == 0) {
                        lVar20 = 0;
                      }
                      else {
                        iVar19 = (int)*(undefined8 *)(param_1 + 0x90);
                        lVar10 = param_3;
                        func_0x00010c09a760();
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010bd86de8();
                        if (iVar19 == 0) {
                          lVar20 = 0;
                        }
                        else {
                          iVar19 = (int)*(undefined8 *)(param_1 + 0x98);
                          lVar11 = param_3;
                          func_0x00010c1115c0();
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010bd86de8();
                          if (iVar19 == 0) {
                            lVar20 = 0;
                          }
                          else {
                            iVar19 = (int)*(undefined8 *)(param_1 + 0x78);
                            lVar12 = param_3;
                            func_0x00010c0cece0();
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010bd86de8();
                            if (iVar19 == 0) {
                              lVar20 = 0;
                            }
                            else {
                              iVar19 = (int)*(undefined8 *)(param_1 + 0x70);
                              lVar13 = param_3;
                              func_0x00010c0ced00();
                              _objc_retainAutoreleasedReturnValue();
                              func_0x00010bd86de8();
                              if (iVar19 == 0) {
                                lVar20 = 0;
                              }
                              else {
                                lVar20 = *(long *)(param_1 + 0xa0);
                                lVar14 = param_3;
                                func_0x00010c27d220(param_3);
                                _objc_retainAutoreleasedReturnValue();
                                func_0x00010bd86de8(lVar20,lVar14);
                                _objc_release(lVar14);
                              }
                              _objc_release(lVar13);
                            }
                            _objc_release(lVar12);
                          }
                          _objc_release(lVar11);
                        }
                        _objc_release(lVar10);
                      }
                      _objc_release(lVar9);
                    }
                    _objc_release(lVar8);
                  }
                  _objc_release(lVar7);
                }
                goto LAB_108450398;
              }
              lVar20 = 0;
            }
            else {
              lVar20 = 0;
              lVar6 = lVar17;
              if ((lVar18 != 0) && (lVar17 != 0)) {
                lVar20 = lVar18;
                func_0x00010c071b60();
                _objc_release(lVar17);
                _objc_release(lVar18);
                if ((int)lVar20 == 0) goto LAB_1084503a8;
                goto LAB_108450110;
              }
LAB_108450398:
              _objc_release(lVar6);
            }
            _objc_release(lVar18);
          }
          else {
            if (lVar16 != 0) {
              lVar20 = lVar17;
              func_0x00010c071ae0();
              _objc_release(lVar16);
              _objc_release(lVar17);
              if ((int)lVar20 == 0) goto LAB_1084500b8;
              goto LAB_1084500d0;
            }
            lVar20 = 0;
          }
LAB_1084503a8:
          _objc_release(lVar17);
LAB_1084503b0:
          _objc_release(lVar16);
        }
        else {
          if (lVar5 == 0) {
LAB_1084500b8:
            lVar20 = 0;
            goto LAB_1084503b0;
          }
          lVar20 = lVar16;
          func_0x00010c071ae0();
          _objc_release(lVar5);
          _objc_release(lVar16);
          if ((int)lVar20 != 0) goto LAB_108450060;
          lVar20 = 0;
        }
        _objc_release(lVar5);
      }
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
LAB_1084503d8:
  _objc_release(param_3);
  return lVar20;
}



/* Entry: 108450404; end: 1084506ab; -[SCMultiSnapIndividualEditingState copyWithZone:] */

undefined * FUN_108450404(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c4908;
  _objc_alloc(PTR_PTR_1126c4908);
  func_0x00010c0522a0();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0d3c80(uVar2);
  func_0x00010c20bc80(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf51e00(uVar2);
  func_0x00010c19c960(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0d3c80(uVar2);
  func_0x00010c178c80(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf51e00(uVar2);
  func_0x00010c16cc80(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c0d3c80(uVar2);
  func_0x00010c191a20(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c1919c0(puVar1,param_2,*(undefined8 *)(param_1 + 0x50));
  func_0x00010c16bc20(puVar1,param_2,*(undefined1 *)(param_1 + 9));
  func_0x00010c16bca0(puVar1,param_2,*(undefined8 *)(param_1 + 0x40));
  func_0x00010c16b3a0(puVar1,param_2,*(undefined8 *)(param_1 + 0x38));
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf52160(uVar2);
  func_0x00010c186260(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bf52160(uVar2);
  func_0x00010c1ac9c0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010bf51e00(uVar2);
  func_0x00010c17f520(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010bf51e00(uVar2);
  func_0x00010c1a2aa0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010bf51e00(uVar2);
  func_0x00010c1ca160(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010bf51e00(uVar2);
  func_0x00010c16f3c0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf51e00(uVar2);
  func_0x00010c2240c0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010bf51e00(uVar2);
  func_0x00010c1be380(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010bf51e00(uVar2);
  func_0x00010c1e1e40(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010bf51e00(uVar2);
  func_0x00010c1c8720(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bf51e00(uVar2);
  func_0x00010c1c8740(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010bf51e00(uVar2);
  func_0x00010c21a9e0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  return puVar1;
}



/* Entry: 1084506ac; end: 10845078b; -[SCMultiSnapIndividualEditingState _newAudioStartOffsetWithCurrentOffset:andNewTimeBase:] */

void FUN_1084506ac(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = param_5[1];
  uStack_60 = *param_5;
  uStack_50 = param_5[2];
  uStack_78 = *(undefined8 *)(param_2 + 0xb8);
  uStack_80 = *(undefined8 *)(param_2 + 0xb0);
  uStack_70 = *(undefined8 *)(param_2 + 0xc0);
  _CMTimeSubtract(&uStack_48,&uStack_60,&uStack_80);
  uStack_78 = param_4[1];
  uStack_80 = *param_4;
  uStack_70 = param_4[2];
  uStack_98 = uStack_40;
  uStack_a0 = uStack_48;
  uStack_90 = uStack_38;
  _CMTimeAdd(&uStack_60,&uStack_80,&uStack_a0);
  puVar1 = (undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_78 = uStack_58;
  uStack_80 = uStack_60;
  uStack_70 = uStack_50;
  uStack_98 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_a0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_90 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  puVar2 = &uStack_80;
  _CMTimeCompare(puVar2,&uStack_a0);
  if (-1 < (int)puVar2) {
    puVar1 = &uStack_60;
  }
  uVar3 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar3;
  param_1[2] = puVar1[2];
  return;
}



/* Entry: 10845078c; end: 10845079f; -[SCMultiSnapIndividualEditingState timeBase] */

void FUN_10845078c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0xb0);
  param_1[1] = *(undefined8 *)(param_2 + 0xb8);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0xc0);
  return;
}



/* Entry: 1084507a0; end: 1084507a7; -[SCMultiSnapIndividualEditingState isResolvedFromGlobalAndLocalStates] */

undefined1 FUN_1084507a0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1084507a8; end: 1084507af; -[SCMultiSnapIndividualEditingState setIsResolvedFromGlobalAndLocalStates:] */

void FUN_1084507a8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 1084507b0; end: 1084507b7; -[SCMultiSnapIndividualEditingState captions] */

undefined8 FUN_1084507b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1084507b8; end: 1084507e7; -[SCMultiSnapIndividualEditingState setCaptions:] */

void FUN_1084507b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084507e8; end: 1084507ef; -[SCMultiSnapIndividualEditingState autoCaptions] */

undefined8 FUN_1084507e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1084507f0; end: 10845081f; -[SCMultiSnapIndividualEditingState setAutoCaptions:] */

void FUN_1084507f0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108450820; end: 108450827; -[SCMultiSnapIndividualEditingState voiceoverAudioState] */

undefined8 FUN_108450820(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108450828; end: 108450857; -[SCMultiSnapIndividualEditingState setVoiceoverAudioState:] */

void FUN_108450828(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108450858; end: 10845085f; -[SCMultiSnapIndividualEditingState stickers] */

undefined8 FUN_108450858(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108450860; end: 10845088f; -[SCMultiSnapIndividualEditingState setStickers:] */

void FUN_108450860(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108450890; end: 108450897; -[SCMultiSnapIndividualEditingState filtersState] */

undefined8 FUN_108450890(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108450898; end: 1084508c7; -[SCMultiSnapIndividualEditingState setFiltersState:] */

void FUN_108450898(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1084508c8; end: 1084508cf; -[SCMultiSnapIndividualEditingState attachmentURL] */

undefined8 FUN_1084508c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1084508d0; end: 1084508d7; -[SCMultiSnapIndividualEditingState setAttachmentURL:] */

void FUN_1084508d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1084508d8; end: 1084508df; -[SCMultiSnapIndividualEditingState audioFilterStyleId] */

undefined8 FUN_1084508d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1084508e0; end: 1084508e7; -[SCMultiSnapIndividualEditingState setAudioFilterStyleId:] */

void FUN_1084508e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1084508e8; end: 1084508ef; -[SCMultiSnapIndividualEditingState audioEnabled] */

undefined1 FUN_1084508e8(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1084508f0; end: 1084508f7; -[SCMultiSnapIndividualEditingState setAudioEnabled:] */

void FUN_1084508f0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 1084508f8; end: 1084508ff; -[SCMultiSnapIndividualEditingState drawingStrokes] */

undefined8 FUN_1084508f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108450900; end: 10845092f; -[SCMultiSnapIndividualEditingState setDrawingStrokes:] */

void FUN_108450900(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108450930; end: 108450937; -[SCMultiSnapIndividualEditingState drawingSmoothingAlgorithm] */

undefined8 FUN_108450930(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108450938; end: 10845093f; -[SCMultiSnapIndividualEditingState setDrawingSmoothingAlgorithm:] */

void FUN_108450938(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 108450940; end: 108450947; -[SCMultiSnapIndividualEditingState croppingState] */

undefined8 FUN_108450940(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 108450948; end: 108450977; -[SCMultiSnapIndividualEditingState setCroppingState:] */

void FUN_108450948(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108450978; end: 10845097f; -[SCMultiSnapIndividualEditingState initialCroppingState] */

undefined8 FUN_108450978(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 108450980; end: 1084509af; -[SCMultiSnapIndividualEditingState setInitialCroppingState:] */

void FUN_108450980(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1084509b0; end: 1084509b7; -[SCMultiSnapIndividualEditingState genericAssets] */

undefined8 FUN_1084509b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1084509b8; end: 1084509e7; -[SCMultiSnapIndividualEditingState setGenericAssets:] */

void FUN_1084509b8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1084509e8; end: 1084509ef; -[SCMultiSnapIndividualEditingState mixedBaseAudioVolume] */

undefined8 FUN_1084509e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1084509f0; end: 1084509f7; -[SCMultiSnapIndividualEditingState setMixedBaseAudioVolume:] */

void FUN_1084509f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1084509f8; end: 1084509ff; -[SCMultiSnapIndividualEditingState mixedAudioTracks] */

undefined8 FUN_1084509f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 108450a00; end: 108450a07; -[SCMultiSnapIndividualEditingState setMixedAudioTracks:] */

void FUN_108450a00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108450a08; end: 108450a0f; -[SCMultiSnapIndividualEditingState musicSelection] */

undefined8 FUN_108450a08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 108450a10; end: 108450a17; -[SCMultiSnapIndividualEditingState setMusicSelection:] */

void FUN_108450a10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108450a18; end: 108450a1f; -[SCMultiSnapIndividualEditingState baseMediaMusicSelection] */

undefined8 FUN_108450a18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 108450a20; end: 108450a27; -[SCMultiSnapIndividualEditingState setBaseMediaMusicSelection:] */

void FUN_108450a20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108450a28; end: 108450a2f; -[SCMultiSnapIndividualEditingState liveCameraLensConfiguration] */

undefined8 FUN_108450a28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 108450a30; end: 108450a37; -[SCMultiSnapIndividualEditingState setLiveCameraLensConfiguration:] */

void FUN_108450a30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108450a38; end: 108450a3f; -[SCMultiSnapIndividualEditingState previewLensConfiguration] */

undefined8 FUN_108450a38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 108450a40; end: 108450a47; -[SCMultiSnapIndividualEditingState setPreviewLensConfiguration:] */

void FUN_108450a40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108450a48; end: 108450a4f; -[SCMultiSnapIndividualEditingState ttsAudioAsset] */

undefined8 FUN_108450a48(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 108450a50; end: 108450a57; -[SCMultiSnapIndividualEditingState setTtsAudioAsset:] */

void FUN_108450a50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108450a58; end: 108450a5f; -[SCMultiSnapIndividualEditingState commonLoggingParams] */

undefined8 FUN_108450a58(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 108450a60; end: 108450a8f; -[SCMultiSnapIndividualEditingState setCommonLoggingParams:] */

void FUN_108450a60(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108450a90; end: 108450b8b; -[SCMultiSnapIndividualEditingState .cxx_destruct] */

void FUN_108450a90(long param_1)

{
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 108450b8c; end: 1084510bb; -[SCPreviewSnapEditingState initWithHasAnimatedFilters:geofilterName:smartFilterName:mediaFilterName:motionFilterName:selectedVenueId:venueFilterYOffset:timestampType:altitudeType:altitudeUnit:weatherType:captionState:croppingState:stickersState:drawingUpdateVersion:objectTrackingUpdateVersion:audioEnabled:imageDurationInSecs:snapCraftStyleId:snapAttachmentUrl:infiniteDurationState:audioFilterStyleId:bounceOffset:lensId:musicSelection:autoCaptionsState:ucoEditingState:voiceoverAudio:timeRanges:ctLensState:audioMixingLevels:textToSpeechAudioData:aiModeSessionId:] */

undefined8 *
FUN_108450b8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined1 param_20,
             undefined4 param_21,undefined8 param_22,undefined8 param_23,undefined1 param_24,
             undefined4 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  puStack_80 = PTR_PTR_1126fc8e8;
  puVar1 = &uStack_88;
  uStack_88 = param_3;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar1 + 1) = param_5;
    _objc_retain(param_6);
    uVar2 = puVar1[2];
    puVar1[2] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[4];
    puVar1[4] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[5];
    puVar1[5] = param_10;
    _objc_release(uVar2);
    puVar1[6] = param_1;
    puVar1[9] = param_11;
    puVar1[10] = param_12;
    puVar1[0xb] = param_13;
    puVar1[0xc] = param_14;
    puVar1[0xd] = param_18;
    puVar1[0xe] = param_19;
    _objc_retain(param_15);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_15;
    _objc_release(uVar2);
    uVar2 = param_16;
    func_0x00010bf52160();
    uVar3 = puVar1[0x11];
    puVar1[0x11] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x14];
    puVar1[0x14] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_20;
    puVar1[0x13] = param_2;
    uVar2 = param_22;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x15];
    puVar1[0x15] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_23;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x16];
    puVar1[0x16] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 10) = param_24;
    uVar2 = param_26;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x17];
    puVar1[0x17] = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_27);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_27;
    _objc_release(uVar2);
    uVar2 = param_28;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x19];
    puVar1[0x19] = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_29);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[8];
    puVar1[8] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_37;
    _objc_release(uVar2);
  }
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  return puVar1;
}



/* Entry: 1084510bc; end: 10845177b; -[SCPreviewSnapEditingState isEquivalentTo:] */

long FUN_1084510bc(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    lVar1 = param_2;
    func_0x00010bf8a1e0();
    lVar2 = param_4;
    func_0x00010bf8a1e0();
    if (lVar1 == lVar2) {
      lVar1 = param_2;
      func_0x00010c0e0220();
      lVar2 = param_4;
      func_0x00010c0e0220();
      if (lVar1 == lVar2) {
        func_0x00010bfe75e0(param_2);
        dVar9 = param_1;
        func_0x00010bfe75e0(param_4);
        if (param_1 == dVar9) {
          lVar1 = param_2;
          func_0x00010bf0f0e0();
          lVar2 = param_4;
          func_0x00010bf0f0e0();
          if (((int)lVar1 == (int)lVar2) &&
             (lVar1 = param_2, func_0x00010bf09960(), (int)lVar1 != 0)) {
            lVar1 = param_2;
            func_0x00010bf302a0();
            _objc_retainAutoreleasedReturnValue();
            lVar2 = param_4;
            func_0x00010bf302a0(param_4);
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar1;
            func_0x000108451380(lVar1,lVar2);
            if ((int)lVar3 == 0) {
              param_2 = 0;
            }
            else {
              lVar3 = param_2;
              func_0x00010c255460();
              _objc_retainAutoreleasedReturnValue();
              lVar4 = param_4;
              func_0x00010c255460(param_4);
              _objc_retainAutoreleasedReturnValue();
              lVar5 = lVar3;
              FUN_10845177c(lVar3,lVar4);
              if ((int)lVar5 == 0) {
                param_2 = 0;
              }
              else {
                lVar5 = param_2;
                func_0x00010bf5c9c0();
                _objc_retainAutoreleasedReturnValue();
                lVar6 = param_4;
                func_0x00010bf5c9c0(param_4);
                _objc_retainAutoreleasedReturnValue();
                lVar7 = lVar5;
                FUN_108451804(lVar5,lVar6);
                if ((((int)lVar7 == 0) || (lVar7 = param_2, func_0x00010bf09ae0(), (int)lVar7 == 0))
                   || (lVar7 = param_2, func_0x00010bf09ac0(), (int)lVar7 == 0)) {
LAB_108451348:
                  param_2 = 0;
                }
                else {
                  lVar7 = param_2;
                  func_0x00010bfed760();
                  lVar8 = param_4;
                  func_0x00010bfed760();
                  if ((((((int)lVar7 != (int)lVar8) ||
                        (lVar7 = param_2, func_0x00010bf0f120(), (int)lVar7 == 0)) ||
                       ((lVar7 = param_2, func_0x00010bf208c0(), (int)lVar7 == 0 ||
                        ((lVar7 = param_2, func_0x00010c076580(), (int)lVar7 == 0 ||
                         (lVar7 = param_2, func_0x00010c0782c0(), (int)lVar7 == 0)))))) ||
                      (lVar7 = param_2, func_0x00010c06cbc0(), (int)lVar7 == 0)) ||
                     ((((lVar7 = param_2, func_0x00010c083920(), (int)lVar7 == 0 ||
                        (lVar7 = param_2, func_0x00010c081080(), (int)lVar7 == 0)) ||
                       (lVar7 = param_2, func_0x00010c06da80(), (int)lVar7 == 0)) ||
                      ((lVar7 = param_2, func_0x00010c06c940(), (int)lVar7 == 0 ||
                       (lVar7 = param_2, func_0x00010c080e20(), (int)lVar7 == 0))))))
                  goto LAB_108451348;
                  func_0x00010c06bce0(param_2);
                }
                _objc_release(lVar6);
                _objc_release(lVar5);
              }
              _objc_release(lVar4);
              _objc_release(lVar3);
            }
            _objc_release(lVar2);
            _objc_release(lVar1);
            goto LAB_10845130c;
          }
        }
      }
    }
  }
  param_2 = 0;
LAB_10845130c:
  _objc_release(param_4);
  return param_2;
}



/* Entry: 10845177c; end: 108451803;  */

long FUN_10845177c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010bf529e0();
  lVar2 = param_2;
  func_0x00010bf529e0();
  if (lVar1 == 0 && lVar2 == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((lVar1 != 0) && (lVar2 != 0)) {
      lVar3 = param_1;
      func_0x00010c071b60(param_1);
    }
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return lVar3;
}



/* Entry: 108451804; end: 10845195b;  */

bool FUN_108451804(double param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  _objc_retain();
  _objc_retain(param_3);
  func_0x00010c27ade0(param_2);
  dVar2 = param_1;
  func_0x00010c27ade0(param_3);
  dVar3 = ABS(param_1 - dVar2);
  dVar2 = ABS(param_1 + dVar2) * 2.220446049250313e-16;
  bVar1 = true;
  if ((2.2250738585072014e-308 <= dVar3) && (bVar1 = false, !NAN(dVar3) && !NAN(dVar2))) {
    bVar1 = dVar3 < dVar2;
  }
  if (bVar1) {
    func_0x00010c27ae20(param_2);
    dVar3 = dVar2;
    func_0x00010c27ae20(param_3);
    dVar4 = ABS(dVar2 - dVar3);
    dVar2 = ABS(dVar2 + dVar3) * 2.220446049250313e-16;
    bVar1 = true;
    if ((2.2250738585072014e-308 <= dVar4) && (bVar1 = false, !NAN(dVar4) && !NAN(dVar2))) {
      bVar1 = dVar4 < dVar2;
    }
    if (bVar1) {
      func_0x00010c141a80(param_2);
      dVar3 = dVar2;
      func_0x00010c141a80(param_3);
      dVar4 = ABS(dVar2 - dVar3);
      dVar2 = ABS(dVar2 + dVar3) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar4) && (bVar1 = false, !NAN(dVar4) && !NAN(dVar2))) {
        bVar1 = dVar4 < dVar2;
      }
      if (bVar1) {
        func_0x00010c14e120(param_2);
        dVar3 = dVar2;
        func_0x00010c14e120(param_3);
        dVar4 = ABS(dVar2 + dVar3) * 2.220446049250313e-16;
        if (dVar4 <= 2.2250738585072014e-308) {
          dVar4 = 2.2250738585072014e-308;
        }
        bVar1 = ABS(dVar2 - dVar3) < dVar4;
        goto LAB_108451934;
      }
    }
  }
  bVar1 = false;
LAB_108451934:
  _objc_release(param_3);
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 10845195c; end: 108451c27; -[SCPreviewSnapEditingState areFiltersEquivalentTo:] */

long FUN_10845195c(double param_1,long param_2,undefined8 param_3,long param_4)

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
  long lVar11;
  long lVar12;
  double dVar13;
  
  _objc_retain(param_4);
  lVar1 = param_2;
  func_0x00010bfc17a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010bfc17a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar1;
  func_0x00010bc823d8(lVar1,lVar2);
  if ((int)lVar12 == 0) {
LAB_108451b1c:
    lVar12 = 0;
LAB_108451b20:
    _objc_release(lVar2);
  }
  else {
    lVar12 = param_2;
    func_0x00010c23ebc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_4;
    func_0x00010c23ebc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar12;
    func_0x00010bc823d8(lVar12,lVar3);
    if ((int)lVar4 == 0) {
LAB_108451b0c:
      _objc_release(lVar3);
      _objc_release(lVar12);
      goto LAB_108451b1c;
    }
    lVar4 = param_2;
    func_0x00010c0c4fa0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_4;
    func_0x00010c0c4fa0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010bc823d8(lVar4,lVar5);
    if ((int)lVar6 == 0) {
LAB_108451afc:
      _objc_release(lVar5);
      _objc_release(lVar4);
      goto LAB_108451b0c;
    }
    lVar6 = param_2;
    func_0x00010c0d1240();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    func_0x00010c0d1240(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar6;
    func_0x00010bc823d8(lVar6,lVar7);
    if ((int)lVar8 == 0) {
      _objc_release(lVar7);
LAB_108451af8:
      _objc_release(lVar6);
      goto LAB_108451afc;
    }
    lVar8 = param_2;
    func_0x00010c15a3e0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_4;
    func_0x00010c15a3e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar8;
    func_0x00010bc823d8();
    if ((int)lVar10 == 0) {
LAB_108451acc:
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      goto LAB_108451af8;
    }
    func_0x00010c297da0(param_2);
    dVar13 = param_1;
    func_0x00010c297da0(param_4);
    if (param_1 != dVar13) goto LAB_108451acc;
    lVar10 = param_2;
    func_0x00010bfd4140();
    lVar11 = param_4;
    func_0x00010bfd4140();
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar12);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar10 != (int)lVar11) {
      lVar12 = 0;
      goto LAB_108451b30;
    }
    lVar1 = param_4;
    func_0x00010c27e660();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != *(long *)(param_2 + 0x40)) {
      lVar2 = param_4;
      func_0x00010c27e660(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar2;
      func_0x00010c071ae0();
      goto LAB_108451b20;
    }
    lVar12 = 1;
  }
  _objc_release(lVar1);
LAB_108451b30:
  _objc_release(param_4);
  return lVar12;
}



/* Entry: 108451c28; end: 108451d2f; -[SCPreviewSnapEditingState areSnapCraftStyleEquivalentTo:] */

long FUN_108451c28(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010c23fac0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010c23fac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = 1;
      goto LAB_108451d14;
    }
  }
  else {
    _objc_release();
  }
  lVar2 = param_1;
  func_0x00010c23fac0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010c23fac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar1 != 0) {
      func_0x00010c23fac0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010c23fac0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c0720c0(param_1,param_2,lVar1);
      _objc_release(lVar1);
      _objc_release(param_1);
      goto LAB_108451d14;
    }
  }
  lVar2 = 0;
LAB_108451d14:
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 108451d30; end: 108451e37; -[SCPreviewSnapEditingState areSnapAttachmentUrlEquivalentTo:] */

long FUN_108451d30(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010c23f440();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010c23f440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = 1;
      goto LAB_108451e1c;
    }
  }
  else {
    _objc_release();
  }
  lVar2 = param_1;
  func_0x00010c23f440();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010c23f440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar1 != 0) {
      func_0x00010c23f440(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010c23f440(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c0720c0(param_1,param_2,lVar1);
      _objc_release(lVar1);
      _objc_release(param_1);
      goto LAB_108451e1c;
    }
  }
  lVar2 = 0;
LAB_108451e1c:
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 108451e38; end: 108451f3f; -[SCPreviewSnapEditingState audioFilterStyleIDIsEquivalentTo:] */

long FUN_108451e38(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bf0f140();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010bf0f140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = 1;
      goto LAB_108451f24;
    }
  }
  else {
    _objc_release();
  }
  lVar2 = param_1;
  func_0x00010bf0f140();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010bf0f140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar1 != 0) {
      func_0x00010bf0f140(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010bf0f140(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c0720c0(param_1,param_2,lVar1);
      _objc_release(lVar1);
      _objc_release(param_1);
      goto LAB_108451f24;
    }
  }
  lVar2 = 0;
LAB_108451f24:
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 108451f40; end: 108452047; -[SCPreviewSnapEditingState isLensIdIsEquivalentTo:] */

long FUN_108451f40(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = 1;
      goto LAB_10845202c;
    }
  }
  else {
    _objc_release();
  }
  lVar2 = param_1;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar1 != 0) {
      func_0x00010c094540(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010c094540(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c0720c0(param_1,param_2,lVar1);
      _objc_release(lVar1);
      _objc_release(param_1);
      goto LAB_10845202c;
    }
  }
  lVar2 = 0;
LAB_10845202c:
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 108452048; end: 10845214f; -[SCPreviewSnapEditingState bounceOffsetIsEquivalentTo:] */

long FUN_108452048(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bf208a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010bf208a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = 1;
      goto LAB_108452134;
    }
  }
  else {
    _objc_release();
  }
  lVar2 = param_1;
  func_0x00010bf208a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010bf208a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar1 != 0) {
      func_0x00010bf208a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010bf208a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c071f40(param_1,param_2,lVar1);
      _objc_release(lVar1);
      _objc_release(param_1);
      goto LAB_108452134;
    }
  }
  lVar2 = 0;
LAB_108452134:
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 108452150; end: 108452257; -[SCPreviewSnapEditingState isMusicSelectionEquivalentTo:] */

long FUN_108452150(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010c0d36c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010c0d36c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = 1;
      goto LAB_10845223c;
    }
  }
  else {
    _objc_release();
  }
  lVar2 = param_1;
  func_0x00010c0d36c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010c0d36c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar1 != 0) {
      func_0x00010c0d36c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010c0d36c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c071ae0(param_1,param_2,lVar1);
      _objc_release(lVar1);
      _objc_release(param_1);
      goto LAB_10845223c;
    }
  }
  lVar2 = 0;
LAB_10845223c:
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 108452258; end: 10845235f; -[SCPreviewSnapEditingState isAutoCaptionsStateEquivalentTo:] */

long FUN_108452258(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bf114c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010bf114c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = 1;
      goto LAB_108452344;
    }
  }
  else {
    _objc_release();
  }
  lVar2 = param_1;
  func_0x00010bf114c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010bf114c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar1 != 0) {
      func_0x00010bf114c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010bf114c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c071ae0(param_1,param_2,lVar1);
      _objc_release(lVar1);
      _objc_release(param_1);
      goto LAB_108452344;
    }
  }
  lVar2 = 0;
LAB_108452344:
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 108452360; end: 108452467; -[SCPreviewSnapEditingState isVoiceoverAudioEquivalentTo:] */

long FUN_108452360(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010c2a0980();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010c2a0980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = 1;
      goto LAB_10845244c;
    }
  }
  else {
    _objc_release();
  }
  lVar2 = param_1;
  func_0x00010c2a0980();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010c2a0980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar1 != 0) {
      func_0x00010c2a0980(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010c2a0980(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c071ae0(param_1,param_2,lVar1);
      _objc_release(lVar1);
      _objc_release(param_1);
      goto LAB_10845244c;
    }
  }
  lVar2 = 0;
LAB_10845244c:
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 108452468; end: 1084525af; -[SCPreviewSnapEditingState isTimeRangesEquivalentTo:] */

long FUN_108452468(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = param_1;
  func_0x00010c26f640();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010c26f640();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
    _objc_release(lVar3);
    if (lVar2 == 0) {
      lVar3 = 1;
      goto LAB_108452590;
    }
  }
  else {
    _objc_release(lVar3);
  }
  lVar1 = param_1;
  func_0x00010c26f640();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_3;
    func_0x00010c26f640();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bf529e0();
    _objc_release(lVar3);
    _objc_release(lVar1);
    if (lVar2 == 0) {
      lVar3 = 0;
      goto LAB_108452590;
    }
    func_0x00010c26f640(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c26f640(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c071ae0(param_1,param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_1;
  }
  _objc_release(lVar1);
LAB_108452590:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1084525b0; end: 1084526b7; -[SCPreviewSnapEditingState isCTLensStateEquivalentTo:] */

long FUN_1084525b0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bf5cf00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010bf5cf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = 1;
      goto LAB_10845269c;
    }
  }
  else {
    _objc_release();
  }
  lVar2 = param_1;
  func_0x00010bf5cf00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010bf5cf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar1 != 0) {
      func_0x00010bf5cf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010bf5cf00(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c071ae0(param_1,param_2,lVar1);
      _objc_release(lVar1);
      _objc_release(param_1);
      goto LAB_10845269c;
    }
  }
  lVar2 = 0;
LAB_10845269c:
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 1084526b8; end: 108452887; -[SCPreviewSnapEditingState isAudioMixingLevelsStateEquivalentTo:] */

undefined8 FUN_1084526b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf0f3e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2a0bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf0f3e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2a0bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010be3e400(param_1,param_2,uVar2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar5 != 0) {
    uVar1 = param_1;
    func_0x00010bf0f3e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0d30e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010bf0f3e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0d30e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010be3e400(param_1,param_2,uVar2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar5 != 0) {
      uVar1 = param_1;
      func_0x00010bf0f3e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf15e40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010bf0f3e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf15e40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be3e400(param_1,param_2,uVar2,uVar4);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      goto LAB_108452864;
    }
  }
  param_1 = 0;
LAB_108452864:
  _objc_release(param_3);
  return param_1;
}



/* Entry: 108452888; end: 10845298f; -[SCPreviewSnapEditingState isTextToSpeechAudioDataEquivalentTo:] */

long FUN_108452888(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010c26c900();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010c26c900();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = 1;
      goto LAB_108452974;
    }
  }
  else {
    _objc_release();
  }
  lVar2 = param_1;
  func_0x00010c26c900();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010c26c900();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar1 != 0) {
      func_0x00010c26c900(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010c26c900(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c071ae0(param_1,param_2,lVar1);
      _objc_release(lVar1);
      _objc_release(param_1);
      goto LAB_108452974;
    }
  }
  lVar2 = 0;
LAB_108452974:
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 108452990; end: 108452a53; -[SCPreviewSnapEditingState isAiModeSessionIdEquivalentTo:] */

long FUN_108452990(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010befee00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010befee00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = 1;
      goto LAB_108452a30;
    }
  }
  else {
    _objc_release();
  }
  func_0x00010befee00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010befee00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0720c0(param_1,param_2,lVar1);
  _objc_release(lVar1);
  _objc_release(param_1);
LAB_108452a30:
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 108452a54; end: 108452acb; -[SCPreviewSnapEditingState _isAudioMixingLevel:equivalentTo:] */

long FUN_108452a54(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0 && param_4 == 0) {
    lVar1 = 1;
  }
  else {
    lVar1 = 0;
    if ((param_3 != 0) && (param_4 != 0)) {
      lVar1 = param_3;
      func_0x00010c071f40(param_3,param_2,param_4);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 108452acc; end: 108452ad3; -[SCPreviewSnapEditingState geofilterName] */

undefined8 FUN_108452acc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108452ad4; end: 108452adb; -[SCPreviewSnapEditingState smartFilterName] */

undefined8 FUN_108452ad4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108452adc; end: 108452ae3; -[SCPreviewSnapEditingState mediaFilterName] */

undefined8 FUN_108452adc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108452ae4; end: 108452aeb; -[SCPreviewSnapEditingState selectedVenueId] */

undefined8 FUN_108452ae4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108452aec; end: 108452af3; -[SCPreviewSnapEditingState venueFilterYOffset] */

undefined8 FUN_108452aec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108452af4; end: 108452afb; -[SCPreviewSnapEditingState motionFilterName] */

undefined8 FUN_108452af4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108452afc; end: 108452b03; -[SCPreviewSnapEditingState ucoEditingState] */

undefined8 FUN_108452afc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108452b04; end: 108452b0b; -[SCPreviewSnapEditingState hasAnimatedFilters] */

undefined1 FUN_108452b04(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108452b0c; end: 108452b13; -[SCPreviewSnapEditingState timestampType] */

undefined8 FUN_108452b0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108452b14; end: 108452b1b; -[SCPreviewSnapEditingState altitudeType] */

undefined8 FUN_108452b14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108452b1c; end: 108452b23; -[SCPreviewSnapEditingState altitudeUnit] */

undefined8 FUN_108452b1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 108452b24; end: 108452b2b; -[SCPreviewSnapEditingState weatherType] */

undefined8 FUN_108452b24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 108452b2c; end: 108452b33; -[SCPreviewSnapEditingState drawingUpdateVersion] */

undefined8 FUN_108452b2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 108452b34; end: 108452b3b; -[SCPreviewSnapEditingState objectTrackingUpdateVersion] */

undefined8 FUN_108452b34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 108452b3c; end: 108452b43; -[SCPreviewSnapEditingState captionState] */

undefined8 FUN_108452b3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 108452b44; end: 108452b4b; -[SCPreviewSnapEditingState autoCaptionsState] */

undefined8 FUN_108452b44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 108452b4c; end: 108452b53; -[SCPreviewSnapEditingState croppingState] */

undefined8 FUN_108452b4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 108452b54; end: 108452b5b; -[SCPreviewSnapEditingState ctLensState] */

undefined8 FUN_108452b54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 108452b5c; end: 108452b63; -[SCPreviewSnapEditingState imageDurationInSecs] */

undefined8 FUN_108452b5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 108452b64; end: 108452b6b; -[SCPreviewSnapEditingState setImageDurationInSecs:] */

void FUN_108452b64(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x98) = param_1;
  return;
}



/* Entry: 108452b6c; end: 108452b73; -[SCPreviewSnapEditingState stickersState] */

undefined8 FUN_108452b6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 108452b74; end: 108452b7b; -[SCPreviewSnapEditingState setStickersState:] */

void FUN_108452b74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108452b7c; end: 108452b83; -[SCPreviewSnapEditingState audioEnabled] */

undefined1 FUN_108452b7c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108452b84; end: 108452b8b; -[SCPreviewSnapEditingState setAudioEnabled:] */

void FUN_108452b84(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 108452b8c; end: 108452b93; -[SCPreviewSnapEditingState snapCraftStypleId] */

undefined8 FUN_108452b8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 108452b94; end: 108452b9b; -[SCPreviewSnapEditingState setSnapCraftStypleId:] */

void FUN_108452b94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108452b9c; end: 108452ba3; -[SCPreviewSnapEditingState snapAttachmentUrl] */

undefined8 FUN_108452b9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 108452ba4; end: 108452bab; -[SCPreviewSnapEditingState infiniteDurationState] */

undefined1 FUN_108452ba4(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 108452bac; end: 108452bb3; -[SCPreviewSnapEditingState audioFilterStyleId] */

undefined8 FUN_108452bac(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}


