/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101cab4a4; end: 101cab663;  */

void FUN_101cab4a4(undefined8 param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  ulong uStack_68;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar1 + -8);
  lVar12 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  uVar9 = (long)&lStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_101cab0bc();
  lVar2 = lVar12;
  FUN_101caa714();
  func_0x000107c61170(lVar12);
  lVar12 = *(long *)(lVar2 + 0x10);
  if (lVar12 == 0) {
    func_0x000107c6142c(lVar2);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uStack_68 = (ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff);
    lVar10 = lVar2 + uStack_68;
    lVar8 = *(long *)(lVar11 + 0x48);
    pcVar7 = *(code **)(lVar11 + 0x10);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lStack_80 = lVar2;
    uStack_78 = param_3;
    pcStack_70 = param_2;
    do {
      (*pcVar7)(uVar9,lVar10,lVar1);
      uVar3 = uVar9;
      FUN_101cafbd8();
      if ((uVar3 & 1) == 0) {
        (**(code **)(lVar11 + 8))(uVar9,lVar1);
      }
      else {
        puVar4 = puVar6;
        func_0x000107c61558();
        puVar5 = puVar6;
        if (((ulong)puVar4 & 1) == 0) {
          puVar5 = (undefined *)0x0;
          func_0x000101023b20(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
        }
        uVar3 = *(ulong *)(puVar5 + 0x10);
        puVar6 = puVar5;
        if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar3) {
          puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
          func_0x000101023b20(puVar6,uVar3 + 1,1,puVar5);
        }
        *(ulong *)(puVar6 + 0x10) = uVar3 + 1;
        (**(code **)(lVar11 + 0x20))(puVar6 + uVar3 * lVar8 + uStack_68,uVar9,lVar1);
      }
      lVar10 = lVar10 + lVar8;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    func_0x000107c6142c(lStack_80);
    param_2 = pcStack_70;
  }
  (*param_2)(puVar6);
  func_0x000107c6142c(puVar6);
  return;
}



/* Entry: 101cab664; end: 101cab6d7; -[_TtC36LockedCameraCaptureStorageManagement33LockedCameraCaptureStorageManager getLoggingInfoContainingURLsWithCompletion:] */

