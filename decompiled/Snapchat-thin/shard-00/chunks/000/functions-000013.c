/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1000774fc; end: 100077683;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000774fc(ulong param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x20;
  long lVar6;
  
  func_0x000107c614f0();
  lVar2 = 0;
  func_0x000107c5f804();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar1 = _DAT_112d7f3e8;
  (**(code **)(lVar6 + 0x68))
            (&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,lVar2);
  puVar3 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar4 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010d93d580);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar4);
  (**(code **)(lVar6 + 8))
            (&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112d7f3f0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7f3f0) = 0;
  if ((param_1 & 1) != 0) {
    uVar5 = 0;
    FUN_100077684();
    func_0x000107c613fc();
    uVar4 = 0;
    func_0x0001000776a4();
    func_0x000107c613fc();
    func_0x0001000777e8(uVar5,uVar4);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = uVar5;
    func_0x000107c61574(uVar4);
  }
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100077684; end: 1000776db;  */

void FUN_100077684(void)

{
  func_0x000107c61168(&PTR_PTR_112d7f338);
  return;
}



/* Entry: 1000776dc; end: 10007789f;  */

void FUN_1000776dc(long param_1)

{
  long lVar1;
  
  if (lRam0000000112d48c40 == 0) {
    lVar1 = 0xff;
    func_0x000107c5eea4();
    func_0x000107c60188();
    if (lVar1 == 0) {
      lRam0000000112d48c40 = param_1;
    }
  }
  return;
}



/* Entry: 1000778a0; end: 1000778b7;  */

undefined8 * FUN_1000778a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 1000778b8; end: 10007796b;  */

