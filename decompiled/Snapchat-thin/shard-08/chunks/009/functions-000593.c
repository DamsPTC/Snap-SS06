/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106733894; end: 10673392b; -[SCLensExplorerCacheShapedBackground isEqual:] */

bool FUN_106733894(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) || (*(int *)(param_1 + 8) != *(int *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(int *)(param_1 + 0xc) == *(int *)(param_3 + 0xc);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10673392c; end: 106733933; -[SCLensExplorerCacheShapedBackground shape] */

undefined4 FUN_10673392c(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 106733934; end: 10673393b; -[SCLensExplorerCacheShapedBackground color] */

undefined4 FUN_106733934(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10673393c; end: 10673399b; -[SCLensExplorerCacheTextLayout initWithStyle:alignment:linesCount:textColor:] */

void FUN_10673393c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f2d00;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
    *(undefined4 *)((long)puVar1 + 0xc) = param_4;
    *(undefined4 *)((long)puVar1 + 0x10) = param_5;
    *(undefined4 *)((long)puVar1 + 0x14) = param_6;
  }
  return;
}



/* Entry: 10673399c; end: 1067339bf; -[SCLensExplorerCacheTextLayout copyWithZone:] */

undefined8 FUN_10673399c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1067339c0; end: 106733a27; -[SCLensExplorerCacheTextLayout hash] */

ulong * FUN_1067339c0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uStack_40;
  ulong uStack_38;
  long lStack_30;
  ulong uStack_28;
  long lStack_18;
  
  puVar1 = &uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(ulong *)(param_1 + 8) & 0xffffffff;
  uStack_38 = *(ulong *)(param_1 + 8) >> 0x20;
  uStack_28 = (ulong)*(uint *)(param_1 + 0x14);
  lStack_30 = (long)*(int *)(param_1 + 0x10);
  func_0x000100505190(&uStack_40,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (ulong *)param_3) {
    puVar3 = (undefined1 *)0x1;
  }
  else {
    puVar3 = (undefined1 *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar3 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) ||
         (((*(int *)((long)puVar1 + 8) != *(int *)(param_3 + 8) ||
           (*(int *)((long)puVar1 + 0xc) != *(int *)(param_3 + 0xc))) ||
          (*(int *)((long)puVar1 + 0x10) != *(int *)(param_3 + 0x10))))) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)(ulong)(*(int *)((long)puVar1 + 0x14) == *(int *)(param_3 + 0x14));
      }
    }
  }
  _objc_release(param_3);
  return (ulong *)puVar3;
}



/* Entry: 106733a28; end: 106733adf; -[SCLensExplorerCacheTextLayout isEqual:] */