void FUN_101cab664(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_1104668d0;
  func_0x000107c613fc(&UNK_1104668d0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  func_0x000107c61174(param_1);
  FUN_101cab3b4(0x101cb18fc,puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101cab6d8; end: 101cab863;  */

undefined * FUN_101cab6d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  puStack_70 = (undefined *)0x0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x1e);
  func_0x000107c6142c(uStack_68);
  puStack_70 = (undefined *)0xd00000000000001c;
  uStack_68 = 0x800000010f0098d0;
  func_0x000107c5fb78(param_1,param_2);
  func_0x000107c6142c(uStack_68);
  puVar1 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = puVar1;
  FUN_101cab124();
  puVar3 = &UNK_110466470;
  func_0x000107c613fc(&UNK_110466470,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_1104666a0;
  func_0x000107c613fc(&UNK_1104666a0,0x30,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  *(undefined8 *)(puVar4 + 0x20) = param_2;
  *(undefined **)(puVar4 + 0x28) = puVar1;
  pcStack_50 = FUN_101cb16a8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1104666b8;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c61434(param_2);
  func_0x000107c61174(puVar1);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(puVar2);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(puVar2);
  puVar3 = puVar1;
  func_0x000107c43bf4(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  return puVar3;
}



/* Entry: 101cab864; end: 101cabb53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cab864(long param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined1 auStack_b0 [24];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  uVar4 = param_1 + 0x10;
  func_0x000107c61618();
  if (uVar4 == 0) {
    return;
  }
  uVar5 = uVar4;
  FUN_101cab258();
  lVar2 = _DAT_112e13358;
  if ((uVar5 & 1) != 0) {
    func_0x000107c4b940(*(undefined8 *)(uVar4 + _DAT_112e13358));
    lVar1 = _DAT_112e13350;
    func_0x000107c61428(uVar4 + _DAT_112e13350,auStack_b0,0,0);
    lVar10 = *(long *)(uVar4 + lVar1);
    if (*(long *)(lVar10 + 0x10) == 0) {
LAB_101cab99c:
      func_0x000107c5d278(*(undefined8 *)(uVar4 + lVar2));
    }
    else {
      func_0x000107c61438(lVar10,2);
      uVar5 = param_2;
      uVar6 = param_3;
      func_0x000100029284();
      if ((uVar6 & 1) == 0) {
        func_0x000107c61430(lVar10,2);
        goto LAB_101cab99c;
      }
      uVar6 = *(ulong *)(*(long *)(lVar10 + 0x38) + uVar5 * 8);
      func_0x000107c61174();
      func_0x000107c61430(lVar10,2);
      func_0x000107c61428(uVar4 + lVar1,&puStack_98,0x21,0);
      uVar5 = param_2;
      FUN_101caf310(param_2,param_3);
      func_0x000107c614a8(&puStack_98);
      func_0x000107c61170(uVar5);
      func_0x000107c5d278(*(undefined8 *)(uVar4 + lVar2));
      if (uVar6 != 0) {
        func_0x000107c3fefc(param_4);
        func_0x000107c61170(uVar4);
        uVar4 = uVar6;
        goto LAB_101cabb34;
      }
    }
    uVar5 = param_2;
    FUN_101cad248(param_2,param_3);
    if (uVar5 != 0) {
      func_0x000107c3fefc(param_4);
      func_0x000107c61170(uVar4);
      uVar4 = uVar5;
      goto LAB_101cabb34;
    }
    puStack_98 = (undefined *)0x0;
    uStack_90 = 0xe000000000000000;
    func_0x000107c602fc(0x3f);
    func_0x000107c5fb78(0xd000000000000026,0x800000010f009920);
    func_0x000107c5fb78(param_2,param_3);
    func_0x000107c5fb78(0xd000000000000017,0x800000010f009950);
    func_0x000107c6142c(uStack_90);
  }
  iVar3 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar3 != 0) {
    pcVar7 = "getCapturedMediaData(forCaptureSessionId:)";
    func_0x0001000c10c0("getCapturedMediaData(forCaptureSessionId:)");
    func_0x000107c61180();
    puVar8 = &UNK_1104666f0;
    func_0x000107c613fc(&UNK_1104666f0,0x30,7);
    *(ulong *)(puVar8 + 0x10) = uVar4;
    *(ulong *)(puVar8 + 0x18) = param_2;
    *(ulong *)(puVar8 + 0x20) = param_3;
    *(undefined8 *)(puVar8 + 0x28) = param_4;
    pcStack_78 = FUN_101cb16b4;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_110466708;
    ppuVar9 = &puStack_98;
    puStack_70 = puVar8;
    func_0x000107c60bc4(ppuVar9);
    puVar8 = puStack_70;
    func_0x000107c61174(uVar4);
    func_0x000107c61434(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c61574(puVar8);
    func_0x000107c4e524(pcVar7);
    func_0x000107c61170(uVar4);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c615e8(pcVar7);
    return;
  }
LAB_101cabb34:
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 101cabb54; end: 101cabbbb; -[_TtC36LockedCameraCaptureStorageManagement33LockedCameraCaptureStorageManager getCapturedMediaDataForCaptureSessionId:] */

void FUN_101cabb54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_101cab6d8(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101cabbbc; end: 101cabd53; -[_TtC36LockedCameraCaptureStorageManagement33LockedCameraCaptureStorageManager markLoggingDoneFor:] */

void FUN_101cabbbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  ulong uVar5;
  long extraout_x12;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar1 + -8);
  lVar7 = *(long *)(lVar9 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)&puStack_80 - (lVar7 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar8 - extraout_x12;
  func_0x000107c5edb4(lVar6,param_3);
  func_0x000107c61174();
  uVar2 = param_1;
  FUN_101cab124();
  (**(code **)(lVar9 + 0x10))(lVar8,lVar6,lVar1);
  uVar5 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar10 = uVar5 + 0x18 & (uVar5 ^ 0xffffffffffffffff);
  puVar3 = &UNK_110466880;
  func_0x000107c613fc(&UNK_110466880,uVar10 + lVar7,uVar5 | 7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  (**(code **)(lVar9 + 0x20))(puVar3 + uVar10,lVar8,lVar1);
  pcStack_60 = FUN_101cb18cc;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_110466898;
  ppuVar4 = &puStack_80;
  puStack_58 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar3 = puStack_58;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(uVar2);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  (**(code **)(lVar9 + 8))(lVar6,lVar1);
  return;
}



/* Entry: 101cabd54; end: 101cabe27;  */

void FUN_101cabd54(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  uVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if ((int)uVar1 != 0) {
    FUN_101cab124();
    puVar2 = &UNK_110466470;
    func_0x000107c613fc(&UNK_110466470,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    uStack_40 = 0x101cb15ec;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_110466668;
    puStack_38 = puVar2;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    func_0x000107c4e524(uVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 101cabe28; end: 101cac077;  */

void FUN_101cabe28(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  char *pcStack_a0;
  long lStack_98;
  ulong uStack_90;
  undefined1 *puStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puStack_88 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar9 = (long)(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = uVar9 - extraout_x12_00;
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lStack_80 = param_1;
    FUN_101cab0bc();
    lVar3 = param_1;
    FUN_101caa714();
    func_0x000107c61170(param_1);
    lVar11 = *(long *)(lVar3 + 0x10);
    lStack_a8 = lVar3;
    if (lVar11 != 0) {
      lVar3 = lVar3 + ((ulong)*(byte *)(lVar13 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff));
      lVar10 = *(long *)(lVar13 + 0x48);
      pcVar12 = *(code **)(lVar13 + 0x10);
      pcStack_a0 = "com.apple.SecureCapture";
      lStack_98 = lVar10;
      uStack_90 = uVar9;
      do {
        (*pcVar12)(lVar8,lVar3,lVar2);
        uVar4 = uVar9;
        (**(code **)(lVar13 + 0x20))(uVar9,lVar8,lVar2);
        FUN_101cab258();
        puVar1 = puStack_88;
        if ((uVar4 & 1) == 0) {
LAB_101cac030:
          uVar4 = uVar9;
          FUN_101cb0624();
          if ((uVar4 & 1) != 0) {
            FUN_101cb02ac(uVar9);
          }
        }
        else {
          uVar9 = (ulong)pcStack_a0 | 0x8000000000000000;
          func_0x000107c5ed9c(puStack_88,0xd000000000000016,uVar9);
          puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
          func_0x000107c61168();
          func_0x000107c415e0();
          func_0x000107c61180();
          puVar6 = puVar5;
          func_0x000107c5edc4();
          func_0x000107c5fadc();
          func_0x000107c6142c(uVar9);
          puVar7 = puVar5;
          func_0x000107c43418();
          uVar9 = uStack_90;
          func_0x000107c61170(puVar5);
          func_0x000107c61170(puVar6);
          lVar10 = lStack_98;
          (**(code **)(lVar13 + 8))(puVar1,lVar2);
          if (((ulong)puVar7 & 1) == 0) goto LAB_101cac030;
        }
        (**(code **)(lVar13 + 8))(uVar9,lVar2);
        lVar3 = lVar3 + lVar10;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    func_0x000107c61170(lStack_80);
    func_0x000107c6142c(lStack_a8);
  }
  return;
}



/* Entry: 101cac078; end: 101cac09f; -[_TtC36LockedCameraCaptureStorageManagement33LockedCameraCaptureStorageManager clearStaleCache] */

void FUN_101cac078(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101cabd54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101cac0a0; end: 101cac563;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cac0a0(long param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long extraout_x8;
  ulong uVar12;
  long extraout_x12;
  long extraout_x12_00;
  long lVar13;
  code *pcVar14;
  undefined1 *puVar15;
  ulong uVar16;
  undefined1 auStack_f0 [8];
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  char *pcStack_c8;
  undefined *puStack_c0;
  code *pcStack_b8;
  long lStack_b0;
  char *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar5 = 0;
  func_0x000107c5ede0();
  lStack_98 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_98 + 0x40));
  puVar15 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar16 = (long)puVar15 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    (*param_2)(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  else {
    lStack_e0 = param_1;
    uStack_d8 = param_3;
    pcStack_d0 = param_2;
    FUN_101cab0bc();
    lVar6 = param_1;
    FUN_101caa714();
    func_0x000107c61170(param_1);
    lVar13 = *(long *)(lVar6 + 0x10);
    lStack_e8 = lVar6;
    if (lVar13 == 0) {
      puStack_c0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puVar9 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x000107c61168();
      pcStack_a8 = "com.apple.SecureCapture";
      lVar6 = lVar6 + ((ulong)*(byte *)(lStack_98 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(lStack_98 + 0x50) ^ 0xffffffffffffffff));
      lStack_b0 = *(long *)(lStack_98 + 0x48);
      pcStack_b8 = *(code **)(lStack_98 + 0x10);
      pcStack_c8 = "uredMedia] found ";
      puStack_c0 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puStack_a0 = puVar9;
      do {
        (*pcStack_b8)(uVar16 - extraout_x12_00,lVar6,lVar5);
        lVar3 = lStack_98;
        (**(code **)(lStack_98 + 0x20))(uVar16,uVar16 - extraout_x12_00,lVar5);
        uVar10 = (ulong)pcStack_a8 | 0x8000000000000000;
        func_0x000107c5ed9c(puVar15,0xd000000000000016,uVar10);
        puVar9 = puStack_a0;
        func_0x000107c415e0();
        func_0x000107c61180();
        puVar8 = puVar9;
        func_0x000107c5edc4();
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar10);
        puVar7 = puVar9;
        func_0x000107c43418();
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar8);
        pcVar14 = *(code **)(lVar3 + 8);
        (*pcVar14)(puVar15,lVar5);
        if (((((ulong)puVar7 & 1) == 0) && (uVar10 = uVar16, FUN_101cb0d84(), (uVar10 & 1) == 0)) &&
           (uVar10 = uVar16, func_0x000101cb003c(), uVar10 != 0)) {
          uStack_88 = 0;
          uStack_80 = 0xe000000000000000;
          func_0x000107c602fc(0x43);
          uVar11 = (ulong)pcStack_c8 | 0x8000000000000000;
          func_0x000107c5fb78(0xd000000000000034,uVar11);
          func_0x000107c5ed88();
          func_0x000107c5fb78();
          func_0x000107c6142c(uVar11);
          func_0x000107c5fb78(0x67616d497369202c,0xeb00000000203a65);
          bVar4 = *(char *)(uVar10 + _DAT_11380c070) == '\0';
          uVar1 = 0x65757274;
          if (bVar4) {
            uVar1 = 0x65736c6166;
          }
          uVar2 = 0xe400000000000000;
          if (bVar4) {
            uVar2 = 0xe500000000000000;
          }
          func_0x000107c5fb78(uVar1,uVar2);
          func_0x000107c6142c(uVar2);
          func_0x000107c6142c(uStack_80);
          func_0x000107c61174();
          puVar9 = puStack_c0;
          puVar8 = puStack_c0;
          func_0x000107c61550();
          if ((((int)puVar8 == 0) || ((long)puVar9 < 0)) ||
             (puVar8 = puVar9, ((ulong)puVar9 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar9 >> 0x3e == 0) {
              puVar7 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar7 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar9) {
                puVar7 = puVar9;
              }
              func_0x000107c60480(puVar7);
            }
            puVar8 = (undefined *)0x0;
            FUN_101caf0f0(0,puVar7 + 1,1,puVar9);
          }
          uVar12 = (ulong)puVar8 & 0xffffffffffffff8;
          uVar11 = *(ulong *)(uVar12 + 0x10);
          puStack_c0 = puVar8;
          if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar11) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
            FUN_101caf0f0(puVar9,uVar11 + 1,1,puVar8);
            uVar12 = (ulong)puVar9 & 0xffffffffffffff8;
            puStack_c0 = puVar9;
          }
          *(ulong *)(uVar12 + 0x10) = uVar11 + 1;
          *(ulong *)(uVar12 + uVar11 * 8 + 0x20) = uVar10;
          func_0x000107c61170(uVar10);
        }
        (*pcVar14)(uVar16,lVar5);
        lVar6 = lVar6 + lStack_b0;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    func_0x000107c6142c(lStack_e8);
    uStack_88 = 0;
    uStack_80 = 0xe000000000000000;
    func_0x000107c602fc(0x38);
    func_0x000107c5fb78(0xd000000000000021,0x800000010f0099f0);
    puVar9 = puStack_c0;
    pcVar14 = pcStack_d0;
    if ((ulong)puStack_c0 >> 0x3e == 0) {
      puVar8 = *(undefined **)(((ulong)puStack_c0 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar8 = (undefined *)((ulong)puStack_c0 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puStack_c0) {
        puVar8 = puStack_c0;
      }
      func_0x000107c60480();
    }
    puVar7 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    puStack_90 = puVar8;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar7);
    func_0x000107c5fb78(0xd000000000000015,0x800000010f009040);
    func_0x000107c6142c(uStack_80);
    (*pcVar14)(puVar9);
    func_0x000107c6142c(puVar9);
    func_0x000107c61170(lStack_e0);
  }
  return;
}



/* Entry: 101cac564; end: 101cac56f; -[_TtC36LockedCameraCaptureStorageManagement33LockedCameraCaptureStorageManager getOrphanedCapturedMediaWithCompletion:] */

void FUN_101cac564(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c60bc4(param_3);
  func_0x000107c60bc4();
  func_0x000107c61174(param_1);
  FUN_101cb0bf8();
  func_0x000107c60bd0(param_3);
  func_0x000107c60bd0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101cac570; end: 101cac5bb;  */

void FUN_101cac570(undefined8 param_1,long param_2,code *param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  (*param_3)(0);
  func_0x000107c5fc48(param_1,uVar1);
  (**(code **)(param_2 + 0x10))(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101cac5bc; end: 101cac72b;  */

void FUN_101cac5bc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_70;
  ulong uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  puStack_70 = (undefined *)0x0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x2c);
  func_0x000107c6142c(uStack_68);
  puStack_70 = (undefined *)0xd00000000000002a;
  uStack_68 = 0x800000010f009820;
  func_0x000107c5fb78(param_1,param_2);
  uVar1 = uStack_68;
  func_0x000107c6142c();
  FUN_101cab258();
  if ((uVar1 & 1) != 0) {
    uVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar2 != 0) {
      FUN_101cab124();
      puVar3 = &UNK_110466470;
      func_0x000107c613fc(&UNK_110466470,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      puVar4 = &UNK_110466628;
      func_0x000107c613fc(&UNK_110466628,0x28,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(undefined8 *)(puVar4 + 0x18) = param_1;
      *(undefined8 *)(puVar4 + 0x20) = param_2;
      uStack_50 = 0x101cb15e0;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_1000f6b44;
      puStack_58 = &UNK_110466640;
      puStack_48 = puVar4;
      func_0x000107c60bc4(&puStack_70);
      puVar3 = puStack_48;
      func_0x000107c61434(param_2);
      func_0x000107c61574(puVar3);
      func_0x000107c4e524(uVar2);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61170(uVar2);
    }
  }
  return;
}



/* Entry: 101cac72c; end: 101cacd5f;  */

void FUN_101cac72c(long param_1,ulong param_2,long param_3)

{
  undefined1 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  code *pcVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined1 auStack_e0 [8];
  long lStack_d8;
  long lStack_d0;
  undefined1 *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar2 = 0x112d36580;
  lStack_98 = param_3;
  uStack_90 = param_2;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar18 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar16 = (long)(auStack_e0 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar16 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar19 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar10 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar13 = lVar11 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = uVar13 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_a8 = lVar20 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_a0 = (lVar20 - extraout_x12_04) - extraout_x12_05;
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lStack_d8 = lVar19;
    lStack_d0 = lVar16;
    puStack_c8 = auStack_e0 + -extraout_x8;
    lStack_c0 = lVar11;
    lStack_b8 = lVar10;
    lStack_b0 = param_1;
    FUN_101cab0bc();
    lVar10 = param_1;
    FUN_101caa714();
    func_0x000107c61170(param_1);
    uVar12 = *(ulong *)(lVar10 + 0x10);
    if (uVar12 != 0) {
      uVar14 = 0;
      do {
        if (*(ulong *)(lVar10 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x101cacd60);
          (*pcVar17)();
        }
        (**(code **)(lVar18 + 0x10))
                  (lVar20,lVar10 + ((ulong)*(byte *)(lVar18 + 0x50) + 0x20 &
                                   ((ulong)*(byte *)(lVar18 + 0x50) ^ 0xffffffffffffffff)) +
                          *(long *)(lVar18 + 0x48) * uVar14,lVar2);
        pcVar17 = *(code **)(lVar18 + 0x20);
        uVar3 = uVar13;
        lVar11 = lVar20;
        (*pcVar17)(uVar13,lVar20,lVar2);
        func_0x000107c5ed88();
        if ((uVar3 == uStack_90) && (lVar11 == lStack_98)) {
          func_0x000107c6142c(lVar10);
          lVar10 = lVar11;
LAB_101cac9b0:
          func_0x000107c6142c(lVar10);
          lVar10 = lStack_a8;
          (*pcVar17)(lStack_a8,uVar13,lVar2);
          lVar11 = lStack_a0;
          (*pcVar17)(lStack_a0,lVar10,lVar2);
          lVar10 = lStack_c0;
          uVar9 = 0x800000010f009760;
          func_0x000107c5ed9c(lStack_c0,0xd000000000000016,0x800000010f009760);
          puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
          func_0x000107c61168(PTR__OBJC_CLASS___NSFileManager_1126aff20);
          func_0x000107c415e0();
          func_0x000107c61180();
          puVar5 = puVar4;
          func_0x000107c5edc4();
          func_0x000107c5fadc();
          func_0x000107c6142c(uVar9);
          func_0x000107c40a0c(puVar4);
          func_0x000107c61170(puVar4);
          func_0x000107c61170(puVar5);
          uStack_88 = 0;
          uStack_80 = 0xe000000000000000;
          func_0x000107c602fc(0x41);
          func_0x000107c5fb78(0xd00000000000003f,0x800000010f009850);
          uVar9 = 0x112d4b608;
          func_0x000101cb15f4(0x112d4b608,PTR___s10Foundation3URLVMa_110350988,
                              PTR___s10Foundation3URLVs23CustomStringConvertibleAAMc_1103509c0);
          func_0x000107c6057c(lVar2,uVar9);
          func_0x000107c5fb78();
          func_0x000107c6142c(uVar9);
          func_0x000107c6142c(uStack_80);
          pcVar17 = *(code **)(lVar18 + 8);
          (*pcVar17)(lVar10,lVar2);
          (*pcVar17)(lVar11,lVar2);
          goto LAB_101cacb0c;
        }
        func_0x000107c605b8();
        func_0x000107c6142c(lVar11);
        if ((uVar3 & 1) != 0) goto LAB_101cac9b0;
        uVar14 = uVar14 + 1;
        (**(code **)(lVar18 + 8))(uVar13,lVar2);
      } while (uVar12 != uVar14);
    }
    func_0x000107c6142c(lVar10);
    lVar10 = lStack_c0;
LAB_101cacb0c:
    lVar16 = lStack_b8;
    puVar1 = puStack_c8;
    FUN_101cadd28(puStack_c8);
    puVar6 = puVar1;
    (**(code **)(lVar18 + 0x30))(puVar1,1,lVar2);
    lVar11 = lStack_d0;
    if ((int)puVar6 == 1) {
      func_0x000107c61170(lStack_b0);
      func_0x000101cb1634(puVar1,0x112d36580,&UNK_10d9016d0);
    }
    else {
      pcVar17 = *(code **)(lVar18 + 0x20);
      (*pcVar17)(lStack_d0,puVar1,lVar2);
      lVar19 = lStack_d8;
      func_0x000107c5ed98(lStack_d8,uStack_90,lStack_98,1);
      pcVar15 = *(code **)(lVar18 + 8);
      (*pcVar15)(lVar11,lVar2);
      (*pcVar17)(lVar16,lVar19,lVar2);
      puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x000107c61168();
      puVar5 = puVar4;
      func_0x000107c415e0();
      func_0x000107c61180();
      puVar7 = puVar5;
      func_0x000107c5edc4();
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar19);
      puVar8 = puVar5;
      func_0x000107c43418();
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar7);
      if ((int)puVar8 == 0) {
        (*pcVar15)(lVar16,lVar2);
        func_0x000107c61170(lStack_b0);
      }
      else {
        uVar9 = 0x800000010f009760;
        func_0x000107c5ed9c(lVar10,0xd000000000000016,0x800000010f009760);
        func_0x000107c415e0(puVar4);
        func_0x000107c61180();
        puVar5 = puVar4;
        func_0x000107c5edc4();
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar9);
        func_0x000107c40a0c(puVar4);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar5);
        uStack_88 = 0;
        uStack_80 = 0xe000000000000000;
        func_0x000107c602fc(0x36);
        func_0x000107c5fb78(0xd000000000000034,0x800000010f009890);
        uVar9 = 0x112d4b608;
        func_0x000101cb15f4(0x112d4b608,PTR___s10Foundation3URLVMa_110350988,
                            PTR___s10Foundation3URLVs23CustomStringConvertibleAAMc_1103509c0);
        func_0x000107c6057c(lVar2,uVar9);
        func_0x000107c5fb78();
        func_0x000107c61170(lStack_b0);
        func_0x000107c6142c(uVar9);
        func_0x000107c6142c(uStack_80);
        (*pcVar15)(lVar10,lVar2);
        (*pcVar15)(lVar16,lVar2);
      }
    }
  }
  return;
}



/* Entry: 101cacd60; end: 101cacdbb; -[_TtC36LockedCameraCaptureStorageManagement33LockedCameraCaptureStorageManager markOrphanedMediaHandledWithSessionId:] */

void FUN_101cacd60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_101cac5bc(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101cacdbc; end: 101cacec3;  */

void FUN_101cacdbc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  uVar1 = param_1;
  FUN_101cab258();
  if ((uVar1 & 1) != 0) {
    FUN_101cab124();
    puVar2 = &UNK_110466470;
    func_0x000107c613fc(&UNK_110466470,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    puVar3 = &UNK_1104665d8;
    func_0x000107c613fc(&UNK_1104665d8,0x30,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(ulong *)(puVar3 + 0x18) = param_1;
    *(undefined8 *)(puVar3 + 0x20) = param_2;
    *(undefined8 *)(puVar3 + 0x28) = param_3;
    pcStack_50 = FUN_101cb15d4;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_1104665f0;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar2 = puStack_48;
    func_0x000107c61434(param_2);
    func_0x000107c61174(param_3);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(uVar1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 101cacec4; end: 101cad053;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cacec4(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar3 = param_2;
    func_0x000101caea84(param_2,param_3,param_4);
    lVar2 = _DAT_112e13358;
    func_0x000107c4b940(*(undefined8 *)(param_1 + _DAT_112e13358));
    lVar1 = _DAT_112e13350;
    if (lVar3 == 0) {
      func_0x000107c61428(param_1 + _DAT_112e13350,auStack_80,0x21,0);
      func_0x000107c61434(param_3);
      func_0x000107c61174(param_4);
      uVar4 = *(undefined8 *)(param_1 + lVar1);
      func_0x000107c61558(uVar4);
      uVar5 = *(undefined8 *)(param_1 + lVar1);
      *(undefined8 *)(param_1 + lVar1) = 0x8000000000000000;
      FUN_101caf3cc(param_4,param_2,param_3,uVar4);
      func_0x000107c6142c(param_3);
      *(undefined8 *)(param_1 + lVar1) = uVar5;
      func_0x000107c614a8(auStack_80);
      func_0x000107c5d278(*(undefined8 *)(param_1 + lVar2));
    }
    else {
      func_0x000107c61428(param_1 + _DAT_112e13350,auStack_80,0x21,0);
      func_0x000107c61434(param_3);
      func_0x000107c61174(lVar3);
      uVar4 = *(undefined8 *)(param_1 + lVar1);
      func_0x000107c61558(uVar4);
      uVar5 = *(undefined8 *)(param_1 + lVar1);
      *(undefined8 *)(param_1 + lVar1) = 0x8000000000000000;
      FUN_101caf3cc(lVar3,param_2,param_3,uVar4);
      func_0x000107c6142c(param_3);
      *(undefined8 *)(param_1 + lVar1) = uVar5;
      func_0x000107c614a8(auStack_80);
      func_0x000107c5d278(*(undefined8 *)(param_1 + lVar2));
      func_0x000107c61170(lVar3);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101cad054; end: 101cad0c7; -[_TtC36LockedCameraCaptureStorageManagement33LockedCameraCaptureStorageManager cacheOrphanedMediaDataWithSessionId:mediaData:] */

void FUN_101cad054(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_101cacdbc(param_3,param_2,param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101cad0c8; end: 101cad15f;  */

void FUN_101cad0c8(long param_1,code *param_2)

{
  long lVar1;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    (*param_2)(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  else {
    lVar1 = param_1;
    func_0x000101cad450();
    (*param_2)();
    func_0x000107c61170(param_1);
    func_0x000107c6142c(lVar1);
  }
  return;
}



/* Entry: 101cad160; end: 101cad16b; -[_TtC36LockedCameraCaptureStorageManagement33LockedCameraCaptureStorageManager getCachedOrphanedCapturedMediaWithCompletion:] */

void FUN_101cad160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c60bc4(param_3);
  func_0x000107c60bc4();
  func_0x000107c61174(param_1);
  FUN_101cb16e8();
  func_0x000107c60bd0(param_3);
  func_0x000107c60bd0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101cad16c; end: 101cad1cb;  */

void FUN_101cad16c(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c60bc4(param_3);
  func_0x000107c60bc4();
  func_0x000107c61174(param_1);
  (*param_4)();
  func_0x000107c60bd0(param_3);
  func_0x000107c60bd0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101cad1cc; end: 101cad247; -[_TtC36LockedCameraCaptureStorageManagement33LockedCameraCaptureStorageManager hasAnySessionsInSecureCapture] */

void FUN_101cad1cc(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    func_0x000107c61174();
    uVar2 = param_1;
    FUN_101cab0bc();
    uVar3 = uVar2;
    FUN_101caa714();
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(uVar3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101cad248; end: 101cad88f;  */

long FUN_101cad248(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  code *pcVar12;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar8 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar9 - extraout_x12_00;
  FUN_101cadd28(puVar7);
  puVar2 = puVar7;
  (**(code **)(lVar10 + 0x30))(puVar7,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x000101cb1634(puVar7,0x112d36580,&UNK_10d9016d0);
  }
  else {
    pcVar12 = *(code **)(lVar10 + 0x20);
    (*pcVar12)(lVar8,puVar7,lVar1);
    func_0x000107c5ed98(lVar9,param_1,param_2,1);
    pcVar11 = *(code **)(lVar10 + 8);
    (*pcVar11)(lVar8,lVar1);
    (*pcVar12)(lVar6,lVar9,lVar1);
    puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c61168();
    func_0x000107c415e0();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c5edc4();
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar9);
    puVar5 = puVar3;
    func_0x000107c43418();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    if ((int)puVar5 != 0) {
      lVar9 = lVar6;
      func_0x000101cb003c(lVar6);
      (*pcVar11)(lVar6,lVar1);
      return lVar9;
    }
    (*pcVar11)(lVar6,lVar1);
  }
  return 0;
}



/* Entry: 101cad890; end: 101cadd27;  */

void FUN_101cad890(undefined8 *param_1,undefined8 param_2,long param_3,long *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long lVar8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  code *pcVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  long lStack_d0;
  undefined *puStack_c8;
  char *pcStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  
  uVar1 = 0;
  puStack_98 = param_1;
  func_0x000107c5ede0();
  lVar13 = *(long *)(uVar1 - 8);
  uVar2 = uVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar8 = (long)&lStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_b0 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar11 = lVar8 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = uVar11 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_b8 = lVar9 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (lVar9 - extraout_x12_01) - extraout_x12_02;
  lStack_a8 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar8 - extraout_x12_03;
  func_0x000107c5ed88();
  pcStack_c0 = "com.apple.SecureCapture";
  uVar7 = 0x800000010f009760;
  uStack_a0 = param_2;
  func_0x000107c5ed9c(lVar8,0xd000000000000016,0x800000010f009760);
  puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  puStack_c8 = puVar3;
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c5edc4();
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar7);
  puVar5 = puVar3;
  func_0x000107c43418();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  if ((int)puVar5 == 0) {
    lVar15 = *param_4;
    uVar10 = *(ulong *)(lVar15 + 0x10);
    lStack_d0 = lVar8;
    func_0x000107c61434(lVar15);
    if (uVar10 != 0) {
      uVar14 = 0;
      do {
        if (*(ulong *)(lVar15 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x101cadd28);
          (*pcVar12)();
        }
        (**(code **)(lVar13 + 0x10))
                  (lVar9,lVar15 + ((ulong)*(byte *)(lVar13 + 0x50) + 0x20 &
                                  ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff)) +
                         *(long *)(lVar13 + 0x48) * uVar14,uVar1);
        pcVar12 = *(code **)(lVar13 + 0x20);
        uVar6 = uVar11;
        lVar8 = lVar9;
        (*pcVar12)(uVar11,lVar9,uVar1);
        func_0x000107c5ed88();
        if ((uVar6 == uVar2) && (lVar8 == param_3)) {
          func_0x000107c6142c(lVar15);
          lVar15 = lVar8;
LAB_101cadb94:
          func_0x000107c6142c(lVar15);
          lVar8 = lStack_b8;
          (*pcVar12)(lStack_b8,uVar11,uVar1);
          lVar9 = lStack_a8;
          (*pcVar12)(lStack_a8,lVar8,uVar1);
          lVar8 = lStack_b0;
          uVar11 = (ulong)pcStack_c0 | 0x8000000000000000;
          func_0x000107c5ed9c(lStack_b0,0xd000000000000016,uVar11);
          puVar3 = puStack_c8;
          func_0x000107c415e0();
          func_0x000107c61180();
          puVar4 = puVar3;
          func_0x000107c5edc4();
          func_0x000107c5fadc();
          func_0x000107c6142c(uVar11);
          puVar5 = puVar3;
          func_0x000107c43418();
          func_0x000107c61170(puVar3);
          func_0x000107c61170(puVar4);
          pcVar12 = *(code **)(lVar13 + 8);
          (*pcVar12)(lVar8,uVar1);
          puVar16 = puStack_98;
          if ((int)puVar5 == 0) {
            (*pcVar12)(lVar9,uVar1);
            goto LAB_101cadcd4;
          }
          func_0x000107c602fc(0x4b);
          func_0x000107c5fb78(0xd000000000000049,0x800000010f009780);
          func_0x000107c5fb78(uVar2,param_3);
          func_0x000107c6142c(param_3);
          func_0x000107c6142c(0xe000000000000000);
          (*pcVar12)(lVar9,uVar1);
          (*pcVar12)(lStack_d0,uVar1);
          uVar7 = 0;
          goto LAB_101cadcfc;
        }
        func_0x000107c605b8();
        func_0x000107c6142c(lVar8);
        if ((uVar6 & 1) != 0) goto LAB_101cadb94;
        uVar14 = uVar14 + 1;
        (**(code **)(lVar13 + 8))(uVar11,uVar1);
      } while (uVar10 != uVar14);
    }
    func_0x000107c6142c(lVar15);
    puVar16 = puStack_98;
LAB_101cadcd4:
    lVar8 = lStack_d0;
    func_0x000107c6142c(param_3);
    uVar7 = uStack_a0;
    func_0x000101cb003c();
    (**(code **)(lVar13 + 8))(lVar8,uVar1);
  }
  else {
    func_0x000107c602fc(0x48);
    func_0x000107c5fb78(0xd000000000000046,0x800000010f0097d0);
    func_0x000107c5fb78(uVar2,param_3);
    func_0x000107c6142c(param_3);
    func_0x000107c6142c(0xe000000000000000);
    (**(code **)(lVar13 + 8))(lVar8,uVar1);
    uVar7 = 0;
    puVar16 = puStack_98;
  }
LAB_101cadcfc:
  *puVar16 = uVar7;
  return;
}



/* Entry: 101cadd28; end: 101cadf27;  */

void FUN_101cadd28(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long lVar4;
  code *pcVar5;
  undefined1 *puVar6;
  long lVar7;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar6 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3ac48();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  puVar2 = puVar3;
  func_0x000107c5fc54(puVar3,lVar1);
  func_0x000107c61170(puVar3);
  if (*(long *)(puVar2 + 0x10) != 0) {
    (**(code **)(lVar7 + 0x10))
              (lVar4,puVar2 + ((ulong)*(byte *)(lVar7 + 0x50) + 0x20 &
                              ((ulong)*(byte *)(lVar7 + 0x50) ^ 0xffffffffffffffff)),lVar1);
    func_0x000107c6142c(puVar2);
    (**(code **)(lVar7 + 0x20))(lVar4 - extraout_x12_00,lVar4,lVar1);
    func_0x000107c5ed98(puVar6,0xd000000000000017,0x800000010f009740,1);
    func_0x000107c5ed98(param_1,0xd00000000000001a,0x800000010f009280,1);
    pcVar5 = *(code **)(lVar7 + 8);
    (*pcVar5)(puVar6,lVar1);
    (*pcVar5)(lVar4 - extraout_x12_00,lVar1);
    (**(code **)(lVar7 + 0x38))(param_1,0,1,lVar1);
    return;
  }
  func_0x000107c6142c(puVar2);
                    /* WARNING: Could not recover jumptable at 0x000101cadf24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar7 + 0x38))(param_1,1,1,lVar1);
  return;
}



/* Entry: 101cadf28; end: 101cae1bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cadf28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar6 = &puStack_a0;
  ppuVar8 = &puStack_a0;
  puStack_a0 = (undefined *)0x0;
  uStack_98 = 0xe000000000000000;
  func_0x000107c602fc(0x23);
  func_0x000107c6142c(uStack_98);
  puStack_a0 = (undefined *)0xd000000000000021;
  uStack_98 = 0x800000010f009320;
  func_0x000107c5fb78(param_1,param_2);
  func_0x000107c6142c(uStack_98);
  lVar1 = _DAT_112e13348;
  func_0x000107c498f8(*(undefined8 *)(unaff_x20 + _DAT_112e13348));
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  func_0x000107c61170(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x000107c61168();
  puVar7 = &UNK_110466470;
  puVar4 = puVar7;
  func_0x000107c613fc(&UNK_110466470,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar5 = &UNK_110466498;
  func_0x000107c613fc(&UNK_110466498,0x30,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  *(undefined8 *)(puVar5 + 0x20) = param_2;
  *(undefined8 *)(puVar5 + 0x28) = param_3;
  pcStack_80 = FUN_101cb1558;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100fef460;
  puStack_88 = &UNK_1104664b0;
  puStack_78 = puVar5;
  func_0x000107c60bc4(&puStack_a0);
  puVar5 = puStack_78;
  func_0x000107c61434(param_2);
  func_0x000107c61174();
  func_0x000107c61574(puVar5);
  puVar5 = puVar3;
  func_0x000107c51924(0x4024000000000000);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined **)(unaff_x20 + lVar1) = puVar5;
  func_0x000107c61170(uVar2);
  lVar1 = _DAT_112e13340;
  func_0x000107c498f8(*(undefined8 *)(unaff_x20 + _DAT_112e13340));
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  func_0x000107c61170(uVar2);
  func_0x000107c613fc(&UNK_110466470,0x18,7);
  func_0x000107c61614(puVar7 + 0x10);
  puVar5 = &UNK_1104664e8;
  func_0x000107c613fc(&UNK_1104664e8,0x30,7);
  *(undefined **)(puVar5 + 0x10) = puVar7;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  *(undefined8 *)(puVar5 + 0x20) = param_2;
  *(undefined8 *)(puVar5 + 0x28) = param_3;
  pcStack_80 = (code *)0x101cb1580;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100fef460;
  puStack_88 = &UNK_110466500;
  puStack_78 = puVar5;
  func_0x000107c60bc4(&puStack_a0);
  puVar7 = puStack_78;
  func_0x000107c61434(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61574(puVar7);
  func_0x000107c51924(0x3fc3333333333333);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101cae1bc; end: 101cae313;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cae1bc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c602fc(0x43);
    func_0x000107c5fb78(0xd000000000000041,0x800000010f0096f0);
    func_0x000107c5fb78(param_3,param_4);
    func_0x000107c6142c(0xe000000000000000);
    lVar1 = _DAT_112e13340;
    func_0x000107c498f8(*(undefined8 *)(param_2 + _DAT_112e13340));
    uVar2 = *(undefined8 *)(param_2 + lVar1);
    *(undefined8 *)(param_2 + lVar1) = 0;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar2 = 0xd000000000000021;
    func_0x000107c5fadc(0xd000000000000021,0x800000010d9eeb10);
    func_0x000107c466bc(puVar3);
    func_0x000107c61170(uVar2);
    puVar4 = puVar3;
    func_0x000107c5ed2c(puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c3fef8(param_5);
    func_0x000107c61170(param_2);
    func_0x000107c61170(puVar4);
  }
  return;
}



/* Entry: 101cae314; end: 101cae4af;  */

void FUN_101cae314(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puStack_98 = (undefined *)0x0;
    uStack_90 = 0xe000000000000000;
    func_0x000107c602fc(0x2f);
    func_0x000107c6142c(uStack_90);
    puStack_98 = (undefined *)0xd00000000000002d;
    uStack_90 = 0x800000010f009350;
    func_0x000107c5fb78(param_3,param_4);
    uVar1 = uStack_90;
    func_0x000107c6142c(uStack_90);
    FUN_101cab124();
    puVar2 = &UNK_110466470;
    func_0x000107c613fc(&UNK_110466470,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_2);
    puVar3 = &UNK_110466538;
    func_0x000107c613fc(&UNK_110466538,0x38,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = param_3;
    *(undefined8 *)(puVar3 + 0x20) = param_4;
    *(undefined8 *)(puVar3 + 0x28) = param_5;
    *(undefined8 *)(puVar3 + 0x30) = param_1;
    uStack_78 = 0x101cb158c;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_110466550;
    ppuVar4 = &puStack_98;
    puStack_70 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar2 = puStack_70;
    func_0x000107c61434(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(uVar1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(param_2);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 101cae4b0; end: 101caefdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cae4b0(long param_1,ulong param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined **ppuVar9;
  ulong *puVar10;
  long lVar11;
  long extraout_x12;
  long extraout_x12_00;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined1 *puStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [32];
  
  lStack_b8 = param_3;
  func_0x000107c61428(param_1 + 0x10,auStack_80,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uStack_108 = param_4;
    uStack_100 = param_5;
    lStack_f0 = param_1;
    uStack_c0 = param_2;
    FUN_101cab0bc();
    lVar2 = param_1;
    FUN_101caa714();
    func_0x000107c61170(param_1);
    lVar3 = 0;
    func_0x000107c5ede0();
    lVar16 = *(long *)(lVar3 + -8);
    lVar15 = *(long *)(lVar16 + 0x40);
    puStack_d8 = (undefined1 *)&lStack_110;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    puVar5 = (undefined *)((long)&lStack_110 - (lVar15 + 0xfU & 0xfffffffffffffff0));
    puStack_f8 = puVar5;
    puStack_e0 = puVar5;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar11 = (long)puVar5 - extraout_x12;
    lStack_110 = lVar11;
    lStack_e8 = lVar11;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar11 = lVar11 - extraout_x12_00;
    uStack_d0 = *(ulong *)(lVar2 + 0x10);
    if (uStack_d0 != 0) {
      uVar12 = 0;
      lStack_c8 = lVar16;
      do {
        if (*(ulong *)(lVar2 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x101caea84);
          (*pcVar17)();
        }
        (**(code **)(lVar16 + 0x10))
                  (lVar11,lVar2 + ((ulong)*(byte *)(lVar16 + 0x50) + 0x20 &
                                  ((ulong)*(byte *)(lVar16 + 0x50) ^ 0xffffffffffffffff)) +
                          *(long *)(lVar16 + 0x48) * uVar12,lVar3);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        uVar13 = lVar11 - (lVar15 + 0xfU & 0xfffffffffffffff0);
        pcVar17 = *(code **)(lVar16 + 0x20);
        uVar4 = uVar13;
        lVar16 = lVar11;
        (*pcVar17)(uVar13,lVar11,lVar3);
        func_0x000107c5ed88();
        uVar14 = uStack_c0;
        if ((uVar4 == uStack_c0) && (lVar16 == lStack_b8)) {
          func_0x000107c6142c(lVar2);
          lVar2 = lVar16;
LAB_101cae6ec:
          func_0x000107c6142c(lVar2);
          lVar16 = lStack_110;
          (*pcVar17)(lStack_110,uVar13,lVar3);
          puVar5 = puStack_f8;
          (*pcVar17)(puStack_f8,lVar16,lVar3);
          func_0x000101cb003c();
          if (puVar5 == (undefined *)0x0) {
            puStack_b0 = (undefined *)0x0;
            uStack_a8 = 0xe000000000000000;
            func_0x000107c602fc(0x40);
            func_0x000107c5fb78(0xd00000000000003e,0x800000010f009380);
            func_0x000107c5fb78(uVar14,lStack_b8);
            func_0x000107c6142c(uStack_a8);
            puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
            uVar7 = 0xd000000000000021;
            func_0x000107c5fadc(0xd000000000000021,0x800000010d9eeb10);
            func_0x000107c466bc(puVar6);
            func_0x000107c61170(uVar7);
            puVar5 = puVar6;
            func_0x000107c5ed2c(puVar6);
            func_0x000107c61170(puVar6);
            func_0x000107c3fef8(uStack_108);
          }
          else {
            puStack_b0 = (undefined *)0x0;
            uStack_a8 = 0xe000000000000000;
            func_0x000107c602fc(0x44);
            func_0x000107c5fb78(0xd000000000000042,0x800000010f009430);
            func_0x000107c5fb78(uVar14,lStack_b8);
            func_0x000107c6142c(uStack_a8);
            func_0x000107c3fefc(uStack_108);
          }
          lVar2 = lStack_c8;
          func_0x000107c61170(puVar5);
          pcVar8 = "observeSessionContentURLs(for:promise:)";
          func_0x0001000c10c0("observeSessionContentURLs(for:promise:)");
          func_0x000107c61180();
          puVar5 = &UNK_110466588;
          func_0x000107c613fc(&UNK_110466588,0x20,7);
          lVar16 = lStack_f0;
          uVar7 = uStack_100;
          *(undefined8 *)(puVar5 + 0x10) = uStack_100;
          *(long *)(puVar5 + 0x18) = lStack_f0;
          pcStack_90 = FUN_101cb159c;
          puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a8 = 0x42000000;
          puStack_a0 = &UNK_1000f6b44;
          puStack_98 = &UNK_1104665a0;
          ppuVar9 = &puStack_b0;
          puStack_88 = puVar5;
          func_0x000107c60bc4(ppuVar9);
          puVar5 = puStack_88;
          func_0x000107c61174(uVar7);
          func_0x000107c61174();
          func_0x000107c61574(puVar5);
          func_0x000107c4e524(pcVar8);
          func_0x000107c60bd0(ppuVar9);
          func_0x000107c615e8(pcVar8);
          puVar10 = *(ulong **)(lVar16 + _DAT_112e13330);
          pcVar17 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar10) + 0x60);
          func_0x000107c61174();
          puVar5 = puStack_f8;
          (*pcVar17)(puStack_f8);
          func_0x000107c61170(puVar10);
          puStack_b0 = (undefined *)0x0;
          uStack_a8 = 0xe000000000000000;
          func_0x000107c602fc(0x39);
          func_0x000107c5fb78(0xd00000000000001b,0x800000010f0093f0);
          uVar7 = 0x112d4b608;
          FUN_101cb15f4(0x112d4b608,PTR___s10Foundation3URLVMa_110350988,
                        PTR___s10Foundation3URLVs23CustomStringConvertibleAAMc_1103509c0);
          func_0x000107c6057c(lVar3,uVar7);
          func_0x000107c5fb78();
          func_0x000107c6142c(uVar7);
          func_0x000107c5fb78(0xd00000000000001a,0x800000010f009410);
          func_0x000107c5fb78(0x65736c6166,0xe500000000000000);
          func_0x000107c6142c(uStack_a8);
          iVar1 = 2;
          func_0x000100029b9c(2,0x12,0,0);
          if (iVar1 != 0) {
            FUN_101cb04e8(puVar5);
            func_0x000107c61170(lVar16);
            (**(code **)(lVar2 + 8))(puVar5,lVar3);
            return;
          }
          (**(code **)(lVar2 + 8))(puVar5,lVar3);
          func_0x000107c61170(lVar16);
          return;
        }
        func_0x000107c605b8();
        func_0x000107c6142c(lVar16);
        lVar16 = lStack_c8;
        uVar14 = uStack_c0;
        if ((uVar4 & 1) != 0) goto LAB_101cae6ec;
        uVar12 = uVar12 + 1;
        (**(code **)(lStack_c8 + 8))(uVar13,lVar3);
      } while (uStack_d0 != uVar12);
    }
    func_0x000107c6142c(lVar2);
    func_0x000107c61170(lStack_f0);
  }
  return;
}



/* Entry: 101caefdc; end: 101caf037; -[_TtC36LockedCameraCaptureStorageManagement33LockedCameraCaptureStorageManager init] */

void FUN_101caefdc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LockedCameraCaptureStorageManagement.LockedCameraCaptureStorageManager",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101caf008);
  (*pcVar1)();
}



/* Entry: 101caf038; end: 101caf0cf; -[_TtC36LockedCameraCaptureStorageManagement33LockedCameraCaptureStorageManager .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101caf054: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101caf074: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101caf0a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101caf078) */
/* WARNING: Removing unreachable block (ram,0x000101caf058) */
/* WARNING: Removing unreachable block (ram,0x000101caf0a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101caf038(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e13330));
  return;
}



/* Entry: 101caf0d0; end: 101caf0ef;  */

void FUN_101caf0d0(void)

{
  func_0x000107c61168(&PTR_PTR_1128002f8);
  return;
}



/* Entry: 101caf0f0; end: 101caf30f;  */

ulong FUN_101caf0f0(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101caf218);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_101ca8e94(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101caf214);
      (*pcVar1)();
    }
    func_0x000101caf218(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 101caf310; end: 101caf3cb;  */

undefined8 FUN_101caf310(long param_1,ulong param_2)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *unaff_x20;
  func_0x000107c61434(lVar2);
  func_0x000100029284();
  func_0x000107c6142c(lVar2);
  if ((param_2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x000101caf51c();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_1 * 0x10 + 8));
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + param_1 * 8);
    func_0x000101caf928(param_1,lVar2);
    *unaff_x20 = lVar2;
  }
  return uVar3;
}



/* Entry: 101caf3cc; end: 101caf68b;  */

void FUN_101caf3cc(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101caf4a4);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_101caf68c(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101caf46c);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000101caf51c();
    lVar6 = *unaff_x20;
    goto joined_r0x000101caf4b8;
  }
  lVar6 = *unaff_x20;
joined_r0x000101caf4b8:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101caf51c);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 101caf68c; end: 101cafad7;  */

void FUN_101caf68c(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112e133a8;
  func_0x0001000285a8(0x112e133a8,&UNK_10d9eeb60);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_101caf8f4:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101caf924);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_101caf8f4;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101caf928);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 101cafad8; end: 101cafbd7;  */

undefined * FUN_101cafad8(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112e133a8,&UNK_10d9eeb60);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101cafbd4);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101cafbd8);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 101cafbd8; end: 101cb02ab;  */

undefined * FUN_101cafbd8(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  ulong uVar12;
  code *pcStack_a0;
  undefined4 uStack_94;
  long lStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar6 = (long)&pcStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  puStack_80 = puVar2;
  func_0x000107c415e0();
  func_0x000107c61180();
  uStack_70 = 0xd000000000000021;
  uStack_68 = 0x800000010f009480;
  lVar3 = 0;
  func_0x000107c5ed68();
  lVar8 = *(long *)(lVar3 + -8);
  lVar9 = *(long *)(lVar8 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar12 = lVar9 + 0xfU & 0xfffffffffffffff0;
  lVar7 = lVar6 - uVar12;
  uStack_94 = *(undefined4 *)
               PTR___s10Foundation3URLV13DirectoryHintO13inferFromPathyA2EmFWC_110345368;
  pcStack_88 = *(code **)(lVar8 + 0x68);
  lVar4 = lVar7;
  (*pcStack_88)(lVar7,uStack_94,lVar3);
  func_0x000100e8b654();
  lStack_90 = lVar4;
  uStack_78 = param_1;
  func_0x000107c5edd8(lVar6,&uStack_70,lVar7,PTR___sSSN_11034da80);
  pcStack_a0 = *(code **)(lVar8 + 8);
  lVar4 = lVar7;
  lVar8 = lVar3;
  (*pcStack_a0)(lVar7,lVar3);
  func_0x000107c5edc4();
  func_0x000107c5fadc();
  func_0x000107c6142c(lVar8);
  pcVar11 = *(code **)(lVar10 + 8);
  (*pcVar11)(lVar6,lVar1);
  puVar5 = puVar2;
  func_0x000107c43418();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(lVar4);
  if (((ulong)puVar5 & 1) == 0) {
    puVar2 = puStack_80;
    func_0x000107c415e0();
    func_0x000107c61180();
    uStack_70 = 0xd000000000000033;
    uStack_68 = 0x800000010f0094b0;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar8 = lVar7 - uVar12;
    (*pcStack_88)(lVar8,uStack_94,lVar3);
    func_0x000107c5edd8(lVar6,&uStack_70,lVar8,PTR___sSSN_11034da80,lStack_90);
    lVar4 = lVar3;
    (*pcStack_a0)(lVar8,lVar3);
    func_0x000107c5edc4();
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar4);
    (*pcVar11)(lVar6,lVar1);
    puVar5 = puVar2;
    func_0x000107c43418();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(lVar8);
    if (((ulong)puVar5 & 1) == 0) {
      puVar2 = puStack_80;
      func_0x000107c415e0();
      func_0x000107c61180();
      uStack_70 = 0xd000000000000027;
      uStack_68 = 0x800000010f0094f0;
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      uVar12 = lVar9 + 0xfU & 0xfffffffffffffff0;
      lVar8 = lVar7 - uVar12;
      (*pcStack_88)(lVar8,uStack_94,lVar3);
      func_0x000107c5edd8(lVar6,&uStack_70,lVar8,PTR___sSSN_11034da80,lStack_90);
      lVar4 = lVar3;
      (*pcStack_a0)(lVar8,lVar3);
      func_0x000107c5edc4();
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar4);
      (*pcVar11)(lVar6,lVar1);
      puVar5 = puVar2;
      func_0x000107c43418();
      func_0x000107c61170(puVar2);
      func_0x000107c61170(lVar8);
      if (((ulong)puVar5 & 1) == 0) {
        puVar2 = puStack_80;
        func_0x000107c415e0(puStack_80);
        func_0x000107c61180();
        uStack_70 = 0xd000000000000027;
        uStack_68 = 0x800000010f009520;
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar7 = lVar7 - uVar12;
        (*pcStack_88)(lVar7,uStack_94,lVar3);
        func_0x000107c5edd8(lVar6,&uStack_70,lVar7,PTR___sSSN_11034da80,lStack_90);
        (*pcStack_a0)(lVar7,lVar3);
        func_0x000107c5edc4();
        func_0x000107c5fadc();
        func_0x000107c6142c(lVar3);
        (*pcVar11)(lVar6,lVar1);
        puVar5 = puVar2;
        func_0x000107c43418(puVar2);
        func_0x000107c61170(puVar2);
        func_0x000107c61170(lVar7);
        return puVar5;
      }
    }
  }
  return (undefined *)0x1;
}



/* Entry: 101cb02ac; end: 101cb04e7;  */

void FUN_101cb02ac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long extraout_x8;
  long lVar8;
  long lVar9;
  code *pcVar10;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_68 = (undefined *)0x0;
  uStack_60 = 0xe000000000000000;
  func_0x000107c602fc(0x17);
  func_0x000107c6142c(uStack_60);
  puStack_68 = (undefined *)0xd000000000000015;
  uStack_60 = 0x800000010f009550;
  uVar1 = 0;
  func_0x000107c5ede0();
  uVar2 = 0x112d4b608;
  FUN_101cb15f4(0x112d4b608,PTR___s10Foundation3URLVMa_110350988,
                PTR___s10Foundation3URLVs23CustomStringConvertibleAAMc_1103509c0);
  uVar7 = uVar2;
  func_0x000107c6057c(uVar1,uVar2);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar7);
  func_0x000107c6142c(uStack_60);
  puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c5ed90();
  puStack_68 = (undefined *)0x0;
  puVar5 = puVar3;
  func_0x000107c4ff50();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  puVar4 = puStack_68;
  uVar7 = uVar2;
  if ((int)puVar5 == 0) {
    puVar3 = puStack_68;
    func_0x000107c61174(puStack_68);
    func_0x000107c5ed30();
    func_0x000107c61170(puVar3);
    func_0x000107c61654();
    puStack_68 = (undefined *)0x0;
    uStack_60 = 0xe000000000000000;
    func_0x000107c602fc(0x29);
    func_0x000107c6142c(uStack_60);
    puStack_68 = (undefined *)0xd000000000000027;
    uStack_60 = 0x800000010f009570;
    func_0x000107c6057c(uVar1);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar7);
    func_0x000107c614ac(puVar4);
    puVar5 = puVar4;
  }
  else {
    puStack_68 = (undefined *)0x0;
    uStack_60 = 0xe000000000000000;
    func_0x000107c61174(puVar4);
    func_0x000107c602fc(0x2d);
    func_0x000107c6142c(uStack_60);
    puStack_68 = (undefined *)0xd00000000000002b;
    uStack_60 = 0x800000010f0095a0;
    func_0x000107c6057c(uVar1);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar7);
    puVar4 = puVar3;
  }
  func_0x000107c6142c(uStack_60);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
  pcStack_78 = FUN_101cb04e8;
  lVar6 = 0;
  puStack_b0 = puVar5;
  uStack_a8 = uVar2;
  uStack_a0 = uVar1;
  puStack_98 = puVar4;
  ppuStack_90 = &puStack_68;
  uStack_88 = uVar7;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)&puStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5ed9c(lVar8,0xd000000000000021,0x800000010f009480);
  FUN_101cb02ac(lVar8);
  pcVar10 = *(code **)(lVar9 + 8);
  (*pcVar10)(lVar8,lVar6);
  func_0x000107c5ed9c(lVar8,0xd000000000000033,0x800000010f0094b0);
  FUN_101cb02ac(lVar8);
  (*pcVar10)(lVar8,lVar6);
  func_0x000107c5ed9c(lVar8,0xd000000000000027,0x800000010f0094f0);
  FUN_101cb02ac(lVar8);
  (*pcVar10)(lVar8,lVar6);
  func_0x000107c5ed9c(lVar8,0xd000000000000027,0x800000010f009520);
  FUN_101cb02ac(lVar8);
  (*pcVar10)(lVar8,lVar6);
  return;
}



/* Entry: 101cb04e8; end: 101cb0623;  */

void FUN_101cb04e8(void)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  code *pcVar4;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5ed9c(puVar2,0xd000000000000021,0x800000010f009480);
  FUN_101cb02ac(puVar2);
  pcVar4 = *(code **)(lVar3 + 8);
  (*pcVar4)(puVar2,lVar1);
  func_0x000107c5ed9c(puVar2,0xd000000000000033,0x800000010f0094b0);
  FUN_101cb02ac(puVar2);
  (*pcVar4)(puVar2,lVar1);
  func_0x000107c5ed9c(puVar2,0xd000000000000027,0x800000010f0094f0);
  FUN_101cb02ac(puVar2);
  (*pcVar4)(puVar2,lVar1);
  func_0x000107c5ed9c(puVar2,0xd000000000000027,0x800000010f009520);
  FUN_101cb02ac(puVar2);
  (*pcVar4)(puVar2,lVar1);
  return;
}



/* Entry: 101cb0624; end: 101cb0a13;  */

void FUN_101cb0624(undefined *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  undefined *puVar13;
  code *unaff_x20;
  code *pcVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  code *unaff_x26;
  long lVar18;
  long alStack_150 [9];
  long alStack_108 [11];
  long alStack_b0 [2];
  undefined1 auStack_a0 [16];
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = 0x112d373d8;
  puVar4 = &UNK_10d9014c0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar14 = (code *)(auStack_a0 + -extraout_x8_00);
  puVar5 = (undefined *)0x0;
  func_0x000107c5eea4();
  lVar18 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  pcVar17 = pcVar14 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = (long)pcVar17 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar16 - extraout_x12_00;
  puVar13 = param_1;
  FUN_101cafbd8();
  if (((ulong)puVar13 & 1) == 0) {
    func_0x000107c5eea0(lVar15);
    func_0x000107c5ee6c(lVar16,0xc072c00000000000);
    puVar13 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c61168();
    func_0x000107c415e0();
    func_0x000107c61180();
    puVar6 = puVar13;
    func_0x000107c5edc4();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar4);
    pcStack_90 = (code *)0x0;
    param_1 = puVar13;
    func_0x000107c3e388();
    func_0x000107c61180();
    func_0x000107c61170(puVar13);
    func_0x000107c61170(puVar6);
    unaff_x26 = pcStack_90;
    puVar4 = puVar5;
    if (param_1 == (undefined *)0x0) {
      pcVar17 = pcStack_90;
      func_0x000107c61174(pcStack_90);
      pcVar14 = unaff_x26;
      func_0x000107c5ed30();
      func_0x000107c61170(pcVar17);
      func_0x000107c61654();
      unaff_x20 = *(code **)(lVar18 + 8);
      (*unaff_x20)(lVar16,puVar5);
      (*unaff_x20)(lVar15);
      func_0x000107c614ac(pcVar14);
      pcVar17 = pcVar14;
    }
    else {
      uVar7 = 0;
      FUN_101a64068();
      uVar8 = 0x112defdc0;
      FUN_101cb15f4(0x112defdc0,FUN_101a64068,&UNK_10d9c6700);
      puVar13 = PTR___sypN_11034f1a8;
      puVar6 = param_1;
      func_0x000107c5f9e8(param_1,uVar7,PTR___sypN_11034f1a8 + 8,uVar8);
      func_0x000107c61174(unaff_x26);
      func_0x000107c61170(param_1);
      if (*(long *)(puVar6 + 0x10) == 0) {
LAB_101cb0894:
        uStack_88 = 0;
        pcStack_90 = (code *)0x0;
        lStack_78 = 0;
        uStack_80 = 0;
      }
      else {
        param_1 = *(undefined **)PTR__NSFileCreationDate_110345410;
        func_0x000107c61434(puVar6);
        puVar9 = param_1;
        FUN_101aae36c(param_1);
        if ((uVar7 & 1) == 0) {
          func_0x000107c6142c(puVar6);
          goto LAB_101cb0894;
        }
        func_0x0001000bb420(*(long *)(puVar6 + 0x38) + (long)puVar9 * 0x20,&pcStack_90);
        func_0x000107c6142c(puVar6);
      }
      func_0x000107c6142c(puVar6);
      if (lStack_78 == 0) {
        unaff_x20 = *(code **)(lVar18 + 8);
        (*unaff_x20)(lVar16,puVar5);
        (*unaff_x20)(lVar15,puVar5);
        func_0x000101cb1634(&pcStack_90,0x112d387f8,&UNK_10d902650);
        (**(code **)(lVar18 + 0x38))(pcVar14,1,1,puVar5);
      }
      else {
        pcVar10 = pcVar14;
        func_0x000107c6147c(pcVar14,&pcStack_90,puVar13 + 8,puVar5,6);
        (**(code **)(lVar18 + 0x38))(pcVar14,(uint)pcVar10 ^ 1,1,puVar5);
        pcVar10 = pcVar14;
        (**(code **)(lVar18 + 0x30))(pcVar14,1,puVar5);
        if ((int)pcVar10 != 1) {
          (**(code **)(lVar18 + 0x20))(pcVar17,pcVar14,puVar5);
          unaff_x20 = pcVar17;
          func_0x000107c5ee78(pcVar17,lVar16);
          pcVar14 = *(code **)(lVar18 + 8);
          (*pcVar14)(pcVar17,puVar5);
          (*pcVar14)(lVar16,puVar5);
          (*pcVar14)(lVar15);
          if (((ulong)unaff_x20 & 1) != 0) {
            uVar7 = 1;
            goto LAB_101cb0980;
          }
          goto LAB_101cb097c;
        }
        unaff_x20 = *(code **)(lVar18 + 8);
        (*unaff_x20)(lVar16,puVar5);
        (*unaff_x20)(lVar15,puVar5);
      }
      puVar4 = (undefined *)0x0;
      func_0x000101cb1634(pcVar14,0x112d373d8,&UNK_10d9014c0);
    }
  }
LAB_101cb097c:
  uVar7 = 0;
LAB_101cb0980:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  *(code **)(lVar15 + -0x50) = unaff_x26;
  *(undefined **)(lVar15 + -0x48) = param_1;
  *(code **)(lVar15 + -0x40) = pcVar17;
  *(long *)(lVar15 + -0x38) = lVar16;
  *(long *)(lVar15 + -0x30) = lVar15;
  *(code **)(lVar15 + -0x28) = pcVar14;
  *(code **)(lVar15 + -0x20) = unaff_x20;
  *(undefined **)(lVar15 + -0x18) = puVar5;
  *(undefined1 **)(lVar15 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(lVar15 + -8) = FUN_101cb0a14;
  *(undefined8 *)(lVar15 + -0x60) = 0;
  *(undefined8 *)(lVar15 + -0x58) = 0xe000000000000000;
  func_0x000107c602fc(0x39);
  *(undefined8 *)(lVar15 + -0x60) = *(undefined8 *)(lVar15 + -0x60);
  *(undefined8 *)(lVar15 + -0x58) = *(undefined8 *)(lVar15 + -0x58);
  func_0x000107c5fb78(0xd00000000000001b,0x800000010f0093f0);
  uVar11 = 0;
  func_0x000107c5ede0(0);
  uVar8 = 0x112d4b608;
  FUN_101cb15f4(0x112d4b608,PTR___s10Foundation3URLVMa_110350988,
                PTR___s10Foundation3URLVs23CustomStringConvertibleAAMc_1103509c0);
  uVar12 = uVar8;
  func_0x000107c6057c(uVar11,uVar8);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar12);
  func_0x000107c5fb78(0xd00000000000001a,0x800000010f009410);
  bVar2 = ((ulong)puVar4 & 1) == 0;
  uVar12 = 0x65757274;
  if (bVar2) {
    uVar12 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar2) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar12,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(*(undefined8 *)(lVar15 + -0x58));
  iVar3 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (((iVar3 != 0) && (FUN_101cb04e8(uVar7), ((ulong)puVar4 & 1) != 0)) &&
     (FUN_101cb0624(), (uVar7 & 1) != 0)) {
    *(undefined8 *)(lVar15 + -0x60) = 0;
    *(undefined8 *)(lVar15 + -0x58) = 0xe000000000000000;
    func_0x000107c602fc(0x2f);
    func_0x000107c6142c(*(undefined8 *)(lVar15 + -0x58));
    *(undefined8 *)(lVar15 + -0x60) = 0xd00000000000002d;
    *(undefined8 *)(lVar15 + -0x58) = 0x800000010f009aa0;
    func_0x000107c6057c(uVar11,uVar8);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar8);
    func_0x000107c6142c(*(undefined8 *)(lVar15 + -0x58));
    *(undefined8 *)(lVar15 + -0x50) = *(undefined8 *)(lVar15 + -0x50);
    *(undefined8 *)(lVar15 + -0x48) = *(undefined8 *)(lVar15 + -0x48);
    *(undefined8 *)(lVar15 + -0x40) = *(undefined8 *)(lVar15 + -0x40);
    *(undefined8 *)(lVar15 + -0x38) = *(undefined8 *)(lVar15 + -0x38);
    *(undefined8 *)(lVar15 + -0x30) = *(undefined8 *)(lVar15 + -0x30);
    *(undefined8 *)(lVar15 + -0x28) = *(undefined8 *)(lVar15 + -0x28);
    *(undefined8 *)(lVar15 + -0x20) = *(undefined8 *)(lVar15 + -0x20);
    *(undefined8 *)(lVar15 + -0x18) = *(undefined8 *)(lVar15 + -0x18);
    *(undefined8 *)(lVar15 + -0x10) = *(undefined8 *)(lVar15 + -0x10);
    *(undefined8 *)(lVar15 + -8) = *(undefined8 *)(lVar15 + -8);
    *(undefined8 *)(lVar15 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined8 *)(lVar15 + -0x68) = 0;
    *(undefined8 *)(lVar15 + -0x60) = 0xe000000000000000;
    func_0x000107c602fc(0x17);
    func_0x000107c6142c(*(undefined8 *)(lVar15 + -0x60));
    *(undefined8 *)(lVar15 + -0x68) = 0xd000000000000015;
    *(undefined8 *)(lVar15 + -0x60) = 0x800000010f009550;
    uVar11 = 0;
    func_0x000107c5ede0();
    uVar8 = 0x112d4b608;
    FUN_101cb15f4(0x112d4b608,PTR___s10Foundation3URLVMa_110350988,
                  PTR___s10Foundation3URLVs23CustomStringConvertibleAAMc_1103509c0);
    uVar12 = uVar8;
    func_0x000107c6057c(uVar11,uVar8);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar12);
    func_0x000107c6142c(*(undefined8 *)(lVar15 + -0x60));
    puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c61168();
    func_0x000107c415e0();
    func_0x000107c61180();
    puVar13 = puVar4;
    func_0x000107c5ed90();
    *(undefined8 *)(lVar15 + -0x68) = 0;
    puVar5 = puVar4;
    func_0x000107c4ff50();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar13);
    puVar13 = *(undefined **)(lVar15 + -0x68);
    uVar12 = uVar8;
    if ((int)puVar5 == 0) {
      puVar4 = puVar13;
      func_0x000107c61174(puVar13);
      func_0x000107c5ed30();
      func_0x000107c61170(puVar4);
      func_0x000107c61654();
      *(undefined8 *)(lVar15 + -0x68) = 0;
      *(undefined8 *)(lVar15 + -0x60) = 0xe000000000000000;
      func_0x000107c602fc(0x29);
      func_0x000107c6142c(*(undefined8 *)(lVar15 + -0x60));
      *(undefined8 *)(lVar15 + -0x68) = 0xd000000000000027;
      *(undefined8 *)(lVar15 + -0x60) = 0x800000010f009570;
      func_0x000107c6057c(uVar11);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar12);
      func_0x000107c614ac(puVar13);
      puVar5 = puVar13;
    }
    else {
      *(undefined8 *)(lVar15 + -0x68) = 0;
      *(undefined8 *)(lVar15 + -0x60) = 0xe000000000000000;
      func_0x000107c61174(puVar13);
      func_0x000107c602fc(0x2d);
      func_0x000107c6142c(*(undefined8 *)(lVar15 + -0x60));
      *(undefined8 *)(lVar15 + -0x68) = 0xd00000000000002b;
      *(undefined8 *)(lVar15 + -0x60) = 0x800000010f0095a0;
      func_0x000107c6057c(uVar11);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar12);
      puVar13 = puVar4;
    }
    func_0x000107c6142c(*(undefined8 *)(lVar15 + -0x60));
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(lVar15 + -0x58)) {
      return;
    }
    func_0x000107c60e78();
    *(undefined **)(lVar15 + -0xb0) = puVar5;
    *(undefined8 *)(lVar15 + -0xa8) = uVar8;
    *(undefined8 *)(lVar15 + -0xa0) = uVar11;
    *(undefined **)(lVar15 + -0x98) = puVar13;
    *(long *)(lVar15 + -0x90) = lVar15 + -0x68;
    *(undefined8 *)(lVar15 + -0x88) = uVar12;
    *(long *)(lVar15 + -0x80) = lVar15 + -0x10;
    *(code **)(lVar15 + -0x78) = FUN_101cb04e8;
    lVar16 = 0;
    func_0x000107c5ede0();
    lVar18 = *(long *)(lVar16 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
    lVar15 = (lVar15 + -0xb0) - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
    func_0x000107c5ed9c(lVar15,0xd000000000000021,0x800000010f009480);
    FUN_101cb02ac(lVar15);
    pcVar14 = *(code **)(lVar18 + 8);
    (*pcVar14)(lVar15,lVar16);
    func_0x000107c5ed9c(lVar15,0xd000000000000033,0x800000010f0094b0);
    FUN_101cb02ac(lVar15);
    (*pcVar14)(lVar15,lVar16);
    func_0x000107c5ed9c(lVar15,0xd000000000000027,0x800000010f0094f0);
    FUN_101cb02ac(lVar15);
    (*pcVar14)(lVar15,lVar16);
    func_0x000107c5ed9c(lVar15,0xd000000000000027,0x800000010f009520);
    FUN_101cb02ac(lVar15);
    (*pcVar14)(lVar15,lVar16);
    return;
  }
  return;
}



