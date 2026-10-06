/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10548c888; end: 10548c8ef; -[SCBitmojiFlatlandBackgroundDefaultsResponse hash] */

long * FUN_10548c888(long param_1,undefined8 param_2,long *param_3)

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
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_10548c974;
    plVar5 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar5);
    if ((((ulong)plVar4 & 1) == 0) || (plVar3[1] != param_3[1])) {
      plVar5 = (long *)0x0;
      goto LAB_10548c974;
    }
    plVar5 = (long *)plVar3[2];
    if (plVar5 != (long *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10548c974;
    }
  }
  plVar5 = (long *)0x1;
LAB_10548c974:
  _objc_release(param_3);
  return plVar5;
}



/* Entry: 10548c8f0; end: 10548c98f; -[SCBitmojiFlatlandBackgroundDefaultsResponse isEqual:] */

long FUN_10548c8f0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10548c974;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10548c974;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10548c974;
    }
  }
  lVar3 = 1;
LAB_10548c974:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10548c990; end: 10548c997; -[SCBitmojiFlatlandBackgroundDefaultsResponse version] */

undefined8 FUN_10548c990(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10548c998; end: 10548c99f; -[SCBitmojiFlatlandBackgroundDefaultsResponse identifiers] */

undefined8 FUN_10548c998(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10548c9a0; end: 10548c9ab; -[SCBitmojiFlatlandBackgroundDefaultsResponse .cxx_destruct] */

void FUN_10548c9a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10548c9ac; end: 10548ca33; -[SCBitmojiFlatlandContentResponse initWithIsFromCache:image:] */

undefined1 *
FUN_10548c9ac(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e86b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10548ca34; end: 10548ca57; -[SCBitmojiFlatlandContentResponse copyWithZone:] */

undefined8 FUN_10548ca34(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10548ca58; end: 10548cabb; -[SCBitmojiFlatlandContentResponse hash] */

ulong * FUN_10548ca58(long param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (ulong *)0x0;
    if ((puVar2 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_10548cb40;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || ((char)puVar2[1] != (char)param_3[1])) {
      puVar4 = (ulong *)0x0;
      goto LAB_10548cb40;
    }
    puVar4 = (ulong *)puVar2[2];
    if (puVar4 != (ulong *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10548cb40;
    }
  }
  puVar4 = (ulong *)0x1;
LAB_10548cb40:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10548cabc; end: 10548cb5b; -[SCBitmojiFlatlandContentResponse isEqual:] */

long FUN_10548cabc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10548cb40;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10548cb40;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10548cb40;
    }
  }
  lVar3 = 1;
LAB_10548cb40:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10548cb5c; end: 10548cb63; -[SCBitmojiFlatlandContentResponse isFromCache] */

undefined1 FUN_10548cb5c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10548cb64; end: 10548cb6b; -[SCBitmojiFlatlandContentResponse image] */

undefined8 FUN_10548cb64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10548cb6c; end: 10548cb77; -[SCBitmojiFlatlandContentResponse .cxx_destruct] */

void FUN_10548cb6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10548cb78; end: 10548cbff; -[SCBitmojiFlatlandSceneDefaultsResponse initWithVersion:identifiers:] */

undefined1 *
FUN_10548cb78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e86c0;
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



/* Entry: 10548cc00; end: 10548cc23; -[SCBitmojiFlatlandSceneDefaultsResponse copyWithZone:] */

undefined8 FUN_10548cc00(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10548cc24; end: 10548cc8b; -[SCBitmojiFlatlandSceneDefaultsResponse hash] */

long * FUN_10548cc24(long param_1,undefined8 param_2,long *param_3)

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
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_10548cd10;
    plVar5 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar5);
    if ((((ulong)plVar4 & 1) == 0) || (plVar3[1] != param_3[1])) {
      plVar5 = (long *)0x0;
      goto LAB_10548cd10;
    }
    plVar5 = (long *)plVar3[2];
    if (plVar5 != (long *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10548cd10;
    }
  }
  plVar5 = (long *)0x1;
LAB_10548cd10:
  _objc_release(param_3);
  return plVar5;
}



/* Entry: 10548cc8c; end: 10548cd2b; -[SCBitmojiFlatlandSceneDefaultsResponse isEqual:] */

long FUN_10548cc8c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10548cd10;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10548cd10;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10548cd10;
    }
  }
  lVar3 = 1;
LAB_10548cd10:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10548cd2c; end: 10548cd33; -[SCBitmojiFlatlandSceneDefaultsResponse version] */

undefined8 FUN_10548cd2c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10548cd34; end: 10548cd3b; -[SCBitmojiFlatlandSceneDefaultsResponse identifiers] */

undefined8 FUN_10548cd34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10548cd3c; end: 10548cd47; -[SCBitmojiFlatlandSceneDefaultsResponse .cxx_destruct] */

void FUN_10548cd3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10548cd48; end: 10548cdf3; -[SCBitmoji3DBatchedSceneFetcherResult initWithSceneId:imageData:] */

undefined1 *
FUN_10548cd48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e86c8;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10548cdf4; end: 10548ce17; -[SCBitmoji3DBatchedSceneFetcherResult copyWithZone:] */

undefined8 FUN_10548cdf4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10548ce18; end: 10548ce8b; -[SCBitmoji3DBatchedSceneFetcherResult hash] */

undefined8 * FUN_10548ce18(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10548cf0c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10548cf18;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10548cf18;
        }
        goto LAB_10548cf0c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10548cf18:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10548ce8c; end: 10548cf33; -[SCBitmoji3DBatchedSceneFetcherResult isEqual:] */

long FUN_10548ce8c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10548cf0c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10548cf18;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10548cf18;
        }
        goto LAB_10548cf0c;
      }
    }
    lVar3 = 0;
  }
LAB_10548cf18:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10548cf34; end: 10548cf3b; -[SCBitmoji3DBatchedSceneFetcherResult sceneId] */