bool FUN_106733a28(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) ||
         (((*(int *)(param_1 + 8) != *(int *)(param_3 + 8) ||
           (*(int *)(param_1 + 0xc) != *(int *)(param_3 + 0xc))) ||
          (*(int *)(param_1 + 0x10) != *(int *)(param_3 + 0x10))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(int *)(param_1 + 0x14) == *(int *)(param_3 + 0x14);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106733ae0; end: 106733ae7; -[SCLensExplorerCacheTextLayout style] */

undefined4 FUN_106733ae0(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 106733ae8; end: 106733aef; -[SCLensExplorerCacheTextLayout alignment] */

undefined4 FUN_106733ae8(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 106733af0; end: 106733af7; -[SCLensExplorerCacheTextLayout linesCount] */

undefined4 FUN_106733af0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 106733af8; end: 106733aff; -[SCLensExplorerCacheTextLayout textColor] */

undefined4 FUN_106733af8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 106733b00; end: 106733b63;  */

undefined ** FUN_106733b00(void)

{
  int iVar1;
  
  if ((bRam000000011381ae78 & 1) == 0) {
    iVar1 = 0x1381ae78;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&SUB_105004938,&PTR_PTR_11315b0f8,0x100000000);
      ___cxa_guard_release(0x11381ae78);
    }
  }
  return &PTR_PTR_11315b0f8;
}



/* Entry: 106733b64; end: 106733beb;  */

void FUN_106733b64(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106733bec; end: 106733c77;  */

void FUN_106733bec(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c08c7a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c08c7a0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106733c78; end: 106733c83; +[SCLensExplorerCacheStackLayout table] */

undefined * FUN_106733c78(void)

{
  return &UNK_10f38f65a;
}



/* Entry: 106733c84; end: 1067345ef; +[SCLensExplorerCacheStackLayout immutableObjectParse:bufferSize:] */

void FUN_106733c84(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ushort uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  ulong uVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  
  uVar3 = *param_3;
  piVar1 = (int *)((long)param_3 + (ulong)uVar3);
  puVar9 = PTR_PTR_1126cd4a8;
  _objc_alloc();
  lVar16 = (long)*piVar1;
  uVar13 = *(ushort *)((long)piVar1 - lVar16);
  if (uVar13 < 5) {
    puVar23 = (undefined *)0x0;
LAB_106733d50:
    bVar8 = false;
    bVar6 = false;
  }
  else {
    uVar18 = (ulong)((ushort *)((long)piVar1 - lVar16))[2];
    if (uVar18 == 0) {
      puVar23 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar18);
      puVar23 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar16 = (long)*piVar1;
      uVar13 = *(ushort *)((long)piVar1 - lVar16);
    }
    if (uVar13 < 7) goto LAB_106733d50;
    uVar18 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar16));
    if (uVar18 == 0) {
      bVar6 = false;
    }
    else {
      bVar6 = *(char *)((long)piVar1 + uVar18) != '\0';
    }
    if (uVar13 < 9) {
      bVar8 = false;
    }
    else {
      uVar18 = (ulong)*(ushort *)((long)piVar1 + (8 - lVar16));
      bVar8 = false;
      if (uVar18 != 0) {
        bVar8 = *(char *)((long)piVar1 + uVar18) != '\0';
      }
      if ((10 < uVar13) && (uVar18 = (ulong)*(ushort *)((long)piVar1 + (10 - lVar16)), uVar18 != 0))
      {
        puVar2 = (uint *)((long)piVar1 + uVar18);
        lVar16 = (long)puVar2 + (ulong)*puVar2;
        goto LAB_106733d5c;
      }
    }
  }
  lVar16 = 0;
LAB_106733d5c:
  FUN_106735984();
  _objc_retainAutoreleasedReturnValue();
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0xd) {
    puVar27 = (undefined *)0x0;
  }
  else {
    uVar18 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6];
    if (uVar18 == 0) {
      puVar27 = (undefined *)0x0;
    }
    else {
      uVar21 = (ulong)*(uint *)((long)piVar1 + uVar18);
      puVar2 = (uint *)((long)((long)piVar1 + uVar18) + uVar21);
      puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar2);
      _objc_retainAutoreleasedReturnValue();
      if (*puVar2 != 0) {
        param_3 = (uint *)((long)param_3 + uVar21 + uVar18 + (ulong)uVar3 + 8);
        do {
          uVar18 = (ulong)param_3[-1];
          puVar11 = PTR_PTR_1126cd4d0;
          _objc_alloc(PTR_PTR_1126cd4d0);
          puVar27 = PTR_PTR_1126cd4b0;
          lVar14 = uVar18 - (long)*(int *)((long)param_3 + (uVar18 - 4));
          uVar13 = *(ushort *)((long)param_3 + lVar14 + -4);
          uVar33 = 0;
          if (uVar13 < 5) {
            uVar25 = 0;
            uVar24 = 0;
LAB_1067341a4:
            puVar27 = (undefined *)0x0;
          }
          else {
            if ((ulong)*(ushort *)((long)param_3 + lVar14) == 0) {
              uVar24 = 0;
            }
            else {
              uVar24 = *(undefined4 *)
                        ((long)param_3 + uVar18 + *(ushort *)((long)param_3 + lVar14) + -4);
            }
            if (uVar13 < 7) {
              uVar25 = 0;
              goto LAB_1067341a4;
            }
            uVar21 = (ulong)*(ushort *)((long)param_3 + lVar14 + 2);
            if (uVar21 == 0) {
              uVar25 = 0;
            }
            else {
              uVar25 = *(undefined4 *)((long)param_3 + uVar18 + uVar21 + -4);
            }
            if (uVar13 < 9) goto LAB_1067341a4;
            uVar21 = (ulong)*(ushort *)((long)param_3 + lVar14 + 4);
            if (uVar21 != 0) {
              uVar33 = *(undefined4 *)((long)param_3 + uVar18 + uVar21 + -4);
            }
            if ((uVar13 < 0xb) ||
               (uVar21 = (ulong)*(ushort *)((long)param_3 + lVar14 + 6), uVar21 == 0))
            goto LAB_1067341a4;
            cVar4 = *(char *)((long)param_3 + uVar18 + uVar21 + -4);
            if (uVar13 < 0xd || cVar4 != '\x01') {
              if (uVar13 < 0xd || cVar4 != '\x02') {
                if ((0xc < uVar13 && cVar4 == '\x03') &&
                   (*(short *)((long)param_3 + lVar14 + 8) != 0)) {
                  puVar12 = PTR_PTR_1126cd4e8;
                  _objc_alloc(PTR_PTR_1126cd4e8);
                  func_0x00010c04eaa0();
                  func_0x00010c26c380(puVar27,param_2,puVar12);
                  _objc_retainAutoreleasedReturnValue();
                  goto LAB_1067342ac;
                }
              }
              else {
                uVar21 = (ulong)*(ushort *)((long)param_3 + lVar14 + 8);
                if (uVar21 != 0) {
                  lVar14 = uVar18 + uVar21;
                  uVar26 = (ulong)*(uint *)((long)param_3 + lVar14 + -4);
                  puVar12 = PTR_PTR_1126cd4d8;
                  _objc_alloc();
                  lVar5 = uVar26 + lVar14;
                  lVar17 = (long)*(int *)((long)param_3 + lVar5 + -4);
                  uVar13 = *(ushort *)((long)param_3 + ((lVar14 + uVar26) - lVar17) + -4);
                  uVar34 = 0;
                  if (uVar13 < 5) {
LAB_1067341f8:
                    puVar28 = (undefined *)0x0;
LAB_1067341fc:
                    puVar22 = (undefined *)0x0;
LAB_106734200:
                    uVar29 = 0;
                  }
                  else {
                    lVar14 = uVar18 + uVar21 + uVar26;
                    uVar20 = (ulong)*(ushort *)((long)param_3 + (lVar14 - lVar17));
                    if (uVar20 != 0) {
                      uVar34 = *(undefined4 *)((long)param_3 + uVar20 + lVar14 + -4);
                    }
                    if (uVar13 < 7) goto LAB_1067341f8;
                    lVar14 = uVar18 + uVar21 + uVar26;
                    uVar20 = (ulong)*(ushort *)((long)param_3 + (lVar14 - lVar17) + 2);
                    if (uVar20 == 0) {
                      puVar28 = (undefined *)0x0;
                    }
                    else {
                      lVar14 = lVar14 + uVar20;
                      uVar15 = (ulong)*(uint *)((long)param_3 + lVar14 + -4);
                      puVar28 = PTR_PTR_1126cd4c8;
                      _objc_alloc(PTR_PTR_1126cd4c8);
                      lVar14 = (long)*(int *)((long)param_3 + uVar15 + lVar14 + -4);
                      lVar17 = (uVar18 + uVar21 + uVar26 + uVar20 + uVar15) - lVar14;
                      uVar13 = *(ushort *)((long)param_3 + lVar17 + -4);
                      uVar31 = 0;
                      uVar29 = 0;
                      uVar30 = 0;
                      uVar32 = 0;
                      if (4 < uVar13) {
                        uVar19 = (ulong)*(ushort *)((long)param_3 + lVar17);
                        if (uVar19 != 0) {
                          uVar29 = *(undefined4 *)
                                    ((long)param_3 +
                                    uVar19 + uVar18 + uVar21 + uVar26 + uVar20 + uVar15 + -4);
                        }
                        if (6 < uVar13) {
                          lVar17 = uVar18 + uVar21 + uVar26 + uVar20 + uVar15;
                          uVar19 = (ulong)*(ushort *)((long)param_3 + (lVar17 - lVar14) + 2);
                          if (uVar19 != 0) {
                            uVar30 = *(undefined4 *)((long)param_3 + uVar19 + lVar17 + -4);
                          }
                          if (8 < uVar13) {
                            lVar17 = uVar18 + uVar21 + uVar26 + uVar20 + uVar15;
                            uVar19 = (ulong)*(ushort *)((long)param_3 + (lVar17 - lVar14) + 4);
                            if (uVar19 != 0) {
                              uVar31 = *(undefined4 *)((long)param_3 + uVar19 + lVar17 + -4);
                            }
                            if (10 < uVar13) {
                              lVar17 = uVar18 + uVar21 + uVar26 + uVar20 + uVar15;
                              uVar20 = (ulong)*(ushort *)((long)param_3 + (lVar17 - lVar14) + 6);
                              if (uVar20 != 0) {
                                uVar32 = *(undefined4 *)((long)param_3 + uVar20 + lVar17 + -4);
                              }
                            }
                          }
                        }
                      }
                      func_0x00010c04b860(uVar29,uVar30,uVar31,uVar32);
                      lVar17 = (long)*(int *)((long)param_3 + lVar5 + -4);
                      uVar13 = *(ushort *)
                                ((long)param_3 + ((uVar18 + uVar21 + uVar26) - lVar17) + -4);
                    }
                    lVar17 = -lVar17;
                    if (uVar13 < 9) goto LAB_1067341fc;
                    if (*(short *)((long)param_3 + lVar17 + uVar18 + uVar21 + uVar26 + 4) == 0) {
                      puVar22 = (undefined *)0x0;
                    }
                    else {
                      puVar22 = PTR_PTR_1126cd4e0;
                      _objc_alloc(PTR_PTR_1126cd4e0);
                      func_0x00010c045960();
                      lVar14 = (long)*(int *)((long)param_3 + lVar5 + -4);
                      lVar17 = -lVar14;
                      uVar13 = *(ushort *)
                                ((long)param_3 + ((uVar18 + uVar21 + uVar26) - lVar14) + -4);
                    }
                    if ((uVar13 < 0xb) ||
                       (uVar20 = (ulong)*(ushort *)
                                         ((long)param_3 + lVar17 + uVar18 + uVar21 + uVar26 + 6),
                       uVar20 == 0)) goto LAB_106734200;
                    uVar29 = *(undefined4 *)((long)param_3 + uVar20 + uVar18 + uVar21 + uVar26 + -4)
                    ;
                  }
                  func_0x00010c046b80(uVar34,puVar12,param_2,puVar28,puVar22,uVar29);
                  _objc_release(puVar22);
                  _objc_release(puVar28);
                  func_0x00010bfe8040(puVar27,param_2,puVar12);
                  _objc_retainAutoreleasedReturnValue();
                  goto LAB_1067342ac;
                }
              }
              goto LAB_1067341a4;
            }
            uVar21 = (ulong)*(ushort *)((long)param_3 + lVar14 + 8);
            if (uVar21 == 0) goto LAB_1067341a4;
            lVar14 = uVar18 + uVar21;
            puVar12 = (undefined *)
                      ((long)param_3 + (ulong)*(uint *)((long)param_3 + lVar14 + -4) + lVar14 + -4);
            FUN_106735984(puVar12);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfced20(puVar27,param_2,puVar12);
            _objc_retainAutoreleasedReturnValue();
LAB_1067342ac:
            _objc_release(puVar12);
          }
          func_0x00010c00f1e0(uVar33,puVar11,param_2,uVar24,uVar25,puVar27);
          _objc_release(puVar27);
          func_0x00010befa120(puVar10,param_2,puVar11);
          _objc_release(puVar11);
          bVar7 = param_3 != puVar2 + (ulong)*puVar2 + 1;
          param_3 = param_3 + 1;
        } while (bVar7);
      }
      puVar27 = puVar10;
      func_0x00010bf51e00(puVar10);
      _objc_release(puVar10);
    }
  }
  func_0x00010c021c20(puVar9,param_2,puVar23,bVar6,bVar8,lVar16,puVar27);
  _objc_release(puVar27);
  _objc_release(lVar16);
  _objc_release(puVar23);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1067345f0; end: 106734613; +[SCLensExplorerCacheStackLayout objectClassFunctionPointer] */

undefined1  [16] FUN_1067345f0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10673460c;
  auVar1._0_8_ = 0x106734604;
  return auVar1;
}



/* Entry: 106734614; end: 10673472f;  */