/* Entry: 101cb0a14; end: 101cb0bf7;  */

void FUN_101cb0a14(ulong param_1,ulong param_2)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long extraout_x8;
  long lVar11;
  long lVar12;
  code *pcVar13;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uStack_60 = 0;
  lStack_58 = 0xe000000000000000;
  func_0x000107c602fc(0x39);
  func_0x000107c5fb78(0xd00000000000001b,0x800000010f0093f0);
  uVar8 = 0;
  func_0x000107c5ede0(0);
  uVar9 = 0x112d4b608;
  FUN_101cb15f4(0x112d4b608,PTR___s10Foundation3URLVMa_110350988,
                PTR___s10Foundation3URLVs23CustomStringConvertibleAAMc_1103509c0);
  uVar10 = uVar9;
  func_0x000107c6057c(uVar8,uVar9);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar10);
  func_0x000107c5fb78(0xd00000000000001a,0x800000010f009410);
  bVar2 = (param_2 & 1) == 0;
  uVar10 = 0x65757274;
  if (bVar2) {
    uVar10 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar2) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar10,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(lStack_58);
  iVar3 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (((iVar3 != 0) && (FUN_101cb04e8(param_1), (param_2 & 1) != 0)) &&
     (FUN_101cb0624(), (param_1 & 1) != 0)) {
    uStack_60 = 0;
    lStack_58 = 0xe000000000000000;
    func_0x000107c602fc(0x2f);
    func_0x000107c6142c(lStack_58);
    uStack_60 = 0xd00000000000002d;
    lStack_58 = 0x800000010f009aa0;
    func_0x000107c6057c(uVar8,uVar9);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar9);
    func_0x000107c6142c(lStack_58);
    lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_68 = (undefined *)0x0;
    uStack_60 = 0xe000000000000000;
    func_0x000107c602fc(0x17);
    func_0x000107c6142c(uStack_60);
    puStack_68 = (undefined *)0xd000000000000015;
    uStack_60 = 0x800000010f009550;
    uVar8 = 0;
    func_0x000107c5ede0();
    uVar9 = 0x112d4b608;
    FUN_101cb15f4(0x112d4b608,PTR___s10Foundation3URLVMa_110350988,
                  PTR___s10Foundation3URLVs23CustomStringConvertibleAAMc_1103509c0);
    uVar10 = uVar9;
    func_0x000107c6057c(uVar8,uVar9);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar10);
    func_0x000107c6142c(uStack_60);
    puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c61168();
    func_0x000107c415e0();
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c5ed90();
    puStack_68 = (undefined *)0x0;
    puVar6 = puVar4;
    func_0x000107c4ff50();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar5);
    puVar5 = puStack_68;
    uVar10 = uVar9;
    if ((int)puVar6 == 0) {
      puVar4 = puStack_68;
      func_0x000107c61174(puStack_68);
      func_0x000107c5ed30();
      func_0x000107c61170(puVar4);
      func_0x000107c61654();
      puStack_68 = (undefined *)0x0;
      uStack_60 = 0xe000000000000000;
      func_0x000107c602fc(0x29);
      func_0x000107c6142c(uStack_60);
      puStack_68 = (undefined *)0xd000000000000027;
      uStack_60 = 0x800000010f009570;
      func_0x000107c6057c(uVar8);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar10);
      func_0x000107c614ac(puVar5);
      puVar6 = puVar5;
    }
    else {
      puStack_68 = (undefined *)0x0;
      uStack_60 = 0xe000000000000000;
      func_0x000107c61174(puVar5);
      func_0x000107c602fc(0x2d);
      func_0x000107c6142c(uStack_60);
      puStack_68 = (undefined *)0xd00000000000002b;
      uStack_60 = 0x800000010f0095a0;
      func_0x000107c6057c(uVar8);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar10);
      puVar5 = puVar4;
    }
    func_0x000107c6142c(uStack_60);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    func_0x000107c60e78();
    pcStack_78 = FUN_101cb04e8;
    lVar7 = 0;
    puStack_b0 = puVar6;
    uStack_a8 = uVar9;
    uStack_a0 = uVar8;
    puStack_98 = puVar5;
    ppuStack_90 = &puStack_68;
    uStack_88 = uVar10;
    puStack_80 = &stack0xfffffffffffffff0;
    func_0x000107c5ede0();
    lVar12 = *(long *)(lVar7 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
    lVar11 = (long)&puStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
    func_0x000107c5ed9c(lVar11,0xd000000000000021,0x800000010f009480);
    FUN_101cb02ac(lVar11);
    pcVar13 = *(code **)(lVar12 + 8);
    (*pcVar13)(lVar11,lVar7);
    func_0x000107c5ed9c(lVar11,0xd000000000000033,0x800000010f0094b0);
    FUN_101cb02ac(lVar11);
    (*pcVar13)(lVar11,lVar7);
    func_0x000107c5ed9c(lVar11,0xd000000000000027,0x800000010f0094f0);
    FUN_101cb02ac(lVar11);
    (*pcVar13)(lVar11,lVar7);
    func_0x000107c5ed9c(lVar11,0xd000000000000027,0x800000010f009520);
    FUN_101cb02ac(lVar11);
    (*pcVar13)(lVar11,lVar7);
    return;
  }
  return;
}



