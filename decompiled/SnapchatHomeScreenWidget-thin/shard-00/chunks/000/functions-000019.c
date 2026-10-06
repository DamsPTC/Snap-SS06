/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1000834f4; end: 10008355b; +[SCMT1GameElement descriptor] */

void FUN_1000834f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0e58 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c3e58,
                        &PTR____CFConstantStringClassReference_1000b7ca0,
                        &PTR_s_actionmoji_action_1000c8bd8,&PTR_s_score_1000c8c70,1,8,0x1c);
    puRam00000001000d0e58 = puVar1;
  }
  return;
}



/* Entry: 10008355c; end: 1000835d7; +[SCMT1Pet descriptor] */

undefined * FUN_10008355c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0e60 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c3ea8,
                        &PTR____CFConstantStringClassReference_1000b7cc0,
                        &PTR_s_actionmoji_action_1000c8bd8,&PTR_s_petAssetId_1000c90b0,4,0x20,0x1c);
    func_0x000100087500();
    puRam00000001000d0e60 = puVar1;
  }
  return puRam00000001000d0e60;
}



/* Entry: 1000835d8; end: 10008363f; +[SCMCLocalizedStringSet descriptor] */

void FUN_1000835d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0e68 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c3fc0,
                        &PTR____CFConstantStringClassReference_1000b7ce0,
                        &PTR_s_snapchat_map_common_1000ca2b0,&PTR_s_fallback_1000ca2c8,2,0x18,0x1c);
    puRam00000001000d0e68 = puVar1;
  }
  return;
}



/* Entry: 100083640; end: 1000836bb; +[SCMCLocalizedStringSet_String descriptor] */

undefined * FUN_100083640(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0e70 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c4010,
                        &PTR____CFConstantStringClassReference_1000b7d00,
                        &PTR_s_snapchat_map_common_1000ca2b0,&PTR_s_locale_1000ca308,2,0x18,0x1c);
    func_0x0001000874e0();
    puRam00000001000d0e70 = puVar1;
  }
  return puRam00000001000d0e70;
}



/* Entry: 1000836bc; end: 100083743; -[SCHomeScreenWidgetConfigs initWithCoder:] */

undefined1 * FUN_1000836bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000c2280;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000c1bf0);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000100086760();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x000100086760();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100083744; end: 100083793; -[SCHomeScreenWidgetConfigs initWithIsPMF3dBitmojisEnabled:isMediumMemoriesWidgetDisabled:] */

void FUN_100083744(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1000c2280;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000c1bf0);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
  }
  return;
}



/* Entry: 100083794; end: 1000837b7; -[SCHomeScreenWidgetConfigs copyWithZone:] */

undefined8 FUN_100083794(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1000837b8; end: 100083817; -[SCHomeScreenWidgetConfigs encodeWithCoder:] */

void FUN_1000837b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x0001000868a0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_1000b7d20);
  func_0x0001000868a0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_1000b7d40);
                    /* WARNING: Could not recover jumptable at 0x000100085f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000b10c0)(param_3);
  return;
}



/* Entry: 100083818; end: 100083873; -[SCHomeScreenWidgetConfigs hash] */

ulong * FUN_100083818(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_1000b0c78;
  uStack_28 = (ulong)*(byte *)(param_1 + 8);
  uStack_20 = (ulong)*(byte *)(param_1 + 9);
  puVar1 = &uStack_28;
  _SCRemodelHash(puVar1,2);
  if (*(long *)PTR____stack_chk_guard_1000b0c78 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == param_3) {
    puVar3 = (ulong *)0x1;
  }
  else {
    puVar3 = (ulong *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar3 = puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) || ((char)puVar1[1] != (char)param_3[1])) {
        puVar3 = (ulong *)0x0;
      }
      else {
        puVar3 = (ulong *)(ulong)(*(char *)((long)puVar1 + 9) == *(char *)((long)param_3 + 9));
      }
    }
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 100083874; end: 10008390b; -[SCHomeScreenWidgetConfigs isEqual:] */