undefined1 *
FUN_106734614(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_60;
  undefined *puStack_58;
  
  plVar1 = &lStack_60;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_58 = PTR_PTR_1126f2d08;
    lStack_60 = param_1;
    _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_3;
      _objc_release(uVar2);
      *(undefined1 *)((long)plVar1 + 0x14) = param_4;
      *(undefined1 *)((long)plVar1 + 0x15) = param_5;
      _objc_retain(param_6);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = param_6;
      _objc_release(uVar2);
      _objc_retain(param_7);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = param_7;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 106734730; end: 106734b1b;  */

void FUN_106734730(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_1;
      func_0x00010c08c7a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x0001001b9e08(puVar8,&UNK_10f38f679);
        if (puVar8 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010c08c7a0(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar2 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar8,1,puVar2,0xffffffff,0xffffffffffffffff);
          _objc_release(puVar1);
          _objc_release(puVar1);
          puVar1 = puVar8;
          _sqlite3_step();
          if ((int)puVar1 == 100) {
            puVar1 = puVar8;
            _sqlite3_column_int64(puVar8,0);
            puVar2 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126cd4a8);
            _sqlite3_column_blob(puVar8,1);
            _sqlite3_column_bytes(puVar8,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar8);
            if (puVar3 == (undefined *)0x0) goto LAB_106734a54;
            puVar8 = PTR_PTR_1126cd4b8;
            _objc_alloc(PTR_PTR_1126cd4b8);
            puVar2 = puVar3;
            func_0x00010c08c7a0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010c28fee0(puVar3);
            puVar5 = puVar3;
            func_0x00010c2901a0(puVar3);
            puVar6 = puVar3;
            func_0x00010c1414e0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar3;
            func_0x00010c08d240(puVar3);
            _objc_retainAutoreleasedReturnValue();
            FUN_106734614(puVar8,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7);
            param_1 = puVar3;
            goto LAB_106734854;
          }
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x00010c1422e0(param_1);
      puVar8 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126cd4a8);
      puVar3 = puVar8;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar8);
      if (puVar3 != (undefined *)0x0) {
        puVar8 = PTR_PTR_1126cd4b8;
        _objc_alloc(PTR_PTR_1126cd4b8);
        puVar2 = puVar3;
        func_0x00010c08c7a0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c28fee0(puVar3);
        puVar5 = puVar3;
        func_0x00010c2901a0(puVar3);
        puVar6 = puVar3;
        func_0x00010c1414e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010c08d240(puVar3);
        _objc_retainAutoreleasedReturnValue();
        FUN_106734614(puVar8,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7);
        param_1 = puVar3;
LAB_106734854:
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar2);
        goto LAB_106734a5c;
      }
LAB_106734a54:
      param_1 = (undefined *)0x0;
    }
  }
  puVar8 = (undefined *)0x0;
LAB_106734a5c:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106734b1c; end: 106734b8f;  */

void FUN_106734b1c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_106734730();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 3;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106734b90; end: 106734e43;  */

void FUN_106734b90(undefined *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126cd4b8;
  _objc_retain(param_1);
  _objc_opt_self(puVar1);
  puVar1 = param_1;
  FUN_106734730();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar7 = PTR_PTR_1126cd4b8;
    _objc_retain(param_1);
    _objc_opt_self(puVar7);
    puVar7 = PTR_PTR_1126cd4b8;
    if (param_1 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_1;
      func_0x00010c08c7a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010c28fee0(param_1);
      puVar4 = param_1;
      func_0x00010c2901a0(param_1);
      puVar5 = param_1;
      func_0x00010c1414e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_1;
      func_0x00010c08d240(param_1);
      _objc_retainAutoreleasedReturnValue();
      FUN_106734614(puVar7,0xffffffffffffffff,puVar2,puVar3,puVar4,puVar5,puVar6);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar2);
    }
    *(undefined4 *)(puVar7 + 0x10) = 1;
    _objc_release(param_1);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    puVar7 = param_1;
    func_0x00010c08c7a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar7);
    puVar7 = param_1;
    func_0x00010c28fee0();
    puVar1[0x14] = (char)puVar7;
    puVar7 = param_1;
    func_0x00010c2901a0();
    puVar1[0x15] = (char)puVar7;
    puVar7 = param_1;
    func_0x00010c1414e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar7);
    puVar7 = param_1;
    func_0x00010c08d240(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar7);
    _objc_retain(puVar1);
    puVar7 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106734e44; end: 106734eaf;  */

void FUN_106734e44(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126cd4a8;
    _objc_alloc(PTR_PTR_1126cd4a8);
    func_0x00010c021c20();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106734eb0; end: 106734eeb; -[SCLensExplorerCacheStackLayoutChangeRequest .cxx_destruct] */

void FUN_106734eb0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106734eec; end: 106734ef7; -[SCLensExplorerCacheStackLayoutChangeRequest table] */

undefined * FUN_106734eec(void)

{
  return &UNK_10f38f65a;
}



/* Entry: 106734ef8; end: 106734f3f; -[SCLensExplorerCacheStackLayoutChangeRequest createTableWithSQLite:] */

void FUN_106734ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10ddde58c,0x90,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 106734f40; end: 1067352c7; -[SCLensExplorerCacheStackLayoutChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_106734f40(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar5 = param_1;
  if (iVar3 == 1) {
    FUN_106734e44(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1067352c8(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f38f701);
    if (lVar6 == 0) goto LAB_106735264;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_106735264;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126cd4a8);
    func_0x00010c21c9a0(puVar7);
LAB_10673524c:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f38f6c7);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar5 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126cd4a8);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_106735270;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_106735270;
    }
    FUN_106734e44(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1067352c8(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f38f74a);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar8);
      piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
      puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
      _sqlite3_bind_text(param_3,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar7 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126cd4a8);
        func_0x00010c21c9a0(puVar7);
        goto LAB_10673524c;
      }
    }
LAB_106735264:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_106735270:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1067352c8; end: 106735983;  */

