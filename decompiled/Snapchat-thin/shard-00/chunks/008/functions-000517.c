/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1009ff3a0; end: 1009ff3c7;  */

void FUN_1009ff3a0(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1009ff3c8; end: 1009ff3cf;  */

void FUN_1009ff3c8(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_60);
  FUN_1000a0d5c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  puVar2 = PTR_PTR_1126a72c0;
  func_0x000107c610f8();
  uVar3 = uStack_60;
  func_0x000107c61174(uStack_60);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar4 = uStack_58;
  func_0x000107c61174(uStack_58);
  uVar5 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  uVar5 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar5);
  uVar6 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef85a90);
  func_0x000107c5a49c(uVar5);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c3e740(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  *param_1 = lVar1;
  return;
}



/* Entry: 1009ff3d0; end: 1009ff54f;  */

void FUN_1009ff3d0(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_1000a0d5c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  puVar1 = PTR_PTR_1126a72c0;
  func_0x000107c610f8();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar3 = uStack_58;
  func_0x000107c61174(uStack_58);
  uVar4 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar4);
  uVar5 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef85a90);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c3e740(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  *param_1 = param_2;
  return;
}



/* Entry: 1009ff550; end: 1009fffbf;  */

void FUN_1009ff550(long param_1)