undefined8 FUN_10548cf34(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10548cf3c; end: 10548cf43; -[SCBitmoji3DBatchedSceneFetcherResult imageData] */

undefined8 FUN_10548cf3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10548cf44; end: 10548cf73; -[SCBitmoji3DBatchedSceneFetcherResult .cxx_destruct] */

void FUN_10548cf44(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10548cf74; end: 10548cfd7; -[SCBitmojiRenderConfig initWithCacheKeyVersion:engineType:isStaging:renderStyle:] */

void FUN_10548cf74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e86d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  return;
}



/* Entry: 10548cfd8; end: 10548cffb; -[SCBitmojiRenderConfig copyWithZone:] */

undefined8 FUN_10548cfd8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10548cffc; end: 10548d06b; -[SCBitmojiRenderConfig hash] */

undefined8 * FUN_10548cffc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  long lStack_18;
  
  puVar1 = &uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x20);
  lStack_28 = -lVar3;
  if (-1 < lVar3) {
    lStack_28 = lVar3;
  }
  func_0x000100505190(&uStack_40,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x1;
  }
  else {
    puVar4 = (undefined1 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar4 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if ((((ulong)puVar2 & 1) == 0) ||
         (((*(long *)((long)puVar1 + 0x10) != *(long *)(param_3 + 0x10) ||
           (*(long *)((long)puVar1 + 0x18) != *(long *)(param_3 + 0x18))) ||
          (*(char *)((long)puVar1 + 8) != param_3[8])))) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        puVar4 = (undefined1 *)(ulong)(*(long *)((long)puVar1 + 0x20) == *(long *)(param_3 + 0x20));
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 10548d06c; end: 10548d123; -[SCBitmojiRenderConfig isEqual:] */

bool FUN_10548d06c(ulong param_1,undefined8 param_2,ulong param_3)

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
         (((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
           (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))) ||
          (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10548d124; end: 10548d12b; -[SCBitmojiRenderConfig cacheKeyVersion] */

undefined8 FUN_10548d124(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10548d12c; end: 10548d133; -[SCBitmojiRenderConfig engineType] */

undefined8 FUN_10548d12c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10548d134; end: 10548d13b; -[SCBitmojiRenderConfig isStaging] */

undefined1 FUN_10548d134(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10548d13c; end: 10548d143; -[SCBitmojiRenderConfig renderStyle] */

undefined8 FUN_10548d13c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10548d144; end: 10548d16f; +[SCGrapheneBitmojiFlatlandMetric configListRequest] */

void FUN_10548d144(void)

{
  _objc_alloc(PTR_PTR_1126b9630);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10548d170; end: 10548d19b; +[SCGrapheneBitmojiFlatlandMetric userDefault] */

void FUN_10548d170(void)

{
  _objc_alloc(PTR_PTR_1126b9630);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10548d19c; end: 10548d1c7; +[SCGrapheneBitmojiFlatlandMetric contentTtl] */

void FUN_10548d19c(void)

{
  _objc_alloc(PTR_PTR_1126b9630);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10548d1c8; end: 10548d1f3; +[SCGrapheneBitmojiFlatlandMetric sceneContentRequestSuccess] */

void FUN_10548d1c8(void)

{
  _objc_alloc(PTR_PTR_1126b9630);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10548d1f4; end: 10548d21f; +[SCGrapheneBitmojiFlatlandMetric sceneContentRequestFailure] */

void FUN_10548d1f4(void)

{
  _objc_alloc(PTR_PTR_1126b9630);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10548d220; end: 10548d24b; +[SCGrapheneBitmojiFlatlandMetric bgContentRequestSuccess] */

void FUN_10548d220(void)

{
  _objc_alloc(PTR_PTR_1126b9630);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10548d24c; end: 10548d277; +[SCGrapheneBitmojiFlatlandMetric bgContentRequestFailure] */

void FUN_10548d24c(void)

{
  _objc_alloc(PTR_PTR_1126b9630);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10548d278; end: 10548d317; -[SCGrapheneBitmojiFlatlandMetric description] */

void FUN_10548d278(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110de1138;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110de1138,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e86d8;
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



/* Entry: 10548d318; end: 10548d497; -[SCGrapheneRegistry bitmojiFlatlandGraphene] */

void FUN_10548d318(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10548d3a0;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bbfb8 != -1) {
    func_0x00010002a2fc(0x1136bbfb8,&puStack_48);
  }
  uVar1 = uRam00000001136bbfb0;
  _objc_retain(uRam00000001136bbfb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10548d498; end: 10548d757;  */

/* WARNING: Removing unreachable block (ram,0x00010548d720) */

void FUN_10548d498(double param_1,long param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *unaff_x24;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar4 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar3 = param_4;
  puVar5 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    plVar7 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f2c3b8f;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar1 = &UNK_10f2c3b8f;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_88,puVar1);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar1 = &UNK_10f2c3b8f;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = &UNK_11088cee0;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11088cee0,&uStack_c0,param_6);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar6 = 0;
    puVar3 = (undefined *)puVar4;
    puVar5 = param_6;
    do {
      if ((&cStack_59)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar6 != -0x48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_5);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_a0);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    __Unwind_Resume();
    _objc_retain(puVar1);
    _objc_retain(puVar3);
    _objc_retain(puVar5);
    if (puVar2 != (undefined *)0x0) {
      FUN_10548d498(puVar2,puVar1,puVar3,puVar5,(long)(param_1 * 1000.0));
    }
    _objc_release(puVar5);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10548d758; end: 10548d80b;  */

void FUN_10548d758(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    FUN_10548d498(param_2,param_3,param_4,param_5,(long)(param_1 * 1000.0));
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10548d80c; end: 10548dacb;  */

/* WARNING: Removing unreachable block (ram,0x00010548da94) */
/* WARNING: Removing unreachable block (ram,0x00010548dd54) */

void FUN_10548d80c(double param_1,long param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 *unaff_x24;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar6 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar5 = param_4;
  puVar8 = param_5;
  puVar3 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    plVar11 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f2c3b8f;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar1 = &UNK_10f2c3b8f;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_88,puVar1);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar1 = &UNK_10f2c3b8f;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar1 = param_5;
      func_0x00010bdc3520();
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = &UNK_11088cf30;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar10 = 0;
    puVar5 = (undefined *)puVar6;
    puVar8 = param_6;
    do {
      if ((&cStack_59)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar10 != -0x48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  do {
    unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (undefined8 *)auStack_a0);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar6 = &uStack_180;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puVar7 = puVar5;
  puVar9 = puVar8;
  _objc_retain(puVar1);
  _objc_retain(puVar5);
  _objc_retain(puVar8);
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f2c3b8f;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_160,puVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar2 = &UNK_10f2c3b8f;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar2 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_148,puVar2);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar2 = &UNK_10f2c3b8f;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar2 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_130,puVar2);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_118,3);
    puVar4 = &UNK_11088cf80;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11088cf80,&uStack_180,puVar3);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar10 = 0;
    puVar7 = (undefined *)puVar6;
    puVar9 = puVar3;
    do {
      if ((&cStack_119)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
      unaff_x24 = &uStack_180;
    } while (lVar10 != -0x48);
  }
  _objc_release(puVar8);
  _objc_release(puVar5);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
    ___stack_chk_fail();
    _objc_release(puVar8);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_160);
    _objc_release(puVar8);
    _objc_release(puVar5);
    _objc_release(puVar1);
    __Unwind_Resume();
    _objc_retain(puVar4);
    _objc_retain(puVar7);
    _objc_retain(puVar9);
    if (puVar3 != (undefined *)0x0) {
      FUN_10548dacc(puVar3,puVar4,puVar7,puVar9,(long)(param_1 * 1000.0));
    }
    _objc_release(puVar9);
    _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 10548dacc; end: 10548dd8b;  */

/* WARNING: Removing unreachable block (ram,0x00010548dd54) */

void FUN_10548dacc(double param_1,long param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *unaff_x24;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar4 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar3 = param_4;
  puVar5 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    plVar7 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f2c3b8f;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar1 = &UNK_10f2c3b8f;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_88,puVar1);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar1 = &UNK_10f2c3b8f;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = &UNK_11088cf80;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11088cf80,&uStack_c0,param_6);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar6 = 0;
    puVar3 = (undefined *)puVar4;
    puVar5 = param_6;
    do {
      if ((&cStack_59)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar6 != -0x48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_5);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_a0);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    __Unwind_Resume();
    _objc_retain(puVar1);
    _objc_retain(puVar3);
    _objc_retain(puVar5);
    if (puVar2 != (undefined *)0x0) {
      FUN_10548dacc(puVar2,puVar1,puVar3,puVar5,(long)(param_1 * 1000.0));
    }
    _objc_release(puVar5);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10548dd8c; end: 10548de3f;  */

void FUN_10548dd8c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    FUN_10548dacc(param_2,param_3,param_4,param_5,(long)(param_1 * 1000.0));
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10548de40; end: 10548e0ff;  */

/* WARNING: Removing unreachable block (ram,0x00010548e648) */
/* WARNING: Removing unreachable block (ram,0x00010548e0c8) */
/* WARNING: Removing unreachable block (ram,0x00010548e388) */
/* WARNING: Removing unreachable block (ram,0x00010548e908) */

void FUN_10548de40(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  undefined8 *unaff_x24;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 *puStack_400;
  undefined8 auStack_3f8 [2];
  char cStack_3e1;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined *puStack_3b0;
  long *plStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined *puStack_330;
  undefined8 *puStack_328;
  undefined8 *puStack_320;
  undefined *puStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [3];
  undefined1 auStack_2c8 [24];
  undefined8 auStack_2b0 [2];
  char cStack_299;
  long lStack_298;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 auStack_220 [3];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [3];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar4 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar2 = param_4;
  puVar12 = param_5;
  puVar5 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    plVar15 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f2c3b8f;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2c3b8f;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_88,puVar2);
    _objc_retain(param_5);
    if (param_5 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2c3b8f;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar2 = param_5;
      func_0x00010bdc3520();
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,puVar2);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = &UNK_11088cfd0;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar14 = 0;
    puVar2 = puVar4;
    puVar12 = param_6;
    do {
      if ((&cStack_59)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar14 != -0x48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != auStack_a0);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar9 = &uStack_180;
  pcStack_c8 = FUN_10548e100;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar1;
  puVar4 = puVar2;
  puVar13 = puVar12;
  puVar10 = puVar5;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  _objc_retain(puVar12);
  if (puVar3 != (undefined *)0x0) {
    plVar15 = *(long **)(puVar3 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f2c3b8f;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_160,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f2c3b8f;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar4 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_148,puVar4);
    _objc_retain(puVar12);
    if (puVar12 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f2c3b8f;
    }
    else {
      _objc_retainAutorelease(puVar12);
      puVar4 = puVar12;
      func_0x00010bdc3520();
    }
    _objc_release(puVar12);
    func_0x00010002b838(auStack_130,puVar4);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_118,3);
    puVar8 = &UNK_11088d020;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar14 = 0;
    puVar4 = puVar9;
    puVar13 = puVar5;
    do {
      if ((&cStack_119)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = &uStack_180;
    } while (lVar14 != -0x48);
  }
  _objc_release(puVar12);
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar12);
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != auStack_160);
  _objc_release(puVar12);
  _objc_release(puVar2);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar9 = &uStack_240;
  pcStack_188 = FUN_10548e3c0;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar8;
  puVar2 = puVar4;
  puVar12 = puVar13;
  puVar5 = puVar10;
  ppuStack_190 = &puStack_d0;
  _objc_retain(puVar8);
  _objc_retain(puVar4);
  _objc_retain(puVar13);
  if (puVar3 != (undefined *)0x0) {
    plVar15 = *(long **)(puVar3 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar1 = &UNK_10f2c3b8f;
    }
    else {
      puVar1 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_220,puVar1);
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2c3b8f;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar2 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_208,puVar2);
    _objc_retain(puVar13);
    if (puVar13 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2c3b8f;
    }
    else {
      _objc_retainAutorelease(puVar13);
      puVar2 = puVar13;
      func_0x00010bdc3520();
    }
    _objc_release(puVar13);
    func_0x00010002b838(auStack_1f0,puVar2);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x00010007e1e8(&uStack_240,auStack_220,&lStack_1d8,3);
    puVar1 = &UNK_11088d070;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x00010007e5dc(&puStack_228);
    lVar14 = 0;
    puVar2 = puVar9;
    puVar12 = puVar10;
    do {
      if ((&cStack_1d9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = &uStack_240;
    } while (lVar14 != -0x48);
  }
  _objc_release(puVar13);
  _objc_release(puVar4);
  puVar3 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar13);
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != auStack_220);
  _objc_release(puVar13);
  _objc_release(puVar4);
  _objc_release(puVar8);
  __Unwind_Resume();
  puVar10 = &uStack_300;
  pcStack_248 = FUN_10548e680;
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar1;
  puVar4 = puVar2;
  puVar13 = puVar12;
  pppuStack_250 = &ppuStack_190;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  _objc_retain(puVar12);
  if (puVar3 != (undefined *)0x0) {
    plVar15 = *(long **)(puVar3 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f2c3b8f;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_2e0,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f2c3b8f;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar4 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_2c8,puVar4);
    _objc_retain(puVar12);
    if (puVar12 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f2c3b8f;
    }
    else {
      _objc_retainAutorelease(puVar12);
      puVar4 = puVar12;
      func_0x00010bdc3520(puVar12);
    }
    _objc_release(puVar12);
    func_0x00010002b838(auStack_2b0,puVar4);
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    func_0x00010007e1e8(&uStack_300,auStack_2e0,&lStack_298,3);
    puVar8 = &UNK_11088d0c0;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11088d0c0,&uStack_300,puVar5);
    puStack_2e8 = (undefined1 *)&uStack_300;
    func_0x00010007e5dc(&puStack_2e8);
    lVar14 = 0;
    puVar4 = puVar10;
    puVar13 = puVar5;
    do {
      if ((&cStack_299)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2b0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = &uStack_300;
    } while (lVar14 != -0x48);
  }
  _objc_release(puVar12);
  _objc_release(puVar2);
  puVar5 = (undefined8 *)puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar12);
  puVar10 = auStack_2e0;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar10);
  _objc_release(puVar12);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar6 = (undefined *)puVar5;
  __Unwind_Resume();
  puVar11 = &uStack_380;
  pcStack_308 = FUN_10548e940;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar8;
  puVar9 = puVar4;
  puStack_340 = unaff_x24;
  puStack_338 = puVar10;
  puStack_330 = (undefined *)puVar5;
  puStack_328 = puVar12;
  puStack_320 = puVar2;
  puStack_318 = puVar1;
  pppuStack_310 = &pppuStack_250;
  _objc_retain(puVar8);
  plVar15 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar15 = *(long **)(puVar6 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar1 = &UNK_10f2c3b8f;
    }
    else {
      puVar1 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    puVar10 = auStack_360;
    func_0x00010002b838(auStack_360,puVar1);
    uStack_380 = 0;
    uStack_378 = 0;
    uStack_370 = 0;
    func_0x00010007e1e8(&uStack_380,auStack_360,&lStack_348,1);
    puVar3 = &UNK_11088d110;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11088d110,&uStack_380,puVar4);
    puStack_368 = (undefined1 *)&uStack_380;
    func_0x00010007e5dc(&puStack_368);
    puVar9 = puVar11;
    puVar13 = puVar4;
    puVar5 = &uStack_380;
    if (cStack_349 < '\0') {
      __ZdlPv(auStack_360[0]);
      puVar9 = puVar11;
      puVar13 = puVar4;
      puVar5 = &uStack_380;
    }
  }
  puVar1 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  _objc_release(puVar8);
  puVar7 = puVar1;
  __Unwind_Resume();
  pcStack_388 = FUN_10548eab4;
  lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar3;
  puVar2 = puVar9;
  puStack_3c0 = unaff_x24;
  puStack_3b8 = puVar10;
  puStack_3b0 = (undefined *)puVar5;
  plStack_3a8 = plVar15;
  puStack_3a0 = puVar1;
  puStack_398 = puVar8;
  pppuStack_390 = &pppuStack_310;
  _objc_retain(puVar3);
  _objc_retain(puVar9);
  if (puVar7 != (undefined *)0x0) {
    plVar15 = *(long **)(puVar7 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f2c3b8f;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_3f8,puVar1);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2c3b8f;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar2 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_3e0,puVar2);
    uStack_418 = 0;
    uStack_410 = 0;
    uStack_408 = 0;
    func_0x00010007e1e8(&uStack_418,auStack_3f8,&lStack_3c8,2);
    puVar6 = &UNK_11088d160;
    puVar2 = &uStack_418;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11088d160,puVar2,puVar13);
    puStack_400 = &uStack_418;
    func_0x00010007e5dc(&puStack_400);
    lVar14 = 0;
    do {
      if ((&cStack_3c9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3e0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar9);
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3c8) {
    ___stack_chk_fail();
    _objc_release(puVar9);
    if (cStack_3e1 < '\0') {
      __ZdlPv(auStack_3f8[0]);
    }
    _objc_release(puVar9);
    _objc_release(puVar3);
    __Unwind_Resume();
    _objc_retain(puVar6);
    _objc_retain(puVar2);
    if (puVar1 != (undefined *)0x0) {
      FUN_10548eab4(puVar1,puVar6,puVar2,(long)(param_1 * 1000.0));
    }
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar6);
    return;
  }
  return;
}



/* Entry: 10548e100; end: 10548e3bf;  */

/* WARNING: Removing unreachable block (ram,0x00010548e648) */
/* WARNING: Removing unreachable block (ram,0x00010548e388) */
/* WARNING: Removing unreachable block (ram,0x00010548e908) */

void FUN_10548e100(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  undefined8 *unaff_x24;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 *puStack_340;
  undefined8 auStack_338 [2];
  char cStack_321;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined *puStack_2f0;
  long *plStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined *puStack_270;
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  undefined *puStack_258;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 auStack_220 [3];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [3];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar4 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar2 = param_4;
  puVar11 = param_5;
  puVar5 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    plVar15 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f2c3b8f;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2c3b8f;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_88,puVar2);
    _objc_retain(param_5);
    if (param_5 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2c3b8f;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar2 = param_5;
      func_0x00010bdc3520();
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,puVar2);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = &UNK_11088d020;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar14 = 0;
    puVar2 = puVar4;
    puVar11 = param_6;
    do {
      if ((&cStack_59)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar14 != -0x48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != auStack_a0);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar9 = &uStack_180;
  pcStack_c8 = FUN_10548e3c0;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar4 = puVar2;
  puVar12 = puVar11;
  puVar13 = puVar5;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  _objc_retain(puVar11);
  if (puVar3 != (undefined *)0x0) {
    plVar15 = *(long **)(puVar3 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f2c3b8f;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_160,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f2c3b8f;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar4 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_148,puVar4);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f2c3b8f;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar4 = puVar11;
      func_0x00010bdc3520();
    }
    _objc_release(puVar11);
    func_0x00010002b838(auStack_130,puVar4);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_118,3);
    puVar7 = &UNK_11088d070;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar14 = 0;
    puVar4 = puVar9;
    puVar12 = puVar5;
    do {
      if ((&cStack_119)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = &uStack_180;
    } while (lVar14 != -0x48);
  }
  _objc_release(puVar11);
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
    ___stack_chk_fail();
    _objc_release(puVar11);
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != auStack_160);
    _objc_release(puVar11);
    _objc_release(puVar2);
    _objc_release(puVar1);
    __Unwind_Resume();
    puVar5 = &uStack_240;
    pcStack_188 = FUN_10548e680;
    lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = puVar7;
    puVar2 = puVar4;
    puVar11 = puVar12;
    ppuStack_190 = &puStack_d0;
    _objc_retain(puVar7);
    _objc_retain(puVar4);
    _objc_retain(puVar12);
    if (puVar3 != (undefined *)0x0) {
      plVar15 = *(long **)(puVar3 + 8);
      _objc_retain(puVar7);
      if (puVar7 == (undefined *)0x0) {
        puVar1 = &UNK_10f2c3b8f;
      }
      else {
        puVar1 = puVar7;
        _objc_retainAutorelease(puVar7);
        func_0x00010bdc3520();
      }
      _objc_release(puVar7);
      func_0x00010002b838(auStack_220,puVar1);
      _objc_retain(puVar4);
      if (puVar4 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f2c3b8f;
      }
      else {
        _objc_retainAutorelease(puVar4);
        puVar2 = puVar4;
        func_0x00010bdc3520(puVar4);
      }
      _objc_release(puVar4);
      func_0x00010002b838(auStack_208,puVar2);
      _objc_retain(puVar12);
      if (puVar12 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f2c3b8f;
      }
      else {
        _objc_retainAutorelease(puVar12);
        puVar2 = puVar12;
        func_0x00010bdc3520(puVar12);
      }
      _objc_release(puVar12);
      func_0x00010002b838(auStack_1f0,puVar2);
      uStack_240 = 0;
      uStack_238 = 0;
      uStack_230 = 0;
      func_0x00010007e1e8(&uStack_240,auStack_220,&lStack_1d8,3);
      puVar1 = &UNK_11088d0c0;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11088d0c0,&uStack_240,puVar13);
      puStack_228 = (undefined1 *)&uStack_240;
      func_0x00010007e5dc(&puStack_228);
      lVar14 = 0;
      puVar2 = puVar5;
      puVar11 = puVar13;
      do {
        if ((&cStack_1d9)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
        unaff_x24 = &uStack_240;
      } while (lVar14 != -0x48);
    }
    _objc_release(puVar12);
    _objc_release(puVar4);
    puVar5 = (undefined8 *)puVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d8) {
      ___stack_chk_fail();
      _objc_release(puVar12);
      puVar13 = auStack_220;
      do {
        unaff_x24 = unaff_x24 + -3;
      } while (unaff_x24 != puVar13);
      _objc_release(puVar12);
      _objc_release(puVar4);
      _objc_release(puVar7);
      puVar6 = (undefined *)puVar5;
      __Unwind_Resume();
      puVar10 = &uStack_2c0;
      pcStack_248 = FUN_10548e940;
      lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar3 = puVar1;
      puVar9 = puVar2;
      puStack_280 = unaff_x24;
      puStack_278 = puVar13;
      puStack_270 = (undefined *)puVar5;
      puStack_268 = puVar12;
      puStack_260 = puVar4;
      puStack_258 = puVar7;
      pppuStack_250 = &ppuStack_190;
      _objc_retain(puVar1);
      plVar15 = (long *)0x0;
      if (puVar6 != (undefined *)0x0) {
        plVar15 = *(long **)(puVar6 + 8);
        _objc_retain(puVar1);
        if (puVar1 == (undefined *)0x0) {
          puVar3 = &UNK_10f2c3b8f;
        }
        else {
          puVar3 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
        }
        _objc_release(puVar1);
        puVar13 = auStack_2a0;
        func_0x00010002b838(auStack_2a0,puVar3);
        uStack_2c0 = 0;
        uStack_2b8 = 0;
        uStack_2b0 = 0;
        func_0x00010007e1e8(&uStack_2c0,auStack_2a0,&lStack_288,1);
        puVar3 = &UNK_11088d110;
        (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11088d110,&uStack_2c0,puVar2);
        puStack_2a8 = (undefined1 *)&uStack_2c0;
        func_0x00010007e5dc(&puStack_2a8);
        puVar9 = puVar10;
        puVar11 = puVar2;
        puVar5 = &uStack_2c0;
        if (cStack_289 < '\0') {
          __ZdlPv(auStack_2a0[0]);
          puVar9 = puVar10;
          puVar11 = puVar2;
          puVar5 = &uStack_2c0;
        }
      }
      puVar7 = puVar1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_288) {
        ___stack_chk_fail();
        _objc_release(puVar1);
        _objc_release(puVar1);
        puVar8 = puVar7;
        __Unwind_Resume();
        pcStack_2c8 = FUN_10548eab4;
        lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar6 = puVar3;
        puVar2 = puVar9;
        puStack_300 = unaff_x24;
        puStack_2f8 = puVar13;
        puStack_2f0 = (undefined *)puVar5;
        plStack_2e8 = plVar15;
        puStack_2e0 = puVar7;
        puStack_2d8 = puVar1;
        pppuStack_2d0 = &pppuStack_250;
        _objc_retain(puVar3);
        _objc_retain(puVar9);
        if (puVar8 != (undefined *)0x0) {
          plVar15 = *(long **)(puVar8 + 8);
          _objc_retain(puVar3);
          if (puVar3 == (undefined *)0x0) {
            puVar1 = &UNK_10f2c3b8f;
          }
          else {
            puVar1 = puVar3;
            _objc_retainAutorelease(puVar3);
            func_0x00010bdc3520();
          }
          _objc_release(puVar3);
          func_0x00010002b838(auStack_338,puVar1);
          _objc_retain(puVar9);
          if (puVar9 == (undefined8 *)0x0) {
            puVar2 = (undefined8 *)&UNK_10f2c3b8f;
          }
          else {
            _objc_retainAutorelease(puVar9);
            puVar2 = puVar9;
            func_0x00010bdc3520(puVar9);
          }
          _objc_release(puVar9);
          func_0x00010002b838(auStack_320,puVar2);
          uStack_358 = 0;
          uStack_350 = 0;
          uStack_348 = 0;
          func_0x00010007e1e8(&uStack_358,auStack_338,&lStack_308,2);
          puVar6 = &UNK_11088d160;
          puVar2 = &uStack_358;
          (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11088d160,puVar2,puVar11);
          puStack_340 = &uStack_358;
          func_0x00010007e5dc(&puStack_340);
          lVar14 = 0;
          do {
            if ((&cStack_309)[lVar14] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_320 + lVar14));
            }
            lVar14 = lVar14 + -0x18;
          } while (lVar14 != -0x30);
        }
        _objc_release(puVar9);
        puVar1 = puVar3;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_308) {
          ___stack_chk_fail();
          _objc_release(puVar9);
          if (cStack_321 < '\0') {
            __ZdlPv(auStack_338[0]);
          }
          _objc_release(puVar9);
          _objc_release(puVar3);
          __Unwind_Resume();
          _objc_retain(puVar6);
          _objc_retain(puVar2);
          if (puVar1 != (undefined *)0x0) {
            FUN_10548eab4(puVar1,puVar6,puVar2,(long)(param_1 * 1000.0));
          }
          _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_release_11034d2d0)(puVar6);
          return;
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10548e3c0; end: 10548e67f;  */