/* Entry: 101cb0bf8; end: 101cb0d83;  */

/* WARNING: Possible PIC construction at 0x000101cb0d20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101cb0d24) */

void FUN_101cb0bf8(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar6 = &puStack_60;
  puVar1 = &UNK_110466808;
  func_0x000107c613fc(&UNK_110466808,0x18,7);
  *(ulong *)(puVar1 + 0x10) = param_2;
  uVar2 = param_2;
  func_0x000107c60bc4();
  FUN_101cab258();
  if ((uVar2 & 1) != 0) {
    puVar3 = (undefined *)0x2;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)puVar3 != 0) {
      FUN_101cab124();
      puVar4 = &UNK_110466470;
      func_0x000107c613fc(&UNK_110466470,0x18,7);
      func_0x000107c61614(puVar4 + 0x10,param_1);
      puVar5 = &UNK_110466830;
      func_0x000107c613fc(&UNK_110466830,0x28,7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      *(undefined8 *)(puVar5 + 0x18) = 0x101cb197c;
      *(undefined **)(puVar5 + 0x20) = puVar1;
      pcStack_40 = FUN_101cb18c0;
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0x42000000;
      puStack_50 = &UNK_1000f6b44;
      puStack_48 = &UNK_110466848;
      puStack_38 = puVar5;
      func_0x000107c60bc4(&puStack_60);
      puVar4 = puStack_38;
      func_0x000107c6157c(puVar1);
      func_0x000107c61574(puVar4);
      func_0x000107c4e524(puVar3);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61574(puVar1);
      goto code_r0x000107c61170;
    }
  }
  uVar7 = 0;
  func_0x0001039abe88(0);
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar7);
  (**(code **)(param_2 + 0x10))(param_2,puVar3);
  func_0x000107c61574(puVar1);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 101cb0d84; end: 101cb11ab;  */