bool FUN_100083874(ulong param_1,undefined8 param_2,ulong param_3)

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
        bVar1 = *(char *)(param_1 + 9) == *(char *)(param_3 + 9);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10008390c; end: 100083913; -[SCHomeScreenWidgetConfigs isPMF3dBitmojisEnabled] */

undefined1 FUN_10008390c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 100083914; end: 10008391b; -[SCHomeScreenWidgetConfigs isMediumMemoriesWidgetDisabled] */

undefined1 FUN_100083914(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10008391c; end: 100083a2f; -[SCMemoriesWidgetDataModel initWithCoder:] */

undefined1 * FUN_10008391c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000c2288;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000c1bf0);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x0001000867a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x0001000867a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x0001000867a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x000100086760();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x0001000867a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100083a30; end: 100083b43; -[SCMemoriesWidgetDataModel initWithTitle:subtitle:thumbnailData:isFeaturedStorySnap:snapId:] */

undefined1 *
FUN_100083a30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7)

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
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1000c2288;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1000c1bf0);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000100086680();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x000100086680();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x000100086680();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    uVar2 = param_7;
    func_0x000100086680();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100083b44; end: 100083b67; -[SCMemoriesWidgetDataModel copyWithZone:] */

undefined8 FUN_100083b44(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 100083b68; end: 100083c03; -[SCMemoriesWidgetDataModel encodeWithCoder:] */

void FUN_100083b68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x000100087200(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_1000b7d60);
  func_0x000100087200(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_1000b7d80);
  func_0x000100087200(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_1000b7da0);
  func_0x0001000868a0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_1000b7dc0);
  func_0x000100087200(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_1000b7de0);
                    /* WARNING: Could not recover jumptable at 0x000100085f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000b10c0)(param_3);
  return;
}



/* Entry: 100083c04; end: 100083c93; -[SCMemoriesWidgetDataModel hash] */