void FUN_1000778b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c5accc(0x3fb999999999999a);
  if ((int)puVar1 == 0) {
    FUN_100077dd8();
    func_0x000107c61180();
  }
  else {
    puVar2 = PTR_PTR_1126b6ba0;
    func_0x000107c610f4(PTR_PTR_1126b6ba0);
    puVar1 = PTR_PTR_1126b6ba8;
    func_0x000107c61160(PTR_PTR_1126b6ba8);
    func_0x000107c46b6c(puVar2,param_2,puVar1);
    func_0x000107c61170(puVar1);
    puVar1 = PTR_PTR_1126b6bb0;
    func_0x000107c610f4(PTR_PTR_1126b6bb0);
    func_0x000107c477f8(0x4014000000000000);
    func_0x000107c61170(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10007796c; end: 1000779bf;  */

undefined * FUN_10007796c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126e1548;
  func_0x000107c5a9f0(PTR_PTR_1126e1548);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5ad14(param_1);
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 1000779c0; end: 100077a47; +[SCDeviceInfoImplementation sharedInstance] */

void FUN_1000779c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_100077a48;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001137fbae0 != -1) {
    FUN_10002a2fc(0x1137fbae0,&puStack_48);
  }
  uVar1 = uRam00000001137fbad8;
  func_0x000107c61174(uRam00000001137fbad8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100077a48; end: 100077a73;  */

void FUN_100077a48(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c610f4();
  func_0x000107c45468();
  uVar1 = uRam00000001137fbad8;
  uRam00000001137fbad8 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100077a74; end: 100077af3; -[SCDeviceInfoImplementation initSharedInstance] */

undefined1 * FUN_100077a74(undefined8 param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270b180;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x24) = 0;
    func_0x000107c3bd38(puVar1);
    uVar2 = *(ulong *)((long)puVar1 + 8);
    func_0x000107c44c3c();
    *(ulong *)((long)puVar1 + 0x10) = uVar2 % 10000;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100077af4; end: 100077af7; -[SCDeviceInfoImplementation _loadConfigDeviceIdIntoMemoryOnStartup] */

void FUN_100077af4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4cdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__loadConfigDeviceIdIntoMemory_112570d08);
  return;
}



/* Entry: 100077af8; end: 100077c57; -[SCDeviceInfoImplementation _loadConfigDeviceIdIntoMemory] */

void FUN_100077af8(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar1 = param_1;
  func_0x000107c3c3e4();
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(ulong *)(param_1 + 8) = uVar1;
  func_0x000107c61170(uVar5);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c4a0fc();
  if ((int)puVar2 == 0) {
    uVar1 = param_1;
    func_0x000107c3c3e0();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(param_1 + 8);
    *(ulong *)(param_1 + 8) = uVar1;
    func_0x000107c61170(uVar5);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c4a0fc();
    if ((int)puVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be98cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__saveConfigDeviceIdToUserDefault_112583cd0,
                 *(undefined8 *)(param_1 + 8));
      return;
    }
    puVar2 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
    func_0x000107c40efc();
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c44fe0();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c3ac54();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar4;
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c4a0fc();
    if ((int)puVar2 == 0) {
      FUN_10011df08();
      func_0x000107c61180();
      uVar5 = *(undefined8 *)(param_1 + 8);
      *(undefined **)(param_1 + 8) = puVar2;
      func_0x000107c61170(uVar5);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bed4370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__updateBothUserDefaultsAndKeycha_112592a80,*(undefined8 *)(param_1 + 8)
              );
    return;
  }
  uVar1 = param_1;
  func_0x000107c3ad54();
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x000107c3c504(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be98cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__saveConfigDeviceIdToKeychain__112583cc8,*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 100077c58; end: 100077d53; -[SCDeviceInfoImplementation _retrieveConfigDeviceIdFromUserDefaults] */

void FUN_100077c58(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x000107c5ba34(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c4d9c0();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100077d54; end: 100077d9f; -[SCDeviceInfoImplementation _alreadySavedToKeychain] */

undefined * FUN_100077d54(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x000107c5ba34(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c3ebc0();
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 100077da0; end: 100077da7; -[SCDeviceInfoImplementation shouldSampleEventForPercentage:] */

void FUN_100077da0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c232d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,0,param_2,PTR_s_shouldSampleEventForPercentage_s_11266a588);
  return;
}



/* Entry: 100077da8; end: 100077dd7; -[SCDeviceInfoImplementation shouldSampleEventForPercentage:startOffset:] */

bool FUN_100077da8(double param_1,double param_2,long param_3)

{
  double dVar1;
  
  dVar1 = (double)NEON_ucvtf(*(undefined8 *)(param_3 + 0x10));
  return dVar1 < (param_1 + param_2) * 100.0 && param_2 * 100.0 <= dVar1;
}



/* Entry: 100077dd8; end: 100077df3;  */

void FUN_100077dd8(void)

{
  func_0x000107c61160(PTR_PTR_1126df820);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100077df4; end: 100077e83;  */

void FUN_100077df4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b6bd8;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_1);
  func_0x000107c610f4(puVar1);
  puVar2 = PTR_PTR_1126b6be0;
  func_0x000107c61160(PTR_PTR_1126b6be0);
  func_0x000107c46144(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100077e84; end: 100077ef7; -[SCGrapheneDelayHandlerMetric2 init] */

undefined1 * FUN_100077e84(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e7350;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100077ef8; end: 100077f83;  */

undefined8 FUN_100077ef8(void)

{
  int iVar1;
  
  if ((bRam000000011383d900 & 1) == 0) {
    iVar1 = 0x1383d900;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      FUN_100077f84();
      ppuRam000000011383d8e8 = &PTR_FUN_110cf0340;
      uRam000000011383d8f0 = 0x11383d788;
      uRam000000011383d8f8 = 0xffffffff;
      func_0x000107c60e4c(0x11383d900);
    }
  }
  return 0x11383d8e8;
}



/* Entry: 100077f84; end: 100077fef;  */

undefined8 FUN_100077f84(void)

{
  int iVar1;
  
  if ((bRam000000011383d8e0 & 1) == 0) {
    iVar1 = 0x1383d8e0;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      FUN_100077ff0(0x11383d788);
      func_0x000107c60e4c(0x11383d8e0);
    }
  }
  return 0x11383d788;
}



/* Entry: 100077ff0; end: 10007844b;  */

undefined8 * FUN_100077ff0(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined ****ppppuVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined4 extraout_w8;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined **appuStack_1420 [313];
  undefined1 auStack_a58 [28];
  undefined1 auStack_a3c [4];
  undefined ***pppuStack_a38;
  undefined8 uStack_a30;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar1 = param_1;
  FUN_10007844c();
  *puVar1 = &PTR_DAT_110cf03b8;
  puVar6 = puVar1 + 1;
  *puVar6 = 0x32aaaba7;
  puVar7 = puVar1 + 0xc;
  puVar1[0xd] = 0;
  *puVar7 = 0;
  puVar8 = puVar1 + 0xe;
  puVar1[0xf] = 0;
  *puVar8 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  FUN_100078460();
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = puVar1;
  puVar1 = param_1 + 0x1e;
  *puVar1 = 0;
  puVar9 = param_1 + 0x1f;
  *puVar9 = 0;
  puVar12 = param_1 + 0x20;
  *puVar12 = &UNK_10b2dcdc8;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  puVar10 = param_1 + 0x21;
  *puVar10 = &PTR_DAT_110873830;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  puVar11 = param_1 + 0x28;
  *puVar11 = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  FUN_10007847c(auStack_a58,&UNK_10f773a1c);
  func_0x0001000784f4();
  func_0x0001000784fc();
  func_0x00010007851c();
  func_0x000100078528();
  func_0x00010007853c();
  FUN_10007855c(puVar7);
  FUN_1000785dc(&pppuStack_a38);
  func_0x0001000784f4();
  func_0x0001000784fc();
  func_0x00010007851c();
  func_0x000100078528(8);
  func_0x00010007853c();
  FUN_100078604(param_1 + 0xd);
  FUN_10007866c(&pppuStack_a38);
  uVar2 = 0x108;
  func_0x000107c60e20(0x108);
  FUN_10007868c();
  pppuStack_a38 = (undefined ***)0x0;
  FUN_1000786ec(param_1 + 0x11,uVar2);
  ppppuVar3 = &pppuStack_a38;
  FUN_1000787ec();
  func_0x0001000784f4();
  ppppuVar3[5] = (undefined ***)0x0;
  ppppuVar3[4] = (undefined ***)0x0;
  ppppuVar3[10] = (undefined ***)0x0;
  *ppppuVar3 = (undefined ***)&PTR_DAT_110cf02e0;
  FUN_10007880c();
  pppuStack_a38 = (undefined ***)ppppuVar3;
  func_0x000100078828();
  if ((undefined ****)pppuStack_a38 != (undefined ****)0x0) {
    func_0x000107c39828();
  }
  FUN_100078920(appuStack_1420,1,1);
  pppuStack_a38 = (undefined ***)appuStack_1420[0];
  func_0x000100078828();
  if (pppuStack_a38 != (undefined ***)0x0) {
    func_0x000107c39828();
  }
  FUN_100078920(appuStack_1420,2,2);
  pppuStack_a38 = (undefined ***)appuStack_1420[0];
  func_0x000100078828();
  if (pppuStack_a38 != (undefined ***)0x0) {
    func_0x000107c39828();
  }
  *(undefined1 *)(param_1 + 0x1d) = 0;
  puVar4 = (undefined8 *)0x28;
  func_0x000107c60e20();
  puVar4[4] = 0;
  puVar4[1] = 0;
  *puVar4 = 0;
  puVar4[3] = 0;
  puVar4[2] = 0;
  *(undefined4 *)(puVar4 + 4) = 0x3f800000;
  pppuStack_a38 = (undefined ***)0x0;
  FUN_10007897c(puVar1);
  FUN_1000789a4(&pppuStack_a38);
  puVar4 = (undefined8 *)0x78;
  func_0x000107c60e20();
  puVar4[5] = 0;
  puVar4[4] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[0xe] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[1] = 0;
  *puVar4 = 0;
  puVar4[3] = 0;
  puVar4[2] = 0;
  *(undefined4 *)(puVar4 + 4) = 0x3f800000;
  puVar4[6] = 0;
  puVar4[5] = 0;
  puVar4[8] = 0;
  puVar4[7] = 0;
  *(undefined4 *)(puVar4 + 9) = 0x3f800000;
  *(undefined4 *)(puVar4 + 0xe) = 0x3f800000;
  pppuStack_a38 = (undefined ***)0x0;
  func_0x0001000789c4(puVar9);
  FUN_100078a08(&pppuStack_a38);
  FUN_100078a28(auStack_a3c);
  puVar5 = auStack_a3c;
  func_0x000107c60d08(puVar5);
  FUN_100078a88(&pppuStack_a38,puVar5);
  func_0x000107c60d04(auStack_a3c);
  func_0x000107c610b4(appuStack_1420,&pppuStack_a38,0x9c8);
  *puVar12 = 0x100078b38;
  pppuStack_a38 = (undefined ***)&PTR_DAT_110cf0470;
  uVar2 = 0x9c8;
  func_0x000107c60e20();
  func_0x000107c610b4();
  uStack_a30 = uVar2;
  FUN_100078ac0(puVar10,&pppuStack_a38);
  (*(code *)*pppuStack_a38)(&pppuStack_a38);
  (*(code *)*puVar12)(puVar12);
  func_0x000100078bc0();
  *(undefined4 *)(param_1 + 0x26) = extraout_w8;
  *(undefined4 *)((long)param_1 + 0x134) = 0;
  param_1[0x27] = 0;
  func_0x000107c60c64(puVar11,"");
  puVar5 = auStack_a58;
  FUN_100078bd8(puVar5);
  func_0x000100078c18();
  if ((bool)in_ZR) {
    return param_1;
  }
  func_0x000107c60e78();
  do {
    FUN_100078bd8(auStack_a58);
    func_0x000107c60ca0(puVar11);
    (**(code **)*puVar10)(puVar10);
    FUN_100078a08(puVar9);
    FUN_1000789a4(puVar1);
    func_0x00010015bc58(param_1 + 0x14);
    FUN_1000787ec(param_1 + 0x11);
    func_0x000107c301b4(puVar8);
    FUN_10007866c(param_1 + 0xd);
    FUN_1000785dc(puVar7);
    func_0x000107c301b8(param_1 + 9);
    func_0x000107c60d94(puVar6);
    func_0x000107c60bd8(puVar5);
    func_0x000107c60d04(auStack_a3c);
  } while( true );
}



/* Entry: 10007844c; end: 10007845f;  */

void FUN_10007844c(void)

{
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  return;
}



/* Entry: 100078460; end: 10007847b;  */

long FUN_100078460(long param_1)

{
  func_0x000107c60da0();
  return param_1 / 1000;
}



/* Entry: 10007847c; end: 1000784df;  */

void FUN_10007847c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x19;
  
  FUN_1000784e0();
  plVar2 = plRam0000000113847390;
  *(long **)(param_1 + 8) = plRam0000000113847390;
  if (plVar2 != (long *)0x0) {
    uVar1 = param_2;
    func_0x000107c613d0(param_2);
    (**(code **)(*plVar2 + 0x10))(plVar2,param_2,uVar1);
    *(long **)(unaff_x19 + 0x10) = plVar2;
  }
  return;
}



/* Entry: 1000784e0; end: 10007855b;  */

void FUN_1000784e0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d9deb8;
  return;
}



/* Entry: 10007855c; end: 1000785c3;  */

void FUN_10007855c(void)

{
  long lVar1;
  long unaff_x19;
  long lVar2;
  long lVar3;
  
  func_0x000100078550();
  if (unaff_x19 != 0) {
    lVar2 = *(long *)(unaff_x19 + 0x40);
    *(undefined8 *)(unaff_x19 + 0x40) = 0;
    if (lVar2 != 0) {
      lVar1 = *(long *)(lVar2 + -8);
      if (lVar1 != 0) {
        lVar3 = lVar1 * -8;
        lVar1 = lVar2 + lVar1 * 8;
        do {
          lVar1 = lVar1 + -8;
          FUN_100165048(lVar1);
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0);
      }
      func_0x000107c60e10(lVar2 + -0x10);
    }
    func_0x000107c60d94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1000785c4; end: 1000785db;  */

void FUN_1000785c4(void)

{
  return;
}



/* Entry: 1000785dc; end: 1000785fb;  */

void FUN_1000785dc(void)

{
  func_0x0001000785d0();
  FUN_10007855c();
  return;
}



/* Entry: 1000785fc; end: 100078603;  */

void FUN_1000785fc(void)

{
  return;
}



/* Entry: 100078604; end: 10007866b;  */

void FUN_100078604(void)

{
  long lVar1;
  long unaff_x19;
  long lVar2;
  long lVar3;
  
  func_0x000100078550();
  if (unaff_x19 != 0) {
    lVar2 = *(long *)(unaff_x19 + 0x40);
    *(undefined8 *)(unaff_x19 + 0x40) = 0;
    if (lVar2 != 0) {
      lVar1 = *(long *)(lVar2 + -8);
      if (lVar1 != 0) {
        lVar3 = lVar1 * -8;
        lVar1 = lVar2 + lVar1 * 8;
        do {
          lVar1 = lVar1 + -8;
          FUN_10007e5b0(lVar1);
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0);
      }
      func_0x000107c60e10(lVar2 + -0x10);
    }
    func_0x000107c60d94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10007866c; end: 10007868b;  */

void FUN_10007866c(void)

{
  func_0x0001000785d0();
  FUN_100078604();
  return;
}



/* Entry: 10007868c; end: 1000786eb;  */

void FUN_10007868c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0x100;
  param_1[4] = 0x32aaaba7;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = param_1 + 0xc;
  param_1[0xd] = param_1 + 0xc;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0x3f800000;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  return;
}



/* Entry: 1000786ec; end: 1000787eb;  */

void FUN_1000786ec(void)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *unaff_x19;
  
  func_0x000100078550();
  if (unaff_x19 == (long *)0x0) {
    return;
  }
  func_0x000107c301d0(unaff_x19 + 0x1c,unaff_x19[0x1e]);
  lVar1 = unaff_x19[0x1c];
  unaff_x19[0x1c] = 0;
  if (lVar1 != 0) {
    func_0x000107c60e14();
  }
  func_0x000107c301d4(unaff_x19 + 0x17,unaff_x19[0x19]);
  lVar1 = unaff_x19[0x17];
  unaff_x19[0x17] = 0;
  if (lVar1 != 0) {
    func_0x000107c60e14();
  }
  plVar2 = (long *)unaff_x19[0x14];
  while (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    func_0x000107c60e14();
  }
  lVar1 = unaff_x19[0x12];
  unaff_x19[0x12] = 0;
  if (lVar1 != 0) {
    func_0x000107c60e14();
  }
  if (unaff_x19[0xf] != 0) {
    unaff_x19[0x10] = unaff_x19[0xf];
    func_0x000107c60e14();
  }
  if (unaff_x19[0xe] != 0) {
    plVar2 = (long *)unaff_x19[0xd];
    plVar3 = *(long **)(unaff_x19[0xc] + 8);
    lVar1 = *plVar2;
    *(long **)(lVar1 + 8) = plVar3;
    *plVar3 = lVar1;
    unaff_x19[0xe] = 0;
    while (plVar2 != unaff_x19 + 0xc) {
      plVar3 = (long *)plVar2[1];
      FUN_100164334(plVar2 + 2);
      FUN_100078974();
      plVar2 = plVar3;
    }
  }
  func_0x000107c60d94(unaff_x19 + 4);
  if (*unaff_x19 != 0) {
    FUN_10015be00();
    func_0x000107c60e14(*unaff_x19);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1000787ec; end: 10007880b;  */

void FUN_1000787ec(void)

{
  func_0x0001000785d0();
  FUN_1000786ec();
  return;
}



/* Entry: 10007880c; end: 100078833;  */

void FUN_10007880c(undefined8 param_1,long param_2)

{
  undefined8 in_register_00005008;
  
  *(undefined8 *)(param_2 + 0x10) = in_register_00005008;
  *(undefined8 *)(param_2 + 8) = param_1;
  *(undefined8 *)(param_2 + 0x20) = in_register_00005008;
  *(undefined8 *)(param_2 + 0x18) = param_1;
  *(undefined4 *)(param_2 + 0x28) = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = in_register_00005008;
  *(undefined8 *)(param_2 + 0x30) = param_1;
  *(undefined8 *)(param_2 + 0x48) = in_register_00005008;
  *(undefined8 *)(param_2 + 0x40) = param_1;
  *(undefined4 *)(param_2 + 0x50) = 0x3f800000;
  return;
}



/* Entry: 100078834; end: 10007891f;  */

void FUN_100078834(long *param_1,undefined8 *param_2,undefined4 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 < (undefined8 *)param_1[2]) {
    uVar5 = *param_2;
    *param_2 = 0;
    puVar10 = puVar3 + 1;
    *puVar3 = uVar5;
  }
  else {
    lVar8 = *param_1;
    lVar9 = (long)puVar3 - lVar8;
    uVar1 = (lVar9 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      func_0x000107c301ac();
LAB_10007891c:
      uVar4 = SUB84(param_2,0);
      func_0x000104bd35f4();
      puVar3 = (undefined8 *)0x68;
      func_0x000107c60e20();
      *puVar3 = &PTR_DAT_110cf0268;
      FUN_10007880c();
      *(undefined4 *)(puVar3 + 0xb) = 0x40;
      *(undefined4 *)((long)puVar3 + 0x5c) = uVar4;
      *(undefined4 *)(puVar3 + 0xc) = param_3;
      *param_1 = (long)puVar3;
      return;
    }
    uVar6 = param_1[2] - lVar8;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar2 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_10007891c;
      lVar2 = uVar7 << 3;
      func_0x000107c60e20();
    }
    puVar3 = (undefined8 *)(lVar2 + lVar9);
    uVar5 = *param_2;
    *param_2 = 0;
    puVar10 = puVar3 + 1;
    *puVar3 = uVar5;
    func_0x000107c610b4(puVar3 + -(lVar9 >> 3),lVar8,lVar9);
    *param_1 = (long)(puVar3 + -(lVar9 >> 3));
    param_1[1] = (long)puVar10;
    param_1[2] = lVar2 + uVar7 * 8;
    if (lVar8 != 0) {
      FUN_100078974();
    }
  }
  param_1[1] = (long)puVar10;
  return;
}



/* Entry: 100078920; end: 100078973;  */

void FUN_100078920(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x68;
  func_0x000107c60e20();
  *puVar1 = &PTR_DAT_110cf0268;
  FUN_10007880c();
  *(undefined4 *)(puVar1 + 0xb) = 0x40;
  *(undefined4 *)((long)puVar1 + 0x5c) = param_2;
  *(undefined4 *)(puVar1 + 0xc) = param_3;
  *param_1 = puVar1;
  return;
}



/* Entry: 100078974; end: 10007897b;  */

void FUN_100078974(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10007897c; end: 1000789a3;  */

void FUN_10007897c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x000107c301e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1000789a4; end: 1000789ff;  */

void FUN_1000789a4(void)

{
  func_0x0001000785d0();
  FUN_10007897c();
  return;
}



/* Entry: 100078a00; end: 100078a07;  */

void FUN_100078a00(void)

{
  return;
}



/* Entry: 100078a08; end: 100078a27;  */

void FUN_100078a08(void)

{
  func_0x0001000785d0();
  func_0x0001000789c4();
  return;
}



/* Entry: 100078a28; end: 100078a87;  */

undefined8 FUN_100078a28(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  FUN_10002b838(auStack_38,&UNK_10f50e986);
  func_0x000107c60d00(param_1,auStack_38);
  func_0x000107c60ca0(auStack_38);
  return param_1;
}



/* Entry: 100078a88; end: 100078abf;  */

void FUN_100078a88(uint *param_1,uint param_2)

{
  long lVar1;
  
  *param_1 = param_2;
  for (lVar1 = 1; lVar1 != 0x270; lVar1 = lVar1 + 1) {
    param_2 = (int)lVar1 + (param_2 ^ param_2 >> 0x1e) * 0x6c078965;
    param_1[lVar1] = param_2;
  }
  param_1[0x270] = 0;
  param_1[0x271] = 0;
  return;
}



/* Entry: 100078ac0; end: 100078afb;  */

undefined8 * FUN_100078ac0(undefined8 *param_1,undefined8 param_2)

{
  code *extraout_x8;
  
  (**(code **)*param_1)();
  FUN_100078afc();
  (*extraout_x8)(param_1,param_2);
  return param_1;
}



/* Entry: 100078afc; end: 100078bd7;  */

void FUN_100078afc(void)

{
  return;
}



/* Entry: 100078bd8; end: 100078c0f;  */

void FUN_100078bd8(long param_1)

{
  long *plVar1;
  long unaff_x19;
  
  FUN_1000784e0();
  plVar1 = *(long **)(param_1 + 8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined8 *)(unaff_x19 + 0x10));
  }
  return;
}



/* Entry: 100078c10; end: 100078c2f;  */

void FUN_100078c10(void)

{
  return;
}



/* Entry: 100078c30; end: 100078cdb; -[SCDelayedEntryPointHandler initWithContextStream:operationQueue:graphene:] */

undefined8
FUN_100078c30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6ae8;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c5a9f0(puVar1);
  func_0x000107c61180();
  func_0x000107c46148(param_1,param_2,param_3,param_4,param_5,puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 100078cdc; end: 100078d2f; +[SCIdleMonitor sharedInstance] */

void FUN_100078cdc(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f7140 != -1) {
    FUN_10002a2fc(0x1137f7140,&PTR___NSConcreteGlobalBlock_110d24c00);
  }
  uVar1 = uRam00000001137f7148;
  func_0x000107c61174(uRam00000001137f7148);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100078d30; end: 100078d5b;  */

void FUN_100078d30(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e02d0;
  func_0x000107c610fc();
  uVar1 = puRam00000001137f7148;
  puRam00000001137f7148 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100078d5c; end: 100078d63; -[SCIdleMonitorV1 init] */

void FUN_100078d5c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff6630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithBackgroundTaskWrapperEna_1125db350,1)
  ;
  return;
}



/* Entry: 100078d64; end: 100078e93; -[SCIdleMonitorV1 initWithBackgroundTaskWrapperEnabled:] */

undefined1 * FUN_100078d64(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112706490;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined2 *)((long)puVar1 + 0x4d) = 0;
    *(undefined1 *)((long)puVar1 + 0x48) = 1;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar2;
    func_0x000107c61170();
    FUN_100078e94();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = uVar3;
    func_0x000107c61170(uVar4);
    *(undefined1 *)((long)puVar1 + 0x60) = param_3;
    *(undefined4 *)((long)puVar1 + 0x78) = 0;
    *(undefined8 *)((long)puVar1 + 0x94) = 0x3ecccccd3f800000;
    *(undefined8 *)((long)puVar1 + 0x8c) = 0x3d4ccccd3d4ccccd;
    puVar2 = PTR_PTR_1126e02d8;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xa0);
    *(undefined **)((long)puVar1 + 0xa0) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100078e94; end: 100078ee7;  */

void FUN_100078e94(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fbe58 != -1) {
    FUN_10002a2fc(0x1137fbe58,&PTR___NSConcreteGlobalBlock_110d62f30);
  }
  uVar1 = uRam00000001137fbe50;
  func_0x000107c61174(uRam00000001137fbe50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100078ee8; end: 100078f13;  */

void FUN_100078ee8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e1928;
  func_0x000107c61160();
  uVar1 = puRam00000001137fbe50;
  puRam00000001137fbe50 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100078f14; end: 100078f7b; -[SCMainQueuePerformerImpl init] */

undefined1 * FUN_100078f14(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar2 = &uStack_30;
  puStack_28 = PTR_PTR_11270b7d0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  puVar1 = PTR___dispatch_main_q_11034be20;
  if (puVar2 != (undefined8 *)0x0) {
    func_0x000107c61174(PTR___dispatch_main_q_11034be20);
    uVar3 = *(undefined8 *)((long)puVar2 + 8);
    *(undefined **)((long)puVar2 + 8) = puVar1;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar2 + 0x10) = 0;
  }
  return (undefined1 *)puVar2;
}



/* Entry: 100078f7c; end: 100078fef; -[SCGrapheneWorkSchedulerMetric2 init] */

undefined1 * FUN_100078f7c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112706498;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100078ff0; end: 1000792c3; -[SCDelayedEntryPointHandler initWithContextStream:operationQueue:graphene:idleMonitor:] */

undefined8 *
FUN_100078ff0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_78 = PTR_PTR_1126e7338;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c61160();
    uVar6 = puVar1[1];
    puVar1[1] = puVar2;
    func_0x000107c61170(uVar6);
    func_0x000107c61174(param_4);
    uVar6 = puVar1[3];
    puVar1[3] = param_4;
    func_0x000107c61170(uVar6);
    func_0x000107c61174(param_5);
    uVar6 = puVar1[4];
    puVar1[4] = param_5;
    func_0x000107c61170(uVar6);
    puVar2 = PTR_PTR_1126b6bb8;
    func_0x000107c61160();
    uVar6 = puVar1[7];
    puVar1[7] = puVar2;
    func_0x000107c61170(uVar6);
    func_0x000107c61144(auStack_88,puVar1);
    puVar2 = PTR_PTR_1126ae960;
    puVar3 = PTR_PTR_1126b6bc0;
    func_0x000107c41684(PTR_PTR_1126b6bc0);
    func_0x000107c61180();
    func_0x000107c5e8c4(puVar2);
    func_0x000107c61180();
    puVar4 = PTR_PTR_1126ae970;
    func_0x000107c4ca90(PTR_PTR_1126ae970);
    func_0x000107c61180();
    func_0x000107c61174(PTR___dispatch_main_q_11034be20);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    puStack_a0 = &UNK_105265c20;
    puStack_98 = &UNK_1108434b0;
    func_0x000107c6111c(auStack_90,auStack_88);
    func_0x000107c5e094(param_6);
    func_0x000107c611b0();
    func_0x000107c61170(PTR___dispatch_main_q_11034be20);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar3);
    uVar6 = param_3;
    func_0x000107c405a8();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_b8,auStack_88);
    uVar5 = uVar6;
    func_0x000107c5c320();
    func_0x000107c61180();
    uVar7 = puVar1[2];
    puVar1[2] = uVar5;
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c61120(auStack_b8);
    func_0x000107c61120(auStack_90);
    func_0x000107c61120(auStack_88);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1000792c4; end: 1000792cb; +[SCAttributedWorkSchedulingTask delayedEntryPoint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000792c4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309be68) = 2;
  *(undefined8 *)(lVar1 + _DAT_11309be70) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1000792cc; end: 100079327;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000792cc(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309be68) = param_3;
  *(undefined8 *)(lVar1 + _DAT_11309be70) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100079328; end: 10007935f; +[SCAttributedTask workScheduling:] */

