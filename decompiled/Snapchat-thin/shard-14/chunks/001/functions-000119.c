/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10affd1c4; end: 10affd43f; -[SCPremiumPublisherTile initWithCoder:] */

undefined1 * FUN_10affd1c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112704178;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x78) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10affd440; end: 10affd6f3; -[SCPremiumPublisherTile initWithTileId:headline:imageURL:logoURL:videoThumbnailURL:videoThumbnailFirstFrameURL:logoLocationType:logoReadStateOverlayColor:showSubtitle:showProgress:bitmojiTileTemplateId:singleTileContentObject:autoPlayingThumbnailURL:cameoTile:garmBrandSafety:] */

undefined8 *
FUN_10affd440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  puStack_68 = PTR_PTR_112704178;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    puVar1[7] = param_9;
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    puVar1[10] = param_12;
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar3);
    puVar1[0xf] = param_17;
  }
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10affd6f4; end: 10affd717; -[SCPremiumPublisherTile copyWithZone:] */

undefined8 FUN_10affd6f4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10affd718; end: 10affd87b; -[SCPremiumPublisherTile encodeWithCoder:] */

void FUN_10affd718(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f49158);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f49958);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f4a078);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110ed3458);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f4a098);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f4a0b8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110f4a0d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110f4a0f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110f4a118);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110f4a138);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x58),
                      &PTR____CFConstantStringClassReference_110f4a158);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x60),
                      &PTR____CFConstantStringClassReference_110f4a178);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x68),
                      &PTR____CFConstantStringClassReference_110f4a198);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x70),
                      &PTR____CFConstantStringClassReference_110f4a1b8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x78),
                      &PTR____CFConstantStringClassReference_110ed3738);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10affd87c; end: 10affd98b; -[SCPremiumPublisherTile hash] */