/* WARNING: Removing unreachable block (ram,0x00010548e648) */
/* WARNING: Removing unreachable block (ram,0x00010548e908) */

void FUN_10548e3c0(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  undefined8 *unaff_x24;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 *puStack_280;
  undefined8 auStack_278 [2];
  char cStack_261;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined *puStack_230;
  long *plStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined *puStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [3];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar4 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar2 = param_4;
  puVar12 = param_5;
  puVar5 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    plVar15 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f2c3b8f;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2c3b8f;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_88,puVar2);
    _objc_retain(param_5);
    if (param_5 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2c3b8f;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar2 = param_5;
      func_0x00010bdc3520();
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,puVar2);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = &UNK_11088d070;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar14 = 0;
    puVar2 = puVar4;
    puVar12 = param_6;
    do {
      if ((&cStack_59)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar14 != -0x48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != auStack_a0);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar9 = &uStack_180;
  pcStack_c8 = FUN_10548e680;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar1;
  puVar4 = puVar2;
  puVar13 = puVar12;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  _objc_retain(puVar12);
  if (puVar3 != (undefined *)0x0) {
    plVar15 = *(long **)(puVar3 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f2c3b8f;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_160,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f2c3b8f;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar4 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_148,puVar4);
    _objc_retain(puVar12);
    if (puVar12 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f2c3b8f;
    }
    else {
      _objc_retainAutorelease(puVar12);
      puVar4 = puVar12;
      func_0x00010bdc3520(puVar12);
    }
    _objc_release(puVar12);
    func_0x00010002b838(auStack_130,puVar4);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_118,3);
    puVar8 = &UNK_11088d0c0;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11088d0c0,&uStack_180,puVar5);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar14 = 0;
    puVar4 = puVar9;
    puVar13 = puVar5;
    do {
      if ((&cStack_119)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = &uStack_180;
    } while (lVar14 != -0x48);
  }
  _objc_release(puVar12);
  _objc_release(puVar2);
  puVar5 = (undefined8 *)puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
    ___stack_chk_fail();
    _objc_release(puVar12);
    puVar9 = auStack_160;
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != puVar9);
    _objc_release(puVar12);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar6 = (undefined *)puVar5;
    __Unwind_Resume();
    puVar11 = &uStack_200;
    pcStack_188 = FUN_10548e940;
    lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = puVar8;
    puVar10 = puVar4;
    puStack_1c0 = unaff_x24;
    puStack_1b8 = puVar9;
    puStack_1b0 = (undefined *)puVar5;
    puStack_1a8 = puVar12;
    puStack_1a0 = puVar2;
    puStack_198 = puVar1;
    ppuStack_190 = &puStack_d0;
    _objc_retain(puVar8);
    plVar15 = (long *)0x0;
    if (puVar6 != (undefined *)0x0) {
      plVar15 = *(long **)(puVar6 + 8);
      _objc_retain(puVar8);
      if (puVar8 == (undefined *)0x0) {
        puVar1 = &UNK_10f2c3b8f;
      }
      else {
        puVar1 = puVar8;
        _objc_retainAutorelease(puVar8);
        func_0x00010bdc3520();
      }
      _objc_release(puVar8);
      puVar9 = auStack_1e0;
      func_0x00010002b838(auStack_1e0,puVar1);
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
      puVar3 = &UNK_11088d110;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11088d110,&uStack_200,puVar4);
      puStack_1e8 = (undefined1 *)&uStack_200;
      func_0x00010007e5dc(&puStack_1e8);
      puVar10 = puVar11;
      puVar13 = puVar4;
      puVar5 = &uStack_200;
      if (cStack_1c9 < '\0') {
        __ZdlPv(auStack_1e0[0]);
        puVar10 = puVar11;
        puVar13 = puVar4;
        puVar5 = &uStack_200;
      }
    }
    puVar1 = puVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar8);
    _objc_release(puVar8);
    puVar7 = puVar1;
    __Unwind_Resume();
    pcStack_208 = FUN_10548eab4;
    lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar6 = puVar3;
    puVar2 = puVar10;
    puStack_240 = unaff_x24;
    puStack_238 = puVar9;
    puStack_230 = (undefined *)puVar5;
    plStack_228 = plVar15;
    puStack_220 = puVar1;
    puStack_218 = puVar8;
    pppuStack_210 = &ppuStack_190;
    _objc_retain(puVar3);
    _objc_retain(puVar10);
    if (puVar7 != (undefined *)0x0) {
      plVar15 = *(long **)(puVar7 + 8);
      _objc_retain(puVar3);
      if (puVar3 == (undefined *)0x0) {
        puVar1 = &UNK_10f2c3b8f;
      }
      else {
        puVar1 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      func_0x00010002b838(auStack_278,puVar1);
      _objc_retain(puVar10);
      if (puVar10 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f2c3b8f;
      }
      else {
        _objc_retainAutorelease(puVar10);
        puVar2 = puVar10;
        func_0x00010bdc3520(puVar10);
      }
      _objc_release(puVar10);
      func_0x00010002b838(auStack_260,puVar2);
      uStack_298 = 0;
      uStack_290 = 0;
      uStack_288 = 0;
      func_0x00010007e1e8(&uStack_298,auStack_278,&lStack_248,2);
      puVar6 = &UNK_11088d160;
      puVar2 = &uStack_298;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11088d160,puVar2,puVar13);
      puStack_280 = &uStack_298;
      func_0x00010007e5dc(&puStack_280);
      lVar14 = 0;
      do {
        if ((&cStack_249)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_260 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
    _objc_release(puVar10);
    puVar1 = puVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_248) {
      ___stack_chk_fail();
      _objc_release(puVar10);
      if (cStack_261 < '\0') {
        __ZdlPv(auStack_278[0]);
      }
      _objc_release(puVar10);
      _objc_release(puVar3);
      __Unwind_Resume();
      _objc_retain(puVar6);
      _objc_retain(puVar2);
      if (puVar1 != (undefined *)0x0) {
        FUN_10548eab4(puVar1,puVar6,puVar2,(long)(param_1 * 1000.0));
      }
      _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar6);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10548e680; end: 10548e93f;  */

/* WARNING: Removing unreachable block (ram,0x00010548e908) */

void FUN_10548e680(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *unaff_x24;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined *puStack_170;
  long *plStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar3 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar2 = param_4;
  puVar10 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    plVar12 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f2c3b8f;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2c3b8f;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_88,puVar2);
    _objc_retain(param_5);
    if (param_5 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2c3b8f;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar2 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,puVar2);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = &UNK_11088d0c0;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11088d0c0,&uStack_c0,param_6);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar11 = 0;
    puVar2 = puVar3;
    puVar10 = param_6;
    do {
      if ((&cStack_59)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar11 != -0x48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  puVar3 = (undefined8 *)param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_5);
    puVar13 = auStack_a0;
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != puVar13);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    puVar4 = (undefined *)puVar3;
    __Unwind_Resume();
    puVar9 = &uStack_140;
    pcStack_c8 = FUN_10548e940;
    lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = puVar1;
    puVar8 = puVar2;
    puStack_100 = unaff_x24;
    puStack_f8 = puVar13;
    puStack_f0 = (undefined *)puVar3;
    puStack_e8 = param_5;
    puStack_e0 = param_4;
    puStack_d8 = param_3;
    puStack_d0 = &stack0xfffffffffffffff0;
    _objc_retain(puVar1);
    plVar12 = (long *)0x0;
    if (puVar4 != (undefined *)0x0) {
      plVar12 = *(long **)(puVar4 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar5 = &UNK_10f2c3b8f;
      }
      else {
        puVar5 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      puVar13 = auStack_120;
      func_0x00010002b838(auStack_120,puVar5);
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_130 = 0;
      func_0x00010007e1e8(&uStack_140,auStack_120,&lStack_108,1);
      puVar5 = &UNK_11088d110;
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11088d110,&uStack_140,puVar2);
      puStack_128 = (undefined1 *)&uStack_140;
      func_0x00010007e5dc(&puStack_128);
      puVar8 = puVar9;
      puVar10 = puVar2;
      puVar3 = &uStack_140;
      if (cStack_109 < '\0') {
        __ZdlPv(auStack_120[0]);
        puVar8 = puVar9;
        puVar10 = puVar2;
        puVar3 = &uStack_140;
      }
    }
    puVar4 = puVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
      ___stack_chk_fail();
      _objc_release(puVar1);
      _objc_release(puVar1);
      puVar6 = puVar4;
      __Unwind_Resume();
      pcStack_148 = FUN_10548eab4;
      lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar7 = puVar5;
      puVar2 = puVar8;
      puStack_180 = unaff_x24;
      puStack_178 = puVar13;
      puStack_170 = (undefined *)puVar3;
      plStack_168 = plVar12;
      puStack_160 = puVar4;
      puStack_158 = puVar1;
      ppuStack_150 = &puStack_d0;
      _objc_retain(puVar5);
      _objc_retain(puVar8);
      if (puVar6 != (undefined *)0x0) {
        plVar12 = *(long **)(puVar6 + 8);
        _objc_retain(puVar5);
        if (puVar5 == (undefined *)0x0) {
          puVar1 = &UNK_10f2c3b8f;
        }
        else {
          puVar1 = puVar5;
          _objc_retainAutorelease(puVar5);
          func_0x00010bdc3520();
        }
        _objc_release(puVar5);
        func_0x00010002b838(auStack_1b8,puVar1);
        _objc_retain(puVar8);
        if (puVar8 == (undefined8 *)0x0) {
          puVar2 = (undefined8 *)&UNK_10f2c3b8f;
        }
        else {
          _objc_retainAutorelease(puVar8);
          puVar2 = puVar8;
          func_0x00010bdc3520(puVar8);
        }
        _objc_release(puVar8);
        func_0x00010002b838(auStack_1a0,puVar2);
        uStack_1d8 = 0;
        uStack_1d0 = 0;
        uStack_1c8 = 0;
        func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
        puVar7 = &UNK_11088d160;
        puVar2 = &uStack_1d8;
        (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11088d160,puVar2,puVar10);
        puStack_1c0 = &uStack_1d8;
        func_0x00010007e5dc(&puStack_1c0);
        lVar11 = 0;
        do {
          if ((&cStack_189)[lVar11] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar11));
          }
          lVar11 = lVar11 + -0x18;
        } while (lVar11 != -0x30);
      }
      _objc_release(puVar8);
      puVar1 = puVar5;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
        ___stack_chk_fail();
        _objc_release(puVar8);
        if (cStack_1a1 < '\0') {
          __ZdlPv(auStack_1b8[0]);
        }
        _objc_release(puVar8);
        _objc_release(puVar5);
        __Unwind_Resume();
        _objc_retain(puVar7);
        _objc_retain(puVar2);
        if (puVar1 != (undefined *)0x0) {
          FUN_10548eab4(puVar1,puVar7,puVar2,(long)(param_1 * 1000.0));
        }
        _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(puVar7);
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10548e940; end: 10548eab3;  */