void FUN_100079328(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_100079380();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100079360; end: 10007937f;  */

void FUN_100079360(void)

{
  func_0x000107c61168(&PTR_PTR_1129e0050);
  return;
}



/* Entry: 100079380; end: 1000795e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100079380(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  FUN_100079360();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined1 *)(lVar3 + _DAT_11309ac58) = 0x23;
  *(undefined8 *)(lVar3 + _DAT_11309ac60) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac68) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac70) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac78) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac80) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac88) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac90) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac98) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309aca0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309aca8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acb0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acb8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acc0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acc8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acd0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acd8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ace0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ace8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acf0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acf8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad00) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad08) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad10) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad18) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad20) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad28) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad30) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad38) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad40) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad48) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad50) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad58) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad60) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad68) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad70) = 0;
  *(long *)(lVar3 + _DAT_11309ad78) = param_1;
  *(undefined8 *)(lVar3 + _DAT_11309ad80) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad88) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad90) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad98) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ada0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ada8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309adb0) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1000795e4; end: 1000795eb; +[SCSnapTaskPriority medium] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000795e4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_113096e78) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1000795ec; end: 10007963b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000795ec(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_113096e78) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10007963c; end: 100079767; -[SCIdleMonitorV1 waitUntilStartCompleteOrBackgroundLaunchIdleForAttributedTask:priority:callbackQueue:block:] */

void FUN_10007963c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puVar1 = PTR_PTR_1126e02e8;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c5ae20(puVar1,param_2,param_3);
  if ((int)puVar1 == 0) {
    puVar1 = PTR_PTR_1126e02e8;
    func_0x000107c44064(PTR_PTR_1126e02e8,param_2,param_3);
    func_0x000107c61180();
    func_0x000107c5e098(param_1,param_2,puVar1,param_5,param_6);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_5);
    param_1 = 0;
  }
  else {
    puVar1 = PTR_PTR_1126ae970;
    func_0x000107c44e60(PTR_PTR_1126ae970);
    func_0x000107c61180();
    func_0x000107c3c4b8(param_1,param_2,param_3,puVar1,param_4,param_5,param_6);
    func_0x000107c61180();
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_5);
  }
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 100079768; end: 10007b55f; +[_TtC15SnapAttribution24AttributedTaskObjcHelper shouldUseWorkSchedulerFor:] */