undefined * FUN_1067352c8(undefined *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  code *pcVar6;
  int *piVar7;
  int *piVar8;
  undefined ***pppuVar9;
  long lVar10;
  int *piVar11;
  int *piVar12;
  undefined *puVar13;
  long lVar14;
  ushort *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  int *piVar19;
  undefined4 *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined *puVar23;
  long lVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  uint *puVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  ulong uStack_180;
  undefined4 *puStack_168;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  code *pcStack_108;
  undefined ***pppuStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  piVar7 = param_2;
  func_0x00010c1414e0();
  _objc_retainAutoreleasedReturnValue();
  if (piVar7 == (int *)0x0) {
    uStack_180 = 0;
  }
  else {
    piVar8 = param_2;
    func_0x00010c1414e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = param_1;
    FUN_106735c38(param_1,piVar8);
    _objc_release(piVar8);
    uStack_180 = (ulong)puVar18 & 0xffffffff;
  }
  _objc_release(piVar7);
  ppuStack_110 = &PTR_FUN_110937e70;
  pcStack_108 = FUN_106735f5c;
  pppuStack_f8 = &ppuStack_110;
  piVar7 = param_2;
  func_0x00010c08d240();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(piVar7);
  piVar8 = piVar7;
  func_0x00010bf52a60();
  lVar14 = lRam0000000000000000;
  if (piVar8 == (int *)0x0) {
    puStack_168 = (undefined4 *)0x0;
    puVar26 = (undefined4 *)0x0;
  }
  else {
    puStack_168 = (undefined4 *)0x0;
    puVar26 = (undefined4 *)0x0;
    puVar20 = (undefined4 *)0x0;
    do {
      piVar19 = (int *)0x0;
      do {
        if (lRam0000000000000000 != lVar14) {
          _objc_enumerationMutation(piVar7);
        }
        uVar22 = *(undefined8 *)((long)piVar19 * 8);
        _objc_retain(uVar22);
        _objc_retain(uVar22);
        uStack_118 = uVar22;
        if (pppuStack_f8 == (undefined ***)0x0) {
          func_0x000104bfeb48();
          goto LAB_106735850;
        }
        pppuVar9 = pppuStack_f8;
        (*(code *)(*pppuStack_f8)[6])(pppuStack_f8,param_1,&uStack_118);
        _objc_release(uStack_118);
        if (puVar26 < puVar20) {
          *puVar26 = (int)pppuVar9;
          puVar25 = puStack_168;
        }
        else {
          lVar24 = (long)puVar26 - (long)puStack_168;
          uVar17 = (lVar24 >> 2) + 1;
          if (uVar17 >> 0x3e != 0) {
            FUN_106736410();
LAB_106735850:
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x106735854);
            (*pcVar6)();
          }
          uVar16 = (long)puVar20 - (long)puStack_168 >> 1;
          if (uVar16 <= uVar17) {
            uVar16 = uVar17;
          }
          if (0x7ffffffffffffffb < (ulong)((long)puVar20 - (long)puStack_168)) {
            uVar16 = 0x3fffffffffffffff;
          }
          if (uVar16 >> 0x3e != 0) {
            func_0x000104bd35f4();
            goto LAB_106735850;
          }
          lVar10 = uVar16 << 2;
          __Znwm();
          puVar26 = (undefined4 *)(lVar10 + lVar24);
          puVar20 = (undefined4 *)(lVar10 + uVar16 * 4);
          puVar25 = puVar26 + -(lVar24 >> 2);
          *puVar26 = (int)pppuVar9;
          _memcpy(puVar25,puStack_168,lVar24);
          if (puStack_168 != (undefined4 *)0x0) {
            __ZdlPv(puStack_168);
          }
        }
        puStack_168 = puVar25;
        puVar26 = puVar26 + 1;
        _objc_release(uVar22);
        piVar19 = (int *)((long)piVar19 + 1);
      } while (piVar8 != piVar19);
      piVar8 = piVar7;
      func_0x00010bf52a60();
    } while (piVar8 != (int *)0x0);
  }
  _objc_release(piVar7);
  _objc_release(piVar7);
  _objc_release(piVar7);
  if (pppuStack_f8 == &ppuStack_110) {
    lVar14 = 0x20;
LAB_106735548:
    (**(code **)((long)*pppuStack_f8 + lVar14))();
  }
  else if (pppuStack_f8 != (undefined ***)0x0) {
    lVar14 = 0x28;
    goto LAB_106735548;
  }
  piVar7 = param_2;
  func_0x00010c08c7a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (piVar7 == (int *)0x0) {
    puVar18 = (undefined *)0x0;
  }
  else {
    piVar8 = piVar7;
    _CFStringGetCStringPtr(piVar7,0x8000100);
    puVar18 = param_1;
    if (piVar8 == (int *)0x0) {
      piVar8 = piVar7;
      func_0x00010bf64920();
      _objc_retainAutoreleasedReturnValue();
      if (piVar8 == (int *)0x0) {
        piVar8 = piVar7;
        func_0x00010bf64940();
        _objc_retainAutoreleasedReturnValue();
        if (piVar8 != (int *)0x0) goto LAB_1067355ec;
        puVar18 = (undefined *)0x0;
      }
      else {
LAB_1067355ec:
        _objc_retainAutorelease(piVar8);
        piVar11 = piVar8;
        func_0x00010bf25f00();
        piVar12 = piVar8;
        func_0x00010c08fa60(piVar8);
        piVar19 = (int *)"";
        if (piVar11 != (int *)0x0) {
          piVar19 = piVar11;
        }
        func_0x0001001cde08(param_1,piVar19,piVar12);
      }
      _objc_release(piVar8);
    }
    else {
      piVar19 = piVar8;
      _strlen(piVar8);
      func_0x0001001cde08(param_1,piVar8,piVar19);
    }
  }
  _objc_release(piVar7);
  piVar8 = param_2;
  func_0x00010c28fee0();
  piVar19 = param_2;
  func_0x00010c2901a0();
  uVar17 = (long)puVar26 - (long)puStack_168;
  puVar20 = (undefined4 *)&UNK_10ddde82d;
  if (uVar17 != 0) {
    puVar20 = puStack_168;
  }
  param_1[0x46] = 1;
  func_0x0001001cddd0(param_1,uVar17,4);
  func_0x0001001cddd0(param_1,uVar17,4);
  if (puStack_168 != puVar26) {
    lVar14 = (long)uVar17 >> 2;
    do {
      iVar4 = puVar20[lVar14 + -1];
      func_0x0001001ce088(param_1,4);
      func_0x0001001ce0bc(param_1,(((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                                   *(int *)(param_1 + 0x28)) - iVar4) + 4);
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  param_1[0x46] = 0;
  puVar21 = param_1;
  func_0x0001001ce0bc(param_1,uVar17 >> 2);
  param_1[0x46] = 1;
  iVar4 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  if ((int)puVar21 != 0) {
    func_0x0001001ce088(param_1,4);
    func_0x0001001ce354(param_1,0xc,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)puVar21) + 4,0);
  }
  if (uStack_180 != 0) {
    func_0x0001001ce088(param_1,4);
    func_0x0001001ce354(param_1,10,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)uStack_180) + 4,0);
  }
  func_0x0001001ce2e4(param_1,4,(ulong)puVar18 & 0xffffffff);
  func_0x000100ab13ac(param_1,8,piVar19,0);
  func_0x000100ab13ac(param_1,6,piVar8,0);
  func_0x0001001ce548(param_1,(iVar4 - iVar2) + iVar3);
  _objc_release(piVar7);
  if (puStack_168 != (undefined4 *)0x0) {
    __ZdlPv();
  }
  piVar8 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_release(piVar7);
  _objc_release(piVar7);
  if (puStack_168 != (undefined4 *)0x0) {
    __ZdlPv(puStack_168);
  }
  _objc_release(param_2);
  __Unwind_Resume();
  if (piVar8 == (int *)0x0) {
    puVar18 = (undefined *)0x0;
    goto LAB_106735a4c;
  }
  puVar18 = PTR_PTR_1126cd4c0;
  _objc_alloc(PTR_PTR_1126cd4c0);
  lVar14 = (long)*piVar8;
  uVar5 = *(ushort *)((long)piVar8 - lVar14);
  if (((uVar5 < 5) || (uVar5 < 7)) || (uVar5 < 9)) {
    puVar21 = (undefined *)0x0;
LAB_106735a14:
    puVar23 = (undefined *)0x0;
    uVar28 = 0;
  }
  else {
    uVar17 = (ulong)((ushort *)((long)piVar8 - lVar14))[4];
    if (uVar17 == 0) {
      puVar21 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)piVar8 + uVar17);
      piVar7 = (int *)((long)puVar1 + (ulong)*puVar1);
      puVar21 = PTR_PTR_1126cd4c8;
      _objc_alloc(PTR_PTR_1126cd4c8);
      puVar15 = (ushort *)((long)piVar7 - (long)*piVar7);
      uVar5 = *puVar15;
      uVar30 = 0;
      uVar28 = 0;
      uVar29 = 0;
      uVar31 = 0;
      if (4 < uVar5) {
        if ((ulong)puVar15[2] != 0) {
          uVar28 = *(undefined4 *)((long)piVar7 + (ulong)puVar15[2]);
        }
        if (6 < uVar5) {
          if ((ulong)puVar15[3] != 0) {
            uVar29 = *(undefined4 *)((long)piVar7 + (ulong)puVar15[3]);
          }
          if (8 < uVar5) {
            if ((ulong)puVar15[4] != 0) {
              uVar30 = *(undefined4 *)((long)piVar7 + (ulong)puVar15[4]);
            }
            if ((10 < uVar5) && ((ulong)puVar15[5] != 0)) {
              uVar31 = *(undefined4 *)((long)piVar7 + (ulong)puVar15[5]);
            }
          }
        }
      }
      func_0x00010c04b860(uVar28,uVar29,uVar30,uVar31);
      lVar14 = (long)*piVar8;
      uVar5 = *(ushort *)((long)piVar8 - lVar14);
    }
    if (uVar5 < 0xb) goto LAB_106735a14;
    uVar17 = (ulong)*(ushort *)((long)piVar8 + (10 - lVar14));
    if (uVar17 == 0) {
      uVar28 = 0;
    }
    else {
      uVar28 = *(undefined4 *)((long)piVar8 + uVar17);
    }
    if ((uVar5 < 0xd) || (uVar17 = (ulong)*(ushort *)((long)piVar8 + (0xc - lVar14)), uVar17 == 0))
    {
      puVar23 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)piVar8 + uVar17);
      puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
      puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      puVar27 = puVar1 + 1;
      if (*puVar1 != 0) {
        do {
          puVar27 = puVar27 + 1;
          puVar23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar13);
          _objc_release(puVar23);
        } while (puVar27 != puVar1 + 1 + *puVar1);
      }
      puVar23 = puVar13;
      func_0x00010bf51e00(puVar13);
      _objc_release(puVar13);
    }
  }
  func_0x00010c0323a0(uVar28,puVar18);
  _objc_release(puVar23);
  _objc_release(puVar21);
LAB_106735a4c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar18);
  return puVar18;
}



/* Entry: 106735984; end: 106735c37;  */