void FUN_10548e940(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar5 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar6 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f2c3b8f;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_11088d110;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_11088d110,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = puVar3;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = puVar3;
      param_5 = param_4;
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puVar3 = puVar5;
  _objc_retain(puVar1);
  _objc_retain(puVar5);
  if (puVar2 != (undefined *)0x0) {
    plVar6 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f2c3b8f;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_f8,puVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f2c3b8f;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_e0,puVar3);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar4 = &UNK_11088d160;
    puVar3 = &uStack_118;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_11088d160,puVar3,param_5);
    puStack_100 = &uStack_118;
    func_0x00010007e5dc(&puStack_100);
    lVar7 = 0;
    do {
      if ((&cStack_c9)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
  }
  _objc_release(puVar5);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar1);
  __Unwind_Resume();
  _objc_retain(puVar4);
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    FUN_10548eab4(puVar2,puVar4,puVar3,(long)(param_1 * 1000.0));
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10548eab4; end: 10548ece3;  */

void FUN_10548eab4(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar2 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    plVar5 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f2c3b8f;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2c3b8f;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_11088d160;
    puVar2 = &uStack_98;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_11088d160,puVar2,param_5);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar4 = 0;
    do {
      if ((&cStack_49)[lVar4] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar4));
      }
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != -0x30);
  }
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    FUN_10548eab4(puVar3,puVar1,puVar2,(long)(param_1 * 1000.0));
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10548ece4; end: 10548ed77;  */

void FUN_10548ece4(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    FUN_10548eab4(param_2,param_3,param_4,(long)(param_1 * 1000.0));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10548ed78; end: 10548efa7;  */

/* WARNING: Removing unreachable block (ram,0x00010548f230) */

void FUN_10548ed78(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined *param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 *unaff_x24;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined8 auStack_140 [3];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar2 = param_4;
  puVar7 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    plVar10 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f2c3b8f;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2c3b8f;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_11088d1b0;
    puVar2 = &uStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar9 = 0;
    puVar7 = param_5;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_4);
    if (cStack_61 < '\0') {
      __ZdlPv(auStack_78[0]);
    }
    _objc_release(param_4);
    _objc_release(param_3);
    __Unwind_Resume();
    puVar6 = &uStack_160;
    lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = puVar1;
    puVar4 = puVar2;
    puVar8 = puVar7;
    _objc_retain(puVar1);
    _objc_retain(puVar2);
    _objc_retain(puVar7);
    if (puVar3 != (undefined *)0x0) {
      plVar10 = *(long **)(puVar3 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar3 = &UNK_10f2c3b8f;
      }
      else {
        puVar3 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_140,puVar3);
      _objc_retain(puVar2);
      if (puVar2 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)&UNK_10f2c3b8f;
      }
      else {
        _objc_retainAutorelease(puVar2);
        puVar4 = puVar2;
        func_0x00010bdc3520(puVar2);
      }
      _objc_release(puVar2);
      func_0x00010002b838(auStack_128,puVar4);
      _objc_retain(puVar7);
      if (puVar7 == (undefined *)0x0) {
        puVar3 = &UNK_10f2c3b8f;
      }
      else {
        _objc_retainAutorelease(puVar7);
        puVar3 = puVar7;
        func_0x00010bdc3520(puVar7);
      }
      _objc_release(puVar7);
      func_0x00010002b838(auStack_110,puVar3);
      uStack_160 = 0;
      uStack_158 = 0;
      uStack_150 = 0;
      func_0x00010007e1e8(&uStack_160,auStack_140,&lStack_f8,3);
      puVar5 = &UNK_11088d200;
      (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11088d200,&uStack_160,param_6);
      puStack_148 = (undefined1 *)&uStack_160;
      func_0x00010007e5dc(&puStack_148);
      lVar9 = 0;
      puVar4 = puVar6;
      puVar8 = param_6;
      do {
        if ((&cStack_f9)[lVar9] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar9));
        }
        lVar9 = lVar9 + -0x18;
        unaff_x24 = &uStack_160;
      } while (lVar9 != -0x48);
    }
    _objc_release(puVar7);
    _objc_release(puVar2);
    puVar3 = puVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
      ___stack_chk_fail();
      _objc_release(puVar7);
      do {
        unaff_x24 = unaff_x24 + -3;
      } while (unaff_x24 != auStack_140);
      _objc_release(puVar7);
      _objc_release(puVar2);
      _objc_release(puVar1);
      __Unwind_Resume();
      _objc_retain(puVar5);
      _objc_retain(puVar4);
      _objc_retain(puVar8);
      if (puVar3 != (undefined *)0x0) {
        FUN_10548efa8(puVar3,puVar5,puVar4,puVar8,(long)(param_1 * 1000.0));
      }
      _objc_release(puVar8);
      _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar5);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10548efa8; end: 10548f267;  */