uint FUN_100079768(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x0001000797a0();
  func_0x000107c61170(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 10007b560; end: 10007bf73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10007b560(long param_1)

{
  byte bVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + _DAT_11309ac58)) {
  case 0:
    uVar3 = *(ulong *)(param_1 + _DAT_11309ac60);
    if (uVar3 != 0) {
      func_0x000107c61174();
      func_0x0001009323c0();
      return uVar3;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bed4);
    (*pcVar2)();
  case 1:
    if (*(long *)(param_1 + _DAT_11309ac68) != 0) {
      return (ulong)*(byte *)(*(long *)(param_1 + _DAT_11309ac68) + _DAT_11309ab00);
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bf00);
    (*pcVar2)();
  case 2:
    if (*(long *)(param_1 + _DAT_11309ac70) != 0) {
      return 0;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bef0);
    (*pcVar2)();
  case 3:
    if (*(long *)(param_1 + _DAT_11309ac78) != 0) {
      return 1;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bef8);
    (*pcVar2)();
  case 4:
    if (*(long *)(param_1 + _DAT_11309ac80) != 0) {
      return (ulong)*(byte *)(*(long *)(param_1 + _DAT_11309ac80) + _DAT_11309ab70);
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bed8);
    (*pcVar2)();
  case 5:
    uVar3 = *(ulong *)(param_1 + _DAT_11309ac88);
    if (uVar3 != 0) {
      func_0x000107c61174();
      FUN_1000ab694();
      return uVar3 & 0xff;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bf14);
    (*pcVar2)();
  case 6:
    if (*(long *)(param_1 + _DAT_11309ac90) != 0) {
      return (ulong)*(byte *)(*(long *)(param_1 + _DAT_11309ac90) + _DAT_11309ade8);
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bf20);
    (*pcVar2)();
  case 7:
    uVar3 = *(ulong *)(param_1 + _DAT_11309ac98);
    if (uVar3 != 0) {
      func_0x000107c61174();
      func_0x0001000b8600();
      return uVar3 & 0xff;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10007befc);
    (*pcVar2)();
  case 8:
    lVar4 = *(long *)(param_1 + _DAT_11309aca0);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bf2c);
      (*pcVar2)();
    }
    if (*(char *)(lVar4 + _DAT_11309afd8) == '\0') {
      if (*(long *)(lVar4 + _DAT_11309aff0) != 0) {
        return (ulong)*(byte *)(*(long *)(lVar4 + _DAT_11309aff0) + _DAT_11309afd0);
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bf68);
      (*pcVar2)();
    }
    if (*(char *)(lVar4 + _DAT_11309afd8) != '\x01') {
      if (*(long *)(lVar4 + _DAT_11309afe0) != 0) {
        return 5;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bf6c);
      (*pcVar2)();
    }
    if (*(long *)(lVar4 + _DAT_11309afe8) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bf60);
      (*pcVar2)();
    }
    break;
  case 9:
    lVar4 = *(long *)(param_1 + _DAT_11309aca8);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bee4);
      (*pcVar2)();
    }
    bVar1 = *(byte *)(lVar4 + _DAT_11309ae20);
    if (1 < bVar1) {
      if (bVar1 == 2) {
        if (*(long *)(lVar4 + _DAT_11309ae28) != 0) {
          return (ulong)*(byte *)(*(long *)(lVar4 + _DAT_11309ae28) + _DAT_11309ae30);
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bf70);
        (*pcVar2)();
      }
      if (bVar1 == 3) {
        return 5;
      }
      return 6;
    }
    if (bVar1 == 0) {
      return 3;
    }
    break;
  case 10:
    if (*(long *)(param_1 + _DAT_11309acb0) != 0) {
      return (ulong)*(byte *)(*(long *)(param_1 + _DAT_11309acb0) + _DAT_11309b1b8);
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bf28);
    (*pcVar2)();
  case 0xb:
    uVar3 = *(ulong *)(param_1 + _DAT_11309acb8);
    if (uVar3 != 0) {
      func_0x000107c61174();
      func_0x0001006e1ef4();
      return uVar3 & 0xff;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bed0);
    (*pcVar2)();
  case 0xc:
    uVar3 = *(ulong *)(param_1 + _DAT_11309acc0);
    if (uVar3 != 0) {
      func_0x000107c61174();
      func_0x00010075e464();
      return uVar3 & 0xff;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bee0);
    (*pcVar2)();
  case 0xd:
    uVar3 = *(ulong *)(param_1 + _DAT_11309acc8);
    if (uVar3 != 0) {
      func_0x000107c61174();
      func_0x0001048c4404();
      return uVar3;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bf1c);
    (*pcVar2)();
  case 0xe:
    if (*(long *)(param_1 + _DAT_11309acd0) != 0) {
      return (ulong)*(byte *)(*(long *)(param_1 + _DAT_11309acd0) + _DAT_11309b330);
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bec8);
    (*pcVar2)();
  case 0xf:
    if (*(long *)(param_1 + _DAT_11309acd8) != 0) {
      return 2;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bef4);
    (*pcVar2)();
  case 0x10:
    uVar3 = *(ulong *)(param_1 + _DAT_11309ace0);
    if (uVar3 != 0) {
      func_0x000107c61174();
      FUN_1003e3980();
      return uVar3;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bec4);
    (*pcVar2)();
  case 0x11:
    if (*(long *)(param_1 + _DAT_11309ace8) != 0) {
      return 3;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bf08);
    (*pcVar2)();
  case 0x12:
    uVar3 = *(ulong *)(param_1 + _DAT_11309acf0);
    if (uVar3 != 0) {
      func_0x000107c61174();
      FUN_1007dd768();
      return uVar3;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bf24);
    (*pcVar2)();
  case 0x13:
    uVar3 = *(ulong *)(param_1 + _DAT_11309acf8);
    if (uVar3 != 0) {
      func_0x000107c61174();
      func_0x0001004ff9bc();
      return uVar3 & 0xff;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bf40);
    (*pcVar2)();
  case 0x14:
    uVar3 = *(ulong *)(param_1 + _DAT_11309ad00);
    if (uVar3 != 0) {
      func_0x000107c61174();
      func_0x0001000b79c8();
      return uVar3;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bf10);
    (*pcVar2)();
  case 0x15:
    lVar4 = *(long *)(param_1 + _DAT_11309ad08);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bf18);
      (*pcVar2)();
    }
    bVar1 = *(byte *)(lVar4 + _DAT_11309b650);
    if (bVar1 < 3) {
      if (bVar1 == 0) {
        return 2;
      }
      if (bVar1 == 1) {
        return 3;
      }
      if (*(long *)(lVar4 + _DAT_11309b658) != 0) {
        return (ulong)(*(char *)(*(long *)(lVar4 + _DAT_11309b658) + _DAT_11309b660) == '\x01');
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bf74);
      (*pcVar2)();
    }
    if (4 < bVar1) {
      if (bVar1 == 5) {
        return 6;
      }
      return 7;
    }
    if (bVar1 != 3) {
      return 5;
    }
    break;
  case 0x16:
    uVar3 = *(ulong *)(param_1 + _DAT_11309ad10);
    if (uVar3 != 0) {
      func_0x000107c61174();
      func_0x00010085cfb4();
      return uVar3 & 0xff;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bf38);
    (*pcVar2)();
  case 0x17:
    if (*(long *)(param_1 + _DAT_11309ad18) != 0) {
      return (ulong)*(byte *)(*(long *)(param_1 + _DAT_11309ad18) + _DAT_11309b850);
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bf48);
    (*pcVar2)();
  case 0x18:
    uVar3 = *(ulong *)(param_1 + _DAT_11309ad20);
    if (uVar3 != 0) {
      func_0x000107c61174();
      func_0x0001048cf29c();
      return uVar3;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10007beec);
    (*pcVar2)();
  case 0x19:
    if (*(long *)(param_1 + _DAT_11309ad28) != 0) {
      return (ulong)*(byte *)(*(long *)(param_1 + _DAT_11309ad28) + _DAT_11309ba80);
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bee8);
    (*pcVar2)();
  case 0x1a:
    if (*(long *)(param_1 + _DAT_11309ad30) != 0) {
      return (ulong)*(byte *)(*(long *)(param_1 + _DAT_11309ad30) + _DAT_11309baf0);
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bf58);
    (*pcVar2)();
  case 0x1b:
    if (*(long *)(param_1 + _DAT_11309ad38) != 0) {
      return (ulong)*(byte *)(*(long *)(param_1 + _DAT_11309ad38) + _DAT_11309bb60);
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bebc);
    (*pcVar2)();
  case 0x1c:
    uVar3 = *(ulong *)(param_1 + _DAT_11309ad40);
    if (uVar3 != 0) {
      func_0x000107c61174();
      func_0x0001048d4c94();
      return uVar3;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bf4c);
    (*pcVar2)();
  case 0x1d:
    if (*(long *)(param_1 + _DAT_11309ad48) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bf50);
      (*pcVar2)();
    }
    break;
  case 0x1e:
    uVar3 = *(ulong *)(param_1 + _DAT_11309ad50);
    if (uVar3 != 0) {
      func_0x000107c61174();
      func_0x0001048d3a30();
      return uVar3 & 0xff;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bf30);
    (*pcVar2)();
  case 0x1f:
    lVar4 = *(long *)(param_1 + _DAT_11309ad58);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bf04);
      (*pcVar2)();
    }
    if (*(char *)(lVar4 + _DAT_11309bb98) == '\0') {
      if (*(long *)(lVar4 + _DAT_11309bba0) != 0) {
        return (ulong)*(byte *)(*(long *)(lVar4 + _DAT_11309bba0) + _DAT_11309bba8);
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bf64);
      (*pcVar2)();
    }
    if (*(char *)(lVar4 + _DAT_11309bb98) == '\x01') {
      return 3;
    }
    break;
  case 0x20:
    uVar3 = *(ulong *)(param_1 + _DAT_11309ad60);
    if (uVar3 != 0) {
      func_0x000107c61174();
      FUN_1000ac380();
      return uVar3;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bf34);
    (*pcVar2)();
  case 0x21:
    if (*(long *)(param_1 + _DAT_11309ad68) != 0) {
      return (ulong)*(byte *)(*(long *)(param_1 + _DAT_11309ad68) + _DAT_11309bd40);
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10007becc);
    (*pcVar2)();
  case 0x22:
    if (*(long *)(param_1 + _DAT_11309ad70) != 0) {
      return (ulong)*(byte *)(*(long *)(param_1 + _DAT_11309ad70) + _DAT_11309be30);
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bec0);
    (*pcVar2)();
  case 0x23:
    lVar4 = *(long *)(param_1 + _DAT_11309ad78);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10007beb4);
      (*pcVar2)();
    }
    if (*(char *)(lVar4 + _DAT_11309be68) == '\0') {
      return 5;
    }
    if (*(char *)(lVar4 + _DAT_11309be68) != '\x01') {
      return 6;
    }
    if (*(long *)(lVar4 + _DAT_11309be70) != 0) {
      return (ulong)*(byte *)(*(long *)(lVar4 + _DAT_11309be70) + _DAT_11309be78);
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bf5c);
    (*pcVar2)();
  case 0x24:
    if (*(long *)(param_1 + _DAT_11309ad80) != 0) {
      return (ulong)(*(char *)(*(long *)(param_1 + _DAT_11309ad80) + _DAT_11309b0c8) == '\x01');
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10007beb8);
    (*pcVar2)();
  case 0x25:
    if (*(long *)(param_1 + _DAT_11309ad88) != 0) {
      return (ulong)(*(char *)(*(long *)(param_1 + _DAT_11309ad88) + _DAT_11309b2f8) == '\x01');
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10007beb0);
    (*pcVar2)();
  case 0x26:
    if (*(long *)(param_1 + _DAT_11309ad90) != 0) {
      return (ulong)*(byte *)(*(long *)(param_1 + _DAT_11309ad90) + _DAT_11309bdf8);
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bf54);
    (*pcVar2)();
  case 0x27:
    if (*(long *)(param_1 + _DAT_11309ad98) != 0) {
      return (ulong)*(byte *)(*(long *)(param_1 + _DAT_11309ad98) + _DAT_11309bd78);
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bf3c);
    (*pcVar2)();
  case 0x28:
    if (*(long *)(param_1 + _DAT_11309ada0) != 0) {
      return (ulong)*(byte *)(*(long *)(param_1 + _DAT_11309ada0) + _DAT_11309bc88);
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bedc);
    (*pcVar2)();
  case 0x29:
    if (*(long *)(param_1 + _DAT_11309ada8) != 0) {
      return (ulong)*(byte *)(*(long *)(param_1 + _DAT_11309ada8) + _DAT_11309bab8);
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bf0c);
    (*pcVar2)();
  case 0x2a:
    if (*(long *)(param_1 + _DAT_11309adb0) != 0) {
      return (ulong)(*(char *)(*(long *)(param_1 + _DAT_11309adb0) + _DAT_11309aba8) == '\x01');
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10007bf44);
    (*pcVar2)();
  }
  return 4;
}