undefined8 * FUN_10affd87c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_a0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_a0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_98 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_90 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x38);
  uStack_68 = *(undefined8 *)(param_1 + 0x40);
  lStack_70 = -lVar5;
  if (-1 < lVar5) {
    lStack_70 = lVar5;
  }
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x50);
  uStack_50 = *(undefined8 *)(param_1 + 0x58);
  lStack_58 = -lVar5;
  if (-1 < lVar5) {
    lStack_58 = lVar5;
  }
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x78);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  uStack_38 = uVar1;
  func_0x000107c3191c(&uStack_a0,0xf);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10affdb2c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10affdb38;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(long *)((long)puVar3 + 0x38) == *(long *)(param_3 + 0x38) &&
         (*(long *)((long)puVar3 + 0x50) == *(long *)(param_3 + 0x50))) &&
        (*(long *)((long)puVar3 + 0x78) == *(long *)(param_3 + 0x78))))) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x20);
            if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x28);
              if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x30);
                if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  lVar5 = *(long *)((long)puVar3 + 0x40);
                  if ((lVar5 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071c60(), (int)lVar5 != 0)) {
                    lVar5 = *(long *)((long)puVar3 + 0x48);
                    if ((lVar5 == *(long *)(param_3 + 0x48)) ||
                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = *(long *)((long)puVar3 + 0x58);
                      if ((lVar5 == *(long *)(param_3 + 0x58)) ||
                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        lVar5 = *(long *)((long)puVar3 + 0x60);
                        if ((lVar5 == *(long *)(param_3 + 0x60)) ||
                           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                          lVar5 = *(long *)((long)puVar3 + 0x68);
                          if ((lVar5 == *(long *)(param_3 + 0x68)) ||
                             (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                            puVar6 = *(undefined1 **)((long)puVar3 + 0x70);
                            if (puVar6 != *(undefined1 **)(param_3 + 0x70)) {
                              func_0x00010c071ae0();
                              goto LAB_10affdb38;
                            }
                            goto LAB_10affdb2c;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10affdb38:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10affd98c; end: 10affdb53; -[SCPremiumPublisherTile isEqual:] */

long FUN_10affd98c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10affdb2c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10affdb38;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38) &&
         (*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50))) &&
        (*(long *)(param_1 + 0x78) == *(long *)(param_3 + 0x78))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071c60(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x48);
                    if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x58);
                      if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x60);
                        if ((lVar3 == *(long *)(param_3 + 0x60)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x68);
                          if ((lVar3 == *(long *)(param_3 + 0x68)) ||
                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                            lVar3 = *(long *)(param_1 + 0x70);
                            if (lVar3 != *(long *)(param_3 + 0x70)) {
                              func_0x00010c071ae0();
                              goto LAB_10affdb38;
                            }
                            goto LAB_10affdb2c;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10affdb38:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10affdb54; end: 10affdb5b; -[SCPremiumPublisherTile tileId] */

undefined8 FUN_10affdb54(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10affdb5c; end: 10affdb63; -[SCPremiumPublisherTile headline] */

undefined8 FUN_10affdb5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10affdb64; end: 10affdb6b; -[SCPremiumPublisherTile imageURL] */

undefined8 FUN_10affdb64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10affdb6c; end: 10affdb73; -[SCPremiumPublisherTile logoURL] */

undefined8 FUN_10affdb6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10affdb74; end: 10affdb7b; -[SCPremiumPublisherTile videoThumbnailURL] */

undefined8 FUN_10affdb74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10affdb7c; end: 10affdb83; -[SCPremiumPublisherTile videoThumbnailFirstFrameURL] */

undefined8 FUN_10affdb7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10affdb84; end: 10affdb8b; -[SCPremiumPublisherTile logoLocationType] */

undefined8 FUN_10affdb84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10affdb8c; end: 10affdb93; -[SCPremiumPublisherTile logoReadStateOverlayColor] */

undefined8 FUN_10affdb8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10affdb94; end: 10affdb9b; -[SCPremiumPublisherTile showSubtitle] */

undefined8 FUN_10affdb94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10affdb9c; end: 10affdba3; -[SCPremiumPublisherTile showProgress] */

undefined8 FUN_10affdb9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10affdba4; end: 10affdbab; -[SCPremiumPublisherTile bitmojiTileTemplateId] */

undefined8 FUN_10affdba4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10affdbac; end: 10affdbb3; -[SCPremiumPublisherTile singleTileContentObject] */

undefined8 FUN_10affdbac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10affdbb4; end: 10affdbbb; -[SCPremiumPublisherTile autoPlayingThumbnailURL] */

undefined8 FUN_10affdbb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10affdbbc; end: 10affdbc3; -[SCPremiumPublisherTile cameoTile] */

undefined8 FUN_10affdbbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10affdbc4; end: 10affdbcb; -[SCPremiumPublisherTile garmBrandSafety] */

undefined8 FUN_10affdbc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10affdbcc; end: 10affdc73; -[SCPremiumPublisherTile .cxx_destruct] */

void FUN_10affdbcc(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 10affdc74; end: 10affdc8f; +[SCPremiumPublisherTileBuilder premiumPublisherTile] */

void FUN_10affdc74(void)

{
  _objc_alloc_init(PTR_PTR_1126d9768);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10affdc90; end: 10affe07b; +[SCPremiumPublisherTileBuilder premiumPublisherTileFromExistingPremiumPublisherTile:] */

void FUN_10affdc90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined8 uVar28;
  undefined *puVar29;
  
  puVar1 = PTR_PTR_1126d9768;
  _objc_retain(param_3);
  func_0x00010c108e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c26ebe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2bb160(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bfe0440();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2af6c0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bfe8f00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2afac0(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c0b4680();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2b3220(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c29b7a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010c2bc800(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010c29b6c0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010c2bc7e0(puVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010c0b45a0(param_3);
  puVar15 = puVar13;
  func_0x00010c2b31c0(puVar13,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010c0b4620();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010c2b3200(puVar15,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_3;
  func_0x00010c23a520();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar16;
  func_0x00010c2b8f60(puVar16,param_2,uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_3;
  func_0x00010c239600(param_3);
  puVar20 = puVar18;
  func_0x00010c2b8f20(puVar18,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_3;
  func_0x00010bf1c4e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar20;
  func_0x00010c2a9540(puVar20,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_3;
  func_0x00010c23cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar21;
  func_0x00010c2b90a0(puVar21,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_3;
  func_0x00010bf11b00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar23;
  func_0x00010c2a8d40(puVar23,param_2,uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = param_3;
  func_0x00010bf28ba0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar25;
  func_0x00010c2a9cc0(puVar25,param_2,uVar26);
  _objc_retainAutoreleasedReturnValue();
  uVar28 = param_3;
  func_0x00010bfbe4e0(param_3);
  _objc_release(param_3);
  puVar29 = puVar27;
  func_0x00010c2aed20(puVar27,param_2,uVar28);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar27);
  _objc_release(uVar26);
  _objc_release(puVar25);
  _objc_release(uVar24);
  _objc_release(puVar23);
  _objc_release(uVar22);
  _objc_release(puVar21);
  _objc_release(uVar19);
  _objc_release(puVar20);
  _objc_release(puVar18);
  _objc_release(uVar17);
  _objc_release(puVar16);
  _objc_release(uVar14);
  _objc_release(puVar15);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar29);
  return;
}



/* Entry: 10affe07c; end: 10affe0db; -[SCPremiumPublisherTileBuilder build] */

void FUN_10affe07c(void)

{
  _objc_alloc(PTR_PTR_1126d9798);
  func_0x00010c0521e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10affe0dc; end: 10affe113; -[SCPremiumPublisherTileBuilder withTileId:] */

long FUN_10affe0dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10affe114; end: 10affe14b; -[SCPremiumPublisherTileBuilder withHeadline:] */

long FUN_10affe114(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10affe14c; end: 10affe183; -[SCPremiumPublisherTileBuilder withImageURL:] */

long FUN_10affe14c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10affe184; end: 10affe1bb; -[SCPremiumPublisherTileBuilder withLogoURL:] */

long FUN_10affe184(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10affe1bc; end: 10affe1f3; -[SCPremiumPublisherTileBuilder withVideoThumbnailURL:] */

long FUN_10affe1bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10affe1f4; end: 10affe22b; -[SCPremiumPublisherTileBuilder withVideoThumbnailFirstFrameURL:] */

long FUN_10affe1f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10affe22c; end: 10affe233; -[SCPremiumPublisherTileBuilder withLogoLocationType:] */

void FUN_10affe22c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 10affe234; end: 10affe26b; -[SCPremiumPublisherTileBuilder withLogoReadStateOverlayColor:] */

long FUN_10affe234(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10affe26c; end: 10affe2a3; -[SCPremiumPublisherTileBuilder withShowSubtitle:] */

long FUN_10affe26c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10affe2a4; end: 10affe2ab; -[SCPremiumPublisherTileBuilder withShowProgress:] */

void FUN_10affe2a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 10affe2ac; end: 10affe2e3; -[SCPremiumPublisherTileBuilder withBitmojiTileTemplateId:] */

long FUN_10affe2ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10affe2e4; end: 10affe31b; -[SCPremiumPublisherTileBuilder withSingleTileContentObject:] */

long FUN_10affe2e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10affe31c; end: 10affe353; -[SCPremiumPublisherTileBuilder withAutoPlayingThumbnailURL:] */

long FUN_10affe31c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10affe354; end: 10affe38b; -[SCPremiumPublisherTileBuilder withCameoTile:] */

long FUN_10affe354(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10affe38c; end: 10affe393; -[SCPremiumPublisherTileBuilder withGarmBrandSafety:] */

void FUN_10affe38c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x78) = param_3;
  return;
}



/* Entry: 10affe394; end: 10affe43b; -[SCPremiumPublisherTileBuilder .cxx_destruct] */

void FUN_10affe394(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 10affe43c; end: 10affe4c3; -[SCDiscoverContextContextHint initWithCoder:] */

undefined1 * FUN_10affe43c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112704180;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10affe4c4; end: 10affe53b; -[SCDiscoverContextContextHint initWithContextHint:] */

undefined1 * FUN_10affe4c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112704180;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10affe53c; end: 10affe55f; -[SCDiscoverContextContextHint copyWithZone:] */

undefined8 FUN_10affe53c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10affe560; end: 10affe577; -[SCDiscoverContextContextHint encodeWithCoder:] */

void FUN_10affe560(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14cb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_sc_encodeObject_forKey__112630ce0,*(undefined8 *)(param_1 + 8),
             &PTR____CFConstantStringClassReference_110f4a1d8);
  return;
}



/* Entry: 10affe578; end: 10affe57f; -[SCDiscoverContextContextHint hash] */

void FUN_10affe578(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10affe580; end: 10affe60f; -[SCDiscoverContextContextHint isEqual:] */

long FUN_10affe580(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10affe5f4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10affe5f4;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10affe5f4;
    }
  }
  lVar3 = 1;
LAB_10affe5f4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10affe610; end: 10affe617; -[SCDiscoverContextContextHint contextHint] */

undefined8 FUN_10affe610(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10affe618; end: 10affe623; -[SCDiscoverContextContextHint .cxx_destruct] */

void FUN_10affe618(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10affe624; end: 10affe69b; -[SCDiscoverCameraAttachment initWithCameraAttachment:] */

undefined1 * FUN_10affe624(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112704188;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10affe69c; end: 10affe723; -[SCDiscoverCameraAttachment initWithCoder:] */

undefined1 * FUN_10affe69c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112704188;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10affe724; end: 10affe747; -[SCDiscoverCameraAttachment copyWithZone:] */

undefined8 FUN_10affe724(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10affe748; end: 10affe75f; -[SCDiscoverCameraAttachment encodeWithCoder:] */

void FUN_10affe748(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14cb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_sc_encodeObject_forKey__112630ce0,*(undefined8 *)(param_1 + 8),
             &PTR____CFConstantStringClassReference_110f4a1f8);
  return;
}



/* Entry: 10affe760; end: 10affe767; -[SCDiscoverCameraAttachment hash] */

void FUN_10affe760(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10affe768; end: 10affe7f7; -[SCDiscoverCameraAttachment isEqual:] */

long FUN_10affe768(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10affe7dc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10affe7dc;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10affe7dc;
    }
  }
  lVar3 = 1;
LAB_10affe7dc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10affe7f8; end: 10affe7ff; -[SCDiscoverCameraAttachment cameraAttachment] */

undefined8 FUN_10affe7f8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10affe800; end: 10affe80b; -[SCDiscoverCameraAttachment .cxx_destruct] */

void FUN_10affe800(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10affe80c; end: 10affeaff; -[SCPremiumPublisherSnap initWithCoder:] */

undefined1 * FUN_10affe80c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112704190;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ee0();
    *(int *)((long)puVar1 + 0xc) = (int)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 10) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined8 *)((long)puVar1 + 0x80) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x88) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10affeb00; end: 10affee47; -[SCPremiumPublisherSnap initWithSnapURL:hashValue:snapId:snapType:adType:adPlacementMetadata:tile:viewed:sequence:mediaTypeImage:isUserGeneratedContent:originalSnapId:mediaType:snapDocDataModel:discoverContextHint:boostMetadata:spotlightEngagementMetadata:hostUserId:boltFirstFrame:garmBrandSafety:] */

undefined8 *
FUN_10affeb00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
             undefined4 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_15);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  puStack_70 = PTR_PTR_112704190;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0xc) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_10;
    puVar1[8] = param_12;
    *(undefined1 *)((long)puVar1 + 9) = (undefined1)param_13;
    *(undefined1 *)((long)puVar1 + 10) = param_13._1_1_;
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    puVar1[10] = param_16;
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_19;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_20;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_21;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_22;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x10];
    puVar1[0x10] = uVar2;
    _objc_release(uVar3);
    puVar1[0x11] = param_23;
  }
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_15);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10affee48; end: 10affee6b; -[SCPremiumPublisherSnap copyWithZone:] */

undefined8 FUN_10affee48(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10affee6c; end: 10afff033; -[SCPremiumPublisherSnap encodeWithCoder:] */

void FUN_10affee6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f49938);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f4a218);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110dbb0f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f4a238);
  func_0x00010bf92f80(param_3,param_2,*(undefined4 *)(param_1 + 0xc),
                      &PTR____CFConstantStringClassReference_110e2dd18);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f4a258);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110f4a278);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f4a298);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110f4a2b8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110f4a2d8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 10),
                      &PTR____CFConstantStringClassReference_110ed3678);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110ed3698);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110df2798);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x58),
                      &PTR____CFConstantStringClassReference_110ed3638);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x60),
                      &PTR____CFConstantStringClassReference_110ed36f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x68),
                      &PTR____CFConstantStringClassReference_110ed36b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x70),
                      &PTR____CFConstantStringClassReference_110ed36d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x78),
                      &PTR____CFConstantStringClassReference_110ed3538);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x80),
                      &PTR____CFConstantStringClassReference_110f4a2f8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x88),
                      &PTR____CFConstantStringClassReference_110ed3738);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10afff034; end: 10afff163; -[SCPremiumPublisherSnap hash] */

