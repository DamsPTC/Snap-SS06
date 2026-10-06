/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b02c724; end: 10b02c737; +[SCCMapLayerHeaderSubtitleConfiguration valdiMarshallableObjectDescriptor] */

void FUN_10b02c724(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110cb0568;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02c738; end: 10b02c76f; -[SCCMapLayerLoaderContext initWithLayerIdentifier:api:componentName:closeHandler:] */

void FUN_10b02c738(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b02c8e8(PTR_PTR_112704a90);
  func_0x00010b02c900(auStack_20);
  return;
}



/* Entry: 10b02c770; end: 10b02c783; +[SCCMapLayerLoaderContext valdiMarshallableObjectDescriptor] */

void FUN_10b02c770(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb05b0;
  param_1[1] = &PTR_DAT_110cb0658;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02c784; end: 10b02c7b7; -[SCCMapLayerOptions init] */

void FUN_10b02c784(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112704a98;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10b02c7b8; end: 10b02c7cb; +[SCCMapLayerOptions valdiMarshallableObjectDescriptor] */

void FUN_10b02c7b8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb0680;
  param_1[1] = &PTR_s_SCBridgeObservable_110cb0710;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02c7cc; end: 10b02c7fb; -[SCCMapViewportChangeParameters initWithAnimated:] */

void FUN_10b02c7cc(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b02c8e8(PTR_PTR_112704aa0);
  func_0x00010b02c900(auStack_20);
  return;
}



/* Entry: 10b02c7fc; end: 10b02c80f; +[SCCMapViewportChangeParameters valdiMarshallableObjectDescriptor] */

void FUN_10b02c7fc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb0728;
  param_1[1] = &PTR_DAT_110cb07a0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02c810; end: 10b02c83f; -[SCCMapViewportInsets initWithTop:bottom:left:right:] */

void FUN_10b02c810(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b02c8e8(PTR_PTR_112704aa8);
  func_0x00010b02c900(auStack_20);
  return;
}



/* Entry: 10b02c840; end: 10b02c853; +[SCCMapViewportInsets valdiMarshallableObjectDescriptor] */

void FUN_10b02c840(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_top_110cb07b0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02c854; end: 10b02c873; -[SCCMapVisualConfiguration initWithVisibleBitmoji:heatmapVisible:] */

void FUN_10b02c854(void)

{
  func_0x00010b02c8cc(PTR_PTR_112704ab0);
  return;
}



/* Entry: 10b02c874; end: 10b02c887; +[SCCMapVisualConfiguration valdiMarshallableObjectDescriptor] */

void FUN_10b02c874(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb0828;
  param_1[1] = &PTR_DAT_110cb0870;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02c888; end: 10b02c8a7; -[SCCTileData initWithIdentifier:data:] */

void FUN_10b02c888(void)

{
  func_0x00010b02c8cc(PTR_PTR_112704ab8);
  return;
}



/* Entry: 10b02c8a8; end: 10b02c917; +[SCCTileData valdiMarshallableObjectDescriptor] */

void FUN_10b02c8a8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_identifier_110cb0880;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02c918; end: 10b02c99f; -[SCSelectionStoryRankerResult initWithResult:threshold:] */

undefined1 *
FUN_10b02c918(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112704ac0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b02c9a0; end: 10b02c9c3; -[SCSelectionStoryRankerResult copyWithZone:] */

undefined8 FUN_10b02c9a0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b02c9c4; end: 10b02ca37; -[SCSelectionStoryRankerResult hash] */

undefined8 * FUN_10b02c9c4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x10);
  lStack_30 = -lVar4;
  if (-1 < lVar4) {
    lStack_30 = lVar4;
  }
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar5 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b02cabc;
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar5 = (undefined8 *)0x0;
      goto LAB_10b02cabc;
    }
    puVar5 = (undefined8 *)puVar2[1];
    if (puVar5 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_10b02cabc;
    }
  }
  puVar5 = (undefined8 *)0x1;
LAB_10b02cabc:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 10b02ca38; end: 10b02cad7; -[SCSelectionStoryRankerResult isEqual:] */

long FUN_10b02ca38(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b02cabc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_10b02cabc;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b02cabc;
    }
  }
  lVar3 = 1;
LAB_10b02cabc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b02cad8; end: 10b02cadf; -[SCSelectionStoryRankerResult result] */

undefined8 FUN_10b02cad8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b02cae0; end: 10b02cae7; -[SCSelectionStoryRankerResult threshold] */

undefined8 FUN_10b02cae0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b02cae8; end: 10b02caf3; -[SCSelectionStoryRankerResult .cxx_destruct] */

void FUN_10b02cae8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b02caf4; end: 10b02ccdf; -[SCSelectionStoryRankerParameters initWithPrivateStories:myStories:sharedStories:businessStories:communityStory:mapsStory:ourStoryPlaceTag:maxNumberOfCellsAboveFold:lastTimePostedDaysThreshold:lastTimeCreatedDaysThreshold:currentDate:] */

undefined8 *
FUN_10b02caf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

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
  _objc_retain(param_9);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_112704ac8;
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
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    puVar1[8] = param_10;
    puVar1[9] = param_11;
    puVar1[10] = param_12;
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_13);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b02cce0; end: 10b02cd03; -[SCSelectionStoryRankerParameters copyWithZone:] */

undefined8 FUN_10b02cce0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b02cd04; end: 10b02cdcf; -[SCSelectionStoryRankerParameters hash] */

undefined8 * FUN_10b02cd04(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
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
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uStack_48 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x48));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x50));
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_80,0xb);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b02cf10:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b02cf1c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(long *)((long)puVar3 + 0x40) == *(long *)(param_3 + 0x40) &&
         (*(long *)((long)puVar3 + 0x48) == *(long *)(param_3 + 0x48))) &&
        (*(long *)((long)puVar3 + 0x50) == *(long *)(param_3 + 0x50))))) {
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
                  lVar5 = *(long *)((long)puVar3 + 0x38);
                  if ((lVar5 == *(long *)(param_3 + 0x38)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    puVar6 = *(undefined1 **)((long)puVar3 + 0x58);
                    if (puVar6 != *(undefined1 **)(param_3 + 0x58)) {
                      func_0x00010c071ae0();
                      goto LAB_10b02cf1c;
                    }
                    goto LAB_10b02cf10;
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
LAB_10b02cf1c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b02cdd0; end: 10b02cf37; -[SCSelectionStoryRankerParameters isEqual:] */

long FUN_10b02cdd0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b02cf10:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b02cf1c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40) &&
         (*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48))) &&
        (*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50))))) {
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
                  lVar3 = *(long *)(param_1 + 0x38);
                  if ((lVar3 == *(long *)(param_3 + 0x38)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x58);
                    if (lVar3 != *(long *)(param_3 + 0x58)) {
                      func_0x00010c071ae0();
                      goto LAB_10b02cf1c;
                    }
                    goto LAB_10b02cf10;
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
LAB_10b02cf1c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b02cf38; end: 10b02cf3f; -[SCSelectionStoryRankerParameters privateStories] */

undefined8 FUN_10b02cf38(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b02cf40; end: 10b02cf47; -[SCSelectionStoryRankerParameters myStories] */

undefined8 FUN_10b02cf40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b02cf48; end: 10b02cf4f; -[SCSelectionStoryRankerParameters sharedStories] */

undefined8 FUN_10b02cf48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b02cf50; end: 10b02cf57; -[SCSelectionStoryRankerParameters businessStories] */

undefined8 FUN_10b02cf50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b02cf58; end: 10b02cf5f; -[SCSelectionStoryRankerParameters communityStory] */

undefined8 FUN_10b02cf58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b02cf60; end: 10b02cf67; -[SCSelectionStoryRankerParameters mapsStory] */

undefined8 FUN_10b02cf60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b02cf68; end: 10b02cf6f; -[SCSelectionStoryRankerParameters ourStoryPlaceTag] */

undefined8 FUN_10b02cf68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b02cf70; end: 10b02cf77; -[SCSelectionStoryRankerParameters maxNumberOfCellsAboveFold] */

undefined8 FUN_10b02cf70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b02cf78; end: 10b02cf7f; -[SCSelectionStoryRankerParameters lastTimePostedDaysThreshold] */

undefined8 FUN_10b02cf78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b02cf80; end: 10b02cf87; -[SCSelectionStoryRankerParameters lastTimeCreatedDaysThreshold] */

undefined8 FUN_10b02cf80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b02cf88; end: 10b02cf8f; -[SCSelectionStoryRankerParameters currentDate] */

undefined8 FUN_10b02cf88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b02cf90; end: 10b02d007; -[SCSelectionStoryRankerParameters .cxx_destruct] */

void FUN_10b02cf90(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 10b02d008; end: 10b02d0df; -[SCSelectionStoryRankingData initWithSelectionStory:lastTimePostedTimestamp:lastTimeCreatedTimestamp:] */

undefined1 *
FUN_10b02d008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112704ad0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b02d0e0; end: 10b02d103; -[SCSelectionStoryRankingData copyWithZone:] */

undefined8 FUN_10b02d0e0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b02d104; end: 10b02d183; -[SCSelectionStoryRankingData hash] */

undefined8 * FUN_10b02d104(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b02d21c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b02d228;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10b02d228;
          }
          goto LAB_10b02d21c;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b02d228:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b02d184; end: 10b02d243; -[SCSelectionStoryRankingData isEqual:] */

long FUN_10b02d184(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b02d21c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b02d228;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10b02d228;
          }
          goto LAB_10b02d21c;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b02d228:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b02d244; end: 10b02d24b; -[SCSelectionStoryRankingData selectionStory] */

undefined8 FUN_10b02d244(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b02d24c; end: 10b02d253; -[SCSelectionStoryRankingData lastTimePostedTimestamp] */

undefined8 FUN_10b02d24c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b02d254; end: 10b02d25b; -[SCSelectionStoryRankingData lastTimeCreatedTimestamp] */

undefined8 FUN_10b02d254(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b02d25c; end: 10b02d297; -[SCSelectionStoryRankingData .cxx_destruct] */

void FUN_10b02d25c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b02d298; end: 10b02d403; +[SCSelectionStory businessStoryWithBusinessStoryId:displayName:logoURL:officialBadgeType:tier:category:categoryEnum:subcategoryEnum:customTTL:bitmojiInfo:isHost:] */

void FUN_10b02d298(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puVar1 = PTR_PTR_1126c51c8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x68);
  *(undefined8 *)(puVar2 + 0x68) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x70);
  *(undefined8 *)(puVar2 + 0x70) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x78);
  *(undefined8 *)(puVar2 + 0x78) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x80) = param_6;
  *(undefined8 *)(puVar2 + 0x88) = param_7;
  *(undefined8 *)(puVar2 + 0x90) = param_8;
  *(undefined8 *)(puVar2 + 0x98) = param_9;
  uVar3 = *(undefined8 *)(puVar2 + 0xa8);
  *(undefined8 *)(puVar2 + 0xa0) = param_10;
  *(undefined8 *)(puVar2 + 0xa8) = param_11;
  _objc_retain(param_11);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xb0);
  *(undefined8 *)(puVar2 + 0xb0) = param_12;
  _objc_release(uVar3);
  _objc_release(param_11);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2[0xb8] = param_13;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b02d404; end: 10b02d49b; +[SCSelectionStory condensedMyStoryWithStories:storySelectedInDropDown:] */

void FUN_10b02d404(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c51c8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  uVar3 = *(undefined8 *)(puVar2 + 0x160);
  *(undefined8 *)(puVar2 + 0x160) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x168);
  *(undefined8 *)(puVar2 + 0x168) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b02d49c; end: 10b02d627; +[SCSelectionStory customStoryWithPublicationId:type:displayName:subtitle:creationTimestamp:myLastPostTimestamp:joinTimestamp:customTTL:] */

void FUN_10b02d49c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar1 = PTR_PTR_1126c51c8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0xc0);
  *(undefined8 *)(puVar2 + 0xc0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xd0);
  *(undefined8 *)(puVar2 + 200) = param_4;
  *(undefined8 *)(puVar2 + 0xd0) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xd8);
  *(undefined8 *)(puVar2 + 0xd8) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xe0);
  *(undefined8 *)(puVar2 + 0xe0) = param_7;
  _objc_retain(param_7);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xe8);
  *(undefined8 *)(puVar2 + 0xe8) = param_8;
  _objc_retain(param_8);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xf0);
  *(undefined8 *)(puVar2 + 0xf0) = param_9;
  _objc_retain(param_9);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xf8);
  *(undefined8 *)(puVar2 + 0xf8) = param_10;
  _objc_release(uVar3);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b02d628; end: 10b02d72f; +[SCSelectionStory fanPassStoryWithFanPassStoryId:displayName:logoURL:customTTL:isHost:] */