/* Entry: 10007bf74; end: 10007c01f;  */

void FUN_10007bf74(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0x10,0x10007bf74);
  (*pcVar1)();
}



/* Entry: 10007c020; end: 10007c067;  */

undefined8 FUN_10007c020(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10007b560();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 10007c068; end: 10007c0eb;  */

undefined4 FUN_10007c068(void)

{
  if (lRam00000001137fc0c0 != -1) {
    FUN_10002a2fc(0x1137fc0c0,&PTR___NSConcreteGlobalBlock_110d66478);
  }
  return uRam00000001137fc02c;
}



/* Entry: 10007c0ec; end: 10007c16f; +[_TtC15SnapAttribution24AttributedTaskObjcHelper getFeatureNameFrom:] */

void FUN_10007c0ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_3;
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_10007b560();
  uVar2 = uVar1;
  uVar3 = param_2;
  FUN_10007c170();
  FUN_10007d980(uVar1,param_2,uVar4);
  func_0x000107c61170(param_3);
  func_0x000107c5fadc(uVar2,uVar3);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10007d980; end: 10007d997;  */

void FUN_10007d980(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if ((param_3 & 0xfc) != 0x6c) {
    return;
  }
  if ((param_3 & 3) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  return;
}



/* Entry: 10007d998; end: 10007daeb; -[SCIdleMonitorV1 waitUntilStartCompleteOrBackgroundLaunchIdleForTag:callbackQueue:block:] */

void FUN_10007d998(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  if (*(long *)(param_1 + 0x50) == 2) {
    func_0x000107c5e090(param_1);
  }
  else {
    func_0x000107c61144(auStack_48,param_1);
    func_0x000107c6111c(auStack_50,auStack_48);
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c3ce0c(param_1);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_4);
    func_0x000107c61120(auStack_50);
    func_0x000107c61120(auStack_48);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10007daec; end: 10007dcbf; -[SCIdleMonitorV1 _waitUntilStartCompleteWithQueue:requestQueueType:tag:callbackQueue:block:executionRequestMade:] */

void FUN_10007daec(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  bVar1 = param_6 == PTR___dispatch_main_q_11034be20;
  if ((*(char *)(param_1 + 0x4b) == '\x01') &&
     (uVar2 = param_1, func_0x000107c3c7d8(), (uVar2 & 1) == 0)) {
    FUN_10007380c(param_6,param_7);
  }
  else {
    func_0x000107c61144(auStack_68,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    func_0x000107c6111c(auStack_80,auStack_68);
    func_0x000107c61174(param_6);
    func_0x000107c61174(param_7);
    func_0x000107c61174(param_5);
    uStack_78 = param_4;
    uStack_70 = bVar1;
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_8);
    func_0x000107c4e590(uVar3);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_6);
    func_0x000107c61120(auStack_80);
    func_0x000107c61120(auStack_68);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10007dcc0; end: 10007dd2b; -[SCMainQueuePerformerImpl performImmediatelyIfCurrentPerformer:] */

/* WARNING: Possible PIC construction at 0x00010007dcf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010007dcfc) */

void FUN_10007dcc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_1;
  func_0x000107c49be8();
  if ((int)uVar1 == 0) {
    func_0x000107c4e524(param_1,param_2,param_3);
  }
  else {
    func_0x000107c61184(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10007dd2c; end: 10007dd37; -[SCMainQueuePerformerImpl isCurrentPerformer] */

void FUN_10007dd2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c077490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSThread_1126b47e0,PTR_s_isMainThread_1125fb730);
  return;
}



/* Entry: 10007dd38; end: 10007dd97;  */

void FUN_10007dd38(long param_1,long param_2)

{
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x28));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x30));
  func_0x000107c60bc8(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),7);
  func_0x000107c60bc8(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x48,param_2 + 0x48);
  return;
}