void FUN_106735984(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  int *piVar2;
  ushort uVar3;
  undefined *puVar4;
  long lVar5;
  ushort *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  uint *puVar13;
  uint *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  if (param_1 == (int *)0x0) {
    puVar8 = (undefined *)0x0;
    goto LAB_106735a4c;
  }
  puVar8 = PTR_PTR_1126cd4c0;
  _objc_alloc(PTR_PTR_1126cd4c0);
  lVar5 = (long)*param_1;
  puVar6 = (ushort *)((long)param_1 - lVar5);
  uVar3 = *puVar6;
  if (uVar3 < 5) {
    uVar9 = 0;
LAB_106735a0c:
    uVar10 = 0;
LAB_106735a10:
    puVar11 = (undefined *)0x0;
LAB_106735a14:
    puVar12 = (undefined *)0x0;
    uVar15 = 0;
  }
  else {
    if ((ulong)puVar6[2] == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined4 *)((long)param_1 + (ulong)puVar6[2]);
    }
    if (uVar3 < 7) goto LAB_106735a0c;
    if ((ulong)puVar6[3] == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined4 *)((long)param_1 + (ulong)puVar6[3]);
    }
    if (uVar3 < 9) goto LAB_106735a10;
    if ((ulong)puVar6[4] == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + (ulong)puVar6[4]);
      piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
      puVar11 = PTR_PTR_1126cd4c8;
      _objc_alloc(PTR_PTR_1126cd4c8);
      puVar6 = (ushort *)((long)piVar2 - (long)*piVar2);
      uVar3 = *puVar6;
      uVar17 = 0;
      uVar15 = 0;
      uVar16 = 0;
      uVar18 = 0;
      if (4 < uVar3) {
        if ((ulong)puVar6[2] != 0) {
          uVar15 = *(undefined4 *)((long)piVar2 + (ulong)puVar6[2]);
        }
        if (6 < uVar3) {
          if ((ulong)puVar6[3] != 0) {
            uVar16 = *(undefined4 *)((long)piVar2 + (ulong)puVar6[3]);
          }
          if (8 < uVar3) {
            if ((ulong)puVar6[4] != 0) {
              uVar17 = *(undefined4 *)((long)piVar2 + (ulong)puVar6[4]);
            }
            if ((10 < uVar3) && ((ulong)puVar6[5] != 0)) {
              uVar18 = *(undefined4 *)((long)piVar2 + (ulong)puVar6[5]);
            }
          }
        }
      }
      func_0x00010c04b860(uVar15,uVar16,uVar17,uVar18);
      lVar5 = (long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - lVar5);
    }
    if (uVar3 < 0xb) goto LAB_106735a14;
    uVar7 = (ulong)*(ushort *)((long)param_1 + (10 - lVar5));
    if (uVar7 == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(undefined4 *)((long)param_1 + uVar7);
    }
    if ((uVar3 < 0xd) || (uVar7 = (ulong)*(ushort *)((long)param_1 + (0xc - lVar5)), uVar7 == 0)) {
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar7);
      puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar1 + 1;
      if (*puVar1 != 0) {
        do {
          puVar14 = puVar13 + 1;
          puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*puVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar4,param_2,puVar12);
          _objc_release(puVar12);
          puVar13 = puVar14;
        } while (puVar14 != puVar1 + 1 + *puVar1);
      }
      puVar12 = puVar4;
      func_0x00010bf51e00(puVar4);
      _objc_release(puVar4);
    }
  }
  func_0x00010c0323a0(uVar15,puVar8,param_2,uVar9,uVar10,puVar11,puVar12);
  _objc_release(puVar12);
  _objc_release(puVar11);
LAB_106735a4c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106735c38; end: 106735f5b;  */