{
  long lVar1;
  long lVar2;
  
  *(undefined4 *)(param_1 + 0x10) = 2;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x28) = 2;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  lVar1 = param_1 + 0x38;
  lVar2 = 0x60;
  *(undefined4 *)(param_1 + 0x30) = 0;
  do {
    func_0x0001006a23b8(lVar1);
    lVar1 = lVar1 + 0x18;
    lVar2 = lVar2 + -0x18;
  } while (lVar2 != 0);
  for (lVar1 = 0; lVar1 != 4; lVar1 = lVar1 + 1) {
    *(undefined1 *)(param_1 + 0x98 + lVar1) = 0;
  }
  lVar1 = *(long *)(param_1 + 0xa0);
  *(long *)(param_1 + 0xa0) = 0;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    func_0x0001009fb4ac(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1009fffc0; end: 100a00017; -[SCBlizzardCrashToReportProviderEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x0001009ffff4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001009ffff8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009fffc0(long param_1)

{
  param_1 = param_1 + _DAT_1127579cc;
  func_0x000107c61148(param_1);
  func_0x000107c408d0();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a00018; end: 100a0001b; +[SCBlizzardInvariantChecker setCrashLogger:] */

void FUN_100a00018(void)

{
  return;
}



/* Entry: 100a0001c; end: 100a00047;  */

void FUN_100a0001c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100a00048; end: 100a00053;  */

undefined ** FUN_100a00048(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 100a00054; end: 100a000df;  */

void FUN_100a00054(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100a000e0,param_1);
  return;
}



/* Entry: 100a000e0; end: 100a000e7;  */

void FUN_100a000e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014aaefc);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a000e8; end: 100a0016b;  */

void FUN_100a000e8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014aaefc,param_2,FUN_100a0016c,param_2,&UNK_1014aaf00,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a0016c; end: 100a00193;  */

void FUN_100a0016c(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 100a00194; end: 100a0019f;  */

void FUN_100a00194(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_10009e150();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  func_0x000100a00250(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 100a001a0; end: 100a003f3;  */

void FUN_100a001a0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_10009e150();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  func_0x000100a00250(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 100a003f4; end: 100a004e7; -[SCCameraS2REntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100a0046c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a0047c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a004bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a00480) */
/* WARNING: Removing unreachable block (ram,0x000100a00470) */
/* WARNING: Removing unreachable block (ram,0x000100a004c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a003f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b7350;
  func_0x000107c610f4();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1 + _DAT_112721550;
    func_0x000107c61148(lVar3);
  }
  func_0x000107c3f0f4(lVar3);
  func_0x000107c61180();
  func_0x000107c45bd0(puVar1,param_2,lVar3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721544);
  *(undefined **)(param_1 + _DAT_112721544) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100a004e8; end: 100a0059b; -[SCCameraS2RLogProvider initWithCameraHardwareResource:] */

undefined1 * FUN_100a004e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e77a8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100a0059c; end: 100a00657; -[SCBatteryPageViewReporter _didChangeCurrentPageEvent:] */

void FUN_100a0059c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_100a00658;
  puStack_20 = &UNK_110872390;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  puStack_50 = &UNK_105818f8c;
  puStack_48 = &UNK_1108b5f70;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x000107c4c730(param_3,param_2,&puStack_38,&puStack_60,&PTR___NSConcreteGlobalBlock_1108b5fa0
                      ,&PTR___NSConcreteGlobalBlock_1108b5fc0);
  return;
}



/* Entry: 100a00658; end: 100a006df;  */

/* WARNING: Possible PIC construction at 0x000100a006c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a006c8) */

void FUN_100a00658(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c441b4(PTR_PTR_1126afdd8,param_3,param_3);
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126afdd8;
  func_0x000107c441b4(PTR_PTR_1126afdd8);
  func_0x000107c61180();
  func_0x000107c41d48(param_1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100a006e0; end: 100a00787; -[SCBatteryPageViewReporter didStartPageViewWithNewPageName:prevPageName:startTimestamp:] */

void FUN_100a006e0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c4e2e4(param_1,uVar3);
  lVar1 = param_2;
  func_0x000107c3afdc();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c40404();
  func_0x000107c61170(param_4);
  func_0x000107c61170(lVar1);
  if ((int)lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf72af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,*(undefined8 *)(param_2 + 0x10),
               PTR_s_didCameraStartBeingVisibleAtTime_1125ba460);
    return;
  }
  return;
}



/* Entry: 100a00788; end: 100a007af;  */

undefined ** FUN_100a00788(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 100a007b0; end: 100a007ef;  */

void FUN_100a007b0(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100a00794();
  FUN_100082720("SCCameraStabilityServiceProviderWrapperScopeInitializationPluginProvider",0x48,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100a007f0; end: 100a007f7;  */

void FUN_100a007f0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014ab368);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a007f8; end: 100a0087b;  */

void FUN_100a007f8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014ab368,param_2,&UNK_1014ab36c,param_2,&UNK_1014ab394,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a0087c; end: 100a0094f; -[SCBatteryLogger pageViewDidStartWithPageName:pageViewStartTime:previousPageName:] */

void FUN_100a0087c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = param_1;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c5ccc4(PTR_PTR_1126ae4f0);
  uVar1 = *(undefined8 *)(param_2 + 0xb8);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_100a14668;
  puStack_70 = &UNK_110876440;
  uStack_68 = param_4;
  lStack_60 = param_2;
  uStack_58 = param_5;
  uStack_50 = param_1;
  uStack_48 = uVar2;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c4e524(uVar1,param_3,&puStack_88);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_68);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 100a00950; end: 100a00a5b; +[SCAppResourceUsage totalCpuTime] */

double FUN_100a00950(double param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  puVar2 = PTR_PTR_1126ae4f0;
  func_0x000107c408b8();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  dVar5 = param_1;
  dVar6 = -1.0;
  if (puVar3 != (undefined *)0x0) {
    puVar4 = puVar2;
    func_0x000107c4d9e8(puVar2,param_3,&PTR____CFConstantStringClassReference_110f3ed18);
    func_0x000107c61180();
    func_0x000107c4223c();
    dVar5 = param_1;
    func_0x000107c61170(puVar4);
    dVar6 = param_1;
  }
  func_0x000107c61170(puVar3);
  puVar3 = puVar2;
  func_0x000107c4d9e8(puVar2,param_3,&PTR____CFConstantStringClassReference_110f3ecf8);
  func_0x000107c61180();
  dVar7 = -1.0;
  if (puVar3 != (undefined *)0x0) {
    puVar4 = puVar2;
    func_0x000107c4d9e8(puVar2,param_3,&PTR____CFConstantStringClassReference_110f3ecf8);
    func_0x000107c61180();
    func_0x000107c4223c();
    func_0x000107c61170(puVar4);
    dVar7 = dVar5;
  }
  func_0x000107c61170(puVar3);
  bVar1 = true;
  if ((dVar7 != -1.0) && (bVar1 = false, !NAN(dVar6))) {
    bVar1 = dVar6 == -1.0;
  }
  dVar6 = dVar6 + dVar7;
  if (bVar1) {
    dVar6 = -1.0;
  }
  func_0x000107c61170(puVar2);
  return dVar6;
}



/* Entry: 100a00a5c; end: 100a00a67;  */

undefined ** FUN_100a00a5c(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 100a00a68; end: 100a00af3;  */

void FUN_100a00a68(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100a00af4,param_1);
  return;
}



/* Entry: 100a00af4; end: 100a00afb;  */

void FUN_100a00af4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014ad8c4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a00afc; end: 100a00b7f;  */

void FUN_100a00afc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014ad8c4,param_2,FUN_100a00b80,param_2,&UNK_1014ad8c8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a00b80; end: 100a00ba7;  */

void FUN_100a00b80(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 100a00ba8; end: 100a00bb3;  */

void FUN_100a00ba8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1000a0404();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  func_0x000100a00c64(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 100a00bb4; end: 100a00e03;  */

void FUN_100a00bb4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1000a0404();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  func_0x000100a00c64(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 100a00e04; end: 100a00e97; -[SCConfigManagerBackgroundSyncEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100a00e40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a00e44) */
/* WARNING: Removing unreachable block (ram,0x000100a00e60) */
/* WARNING: Removing unreachable block (ram,0x000100a00e84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a00e04(long param_1)

{
  param_1 = param_1 + _DAT_1127215e0;
  func_0x000107c61148(param_1);
  func_0x000107c3fa04();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a00e98; end: 100a0107f; -[SCConfigManagerBackgroundSyncEntryPoint _scheduleUpdatingJob:] */

/* WARNING: Possible PIC construction at 0x000100a00f24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a00f48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a01030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a01040: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a01050: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a01060: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a01054) */
/* WARNING: Removing unreachable block (ram,0x000100a01044) */
/* WARNING: Removing unreachable block (ram,0x000100a01034) */
/* WARNING: Removing unreachable block (ram,0x000100a00f4c) */
/* WARNING: Removing unreachable block (ram,0x000100a00f28) */
/* WARNING: Removing unreachable block (ram,0x000100a01064) */

void FUN_100a00e98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7238;
  func_0x000107c61160(PTR_PTR_1126b7238);
  func_0x000107c57f50();
  puVar2 = PTR_PTR_1126b7248;
  func_0x000107c61160(PTR_PTR_1126b7248);
  func_0x000107c57d34();
  func_0x000107c57c1c(puVar1,param_2,puVar2);
  puVar1 = PTR_PTR_1126b7240;
  func_0x000107c61160(PTR_PTR_1126b7240);
  func_0x000107c3de68();
  func_0x000107c61180();
  func_0x000107c3d93c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100a01080; end: 100a010b3;  */

void FUN_100a01080(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100a010b4; end: 100a010bf;  */

undefined ** FUN_100a010b4(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 100a010c0; end: 100a0114b;  */

void FUN_100a010c0(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100a0114c,param_1);
  return;
}



/* Entry: 100a0114c; end: 100a01153;  */

void FUN_100a0114c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014ba080);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a01154; end: 100a011d7;  */

void FUN_100a01154(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014ba080,param_2,FUN_100a011d8,param_2,&UNK_1014ba084,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a011d8; end: 100a011ff;  */

void FUN_100a011d8(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 100a01200; end: 100a01207;  */

void FUN_100a01200(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_50);
  FUN_1000934b4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  puVar2 = PTR_PTR_1126a73a0;
  func_0x000107c610f8();
  func_0x000107c615f0(uStack_50);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174(uStack_48);
  uVar4 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c615f0(uStack_50);
  func_0x000107c61174(uVar4);
  uVar5 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef85600);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(uStack_50);
  func_0x000107c61170(uVar5);
  func_0x000107c3e740(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(uStack_50);
  *param_1 = lVar1;
  return;
}



/* Entry: 100a01208; end: 100a01377;  */

void FUN_100a01208(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_1000934b4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  puVar1 = PTR_PTR_1126a73a0;
  func_0x000107c610f8();
  func_0x000107c615f0(uStack_50);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174(uStack_48);
  uVar3 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c615f0(uStack_50);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef85600);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(uStack_50);
  func_0x000107c61170(uVar4);
  func_0x000107c3e740(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uStack_50);
  *param_1 = param_2;
  return;
}



/* Entry: 100a01378; end: 100a013df; -[SCContextAwareTaskManagementSetupEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100a013ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a013b0) */

void FUN_100a01378(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6b20;
  func_0x000107c5a9f0(PTR_PTR_1126b6b20);
  func_0x000107c61180();
  func_0x000107c5cf5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100a013e0; end: 100a015bb;  */

/* WARNING: Possible PIC construction at 0x000100a01420: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a01450: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a01468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a01490: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a014c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a01508: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a01534: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a01578: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a01538) */
/* WARNING: Removing unreachable block (ram,0x000100a0150c) */
/* WARNING: Removing unreachable block (ram,0x000100a014c8) */
/* WARNING: Removing unreachable block (ram,0x000100a01494) */
/* WARNING: Removing unreachable block (ram,0x000100a014a0) */
/* WARNING: Removing unreachable block (ram,0x000100a0146c) */
/* WARNING: Removing unreachable block (ram,0x000100a01510) */
/* WARNING: Removing unreachable block (ram,0x000100a01470) */
/* WARNING: Removing unreachable block (ram,0x000100a01454) */
/* WARNING: Removing unreachable block (ram,0x000100a01424) */
/* WARNING: Removing unreachable block (ram,0x000100a01428) */
/* WARNING: Removing unreachable block (ram,0x000100a0157c) */
/* WARNING: Removing unreachable block (ram,0x000100a015a0) */
/* WARNING: Removing unreachable block (ram,0x000100a015a8) */

void FUN_100a013e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_2);
  puVar1 = PTR_PTR_1126ae520;
  func_0x000107c5a9bc(PTR_PTR_1126ae520);
  func_0x000107c61180();
  func_0x000107c44d90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100a015bc; end: 100a01663; -[SCApplicationState headlessMode] */

undefined1 FUN_100a015bc(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_100a01664;
  puStack_58 = &UNK_11084b9d0;
  lStack_50 = param_1;
  puStack_38 = puStack_48;
  func_0x000107c4b944(*(undefined8 *)(param_1 + 8),param_2,&puStack_70);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  func_0x000107c60bcc(&uStack_40,8);
  return uVar1;
}



/* Entry: 100a01664; end: 100a01677;  */

void FUN_100a01664(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x20);
  return;
}



/* Entry: 100a01678; end: 100a016b3; -[SCContextStateHandler _resetTimer] */

void FUN_100a01678(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x000107c60f80();
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 100a016b4; end: 100a016bf; -[SCTracer beginAsyncTraceAndStoreCookieID:] */

void FUN_100a016b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_100a016c0(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 100a016c0; end: 100a017a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a016c0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = unaff_x20 + _DAT_11309bf58;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    lVar3 = lVar1;
    func_0x000107c3e750();
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(uVar2);
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11309bf50);
      func_0x000107c6157c(uVar4);
      func_0x0001048d8e34(&uStack_48);
      uVar2 = uStack_48;
      func_0x000107c61558(uStack_48);
      uStack_50 = uStack_48;
      func_0x000101d813d8(lVar3,param_1,param_2,uVar2);
      func_0x0001048d8eac(&uStack_50);
      func_0x000107c61574(uVar4);
    }
  }
  return;
}



/* Entry: 100a017a8; end: 100a0180b; -[SCContextAwareAppStartupThrottleRequest initWithHotStartupRequest:] */

undefined1 * FUN_100a017a8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112706478;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined ***)((long)puVar1 + 8) = &PTR____CFConstantStringClassReference_110f62ff8;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0x10) = param_3;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100a0180c; end: 100a0189b; -[SCContextAwareQueuePerformerThrottler enqueueStartThrottlingRequest:] */

void FUN_100a0180c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x100a01990;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  func_0x000107c61174(param_3);
  FUN_10007380c(uVar1,&puStack_60);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100a0189c; end: 100a01927; -[SCContextAwareQueuePerformerThrottler appStartStateChanged:] */

void FUN_100a0189c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if (param_3 == 3) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    puStack_28 = &UNK_100c866dc;
    puStack_20 = &UNK_110842e18;
    lStack_18 = param_1;
    FUN_10007380c(*(undefined8 *)(param_1 + 0x18),&puStack_38);
  }
  return;
}



/* Entry: 100a01928; end: 100a0194f;  */

undefined ** FUN_100a01928(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 100a01950; end: 100a019ef;  */

void FUN_100a01950(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100a01934();
  FUN_100082720("SCDeferredDeepLinkStorageServiceProviderWrapperScopeInitializationPluginProvider",
                0x50,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100a019f0; end: 100a019f7;  */

void FUN_100a019f0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014b99e0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a019f8; end: 100a01a7b;  */

void FUN_100a019f8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014b99e0,param_2,&UNK_1014b99e4,param_2,&UNK_1014b9a0c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a01a7c; end: 100a01adf; -[SCContextAwareQueuePerformerThrottler _handleNextRequest] */

void FUN_100a01a7c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x000107c40808();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c4d9a0();
    func_0x000107c61180();
    func_0x000107c4ff84(*(undefined8 *)(param_1 + 0x10));
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar2;
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010be27bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleCurrentRequest_112567890);
  return;
}



/* Entry: 100a01ae0; end: 100a01c47; -[SCContextAwareQueuePerformerThrottler _handleCurrentRequest] */

undefined ** FUN_100a01ae0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lVar4 = 0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    ppuVar5 = *(undefined ***)(param_1 + 0x20);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar4);
    func_0x000107c61180();
    func_0x000107c4d9e8(ppuVar5,param_2,puVar1);
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    ppuVar2 = ppuVar5;
    func_0x000107c4080c(ppuVar5,param_2,&uStack_130,auStack_e8,0x10);
    if (ppuVar2 != (undefined **)0x0) {
      lVar7 = *plStack_120;
      do {
        ppuVar8 = (undefined **)0x0;
        do {
          if (*plStack_120 != lVar7) {
            func_0x000107c61128(ppuVar5);
          }
          uVar6 = *(undefined8 *)(lStack_128 + (long)ppuVar8 * 8);
          uVar3 = *(undefined8 *)(param_1 + 8);
          func_0x000107c5add8(uVar3,param_2,lVar4);
          if ((int)uVar3 == 0) {
            func_0x000107c5be8c(uVar6);
          }
          else {
            func_0x000107c5bbe4(uVar6);
          }
          ppuVar8 = (undefined **)((long)ppuVar8 + 1);
        } while (ppuVar2 != ppuVar8);
        ppuVar2 = ppuVar5;
        func_0x000107c4080c(ppuVar5,param_2,&uStack_130,auStack_e8,0x10);
      } while (ppuVar2 != (undefined **)0x0);
    }
    func_0x000107c61170(ppuVar5);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0xc);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return ppuVar5;
  }
  func_0x000107c60e78();
  return &PTR_DAT_113082b28;
}