/* Entry: 10007dd98; end: 10007dda3;  */

void FUN_10007dd98(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x20,param_2 + 0x20);
  return;
}



/* Entry: 10007dda4; end: 10007dde3;  */

void FUN_10007dda4(long param_1,long param_2)

{
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
  func_0x000107c60bc8(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x30,param_2 + 0x30);
  return;
}



/* Entry: 10007dde4; end: 10007de93;  */

/* WARNING: Possible PIC construction at 0x00010007de6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010007de70) */

void FUN_10007dde4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = (undefined *)(param_1 + 0x48);
  func_0x000107c61148();
  if (puVar1 != (undefined *)0x0) {
    if ((puVar1[0x4b] == '\x01') &&
       (puVar2 = puVar1, func_0x000107c3c7d8(), ((ulong)puVar2 & 1) == 0)) {
      FUN_10007380c(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x38));
    }
    else {
      puVar1 = PTR_PTR_1126e02e0;
      func_0x000107c610f4(PTR_PTR_1126e02e0);
      func_0x000107c45b78();
      func_0x000107c3d798(*(undefined8 *)(param_1 + 0x30));
      lVar3 = *(long *)(param_1 + 0x40);
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 0x10))(lVar3,puVar1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10007de94; end: 10007e003; -[SCIdleMonitorExecutionRequest initWithCallbackQueue:callbackBlock:graphene:tag:isMainThread:requestQueueType:] */

undefined1 *
FUN_10007de94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_58 = PTR_PTR_112706488;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    uVar2 = param_4;
    func_0x000107c61184();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar5);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_6;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0x30) = param_7;
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    uVar3 = 0;
    func_0x000107c60f0c();
    *(ulong *)((long)puVar1 + 0x20) = uVar3 / 1000;
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    puVar4 = (undefined1 *)puVar1;
    func_0x000107c3b8a4(puVar1);
    func_0x000107c61180();
    FUN_10007e02c(uVar2,puVar4,1);
    func_0x000107c61170(puVar4);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10007e004; end: 10007e02b; -[SCIdleMonitorExecutionRequest _getRequestQueueTypeLoggingName] */