void FUN_10b02d628(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126c51c8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
  uVar3 = *(undefined8 *)(puVar2 + 0x170);
  *(undefined8 *)(puVar2 + 0x170) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x178);
  *(undefined8 *)(puVar2 + 0x178) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x180);
  *(undefined8 *)(puVar2 + 0x180) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x188);
  *(undefined8 *)(puVar2 + 0x188) = param_6;
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2[400] = param_7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b02d730; end: 10b02d863; +[SCSelectionStory myStoryWithUserId:username:type:bitmojiAvatarId:bitmojiSelfieId:storyPrivacy:customTTL:] */

void FUN_10b02d730(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126c51c8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  *(undefined8 *)(puVar2 + 0x28) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_7;
  _objc_retain(param_7);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x38) = param_8;
  *(undefined8 *)(puVar2 + 0x40) = param_9;
  _objc_release(uVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b02d864; end: 10b02d95b; +[SCSelectionStory ourStoryWithOurStoryId:displayName:subtext:mapLastPostTimestamp:] */

void FUN_10b02d864(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126c51c8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x50) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x58);
  *(undefined8 *)(puVar2 + 0x58) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x60);
  *(undefined8 *)(puVar2 + 0x60) = param_6;
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b02d95c; end: 10b02dbbb; +[SCSelectionStory spotlightStoryWithSpotlightStoryId:memberRoleBusinessId:memberRoleAvatarURL:snapchatter:displayName:subtext:actionIdentifier:badgeTitle:isPostingEnabled:showDisclosureIndicator:leadingAccessoryImage:subtextIcon:isErrorState:] */