/* WARNING: Removing unreachable block (ram,0x00010548f230) */

void FUN_10548efa8(double param_1,long param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *unaff_x24;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar4 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar3 = param_4;
  puVar5 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    plVar7 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f2c3b8f;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar1 = &UNK_10f2c3b8f;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_88,puVar1);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar1 = &UNK_10f2c3b8f;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = &UNK_11088d200;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11088d200,&uStack_c0,param_6);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar6 = 0;
    puVar3 = (undefined *)puVar4;
    puVar5 = param_6;
    do {
      if ((&cStack_59)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar6 != -0x48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_5);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_a0);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    __Unwind_Resume();
    _objc_retain(puVar1);
    _objc_retain(puVar3);
    _objc_retain(puVar5);
    if (puVar2 != (undefined *)0x0) {
      FUN_10548efa8(puVar2,puVar1,puVar3,puVar5,(long)(param_1 * 1000.0));
    }
    _objc_release(puVar5);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10548f268; end: 10548f31b;  */

void FUN_10548f268(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    FUN_10548efa8(param_2,param_3,param_4,param_5,(long)(param_1 * 1000.0));
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10548f31c; end: 10548f5db;  */

/* WARNING: Removing unreachable block (ram,0x00010548f5a4) */

undefined *
FUN_10548f31c(long param_1,undefined *param_2,undefined8 *param_3,undefined *param_4,
             undefined *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  int extraout_w10;
  long lVar8;
  long *plVar9;
  undefined8 *unaff_x24;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined *puStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar5 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  puVar6 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f2c3b8f;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2c3b8f;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,puVar2);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar1 = &UNK_10f2c3b8f;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = &UNK_11088d250;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11088d250,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar8 = 0;
    puVar2 = puVar5;
    puVar6 = param_5;
    do {
      if ((&cStack_59)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar8 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puStack_f8 = auStack_a0;
  do {
    unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (undefined8 *)puStack_f8);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_c8 = FUN_10548f5dc;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar2;
  puStack_100 = (undefined1 *)unaff_x24;
  puStack_f0 = puVar3;
  puStack_e8 = param_4;
  puStack_e0 = param_3;
  puStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  if (puVar4 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f2c3b8f;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_138,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f2c3b8f;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_120,puVar5);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    func_0x00010007e1e8(&uStack_158,auStack_138,&lStack_108,2);
    puVar5 = &uStack_158;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11088d2a0,puVar5,puVar6);
    puStack_140 = &uStack_158;
    func_0x00010007e5dc(&puStack_140);
    lVar8 = 0;
    do {
      if ((&cStack_109)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  _objc_release(puVar2);
  puVar6 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_121 < '\0') {
    __ZdlPv(auStack_138[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  __Unwind_Resume();
  ppuVar7 = &puStack_1a0;
  pcStack_168 = FUN_10548f80c;
  puStack_198 = PTR_PTR_1126e86e8;
  puStack_1a0 = puVar6;
  puStack_180 = puVar2;
  puStack_178 = puVar1;
  ppuStack_170 = &puStack_d0;
  _objc_msgSendSuper2(&puStack_1a0,PTR_s_init_1125d9248);
  if (ppuVar7 != (undefined **)0x0) {
    uVar11 = puVar5[1];
    uVar10 = *puVar5;
    if (puVar5[1] != 0) {
      do {
        FUN_10548fce8();
      } while (extraout_w10 != 0);
    }
    uStack_188 = *(undefined8 *)((long)ppuVar7 + 0x20);
    uStack_190 = *(undefined8 *)((long)ppuVar7 + 0x18);
    *(undefined8 *)((long)ppuVar7 + 0x20) = uVar11;
    *(undefined8 *)((long)ppuVar7 + 0x18) = uVar10;
    FUN_10548fc98(&uStack_190);
  }
  return (undefined *)ppuVar7;
}



/* Entry: 10548f5dc; end: 10548f80b;  */

undefined * FUN_10548f5dc(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  int extraout_w10;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f2c3b8f;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2c3b8f;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar2 = &uStack_98;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_11088d2a0,puVar2,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar4 = 0;
    do {
      if ((&cStack_49)[lVar4] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar4));
      }
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != -0x30);
  }
  _objc_release(param_3);
  puVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_3);
    if (cStack_61 < '\0') {
      __ZdlPv(auStack_78[0]);
    }
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume();
    ppuVar3 = &puStack_e0;
    pcStack_a8 = FUN_10548f80c;
    puStack_d8 = PTR_PTR_1126e86e8;
    puStack_e0 = puVar1;
    puStack_c0 = param_3;
    puStack_b8 = param_2;
    puStack_b0 = &stack0xfffffffffffffff0;
    _objc_msgSendSuper2(&puStack_e0,PTR_s_init_1125d9248);
    if (ppuVar3 != (undefined **)0x0) {
      uVar7 = puVar2[1];
      uVar6 = *puVar2;
      if (puVar2[1] != 0) {
        do {
          FUN_10548fce8();
        } while (extraout_w10 != 0);
      }
      uStack_c8 = *(undefined8 *)((long)ppuVar3 + 0x20);
      uStack_d0 = *(undefined8 *)((long)ppuVar3 + 0x18);
      *(undefined8 *)((long)ppuVar3 + 0x20) = uVar7;
      *(undefined8 *)((long)ppuVar3 + 0x18) = uVar6;
      FUN_10548fc98(&uStack_d0);
    }
    return (undefined *)ppuVar3;
  }
  return puVar1;
}



/* Entry: 10548f80c; end: 10548f883; -[SCNBitmoji3dBatchingFetcher initWithCpp:] */

undefined1 * FUN_10548f80c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e86e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10548fce8();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_10548fc98(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10548f884; end: 10548f9a3; +[SCNBitmoji3dBatchingFetcher create:] */

void FUN_10548f884(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int extraout_w10;
  undefined8 unaff_x20;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  
  _objc_retain(param_3);
  func_0x0001009d8890(&lStack_48,param_3);
  func_0x0001054902b4(&lStack_58,&lStack_48);
  func_0x0001009d8b30(&lStack_48);
  if (lStack_58 == 0) {
    unaff_x20 = 0;
  }
  else {
    lStack_40 = lStack_50;
    ppuStack_38 = &PTR_DAT_11088d510;
    lStack_48 = lStack_58;
    if (lStack_50 != 0) {
      do {
        FUN_10548fce8();
      } while (extraout_w10 != 0);
    }
    func_0x00010015c218(&ppuStack_38,&lStack_48,FUN_10548fc24);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010548fd18();
  }
  FUN_10548fc98(&lStack_58);
  func_0x0001000fedf4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
  return;
}



/* Entry: 10548f9a4; end: 10548fb8f; -[SCNBitmoji3dBatchingFetcher downloadBatchImageData:avatarId:friendAvatarId:sceneIds:attribution:trimCircle:scale:uaVersion:useStaging:engineType:] */

void FUN_10548f9a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined1 param_11,undefined4 param_12)

{
  long *plVar1;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_10548fd24(auStack_60,param_3);
  func_0x0001000fbca4(auStack_78,param_4);
  func_0x000100114864(auStack_98,param_5);
  func_0x0001000fbed0(auStack_b0,param_6);
  func_0x0001000fbca4(auStack_c8,param_7);
  (**(code **)(*plVar1 + 0x10))
            (plVar1,auStack_60,auStack_78,auStack_98,auStack_b0,auStack_c8,param_8,param_9,param_10,
             param_11,param_12);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
  func_0x0001000e30f4(auStack_b0);
  func_0x0001001148fc(auStack_98);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
  func_0x00010548fcc0(auStack_60);
  _objc_release(param_7);
  func_0x0001000fed48();
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x0001000fedf4();
  return;
}



/* Entry: 10548fb90; end: 10548fbe3; -[SCNBitmoji3dBatchingFetcher .cxx_destruct] */