ulong FUN_106735c38(ulong param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined8 uStack_208;
  char *pcStack_200;
  undefined4 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined4 uStack_144;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uVar6 = param_2;
  func_0x00010bf8c000();
  _objc_retainAutoreleasedReturnValue();
  if (uVar6 == 0) {
    uVar8 = 0;
  }
  else {
    uVar7 = param_2;
    func_0x00010bf8c000(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_1;
    FUN_1067361c4(param_1,uVar7);
    _objc_release(uVar7);
    uVar8 = uVar8 & 0xffffffff;
  }
  _objc_release(uVar6);
  uVar6 = param_2;
  func_0x00010c08ce60();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lStack_158 = 0;
  uStack_150 = 0;
  lStack_160 = 0;
  uVar11 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(uVar6);
  uVar7 = uVar6;
  func_0x00010bf52a60();
  if (uVar7 != 0) {
    lVar9 = *plStack_130;
    do {
      uVar10 = 0;
      do {
        if (*plStack_130 != lVar9) {
          _objc_enumerationMutation(uVar6);
        }
        uVar5 = (int)*(undefined8 *)(lStack_138 + uVar10 * 8);
        func_0x00010c0b4fe0();
        uStack_144 = uVar5;
        func_0x00010568a8b4(&lStack_160,&uStack_144);
        uVar10 = uVar10 + 1;
      } while (uVar7 != uVar10);
      uVar7 = uVar6;
      func_0x00010bf52a60();
    } while (uVar7 != 0);
  }
  _objc_release(uVar6);
  _objc_release(uVar6);
  _objc_release(uVar6);
  uVar6 = param_2;
  func_0x00010c0ed100();
  uVar7 = param_2;
  func_0x00010beffa20();
  func_0x00010c084b80(param_2);
  lVar9 = 0x11315b168;
  if (lStack_158 - lStack_160 != 0) {
    lVar9 = lStack_160;
  }
  uVar10 = param_1;
  func_0x0001067363a0(param_1,lVar9,lStack_158 - lStack_160 >> 2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001067362cc(param_1,0xc,uVar10 & 0xffffffff);
  func_0x0001001ce290(uVar11,0,param_1,10);
  func_0x00010673633c(param_1,8,uVar8);
  func_0x0001001ce354(param_1,6,uVar7,0);
  func_0x0001001ce354(param_1,4,uVar6,0);
  uVar7 = (ulong)(uint)((iVar1 - iVar2) + iVar3);
  func_0x0001001ce548(param_1,uVar7);
  if (lStack_160 != 0) {
    lStack_158 = lStack_160;
    __ZdlPv();
  }
  uVar10 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(param_2);
  __Unwind_Resume();
  _objc_retain(uVar7);
  uVar6 = uVar7;
  func_0x00010c084c40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puStack_1e8 = &uStack_1f0;
  uStack_1f0 = 0;
  uStack_1e0 = 0x2020000000;
  uStack_1d8 = 0;
  puStack_220 = &uStack_228;
  uStack_228 = 0;
  uStack_218 = 0x3812000000;
  pcStack_210 = FUN_106736424;
  uStack_208 = 0x106736430;
  pcStack_200 = "";
  uStack_1f8 = 0;
  uVar11 = 0xc2000000;
  func_0x00010c0be220();
  uVar4 = *(uint *)(puStack_1e8 + 3);
  uVar5 = *(undefined4 *)(puStack_220 + 6);
  __Block_object_dispose(&uStack_228,8);
  __Block_object_dispose(&uStack_1f0,8);
  _objc_release(uVar6);
  uVar6 = uVar7;
  func_0x00010bf8d1c0(uVar7);
  uVar8 = uVar7;
  func_0x00010c2a4a60(uVar7);
  func_0x00010bf0ad20(uVar7);
  *(undefined1 *)(uVar10 + 0x46) = 1;
  iVar1 = *(int *)(uVar10 + 0x20);
  iVar2 = *(int *)(uVar10 + 0x30);
  iVar3 = *(int *)(uVar10 + 0x28);
  func_0x000100c3b11c(uVar10,0xc,uVar5);
  func_0x0001001ce290(uVar11,0,uVar10,8);
  func_0x000100c3b024(uVar10,6,uVar8,0);
  func_0x000100c3b024(uVar10,4,uVar6,0);
  func_0x000100ab13ac(uVar10,10,uVar4 & 0xff,0);
  func_0x0001001ce548(uVar10,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar7);
  return uVar10;
}



/* Entry: 106735f5c; end: 1067361c3;  */

long FUN_106735f5c(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  char *pcStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  _objc_retain(param_2);
  uVar6 = param_2;
  func_0x00010c084c40(param_2);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x3812000000;
  pcStack_b0 = FUN_106736424;
  uStack_a8 = 0x106736430;
  pcStack_a0 = "";
  uStack_98 = 0;
  uVar8 = 0xc2000000;
  func_0x00010c0be220();
  uVar1 = *(uint *)(puStack_88 + 3);
  uVar2 = *(undefined4 *)(puStack_c0 + 6);
  __Block_object_dispose(&uStack_c8,8);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uVar6);
  uVar6 = param_2;
  func_0x00010bf8d1c0(param_2);
  uVar7 = param_2;
  func_0x00010c2a4a60(param_2);
  func_0x00010bf0ad20(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar3 = *(int *)(param_1 + 0x20);
  iVar4 = *(int *)(param_1 + 0x30);
  iVar5 = *(int *)(param_1 + 0x28);
  func_0x000100c3b11c(param_1,0xc,uVar2);
  func_0x0001001ce290(uVar8,0,param_1,8);
  func_0x000100c3b024(param_1,6,uVar7,0);
  func_0x000100c3b024(param_1,4,uVar6,0);
  func_0x000100ab13ac(param_1,10,uVar1 & 0xff,0);
  func_0x0001001ce548(param_1,(iVar3 - iVar4) + iVar5);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1067361c4; end: 1067362cb;  */

long FUN_1067361c4(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  func_0x00010c24d960(param_3);
  uVar4 = param_1;
  func_0x00010bf940a0(param_3);
  uVar5 = uVar4;
  func_0x00010c274140(param_3);
  func_0x00010bf1fec0(param_3);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x0001001ce290(param_2,10);
  func_0x0001001ce290(uVar5,0,param_2,8);
  func_0x0001001ce290(uVar4,0,param_2,6);
  func_0x0001001ce290(param_1,0,param_2,4);
  func_0x0001001ce548(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 1067362cc; end: 10673640f;  */

void FUN_1067362cc(ulong param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  
  if (param_3 == 0) {
    return;
  }
  func_0x0001001ce088(param_1,4);
  iVar1 = (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x28)) -
          param_3) + 4;
  if ((iVar1 == 0) && (*(char *)(param_1 + 0x50) != '\x01')) {
    return;
  }
  uVar3 = param_1;
  func_0x0001001ce0bc(param_1,iVar1);
  puVar4 = *(ulong **)(param_1 + 0x38);
  if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar4) < 8) {
    func_0x0001001cde7c(param_1,8);
    puVar4 = *(ulong **)(param_1 + 0x38);
  }
  *puVar4 = uVar3 & 0xffffffff | (ulong)param_2 << 0x20;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  uVar2 = (uint)*(ushort *)(param_1 + 0x44);
  if (*(ushort *)(param_1 + 0x44) <= param_2) {
    uVar2 = param_2;
  }
  *(short *)(param_1 + 0x44) = (short)uVar2;
  return;
}



/* Entry: 106736410; end: 106736423;  */

void FUN_106736410(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  *(undefined4 *)(puVar1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  return;
}



/* Entry: 106736424; end: 106736433;  */

void FUN_106736424(long param_1,long param_2)

{
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  return;
}



/* Entry: 106736434; end: 10673649b;  */

void FUN_106736434(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  FUN_106735c38(uVar1,param_2);
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10673649c; end: 10673673b;  */

void FUN_10673649c(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  _objc_retain(param_3);
  *(undefined4 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x18) = 2;
  uVar8 = *(ulong *)(param_2 + 0x30);
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf8c000();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uVar9 = 0;
  }
  else {
    lVar5 = param_3;
    func_0x00010bf8c000(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    FUN_1067361c4(uVar8,lVar5);
    _objc_release(lVar5);
    uVar9 = uVar9 & 0xffffffff;
  }
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010c22a6c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uVar10 = 0;
  }
  else {
    lVar5 = param_3;
    func_0x00010c22a6c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    lVar6 = lVar5;
    func_0x00010c22a600(lVar5);
    lVar7 = lVar5;
    func_0x00010bf40c40(lVar5);
    *(undefined1 *)(uVar8 + 0x46) = 1;
    iVar1 = *(int *)(uVar8 + 0x20);
    iVar2 = *(int *)(uVar8 + 0x30);
    iVar3 = *(int *)(uVar8 + 0x28);
    func_0x0001001ce354(uVar8,6,lVar7,0);
    func_0x0001001ce354(uVar8,4,lVar6,0);
    uVar10 = uVar8;
    func_0x0001001ce548(uVar8,(iVar1 - iVar2) + iVar3);
    _objc_release(lVar5);
    _objc_release(lVar5);
    uVar10 = uVar10 & 0xffffffff;
  }
  _objc_release(lVar4);
  func_0x00010c23d500(param_3);
  lVar4 = param_3;
  func_0x00010c270f20(param_3);
  *(undefined1 *)(uVar8 + 0x46) = 1;
  iVar1 = *(int *)(uVar8 + 0x20);
  iVar2 = *(int *)(uVar8 + 0x30);
  iVar3 = *(int *)(uVar8 + 0x28);
  func_0x0001001ce354(uVar8,10,lVar4,0);
  if (uVar10 != 0) {
    func_0x0001001ce088(uVar8,4);
    func_0x0001001ce354(uVar8,8,(((*(int *)(uVar8 + 0x20) - *(int *)(uVar8 + 0x30)) +
                                 *(int *)(uVar8 + 0x28)) - (int)uVar10) + 4,0);
  }
  func_0x00010673633c(uVar8,6,uVar9);
  func_0x0001001ce290(param_1,0,uVar8,4);
  func_0x0001001ce548(uVar8,(iVar1 - iVar2) + iVar3);
  _objc_release(param_3);
  *(int *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + 0x30) = (int)uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10673673c; end: 106736877;  */

void FUN_10673673c(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  _objc_retain(param_2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 3;
  lVar8 = *(long *)(param_1 + 0x30);
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c25dfa0(param_2);
  uVar5 = param_2;
  func_0x00010beffa20(param_2);
  uVar6 = param_2;
  func_0x00010c099500(param_2);
  uVar7 = param_2;
  func_0x00010c26b920(param_2);
  *(undefined1 *)(lVar8 + 0x46) = 1;
  iVar1 = *(int *)(lVar8 + 0x20);
  iVar2 = *(int *)(lVar8 + 0x30);
  iVar3 = *(int *)(lVar8 + 0x28);
  func_0x0001001ce354(lVar8,10,uVar7,0);
  func_0x000100c3b024(lVar8,8,uVar6,0);
  func_0x0001001ce354(lVar8,6,uVar5,0);
  func_0x0001001ce354(lVar8,4,uVar4,0);
  func_0x0001001ce548(lVar8,(iVar1 - iVar2) + iVar3);
  _objc_release(param_2);
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)lVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106736878; end: 10673687f;  */

void FUN_106736878(void)

{
  return;
}



/* Entry: 106736880; end: 1067368b3;  */

void FUN_106736880(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110937e70;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1067368b4; end: 1067368f3;  */

void FUN_1067368b4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110937e70;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1067368f4; end: 10673692f;  */

long FUN_1067368f4(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110937ee0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 106736930; end: 10673693b;  */

undefined ** FUN_106736930(void)

{
  return &PTR_DAT_110937ee0;
}



/* Entry: 10673693c; end: 1067369b7;  */

undefined * FUN_10673693c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c3cf8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e5aa18,
                        &UNK_10ddde830,&UNK_10ddde84c,4,FUN_1067369b8,0);
    do {
      if (puRam00000001136c3cf8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c3cf8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c3cf8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c3cf8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c3cf8;
}



/* Entry: 1067369b8; end: 1067369c3;  */

bool FUN_1067369b8(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1067369c4; end: 106736a2b; +[SCLEStackLayout descriptor] */

void FUN_1067369c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3d00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af3c90,
                        &PTR____CFConstantStringClassReference_110e5aa38,&PTR_DAT_11315b178,
                        &PTR_DAT_11315b290,5,0x20,0x1c);
    puRam00000001136c3d00 = puVar1;
  }
  return;
}



/* Entry: 106736a2c; end: 106736ac7; +[SCLEStackLayout_Layout descriptor] */

undefined * FUN_106736a2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3d08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af3ce0,
                        &PTR____CFConstantStringClassReference_110e5aa58,&PTR_DAT_11315b178,
                        &PTR_DAT_11315b3d0,6,0x30,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112af3c90);
    puRam00000001136c3d08 = puVar1;
  }
  return puRam00000001136c3d08;
}



/* Entry: 106736ac8; end: 106736b43; +[SCLEStackLayout_GroupLayout descriptor] */

undefined * FUN_106736ac8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3d10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af3d30,
                        &PTR____CFConstantStringClassReference_110e5aa78,&PTR_DAT_11315b178,
                        &PTR_DAT_11315b330,5,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001136c3d10 = puVar1;
  }
  return puRam00000001136c3d10;
}



/* Entry: 106736b44; end: 106736bbf; +[SCLEStackLayout_ImageLayout descriptor] */

undefined * FUN_106736b44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3d18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af3d80,
                        &PTR____CFConstantStringClassReference_110e5aa98,&PTR_DAT_11315b178,
                        &PTR_DAT_11315b190,4,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001136c3d18 = puVar1;
  }
  return puRam00000001136c3d18;
}



/* Entry: 106736bc0; end: 106736c3b; +[SCLEStackLayout_TextLayout descriptor] */

undefined * FUN_106736bc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3d20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af3dd0,
                        &PTR____CFConstantStringClassReference_110e5aab8,&PTR_DAT_11315b178,
                        &PTR_DAT_11315b210,4,0x14,0x1c);
    func_0x00010c228780();
    puRam00000001136c3d20 = puVar1;
  }
  return puRam00000001136c3d20;
}



/* Entry: 106736c3c; end: 106736caf; -[SCLensFavoritesNotificationProvider initWithNotificationPool:] */

undefined1 * FUN_106736c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2d10;
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



/* Entry: 106736cb0; end: 106736cb7; -[SCLensFavoritesNotificationProvider notificationPool] */

