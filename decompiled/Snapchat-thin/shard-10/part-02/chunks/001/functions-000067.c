/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107af0eb8; end: 107af0ebf; -[SCCommerceSession setComicId:] */

void FUN_107af0eb8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107af0ec0; end: 107af0ec7; -[SCCommerceSession currentCheckoutId] */

undefined8 FUN_107af0ec0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 107af0ec8; end: 107af0ecf; -[SCCommerceSession setCurrentCheckoutId:] */

void FUN_107af0ec8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107af0ed0; end: 107af0ed7; -[SCCommerceSession snapAttachmentType] */

undefined8 FUN_107af0ed0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 107af0ed8; end: 107af0edf; -[SCCommerceSession setSnapAttachmentType:] */

void FUN_107af0ed8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x88) = param_3;
  return;
}



/* Entry: 107af0ee0; end: 107af0ee7; -[SCCommerceSession isShowcase] */

undefined1 FUN_107af0ee0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107af0ee8; end: 107af0eef; -[SCCommerceSession setIsShowcase:] */

void FUN_107af0ee8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 107af0ef0; end: 107af0ef7; -[SCCommerceSession isCheckoutOnboarding] */

undefined1 FUN_107af0ef0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107af0ef8; end: 107af0eff; -[SCCommerceSession setIsCheckoutOnboarding:] */

void FUN_107af0ef8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 107af0f00; end: 107af0f07; -[SCCommerceSession contextMetrics] */

undefined8 FUN_107af0f00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 107af0f08; end: 107af0f37; -[SCCommerceSession setContextMetrics:] */

void FUN_107af0f08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107af0f38; end: 107af0f3f; -[SCCommerceSession snapToProductMetrics] */

undefined8 FUN_107af0f38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 107af0f40; end: 107af0f6f; -[SCCommerceSession setSnapToProductMetrics:] */

void FUN_107af0f40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107af0f70; end: 107af0f77; -[SCCommerceSession adMetrics] */