void FUN_10b02d95c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
                  undefined8 param_13,undefined8 param_14,undefined1 param_15)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puVar1 = PTR_PTR_1126c51c8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x100);
  *(undefined8 *)(puVar2 + 0x100) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x108);
  *(undefined8 *)(puVar2 + 0x108) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x110);
  *(undefined8 *)(puVar2 + 0x110) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x118);
  *(undefined8 *)(puVar2 + 0x118) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x120);
  *(undefined8 *)(puVar2 + 0x120) = param_7;
  _objc_retain(param_7);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x128);
  *(undefined8 *)(puVar2 + 0x128) = param_8;
  _objc_retain(param_8);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x130);
  *(undefined8 *)(puVar2 + 0x130) = param_9;
  _objc_retain(param_9);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x138);
  *(undefined8 *)(puVar2 + 0x138) = param_10;
  _objc_retain(param_10);
  _objc_release(uVar3);
  puVar2[0x140] = (undefined1)param_11;
  puVar2[0x141] = param_11._1_1_;
  uVar3 = *(undefined8 *)(puVar2 + 0x148);
  *(undefined8 *)(puVar2 + 0x148) = param_13;
  _objc_retain(param_13);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x150);
  *(undefined8 *)(puVar2 + 0x150) = param_14;
  _objc_release(uVar3);
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2[0x158] = param_15;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b02dbbc; end: 10b02dbdf; -[SCSelectionStory copyWithZone:] */