undefined ** FUN_10007e004(long param_1)

{
  if (*(ulong *)(param_1 + 0x28) < 4) {
    return (undefined **)(&PTR_PTR_110d24c70)[*(ulong *)(param_1 + 0x28)];
  }
  return &PTR____CFConstantStringClassReference_110db8b78;
}



/* Entry: 10007e02c; end: 10007e19f;  */

void FUN_10007e02c(long param_1,long *param_2,undefined1 *param_3,undefined1 *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *unaff_x22;
  long *plStack_e0;
  undefined1 uStack_d8;
  undefined1 *puStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = param_2;
  puVar4 = param_3;
  func_0x000107c61174(param_2);
  plVar6 = (long *)0x0;
  if (param_1 != 0) {
    plVar6 = *(long **)(param_1 + 8);
    func_0x000107c61174(param_2);
    if (param_2 == (long *)0x0) {
      plVar1 = (long *)&UNK_10f77f6f4;
    }
    else {
      plVar1 = param_2;
      func_0x000107c61178(param_2);
      func_0x000107c3ac4c();
    }
    func_0x000107c61170(param_2);
    FUN_10002b838(auStack_60,plVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    FUN_10007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    plVar1 = (long *)&UNK_110d24d30;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110d24d30,&uStack_80);
    puStack_68 = (undefined1 *)&uStack_80;
    FUN_10007e5dc(&puStack_68);
    puVar4 = (undefined1 *)puVar5;
    param_4 = param_3;
    unaff_x22 = &uStack_80;
    if (cStack_49 < '\0') {
      func_0x000107c60e14(auStack_60[0]);
      puVar4 = (undefined1 *)puVar5;
      param_4 = param_3;
      unaff_x22 = &uStack_80;
    }
  }
  plVar2 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_2);
  plVar3 = plVar2;
  func_0x000107c60bd8();
  pcStack_88 = FUN_10007e1a0;
  ppuStack_b0 = &puStack_90;
  plStack_a0 = plVar2;
  plStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  if (plVar1 < (long *)0xaaaaaaaaaaaaaab) {
    plVar6 = plVar3 + 2;
    FUN_1000481c8();
    *plVar3 = (long)plVar6;
    plVar3[1] = (long)plVar6;
    plVar3[2] = (long)(plVar6 + (long)plVar1 * 3);
    return;
  }
  func_0x000104bdcf60();
  pcStack_a8 = FUN_10007e1e8;
  uStack_d8 = 0;
  plStack_e0 = plVar3;
  puStack_d0 = (undefined1 *)unaff_x22;
  plStack_c8 = plVar6;
  plStack_c0 = plVar2;
  plStack_b8 = param_2;
  if (param_4 != (undefined1 *)0x0) {
    FUN_10007e1a0();
    FUN_10007e314(plVar3,plVar1,puVar4,param_4);
  }
  uStack_d8 = 1;
  FUN_10007e37c(&plStack_e0);
  return;
}



