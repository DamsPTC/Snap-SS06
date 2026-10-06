/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10671b5d8; end: 10671b5df; -[SCLensExplorerCacheHeroItem heroId] */

undefined8 FUN_10671b5d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10671b5e0; end: 10671b5e7; -[SCLensExplorerCacheHeroItem deepLinkURL] */

undefined8 FUN_10671b5e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10671b5e8; end: 10671b5ef; -[SCLensExplorerCacheHeroItem layoutId] */

undefined8 FUN_10671b5e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10671b5f0; end: 10671b5f7; -[SCLensExplorerCacheHeroItem elements] */

undefined8 FUN_10671b5f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10671b5f8; end: 10671b5ff; -[SCLensExplorerCacheHeroItem loggingInfo] */

undefined8 FUN_10671b5f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10671b600; end: 10671b653; -[SCLensExplorerCacheHeroItem .cxx_destruct] */

void FUN_10671b600(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10671b654; end: 10671b6db; -[SCLensExplorerCacheHeroItemLayoutElement initWithElementId:content:] */

undefined1 *
FUN_10671b654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2bf8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10671b6dc; end: 10671b6ff; -[SCLensExplorerCacheHeroItemLayoutElement copyWithZone:] */

undefined8 FUN_10671b6dc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10671b700; end: 10671b767; -[SCLensExplorerCacheHeroItemLayoutElement hash] */

long * FUN_10671b700(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lStack_28 = -lVar1;
  if (-1 < lVar1) {
    lStack_28 = lVar1;
  }
  func_0x00010bfde980();
  plVar3 = &lStack_28;
  uStack_20 = uVar2;
  func_0x000100505190(plVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 != param_3) {
    plVar5 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_10671b7ec;
    plVar5 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar5);
    if ((((ulong)plVar4 & 1) == 0) || (plVar3[1] != param_3[1])) {
      plVar5 = (long *)0x0;
      goto LAB_10671b7ec;
    }
    plVar5 = (long *)plVar3[2];
    if (plVar5 != (long *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10671b7ec;
    }
  }
  plVar5 = (long *)0x1;
LAB_10671b7ec:
  _objc_release(param_3);
  return plVar5;
}



/* Entry: 10671b768; end: 10671b807; -[SCLensExplorerCacheHeroItemLayoutElement isEqual:] */

long FUN_10671b768(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10671b7ec;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10671b7ec;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10671b7ec;
    }
  }
  lVar3 = 1;
LAB_10671b7ec:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10671b808; end: 10671b80f; -[SCLensExplorerCacheHeroItemLayoutElement elementId] */