/* WARNING: Possible PIC construction at 0x000101cb0e80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101cb0f50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101cb12ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101cb1364: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101cb1430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101cae25c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101cb14fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101cb1060: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101cb1000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101cb1054: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101cb1004) */
/* WARNING: Removing unreachable block (ram,0x000101cb1500) */
/* WARNING: Removing unreachable block (ram,0x000101cae260) */
/* WARNING: Removing unreachable block (ram,0x000101cb1434) */
/* WARNING: Removing unreachable block (ram,0x000101cb1508) */
/* WARNING: Removing unreachable block (ram,0x000101cb1368) */
/* WARNING: Removing unreachable block (ram,0x000101cb1510) */
/* WARNING: Removing unreachable block (ram,0x000101cb138c) */
/* WARNING: Removing unreachable block (ram,0x000101cb1474) */
/* WARNING: Removing unreachable block (ram,0x000101cb13dc) */
/* WARNING: Removing unreachable block (ram,0x000101cb12f0) */
/* WARNING: Removing unreachable block (ram,0x000101cb0f54) */
/* WARNING: Removing unreachable block (ram,0x000101cb0e84) */
/* WARNING: Removing unreachable block (ram,0x000101cb0f58) */
/* WARNING: Removing unreachable block (ram,0x000101cb0ebc) */
/* WARNING: Removing unreachable block (ram,0x000101cb1064) */
/* WARNING: Removing unreachable block (ram,0x000101cb106c) */
/* WARNING: Removing unreachable block (ram,0x000101cb1120) */
/* WARNING: Removing unreachable block (ram,0x000101cb107c) */
/* WARNING: Removing unreachable block (ram,0x000101cb1150) */
/* WARNING: Removing unreachable block (ram,0x000101cb10c8) */
/* WARNING: Removing unreachable block (ram,0x000101cb1114) */
/* WARNING: Removing unreachable block (ram,0x000101cb1118) */
/* WARNING: Removing unreachable block (ram,0x000101cb0f1c) */
/* WARNING: Removing unreachable block (ram,0x000101cb105c) */
/* WARNING: Removing unreachable block (ram,0x000101cb0f3c) */
/* WARNING: Removing unreachable block (ram,0x000101cb1058) */
/* WARNING: Removing unreachable block (ram,0x000101cb1168) */
/* WARNING: Removing unreachable block (ram,0x000101cb116c) */
/* WARNING: Removing unreachable block (ram,0x000101cb11a8) */
/* WARNING: Removing unreachable block (ram,0x000101cb151c) */
/* WARNING: Removing unreachable block (ram,0x000101cb1534) */
/* WARNING: Removing unreachable block (ram,0x000101cb1258) */
/* WARNING: Removing unreachable block (ram,0x000101cb1438) */
/* WARNING: Removing unreachable block (ram,0x000101cb1554) */
/* WARNING: Removing unreachable block (ram,0x000101cae1bc) */
/* WARNING: Removing unreachable block (ram,0x000101cae2fc) */
/* WARNING: Removing unreachable block (ram,0x000101cae204) */
/* WARNING: Removing unreachable block (ram,0x000101cb1450) */
/* WARNING: Removing unreachable block (ram,0x000101cb12c0) */
/* WARNING: Removing unreachable block (ram,0x000101cb1184) */