void FUN_10548fb90(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_11088d510;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  FUN_10548fc98((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 10548fbe4; end: 10548fc23; -[SCNBitmoji3dBatchingFetcher .cxx_construct] */

undefined8 * FUN_10548fbe4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10548fce8();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10548fc24; end: 10548fc97;  */

void FUN_10548fc24(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126b9530;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10548fce8();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_10548fc98(&uStack_30);
  return;
}



/* Entry: 10548fc98; end: 10548fce7;  */

long FUN_10548fc98(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10548fce8; end: 10548fd23;  */

void FUN_10548fce8(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10548fd24; end: 10548fdd3;  */

void FUN_10548fd24(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_11088d578;
    lStack_40 = param_2;
    func_0x0001000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_10548fdd4);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x0001000df524(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_105490160(&uStack_50);
  }
  FUN_10549018c();
  return;
}



/* Entry: 10548fdd4; end: 10548fed3;  */

void FUN_10548fdd4(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_11088d5b8;
  puVar4[3] = &PTR_DAT_11088d630;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x0001000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  puVar4[3] = &PTR_FUN_11088d608;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_105490160(&uStack_50);
  return;
}



/* Entry: 10548fed4; end: 10548fed7;  */

void FUN_10548fed4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11088d5b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10548fed8; end: 10548feeb;  */

void FUN_10548fed8(void)

{
  FUN_105490150();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10548feec; end: 10548fef7;  */

long FUN_10548feec(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_11088d578;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10548fef8; end: 10548ff37;  */

void FUN_10548fef8(void)

{
  func_0x000105490194();
  return;
}



/* Entry: 10548ff38; end: 1054900bb;  */

void FUN_10548ff38(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  
  lVar2 = param_1;
  _objc_autoreleasePoolPush();
  puVar1 = PTR_PTR_1126b9638;
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  if (*(char *)(param_2 + 0x28) == '\x01') {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71fe0(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    plVar6 = (long *)(param_2 + 0x10);
    while (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0) {
      func_0x000100837700(plVar6 + 5);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = (long)(plVar6 + 2);
      func_0x0001001011a4(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(puVar3);
      _objc_release(lVar4);
      func_0x0001054901a0();
    }
    func_0x00010bf51e00(puVar3);
    func_0x00010549018c();
    func_0x00010bfbaec0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbaba0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x0001054901a0();
  func_0x00010c0e2aa0(uVar5);
  func_0x00010549018c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar2);
  return;
}



/* Entry: 1054900bc; end: 10549014f;  */

long FUN_1054900bc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_11088d578;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 105490150; end: 10549015f;  */

void FUN_105490150(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11088d5b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105490160; end: 10549018b;  */

long FUN_105490160(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10549018c; end: 1054901a7;  */

void FUN_10549018c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1054901a8; end: 10549023b;  */

undefined8 * FUN_1054901a8(undefined8 *param_1)

{
  param_1[0xe] = &PTR_FUN_11088d708;
  param_1[0x14] = 0;
  *param_1 = &PTR_FUN_11088d6e0;
  func_0x000100625b7c(param_1,&PTR_PTR_11088d720,param_1 + 1);
  *param_1 = &PTR_FUN_11088d6e0;
  param_1[0xe] = &PTR_FUN_11088d708;
  FUN_105491afc(param_1 + 1,0x10);
  return param_1;
}



/* Entry: 10549023c; end: 10549026b;  */

void FUN_10549023c(undefined8 param_1,undefined8 param_2)

{
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar1;
  char acStack_50 [16];
  
  func_0x00010016ed84();
  _strlen(param_2);
  func_0x000107c60cd0(acStack_50);
  if (acStack_50[0] == '\x01') {
    func_0x0001003abf2c();
    lVar1 = *(long *)(unaff_x20 + extraout_x8 + 0x28);
    func_0x0001003abf9c(unaff_x20 + extraout_x8);
    func_0x0001003abfdc();
    if (lVar1 == 0) {
      func_0x0001003abf2c();
      func_0x000100456940(unaff_x20 + extraout_x8_00,5);
    }
  }
  func_0x000107c60cd4(acStack_50);
  return;
}



/* Entry: 10549026c; end: 105490283;  */

long FUN_10549026c(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  lVar1 = param_1;
  FUN_1054917d8();
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(lVar1 + 0x70);
  return param_1;
}



/* Entry: 105490284; end: 1054902f3;  */

long FUN_105490284(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1054917d8(param_1,&PTR_PTR_11088d718);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(lVar1 + 0x70);
  return param_1;
}



/* Entry: 1054902f4; end: 105490313;  */

void FUN_1054902f4(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_105491c00(&uStack_11,param_1);
  return;
}



/* Entry: 105490314; end: 105490ac7;  */

/* WARNING: Possible PIC construction at 0x0001054908c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105490a04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001054908cc) */
/* WARNING: Removing unreachable block (ram,0x000105490900) */
/* WARNING: Removing unreachable block (ram,0x000105490920) */
/* WARNING: Removing unreachable block (ram,0x0001054909d8) */
/* WARNING: Removing unreachable block (ram,0x0001054908e0) */
/* WARNING: Removing unreachable block (ram,0x000105490a08) */
/* WARNING: Removing unreachable block (ram,0x000105490ac4) */

long FUN_105490314(long param_1,undefined8 *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,int param_7,int param_8,undefined4 param_9,
                  undefined4 param_10,int param_11)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uStack_460;
  long lStack_458;
  undefined8 uStack_450;
  long lStack_448;
  undefined1 auStack_440 [24];
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  long lStack_408;
  undefined8 uStack_400;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  undefined1 auStack_3d8 [24];
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined1 auStack_2a8 [40];
  undefined1 auStack_280 [32];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined1 uStack_230;
  undefined1 auStack_228 [24];
  undefined1 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined **ppuStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined ***pppuStack_158;
  undefined1 auStack_150 [24];
  undefined8 *puStack_138;
  undefined1 auStack_130 [32];
  undefined1 auStack_110 [32];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_88 [24];
  undefined8 *puStack_70;
  
  func_0x000105493a38();
  func_0x00010015bc98(&lStack_3f0,param_5);
  func_0x00010054ce1c(lStack_3f0,lStack_3e8);
  puVar4 = &uStack_3c0;
  FUN_1054901a8(puVar4);
  func_0x0001054939f4();
  func_0x0001054939f4();
  FUN_10549023c();
  func_0x0001006282fc();
  if (*(char *)(param_4 + 0x18) == '\x01') {
    func_0x0001054939f4();
    FUN_10549026c(param_4);
    func_0x0001006282fc(puVar4,param_4);
  }
  func_0x0001054939f4();
  FUN_10549023c();
  if (param_7 != 0) {
    func_0x0001054939f4();
  }
  if (param_8 != 1) {
    func_0x0001054939f4();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  }
  for (; lStack_3f0 != lStack_3e8; lStack_3f0 = lStack_3f0 + 0x18) {
    FUN_10549023c(&uStack_3c0,&UNK_10f2c3d26);
    func_0x0001006282fc();
  }
  func_0x0001054939f4();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  if (0 < param_11) {
    func_0x0001054939f4();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  }
  FUN_105491b64(auStack_3d8,&uStack_3b8);
  FUN_105490284(&uStack_3c0);
  func_0x0001000e30f4(&lStack_3f0);
  uStack_450 = *(undefined8 *)(param_1 + 8);
  lStack_3f8 = *(long *)(param_1 + 0x10);
  if (lStack_3f8 == 0) {
    lStack_448 = 0;
  }
  else {
    plVar7 = (long *)(lStack_3f8 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      lStack_448 = lStack_3f8;
    } while (cVar2 != '\0');
  }
  uStack_400 = uStack_450;
  func_0x000105493c48(auStack_440);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_428,auStack_3d8);
  lStack_408 = param_2[1];
  uStack_410 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x0001054939b4();
    } while (extraout_w10 != 0);
  }
  puVar4 = (undefined8 *)0x58;
  __Znwm();
  *puVar4 = &PTR_SUB_11088d938;
  puVar4[1] = uStack_450;
  puVar4[2] = lStack_448;
  uStack_450 = 0;
  lStack_448 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar4 + 3,auStack_440);
  puVar4[7] = uStack_420;
  puVar4[6] = uStack_428;
  puVar4[8] = uStack_418;
  uStack_420 = 0;
  uStack_418 = 0;
  uStack_428 = 0;
  puVar4[10] = lStack_408;
  puVar4[9] = uStack_410;
  if (lStack_408 != 0) {
    do {
      func_0x0001054939b4();
    } while (extraout_w10_00 != 0);
  }
  uStack_460 = *param_2;
  lStack_458 = param_2[1];
  if (lStack_458 == 0) {
    lStack_160 = 0;
  }
  else {
    plVar7 = (long *)(lStack_458 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      lStack_160 = lStack_458;
    } while (cVar2 != '\0');
  }
  pppuStack_158 = &ppuStack_170;
  ppuStack_170 = &PTR_SUB_11088d9c8;
  uStack_180 = 0;
  uStack_188 = 0;
  uStack_178 = 0;
  uVar1 = *(ulong *)(param_6 + 8);
  if (-1 < (char)*(byte *)(param_6 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_6 + 0x17);
  }
  uStack_168 = uStack_460;
  puStack_138 = puVar4;
  if (uVar1 != 0) {
    func_0x00010002b838(&uStack_1a0,&DAT_10f2c39da);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_1b8,param_6);
    uStack_3b8 = uStack_198;
    uStack_3c0 = uStack_1a0;
    uStack_3b0 = uStack_190;
    uStack_190 = 0;
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_3a0 = uStack_1b0;
    uStack_3a8 = uStack_1b8;
    uStack_398 = uStack_1a8;
    uStack_1b0 = 0;
    uStack_1b8 = 0;
    uStack_1a8 = 0;
    func_0x00010067a7ac(&uStack_188,&uStack_3c0);
    func_0x0001005acd08(&uStack_3c0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_1b8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_1a0);
  }
  func_0x0001005acf78(&uStack_200,&uStack_188);
  uStack_1d8 = uStack_1f8;
  uStack_1e0 = uStack_200;
  uStack_1d0 = uStack_1f0;
  uStack_1f0 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1c8 = 0;
  func_0x0001005ad2a8(&uStack_200);
  auStack_248[0] = 0;
  uStack_230 = 0;
  auStack_228[0] = 0;
  uStack_210 = 0;
  uStack_208 = 0x100000000;
  func_0x0001001148fc(auStack_248);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_260,auStack_3d8);
  func_0x00010067b9e4(auStack_280,&uStack_1e0);
  func_0x000105301808(auStack_2a8,auStack_228);
  FUN_10530182c(&uStack_3c0,auStack_260,auStack_280,6,auStack_2a8);
  func_0x0001001148fc(auStack_2a8);
  func_0x0001005ad2a8(auStack_280);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_260);
  func_0x000105493548(auStack_110,auStack_150);
  func_0x000105493590(auStack_130,&ppuStack_170);
  puVar4 = (undefined8 *)0x60;
  __Znwm();
  plVar8 = puVar4 + 1;
  *plVar8 = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_11088da58;
  puVar5 = &uStack_b0;
  func_0x000105493548(puVar5,auStack_110);
  func_0x000105493b18();
  func_0x000105493b7c();
  func_0x000105493548();
  puVar6 = &uStack_f0;
  puStack_70 = puVar5;
  func_0x000105493590(puVar6,auStack_130);
  func_0x000105493b18();
  func_0x000105493b6c();
  func_0x000105493590();
  puVar9 = puVar4 + 3;
  *puVar9 = &PTR_FUN_11088dbc8;
  puVar4[7] = puVar5;
  puStack_70 = (undefined8 *)0x0;
  puVar4[0xb] = puVar6;
  uStack_b8 = 0;
  func_0x0001054938a4(&puStack_d0);
  FUN_105492fd8(&uStack_f0);
  func_0x0001054938d8(auStack_88);
  func_0x000105492e38(&uStack_b0);
  puStack_2b8 = puVar9;
  puStack_2b0 = puVar4;
  FUN_105492fd8(auStack_130);
  func_0x000105492e38(auStack_110);
  plVar7 = *(long **)(param_1 + 0x28);
  uStack_a8 = *(undefined8 *)(param_1 + 0x20);
  uStack_b0 = *(undefined8 *)(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    do {
      func_0x0001054939b4();
    } while (extraout_w10_01 != 0);
  }
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = *plVar8 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uStack_f0 = 0;
  uStack_e8 = 0;
  puStack_d0 = puVar9;
  puStack_c8 = puVar4;
  (**(code **)(*plVar7 + 0x10))(auStack_88);
  func_0x000105301d8c(auStack_88);
  func_0x00010067c884(&uStack_f0);
  func_0x000105302c94(&puStack_d0);
  func_0x000100554470(&uStack_b0);
  FUN_105493918(&puStack_2b8);
  FUN_1053018c4(&uStack_3c0);
  func_0x0001001148fc(auStack_228);
  func_0x0001005ad2a8(&uStack_1e0);
  func_0x0001005ad2a8(&uStack_188);
  FUN_105492fd8(&ppuStack_170);
  func_0x00010548fcc0(&uStack_460);
  func_0x000105492e38(auStack_150);
  FUN_105490ac8(&uStack_450);
  puVar4 = &uStack_400;
  func_0x000105493cd4();
  if (puVar4 != (undefined8 *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 105490ac8; end: 105490aff;  */

undefined8 FUN_105490ac8(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010548fcc0(param_1 + 0x40);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x28);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x10);
  func_0x000105493cd4();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 105490b00; end: 105490dbb;  */

undefined8 * FUN_105490b00(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 in_NG;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x9;
  ulong uVar7;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  long extraout_x9_03;
  long *extraout_x10;
  long *plVar8;
  long *extraout_x10_00;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *plVar9;
  ulong uVar10;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong unaff_x25;
  
  func_0x000105493b30();
  uVar13 = unaff_x19[1];
  uVar7 = param_3;
  if (uVar13 != 0) {
    uVar12 = uVar13 - 1;
    if ((uVar13 & uVar12) == 0) {
      unaff_x25 = uVar12 & param_3;
      in_NG = 0;
    }
    else {
      in_NG = (long)(param_3 - uVar13) < 0;
      unaff_x25 = param_3;
      if (uVar13 <= param_3) {
        func_0x000105493ca8();
      }
    }
    puVar11 = *(undefined8 **)(*unaff_x19 + unaff_x25 * 8);
    unaff_x20 = (undefined8 *)0x0;
    if (puVar11 != (undefined8 *)0x0) {
      do {
        while( true ) {
          unaff_x20 = (undefined8 *)*puVar11;
          if (unaff_x20 == (undefined8 *)0x0) goto LAB_105490ba8;
          uVar5 = unaff_x20[1];
          in_NG = (long)(uVar5 - param_3) < 0;
          puVar11 = unaff_x20;
          if (uVar5 != param_3) break;
          func_0x000105493bfc();
          if ((uVar7 & 1) != 0) goto LAB_105490d98;
        }
        if ((uVar13 & uVar12) == 0) {
          uVar5 = uVar5 & uVar12;
        }
        else if (uVar13 <= uVar5) {
          uVar10 = 0;
          if (uVar13 != 0) {
            uVar10 = uVar5 / uVar13;
          }
          uVar5 = uVar5 - uVar10 * uVar13;
        }
        in_NG = (long)(uVar5 - unaff_x25) < 0;
      } while (uVar5 == unaff_x25);
    }
  }
LAB_105490ba8:
  func_0x000105493b20();
  func_0x000105493cec();
  func_0x000105493c48();
  func_0x0001054939fc();
  if ((uVar13 != 0) &&
     (func_0x000105493ba4(param_1,param_2,(float)uVar13), uVar12 = unaff_x25, !(bool)in_NG))
  goto LAB_105490d40;
  func_0x000105493b8c();
  bVar3 = 2 < uVar13;
  bVar4 = uVar13 == 3;
  func_0x00010549395c();
  uVar12 = extraout_x8;
  if (!bVar3 || bVar4) {
    uVar12 = extraout_x9;
  }
  if (uVar12 - 1 == 0) {
    uVar12 = 2;
  }
  else if ((uVar12 & uVar12 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar7 = uVar12;
  }
  uVar13 = unaff_x19[1];
  bVar4 = uVar13 <= uVar12;
  if (bVar4 && uVar12 != uVar13) {
LAB_105490c10:
    if (uVar12 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x105490dac);
      (*pcVar2)();
    }
    __Znwm(uVar12 << 3);
    FUN_1054930cc();
    uVar7 = 0;
    unaff_x19[1] = uVar12;
    while (uVar12 != uVar7) {
      func_0x000105493c64();
      uVar7 = extraout_x9_00;
    }
    uVar13 = uVar12;
    if (unaff_x19[2] != 0) {
      func_0x000105493c50();
      func_0x000105493d00();
      lVar6 = extraout_x8_00;
      uVar7 = extraout_x9_01;
      plVar9 = extraout_x10;
      uVar5 = extraout_x11;
      while (plVar8 = plVar9, plVar9 = (long *)*plVar8, plVar9 != (long *)0x0) {
        uVar10 = plVar9[1];
        if ((uVar12 & uVar7) == 0) {
          uVar10 = uVar10 & uVar7;
        }
        else if (uVar12 <= uVar10) {
          uVar1 = 0;
          if (uVar12 != 0) {
            uVar1 = uVar10 / uVar12;
          }
          uVar10 = uVar10 - uVar1 * uVar12;
        }
        if (uVar10 != uVar5) {
          if (*(long *)(lVar6 + uVar10 * 8) == 0) {
            *(long **)(lVar6 + uVar10 * 8) = plVar8;
            uVar5 = uVar10;
          }
          else {
            *plVar8 = *plVar9;
            func_0x000105493970();
            lVar6 = extraout_x8_01;
            uVar7 = extraout_x9_02;
            plVar9 = extraout_x10_00;
            uVar5 = extraout_x11_00;
          }
        }
      }
    }
  }
  else if (!bVar4) {
    func_0x000105493aec();
    if ((bVar4) && ((uVar13 & uVar13 - 1) == 0)) {
      func_0x00010549393c();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    if (uVar12 <= uVar7) {
      uVar12 = uVar7;
    }
    if (uVar12 < uVar13) {
      if (uVar12 != 0) goto LAB_105490c10;
      FUN_1054930cc();
      unaff_x19[1] = 0;
      uVar13 = 0;
    }
    else {
      uVar13 = unaff_x19[1];
    }
  }
  if ((uVar13 & uVar13 - 1) == 0) {
    uVar12 = uVar13 - 1 & param_3;
  }
  else {
    uVar12 = param_3;
    if (uVar13 <= param_3) {
      func_0x000105493ca8();
      uVar12 = unaff_x25;
    }
  }
LAB_105490d40:
  puVar11 = *(undefined8 **)(*unaff_x19 + uVar12 * 8);
  if (puVar11 == (undefined8 *)0x0) {
    func_0x000105493bc8();
    if (extraout_x9_03 != 0) {
      uVar7 = *(ulong *)(extraout_x9_03 + 8);
      if ((uVar13 & uVar13 - 1) == 0) {
        uVar7 = uVar7 & uVar13 - 1;
      }
      else if (uVar13 <= uVar7) {
        uVar12 = 0;
        if (uVar13 != 0) {
          uVar12 = uVar7 / uVar13;
        }
        uVar7 = uVar7 - uVar12 * uVar13;
      }
      *(undefined8 **)(extraout_x8_02 + uVar7 * 8) = unaff_x20;
    }
  }
  else {
    *unaff_x20 = *puVar11;
    *puVar11 = unaff_x20;
  }
  func_0x000105493bb0();
  FUN_1054930e4();
LAB_105490d98:
  return unaff_x20 + 5;
}



/* Entry: 105490dbc; end: 105491077;  */

undefined8 * FUN_105490dbc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 in_NG;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x9;
  ulong uVar7;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  long extraout_x9_03;
  long *extraout_x10;
  long *plVar8;
  long *extraout_x10_00;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *plVar9;
  ulong uVar10;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong unaff_x25;
  
  func_0x000105493b30();
  uVar13 = unaff_x19[1];
  uVar7 = param_3;
  if (uVar13 != 0) {
    uVar12 = uVar13 - 1;
    if ((uVar13 & uVar12) == 0) {
      unaff_x25 = uVar12 & param_3;
      in_NG = 0;
    }
    else {
      in_NG = (long)(param_3 - uVar13) < 0;
      unaff_x25 = param_3;
      if (uVar13 <= param_3) {
        func_0x000105493ca8();
      }
    }
    puVar11 = *(undefined8 **)(*unaff_x19 + unaff_x25 * 8);
    unaff_x20 = (undefined8 *)0x0;
    if (puVar11 != (undefined8 *)0x0) {
      do {
        while( true ) {
          unaff_x20 = (undefined8 *)*puVar11;
          if (unaff_x20 == (undefined8 *)0x0) goto LAB_105490e64;
          uVar5 = unaff_x20[1];
          in_NG = (long)(uVar5 - param_3) < 0;
          puVar11 = unaff_x20;
          if (uVar5 != param_3) break;
          func_0x000105493bfc();
          if ((uVar7 & 1) != 0) goto LAB_105491054;
        }
        if ((uVar13 & uVar12) == 0) {
          uVar5 = uVar5 & uVar12;
        }
        else if (uVar13 <= uVar5) {
          uVar10 = 0;
          if (uVar13 != 0) {
            uVar10 = uVar5 / uVar13;
          }
          uVar5 = uVar5 - uVar10 * uVar13;
        }
        in_NG = (long)(uVar5 - unaff_x25) < 0;
      } while (uVar5 == unaff_x25);
    }
  }
LAB_105490e64:
  func_0x000105493b20();
  func_0x000105493cec();
  func_0x000105493c48();
  func_0x0001054939fc();
  if ((uVar13 != 0) &&
     (func_0x000105493ba4(param_1,param_2,(float)uVar13), uVar12 = unaff_x25, !(bool)in_NG))
  goto LAB_105490ffc;
  func_0x000105493b8c();
  bVar3 = 2 < uVar13;
  bVar4 = uVar13 == 3;
  func_0x00010549395c();
  uVar12 = extraout_x8;
  if (!bVar3 || bVar4) {
    uVar12 = extraout_x9;
  }
  if (uVar12 - 1 == 0) {
    uVar12 = 2;
  }
  else if ((uVar12 & uVar12 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar7 = uVar12;
  }
  uVar13 = unaff_x19[1];
  bVar4 = uVar13 <= uVar12;
  if (bVar4 && uVar12 != uVar13) {
LAB_105490ecc:
    if (uVar12 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x105491068);
      (*pcVar2)();
    }
    __Znwm(uVar12 << 3);
    FUN_1054931d8();
    uVar7 = 0;
    unaff_x19[1] = uVar12;
    while (uVar12 != uVar7) {
      func_0x000105493c64();
      uVar7 = extraout_x9_00;
    }
    uVar13 = uVar12;
    if (unaff_x19[2] != 0) {
      func_0x000105493c50();
      func_0x000105493d00();
      lVar6 = extraout_x8_00;
      uVar7 = extraout_x9_01;
      plVar9 = extraout_x10;
      uVar5 = extraout_x11;
      while (plVar8 = plVar9, plVar9 = (long *)*plVar8, plVar9 != (long *)0x0) {
        uVar10 = plVar9[1];
        if ((uVar12 & uVar7) == 0) {
          uVar10 = uVar10 & uVar7;
        }
        else if (uVar12 <= uVar10) {
          uVar1 = 0;
          if (uVar12 != 0) {
            uVar1 = uVar10 / uVar12;
          }
          uVar10 = uVar10 - uVar1 * uVar12;
        }
        if (uVar10 != uVar5) {
          if (*(long *)(lVar6 + uVar10 * 8) == 0) {
            *(long **)(lVar6 + uVar10 * 8) = plVar8;
            uVar5 = uVar10;
          }
          else {
            *plVar8 = *plVar9;
            func_0x000105493970();
            lVar6 = extraout_x8_01;
            uVar7 = extraout_x9_02;
            plVar9 = extraout_x10_00;
            uVar5 = extraout_x11_00;
          }
        }
      }
    }
  }
  else if (!bVar4) {
    func_0x000105493aec();
    if ((bVar4) && ((uVar13 & uVar13 - 1) == 0)) {
      func_0x00010549393c();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    if (uVar12 <= uVar7) {
      uVar12 = uVar7;
    }
    if (uVar12 < uVar13) {
      if (uVar12 != 0) goto LAB_105490ecc;
      FUN_1054931d8();
      unaff_x19[1] = 0;
      uVar13 = 0;
    }
    else {
      uVar13 = unaff_x19[1];
    }
  }
  if ((uVar13 & uVar13 - 1) == 0) {
    uVar12 = uVar13 - 1 & param_3;
  }
  else {
    uVar12 = param_3;
    if (uVar13 <= param_3) {
      func_0x000105493ca8();
      uVar12 = unaff_x25;
    }
  }
LAB_105490ffc:
  puVar11 = *(undefined8 **)(*unaff_x19 + uVar12 * 8);
  if (puVar11 == (undefined8 *)0x0) {
    func_0x000105493bc8();
    if (extraout_x9_03 != 0) {
      uVar7 = *(ulong *)(extraout_x9_03 + 8);
      if ((uVar13 & uVar13 - 1) == 0) {
        uVar7 = uVar7 & uVar13 - 1;
      }
      else if (uVar13 <= uVar7) {
        uVar12 = 0;
        if (uVar13 != 0) {
          uVar12 = uVar7 / uVar13;
        }
        uVar7 = uVar7 - uVar12 * uVar13;
      }
      *(undefined8 **)(extraout_x8_02 + uVar7 * 8) = unaff_x20;
    }
  }
  else {
    *unaff_x20 = *puVar11;
    *puVar11 = unaff_x20;
  }
  func_0x000105493bb0();
  FUN_1054931f0();
LAB_105491054:
  return unaff_x20 + 5;
}



/* Entry: 105491078; end: 105491087;  */

undefined8 * FUN_105491078(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  param_1[1] = 0;
  *param_1 = &PTR_DAT_110b18260;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar2 = param_2 + 0x10;
  func_0x000107c2809c(lVar2,0);
  param_1[2] = lVar2;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  uVar1 = *(undefined4 *)(param_2 + 0x20);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 4) = uVar1;
  return param_1;
}



/* Entry: 105491088; end: 10549109b;  */

void FUN_105491088(void)

{
  FUN_1054919f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10549109c; end: 1054910af;  */

undefined8 *
FUN_10549109c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_1 != param_2) {
    if (param_1 != param_2) {
      func_0x0001054913e8(param_1,param_2,param_4);
      for (puVar4 = param_2; puVar4 != param_3; puVar4 = puVar4 + 3) {
        puVar1 = puVar4;
        func_0x00010016f000();
        if (((uint)puVar1 >> 7 & 1) != 0) {
          uVar2 = puVar4[2];
          uVar6 = puVar4[1];
          uVar5 = *puVar4;
          uVar3 = param_1[2];
          uVar7 = *param_1;
          puVar4[1] = param_1[1];
          *puVar4 = uVar7;
          puVar4[2] = uVar3;
          param_1[1] = uVar6;
          *param_1 = uVar5;
          param_1[2] = uVar2;
          FUN_105491460(param_1,param_4,((long)param_2 - (long)param_1) / 0x18,param_1);
        }
      }
      FUN_1054915a4(param_1,param_2,param_4);
      param_3 = puVar4;
    }
    return param_3;
  }
  return param_3;
}



/* Entry: 1054910b0; end: 105491197;  */

undefined8 * FUN_1054910b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [64];
  
  puVar1 = auStack_70;
  puVar2 = param_2;
  func_0x00010016ee84();
  func_0x000100125af4(auStack_70,puVar2 + -3);
  puVar2 = param_1;
  if (((uint)puVar1 >> 7 & 1) == 0) {
    do {
      puVar2 = puVar2 + 3;
      if (param_2 <= puVar2) break;
      func_0x00010016f200();
    } while (((uint)puVar1 >> 7 & 1) == 0);
  }
  else {
    do {
      puVar2 = puVar2 + 3;
      func_0x00010016f200();
    } while (((uint)puVar1 >> 7 & 1) == 0);
  }
  if (puVar2 < param_2) {
    do {
      func_0x000105493b08();
    } while (((uint)puVar1 >> 7 & 1) != 0);
  }
  while (puVar2 < param_2) {
    func_0x00010016eeb0();
    uVar5 = param_2[1];
    uVar4 = *param_2;
    func_0x00010016eec4(param_2[2]);
    param_2[2] = extraout_x8;
    param_2[1] = uVar5;
    *param_2 = uVar4;
    do {
      puVar2 = puVar2 + 3;
      func_0x00010016f200();
    } while (((uint)puVar1 >> 7 & 1) == 0);
    do {
      func_0x000105493b08();
    } while (((uint)puVar1 >> 7 & 1) != 0);
  }
  puVar3 = puVar2 + -3;
  if (param_1 != puVar3) {
    func_0x000100066230(param_1,puVar3);
  }
  func_0x000100066230(puVar3,auStack_70);
  func_0x00010016eef4();
  return puVar2;
}



/* Entry: 105491198; end: 10549132b;  */

bool FUN_105491198(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 extraout_x8;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined8 in_register_00005008;
  undefined1 auStack_90 [64];
  
  uVar2 = 0;
  switch((param_3 - param_2) / 0x18) {
  case 0:
  case 1:
    break;
  case 2:
    func_0x00010016ed48();
    if ((uVar2 >> 7 & 1) != 0) {
      func_0x00010016efe4();
      *(undefined8 *)(param_3 + -0x10) = in_register_00005008;
      *(undefined8 *)(param_3 + -0x18) = param_1;
      *(undefined8 *)(param_3 + -8) = extraout_x8;
    }
    break;
  case 3:
    func_0x00010016ec94(param_2,param_2 + 0x18,param_3 + -0x18,param_4);
    break;
  case 4:
    func_0x00010016f09c(param_2,param_2 + 0x18,param_2 + 0x30,param_3 + -0x18,param_4);
    break;
  case 5:
    func_0x00010016f008(param_2,param_2 + 0x18,param_2 + 0x30,param_2 + 0x48,param_3 + -0x18);
    break;
  default:
    func_0x00010016ec94(param_2,param_2 + 0x18,param_2 + 0x30,param_4);
    lVar6 = 0;
    iVar7 = 0;
    for (lVar4 = param_2 + 0x48; lVar4 != param_3; lVar4 = lVar4 + 0x18) {
      lVar5 = lVar4;
      func_0x00010016f000();
      if (((uint)lVar5 >> 7 & 1) != 0) {
        func_0x00010016efc0();
        lVar5 = lVar6;
        do {
          lVar1 = param_2 + lVar5;
          func_0x000100066230(lVar1 + 0x48,lVar1 + 0x30);
          lVar3 = param_2;
          if (lVar5 == -0x30) goto LAB_1054912c0;
          uVar2 = (uint)auStack_90;
          func_0x000100125af4(auStack_90,lVar1 + 0x18);
          lVar5 = lVar5 + -0x18;
        } while ((uVar2 >> 7 & 1) != 0);
        lVar3 = param_2 + lVar5 + 0x48;
LAB_1054912c0:
        func_0x00010016efdc(lVar3);
        iVar7 = iVar7 + 1;
        func_0x00010016eef4();
        if (iVar7 == 8) {
          return lVar4 + 0x18 == param_3;
        }
      }
      lVar6 = lVar6 + 0x18;
    }
  }
  return true;
}



/* Entry: 10549132c; end: 10549145f;  */

undefined8 *
FUN_10549132c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_1 != param_2) {
    func_0x0001054913e8(param_1,param_2,param_4);
    for (puVar4 = param_2; puVar4 != param_3; puVar4 = puVar4 + 3) {
      puVar1 = puVar4;
      func_0x00010016f000();
      if (((uint)puVar1 >> 7 & 1) != 0) {
        uVar2 = puVar4[2];
        uVar6 = puVar4[1];
        uVar5 = *puVar4;
        uVar3 = param_1[2];
        uVar7 = *param_1;
        puVar4[1] = param_1[1];
        *puVar4 = uVar7;
        puVar4[2] = uVar3;
        param_1[1] = uVar6;
        *param_1 = uVar5;
        param_1[2] = uVar2;
        FUN_105491460(param_1,param_4,((long)param_2 - (long)param_1) / 0x18,param_1);
      }
    }
    FUN_1054915a4(param_1,param_2,param_4);
    param_3 = puVar4;
  }
  return param_3;
}