/* Entry: 10007e1a0; end: 10007e1e7;  */

void FUN_10007e1a0(long *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long *plStack_60;
  undefined1 uStack_58;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    plVar1 = param_1 + 2;
    FUN_1000481c8();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 3);
    return;
  }
  func_0x000104bdcf60();
  uStack_58 = 0;
  plStack_60 = param_1;
  if (param_4 != 0) {
    FUN_10007e1a0();
    FUN_10007e314(param_1,param_2,param_3,param_4);
  }
  uStack_58 = 1;
  FUN_10007e37c(&plStack_60);
  return;
}



/* Entry: 10007e1e8; end: 10007e267;  */

void FUN_10007e1e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    FUN_10007e1a0(param_1,param_4);
    FUN_10007e314(param_1,param_2,param_3,param_4);
  }
  uStack_38 = 1;
  FUN_10007e37c(&uStack_40);
  return;
}



/* Entry: 10007e268; end: 10007e2ff;  */

long FUN_10007e268(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_48 = 0;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (; lStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 0x18) {
    func_0x000107c60c94(param_4,param_2);
    param_4 = lStack_38 + 0x18;
  }
  uStack_48 = 1;
  FUN_10007e34c(&uStack_60);
  return param_4;
}



/* Entry: 10007e300; end: 10007e313;  */

void FUN_10007e300(void)

{
  FUN_10007e268();
  return;
}



/* Entry: 10007e314; end: 10007e34b;  */

void FUN_10007e314(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_10007e300();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10007e34c; end: 10007e37b;  */

long FUN_10007e34c(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    func_0x000104bdd58c(param_1);
  }
  return param_1;
}



/* Entry: 10007e37c; end: 10007e3a7;  */

long FUN_10007e37c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10007e5dc(param_1);
  }
  return param_1;
}



/* Entry: 10007e3a8; end: 10007e3bf;  */

ulong FUN_10007e3a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int extraout_w10;
  ulong uVar2;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 8);
  uStack_38 = param_4;
  do {
    func_0x00010007e3b0();
  } while (extraout_w10 != 0);
  uVar2 = *(ulong *)(lVar1 + 0x68);
  FUN_100078460();
  lStack_48 = lVar1;
  FUN_10007e464(auStack_40,param_2,param_3,&uStack_38,&lStack_48);
  FUN_10007e4cc(uVar2,auStack_40);
  FUN_10007e5b0(auStack_40);
  return uVar2 & 0xffffffff;
}



/* Entry: 10007e3c0; end: 10007e44f;  */

ulong FUN_10007e3c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int extraout_w10;
  ulong uVar1;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  uStack_38 = param_4;
  do {
    func_0x00010007e3b0();
  } while (extraout_w10 != 0);
  uVar1 = *(ulong *)(param_1 + 0x68);
  FUN_100078460();
  lStack_48 = param_1;
  FUN_10007e464(auStack_40,param_2,param_3,&uStack_38,&lStack_48);
  FUN_10007e4cc(uVar1,auStack_40);
  FUN_10007e5b0(auStack_40);
  return uVar1 & 0xffffffff;
}



/* Entry: 10007e450; end: 10007e463;  */

void FUN_10007e450(void)

{
  return;
}



/* Entry: 10007e464; end: 10007e4c3;  */

void FUN_10007e464(undefined8 *param_1)

{
  long *extraout_x8;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  
  FUN_10007e450();
  FUN_10007e4c4();
  uVar1 = *unaff_x20;
  uVar2 = *unaff_x19;
  *param_1 = unaff_x22;
  uVar3 = *unaff_x21;
  param_1[2] = unaff_x21[1];
  param_1[1] = uVar3;
  uVar3 = unaff_x21[2];
  unaff_x21[1] = 0;
  unaff_x21[2] = 0;
  *unaff_x21 = 0;
  param_1[3] = uVar3;
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  *extraout_x8 = (long)param_1;
  return;
}



/* Entry: 10007e4c4; end: 10007e4cb;  */

void FUN_10007e4c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x30);
  return;
}



/* Entry: 10007e4cc; end: 10007e52f;  */

int FUN_10007e4cc(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 in_ZR;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  
  func_0x000107c60d88();
  FUN_10007e544(*(long *)(param_1 + 0x40) + (ulong)*(uint *)(param_1 + 0x48) * 8,param_2);
  func_0x00010007e57c();
  if ((bool)in_ZR) {
    iVar1 = 0;
    if (extraout_w10 + 1 != extraout_w8) {
      iVar1 = extraout_w10 + 1;
    }
    *(int *)(param_1 + 0x4c) = iVar1;
  }
  func_0x00010007e59c();
  func_0x000107c60d8c(param_1);
  return extraout_w9 - extraout_w10_00 * extraout_w8_00;
}



/* Entry: 10007e530; end: 10007e543;  */

void FUN_10007e530(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  return;
}



/* Entry: 10007e544; end: 10007e563;  */

void FUN_10007e544(void)

{
  FUN_10007e530();
  FUN_10007e564();
  return;
}



/* Entry: 10007e564; end: 10007e5af;  */

void FUN_10007e564(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x000107c278a8(lVar1 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}