undefined8 * FUN_10afff034(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  long lStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_c8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_c0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_b8 = uVar1;
  func_0x00010bfde980();
  lStack_a8 = (long)*(int *)(param_1 + 0xc);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_b0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_a0 = uVar1;
  func_0x00010bfde980();
  uStack_90 = (ulong)*(byte *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x40);
  uStack_70 = *(undefined8 *)(param_1 + 0x48);
  lStack_88 = -lVar5;
  if (-1 < lVar5) {
    lStack_88 = lVar5;
  }
  uStack_80 = (ulong)*(byte *)(param_1 + 9);
  uStack_78 = (ulong)*(byte *)(param_1 + 10);
  uStack_98 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x50);
  uStack_60 = *(undefined8 *)(param_1 + 0x58);
  lStack_68 = -lVar5;
  if (-1 < lVar5) {
    lStack_68 = lVar5;
  }
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x88);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  puVar3 = &uStack_c8;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar3,0x14);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10afff35c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afff368;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((((ulong)puVar4 & 1) != 0) &&
         ((((*(int *)((long)puVar3 + 0xc) == *(int *)((long)param_3 + 0xc) &&
            (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))) && (puVar3[8] == param_3[8])) &&
          ((*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9) &&
           (*(char *)((long)puVar3 + 10) == *(char *)((long)param_3 + 10))))))) &&
        (puVar3[10] == param_3[10])) && (puVar3[0x11] == param_3[0x11])) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[6];
              if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = puVar3[7];
                if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  lVar5 = puVar3[9];
                  if ((lVar5 == param_3[9]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = puVar3[0xb];
                    if ((lVar5 == param_3[0xb]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = puVar3[0xc];
                      if ((lVar5 == param_3[0xc]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        lVar5 = puVar3[0xd];
                        if ((lVar5 == param_3[0xd]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                          lVar5 = puVar3[0xe];
                          if ((lVar5 == param_3[0xe]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                            lVar5 = puVar3[0xf];
                            if ((lVar5 == param_3[0xf]) || (func_0x00010c071ae0(), (int)lVar5 != 0))
                            {
                              puVar6 = (undefined8 *)puVar3[0x10];
                              if (puVar6 != (undefined8 *)param_3[0x10]) {
                                func_0x00010c071ae0();
                                goto LAB_10afff368;
                              }
                              goto LAB_10afff35c;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10afff368:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10afff164; end: 10afff383; -[SCPremiumPublisherSnap isEqual:] */

long FUN_10afff164(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afff35c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afff368;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(int *)(param_1 + 0xc) == *(int *)(param_3 + 0xc) &&
            (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
           (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))) &&
          ((*(char *)(param_1 + 9) == *(char *)(param_3 + 9) &&
           (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))))))) &&
        (*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50))) &&
       (*(long *)(param_1 + 0x88) == *(long *)(param_3 + 0x88))) {
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
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x48);
                  if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x58);
                    if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x60);
                      if ((lVar3 == *(long *)(param_3 + 0x60)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x68);
                        if ((lVar3 == *(long *)(param_3 + 0x68)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x70);
                          if ((lVar3 == *(long *)(param_3 + 0x70)) ||
                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                            lVar3 = *(long *)(param_1 + 0x78);
                            if ((lVar3 == *(long *)(param_3 + 0x78)) ||
                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                              lVar3 = *(long *)(param_1 + 0x80);
                              if (lVar3 != *(long *)(param_3 + 0x80)) {
                                func_0x00010c071ae0();
                                goto LAB_10afff368;
                              }
                              goto LAB_10afff35c;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afff368:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afff384; end: 10afff38b; -[SCPremiumPublisherSnap snapURL] */

undefined8 FUN_10afff384(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afff38c; end: 10afff393; -[SCPremiumPublisherSnap hashValue] */

undefined8 FUN_10afff38c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afff394; end: 10afff39b; -[SCPremiumPublisherSnap snapId] */

undefined8 FUN_10afff394(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afff39c; end: 10afff3a3; -[SCPremiumPublisherSnap snapType] */

undefined8 FUN_10afff39c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afff3a4; end: 10afff3ab; -[SCPremiumPublisherSnap adType] */

undefined4 FUN_10afff3a4(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10afff3ac; end: 10afff3b3; -[SCPremiumPublisherSnap adPlacementMetadata] */

undefined8 FUN_10afff3ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afff3b4; end: 10afff3bb; -[SCPremiumPublisherSnap tile] */

undefined8 FUN_10afff3b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10afff3bc; end: 10afff3c3; -[SCPremiumPublisherSnap viewed] */

undefined1 FUN_10afff3bc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afff3c4; end: 10afff3cb; -[SCPremiumPublisherSnap sequence] */

undefined8 FUN_10afff3c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10afff3cc; end: 10afff3d3; -[SCPremiumPublisherSnap mediaTypeImage] */

undefined1 FUN_10afff3cc(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10afff3d4; end: 10afff3db; -[SCPremiumPublisherSnap isUserGeneratedContent] */

undefined1 FUN_10afff3d4(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10afff3dc; end: 10afff3e3; -[SCPremiumPublisherSnap originalSnapId] */

undefined8 FUN_10afff3dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10afff3e4; end: 10afff3eb; -[SCPremiumPublisherSnap mediaType] */

undefined8 FUN_10afff3e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10afff3ec; end: 10afff3f3; -[SCPremiumPublisherSnap snapDocDataModel] */

undefined8 FUN_10afff3ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10afff3f4; end: 10afff3fb; -[SCPremiumPublisherSnap discoverContextHint] */

undefined8 FUN_10afff3f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10afff3fc; end: 10afff403; -[SCPremiumPublisherSnap boostMetadata] */

undefined8 FUN_10afff3fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10afff404; end: 10afff40b; -[SCPremiumPublisherSnap spotlightEngagementMetadata] */

undefined8 FUN_10afff404(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10afff40c; end: 10afff413; -[SCPremiumPublisherSnap hostUserId] */

undefined8 FUN_10afff40c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10afff414; end: 10afff41b; -[SCPremiumPublisherSnap boltFirstFrame] */

undefined8 FUN_10afff414(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10afff41c; end: 10afff423; -[SCPremiumPublisherSnap garmBrandSafety] */

undefined8 FUN_10afff41c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10afff424; end: 10afff4d7; -[SCPremiumPublisherSnap .cxx_destruct] */

void FUN_10afff424(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 10afff4d8; end: 10afff72b; -[SCPremiumPublisherStory initWithCoder:] */

undefined1 * FUN_10afff4d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112704198;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 10) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x58) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x60) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x68) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x70) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x80) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afff72c; end: 10afff94b; -[SCPremiumPublisherStory initWithPublisher:editionId:segmentId:headline:iconURL:publisherTimestampMsecs:isLive:snaps:watchedState:showMetadata:hasCuratedSnaps:isShareable:totalNumSnaps:maxSequence:storyViewCount:indicatorType:contentToken:originalPublishTimestampMsecs:] */

undefined8 *
FUN_10afff72c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined4 param_14,undefined4 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_20);
  puStack_70 = PTR_PTR_112704198;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    puVar1[3] = param_4;
    puVar1[4] = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    puVar1[7] = param_8;
    *(undefined1 *)(puVar1 + 1) = param_9;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = (undefined1)param_14;
    *(undefined1 *)((long)puVar1 + 10) = param_14._1_1_;
    puVar1[0xb] = param_16;
    puVar1[0xc] = param_17;
    puVar1[0xd] = param_18;
    puVar1[0xe] = param_19;
    uVar2 = param_20;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    _objc_release(uVar3);
    puVar1[0x10] = param_21;
  }
  _objc_release(param_20);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10afff94c; end: 10afff96f; -[SCPremiumPublisherStory copyWithZone:] */

undefined8 FUN_10afff94c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afff970; end: 10afffb0f; -[SCPremiumPublisherStory encodeWithCoder:] */

void FUN_10afff970(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f4a318);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110ed3038);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110ed30b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f49958);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f2c098);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110f4a338);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f4a358);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110f49798);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110ed3078);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110f4a378);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110f4a398);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 10),
                      &PTR____CFConstantStringClassReference_110ed31d8);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x58),
                      &PTR____CFConstantStringClassReference_110f49238);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x60),
                      &PTR____CFConstantStringClassReference_110f4a3b8);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x68),
                      &PTR____CFConstantStringClassReference_110f4a3d8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x70),
                      &PTR____CFConstantStringClassReference_110f4a3f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x78),
                      &PTR____CFConstantStringClassReference_110f4a418);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x80),
                      &PTR____CFConstantStringClassReference_110f4a438);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10afffb10; end: 10afffbff; -[SCPremiumPublisherStory hash] */