void FUN_101cb0d84(void)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = 0x112d373d8;
  puVar2 = &UNK_10d9014c0;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c5eea4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c61168(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  func_0x000107c415e0();
  func_0x000107c61180();
  func_0x000107c5edc4();
  func_0x000107c5fadc();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar2);
  return;
}



/* Entry: 101cb11ac; end: 101cb1557;  */

/* WARNING: Possible PIC construction at 0x000101cb12ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101cb1364: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101cb1430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101cae25c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101cb14fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101cae260) */
/* WARNING: Removing unreachable block (ram,0x000101cb1434) */
/* WARNING: Removing unreachable block (ram,0x000101cb1368) */
/* WARNING: Removing unreachable block (ram,0x000101cb138c) */
/* WARNING: Removing unreachable block (ram,0x000101cb1474) */
/* WARNING: Removing unreachable block (ram,0x000101cb13dc) */
/* WARNING: Removing unreachable block (ram,0x000101cb12f0) */
/* WARNING: Removing unreachable block (ram,0x000101cb1500) */
/* WARNING: Removing unreachable block (ram,0x000101cb1508) */
/* WARNING: Removing unreachable block (ram,0x000101cb1510) */

void FUN_101cb11ac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  undefined1 *puVar8;
  undefined *unaff_x21;
  long lVar9;
  undefined *unaff_x24;
  long lVar10;
  undefined8 auStack_108 [2];
  undefined1 auStack_f8 [24];
  long alStack_e0 [8];
  undefined1 auStack_a0 [16];
  long alStack_90 [6];
  
  alStack_90[5] = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar4 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_a0 + lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = ((long)puVar8 - extraout_x12) - extraout_x12_00;
  if ((bRam0000000112e133a0 & 1) == 0) {
    bRam0000000112e133a0 = 1;
    unaff_x21 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c61168();
    puVar6 = unaff_x21;
    func_0x000107c415e0();
    func_0x000107c61180();
    puVar7 = puVar6;
    func_0x000107c3ac48();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    unaff_x24 = puVar7;
    func_0x000107c5fc54(puVar7,lVar5);
    func_0x000107c61170(puVar7);
    if (*(long *)(unaff_x24 + 0x10) != 0) {
      (**(code **)(lVar10 + 0x10))
                (puVar8,unaff_x24 +
                        ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff)),lVar5);
      goto code_r0x000107c6142c;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_90[5]) goto code_r0x000107c6142c;
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_90[5]) {
    return;
  }
  func_0x000107c60e78();
  lVar10 = *(long *)((long)alStack_90 + lVar4);
  uVar2 = *(undefined8 *)((long)alStack_90 + lVar4 + 8);
  uVar1 = *(undefined8 *)((long)alStack_90 + lVar4 + 0x10);
  uVar3 = *(undefined8 *)((long)alStack_90 + lVar4 + 0x18);
  *(undefined **)(lVar9 + -0x40) = unaff_x24;
  *(long *)(lVar9 + -0x38) = (long)puVar8 - extraout_x12;
  *(long *)(lVar9 + -0x30) = lVar9;
  *(undefined **)(lVar9 + -0x28) = unaff_x21;
  *(undefined1 **)(lVar9 + -0x20) = puVar8;
  *(long *)(lVar9 + -0x18) = lVar5;
  *(undefined1 **)(lVar9 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(lVar9 + -8) = FUN_101cb1558;
  func_0x000107c61428(lVar10 + 0x10,lVar9 + -0x58,0,0,uVar3);
  lVar10 = lVar10 + 0x10;
  func_0x000107c61618();
  if (lVar10 == 0) {
    return;
  }
  *(undefined8 *)(lVar9 + -0x68) = 0;
  *(undefined8 *)(lVar9 + -0x60) = 0xe000000000000000;
  func_0x000107c602fc(0x43);
  *(undefined8 *)(lVar9 + -0x68) = *(undefined8 *)(lVar9 + -0x68);
  *(undefined8 *)(lVar9 + -0x60) = *(undefined8 *)(lVar9 + -0x60);
  func_0x000107c5fb78(0xd000000000000041,0x800000010f0096f0);
  func_0x000107c5fb78(uVar2,uVar1);
  unaff_x24 = *(undefined **)(lVar9 + -0x60);
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(unaff_x24);
  return;
}



/* Entry: 101cb1558; end: 101cb159b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cb1558(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    func_0x000107c602fc(0x43);
    func_0x000107c5fb78(0xd000000000000041,0x800000010f0096f0);
    func_0x000107c5fb78(uVar1,uVar5);
    func_0x000107c6142c(0xe000000000000000);
    lVar3 = _DAT_112e13340;
    func_0x000107c498f8(*(undefined8 *)(lVar4 + _DAT_112e13340));
    uVar5 = *(undefined8 *)(lVar4 + lVar3);
    *(undefined8 *)(lVar4 + lVar3) = 0;
    func_0x000107c61170(uVar5);
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar5 = 0xd000000000000021;
    func_0x000107c5fadc(0xd000000000000021,0x800000010d9eeb10);
    func_0x000107c466bc(puVar6);
    func_0x000107c61170(uVar5);
    puVar7 = puVar6;
    func_0x000107c5ed2c(puVar6);
    func_0x000107c61170(puVar6);
    func_0x000107c3fef8(uVar2);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(puVar7);
  }
  return;
}



/* Entry: 101cb159c; end: 101cb15d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cb159c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c498f8(*(undefined8 *)(unaff_x20 + 0x10));
  lVar2 = _DAT_112e13348;
  func_0x000107c498f8(*(undefined8 *)(lVar1 + _DAT_112e13348));
  uVar3 = *(undefined8 *)(lVar1 + lVar2);
  *(undefined8 *)(lVar1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101cb15d4; end: 101cb15f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cb15d4(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar5 + 0x10,auStack_68,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    lVar6 = lVar2;
    func_0x000101caea84(lVar2,uVar1,uVar7);
    lVar4 = _DAT_112e13358;
    func_0x000107c4b940(*(undefined8 *)(lVar5 + _DAT_112e13358));
    lVar3 = _DAT_112e13350;
    if (lVar6 == 0) {
      func_0x000107c61428(lVar5 + _DAT_112e13350,auStack_80,0x21,0);
      func_0x000107c61434(uVar1);
      func_0x000107c61174(uVar7);
      uVar8 = *(undefined8 *)(lVar5 + lVar3);
      func_0x000107c61558(uVar8);
      uVar9 = *(undefined8 *)(lVar5 + lVar3);
      *(undefined8 *)(lVar5 + lVar3) = 0x8000000000000000;
      FUN_101caf3cc(uVar7,lVar2,uVar1,uVar8);
      func_0x000107c6142c(uVar1);
      *(undefined8 *)(lVar5 + lVar3) = uVar9;
      func_0x000107c614a8(auStack_80);
      func_0x000107c5d278(*(undefined8 *)(lVar5 + lVar4));
    }
    else {
      func_0x000107c61428(lVar5 + _DAT_112e13350,auStack_80,0x21,0);
      func_0x000107c61434(uVar1);
      func_0x000107c61174(lVar6);
      uVar7 = *(undefined8 *)(lVar5 + lVar3);
      func_0x000107c61558(uVar7);
      uVar8 = *(undefined8 *)(lVar5 + lVar3);
      *(undefined8 *)(lVar5 + lVar3) = 0x8000000000000000;
      FUN_101caf3cc(lVar6,lVar2,uVar1,uVar7);
      func_0x000107c6142c(uVar1);
      *(undefined8 *)(lVar5 + lVar3) = uVar8;
      func_0x000107c614a8(auStack_80);
      func_0x000107c5d278(*(undefined8 *)(lVar5 + lVar4));
      func_0x000107c61170(lVar6);
    }
    func_0x000107c61170(lVar5);
  }
  return;
}



/* Entry: 101cb15f4; end: 101cb1673;  */