/* Entry: 105491460; end: 1054915a3;  */

void FUN_105491460(long param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if (1 < param_3) {
    lVar6 = ((long)param_4 - param_1) / 0x18;
    uVar7 = param_3 - 2U >> 1;
    if (lVar6 <= (long)uVar7) {
      uVar2 = lVar6 << 1 | 1;
      lVar4 = param_1 + uVar2 * 0x18;
      uVar1 = lVar6 * 2 + 2;
      lVar6 = lVar4;
      uVar8 = uVar2;
      if ((long)uVar1 < param_3) {
        lVar3 = lVar4;
        func_0x000100125af4(lVar4,lVar4 + 0x18);
        lVar6 = lVar4 + 0x18;
        uVar8 = uVar1;
        if (-1 < (char)lVar3) {
          lVar6 = lVar4;
          uVar8 = uVar2;
        }
      }
      lVar4 = lVar6;
      func_0x00010016f000();
      if (((uint)lVar4 >> 7 & 1) == 0) {
        uStack_78 = param_4[1];
        uStack_80 = *param_4;
        uStack_70 = param_4[2];
        param_4[1] = 0;
        param_4[2] = 0;
        *param_4 = 0;
        do {
          lVar3 = lVar6;
          func_0x00010016ed78();
          func_0x000100066230();
          if ((long)uVar7 < (long)uVar8) break;
          uVar2 = uVar8 << 1 | 1;
          lVar5 = param_1 + uVar2 * 0x18;
          uVar1 = uVar8 * 2 + 2;
          lVar6 = lVar5;
          uVar8 = uVar2;
          if ((long)uVar1 < param_3) {
            lVar4 = lVar5;
            func_0x00010016f000();
            lVar6 = lVar5 + 0x18;
            uVar8 = uVar1;
            if (-1 < (char)lVar4) {
              lVar6 = lVar5;
              uVar8 = uVar2;
            }
          }
          func_0x00010016eed8();
        } while (((uint)lVar4 >> 7 & 1) == 0);
        func_0x000100066230(lVar3,&uStack_80);
        func_0x00010016eef4();
      }
    }
  }
  return;
}