undefined8 * FUN_10afffb10(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_b0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_a8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_b8 = uVar1;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_a0 = uVar2;
  func_0x00010bfde980();
  uStack_90 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_88 = (ulong)*(byte *)(param_1 + 8);
  uStack_98 = uVar3;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uStack_68 = (ulong)*(byte *)(param_1 + 9);
  uStack_60 = (ulong)*(byte *)(param_1 + 10);
  uStack_58 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x58));
  uStack_50 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x60));
  uStack_48 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x68));
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x70));
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x80);
  puVar4 = &uStack_b8;
  uStack_38 = uVar2;
  func_0x000107c3191c(puVar4,0x12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10afffda8:
    puVar7 = (undefined8 *)0x1;
  }
  else {
    puVar7 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afffdb4;
    puVar7 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((((ulong)puVar5 & 1) != 0) &&
         ((((puVar4[3] == param_3[3] && (puVar4[4] == param_3[4])) && (puVar4[7] == param_3[7])) &&
          ((*(char *)(puVar4 + 1) == *(char *)(param_3 + 1) &&
           (*(char *)((long)puVar4 + 9) == *(char *)((long)param_3 + 9))))))) &&
        (*(char *)((long)puVar4 + 10) == *(char *)((long)param_3 + 10))) &&
       (((puVar4[0xb] == param_3[0xb] && (puVar4[0xc] == param_3[0xc])) &&
        ((puVar4[0xd] == param_3[0xd] &&
         ((puVar4[0xe] == param_3[0xe] && (puVar4[0x10] == param_3[0x10])))))))) {
      lVar6 = puVar4[2];
      if ((lVar6 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
        lVar6 = puVar4[5];
        if ((lVar6 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
          lVar6 = puVar4[6];
          if ((lVar6 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
            lVar6 = puVar4[8];
            if ((lVar6 == param_3[8]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
              lVar6 = puVar4[9];
              if ((lVar6 == param_3[9]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                lVar6 = puVar4[10];
                if ((lVar6 == param_3[10]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                  puVar7 = (undefined8 *)puVar4[0xf];
                  if (puVar7 != (undefined8 *)param_3[0xf]) {
                    func_0x00010c071ae0();
                    goto LAB_10afffdb4;
                  }
                  goto LAB_10afffda8;
                }
              }
            }
          }
        }
      }
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_10afffdb4:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 10afffc00; end: 10afffdcf; -[SCPremiumPublisherStory isEqual:] */

long FUN_10afffc00(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afffda8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afffdb4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
            (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
           (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))) &&
          ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
           (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))))) &&
        (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
       (((*(long *)(param_1 + 0x58) == *(long *)(param_3 + 0x58) &&
         (*(long *)(param_1 + 0x60) == *(long *)(param_3 + 0x60))) &&
        ((*(long *)(param_1 + 0x68) == *(long *)(param_3 + 0x68) &&
         ((*(long *)(param_1 + 0x70) == *(long *)(param_3 + 0x70) &&
          (*(long *)(param_1 + 0x80) == *(long *)(param_3 + 0x80))))))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x28);
        if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x30);
          if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x40);
            if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x48);
              if ((lVar3 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x50);
                if ((lVar3 == *(long *)(param_3 + 0x50)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x78);
                  if (lVar3 != *(long *)(param_3 + 0x78)) {
                    func_0x00010c071ae0();
                    goto LAB_10afffdb4;
                  }
                  goto LAB_10afffda8;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afffdb4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afffdd0; end: 10afffdd7; -[SCPremiumPublisherStory publisher] */

undefined8 FUN_10afffdd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afffdd8; end: 10afffddf; -[SCPremiumPublisherStory editionId] */

undefined8 FUN_10afffdd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afffde0; end: 10afffde7; -[SCPremiumPublisherStory segmentId] */

undefined8 FUN_10afffde0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afffde8; end: 10afffdef; -[SCPremiumPublisherStory headline] */

undefined8 FUN_10afffde8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afffdf0; end: 10afffdf7; -[SCPremiumPublisherStory iconURL] */

undefined8 FUN_10afffdf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afffdf8; end: 10afffdff; -[SCPremiumPublisherStory publisherTimestampMsecs] */

undefined8 FUN_10afffdf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10afffe00; end: 10afffe07; -[SCPremiumPublisherStory isLive] */

undefined1 FUN_10afffe00(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afffe08; end: 10afffe0f; -[SCPremiumPublisherStory snaps] */

undefined8 FUN_10afffe08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10afffe10; end: 10afffe17; -[SCPremiumPublisherStory watchedState] */

undefined8 FUN_10afffe10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10afffe18; end: 10afffe1f; -[SCPremiumPublisherStory showMetadata] */

undefined8 FUN_10afffe18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}