void FUN_101cb15f4(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 101cb1674; end: 101cb16a7;  */

void FUN_101cb1674(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101cb16a8; end: 101cb16b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cb16a8(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long lVar13;
  long unaff_x20;
  undefined1 auStack_b0 [24];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(ulong *)(unaff_x20 + 0x18);
  uVar2 = *(ulong *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar1 + 0x10,auStack_68,0,0);
  uVar7 = lVar1 + 0x10;
  func_0x000107c61618();
  if (uVar7 == 0) {
    return;
  }
  uVar8 = uVar7;
  FUN_101cab258();
  lVar1 = _DAT_112e13358;
  if ((uVar8 & 1) != 0) {
    func_0x000107c4b940(*(undefined8 *)(uVar7 + _DAT_112e13358));
    lVar5 = _DAT_112e13350;
    func_0x000107c61428(uVar7 + _DAT_112e13350,auStack_b0,0,0);
    lVar13 = *(long *)(uVar7 + lVar5);
    if (*(long *)(lVar13 + 0x10) == 0) {
LAB_101cab99c:
      func_0x000107c5d278(*(undefined8 *)(uVar7 + lVar1));
    }
    else {
      func_0x000107c61438(lVar13,2);
      uVar8 = uVar3;
      uVar9 = uVar2;
      func_0x000100029284();
      if ((uVar9 & 1) == 0) {
        func_0x000107c61430(lVar13,2);
        goto LAB_101cab99c;
      }
      uVar9 = *(ulong *)(*(long *)(lVar13 + 0x38) + uVar8 * 8);
      func_0x000107c61174();
      func_0x000107c61430(lVar13,2);
      func_0x000107c61428(uVar7 + lVar5,&puStack_98,0x21,0);
      uVar8 = uVar3;
      FUN_101caf310(uVar3,uVar2);
      func_0x000107c614a8(&puStack_98);
      func_0x000107c61170(uVar8);
      func_0x000107c5d278(*(undefined8 *)(uVar7 + lVar1));
      if (uVar9 != 0) {
        func_0x000107c3fefc(uVar4);
        func_0x000107c61170(uVar7);
        uVar7 = uVar9;
        goto LAB_101cabb34;
      }
    }
    uVar8 = uVar3;
    FUN_101cad248(uVar3,uVar2);
    if (uVar8 != 0) {
      func_0x000107c3fefc(uVar4);
      func_0x000107c61170(uVar7);
      uVar7 = uVar8;
      goto LAB_101cabb34;
    }
    puStack_98 = (undefined *)0x0;
    uStack_90 = 0xe000000000000000;
    func_0x000107c602fc(0x3f);
    func_0x000107c5fb78(0xd000000000000026,0x800000010f009920);
    func_0x000107c5fb78(uVar3,uVar2);
    func_0x000107c5fb78(0xd000000000000017,0x800000010f009950);
    func_0x000107c6142c(uStack_90);
  }
  iVar6 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar6 != 0) {
    pcVar10 = "getCapturedMediaData(forCaptureSessionId:)";
    func_0x0001000c10c0("getCapturedMediaData(forCaptureSessionId:)");
    func_0x000107c61180();
    puVar11 = &UNK_1104666f0;
    func_0x000107c613fc(&UNK_1104666f0,0x30,7);
    *(ulong *)(puVar11 + 0x10) = uVar7;
    *(ulong *)(puVar11 + 0x18) = uVar3;
    *(ulong *)(puVar11 + 0x20) = uVar2;
    *(undefined8 *)(puVar11 + 0x28) = uVar4;
    pcStack_78 = FUN_101cb16b4;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_110466708;
    ppuVar12 = &puStack_98;
    puStack_70 = puVar11;
    func_0x000107c60bc4(ppuVar12);
    puVar11 = puStack_70;
    func_0x000107c61174(uVar7);
    func_0x000107c61434(uVar2);
    func_0x000107c61174(uVar4);
    func_0x000107c61574(puVar11);
    func_0x000107c4e524(pcVar10);
    func_0x000107c61170(uVar7);
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c615e8(pcVar10);
    return;
  }
LAB_101cabb34:
  func_0x000107c61170(uVar7);
  return;
}



/* Entry: 101cb16b4; end: 101cb16db;  */

void FUN_101cb16b4(void)

{
  long unaff_x20;
  
  FUN_101cadf28(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 101cb16dc; end: 101cb16e7;  */

void FUN_101cb16dc(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  code *pcVar8;
  code *pcVar9;
  long unaff_x20;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  ulong uStack_68;
  
  pcVar8 = *(code **)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar1 + -8);
  lVar14 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  uVar11 = (long)&lStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_101cab0bc();
  lVar2 = lVar14;
  FUN_101caa714();
  func_0x000107c61170(lVar14);
  lVar14 = *(long *)(lVar2 + 0x10);
  if (lVar14 == 0) {
    func_0x000107c6142c(lVar2);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uStack_68 = (ulong)*(byte *)(lVar13 + 0x50) + 0x20 &
                ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff);
    lVar12 = lVar2 + uStack_68;
    lVar10 = *(long *)(lVar13 + 0x48);
    pcVar9 = *(code **)(lVar13 + 0x10);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lStack_80 = lVar2;
    uStack_78 = uVar7;
    pcStack_70 = pcVar8;
    do {
      (*pcVar9)(uVar11,lVar12,lVar1);
      uVar3 = uVar11;
      FUN_101cafbd8();
      if ((uVar3 & 1) == 0) {
        (**(code **)(lVar13 + 8))(uVar11,lVar1);
      }
      else {
        puVar4 = puVar6;
        func_0x000107c61558();
        puVar5 = puVar6;
        if (((ulong)puVar4 & 1) == 0) {
          puVar5 = (undefined *)0x0;
          func_0x000101023b20(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
        }
        uVar3 = *(ulong *)(puVar5 + 0x10);
        puVar6 = puVar5;
        if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar3) {
          puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
          func_0x000101023b20(puVar6,uVar3 + 1,1,puVar5);
        }
        *(ulong *)(puVar6 + 0x10) = uVar3 + 1;
        (**(code **)(lVar13 + 0x20))(puVar6 + uVar3 * lVar10 + uStack_68,uVar11,lVar1);
      }
      lVar12 = lVar12 + lVar10;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    func_0x000107c6142c(lStack_80);
    pcVar8 = pcStack_70;
  }
  (*pcVar8)(puVar6);
  func_0x000107c6142c(puVar6);
  return;
}



/* Entry: 101cb16e8; end: 101cb185b;  */

/* WARNING: Possible PIC construction at 0x000101cb17f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101cb17fc) */

void FUN_101cb16e8(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar5 = &puStack_60;
  puVar1 = &UNK_110466790;
  func_0x000107c613fc(&UNK_110466790,0x18,7);
  *(undefined **)(puVar1 + 0x10) = param_2;
  puVar2 = param_2;
  func_0x000107c60bc4();
  FUN_101cab258();
  if (((ulong)puVar2 & 1) == 0) {
    uVar6 = 0;
    func_0x0001039abe88(0);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar6);
    (**(code **)(param_2 + 0x10))(param_2,puVar2);
    func_0x000107c61574(puVar1);
  }
  else {
    FUN_101cab124();
    puVar3 = &UNK_110466470;
    func_0x000107c613fc(&UNK_110466470,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,param_1);
    puVar4 = &UNK_1104667b8;
    func_0x000107c613fc(&UNK_1104667b8,0x28,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(code **)(puVar4 + 0x18) = FUN_101cb185c;
    *(undefined **)(puVar4 + 0x20) = puVar1;
    pcStack_40 = FUN_101cb187c;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_1104667d0;
    puStack_38 = puVar4;
    func_0x000107c60bc4(&puStack_60);
    puVar3 = puStack_38;
    func_0x000107c6157c(puVar1);
    func_0x000107c61574(puVar3);
    func_0x000107c4e524(puVar2);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61574(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 101cb185c; end: 101cb187b;  */

void FUN_101cb185c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101cac570(param_1,*(undefined8 *)(unaff_x20 + 0x10),&SUB_1039abe88);
  return;
}



/* Entry: 101cb187c; end: 101cb1887;  */

void FUN_101cb187c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    (*pcVar1)(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  else {
    lVar3 = lVar2;
    func_0x000101cad450();
    (*pcVar1)();
    func_0x000107c61170(lVar2);
    func_0x000107c6142c(lVar3);
  }
  return;
}



/* Entry: 101cb1888; end: 101cb18bf;  */

void FUN_101cb1888(code *param_1)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101cb18c0; end: 101cb18cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cb18c0(void)

{
  undefined8 uVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long extraout_x8;
  ulong uVar12;
  long extraout_x12;
  long extraout_x12_00;
  long lVar13;
  long unaff_x20;
  code *pcVar14;
  undefined1 *puVar15;
  ulong uVar16;
  undefined1 auStack_f0 [8];
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  char *pcStack_c8;
  undefined *puStack_c0;
  code *pcStack_b8;
  long lStack_b0;
  char *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar13 = *(long *)(unaff_x20 + 0x10);
  pcVar14 = *(code **)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar4 = 0;
  func_0x000107c5ede0();
  lStack_98 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_98 + 0x40));
  puVar15 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar16 = (long)puVar15 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c61428(lVar13 + 0x10,auStack_78,0,0);
  lVar13 = lVar13 + 0x10;
  func_0x000107c61618();
  if (lVar13 == 0) {
    (*pcVar14)(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  else {
    lStack_e0 = lVar13;
    uStack_d8 = uVar11;
    pcStack_d0 = pcVar14;
    FUN_101cab0bc();
    lVar5 = lVar13;
    FUN_101caa714();
    func_0x000107c61170(lVar13);
    lVar13 = *(long *)(lVar5 + 0x10);
    lStack_e8 = lVar5;
    if (lVar13 == 0) {
      puStack_c0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puVar8 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x000107c61168();
      pcStack_a8 = "com.apple.SecureCapture";
      lVar5 = lVar5 + ((ulong)*(byte *)(lStack_98 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(lStack_98 + 0x50) ^ 0xffffffffffffffff));
      lStack_b0 = *(long *)(lStack_98 + 0x48);
      pcStack_b8 = *(code **)(lStack_98 + 0x10);
      pcStack_c8 = "uredMedia] found ";
      puStack_c0 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puStack_a0 = puVar8;
      do {
        (*pcStack_b8)(uVar16 - extraout_x12_00,lVar5,lVar4);
        lVar2 = lStack_98;
        (**(code **)(lStack_98 + 0x20))(uVar16,uVar16 - extraout_x12_00,lVar4);
        uVar9 = (ulong)pcStack_a8 | 0x8000000000000000;
        func_0x000107c5ed9c(puVar15,0xd000000000000016,uVar9);
        puVar8 = puStack_a0;
        func_0x000107c415e0();
        func_0x000107c61180();
        puVar7 = puVar8;
        func_0x000107c5edc4();
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar9);
        puVar6 = puVar8;
        func_0x000107c43418();
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar7);
        pcVar14 = *(code **)(lVar2 + 8);
        (*pcVar14)(puVar15,lVar4);
        if (((((ulong)puVar6 & 1) == 0) && (uVar9 = uVar16, FUN_101cb0d84(), (uVar9 & 1) == 0)) &&
           (uVar9 = uVar16, func_0x000101cb003c(), uVar9 != 0)) {
          uStack_88 = 0;
          uStack_80 = 0xe000000000000000;
          func_0x000107c602fc(0x43);
          uVar10 = (ulong)pcStack_c8 | 0x8000000000000000;
          func_0x000107c5fb78(0xd000000000000034,uVar10);
          func_0x000107c5ed88();
          func_0x000107c5fb78();
          func_0x000107c6142c(uVar10);
          func_0x000107c5fb78(0x67616d497369202c,0xeb00000000203a65);
          bVar3 = *(char *)(uVar9 + _DAT_11380c070) == '\0';
          uVar11 = 0x65757274;
          if (bVar3) {
            uVar11 = 0x65736c6166;
          }
          uVar1 = 0xe400000000000000;
          if (bVar3) {
            uVar1 = 0xe500000000000000;
          }
          func_0x000107c5fb78(uVar11,uVar1);
          func_0x000107c6142c(uVar1);
          func_0x000107c6142c(uStack_80);
          func_0x000107c61174();
          puVar8 = puStack_c0;
          puVar7 = puStack_c0;
          func_0x000107c61550();
          if ((((int)puVar7 == 0) || ((long)puVar8 < 0)) ||
             (puVar7 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar8 >> 0x3e == 0) {
              puVar6 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar6 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar8) {
                puVar6 = puVar8;
              }
              func_0x000107c60480(puVar6);
            }
            puVar7 = (undefined *)0x0;
            FUN_101caf0f0(0,puVar6 + 1,1,puVar8);
          }
          uVar12 = (ulong)puVar7 & 0xffffffffffffff8;
          uVar10 = *(ulong *)(uVar12 + 0x10);
          puStack_c0 = puVar7;
          if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar10) {
            puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
            FUN_101caf0f0(puVar8,uVar10 + 1,1,puVar7);
            uVar12 = (ulong)puVar8 & 0xffffffffffffff8;
            puStack_c0 = puVar8;
          }
          *(ulong *)(uVar12 + 0x10) = uVar10 + 1;
          *(ulong *)(uVar12 + uVar10 * 8 + 0x20) = uVar9;
          func_0x000107c61170(uVar9);
        }
        (*pcVar14)(uVar16,lVar4);
        lVar5 = lVar5 + lStack_b0;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    func_0x000107c6142c(lStack_e8);
    uStack_88 = 0;
    uStack_80 = 0xe000000000000000;
    func_0x000107c602fc(0x38);
    func_0x000107c5fb78(0xd000000000000021,0x800000010f0099f0);
    puVar8 = puStack_c0;
    pcVar14 = pcStack_d0;
    if ((ulong)puStack_c0 >> 0x3e == 0) {
      puVar7 = *(undefined **)(((ulong)puStack_c0 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar7 = (undefined *)((ulong)puStack_c0 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puStack_c0) {
        puVar7 = puStack_c0;
      }
      func_0x000107c60480();
    }
    puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    puStack_90 = puVar7;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar6);
    func_0x000107c5fb78(0xd000000000000015,0x800000010f009040);
    func_0x000107c6142c(uStack_80);
    (*pcVar14)(puVar8);
    func_0x000107c6142c(puVar8);
    func_0x000107c61170(lStack_e0);
  }
  return;
}



/* Entry: 101cb18cc; end: 101cb191b;  */

/* WARNING: Removing unreachable block (ram,0x000101cb0b00) */
/* WARNING: Removing unreachable block (ram,0x000101cb0b0c) */

void FUN_101cb18cc(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long extraout_x8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  code *pcVar12;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar7 = 0;
  func_0x000107c5ede0();
  uVar9 = (ulong)*(byte *)(*(long *)(lVar7 + -8) + 0x50);
  uVar9 = unaff_x20 + (uVar9 + 0x18 & (uVar9 ^ 0xffffffffffffffff));
  uStack_60 = 0;
  lStack_58 = 0xe000000000000000;
  func_0x000107c602fc(0x39);
  func_0x000107c5fb78(0xd00000000000001b,0x800000010f0093f0);
  uVar5 = 0;
  func_0x000107c5ede0(0);
  uVar6 = 0x112d4b608;
  FUN_101cb15f4(0x112d4b608,PTR___s10Foundation3URLVMa_110350988,
                PTR___s10Foundation3URLVs23CustomStringConvertibleAAMc_1103509c0);
  uVar8 = uVar6;
  func_0x000107c6057c(uVar5,uVar6);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar8);
  func_0x000107c5fb78(0xd00000000000001a,0x800000010f009410);
  func_0x000107c5fb78(0x65757274,0xe400000000000000);
  func_0x000107c6142c(0xe400000000000000);
  func_0x000107c6142c(lStack_58);
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    FUN_101cb04e8(uVar9);
    FUN_101cb0624();
    if ((uVar9 & 1) != 0) {
      uStack_60 = 0;
      lStack_58 = 0xe000000000000000;
      func_0x000107c602fc(0x2f);
      func_0x000107c6142c(lStack_58);
      uStack_60 = 0xd00000000000002d;
      lStack_58 = 0x800000010f009aa0;
      func_0x000107c6057c(uVar5,uVar6);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar6);
      func_0x000107c6142c(lStack_58);
      lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_68 = (undefined *)0x0;
      uStack_60 = 0xe000000000000000;
      func_0x000107c602fc(0x17);
      func_0x000107c6142c(uStack_60);
      puStack_68 = (undefined *)0xd000000000000015;
      uStack_60 = 0x800000010f009550;
      uVar5 = 0;
      func_0x000107c5ede0();
      uVar6 = 0x112d4b608;
      FUN_101cb15f4(0x112d4b608,PTR___s10Foundation3URLVMa_110350988,
                    PTR___s10Foundation3URLVs23CustomStringConvertibleAAMc_1103509c0);
      uVar8 = uVar6;
      func_0x000107c6057c(uVar5,uVar6);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar8);
      func_0x000107c6142c(uStack_60);
      puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x000107c61168();
      func_0x000107c415e0();
      func_0x000107c61180();
      puVar3 = puVar2;
      func_0x000107c5ed90();
      puStack_68 = (undefined *)0x0;
      puVar4 = puVar2;
      func_0x000107c4ff50();
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar3);
      puVar3 = puStack_68;
      uVar8 = uVar6;
      if ((int)puVar4 == 0) {
        puVar2 = puStack_68;
        func_0x000107c61174(puStack_68);
        func_0x000107c5ed30();
        func_0x000107c61170(puVar2);
        func_0x000107c61654();
        puStack_68 = (undefined *)0x0;
        uStack_60 = 0xe000000000000000;
        func_0x000107c602fc(0x29);
        func_0x000107c6142c(uStack_60);
        puStack_68 = (undefined *)0xd000000000000027;
        uStack_60 = 0x800000010f009570;
        func_0x000107c6057c(uVar5);
        func_0x000107c5fb78();
        func_0x000107c6142c(uVar8);
        func_0x000107c614ac(puVar3);
        puVar4 = puVar3;
      }
      else {
        puStack_68 = (undefined *)0x0;
        uStack_60 = 0xe000000000000000;
        func_0x000107c61174(puVar3);
        func_0x000107c602fc(0x2d);
        func_0x000107c6142c(uStack_60);
        puStack_68 = (undefined *)0xd00000000000002b;
        uStack_60 = 0x800000010f0095a0;
        func_0x000107c6057c(uVar5);
        func_0x000107c5fb78();
        func_0x000107c6142c(uVar8);
        puVar3 = puVar2;
      }
      func_0x000107c6142c(uStack_60);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
        func_0x000107c60e78();
        pcStack_78 = FUN_101cb04e8;
        lVar7 = 0;
        puStack_b0 = puVar4;
        uStack_a8 = uVar6;
        uStack_a0 = uVar5;
        puStack_98 = puVar3;
        ppuStack_90 = &puStack_68;
        uStack_88 = uVar8;
        puStack_80 = &stack0xfffffffffffffff0;
        func_0x000107c5ede0();
        lVar11 = *(long *)(lVar7 + -8);
        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
        lVar10 = (long)&puStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
        func_0x000107c5ed9c(lVar10,0xd000000000000021,0x800000010f009480);
        FUN_101cb02ac(lVar10);
        pcVar12 = *(code **)(lVar11 + 8);
        (*pcVar12)(lVar10,lVar7);
        func_0x000107c5ed9c(lVar10,0xd000000000000033,0x800000010f0094b0);
        FUN_101cb02ac(lVar10);
        (*pcVar12)(lVar10,lVar7);
        func_0x000107c5ed9c(lVar10,0xd000000000000027,0x800000010f0094f0);
        FUN_101cb02ac(lVar10);
        (*pcVar12)(lVar10,lVar7);
        func_0x000107c5ed9c(lVar10,0xd000000000000027,0x800000010f009520);
        FUN_101cb02ac(lVar10);
        (*pcVar12)(lVar10,lVar7);
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 101cb191c; end: 101cb197f;  */

void FUN_101cb191c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101cb1980; end: 101cb19bb; -[_TtC36LockedCameraCaptureStorageManagement34LockedCameraCaptureDirectoryHelper init] */

void FUN_101cb1980(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000101cb19ec();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101cb19bc; end: 101cb1a0b;  */

void FUN_101cb19bc(void)

{
  func_0x000101cb19ec();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101cb1a0c; end: 101cb1a57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cb1a0c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e133d8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101cb1a58; end: 101cb1ab3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cb1a58(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112e133d8) = param_1;
  func_0x000101cb1a94();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101cb1ab4; end: 101cb2ab3;  */

void FUN_101cb1ab4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_80;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  puVar2 = PTR___s10Foundation3URLVMa_110350988;
  lStack_80 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_80 + 0x40));
  lVar8 = (long)&lStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar8 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar9 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar10 - extraout_x12_01;
  func_0x000107c602fc(0x15);
  func_0x000107c6142c(0xe000000000000000);
  uVar6 = 0x112d4b608;
  FUN_101cb2fac(0x112d4b608,puVar2,PTR___s10Foundation3URLVs23CustomStringConvertibleAAMc_1103509c0)
  ;
  func_0x000107c6057c(lVar1,uVar6);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar6);
  func_0x000107c6142c(0x800000010f009ad0);
  uVar6 = 0x800000010f009480;
  func_0x000107c5ed9c(lVar11,0xd000000000000021,0x800000010f009480);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  puVar3 = puVar2;
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c5edc4();
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar6);
  puVar5 = puVar3;
  func_0x000107c43418();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  if ((int)puVar5 != 0) {
    func_0x000101cb1e68(lVar11);
  }
  uVar6 = 0x800000010f0094b0;
  func_0x000107c5ed9c(lVar10,0xd000000000000033,0x800000010f0094b0);
  puVar3 = puVar2;
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c5edc4();
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar6);
  puVar5 = puVar3;
  func_0x000107c43418();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  if ((int)puVar5 != 0) {
    func_0x000101cb21a4(lVar10);
  }
  uVar6 = 0x800000010f0094f0;
  func_0x000107c5ed9c(lVar9,0xd000000000000027,0x800000010f0094f0);
  puVar3 = puVar2;
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c5edc4();
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar6);
  puVar5 = puVar3;
  func_0x000107c43418();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  if ((int)puVar5 != 0) {
    func_0x000101cb24d4(lVar9);
  }
  uVar6 = 0x800000010f009520;
  func_0x000107c5ed9c(lVar8,0xd000000000000027,0x800000010f009520);
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5edc4();
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar6);
  puVar4 = puVar2;
  func_0x000107c43418();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  if ((int)puVar4 != 0) {
    func_0x000101cb27b8(lVar8);
  }
  pcVar7 = *(code **)(lStack_80 + 8);
  (*pcVar7)(lVar8,lVar1);
  (*pcVar7)(lVar9,lVar1);
  (*pcVar7)(lVar10,lVar1);
  (*pcVar7)(lVar11,lVar1);
  return;
}