/* Entry: 1054915a4; end: 1054915f7;  */

void FUN_1054915a4(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (param_2 - param_1) / 0x18;
  while (lVar1 + -1 != 0 && 0 < lVar1) {
    FUN_1054915f8(param_1,param_2,param_3);
    param_2 = param_2 + -0x18;
    lVar1 = lVar1 + -1;
  }
  return;
}



/* Entry: 1054915f8; end: 105491697;  */

void FUN_1054915f8(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (1 < param_4) {
    lVar1 = param_1;
    func_0x00010016ee84();
    FUN_105491698();
    if (lVar1 == param_2 + -0x18) {
      func_0x000105493c10();
    }
    else {
      func_0x00010016ed78();
      func_0x000100066230();
      func_0x00010016eee8();
      FUN_10549173c(param_1,lVar1 + 0x18,param_3,((lVar1 + 0x18) - param_1) / 0x18);
    }
    func_0x00010016eef4();
  }
  return;
}



/* Entry: 105491698; end: 10549173b;  */

long FUN_105491698(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  uVar5 = 0;
  do {
    lVar6 = param_1 + uVar5 * 0x18;
    lVar1 = lVar6 + 0x18;
    uVar3 = uVar5 << 1 | 1;
    uVar2 = uVar5 * 2 + 2;
    lVar7 = lVar1;
    uVar5 = uVar3;
    if ((long)uVar2 < param_3) {
      lVar4 = lVar1;
      func_0x00010016f000();
      lVar7 = lVar6 + 0x30;
      uVar5 = uVar2;
      if (-1 < (char)lVar4) {
        lVar7 = lVar1;
        uVar5 = uVar3;
      }
    }
    func_0x00010016eee0(param_1);
    param_1 = lVar7;
  } while ((long)uVar5 <= (param_3 + -2) / 2);
  return lVar7;
}



/* Entry: 10549173c; end: 1054917d7;  */

void FUN_10549173c(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_60 [32];
  
  if (1 < param_4) {
    uVar5 = param_4 - 2U >> 1;
    lVar3 = param_1 + uVar5 * 0x18;
    lVar1 = lVar3;
    func_0x00010016ec8c();
    if (((uint)lVar1 >> 7 & 1) != 0) {
      func_0x00010016efc0();
      lVar1 = param_2 + -0x18;
      do {
        lVar4 = lVar3;
        func_0x000100066230(lVar1,lVar4);
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1 >> 1;
        lVar3 = param_1 + uVar5 * 0x18;
        lVar2 = lVar3;
        func_0x000100125af4(lVar3,auStack_60);
        lVar1 = lVar4;
      } while (((uint)lVar2 >> 7 & 1) != 0);
      func_0x000105493c10();
      func_0x00010016eef4();
    }
  }
  return;
}



/* Entry: 1054917d8; end: 105491817;  */

void FUN_1054917d8(long *param_1,long *param_2)

{
  long lVar1;
  
  func_0x00010016ed84();
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[3];
  func_0x00010055305c(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev_1103464a0)();
  return;
}


