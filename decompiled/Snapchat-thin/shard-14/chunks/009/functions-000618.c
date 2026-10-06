/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b73963c; end: 10b73974b; -[SCLensSessionInfo initWithSessionId:state:lensSource:sourceType:snapSource:arBarTabSessionId:arBarTabCategoryId:isUserInteracted:] */

undefined1 *
FUN_10b73963c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_11270a4c0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_10;
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b73974c; end: 10b73976f; -[SCLensSessionInfo copyWithZone:] */

undefined8 FUN_10b73974c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b739770; end: 10b73980f; -[SCLensSessionInfo hash] */

undefined8 * FUN_10b739770(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_60 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uStack_50 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  lVar4 = *(long *)(param_1 + 0x30);
  uStack_40 = *(undefined8 *)(param_1 + 0x38);
  lStack_48 = -lVar4;
  if (-1 < lVar4) {
    lStack_48 = lVar4;
  }
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar2 = &uStack_68;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar2,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == param_3) {
LAB_10b7398f8:
    puVar5 = (undefined8 *)0x1;
  }
  else {
    puVar5 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b739904;
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) != 0) &&
       ((((puVar2[3] == param_3[3] && (puVar2[4] == param_3[4])) && (puVar2[5] == param_3[5])) &&
        ((puVar2[6] == param_3[6] && (*(char *)(puVar2 + 1) == *(char *)(param_3 + 1))))))) {
      lVar4 = puVar2[2];
      if ((lVar4 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        lVar4 = puVar2[7];
        if ((lVar4 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
          puVar5 = (undefined8 *)puVar2[8];
          if (puVar5 != (undefined8 *)param_3[8]) {
            func_0x00010c071ae0();
            goto LAB_10b739904;
          }
          goto LAB_10b7398f8;
        }
      }
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_10b739904:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 10b739810; end: 10b73991f; -[SCLensSessionInfo isEqual:] */

long FUN_10b739810(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b7398f8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b739904;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
          (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
         (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
        ((*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30) &&
         (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x38);
        if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x40);
          if (lVar3 != *(long *)(param_3 + 0x40)) {
            func_0x00010c071ae0();
            goto LAB_10b739904;
          }
          goto LAB_10b7398f8;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b739904:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b739920; end: 10b739927; -[SCLensSessionInfo sessionId] */

undefined8 FUN_10b739920(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b739928; end: 10b73992f; -[SCLensSessionInfo state] */

undefined8 FUN_10b739928(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b739930; end: 10b739937; -[SCLensSessionInfo lensSource] */

undefined8 FUN_10b739930(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b739938; end: 10b73993f; -[SCLensSessionInfo sourceType] */

undefined8 FUN_10b739938(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b739940; end: 10b739947; -[SCLensSessionInfo snapSource] */

undefined8 FUN_10b739940(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b739948; end: 10b73994f; -[SCLensSessionInfo arBarTabSessionId] */

undefined8 FUN_10b739948(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b739950; end: 10b739957; -[SCLensSessionInfo arBarTabCategoryId] */

undefined8 FUN_10b739950(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b739958; end: 10b73995f; -[SCLensSessionInfo isUserInteracted] */

undefined1 FUN_10b739958(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b739960; end: 10b73999b; -[SCLensSessionInfo .cxx_destruct] */

void FUN_10b739960(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b73999c; end: 10b7399bf; -[SCPair copyWithZone:] */

undefined8 FUN_10b73999c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b7399c0; end: 10b7399c7; -[SCPair first] */

undefined8 FUN_10b7399c0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7399c8; end: 10b7399cf; -[SCPair second] */

undefined8 FUN_10b7399c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7399d0; end: 10b7399ff; -[SCPair .cxx_destruct] */

void FUN_10b7399d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b739a00; end: 10b739a3b; -[SCLensCarouselFeatureServices .cxx_destruct] */

void FUN_10b739a00(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b739a3c; end: 10b739a47; -[SCLensCarouselManagementServices .cxx_destruct] */

void FUN_10b739a3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b739a48; end: 10b739abb; -[SCCaptureScopedLensCarouselManagementServices initWithLensCarouselManagementServices:] */

undefined1 * FUN_10b739a48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270a4e0;
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



/* Entry: 10b739abc; end: 10b739ac3; -[SCCaptureScopedLensCarouselManagementServices lensCarouselManagementServices] */

undefined8 FUN_10b739abc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b739ac4; end: 10b739acf; -[SCCaptureScopedLensCarouselManagementServices .cxx_destruct] */

void FUN_10b739ac4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b739ad0; end: 10b739b43; -[SCLensCarouselScopedLensCarouselManagementServices initWithLensCarouselManagementServices:] */

undefined1 * FUN_10b739ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270a4e8;
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



/* Entry: 10b739b44; end: 10b739b4b; -[SCLensCarouselScopedLensCarouselManagementServices lensCarouselManagementServices] */

undefined8 FUN_10b739b44(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b739b4c; end: 10b739b57; -[SCLensCarouselScopedLensCarouselManagementServices .cxx_destruct] */

void FUN_10b739b4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b739b58; end: 10b739bcb; -[SCLensInfoCardsOnCameraScopedLensCarouselManagementServices initWithLensCarouselManagementServices:] */

undefined1 * FUN_10b739b58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270a4f0;
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



/* Entry: 10b739bcc; end: 10b739bd3; -[SCLensInfoCardsOnCameraScopedLensCarouselManagementServices lensCarouselManagementServices] */

undefined8 FUN_10b739bcc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b739bd4; end: 10b739bdf; -[SCLensInfoCardsOnCameraScopedLensCarouselManagementServices .cxx_destruct] */

void FUN_10b739bd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b739be0; end: 10b739c53; -[SCLensTalkCarouselScopedLensCarouselManagementServices initWithLensCarouselManagementServices:] */

undefined1 * FUN_10b739be0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270a4f8;
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



/* Entry: 10b739c54; end: 10b739c5b; -[SCLensTalkCarouselScopedLensCarouselManagementServices lensCarouselManagementServices] */

undefined8 FUN_10b739c54(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b739c5c; end: 10b739c67; -[SCLensTalkCarouselScopedLensCarouselManagementServices .cxx_destruct] */

void FUN_10b739c5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b739c68; end: 10b739c73; -[SCMainCameraScopedLensCarouselManagementServices .cxx_destruct] */

void FUN_10b739c68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b739c74; end: 10b739ce7; -[SCPreviewScopedLensCarouselManagementServices initWithLensCarouselManagementServices:] */

undefined1 * FUN_10b739c74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270a508;
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



/* Entry: 10b739ce8; end: 10b739cef; -[SCPreviewScopedLensCarouselManagementServices lensCarouselManagementServices] */

undefined8 FUN_10b739ce8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b739cf0; end: 10b739cfb; -[SCPreviewScopedLensCarouselManagementServices .cxx_destruct] */

void FUN_10b739cf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b739cfc; end: 10b739d6f; -[SCSnapEditorScopedLensCarouselManagementServices initWithLensCarouselManagementServices:] */

undefined1 * FUN_10b739cfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270a510;
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



/* Entry: 10b739d70; end: 10b739d77; -[SCSnapEditorScopedLensCarouselManagementServices lensCarouselManagementServices] */

undefined8 FUN_10b739d70(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b739d78; end: 10b739d83; -[SCSnapEditorScopedLensCarouselManagementServices .cxx_destruct] */

void FUN_10b739d78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b739d84; end: 10b739df7; -[SCCaaSCameraScopedLensCarouselFeatureServices initWithLensCarouselFeatureServices:] */

undefined1 * FUN_10b739d84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270a518;
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



/* Entry: 10b739df8; end: 10b739dff; -[SCCaaSCameraScopedLensCarouselFeatureServices lensCarouselFeatureServices] */

undefined8 FUN_10b739df8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b739e00; end: 10b739e0b; -[SCCaaSCameraScopedLensCarouselFeatureServices .cxx_destruct] */

void FUN_10b739e00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b739e0c; end: 10b739e7f; -[SCLensesModularCameraScopedLensCarouselFeatureServices initWithLensCarouselFeatureServices:] */

undefined1 * FUN_10b739e0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270a520;
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



/* Entry: 10b739e80; end: 10b739e87; -[SCLensesModularCameraScopedLensCarouselFeatureServices lensCarouselFeatureServices] */

undefined8 FUN_10b739e80(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b739e88; end: 10b739e93; -[SCLensesModularCameraScopedLensCarouselFeatureServices .cxx_destruct] */

void FUN_10b739e88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b739e94; end: 10b739f07; -[SCChatCameraScopedLensCarouselFeatureServices initWithLensCarouselFeatureServices:] */

undefined1 * FUN_10b739e94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270a528;
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



/* Entry: 10b739f08; end: 10b739f0f; -[SCChatCameraScopedLensCarouselFeatureServices lensCarouselFeatureServices] */

undefined8 FUN_10b739f08(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b739f10; end: 10b739f1b; -[SCChatCameraScopedLensCarouselFeatureServices .cxx_destruct] */

void FUN_10b739f10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b739f1c; end: 10b739f27; -[SCMainCameraScopedLensCarouselFeatureServices .cxx_destruct] */

void FUN_10b739f1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b739f28; end: 10b739f97; +[SCLensCarouselEvents didActivateWithActivationEvent:isRestoration:] */

void FUN_10b739f28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ddc68;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 2;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
  puVar2[0x18] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b739f98; end: 10b73a003; +[SCLensCarouselEvents didUpdateVisibleLensesWithVisibleLenses:] */

void FUN_10b739f98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ddc68;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b73a004; end: 10b73a04f; +[SCLensCarouselEvents willLensCarouselClose] */

void FUN_10b73a004(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ddc68;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b73a050; end: 10b73a097; +[SCLensCarouselEvents willLensCarouselOpen] */

void FUN_10b73a050(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ddc68;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b73a098; end: 10b73a0bb; -[SCLensCarouselEvents copyWithZone:] */

undefined8 FUN_10b73a098(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b73a0bc; end: 10b73a137; -[SCLensCarouselEvents hash] */

void FUN_10b73a0bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_11270a538;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b73a138; end: 10b73a17b; -[SCLensCarouselEvents internalInit] */

void FUN_10b73a138(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_11270a538;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b73a17c; end: 10b73a243; -[SCLensCarouselEvents isEqual:] */

long FUN_10b73a17c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b73a21c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b73a228;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(char *)(param_1 + 0x18) == *(char *)(param_3 + 0x18))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10b73a228;
        }
        goto LAB_10b73a21c;
      }
    }
    lVar3 = 0;
  }
LAB_10b73a228:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b73a244; end: 10b73a337; -[SCLensCarouselEvents matchWillLensCarouselOpen:willLensCarouselClose:didActivate:didUpdateVisibleLenses:] */

void FUN_10b73a244(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  code *pcVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      if (param_3 == 0) goto LAB_10b73a308;
      pcVar2 = *(code **)(param_3 + 0x10);
      lVar1 = param_3;
    }
    else {
      if ((lVar1 != 1) || (param_4 == 0)) goto LAB_10b73a308;
      pcVar2 = *(code **)(param_4 + 0x10);
      lVar1 = param_4;
    }
    (*pcVar2)(lVar1);
  }
  else if (lVar1 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))
                (param_5,*(undefined8 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x18));
    }
  }
  else if ((lVar1 == 3) && (param_6 != 0)) {
    (**(code **)(param_6 + 0x10))(param_6,*(undefined8 *)(param_1 + 0x20));
  }
LAB_10b73a308:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b73a338; end: 10b73a367; -[SCLensCarouselEvents .cxx_destruct] */

void FUN_10b73a338(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b73a368; end: 10b73a3f3; -[SCLensVisibilityState initWithLens:carouselPosition:screenPosition:] */

undefined1 *
FUN_10b73a368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270a540;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b73a3f4; end: 10b73a417; -[SCLensVisibilityState copyWithZone:] */

undefined8 FUN_10b73a3f4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b73a418; end: 10b73a48b; -[SCLensVisibilityState hash] */

undefined8 * FUN_10b73a418(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b73a520;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(long *)((long)puVar2 + 0x10) != *(long *)(param_3 + 0x10) ||
        (*(long *)((long)puVar2 + 0x18) != *(long *)(param_3 + 0x18))))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_10b73a520;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 8);
    if (puVar4 != *(undefined1 **)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b73a520;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_10b73a520:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 10b73a48c; end: 10b73a53b; -[SCLensVisibilityState isEqual:] */

long FUN_10b73a48c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b73a520;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_10b73a520;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b73a520;
    }
  }
  lVar3 = 1;
LAB_10b73a520:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b73a53c; end: 10b73a543; -[SCLensVisibilityState lens] */

undefined8 FUN_10b73a53c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b73a544; end: 10b73a54b; -[SCLensVisibilityState carouselPosition] */

undefined8 FUN_10b73a544(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b73a54c; end: 10b73a553; -[SCLensVisibilityState screenPosition] */

undefined8 FUN_10b73a54c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b73a554; end: 10b73a55f; -[SCLensVisibilityState .cxx_destruct] */

void FUN_10b73a554(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b73a560; end: 10b73a5e7; -[SCQuickStickerViewData initWithData:isAnimated:] */

undefined1 *
FUN_10b73a560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270a548;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b73a5e8; end: 10b73a60b; -[SCQuickStickerViewData copyWithZone:] */

undefined8 FUN_10b73a5e8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b73a60c; end: 10b73a677; -[SCQuickStickerViewData hash] */

undefined8 * FUN_10b73a60c(long param_1,undefined8 param_2,undefined8 *param_3)

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
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b73a6fc;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(char *)(puVar2 + 1) != *(char *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10b73a6fc;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10b73a6fc;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10b73a6fc:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b73a678; end: 10b73a717; -[SCQuickStickerViewData isEqual:] */

long FUN_10b73a678(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b73a6fc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10b73a6fc;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b73a6fc;
    }
  }
  lVar3 = 1;
LAB_10b73a6fc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b73a718; end: 10b73a71f; -[SCQuickStickerViewData data] */

undefined8 FUN_10b73a718(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b73a720; end: 10b73a727; -[SCQuickStickerViewData isAnimated] */

undefined1 FUN_10b73a720(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b73a728; end: 10b73a733; -[SCQuickStickerViewData .cxx_destruct] */

void FUN_10b73a728(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b73a734; end: 10b73a797; +[SCQuickStickerImage defaultImageWithImage:] */

void FUN_10b73a734(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b5b40;
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



/* Entry: 10b73a798; end: 10b73a863; +[SCQuickStickerImage placeLoyaltyStickerImageWithImage:placeID:placeName:] */

void FUN_10b73a798(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b5b40;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b73a864; end: 10b73a8d7; +[SCQuickStickerImage quotedStickerImageWithImage:replyType:] */

void FUN_10b73a864(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b5b40;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x20) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b73a8d8; end: 10b73a96f; +[SCQuickStickerImage snapMeStickerAddToStoryImageWithImage:quotedUserId:] */

void FUN_10b73a8d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b5b40;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  uVar3 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x50) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x58);
  *(undefined8 *)(puVar2 + 0x58) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b73a970; end: 10b73aa07; +[SCQuickStickerImage snapMeStickerReplyImageWithImage:disclaimerText:] */

void FUN_10b73a970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b5b40;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b73aa08; end: 10b73aa53; +[SCQuickStickerImage stickerImageFromMetadata] */

void FUN_10b73aa08(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b5b40;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b73aa54; end: 10b73aa77; -[SCQuickStickerImage copyWithZone:] */

undefined8 FUN_10b73aa54(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b73aa78; end: 10b73ab4f; -[SCQuickStickerImage hash] */

void FUN_10b73aa78(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_80 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_78 = uVar3;
  func_0x00010bfde980();
  lVar1 = *(long *)(param_1 + 0x20);
  uStack_60 = *(undefined8 *)(param_1 + 0x28);
  lStack_68 = -lVar1;
  if (-1 < lVar1) {
    lStack_68 = lVar1;
  }
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_48 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uStack_38 = uVar3;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_80,0xb);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_a8 = PTR_PTR_11270a550;
  puStack_b0 = (undefined1 *)puVar4;
  _objc_msgSendSuper2(&puStack_b0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b73ab50; end: 10b73ab93; -[SCQuickStickerImage internalInit] */

void FUN_10b73ab50(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_11270a550;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b73ab94; end: 10b73ad03; -[SCQuickStickerImage isEqual:] */

long FUN_10b73ab94(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b73acdc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b73ace8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x40);
                if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x48);
                  if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x50);
                    if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x58);
                      if (lVar3 != *(long *)(param_3 + 0x58)) {
                        func_0x00010c071ae0();
                        goto LAB_10b73ace8;
                      }
                      goto LAB_10b73acdc;
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
LAB_10b73ace8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b73ad04; end: 10b73ae67; -[SCQuickStickerImage matchDefaultImage:stickerImageFromMetadata:quotedStickerImage:placeLoyaltyStickerImage:snapMeStickerReplyImage:snapMeStickerAddToStoryImage:] */

void FUN_10b73ad04(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 < 3) {
    if (lVar3 == 0) {
      if (param_3 != 0) {
        (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x10));
      }
      goto LAB_10b73ae24;
    }
    if (lVar3 == 1) {
      if (param_4 != 0) {
        (**(code **)(param_4 + 0x10))(param_4);
      }
      goto LAB_10b73ae24;
    }
    if ((lVar3 != 2) || (param_5 == 0)) goto LAB_10b73ae24;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    pcVar4 = *(code **)(param_5 + 0x10);
    lVar3 = param_5;
  }
  else {
    if (lVar3 == 3) {
      if (param_6 != 0) {
        (**(code **)(param_6 + 0x10))
                  (param_6,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                   *(undefined8 *)(param_1 + 0x38));
      }
      goto LAB_10b73ae24;
    }
    if (lVar3 == 4) {
      if (param_7 == 0) goto LAB_10b73ae24;
      uVar1 = *(undefined8 *)(param_1 + 0x40);
      uVar2 = *(undefined8 *)(param_1 + 0x48);
      pcVar4 = *(code **)(param_7 + 0x10);
      lVar3 = param_7;
    }
    else {
      if ((lVar3 != 5) || (param_8 == 0)) goto LAB_10b73ae24;
      uVar1 = *(undefined8 *)(param_1 + 0x50);
      uVar2 = *(undefined8 *)(param_1 + 0x58);
      pcVar4 = *(code **)(param_8 + 0x10);
      lVar3 = param_8;
    }
  }
  (*pcVar4)(lVar3,uVar1,uVar2);
LAB_10b73ae24:
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



/* Entry: 10b73ae68; end: 10b73aeeb; -[SCQuickStickerImage .cxx_destruct] */

void FUN_10b73ae68(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b73aeec; end: 10b73af4f; +[SCQuickStickerMetadata ctItemInstanceStickerImageWithItemInstance:] */

void FUN_10b73aeec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b5b48;
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



/* Entry: 10b73af50; end: 10b73af73; -[SCQuickStickerMetadata copyWithZone:] */

undefined8 FUN_10b73af50(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b73af74; end: 10b73afd3; -[SCQuickStickerMetadata hash] */

void FUN_10b73af74(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_11270a558;
  puStack_60 = puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b73afd4; end: 10b73b017; -[SCQuickStickerMetadata internalInit] */

void FUN_10b73afd4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_11270a558;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b73b018; end: 10b73b0b7; -[SCQuickStickerMetadata isEqual:] */

long FUN_10b73b018(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b73b09c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10b73b09c;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b73b09c;
    }
  }
  lVar3 = 1;
LAB_10b73b09c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b73b0b8; end: 10b73b0d7; -[SCQuickStickerMetadata matchCtItemInstanceStickerImage:] */

void FUN_10b73b0b8(long param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != 0) && (*(long *)(param_1 + 8) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010b73b0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x10));
    return;
  }
  return;
}



/* Entry: 10b73b0d8; end: 10b73b0e3; -[SCQuickStickerMetadata .cxx_destruct] */

void FUN_10b73b0d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b73b0e4; end: 10b73b1bf; -[SCStickerSizeInfo initWithRelativeSize:center:rotation:scale:isTracking:trackingTrajectory:uniqueId:isFlipped:] */

undefined1 *
FUN_10b73b0e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_10);
  puStack_78 = PTR_PTR_11270a560;
  uStack_80 = param_7;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x30) = param_1;
    *(undefined8 *)((long)puVar1 + 0x38) = param_2;
    *(undefined8 *)((long)puVar1 + 0x40) = param_3;
    *(undefined8 *)((long)puVar1 + 0x48) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    *(undefined1 *)((long)puVar1 + 8) = param_9;
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_11;
    *(undefined1 *)((long)puVar1 + 9) = param_12;
  }
  _objc_release(param_10);
  return (undefined1 *)puVar1;
}



/* Entry: 10b73b1c0; end: 10b73b1e3; -[SCStickerSizeInfo copyWithZone:] */

undefined8 FUN_10b73b1c0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b73b1e4; end: 10b73b32b; -[SCStickerSizeInfo hash] */

ulong * FUN_10b73b1e4(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  double dVar8;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_78 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_78 = uStack_78 ^ uStack_78 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_70 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_70 = uStack_70 ^ uStack_70 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_68 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_60 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_58 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar6 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_50 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x28);
  lStack_38 = -lVar5;
  if (-1 < lVar5) {
    lStack_38 = lVar5;
  }
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  puVar3 = &uStack_78;
  uStack_40 = uVar2;
  func_0x000107c3191c(puVar3,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b73b484:
    puVar7 = (ulong *)0x1;
  }
  else {
    puVar7 = (ulong *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_10b73b488;
    puVar7 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((((char)puVar3[1] == (char)param_3[1] && (puVar3[5] == param_3[5])) &&
        (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))))) {
      puVar7 = (ulong *)0x0;
      if (((((double)puVar3[6] != (double)param_3[6]) || ((double)puVar3[7] != (double)param_3[7]))
          || (puVar7 = (ulong *)0x0, (double)puVar3[8] != (double)param_3[8])) ||
         ((double)puVar3[9] != (double)param_3[9])) goto LAB_10b73b488;
      dVar8 = ABS((double)puVar3[2] - (double)param_3[2]);
      if ((dVar8 < 2.2250738585072014e-308) ||
         (dVar8 < ABS((double)puVar3[2] + (double)param_3[2]) * 2.220446049250313e-16)) {
        dVar8 = ABS((double)puVar3[3] - (double)param_3[3]);
        if ((dVar8 < 2.2250738585072014e-308) ||
           (dVar8 < ABS((double)puVar3[3] + (double)param_3[3]) * 2.220446049250313e-16)) {
          puVar7 = (ulong *)puVar3[4];
          if (puVar7 != (ulong *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_10b73b488;
          }
          goto LAB_10b73b484;
        }
      }
    }
    puVar7 = (ulong *)0x0;
  }
LAB_10b73b488:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 10b73b32c; end: 10b73b4a3; -[SCStickerSizeInfo isEqual:] */

long FUN_10b73b32c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b73b484:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b73b488;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
         (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = 0;
      if ((((*(double *)(param_1 + 0x30) != *(double *)(param_3 + 0x30)) ||
           (*(double *)(param_1 + 0x38) != *(double *)(param_3 + 0x38))) ||
          (lVar3 = 0, *(double *)(param_1 + 0x40) != *(double *)(param_3 + 0x40))) ||
         (*(double *)(param_1 + 0x48) != *(double *)(param_3 + 0x48))) goto LAB_10b73b488;
      dVar4 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      if ((dVar4 < 2.2250738585072014e-308) ||
         (dVar4 < ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                  2.220446049250313e-16)) {
        dVar4 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
        if ((dVar4 < 2.2250738585072014e-308) ||
           (dVar4 < ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                    2.220446049250313e-16)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10b73b488;
          }
          goto LAB_10b73b484;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b73b488:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b73b4a4; end: 10b73b4ab; -[SCStickerSizeInfo relativeSize] */

undefined1  [16] FUN_10b73b4a4(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x30);
}



/* Entry: 10b73b4ac; end: 10b73b4b3; -[SCStickerSizeInfo center] */

undefined1  [16] FUN_10b73b4ac(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x40);
}



/* Entry: 10b73b4b4; end: 10b73b4bb; -[SCStickerSizeInfo rotation] */

undefined8 FUN_10b73b4b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b73b4bc; end: 10b73b4c3; -[SCStickerSizeInfo scale] */

undefined8 FUN_10b73b4bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