/* Entry: 101cb2ab4; end: 101cb2cdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cb2ab4(byte *param_1)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar3 = PTR_PTR_1126a8e80;
  func_0x000107c610f8(PTR_PTR_1126a8e80);
  func_0x000107c453e4();
  bVar1 = *param_1;
  if (((bVar1 < 3) || (bVar1 == 3)) || (bVar1 == 4)) {
    func_0x000107c5a0f8(puVar3);
  }
  if (param_1[1] != 0x1e) {
    FUN_101cb3204();
    func_0x000107c59c08(puVar3);
  }
  lVar4 = 0;
  FUN_101cb3d20();
  func_0x0001009f0578(param_1 + *(int *)(lVar4 + 0x18),puVar8);
  puVar5 = puVar8;
  (**(code **)(lVar10 + 0x30))(puVar8,1,lVar2);
  if ((int)puVar5 == 1) {
    FUN_101cb3068(puVar8,0x112d373d8,&UNK_10d9014c0);
  }
  else {
    lVar6 = lVar9;
    (**(code **)(lVar10 + 0x20))(lVar9,puVar8,lVar2);
    func_0x000107c5ee70();
    func_0x000107c53494(puVar3);
    func_0x000107c61170(lVar6);
    (**(code **)(lVar10 + 8))(lVar9,lVar2);
  }
  if (*(long *)(param_1 + *(int *)(lVar4 + 0x1c) + 8) != 0) {
    uVar7 = *(undefined8 *)(param_1 + *(int *)(lVar4 + 0x1c));
    func_0x000107c5fadc(uVar7);
    func_0x000107c547d0(puVar3);
    func_0x000107c61170(uVar7);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112e133d8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c4bfb0();
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 101cb2ce0; end: 101cb2f3f;  */

/* WARNING: Possible PIC construction at 0x000101cb2d74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101cb2d9c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cb2ce0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126a8e78;
  func_0x000107c610f8(PTR_PTR_1126a8e78);
  func_0x000107c453e4();
  if (*(char *)(param_1 + 8) != '\x01') {
    func_0x000107c5465c(puVar1);
  }
  if ((*(byte *)(param_1 + 9) < 2) || (*(byte *)(param_1 + 9) == 2)) {
    func_0x000107c54674(puVar1);
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
      lVar3 = *(long *)(unaff_x20 + _DAT_112e133d8);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar3 != 0) {
        func_0x000107c4bfb0();
        func_0x000107c615e8(lVar3);
      }
    }
    else {
      puVar2 = *(undefined **)(param_1 + 0x20);
      func_0x000107c5fadc(puVar2);
      func_0x000107c547d0(puVar1);
      puVar1 = puVar2;
    }
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x10);
    func_0x000107c5fadc(puVar2);
    func_0x000107c5487c(puVar1);
    puVar1 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101cb2f40; end: 101cb2f9b; -[_TtC25LockedCameraCaptureLogger25LockedCameraCaptureLogger init] */

void FUN_101cb2f40(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LockedCameraCaptureLogger.LockedCameraCaptureLogger",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101cb2f6c);
  (*pcVar1)();
}



/* Entry: 101cb2f9c; end: 101cb2fab; -[_TtC25LockedCameraCaptureLogger25LockedCameraCaptureLogger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cb2f9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e133d8));
  return;
}



/* Entry: 101cb2fac; end: 101cb3027;  */

void FUN_101cb2fac(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 101cb3028; end: 101cb3067;  */

void FUN_101cb3028(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e13410 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9ef218;
  func_0x000107c61520(&UNK_10d9ef218,&UNK_110466c88);
  puRam0000000112e13410 = puVar1;
  return;
}



/* Entry: 101cb3068; end: 101cb30a7;  */

undefined8 FUN_101cb3068(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101cb30a8; end: 101cb3127;  */

void FUN_101cb30a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e13418 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9ef630;
  func_0x000107c61520(&UNK_10d9ef630,&UNK_1104670e8);
  puRam0000000112e13418 = puVar1;
  return;
}



/* Entry: 101cb3128; end: 101cb315b;  */

undefined8 FUN_101cb3128(undefined8 param_1)

{
  FUN_101cb6570();
  return param_1;
}



/* Entry: 101cb315c; end: 101cb3203; -[_TtC25LockedCameraCaptureLogger49LockedCameraCaptureLoggerEnumsToBlizzardConverter init] */

void FUN_101cb315c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd00000000000001f,0x800000010f009ca0,
                      "LockedCameraCaptureLogger/LockedCameraCaptureLoggerEnumsToBlizzardConverter.swift"
                      ,0x51,2,0xb,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101cb31b4);
  (*pcVar1)();
}



/* Entry: 101cb3204; end: 101cb3217;  */

undefined8 FUN_101cb3204(ulong param_1)

{
  return *(undefined8 *)(&UNK_10d9eebf8 + (param_1 & 0xff) * 8);
}



/* Entry: 101cb3218; end: 101cb323f;  */

void FUN_101cb3218(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  FUN_101cb3d00();
  *param_1 = uVar1;
  return;
}



/* Entry: 101cb3240; end: 101cb329b;  */

void FUN_101cb3240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x000101cb4b48();
  func_0x000107c5fc44(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 101cb329c; end: 101cb32e7;  */

void FUN_101cb329c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000101cb4b48();
  func_0x000107c5fc30(param_1,param_2,param_3,uVar1);
  return;
}



/* Entry: 101cb32e8; end: 101cb3393;  */

void FUN_101cb32e8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101cb3394; end: 101cb33ef;  */

void FUN_101cb3394(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_101cb4b08();
  func_0x000107c5fc44(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 101cb33f0; end: 101cb343b;  */

void FUN_101cb33f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_101cb4b08();
  func_0x000107c5fc30(param_1,param_2,param_3,uVar1);
  return;
}



/* Entry: 101cb343c; end: 101cb367f;  */

void FUN_101cb343c(void)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar2 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar4 = 0x6d617473656d6974;
  uVar1 = 0xe900000000000070;
  if (bVar2 != 2) {
    uVar4 = 0xd000000000000012;
    uVar1 = 0x800000010f009cd0;
  }
  uVar3 = 0x6e6f69746361;
  if (bVar2 != 0) {
    uVar3 = 0x746567726174;
  }
  if (bVar2 < 2) {
    uVar1 = 0xe600000000000000;
    uVar4 = uVar3;
  }
  func_0x000107c5fb58(auStack_68,uVar4,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101cb3680; end: 101cb377b;  */

void FUN_101cb3680(undefined8 *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte *unaff_x20;
  
  bVar2 = *unaff_x20;
  uVar4 = 0x6d617473656d6974;
  uVar1 = 0xe900000000000070;
  if (bVar2 != 2) {
    uVar4 = 0xd000000000000012;
    uVar1 = 0x800000010f009cd0;
  }
  uVar3 = 0x6e6f69746361;
  if (bVar2 != 0) {
    uVar3 = 0x746567726174;
  }
  if (bVar2 < 2) {
    uVar1 = 0xe600000000000000;
    uVar4 = uVar3;
  }
  *param_1 = uVar4;
  param_1[1] = uVar1;
  return;
}



/* Entry: 101cb377c; end: 101cb379f;  */

void FUN_101cb377c(undefined1 *param_1,undefined1 param_2)

{
  FUN_101cb4aa4();
  *param_1 = param_2;
  return;
}



/* Entry: 101cb37a0; end: 101cb37b7;  */

undefined1  [16] FUN_101cb37a0(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101cb37b8; end: 101cb3807;  */

void FUN_101cb37b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000101cb3d58();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101cb3808; end: 101cb39cf;  */

void FUN_101cb3808(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  long lVar7;
  undefined1 auStack_60 [12];
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x112e13450;
  func_0x0001000285a8(0x112e13450,&UNK_10d9eece8);
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar6);
  func_0x000101cb3d58();
  func_0x000107c606ec(auStack_60 + -extraout_x8,&UNK_110466b40,&UNK_110466b40,param_1,uVar6,uVar5);
  uStack_51 = 0;
  func_0x000101cb3d98();
  lVar4 = unaff_x20;
  func_0x000107c60530();
  if (unaff_x21 == 0) {
    uStack_52 = 1;
    func_0x000101cb3dd8();
    func_0x000107c60530(unaff_x20 + 1,&uStack_52,lVar3,&UNK_110466ab0,lVar4);
    lVar4 = 0;
    func_0x000101cb3d20();
    iVar2 = *(int *)(lVar4 + 0x18);
    uStack_53 = 2;
    uVar5 = 0;
    func_0x000107c5eea4(0);
    uVar6 = 0x112d5e200;
    FUN_101cb3e98(0x112d5e200,PTR___s10Foundation4DateVSEAAMc_110350bc8);
    func_0x000107c60530(unaff_x20 + iVar2,&uStack_53,lVar3,uVar5,uVar6);
    puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar4 + 0x1c));
    uStack_54 = 3;
    func_0x000107c60520(*puVar1,puVar1[1],&uStack_54,lVar3);
  }
  (**(code **)(lVar7 + 8))(auStack_60 + -extraout_x8,lVar3);
  return;
}



/* Entry: 101cb39d0; end: 101cb3cd7;  */

/* WARNING: Removing unreachable block (ram,0x000101cb3bfc) */
/* WARNING: Removing unreachable block (ram,0x000101cb3c74) */
/* WARNING: Removing unreachable block (ram,0x000101cb3b40) */
/* WARNING: Removing unreachable block (ram,0x000101cb3c08) */

void FUN_101cb39d0(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x21;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined8 uStack_80;
  long alStack_78 [3];
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar2 = 0x112d373d8;
  alStack_78[0] = param_1;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112e13470;
  func_0x0001000285a8(0x112e13470,&UNK_10d9eecf0);
  lVar11 = *(long *)(lVar2 + -8);
  alStack_78[1] = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = ((long)&uStack_80 - extraout_x8) - extraout_x8_00;
  lVar2 = 0;
  FUN_101cb3d20();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar10 = (undefined1 *)(lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  alStack_78[2] = param_2;
  func_0x0001000a8868(param_2,uVar6);
  func_0x000101cb3d58();
  puVar3 = &UNK_110466b40;
  func_0x000107c606e0(lVar9,&UNK_110466b40,&UNK_110466b40,param_2,uVar6,uVar5);
  if (unaff_x21 == 0) {
    uStack_52 = 0;
    uStack_80 = (undefined1 *)((long)&uStack_80 - extraout_x8);
    func_0x000101cb3e18();
    lVar8 = alStack_78[1];
    puVar4 = &UNK_110466a20;
    func_0x000107c604e8(&uStack_51,&UNK_110466a20,&uStack_52,alStack_78[1],&UNK_110466a20,puVar3);
    *puVar10 = uStack_51;
    uStack_54 = 1;
    func_0x000101cb3e58();
    func_0x000107c604e8(&uStack_53,&UNK_110466ab0,&uStack_54,lVar8,&UNK_110466ab0,puVar4);
    puVar10[1] = uStack_53;
    uVar5 = 0;
    func_0x000107c5eea4(0);
    uStack_55 = 2;
    uVar6 = 0x112d5e180;
    FUN_101cb3e98(0x112d5e180,PTR___s10Foundation4DateVSeAAMc_110350be8);
    lVar8 = (long)uStack_80;
    func_0x000107c604e8(uStack_80,uVar5,&uStack_55,alStack_78[1],uVar5,uVar6);
    func_0x0001003a4c00(lVar8,puVar10 + *(int *)(lVar2 + 0x18));
    uStack_56 = 3;
    puVar7 = &uStack_56;
    lVar8 = alStack_78[1];
    func_0x000107c604d4();
    uStack_80 = puVar7;
    (**(code **)(lVar11 + 8))(lVar9,alStack_78[1]);
    lVar9 = alStack_78[0];
    iVar1 = *(int *)(lVar2 + 0x1c);
    *(undefined1 **)(puVar10 + iVar1) = uStack_80;
    *(long *)((long)(puVar10 + iVar1) + 8) = lVar8;
    func_0x000101cb3ed8(puVar10,lVar9);
    func_0x0001000834e4(alStack_78[2]);
    func_0x000101cb2fec(puVar10);
  }
  else {
    func_0x0001000834e4(alStack_78[2]);
  }
  return;
}



/* Entry: 101cb3cd8; end: 101cb3cff;  */

void FUN_101cb3cd8(void)

{
  FUN_101cb39d0();
  return;
}



/* Entry: 101cb3d00; end: 101cb3d1f;  */

ulong FUN_101cb3d00(ulong param_1)

{
  if (4 < param_1) {
    param_1 = 5;
  }
  return param_1;
}



/* Entry: 101cb3d20; end: 101cb3e97;  */

void FUN_101cb3d20(undefined8 param_1)

{
  if (lRam0000000112e134f0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6811dc);
  return;
}



/* Entry: 101cb3e98; end: 101cb3f1b;  */

void FUN_101cb3e98(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    func_0x000107c5eea4(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 101cb3f1c; end: 101cb3f1f;  */

void FUN_101cb3f1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e13488 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9eecf8;
  func_0x000107c61520(&UNK_10d9eecf8,&UNK_110466a20);
  puRam0000000112e13488 = puVar1;
  return;
}



/* Entry: 101cb3f20; end: 101cb3f5f;  */

void FUN_101cb3f20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e13488 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9eecf8;
  func_0x000107c61520(&UNK_10d9eecf8,&UNK_110466a20);
  puRam0000000112e13488 = puVar1;
  return;
}



/* Entry: 101cb3f60; end: 101cb3f63;  */

void FUN_101cb3f60(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e13490 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9eede8;
  func_0x000107c61520(&UNK_10d9eede8,&UNK_110466ab0);
  puRam0000000112e13490 = puVar1;
  return;
}



/* Entry: 101cb3f64; end: 101cb3fa3;  */

void FUN_101cb3f64(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e13490 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9eede8;
  func_0x000107c61520(&UNK_10d9eede8,&UNK_110466ab0);
  puRam0000000112e13490 = puVar1;
  return;
}



/* Entry: 101cb3fa4; end: 101cb41ff;  */

long * FUN_101cb3fa4(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    *(short *)param_1 = (short)*param_2;
    lVar8 = (long)*(int *)(param_3 + 0x18);
    lVar5 = 0;
    func_0x000107c5eea4();
    lVar9 = *(long *)(lVar5 + -8);
    lVar6 = (long)param_2 + lVar8;
    (**(code **)(lVar9 + 0x30))(lVar6,1,lVar5);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar9 + 0x10))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar5);
      (**(code **)(lVar9 + 0x38))((long)param_1 + lVar8,0,1,lVar5);
    }
    else {
      lVar6 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      func_0x000107c610b4((long)param_1 + lVar8,(long)param_2 + lVar8,
                          *(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    func_0x000107c61434();
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar7 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar6 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 101cb4200; end: 101cb4343;  */

undefined1 * FUN_101cb4200(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  iVar2 = *(int *)(param_3 + 0x18);
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar3 + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  puVar4 = param_1 + iVar2;
  (*pcVar8)(puVar4,1,lVar3);
  puVar5 = param_2 + iVar2;
  (*pcVar8)(puVar5,1,lVar3);
  if ((int)puVar4 == 0) {
    if ((int)puVar5 == 0) {
      (**(code **)(lVar7 + 0x18))(param_1 + iVar2,param_2 + iVar2,lVar3);
      goto LAB_101cb42e4;
    }
    (**(code **)(lVar7 + 8))(param_1 + iVar2,lVar3);
  }
  else if ((int)puVar5 == 0) {
    (**(code **)(lVar7 + 0x10))(param_1 + iVar2,param_2 + iVar2,lVar3);
    (**(code **)(lVar7 + 0x38))(param_1 + iVar2,0,1,lVar3);
    goto LAB_101cb42e4;
  }
  lVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  func_0x000107c610b4(param_1 + iVar2,param_2 + iVar2,*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40))
  ;
LAB_101cb42e4:
  iVar2 = *(int *)(param_3 + 0x1c);
  puVar1 = (undefined8 *)(param_1 + iVar2);
  *puVar1 = *(undefined8 *)(param_2 + iVar2);
  uVar6 = puVar1[1];
  puVar1[1] = *(undefined8 *)((long)(param_2 + iVar2) + 8);
  func_0x000107c61434();
  func_0x000107c6142c(uVar6);
  return param_1;
}



/* Entry: 101cb4344; end: 101cb4413;  */

undefined2 * FUN_101cb4344(undefined2 *param_1,undefined2 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  *param_1 = *param_2;
  lVar5 = (long)*(int *)(param_3 + 0x18);
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar3 + -8);
  lVar4 = (long)param_2 + lVar5;
  (**(code **)(lVar6 + 0x30))(lVar4,1,lVar3);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar6 + 0x20))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar3);
    (**(code **)(lVar6 + 0x38))((long)param_1 + lVar5,0,1,lVar3);
  }
  else {
    lVar4 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    func_0x000107c610b4((long)param_1 + lVar5,(long)param_2 + lVar5,
                        *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  uVar7 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar7;
  return param_1;
}