void FUN_106736cb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_target_112678178);
  return;
}



/* Entry: 106736cb8; end: 106736cbf; -[SCLensFavoritesNotificationProvider presentNotificationForResult:lensIcon:actionHandler:] */

void FUN_106736cb8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10d390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_presentNotificationForResult_len_112620f00);
  return;
}



/* Entry: 106736cc0; end: 106737027; -[SCLensFavoritesNotificationProvider presentNotificationForResult:lensIcon:actionHandler:completion:] */

void FUN_106736cc0(undefined8 param_1,undefined8 param_2,undefined **param_3,long param_4,
                  long param_5,long param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 == (undefined **)0x0) goto LAB_106736ff4;
  func_0x00010c252d60();
  puVar3 = PTR_PTR_1126b0ae0;
  puVar1 = PTR_PTR_1126afde0;
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar5 = (undefined *)0x0;
  if ((long)param_3 < 2) {
    if (param_3 == (undefined **)0x0) {
      func_0x0001067371ac();
      _objc_retainAutoreleasedReturnValue();
LAB_106736e18:
      func_0x00010bf55ce0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      goto LAB_106736ec4;
    }
    if (param_3 == (undefined **)0x1) {
      func_0x000106737194();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
      func_0x00010c09e880();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(param_3);
      puVar1 = PTR_PTR_1126afde0;
      param_3 = ppuVar2;
      goto LAB_106736e18;
    }
  }
  else {
    if (param_3 == (undefined **)0x3) {
      if (param_4 == 0) goto LAB_106736ff4;
      func_0x00010673717c();
      _objc_retainAutoreleasedReturnValue();
      if (param_5 == 0) {
        ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
      }
      else {
        ppuVar2 = param_3;
        func_0x0001067371c4();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      if (param_3 != (undefined **)0x2) goto LAB_106736ecc;
      if (param_4 == 0) goto LAB_106736ff4;
      func_0x000106737164();
      _objc_retainAutoreleasedReturnValue();
      if (param_5 == 0) {
        ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
      }
      else {
        ppuVar2 = param_3;
        func_0x0001067371c4();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    func_0x00010bf57ee0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    if (param_5 != 0) {
      _objc_release(ppuVar2);
    }
LAB_106736ec4:
    _objc_release(param_3);
    puVar5 = puVar3;
  }
LAB_106736ecc:
  puVar1 = puVar5;
  if (param_6 != 0) {
    puVar1 = PTR_PTR_1126bfd70;
    _objc_alloc();
    func_0x00010c038a60();
    _objc_retain();
    _objc_release(puVar5);
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x3032000000;
    pcStack_68 = FUN_106737028;
    uStack_60 = 0x106737038;
    uStack_58 = 0;
    puVar3 = puVar1;
    func_0x00010c0dbc40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_retain(param_6);
    puVar5 = puVar3;
    func_0x00010c25ff20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puStack_78[5];
    puStack_78[5] = puVar5;
    _objc_release(uVar4);
    _objc_release(puVar3);
    __Block_object_dispose(&uStack_80,8);
    _objc_release(uStack_58);
    _objc_release(param_6);
  }
  func_0x00010c0dc640(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(param_1);
  _objc_release(puVar1);
LAB_106736ff4:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106737028; end: 10673703f;  */

void FUN_106737028(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106737040; end: 106737087;  */

void FUN_106737040(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf86d40(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000106737084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 106737088; end: 106737093; -[SCLensFavoritesNotificationProvider .cxx_destruct] */

void FUN_106737088(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106737094; end: 10673712b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106737094(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126cd4f8;
    _objc_alloc(PTR_PTR_1126cd4f8);
    lVar1 = param_1 + _DAT_11274f164;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c0dc640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c030020(puVar3,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10673712c; end: 106737163; -[SCLensFavoritesNotificationServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10673712c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274f164);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274f160);
  return;
}



/* Entry: 106737164; end: 1067371db;  */

void FUN_106737164(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e5aad8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e5aad8,
                      &PTR____CFConstantStringClassReference_110e5aaf8,0);
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



/* Entry: 1067371dc; end: 1067372d7; -[SCLensCreatorSubscriptionProvider initWithCreatorSettingsFetcher:creatorSettingsMutator:creatorSettingsTracker:] */

undefined1 *
FUN_1067371dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f2d18;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1067372d8; end: 10673733b; -[SCLensCreatorSubscriptionProvider dealloc] */

void FUN_1067372d8(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126f2d18;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10673733c; end: 106737383; -[SCLensCreatorSubscriptionProvider setUpdateHandler:] */

void FUN_10673733c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x10);
  _objc_storeWeak(param_1 + 8,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x10);
  return;
}



/* Entry: 106737384; end: 1067373bf; -[SCLensCreatorSubscriptionProvider updateHandler] */

void FUN_106737384(long param_1)

{
  long lVar1;
  
  _os_unfair_lock_lock(param_1 + 0x10);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  _os_unfair_lock_unlock(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1067373c0; end: 10673743f; -[SCLensCreatorSubscriptionProvider isSubscribedToCreatorWithId:] */

undefined8 FUN_1067373c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf5b7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c080120(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar3);
  return uVar2;
}



/* Entry: 106737440; end: 106737453; -[SCLensCreatorSubscriptionProvider subscribeToCreatorWithId:snapProId:completion:] */

void FUN_106737440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee1410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateSubscribed_onCreatorId_sn_112595ea8,1,param_3,param_4,param_5);
  return;
}



/* Entry: 106737454; end: 106737467; -[SCLensCreatorSubscriptionProvider unsubscribeFromCreatorWithId:snapProId:completion:] */

void FUN_106737454(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee1410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateSubscribed_onCreatorId_sn_112595ea8,0,param_3,param_4,param_5);
  return;
}



/* Entry: 106737468; end: 10673758b; -[SCLensCreatorSubscriptionProvider didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_106737468(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b4030;
  func_0x00010bf5b300(PTR_PTR_1126b4030);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar2 == 0) {
    puVar3 = PTR_PTR_1126b4030;
    func_0x00010bf5b340(PTR_PTR_1126b4030);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    _objc_release(puVar1);
    if ((int)uVar2 == 0) goto LAB_10673756c;
  }
  else {
    _objc_release(puVar1);
  }
  lVar4 = param_1;
  func_0x00010c2863c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10673758c;
    puStack_58 = &UNK_110841f80;
    _objc_retain(lVar4);
    lStack_50 = lVar4;
    lStack_48 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_70);
    _objc_release(lStack_50);
  }
  _objc_release(lVar4);
LAB_10673756c:
  _objc_release(param_3);
  return;
}



/* Entry: 10673758c; end: 106737597;  */

void FUN_10673758c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7e7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_didUpdateSubscriptionProvider__1125bd398,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106737598; end: 106737863; -[SCLensCreatorSubscriptionProvider _updateSubscribed:onCreatorId:snapProId:completion:] */

void FUN_106737598(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  ,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106737864;
  puStack_90 = &UNK_110937f40;
  _objc_retain(param_4);
  uStack_78 = (undefined1)param_3;
  uStack_88 = param_4;
  _objc_retain(param_6);
  ppuVar2 = &puStack_a8;
  uStack_80 = param_6;
  _objc_retainBlock();
  lVar3 = param_1;
  func_0x00010c0801a0();
  if (param_3 == (int)lVar3) {
    (*(code *)ppuVar2[2])(ppuVar2,0);
  }
  else {
    puVar4 = PTR_PTR_1126c55c0;
    func_0x00010c12fd60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    if (param_3 == 0) {
      puVar6 = PTR_PTR_1126b4028;
      func_0x00010bf29b40(PTR_PTR_1126b4028);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(ppuVar2);
      _objc_retain(ppuVar2);
      puVar1 = PTR___dispatch_main_q_11034be20;
      func_0x00010c0f9260(uVar5);
      _objc_release(puVar1);
      _objc_release(puVar6);
      _objc_release(uVar5);
      _objc_release(ppuVar2);
    }
    else {
      _objc_retain(ppuVar2);
      _objc_retain(ppuVar2);
      puVar1 = PTR___dispatch_main_q_11034be20;
      func_0x00010c0f92a0(uVar5);
      _objc_release(puVar1);
      _objc_release(uVar5);
      _objc_release(ppuVar2);
    }
    _objc_release(ppuVar2);
    _objc_release(puVar4);
  }
  _objc_release(ppuVar2);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106737864; end: 1067378af;  */

void FUN_106737864(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106737870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1067378b0; end: 1067378f3; -[SCLensCreatorSubscriptionProvider .cxx_destruct] */

void FUN_1067378b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1067378f4; end: 1067379d7; -[SCLensCreatorSubscriptionServiceProvider provide] */

void FUN_1067378f4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cd510;
  _objc_alloc(PTR_PTR_1126cd510);
  func_0x00010c03ba20();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067379d8; end: 106737ae7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067379d8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126cd508;
    _objc_alloc(PTR_PTR_1126cd508);
    lVar1 = param_1 + _DAT_11274f180;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf5b760();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_11274f180;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010bf5b780();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + _DAT_11274f180;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010bf5b7c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c006a00(puVar7,param_2,lVar2,lVar4,lVar6);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106737ae8; end: 106737b1f; -[SCLensCreatorSubscriptionServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106737ae8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274f180);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274f17c);
  return;
}



/* Entry: 106737b20; end: 106737b93; -[SCLensAddFriendsLaunchServiceImpl initWithAddFriendsScopeLauncher:] */

undefined1 * FUN_106737b20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2d20;
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



/* Entry: 106737b94; end: 106737b9b; -[SCLensAddFriendsLaunchServiceImpl exposeAddFriendsScope:owner:] */

void FUN_106737b94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08b7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_launchFeatureWithScope_owner__112600800);
  return;
}



/* Entry: 106737b9c; end: 106737bd3; -[SCLensAddFriendsLaunchServiceImpl removeScope] */

void FUN_106737b9c(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c076220();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf94c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_endLaunchedFeature_1125c2cb0);
    return;
  }
  return;
}



/* Entry: 106737bd4; end: 106737bdf; -[SCLensAddFriendsLaunchServiceImpl .cxx_destruct] */

void FUN_106737bd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106737be0; end: 106737ca3; -[SCLensUserFeatureLauncherServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106737be0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126b5350;
  _objc_alloc();
  func_0x00010c041f80();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106737ca4;
  puStack_40 = &UNK_110937fa0;
  puVar2 = PTR_PTR_1126ae720;
  puStack_38 = puVar1;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cd520;
  _objc_alloc(PTR_PTR_1126cd520);
  func_0x00010bff2280();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106737ca4; end: 106737cd3;  */

void FUN_106737ca4(void)

{
  _objc_alloc(PTR_PTR_1126cd518);
  func_0x00010bff22e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106737cd4; end: 106737d0f; -[SCLensUserFeatureLauncherServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106737cd4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274f188,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274f18c);
  return;
}



/* Entry: 106737d10; end: 106737db3; -[SCLensTopicPageScopeLauncher initWithTopicViewerScopeExposer:topicViewerLensScopeServices:] */

undefined1 *
FUN_106737d10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2d28;
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



/* Entry: 106737db4; end: 1067380cb; -[SCLensTopicPageScopeLauncher presentLensTopicModel:pageSessionId:sourcePageType:uiContainer:dismissBlock:] */

void FUN_106737db4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  undefined8 uVar11;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_7;
  func_0x00010bf51e00();
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  _objc_release(uVar11);
  puVar2 = PTR_PTR_1126b60a0;
  _objc_alloc();
  uVar1 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x00010c095760();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bfe5b40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf5b580(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf5b600(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078fa0();
  func_0x00010c06d940();
  uVar7 = param_3;
  func_0x00010c11fc00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c11fc20();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010bef4d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c024600();
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar11);
  _objc_release(uVar1);
  _objc_initWeak(auStack_70,param_1);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_1067380cc;
  puStack_a0 = &UNK_110871ae8;
  _objc_copyWeak(auStack_80,auStack_70);
  _objc_retain(puVar2);
  puStack_98 = puVar2;
  _objc_retain(param_4);
  uStack_90 = param_4;
  uStack_78 = param_5;
  _objc_retain(param_6);
  uStack_88 = param_6;
  func_0x0001000d76cc("APPSTORE",&puStack_b8);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(puStack_98);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1067380cc; end: 106738133;  */

void FUN_1067380cc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    func_0x00010bf23300(uVar2,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x30),lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(lVar1 + 8),param_2,uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106738134; end: 10673816b; -[SCLensTopicPageScopeLauncher isPresented] */

bool FUN_106738134(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 10673816c; end: 1067381d7; -[SCLensTopicPageScopeLauncher didCompleteTopicViewerLensScope:] */

void FUN_10673816c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = 0;
    if (*(long *)(param_1 + 0x18) != 0) {
      (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
      uVar2 = *(undefined8 *)(param_1 + 0x18);
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1067381d8; end: 106738213; -[SCLensTopicPageScopeLauncher .cxx_destruct] */

void FUN_1067381d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106738214; end: 1067382f7; -[SCLensTopicsServiceProvider provide] */

void FUN_106738214(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cd528;
  _objc_alloc(PTR_PTR_1126cd528);
  func_0x00010c0259c0();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067382f8; end: 106738337;  */

void FUN_1067382f8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be4bf80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106738338; end: 1067383cf; -[SCLensTopicsServiceProvider _lensTopicPagePresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106738338(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126cd530;
  _objc_alloc(PTR_PTR_1126cd530);
  if (param_1 == 0) {
    _objc_retain(0);
    uVar2 = 0;
    param_1 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11274f1a0);
    _objc_retain(uVar2);
    param_1 = param_1 + _DAT_11274f1a4;
    _objc_loadWeakRetained(param_1);
  }
  func_0x00010c054760(puVar1,param_2,uVar2,param_1);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067383d0; end: 106738457; -[SCLensTopicsServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067383d0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274f1a4);
  _objc_storeStrong(param_1 + _DAT_11274f1a0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274f19c);
  return;
}



/* Entry: 106738458; end: 10673849b; -[SCScanServiceProvider _createScanScopeLauncher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106738458(void)

{
  _objc_alloc(PTR_PTR_1126cd540);
  func_0x00010c0418a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10673849c; end: 1067384d7; -[SCScanServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10673849c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274f1ac,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274f1a8);
  return;
}



/* Entry: 1067384d8; end: 106738553;  */

void FUN_1067384d8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11a2a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bdf2c80(lVar1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106738554; end: 106738583;  */

bool FUN_106738554(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  _objc_release();
  return param_1 != 0;
}



/* Entry: 106738584; end: 1067387eb;  */

void FUN_106738584(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar17 = (undefined *)0x0;
  }
  else {
    puVar17 = PTR_PTR_1126cd548;
    _objc_alloc();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11a2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c14e820();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(lVar1 + 0x90);
    uVar5 = *(undefined8 *)(lVar1 + 0x68);
    func_0x00010bf29960();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(lVar1 + 0x68);
    func_0x00010bf299a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(lVar1 + 0x80);
    func_0x00010bf058c0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(lVar1 + 0x58);
    uVar8 = *(undefined8 *)(lVar1 + 0x80);
    func_0x00010c0f98e0();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(lVar1 + 0x50);
    uVar20 = *(undefined8 *)(lVar1 + 0x48);
    uVar16 = *(undefined8 *)(lVar1 + 0x30);
    uVar9 = *(undefined8 *)(lVar1 + 0x78);
    func_0x00010c0b3760();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(lVar1 + 0x70);
    lVar10 = lVar1 + 0x88;
    _objc_loadWeakRetained();
    uVar11 = *(undefined8 *)(lVar1 + 0x70);
    func_0x00010c0b6900();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1067387ec;
    puStack_78 = &UNK_11084e7d0;
    uVar19 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar19);
    ppuVar13 = &puStack_90;
    uStack_70 = uVar19;
    FUN_1067387ec();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011c20(puVar17,param_2,uVar4,uVar18,uVar5,uVar6,uVar7,uVar14,uVar8,uVar20,uVar21,
                        uVar16,uVar9,uVar15,lVar10,uVar11,uVar12,ppuVar13,
                        *(undefined8 *)(lVar1 + 0x98),*(undefined8 *)(lVar1 + 0xa0));
    _objc_release(ppuVar13);
    _objc_release(uStack_70);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(lVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 1067387ec; end: 1067388c7;  */

void FUN_1067387ec(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_28,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  _objc_alloc(PTR_PTR_1126b0120);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c03d8e0(puVar2);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067388c8; end: 10673899f;  */

void FUN_1067388c8(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf16700(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1067389a0; end: 106738a7f; -[SCMainCameraScanFeatureProvider _createScanFeatureWithPublicFeatureCatalog:] */

void FUN_1067389a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126cd550;
  _objc_alloc(PTR_PTR_1126cd550);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010bf299a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010bf29960(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x70);
  lVar4 = param_1 + 0x88;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c041940(puVar1,param_2,uVar5,uVar6,uVar2,uVar3,uVar7,lVar4,
                      *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x98),
                      *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18));
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106738a80; end: 106738b83; -[SCMainCameraScanFeatureProvider .cxx_destruct] */

void FUN_106738a80(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_destroyWeak(param_1 + 0x88);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