undefined8 FUN_10b02dbbc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b02dbe0; end: 10b02de4f; -[SCSelectionStory hash] */

void FUN_10b02dbe0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
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
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_1c0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1c0 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_1b8 = uVar3;
  func_0x00010bfde980();
  uStack_1a8 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_1b0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_1a0 = uVar3;
  func_0x00010bfde980();
  lVar1 = *(long *)(param_1 + 0x38);
  uStack_188 = *(undefined8 *)(param_1 + 0x40);
  lStack_190 = -lVar1;
  if (-1 < lVar1) {
    lStack_190 = lVar1;
  }
  uStack_198 = uVar2;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_180 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  uStack_178 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_170 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  uStack_168 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  uStack_160 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  uStack_158 = uVar2;
  func_0x00010bfde980();
  uStack_148 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x80));
  uStack_140 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x88));
  uStack_138 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x90));
  uStack_130 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x98));
  lVar1 = *(long *)(param_1 + 0xa0);
  uStack_120 = *(undefined8 *)(param_1 + 0xa8);
  lStack_128 = -lVar1;
  if (-1 < lVar1) {
    lStack_128 = lVar1;
  }
  uStack_150 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010bfde980();
  uStack_110 = (ulong)*(byte *)(param_1 + 0xb8);
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  uStack_118 = uVar3;
  func_0x00010bfde980();
  lVar1 = *(long *)(param_1 + 200);
  uStack_f8 = *(undefined8 *)(param_1 + 0xd0);
  lStack_100 = -lVar1;
  if (-1 < lVar1) {
    lStack_100 = lVar1;
  }
  uStack_108 = uVar2;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  uStack_f0 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0xe8);
  uStack_e8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xf0);
  uStack_e0 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0xf8);
  uStack_d8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x100);
  uStack_d0 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x108);
  uStack_c8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x110);
  uStack_c0 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x118);
  uStack_b8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x120);
  uStack_b0 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x128);
  uStack_a8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x130);
  uStack_a0 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x138);
  uStack_98 = uVar2;
  func_0x00010bfde980();
  uStack_88 = (ulong)*(byte *)(param_1 + 0x140);
  uStack_80 = (ulong)*(byte *)(param_1 + 0x141);
  uVar2 = *(undefined8 *)(param_1 + 0x148);
  uStack_90 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x150);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uStack_68 = (ulong)*(byte *)(param_1 + 0x158);
  uVar2 = *(undefined8 *)(param_1 + 0x160);
  uStack_70 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x168);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x170);
  uStack_58 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x178);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x180);
  uStack_48 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x188);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 400);
  uStack_38 = uVar3;
  func_0x000107c3191c(&uStack_1c0,0x33);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_1e8 = PTR_PTR_112704ad8;
  puStack_1f0 = (undefined1 *)puVar4;
  _objc_msgSendSuper2(&puStack_1f0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b02de50; end: 10b02de93; -[SCSelectionStory internalInit] */

void FUN_10b02de50(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112704ad8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b02de94; end: 10b02e363; -[SCSelectionStory isEqual:] */

long FUN_10b02de94(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b02e33c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b02e348;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
            (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
           (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))) &&
          ((*(long *)(param_1 + 0x80) == *(long *)(param_3 + 0x80) &&
           (*(long *)(param_1 + 0x88) == *(long *)(param_3 + 0x88))))))) &&
        (*(long *)(param_1 + 0x90) == *(long *)(param_3 + 0x90))) &&
       ((((*(long *)(param_1 + 0x98) == *(long *)(param_3 + 0x98) &&
          (*(long *)(param_1 + 0xa0) == *(long *)(param_3 + 0xa0))) &&
         ((*(char *)(param_1 + 0xb8) == *(char *)(param_3 + 0xb8) &&
          (((*(long *)(param_1 + 200) == *(long *)(param_3 + 200) &&
            (*(char *)(param_1 + 0x140) == *(char *)(param_3 + 0x140))) &&
           (*(char *)(param_1 + 0x141) == *(char *)(param_3 + 0x141))))))) &&
        ((*(char *)(param_1 + 0x158) == *(char *)(param_3 + 0x158) &&
         (*(char *)(param_1 + 400) == *(char *)(param_3 + 400))))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x40);
              if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x48);
                if ((lVar3 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x50);
                  if ((lVar3 == *(long *)(param_3 + 0x50)) ||
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
                              lVar3 = *(long *)(param_1 + 0xa8);
                              if ((lVar3 == *(long *)(param_3 + 0xa8)) ||
                                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                lVar3 = *(long *)(param_1 + 0xb0);
                                if ((lVar3 == *(long *)(param_3 + 0xb0)) ||
                                   (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                  lVar3 = *(long *)(param_1 + 0xc0);
                                  if ((lVar3 == *(long *)(param_3 + 0xc0)) ||
                                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                    lVar3 = *(long *)(param_1 + 0xd0);
                                    if ((lVar3 == *(long *)(param_3 + 0xd0)) ||
                                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                      lVar3 = *(long *)(param_1 + 0xd8);
                                      if ((lVar3 == *(long *)(param_3 + 0xd8)) ||
                                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                        lVar3 = *(long *)(param_1 + 0xe0);
                                        if ((lVar3 == *(long *)(param_3 + 0xe0)) ||
                                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                          lVar3 = *(long *)(param_1 + 0xe8);
                                          if ((lVar3 == *(long *)(param_3 + 0xe8)) ||
                                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                            lVar3 = *(long *)(param_1 + 0xf0);
                                            if ((lVar3 == *(long *)(param_3 + 0xf0)) ||
                                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                              lVar3 = *(long *)(param_1 + 0xf8);
                                              if ((lVar3 == *(long *)(param_3 + 0xf8)) ||
                                                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                lVar3 = *(long *)(param_1 + 0x100);
                                                if ((lVar3 == *(long *)(param_3 + 0x100)) ||
                                                   (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                  lVar3 = *(long *)(param_1 + 0x108);
                                                  if ((lVar3 == *(long *)(param_3 + 0x108)) ||
                                                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                    lVar3 = *(long *)(param_1 + 0x110);
                                                    if ((lVar3 == *(long *)(param_3 + 0x110)) ||
                                                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                      lVar3 = *(long *)(param_1 + 0x118);
                                                      if ((lVar3 == *(long *)(param_3 + 0x118)) ||
                                                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                        lVar3 = *(long *)(param_1 + 0x120);
                                                        if ((lVar3 == *(long *)(param_3 + 0x120)) ||
                                                           (func_0x00010c071ae0(), (int)lVar3 != 0))
                                                        {
                                                          lVar3 = *(long *)(param_1 + 0x128);
                                                          if ((lVar3 == *(long *)(param_3 + 0x128))
                                                             || (func_0x00010c071ae0(),
                                                                (int)lVar3 != 0)) {
                                                            lVar3 = *(long *)(param_1 + 0x130);
                                                            if ((lVar3 == *(long *)(param_3 + 0x130)
                                                                ) || (func_0x00010c071ae0(),
                                                                     (int)lVar3 != 0)) {
                                                              lVar3 = *(long *)(param_1 + 0x138);
                                                              if ((lVar3 == *(long *)(param_3 +
                                                                                     0x138)) ||
                                                                 (func_0x00010c071ae0(),
                                                                 (int)lVar3 != 0)) {
                                                                lVar3 = *(long *)(param_1 + 0x148);
                                                                if ((lVar3 == *(long *)(param_3 +
                                                                                       0x148)) ||
                                                                   (func_0x00010c071ae0(),
                                                                   (int)lVar3 != 0)) {
                                                                  lVar3 = *(long *)(param_1 + 0x150)
                                                                  ;
                                                                  if ((lVar3 == *(long *)(param_3 +
                                                                                         0x150)) ||
                                                                     (func_0x00010c071ae0(),
                                                                     (int)lVar3 != 0)) {
                                                                    lVar3 = *(long *)(param_1 +
                                                                                     0x160);
                                                                    if ((lVar3 == *(long *)(param_3 
                                                  + 0x160)) ||
                                                  (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                    lVar3 = *(long *)(param_1 + 0x168);
                                                    if ((lVar3 == *(long *)(param_3 + 0x168)) ||
                                                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                      lVar3 = *(long *)(param_1 + 0x170);
                                                      if ((lVar3 == *(long *)(param_3 + 0x170)) ||
                                                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                        lVar3 = *(long *)(param_1 + 0x178);
                                                        if ((lVar3 == *(long *)(param_3 + 0x178)) ||
                                                           (func_0x00010c071ae0(), (int)lVar3 != 0))
                                                        {
                                                          lVar3 = *(long *)(param_1 + 0x180);
                                                          if ((lVar3 == *(long *)(param_3 + 0x180))
                                                             || (func_0x00010c071ae0(),
                                                                (int)lVar3 != 0)) {
                                                            lVar3 = *(long *)(param_1 + 0x188);
                                                            if (lVar3 != *(long *)(param_3 + 0x188))
                                                            {
                                                              func_0x00010c071ae0();
                                                              goto LAB_10b02e348;
                                                            }
                                                            goto LAB_10b02e33c;
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
LAB_10b02e348:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b02e364; end: 10b02e587; -[SCSelectionStory matchMyStory:ourStory:businessStory:customStory:spotlightStory:condensedMyStory:fanPassStory:] */

void FUN_10b02e364(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 3) {
    if (lVar1 == 0) {
      if (param_3 != 0) {
        (**(code **)(param_3 + 0x10))
                  (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                   *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                   *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                   *(undefined8 *)(param_1 + 0x40));
      }
    }
    else if (lVar1 == 1) {
      if (param_4 != 0) {
        (**(code **)(param_4 + 0x10))
                  (param_4,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                   *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60));
      }
    }
    else if ((lVar1 == 2) && (param_5 != 0)) {
      (**(code **)(param_5 + 0x10))
                (param_5,*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),
                 *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),
                 *(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90),
                 *(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa0),
                 *(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xb0),
                 *(undefined1 *)(param_1 + 0xb8));
    }
  }
  else if (lVar1 < 5) {
    if (lVar1 == 3) {
      if (param_6 != 0) {
        (**(code **)(param_6 + 0x10))
                  (param_6,*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 200),
                   *(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8),
                   *(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xe8),
                   *(undefined8 *)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0xf8));
      }
    }
    else if ((lVar1 == 4) && (param_7 != 0)) {
      (**(code **)(param_7 + 0x10))
                (param_7,*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x108),
                 *(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x118),
                 *(undefined8 *)(param_1 + 0x120),*(undefined8 *)(param_1 + 0x128),
                 *(undefined8 *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x138),
                 *(undefined2 *)(param_1 + 0x140),*(undefined8 *)(param_1 + 0x148),
                 *(undefined8 *)(param_1 + 0x150),*(undefined1 *)(param_1 + 0x158));
    }
  }
  else if (lVar1 == 5) {
    if (param_8 != 0) {
      (**(code **)(param_8 + 0x10))
                (param_8,*(undefined8 *)(param_1 + 0x160),*(undefined8 *)(param_1 + 0x168));
    }
  }
  else if ((lVar1 == 6) && (param_9 != 0)) {
    (**(code **)(param_9 + 0x10))
              (param_9,*(undefined8 *)(param_1 + 0x170),*(undefined8 *)(param_1 + 0x178),
               *(undefined8 *)(param_1 + 0x180),*(undefined8 *)(param_1 + 0x188),
               *(undefined1 *)(param_1 + 400));
  }
  _objc_release(param_9);
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



/* Entry: 10b02e588; end: 10b02e75b; -[SCSelectionStory .cxx_destruct] */

void FUN_10b02e588(long param_1)

{
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b02e75c; end: 10b02e85f; -[SCSelectionStoryDetails initWithSelectionStory:lastTimePostedTimestamp:lastTimeCreatedTimestamp:lastTimeInteractedTimestamp:numberOfTimesUsed:] */

undefined1 *
FUN_10b02e75c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112704ae0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b02e860; end: 10b02e883; -[SCSelectionStoryDetails copyWithZone:] */

undefined8 FUN_10b02e860(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b02e884; end: 10b02e913; -[SCSelectionStoryDetails hash] */

undefined8 * FUN_10b02e884(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b02e9d4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b02e9e0;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x20);
            if (puVar6 != *(undefined1 **)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_10b02e9e0;
            }
            goto LAB_10b02e9d4;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b02e9e0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b02e914; end: 10b02e9fb; -[SCSelectionStoryDetails isEqual:] */

long FUN_10b02e914(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b02e9d4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b02e9e0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_10b02e9e0;
            }
            goto LAB_10b02e9d4;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b02e9e0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b02e9fc; end: 10b02ea03; -[SCSelectionStoryDetails selectionStory] */

undefined8 FUN_10b02e9fc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b02ea04; end: 10b02ea0b; -[SCSelectionStoryDetails lastTimePostedTimestamp] */

undefined8 FUN_10b02ea04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b02ea0c; end: 10b02ea13; -[SCSelectionStoryDetails lastTimeCreatedTimestamp] */

undefined8 FUN_10b02ea0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b02ea14; end: 10b02ea1b; -[SCSelectionStoryDetails lastTimeInteractedTimestamp] */

undefined8 FUN_10b02ea14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b02ea1c; end: 10b02ea23; -[SCSelectionStoryDetails numberOfTimesUsed] */

undefined8 FUN_10b02ea1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b02ea24; end: 10b02ea6b; -[SCSelectionStoryDetails .cxx_destruct] */

void FUN_10b02ea24(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b02ea6c; end: 10b02ec17; -[SCSelectionSpotlightStoryPostingAction initWithIsPostingEnabled:showDisclosureIndicator:instructionText:actionIdentifier:memberRoleBusinessId:memberRoleAvatarURL:snapchatter:badgeTitle:leadingAccessoryImage:] */

undefined1 *
FUN_10b02ea6c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_112704ae8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b02ec18; end: 10b02ec3b; -[SCSelectionSpotlightStoryPostingAction copyWithZone:] */

undefined8 FUN_10b02ec18(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b02ec3c; end: 10b02ecf7; -[SCSelectionSpotlightStoryPostingAction hash] */

ulong * FUN_10b02ec3c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_70 = (ulong)*(byte *)(param_1 + 8);
  uStack_68 = (ulong)*(byte *)(param_1 + 9);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (ulong *)param_3) {
LAB_10b02ee10:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b02ee1c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)((long)puVar3 + 8) == param_3[8] && (*(char *)((long)puVar3 + 9) == param_3[9]))))
    {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x28);
            if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x30);
              if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x38);
                if ((lVar5 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  puVar6 = *(undefined1 **)((long)puVar3 + 0x40);
                  if (puVar6 != *(undefined1 **)(param_3 + 0x40)) {
                    func_0x00010c071ae0();
                    goto LAB_10b02ee1c;
                  }
                  goto LAB_10b02ee10;
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b02ee1c:
  _objc_release(param_3);
  return (ulong *)puVar6;
}



/* Entry: 10b02ecf8; end: 10b02ee37; -[SCSelectionSpotlightStoryPostingAction isEqual:] */

long FUN_10b02ecf8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b02ee10:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b02ee1c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
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
                  lVar3 = *(long *)(param_1 + 0x40);
                  if (lVar3 != *(long *)(param_3 + 0x40)) {
                    func_0x00010c071ae0();
                    goto LAB_10b02ee1c;
                  }
                  goto LAB_10b02ee10;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b02ee1c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b02ee38; end: 10b02ee3f; -[SCSelectionSpotlightStoryPostingAction isPostingEnabled] */

undefined1 FUN_10b02ee38(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b02ee40; end: 10b02ee47; -[SCSelectionSpotlightStoryPostingAction showDisclosureIndicator] */

undefined1 FUN_10b02ee40(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b02ee48; end: 10b02ee4f; -[SCSelectionSpotlightStoryPostingAction instructionText] */

undefined8 FUN_10b02ee48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b02ee50; end: 10b02ee57; -[SCSelectionSpotlightStoryPostingAction actionIdentifier] */

undefined8 FUN_10b02ee50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b02ee58; end: 10b02ee5f; -[SCSelectionSpotlightStoryPostingAction memberRoleBusinessId] */

undefined8 FUN_10b02ee58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b02ee60; end: 10b02ee67; -[SCSelectionSpotlightStoryPostingAction memberRoleAvatarURL] */

undefined8 FUN_10b02ee60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b02ee68; end: 10b02ee6f; -[SCSelectionSpotlightStoryPostingAction snapchatter] */

undefined8 FUN_10b02ee68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b02ee70; end: 10b02ee77; -[SCSelectionSpotlightStoryPostingAction badgeTitle] */

undefined8 FUN_10b02ee70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b02ee78; end: 10b02ee7f; -[SCSelectionSpotlightStoryPostingAction leadingAccessoryImage] */

undefined8 FUN_10b02ee78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b02ee80; end: 10b02eeeb; -[SCSelectionSpotlightStoryPostingAction .cxx_destruct] */

void FUN_10b02ee80(long param_1)

{
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



/* Entry: 10b02eeec; end: 10b02ef3b; -[SCSelectionStoryCustomTTLInfo initWithIsAvailable:customTTL:] */

void FUN_10b02eeec(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112704af0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 10b02ef3c; end: 10b02ef5f; -[SCSelectionStoryCustomTTLInfo copyWithZone:] */

undefined8 FUN_10b02ef3c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b02ef60; end: 10b02efc3; -[SCSelectionStoryCustomTTLInfo hash] */

ulong * FUN_10b02ef60(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  ulong *puVar4;
  ulong uStack_28;
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = (ulong)*(byte *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  lStack_20 = -lVar3;
  if (-1 < lVar3) {
    lStack_20 = lVar3;
  }
  puVar1 = &uStack_28;
  func_0x000107c3191c(puVar1,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == param_3) {
    puVar4 = (ulong *)0x1;
  }
  else {
    puVar4 = (ulong *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar4 = puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if ((((ulong)puVar2 & 1) == 0) || ((char)puVar1[1] != (char)param_3[1])) {
        puVar4 = (ulong *)0x0;
      }
      else {
        puVar4 = (ulong *)(ulong)(puVar1[2] == param_3[2]);
      }
    }
  }
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b02efc4; end: 10b02f05b; -[SCSelectionStoryCustomTTLInfo isEqual:] */

bool FUN_10b02efc4(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar3 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b02f05c; end: 10b02f063; -[SCSelectionStoryCustomTTLInfo isAvailable] */

undefined1 FUN_10b02f05c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b02f064; end: 10b02f06b; -[SCSelectionStoryCustomTTLInfo customTTL] */

undefined8 FUN_10b02f064(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b02f06c; end: 10b02f153; -[SCSelectionStoryBitmojiInfo initWithBitmojiAvatarId:bitmojiSelfieId:userId:isDefaultLogo:] */

undefined1 *
FUN_10b02f06c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_112704af8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b02f154; end: 10b02f177; -[SCSelectionStoryBitmojiInfo copyWithZone:] */

undefined8 FUN_10b02f154(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b02f178; end: 10b02f1fb; -[SCSelectionStoryBitmojiInfo hash] */

undefined8 * FUN_10b02f178(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar3 = &uStack_48;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b02f2a4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b02f2b0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[4];
          if (puVar6 != (undefined8 *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_10b02f2b0;
          }
          goto LAB_10b02f2a4;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b02f2b0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b02f1fc; end: 10b02f2cb; -[SCSelectionStoryBitmojiInfo isEqual:] */

long FUN_10b02f1fc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b02f2a4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b02f2b0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10b02f2b0;
          }
          goto LAB_10b02f2a4;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b02f2b0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b02f2cc; end: 10b02f2d3; -[SCSelectionStoryBitmojiInfo bitmojiAvatarId] */

undefined8 FUN_10b02f2cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b02f2d4; end: 10b02f2db; -[SCSelectionStoryBitmojiInfo bitmojiSelfieId] */

undefined8 FUN_10b02f2d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b02f2dc; end: 10b02f2e3; -[SCSelectionStoryBitmojiInfo userId] */

undefined8 FUN_10b02f2dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b02f2e4; end: 10b02f2eb; -[SCSelectionStoryBitmojiInfo isDefaultLogo] */

undefined1 FUN_10b02f2e4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b02f2ec; end: 10b02f327; -[SCSelectionStoryBitmojiInfo .cxx_destruct] */

void FUN_10b02f2ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b02f328; end: 10b02f40f; -[SCSelectionSpotlightStoryInstructionText initWithText:icon:attributedText:isErrorState:] */

undefined1 *
FUN_10b02f328(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_112704b00;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b02f410; end: 10b02f433; -[SCSelectionSpotlightStoryInstructionText copyWithZone:] */

undefined8 FUN_10b02f410(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b02f434; end: 10b02f4b7; -[SCSelectionSpotlightStoryInstructionText hash] */

undefined8 * FUN_10b02f434(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar3 = &uStack_48;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b02f560:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b02f56c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[4];
          if (puVar6 != (undefined8 *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_10b02f56c;
          }
          goto LAB_10b02f560;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b02f56c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b02f4b8; end: 10b02f587; -[SCSelectionSpotlightStoryInstructionText isEqual:] */

long FUN_10b02f4b8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b02f560:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b02f56c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10b02f56c;
          }
          goto LAB_10b02f560;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b02f56c:
  _objc_release(param_3);
  return lVar3;
}