/* Entry: 100a01c48; end: 100a01c6f;  */

undefined ** FUN_100a01c48(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 100a01c70; end: 100a01caf;  */

void FUN_100a01c70(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100a01c54();
  FUN_100082720("SCDeviceCheckServiceProviderWrapperScopeInitializationPluginProvider",0x44,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100a01cb0; end: 100a01cb7;  */

void FUN_100a01cb0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014a53f4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a01cb8; end: 100a01d3b;  */

void FUN_100a01cb8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014a53f4,param_2,&UNK_1014a53f8,param_2,&UNK_1014a5420,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a01d3c; end: 100a01d6f; -[SCContextAwareAppStartupThrottleRequest shouldThrottle:] */

bool FUN_100a01d3c(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 != 1;
}



/* Entry: 100a01d70; end: 100a01daf;  */

void FUN_100a01d70(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100a01d54();
  FUN_100082720("SCDiscoverFeedCardConversionServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x53,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100a01db0; end: 100a01e33;  */

void FUN_100a01db0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014bd1a0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a01e34; end: 100a01e5b;  */

undefined ** FUN_100a01e34(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 100a01e5c; end: 100a01e9b;  */

void FUN_100a01e5c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100a01e40();
  FUN_100082720("SCDurableDeviceIDLoggerServiceProviderWrapperScopeInitializationPluginProvider",
                0x4e,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100a01e9c; end: 100a01ea3;  */

void FUN_100a01e9c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014a5ae4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a01ea4; end: 100a01f27;  */

void FUN_100a01ea4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014a5ae4,param_2,&UNK_1014a5ae8,param_2,&UNK_1014a5b10,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a01f28; end: 100a01f9f; -[SCQueuePerformer startThrottling] */

void FUN_100a01f28(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1 + 0x44;
  func_0x000107c611ec();
  if ((*(char *)(param_1 + 0x40) == '\x01') && ((*(byte *)(param_1 + 0x41) & 1) == 0)) {
    FUN_100a01fa0();
    if (iVar1 == 0) {
      func_0x000107c3c58c(param_1,param_2,*(undefined4 *)(param_1 + 0x2c));
    }
    else {
      func_0x000107c60f90(*(undefined8 *)(param_1 + 0x10));
    }
    *(undefined1 *)(param_1 + 0x41) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x44);
  return;
}



/* Entry: 100a01fa0; end: 100a01fdb;  */

undefined8 FUN_100a01fa0(void)

{
  if (lRam00000001137fdf48 != -1) {
    FUN_10002a2fc(0x1137fdf48,&PTR___NSConcreteGlobalBlock_110d98a48);
  }
  return 0;
}



/* Entry: 100a01fdc; end: 100a01fdf;  */

void FUN_100a01fdc(void)

{
  return;
}



/* Entry: 100a01fe0; end: 100a02137; -[SCQueuePerformer _setNewQueueWithFixedQoS:] */

void FUN_100a01fe0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  func_0x000107c611e8(param_1 + 0x44);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c3ac4c();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c60f4c(uVar2,param_3,0);
  func_0x000107c61180();
  uVar3 = param_3 & 0xffffffff;
  func_0x000107c60f2c(uVar3,0);
  func_0x000107c61180();
  func_0x000107c60f54(uVar1,uVar2,uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c60f64(uVar1,&UNK_10e6045a8,*(undefined4 *)(param_1 + 0x18),0);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x100a02404;
  puStack_50 = &UNK_110842e18;
  func_0x000107c61174(uVar1);
  uVar2 = 0x20;
  uStack_48 = uVar1;
  FUN_1000c5568(0x20,param_3,0,&puStack_68);
  if (*(long *)(param_1 + 0x20) == 0) {
    func_0x000107c60f90(uVar1);
    FUN_10007380c(*(undefined8 *)(param_1 + 0x10),uVar2);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  func_0x000107c61174(uVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 100a02138; end: 100a0215f;  */

undefined ** FUN_100a02138(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 100a02160; end: 100a0219f;  */

void FUN_100a02160(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100a02144();
  FUN_100082720("SCDynamicCdnServiceProviderWrapperScopeInitializationPluginProvider",0x43,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100a021a0; end: 100a021a7;  */

void FUN_100a021a0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014ac4ac);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a021a8; end: 100a0222b;  */

void FUN_100a021a8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014ac4ac,param_2,&UNK_1014ac4b0,param_2,&UNK_1014ac4d8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a0222c; end: 100a02237;  */

undefined ** FUN_100a0222c(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 100a02238; end: 100a022c3;  */

void FUN_100a02238(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100a022c4,param_1);
  return;
}



/* Entry: 100a022c4; end: 100a022cb;  */

void FUN_100a022c4(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a7290;
  func_0x000107c61168();
  func_0x000107c3e370();
  func_0x000107c61180();
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  FUN_1005d8744(puVar1,&UNK_1014af7bc);
  *param_1 = puVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a022cc; end: 100a0236f;  */

void FUN_100a022cc(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a7290;
  func_0x000107c61168();
  func_0x000107c3e370();
  func_0x000107c61180();
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  FUN_1005d8744(puVar1,&UNK_1014af7bc,param_2,&UNK_1014af7c0,param_2,&UNK_1014af7e8,param_2);
  *param_1 = puVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a02370; end: 100a023fb; +[SCExtensionShakeToReportInfoProviderEntryPoint attributedTask] */

void FUN_100a02370(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126b7498;
  puVar3 = PTR_PTR_1126ae960;
  puVar1 = PTR_PTR_1126b74a0;
  func_0x000107c42c60(PTR_PTR_1126b74a0);
  func_0x000107c61180();
  func_0x000107c5a918(puVar2,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c3ddd0(puVar3,param_2,puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100a023fc; end: 100a02433; +[SCAttributedShakeToReportSubtask extensionInfoProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a023fc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309abe0) = 4;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a02434; end: 100a02473;  */

void FUN_100a02434(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100a02418();
  FUN_100082720("SCFideliusClientInitEntryPointWrapperScopeInitializationPluginProvider",0x46,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100a02474; end: 100a024f7;  */

void FUN_100a02474(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014b4cf0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a024f8; end: 100a02503;  */

undefined ** FUN_100a024f8(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 100a02504; end: 100a0258f;  */

void FUN_100a02504(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100a02590,param_1);
  return;
}



/* Entry: 100a02590; end: 100a02597;  */

void FUN_100a02590(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014ba4a8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a02598; end: 100a0261b;  */

void FUN_100a02598(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014ba4a8,param_2,FUN_100a0261c,param_2,&UNK_1014ba4ac,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a0261c; end: 100a02643;  */

void FUN_100a0261c(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 100a02644; end: 100a02653;  */

void FUN_100a02644(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_10009ebc8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  puVar2 = PTR_PTR_1126a73a8;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar9 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  uVar10 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef17080);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar10);
  uVar9 = 0x5370757472617473;
  func_0x000107c5fadc(0x5370757472617473,0xef73656369767265);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  uVar10 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010ef85db0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c3e740(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *param_1 = lVar1;
  return;
}



/* Entry: 100a02654; end: 100a02a13;  */

void FUN_100a02654(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_10009ebc8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  puVar1 = PTR_PTR_1126a73a8;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef17080);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar9);
  uVar8 = 0x5370757472617473;
  func_0x000107c5fadc(0x5370757472617473,0xef73656369767265);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010ef85db0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c3e740(uVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *param_1 = param_2;
  return;
}



/* Entry: 100a02a14; end: 100a02a9f; -[SCFinishLaunchLoggingEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100a02a80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a02a84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a02a14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b6ae8;
  func_0x000107c5a9f0(PTR_PTR_1126b6ae8);
  func_0x000107c61180();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112761fe4;
    func_0x000107c61148(lVar2);
  }
  func_0x000107c5bcac(lVar2);
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4f2bc();
  func_0x000107c4c4d4(puVar1,param_2,(uint)lVar3 ^ 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100a02aa0; end: 100a02aab; -[SCFeatureSettingsService addedFriendsTimestampServerParam] */

undefined ** FUN_100a02aa0(void)

{
  return &PTR____CFConstantStringClassReference_110eeecb8;
}



/* Entry: 100a02aac; end: 100a02b63; -[SCIdleMonitorV1 markEndOfBackgroundLaunch:] */

void FUN_100a02aac(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x000107c6111c(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x000107c4e590(uVar1);
  func_0x000107c61120(auStack_48);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 100a02b64; end: 100a02bc7;  */

/* WARNING: Possible PIC construction at 0x000100a02bb4: Changing call to branch */

void FUN_100a02b64(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  func_0x000107c61148();
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x28) == '\x01') {
      *(undefined8 *)(lVar1 + 0x50) = 1;
      func_0x000107c3c47c(lVar1);
    }
    else {
      *(undefined8 *)(lVar1 + 0x50) = 2;
      lVar2 = *(long *)(lVar1 + 0x40);
      *(undefined8 *)(lVar1 + 0x40) = 0;
      lVar1 = lVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100a02bc8; end: 100a02c13;  */

void FUN_100a02bc8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100a02c14; end: 100a02c1f;  */

undefined ** FUN_100a02c14(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 100a02c20; end: 100a02cab;  */

void FUN_100a02c20(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100a02cac,param_1);
  return;
}



/* Entry: 100a02cac; end: 100a02cb3;  */

void FUN_100a02cac(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014b49b0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}