undefined8 FUN_107af0f70(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 107af0f78; end: 107af0fa7; -[SCCommerceSession setAdMetrics:] */

void FUN_107af0f78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107af0fa8; end: 107af0faf; -[SCCommerceSession sourceId] */

undefined8 FUN_107af0fa8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 107af0fb0; end: 107af0fdf; -[SCCommerceSession setSourceId:] */

void FUN_107af0fb0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 107af0fe0; end: 107af0fe7; -[SCCommerceSession sourceSessionId] */

undefined8 FUN_107af0fe0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 107af0fe8; end: 107af1017; -[SCCommerceSession setSourceSessionId:] */

void FUN_107af0fe8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107af1018; end: 107af101f; -[SCCommerceSession isSponsored] */

undefined1 FUN_107af1018(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 107af1020; end: 107af1027; -[SCCommerceSession topic] */

undefined8 FUN_107af1020(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 107af1028; end: 107af1057; -[SCCommerceSession setTopic:] */

void FUN_107af1028(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107af1058; end: 107af105f; -[SCCommerceSession sectionName] */

undefined8 FUN_107af1058(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 107af1060; end: 107af108f; -[SCCommerceSession setSectionName:] */

void FUN_107af1060(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107af1090; end: 107af1097; -[SCCommerceSession sectionIndex] */

undefined8 FUN_107af1090(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 107af1098; end: 107af10c7; -[SCCommerceSession setSectionIndex:] */

void FUN_107af1098(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107af10c8; end: 107af10cf; -[SCCommerceSession sessionConfiguration] */

undefined8 FUN_107af10c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 107af10d0; end: 107af10ff; -[SCCommerceSession setSessionConfiguration:] */

void FUN_107af10d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107af1100; end: 107af110b; -[SCCommerceSession pageIdStack] */

void FUN_107af1100(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0xd8,1);
  return;
}



/* Entry: 107af110c; end: 107af1113; -[SCCommerceSession setPageIdStack:] */

void FUN_107af110c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 107af1114; end: 107af111b; -[SCCommerceSession grapheneLogger] */

undefined8 FUN_107af1114(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 107af111c; end: 107af114b; -[SCCommerceSession setGrapheneLogger:] */

void FUN_107af111c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107af114c; end: 107af1153; -[SCCommerceSession grapheneNetworkLogger] */

undefined8 FUN_107af114c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 107af1154; end: 107af1183; -[SCCommerceSession setGrapheneNetworkLogger:] */

void FUN_107af1154(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107af1184; end: 107af118b; -[SCCommerceSession blizzardUserLogger] */

undefined8 FUN_107af1184(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 107af118c; end: 107af11bb; -[SCCommerceSession setBlizzardUserLogger:] */

void FUN_107af118c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107af11bc; end: 107af11c3; -[SCCommerceSession pageImpressionDate] */

undefined8 FUN_107af11bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 107af11c4; end: 107af11f3; -[SCCommerceSession setPageImpressionDate:] */

void FUN_107af11c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107af11f4; end: 107af1313; -[SCCommerceSession .cxx_destruct] */

void FUN_107af11f4(long param_1)

{
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107af1314; end: 107af1537;  */

undefined8 FUN_107af1314(undefined8 param_1,long param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 1;
  switch(param_1) {
  case 0:
    uVar2 = 0x1c;
    if (param_2 != 3) {
      uVar2 = 0xffffffffffffffff;
    }
    bVar1 = param_2 == 4;
    uVar3 = 0x21;
    break;
  default:
    goto LAB_107af136c;
  case 2:
    return 0x28;
  case 3:
    return 0x15;
  case 4:
    return 0x1f;
  case 5:
    bVar1 = param_2 == 3;
    uVar2 = 0x21;
    uVar3 = 0x1c;
    break;
  case 6:
    return 0xb;
  case 7:
    return 0x29;
  case 8:
    return 0x2b;
  case 9:
    return 0x2d;
  case 10:
    return 0xc;
  case 0xb:
    return 0x2f;
  }
  if (!bVar1) {
    uVar3 = uVar2;
  }
LAB_107af136c:
  return uVar3;
}



/* Entry: 107af1538; end: 107af163f;  */

void FUN_107af1538(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lStack_28;
  
  lStack_28 = 0;
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_1,0,&lStack_28);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = (undefined *)0x0;
  if (lStack_28 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c008340();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107af1640; end: 107af16a7; +[SCCommerceTypeConversions originTypeForScanSource:deeplinkSource:] */

undefined8 FUN_107af1640(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_3 < 6) {
    if (param_3 == 0) {
      return 3;
    }
    if (param_3 == 1) {
      return 0x14;
    }
    if (param_3 == 5) {
      return 2;
    }
  }
  else {
    if (param_3 - 8U < 2) {
      return 3;
    }
    if (param_3 == 6) {
      uVar1 = 8;
      if (param_4 != 0) {
        uVar1 = 0xd;
      }
      return uVar1;
    }
    if (param_3 == 0xc) {
      return 0x14;
    }
  }
  return 0xffffffffffffffff;
}



/* Entry: 107af16a8; end: 107af16cb; +[SCCommerceTypeConversions originTypeForLaunchSource:] */

undefined8 FUN_107af16a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 10U < 0xc) {
    return *(undefined8 *)(&UNK_10dee1270 + (param_3 - 10U) * 8);
  }
  return 0x24;
}



/* Entry: 107af16cc; end: 107af1757; +[SCCommerceTypeConversions mediaTypeStringForMediaType:] */

undefined ** FUN_107af16cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  undefined **ppuVar4;
  
  ppuVar4 = &PTR____CFConstantStringClassReference_110db93d8;
  if ((param_3 + 1U < 0x1c) && ((1L << (param_3 + 1U & 0x3f) & 0xd8de4fdU) != 0)) {
    uVar1 = param_3 + 1;
    uVar2 = 1;
    if (uVar1 < 0x1b) {
      uVar2 = 0x1394288 >> (ulong)((uint)uVar1 & 0x1f);
    }
    if ((1L << (uVar1 & 0x3f) & 0xb4b5dbbU) == 0) {
      uVar2 = 1;
    }
    uVar3 = 1;
    if (uVar1 < 0x1c) {
      uVar3 = uVar2;
    }
    ppuVar4 = &PTR____CFConstantStringClassReference_110db93f8;
    if (param_3 != 9 && (uVar3 & 1) == 0) {
      ppuVar4 = (undefined **)0x0;
    }
  }
  return ppuVar4;
}



/* Entry: 107af1758; end: 107af1783; +[SCCommerceTypeConversions originTypeForAdType:] */

undefined8 FUN_107af1758(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x24;
  if (param_3 == 10) {
    uVar1 = 0x1e;
  }
  uVar2 = 0x1d;
  if (param_3 != 5) {
    uVar2 = uVar1;
  }
  uVar1 = 0x16;
  if (param_3 != 3) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 107af1784; end: 107af1883; -[SCCommerceProductCatalogScope initWithConfiguration:uiContainer:browserDelegate:eventLogger:] */

undefined1 *
FUN_107af1784(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_1126f9c80;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_5);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf2cd00();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107af1884; end: 107af1983; -[SCCommerceProductCatalogScope initWithConfiguration:sigContainer:browserDelegate:eventLogger:] */

undefined1 *
FUN_107af1884(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_1126f9c80;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_5);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf2cd00();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107af1984; end: 107af198b; -[SCCommerceProductCatalogScope configuration] */

undefined8 FUN_107af1984(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107af198c; end: 107af1993; -[SCCommerceProductCatalogScope uiContainer] */

undefined8 FUN_107af198c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107af1994; end: 107af199b; -[SCCommerceProductCatalogScope sigContainer] */

undefined8 FUN_107af1994(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107af199c; end: 107af19b3; -[SCCommerceProductCatalogScope browserDelegate] */

void FUN_107af199c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107af19b4; end: 107af19bb; -[SCCommerceProductCatalogScope eventLogger] */

undefined8 FUN_107af19b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107af19bc; end: 107af19c3; -[SCCommerceProductCatalogScope canLaunchFavorites] */

undefined1 FUN_107af19bc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107af19c4; end: 107af1a13; -[SCCommerceProductCatalogScope .cxx_destruct] */

void FUN_107af19c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107af1a14; end: 107af1b17; -[SCCommerceProductCatalogConfiguration initWithLaunchType:commerceOrigin:catalogConfiguration:canLaunchFavorites:sessionConfiguration:] */

undefined1 *
FUN_107af1a14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f9c88;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107af1b18; end: 107af1b3b; -[SCCommerceProductCatalogConfiguration copyWithZone:] */

undefined8 FUN_107af1b18(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107af1b3c; end: 107af1b43; -[SCCommerceProductCatalogConfiguration launchType] */

undefined8 FUN_107af1b3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107af1b44; end: 107af1b4b; -[SCCommerceProductCatalogConfiguration commerceOrigin] */

undefined8 FUN_107af1b44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107af1b4c; end: 107af1b53; -[SCCommerceProductCatalogConfiguration catalogConfiguration] */

undefined8 FUN_107af1b4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107af1b54; end: 107af1b5b; -[SCCommerceProductCatalogConfiguration canLaunchFavorites] */

undefined1 FUN_107af1b54(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107af1b5c; end: 107af1b63; -[SCCommerceProductCatalogConfiguration sessionConfiguration] */

undefined8 FUN_107af1b5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107af1b64; end: 107af1bab; -[SCCommerceProductCatalogConfiguration .cxx_destruct] */

void FUN_107af1b64(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107af1bac; end: 107af1d07; -[SCCommerceCatalogPageConfiguration initWithStoreURL:calloutText:calloutURL:showActionButton:headingTitle:heroImage:resultTitle:] */

undefined1 *
FUN_107af1bac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f9c90;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107af1d08; end: 107af1d2b; -[SCCommerceCatalogPageConfiguration copyWithZone:] */

undefined8 FUN_107af1d08(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107af1d2c; end: 107af1d33; -[SCCommerceCatalogPageConfiguration storeURL] */

undefined8 FUN_107af1d2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107af1d34; end: 107af1d3b; -[SCCommerceCatalogPageConfiguration calloutText] */

undefined8 FUN_107af1d34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107af1d3c; end: 107af1d43; -[SCCommerceCatalogPageConfiguration calloutURL] */

undefined8 FUN_107af1d3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107af1d44; end: 107af1d4b; -[SCCommerceCatalogPageConfiguration showActionButton] */

undefined1 FUN_107af1d44(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107af1d4c; end: 107af1d53; -[SCCommerceCatalogPageConfiguration headingTitle] */

undefined8 FUN_107af1d4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107af1d54; end: 107af1d5b; -[SCCommerceCatalogPageConfiguration heroImage] */

undefined8 FUN_107af1d54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107af1d5c; end: 107af1d63; -[SCCommerceCatalogPageConfiguration resultTitle] */

undefined8 FUN_107af1d5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107af1d64; end: 107af1dc3; -[SCCommerceCatalogPageConfiguration .cxx_destruct] */

void FUN_107af1d64(long param_1)

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



/* Entry: 107af1dc4; end: 107af1e67; +[SCCommerceProductCatalogLaunchType dpaCatalogWithStoreId:productId:categoryId:] */

void FUN_107af1dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b0518;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
  uVar3 = *(undefined8 *)(puVar2 + 0x78);
  *(undefined8 *)(puVar2 + 0x78) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x88);
  *(undefined8 *)(puVar2 + 0x80) = param_4;
  *(undefined8 *)(puVar2 + 0x88) = param_5;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107af1e68; end: 107af1eff; +[SCCommerceProductCatalogLaunchType legacyAdCatalogWithProductSetId:adId:] */

void FUN_107af1e68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b0518;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107af1f00; end: 107af1f5b; +[SCCommerceProductCatalogLaunchType legacyPDPDeeplinkWithProductId:] */

void FUN_107af1f00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0518;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  *(undefined8 *)(puVar2 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107af1f5c; end: 107af1fc7; +[SCCommerceProductCatalogLaunchType screenshopCatalogWithQueryImage:] */

void FUN_107af1f5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b0518;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  uVar3 = *(undefined8 *)(puVar2 + 0x70);
  *(undefined8 *)(puVar2 + 0x70) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107af1fc8; end: 107af20bf; +[SCCommerceProductCatalogLaunchType shoppableStickersWithProductId:storeId:stickerId:source:] */

void FUN_107af1fc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b0518;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 7;
  uVar3 = *(undefined8 *)(puVar2 + 0x90);
  *(undefined8 *)(puVar2 + 0x90) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x98);
  *(undefined8 *)(puVar2 + 0x98) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xa0);
  *(undefined8 *)(puVar2 + 0xa0) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xa8);
  *(undefined8 *)(puVar2 + 0xa8) = param_6;
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107af20c0; end: 107af212b; +[SCCommerceProductCatalogLaunchType showcaseCatalogWithQueryParams:] */

void FUN_107af20c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b0518;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107af212c; end: 107af21d3; +[SCCommerceProductCatalogLaunchType singleProductWithProductIdentifier:showcaseQuery:storeId:showMerchantTitle:] */

void FUN_107af212c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b0518;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  puVar2[0x28] = param_6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107af21d4; end: 107af221f; +[SCCommerceProductCatalogLaunchType snapStore] */

void FUN_107af21d4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0518;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107af2220; end: 107af226b; +[SCCommerceProductCatalogLaunchType spectaclesStore] */

void FUN_107af2220(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0518;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 9;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107af226c; end: 107af2363; +[SCCommerceProductCatalogLaunchType storeWithStoreId:categoryId:source:sourceId:] */

void FUN_107af226c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b0518;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x50) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x58);
  *(undefined8 *)(puVar2 + 0x58) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x60);
  *(undefined8 *)(puVar2 + 0x60) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x68);
  *(undefined8 *)(puVar2 + 0x68) = param_6;
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107af2364; end: 107af2387; -[SCCommerceProductCatalogLaunchType copyWithZone:] */

undefined8 FUN_107af2364(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107af2388; end: 107af23cb; -[SCCommerceProductCatalogLaunchType internalInit] */

void FUN_107af2388(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f9c98;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107af23cc; end: 107af25db; -[SCCommerceProductCatalogLaunchType matchSingleProduct:legacyAdCatalog:legacyPDPDeeplink:showcaseCatalog:store:screenshopCatalog:dpaCatalog:shoppableStickers:snapStore:spectaclesStore:] */

void FUN_107af23cc(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10,long param_11,
                  long param_12)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  switch(*(undefined8 *)(param_1 + 8)) {
  case 0:
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))
                (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                 *(undefined8 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
    }
    break;
  case 1:
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
    }
    break;
  case 2:
    if (param_5 == 0) break;
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    pcVar6 = *(code **)(param_5 + 0x10);
    lVar1 = param_5;
    goto code_r0x000107af253c;
  case 3:
    if (param_6 == 0) break;
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    pcVar6 = *(code **)(param_6 + 0x10);
    lVar1 = param_6;
    goto code_r0x000107af253c;
  case 4:
    if (param_7 == 0) break;
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    uVar5 = *(undefined8 *)(param_1 + 0x68);
    pcVar6 = *(code **)(param_7 + 0x10);
    lVar1 = param_7;
    goto code_r0x000107af250c;
  case 5:
    if (param_8 == 0) break;
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    pcVar6 = *(code **)(param_8 + 0x10);
    lVar1 = param_8;
code_r0x000107af253c:
    (*pcVar6)(lVar1,uVar2);
    break;
  case 6:
    if (param_9 != 0) {
      (**(code **)(param_9 + 0x10))
                (param_9,*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),
                 *(undefined8 *)(param_1 + 0x88));
    }
    break;
  case 7:
    if (param_10 == 0) break;
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    uVar4 = *(undefined8 *)(param_1 + 0xa0);
    uVar5 = *(undefined8 *)(param_1 + 0xa8);
    pcVar6 = *(code **)(param_10 + 0x10);
    lVar1 = param_10;
code_r0x000107af250c:
    (*pcVar6)(lVar1,uVar2,uVar3,uVar4,uVar5);
    break;
  case 8:
    if (param_11 == 0) break;
    pcVar6 = *(code **)(param_11 + 0x10);
    lVar1 = param_11;
    goto code_r0x000107af256c;
  case 9:
    if (param_12 == 0) break;
    pcVar6 = *(code **)(param_12 + 0x10);
    lVar1 = param_12;
code_r0x000107af256c:
    (*pcVar6)(lVar1);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
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



/* Entry: 107af25dc; end: 107af26b3; -[SCCommerceProductCatalogLaunchType .cxx_destruct] */

void FUN_107af25dc(long param_1)

{
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 107af26b4; end: 107af26ff; +[SCCommerceProductCatalogSource chat] */

void FUN_107af26b4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0528;
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



/* Entry: 107af2700; end: 107af2773; +[SCCommerceProductCatalogSource contextCardWithContextSessionId:cardType:] */

void FUN_107af2700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b0528;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x30) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107af2774; end: 107af289f; +[SCCommerceProductCatalogSource dpaAdsWithAdId:pixelId:serveItemId:sourceSessionId:adToken:] */

void FUN_107af2774(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126b0528;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 8;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x50) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x58);
  *(undefined8 *)(puVar2 + 0x58) = param_7;
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107af28a0; end: 107af290b; +[SCCommerceProductCatalogSource externalDeeplinkWithSourceApplication:] */

void FUN_107af28a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b0528;
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



/* Entry: 107af290c; end: 107af2977; +[SCCommerceProductCatalogSource fashionScanWithResultId:] */

void FUN_107af290c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b0528;
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



/* Entry: 107af2978; end: 107af29c3; +[SCCommerceProductCatalogSource favorites] */

void FUN_107af2978(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0528;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107af29c4; end: 107af2a27; +[SCCommerceProductCatalogSource lensWithLensId:] */

void FUN_107af29c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b0528;
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



/* Entry: 107af2a28; end: 107af2a73; +[SCCommerceProductCatalogSource profiles] */

void FUN_107af2a28(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0528;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107af2a74; end: 107af2abf; +[SCCommerceProductCatalogSource screenshop] */

void FUN_107af2a74(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0528;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107af2ac0; end: 107af2b0b; +[SCCommerceProductCatalogSource settingsSnapStoreCell] */

void FUN_107af2ac0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0528;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0xc;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107af2b0c; end: 107af2b57; +[SCCommerceProductCatalogSource settingsSpectaclesShop] */

void FUN_107af2b0c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0528;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0xd;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107af2b58; end: 107af2ba3; +[SCCommerceProductCatalogSource shoppableSticker] */

void FUN_107af2b58(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0528;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0xb;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107af2ba4; end: 107af2bef; +[SCCommerceProductCatalogSource shoppingBag] */

void FUN_107af2ba4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0528;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 9;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107af2bf0; end: 107af2c63; +[SCCommerceProductCatalogSource shoppingDeeplinkWithSource:external:] */

void FUN_107af2bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b0528;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 10;
  uVar3 = *(undefined8 *)(puVar2 + 0x60);
  *(undefined8 *)(puVar2 + 0x60) = param_3;
  _objc_release(uVar3);
  puVar2[0x68] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