undefined8 * FUN_100083c04(long param_1,undefined8 param_2,undefined1 *param_3)

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
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_1000b0c78;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000100086b20();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar1;
  func_0x000100086b20();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  func_0x000100086b20();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar1;
  func_0x000100086b20();
  uStack_30 = uVar2;
  _SCRemodelHash(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_1000b0c78 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_100083d54:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_100083d60;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x000100086e80(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x000100086e80(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x000100086e80(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
            if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
              func_0x000100086e80();
              goto LAB_100083d60;
            }
            goto LAB_100083d54;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_100083d60:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 100083c94; end: 100083d7b; -[SCMemoriesWidgetDataModel isEqual:] */

long FUN_100083c94(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_100083d54:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_100083d60;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x000100086e80(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x000100086e80(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x000100086e80(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x000100086e80();
              goto LAB_100083d60;
            }
            goto LAB_100083d54;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_100083d60:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 100083d7c; end: 100083d83; -[SCMemoriesWidgetDataModel title] */

undefined8 FUN_100083d7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100083d84; end: 100083d8b; -[SCMemoriesWidgetDataModel subtitle] */

undefined8 FUN_100083d84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100083d8c; end: 100083d93; -[SCMemoriesWidgetDataModel thumbnailData] */

undefined8 FUN_100083d8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100083d94; end: 100083d9b; -[SCMemoriesWidgetDataModel isFeaturedStorySnap] */

undefined1 FUN_100083d94(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 100083d9c; end: 100083da3; -[SCMemoriesWidgetDataModel snapId] */

undefined8 FUN_100083d9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 100083da4; end: 100083deb; -[SCMemoriesWidgetDataModel .cxx_destruct] */

void FUN_100083da4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x000100085f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000b10e0)(param_1 + 0x10,0);
  return;
}



/* Entry: 100083dec; end: 10008402f;  */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_100083dec(long param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  ulong *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar13 = 0;
  bVar6 = false;
  lVar3 = 0xc0;
  if ((*(uint *)(param_1 + 0x20) & 0x1000000) != 0) {
    lVar3 = 0xd0;
  }
  puVar2 = (ulong *)(param_1 + lVar3 + ((ulong)(*(uint *)(param_1 + 0x20) >> 0x17) & 8));
  plVar1 = (long *)(param_2 + 0x50);
  uVar10 = *puVar2;
LAB_100083e70:
  uVar12 = uVar10 & 3;
  if (uVar12 == 0) {
    func_0x000100084928(param_2);
  }
  else if (uVar12 != 3) {
    FUN_1000848e0(param_1);
    if (!bVar6) {
      return uVar12;
    }
    do {
      lVar3 = *plVar1;
      uVar13 = *(ulong *)(param_2 + 0x58);
      cVar7 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar3;
        *(ulong *)(param_2 + 0x58) = uVar13;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    uVar9 = (uint)uVar13;
    while ((uVar9 >> 9 & 1) == 0) {
      uVar10 = uVar13 | 0x800;
      if (((uint)uVar13 >> 10 & 1) != 0) {
        uVar10 = uVar13 & 0xfffffffffffff9ff | 0x800;
        *(char *)(param_2 + 0x21) = (char)uVar13;
      }
      do {
        while( true ) {
          lVar4 = *plVar1;
          uVar11 = *(ulong *)(param_2 + 0x58);
          cVar7 = lVar4 != lVar3;
          if (uVar11 != uVar13) {
            cVar7 = cVar7 + '\x01';
          }
          if (cVar7 == '\0') break;
          cVar7 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar4;
            *(ulong *)(param_2 + 0x58) = uVar11;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_100083fcc;
        }
        cVar7 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar3;
          *(ulong *)(param_2 + 0x58) = uVar10;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_100083fcc:
      if (lVar4 == lVar3 && uVar11 == uVar13) goto LAB_100083ff0;
      lVar3 = lVar4;
      uVar13 = uVar11;
      uVar9 = (uint)uVar11;
    }
    func_0x000100084250(param_2);
LAB_100083ff0:
    func_0x0001000846b8(param_2);
    func_0x000100084a34(param_2 + 0x80);
    return uVar12;
  }
  if (!bVar6) {
    param_3[3] = 0;
    param_3[4] = param_6;
    *param_3 = param_5;
    param_3[1] = param_4;
    do {
      lVar3 = *plVar1;
      uVar12 = *(ulong *)(param_2 + 0x58);
      cVar7 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar3;
        *(ulong *)(param_2 + 0x58) = uVar12;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    uVar9 = (uint)uVar12;
    while ((uVar9 >> 9 & 1) == 0) {
      if (((uint)uVar12 >> 10 & 1) == 0) {
        uVar11 = uVar12 & 0xfffffffffffff5ff;
      }
      else {
        uVar11 = uVar12 & 0xfffffffffffff1ff;
        *(char *)(param_2 + 0x21) = (char)uVar12;
      }
      do {
        while( true ) {
          lVar4 = *plVar1;
          uVar5 = *(ulong *)(param_2 + 0x58);
          cVar7 = lVar4 != lVar3;
          if (uVar5 != uVar12) {
            cVar7 = cVar7 + '\x01';
          }
          if (cVar7 == '\0') break;
          cVar7 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar4;
            *(ulong *)(param_2 + 0x58) = uVar5;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_100083ef4;
        }
        cVar7 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar3;
          *(ulong *)(param_2 + 0x58) = uVar11;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_100083ef4:
      if (lVar4 == lVar3 && uVar5 == uVar12) goto LAB_100083f18;
      lVar3 = lVar4;
      uVar12 = uVar5;
      uVar9 = (uint)uVar5;
    }
    func_0x0001000843b0(param_2);
LAB_100083f18:
    func_0x000100084a7c(param_2 + 0x80);
    func_0x0001000846e4(param_2);
  }
  do {
    uVar12 = *(ulong *)(param_2 + 0x58);
    cVar7 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = *plVar1;
      *(ulong *)(param_2 + 0x58) = uVar12;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  uVar12 = uVar12 & 0xff;
  if (uVar13 < uVar12) {
    FUN_100084510(param_1,uVar12);
    uVar13 = uVar12;
  }
  *(ulong *)(param_2 + 0x10) = uVar10 & 0xfffffffffffffffc;
  uVar12 = *puVar2;
  if (uVar12 == uVar10) {
    cVar7 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar6) {
      *puVar2 = param_2;
      cVar7 = ExclusiveMonitorsStatus();
    }
    bVar8 = cVar7 == '\0';
  }
  else {
    bVar8 = false;
    ClearExclusiveLocal();
  }
  bVar6 = true;
  uVar10 = uVar12;
  if (bVar8) {
    func_0x000100084684();
    return 0;
  }
  goto LAB_100083e70;
}



/* Entry: 100084030; end: 100084117;  */

void FUN_100084030(long param_1,long param_2,code *UNRECOVERED_JUMPTABLE,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x22;
  
  lVar1 = param_1;
  func_0x00010008467c();
  *(code **)(lVar1 + 0x38) = FUN_100084118;
  *(undefined8 *)(lVar1 + 0x40) = param_4;
  lVar2 = param_2;
  FUN_100083dec(param_2,lVar1,param_4,UNRECOVERED_JUMPTABLE);
  if (lVar2 == 1) {
    lVar1 = 0xc0;
    if ((*(uint *)(param_2 + 0x20) & 0x1000000) != 0) {
      lVar1 = 0xd0;
    }
    lVar1 = param_2 + lVar1 + ((ulong)(*(uint *)(param_2 + 0x20) >> 0x17) & 8);
    lVar2 = *(long *)(*(long *)(lVar1 + 8) + -8);
    uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
    (**(code **)(lVar2 + 0x10))(param_1,lVar1 + uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff));
                    /* WARNING: Could not recover jumptable at 0x000100084104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if (lVar2 != 2) {
    return;
  }
  FUN_100084b70(0,"future reported an error, but wait cannot throw");
                    /* WARNING: Could not recover jumptable at 0x00010008411c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100084118; end: 10008411f;  */

void FUN_100084118(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010008411c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100084120; end: 10008422f;  */

void FUN_100084120(long param_1,long param_2,code *UNRECOVERED_JUMPTABLE,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = param_1;
  func_0x00010008467c();
  *(code **)(lVar1 + 0x38) = FUN_100084230;
  *(undefined8 *)(lVar1 + 0x40) = param_4;
  lVar2 = param_2;
  FUN_100083dec(param_2,lVar1,param_4,UNRECOVERED_JUMPTABLE);
  if (lVar2 == 2) {
    lVar1 = 0xc0;
    if ((*(uint *)(param_2 + 0x20) & 0x1000000) != 0) {
      lVar1 = 0xd0;
    }
    _swift_errorRetain(*(undefined8 *)
                        (param_2 + lVar1 + ((ulong)(*(uint *)(param_2 + 0x20) >> 0x17) & 8) + 0x10))
    ;
  }
  else {
    if (lVar2 != 1) {
      return;
    }
    lVar1 = 0xc0;
    if ((*(uint *)(param_2 + 0x20) & 0x1000000) != 0) {
      lVar1 = 0xd0;
    }
    lVar1 = param_2 + lVar1 + ((ulong)(*(uint *)(param_2 + 0x20) >> 0x17) & 8);
    lVar2 = *(long *)(*(long *)(lVar1 + 8) + -8);
    uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
    (**(code **)(lVar2 + 0x10))(param_1,lVar1 + uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x000100084218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100084230; end: 10008424f;  */

void FUN_100084230(void)

{
  undefined8 *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010008423c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)unaff_x22[1])(*unaff_x22);
  return;
}



/* Entry: 100084250; end: 10008450f;  */

/* WARNING: Possible PIC construction at 0x000100084364: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100084368) */
/* WARNING: Removing unreachable block (ram,0x000100084388) */
/* WARNING: Removing unreachable block (ram,0x000100084374) */
/* WARNING: Removing unreachable block (ram,0x00010008438c) */

void FUN_100084250(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  bool bVar4;
  char cVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lStack_60;
  ulong uStack_58;
  
  plVar1 = (long *)(param_1 + 0x50);
  do {
    lVar2 = *plVar1;
    uVar3 = *(ulong *)(param_1 + 0x58);
    cVar5 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar2;
      *(ulong *)(param_1 + 0x58) = uVar3;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  puVar7 = (undefined8 *)0x0;
  uVar8 = (uint)uVar3;
  do {
    while (lStack_60 = lVar2, uStack_58 = uVar3, (uVar8 >> 9 & 1) != 0) {
      FUN_100084590(param_1,&lStack_60);
      lVar2 = lStack_60;
      uVar3 = uStack_58;
      uVar8 = (uint)uStack_58;
    }
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)0x20;
      __Znwm();
      *puVar7 = 1;
      func_0x000100084a00(puVar7 + 1,0);
      puVar7[2] = 0xc0;
      puVar7[3] = lVar2;
      FUN_100084a0c(puVar7 + 1);
    }
    else {
      puVar7[3] = lVar2;
    }
    uVar6 = uVar3 | 0x200;
    do {
      while( true ) {
        lVar2 = *plVar1;
        uVar3 = *(ulong *)(param_1 + 0x58);
        cVar5 = lVar2 != lStack_60;
        if (uVar3 != uStack_58) {
          cVar5 = cVar5 + '\x01';
        }
        if (cVar5 == '\0') break;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar2;
          *(ulong *)(param_1 + 0x54) = uVar3;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') goto LAB_100084314;
      }
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = (long)(puVar7 + 2);
        *(ulong *)(param_1 + 0x54) = uVar6;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_100084314:
    if (lVar2 == lStack_60 && uVar3 == uStack_58) {
      uVar6 = uStack_58 | 0x800;
      uVar3 = uVar6;
      if (((uint)uStack_58 >> 10 & 1) != 0) {
        uVar6 = uStack_58 & 0xfffffffffffffbff | 0x800;
        *(char *)(param_1 + 0x21) = (char)uStack_58;
        uVar3 = uVar6;
      }
      do {
        uStack_58 = uVar3;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lStack_60;
          *(ulong *)(param_1 + 0x58) = uVar6;
          cVar5 = ExclusiveMonitorsStatus();
        }
        uVar3 = uStack_58;
      } while (cVar5 != '\0');
      FUN_100084a0c(0x1000d0e88);
      _os_unfair_lock_unlock(puVar7 + 1);
      return;
    }
    uVar8 = (uint)uVar3;
  } while( true );
}



/* Entry: 100084510; end: 10008458f;  */

void FUN_100084510(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (lRam00000001000d0e80 != -1) {
    FUN_100084664();
  }
  if (pcRam00000001000d0e78 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100084540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000001000d0e78)();
    return;
  }
  _abort(param_1,param_2);
  uVar1 = 0xfffffffffffffffe;
  _dlsym(0xfffffffffffffffe,"swift_task_escalate");
  *param_1 = uVar1;
  return;
}



/* Entry: 100084590; end: 100084663;  */

/* WARNING: Possible PIC construction at 0x0001000845e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000845f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100084624: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100084628) */
/* WARNING: Removing unreachable block (ram,0x00010008462c) */
/* WARNING: Removing unreachable block (ram,0x000100084634) */
/* WARNING: Removing unreachable block (ram,0x00010008463c) */
/* WARNING: Removing unreachable block (ram,0x0001000845e4) */
/* WARNING: Removing unreachable block (ram,0x0001000845f4) */
/* WARNING: Removing unreachable block (ram,0x00010008461c) */
/* WARNING: Removing unreachable block (ram,0x000100084608) */
/* WARNING: Removing unreachable block (ram,0x000100084620) */

void FUN_100084590(long param_1,long *param_2)

{
  undefined1 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  plVar2 = (long *)(param_1 + 0x50);
  FUN_100084a0c(0x1000d0e88);
  do {
    lVar3 = *plVar2;
    lVar4 = *(long *)(param_1 + 0x58);
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = lVar3;
      *(long *)(param_1 + 0x58) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  *param_2 = lVar3;
  param_2[1] = lVar4;
  if ((((uint)lVar4 >> 9 & 1) != 0) && (lVar3 != 0)) {
    *(long *)(lVar3 + -0x10) = *(long *)(lVar3 + -0x10) + 1;
    unaff_x30 = 0x1000845e4;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x29 = puVar1;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  _os_unfair_lock_unlock(0x1000d0e88);
  return;
}



/* Entry: 100084664; end: 100084683;  */

void FUN_100084664(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100085e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_1000b0cc8)(0x1000d0e80,0x1000d0e78,0x100084560);
  return;
}



/* Entry: 100084684; end: 100084793;  */

undefined8 FUN_100084684(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x67;
  _pthread_getspecific(0x67);
  _pthread_setspecific(0x67,0);
  return uVar1;
}



/* Entry: 100084794; end: 1000847cb;  */

void FUN_100084794(void)

{
  long lStack_28;
  ulong uStack_20;
  
  __swift_stdlib_operatingSystemVersion(&lStack_28);
  uRam00000001000d0e98 = lStack_28 == 0xf && uStack_20 < 2;
  return;
}



/* Entry: 1000847cc; end: 1000848bf;  */

void FUN_1000847cc(long *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  _swift_once(0x1000d0e90,FUN_100084794,0);
  if ((bRam00000001000d0e98 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    if (lRam00000001000d0ea8 != -1) {
      func_0x0001000848dc();
    }
    iVar1 = (int)uVar2;
    if ((pcRam00000001000d0ea0 == (code *)0x0) || ((*pcRam00000001000d0ea0)(), iVar1 != 0)) {
      lVar3 = *(long *)(param_2 + 0x28);
      _voucher_adopt();
    }
    else {
      lVar3 = *(long *)(param_2 + 0x28);
    }
    *(undefined8 *)(param_2 + 0x28) = 0xffffffffffffffff;
    if ((*(byte *)(param_1 + 1) & 1) == 0) {
      *param_1 = lVar3;
      *(undefined1 *)(param_1 + 1) = 1;
    }
    else if (1 < lVar3 + 1U) {
      _os_release();
    }
  }
  return;
}



/* Entry: 1000848c0; end: 1000848df;  */

void FUN_1000848c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100085e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_1000b0cc8)(0x1000d0ea8,0x1000d0ea0,0x100084890);
  return;
}



/* Entry: 1000848e0; end: 1000849cf;  */

void FUN_1000848e0(undefined8 param_1)

{
  if (lRam00000001000d0eb8 != -1) {
    FUN_1000849d0();
  }
  if (pcRam00000001000d0eb0 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001000848fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000001000d0eb0)(param_1);
    return;
  }
  return;
}



/* Entry: 1000849d0; end: 100084a0b;  */

void FUN_1000849d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100085e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_1000b0cc8)(0x1000d0eb8,0x1000d0eb0,0x100084970);
  return;
}



/* Entry: 100084a0c; end: 100084a33;  */

void FUN_100084a0c(void)

{
  _os_unfair_lock_lock();
  return;
}



/* Entry: 100084a34; end: 100084b23;  */

void FUN_100084a34(undefined8 param_1)

{
  if (lRam00000001000d0ed8 != -1) {
    FUN_100084b24();
  }
  if (pcRam00000001000d0ed0 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100084a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000001000d0ed0)(param_1);
    return;
  }
  return;
}



/* Entry: 100084b24; end: 100084b6f;  */

void FUN_100084b24(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100085e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_1000b0cc8)(0x1000d0ed8,0x1000d0ed0,0x100084ac4);
  return;
}



/* Entry: 100084b70; end: 100084b7b;  */

void FUN_100084b70(void)

{
  _abort();
                    /* WARNING: Could not recover jumptable at 0x000100084b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation10URLRequestV19_bridgeToObjectiveCSo12NSURLRequestCyF_1000b17f8)();
  return;
}