undefined8 FUN_10671b808(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10671b810; end: 10671b817; -[SCLensExplorerCacheHeroItemLayoutElement content] */

undefined8 FUN_10671b810(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10671b818; end: 10671b823; -[SCLensExplorerCacheHeroItemLayoutElement .cxx_destruct] */

void FUN_10671b818(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10671b824; end: 10671b88b; +[SCLensExplorerCacheHeroItemLayoutElementContent heroItemImageElementWithHeroItemImageElement:] */

void FUN_10671b824(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ccdd8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10671b88c; end: 10671b8f7; +[SCLensExplorerCacheHeroItemLayoutElementContent heroItemTextElementWithHeroItemTextElement:] */

void FUN_10671b88c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ccdd8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10671b8f8; end: 10671b91b; -[SCLensExplorerCacheHeroItemLayoutElementContent copyWithZone:] */

undefined8 FUN_10671b8f8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10671b91c; end: 10671b993; -[SCLensExplorerCacheHeroItemLayoutElementContent hash] */

void FUN_10671b91c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1126f2c00;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10671b994; end: 10671b9d7; -[SCLensExplorerCacheHeroItemLayoutElementContent internalInit] */

void FUN_10671b994(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f2c00;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10671b9d8; end: 10671ba8f; -[SCLensExplorerCacheHeroItemLayoutElementContent isEqual:] */

long FUN_10671b9d8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10671ba68:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10671ba74;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10671ba74;
        }
        goto LAB_10671ba68;
      }
    }
    lVar3 = 0;
  }
LAB_10671ba74:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10671ba90; end: 10671bb13; -[SCLensExplorerCacheHeroItemLayoutElementContent matchHeroItemImageElement:heroItemTextElement:] */

void FUN_10671ba90(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 2) {
    if (param_4 == 0) goto LAB_10671baf8;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 1 || param_3 == 0) goto LAB_10671baf8;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_10671baf8:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10671bb14; end: 10671bb43; -[SCLensExplorerCacheHeroItemLayoutElementContent .cxx_destruct] */

void FUN_10671bb14(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10671bb44; end: 10671bb63; -[SCLensExplorerCacheHeroItemLayoutElementContent isSameSubtype:] */

bool FUN_10671bb44(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
  }
  return false;
}



/* Entry: 10671bb64; end: 10671bb6b; -[SCLensExplorerCacheHeroItemLayoutElementContent subtype] */

undefined8 FUN_10671bb64(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10671bb6c; end: 10671bc37; -[SCLensExplorerCacheHeroItemLayoutElementContent asHeroItemImageElement] */

void FUN_10671bb6c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106716c60;
  uStack_30 = 0x106716c70;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10671bc38;
  puStack_60 = &UNK_110937200;
  puStack_48 = puStack_58;
  func_0x00010c0be2e0(param_1,param_2,&puStack_78,&PTR___NSConcreteGlobalBlock_110937250);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10671bc38; end: 10671bc6f;  */

void FUN_10671bc38(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10671bc70; end: 10671bc73;  */

void FUN_10671bc70(void)

{
  return;
}



/* Entry: 10671bc74; end: 10671bd3f; -[SCLensExplorerCacheHeroItemLayoutElementContent asHeroItemTextElement] */

void FUN_10671bc74(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106716c60;
  uStack_30 = 0x106716c70;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10671bd44;
  puStack_60 = &UNK_1109372b0;
  puStack_48 = puStack_58;
  func_0x00010c0be2e0(param_1,param_2,&PTR___NSConcreteGlobalBlock_110937290,&puStack_78);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10671bd40; end: 10671bd43;  */

void FUN_10671bd40(void)

{
  return;
}



/* Entry: 10671bd44; end: 10671bd7b;  */

void FUN_10671bd44(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10671bd7c; end: 10671bdf3; -[SCLensExplorerCacheHeroItemImageElement initWithImage:] */

undefined1 * FUN_10671bd7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2c08;
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



/* Entry: 10671bdf4; end: 10671be17; -[SCLensExplorerCacheHeroItemImageElement copyWithZone:] */

undefined8 FUN_10671bdf4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10671be18; end: 10671be1f; -[SCLensExplorerCacheHeroItemImageElement hash] */

void FUN_10671be18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10671be20; end: 10671beaf; -[SCLensExplorerCacheHeroItemImageElement isEqual:] */

long FUN_10671be20(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10671be94;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10671be94;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10671be94;
    }
  }
  lVar3 = 1;
LAB_10671be94:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10671beb0; end: 10671beb7; -[SCLensExplorerCacheHeroItemImageElement image] */

undefined8 FUN_10671beb0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10671beb8; end: 10671bec3; -[SCLensExplorerCacheHeroItemImageElement .cxx_destruct] */

void FUN_10671beb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10671bec4; end: 10671bf2b; +[SCLensExplorerCacheHeroItemImage heroItemPredefinedImageWithHeroItemPredefinedImage:] */

void FUN_10671bec4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ccdc8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10671bf2c; end: 10671bf97; +[SCLensExplorerCacheHeroItemImage heroItemRemoteImageWithHeroItemRemoteImage:] */

void FUN_10671bf2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ccdc8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10671bf98; end: 10671bfbb; -[SCLensExplorerCacheHeroItemImage copyWithZone:] */

undefined8 FUN_10671bf98(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10671bfbc; end: 10671c033; -[SCLensExplorerCacheHeroItemImage hash] */

void FUN_10671bfbc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1126f2c10;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10671c034; end: 10671c077; -[SCLensExplorerCacheHeroItemImage internalInit] */

void FUN_10671c034(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f2c10;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10671c078; end: 10671c12f; -[SCLensExplorerCacheHeroItemImage isEqual:] */

long FUN_10671c078(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10671c108:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10671c114;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10671c114;
        }
        goto LAB_10671c108;
      }
    }
    lVar3 = 0;
  }
LAB_10671c114:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10671c130; end: 10671c1b3; -[SCLensExplorerCacheHeroItemImage matchHeroItemPredefinedImage:heroItemRemoteImage:] */

void FUN_10671c130(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 2) {
    if (param_4 == 0) goto LAB_10671c198;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 1 || param_3 == 0) goto LAB_10671c198;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_10671c198:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10671c1b4; end: 10671c1e3; -[SCLensExplorerCacheHeroItemImage .cxx_destruct] */

void FUN_10671c1b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10671c1e4; end: 10671c203; -[SCLensExplorerCacheHeroItemImage isSameSubtype:] */

bool FUN_10671c1e4(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
  }
  return false;
}



/* Entry: 10671c204; end: 10671c20b; -[SCLensExplorerCacheHeroItemImage subtype] */

undefined8 FUN_10671c204(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10671c20c; end: 10671c2d7; -[SCLensExplorerCacheHeroItemImage asHeroItemPredefinedImage] */

void FUN_10671c20c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106716c60;
  uStack_30 = 0x106716c70;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10671c2d8;
  puStack_60 = &UNK_1109372e0;
  puStack_48 = puStack_58;
  func_0x00010c0be300(param_1,param_2,&puStack_78,&PTR___NSConcreteGlobalBlock_110937330);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10671c2d8; end: 10671c30f;  */

void FUN_10671c2d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10671c310; end: 10671c313;  */

void FUN_10671c310(void)

{
  return;
}



/* Entry: 10671c314; end: 10671c3df; -[SCLensExplorerCacheHeroItemImage asHeroItemRemoteImage] */

void FUN_10671c314(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106716c60;
  uStack_30 = 0x106716c70;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10671c3e4;
  puStack_60 = &UNK_110937390;
  puStack_48 = puStack_58;
  func_0x00010c0be300(param_1,param_2,&PTR___NSConcreteGlobalBlock_110937370,&puStack_78);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10671c3e0; end: 10671c3e3;  */

void FUN_10671c3e0(void)

{
  return;
}



/* Entry: 10671c3e4; end: 10671c41b;  */

void FUN_10671c3e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10671c41c; end: 10671c463; -[SCLensExplorerCacheHeroItemPredefinedImage initWithPredefinedIcon:] */

void FUN_10671c41c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f2c18;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10671c464; end: 10671c487; -[SCLensExplorerCacheHeroItemPredefinedImage copyWithZone:] */

undefined8 FUN_10671c464(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10671c488; end: 10671c48f; -[SCLensExplorerCacheHeroItemPredefinedImage hash] */

undefined4 FUN_10671c488(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10671c490; end: 10671c517; -[SCLensExplorerCacheHeroItemPredefinedImage isEqual:] */

bool FUN_10671c490(ulong param_1,undefined8 param_2,ulong param_3)

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
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(int *)(param_1 + 8) == *(int *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10671c518; end: 10671c51f; -[SCLensExplorerCacheHeroItemPredefinedImage predefinedIcon] */

undefined4 FUN_10671c518(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10671c520; end: 10671c597; -[SCLensExplorerCacheHeroItemRemoteImage initWithImageURL:] */

undefined1 * FUN_10671c520(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2c20;
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



/* Entry: 10671c598; end: 10671c5bb; -[SCLensExplorerCacheHeroItemRemoteImage copyWithZone:] */

undefined8 FUN_10671c598(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10671c5bc; end: 10671c5c3; -[SCLensExplorerCacheHeroItemRemoteImage hash] */

void FUN_10671c5bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10671c5c4; end: 10671c653; -[SCLensExplorerCacheHeroItemRemoteImage isEqual:] */

long FUN_10671c5c4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10671c638;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10671c638;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10671c638;
    }
  }
  lVar3 = 1;
LAB_10671c638:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10671c654; end: 10671c65b; -[SCLensExplorerCacheHeroItemRemoteImage imageURL] */

undefined8 FUN_10671c654(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10671c65c; end: 10671c667; -[SCLensExplorerCacheHeroItemRemoteImage .cxx_destruct] */

void FUN_10671c65c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10671c668; end: 10671c6ef; -[SCLensExplorerCacheHeroItemTextElement initWithText:icon:] */

undefined1 *
FUN_10671c668(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f2c28;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10671c6f0; end: 10671c713; -[SCLensExplorerCacheHeroItemTextElement copyWithZone:] */

undefined8 FUN_10671c6f0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10671c714; end: 10671c77f; -[SCLensExplorerCacheHeroItemTextElement hash] */

undefined8 * FUN_10671c714(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(uint *)(param_1 + 8);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10671c804;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(int *)(puVar2 + 1) != *(int *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10671c804;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10671c804;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10671c804:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10671c780; end: 10671c81f; -[SCLensExplorerCacheHeroItemTextElement isEqual:] */

long FUN_10671c780(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10671c804;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(int *)(param_1 + 8) != *(int *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10671c804;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10671c804;
    }
  }
  lVar3 = 1;
LAB_10671c804:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10671c820; end: 10671c827; -[SCLensExplorerCacheHeroItemTextElement text] */

undefined8 FUN_10671c820(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10671c828; end: 10671c82f; -[SCLensExplorerCacheHeroItemTextElement icon] */

undefined4 FUN_10671c828(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10671c830; end: 10671c83b; -[SCLensExplorerCacheHeroItemTextElement .cxx_destruct] */

void FUN_10671c830(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10671c83c; end: 10671c983; -[SCLensExplorerCacheStoryItem initWithStoryId:previewUrl:previewKey:previewIv:viewCount:loggingInfo:] */

undefined1 *
FUN_10671c83c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f2c30;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10671c984; end: 10671c9a7; -[SCLensExplorerCacheStoryItem copyWithZone:] */

undefined8 FUN_10671c984(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10671c9a8; end: 10671ca4b; -[SCLensExplorerCacheStoryItem hash] */

undefined8 * FUN_10671c9a8(long param_1,undefined8 param_2,undefined8 *param_3)

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
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x28);
  uStack_30 = *(undefined8 *)(param_1 + 0x30);
  lStack_38 = -lVar5;
  if (-1 < lVar5) {
    lStack_38 = lVar5;
  }
  uStack_40 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  func_0x000100505190(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10671cb24:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10671cb30;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[5] == param_3[5])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[4];
            if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = (undefined8 *)puVar3[6];
              if (puVar6 != (undefined8 *)param_3[6]) {
                func_0x00010c071ae0();
                goto LAB_10671cb30;
              }
              goto LAB_10671cb24;
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10671cb30:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10671ca4c; end: 10671cb4b; -[SCLensExplorerCacheStoryItem isEqual:] */

long FUN_10671ca4c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10671cb24:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10671cb30;
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
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_10671cb30;
              }
              goto LAB_10671cb24;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10671cb30:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10671cb4c; end: 10671cb53; -[SCLensExplorerCacheStoryItem storyId] */

undefined8 FUN_10671cb4c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10671cb54; end: 10671cb5b; -[SCLensExplorerCacheStoryItem previewUrl] */

undefined8 FUN_10671cb54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10671cb5c; end: 10671cb63; -[SCLensExplorerCacheStoryItem previewKey] */

undefined8 FUN_10671cb5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10671cb64; end: 10671cb6b; -[SCLensExplorerCacheStoryItem previewIv] */

undefined8 FUN_10671cb64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10671cb6c; end: 10671cb73; -[SCLensExplorerCacheStoryItem viewCount] */

undefined8 FUN_10671cb6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10671cb74; end: 10671cb7b; -[SCLensExplorerCacheStoryItem loggingInfo] */

undefined8 FUN_10671cb74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10671cb7c; end: 10671cbcf; -[SCLensExplorerCacheStoryItem .cxx_destruct] */

void FUN_10671cb7c(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10671cbd0; end: 10671cc9f; -[SCLensExplorerCacheFeedRenderStrategy initWithSpans:orientation:contentType:itemsSpacingMultiplier:useItemsCardBackground:useItemsDivider:lensTileLayout:lensTileAspectRatio:] */

undefined1 *
FUN_10671cbd0(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined1 param_8,
             undefined1 param_9,undefined4 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_6);
  puStack_68 = PTR_PTR_1126f2c38;
  uStack_70 = param_3;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0xc) = param_7;
    *(undefined4 *)((long)puVar1 + 0x10) = param_1;
    *(undefined1 *)((long)puVar1 + 8) = param_8;
    *(undefined1 *)((long)puVar1 + 9) = param_9;
    *(undefined4 *)((long)puVar1 + 0x14) = param_10;
    *(undefined4 *)((long)puVar1 + 0x18) = param_2;
  }
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 10671cca0; end: 10671ccc3; -[SCLensExplorerCacheFeedRenderStrategy copyWithZone:] */

undefined8 FUN_10671cca0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10671ccc4; end: 10671cd93; -[SCLensExplorerCacheFeedRenderStrategy hash] */

undefined8 * FUN_10671ccc4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  long lStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfde980();
  uStack_58 = (ulong)*(uint *)(param_1 + 0xc);
  uVar4 = (ulong)*(uint *)(param_1 + 0x10) * 0x200000 - 1;
  uVar4 = (uVar4 ^ uVar4 >> 0x18) * 0x109;
  uVar4 = (uVar4 ^ uVar4 >> 0xe) * 0x15;
  lStack_50 = (uVar4 ^ uVar4 >> 0x1c) * 0x80000001;
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uStack_40 = (ulong)*(byte *)(param_1 + 9);
  uStack_38 = (ulong)*(uint *)(param_1 + 0x14);
  uVar4 = (ulong)*(uint *)(param_1 + 0x18) * 0x200000 - 1;
  uVar4 = (uVar4 ^ uVar4 >> 0x18) * 0x109;
  uVar4 = (uVar4 ^ uVar4 >> 0xe) * 0x15;
  lStack_30 = (uVar4 ^ uVar4 >> 0x1c) * 0x80000001;
  puVar2 = &uStack_68;
  uStack_60 = uVar1;
  func_0x000100505190(puVar2,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == param_3) {
LAB_10671ceb8:
    puVar5 = (undefined8 *)0x1;
  }
  else {
    puVar5 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10671cebc;
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) != 0) &&
       ((((puVar2[4] == param_3[4] &&
          (*(int *)((long)puVar2 + 0xc) == *(int *)((long)param_3 + 0xc))) &&
         (*(char *)(puVar2 + 1) == *(char *)(param_3 + 1))) &&
        ((*(char *)((long)puVar2 + 9) == *(char *)((long)param_3 + 9) &&
         (*(int *)((long)puVar2 + 0x14) == *(int *)((long)param_3 + 0x14))))))) {
      fVar6 = ABS(*(float *)(puVar2 + 2) - *(float *)(param_3 + 2));
      if ((fVar6 < 1.1754944e-38) ||
         (fVar6 < ABS(*(float *)(puVar2 + 2) + *(float *)(param_3 + 2)) * 1.1920929e-07)) {
        fVar6 = ABS(*(float *)(puVar2 + 3) - *(float *)(param_3 + 3));
        if ((fVar6 < 1.1754944e-38) ||
           (fVar6 < ABS(*(float *)(puVar2 + 3) + *(float *)(param_3 + 3)) * 1.1920929e-07)) {
          puVar5 = (undefined8 *)puVar2[5];
          if (puVar5 != (undefined8 *)param_3[5]) {
            func_0x00010c071ae0();
            goto LAB_10671cebc;
          }
          goto LAB_10671ceb8;
        }
      }
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_10671cebc:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 10671cd94; end: 10671ced7; -[SCLensExplorerCacheFeedRenderStrategy isEqual:] */

long FUN_10671cd94(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10671ceb8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10671cebc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
          (*(int *)(param_1 + 0xc) == *(int *)(param_3 + 0xc))) &&
         (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
        ((*(char *)(param_1 + 9) == *(char *)(param_3 + 9) &&
         (*(int *)(param_1 + 0x14) == *(int *)(param_3 + 0x14))))))) {
      fVar4 = ABS(*(float *)(param_1 + 0x10) - *(float *)(param_3 + 0x10));
      if ((fVar4 < 1.1754944e-38) ||
         (fVar4 < ABS(*(float *)(param_1 + 0x10) + *(float *)(param_3 + 0x10)) * 1.1920929e-07)) {
        fVar4 = ABS(*(float *)(param_1 + 0x18) - *(float *)(param_3 + 0x18));
        if ((fVar4 < 1.1754944e-38) ||
           (fVar4 < ABS(*(float *)(param_1 + 0x18) + *(float *)(param_3 + 0x18)) * 1.1920929e-07)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if (lVar3 != *(long *)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_10671cebc;
          }
          goto LAB_10671ceb8;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10671cebc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10671ced8; end: 10671cedf; -[SCLensExplorerCacheFeedRenderStrategy spans] */

undefined8 FUN_10671ced8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10671cee0; end: 10671cee7; -[SCLensExplorerCacheFeedRenderStrategy orientation] */

undefined8 FUN_10671cee0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10671cee8; end: 10671ceef; -[SCLensExplorerCacheFeedRenderStrategy contentType] */

undefined4 FUN_10671cee8(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10671cef0; end: 10671cef7; -[SCLensExplorerCacheFeedRenderStrategy itemsSpacingMultiplier] */

undefined4 FUN_10671cef0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 10671cef8; end: 10671ceff; -[SCLensExplorerCacheFeedRenderStrategy useItemsCardBackground] */

undefined1 FUN_10671cef8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10671cf00; end: 10671cf07; -[SCLensExplorerCacheFeedRenderStrategy useItemsDivider] */

undefined1 FUN_10671cf00(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10671cf08; end: 10671cf0f; -[SCLensExplorerCacheFeedRenderStrategy lensTileLayout] */

undefined4 FUN_10671cf08(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 10671cf10; end: 10671cf17; -[SCLensExplorerCacheFeedRenderStrategy lensTileAspectRatio] */

undefined4 FUN_10671cf10(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 10671cf18; end: 10671cf23; -[SCLensExplorerCacheFeedRenderStrategy .cxx_destruct] */

void FUN_10671cf18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 10671cf24; end: 10671cf8b; +[SCLensExplorerCacheFeedRenderStrategyOrientation feedRenderOrientationHorizontalWithFeedRenderOrientationHorizontal:] */

void FUN_10671cf24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ccd20;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10671cf8c; end: 10671cff7; +[SCLensExplorerCacheFeedRenderStrategyOrientation feedRenderOrientationVerticalWithFeedRenderOrientationVertical:] */

void FUN_10671cf8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ccd20;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10671cff8; end: 10671d01b; -[SCLensExplorerCacheFeedRenderStrategyOrientation copyWithZone:] */

undefined8 FUN_10671cff8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10671d01c; end: 10671d093; -[SCLensExplorerCacheFeedRenderStrategyOrientation hash] */

void FUN_10671d01c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1126f2c40;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10671d094; end: 10671d0d7; -[SCLensExplorerCacheFeedRenderStrategyOrientation internalInit] */

void FUN_10671d094(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f2c40;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10671d0d8; end: 10671d18f; -[SCLensExplorerCacheFeedRenderStrategyOrientation isEqual:] */

long FUN_10671d0d8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10671d168:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10671d174;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10671d174;
        }
        goto LAB_10671d168;
      }
    }
    lVar3 = 0;
  }
LAB_10671d174:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10671d190; end: 10671d213; -[SCLensExplorerCacheFeedRenderStrategyOrientation matchFeedRenderOrientationHorizontal:feedRenderOrientationVertical:] */

void FUN_10671d190(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 2) {
    if (param_4 == 0) goto LAB_10671d1f8;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 1 || param_3 == 0) goto LAB_10671d1f8;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_10671d1f8:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


